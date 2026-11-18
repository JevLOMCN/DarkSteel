// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 13

// Get<TStringBuilderBase<char>_const_&,UE::IoStore::HTTP::FEventLoop::FRequestParams_const_*_&> @ 14456a3a0

FRequest __thiscall
UE::IoStore::HTTP::FEventLoop::
Get<TStringBuilderBase<char>_const_&,UE::IoStore::HTTP::FEventLoop::FRequestParams_const_*_&>
          (FEventLoop *this,TStringBuilderBase<char> *param_1,FRequestParams **param_2)

{
  FActivityNode *pFVar1;
  FRequestParams *pFVar2;
  longlong *in_R9;
  undefined4 uStack_5c;
  TStringView<char> local_58;
  FParams local_48;
  
  local_58.DataPtr = (char *)*param_2;
  local_58.Size = *(int *)(param_2 + 1) - (int)local_58.DataPtr;
  local_48._padding_ = 0;
  local_48._padding_ = 0;
  pFVar2 = &GDefaultParams;
  if ((FRequestParams *)*in_R9 != (FRequestParams *)0x0) {
    pFVar2 = (FRequestParams *)*in_R9;
  }
  local_48._padding_ = CONCAT44(uStack_5c,3);
  local_48._padding_ = 0;
  local_48._padding_._4_2_ = pFVar2->BufferSize;
  local_48.bFollow30x = pFVar2->bAutoRedirect == true;
  local_48._padding_._0_4_ = pFVar2->ContentSizeEst;
  local_48._padding_._7_1_ = pFVar2->bAllowChunked == true;
  local_48.HttpVersion = pFVar2->HttpVersion;
  local_48._padding_._0_4_ = 0;
  local_48._padding_._6_1_ = 0;
  local_48._padding_ = 0x150d74d54;
  pFVar1 = FActivityNode::Create(&local_48,&local_58,pFVar2->VerifyCert);
  if (pFVar1 == (FActivityNode *)0x0) {
    param_1->Base = (char *)0x0;
  }
  else {
    Trace((FActivity *)pFVar1,ActivityCreate,0);
    param_1->Base = (char *)pFVar1;
  }
  return (FRequest)(FActivityNode *)param_1;
}

// FEventLoop @ 14456b030

FEventLoop * __thiscall UE::IoStore::HTTP::FEventLoop::FEventLoop(FEventLoop *this)

{
  FImpl *lpCriticalSection;
  
  lpCriticalSection = ::operator_new(0x80);
  if (lpCriticalSection != (FImpl *)0x0) {
    (lpCriticalSection->Lock).CriticalSection.Opaque1[0] = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    *(undefined8 *)(lpCriticalSection->Lock).CriticalSection.Opaque2 = 0;
    (lpCriticalSection->Lock).CriticalSection.Opaque3[0] = (HANDLE)0x0;
    (lpCriticalSection->Lock).CriticalSection.Opaque3[1] = (HANDLE)0x0;
    (lpCriticalSection->Lock).CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined8 *)&(lpCriticalSection->FreeSlots).field_0x0 = 0;
    lpCriticalSection->Cancels = (atomic<unsigned___int64>)0x0;
    lpCriticalSection->PrevFreeSlots = 0;
    (lpCriticalSection->Pending).Head = (FActivityNode *)0x0;
    (lpCriticalSection->Throttler).CycleFreq = 0;
    (lpCriticalSection->Throttler).CycleLast = 0;
    (lpCriticalSection->Throttler).CyclePeriod = 0;
    *(undefined8 *)&(lpCriticalSection->Throttler).Limit = 0;
    (lpCriticalSection->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->Groups).ArrayNum = 0;
    (lpCriticalSection->Groups).ArrayMax = 0;
    lpCriticalSection->FailTimeoutMs = 0;
    lpCriticalSection->BusyCount = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    *(undefined8 *)&(lpCriticalSection->FreeSlots).field_0x0 = 0xffffffffffffffff;
    lpCriticalSection->Cancels = (atomic<unsigned___int64>)0x0;
    (lpCriticalSection->Pending).Head = (FActivityNode *)0x0;
    lpCriticalSection->PrevFreeSlots = 0xffffffffffffffff;
    FThrottler::FThrottler(&lpCriticalSection->Throttler);
    (lpCriticalSection->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (lpCriticalSection->Groups).ArrayNum = 0;
    (lpCriticalSection->Groups).ArrayMax = 0;
    lpCriticalSection->FailTimeoutMs = GIdleMs;
    lpCriticalSection->BusyCount = 0;
    this->Impl = lpCriticalSection;
    return this;
  }
  this->Impl = (FImpl *)0x0;
  return this;
}

