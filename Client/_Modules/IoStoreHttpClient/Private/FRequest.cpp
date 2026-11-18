// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 15

// FRequest @ 14456b5e0

FRequest * __thiscall UE::IoStore::HTTP::FRequest::FRequest(FRequest *this,FRequest *param_1)

{
  this->Ptr = (FActivityNode *)0x0;
  this->Ptr = param_1->Ptr;
  param_1->Ptr = (FActivityNode *)0x0;
  return this;
}

// ~FRequest @ 14456c060

void __thiscall UE::IoStore::HTTP::FRequest::~FRequest(FRequest *this)

{
  FLanePostcode FVar1;
  longlong *plVar2;
  
  FVar1.Value = (ulong64)this->Ptr;
  if (FVar1.Value == 0) {
    return;
  }
  LaneEstate_Demolish(GActivityTraceEstate,FVar1);
  if ((*(void **)(FVar1.Value + 0x88) != (void *)0x0) && (-1 < *(int *)(FVar1.Value + 0x94))) {
    FMemory::Free(*(void **)(FVar1.Value + 0x88));
  }
  FTransactRef::~FTransactRef((FTransactRef *)(FVar1.Value + 0x80));
  if (*(longlong *)(FVar1.Value + 0x50) != 0) {
    plVar2 = (longlong *)(FVar1.Value + 0x60);
    if (*(longlong **)(FVar1.Value + 0x78) != (longlong *)0x0) {
      plVar2 = *(longlong **)(FVar1.Value + 0x78);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FMemory::Free((void *)FVar1.Value);
  return;
}

// operator<< @ 14456c250

FRequest * __thiscall
UE::IoStore::HTTP::DetailOne::FRequest::operator<<(FRequest *this,TStringView<char> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FRequest *pFVar4;
  uint uVar5;
  
  uVar1 = param_1->Size;
  uVar5 = uVar1;
  if ((uVar1 == 0) &&
     ((*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) == (uint)this->_padding_)) {
    uVar5 = 0x100;
  }
  uVar5 = (*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) + uVar5;
  if ((uint)this->_padding_ < uVar5) {
    FBuffer::Extend((FBuffer *)this,uVar5,0x100);
  }
  memcpy((void *)((ulonglong)(*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) +
                 this->_padding_),param_1->DataPtr,(ulonglong)uVar1);
  uVar5 = *(uint *)((longlong)&this->_padding_ + 4);
  *(uint *)((longlong)&this->_padding_ + 4) = (uVar5 + uVar1 ^ uVar5) & 0x7fffffff ^ uVar5;
  if ((uint)this->_padding_ < (uVar5 + uVar1 & 0x7fffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Used <= Max",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                       ,0x1d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRequest *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// Accept @ 14456edc0

FRequest * __thiscall UE::IoStore::HTTP::FRequest::Accept(FRequest *this,TStringView<char> *param_1)

{
  FRequest *pFVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.Size = 6;
  local_28.DataPtr = "Accept";
  pFVar1 = Header(this,&local_28,&local_18);
  return pFVar1;
}

// Accept @ 14456ee10

FRequest * __thiscall UE::IoStore::HTTP::FRequest::Accept(FRequest *this,EMimeType param_1)

{
  FRequest *pFVar1;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  switch(param_1) {
  case Text:
    local_28.Size = 9;
    local_18.Size = 6;
    local_18.DataPtr = "Accept";
    local_28.DataPtr = "text/html";
    pFVar1 = Header(this,&local_18,&local_28);
    return pFVar1;
  case Binary:
    local_18.DataPtr = "application/octet-stream";
    local_18.Size = 0x18;
    break;
  case Json:
    local_18.DataPtr = "application/json";
    local_18.Size = 0x10;
    break;
  case Xml:
    local_18.DataPtr = "application/xml";
    local_18.Size = 0xf;
    break;
  case CbObject:
    local_18.DataPtr = "application/x-ue-cb";
    local_18.Size = 0x13;
    break;
  case CbPackage:
    local_18.DataPtr = "application/x-ue-pkg";
    local_18.Size = 0x14;
    break;
  case CompressedBuffer:
    local_18.DataPtr = "application/x-ue-comp";
    local_18.Size = 0x15;
    break;
  default:
    return this;
  }
  local_28.Size = 6;
  local_28.DataPtr = "Accept";
  pFVar1 = Header(this,&local_28,&local_18);
  return pFVar1;
}

// AddHeader @ 14456f240

void __thiscall
UE::IoStore::HTTP::DetailOne::FRequest::AddHeader
          (FRequest *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRequest *pFVar3;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (-1 < this->HeaderRight) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderRight < 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0xde,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar3 = operator<<(this,&local_48);
  local_38._12_4_ = uStack_5c;
  local_38.Size = 1;
  local_38.DataPtr = ":";
  pFVar3 = operator<<(pFVar3,&local_38);
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar3 = operator<<(pFVar3,&local_28);
  local_18._12_4_ = uStack_4c;
  local_18.Size = 2;
  local_18.DataPtr = "\r\n";
  operator<<(pFVar3,&local_18);
  return;
}

// AddHeader @ 14456f330

void __thiscall
UE::IoStore::HTTP::DetailTwo::FRequest::AddHeader
          (FRequest *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *local_38;
  char *pcStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  
  iVar6 = param_1->Size;
  if ((((iVar6 != 0) &&
       (iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"connection",(longlong)iVar6),
       iVar5 == 0)) && ("connection"[iVar6] == '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Key.Equals(\"connection\", ESearchCase::IgnoreCase)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                         ,0x283,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_38 = param_1->DataPtr;
  pFVar2 = (this->RequestHeaders).Headers.AllocatorInstance.Data;
  pcStack_30 = param_2->DataPtr;
  local_28 = (longlong)(int)*(undefined8 *)&param_1->Size;
  lStack_20 = (longlong)(int)*(undefined8 *)&param_2->Size;
  local_18 = 6;
  if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2 + (longlong)(this->RequestHeaders).Headers.ArrayMax * 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->RequestHeaders).Headers.ArrayNum;
  piVar1 = &(this->RequestHeaders).Headers.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)&this->RequestHeaders,piVar1);
  }
  lVar7 = (longlong)iVar6;
  (this->RequestHeaders).Headers.ArrayNum = iVar6 + 1;
  pFVar2 = (this->RequestHeaders).Headers.AllocatorInstance.Data;
  *(char **)(pFVar2 + lVar7 * 0x28) = local_38;
  *(char **)(pFVar2 + lVar7 * 0x28 + 8) = pcStack_30;
  *(longlong *)(pFVar2 + lVar7 * 0x28 + 0x10) = local_28;
  *(longlong *)(pFVar2 + lVar7 * 0x28 + 0x10 + 8) = lStack_20;
  *(ulonglong *)(pFVar2 + lVar7 * 0x28 + 0x20) = CONCAT71(uStack_17,local_18);
  return;
}

// Begin @ 14456f640

void __thiscall
UE::IoStore::HTTP::DetailOne::FRequest::Begin
          (FRequest *this,TStringView<char> *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FRequest *pFVar5;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  TStringView<char> local_98;
  TStringView<char> local_88;
  TStringView<char> local_78;
  TStringView<char> local_68;
  TStringView<char> local_58;
  TStringView<char> local_48;
  TStringView<char> local_38;
  TStringView<char> local_28 [2];
  
  if (-1 < this->MethodLength) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MethodLength < 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0xd2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_98.DataPtr = param_2->DataPtr;
  local_98.Size = param_2->Size;
  local_98._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this->AlreadySent = *(ushort *)((longlong)&this->_padding_ + 4);
  pFVar5 = operator<<(this,&local_98);
  local_88._12_4_ = uStack_dc;
  local_88.Size = 1;
  local_88.DataPtr = " ";
  pFVar5 = operator<<(pFVar5,&local_88);
  local_78.DataPtr = param_3->DataPtr;
  local_78.Size = param_3->Size;
  local_78._12_4_ = *(undefined4 *)&param_3->field_0xc;
  pFVar5 = operator<<(pFVar5,&local_78);
  local_68._12_4_ = uStack_cc;
  local_68.Size = 0xb;
  local_68.DataPtr = " HTTP/1.1\r\n";
  operator<<(pFVar5,&local_68);
  pcVar2 = param_1->DataPtr;
  uVar3._0_4_ = param_1->Size;
  uVar3._4_4_ = *(undefined4 *)&param_1->field_0xc;
  this->MethodLength = (schar)param_2->Size;
  this->HeaderLeft = *(ushort *)((longlong)&this->_padding_ + 4);
  if (-1 < this->HeaderRight) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderRight < 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0xde,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58._12_4_ = uStack_bc;
  local_58.Size = 4;
  local_58.DataPtr = "Host";
  pFVar5 = operator<<(this,&local_58);
  local_48._12_4_ = uStack_ac;
  local_48.Size = 1;
  local_48.DataPtr = ":";
  pFVar5 = operator<<(pFVar5,&local_48);
  local_38.DataPtr = pcVar2;
  local_38._8_8_ = uVar3;
  pFVar5 = operator<<(pFVar5,&local_38);
  local_28[0]._12_4_ = uStack_9c;
  local_28[0].Size = 2;
  local_28[0].DataPtr = "\r\n";
  operator<<(pFVar5,local_28);
  return;
}

// Begin @ 14456f860

void __thiscall
UE::IoStore::HTTP::DetailTwo::FRequest::Begin
          (FRequest *this,TStringView<char> *param_1,TStringView<char> *param_2,
          TStringView<char> *param_3)

{
  size_t sVar1;
  FDriverHeaders *this_00;
  char *_Str;
  TStringView<char> local_38;
  TStringView<char> local_28;
  
  _Str = "http";
  if (*(char *)(this->_padding_ + 0x24) != '\0') {
    _Str = "https";
  }
  sVar1 = strlen(_Str);
  local_28.DataPtr = param_2->DataPtr;
  local_28.Size = param_2->Size;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.Size = 7;
  this_00 = &this->RequestHeaders;
  local_38.DataPtr = ":method";
  FDriverHeaders::Add(this_00,&local_38,&local_28);
  local_28.DataPtr = param_3->DataPtr;
  local_28.Size = param_3->Size;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_38.Size = 5;
  local_38.DataPtr = ":path";
  FDriverHeaders::Add(this_00,&local_38,&local_28);
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_38.Size = 10;
  local_38.DataPtr = ":authority";
  FDriverHeaders::Add(this_00,&local_38,&local_28);
  local_38._12_4_ = local_28._12_4_;
  local_38.Size = (int)sVar1;
  local_28.Size = 7;
  local_28.DataPtr = ":scheme";
  local_38.DataPtr = _Str;
  FDriverHeaders::Add(this_00,&local_28,&local_38);
  return;
}

// End @ 144572760

uint __thiscall UE::IoStore::HTTP::DetailOne::FRequest::End(FRequest *this,bool param_1)

{
  TStringView<char> local_28;
  TStringView<char> local_18;
  
  if (!param_1) {
    local_28.Size = 5;
    local_18.Size = 10;
    local_18.DataPtr = "Connection";
    local_28.DataPtr = "close";
    AddHeader(this,&local_18,&local_28);
  }
  local_18.Size = 2;
  local_18.DataPtr = "\r\n";
  operator<<(this,&local_18);
  this->HeaderRight = *(short *)((longlong)&this->_padding_ + 4);
  return 1;
}

// End @ 144572810

uint __thiscall UE::IoStore::HTTP::DetailTwo::FRequest::End(FRequest *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = nghttp2_submit_request2
                    (*(undefined8 *)this->_padding_,0,
                     (this->RequestHeaders).Headers.AllocatorInstance.Data,
                     (longlong)(this->RequestHeaders).Headers.ArrayNum,0,
                     (undefined8 *)this->_padding_);
  this->Id = uVar1;
  return uVar1;
}

// GetTransactId @ 144574c20

uint __thiscall UE::IoStore::HTTP::DetailTwo::FRequest::GetTransactId(FRequest *this)

{
  return this->Id;
}

// Header @ 144575550

FRequest * __thiscall
UE::IoStore::HTTP::FRequest::Header
          (FRequest *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  uint uVar1;
  FActivityNode *pFVar2;
  code *pcVar3;
  int iVar4;
  char *_Src;
  undefined8 uVar5;
  char *_Src_00;
  undefined8 uVar6;
  bool bVar7;
  FRequest *pFVar8;
  uint uVar9;
  undefined1 *this_00;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  
  pFVar2 = this->Ptr;
  _Src = param_2->DataPtr;
  uVar5 = *(undefined8 *)&param_2->Size;
  _Src_00 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->Size;
  if (*(char *)pFVar2 != '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::Build",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xce,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FRequest *)(*pcVar3)();
      return pFVar8;
    }
  }
  if (*(short *)&pFVar2->field_0x6 == -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderCount < 0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xd0,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FRequest *)(*pcVar3)();
      return pFVar8;
    }
  }
  *(short *)&pFVar2->field_0x6 = *(short *)&pFVar2->field_0x6 + 1;
  this_00 = &pFVar2->field_0x88;
  uVar9 = *(int *)this_00 + *(uint *)&pFVar2->field_0x94 & 1;
  uVar10 = 2 - uVar9;
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  iVar4 = (int)uVar6;
  iVar12 = (int)uVar5;
  uVar9 = uVar10 + (*(uint *)&pFVar2->field_0x94 & 0x7fffffff) + (iVar4 + iVar12 + 5U & 0xfffffffe);
  if (*(uint *)&pFVar2->field_0x90 < uVar9) {
    FBuffer::Extend((FBuffer *)this_00,uVar9,0x100);
  }
  uVar1 = *(uint *)&pFVar2->field_0x94;
  puVar11 = (undefined2 *)
            ((ulonglong)uVar10 + (ulonglong)(uVar1 & 0x7fffffff) + *(longlong *)this_00);
  *(uint *)&pFVar2->field_0x94 = (uVar1 ^ uVar9) & 0x7fffffff ^ uVar1;
  *puVar11 = (short)uVar6;
  puVar11[1] = (short)uVar5;
  memcpy(puVar11 + 2,_Src_00,(longlong)iVar4);
  memcpy((void *)((longlong)iVar4 + (longlong)(puVar11 + 2)),_Src,(longlong)iVar12);
  return this;
}

