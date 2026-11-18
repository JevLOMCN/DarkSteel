// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 16

// Call @ 14456fb00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014456fb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14456fb10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

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
  FIoBuffer aFStackX_18 [2];
  
  FVar3 = *param_2;
  uVar7 = 1L << ((byte)param_2[0xa0] & 0x3f);
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
    **(ulonglong **)param_1 = **(ulonglong **)param_1 | 1L << ((ulonglong)uVar9 & 0x3f);
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
      pFVar8 = FIoBuffer::FIoBuffer(aFStackX_18);
      FIoBuffer::operator=
                ((FIoBuffer *)(*(longlong *)((longlong)param_1 + 8) + (ulonglong)uVar9 * 0x10),
                 pFVar8);
      if (aFStackX_18[0].CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)aFStackX_18[0].CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)aFStackX_18[0].CorePtr.Reference + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)aFStackX_18[0].CorePtr.Reference);
          ::operator_delete((void *)aFStackX_18[0].CorePtr.Reference,0x20);
        }
      }
      *(ulonglong *)(param_2 + 0x38) =
           *(longlong *)((longlong)param_1 + 8) + (ulonglong)uVar9 * 0x10;
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

// Call @ 14456fb20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)&param_3->DataPtr;
  uVar3 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iVar4 = param_3->Size;
  uVar5 = *(undefined4 *)&param_3->field_0xc;
  iVar8 = (int)*(undefined8 *)((longlong)param_1 + 0x10);
  iVar7 = (int)*(undefined8 *)&param_2->Size;
  if (iVar7 == iVar8) {
    if ((iVar7 != 0) && (iVar8 != 0)) {
      iVar6 = iVar8;
      if (iVar7 < iVar8) {
        iVar6 = iVar7;
      }
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        (param_2->DataPtr,*(char **)((longlong)param_1 + 8),(longlong)iVar6);
      if (iVar6 != 0) {
        return true;
      }
    }
    if (iVar7 == iVar8) {
      puVar1 = *(undefined4 **)param_1;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = iVar4;
      puVar1[3] = uVar5;
      return false;
    }
  }
  return true;
}

// Call @ 14456fbb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  bool bVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>::operator()
                    (param_1,&local_18,&local_28);
  return bVar1;
}

// Call @ 14456fbe0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  IoStore::HTTP::FRequest::Header(*(FRequest **)param_1,&local_18,&local_28);
  return true;
}

// Call @ 14456fc20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
::Call(void *param_1,TStringView<char> *param_2,TStringView<char> *param_3)

{
  bool bVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>::operator()
                    (param_1,&local_18,&local_28);
  return bVar1;
}

// Call @ 14456fc50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  switch(*param_2) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    bVar2 = IoStore::HTTP::FEventLoop::Redirect
                      (*(FEventLoop **)param_1,param_2,
                       (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                       ((longlong)param_1 + 0x10));
    if (bVar2) {
      return;
    }
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    CheckCallable(*(void **)((longlong)param_1 + 0x10));
    pcVar1 = *(code **)((longlong)param_1 + 0x10);
    plVar4 = (longlong *)((longlong)param_1 + 0x20);
    if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)param_1 + 0x38);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,param_2);
  }
  return;
}

// Call @ 14456fc60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  FVar1 = *param_2;
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
      *(longlong *)(param_2 + 0x38) = (longlong)param_1 + 8;
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
  pcVar5 = (char *)**(undefined8 **)((longlong)param_1 + 8);
  pcVar6 = pcVar5 + *(int *)(*(undefined8 **)((longlong)param_1 + 8) + 1);
  for (; (pcVar5 != pcVar6 && ((int)*pcVar5 - 0x30U < 10)); pcVar5 = pcVar5 + 1) {
    iVar4 = ((int)*pcVar5 - 0x30U) + iVar4 * 10;
  }
  **(int **)param_1 = iVar4;
  return;
}

