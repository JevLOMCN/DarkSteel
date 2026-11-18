// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 53

// <lambda_invoker_cdecl> @ 144569350

void __cdecl
`UE::IoStore::HTTP::HttpTest'::__l34::<lambda_10>::<lambda_invoker_cdecl>(FTicketStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(*param_1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      break;
    }
    uVar3 = UE::IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_1);
    if ((uVar3 != 0x1af) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetStatusCode() == 431",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x330,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// <lambda_invoker_cdecl> @ 144569440

void __cdecl
`UE::IoStore::HTTP::SeedHttp'::__l2::<lambda_1>::<lambda_invoker_cdecl>(FTicketStatus *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 1445695a0

void __cdecl
`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_3>::<lambda_invoker_cdecl>(FTicketStatus *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 1445695e0

void __cdecl
`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_8>::<lambda_invoker_cdecl>(FTicketStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  switch(*param_1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() == FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x2e9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// EnumerateHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&> @ 14456a210

void __cdecl
UE::IoStore::HTTP::EnumerateHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
          (TStringView<char> *param_1,
          TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_2)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  char *local_28;
  undefined8 uStack_20;
  char *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  pcVar8 = local_18 + param_1->Size;
  while( true ) {
    iVar9 = 0;
    pcVar4 = local_18;
    for (pcVar6 = local_18; (pcVar4 < pcVar8 && (*pcVar6 != ':')); pcVar6 = pcVar6 + 1) {
      iVar9 = iVar9 + 1;
      pcVar4 = local_18 + iVar9;
    }
    local_28 = local_18 + (longlong)iVar9 + 1;
    pcVar6 = local_28 + 1;
    pcVar4 = local_28;
    if (pcVar6 < pcVar8) break;
LAB_14456a36a:
    local_18 = pcVar4 + 2;
    if (pcVar8 <= local_18) {
      return;
    }
  }
LAB_14456a270:
  if ((*pcVar4 != '\r') || (*pcVar6 != '\n')) goto LAB_14456a27a;
  if (*local_28 == ' ' || *local_28 == '\t') {
    do {
      local_28 = local_28 + 1;
    } while (*local_28 == ' ' || *local_28 == '\t');
  }
  pcVar6 = pcVar4;
  do {
    pcVar2 = pcVar6;
    if (pcVar2 <= local_28 + 1) break;
    pcVar6 = pcVar2 + -1;
  } while (*pcVar6 == ' ' || *pcVar6 == '\t');
  uStack_10 = CONCAT44(uStack_2c,iVar9);
  uStack_20 = CONCAT44(uStack_3c,(int)pcVar2 - (int)local_28);
  Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar7 = *(longlong **)&param_2->field_0x28;
  if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
    plVar7 = (longlong *)&param_2->field_0x10;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  cVar3 = (*pcVar1)(uVar5,&local_18,&local_28);
  if (cVar3 == '\0') {
    pcVar4 = pcVar8;
  }
  goto LAB_14456a36a;
LAB_14456a27a:
  pcVar4 = pcVar4 + (ulonglong)(*pcVar6 != '\r') + 1;
  pcVar6 = pcVar4 + 1;
  if (pcVar8 <= pcVar6) goto LAB_14456a36a;
  goto LAB_14456a270;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FPollFd>_> @ 14456a6d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FPollFd>_>
          (ushort param_1,ForElementType<UE::IoStore::HTTP::FPollFd> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0x40 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0x40;
  return iVar4;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FWaiter>_> @ 14456a740

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FWaiter>_>
          (ushort param_1,ForElementType<UE::IoStore::HTTP::FWaiter> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0x40 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0x40;
  return iVar4;
}

// ReallocShrink<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FWaiter>_> @ 14456a7b0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<64>::ForElementType<UE::IoStore::HTTP::FWaiter>_>
          (uint param_1,uint param_2,ForElementType<UE::IoStore::HTTP::FWaiter> *param_3,int param_4
          ,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x40 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x40) {
    *param_5 = 0x40;
  }
  return;
}

// operator() @ 14456c330

void __thiscall
`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>::operator()(void *this,FTicketStatus *param_1)

{
  int *piVar1;
  int iVar2;
  FTicketStatus FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  FIoBuffer *pFVar8;
  uint uVar9;
  FIoBuffer local_res18 [2];
  
  FVar3 = *param_1;
  uVar7 = 1L << ((byte)param_1[0xa0] & 0x3f);
  lVar4 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar9 = (uint)lVar4;
  if (uVar7 == 0) {
    uVar9 = 0xffffffff;
  }
  switch(FVar3) {
  default:
    **(ulonglong **)this = **(ulonglong **)this | 1L << ((ulonglong)uVar9 & 0x3f);
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar3) {
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(FVar3) {
      case (FTicketStatus)0x1:
      case (FTicketStatus)0x2:
        goto switchD_14456c38e_caseD_a;
      }
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x10:
    case (FTicketStatus)0x11:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
switchD_14456c38e_caseD_a:
      pFVar8 = FIoBuffer::FIoBuffer(local_res18);
      FIoBuffer::operator=
                ((FIoBuffer *)(*(longlong *)((longlong)this + 8) + (ulonglong)uVar9 * 0x10),pFVar8);
      if (local_res18[0].CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res18[0].CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_res18[0].CorePtr.Reference + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_res18[0].CorePtr.Reference);
          ::operator_delete((void *)local_res18[0].CorePtr.Reference,0x20);
        }
      }
      *(ulonglong *)(param_1 + 0x38) = *(longlong *)((longlong)this + 8) + (ulonglong)uVar9 * 0x10;
      return;
    }
  case (FTicketStatus)0x7:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x358,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// operator() @ 14456c4f0

void __thiscall `UE::IoStore::HTTP::HttpTest'::__l54::<lambda_13>::operator()(void *this)

{
  undefined8 *puVar1;
  FEventLoop *this_00;
  float fVar2;
  FActivityNode *pFVar3;
  ulong64 uVar4;
  int iVar5;
  FActivityNode *pFVar6;
  FRequestParams *pFVar7;
  FRequest local_res8;
  undefined4 uStack_bc;
  FParams local_b8;
  TStringView<char> local_78;
  code *local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  fVar2 = __real_3c23d70a;
  puVar1 = *(undefined8 **)this;
  pFVar6 = (FActivityNode *)0x0;
  if (*(int *)*puVar1 != 0) {
    do {
      iVar5 = (int)pFVar6;
      this_00 = (FEventLoop *)puVar1[1];
      local_40 = 0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::
                  _vftable_;
      local_50 = *(undefined8 *)puVar1[4];
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                    ::Call;
      local_b8._padding_ = 0;
      local_b8._padding_ = 0;
      local_b8._padding_ = CONCAT44(uStack_bc,3);
      pFVar7 = &UE::IoStore::HTTP::GDefaultParams;
      if (*(FRequestParams **)puVar1[3] != (FRequestParams *)0x0) {
        pFVar7 = *(FRequestParams **)puVar1[3];
      }
      local_b8._padding_ = 0;
      local_b8._padding_._0_4_ = 0;
      local_b8._padding_._6_1_ = 0;
      local_b8._padding_ = 0x150d74d54;
      local_b8._padding_._4_2_ = pFVar7->BufferSize;
      local_b8.bFollow30x = pFVar7->bAutoRedirect == true;
      local_b8._padding_._0_4_ = pFVar7->ContentSizeEst;
      local_b8._padding_._7_1_ = pFVar7->bAllowChunked == true;
      local_b8.HttpVersion = pFVar7->HttpVersion;
      local_78.DataPtr = *(char **)puVar1[2];
      local_78._8_8_ = ((undefined8 *)puVar1[2])[1];
      pFVar3 = UE::IoStore::HTTP::FActivityNode::Create(&local_b8,&local_78,pFVar7->VerifyCert);
      pFVar6 = (FActivityNode *)0x0;
      if (pFVar3 != (FActivityNode *)0x0) {
        UE::IoStore::HTTP::Trace((FActivity *)pFVar3,ActivityCreate,0);
        pFVar6 = pFVar3;
      }
      local_res8.Ptr = pFVar6;
      uVar4 = UE::IoStore::HTTP::FEventLoop::Send
                        (this_00,&local_res8,
                         (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                         local_68,0);
      if (local_res8.Ptr != (FActivityNode *)0x0) {
        UE::IoStore::HTTP::FActivityNode::Destroy(local_res8.Ptr);
      }
      if (uVar4 == 0) {
        FWindowsPlatformProcess::SleepNoStats(fVar2);
        iVar5 = iVar5 + -1;
      }
      pFVar6 = (FActivityNode *)(ulonglong)(iVar5 + 1U);
    } while (iVar5 + 1U < *(uint *)*puVar1);
  }
  return;
}

// operator() @ 14456c7f0

TStringBuilderBase<char> * __thiscall
`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(void *this,char *param_1,uint param_2)

{
  TStringBuilderBase<char> *pTVar1;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  char *_Str;
  
  if (param_2 == 0) {
    param_2 = **(uint **)this;
  }
  _Str = "http://";
  (*(undefined8 **)((longlong)this + 8))[1] = **(undefined8 **)((longlong)this + 8);
  pTVar1 = *(TStringBuilderBase<char> **)((longlong)this + 8);
  if (param_2 == 0x134b) {
    _Str = "https://";
  }
  sVar2 = strlen(_Str);
  uVar4 = (ulong64)(int)sVar2;
  if (pTVar1->End < pTVar1->CurPos + uVar4) {
    TStringBuilderBase<char>::Extend(pTVar1,uVar4);
  }
  if ((int)sVar2 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(pTVar1->CurPos,_Str,uVar4);
    pTVar1->CurPos = (char *)((longlong)pvVar3 + uVar4);
  }
  operator<<<char,char_const_*_&>
            (*(TStringBuilderBase<char> **)((longlong)this + 8),*(char ***)((longlong)this + 0x10));
  pTVar1 = *(TStringBuilderBase<char> **)((longlong)this + 8);
  if (pTVar1->End < pTVar1->CurPos + 1) {
    TStringBuilderBase<char>::Extend(pTVar1,1);
  }
  pvVar3 = FGenericPlatformString::Memcpy(pTVar1->CurPos,&s__,1);
  pTVar1->CurPos = (char *)((longlong)pvVar3 + 1);
  TStringBuilderBase<char>::AppendfImpl(pTVar1,"%u");
  pTVar1 = *(TStringBuilderBase<char> **)((longlong)this + 8);
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    uVar4 = (ulong64)(int)sVar2;
    if (pTVar1->End < pTVar1->CurPos + uVar4) {
      TStringBuilderBase<char>::Extend(pTVar1,uVar4);
    }
    if ((int)sVar2 != 0) {
      pvVar3 = FGenericPlatformString::Memcpy(pTVar1->CurPos,param_1,uVar4);
      pTVar1->CurPos = (char *)((longlong)pvVar3 + uVar4);
    }
  }
  return pTVar1;
}

// operator() @ 14456cef0

void __thiscall
`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>::operator()(void *this,FTicketStatus *param_1)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  FVar1 = *param_1;
  switch(FVar1) {
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x7:
switchD_14456cf1f_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    case (FTicketStatus)0x3:
    case (FTicketStatus)0x4:
    case (FTicketStatus)0x5:
      goto switchD_14456cf7b_caseD_3;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      *(longlong *)(param_1 + 0x38) = (longlong)this + 8;
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x10:
    case (FTicketStatus)0x11:
      break;
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
      goto switchD_14456cf7b_caseD_3;
    }
  case (FTicketStatus)0x8:
    if ((byte)FVar1 < 9) goto switchD_14456cf1f_caseD_0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Status.GetId() == FTicketStatus::EId::Content",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                     ,0x19b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
switchD_14456cf7b_caseD_3:
  iVar4 = 0;
  pcVar5 = (char *)**(undefined8 **)((longlong)this + 8);
  pcVar6 = pcVar5 + *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  for (; (pcVar5 != pcVar6 && ((int)*pcVar5 - 0x30U < 10)); pcVar5 = pcVar5 + 1) {
    iVar4 = ((int)*pcVar5 - 0x30U) + iVar4 * 10;
  }
  **(int **)this = iVar4;
  return;
}

// operator() @ 14456d060

FIoBuffer * __thiscall
`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>::operator()(void *this,FTicketStatus *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  EStatusCodeClass EVar7;
  uint uVar8;
  FIoBuffer *pFVar9;
  ulonglong uVar10;
  FTransactRef *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  char *local_a8;
  int local_a0;
  FIoBuffer local_90;
  char *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong local_68 [3];
  longlong *local_50;
  char **local_48;
  char *pcStack_40;
  undefined8 uStack_38;
  
  switch(*param_1) {
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x237,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    break;
  }
  uVar18 = (ulonglong)(uint)(int)(char)param_1[0xa0];
  switch(*param_1) {
  default:
    uVar16 = 0x493;
    plVar12 = *(longlong **)(*(longlong *)this + uVar18 * 0x10);
    lVar17 = plVar12[3];
    lVar5 = plVar12[1];
    lVar13 = *plVar12;
    uVar8 = UE::IoStore::HTTP::FTicketStatus::GetContentLength(param_1);
    if (((ulonglong)CONCAT14((char)lVar17,(int)lVar5) != (ulonglong)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContentView.GetSize() == Status.GetContentLength()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x24d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    uVar10 = 0;
    uVar8 = UE::IoStore::HTTP::FTicketStatus::GetContentLength(param_1);
    if (uVar8 != 0) {
      do {
        pbVar2 = (byte *)(uVar10 + lVar13);
        uVar15 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar15;
        uVar16 = (*pbVar2 + uVar16) * 0x493;
        uVar8 = UE::IoStore::HTTP::FTicketStatus::GetContentLength(param_1);
      } while (uVar15 < uVar8);
    }
    if ((*(ulonglong *)(*(longlong *)this + 8 + uVar18 * 0x10) != (ulonglong)uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Content[Index].Hash == ReceivedHash",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x253,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    *(undefined8 *)(*(longlong *)this + 8 + uVar18 * 0x10) = 0;
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FIoBuffer *)(*pcVar4)();
        return pFVar9;
      }
      break;
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      break;
    }
    EVar7 = UE::IoStore::HTTP::FResponse::GetStatus((FResponse *)param_1);
    if ((EVar7 != Successful) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetStatus() == EStatusCodeClass::Successful",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x23e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    uVar8 = UE::IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_1);
    if ((uVar8 != 200) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetStatusCode() == 200",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x23f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    uVar8 = UE::IoStore::HTTP::FTicketStatus::GetContentLength(param_1);
    uVar10 = UE::IoStore::HTTP::FResponse::GetContentLength((FResponse *)param_1);
    if ((uVar10 != uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetContentLength() == Status.GetContentLength()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x240,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    uStack_80 = 0x11;
    local_88 = "X-TestServer-Hash";
    uStack_38 = CONCAT44(uStack_7c,0x11);
    local_48 = &local_a8;
    local_a8 = (char *)0x0;
    local_a0 = 0;
    pcStack_40 = "X-TestServer-Hash";
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x20,8);
    local_50[1] = (longlong)local_48;
    local_50[2] = (longlong)pcStack_40;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_50[3] = CONCAT44(uStack_7c,uStack_80);
    if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                    ::Call;
    }
    pFVar11 = UE::IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_1);
    UE::IoStore::HTTP::FTransaction::
    ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
              ((FTransaction *)pFVar11->Self,
               (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      plVar12 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar12 = local_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    lVar13 = -0x8000000000000000;
    for (pcVar14 = local_a8; (pcVar14 != local_a8 + local_a0 && ((int)*pcVar14 - 0x30U < 10));
        pcVar14 = pcVar14 + 1) {
      lVar13 = (ulonglong)((int)*pcVar14 - 0x30U) + lVar13 * 10;
    }
    lVar17 = uVar18 * 0x10;
    *(longlong *)(lVar17 + 8 + *(longlong *)this) = lVar13;
    if ((*(longlong *)(lVar17 + 8 + *(longlong *)this) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("int64(Content[Index].Hash) > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x244,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar4)();
      return pFVar9;
    }
    pFVar9 = FIoBuffer::FIoBuffer(&local_90);
    FIoBuffer::operator=((FIoBuffer *)(*(longlong *)this + lVar17),pFVar9);
    if (local_90.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_90.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_90.CorePtr.Reference + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_90.CorePtr.Reference);
        ::operator_delete((void *)local_90.CorePtr.Reference,0x20);
      }
    }
    *(longlong *)(param_1 + 0x38) = *(longlong *)this + lVar17;
  }
  return (FIoBuffer *)0x0;
}

// operator() @ 14456d4c0

void __thiscall
`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>::operator()(void *this,FTicketStatus *param_1)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  EStatusCodeClass EVar4;
  
  switch(*param_1) {
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0xfc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    break;
  }
  FVar1 = *param_1;
  switch(FVar1) {
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x7:
switchD_14456d531_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    case (FTicketStatus)0x3:
    case (FTicketStatus)0x4:
    case (FTicketStatus)0x5:
      goto switchD_14456d5be_caseD_3;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      EVar4 = UE::IoStore::HTTP::FResponse::GetStatus((FResponse *)param_1);
      if ((EVar4 != Successful) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatus() == EStatusCodeClass::Successful",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(void **)(param_1 + 0x38) = this;
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x10:
    case (FTicketStatus)0x11:
      break;
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
      goto switchD_14456d5be_caseD_3;
    }
  case (FTicketStatus)0x8:
    if ((byte)FVar1 < 9) goto switchD_14456d531_caseD_0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Status.GetId() == FTicketStatus::EId::Content",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                     ,0x104,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
switchD_14456d5be_caseD_3:
  return;
}

// operator() @ 14456d690

void __thiscall
`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>::operator()(void *this,FTicketStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  switch(*param_1) {
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x3d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    break;
  }
  switch(*param_1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      break;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)this;
  }
  return;
}

// operator() @ 14456d7c0

TStringView<char> * __thiscall
`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_3>::operator()
          (void *this,TStringView<char> *__return_storage_ptr__,int param_1,
          TStringView<char> *param_2)

{
  char *_Str;
  void *pvVar1;
  size_t sVar2;
  TStringBuilderBase<char> *pTVar3;
  char *pcVar4;
  int iVar5;
  ulong64 uVar6;
  
  (*(undefined8 **)this)[1] = **(undefined8 **)this;
  pTVar3 = *(TStringBuilderBase<char> **)this;
  pcVar4 = pTVar3->CurPos;
  if (pTVar3->End < pcVar4 + 7) {
    TStringBuilderBase<char>::Extend(pTVar3,7);
    pcVar4 = pTVar3->CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(pcVar4,"http://",7);
  iVar5 = 0;
  pcVar4 = (char *)((longlong)pvVar1 + 7);
  pTVar3->CurPos = pcVar4;
  _Str = *(char **)((longlong)this + 8);
  if (_Str != (char *)0x0) {
    sVar2 = strlen(_Str);
    iVar5 = (int)sVar2;
  }
  uVar6 = (ulong64)iVar5;
  if (pTVar3->End < pcVar4 + uVar6) {
    TStringBuilderBase<char>::Extend(pTVar3,uVar6);
    pcVar4 = pTVar3->CurPos;
  }
  if (iVar5 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy(pcVar4,_Str,uVar6);
    pcVar4 = (char *)((longlong)pvVar1 + uVar6);
    pTVar3->CurPos = pcVar4;
  }
  if (pTVar3->End < pcVar4 + 1) {
    TStringBuilderBase<char>::Extend(pTVar3,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(pTVar3->CurPos,&s__,1);
  pTVar3->CurPos = (char *)((longlong)pvVar1 + 1);
  pTVar3 = TStringBuilderBase<char>::AppendfImpl(pTVar3,"%d");
  if (pTVar3->End < pTVar3->CurPos + 9) {
    TStringBuilderBase<char>::Extend(pTVar3,9);
  }
  pvVar1 = FGenericPlatformString::Memcpy(pTVar3->CurPos,"/chunked/",9);
  pTVar3->CurPos = (char *)((longlong)pvVar1 + 9);
  pTVar3 = TStringBuilderBase<char>::AppendfImpl(pTVar3,"%d");
  operator<<<char,TStringView<char>_&>(pTVar3,param_2);
  pcVar4 = (char *)**(undefined8 **)this;
  iVar5 = *(int *)(*(undefined8 **)this + 1);
  __return_storage_ptr__->DataPtr = pcVar4;
  __return_storage_ptr__->Size = iVar5 - (int)pcVar4;
  return __return_storage_ptr__;
}

// operator() @ 14456d960

void __thiscall
`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>::operator()(void *this,FTicketStatus *param_1)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)((longlong)this + 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status.GetParam() == SinkParam",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                         ,0x13b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  switch(*param_1) {
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x13c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    break;
  }
  FVar1 = *param_1;
  switch(FVar1) {
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x7:
switchD_14456d9ff_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    case (FTicketStatus)0x3:
    case (FTicketStatus)0x4:
    case (FTicketStatus)0x5:
      goto switchD_14456da8e_caseD_3;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      uVar4 = UE::IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_1);
      if ((uVar4 != 200) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatusCode() == 200",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x140,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(void **)(param_1 + 0x38) = this;
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x10:
    case (FTicketStatus)0x11:
      break;
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
      goto switchD_14456da8e_caseD_3;
    }
  case (FTicketStatus)0x8:
    if ((byte)FVar1 < 9) goto switchD_14456d9ff_caseD_0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Status.GetId() == FTicketStatus::EId::Content",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                     ,0x144,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
switchD_14456da8e_caseD_3:
  **(int **)((longlong)this + 0x10) =
       **(int **)((longlong)this + 0x10) + *(int *)(*(longlong *)this + 8);
  return;
}

// operator() @ 14456db70

void __thiscall
`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>::operator()(void *this,FTicketStatus *param_1)

{
  int *piVar1;
  byte *pbVar2;
  FTicketStatus FVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  EStatusCodeClass EVar8;
  uint uVar9;
  FTransactRef *pFVar10;
  FIoBuffer *pFVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  char *local_108;
  int local_100;
  char *local_f8;
  int local_f0;
  FIoBuffer local_e0;
  char *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [3];
  longlong *local_90;
  code *local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  char **local_58;
  char *pcStack_50;
  undefined8 uStack_48;
  char **local_40;
  char *pcStack_38;
  undefined8 uStack_30;
  
  FVar3 = *param_1;
  switch(FVar3) {
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar3) {
    case (FTicketStatus)0x3:
    case (FTicketStatus)0x4:
    case (FTicketStatus)0x5:
switchD_14456dead_caseD_3:
      plVar13 = *(longlong **)((longlong)this + 0x10);
      lVar6 = plVar13[3];
      uVar9 = *(uint *)(plVar13 + 1);
      uVar16 = (ulonglong)uVar9;
      lVar4 = *plVar13;
      *(uint *)this = *(int *)this + uVar9;
      if (uVar9 != 0) {
        iVar12 = *(int *)((longlong)this + 4);
        lVar17 = 0;
        do {
          pbVar2 = (byte *)(lVar4 + lVar17);
          lVar17 = lVar17 + 1;
          iVar12 = ((uint)*pbVar2 + iVar12) * 0x493;
          *(int *)((longlong)this + 4) = iVar12;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (CONCAT14((char)lVar6,uVar9) == 0) {
        if ((*(int *)((longlong)this + 4) != *(int *)((longlong)this + 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.Hash == State.ExpectedHash",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                               ,0x1cd,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(int *)this != *(int *)((longlong)this + 0xc)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.Size == State.ExpectedSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                               ,0x1ce,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      return;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar3) {
    default:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      EVar8 = UE::IoStore::HTTP::FResponse::GetStatus((FResponse *)param_1);
      if ((EVar8 != Successful) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatus() == EStatusCodeClass::Successful",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x1b4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = UE::IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_1);
      if ((uVar9 != 200) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatusCode() == 200",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x1b5,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_d0 = 0x11;
      local_108 = (char *)0x0;
      local_d8 = "X-TestServer-Hash";
      uStack_48 = CONCAT44(uStack_cc,0x11);
      local_58 = &local_108;
      local_100 = 0;
      pcStack_50 = "X-TestServer-Hash";
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x20,8);
      local_90[1] = (longlong)local_58;
      local_90[2] = (longlong)pcStack_50;
      *local_90 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_90[3] = CONCAT44(uStack_cc,uStack_d0);
      if (local_90 != (longlong *)&DAT_fffffffffffffff8) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                      ::Call;
      }
      pFVar10 = UE::IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_1);
      UE::IoStore::HTTP::FTransaction::
      ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
                ((FTransaction *)pFVar10->Self,
                 (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_b8);
      if (local_b8[0] != (code *)0x0) {
        plVar13 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar13 = local_90;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      iVar18 = 0;
      iVar12 = 0;
      for (pcVar15 = local_108; (pcVar15 != local_108 + local_100 && ((int)*pcVar15 - 0x30U < 10));
          pcVar15 = pcVar15 + 1) {
        iVar12 = ((int)*pcVar15 - 0x30U) + iVar12 * 10;
      }
      *(int *)((longlong)this + 8) = iVar12;
      local_c8 = "X-TestServer-Size";
      local_40 = &local_f8;
      uStack_c0 = 0x11;
      uStack_30 = CONCAT44(uStack_bc,0x11);
      local_f8 = (char *)0x0;
      local_f0 = 0;
      pcStack_38 = "X-TestServer-Size";
      local_88[0] = (code *)0x0;
      local_60 = FMemory::Malloc(0x20,8);
      *local_60 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_60[1] = (longlong)local_40;
      local_60[2] = (longlong)pcStack_38;
      local_60[3] = CONCAT44(uStack_bc,uStack_c0);
      if (local_60 + 1 != (longlong *)0x0) {
        local_88[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                      ::Call;
      }
      pFVar10 = UE::IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_1);
      UE::IoStore::HTTP::FTransaction::
      ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
                ((FTransaction *)pFVar10->Self,
                 (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_88);
      if (local_88[0] != (code *)0x0) {
        plVar13 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar13 = local_60;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      for (pcVar15 = local_f8; (pcVar15 != local_f8 + local_f0 && ((int)*pcVar15 - 0x30U < 10));
          pcVar15 = pcVar15 + 1) {
        iVar18 = ((int)*pcVar15 - 0x30U) + iVar18 * 10;
      }
      uVar9 = *(uint *)((longlong)this + 8) & 0x3f;
      *(int *)((longlong)this + 0xc) = iVar18;
      uVar14 = uVar9 / 7;
      pFVar11 = FIoBuffer::FIoBuffer
                          (&local_e0,(ulonglong)(((uVar9 - uVar14 >> 1) + uVar14 >> 2) * 0x43));
      FIoBuffer::operator=((FIoBuffer *)((longlong)this + 0x10),pFVar11);
      if (local_e0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_e0.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_e0.CorePtr.Reference + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_e0.CorePtr.Reference);
          ::operator_delete((void *)local_e0.CorePtr.Reference,0x20);
        }
      }
      *(FIoBuffer **)(param_1 + 0x38) = (FIoBuffer *)((longlong)this + 0x10);
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x10:
    case (FTicketStatus)0x11:
      break;
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
      goto switchD_14456dead_caseD_3;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Status.GetId() == FTicketStatus::EId::Content",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                     ,0x1c1,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  goto switchD_14456dead_caseD_3;
}

// operator() @ 14456e000

void __thiscall
`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>::operator()(void *this,FTicketStatus *param_1)

{
  int *piVar1;
  int iVar2;
  FTicketStatus FVar3;
  code *pcVar4;
  bool bVar5;
  FResponse *pFVar6;
  FIoBuffer *pFVar7;
  FIoBuffer local_res18 [2];
  
  switch(*param_1) {
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x7:
    break;
  }
  switch(*param_1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    FVar3 = param_1[0xa0];
    pFVar6 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
    pFVar7 = FIoBuffer::FIoBuffer(local_res18);
    FIoBuffer::operator=
              ((FIoBuffer *)(*(longlong *)this + (ulonglong)(uint)(int)(char)FVar3 * 0x10),pFVar7);
    if (local_res18[0].CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res18[0].CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_res18[0].CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_res18[0].CorePtr.Reference);
        ::operator_delete((void *)local_res18[0].CorePtr.Reference,0x20);
      }
    }
    *(ulonglong *)(pFVar6 + 0x38) = *(longlong *)this + (ulonglong)(uint)(int)(char)FVar3 * 0x10;
  }
  return;
}

// operator() @ 14456e140

void __thiscall
`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>::operator()(void *this,FTicketStatus *param_1)

{
  FTicketStatus FVar1;
  char *_Str;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FError *pFVar5;
  size_t sVar6;
  uint uVar7;
  uchar *puVar9;
  int iVar10;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  TStringView<char8_t> local_78;
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  TStringView<char8_t> local_28;
  FError local_18;
  uint uVar8;
  
  FVar1 = *param_1;
  switch(FVar1) {
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x7:
    goto switchD_14456e173_caseD_0;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      *(longlong *)(param_1 + 0x38) = (longlong)this + 8;
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x11:
      goto switchD_14456e173_default;
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
    case (FTicketStatus)0x10:
      goto switchD_14456e1d6_caseD_1;
    }
  case (FTicketStatus)0x8:
    if (8 < (byte)FVar1) goto switchD_14456e173_default;
switchD_14456e173_caseD_0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    case (FTicketStatus)0x0:
    case (FTicketStatus)0x6:
    case (FTicketStatus)0x8:
      goto switchD_14456e173_default;
    default:
switchD_14456e1d6_caseD_1:
      return;
    }
  default:
switchD_14456e173_default:
    pFVar5 = UE::IoStore::HTTP::FTicketStatus::GetError(param_1,&local_18);
    _Str = pFVar5->Reason;
    iVar4 = 0;
    if (_Str != (char *)0x0) {
      sVar6 = strlen(_Str);
      iVar4 = (int)sVar6;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    local_78._12_4_ = uStack_cc;
    local_78.Size = 8;
    puVar9 = (uchar *)(_Str + ((longlong)iVar4 - (longlong)iVar10));
    local_78.DataPtr = "ERRTRAIL";
    local_68._12_4_ = uStack_bc;
    local_68.Size = iVar10;
    local_68.DataPtr = puVar9;
    iVar4 = UE::String::FindFirst(&local_68,&local_78,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    local_48._12_4_ = uStack_9c;
    local_48.Size = iVar10;
    **(uint **)this = **(uint **)this | (uint)(iVar4 != -1);
    local_58._12_4_ = uStack_ac;
    local_58.Size = 10;
    local_58.DataPtr = "ERRNOCHUNK";
    local_48.DataPtr = puVar9;
    iVar4 = UE::String::FindFirst(&local_48,&local_58,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    local_28._12_4_ = uStack_7c;
    local_28.Size = iVar10;
    local_38._12_4_ = uStack_8c;
    local_38.Size = 6;
    uVar7 = 0;
    uVar8 = uVar7;
    if (iVar4 != -1) {
      uVar8 = 2;
    }
    **(uint **)this = **(uint **)this | uVar8;
    local_38.DataPtr = "ERREXT";
    local_28.DataPtr = puVar9;
    iVar4 = UE::String::FindFirst(&local_28,&local_38,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    if (iVar4 != -1) {
      uVar7 = 4;
    }
    **(uint **)this = **(uint **)this | uVar7;
    return;
  }
}

// operator() @ 14456e400

void __thiscall `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_5>::operator()(void *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  
  fVar3 = __real_3ba3d70a;
  fVar2 = __real_3a83126f;
  uVar5 = 0x1ed;
  cVar1 = **(char **)this;
  while (cVar1 == '\0') {
    uVar4 = UE::IoStore::HTTP::FEventLoop::FImpl::Tick
                      ((FImpl *)**(undefined8 **)((longlong)this + 8),0);
    while (uVar4 != 0) {
      if (**(char **)((longlong)this + 0x10) != '\0') {
        FWindowsPlatformProcess::SleepNoStats
                  ((float)(uint)((int)uVar5 + (int)(uVar5 / 0x4b) * -0x4b) * fVar2);
        uVar5 = (ulonglong)(uint)((int)uVar5 * 0xa93);
      }
      uVar4 = UE::IoStore::HTTP::FEventLoop::FImpl::Tick
                        ((FImpl *)**(undefined8 **)((longlong)this + 8),0);
    }
    FWindowsPlatformProcess::SleepNoStats(fVar3);
    cVar1 = **(char **)this;
  }
  return;
}

// operator() @ 14456e4d0

void __thiscall `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_6>::operator()(void *this)

{
  longlong lVar1;
  float fVar2;
  
  FWindowsPlatformProcess::SleepNoStats(__real_3e800000);
  fVar2 = __real_3cf5c28f;
  lVar1 = *(longlong *)(**(longlong **)this + 0x28);
  while (lVar1 != -1) {
    FWindowsPlatformProcess::SleepNoStats(fVar2);
    lVar1 = *(longlong *)(**(longlong **)this + 0x28);
  }
  return;
}

// operator() @ 14456e530

void __thiscall
`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>::operator()(void *this,FTicketStatus *param_1)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  FError *pFVar4;
  char *pcVar5;
  FError local_18;
  
  FVar1 = *param_1;
  switch(FVar1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    default:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      *(longlong *)(param_1 + 0x38) = (longlong)this + 8;
      return;
    case (FTicketStatus)0x9:
    case (FTicketStatus)0xf:
    case (FTicketStatus)0x11:
      goto switchD_14456e563_default;
    case (FTicketStatus)0xa:
    case (FTicketStatus)0xb:
    case (FTicketStatus)0xc:
    case (FTicketStatus)0xd:
    case (FTicketStatus)0xe:
    case (FTicketStatus)0x10:
      goto switchD_14456e5bf_caseD_1;
    }
  case (FTicketStatus)0x8:
    if (8 < (byte)FVar1) goto switchD_14456e563_default;
  case (FTicketStatus)0x0:
  case (FTicketStatus)0x3:
  case (FTicketStatus)0x4:
  case (FTicketStatus)0x5:
  case (FTicketStatus)0x6:
  case (FTicketStatus)0x7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(FVar1) {
    case (FTicketStatus)0x0:
    case (FTicketStatus)0x6:
    case (FTicketStatus)0x8:
      break;
    default:
switchD_14456e5bf_caseD_1:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status.GetId() == FTicketStatus::EId::Error",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                         ,0x2e0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  default:
switchD_14456e563_default:
    pFVar4 = UE::IoStore::HTTP::FTicketStatus::GetError(param_1,&local_18);
    pcVar5 = strstr(pFVar4->Reason,"FailTimeout");
    if (((pcVar5 != (char *)0x0) != (bool)*(char *)this) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFailTimeout == bExpectFailTimeout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x2e4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
}

// ChunkedTest @ 144570180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::IoStore::HTTP::ChunkedTest(char *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FIoBuffer FVar14;
  bool bVar15;
  uint uVar16;
  void *pvVar17;
  size_t sVar18;
  FActivityNode *pFVar19;
  TStringBuilderBase<char> *pTVar20;
  FActivityNode *pFVar21;
  char *pcVar22;
  int iVar23;
  FActivityNode *pFVar24;
  ulong64 uVar25;
  undefined1 *puVar26;
  undefined1 auStack_5f8 [32];
  int local_5d8 [2];
  FEventLoop local_5d0;
  undefined4 local_5c8;
  uint local_5c4;
  FRequest local_5c0;
  int *local_5b8;
  FIoBuffer local_5b0;
  uint local_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  FIoBuffer local_590;
  FRequest local_588;
  FRequest local_580;
  FRequest local_578;
  FRequest local_570;
  uint *local_568;
  FIoBuffer local_560;
  TStringBuilderBase<char> *local_558;
  char *local_550;
  uint local_548;
  char *local_538;
  undefined4 uStack_530;
  uint uStack_52c;
  char *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  char *local_518;
  int iStack_510;
  undefined4 uStack_50c;
  char *local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  char *local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  char *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  char *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  char *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  char *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  char *local_4a8;
  undefined4 uStack_4a0;
  uint uStack_49c;
  char *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  char *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  char *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  char *local_468;
  int iStack_460;
  undefined4 uStack_45c;
  FParams local_458;
  FParams local_418;
  FParams local_3d8;
  FParams local_398;
  FParams local_358;
  TStringView<char> local_318;
  TStringView<char> local_308;
  TStringView<char> local_2f8;
  TStringView<char> local_2e8;
  TStringView<char> local_2d8;
  code *local_2c8 [2];
  undefined **local_2b8;
  uint *local_2b0;
  TRefCountPtr<FIoBuffer::BufCore> local_2a8;
  undefined8 local_2a0;
  code *local_298 [2];
  undefined **local_288;
  int *local_280;
  TRefCountPtr<FIoBuffer::BufCore> local_278;
  undefined8 local_270;
  code *local_268 [2];
  undefined **local_258;
  int *local_250;
  TRefCountPtr<FIoBuffer::BufCore> local_248;
  undefined8 local_240;
  code *local_238 [2];
  undefined **local_228;
  int *local_220;
  TRefCountPtr<FIoBuffer::BufCore> local_218;
  undefined8 local_210;
  TStringView<char> local_208;
  TStringView<char> local_1f8;
  TStringView<char> local_1e8;
  TStringView<char> local_1d8;
  code *local_1c8 [5];
  undefined8 *local_1a0;
  TStringView<char> local_198;
  TStringView<char> local_188;
  TStringView<char> local_178;
  TStringBuilderBase<char> local_168;
  char local_148 [64];
  FActivityNode local_108;
  
  local_108._128_8_ = __security_cookie.value ^ (ulonglong)auStack_5f8;
  FEventLoop::FEventLoop(&local_5d0);
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (char *)&local_108;
  local_5c4 = 0xffffffff;
  pvVar17 = FGenericPlatformString::Memcpy(local_148,"http://",7);
  pFVar24 = (FActivityNode *)0x0;
  iVar23 = 0;
  pcVar22 = (char *)((longlong)pvVar17 + 7);
  local_168.CurPos = pcVar22;
  if (param_1 != (char *)0x0) {
    sVar18 = strlen(param_1);
    iVar23 = (int)sVar18;
  }
  uVar25 = (ulong64)iVar23;
  if (local_168.End < (FActivityNode *)(pcVar22 + uVar25)) {
    TStringBuilderBase<char>::Extend(&local_168,uVar25);
    pcVar22 = local_168.CurPos;
  }
  if (iVar23 != 0) {
    pvVar17 = FGenericPlatformString::Memcpy(pcVar22,param_1,uVar25);
    pcVar22 = (char *)(uVar25 + (longlong)pvVar17);
    local_168.CurPos = pcVar22;
  }
  if (local_168.End < (FActivityNode *)(pcVar22 + 10)) {
    TStringBuilderBase<char>::Extend(&local_168,10);
    pcVar22 = local_168.CurPos;
  }
  pvVar17 = FGenericPlatformString::Memcpy(pcVar22,":9493/port",10);
  local_168.CurPos = (char *)((longlong)pvVar17 + 10);
  local_568 = &local_5c4;
  FIoBuffer::FIoBuffer(&local_560);
  local_2b8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_2>,0,0>::
               _vftable_;
  local_2b0 = local_568;
  local_2a8 = local_560.CorePtr.Reference;
  local_2c8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  iStack_460 = (int)local_168.CurPos - (int)local_168.Base;
  local_468 = local_168.Base;
  local_458._padding_ = 0;
  local_458._padding_ = 0;
  local_2f8._12_4_ = uStack_45c;
  local_2f8.Size = iStack_460;
  local_478 = "GET";
  uStack_470 = 3;
  local_458._padding_ = CONCAT44(uStack_46c,3);
  local_2a0 = 0;
  local_560.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  local_458._padding_ = 0x150d74d54;
  local_458._padding_ = 0;
  local_458._padding_._0_4_ = 0;
  local_458._padding_._4_4_ = 0x1000100;
  local_458.bFollow30x = false;
  local_458.HttpVersion = Default;
  local_458._padding_._0_4_ = 0;
  local_2f8.DataPtr = local_168.Base;
  pFVar19 = FActivityNode::Create(&local_458,&local_2f8,0);
  local_588.Ptr = pFVar24;
  if (pFVar19 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar19,ActivityCreate,0);
    local_588.Ptr = pFVar19;
  }
  FEventLoop::Send(&local_5d0,&local_588,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_2c8,0)
  ;
  if (local_588.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_588.Ptr);
  }
  FVar14.CorePtr.Reference = local_560.CorePtr.Reference;
  if (local_560.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_560.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)FVar14.CorePtr.Reference + 0xc);
    iVar23 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar14.CorePtr.Reference);
      ::operator_delete((void *)FVar14.CorePtr.Reference,0x20);
    }
  }
  do {
    uVar16 = FEventLoop::FImpl::Tick(local_5d0.Impl,0);
  } while (uVar16 != 0);
  if ((0x7fffffff < local_5c4) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("HttpdPort > -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x19f,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_558 = &local_168;
  local_5a8 = local_5c4;
  local_548 = local_5c4;
  local_590.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  local_5a0 = 0;
  uStack_59c = 0x493;
  uStack_598 = 0;
  uStack_594 = 0xffffffff;
  local_550 = param_1;
  FIoBuffer::FIoBuffer(&local_590);
  uVar13 = _UNK_150d75848;
  uVar12 = ___xmm_0000005300000047000000430000003b;
  uVar11 = _UNK_150d75838;
  uVar10 = ___xmm_00000040000000200000000800000004;
  uVar9 = _UNK_150d75828;
  uVar8 = ___xmm_0000002f0000002b0000002900000013;
  uVar7 = _UNK_150d757f8;
  uVar6 = ___xmm_000000110000000d0000000b00000007;
  uVar5 = _UNK_150d757d8;
  uVar4 = ___xmm_00000005000000030000000200000001;
  local_538 = "";
  local_5c0.Ptr = &local_108;
  uStack_530 = 0;
  local_108._0_8_ = ___xmm_00000011000000030000000200000001;
  local_108._8_8_ = _UNK_150d757e8;
  local_108._16_4_ = 0x47;
  local_2e8._8_8_ = (ulonglong)uStack_52c << 0x20;
  local_2e8.DataPtr = "";
  local_108._20_4_ = 0x1343;
  local_108._24_4_ = 0xa9e;
  do {
    local_5c8 = *(undefined4 *)local_5c0.Ptr;
    puVar26 = &local_108.field_0x20;
    local_108._32_8_ = uVar10;
    local_108._40_8_ = uVar11;
    local_108._48_8_ = uVar4;
    local_108._56_8_ = uVar5;
    local_108._64_8_ = uVar6;
    local_108._72_8_ = uVar7;
    local_108._80_8_ = uVar8;
    local_108._88_8_ = uVar9;
    local_108._96_8_ = uVar12;
    local_108._104_8_ = uVar13;
    local_108._112_4_ = 0x59;
    local_108._116_4_ = 0x67;
    local_108._120_4_ = 0x6d;
    do {
      local_168.CurPos = local_168.Base;
      if (local_168.End < (FActivityNode *)(local_168.Base + 7)) {
        TStringBuilderBase<char>::Extend(&local_168,7);
      }
      pvVar17 = FGenericPlatformString::Memcpy(local_168.CurPos,"http://",7);
      iVar23 = 0;
      pcVar22 = (char *)((longlong)pvVar17 + 7);
      local_168.CurPos = pcVar22;
      if (param_1 != (char *)0x0) {
        sVar18 = strlen(param_1);
        iVar23 = (int)sVar18;
      }
      uVar25 = (ulong64)iVar23;
      if (local_168.End < (FActivityNode *)(pcVar22 + uVar25)) {
        TStringBuilderBase<char>::Extend(&local_168,uVar25);
        pcVar22 = local_168.CurPos;
      }
      if (iVar23 != 0) {
        pvVar17 = FGenericPlatformString::Memcpy(pcVar22,param_1,uVar25);
        pcVar22 = (char *)(uVar25 + (longlong)pvVar17);
        local_168.CurPos = pcVar22;
      }
      if (local_168.End < (FActivityNode *)(pcVar22 + 1)) {
        TStringBuilderBase<char>::Extend(&local_168,1);
        pcVar22 = local_168.CurPos;
      }
      pvVar17 = FGenericPlatformString::Memcpy(pcVar22,&s__,1);
      local_168.CurPos = (char *)((longlong)pvVar17 + 1);
      pTVar20 = TStringBuilderBase<char>::AppendfImpl(&local_168,"%d");
      if (pTVar20->End < pTVar20->CurPos + 9) {
        TStringBuilderBase<char>::Extend(pTVar20,9);
      }
      pvVar17 = FGenericPlatformString::Memcpy(pTVar20->CurPos,"/chunked/",9);
      pTVar20->CurPos = (char *)((longlong)pvVar17 + 9);
      pTVar20 = TStringBuilderBase<char>::AppendfImpl(pTVar20,"%d");
      operator<<<char,TStringView<char>_&>(pTVar20,&local_2e8);
      iStack_510 = (int)local_168.CurPos - (int)local_168.Base;
      local_518 = local_168.Base;
      local_418._padding_ = 0;
      local_418._padding_ = 0;
      local_2d8._12_4_ = uStack_50c;
      local_2d8.Size = iStack_510;
      local_528 = "GET";
      uStack_520 = 3;
      local_418._padding_ = CONCAT44(uStack_51c,3);
      local_418._padding_ = 0;
      local_2d8.DataPtr = local_168.Base;
      local_418._padding_._0_4_ = 0;
      local_418._padding_._4_4_ = 0x1000100;
      local_418._padding_ = 0x150d74d54;
      local_418.bFollow30x = false;
      local_418.HttpVersion = Default;
      local_418._padding_._0_4_ = 0;
      pFVar21 = FActivityNode::Create(&local_418,&local_2d8,0);
      pFVar19 = pFVar24;
      if (pFVar21 != (FActivityNode *)0x0) {
        Trace((FActivity *)pFVar21,ActivityCreate,0);
        pFVar19 = pFVar21;
      }
      local_1c8[0] = (code *)0x0;
      local_1a0 = (undefined8 *)0x0;
      local_580.Ptr = pFVar19;
      local_1a0 = FMemory::Malloc(0x20,8);
      *local_1a0 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_4>,0,1>::
                    _vftable_;
      local_1a0[1] = CONCAT44(uStack_59c,local_5a0);
      local_1a0[2] = CONCAT44(uStack_594,uStack_598);
      local_1a0[3] = 0;
      ((TRefCountPtr<FIoBuffer::BufCore> *)(local_1a0 + 3))->Reference =
           (BufCore *)local_590.CorePtr.Reference;
      if (local_590.CorePtr.Reference != (BufCore *)0x0) {
        LOCK();
        *(int *)((longlong)local_590.CorePtr.Reference + 0xc) =
             *(int *)((longlong)local_590.CorePtr.Reference + 0xc) + 1;
        UNLOCK();
      }
      if (local_1a0 + 1 != (undefined8 *)0x0) {
        local_1c8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                       ::Call;
      }
      FEventLoop::Send(&local_5d0,&local_580,
                       (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                       local_1c8,0);
      if (local_580.Ptr != (FActivityNode *)0x0) {
        FActivityNode::Destroy(local_580.Ptr);
      }
      puVar26 = puVar26 + 4;
    } while (puVar26 != &local_108.field_0x7c);
    do {
      uVar16 = FEventLoop::FImpl::Tick(local_5d0.Impl,0);
    } while (uVar16 != 0);
    local_5c0.Ptr = (FActivityNode *)&(local_5c0.Ptr)->field_0x4;
  } while (local_5c0.Ptr != (FActivityNode *)&local_108.field_0x1c);
  local_5b8 = local_5d8;
  FIoBuffer::FIoBuffer(&local_5b0);
  uStack_500 = 8;
  local_508 = "/trailer";
  local_208._12_4_ = uStack_4fc;
  local_208.Size = 8;
  local_208.DataPtr = "/trailer";
  local_5d8[0] = 0;
  `UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_3>::operator()
            (&local_558,&local_178,0x4000,&local_208);
  local_280 = local_5b8;
  local_270 = 0;
  local_288 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_278 = local_5b0.CorePtr.Reference;
  if (local_5b0.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  iStack_4e0 = (int)local_168.CurPos - (int)local_168.Base;
  local_4e8 = local_168.Base;
  local_3d8._padding_ = 0;
  local_3d8._padding_ = 0;
  local_1f8._12_4_ = uStack_4dc;
  local_1f8.Size = iStack_4e0;
  local_4f8 = "GET";
  uStack_4f0 = 3;
  local_3d8._padding_ = CONCAT44(uStack_4ec,3);
  local_298[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_1f8.DataPtr = local_168.Base;
  local_3d8._padding_ = 0;
  local_3d8._padding_._0_4_ = 0;
  local_3d8._padding_._4_4_ = 0x1000100;
  local_3d8._padding_ = 0x150d74d54;
  local_3d8.bFollow30x = false;
  local_3d8.HttpVersion = Default;
  local_3d8._padding_._0_4_ = 0;
  pFVar21 = FActivityNode::Create(&local_3d8,&local_1f8,0);
  pFVar19 = pFVar24;
  if (pFVar21 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar21,ActivityCreate,0);
    pFVar19 = pFVar21;
  }
  local_5c0.Ptr = pFVar19;
  FEventLoop::Send(&local_5d0,&local_5c0,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_298,0)
  ;
  if (local_5c0.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_5c0.Ptr);
  }
  do {
    uVar16 = FEventLoop::FImpl::Tick(local_5d0.Impl,0);
  } while (uVar16 != 0);
  if ((local_5d8[0] != 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ErrorMarks == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x1fe,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_4d0 = 4;
  local_4d8 = "/ext";
  local_1e8._12_4_ = uStack_4cc;
  local_1e8.Size = 4;
  local_1e8.DataPtr = "/ext";
  local_5d8[0] = 0;
  `UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_3>::operator()
            (&local_558,&local_198,0x1ed,&local_1e8);
  local_250 = local_5b8;
  local_240 = 0;
  local_258 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_248 = local_5b0.CorePtr.Reference;
  if (local_5b0.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  iStack_4b0 = (int)local_168.CurPos - (int)local_168.Base;
  local_4b8 = local_168.Base;
  local_398._padding_ = 0;
  local_398._padding_ = 0;
  local_1d8._12_4_ = uStack_4ac;
  local_1d8.Size = iStack_4b0;
  local_4c8 = "GET";
  uStack_4c0 = 3;
  local_398._padding_ = CONCAT44(uStack_4bc,3);
  local_268[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_1d8.DataPtr = local_168.Base;
  local_398._padding_ = 0;
  local_398._padding_._0_4_ = 0;
  local_398._padding_._4_4_ = 0x1000100;
  local_398._padding_ = 0x150d74d54;
  local_398.bFollow30x = false;
  local_398.HttpVersion = Default;
  local_398._padding_._0_4_ = 0;
  pFVar19 = FActivityNode::Create(&local_398,&local_1d8,0);
  local_578.Ptr = pFVar24;
  if (pFVar19 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar19,ActivityCreate,0);
    local_578.Ptr = pFVar19;
  }
  FEventLoop::Send(&local_5d0,&local_578,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_268,0)
  ;
  if (local_578.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_578.Ptr);
  }
  do {
    uVar16 = FEventLoop::FImpl::Tick(local_5d0.Impl,0);
  } while (uVar16 != 0);
  if ((local_5d8[0] != 4) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ErrorMarks == 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x206,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_4a0 = 0;
  local_4a8 = "";
  local_318._8_8_ = (ulonglong)uStack_49c << 0x20;
  local_318.DataPtr = "";
  local_5d8[0] = 0;
  `UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_3>::operator()
            (&local_558,&local_188,0x4000,&local_318);
  local_220 = local_5b8;
  local_210 = 0;
  local_228 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_218 = local_5b0.CorePtr.Reference;
  if (local_5b0.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_5b0.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  iStack_480 = (int)local_168.CurPos - (int)local_168.Base;
  local_488 = local_168.Base;
  local_358._padding_ = 0;
  local_358._padding_ = 0;
  local_308._12_4_ = uStack_47c;
  local_308.Size = iStack_480;
  local_498 = "GET";
  uStack_490 = 3;
  local_358._padding_ = CONCAT44(uStack_48c,3);
  local_238[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_308.DataPtr = local_168.Base;
  local_358._padding_ = 0;
  local_358._padding_._0_4_ = 0;
  local_358._padding_._4_4_ = 0x100;
  local_358._padding_ = 0x150d74d54;
  local_358.bFollow30x = false;
  local_358.HttpVersion = Default;
  local_358._padding_._0_4_ = 0;
  pFVar19 = FActivityNode::Create(&local_358,&local_308,0);
  local_570.Ptr = pFVar24;
  if (pFVar19 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar19,ActivityCreate,0);
    local_570.Ptr = pFVar19;
  }
  FEventLoop::Send(&local_5d0,&local_570,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_238,0)
  ;
  if (local_570.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_570.Ptr);
  }
  do {
    uVar16 = FEventLoop::FImpl::Tick(local_5d0.Impl,0);
  } while (uVar16 != 0);
  if ((local_5d8[0] != 2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ErrorMarks == 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x210,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_5b0.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_5b0.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_5b0.CorePtr.Reference + 0xc);
    iVar23 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_5b0.CorePtr.Reference);
      ::operator_delete((void *)local_5b0.CorePtr.Reference,0x20);
    }
  }
  FVar14.CorePtr.Reference = local_590.CorePtr.Reference;
  if (local_590.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_590.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)FVar14.CorePtr.Reference + 0xc);
    iVar23 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar14.CorePtr.Reference);
      ::operator_delete((void *)FVar14.CorePtr.Reference,0x20);
    }
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
  if (local_5d0.Impl != (FImpl *)0x0) {
    if (((local_5d0.Impl)->BusyCount != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("BusyCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                            ,0x3b9,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DestructItems<UE::IoStore::HTTP::FHostGroup,int>
              ((FHostGroup *)((local_5d0.Impl)->Groups).AllocatorInstance.Data,
               ((local_5d0.Impl)->Groups).ArrayNum);
    pFVar2 = ((local_5d0.Impl)->Groups).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((((local_5d0.Impl)->Pending).Head != (FActivityNode *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Head == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                            ,0xc5,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)local_5d0.Impl);
    ::operator_delete(local_5d0.Impl,0x80);
  }
  return;
}

// ConnectSocks5 @ 144571610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOutcome __cdecl UE::IoStore::HTTP::ConnectSocks5(FSocket *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  u_long uVar4;
  FOutcome FVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  FSocket *this;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  u_short in_R9W;
  wchar_t *pwVar10;
  undefined1 auStack_b8 [32];
  char local_98;
  char local_97;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_90 [8];
  char local_88 [8];
  char local_80 [8];
  char local_78 [8];
  char local_70 [8];
  undefined4 local_68;
  u_long local_64;
  u_short local_60;
  char local_58;
  char local_57;
  ulonglong local_48;
  
  this = (FSocket *)CONCAT44(in_register_00000014,param_2);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pwVar10 = L"";
  if (GSocksIp.Data.ArrayNum != 0) {
    pwVar10 = (wchar_t *)GSocksIp.Data.AllocatorInstance.Data;
  }
  uVar9 = 0;
  uVar6 = 0;
  do {
    while( true ) {
      uVar1 = *pwVar10;
      pwVar10 = (wchar_t *)((longlong)pwVar10 + 2);
      if (9 < uVar1 - 0x30) break;
      uVar6 = (uint)uVar1 + (uVar6 * 5 + -0x18) * 2;
    }
    if ((uVar1 != 0x2e) && (uVar1 != 0)) goto LAB_144571698;
    uVar9 = uVar9 << 8 | uVar6;
    uVar6 = 0;
  } while (uVar1 != 0);
  if (uVar9 == 0) {
LAB_144571698:
    param_1->Socket = param_1->Socket & 0xffff000000000000 ^ 0x150d72ab8;
    *(undefined2 *)((longlong)&param_1->Socket + 6) = 0xffff;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  FVar5 = FSocket::Connect(this,(uint)local_90,uVar9);
  if ((*(ulonglong *)FVar5.field0_0x0 & 0xffffffffffff) < 0x800000000000) {
    param_1->Socket = *(ulonglong *)FVar5.field0_0x0;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  local_94 = 0x105;
  local_92 = 0;
  FVar5 = FSocket::Send(this,local_88,(uint)&local_94);
  uVar8 = *(ulonglong *)FVar5.field0_0x0;
  if ((int)(uVar8 >> 0x20) == 0x8000) {
    if (((uVar8 & 0xffffffffffff) < 0x800000000000) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                           ,0x59,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar5.field0_0x0;
    }
    if ((int)uVar8 == 3) {
      FVar5 = FSocket::Recv(this,local_80,(uint)&local_98);
      uVar8 = *(ulonglong *)FVar5.field0_0x0;
      if ((int)(uVar8 >> 0x20) != 0x8000) goto LAB_14457174e;
      if (((uVar8 & 0xffffffffffff) < 0x800000000000) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x59,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
        return (FOutcome)FVar5.field0_0x0;
      }
      if ((int)uVar8 == 2) {
        if ((local_98 == '\x05') && (local_97 == '\0')) {
          uVar4 = htonl(param_3);
          local_60 = htons(in_R9W);
          local_68 = 0x1000105;
          local_64 = uVar4;
          FVar5 = FSocket::Send(this,local_78,(uint)&local_68);
          uVar8 = *(ulonglong *)FVar5.field0_0x0;
          if ((int)(uVar8 >> 0x20) != 0x8000) goto LAB_14457174e;
          if (((uVar8 & 0xffffffffffff) < 0x800000000000) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsError()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                                 ,0x59,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
            return (FOutcome)FVar5.field0_0x0;
          }
          if ((int)uVar8 == 10) {
            FVar5 = FSocket::Recv(this,local_70,(uint)&local_58);
            uVar8 = *(ulonglong *)FVar5.field0_0x0;
            if ((int)(uVar8 >> 0x20) != 0x8000) goto LAB_14457174e;
            if (((uVar8 & 0xffffffffffff) < 0x800000000000) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!IsError()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                                   ,0x59,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              FVar5.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
              return (FOutcome)FVar5.field0_0x0;
            }
            if ((int)uVar8 == 10) {
              if ((local_58 == '\x05') && (local_57 == '\0')) {
                *(undefined4 *)((longlong)&param_1->Socket + 4) = 0x8000;
                *(undefined4 *)&param_1->Socket = 1;
                return (FOutcome)(FOutcome_u_0)param_1;
              }
              pcVar7 = "Reply has unexpected socks5 version";
            }
            else {
              pcVar7 = "Socks5 reply too short";
            }
          }
          else {
            pcVar7 = "Sent too little to socks5 server";
          }
        }
        else {
          pcVar7 = "Got unexpected socks5 version from server";
        }
      }
      else {
        pcVar7 = "Recv too short from socks5 server";
      }
    }
    else {
      pcVar7 = "Could not send socks5 greeting";
    }
    param_1->Socket = param_1->Socket & 0xffff000000000000 ^ (ulonglong)pcVar7;
    *(undefined2 *)((longlong)&param_1->Socket + 6) = 0xffff;
  }
  else {
LAB_14457174e:
    param_1->Socket = uVar8;
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// CreateTransactOne @ 144571e70

FTransactRef __cdecl UE::IoStore::HTTP::CreateTransactOne(void **param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *_Dst;
  FTransactRef FVar3;
  
  _Dst = FMemory::Malloc(0x160,8);
  memset(_Dst,0,0x160);
  *(undefined4 *)(_Dst + 1) = 0x100;
  *(undefined4 *)((longlong)_Dst + 0xc) = 0x80000000;
  *_Dst = (longlong)(_Dst + 2);
  *(undefined4 *)((longlong)_Dst + 0x124) = 0xffffffff;
  *(undefined2 *)((longlong)_Dst + 0x114) = 0xffff;
  *(undefined1 *)((longlong)_Dst + 0x116) = 0xff;
  _Dst[0x23] = -1;
  *param_1 = _Dst;
  if (((ulonglong)_Dst & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Ptr & 1) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x3c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Self = (*pcVar1)();
      return (FTransactRef)FVar3.Self;
    }
  }
  return (FTransactRef)(ulong64)param_1;
}

// CreateTransactTwo @ 144571f20

FTransactRef __cdecl UE::IoStore::HTTP::CreateTransactTwo(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FTransactRef FVar4;
  undefined8 in_RDX;
  
  puVar3 = FMemory::Malloc(0x48,8);
  *puVar3 = in_RDX;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[6] = 0xffffffffffffffff;
  puVar3[8] = 0xffffffffffffffff;
  *(ulonglong *)param_1 = (ulonglong)puVar3 | 1;
  if (((ulonglong)puVar3 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Ptr & 1) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x3c8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.Self = (*pcVar1)();
      return (FTransactRef)FVar4.Self;
    }
  }
  return (FTransactRef)(ulong64)param_1;
}

// GetIaxTraceChannel @ 144574160

void * __cdecl UE::IoStore::HTTP::GetIaxTraceChannel(void)

{
  InitArgs local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      local_18.Desc = (char *)0x0;
      local_18.bReadOnly = false;
      local_18._9_7_ = 0;
      UE::Trace::FChannel::Setup(&IaxObject,"Iax",&local_18);
      _Init_thread_footer(&::_TSS1);
    }
  }
  return Iax;
}

// GoAwayOne @ 144574d70

void __cdecl UE::IoStore::HTTP::GoAwayOne(FTlsPeer *param_1,void *param_2)

{
  return;
}

// GoAwayTwo @ 144574d80

void __cdecl UE::IoStore::HTTP::GoAwayTwo(FTlsPeer *param_1,void *param_2)

{
  FTlsPeer local_res10;
  
  if (param_2 != (void *)0x0) {
    if (*(longlong *)param_2 != 0) {
      nghttp2_session_terminate_session(*(longlong *)param_2,0);
      DetailTwo::FDriverNg::PumpSend(param_2,&local_res10);
      nghttp2_session_del(*(undefined8 *)param_2);
    }
    ::operator_delete(param_2,0x228);
  }
  return;
}

// HandshakeOne @ 1445753e0

FOutcome __cdecl UE::IoStore::HTTP::HandshakeOne(FTlsPeer *param_1,void *param_2)

{
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// HandshakeTwo @ 144575400

FOutcome __cdecl UE::IoStore::HTTP::HandshakeTwo(FTlsPeer *param_1,void **param_2)

{
  FDriverNg *this;
  ulonglong uVar1;
  longlong *in_R8;
  nghttp2_session_callbacks *local_res8;
  
  this = (FDriverNg *)*in_R8;
  if (this == (FDriverNg *)0x0) {
    this = ::operator_new(0x228);
    if (this != (FDriverNg *)0x0) {
      uVar1 = (ulonglong)_tls_index;
      this->ResponseHeaders =
           (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0;
      (this->SendPending).Data = (void *)0x0;
      (this->SendPending).Size = 0;
      this->bWithTls = param_2[1] != (void *)0x0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::
               _dynamic_atexit_destructor_for__Statics__);
        _Init_thread_footer(&::_TSS0);
      }
      if (Statics.Instance == (nghttp2_session_callbacks *)0x0) {
        nghttp2_session_callbacks_new(&local_res8);
        nghttp2_session_callbacks_set_on_header_callback2
                  (local_res8,
                   `UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l5::<lambda_1>::
                   <lambda_invoker_cdecl>);
        Statics.Instance = local_res8;
      }
      this->RecvRemaining = -9;
      nghttp2_session_client_new3(this,Statics.Instance,this,0,&Mem);
    }
    *in_R8 = (longlong)this;
  }
  DetailTwo::FDriverNg::Handshake(this,param_1);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// HttpTest @ 1445756b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl UE::IoStore::HTTP::HttpTest(char *param_1,ulong64 param_2)

{
  FIoBuffer **ppFVar1;
  atomic<unsigned_int> *paVar2;
  undefined1 *this;
  atomic<unsigned_int> aVar3;
  atomic<unsigned___int64> aVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  FEventLoop *pFVar9;
  undefined2 *puVar10;
  FIoBuffer *pFVar11;
  undefined **ppuVar12;
  byte bVar13;
  char cVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FTaskBase *pFVar18;
  TStringBuilderBase<char> *pTVar19;
  FActivityNode *pFVar20;
  FRequest FVar21;
  FRequest *pFVar22;
  TStringBuilderBase<char> *pTVar23;
  code **ppcVar24;
  size_t sVar25;
  BufCore *pBVar26;
  FTaskBase *pFVar27;
  undefined8 *puVar28;
  undefined ***pppuVar29;
  longlong *plVar30;
  int iVar31;
  FIoBuffer *pFVar32;
  FActivityNode *pFVar33;
  ushort uVar34;
  uint uVar35;
  byte bVar36;
  undefined4 uVar37;
  longlong lVar38;
  FIoBuffer **ppFVar39;
  char **ppcVar40;
  ulong64 uVar41;
  FActivityNode *pFVar42;
  longlong lVar43;
  char *pcVar44;
  int *piVar45;
  void *pvVar46;
  int iVar47;
  char *pcVar48;
  char *pcVar49;
  char *local_res8 [2];
  undefined1 auStackY_1468 [32];
  undefined1 local_1438 [8];
  FEventLoop local_1430;
  undefined1 local_1428;
  undefined1 local_1427;
  undefined2 local_1424;
  undefined2 local_1422;
  FEventLoop local_1420;
  uint local_1418;
  ulong64 local_1410;
  int *local_1408;
  TStringBuilderBase<char> *local_1400;
  char **local_13f8;
  FIoBuffer *local_13f0;
  FActivityNode *local_13e8;
  char **local_13e0;
  FEventLoop *local_13d8;
  undefined1 local_13d0 [8];
  undefined2 *local_13c8;
  FRequest local_13c0;
  int local_13b8 [2];
  FRequest local_13b0;
  FRequest local_13a8;
  FRequest local_13a0;
  FIoBuffer *local_1398;
  FIoBuffer *pFStack_1390;
  undefined1 local_1388 [8];
  undefined1 local_1380 [8];
  undefined1 local_1378 [8];
  undefined1 local_1370 [8];
  undefined1 local_1368 [8];
  undefined1 local_1360 [8];
  undefined1 local_1358 [8];
  undefined1 local_1350 [8];
  undefined1 local_1348 [8];
  FRequest local_1340;
  FRequest local_1338;
  FTaskBase *local_1330;
  FRequest local_1328;
  FRequest local_1320;
  FRequest local_1318;
  byte local_1310;
  FIoBuffer local_1308;
  undefined1 local_1300 [24];
  FParams local_12e8;
  FParams local_12c0;
  FParams local_1298;
  undefined1 local_1270 [24];
  char *local_1258;
  FIoBuffer local_1250;
  undefined1 local_1248 [16];
  char *local_1238;
  char *local_1230;
  undefined4 uStack_1228;
  undefined4 uStack_1224;
  char *local_1218;
  undefined4 uStack_1210;
  undefined4 uStack_120c;
  undefined *local_1208;
  undefined4 uStack_1200;
  undefined4 uStack_11fc;
  char *local_11f8;
  int iStack_11f0;
  undefined4 uStack_11ec;
  char *local_11e8;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  FHost *local_11d8;
  int iStack_11d0;
  undefined4 uStack_11cc;
  char *local_11c8;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  char *local_11b8;
  int iStack_11b0;
  undefined4 uStack_11ac;
  FHost *local_11a8;
  int iStack_11a0;
  undefined4 uStack_119c;
  char *local_1198;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  undefined *local_1188;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  char *local_1178;
  int iStack_1170;
  undefined4 uStack_116c;
  char *local_1168;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  char *local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  char *local_1148;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  char *local_1138;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  char *local_1128;
  undefined4 uStack_1120;
  undefined4 uStack_111c;
  char *local_1118;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  char *local_1108;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  char *local_10f8;
  undefined4 uStack_10f0;
  undefined4 uStack_10ec;
  char *local_10e8;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  char *local_10d8;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  char *local_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  char *local_10b8;
  int iStack_10b0;
  undefined4 uStack_10ac;
  char *local_10a8;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  char *local_1098;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  char *local_1088;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  char *local_1078;
  int iStack_1070;
  undefined4 uStack_106c;
  char *local_1068;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  char *local_1058;
  int iStack_1050;
  undefined4 uStack_104c;
  char *local_1048;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  char *local_1038;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  char *local_1028;
  int local_1020;
  char *local_1018;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  TStringView<char> local_1008;
  char *local_ff8;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  char *local_fe8;
  undefined1 local_fe0;
  char *local_fd8;
  undefined1 local_fd0;
  char *local_fc8;
  int iStack_fc0;
  undefined4 uStack_fbc;
  char *local_fb8;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  char *local_fa8;
  int iStack_fa0;
  undefined4 uStack_f9c;
  FParams local_f98;
  FParams local_f58;
  FParams local_f18;
  FParams local_ed8;
  FParams local_e98;
  FParams local_e58;
  FParams local_e18;
  FParams local_dd8;
  undefined2 **local_d98;
  FEventLoop *local_d90;
  char **local_d88;
  FActivityNode **local_d80;
  FIoBuffer **local_d78;
  code *local_d68 [2];
  undefined **local_d58;
  byte local_d50;
  TRefCountPtr<FIoBuffer::BufCore> local_d48;
  undefined8 local_d40;
  TStringView<char> local_d38;
  FConnectionPool local_d28;
  undefined8 uStack_d20;
  TStringView<char> local_d18;
  FConnectionPool local_d08;
  undefined8 uStack_d00;
  TStringView<char> local_cf8;
  FConnectionPool local_ce8;
  undefined8 uStack_ce0;
  TStringView<char> local_cd8;
  TStringView<char> local_cc8;
  TStringView<char> local_cb8;
  TStringView<char> local_ca8;
  FConnectionPool local_c98;
  undefined8 uStack_c90;
  TStringView<char> local_c88;
  TStringView<char> local_c78;
  TStringView<char> local_c68;
  longlong local_c58 [2];
  TStringView<char> local_c48;
  TStringView<char> local_c38;
  TStringView<char> local_c28;
  TStringView<char> local_c18;
  TStringView<char> local_c08;
  TStringView<char> local_bf8;
  TStringView<char> local_be8;
  FConnectionPool local_bd8;
  undefined8 uStack_bd0;
  TStringView<char> local_bc8;
  TStringView<char> local_bb8;
  TStringView<char> local_ba8;
  FConnectionPool local_b98;
  undefined8 uStack_b90;
  TStringView<char> local_b88;
  FConnectionPool local_b78;
  undefined8 uStack_b70;
  TStringView<char> local_b68;
  code *local_b58 [2];
  undefined **local_b48;
  code *local_b40;
  undefined8 local_b30;
  code *local_b28 [2];
  undefined **local_b18;
  FIoBuffer *local_b10;
  undefined8 local_b00;
  code *local_af8 [2];
  undefined **local_ae8;
  FIoBuffer *local_ae0;
  undefined8 local_ad0;
  code *local_ac8 [2];
  undefined **local_ab8;
  FIoBuffer *local_ab0;
  undefined8 local_aa0;
  code *local_a98 [2];
  undefined **local_a88;
  code *local_a80;
  undefined8 local_a70;
  code *local_a68 [2];
  undefined **local_a58;
  code *local_a50;
  undefined8 local_a40;
  code *local_a38 [2];
  undefined **local_a28;
  code *local_a20;
  undefined8 local_a10;
  code *local_a08 [2];
  undefined **local_9f8;
  FIoBuffer *local_9f0;
  FActivityNode *local_9e0;
  code *local_9d8 [2];
  undefined **local_9c8;
  FIoBuffer *local_9c0;
  FActivityNode *local_9b0;
  code *local_9a8 [2];
  undefined **local_998;
  FIoBuffer *local_990;
  FActivityNode *local_980;
  code *local_978 [2];
  undefined **local_968;
  code *local_960;
  undefined8 local_950;
  code *local_948 [2];
  undefined **local_938;
  FIoBuffer *local_930;
  FActivityNode *local_920;
  code *local_918 [2];
  undefined **local_908;
  FIoBuffer *local_900;
  FActivityNode *local_8f0;
  code *local_8e8 [2];
  undefined **local_8d8;
  FIoBuffer *local_8d0;
  undefined8 local_8c0;
  code *local_8b8 [2];
  undefined **local_8a8;
  code *local_8a0;
  undefined8 local_890;
  code *local_888 [2];
  code *local_878 [3];
  undefined8 local_860;
  code *local_858;
  undefined4 local_848;
  undefined4 uStack_844;
  FIoBuffer *pFStack_840;
  FIoBuffer *local_838;
  longlong *local_830;
  TStringBuilderBase<char> local_828;
  char local_808 [32];
  TStringBuilderBase<char> local_7e8;
  undefined1 local_7c8 [16];
  TStringBuilderBase<char> local_7b8;
  undefined1 local_798 [16];
  code *local_788 [2];
  undefined **local_778;
  FIoBuffer *pFStack_770;
  FIoBuffer *local_768;
  undefined ***local_760;
  code *local_758 [2];
  undefined **local_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined ***local_730;
  TStringBuilderBase<char> local_728;
  char local_708 [64];
  longlong local_6c8 [8];
  FIoBuffer local_688 [32];
  FIoBuffer local_588;
  BufCore *local_580 [125];
  undefined8 local_198 [2];
  char local_188 [257];
  char local_87 [15];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1468;
  local_1418 = 0;
  local_728.bIsDynamic = false;
  local_728.bIsExternal = false;
  piVar45 = local_13b8;
  local_13b8[0] = 0x2515;
  if (param_2 != 0) {
    local_13b8[0] = 0x134b;
  }
  pTVar23 = &local_728;
  local_728.Base = local_708;
  ppcVar40 = local_res8;
  local_728.CurPos = local_708;
  pFVar32 = &local_588;
  local_728.End = (char *)local_6c8;
  lVar38 = 0x40;
  local_res8[0] = param_1;
  local_1410 = param_2;
  local_1408 = piVar45;
  local_1400 = pTVar23;
  local_13f8 = ppcVar40;
  do {
    FIoBuffer::FIoBuffer(pFVar32);
    pFVar32[1].CorePtr.Reference = (BufCore *)0x0;
    pFVar32 = pFVar32 + 2;
    lVar38 = lVar38 + -1;
  } while (lVar38 != 0);
  local_13f0 = &local_588;
  FEventLoop::FEventLoop(&local_1430);
  local_1428 = 0;
  local_1438[0] = 0;
  pFVar18 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar18 == (FTaskBase *)0x0) {
    pFVar18 = (FTaskBase *)0x0;
    local_1330 = (FTaskBase *)0x0;
  }
  else {
    local_1330 = pFVar18;
    Tasks::Private::FTaskBase::FTaskBase(pFVar18,2,true);
    pFVar18->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_5>,void,void>::_vftable_;
    Tasks::Private::FTaskBase::Init(pFVar18,L"IasHttpTest.Loop",Default,None,None);
    pFVar18[1]._padding_ = (longlong)&local_1428;
    pFVar18[1]._padding_ = (longlong)&local_1430;
    pFVar18[1]._padding_ = (longlong)local_1438;
    pFVar18->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_5>_>::
          _vftable_;
    piVar45 = local_1408;
    ppcVar40 = local_13f8;
    pTVar23 = local_1400;
  }
  pFVar33 = (FActivityNode *)0x0;
  Tasks::Private::FTaskBase::TryLaunch(pFVar18,0x100);
  local_13d8 = &local_1430;
  uVar37 = 0;
  local_1300._12_4_ = 0x1000100;
  local_1300[0x10] = 0;
  local_13e8 = pFVar33;
  if (param_2 != 0) {
    local_13e8 = (FActivityNode *)local_1300;
  }
  local_1300._0_8_ = param_2;
  local_1300._8_4_ = uVar37;
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,"/data",0);
  uStack_ff0 = 3;
  local_f18._padding_ = 0;
  local_f18._padding_ = 0;
  local_ff8 = "GET";
  local_fc8 = pTVar19->Base;
  local_f18._padding_ = CONCAT44(uStack_fec,3);
  iStack_fc0 = *(int *)&pTVar19->CurPos - (int)local_fc8;
  local_c68._12_4_ = uStack_fbc;
  local_c68.Size = iStack_fc0;
  local_f18._padding_._4_4_ = 0x1000100;
  local_f18._padding_ = 0x150d74d54;
  local_f18.bFollow30x = false;
  local_f18.HttpVersion = Default;
  local_f18._padding_ = (longlong)pFVar33;
  local_f18._padding_._0_4_ = uVar37;
  local_f18._padding_._0_4_ = uVar37;
  local_c68.DataPtr = local_fc8;
  pFVar20 = FActivityNode::Create(&local_f18,&local_c68,0);
  if (pFVar20 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar20,ActivityCreate,0);
    FActivityNode::Destroy(pFVar20);
  }
  pFVar20 = local_13e8;
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,"/data/67",0);
  local_fb8 = "GET";
  local_ed8._padding_ = 0;
  local_ed8._padding_ = 0;
  uStack_fb0 = 3;
  local_fa8 = pTVar19->Base;
  local_ed8._padding_ = CONCAT44(uStack_fac,3);
  iStack_fa0 = *(int *)&pTVar19->CurPos - (int)local_fa8;
  local_c48._12_4_ = uStack_f9c;
  local_c48.Size = iStack_fa0;
  pFVar42 = (FActivityNode *)&GDefaultParams;
  if (pFVar20 != (FActivityNode *)0x0) {
    pFVar42 = pFVar20;
  }
  local_ed8._padding_._6_1_ = 0;
  local_ed8._padding_ = 0x150d74d54;
  local_ed8._padding_._4_2_ = *(undefined2 *)&pFVar42->field_0xc;
  local_ed8.bFollow30x = pFVar42->field_0xe == '\x01';
  local_ed8._padding_._0_4_ = *(undefined4 *)&pFVar42->field_0x8;
  local_ed8._padding_._7_1_ = pFVar42->field_0xf == '\x01';
  local_ed8.HttpVersion = pFVar42->field_0x10;
  local_ed8._padding_ = (longlong)pFVar33;
  local_ed8._padding_._0_4_ = uVar37;
  local_c48.DataPtr = local_fa8;
  pFVar20 = FActivityNode::Create(&local_ed8,&local_c48,*(ulong64 *)pFVar42);
  local_13b0.Ptr = pFVar33;
  if (pFVar20 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar20,ActivityCreate,0);
    local_13b0.Ptr = pFVar20;
  }
  FRequest::Accept(&local_13b0,Json);
  local_9c8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  local_9c0 = local_13f0;
  local_9d8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_9b0 = pFVar33;
  FEventLoop::Send(&local_1430,&local_13b0,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_9d8,0)
  ;
  `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_6>::operator()(&local_13d8);
  if (local_13b0.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_13b0.Ptr);
  }
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,"/data",0);
  FVar21 = FEventLoop::
           Get<TStringBuilderBase<char>_const_&,UE::IoStore::HTTP::FEventLoop::FRequestParams_const_*_&>
                     (&local_1430,(TStringBuilderBase<char> *)local_1270,(FRequestParams **)pTVar19)
  ;
  pFVar22 = FRequest::Accept((FRequest *)FVar21.Ptr,Json);
  local_1320.Ptr = pFVar22->Ptr;
  pFVar22->Ptr = (FActivityNode *)0x0;
  if ((FActivityNode *)local_1270._0_8_ != (FActivityNode *)0x0) {
    FActivityNode::Destroy((FActivityNode *)local_1270._0_8_);
  }
  local_998 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  local_990 = local_13f0;
  local_9a8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_980 = pFVar33;
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,"/data",0);
  FVar21 = FEventLoop::
           Get<TStringBuilderBase<char>_const_&,UE::IoStore::HTTP::FEventLoop::FRequestParams_const_*_&>
                     (&local_1430,(TStringBuilderBase<char> *)local_1248,(FRequestParams **)pTVar19)
  ;
  pFVar22 = FRequest::Accept((FRequest *)FVar21.Ptr,Json);
  FEventLoop::Send(&local_1430,pFVar22,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_9a8,0)
  ;
  local_938 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  local_930 = local_13f0;
  local_948[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_920 = pFVar33;
  FEventLoop::Send(&local_1430,&local_1320,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_948,0)
  ;
  local_1230 = "GET";
  local_e98._padding_ = 0;
  local_e98._padding_ = 0;
  local_908 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_4>,0,0>::_vftable_;
  local_900 = &local_588;
  uStack_1228 = 3;
  local_e98._padding_ = CONCAT44(uStack_1224,3);
  uStack_1210 = 0x14;
  local_918[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_1218 = "http://epicgames.com";
  local_c38._12_4_ = uStack_120c;
  local_c38.Size = 0x14;
  local_c38.DataPtr = "http://epicgames.com";
  local_e98._padding_._4_4_ = 0x1000100;
  local_e98._padding_ = 0x150d74d54;
  local_e98.bFollow30x = false;
  local_e98.HttpVersion = Default;
  local_e98._padding_ = (longlong)pFVar33;
  local_e98._padding_._0_4_ = uVar37;
  local_e98._padding_._0_4_ = uVar37;
  local_8f0 = pFVar33;
  pFVar20 = FActivityNode::Create(&local_e98,&local_c38,0);
  local_1328.Ptr = pFVar33;
  if (pFVar20 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar20,ActivityCreate,0);
    local_1328.Ptr = pFVar20;
  }
  FEventLoop::Send(&local_1430,&local_1328,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_918,0)
  ;
  `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_6>::operator()(&local_13d8);
  if (local_1328.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_1328.Ptr);
  }
  if ((FActivityNode *)local_1248._0_8_ != (FActivityNode *)0x0) {
    FActivityNode::Destroy((FActivityNode *)local_1248._0_8_);
  }
  if (local_1320.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_1320.Ptr);
  }
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,"/data",0);
  FVar21 = FEventLoop::
           Get<TStringBuilderBase<char>_const_&,UE::IoStore::HTTP::FEventLoop::FRequestParams_const_*_&>
                     (&local_1430,(TStringBuilderBase<char> *)(local_1248 + 8),
                      (FRequestParams **)pTVar19);
  pFVar22 = FRequest::Accept((FRequest *)FVar21.Ptr,Json);
  local_1318.Ptr = pFVar22->Ptr;
  pFVar22->Ptr = (FActivityNode *)0x0;
  if ((FActivityNode *)local_1248._8_8_ != (FActivityNode *)0x0) {
    FActivityNode::Destroy((FActivityNode *)local_1248._8_8_);
  }
  local_9f8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  local_9f0 = local_13f0;
  local_a08[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  local_9e0 = pFVar33;
  FEventLoop::Send(&local_1430,&local_1318,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_a08,0)
  ;
  `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_6>::operator()(&local_13d8);
  if (local_1318.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_1318.Ptr);
  }
  fVar8 = __real_3cf5c28f;
  fVar7 = __real_3e800000;
  uVar34 = 1;
  do {
    local_12c0.HostName.DataPtr = (char *)0x0;
    iVar31 = *piVar45;
    pTVar23->CurPos = pTVar23->Base;
    local_1238 = "http://";
    if (iVar31 == 0x134b) {
      local_1238 = "https://";
    }
    local_12c0.HostName.Size = 0;
    local_12c0.SendBufSize = -1;
    local_12c0.RecvBufSize = -1;
    local_12c0.HttpVersion = One;
    local_12c0.MaxInflight = '\x01';
    local_12c0.Port = local_12c0.HostName.Size;
    operator<<<char,char_const_*>(pTVar23,&local_1238);
    operator<<<char,char_const_*_&>(pTVar23,ppcVar40);
    local_1208 = &s__;
    uStack_1200 = 1;
    local_c28._12_4_ = uStack_11fc;
    local_c28.Size = 1;
    local_c28.DataPtr = ":";
    pTVar19 = TStringBuilderBase<char>::Append<TStringView<char>_>(pTVar23,&local_c28);
    TStringBuilderBase<char>::AppendfImpl(pTVar19,"%u");
    local_11f8 = pTVar23->Base;
    iStack_11f0 = *(int *)&pTVar23->CurPos - (int)local_11f8;
    local_c18._12_4_ = uStack_11ec;
    local_c18.Size = iStack_11f0;
    local_c18.DataPtr = local_11f8;
    FConnectionPool::FParams::SetHostFromUrl(&local_12c0,&local_c18);
    local_12c0.ConnectionCount = (uVar34 & 1) + 1;
    local_12c0.VerifyCert = param_2;
    FConnectionPool::FConnectionPool((FConnectionPool *)local_1380,&local_12c0);
    iVar31 = 0;
    if (uVar34 != 0) {
      do {
        local_7e8.Base = local_7c8;
        local_7e8.bIsDynamic = false;
        local_7e8.bIsExternal = false;
        local_7e8.CurPos = local_7c8;
        local_7e8.End = (char *)&local_7b8;
        pTVar23 = TStringBuilderBase<char>::Append<char,0>(&local_7e8,"/data?pool=",0xb);
        pTVar23 = TStringBuilderBase<char>::AppendfImpl(pTVar23,"%u");
        local_11e8 = "x";
        uStack_11e0 = 1;
        local_c08._12_4_ = uStack_11dc;
        local_c08.Size = 1;
        local_c08.DataPtr = "x";
        pTVar23 = TStringBuilderBase<char>::Append<TStringView<char>_>(pTVar23,&local_c08);
        TStringBuilderBase<char>::AppendfImpl(pTVar23,"%d");
        iStack_11d0 = (int)local_7e8.CurPos - (int)local_7e8.Base;
        local_11d8 = (FHost *)local_7e8.Base;
        uStack_c90 = CONCAT44(uStack_11cc,iStack_11d0);
        local_11c8 = "GET";
        uStack_11c0 = 3;
        local_bf8._12_4_ = uStack_11bc;
        local_bf8.Size = 3;
        local_c98.Ptr = (FHost *)local_7e8.Base;
        local_bf8.DataPtr = "GET";
        FEventLoop::Request(&local_1430,(TStringView<char> *)local_1388,&local_bf8,&local_c98,
                            (FRequestParams *)local_1380);
        local_8d0 = local_13f0;
        local_8c0 = 0;
        local_8d8 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::
                     _vftable_;
        local_8e8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                       ::Call;
        FEventLoop::Send(&local_1430,(FRequest *)local_1388,
                         (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                         local_8e8,0);
        if (local_1388 != (undefined1  [8])0x0) {
          FActivityNode::Destroy((FActivityNode *)local_1388);
        }
        TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_7e8);
        iVar31 = iVar31 + 1;
        piVar45 = local_1408;
        ppcVar40 = local_13f8;
        pTVar23 = local_1400;
        param_2 = local_1410;
      } while (iVar31 < (int)(uint)uVar34);
    }
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
    while (lVar38 != -1) {
      FWindowsPlatformProcess::SleepNoStats(fVar8);
      lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
    }
    if (local_1380 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_1380);
    }
    uVar34 = uVar34 + 1;
  } while (uVar34 < 0x40);
  local_1298.SendBufSize = -1;
  local_1298.RecvBufSize = -1;
  local_1298.HostName.DataPtr = (char *)0x0;
  local_1298.HostName.Size = 0;
  local_1298.Port = 0;
  local_1298.HttpVersion = One;
  local_1298.MaxInflight = '\x01';
  pTVar23 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()(&local_1408,(char *)0x0,0);
  local_11b8 = pTVar23->Base;
  iStack_11b0 = *(int *)&pTVar23->CurPos - (int)local_11b8;
  local_be8._12_4_ = uStack_11ac;
  local_be8.Size = iStack_11b0;
  local_be8.DataPtr = local_11b8;
  FConnectionPool::FParams::SetHostFromUrl(&local_1298,&local_be8);
  local_1298.ConnectionCount = 1;
  local_1298.VerifyCert = param_2;
  FConnectionPool::FConnectionPool((FConnectionPool *)local_1370,&local_1298);
  lVar38 = 0x3d;
  do {
    local_7b8.Base = local_798;
    local_7b8.bIsDynamic = false;
    local_7b8.bIsExternal = false;
    local_7b8.CurPos = local_798;
    local_7b8.End = (char *)local_788;
    TStringBuilderBase<char>::Append<char,0>(&local_7b8,"/data?head",10);
    iStack_11a0 = (int)local_7b8.CurPos - (int)local_7b8.Base;
    local_11a8 = (FHost *)local_7b8.Base;
    uStack_bd0 = CONCAT44(uStack_119c,iStack_11a0);
    local_1198 = "HEAD";
    uStack_1190 = 4;
    local_bc8._12_4_ = uStack_118c;
    local_bc8.Size = 4;
    local_bd8.Ptr = (FHost *)local_7b8.Base;
    local_bc8.DataPtr = "HEAD";
    FEventLoop::Request(&local_1430,(TStringView<char> *)local_1378,&local_bc8,&local_bd8,
                        (FRequestParams *)local_1370);
    local_890 = 0;
    local_8a8 = &
                ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_8a0 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
    local_8b8[0] = Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    FEventLoop::Send(&local_1430,(FRequest *)local_1378,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_8b8,
                     0);
    if (local_1378 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1378);
    }
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_7b8);
    lVar38 = lVar38 + -1;
  } while (lVar38 != 0);
  FWindowsPlatformProcess::SleepNoStats(fVar7);
  ppcVar40 = local_13f8;
  pTVar23 = local_1400;
  uVar41 = local_1410;
  lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
  while (lVar38 != -1) {
    FWindowsPlatformProcess::SleepNoStats(fVar8);
    lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
  }
  if (local_1370 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1370);
  }
  uVar35 = 0;
  do {
    local_1310 = (byte)uVar35 & 1;
    FIoBuffer::FIoBuffer(&local_1308);
    local_12e8.HostName.DataPtr = (char *)0x0;
    local_12e8.HostName.Size = 0;
    local_12e8.Port = 0;
    iVar31 = *piVar45;
    pTVar23->CurPos = pTVar23->Base;
    local_1270._8_8_ = "http://";
    if (iVar31 == 0x134b) {
      local_1270._8_8_ = "https://";
    }
    local_12e8.SendBufSize = -1;
    local_12e8.RecvBufSize = -1;
    local_12e8.ConnectionCount = 1;
    local_12e8.HttpVersion = One;
    local_12e8.MaxInflight = '\x01';
    operator<<<char,char_const_*>(pTVar23,(char **)(local_1270 + 8));
    operator<<<char,char_const_*_&>(pTVar23,ppcVar40);
    local_1188 = &s__;
    uStack_1180 = 1;
    local_bb8._12_4_ = uStack_117c;
    local_bb8.Size = 1;
    local_bb8.DataPtr = ":";
    pTVar19 = TStringBuilderBase<char>::Append<TStringView<char>_>(pTVar23,&local_bb8);
    TStringBuilderBase<char>::AppendfImpl(pTVar19,"%u");
    local_1178 = pTVar23->Base;
    iStack_1170 = *(int *)&pTVar23->CurPos - (int)local_1178;
    local_ba8._12_4_ = uStack_116c;
    local_ba8.Size = iStack_1170;
    local_ba8.DataPtr = local_1178;
    FConnectionPool::FParams::SetHostFromUrl(&local_12e8,&local_ba8);
    local_12e8.VerifyCert = uVar41;
    FConnectionPool::FConnectionPool((FConnectionPool *)local_13d0,&local_12e8);
    FEventLoop::FEventLoop(&local_1420);
    local_d58 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`18'::<lambda_7>,0,0>::
                 _vftable_;
    local_d50 = local_1310;
    local_d40 = 0;
    local_d48 = local_1308.CorePtr.Reference;
    if (local_1308.CorePtr.Reference != (BufCore *)0x0) {
      LOCK();
      *(int *)((longlong)local_1308.CorePtr.Reference + 0xc) =
           *(int *)((longlong)local_1308.CorePtr.Reference + 0xc) + 1;
      UNLOCK();
    }
    uStack_1160 = 0xd;
    local_d68[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    uStack_1150 = 3;
    local_1168 = "/data?stall=1";
    uStack_b90 = CONCAT44(uStack_115c,0xd);
    local_1158 = "GET";
    local_b88._12_4_ = uStack_114c;
    local_b88.Size = 3;
    local_b88.DataPtr = "GET";
    local_b98.Ptr = (FHost *)0x150d75248;
    FEventLoop::Request(&local_1420,(TStringView<char> *)local_1368,&local_b88,&local_b98,
                        (FRequestParams *)local_13d0);
    FEventLoop::Send(&local_1420,(FRequest *)local_1368,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_d68,
                     0);
    if (local_1368 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1368);
    }
    uStack_1140 = 5;
    local_b48 = &
                ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_1130 = 3;
    local_b40 = `UE::IoStore::HTTP::HttpTest'::__l18::<lambda_8>::<lambda_invoker_cdecl>;
    local_b58[0] = Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    local_b30 = 0;
    local_1148 = "/data";
    uStack_b70 = CONCAT44(uStack_113c,5);
    local_1138 = "GET";
    local_d38._12_4_ = uStack_112c;
    local_d38.Size = 3;
    local_d38.DataPtr = "GET";
    local_b78.Ptr = (FHost *)0x150d7520c;
    FEventLoop::Request(&local_1420,(TStringView<char> *)local_1360,&local_d38,&local_b78,
                        (FRequestParams *)local_13d0);
    FEventLoop::Send(&local_1420,(FRequest *)local_1360,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_b58,
                     0);
    if (local_1360 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1360);
    }
    uStack_1120 = 5;
    local_b18 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::
                 _vftable_;
    local_b10 = local_13f0;
    uStack_1110 = 3;
    local_b28[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    local_1128 = "/data";
    uStack_d20 = CONCAT44(uStack_111c,5);
    local_1118 = "GET";
    local_d18._12_4_ = uStack_110c;
    local_d18.Size = 3;
    local_d18.DataPtr = "GET";
    local_b00 = 0;
    local_d28.Ptr = (FHost *)0x150d7520c;
    FEventLoop::Request(&local_1420,(TStringView<char> *)local_1358,&local_d18,&local_d28,
                        (FRequestParams *)local_13d0);
    FEventLoop::Send(&local_1420,(FRequest *)local_1358,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_b28,
                     0);
    if (local_1358 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1358);
    }
    uStack_1100 = 5;
    local_ae8 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::
                 _vftable_;
    local_ae0 = local_13f0;
    uStack_10f0 = 3;
    local_af8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    local_1108 = "/data";
    uStack_d00 = CONCAT44(uStack_10fc,5);
    local_10f8 = "GET";
    local_cf8._12_4_ = uStack_10ec;
    local_cf8.Size = 3;
    local_cf8.DataPtr = "GET";
    local_ad0 = 0;
    local_d08.Ptr = (FHost *)0x150d7520c;
    FEventLoop::Request(&local_1420,(TStringView<char> *)local_1350,&local_cf8,&local_d08,
                        (FRequestParams *)local_13d0);
    FEventLoop::Send(&local_1420,(FRequest *)local_1350,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_af8,
                     0);
    if (local_1350 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1350);
    }
    iVar31 = -1;
    if ((uVar35 & 1) != 0) {
      (local_1420.Impl)->FailTimeoutMs = 1000;
      iVar31 = -1;
      if (((byte)uVar35 & 3) == 1) {
        iVar31 = 1000;
      }
    }
    do {
      uVar16 = FEventLoop::FImpl::Tick(local_1420.Impl,iVar31);
    } while (uVar16 != 0);
    uStack_10e0 = 8;
    local_ab8 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_4>,0,0>::
                 _vftable_;
    local_ab0 = &local_588;
    uStack_10d0 = 3;
    local_ac8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    local_10e8 = "/data/23";
    uStack_ce0 = CONCAT44(uStack_10dc,8);
    local_10d8 = "GET";
    local_cd8._12_4_ = uStack_10cc;
    local_cd8.Size = 3;
    local_cd8.DataPtr = "GET";
    local_aa0 = 0;
    local_ce8.Ptr = (FHost *)0x150d75258;
    FEventLoop::Request(&local_1420,(TStringView<char> *)local_1348,&local_cd8,&local_ce8,
                        (FRequestParams *)local_13d0);
    FEventLoop::Send(&local_1420,(FRequest *)local_1348,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_ac8,
                     0);
    if (local_1348 != (undefined1  [8])0x0) {
      FActivityNode::Destroy((FActivityNode *)local_1348);
    }
    do {
      uVar16 = FEventLoop::FImpl::Tick(local_1420.Impl,iVar31);
    } while (uVar16 != 0);
    FEventLoop::~FEventLoop(&local_1420);
    if (local_13d0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_13d0);
    }
    FIoBuffer::~FIoBuffer(&local_1308);
    uVar35 = uVar35 + 1;
  } while ((int)uVar35 < 0xe);
  pTVar19 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_1>::operator()
                      (&local_1408,(char *)0x0,0x2ab2);
  uStack_10c0 = 3;
  local_f58._padding_ = 0;
  local_f58._padding_ = 0;
  local_10c8 = "GET";
  local_10b8 = pTVar19->Base;
  local_f58._padding_ = CONCAT44(uStack_10bc,3);
  iStack_10b0 = *(int *)&pTVar19->CurPos - (int)local_10b8;
  local_cc8._12_4_ = uStack_10ac;
  local_cc8.Size = iStack_10b0;
  local_f58._padding_ = 0;
  local_f58._padding_._0_4_ = 0;
  local_f58._padding_._4_4_ = 0x1000100;
  local_f58._padding_ = 0x150d74d54;
  local_f58.bFollow30x = false;
  local_f58.HttpVersion = Default;
  local_f58._padding_._0_4_ = 0;
  local_cc8.DataPtr = local_10b8;
  local_13a8.Ptr = FActivityNode::Create(&local_f58,&local_cc8,0);
  if (local_13a8.Ptr == (FActivityNode *)0x0) {
    local_13a8.Ptr = (FActivityNode *)0x0;
  }
  else {
    Trace((FActivity *)local_13a8.Ptr,ActivityCreate,0);
  }
  local_10a8 = "GET";
  local_e58._padding_ = 0;
  local_e58._padding_ = 0;
  local_1098 = "http://thisdoesnotexistihope/";
  uStack_10a0 = 3;
  local_e58._padding_ = CONCAT44(uStack_109c,3);
  uStack_1090 = 0x1d;
  local_cb8._12_4_ = uStack_108c;
  local_cb8.Size = 0x1d;
  local_cb8.DataPtr = "http://thisdoesnotexistihope/";
  local_e58._padding_ = 0;
  local_e58._padding_._0_4_ = 0;
  local_e58._padding_._4_4_ = 0x1000100;
  local_e58._padding_ = 0x150d74d54;
  local_e58.bFollow30x = false;
  local_e58.HttpVersion = Default;
  local_e58._padding_._0_4_ = 0;
  local_13a0.Ptr = FActivityNode::Create(&local_e58,&local_cb8,0);
  if (local_13a0.Ptr == (FActivityNode *)0x0) {
    local_13a0.Ptr = (FActivityNode *)0x0;
  }
  else {
    Trace((FActivity *)local_13a0.Ptr,ActivityCreate,0);
  }
  local_a70 = 0;
  local_a88 = &
              ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a80 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_a98[0] = Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  FEventLoop::Send(&local_1430,&local_13a8,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_a98,0)
  ;
  local_a40 = 0;
  local_a58 = &
              ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a50 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  local_a68[0] = Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
  FEventLoop::Send(&local_1430,&local_13a0,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_a68,0)
  ;
  FWindowsPlatformProcess::SleepNoStats(fVar7);
  lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
  while (lVar38 != -1) {
    FWindowsPlatformProcess::SleepNoStats(fVar8);
    lVar38 = *(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0;
  }
  ppFVar39 = &local_1398;
  lVar38 = 2;
  do {
    ppFVar1 = ppFVar39 + -1;
    ppFVar39 = ppFVar39 + -1;
    lVar38 = lVar38 + -1;
    if ((FActivityNode *)*ppFVar1 != (FActivityNode *)0x0) {
      FActivityNode::Destroy((FActivityNode *)*ppFVar1);
    }
  } while (lVar38 != 0);
  bVar36 = 0;
  pcVar44 = local_188;
  do {
    bVar13 = bVar36 * 'K' + 0x4a;
    bVar36 = bVar36 * -7 - 8;
    *pcVar44 = (bVar13 / 0x1a) * -0x1a + 'A' + bVar13;
    pcVar44 = pcVar44 + 1;
  } while (pcVar44 != local_87);
  iVar31 = 0x10f75;
  local_1410 = CONCAT44(local_1410._4_4_,0x10f75);
  do {
    pFVar33 = local_13e8;
    iVar47 = *piVar45;
    local_1258 = "/data";
    pTVar23->CurPos = pTVar23->Base;
    local_1270._16_8_ = "http://";
    if (iVar47 == 0x134b) {
      local_1270._16_8_ = "https://";
    }
    operator<<<char,char_const_*>(pTVar23,(char **)(local_1270 + 0x10));
    operator<<<char,char_const_*_&>(pTVar23,ppcVar40);
    pTVar19 = TStringBuilderBase<char>::Append<char,0>(pTVar23,":",1);
    TStringBuilderBase<char>::AppendfImpl(pTVar19,"%u");
    pTVar23 = operator<<<char,char_const_*_&>(pTVar23,&local_1258);
    uStack_1080 = 4;
    local_e18._padding_ = 0;
    local_e18._padding_ = 0;
    local_1078 = pTVar23->Base;
    iStack_1070 = *(int *)&pTVar23->CurPos - (int)local_1078;
    local_ca8._12_4_ = uStack_106c;
    local_ca8.Size = iStack_1070;
    local_1088 = "HEAD";
    local_e18._padding_ = CONCAT44(uStack_107c,4);
    pFVar20 = (FActivityNode *)&GDefaultParams;
    if (pFVar33 != (FActivityNode *)0x0) {
      pFVar20 = pFVar33;
    }
    pFVar33 = (FActivityNode *)0x0;
    local_e18._padding_ = 0;
    local_e18._padding_._0_4_ = 0;
    local_e18._padding_._4_2_ = *(undefined2 *)&pFVar20->field_0xc;
    local_e18.bFollow30x = pFVar20->field_0xe == '\x01';
    local_e18._padding_._0_4_ = *(undefined4 *)&pFVar20->field_0x8;
    local_e18._padding_._7_1_ = pFVar20->field_0xf == '\x01';
    local_e18.HttpVersion = pFVar20->field_0x10;
    local_e18._padding_._6_1_ = 0;
    local_e18._padding_ = 0x150d73068;
    local_ca8.DataPtr = local_1078;
    pFVar20 = FActivityNode::Create(&local_e18,&local_ca8,*(ulong64 *)pFVar20);
    if (pFVar20 != (FActivityNode *)0x0) {
      Trace((FActivity *)pFVar20,ActivityCreate,0);
      pFVar33 = pFVar20;
    }
    local_13e0 = (char **)CONCAT44(local_13e0._4_4_,iVar31);
    local_13c0.Ptr = pFVar33;
    do {
      cVar14 = bVar36 * 'K';
      bVar36 = bVar36 * -7 - 8;
      uVar35 = (uint)(byte)(cVar14 + 0x4a);
      iVar47 = uVar35 + 1;
      iVar31 = bVar36 + 1;
      if ((*(char *)pFVar33 != '\0') &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("State == EState::Build",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                              ,0xce,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(short *)&pFVar33->field_0x6 == -1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("HeaderCount < 0xffff",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                              ,0xd0,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(short *)&pFVar33->field_0x6 = *(short *)&pFVar33->field_0x6 + 1;
      this = &pFVar33->field_0x88;
      uVar17 = *(int *)this + *(uint *)&pFVar33->field_0x94 & 1;
      uVar16 = 2 - uVar17;
      if (uVar17 == 0) {
        uVar16 = 0;
      }
      uVar35 = uVar16 + (*(uint *)&pFVar33->field_0x94 & 0x7fffffff) +
               (uVar35 + iVar31 + 6 & 0xfffffffe);
      if (*(uint *)&pFVar33->field_0x90 < uVar35) {
        FBuffer::Extend((FBuffer *)this,uVar35,0x100);
      }
      uVar17 = *(uint *)&pFVar33->field_0x94;
      lVar38 = *(longlong *)this;
      lVar43 = (ulonglong)(uVar17 & 0x7fffffff) + (ulonglong)uVar16;
      pvVar46 = (void *)(lVar38 + 4 + lVar43);
      *(uint *)&pFVar33->field_0x94 = (uVar17 ^ uVar35) & 0x7fffffff ^ uVar17;
      *(short *)(lVar43 + lVar38) = (short)iVar47;
      *(short *)(lVar43 + 2 + lVar38) = (short)iVar31;
      memcpy(pvVar46,local_188,(longlong)iVar47);
      memcpy((void *)((longlong)pvVar46 + (longlong)iVar47),local_188,(longlong)iVar31);
      iVar31 = (int)local_13e0 - (iVar31 + iVar47);
      local_13e0 = (char **)CONCAT44(local_13e0._4_4_,iVar31);
    } while (0 < iVar31);
    local_968 = &
                ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_950 = 0;
    local_960 = `UE::IoStore::HTTP::HttpTest'::__l34::<lambda_10>::<lambda_invoker_cdecl>;
    local_978[0] = Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    FEventLoop::Send(&local_1430,&local_13c0,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_978,
                     0);
    FWindowsPlatformProcess::SleepNoStats(fVar7);
    pFVar9 = local_13d8;
    aVar4 = local_13d8->Impl->FreeSlots;
    while (aVar4 != (atomic<unsigned___int64>)0xffffffffffffffff) {
      FWindowsPlatformProcess::SleepNoStats(fVar8);
      aVar4 = pFVar9->Impl->FreeSlots;
    }
    if (local_13c0.Ptr != (FActivityNode *)0x0) {
      FActivityNode::Destroy(local_13c0.Ptr);
    }
    pTVar23 = local_1400;
    iVar31 = (int)local_1410 + 0x10f75;
    local_1410 = CONCAT44(local_1410._4_4_,iVar31);
    piVar45 = local_1408;
    ppcVar40 = local_13f8;
  } while (iVar31 < 0x200000);
  local_fe0 = 0;
  local_fe8 = "/data?slowly=1";
  ppcVar40 = &local_fe8;
  local_fd0 = 1;
  local_fd8 = "/data?disconnect=1";
  local_1250.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  local_1398 = &local_1250;
  local_13e0 = ppcVar40;
  pFStack_1390 = &local_588;
  do {
    local_858 = Core::Private::Function::
                TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                ::Call;
    local_830 = (longlong *)0x0;
    if (*(char *)(ppcVar40 + 1) == '\0') {
      local_778 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::
                   _vftable_;
      ppuVar12 = local_778;
      local_858 = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                  ::Call;
      uVar35 = local_1418 | 2;
      pFStack_770 = local_13f0;
      ppcVar24 = local_788;
      local_778._0_4_ = 0x50d75728;
      local_760 = (undefined ***)0x0;
      local_788[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                     ::Call;
      local_848 = local_778._0_4_;
      local_778 = ppuVar12;
      pFStack_840 = local_13f0;
      local_838 = local_768;
    }
    else {
      local_748 = &Core::Private::Function::
                   TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`37'::<lambda_11>,0,0>::
                   _vftable_;
      ppuVar12 = local_748;
      uStack_740 = &local_1250;
      uStack_738 = &local_588;
      ppcVar24 = local_758;
      uVar35 = local_1418 | 1;
      local_748._0_4_ = 0x50d75788;
      local_730 = (undefined ***)0x0;
      local_758[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                     ::Call;
      local_848 = local_748._0_4_;
      local_748 = ppuVar12;
      pFStack_840 = &local_1250;
      local_838 = &local_588;
    }
    uStack_844 = 1;
    local_1418 = uVar35;
    *ppcVar24 = (code *)0x0;
    local_13e0 = ppcVar40;
    if ((uVar35 & 2) != 0) {
      uVar35 = uVar35 & 0xfffffffd;
      local_1418 = uVar35;
      if (local_788[0] != (code *)0x0) {
        pppuVar29 = &local_778;
        if (local_760 != (undefined ***)0x0) {
          pppuVar29 = local_760;
        }
        (*(code *)(*pppuVar29)[2])();
      }
    }
    if (((uVar35 & 1) != 0) && (local_1418 = uVar35 & 0xfffffffe, local_758[0] != (code *)0x0)) {
      pppuVar29 = &local_748;
      if (local_730 != (undefined ***)0x0) {
        pppuVar29 = local_730;
      }
      (*(code *)(*pppuVar29)[2])();
    }
    pcVar48 = "http://";
    pcVar44 = pTVar23->Base;
    pcVar49 = *ppcVar40;
    local_1410 = CONCAT44(local_1410._4_4_,*local_1408);
    if (*local_1408 == 0x134b) {
      pcVar48 = "https://";
    }
    pTVar23->CurPos = pcVar44;
    sVar25 = strlen(pcVar48);
    uVar41 = (ulong64)(int)sVar25;
    if (pTVar23->End < pcVar44 + uVar41) {
      TStringBuilderBase<char>::Extend(pTVar23,uVar41);
      pcVar44 = pTVar23->CurPos;
    }
    if ((int)sVar25 != 0) {
      pvVar46 = FGenericPlatformString::Memcpy(pcVar44,pcVar48,uVar41);
      pTVar23->CurPos = (char *)((longlong)pvVar46 + uVar41);
    }
    operator<<<char,char_const_*_&>(pTVar23,local_13f8);
    if (pTVar23->End < pTVar23->CurPos + 1) {
      TStringBuilderBase<char>::Extend(pTVar23,1);
    }
    pvVar46 = FGenericPlatformString::Memcpy(pTVar23->CurPos,&s__,1);
    pTVar23->CurPos = (char *)((longlong)pvVar46 + 1);
    TStringBuilderBase<char>::AppendfImpl(pTVar23,"%u");
    if (pcVar49 != (char *)0x0) {
      sVar25 = strlen(pcVar49);
      uVar41 = (ulong64)(int)sVar25;
      if (pTVar23->End < pTVar23->CurPos + uVar41) {
        TStringBuilderBase<char>::Extend(pTVar23,uVar41);
      }
      if ((int)sVar25 != 0) {
        pvVar46 = FGenericPlatformString::Memcpy(pTVar23->CurPos,pcVar49,uVar41);
        pTVar23->CurPos = (char *)((longlong)pvVar46 + uVar41);
      }
    }
    local_13c8 = &local_1424;
    local_1424 = 0x100;
    do {
      pFVar32 = local_688;
      local_1427 = *(undefined1 *)local_13c8;
      do {
        local_888[0] = local_858;
        local_860 = 0;
        if (local_858 != (code *)0x0) {
          plVar30 = (longlong *)&local_848;
          if (local_830 != (longlong *)0x0) {
            plVar30 = local_830;
          }
          (**(code **)*plVar30)(plVar30,local_888 + 2);
        }
        local_1058 = pTVar23->Base;
        iStack_1050 = *(int *)&pTVar23->CurPos - (int)local_1058;
        local_dd8._padding_ = 0;
        local_dd8._padding_ = 0;
        local_b68._12_4_ = uStack_104c;
        local_b68.Size = iStack_1050;
        pFVar33 = (FActivityNode *)&GDefaultParams;
        if (local_13e8 != (FActivityNode *)0x0) {
          pFVar33 = local_13e8;
        }
        local_1068 = "GET";
        uStack_1060 = 3;
        local_dd8._padding_ = CONCAT44(uStack_105c,3);
        local_dd8._padding_ = 0;
        local_dd8._padding_._4_2_ = *(undefined2 *)&pFVar33->field_0xc;
        local_dd8.bFollow30x = pFVar33->field_0xe == '\x01';
        local_dd8._padding_._0_4_ = *(undefined4 *)&pFVar33->field_0x8;
        local_dd8._padding_._7_1_ = pFVar33->field_0xf == '\x01';
        local_dd8.HttpVersion = pFVar33->field_0x10;
        local_dd8._padding_._0_4_ = 0;
        local_dd8._padding_._6_1_ = 0;
        local_dd8._padding_ = 0x150d74d54;
        local_b68.DataPtr = local_1058;
        pFVar20 = FActivityNode::Create(&local_dd8,&local_b68,*(ulong64 *)pFVar33);
        pFVar33 = (FActivityNode *)0x0;
        if (pFVar20 != (FActivityNode *)0x0) {
          Trace((FActivity *)pFVar20,ActivityCreate,0);
          pFVar33 = pFVar20;
        }
        local_1048 = "*/*";
        uStack_1040 = 3;
        local_c88._12_4_ = uStack_103c;
        local_c88.Size = 3;
        local_1038 = "Accept";
        uStack_1030 = 6;
        local_c88.DataPtr = "*/*";
        local_c78.DataPtr._0_4_ = 0x50d7381c;
        local_c78.DataPtr._4_4_ = 1;
        local_c78.Size = 6;
        local_c78._12_4_ = uStack_102c;
        local_1340.Ptr = pFVar33;
        pFVar22 = FRequest::Header(&local_1340,&local_c78,&local_c88);
        pBVar26 = (BufCore *)
                  FEventLoop::Send(&local_1430,pFVar22,
                                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)>
                                    *)local_888,0);
        (pFVar32->CorePtr).Reference = pBVar26;
        if (local_1340.Ptr != (FActivityNode *)0x0) {
          FActivityNode::Destroy(local_1340.Ptr);
        }
        pFVar32 = pFVar32 + 1;
      } while (pFVar32 != &local_588);
      local_1438[0] = local_1427;
      FWindowsPlatformProcess::SleepNoStats(fVar7);
      puVar10 = local_13c8;
      pFVar9 = local_13d8;
      aVar4 = local_13d8->Impl->FreeSlots;
      while (aVar4 != (atomic<unsigned___int64>)0xffffffffffffffff) {
        FWindowsPlatformProcess::SleepNoStats(fVar8);
        aVar4 = pFVar9->Impl->FreeSlots;
      }
      local_13c8 = (undefined2 *)((longlong)puVar10 + 1);
    } while (local_13c8 != &local_1422);
    local_1438[0] = 0;
    if (local_858 != (code *)0x0) {
      plVar30 = (longlong *)&local_848;
      if (local_830 != (longlong *)0x0) {
        plVar30 = local_830;
      }
      (**(code **)(*plVar30 + 0x10))();
    }
    ppcVar40 = local_13e0 + 2;
    local_13e0 = ppcVar40;
  } while (ppcVar40 != &local_fc8);
  pcVar49 = "http://";
  local_13c8 = (undefined2 *)CONCAT44(local_13c8._4_4_,3);
  pcVar44 = pTVar23->Base;
  iVar31 = *local_1408;
  pTVar23->CurPos = pcVar44;
  if (iVar31 == 0x134b) {
    pcVar49 = "https://";
  }
  sVar25 = strlen(pcVar49);
  uVar41 = (ulong64)(int)sVar25;
  if (pTVar23->End < pcVar44 + uVar41) {
    TStringBuilderBase<char>::Extend(pTVar23,uVar41);
    pcVar44 = pTVar23->CurPos;
  }
  if ((int)sVar25 != 0) {
    pvVar46 = FGenericPlatformString::Memcpy(pcVar44,pcVar49,uVar41);
    pTVar23->CurPos = (char *)((longlong)pvVar46 + uVar41);
  }
  operator<<<char,char_const_*_&>(pTVar23,local_13f8);
  if (pTVar23->End < pTVar23->CurPos + 1) {
    TStringBuilderBase<char>::Extend(pTVar23,1);
  }
  pvVar46 = FGenericPlatformString::Memcpy(pTVar23->CurPos,&s__,1);
  pTVar23->CurPos = (char *)((longlong)pvVar46 + 1);
  TStringBuilderBase<char>::AppendfImpl(pTVar23,"%u");
  if (pTVar23->End < pTVar23->CurPos + 5) {
    TStringBuilderBase<char>::Extend(pTVar23,5);
  }
  pvVar46 = FGenericPlatformString::Memcpy(pTVar23->CurPos,"/data",5);
  plVar30 = local_6c8;
  pTVar23->CurPos = (char *)((longlong)pvVar46 + 5);
  local_1028 = pTVar23->Base;
  local_1020 = *(int *)&pTVar23->CurPos - *(int *)&pTVar23->Base;
  local_d98 = &local_13c8;
  local_6c8[6] = 0;
  local_d90 = &local_1430;
  local_d88 = &local_1028;
  local_d80 = &local_13e8;
  local_d78 = &local_13f0;
  local_6c8[0] = 0;
  local_6c8[1] = 0;
  local_6c8[2] = 0;
  local_6c8[3] = 0;
  local_6c8[4] = 0;
  local_6c8[5] = 0;
  do {
    pFVar27 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar18 = (FTaskBase *)0x0;
    if (pFVar27 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(pFVar27,2,true);
      pFVar27->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::IoStore::HTTP::HttpTest'::`54'::<lambda_13>,void,void>::
            _vftable_;
      Tasks::Private::FTaskBase::Init(pFVar27,L"StressTask",Default,None,None);
      pFVar27[1]._padding_ = (longlong)&local_d98;
      pFVar27->_padding_ =
           (longlong)
           &Tasks::Private::TExecutableTask<`UE::IoStore::HTTP::HttpTest'::`54'::<lambda_13>_>::
            _vftable_;
      pFVar18 = pFVar27;
    }
    Tasks::Private::FTaskBase::TryLaunch(pFVar18,0x100);
    if (plVar30 == local_c58) {
      if (pFVar18 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar18->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          puVar28 = (undefined8 *)pFVar18->_padding_;
          goto LAB_144577677;
        }
      }
    }
    else {
      pFVar27 = (FTaskBase *)*plVar30;
      *plVar30 = (longlong)pFVar18;
      if (pFVar27 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar27->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          puVar28 = (undefined8 *)pFVar27->_padding_;
          pFVar18 = pFVar27;
LAB_144577677:
          (*(code *)*puVar28)(pFVar18,1);
        }
      }
    }
    pFVar9 = local_13d8;
    plVar30 = plVar30 + 1;
    if (plVar30 == local_6c8 + 7) {
      plVar30 = local_6c8;
      do {
        if ((FTaskBase *)*plVar30 != (FTaskBase *)0x0) {
          Tasks::Private::FTaskBase::Wait((FTaskBase *)*plVar30);
        }
        plVar30 = plVar30 + 1;
      } while (plVar30 != local_6c8 + 7);
      FWindowsPlatformProcess::SleepNoStats(fVar7);
      aVar4 = pFVar9->Impl->FreeSlots;
      while (aVar4 != (atomic<unsigned___int64>)0xffffffffffffffff) {
        FWindowsPlatformProcess::SleepNoStats(fVar8);
        aVar4 = pFVar9->Impl->FreeSlots;
      }
      plVar30 = local_6c8 + 7;
      lVar38 = 7;
      do {
        puVar28 = (undefined8 *)plVar30[-1];
        plVar30 = plVar30 + -1;
        lVar38 = lVar38 + -1;
        if (puVar28 != (undefined8 *)0x0) {
          LOCK();
          piVar45 = (int *)(puVar28 + 6);
          iVar31 = *piVar45;
          *piVar45 = *piVar45 + -1;
          UNLOCK();
          if (iVar31 == 1) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      } while (lVar38 != 0);
      local_1410 = CONCAT44(local_1410._4_4_,1);
      pFStack_1390 = (FIoBuffer *)CONCAT44(local_1008._12_4_,(int)pFStack_1390);
      pTVar23 = local_1400;
      do {
        local_828.Base = local_808;
        local_828.bIsDynamic = false;
        local_828.bIsExternal = false;
        local_828.CurPos = local_808;
        local_828.End = (char *)&local_7e8;
        pvVar46 = FGenericPlatformString::Memcpy(local_808,"/data?tamper=",0xd);
        local_828.CurPos = (char *)((longlong)pvVar46 + 0xd);
        TStringBuilderBase<char>::AppendfImpl(&local_828,"%d");
        if (local_828.End < (TStringBuilderBase<char> *)(local_828.CurPos + 1)) {
          TStringBuilderBase<char>::Extend(&local_828,1);
        }
        pcVar49 = local_828.Base;
        pcVar48 = "http://";
        *local_828.CurPos = '\0';
        pcVar44 = pTVar23->Base;
        local_13e0 = (char **)CONCAT44(local_13e0._4_4_,*local_1408);
        if (*local_1408 == 0x134b) {
          pcVar48 = "https://";
        }
        pTVar23->CurPos = pcVar44;
        sVar25 = strlen(pcVar48);
        uVar41 = (ulong64)(int)sVar25;
        if (pTVar23->End < pcVar44 + uVar41) {
          TStringBuilderBase<char>::Extend(pTVar23,uVar41);
          pcVar44 = pTVar23->CurPos;
        }
        if ((int)sVar25 != 0) {
          pvVar46 = FGenericPlatformString::Memcpy(pcVar44,pcVar48,uVar41);
          pTVar23->CurPos = (char *)((longlong)pvVar46 + uVar41);
        }
        operator<<<char,char_const_*_&>(pTVar23,local_13f8);
        if (pTVar23->End < pTVar23->CurPos + 1) {
          TStringBuilderBase<char>::Extend(pTVar23,1);
        }
        pvVar46 = FGenericPlatformString::Memcpy(pTVar23->CurPos,&s__,1);
        pTVar23->CurPos = (char *)((longlong)pvVar46 + 1);
        TStringBuilderBase<char>::AppendfImpl(pTVar23,"%u");
        if (pcVar49 != (char *)0x0) {
          sVar25 = strlen(pcVar49);
          pcVar44 = pTVar23->CurPos;
          uVar41 = (ulong64)(int)sVar25;
          if (pTVar23->End < pcVar44 + uVar41) {
            TStringBuilderBase<char>::Extend(pTVar23,uVar41);
            pcVar44 = pTVar23->CurPos;
          }
          if ((int)sVar25 != 0) {
            pvVar46 = FGenericPlatformString::Memcpy(pcVar44,pcVar49,uVar41);
            pTVar23->CurPos = (char *)((longlong)pvVar46 + uVar41);
          }
        }
        pFVar32 = (FIoBuffer *)pTVar23->Base;
        lVar38 = 0xd;
        pFStack_1390 = (FIoBuffer *)
                       CONCAT44(pFStack_1390._4_4_,*(int *)&pTVar23->CurPos - (int)pFVar32);
        pFVar11 = pFStack_1390;
        local_1398 = pFVar32;
        do {
          local_1018 = "GET";
          uStack_1010 = 3;
          local_f98._padding_ = CONCAT44(uStack_100c,3);
          pFVar33 = (FActivityNode *)&GDefaultParams;
          if (local_13e8 != (FActivityNode *)0x0) {
            pFVar33 = local_13e8;
          }
          local_f98._padding_ = 0;
          local_f98._padding_._0_4_ = 0;
          local_f98._padding_ = 0;
          local_f98._padding_ = 0;
          local_f98._padding_._6_1_ = 0;
          local_f98._padding_._4_2_ = *(undefined2 *)&pFVar33->field_0xc;
          local_f98.bFollow30x = pFVar33->field_0xe == '\x01';
          local_f98._padding_._0_4_ = *(undefined4 *)&pFVar33->field_0x8;
          local_f98._padding_._7_1_ = pFVar33->field_0xf == '\x01';
          local_f98.HttpVersion = pFVar33->field_0x10;
          local_f98._padding_ = 0x150d74d54;
          local_1008._8_8_ = pFVar11;
          local_1008.DataPtr = (char *)pFVar32;
          pFVar20 = FActivityNode::Create(&local_f98,&local_1008,*(ulong64 *)pFVar33);
          pFVar33 = (FActivityNode *)0x0;
          if (pFVar20 != (FActivityNode *)0x0) {
            Trace((FActivity *)pFVar20,ActivityCreate,0);
            pFVar33 = pFVar20;
          }
          local_a20 = `UE::IoStore::HTTP::HttpTest'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
          local_a10 = 0;
          local_a38[0] = Core::Private::Function::
                         TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                         ::Call;
          local_a28 = &
                      ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_1338.Ptr = pFVar33;
          FEventLoop::Send(&local_1430,&local_1338,
                           (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                           local_a38,0);
          if (local_1338.Ptr != (FActivityNode *)0x0) {
            FActivityNode::Destroy(local_1338.Ptr);
          }
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
        FWindowsPlatformProcess::SleepNoStats(fVar7);
        pFVar9 = local_13d8;
        pTVar23 = local_1400;
        aVar4 = local_13d8->Impl->FreeSlots;
        while (aVar4 != (atomic<unsigned___int64>)0xffffffffffffffff) {
          FWindowsPlatformProcess::SleepNoStats(fVar8);
          aVar4 = pFVar9->Impl->FreeSlots;
        }
        TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_828);
        pFVar18 = local_1330;
        iVar31 = (int)local_1410 + 1;
        local_1410 = CONCAT44(local_1410._4_4_,iVar31);
      } while (iVar31 < 0x65);
      local_1428 = 1;
      if (local_1330 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::Wait(local_1330);
      }
      if (*(longlong *)&((local_1430.Impl)->FreeSlots).field_0x0 != -1) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Loop.IsIdle()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                            ,0x3a5,L"");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (pFVar18 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar18->RefCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar18->_padding_)(pFVar18,1);
        }
      }
      if (local_1430.Impl != (FImpl *)0x0) {
        if ((local_1430.Impl)->BusyCount != 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("BusyCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0x3b9,L"");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        DestructItems<UE::IoStore::HTTP::FHostGroup,int>
                  ((FHostGroup *)((local_1430.Impl)->Groups).AllocatorInstance.Data,
                   ((local_1430.Impl)->Groups).ArrayNum);
        pFVar5 = ((local_1430.Impl)->Groups).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        if (((local_1430.Impl)->Pending).Head != (FActivityNode *)0x0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Head == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0xc5,L"");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)local_1430.Impl);
        ::operator_delete(local_1430.Impl,0x80);
      }
      pcVar44 = local_188;
      lVar38 = 0x40;
      do {
        pBVar26 = *(BufCore **)(pcVar44 + -0x10);
        pcVar44 = pcVar44 + -0x10;
        lVar38 = lVar38 + -1;
        if (pBVar26 != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(pBVar26);
          LOCK();
          piVar45 = &pBVar26->NumRefs;
          iVar31 = *piVar45;
          *piVar45 = *piVar45 + -1;
          UNLOCK();
          if (iVar31 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar26);
            ::operator_delete(pBVar26,0x20);
          }
        }
      } while (lVar38 != 0);
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_728);
      return;
    }
  } while( true );
}

// IasHttpTest @ 144577c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::IoStore::HTTP::IasHttpTest(char *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  FCertRoots FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  size_t sVar12;
  FActivityNode *pFVar13;
  FCertRoots *pFVar14;
  IFileManager *pIVar15;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  char *pcVar19;
  FActivityNode *pFVar20;
  ulong64 uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStack_3a8 [32];
  FRequest local_388;
  FEventLoop local_380 [2];
  FIoBuffer local_370;
  FIoBuffer local_368;
  FCertRoots local_360;
  uchar *local_358;
  ulonglong uStack_350;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_348;
  FCertRoots local_338;
  char *local_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  char *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FParams local_308;
  TStringView<char> local_2c8;
  TMemoryView<void_const_> local_2b8;
  FString local_2a8;
  TMemoryView<void_const_> local_298;
  code *local_288 [2];
  undefined **local_278;
  FIoBuffer *local_270;
  undefined8 local_260;
  TStringBuilderBase<char> local_258;
  char local_238 [64];
  WSADATA local_1f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  iVar9 = WSAStartup(0x202,&local_1f8);
  if (iVar9 != 0xa9e0493) {
    MiscTest();
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.CurPos = local_238;
    local_258.End = (char *)&local_1f8;
    pvVar11 = FGenericPlatformString::Memcpy(local_238,"http://",7);
    pFVar20 = (FActivityNode *)0x0;
    iVar9 = 0;
    pcVar19 = (char *)((longlong)pvVar11 + 7);
    local_258.CurPos = pcVar19;
    if (param_1 != (char *)0x0) {
      sVar12 = strlen(param_1);
      iVar9 = (int)sVar12;
    }
    uVar21 = (ulong64)iVar9;
    if (local_258.End < (WSADATA *)(pcVar19 + uVar21)) {
      TStringBuilderBase<char>::Extend(&local_258,uVar21);
      pcVar19 = local_258.CurPos;
    }
    if (iVar9 != 0) {
      pvVar11 = FGenericPlatformString::Memcpy(pcVar19,param_1,uVar21);
      pcVar19 = (char *)((longlong)pvVar11 + uVar21);
      local_258.CurPos = pcVar19;
    }
    if (local_258.End < (WSADATA *)(pcVar19 + 8)) {
      TStringBuilderBase<char>::Extend(&local_258,8);
      pcVar19 = local_258.CurPos;
    }
    pvVar11 = FGenericPlatformString::Memcpy(pcVar19,":9493/ca",8);
    local_258.CurPos = (char *)((longlong)pvVar11 + 8);
    FIoBuffer::FIoBuffer(&local_370);
    FEventLoop::FEventLoop(local_380);
    iStack_310 = (int)local_258.CurPos - (int)local_258.Base;
    local_318 = local_258.Base;
    local_308._padding_ = 0;
    local_308._padding_ = 0;
    local_2c8._12_4_ = uStack_30c;
    local_2c8.Size = iStack_310;
    local_330 = "GET";
    uStack_328 = 3;
    local_308._padding_ = CONCAT44(uStack_324,3);
    local_308._padding_ = 0;
    local_308._padding_._0_4_ = 0;
    local_308._padding_ = 0x150d74d54;
    local_308._padding_._4_4_ = 0x1000100;
    local_308.bFollow30x = false;
    local_308.HttpVersion = Default;
    local_308._padding_._0_4_ = 0;
    local_2c8.DataPtr = local_258.Base;
    pFVar13 = FActivityNode::Create(&local_308,&local_2c8,0);
    if (pFVar13 != (FActivityNode *)0x0) {
      Trace((FActivity *)pFVar13,ActivityCreate,0);
      pFVar20 = pFVar13;
    }
    local_388.Ptr = pFVar20;
    if ((*(char *)pFVar20 != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("State == EState::Build",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0xce,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(short *)&pFVar20->field_0x6 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderCount < 0xffff",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0xd0,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(short *)&pFVar20->field_0x6 = *(short *)&pFVar20->field_0x6 + 1;
    puVar22 = &pFVar20->field_0x88;
    uVar10 = *(int *)puVar22 + *(uint *)&pFVar20->field_0x94 & 1;
    uVar24 = 2 - uVar10;
    if (uVar10 == 0) {
      uVar24 = 0;
    }
    uVar10 = uVar24 + 0x1a + (*(uint *)&pFVar20->field_0x94 & 0x7fffffff);
    if (*(uint *)&pFVar20->field_0x90 < uVar10) {
      FBuffer::Extend((FBuffer *)puVar22,uVar10,0x100);
    }
    uVar2 = *(uint *)&pFVar20->field_0x94;
    lVar3 = *(longlong *)puVar22;
    lVar23 = (ulonglong)(uVar2 & 0x7fffffff) + (ulonglong)uVar24;
    *(uint *)&pFVar20->field_0x94 = (uVar2 ^ uVar10) & 0x7fffffff ^ uVar2;
    *(undefined4 *)(lVar23 + lVar3) = 0x7000e;
    *(undefined8 *)(lVar23 + 4 + lVar3) = s_X_TestServer_M._0_8_;
    *(undefined4 *)(lVar23 + 0xc + lVar3) = s_X_TestServer_M._8_4_;
    *(undefined2 *)(lVar23 + 0x10 + lVar3) = s_X_TestServer_M._12_2_;
    *(undefined4 *)(lVar23 + 0x12 + lVar3) = s_Girders._0_4_;
    *(undefined2 *)(lVar23 + 0x16 + lVar3) = s_Girders._4_2_;
    *(char *)(lVar23 + 0x18 + lVar3) = s_Girders[6];
    if ((*(char *)pFVar20 != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("State == EState::Build",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0xce,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(short *)&pFVar20->field_0x6 == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderCount < 0xffff",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0xd0,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(short *)&pFVar20->field_0x6 = *(short *)&pFVar20->field_0x6 + 1;
    puVar22 = &pFVar20->field_0x88;
    uVar10 = *(int *)puVar22 + *(uint *)&pFVar20->field_0x94 & 1;
    uVar24 = 2 - uVar10;
    if (uVar10 == 0) {
      uVar24 = 0;
    }
    uVar10 = uVar24 + 0x1a + (*(uint *)&pFVar20->field_0x94 & 0x7fffffff);
    if (*(uint *)&pFVar20->field_0x90 < uVar10) {
      FBuffer::Extend((FBuffer *)puVar22,uVar10,0x100);
    }
    uVar2 = *(uint *)&pFVar20->field_0x94;
    lVar3 = *(longlong *)puVar22;
    lVar23 = (ulonglong)(uVar2 & 0x7fffffff) + (ulonglong)uVar24;
    local_260 = 0;
    *(uint *)&pFVar20->field_0x94 = (uVar2 ^ uVar10) & 0x7fffffff ^ uVar2;
    *(undefined4 *)(lVar23 + lVar3) = 0x7000e;
    *(undefined8 *)(lVar23 + 4 + lVar3) = s_X_TestServer_R._0_8_;
    *(undefined4 *)(lVar23 + 0xc + lVar3) = s_X_TestServer_R._8_4_;
    *(undefined2 *)(lVar23 + 0x10 + lVar3) = s_X_TestServer_R._12_2_;
    *(undefined4 *)(lVar23 + 0x12 + lVar3) = s_RedRigs._0_4_;
    *(undefined2 *)(lVar23 + 0x16 + lVar3) = s_RedRigs._4_2_;
    *(char *)(lVar23 + 0x18 + lVar3) = s_RedRigs[6];
    local_278 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::`5'::<lambda_2>,0,0>::
                 _vftable_;
    local_270 = &local_370;
    local_288[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
    FEventLoop::Send(local_380,&local_388,
                     (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_288,
                     0);
    uVar24 = FEventLoop::FImpl::Tick(local_380[0].Impl,-1);
    fVar6 = __real_3ca3d70a;
    while (uVar24 != 0) {
      FWindowsPlatformProcess::SleepNoStats(fVar6);
      uVar24 = FEventLoop::FImpl::Tick(local_380[0].Impl,-1);
    }
    local_358 = ((BufCore *)local_370.CorePtr.Reference)->DataPtr;
    uStack_350 = (ulonglong)
                 CONCAT14(((BufCore *)local_370.CorePtr.Reference)->DataSizeHigh,
                          ((BufCore *)local_370.CorePtr.Reference)->DataSizeLow);
    local_2b8.Data = local_358;
    local_2b8.Size = uStack_350;
    pFVar14 = FCertRoots::FCertRoots(&local_338,&local_2b8);
    uVar21 = pFVar14->Handle;
    pFVar14->Handle = 0;
    if (local_338.Handle != 0) {
      SSL_CTX_free();
    }
    if (local_388.Ptr != (FActivityNode *)0x0) {
      FActivityNode::Destroy(local_388.Ptr);
    }
    if (local_380[0].Impl != (FImpl *)0x0) {
      if (((local_380[0].Impl)->BusyCount != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BusyCount == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0x3b9,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      DestructItems<UE::IoStore::HTTP::FHostGroup,int>
                ((FHostGroup *)((local_380[0].Impl)->Groups).AllocatorInstance.Data,
                 ((local_380[0].Impl)->Groups).ArrayNum);
      pFVar4 = ((local_380[0].Impl)->Groups).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      if ((((local_380[0].Impl)->Pending).Head != (FActivityNode *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Head == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0xc5,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)local_380[0].Impl);
      ::operator_delete(local_380[0].Impl,0x80);
    }
    if (local_370.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_370.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_370.CorePtr.Reference + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_370.CorePtr.Reference);
        ::operator_delete((void *)local_370.CorePtr.Reference,0x20);
      }
    }
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_258);
    if ((uVar21 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CertRoots.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                           ,0x19e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SeedHttp(param_1,param_2);
    HttpTest(param_1,0);
    ChunkedTest(param_1);
    RedirectTest(param_1,uVar21);
    HttpTest(param_1,uVar21);
    pIVar15 = IFileManager::Get();
    pTVar16 = &FPaths::EngineDir(&local_2a8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_348,pTVar16,0x2c - (uint)(pTVar16->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_348,L"Content/Certificates/ThirdParty/cacert.pem",0x2a);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_348.ArrayNum != 0) {
      FVar18.Data = local_348.AllocatorInstance.Data;
    }
    plVar17 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x18))(pIVar15,FVar18.Data,0);
    uVar24 = (**(code **)(*plVar17 + 0x30))(plVar17);
    FIoBuffer::FIoBuffer(&local_368,(ulonglong)uVar24);
    (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)local_368.CorePtr.Reference,uVar24);
    local_358 = *(uchar **)local_368.CorePtr.Reference;
    uStack_350 = (ulonglong)
                 CONCAT14(*(uchar *)((longlong)local_368.CorePtr.Reference + 0x18),
                          *(uint *)((longlong)local_368.CorePtr.Reference + 8));
    local_298.Data = local_358;
    local_298.Size = uStack_350;
    FCertRoots::FCertRoots(&local_360,&local_298);
    if (((GDefaultCertRoots.Handle != 0) == (local_360.Handle != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GDefaultCertRoots.IsValid() != CertRoots.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                           ,0x18b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar7.Handle = GDefaultCertRoots.Handle;
    GDefaultCertRoots.Handle = local_360.Handle;
    (**(code **)*plVar17)(plVar17,1);
    if (FVar7.Handle != 0) {
      SSL_CTX_free(FVar7.Handle);
    }
    if (local_368.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_368.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_368.CorePtr.Reference + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_368.CorePtr.Reference);
        ::operator_delete((void *)local_368.CorePtr.Reference,0x20);
      }
    }
    if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.AllocatorInstance.Data);
    }
    TlsTest();
    if (uVar21 != 0) {
      SSL_CTX_free(uVar21);
    }
    WSACleanup();
  }
  return;
}

// IsContentless @ 144578a30

bool __cdecl UE::IoStore::HTTP::IsContentless(uint param_1)

{
  return param_1 < 200 || (param_1 == 0x130 || param_1 == 0xcc);
}

// IsStatusCodeOk @ 144578b50

bool __cdecl UE::IoStore::HTTP::IsStatusCodeOk(uint param_1)

{
  return param_1 - 100 < 900;
}

// MaybeConnectSocks @ 144579650

FOutcome __cdecl UE::IoStore::HTTP::MaybeConnectSocks(FSocket *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  FOutcome FVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  FSocket *this;
  char *pcVar5;
  uint uVar6;
  ushort in_R9W;
  wchar_t *pwVar7;
  undefined4 local_38;
  uint local_34;
  char local_30 [8];
  undefined1 local_28 [16];
  
  this = (FSocket *)CONCAT44(in_register_00000014,param_2);
  if (GSocksIp.Data.ArrayNum < 2) {
    *(undefined4 *)((longlong)&param_1->Socket + 4) = 0x8000;
    *(undefined4 *)&param_1->Socket = 0;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  local_38 = 0;
  ioctlsocket(this->Socket,-0x7ffb9982,&local_38);
  if (GSocksVersion == 4) {
    pwVar7 = L"";
    if (GSocksIp.Data.ArrayNum != 0) {
      pwVar7 = (wchar_t *)GSocksIp.Data.AllocatorInstance;
    }
    uVar6 = 0;
    uVar4 = 0;
    do {
      while( true ) {
        uVar1 = *pwVar7;
        pwVar7 = (wchar_t *)((longlong)pwVar7 + 2);
        if (9 < uVar1 - 0x30) break;
        uVar4 = (uint)uVar1 + (uVar4 * 5 + -0x18) * 2;
      }
      if ((uVar1 != 0x2e) && (uVar1 != 0)) goto LAB_144579738;
      uVar6 = uVar6 << 8 | uVar4;
      uVar4 = 0;
    } while (uVar1 != 0);
    if (uVar6 != 0) {
      FVar2 = FSocket::Connect(this,(uint)local_30,uVar6);
      uVar3 = *(ulonglong *)FVar2.field0_0x0;
      if (0x7fffffffffff < (uVar3 & 0xffffffffffff)) {
        local_34 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                   param_3 << 0x18;
        local_38 = CONCAT22(in_R9W >> 8 | in_R9W << 8,0x104);
        FVar2 = FSocket::Send(this,local_30,(uint)&local_38);
        uVar3 = *(ulonglong *)FVar2.field0_0x0;
        if (0x7fffffffffff < (uVar3 & 0xffffffffffff)) {
          FVar2 = FSocket::Recv(this,local_30,(uint)local_28);
          uVar3 = *(ulonglong *)FVar2.field0_0x0;
          if (0x7fffffffffff < (uVar3 & 0xffffffffffff)) {
            *(undefined4 *)((longlong)&param_1->Socket + 4) = 0x8000;
            *(undefined4 *)&param_1->Socket = 1;
            return (FOutcome)(FOutcome_u_0)param_1;
          }
        }
      }
      param_1->Socket = uVar3;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
LAB_144579738:
    pcVar5 = "Invalid socks IP address";
  }
  else {
    if (GSocksVersion == 5) {
      ConnectSocks5(param_1,param_2,param_3);
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    pcVar5 = "Unsupported socks version";
  }
  param_1->Socket = param_1->Socket & 0xffff000000000000 ^ (ulonglong)pcVar5;
  *(undefined2 *)((longlong)&param_1->Socket + 6) = 0xffff;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// MiscTest @ 144579940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::IoStore::HTTP::MiscTest(void)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  size_t sVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  char *pcVar25;
  longlong lVar26;
  int *piVar27;
  char *pcVar28;
  undefined1 auStack_7b8 [32];
  bool local_798 [8];
  FUrlOffsets local_790;
  FMessageOffsets local_788 [2];
  <lambda_2> local_780;
  TStringView<char> local_778;
  char *local_768;
  undefined4 uStack_760;
  uint uStack_75c;
  char *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  char *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  char *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  char *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  char *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  char *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  char *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  char *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  char *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  char *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  char *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  char *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  char *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  char *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  char *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  char *local_668;
  undefined4 uStack_660;
  uint uStack_65c;
  char *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  char *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  char *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  char *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  char *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  char *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  char *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  char *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  char *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  char *local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  char *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  char *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  char *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  char *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  char *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  char *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  char *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  char *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  char *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  char *local_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  char *local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  TStringView<char> local_508;
  TStringView<char> local_4f8;
  TStringView<char> local_4e8;
  TStringView<char> local_4d8;
  TStringView<char> local_4c8;
  TStringView<char> local_4b8;
  TStringView<char> local_4a8;
  TStringView<char> local_498;
  TStringView<char> local_488;
  TStringView<char> local_478;
  TStringView<char> local_468;
  TStringView<char> local_458;
  TStringView<char> local_448;
  TStringView<char> local_438;
  TStringView<char> local_428;
  TStringView<char> local_418;
  TStringView<char> local_408;
  TStringView<char> local_3f8;
  TStringView<char> local_3e8;
  TStringView<char> local_3d8;
  TStringView<char> local_3c8;
  TStringView<char> local_3b8;
  TStringView<char> local_3a8;
  TStringView<char> local_398;
  TStringView<char> local_388;
  TStringView<char> local_378;
  TStringView<char> local_368;
  TStringView<char> local_358;
  TStringView<char> local_348;
  TStringView<char> local_338;
  TStringView<char> local_328;
  TStringView<char> local_318;
  TStringView<char> local_308;
  TStringView<char> local_2f8;
  TStringView<char> local_2e8;
  TStringView<char> local_2d8;
  TStringView<char> local_2c8;
  TStringView<char> local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  int local_294;
  char local_290 [8];
  char acStack_288 [8];
  char local_280 [8];
  char acStack_278 [8];
  char local_270 [8];
  char acStack_268 [8];
  char local_260;
  char local_258 [8];
  char acStack_250 [8];
  char local_248 [8];
  char acStack_240 [8];
  char local_238 [8];
  char acStack_230 [8];
  undefined1 local_228 [464];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  iVar19 = 0;
  local_768 = "";
  iVar24 = 0;
  uStack_760 = 0;
  local_508._8_8_ = (ulonglong)uStack_75c << 0x20;
  local_508.DataPtr = "";
  iVar17 = ParseMessage(&local_508,local_788);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"\", MsgOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x26,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_750 = 2;
  local_758 = "MR";
  local_4f8._12_4_ = uStack_74c;
  local_4f8.Size = 2;
  local_4f8.DataPtr = "MR";
  iVar17 = ParseMessage(&local_4f8,local_788);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"MR\", MsgOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x27,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_740 = 8;
  local_748 = "HTTP/1.1";
  local_4e8._12_4_ = uStack_73c;
  local_4e8.Size = 8;
  local_4e8.DataPtr = "HTTP/1.1";
  iVar17 = ParseMessage(&local_4e8,local_788);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1\", MsgOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x28,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_730 = 9;
  local_738 = "HTTP/1.1 ";
  local_4d8._12_4_ = uStack_72c;
  local_4d8.Size = 9;
  local_4d8.DataPtr = "HTTP/1.1 ";
  iVar17 = ParseMessage(&local_4d8,local_788);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1 \", MsgOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x29,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_720 = 0xc;
  local_728 = "HTTP/1.1 1\r\n";
  local_4c8._12_4_ = uStack_71c;
  local_4c8.Size = 0xc;
  local_4c8.DataPtr = "HTTP/1.1 1\r\n";
  iVar17 = ParseMessage(&local_4c8,local_788);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1 1\" \"\\r\\n\", MsgOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x2a,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_710 = 0xf;
  local_718 = "HTTP/1.1    1\r\n";
  local_4b8._12_4_ = uStack_70c;
  local_4b8.Size = 0xf;
  local_4b8.DataPtr = "HTTP/1.1    1\r\n";
  iVar17 = ParseMessage(&local_4b8,local_788);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1    1\" \"\\r\\n\", MsgOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x2b,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_700 = 0xf;
  local_708 = "HTTP/1.1 100 \r\n";
  local_4a8._12_4_ = uStack_6fc;
  local_4a8.Size = 0xf;
  local_4a8.DataPtr = "HTTP/1.1 100 \r\n";
  iVar17 = ParseMessage(&local_4a8,local_788);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1 100 \" \"\\r\\n\", MsgOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x2c,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6f0 = 0x28;
  local_6f8 = "HTTP/1.1 100  Message of some sort    \r\n";
  local_498._12_4_ = uStack_6ec;
  local_498.Size = 0x28;
  local_498.DataPtr = "HTTP/1.1 100  Message of some sort    \r\n";
  iVar17 = ParseMessage(&local_498,local_788);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1 100  Message of some sort    \" \"\\r\\n\", MsgOut) > 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x2d,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6e0 = 0x26;
  local_6e8 = "HTTP/1.1 100 _Message with a \r in it\r\n";
  local_488._12_4_ = uStack_6dc;
  local_488.Size = 0x26;
  local_488.DataPtr = "HTTP/1.1 100 _Message with a \r in it\r\n";
  iVar17 = ParseMessage(&local_488,local_788);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseMessage(\"HTTP/1.1 100 _Message with a \\r in it\" \"\\r\\n\", MsgOut) == -1"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x2e,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_798[0] = true;
  pcVar28 = "";
  do {
    pcVar25 = pcVar28;
    iVar17 = iVar24;
    iVar21 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar21;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar21 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x37,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = "\r\n";
  do {
    pcVar25 = pcVar28;
    iVar17 = iVar24;
    iVar21 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar21;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar21 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x38,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = "foo";
  do {
    iVar21 = 0;
    pcVar25 = pcVar28;
    iVar17 = iVar21;
    iVar15 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar15;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar15 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x39,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = " foo";
  do {
    pcVar25 = pcVar28;
    iVar17 = iVar21;
    iVar15 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar15;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar15 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x3a,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = " foo ";
  do {
    pcVar25 = pcVar28;
    iVar17 = iVar21;
    iVar15 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar15;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar15 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x3b,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = "foo:bar";
  do {
    pcVar25 = pcVar28;
    iVar17 = iVar21;
    iVar15 = iVar19;
    if (pcVar28 < "") {
      do {
        iVar17 = iVar15;
        if (*pcVar25 == ':') break;
        iVar17 = iVar17 + 1;
        pcVar25 = pcVar25 + 1;
        iVar15 = iVar17;
      } while (pcVar28 + iVar17 < "");
    }
    pcVar28 = pcVar28 + (longlong)iVar17 + 1;
    pcVar25 = pcVar28 + 1;
    if (pcVar25 < "") {
      do {
        if ((*pcVar28 == '\r') && (*pcVar25 == '\n')) {
          local_798[0] = false;
          pcVar28 = "";
          break;
        }
        pcVar28 = pcVar28 + (ulonglong)(*pcVar25 != '\r') + 1;
        pcVar25 = pcVar28 + 1;
      } while (pcVar25 < "");
    }
    pcVar28 = pcVar28 + 2;
  } while (pcVar28 < "");
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x3c,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_780.AllIsWell = local_798;
  uStack_6d0 = 10;
  local_6d8 = "foo: bar\r\n";
  local_478._12_4_ = uStack_6cc;
  local_478.Size = 10;
  local_478.DataPtr = "foo: bar\r\n";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_478,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x3f,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6c0 = 0xc;
  local_6c8 = "foo: bar \t\r\n";
  local_468._12_4_ = uStack_6bc;
  local_468.Size = 0xc;
  local_468.DataPtr = "foo: bar \t\r\n";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_468,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x40,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6b0 = 0xb;
  local_6b8 = "foo:\tbar \r\n";
  local_458._12_4_ = uStack_6ac;
  local_458.Size = 0xb;
  local_458.DataPtr = "foo:\tbar \r\n";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_458,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x41,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_6a0 = 10;
  local_6a8 = "foo:bar \r\n";
  local_448._12_4_ = uStack_69c;
  local_448.Size = 10;
  local_448.DataPtr = "foo:bar \r\n";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_448,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x42,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_690 = 10;
  local_698 = "foo:bar\r\n!";
  local_438._12_4_ = uStack_68c;
  local_438.Size = 10;
  local_438.DataPtr = "foo:bar\r\n!";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_438,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x43,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_680 = 10;
  local_688 = "foo:bar\r\n ";
  local_428._12_4_ = uStack_67c;
  local_428.Size = 10;
  local_428.DataPtr = "foo:bar\r\n ";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_428,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x44,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_670 = 0xd;
  local_678 = "foo:bar\r\nn:ej";
  local_418._12_4_ = uStack_66c;
  local_418.Size = 0xd;
  local_418.DataPtr = "foo:bar\r\nn:ej";
  EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>(&local_418,&local_780);
  if ((local_798[0] == false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllIsWell",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x45,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar26 = -0x8000000000000000;
  pcVar28 = "X";
  lVar22 = -0x8000000000000000;
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((-1 < lVar22) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"X\")) < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x48,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "/";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((-1 < lVar22) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"/\")) < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x49,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = ":";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((-1 < lVar22) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\":\")) < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x4a,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "-1";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((-2 < lVar22) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"-1\")) < -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x4b,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "0";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((lVar22 != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"0\")) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x4c,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar25 = "9";
  lVar22 = -0x8000000000000000;
  pcVar28 = "9";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((lVar22 != 9) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"9\")) == 9",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x4d,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "493";
  do {
    cVar1 = *pcVar28;
    if (9 < (int)cVar1 - 0x30U) break;
    pcVar28 = pcVar28 + 1;
    lVar22 = (ulonglong)((int)cVar1 - 0x30U) + lVar22 * 10;
  } while (pcVar28 != "");
  if ((lVar22 != 0x1ed) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt(FAnsiStringView(\"493\")) == 493",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x4e,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "56";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 0x56) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"56\")) == 0x56",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x50,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "1";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"1\")) == 0x01",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x51,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  do {
    uVar23 = (int)*pcVar25 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar25 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar25 = pcVar25 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar25 != "");
  if ((lVar22 != 9) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"9\")) == 0x09",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x52,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "a";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 10) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"a\")) == 0x0a",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x53,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "A";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 10) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"A\")) == 0x0a",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x54,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "f";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 0xf) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"f\")) == 0x0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x55,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "F";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 0xf) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"F\")) == 0x0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x56,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "g";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((-1 < lVar22) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"g\")) < 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x57,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "49e";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 0x49e) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"49e\")) == 0x49e",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x58,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar22 = -0x8000000000000000;
  pcVar28 = "aBcD";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar22 = lVar22 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar22 != 0xabcd) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"aBcD\")) == 0xabcd",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x59,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = "eEeE";
  do {
    uVar23 = (int)*pcVar28 - 0x30;
    if (9 < uVar23) {
      uVar23 = (int)*pcVar28 | 0x20;
      if (5 < uVar23 - 0x61) break;
      uVar23 = uVar23 - 0x57;
    }
    pcVar28 = pcVar28 + 1;
    lVar26 = lVar26 * 0x10 + (ulonglong)uVar23;
  } while (pcVar28 != "");
  if ((lVar26 != 0xeeee) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrudeToInt<16>(FAnsiStringView(\"eEeE\")) == 0xeeee",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x5a,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_668 = "";
  uStack_660 = 0;
  local_408._8_8_ = (ulonglong)uStack_65c << 0x20;
  local_408.DataPtr = "";
  iVar17 = ParseUrl(&local_408,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x5e,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_650 = 10;
  local_658 = "abc://asd/";
  local_3f8._12_4_ = uStack_64c;
  local_3f8.Size = 10;
  local_3f8.DataPtr = "abc://asd/";
  iVar17 = ParseUrl(&local_3f8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"abc://asd/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x5f,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_640 = 7;
  local_648 = "http://";
  local_3e8._12_4_ = uStack_63c;
  local_3e8.Size = 7;
  local_3e8.DataPtr = "http://";
  iVar17 = ParseUrl(&local_3e8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x60,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_630 = 9;
  local_638 = "http://:/";
  local_3d8._12_4_ = uStack_62c;
  local_3d8.Size = 9;
  local_3d8.DataPtr = "http://:/";
  iVar17 = ParseUrl(&local_3d8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://:/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x61,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_620 = 10;
  local_628 = "http://@:/";
  local_3c8._12_4_ = uStack_61c;
  local_3c8.Size = 10;
  local_3c8.DataPtr = "http://@:/";
  iVar17 = ParseUrl(&local_3c8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://@:/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x62,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_610 = 0x10;
  local_618 = "http://foo:ba:r/";
  local_3b8._12_4_ = uStack_60c;
  local_3b8.Size = 0x10;
  local_3b8.DataPtr = "http://foo:ba:r/";
  iVar17 = ParseUrl(&local_3b8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://foo:ba:r/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,99,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_600 = 0x10;
  local_608 = "http://foo@ba:r/";
  local_3a8._12_4_ = uStack_5fc;
  local_3a8.Size = 0x10;
  local_3a8.DataPtr = "http://foo@ba:r/";
  iVar17 = ParseUrl(&local_3a8,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://foo@ba:r/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,100,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5f0 = 0xf;
  local_5f8 = "http://foo@ba:r";
  local_398._12_4_ = uStack_5ec;
  local_398.Size = 0xf;
  local_398.DataPtr = "http://foo@ba:r";
  iVar17 = ParseUrl(&local_398,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://foo@ba:r\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x65,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5e0 = 0xf;
  local_5e8 = "http://foo@ba:/";
  local_388._12_4_ = uStack_5dc;
  local_388.Size = 0xf;
  local_388.DataPtr = "http://foo@ba:/";
  iVar17 = ParseUrl(&local_388,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://foo@ba:/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x66,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5d0 = 0x10;
  local_5d8 = "http://foo@ba@9/";
  local_378._12_4_ = uStack_5cc;
  local_378.Size = 0x10;
  local_378.DataPtr = "http://foo@ba@9/";
  iVar17 = ParseUrl(&local_378,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://foo@ba@9/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x67,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5c0 = 0xd;
  local_5c8 = "http://@ba:9/";
  local_368._12_4_ = uStack_5bc;
  local_368.Size = 0xd;
  local_368.DataPtr = "http://@ba:9/";
  iVar17 = ParseUrl(&local_368,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://@ba:9/\", UrlOut) == -1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x68,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5b0 = 0x285;
  local_5b8 = 
  "http://zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz.com"
  ;
  local_358._12_4_ = uStack_5ac;
  local_358.Size = 0x285;
  local_358.DataPtr =
       "http://zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz.com"
  ;
  iVar17 = ParseUrl(&local_358,&local_790);
  if ((iVar17 != -1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl( \"http://zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\" \"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\" \"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\" \"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\" \"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz.com\", UrlOut) == -1"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x6f,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_510 = 0x10;
  local_518 = "http://ab-c.com/";
  local_348._12_4_ = uStack_50c;
  local_348.Size = 0x10;
  local_348.DataPtr = "http://ab-c.com/";
  iVar17 = ParseUrl(&local_348,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://ab-c.com/\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x71,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_5a0 = 0x10;
  local_5a8 = "http://a@bc.com/";
  local_338._12_4_ = uStack_59c;
  local_338.Size = 0x10;
  local_338.DataPtr = "http://a@bc.com/";
  iVar17 = ParseUrl(&local_338,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"http://a@bc.com/\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x72,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_590 = 0xf;
  local_598 = "https://abc.com";
  local_328._12_4_ = uStack_58c;
  local_328.Size = 0xf;
  local_328.DataPtr = "https://abc.com";
  iVar17 = ParseUrl(&local_328,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://abc.com\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x73,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_580 = 0x13;
  local_588 = "https://abc.com:999";
  local_318._12_4_ = uStack_57c;
  local_318.Size = 0x13;
  local_318.DataPtr = "https://abc.com:999";
  iVar17 = ParseUrl(&local_318,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://abc.com:999\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x74,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_570 = 0x14;
  local_578 = "https://abc.com:999/";
  local_308._12_4_ = uStack_56c;
  local_308.Size = 0x14;
  local_308.DataPtr = "https://abc.com:999/";
  iVar17 = ParseUrl(&local_308,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://abc.com:999/\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x75,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_560 = 0x1b;
  local_568 = "https://foo:bar@abc.com:999";
  local_2f8._12_4_ = uStack_55c;
  local_2f8.Size = 0x1b;
  local_2f8.DataPtr = "https://foo:bar@abc.com:999";
  iVar17 = ParseUrl(&local_2f8,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://foo:bar@abc.com:999\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x76,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_550 = 0x1c;
  local_558 = "https://foo:bar@abc.com:999/";
  local_2e8._12_4_ = uStack_54c;
  local_2e8.Size = 0x1c;
  local_2e8.DataPtr = "https://foo:bar@abc.com:999/";
  iVar17 = ParseUrl(&local_2e8,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://foo:bar@abc.com:999/\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x77,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_540 = 0x1b;
  local_548 = "https://foo_bar@abc.com:999";
  local_2d8._12_4_ = uStack_53c;
  local_2d8.Size = 0x1b;
  local_2d8.DataPtr = "https://foo_bar@abc.com:999";
  iVar17 = ParseUrl(&local_2d8,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://foo_bar@abc.com:999\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x78,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_530 = 0x1c;
  local_538 = "https://foo_bar@abc.com:999/";
  local_2c8._12_4_ = uStack_52c;
  local_2c8.Size = 0x1c;
  local_2c8.DataPtr = "https://foo_bar@abc.com:999/";
  iVar17 = ParseUrl(&local_2c8,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(\"https://foo_bar@abc.com:999/\", UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x79,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar27 = (int *)&local_2a8;
  local_2a8 = ___xmm_0000007f000000400000002000000010;
  uStack_2a0 = _UNK_150d75858;
  local_298 = 0xff;
  do {
    uVar13 = s_http___sweden_denmark_finland_n._40_8_;
    uVar11 = s_http___sweden_denmark_finland_n._32_8_;
    uVar9 = s_http___sweden_denmark_finland_n._24_8_;
    uVar7 = s_http___sweden_denmark_finland_n._16_8_;
    uVar5 = s_http___sweden_denmark_finland_n._8_8_;
    uVar3 = s_http___sweden_denmark_finland_n._0_8_;
    local_260 = s_http___sweden_denmark_finland_n[0x30];
    local_290[0] = s_http___sweden_denmark_finland_n[0];
    local_290[1] = s_http___sweden_denmark_finland_n[1];
    local_290[2] = s_http___sweden_denmark_finland_n[2];
    local_290[3] = s_http___sweden_denmark_finland_n[3];
    local_290[4] = s_http___sweden_denmark_finland_n[4];
    local_290[5] = s_http___sweden_denmark_finland_n[5];
    local_290[6] = s_http___sweden_denmark_finland_n[6];
    local_290[7] = s_http___sweden_denmark_finland_n[7];
    acStack_288[0] = s_http___sweden_denmark_finland_n[8];
    acStack_288[1] = s_http___sweden_denmark_finland_n[9];
    acStack_288[2] = s_http___sweden_denmark_finland_n[10];
    acStack_288[3] = s_http___sweden_denmark_finland_n[0xb];
    acStack_288[4] = s_http___sweden_denmark_finland_n[0xc];
    acStack_288[5] = s_http___sweden_denmark_finland_n[0xd];
    acStack_288[6] = s_http___sweden_denmark_finland_n[0xe];
    acStack_288[7] = s_http___sweden_denmark_finland_n[0xf];
    local_280[0] = s_http___sweden_denmark_finland_n[0x10];
    local_280[1] = s_http___sweden_denmark_finland_n[0x11];
    local_280[2] = s_http___sweden_denmark_finland_n[0x12];
    local_280[3] = s_http___sweden_denmark_finland_n[0x13];
    local_280[4] = s_http___sweden_denmark_finland_n[0x14];
    local_280[5] = s_http___sweden_denmark_finland_n[0x15];
    local_280[6] = s_http___sweden_denmark_finland_n[0x16];
    local_280[7] = s_http___sweden_denmark_finland_n[0x17];
    acStack_278[0] = s_http___sweden_denmark_finland_n[0x18];
    acStack_278[1] = s_http___sweden_denmark_finland_n[0x19];
    acStack_278[2] = s_http___sweden_denmark_finland_n[0x1a];
    acStack_278[3] = s_http___sweden_denmark_finland_n[0x1b];
    acStack_278[4] = s_http___sweden_denmark_finland_n[0x1c];
    acStack_278[5] = s_http___sweden_denmark_finland_n[0x1d];
    acStack_278[6] = s_http___sweden_denmark_finland_n[0x1e];
    acStack_278[7] = s_http___sweden_denmark_finland_n[0x1f];
    local_270[0] = s_http___sweden_denmark_finland_n[0x20];
    local_270[1] = s_http___sweden_denmark_finland_n[0x21];
    local_270[2] = s_http___sweden_denmark_finland_n[0x22];
    local_270[3] = s_http___sweden_denmark_finland_n[0x23];
    local_270[4] = s_http___sweden_denmark_finland_n[0x24];
    local_270[5] = s_http___sweden_denmark_finland_n[0x25];
    local_270[6] = s_http___sweden_denmark_finland_n[0x26];
    local_270[7] = s_http___sweden_denmark_finland_n[0x27];
    acStack_268[0] = s_http___sweden_denmark_finland_n[0x28];
    acStack_268[1] = s_http___sweden_denmark_finland_n[0x29];
    acStack_268[2] = s_http___sweden_denmark_finland_n[0x2a];
    acStack_268[3] = s_http___sweden_denmark_finland_n[0x2b];
    acStack_268[4] = s_http___sweden_denmark_finland_n[0x2c];
    acStack_268[5] = s_http___sweden_denmark_finland_n[0x2d];
    acStack_268[6] = s_http___sweden_denmark_finland_n[0x2e];
    acStack_268[7] = s_http___sweden_denmark_finland_n[0x2f];
    memset(local_228,*piVar27,0x1d0);
    uVar14 = s_http___sweden_denmark_finland_n._40_8_;
    uVar12 = s_http___sweden_denmark_finland_n._32_8_;
    uVar10 = s_http___sweden_denmark_finland_n._24_8_;
    uVar8 = s_http___sweden_denmark_finland_n._16_8_;
    uVar6 = s_http___sweden_denmark_finland_n._8_8_;
    uVar4 = s_http___sweden_denmark_finland_n._0_8_;
    local_528 = local_258;
    uStack_520 = 0x30;
    local_2b8._12_4_ = uStack_51c;
    local_2b8.Size = 0x30;
    s_http___sweden_denmark_finland_n[0] = (char)uVar3;
    s_http___sweden_denmark_finland_n[1] = SUB81(uVar3,1);
    s_http___sweden_denmark_finland_n[2] = SUB81(uVar3,2);
    s_http___sweden_denmark_finland_n[3] = SUB81(uVar3,3);
    s_http___sweden_denmark_finland_n[4] = SUB81(uVar3,4);
    s_http___sweden_denmark_finland_n[5] = SUB81(uVar3,5);
    s_http___sweden_denmark_finland_n[6] = SUB81(uVar3,6);
    s_http___sweden_denmark_finland_n[7] = SUB81(uVar3,7);
    local_258[0] = s_http___sweden_denmark_finland_n[0];
    local_258[1] = s_http___sweden_denmark_finland_n[1];
    local_258[2] = s_http___sweden_denmark_finland_n[2];
    local_258[3] = s_http___sweden_denmark_finland_n[3];
    local_258[4] = s_http___sweden_denmark_finland_n[4];
    local_258[5] = s_http___sweden_denmark_finland_n[5];
    local_258[6] = s_http___sweden_denmark_finland_n[6];
    local_258[7] = s_http___sweden_denmark_finland_n[7];
    s_http___sweden_denmark_finland_n[8] = (char)uVar5;
    s_http___sweden_denmark_finland_n[9] = SUB81(uVar5,1);
    s_http___sweden_denmark_finland_n[10] = SUB81(uVar5,2);
    s_http___sweden_denmark_finland_n[0xb] = SUB81(uVar5,3);
    s_http___sweden_denmark_finland_n[0xc] = SUB81(uVar5,4);
    s_http___sweden_denmark_finland_n[0xd] = SUB81(uVar5,5);
    s_http___sweden_denmark_finland_n[0xe] = SUB81(uVar5,6);
    s_http___sweden_denmark_finland_n[0xf] = SUB81(uVar5,7);
    acStack_250[0] = s_http___sweden_denmark_finland_n[8];
    acStack_250[1] = s_http___sweden_denmark_finland_n[9];
    acStack_250[2] = s_http___sweden_denmark_finland_n[10];
    acStack_250[3] = s_http___sweden_denmark_finland_n[0xb];
    acStack_250[4] = s_http___sweden_denmark_finland_n[0xc];
    acStack_250[5] = s_http___sweden_denmark_finland_n[0xd];
    acStack_250[6] = s_http___sweden_denmark_finland_n[0xe];
    acStack_250[7] = s_http___sweden_denmark_finland_n[0xf];
    s_http___sweden_denmark_finland_n[0x10] = (char)uVar7;
    s_http___sweden_denmark_finland_n[0x11] = SUB81(uVar7,1);
    s_http___sweden_denmark_finland_n[0x12] = SUB81(uVar7,2);
    s_http___sweden_denmark_finland_n[0x13] = SUB81(uVar7,3);
    s_http___sweden_denmark_finland_n[0x14] = SUB81(uVar7,4);
    s_http___sweden_denmark_finland_n[0x15] = SUB81(uVar7,5);
    s_http___sweden_denmark_finland_n[0x16] = SUB81(uVar7,6);
    s_http___sweden_denmark_finland_n[0x17] = SUB81(uVar7,7);
    local_248[0] = s_http___sweden_denmark_finland_n[0x10];
    local_248[1] = s_http___sweden_denmark_finland_n[0x11];
    local_248[2] = s_http___sweden_denmark_finland_n[0x12];
    local_248[3] = s_http___sweden_denmark_finland_n[0x13];
    local_248[4] = s_http___sweden_denmark_finland_n[0x14];
    local_248[5] = s_http___sweden_denmark_finland_n[0x15];
    local_248[6] = s_http___sweden_denmark_finland_n[0x16];
    local_248[7] = s_http___sweden_denmark_finland_n[0x17];
    s_http___sweden_denmark_finland_n[0x18] = (char)uVar9;
    s_http___sweden_denmark_finland_n[0x19] = SUB81(uVar9,1);
    s_http___sweden_denmark_finland_n[0x1a] = SUB81(uVar9,2);
    s_http___sweden_denmark_finland_n[0x1b] = SUB81(uVar9,3);
    s_http___sweden_denmark_finland_n[0x1c] = SUB81(uVar9,4);
    s_http___sweden_denmark_finland_n[0x1d] = SUB81(uVar9,5);
    s_http___sweden_denmark_finland_n[0x1e] = SUB81(uVar9,6);
    s_http___sweden_denmark_finland_n[0x1f] = SUB81(uVar9,7);
    acStack_240[0] = s_http___sweden_denmark_finland_n[0x18];
    acStack_240[1] = s_http___sweden_denmark_finland_n[0x19];
    acStack_240[2] = s_http___sweden_denmark_finland_n[0x1a];
    acStack_240[3] = s_http___sweden_denmark_finland_n[0x1b];
    acStack_240[4] = s_http___sweden_denmark_finland_n[0x1c];
    acStack_240[5] = s_http___sweden_denmark_finland_n[0x1d];
    acStack_240[6] = s_http___sweden_denmark_finland_n[0x1e];
    acStack_240[7] = s_http___sweden_denmark_finland_n[0x1f];
    s_http___sweden_denmark_finland_n[0x20] = (char)uVar11;
    s_http___sweden_denmark_finland_n[0x21] = SUB81(uVar11,1);
    s_http___sweden_denmark_finland_n[0x22] = SUB81(uVar11,2);
    s_http___sweden_denmark_finland_n[0x23] = SUB81(uVar11,3);
    s_http___sweden_denmark_finland_n[0x24] = SUB81(uVar11,4);
    s_http___sweden_denmark_finland_n[0x25] = SUB81(uVar11,5);
    s_http___sweden_denmark_finland_n[0x26] = SUB81(uVar11,6);
    s_http___sweden_denmark_finland_n[0x27] = SUB81(uVar11,7);
    local_238[0] = s_http___sweden_denmark_finland_n[0x20];
    local_238[1] = s_http___sweden_denmark_finland_n[0x21];
    local_238[2] = s_http___sweden_denmark_finland_n[0x22];
    local_238[3] = s_http___sweden_denmark_finland_n[0x23];
    local_238[4] = s_http___sweden_denmark_finland_n[0x24];
    local_238[5] = s_http___sweden_denmark_finland_n[0x25];
    local_238[6] = s_http___sweden_denmark_finland_n[0x26];
    local_238[7] = s_http___sweden_denmark_finland_n[0x27];
    s_http___sweden_denmark_finland_n[0x28] = (char)uVar13;
    s_http___sweden_denmark_finland_n[0x29] = SUB81(uVar13,1);
    s_http___sweden_denmark_finland_n[0x2a] = SUB81(uVar13,2);
    s_http___sweden_denmark_finland_n[0x2b] = SUB81(uVar13,3);
    s_http___sweden_denmark_finland_n[0x2c] = SUB81(uVar13,4);
    s_http___sweden_denmark_finland_n[0x2d] = SUB81(uVar13,5);
    s_http___sweden_denmark_finland_n[0x2e] = SUB81(uVar13,6);
    s_http___sweden_denmark_finland_n[0x2f] = SUB81(uVar13,7);
    acStack_230[0] = s_http___sweden_denmark_finland_n[0x28];
    acStack_230[1] = s_http___sweden_denmark_finland_n[0x29];
    acStack_230[2] = s_http___sweden_denmark_finland_n[0x2a];
    acStack_230[3] = s_http___sweden_denmark_finland_n[0x2b];
    acStack_230[4] = s_http___sweden_denmark_finland_n[0x2c];
    acStack_230[5] = s_http___sweden_denmark_finland_n[0x2d];
    acStack_230[6] = s_http___sweden_denmark_finland_n[0x2e];
    acStack_230[7] = s_http___sweden_denmark_finland_n[0x2f];
    s_http___sweden_denmark_finland_n._0_8_ = uVar4;
    s_http___sweden_denmark_finland_n._8_8_ = uVar6;
    s_http___sweden_denmark_finland_n._16_8_ = uVar8;
    s_http___sweden_denmark_finland_n._24_8_ = uVar10;
    s_http___sweden_denmark_finland_n._32_8_ = uVar12;
    s_http___sweden_denmark_finland_n._40_8_ = uVar14;
    local_2b8.DataPtr = local_528;
    iVar17 = ParseUrl(&local_2b8,&local_790);
    if ((iVar17 < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParseUrl(FAnsiStringView(Buffer, sizeof(Url) - 1), UrlOut) > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                            ,0x81,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    sVar20 = strlen(local_290);
    iVar17 = (uint)local_790.Port.Right - (uint)local_790.Port.Left;
    uVar18 = (uint)sVar20;
    uVar23 = (uint)local_790.Port.Left;
    if (local_790.Port.Left != uVar18 && (int)uVar18 <= (int)(uint)local_790.Port.Left) {
      uVar23 = uVar18;
    }
    iVar19 = uVar18 - uVar23;
    if (iVar17 < (int)(uVar18 - uVar23)) {
      iVar19 = iVar17;
    }
    iVar17 = iVar21;
    if (0 < iVar19) {
      iVar17 = iVar19;
    }
    if (iVar17 == 0) {
LAB_14457b391:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UrlOut.Port.Get(Url) == \"123\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x82,L"");
      if (bVar16) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      iVar19 = FGenericPlatformStricmp::Strnicmp(local_290 + (int)uVar23,"123",(longlong)iVar17);
      if ((iVar19 != 0) || ("123"[iVar17] != '\0')) goto LAB_14457b391;
    }
    piVar27 = piVar27 + 1;
  } while (piVar27 != &local_294);
  local_778.Size = 0x1a;
  local_778.DataPtr = "http://abc:123@bc.com:999/";
  iVar17 = ParseUrl(&local_778,&local_790);
  if ((iVar17 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParseUrl(Url, UrlOut) > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x86,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_790.SchemeLength != '\x04') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UrlOut.SchemeLength == 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x87,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = (uint)local_790.UserInfo.Right - (uint)local_790.UserInfo.Left;
  uVar23 = (uint)local_790.UserInfo.Left;
  if (0x1a < local_790.UserInfo.Left) {
    uVar23 = 0x1a;
  }
  iVar19 = 0x1a - uVar23;
  if (iVar17 < (int)(0x1a - uVar23)) {
    iVar19 = iVar17;
  }
  iVar17 = iVar21;
  if (0 < iVar19) {
    iVar17 = iVar19;
  }
  if (iVar17 == 0) {
LAB_14457b49f:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("UrlOut.UserInfo.Get(Url) == \"abc:123\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                        ,0x88,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar19 = FGenericPlatformStricmp::Strnicmp
                       ("http://abc:123@bc.com:999/" + uVar23,"abc:123",(longlong)iVar17);
    if ((iVar19 != 0) || ("abc:123"[iVar17] != '\0')) goto LAB_14457b49f;
  }
  uVar23 = (uint)local_790.HostName.Left;
  if (0x1a < uVar23) {
    uVar23 = 0x1a;
  }
  iVar17 = 0x1a - uVar23;
  if ((int)((uint)local_790.HostName.Right - (uint)local_790.HostName.Left) < (int)(0x1a - uVar23))
  {
    iVar17 = (uint)local_790.HostName.Right - (uint)local_790.HostName.Left;
  }
  iVar19 = iVar21;
  if (0 < iVar17) {
    iVar19 = iVar17;
  }
  if (iVar19 == 0) {
LAB_14457b513:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("UrlOut.HostName.Get(Url) == \"bc.com\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                        ,0x89,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar17 = FGenericPlatformStricmp::Strnicmp
                       ("http://abc:123@bc.com:999/" + uVar23,"bc.com",(longlong)iVar19);
    if ((iVar17 != 0) || ("bc.com"[iVar19] != '\0')) goto LAB_14457b513;
  }
  uVar23 = (uint)local_790.Port.Left;
  if (0x1a < uVar23) {
    uVar23 = 0x1a;
  }
  iVar17 = 0x1a - uVar23;
  if ((int)((uint)local_790.Port.Right - (uint)local_790.Port.Left) < (int)(0x1a - uVar23)) {
    iVar17 = (uint)local_790.Port.Right - (uint)local_790.Port.Left;
  }
  if (0 < iVar17) {
    iVar21 = iVar17;
  }
  if (iVar21 == 0) {
LAB_14457b583:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("UrlOut.Port.Get(Url) == \"999\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                        ,0x8a,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar17 = FGenericPlatformStricmp::Strnicmp
                       ("http://abc:123@bc.com:999/" + uVar23,"999",(longlong)iVar21);
    if ((iVar17 != 0) || ("999"[iVar21] != '\0')) goto LAB_14457b583;
  }
  if ((local_790.Path != '\x19') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("UrlOut.Path == 25",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x8b,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((OutcomeMsg == (char *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Message != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                          ,0x99,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = OutcomeMsg;
  if ((OutcomeMsg == (char *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Message != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                          ,0x99,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((uint)((ulonglong)pcVar28 >> 0x20) & 0x8000 | 0x10000) == 0x18000) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("FOutcome::Error(OutcomeMsg, -5).IsWaiting() == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                          ,0x90,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OutcomeMsg == (char *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Message != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                        ,0x99,L"");
    if (bVar16) {
code_r0x00014457b6e6:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((0x7fffffffffff < ((ulonglong)OutcomeMsg & 0xffffffffffff)) &&
          (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("FOutcome::Error(OutcomeMsg, -5).IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                               ,0x91,L""), bVar16)) goto code_r0x00014457b6e6;
  if (OutcomeMsg == (char *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Message != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                        ,0x99,L"");
    if (bVar16) {
code_r0x00014457b746:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((0x7fffffffffff < ((ulonglong)OutcomeMsg & 0xffffffffffff)) &&
          (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x58,L""), bVar16)) goto code_r0x00014457b746;
  if (OutcomeMsg == (char *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Message != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                        ,0x99,L"");
    if (bVar16) {
code_r0x00014457b7a6:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((0x7fffffffffff < ((ulonglong)OutcomeMsg & 0xffffffffffff)) &&
          (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsError()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                               ,0x58,L""), bVar16)) goto code_r0x00014457b7a6;
  pcVar28 = OutcomeMsg;
  if ((OutcomeMsg == (char *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Message != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                          ,0x99,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar28 = (char *)((ulonglong)pcVar28 & 0xffffffffffff);
  if (((char *)0x7fffffffffff < pcVar28) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                          ,0x57,L""), bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pcVar28 != (char *)0x0) {
    sVar20 = strlen(pcVar28);
    iVar24 = (int)sVar20;
  }
  pcVar25 = OutcomeMsg;
  if (iVar24 == 0) {
    cVar1 = *OutcomeMsg;
  }
  else {
    iVar17 = FGenericPlatformStricmp::Strnicmp(pcVar28,OutcomeMsg,(longlong)iVar24);
    if (iVar17 != 0) goto LAB_14457b84a;
    cVar1 = pcVar25[iVar24];
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_14457b84a:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("FOutcome::Error(OutcomeMsg, -5).GetMessage() == OutcomeMsg",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                      ,0x94,L"");
  if (!bVar16) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ParseMessage @ 14457bf50

int __cdecl UE::IoStore::HTTP::ParseMessage(TStringView<char> *param_1,FMessageOffsets *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (9 < param_1->Size) {
    pcVar2 = param_1->DataPtr;
    uVar6 = 9;
    iVar3 = FGenericPlatformStricmp::Strnicmp(pcVar2,"HTTP/1.1 ",9);
    if (iVar3 == 0) {
      do {
        if (pcVar2[uVar6] != ' ') break;
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while ((int)uVar4 < 0x20);
      param_2->StatusCode = (uchar)uVar6;
      if ((uint)uVar6 < 0x20) {
        do {
          if (9 < (int)pcVar2[(int)uVar6] - 0x30U) break;
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while ((int)uVar4 < 0x20);
      }
      uVar4 = (uint)uVar6;
      if ((uVar4 - param_2->StatusCode) - 1 < 0x21) {
        while ((uVar5 = (uint)uVar6, (int)uVar4 < 0x20 && (pcVar2[(int)uVar5] == ' '))) {
          uVar4 = uVar5 + 1;
          uVar6 = (ulonglong)uVar4;
        }
        param_2->Message = (uchar)uVar6;
        if ((int)uVar5 < 0x21) {
          cVar1 = pcVar2[(int)uVar5];
          while (cVar1 != '\r') {
            if (0x7ff < (int)uVar6) {
              return -1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            cVar1 = pcVar2[(int)uVar5];
          }
          if (pcVar2[(longlong)(int)uVar5 + 1] == '\n') {
            param_2->Headers = (short)uVar5 + 2;
            return 1;
          }
        }
      }
    }
  }
  return -1;
}

// ParseUrl @ 14457c060

int __cdecl UE::IoStore::HTTP::ParseUrl(TStringView<char> *param_1,FUrlOffsets *param_2)

{
  char cVar1;
  bool bVar2;
  Slice SVar3;
  Slice SVar4;
  Slice SVar5;
  Slice SVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uchar uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar16;
  uchar uVar17;
  uint uVar18;
  short sStackX_a;
  int aiStack_40 [2];
  undefined8 local_38;
  int local_30;
  byte local_2c;
  ulonglong uVar15;
  
  uVar9 = param_1->Size;
  if (4 < (int)uVar9) {
    pcVar11 = param_1->DataPtr;
    uVar16 = 0;
    (param_2->UserInfo).Left = '\0';
    (param_2->UserInfo).Right = '\0';
    (param_2->HostName).Left = '\0';
    (param_2->HostName).Right = '\0';
    (param_2->Port).Left = '\0';
    (param_2->Port).Right = '\0';
    param_2->Path = '\0';
    param_2->SchemeLength = '\0';
    uVar10 = 0;
    uVar15 = uVar16;
    do {
      uVar14 = (uint)uVar15;
      if (0x19 < (int)pcVar11[uVar15] - 0x61U) break;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < 5);
    param_2->SchemeLength = (uchar)uVar14;
    uVar7 = uVar9;
    if ((int)uVar14 < (int)uVar9) {
      uVar7 = uVar14;
    }
    uVar18 = uVar10;
    if (0 < (int)uVar7) {
      uVar18 = uVar7;
    }
    if (uVar18 != 0) {
      iVar8 = FGenericPlatformStricmp::Strnicmp(pcVar11,"http",(longlong)(int)uVar18);
      if ((((iVar8 == 0) && ("http"[(int)uVar18] == '\0')) ||
          ((iVar8 = FGenericPlatformStricmp::Strnicmp(pcVar11,"https",(longlong)(int)uVar18),
           iVar8 == 0 && ("https"[(int)uVar18] == '\0')))) &&
         (((pcVar11[uVar14] == ':' && (pcVar11[(ulonglong)uVar14 + 1] == '/')) &&
          (pcVar11[(ulonglong)uVar14 + 2] == '/')))) {
        for (uVar14 = uVar14 + 3; (int)uVar14 < (int)uVar9; uVar14 = uVar14 + 1) {
          uVar10 = (uint)uVar16;
          cVar1 = pcVar11[(int)uVar14];
          if (cVar1 < '-') break;
          if ((cVar1 == ':') || (cVar1 == '@')) {
            if (1 < (int)uVar10) break;
            if ((cVar1 == '@') && (uVar10 != 0)) {
              uVar10 = uVar10 - (aiStack_40[(longlong)(int)uVar10 * 2] == 0x3a);
            }
            uVar16 = (ulonglong)(uVar10 + 1);
            sStackX_a = (short)(cVar1 >> 7);
            (&local_38)[(int)uVar10] = CONCAT44(uVar14,CONCAT22(sStackX_a,(short)cVar1));
          }
          else if (cVar1 == '/') break;
          uVar10 = (uint)uVar16;
        }
        if (((int)uVar14 < 0x100) && ((int)(uVar18 + 3) < (int)uVar14)) {
          uVar12 = (uchar)uVar14;
          if ((int)uVar14 < (int)uVar9) {
            param_2->Path = uVar12;
          }
          uVar17 = (char)uVar18 + '\x03';
          SVar3.Right = uVar12;
          SVar3.Left = uVar17;
          param_2->HostName = SVar3;
          if (uVar10 != 0) {
            if (uVar10 == 1) {
              if ((int)local_38 == 0x3a) {
                uVar14 = (uint)local_38._4_1_;
                (param_2->HostName).Right = local_38._4_1_;
                SVar5.Right = uVar12;
                SVar5.Left = local_38._4_1_ + 1;
                param_2->Port = SVar5;
              }
              else {
                SVar6.Right = local_38._4_1_;
                SVar6.Left = uVar17;
                param_2->UserInfo = SVar6;
                bVar13 = local_38._4_1_ + 1 + (param_2->HostName).Right;
                uVar14 = (uint)bVar13;
                (param_2->HostName).Right = bVar13;
                (param_2->HostName).Left = local_38._4_1_ + 1 + uVar17;
              }
            }
            else {
              if (uVar10 != 2) {
                return -1;
              }
              if (local_30 != 0x3a || (int)local_38 != 0x40) {
                return -1;
              }
              SVar4.Right = local_38._4_1_;
              SVar4.Left = uVar17;
              param_2->UserInfo = SVar4;
              (param_2->Port).Right = uVar12;
              uVar14 = (uint)local_2c;
              (param_2->Port).Left = local_2c + 1;
              (param_2->HostName).Left = local_38._4_1_ + 1;
              (param_2->HostName).Right = local_2c;
            }
          }
          uVar12 = (param_2->UserInfo).Left;
          bVar13 = (param_2->Port).Left;
          bVar2 = (uchar)uVar14 == (param_2->HostName).Left ||
                  (param_2->UserInfo).Right == uVar12 && uVar12 != '\0';
          if (bVar13 != 0) {
            uVar9 = (uint)(param_2->Port).Right - (uint)bVar13;
            bVar2 = bVar2 || uVar9 == 0;
            if (0 < (int)uVar9) {
              pcVar11 = pcVar11 + bVar13;
              uVar16 = (ulonglong)uVar9;
              do {
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                bVar2 = (bool)(bVar2 | 9 < (int)cVar1 - 0x30U);
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
          if (bVar2) {
            return -1;
          }
          return 1;
        }
      }
    }
  }
  return -1;
}

// RedirectTest @ 14457f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::IoStore::HTTP::RedirectTest(char *param_1,ulong64 param_2)

{
  TRefCountPtr<FIoBuffer::BufCore> *pTVar1;
  ulong64 *_Dst;
  int *piVar2;
  undefined1 *this;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  size_t sVar17;
  void *pvVar18;
  FActivityNode *pFVar19;
  ulong64 *puVar20;
  FActivityNode *pFVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong64 uVar27;
  ulonglong *puVar28;
  char *pcVar29;
  ulonglong uVar30;
  longlong lVar31;
  char *pcVar32;
  ulong64 uVar33;
  char *pcVar34;
  char *local_res8 [2];
  undefined1 auStack_3e8 [32];
  uint local_3c8 [2];
  FEventLoop local_3c0;
  undefined4 local_3b8;
  ulonglong *local_3b0;
  FUrlOffsets local_3a8;
  FIoBuffer local_3a0;
  undefined8 local_398;
  uint *local_390;
  FRequest local_388;
  ulong64 local_380;
  FRequest local_378;
  ulong64 local_370;
  undefined8 uStack_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  char *local_328;
  ulonglong uStack_320;
  ulong64 local_318;
  uint local_308;
  char *local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  char *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  char *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  char *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  char *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  char *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FParams local_298;
  FParams local_258;
  TStringView<char> local_218;
  TStringView<char> local_208;
  TStringView<char> local_1f8;
  code *local_1e8 [5];
  undefined8 *local_1c0;
  code *local_1b8 [5];
  undefined8 *local_190;
  TStringBuilderBase<char> local_188;
  char local_168 [64];
  TStringBuilderBase<char> local_128;
  char local_108 [64];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70 [7];
  
  local_70[0] = __security_cookie.value ^ (ulonglong)auStack_3e8;
  local_res8[0] = param_1;
  local_380 = param_2;
  FEventLoop::FEventLoop(&local_3c0);
  local_188.Base = local_168;
  local_188.CurPos = local_168;
  uStack_368 = (ulonglong)uStack_368._4_4_ << 0x20;
  local_188.End = (char *)&local_128;
  local_360 = local_360 & 0xffffffffffffff00;
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  FIoBuffer::FIoBuffer(&local_3a0);
  fVar8 = __real_3ca3d70a;
  local_c8._0_4_ = 0x12d;
  local_398 = 0xaa493493493493bb;
  local_390 = local_3c8;
  local_c8._4_4_ = 0x12e;
  local_3b0 = &local_b8;
  local_c0 = 0x133;
  local_bc = 0x134;
  local_b8 = __xmm_00000003000000020000000100000000;
  uStack_b0 = _UNK_150631e08;
  do {
    local_370 = 0;
    pcVar32 = "http://";
    local_3c8[0] = 0;
    uVar25 = (uint)*local_3b0 & 1;
    pcVar34 = "/rel/";
    puVar28 = &local_c8;
    if (uVar25 != 0) {
      pcVar32 = "https://";
      local_370 = param_2;
    }
    if ((int)(uint)*local_3b0 < 2) {
      pcVar34 = "/abs/";
    }
    local_3b8 = 0x2515;
    if (uVar25 != 0) {
      local_3b8 = 0x134b;
    }
    do {
      pcVar29 = local_188.Base;
      uVar6 = *puVar28;
      local_188.CurPos = local_188.Base;
      sVar17 = strlen(pcVar32);
      uVar27 = (ulong64)(int)sVar17;
      if (local_188.End < (TStringBuilderBase<char> *)(pcVar29 + uVar27)) {
        TStringBuilderBase<char>::Extend(&local_188,uVar27);
        pcVar29 = local_188.CurPos;
      }
      if ((int)sVar17 != 0) {
        pvVar18 = FGenericPlatformString::Memcpy(pcVar29,pcVar32,uVar27);
        local_188.CurPos = (char *)((longlong)pvVar18 + uVar27);
      }
      operator<<<char,char_const_*_&>(&local_188,local_res8);
      if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 1)) {
        TStringBuilderBase<char>::Extend(&local_188,1);
      }
      pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,&s__,1);
      local_188.CurPos = (char *)((longlong)pvVar18 + 1);
      TStringBuilderBase<char>::AppendfImpl(&local_188,"%d");
      if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 9)) {
        TStringBuilderBase<char>::Extend(&local_188,9);
      }
      pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,"/redirect",9);
      pcVar29 = (char *)((longlong)pvVar18 + 9);
      local_188.CurPos = pcVar29;
      sVar17 = strlen(pcVar34);
      uVar27 = (ulong64)(int)sVar17;
      if (local_188.End < (TStringBuilderBase<char> *)(pcVar29 + uVar27)) {
        TStringBuilderBase<char>::Extend(&local_188,uVar27);
        pcVar29 = local_188.CurPos;
      }
      if ((int)sVar17 != 0) {
        pvVar18 = FGenericPlatformString::Memcpy(pcVar29,pcVar34,uVar27);
        local_188.CurPos = (char *)((longlong)pvVar18 + uVar27);
      }
      TStringBuilderBase<char>::AppendfImpl(&local_188,"%u");
      if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 6)) {
        TStringBuilderBase<char>::Extend(&local_188,6);
      }
      pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,"/data/",6);
      local_188.CurPos = (char *)((longlong)pvVar18 + 6);
      TStringBuilderBase<char>::AppendfImpl(&local_188,"%u");
      iStack_2e0 = (int)local_188.CurPos - (int)local_188.Base;
      pFVar21 = (FActivityNode *)0x0;
      local_2e8 = local_188.Base;
      local_300 = "GET";
      local_298._padding_ = 0;
      local_298._padding_ = 0;
      local_218._12_4_ = uStack_2dc;
      local_218.Size = iStack_2e0;
      uStack_2f8 = 3;
      local_298._padding_ = CONCAT44(uStack_2f4,3);
      local_298._padding_ = 0;
      local_298._padding_._0_4_ = 0;
      local_298._padding_ = 0x150d74d54;
      local_298._padding_._4_4_ = 0x1000100;
      local_298.bFollow30x = true;
      local_298.HttpVersion = Default;
      local_298._padding_._0_4_ = 0;
      local_218.DataPtr = local_188.Base;
      pFVar19 = FActivityNode::Create(&local_298,&local_218,local_370);
      if (pFVar19 != (FActivityNode *)0x0) {
        Trace((FActivity *)pFVar19,ActivityCreate,0);
        pFVar21 = pFVar19;
      }
      local_388.Ptr = pFVar21;
      if (local_c8._4_4_ < (uint)uVar6) {
        if ((*(char *)pFVar21 != '\0') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("State == EState::Build",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                                ,0xce,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(short *)&pFVar21->field_0x6 == -1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("HeaderCount < 0xffff",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                                ,0xd0,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(short *)&pFVar21->field_0x6 = *(short *)&pFVar21->field_0x6 + 1;
        this = &pFVar21->field_0x88;
        uVar22 = *(int *)this + *(uint *)&pFVar21->field_0x94 & 1;
        uVar25 = 2 - uVar22;
        if (uVar22 == 0) {
          uVar25 = 0;
        }
        uVar22 = uVar25 + 0x26 + (*(uint *)&pFVar21->field_0x94 & 0x7fffffff);
        if (*(uint *)&pFVar21->field_0x90 < uVar22) {
          FBuffer::Extend((FBuffer *)this,uVar22,0x100);
        }
        uVar26 = *(uint *)&pFVar21->field_0x94;
        lVar3 = *(longlong *)this;
        lVar31 = (ulonglong)(uVar26 & 0x7fffffff) + (ulonglong)uVar25;
        *(uint *)&pFVar21->field_0x94 = (uVar22 ^ uVar26) & 0x7fffffff ^ uVar26;
        *(undefined4 *)(lVar31 + lVar3) = 0x14000e;
        *(undefined8 *)(lVar31 + 4 + lVar3) = s_TestCodeHeader._0_8_;
        *(undefined4 *)(lVar31 + 0xc + lVar3) = s_TestCodeHeader._8_4_;
        *(undefined2 *)(lVar31 + 0x10 + lVar3) = s_TestCodeHeader._12_2_;
        uVar9 = s_Header_Of_Test_Codes._8_8_;
        pcVar29 = (char *)(lVar31 + 0x12 + lVar3);
        *(undefined8 *)pcVar29 = s_Header_Of_Test_Codes._0_8_;
        *(undefined8 *)(pcVar29 + 8) = uVar9;
        *(undefined4 *)(lVar31 + 0x22 + lVar3) = s_Header_Of_Test_Codes._16_4_;
      }
      local_1e8[0] = (code *)0x0;
      local_1c0 = (undefined8 *)0x0;
      local_1c0 = FMemory::Malloc(0x20,8);
      pTVar1 = (TRefCountPtr<FIoBuffer::BufCore> *)(local_1c0 + 1);
      *local_1c0 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::`2'::<lambda_3>,0,1>::
                    _vftable_;
      pTVar1->Reference = (BufCore *)0x0;
      pTVar1->Reference = (BufCore *)local_3a0.CorePtr.Reference;
      if (local_3a0.CorePtr.Reference != (BufCore *)0x0) {
        LOCK();
        *(int *)((longlong)local_3a0.CorePtr.Reference + 0xc) =
             *(int *)((longlong)local_3a0.CorePtr.Reference + 0xc) + 1;
        UNLOCK();
      }
      local_1c0[2] = local_398;
      local_1c0[3] = local_390;
      if (pTVar1 != (TRefCountPtr<FIoBuffer::BufCore> *)0x0) {
        local_1e8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                       ::Call;
      }
      FEventLoop::Send(&local_3c0,&local_388,
                       (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                       local_1e8,0xaa493493493493bb);
      if (local_388.Ptr != (FActivityNode *)0x0) {
        FActivityNode::Destroy(local_388.Ptr);
      }
      puVar28 = (ulonglong *)((longlong)puVar28 + 4);
    } while (puVar28 != &local_b8);
    uVar25 = FEventLoop::FImpl::Tick(local_3c0.Impl,-1);
    while (uVar25 != 0) {
      FWindowsPlatformProcess::SleepNoStats(fVar8);
      uVar25 = FEventLoop::FImpl::Tick(local_3c0.Impl,-1);
    }
    if ((local_3c8[0] != 0xc0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecvCount == RecvDataSize * (sizeof(UEArrayCountHelper(TestCodes)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                            ,0x15f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = _UNK_150d75818;
    uVar10 = ___xmm_000000270000001a0000000d00000400;
    uVar9 = _UNK_150d75808;
    uVar6 = ___xmm_00000011000000370000010b00000004;
    local_3b0 = (ulonglong *)((longlong)local_3b0 + 4);
    param_2 = local_380;
  } while (local_3b0 != &local_a8);
  local_358 = 0;
  local_348 = 0;
  local_3b0 = &local_a8;
  uStack_350 = 0x100010000000000;
  local_360 = 0;
  local_370 = 0;
  uStack_368 = 0x100010000000000;
  local_a8 = __xmm_00000003000000020000000100000000;
  uStack_a0 = _UNK_150631e08;
  do {
    pcVar32 = local_188.Base;
    uVar7 = *local_3b0;
    pcVar34 = "http://";
    local_328 = (char *)0x0;
    uStack_320 = uStack_320 & 0xffffffff00000000;
    uVar22 = (uint)uVar7 & 1;
    local_308 = 0;
    uVar25 = 0;
    if (uVar22 != 0) {
      pcVar34 = "https://";
    }
    local_188.CurPos = local_188.Base;
    sVar17 = strlen(pcVar34);
    uVar27 = (ulong64)(int)sVar17;
    if (local_188.End < (TStringBuilderBase<char> *)(pcVar32 + uVar27)) {
      TStringBuilderBase<char>::Extend(&local_188,uVar27);
      pcVar32 = local_188.CurPos;
    }
    if ((int)sVar17 != 0) {
      pvVar18 = FGenericPlatformString::Memcpy(pcVar32,pcVar34,uVar27);
      local_188.CurPos = (char *)((longlong)pvVar18 + uVar27);
    }
    operator<<<char,char_const_*_&>(&local_188,local_res8);
    if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 1)) {
      TStringBuilderBase<char>::Extend(&local_188,1);
    }
    pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,&s__,1);
    local_188.CurPos = (char *)((longlong)pvVar18 + 1);
    TStringBuilderBase<char>::AppendfImpl(&local_188,"%d");
    if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 9)) {
      TStringBuilderBase<char>::Extend(&local_188,9);
    }
    pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,"/redirect",9);
    pcVar34 = "/rel/";
    pcVar32 = (char *)((longlong)pvVar18 + 9);
    if ((int)(uint)uVar7 < 2) {
      pcVar34 = "/abs/";
    }
    local_188.CurPos = pcVar32;
    sVar17 = strlen(pcVar34);
    uVar27 = (ulong64)(int)sVar17;
    if (local_188.End < (TStringBuilderBase<char> *)(pcVar32 + uVar27)) {
      TStringBuilderBase<char>::Extend(&local_188,uVar27);
      pcVar32 = local_188.CurPos;
    }
    if ((int)sVar17 != 0) {
      pvVar18 = FGenericPlatformString::Memcpy(pcVar32,pcVar34,uVar27);
      local_188.CurPos = (char *)((longlong)pvVar18 + uVar27);
    }
    TStringBuilderBase<char>::AppendfImpl(&local_188,"%u");
    if (local_188.End < (TStringBuilderBase<char> *)(local_188.CurPos + 6)) {
      TStringBuilderBase<char>::Extend(&local_188,6);
    }
    pvVar18 = FGenericPlatformString::Memcpy(local_188.CurPos,"/data/",6);
    local_188.CurPos = (char *)((longlong)pvVar18 + 6);
    TStringBuilderBase<char>::AppendfImpl(&local_188,"%u");
    pcVar32 = local_188.Base;
    uVar26 = (int)local_188.CurPos - (int)local_188.Base;
    local_2d8 = local_188.Base;
    local_208._12_4_ = uStack_2cc;
    local_208.Size = uVar26;
    local_208.DataPtr = local_188.Base;
    uStack_2d0 = uVar26;
    iVar14 = ParseUrl(&local_208,&local_3a8);
    if (-1 < iVar14) {
      iVar14 = (uint)local_3a8.HostName.Right - (uint)local_3a8.HostName.Left;
      uVar25 = (uint)local_3a8.HostName.Left;
      if (local_3a8.HostName.Left != uVar26 && (int)uVar26 <= (int)(uint)local_3a8.HostName.Left) {
        uVar25 = uVar26;
      }
      iVar15 = uVar26 - uVar25;
      if (iVar14 < (int)(uVar26 - uVar25)) {
        iVar15 = iVar14;
      }
      local_328 = pcVar32 + (int)uVar25;
      iStack_2c0 = 0;
      if (0 < iVar15) {
        iStack_2c0 = iVar15;
      }
      uStack_320 = CONCAT44(uStack_2bc,iStack_2c0);
      uVar25 = 0;
      local_2c8 = local_328;
      if (local_3a8.Port.Left != 0) {
        uVar23 = (uint)local_3a8.Port.Left;
        uVar24 = uVar23;
        if ((int)uVar26 < (int)uVar23) {
          uVar24 = uVar26;
        }
        uVar25 = 0;
        iVar14 = uVar26 - uVar24;
        if ((int)(local_3a8.Port.Right - uVar23) < (int)(uVar26 - uVar24)) {
          iVar14 = local_3a8.Port.Right - uVar23;
        }
        pcVar32 = pcVar32 + (int)uVar24;
        iVar15 = 0;
        if (0 < iVar14) {
          iVar15 = iVar14;
        }
        pcVar34 = pcVar32 + iVar15;
        for (; (pcVar32 != pcVar34 && ((int)*pcVar32 - 0x30U < 10)); pcVar32 = pcVar32 + 1) {
          uVar25 = ((int)*pcVar32 - 0x30U) + uVar25 * 10;
        }
        uVar25 = uVar25 & 0xffff;
        local_308 = uVar25;
      }
    }
    uVar33 = 0;
    uVar27 = uVar33;
    if (uVar22 != 0) {
      uVar27 = local_380;
    }
    local_318 = uVar27;
    if ((0xffff < uVar25) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Port <= 0xffffu",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\ConnectionPool.inl"
                            ,0xf5,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = uStack_320;
    uVar30 = uStack_320 & 0xffffffff;
    puVar20 = FMemory::Malloc((ulonglong)((int)uStack_320 + 0x31),8);
    _Dst = puVar20 + 6;
    memcpy(_Dst,local_328,uVar7 & 0xffffffff);
    *(undefined1 *)((longlong)_Dst + uVar30) = 0;
    *puVar20 = uVar27;
    puVar20[1] = (ulong64)_Dst;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined2 *)(puVar20 + 4) = 0xffff;
    *(short *)((longlong)puVar20 + 0x24) = (short)local_308;
    *(undefined4 *)((longlong)puVar20 + 0x26) = 0x1010104;
    if ((short)local_308 == 0) {
      uVar13 = 0x1bb;
      if (uVar27 == 0) {
        uVar13 = 0x50;
      }
      *(undefined2 *)((longlong)puVar20 + 0x24) = uVar13;
    }
    *(undefined2 *)((longlong)puVar20 + 0x22) = 0xffff;
    puVar28 = &local_98;
    local_3c8[0] = 0;
    local_98 = uVar6;
    uStack_90 = uVar9;
    local_78 = 0x34;
    local_88 = uVar10;
    uStack_80 = uVar11;
    local_74 = 0x1ed;
    do {
      local_128.Base = local_108;
      local_128.CurPos = local_108;
      local_128.bIsDynamic = false;
      local_128.bIsExternal = false;
      local_128.End = (char *)&local_c8;
      uVar25 = (int)uVar33 + (int)*puVar28;
      uVar33 = (ulong64)uVar25;
      pvVar18 = FGenericPlatformString::Memcpy(local_108,"/redirect/abs/307/data/",0x17);
      local_128.CurPos = (char *)((longlong)pvVar18 + 0x17);
      TStringBuilderBase<char>::AppendfImpl(&local_128,"%u");
      local_1b8[0] = (code *)0x0;
      local_190 = (undefined8 *)0x0;
      local_190 = FMemory::Malloc(0x20,8);
      pTVar1 = (TRefCountPtr<FIoBuffer::BufCore> *)(local_190 + 1);
      *local_190 = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::`2'::<lambda_3>,0,1>::
                    _vftable_;
      pTVar1->Reference = (BufCore *)0x0;
      pTVar1->Reference = (BufCore *)local_3a0.CorePtr.Reference;
      if (local_3a0.CorePtr.Reference != (BufCore *)0x0) {
        LOCK();
        *(int *)((longlong)local_3a0.CorePtr.Reference + 0xc) =
             *(int *)((longlong)local_3a0.CorePtr.Reference + 0xc) + 1;
        UNLOCK();
      }
      local_190[2] = local_398;
      local_190[3] = local_390;
      if (pTVar1 != (TRefCountPtr<FIoBuffer::BufCore> *)0x0) {
        local_1b8[0] = Core::Private::Function::
                       TFunctionRefCaller<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                       ::Call;
      }
      if (local_128.End < local_128.CurPos + 1) {
        TStringBuilderBase<char>::Extend(&local_128,1);
      }
      *local_128.CurPos = '\0';
      local_2a8 = local_128.Base;
      uVar16 = 0;
      if (local_128.Base != (char *)0x0) {
        sVar17 = strlen(local_128.Base);
        uVar16 = (undefined4)sVar17;
      }
      local_2b8 = "GET";
      uStack_2b0 = 3;
      uStack_2a0 = uVar16;
      if ((puVar20 == (ulong64 *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pool.Ptr != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0x4c0,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((local_370 != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Params == nullptr || Params->VerifyCert == ECertRootsRefType::None",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0x4c1,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((char)local_360 != '\0') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Params == nullptr || Params->HttpVersion == EHttpVersion::Default",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0x4c2,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_258._padding_ = CONCAT44(uStack_2ac,uStack_2b0);
      local_258._padding_ = CONCAT44(uStack_29c,uStack_2a0);
      uStack_330 = 0;
      local_258._padding_ = (longlong)local_2b8;
      local_338 = 0;
      local_1f8.DataPtr = (char *)0x0;
      local_1f8.Size = 0;
      local_1f8._12_4_ = 0;
      local_258._padding_ = 0;
      local_258._padding_._4_4_ = 0x1000000;
      local_258.bFollow30x = true;
      local_258.HttpVersion = Default;
      local_258._padding_ = (longlong)local_2a8;
      local_258._padding_._0_4_ = (undefined4)uStack_368;
      local_258._padding_ = (longlong)puVar20;
      pFVar21 = FActivityNode::Create(&local_258,&local_1f8,0);
      if ((pFVar21 == (FActivityNode *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Activity != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                              ,0x4ce,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      Trace((FActivity *)pFVar21,ActivityCreate,0);
      local_378.Ptr = pFVar21;
      FEventLoop::Send(&local_3c0,&local_378,
                       (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                       local_1b8,0xaa493493493493bb);
      if (local_378.Ptr != (FActivityNode *)0x0) {
        FActivityNode::Destroy(local_378.Ptr);
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_128);
      puVar28 = (ulonglong *)((longlong)puVar28 + 4);
    } while (puVar28 != local_70);
    uVar22 = FEventLoop::FImpl::Tick(local_3c0.Impl,-1);
    while (uVar22 != 0) {
      FWindowsPlatformProcess::SleepNoStats(fVar8);
      uVar22 = FEventLoop::FImpl::Tick(local_3c0.Impl,-1);
    }
    if ((local_3c8[0] != uVar25) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecvCount == ExpectCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                            ,0x17f,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (puVar20 != (ulong64 *)0x0) {
      FMemory::Free(puVar20);
    }
    local_3b0 = (ulonglong *)((longlong)local_3b0 + 4);
    if (local_3b0 == &local_98) {
      if (local_3a0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_3a0.CorePtr.Reference);
        LOCK();
        piVar2 = (int *)((longlong)local_3a0.CorePtr.Reference + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_3a0.CorePtr.Reference);
          ::operator_delete((void *)local_3a0.CorePtr.Reference,0x20);
        }
      }
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_188);
      if (local_3c0.Impl != (FImpl *)0x0) {
        if (((local_3c0.Impl)->BusyCount != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("BusyCount == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                                ,0x3b9,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        DestructItems<UE::IoStore::HTTP::FHostGroup,int>
                  ((FHostGroup *)((local_3c0.Impl)->Groups).AllocatorInstance.Data,
                   ((local_3c0.Impl)->Groups).ArrayNum);
        pFVar4 = ((local_3c0.Impl)->Groups).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        if ((((local_3c0.Impl)->Pending).Head != (FActivityNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                                ,0xc5,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)local_3c0.Impl);
        ::operator_delete(local_3c0.Impl,0x80);
      }
      return;
    }
  } while( true );
}

// SeedHttp @ 1445807e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::IoStore::HTTP::SeedHttp(char *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  size_t sVar7;
  FActivityNode *pFVar8;
  char *pcVar9;
  FActivityNode *pFVar10;
  ulong64 uVar11;
  int iVar12;
  undefined1 auStack_178 [32];
  FEventLoop local_158;
  FRequest local_150;
  char *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FParams local_128;
  TStringView<char> local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  code *local_c0;
  undefined8 local_b0;
  TStringBuilderBase<char> local_a8;
  char local_88 [64];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_a8.Base = local_88;
  local_a8.CurPos = local_88;
  local_a8.End = (char *)local_48;
  local_a8.bIsDynamic = false;
  local_a8.bIsExternal = false;
  pvVar6 = FGenericPlatformString::Memcpy(local_88,"http://",7);
  pFVar10 = (FActivityNode *)0x0;
  iVar12 = 0;
  pcVar9 = (char *)((longlong)pvVar6 + 7);
  local_a8.CurPos = pcVar9;
  if (param_1 != (char *)0x0) {
    sVar7 = strlen(param_1);
    iVar12 = (int)sVar7;
  }
  uVar11 = (ulong64)iVar12;
  if (local_a8.End < pcVar9 + uVar11) {
    TStringBuilderBase<char>::Extend(&local_a8,uVar11);
    pcVar9 = local_a8.CurPos;
  }
  if (iVar12 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(pcVar9,param_1,uVar11);
    pcVar9 = (char *)((longlong)pvVar6 + uVar11);
    local_a8.CurPos = pcVar9;
  }
  if (local_a8.End < pcVar9 + 0xb) {
    TStringBuilderBase<char>::Extend(&local_a8,0xb);
    pcVar9 = local_a8.CurPos;
  }
  pvVar6 = FGenericPlatformString::Memcpy(pcVar9,":9493/seed/",0xb);
  local_a8.CurPos = (char *)((longlong)pvVar6 + 0xb);
  TStringBuilderBase<char>::AppendfImpl(&local_a8,"%u");
  FEventLoop::FEventLoop(&local_158);
  iStack_130 = (int)local_a8.CurPos - (int)local_a8.Base;
  local_138 = local_a8.Base;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_e8._12_4_ = uStack_12c;
  local_e8.Size = iStack_130;
  local_148 = "GET";
  uStack_140 = 3;
  local_128._padding_ = CONCAT44(uStack_13c,3);
  local_128._padding_ = 0;
  local_128._padding_._0_4_ = 0;
  local_128._padding_ = 0x150d74d54;
  local_128._padding_._4_4_ = 0x1000100;
  local_128.bFollow30x = false;
  local_128.HttpVersion = Default;
  local_128._padding_._0_4_ = 0;
  local_e8.DataPtr = local_a8.Base;
  pFVar8 = FActivityNode::Create(&local_128,&local_e8,0);
  if (pFVar8 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar8,ActivityCreate,0);
    pFVar10 = pFVar8;
  }
  local_c8 = &
             ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_b0 = 0;
  local_c0 = `UE::IoStore::HTTP::SeedHttp'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_d8[0] = Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
                ::Call;
  local_150.Ptr = pFVar10;
  FEventLoop::Send(&local_158,&local_150,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_d8,0);
  uVar5 = FEventLoop::FImpl::Tick(local_158.Impl,-1);
  fVar3 = __real_3ca3d70a;
  while (uVar5 != 0) {
    FWindowsPlatformProcess::SleepNoStats(fVar3);
    uVar5 = FEventLoop::FImpl::Tick(local_158.Impl,-1);
  }
  if (local_150.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_150.Ptr);
  }
  if (local_158.Impl != (FImpl *)0x0) {
    if (((local_158.Impl)->BusyCount != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BusyCount == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x3b9,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DestructItems<UE::IoStore::HTTP::FHostGroup,int>
              ((FHostGroup *)((local_158.Impl)->Groups).AllocatorInstance.Data,
               ((local_158.Impl)->Groups).ArrayNum);
    pFVar1 = ((local_158.Impl)->Groups).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((((local_158.Impl)->Pending).Head != (FActivityNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0xc5,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)local_158.Impl);
    ::operator_delete(local_158.Impl,0x80);
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_a8);
  return;
}

// Socket_HtoNl @ 144581c80

uint __cdecl UE::IoStore::HTTP::Socket_HtoNl(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

// Socket_HtoNs @ 144581c90

ushort __cdecl UE::IoStore::HTTP::Socket_HtoNs(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}

// Ssl_AssociatePeer @ 144581ca0

void __cdecl UE::IoStore::HTTP::Ssl_AssociatePeer(ssl_st *param_1,FPeer *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = SSL_get_rbio();
  lVar3 = SSL_get_wbio(param_1);
  if (lVar2 != lVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bio == SSL_get_wbio(Ssl)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Peer.inl"
                       ,0xfa,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BIO_set_data(lVar2,param_2);
  return;
}

// Ssl_BioControl @ 144581d10

long __cdecl
UE::IoStore::HTTP::Ssl_BioControl(bio_st *param_1,int param_2,long param_3,void *param_4)

{
  return (long)(param_2 == 0xb);
}

// Ssl_BioRead @ 144581d20

int __cdecl
UE::IoStore::HTTP::Ssl_BioRead(bio_st *param_1,char *param_2,ulong64 param_3,ulong64 *param_4)

{
  int iVar1;
  FSocket *this;
  uint local_res20;
  uint uStackX_24;
  
  *param_4 = 0;
  BIO_clear_flags(param_1,0xf);
  this = (FSocket *)BIO_get_data(param_1);
  FSocket::Recv(this,(char *)&local_res20,(uint)param_2);
  if ((uStackX_24 & 0x18000) == 0x18000) {
    BIO_set_flags(param_1,9);
    iVar1 = 0;
  }
  else if ((CONCAT44(uStackX_24,local_res20) & 0xffffffffffff) < 0x800000000000) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    *param_4 = (ulonglong)local_res20;
  }
  return iVar1;
}

// Ssl_BioWrite @ 144581de0

int __cdecl
UE::IoStore::HTTP::Ssl_BioWrite(bio_st *param_1,char *param_2,ulong64 param_3,ulong64 *param_4)

{
  int iVar1;
  FSocket *this;
  uint local_res20;
  uint uStackX_24;
  
  *param_4 = 0;
  BIO_clear_flags(param_1,0xf);
  this = (FSocket *)BIO_get_data(param_1);
  FSocket::Send(this,(char *)&local_res20,(uint)param_2);
  if ((uStackX_24 & 0x18000) == 0x18000) {
    BIO_set_flags(param_1,10);
    iVar1 = 0;
  }
  else if ((CONCAT44(uStackX_24,local_res20) & 0xffffffffffff) < 0x800000000000) {
    iVar1 = -1;
  }
  else {
    iVar1 = 1;
    *param_4 = (ulonglong)local_res20;
  }
  return iVar1;
}

// TickOne @ 144582e20

FOutcome __cdecl UE::IoStore::HTTP::TickOne(FTlsPeer *param_1,void *param_2)

{
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
  *(undefined4 *)&param_1->_padding_ = 1;
  return (FOutcome)(FOutcome_u_0)param_1;
}

// TickTwo @ 144583170

FOutcome __cdecl UE::IoStore::HTTP::TickTwo(FTlsPeer *param_1,void *param_2)

{
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  FDriverNg *in_R8;
  
  if ((-1 < in_R8->RecvRemaining) &&
     (bVar1 = (in_R8->field6_0x21c).RecvFrame.Id[3], (bVar1 & 1) != 0)) {
    uVar2 = (in_R8->field6_0x21c).RecvFrame.Id[1];
    uVar3 = (in_R8->field6_0x21c).RecvFrame.Id[0];
    uVar4 = (in_R8->field6_0x21c).RecvFrame.Id[2];
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(uint *)&param_1->_padding_ = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),bVar1);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  DetailTwo::FDriverNg::Tick(in_R8,param_1);
  return (FOutcome)(FOutcome_u_0)param_1;
}

// TlsTest @ 1445831f0

void __cdecl UE::IoStore::HTTP::TlsTest(void)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  FIoBuffer this;
  bool bVar4;
  uint uVar5;
  size_t sVar6;
  FActivityNode *pFVar7;
  FActivityNode *pFVar8;
  int iVar9;
  FRequest local_res8;
  FEventLoop local_res10;
  FIoBuffer local_res18;
  FCertRoots local_res20;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  TMemoryView<void_const_> local_b8;
  FParams local_a8;
  TStringView<char> local_68;
  code *local_58 [2];
  undefined **local_48;
  TRefCountPtr<FIoBuffer::BufCore> local_40;
  undefined8 local_30;
  
  FEventLoop::FEventLoop(&local_res10);
  pFVar8 = (FActivityNode *)0x0;
  local_res18.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  FIoBuffer::FIoBuffer(&local_res18);
  local_68.DataPtr = Url;
  iVar9 = 0;
  if (Url != (char *)0x0) {
    sVar6 = strlen(Url);
    iVar9 = (int)sVar6;
  }
  local_a8._padding_ = 0;
  local_a8._padding_ = 0;
  local_68._12_4_ = uStack_bc;
  local_68.Size = iVar9;
  local_a8._padding_ = CONCAT44(uStack_cc,4);
  local_a8._padding_ = 0;
  local_a8._padding_._0_4_ = 0;
  local_a8._padding_ = 0x150d73068;
  local_a8._padding_._4_4_ = 0x1000100;
  local_a8.bFollow30x = true;
  local_a8.HttpVersion = Default;
  local_a8._padding_._0_4_ = 0;
  pFVar7 = FActivityNode::Create(&local_a8,&local_68,0);
  if (pFVar7 != (FActivityNode *)0x0) {
    Trace((FActivity *)pFVar7,ActivityCreate,0);
    pFVar8 = pFVar7;
  }
  local_48 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::`2'::<lambda_2>,0,0>::_vftable_;
  local_30 = 0;
  local_40 = local_res18.CorePtr.Reference;
  if (local_res18.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_res18.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_res18.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  local_58[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                ::Call;
  local_res8.Ptr = pFVar8;
  FEventLoop::Send(&local_res10,&local_res8,
                   (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_58,0);
  uVar5 = FEventLoop::FImpl::Tick(local_res10.Impl,-1);
  fVar3 = __real_3ca3d70a;
  while (uVar5 != 0) {
    FWindowsPlatformProcess::SleepNoStats(fVar3);
    uVar5 = FEventLoop::FImpl::Tick(local_res10.Impl,-1);
  }
  if (local_res8.Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_res8.Ptr);
  }
  local_b8.Size = 3;
  local_b8.Data = &s_493;
  FCertRoots::FCertRoots(&local_res20,&local_b8);
  if (local_res20.Handle != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NotACert.IsValid() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x112,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_res20.Handle != 0) {
      SSL_CTX_free(local_res20.Handle);
    }
  }
  this.CorePtr.Reference = local_res18.CorePtr.Reference;
  if (local_res18.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res18.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this.CorePtr.Reference + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this.CorePtr.Reference);
      ::operator_delete((void *)this.CorePtr.Reference,0x20);
    }
  }
  FEventLoop::~FEventLoop(&local_res10);
  return;
}

// Trace @ 1445833e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::IoStore::HTTP::Trace(FActivity *param_1,ETrace param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  FScopeBuffer *this;
  TStringView<char> *pTVar3;
  uint *puVar4;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  TStringBuilderBase<char> local_78;
  char local_58 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_2 == ActivityCreate) {
    if (ActScopes[0] == 0) {
      ActScopes[0] = FCpuProfilerTrace::OutputEventType("Iax/Activity","",0);
      local_78.Base = local_58;
      local_78.End = (char *)local_38;
      puVar4 = ActScopes + 1;
      local_78.bIsDynamic = false;
      local_78.bIsExternal = false;
      do {
        local_78.CurPos = local_78.Base;
        if (local_78.End < local_78.Base + 0xd) {
          TStringBuilderBase<char>::Extend(&local_78,0xd);
        }
        pvVar2 = FGenericPlatformString::Memcpy(local_78.CurPos,"Iax/Activity_",0xd);
        local_78.CurPos = (char *)((longlong)pvVar2 + 0xd);
        TStringBuilderBase<char>::AppendfImpl(&local_78,"%llu");
        uVar1 = FCpuProfilerTrace::OutputEventType(local_78.Base,"",0);
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while ((longlong)puVar4 < 0x15507f5d0);
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_78);
    }
    this = (FScopeBuffer *)LaneEstate_Build(GActivityTraceEstate,(FLanePostcode)param_1);
    uVar1 = ActScopes[param_1->LengthScore];
    QueryPerformanceCounter(local_88);
    LaneTraceDetail::FScopeBuffer::Enter(this,local_88[0].QuadPart,uVar1);
  }
  else {
    if (param_2 == ActivityDestroy) {
      LaneEstate_Demolish(GActivityTraceEstate,(FLanePostcode)param_1);
      return;
    }
    this = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)param_1);
    if (param_2 != StateChange) {
      return;
    }
    if (StateScopes[0] == 0) {
      pTVar3 = StateNames;
      puVar4 = StateScopes;
      do {
        uVar1 = FCpuProfilerTrace::OutputEventType(pTVar3->DataPtr,"",0);
        pTVar3 = pTVar3 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (pTVar3 != (TStringView<char> *)"Iax/Build");
    }
    uVar1 = StateScopes[param_3];
    QueryPerformanceCounter(local_88);
    if (param_3 != 0) {
      LaneTraceDetail::FScopeBuffer::Leave(this,local_88[0].QuadPart);
    }
    LaneTraceDetail::FScopeBuffer::Enter(this,local_88[0].QuadPart,uVar1);
  }
  LaneTraceDetail::FScopeBuffer::Flush(this,false);
  return;
}

// Trace @ 144583630

void __cdecl UE::IoStore::HTTP::Trace(ulong64 param_1,ETrace param_2,FOutcome *param_3)

{
  FScopeBuffer *this;
  FLaneTrace *pFVar1;
  uint uVar2;
  int *piVar3;
  LARGE_INTEGER local_res20;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    SockScopeId = FCpuProfilerTrace::OutputEventType("Iax/Socket","",0);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ConnScopeId = FCpuProfilerTrace::OutputEventType("Iax/Connect","",0);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar3 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    SendScopeId = FCpuProfilerTrace::OutputEventType("Iax/Send","",0);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar3 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    RecvScopeId = FCpuProfilerTrace::OutputEventType("Iax/Recv","",0);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar3 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    WaitScopeId = FCpuProfilerTrace::OutputEventType("Iax/Wait","",0);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar3 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    IdleScopeId = FCpuProfilerTrace::OutputEventType("Iax/Idle","",0);
    _Init_thread_footer(&::_TSS5);
  }
  if (param_2 == SocketCreate) {
    this = (FScopeBuffer *)LaneEstate_Build(GSocketLaneEstate,(FLanePostcode)param_1);
    uVar2 = SockScopeId;
    QueryPerformanceCounter(&local_res20);
    LaneTraceDetail::FScopeBuffer::Enter(this,local_res20.QuadPart,uVar2);
    LaneTraceDetail::FScopeBuffer::Flush(this,false);
    uVar2 = IdleScopeId;
    QueryPerformanceCounter(&local_res20);
    LaneTraceDetail::FScopeBuffer::Enter(this,local_res20.QuadPart,uVar2);
    LaneTraceDetail::FScopeBuffer::Flush(this,false);
    return;
  }
  if (param_2 == SocketDestroy) {
    LaneEstate_Demolish(GSocketLaneEstate,(FLanePostcode)param_1);
    return;
  }
  pFVar1 = LaneEstate_Lookup(GSocketLaneEstate,(FLanePostcode)param_1);
  if (param_2 == Send) {
    if (param_3 == (FOutcome *)0x0) {
      LaneTrace_Enter(pFVar1,SendScopeId);
      return;
    }
    LaneTrace_Leave(pFVar1);
    return;
  }
  if (param_2 == Connect) {
    uVar2 = ConnScopeId;
    if (param_3 == (FOutcome *)0x0) goto LAB_1445837ab;
    if (((param_3->field0_0x0)._s_1.Tag & 0x18000) == 0x18000) {
      return;
    }
  }
  else {
    uVar2 = RecvScopeId;
    if ((param_3 == (FOutcome *)0x0) ||
       (uVar2 = WaitScopeId, ((param_3->field0_0x0)._s_1.Tag & 0x18000) == 0x18000))
    goto LAB_1445837ab;
  }
  uVar2 = IdleScopeId;
LAB_1445837ab:
  LaneTrace_Change(pFVar1,uVar2);
  return;
}