// ~FEventLoop @ 14456be60

void __thiscall UE::IoStore::HTTP::FEventLoop::~FEventLoop(FEventLoop *this)

{
  FImpl *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  lpCriticalSection = this->Impl;
  if (lpCriticalSection == (FImpl *)0x0) {
    return;
  }
  if (lpCriticalSection->BusyCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BusyCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x3b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<UE::IoStore::HTTP::FHostGroup,int>
            ((FHostGroup *)(lpCriticalSection->Groups).AllocatorInstance.Data,
             (lpCriticalSection->Groups).ArrayNum);
  pFVar1 = (lpCriticalSection->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((lpCriticalSection->Pending).Head != (FActivityNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0xc5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::operator_delete(lpCriticalSection,0x80);
  return;
}

// operator() @ 14456ce40

void __thiscall
`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>::operator()
          (void *this,FTicketStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  switch(*param_1) {
  case (FTicketStatus)0x1:
  case (FTicketStatus)0x2:
    bVar2 = UE::IoStore::HTTP::FEventLoop::Redirect
                      (*(FEventLoop **)this,param_1,
                       (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)
                       ((longlong)this + 0x10));
    if (bVar2) {
      return;
    }
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar1 = *(code **)((longlong)this + 0x10);
    plVar4 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x38);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,param_1);
  }
  return;
}

// Cancel @ 14456ff40

void __thiscall UE::IoStore::HTTP::FEventLoop::Cancel(FEventLoop *this,ulong64 param_1)

{
  atomic<unsigned___int64> *paVar1;
  
  LOCK();
  paVar1 = &this->Impl->Cancels;
  *paVar1 = (atomic<unsigned___int64>)((ulonglong)*paVar1 | param_1);
  UNLOCK();
  return;
}

// IsIdle @ 144578a60

bool __thiscall UE::IoStore::HTTP::FEventLoop::IsIdle(FEventLoop *this)

{
  return this->Impl->FreeSlots == (atomic<unsigned___int64>)0xffffffffffffffff;
}

// Redirect @ 14457eb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::IoStore::HTTP::FEventLoop::Redirect
          (FEventLoop *this,FTicketStatus *param_1,
          TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char *_Str;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FActivity *this_00;
  FTransactRef *pFVar7;
  long64 lVar8;
  FActivityNode *pFVar9;
  FHost *pFVar10;
  size_t sVar11;
  void *pvVar12;
  uint uVar13;
  longlong *plVar14;
  ulong64 uVar15;
  ulonglong *puVar16;
  char *pcVar17;
  int iVar18;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  int local_330;
  char *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  FRequest local_318 [2];
  FEventLoop *local_308;
  FTicketStatus *local_300;
  longlong local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  char *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  ulonglong *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FParams local_2c8;
  FParams local_288;
  code *local_248 [2];
  longlong local_238 [3];
  longlong *local_220;
  TStringView<char> local_218;
  TStringView<char> local_208;
  char **local_1f8;
  char *pcStack_1f0;
  longlong lStack_1e8;
  code *local_1d8 [2];
  undefined **local_1c8;
  FRequest *local_1c0;
  undefined8 local_1b0;
  TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> local_1a8;
  TStringBuilderBase<char> local_178;
  ulonglong local_158 [32];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_358;
  local_308 = this;
  local_300 = param_1;
  this_00 = (FActivity *)FTicketStatus::GetResponse(param_1);
  pFVar7 = FActivity::GetTransaction(this_00);
  uVar2 = pFVar7->Self;
  if ((uVar2 & 1) == 0) {
    if ((*(ushort *)(uVar2 + 0x128) < 100) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StatusCode >= 100",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x13f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar13 = (uint)*(ushort *)(uVar2 + 0x128);
  }
  else {
    uVar13 = *(uint *)((uVar2 ^ 1) + 0x38);
  }
  if ((((uVar13 != 0x12d) && (uVar13 != 0x12e)) && (uVar13 != 0x133)) && (uVar13 != 0x134)) {
    return false;
  }
  local_328 = (char *)0x0;
  local_2e8 = "Location";
  local_1f8 = &local_328;
  uStack_2e0 = 8;
  iStack_320 = 0;
  pcStack_1f0 = "Location";
  local_248[0] = (code *)0x0;
  lStack_1e8 = CONCAT44(uStack_2dc,8);
  local_220 = FMemory::Malloc(0x20,8);
  *local_220 = (longlong)
               &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  local_220[1] = (longlong)local_1f8;
  local_220[2] = (longlong)pcStack_1f0;
  local_220[3] = CONCAT44(uStack_2dc,8);
  if (local_220 + 1 != (longlong *)0x0) {
    local_248[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                   ::Call;
  }
  pFVar7 = FActivity::GetTransaction(this_00);
  FTransaction::ReadHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            ((FTransaction *)pFVar7->Self,
             (TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_248);
  if (local_248[0] != (code *)0x0) {
    plVar14 = local_238;
    if (local_220 != (longlong *)0x0) {
      plVar14 = local_220;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (iStack_320 == 0) {
    return false;
  }
  bVar1 = this_00->MethodOffset;
  if ((uint)this_00->PathOffset == (uint)bVar1) {
LAB_14457ed53:
    lVar8 = FResponse::GetContentLength((FResponse *)this_00);
    if ((lVar8 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Activity.GetMethod().Equals(\"HEAD\", ESearchCase::IgnoreCase) || Response.GetContentLength() == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x4eb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    uVar15 = (ulonglong)(uint)this_00->PathOffset - (longlong)(int)(uint)bVar1;
    iVar6 = FGenericPlatformStricmp::Strnicmp
                      ((char *)((ulonglong)bVar1 + (this_00->Buffer).Data),"HEAD",uVar15);
    if ((iVar6 != 0) || ("HEAD"[uVar15] != '\0')) goto LAB_14457ed53;
  }
  local_2f8 = (ulonglong)this_00->MethodOffset + (this_00->Buffer).Data;
  iStack_2f0 = (uint)this_00->PathOffset - (uint)this_00->MethodOffset;
  if ((iStack_2f0 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Method.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x4ef,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_318[0].Ptr = (FActivityNode *)0x0;
  iVar6 = iStack_320;
  if (7 < iStack_320) {
    iVar6 = 7;
  }
  iVar18 = 0;
  if (0 < iVar6) {
    iVar18 = iVar6;
  }
  if ((iVar18 == 7) &&
     (iVar6 = FGenericPlatformStricmp::Strnicmp("http://",local_328,7), iVar6 == 0)) {
LAB_14457ee46:
    local_2c8._padding_ = CONCAT44(uStack_2ec,iStack_2f0);
    local_2c8._padding_ = 0;
    local_2c8._padding_._0_4_ = 0;
    local_2c8._padding_ = 0;
    local_2c8._padding_ = 0;
    local_218._12_4_ = uStack_31c;
    local_218.Size = iStack_320;
    local_218.DataPtr = local_328;
    local_2c8._padding_._4_4_ = 0x1000100;
    local_2c8._padding_ = local_2f8;
    local_2c8.bFollow30x = true;
    local_2c8.HttpVersion = Default;
    local_2c8._padding_._0_4_ = 0;
    pFVar9 = FActivityNode::Create(&local_2c8,&local_218,0);
    if (pFVar9 != (FActivityNode *)0x0) {
      Trace((FActivity *)pFVar9,ActivityCreate,0);
      local_318[0].Ptr = pFVar9;
    }
  }
  else {
    iVar6 = iStack_320;
    if (8 < iStack_320) {
      iVar6 = 8;
    }
    iVar18 = 0;
    if (0 < iVar6) {
      iVar18 = iVar6;
    }
    if ((iVar18 == 8) &&
       (iVar6 = FGenericPlatformStricmp::Strnicmp("https://",local_328,8), iVar6 == 0))
    goto LAB_14457ee46;
    if (iStack_320 < 1) {
      local_338 = 0;
      local_330 = iStack_320;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (*local_328 != '/') {
      bVar4 = false;
      goto LAB_14457f222;
    }
    pFVar10 = FActivity::GetHost(this_00);
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_178.Base = (char *)local_158;
    local_178.End = (char *)local_58;
    pcVar17 = "http";
    if (pFVar10->VerifyCert != 0) {
      pcVar17 = "https";
    }
    local_178.CurPos = (char *)local_158;
    sVar11 = strlen(pcVar17);
    uVar15 = (ulong64)(int)sVar11;
    puVar16 = local_158;
    if (local_58 < (ulonglong *)((longlong)local_158 + uVar15)) {
      TStringBuilderBase<char>::Extend(&local_178,uVar15);
      puVar16 = (ulonglong *)local_178.CurPos;
    }
    if ((int)sVar11 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(puVar16,pcVar17,uVar15);
      puVar16 = (ulonglong *)((longlong)pvVar12 + uVar15);
      local_178.CurPos = (char *)puVar16;
    }
    if (local_178.End < (ulonglong *)((longlong)puVar16 + 3U)) {
      TStringBuilderBase<char>::Extend(&local_178,3);
      puVar16 = (ulonglong *)local_178.CurPos;
    }
    pvVar12 = FGenericPlatformString::Memcpy(puVar16,"://",3);
    iVar6 = 0;
    pcVar17 = (char *)((longlong)pvVar12 + 3);
    _Str = pFVar10->HostName;
    local_178.CurPos = pcVar17;
    if (_Str != (char *)0x0) {
      sVar11 = strlen(_Str);
      iVar6 = (int)sVar11;
    }
    uVar15 = (ulong64)iVar6;
    if (local_178.End < pcVar17 + uVar15) {
      TStringBuilderBase<char>::Extend(&local_178,uVar15);
      pcVar17 = local_178.CurPos;
    }
    if (iVar6 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(pcVar17,_Str,uVar15);
      pcVar17 = (char *)((longlong)pvVar12 + uVar15);
      local_178.CurPos = pcVar17;
    }
    if (local_178.End < pcVar17 + 1) {
      TStringBuilderBase<char>::Extend(&local_178,1);
      pcVar17 = local_178.CurPos;
    }
    pvVar12 = FGenericPlatformString::Memcpy(pcVar17,&s__,1);
    local_178.CurPos = (char *)((longlong)pvVar12 + 1);
    TStringBuilderBase<char>::AppendfImpl(&local_178,"%u");
    iVar6 = iStack_320;
    pcVar17 = local_328;
    uVar15 = (ulong64)iStack_320;
    if (local_178.End < local_178.CurPos + uVar15) {
      TStringBuilderBase<char>::Extend(&local_178,uVar15);
    }
    if (iVar6 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_178.CurPos,pcVar17,uVar15);
      local_178.CurPos = (char *)((longlong)pvVar12 + uVar15);
    }
    local_288._padding_ = CONCAT44(uStack_2ec,iStack_2f0);
    iStack_2d0 = (int)local_178.CurPos - (int)local_178.Base;
    local_2d8 = (ulonglong *)local_178.Base;
    local_288._padding_ = 0;
    local_288._padding_ = 0;
    local_208._12_4_ = uStack_2cc;
    local_208.Size = iStack_2d0;
    local_288._padding_ = 0;
    local_288._padding_._0_4_ = 0;
    local_288._padding_._0_4_ = 0;
    local_208.DataPtr = local_178.Base;
    local_288._padding_._4_4_ = 0x1000100;
    local_288._padding_ = local_2f8;
    local_288.bFollow30x = true;
    local_288.HttpVersion = Default;
    pFVar9 = FActivityNode::Create(&local_288,&local_208,pFVar10->VerifyCert);
    if (pFVar9 == (FActivityNode *)0x0) {
      pFVar9 = (FActivityNode *)0x0;
    }
    else {
      Trace((FActivity *)pFVar9,ActivityCreate,0);
    }
    local_318[0].Ptr = pFVar9;
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_178);
    this = local_308;
  }
  local_1b0 = 0;
  local_1c8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_1c0 = local_318;
  local_1d8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                 ::Call;
  FActivity::EnumerateHeaders
            (this_00,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_1d8);
  local_1a8._0_8_ = *(undefined8 *)param_2;
  local_1a8._40_8_ = *(undefined8 *)&param_2->field_0x28;
  uVar15 = *(ulong64 *)(local_300 + 0x40);
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_1a8._32_8_ = *(undefined8 *)&param_2->field_0x20;
  local_1a8._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_1a8._24_8_ = *(undefined8 *)&param_2->field_0x18;
  if (local_1a8._0_8_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  Send(this,local_318,&local_1a8,uVar15);
  bVar4 = true;
LAB_14457f222:
  if (local_318[0].Ptr != (FActivityNode *)0x0) {
    FActivityNode::Destroy(local_318[0].Ptr);
    return bVar4;
  }
  return bVar4;
}

// Request @ 144580250

FRequest __thiscall
UE::IoStore::HTTP::FEventLoop::Request
          (FEventLoop *this,TStringView<char> *param_1,TStringView<char> *param_2,
          FConnectionPool *param_3,FRequestParams *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRequest FVar3;
  FActivityNode *pFVar4;
  FRequestParams *pFVar5;
  FRequestParams *in_stack_00000030;
  TStringView<char> local_58;
  FParams local_48;
  
  if (param_4->VerifyCert == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pool.Ptr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x4c0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ptr = (FActivityNode *)(*pcVar1)();
      return (FRequest)FVar3.Ptr;
    }
  }
  if (in_stack_00000030 != (FRequestParams *)0x0) {
    if (in_stack_00000030->VerifyCert != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params == nullptr || Params->VerifyCert == ECertRootsRefType::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x4c1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3.Ptr = (FActivityNode *)(*pcVar1)();
        return (FRequest)FVar3.Ptr;
      }
    }
    if (in_stack_00000030->HttpVersion != Default) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Params == nullptr || Params->HttpVersion == EHttpVersion::Default",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                         ,0x4c2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3.Ptr = (FActivityNode *)(*pcVar1)();
        return (FRequest)FVar3.Ptr;
      }
    }
  }
  local_48._padding_ = (longlong)param_2->DataPtr;
  local_48._padding_ = *(longlong *)&param_2->Size;
  local_48._padding_ = param_4->VerifyCert;
  local_48._padding_ = (longlong)param_3->Ptr;
  local_48._padding_ = (longlong)param_3[1].Ptr;
  pFVar5 = &GDefaultParams;
  if (in_stack_00000030 != (FRequestParams *)0x0) {
    pFVar5 = in_stack_00000030;
  }
  local_48.bFollow30x = pFVar5->bAutoRedirect == true;
  local_48._padding_._0_4_ = pFVar5->ContentSizeEst;
  local_48._padding_._7_1_ = pFVar5->bAllowChunked == true;
  local_48._padding_ = 0;
  local_48._padding_._4_2_ = 0;
  local_48._padding_._6_1_ = 0;
  local_48.HttpVersion = Default;
  local_58.DataPtr = (char *)0x0;
  local_58.Size = 0;
  local_58._12_4_ = 0;
  pFVar4 = FActivityNode::Create(&local_48,&local_58,0);
  if (pFVar4 == (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Activity != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x4ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Ptr = (FActivityNode *)(*pcVar1)();
      return (FRequest)FVar3.Ptr;
    }
  }
  Trace((FActivity *)pFVar4,ActivityCreate,0);
  param_1->DataPtr = (char *)pFVar4;
  return (FRequest)(FActivityNode *)param_1;
}

// Request @ 144580400

FRequest __thiscall
UE::IoStore::HTTP::FEventLoop::Request
          (FEventLoop *this,TStringView<char> *param_1,TStringView<char> *param_2,
          FRequestParams *param_3)

{
  FActivityNode *pFVar1;
  FRequestParams *pFVar2;
  FRequestParams *in_stack_00000028;
  TStringView<char> local_58;
  FParams local_48;
  
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0;
  pFVar2 = &GDefaultParams;
  if (in_stack_00000028 != (FRequestParams *)0x0) {
    pFVar2 = in_stack_00000028;
  }
  local_48._padding_ = 0;
  local_48._padding_ = 0;
  local_48._padding_ = (longlong)param_2->DataPtr;
  local_48._padding_ = *(longlong *)&param_2->Size;
  local_48._padding_._6_1_ = 0;
  local_48._padding_._4_2_ = pFVar2->BufferSize;
  local_48.bFollow30x = pFVar2->bAutoRedirect == true;
  local_48._padding_._0_4_ = pFVar2->ContentSizeEst;
  local_48._padding_._7_1_ = pFVar2->bAllowChunked == true;
  local_58.DataPtr = (char *)param_3->VerifyCert;
  local_58.Size = param_3->ContentSizeEst;
  local_58._12_2_ = param_3->BufferSize;
  local_58._14_1_ = param_3->bAutoRedirect;
  local_58._15_1_ = param_3->bAllowChunked;
  local_48.HttpVersion = pFVar2->HttpVersion;
  pFVar1 = FActivityNode::Create(&local_48,&local_58,pFVar2->VerifyCert);
  if (pFVar1 == (FActivityNode *)0x0) {
    param_1->DataPtr = (char *)0x0;
    return (FRequest)(FActivityNode *)param_1;
  }
  Trace((FActivity *)pFVar1,ActivityCreate,0);
  param_1->DataPtr = (char *)pFVar1;
  return (FRequest)(FActivityNode *)param_1;
}

// Send @ 144580e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
UE::IoStore::HTTP::FEventLoop::Send
          (FEventLoop *this,FRequest *param_1,
          TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *param_2,ulong64 param_3
          )

{
  FActivityNode *pFVar1;
  FImpl *lpCriticalSection;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  FEventLoop *local_b8;
  longlong local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = param_1->Ptr;
  param_1->Ptr = (FActivityNode *)0x0;
  if (pFVar1->bFollow30x != false) {
    local_80 = *(longlong **)&param_2->field_0x28;
    local_a8 = *(longlong *)param_2;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88 = *(undefined8 *)&param_2->field_0x20;
    local_98 = *(longlong *)&param_2->field_0x10;
    uStack_90 = *(undefined8 *)&param_2->field_0x18;
    if (local_a8 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_78 = (code *)0x0;
    local_b8 = this;
    puVar20 = FMemory::Malloc(0x50,0x10);
    *puVar20 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::`5'::<lambda_1>,0,1>::
                _vftable_;
    puVar20[2] = local_b8;
    puVar20[4] = local_a8;
    puVar20[9] = local_80;
    local_80 = (longlong *)0x0;
    puVar20[6] = local_98;
    puVar20[7] = uStack_90;
    puVar20[8] = local_88;
    if (puVar20[4] != 0) {
      local_a8 = 0;
    }
    lVar3 = *(longlong *)param_2;
    uVar17 = *(undefined8 *)&param_2->field_0x8;
    uVar5 = *(undefined4 *)&param_2->field_0x10;
    uVar6 = *(undefined4 *)&param_2->field_0x14;
    uVar7 = *(undefined4 *)&param_2->field_0x18;
    uVar8 = *(undefined4 *)&param_2->field_0x1c;
    uVar9 = *(undefined8 *)&param_2->field_0x20;
    plVar23 = *(longlong **)&param_2->field_0x28;
    if (puVar20 + 2 != (undefined8 *)0x0) {
      local_78 = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                 ::Call;
    }
    *(code **)param_2 = local_78;
    *(undefined8 *)&param_2->field_0x8 = uStack_70;
    uStack_50._0_4_ = SUB84(puVar20,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
    *(undefined4 *)&param_2->field_0x10 = local_68;
    *(undefined4 *)&param_2->field_0x14 = uStack_64;
    *(undefined4 *)&param_2->field_0x18 = uStack_60;
    *(undefined4 *)&param_2->field_0x1c = uStack_5c;
    *(undefined4 *)&param_2->field_0x20 = (undefined4)local_58;
    *(undefined4 *)&param_2->field_0x24 = local_58._4_4_;
    *(undefined4 *)&param_2->field_0x28 = (undefined4)uStack_50;
    *(undefined4 *)&param_2->field_0x2c = uStack_50._4_4_;
    local_78 = (code *)lVar3;
    uStack_70 = uVar17;
    local_68 = uVar5;
    uStack_64 = uVar6;
    uStack_60 = uVar7;
    uStack_5c = uVar8;
    local_58 = uVar9;
    uStack_50 = plVar23;
    if (lVar3 != 0) {
      plVar22 = (longlong *)&local_68;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_a8 != 0) {
      plVar23 = &local_98;
      if (local_80 != (longlong *)0x0) {
        plVar23 = local_80;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  uVar9 = *(undefined8 *)&param_2->field_0x8;
  uVar5 = *(undefined4 *)&pFVar1->field_0x50;
  uVar6 = *(undefined4 *)&pFVar1->field_0x54;
  uVar7 = *(undefined4 *)&pFVar1->field_0x58;
  uVar8 = *(undefined4 *)&pFVar1->field_0x5c;
  uVar10 = *(undefined4 *)&pFVar1->field_0x60;
  uVar11 = *(undefined4 *)&pFVar1->field_0x64;
  uVar12 = *(undefined4 *)&pFVar1->field_0x68;
  uVar13 = *(undefined4 *)&pFVar1->field_0x6c;
  uVar17 = *(undefined8 *)&pFVar1->field_0x70;
  uVar18 = *(undefined8 *)&pFVar1->field_0x78;
  *(undefined8 *)&pFVar1->field_0x50 = *(undefined8 *)param_2;
  *(undefined8 *)&pFVar1->field_0x58 = uVar9;
  uVar14 = *(undefined4 *)&param_2->field_0x14;
  uVar15 = *(undefined4 *)&param_2->field_0x18;
  uVar16 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&pFVar1->field_0x60 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&pFVar1->field_0x64 = uVar14;
  *(undefined4 *)&pFVar1->field_0x68 = uVar15;
  *(undefined4 *)&pFVar1->field_0x6c = uVar16;
  uVar14 = *(undefined4 *)&param_2->field_0x24;
  uVar15 = *(undefined4 *)&param_2->field_0x28;
  uVar16 = *(undefined4 *)&param_2->field_0x2c;
  *(undefined4 *)&pFVar1->field_0x70 = *(undefined4 *)&param_2->field_0x20;
  *(undefined4 *)&pFVar1->field_0x74 = uVar14;
  *(undefined4 *)&pFVar1->field_0x78 = uVar15;
  *(undefined4 *)&pFVar1->field_0x7c = uVar16;
  *(undefined4 *)param_2 = uVar5;
  *(undefined4 *)&param_2->field_0x4 = uVar6;
  *(undefined4 *)&param_2->field_0x8 = uVar7;
  *(undefined4 *)&param_2->field_0xc = uVar8;
  *(undefined4 *)&param_2->field_0x10 = uVar10;
  *(undefined4 *)&param_2->field_0x14 = uVar11;
  *(undefined4 *)&param_2->field_0x18 = uVar12;
  *(undefined4 *)&param_2->field_0x1c = uVar13;
  *(undefined8 *)&param_2->field_0x20 = uVar17;
  *(undefined8 *)&param_2->field_0x28 = uVar18;
  *(ulong64 *)&pFVar1->field_0x40 = param_3;
  lpCriticalSection = this->Impl;
  if (lpCriticalSection == (FImpl *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  while( true ) {
    uVar2 = *(ulonglong *)&(lpCriticalSection->FreeSlots).field_0x0;
    if ((uVar2 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                            ,0x3d6,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      uVar21 = (*pcVar4)();
      return uVar21;
    }
    uVar24 = -uVar2 & uVar2;
    LOCK();
    bVar19 = uVar2 == *(ulonglong *)&(lpCriticalSection->FreeSlots).field_0x0;
    if (bVar19) {
      *(ulonglong *)&(lpCriticalSection->FreeSlots).field_0x0 = uVar2 - uVar24;
    }
    UNLOCK();
    if (bVar19) break;
    FWindowsPlatformProcess::SleepNoStats(0.0);
  }
  lVar3 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_c8 = (undefined4)lVar3;
  if (uVar24 == 0) {
    local_c8 = 0xffffffff;
  }
  pFVar1->Slot = (schar)local_c8;
  if ((pFVar1->Next != (FActivityNode *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Node->Next == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                          ,0x102,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    uVar21 = (*pcVar4)();
    return uVar21;
  }
  pFVar1->Next = (lpCriticalSection->Pending).Head;
  (lpCriticalSection->Pending).Head = pFVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(longlong *)param_2 != 0) {
    plVar23 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return uVar24;
}

// SetFailTimeout @ 144581880

void __thiscall UE::IoStore::HTTP::FEventLoop::SetFailTimeout(FEventLoop *this,int param_1)

{
  int iVar1;
  
  iVar1 = GIdleMs;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  this->Impl->FailTimeoutMs = iVar1;
  return;
}

// Throttle @ 144581ed0

void __thiscall UE::IoStore::HTTP::FEventLoop::Throttle(FEventLoop *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 < 0x80000) {
    uVar1 = param_1;
  }
  uVar2 = uVar1;
  if ((uVar1 != 0) && (uVar2 = 0x20, 0x20 < uVar1)) {
    uVar2 = uVar1;
  }
  (this->Impl->Throttler).Limit = uVar2 << 10;
  return;
}

// Tick @ 1445821b0

uint __thiscall UE::IoStore::HTTP::FEventLoop::Tick(FEventLoop *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FImpl::Tick(this->Impl,param_1);
  return uVar1;
}