// TrySendRequest @ 1445849f0

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FRequest::TrySendRequest(FRequest *this,FTlsPeer *param_1)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FOutcome FVar6;
  FTlsPeer *in_R8;
  undefined4 local_res8;
  int iStackX_c;
  
  uVar1 = this->AlreadySent;
  lVar2 = this->_padding_;
  if ((int)((*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) - (uint)uVar1) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SendSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x103,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar6.field0_0x0;
    }
  }
  FTlsPeer::Send(in_R8,(char *)&local_res8,(uint)uVar1 + (int)lVar2);
  if (iStackX_c == 0x8000) {
    if (CONCAT44(0x8000,local_res8) < 0x800000000000) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x59,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
        return (FOutcome)FVar6.field0_0x0;
      }
    }
    this->AlreadySent = this->AlreadySent + (short)local_res8;
    uVar5 = *(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff;
    if (this->AlreadySent == uVar5) {
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    }
    else {
      if (uVar5 <= this->AlreadySent) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AlreadySent < GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x112,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          FVar6.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
          return (FOutcome)FVar6.field0_0x0;
        }
      }
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x18000;
    }
    *(undefined4 *)&param_1->_padding_ = 0;
  }
  else {
    param_1->_padding_ = CONCAT44(iStackX_c,local_res8);
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// TrySendRequest @ 144584b40

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FRequest::TrySendRequest(FRequest *this,FTlsPeer *param_1)

{
  FDriverNg::PumpSend((FDriverNg *)this->_padding_,param_1);
  return (FOutcome)(FOutcome_u_0)param_1;
}