// Call @ 14456fc70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  EStatusCodeClass EVar7;
  uint uVar8;
  ulonglong uVar9;
  FTransactRef *pFVar10;
  FIoBuffer *pFVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  char *pcStack_a8;
  int iStack_a0;
  FIoBuffer FStack_90;
  char *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *apcStack_78 [2];
  longlong alStack_68 [3];
  longlong *plStack_50;
  char **ppcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  
  switch(*param_2) {
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.GetId() != FTicketStatus::EId::Error",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                       ,0x237,L"");
    if (bVar6) {
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
  uVar18 = (ulonglong)(uint)(int)(char)param_2[0xa0];
  switch(*param_2) {
  default:
    uVar16 = 0x493;
    plVar12 = *(longlong **)(*(longlong *)param_1 + uVar18 * 0x10);
    lVar17 = plVar12[3];
    lVar5 = plVar12[1];
    lVar13 = *plVar12;
    uVar8 = IoStore::HTTP::FTicketStatus::GetContentLength(param_2);
    if (((ulonglong)CONCAT14((char)lVar17,(int)lVar5) != (ulonglong)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContentView.GetSize() == Status.GetContentLength()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x24d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = 0;
    uVar8 = IoStore::HTTP::FTicketStatus::GetContentLength(param_2);
    if (uVar8 != 0) {
      do {
        pbVar2 = (byte *)(uVar9 + lVar13);
        uVar15 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar15;
        uVar16 = (*pbVar2 + uVar16) * 0x493;
        uVar8 = IoStore::HTTP::FTicketStatus::GetContentLength(param_2);
      } while (uVar15 < uVar8);
    }
    if ((*(ulonglong *)(*(longlong *)param_1 + 8 + uVar18 * 0x10) != (ulonglong)uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Content[Index].Hash == ReceivedHash",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x253,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(*(longlong *)param_1 + 8 + uVar18 * 0x10) = 0;
    break;
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_2) {
    default:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetId() < EId::Content",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Api.inl"
                         ,0xc6,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    case (FTicketStatus)0x1:
    case (FTicketStatus)0x2:
      break;
    }
    EVar7 = IoStore::HTTP::FResponse::GetStatus((FResponse *)param_2);
    if ((EVar7 != Successful) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetStatus() == EStatusCodeClass::Successful",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x23e,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_2);
    if ((uVar8 != 200) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetStatusCode() == 200",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x23f,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = IoStore::HTTP::FTicketStatus::GetContentLength(param_2);
    uVar9 = IoStore::HTTP::FResponse::GetContentLength((FResponse *)param_2);
    if ((uVar9 != uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Response.GetContentLength() == Status.GetContentLength()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x240,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_80 = 0x11;
    pcStack_88 = "X-TestServer-Hash";
    uStack_38 = CONCAT44(uStack_7c,0x11);
    ppcStack_48 = &pcStack_a8;
    pcStack_a8 = (char *)0x0;
    iStack_a0 = 0;
    pcStack_40 = "X-TestServer-Hash";
    apcStack_78[0] = (code *)0x0;
    plStack_50 = FMemory::Malloc(0x20,8);
    plStack_50[1] = (longlong)ppcStack_48;
    plStack_50[2] = (longlong)pcStack_40;
    *plStack_50 = (longlong)
                  &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
    plStack_50[3] = CONCAT44(uStack_7c,uStack_80);
    if (plStack_50 != (longlong *)&DAT_fffffffffffffff8) {
      apcStack_78[0] =
           TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
           ::Call;
    }
    pFVar10 = IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_2);
    IoStore::HTTP::FTransaction::
    ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
              ((FTransaction *)pFVar10->Self,
               (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)apcStack_78);
    if (apcStack_78[0] != (code *)0x0) {
      plVar12 = alStack_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar12 = plStack_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    lVar13 = -0x8000000000000000;
    for (pcVar14 = pcStack_a8; (pcVar14 != pcStack_a8 + iStack_a0 && ((int)*pcVar14 - 0x30U < 10));
        pcVar14 = pcVar14 + 1) {
      lVar13 = (ulonglong)((int)*pcVar14 - 0x30U) + lVar13 * 10;
    }
    lVar17 = uVar18 * 0x10;
    *(longlong *)(lVar17 + 8 + *(longlong *)param_1) = lVar13;
    if ((*(longlong *)(lVar17 + 8 + *(longlong *)param_1) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("int64(Content[Index].Hash) > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                           ,0x244,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar11 = FIoBuffer::FIoBuffer(&FStack_90);
    FIoBuffer::operator=((FIoBuffer *)(*(longlong *)param_1 + lVar17),pFVar11);
    if (FStack_90.CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)FStack_90.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)FStack_90.CorePtr.Reference + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)FStack_90.CorePtr.Reference);
        ::operator_delete((void *)FStack_90.CorePtr.Reference,0x20);
      }
    }
    *(longlong *)(param_2 + 0x38) = *(longlong *)param_1 + lVar17;
  }
  return;
}

// Call @ 14456fc80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  EStatusCodeClass EVar4;
  
  switch(*param_2) {
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
  FVar1 = *param_2;
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
      EVar4 = IoStore::HTTP::FResponse::GetStatus((FResponse *)param_2);
      if ((EVar4 != Successful) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatus() == EStatusCodeClass::Successful",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(void **)(param_2 + 0x38) = param_1;
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

// Call @ 14456fc90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  switch(*param_2) {
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
  switch(*param_2) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_2) {
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
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)param_1;
  }
  return;
}

// Call @ 14456fca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((*(longlong *)(param_2 + 0x40) != *(longlong *)((longlong)param_1 + 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status.GetParam() == SinkParam",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                         ,0x13b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  switch(*param_2) {
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
  FVar1 = *param_2;
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
      uVar4 = IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_2);
      if ((uVar4 != 200) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatusCode() == 200",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x140,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(void **)(param_2 + 0x38) = param_1;
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
  **(int **)((longlong)param_1 + 0x10) =
       **(int **)((longlong)param_1 + 0x10) + *(int *)(*(longlong *)param_1 + 8);
  return;
}

// Call @ 14456fcb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

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
  char *pcStack_108;
  int iStack_100;
  char *pcStack_f8;
  int iStack_f0;
  FIoBuffer FStack_e0;
  char *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char *pcStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *apcStack_b8 [2];
  longlong alStack_a8 [3];
  longlong *plStack_90;
  code *apcStack_88 [2];
  longlong alStack_78 [3];
  longlong *plStack_60;
  char **ppcStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  char **ppcStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  
  FVar3 = *param_2;
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
      plVar13 = *(longlong **)((longlong)param_1 + 0x10);
      lVar6 = plVar13[3];
      uVar9 = *(uint *)(plVar13 + 1);
      uVar16 = (ulonglong)uVar9;
      lVar4 = *plVar13;
      *(uint *)param_1 = *(int *)param_1 + uVar9;
      if (uVar9 != 0) {
        iVar12 = *(int *)((longlong)param_1 + 4);
        lVar17 = 0;
        do {
          pbVar2 = (byte *)(lVar4 + lVar17);
          lVar17 = lVar17 + 1;
          iVar12 = ((uint)*pbVar2 + iVar12) * 0x493;
          *(int *)((longlong)param_1 + 4) = iVar12;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (CONCAT14((char)lVar6,uVar9) == 0) {
        if ((*(int *)((longlong)param_1 + 4) != *(int *)((longlong)param_1 + 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.Hash == State.ExpectedHash",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                               ,0x1cd,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(int *)param_1 != *(int *)((longlong)param_1 + 0xc)) &&
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
      EVar8 = IoStore::HTTP::FResponse::GetStatus((FResponse *)param_2);
      if ((EVar8 != Successful) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Response.GetStatus() == EStatusCodeClass::Successful",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Test.inl"
                             ,0x1b4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = IoStore::HTTP::FResponse::GetStatusCode((FResponse *)param_2);
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
      pcStack_108 = (char *)0x0;
      pcStack_d8 = "X-TestServer-Hash";
      uStack_48 = CONCAT44(uStack_cc,0x11);
      ppcStack_58 = &pcStack_108;
      iStack_100 = 0;
      pcStack_50 = "X-TestServer-Hash";
      apcStack_b8[0] = (code *)0x0;
      plStack_90 = FMemory::Malloc(0x20,8);
      plStack_90[1] = (longlong)ppcStack_58;
      plStack_90[2] = (longlong)pcStack_50;
      *plStack_90 = (longlong)
                    &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                     ::_vftable_;
      plStack_90[3] = CONCAT44(uStack_cc,uStack_d0);
      if (plStack_90 != (longlong *)&DAT_fffffffffffffff8) {
        apcStack_b8[0] =
             TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
             ::Call;
      }
      pFVar10 = IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_2);
      IoStore::HTTP::FTransaction::
      ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
                ((FTransaction *)pFVar10->Self,
                 (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)apcStack_b8);
      if (apcStack_b8[0] != (code *)0x0) {
        plVar13 = alStack_a8;
        if (plStack_90 != (longlong *)0x0) {
          plVar13 = plStack_90;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      iVar18 = 0;
      iVar12 = 0;
      for (pcVar15 = pcStack_108;
          (pcVar15 != pcStack_108 + iStack_100 && ((int)*pcVar15 - 0x30U < 10));
          pcVar15 = pcVar15 + 1) {
        iVar12 = ((int)*pcVar15 - 0x30U) + iVar12 * 10;
      }
      *(int *)((longlong)param_1 + 8) = iVar12;
      pcStack_c8 = "X-TestServer-Size";
      ppcStack_40 = &pcStack_f8;
      uStack_c0 = 0x11;
      uStack_30 = CONCAT44(uStack_bc,0x11);
      pcStack_f8 = (char *)0x0;
      iStack_f0 = 0;
      pcStack_38 = "X-TestServer-Size";
      apcStack_88[0] = (code *)0x0;
      plStack_60 = FMemory::Malloc(0x20,8);
      *plStack_60 = (longlong)
                    &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                     ::_vftable_;
      plStack_60[1] = (longlong)ppcStack_40;
      plStack_60[2] = (longlong)pcStack_38;
      plStack_60[3] = CONCAT44(uStack_bc,uStack_c0);
      if (plStack_60 + 1 != (longlong *)0x0) {
        apcStack_88[0] =
             TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
             ::Call;
      }
      pFVar10 = IoStore::HTTP::FActivity::GetTransaction((FActivity *)param_2);
      IoStore::HTTP::FTransaction::
      ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
                ((FTransaction *)pFVar10->Self,
                 (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)apcStack_88);
      if (apcStack_88[0] != (code *)0x0) {
        plVar13 = alStack_78;
        if (plStack_60 != (longlong *)0x0) {
          plVar13 = plStack_60;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      for (pcVar15 = pcStack_f8; (pcVar15 != pcStack_f8 + iStack_f0 && ((int)*pcVar15 - 0x30U < 10))
          ; pcVar15 = pcVar15 + 1) {
        iVar18 = ((int)*pcVar15 - 0x30U) + iVar18 * 10;
      }
      uVar9 = *(uint *)((longlong)param_1 + 8) & 0x3f;
      *(int *)((longlong)param_1 + 0xc) = iVar18;
      uVar14 = uVar9 / 7;
      pFVar11 = FIoBuffer::FIoBuffer
                          (&FStack_e0,(ulonglong)(((uVar9 - uVar14 >> 1) + uVar14 >> 2) * 0x43));
      FIoBuffer::operator=((FIoBuffer *)((longlong)param_1 + 0x10),pFVar11);
      if (FStack_e0.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)FStack_e0.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)FStack_e0.CorePtr.Reference + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FStack_e0.CorePtr.Reference);
          ::operator_delete((void *)FStack_e0.CorePtr.Reference,0x20);
        }
      }
      *(FIoBuffer **)(param_2 + 0x38) = (FIoBuffer *)((longlong)param_1 + 0x10);
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

// Call @ 14456fcc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  int *piVar1;
  int iVar2;
  FTicketStatus FVar3;
  code *pcVar4;
  bool bVar5;
  FResponse *pFVar6;
  FIoBuffer *pFVar7;
  FIoBuffer aFStackX_18 [2];
  
  switch(*param_2) {
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
  switch(*param_2) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    FVar3 = param_2[0xa0];
    pFVar6 = IoStore::HTTP::FTicketStatus::GetResponse(param_2);
    pFVar7 = FIoBuffer::FIoBuffer(aFStackX_18);
    FIoBuffer::operator=
              ((FIoBuffer *)(*(longlong *)param_1 + (ulonglong)(uint)(int)(char)FVar3 * 0x10),pFVar7
              );
    if (aFStackX_18[0].CorePtr.Reference != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)aFStackX_18[0].CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)aFStackX_18[0].CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)aFStackX_18[0].CorePtr.Reference);
        ::operator_delete((void *)aFStackX_18[0].CorePtr.Reference,0x20);
      }
    }
    *(ulonglong *)(pFVar6 + 0x38) = *(longlong *)param_1 + (ulonglong)(uint)(int)(char)FVar3 * 0x10;
  }
  return;
}

// Call @ 14456fcd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

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
  TStringView<char8_t> TStack_78;
  TStringView<char8_t> TStack_68;
  TStringView<char8_t> TStack_58;
  TStringView<char8_t> TStack_48;
  TStringView<char8_t> TStack_38;
  TStringView<char8_t> TStack_28;
  FError FStack_18;
  uint uVar8;
  
  FVar1 = *param_2;
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
      *(longlong *)(param_2 + 0x38) = (longlong)param_1 + 8;
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
    pFVar5 = IoStore::HTTP::FTicketStatus::GetError(param_2,&FStack_18);
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
    TStack_78._12_4_ = uStack_cc;
    TStack_78.Size = 8;
    puVar9 = (uchar *)(_Str + ((longlong)iVar4 - (longlong)iVar10));
    TStack_78.DataPtr = "ERRTRAIL";
    TStack_68._12_4_ = uStack_bc;
    TStack_68.Size = iVar10;
    TStack_68.DataPtr = puVar9;
    iVar4 = String::FindFirst(&TStack_68,&TStack_78,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    TStack_48._12_4_ = uStack_9c;
    TStack_48.Size = iVar10;
    **(uint **)param_1 = **(uint **)param_1 | (uint)(iVar4 != -1);
    TStack_58._12_4_ = uStack_ac;
    TStack_58.Size = 10;
    TStack_58.DataPtr = "ERRNOCHUNK";
    TStack_48.DataPtr = puVar9;
    iVar4 = String::FindFirst(&TStack_48,&TStack_58,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    TStack_28._12_4_ = uStack_7c;
    TStack_28.Size = iVar10;
    TStack_38._12_4_ = uStack_8c;
    TStack_38.Size = 6;
    uVar7 = 0;
    uVar8 = uVar7;
    if (iVar4 != -1) {
      uVar8 = 2;
    }
    **(uint **)param_1 = **(uint **)param_1 | uVar8;
    TStack_38.DataPtr = "ERREXT";
    TStack_28.DataPtr = puVar9;
    iVar4 = String::FindFirst(&TStack_28,&TStack_38,CaseSensitive);
    if (iVar4 == -1) {
      iVar4 = -1;
    }
    if (iVar4 != -1) {
      uVar7 = 4;
    }
    **(uint **)param_1 = **(uint **)param_1 | uVar7;
    return;
  }
}

// Call @ 14456fce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
::Call(void *param_1,FTicketStatus *param_2)

{
  FTicketStatus FVar1;
  code *pcVar2;
  bool bVar3;
  FError *pFVar4;
  char *pcVar5;
  FError FStack_18;
  
  FVar1 = *param_2;
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
      *(longlong *)(param_2 + 0x38) = (longlong)param_1 + 8;
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
    pFVar4 = IoStore::HTTP::FTicketStatus::GetError(param_2,&FStack_18);
    pcVar5 = strstr(pFVar4->Reason,"FailTimeout");
    if (((pcVar5 != (char *)0x0) != (bool)*(char *)param_1) &&
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

