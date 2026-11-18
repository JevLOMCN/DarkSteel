// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 17

// operator() @ 14456c960

bool __thiscall
`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>::operator()
          (void *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = (ulong64)param_1->Size;
  if (param_1->Size != 0) {
    iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"Content-Length",uVar3);
    if ((iVar1 == 0) && ("Content-Length"[uVar3] == '\0')) {
      pcVar5 = param_2->DataPtr;
      iVar1 = 0;
      pcVar6 = pcVar5 + (int)*(undefined8 *)&param_2->Size;
      for (; (pcVar5 != pcVar6 && ((int)*pcVar5 - 0x30U < 10)); pcVar5 = pcVar5 + 1) {
        iVar1 = ((int)*pcVar5 - 0x30U) + iVar1 * 10;
      }
      *(longlong *)(*(longlong *)this + 0x118) = (longlong)iVar1;
      **(uint **)((longlong)this + 8) = **(uint **)((longlong)this + 8) | 1;
    }
    else {
      iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"Transfer-Encoding",uVar3);
      if ((iVar1 == 0) && ("Transfer-Encoding"[uVar3] == '\0')) {
        iVar1 = param_2->Size;
        if (((iVar1 == 0) ||
            (iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,"chunked",(longlong)iVar1),
            iVar2 != 0)) || ("chunked"[iVar1] != '\0')) {
          bVar4 = 0;
        }
        else {
          bVar4 = 2;
        }
        *(byte *)(*(longlong *)this + 0x12a) = *(byte *)(*(longlong *)this + 0x12a) & 0xfd | bVar4;
        **(uint **)((longlong)this + 8) = **(uint **)((longlong)this + 8) | 2;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,"Connection",uVar3);
        if ((iVar1 == 0) && ("Connection"[uVar3] == '\0')) {
          iVar1 = param_2->Size;
          if ((iVar1 == 0) ||
             ((iVar2 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,"close",(longlong)iVar1),
              iVar2 != 0 || ("close"[iVar1] != '\0')))) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
          *(byte *)(*(longlong *)this + 0x12a) = *(byte *)(*(longlong *)this + 0x12a) & 0xfe | bVar4
          ;
          **(uint **)((longlong)this + 8) = **(uint **)((longlong)this + 8) | 4;
        }
      }
    }
  }
  return **(int **)((longlong)this + 8) != 7;
}

// GetContentLength @ 1445738b0

long64 __thiscall
UE::IoStore::HTTP::DetailOne::FStatusHeaders::GetContentLength(FStatusHeaders *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->Offsets).Headers != 0) {
    return this->ContentLength;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Offsets.Headers > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                     ,0x14e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return this->ContentLength;
}

// GetContentLength @ 144573910

long64 __thiscall
UE::IoStore::HTTP::DetailTwo::FStatusHeaders::GetContentLength(FStatusHeaders *this)

{
  return this->ContentLength;
}

// GetMessageRight @ 144574280

char * __thiscall
UE::IoStore::HTTP::DetailOne::FStatusHeaders::GetMessageRight(FStatusHeaders *this)

{
  return (char *)((longlong)this->MessageRight + this->_padding_);
}

// GetStatusCode @ 144574990

uint __thiscall UE::IoStore::HTTP::DetailOne::FStatusHeaders::GetStatusCode(FStatusHeaders *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (99 < this->StatusCode) {
    return (uint)this->StatusCode;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("StatusCode >= 100",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                     ,0x13f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (uint)this->StatusCode;
}

// GetStatusCode @ 1445749f0

uint __thiscall UE::IoStore::HTTP::DetailTwo::FStatusHeaders::GetStatusCode(FStatusHeaders *this)

{
  return this->StatusCode;
}

// GetStatusMessage @ 144574a90

TStringView<char> * __thiscall
UE::IoStore::HTTP::DetailOne::FStatusHeaders::GetStatusMessage
          (FStatusHeaders *this,TStringView<char> *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TStringView<char> *pTVar4;
  
  if ((this->Offsets).Message == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offsets.Message > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x146,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TStringView<char> *)(*pcVar2)();
      return pTVar4;
    }
  }
  bVar1 = (this->Offsets).Message;
  __return_storage_ptr__->DataPtr =
       (char *)((longlong)this->MessageLeft + (ulonglong)bVar1 + this->_padding_);
  __return_storage_ptr__->Size = (uint)(this->Offsets).Headers - (uint)bVar1;
  return __return_storage_ptr__;
}

// GetStatusMessage @ 144574b10

TStringView<char> * __thiscall
UE::IoStore::HTTP::DetailTwo::FStatusHeaders::GetStatusMessage
          (FStatusHeaders *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = "";
  return __return_storage_ptr__;
}

// IsChunked @ 1445789d0

bool __thiscall UE::IoStore::HTTP::DetailOne::FStatusHeaders::IsChunked(FStatusHeaders *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->MessageRight < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageRight > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                       ,0x155,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->bChunked;
}

// IsChunked @ 144578a20

bool __thiscall UE::IoStore::HTTP::DetailTwo::FStatusHeaders::IsChunked(FStatusHeaders *this)

{
  return SUB81((ulonglong)this->ContentLength >> 0x3f,0);
}

// IsKeepAlive @ 144578af0

bool __thiscall UE::IoStore::HTTP::DetailOne::FStatusHeaders::IsKeepAlive(FStatusHeaders *this)

{
  if (0 < this->MessageRight) {
    return this->bKeepAlive;
  }
  return true;
}

// IsKeepAlive @ 144578b10

bool __thiscall UE::IoStore::HTTP::DetailTwo::FStatusHeaders::IsKeepAlive(FStatusHeaders *this)

{
  return true;
}

// Parse @ 14457bcb0

FOutcome __thiscall UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse(FStatusHeaders *this)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FOutcome FVar7;
  uint uVar8;
  FOutcome_u_0 in_RDX;
  char *pcVar9;
  char *pcVar10;
  uint local_res8 [2];
  TStringView<char> local_48;
  code *local_38 [2];
  undefined **local_28;
  FStatusHeaders *local_20;
  uint *local_18;
  undefined8 local_10;
  
  pcVar9 = (char *)((longlong)this->MessageLeft + this->_padding_);
  local_48.Size = (int)this->MessageRight - (int)this->MessageLeft;
  local_48.DataPtr = pcVar9;
  iVar5 = ParseMessage(&local_48,&this->Offsets);
  if (iVar5 < 0) {
    pcVar9 = "Failed to parse message status";
  }
  else {
    uVar6 = (ulonglong)(this->Offsets).StatusCode;
    uVar8 = 0;
    pcVar9 = pcVar9 + uVar6;
    pcVar10 = pcVar9 + ((this->Offsets).Message - uVar6);
    for (; (pcVar9 != pcVar10 && ((int)*pcVar9 - 0x30U < 10)); pcVar9 = pcVar9 + 1) {
      uVar8 = ((int)*pcVar9 - 0x30U) + uVar8 * 10;
    }
    this->StatusCode = (ushort)uVar8;
    if (899 < (uVar8 & 0xffff) - 100) {
      *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d725d8;
      *(ushort *)((longlong)in_RDX + 6) = (ushort)uVar8;
      return (FOutcome)in_RDX;
    }
    local_28 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_18 = local_res8;
    local_res8[0] = 0;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
    local_10 = 0;
    local_20 = this;
    ReadHeaders(this,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_38);
    if ((local_res8[0] & 2) == 0) {
      uVar8 = (*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) - (int)this->MessageRight;
      if ((local_res8[0] & 1) == 0) {
        if (uVar8 == 0) {
          this->ContentLength = 0;
          goto LAB_14457bedd;
        }
        pcVar9 = "Received content when none was expected";
      }
      else {
        lVar2 = this->ContentLength;
        if (lVar2 < 0) {
          if ((0x1fffe < (int)lVar2 + 0xffffU) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Code <= 0xffff && Code >= -0xffff",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                                 ,0x9a,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
            return (FOutcome)FVar7.field0_0x0;
          }
          *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x150d727f0;
          *(short *)((longlong)in_RDX + 6) = (short)lVar2;
          return (FOutcome)in_RDX;
        }
        if ((longlong)(ulonglong)uVar8 <= lVar2) {
LAB_14457bedd:
          uVar1 = this->StatusCode;
          if (uVar1 < 200 || (uVar1 == 0x130 || uVar1 == 0xcc)) {
            this->bChunked = '\0';
            this->ContentLength = 0;
          }
          *(undefined4 *)((longlong)in_RDX + 4) = 0x8000;
          *(undefined4 *)in_RDX = 0;
          return (FOutcome)in_RDX;
        }
        pcVar9 = "More data received that expected";
      }
    }
    else if (this->bChunked == '\0') {
      pcVar9 = "Unsupported Transfer-Encoding";
    }
    else {
      if ((local_res8[0] & 1) == 0) {
        this->ContentLength = -1;
        goto LAB_14457bedd;
      }
      pcVar9 = "Chunked yet with length";
    }
  }
  *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ (ulonglong)pcVar9;
  *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
  return (FOutcome)in_RDX;
}

// ReadHeaders @ 14457ccc0

void __thiscall
UE::IoStore::HTTP::DetailOne::FStatusHeaders::ReadHeaders
          (FStatusHeaders *this,
          TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_1)

{
  longlong *plVar1;
  uint uVar2;
  TStringView<char> local_18;
  
  uVar2 = (int)this->MessageLeft + (uint)(this->Offsets).Headers;
  local_18.DataPtr = (char *)((ulonglong)uVar2 + this->_padding_);
  local_18.Size = ((int)this->MessageRight - uVar2) + -2;
  EnumerateHeaders<TFunction<bool___cdecl(TStringView<char>,TStringView<char>)>_&>
            (&local_18,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014457cd29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ReadHeaders @ 14457cd40

void __thiscall
UE::IoStore::HTTP::DetailTwo::FStatusHeaders::ReadHeaders
          (FStatusHeaders *this,
          TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  pFVar8 = (this->ResponseHeaders).AllocatorInstance.Data;
  iVar1 = (this->ResponseHeaders).ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ResponseHeaders).ArrayNum != iVar1) {
      local_98[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::HTTP::DetailTwo::FHeaderNg_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_98);
    }
    if (pFVar8 == pFVar9) break;
    if (*(longlong *)pFVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                         ,0x79,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar5 = (undefined8 *)nghttp2_rcbuf_get_buf(local_48,*(longlong *)pFVar8);
    local_78 = *puVar5;
    uStack_70 = (undefined4)puVar5[1];
    if (*(longlong *)(pFVar8 + 8) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                         ,0x79,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar5 = (undefined8 *)nghttp2_rcbuf_get_buf(local_38,*(longlong *)(pFVar8 + 8));
    uStack_50 = CONCAT44(uStack_6c,uStack_70);
    local_58 = local_78;
    local_88 = *puVar5;
    uStack_80 = (undefined4)puVar5[1];
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_68 = local_88;
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar4 = (*pcVar2)(uVar6,&local_58,&local_68);
    if (cVar4 == '\0') break;
    pFVar8 = pFVar8 + 0x10;
  }
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}

// TryRecvResponse @ 144584360

FOutcome __thiscall
UE::IoStore::HTTP::DetailOne::FStatusHeaders::TryRecvResponse
          (FStatusHeaders *this,FTlsPeer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOutcome FVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  FTlsPeer *in_R8;
  ulonglong uVar9;
  uint local_res8;
  int iStackX_c;
  
  if (this->MessageLeft < 0) {
    this->MessageLeft = *(short *)((longlong)&this->_padding_ + 4);
    this->bKeepAlive = '\x01';
    this->bChunked = '\0';
  }
  uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
  do {
    iVar8 = 0x100;
    if ((uVar6 & 0x7fffffff) != (uint)this->_padding_) {
      iVar8 = 0;
    }
    uVar6 = (uVar6 & 0x7fffffff) + iVar8;
    if ((uint)this->_padding_ < uVar6) {
      FBuffer::Extend((FBuffer *)this,uVar6,0x100);
    }
    uVar7 = (ulonglong)(*(uint *)((longlong)&this->_padding_ + 4) & 0x7fffffff) + this->_padding_;
    FTlsPeer::Recv(in_R8,(char *)&local_res8,(int)uVar7);
    uVar6 = local_res8;
    if (iStackX_c != 0x8000) {
      param_1->_padding_ = CONCAT44(iStackX_c,local_res8);
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    if ((CONCAT44(0x8000,local_res8) < 0x800000000000) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                           ,0x59,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar1)();
      return (FOutcome)FVar4.field0_0x0;
    }
    FBase::AdvanceUsed((FBase *)this,uVar6);
    uVar9 = uVar7 - 3;
    iVar3 = 4;
    iVar8 = 3;
    if (uVar9 < (ulonglong)((longlong)this->MessageLeft + this->_padding_)) {
      iVar8 = 0;
      uVar9 = uVar7;
    }
    iVar8 = iVar8 + uVar6;
    if (3 < iVar8) {
      do {
        if (*(int *)((longlong)iVar3 + -4 + uVar9) == 0xa0d0a0d) {
          if (-1 < iVar3) {
            this->MessageRight = ((short)iVar3 - (short)this->_padding_) + (short)uVar9;
            Parse(this);
            return (FOutcome)(FOutcome_u_0)param_1;
          }
          break;
        }
        iVar5 = 1;
        if ('\r' < *(char *)((longlong)iVar3 + -1 + uVar9)) {
          iVar5 = 4;
        }
        iVar3 = iVar3 + iVar5;
      } while (iVar3 <= iVar8);
    }
    uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
    if (0x2000 < (uVar6 & 0x7fffffff) - (int)this->MessageLeft) {
      param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d72740;
      *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
      return (FOutcome)(FOutcome_u_0)param_1;
    }
  } while( true );
}

// TryRecvResponse @ 144584570

FOutcome __thiscall
UE::IoStore::HTTP::DetailTwo::FStatusHeaders::TryRecvResponse
          (FStatusHeaders *this,FTlsPeer *param_1)

{
  uchar uVar1;
  uchar uVar2;
  byte bVar3;
  uchar uVar4;
  uchar uVar5;
  uint uVar6;
  FDriverNg *this_00;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FOutcome FVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  FTlsPeer local_98;
  undefined8 local_88;
  undefined1 local_80;
  char *local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  this_00 = (FDriverNg *)this->_padding_;
  if ((this_00->field6_0x21c).RecvFrame.Type == RstStream) {
    local_98._padding_ = 0xffff000150d724b0;
  }
  else {
    if ((this_00->RecvRemaining < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecvRemaining > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x1dc,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      FVar11.field0_0x0 = (FOutcome_u_0)(*pcVar7)();
      return (FOutcome)FVar11.field0_0x0;
    }
    if (((this_00->field6_0x21c).RecvFrame.Type != Headers) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RecvFrame.Type == FFrame::EType::Headers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x1dd,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      FVar11.field0_0x0 = (FOutcome_u_0)(*pcVar7)();
      return (FOutcome)FVar11.field0_0x0;
    }
    this_00->ResponseHeaders = &this->ResponseHeaders;
    do {
      uVar1 = (this_00->field6_0x21c).RecvFrame.Id[1];
      uVar2 = (this_00->field6_0x21c).RecvFrame.Id[0];
      bVar3 = (this_00->field6_0x21c).RecvFrame.Flags;
      uVar4 = (this_00->field6_0x21c).RecvFrame.Id[2];
      uVar5 = (this_00->field6_0x21c).RecvFrame.Id[3];
      if ((bVar3 & 4) != 0) {
        local_88 = 0;
        *(undefined8 *)&this_00->field6_0x21c = 0;
        (this_00->field6_0x21c).RecvFrame.Id[3] = '\0';
        local_80 = 0;
      }
      FDriverNg::Tick(this_00,&local_98);
      if ((local_98._padding_ & 0xffffffffffffU) < 0x800000000000) goto LAB_1445846ec;
      if ((bVar3 & 4) != 0) {
        local_98._padding_ = 0x800000000000;
        goto LAB_1445846ec;
      }
    } while ((int)local_98._padding_ == CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar4),uVar5));
    local_98._padding_ = 0x5800000000000;
LAB_1445846ec:
    this_00->ResponseHeaders =
         (TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uVar17 = 0;
  local_98.Ssl = (ssl_st *)&this->ResponseHeaders;
  if ((int)((ulonglong)local_98._padding_ >> 0x20) != 0x8000) {
    param_1->_padding_ = local_98._padding_;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  uVar6 = (this->ResponseHeaders).ArrayNum;
  uVar10 = (ulonglong)(int)uVar6;
  pFVar19 = (((TArray<UE::IoStore::HTTP::DetailTwo::FHeaderNg,TSizedDefaultAllocator<32>_> *)
             local_98.Ssl)->AllocatorInstance).Data;
  pFVar18 = pFVar19 + uVar10 * 0x10;
  while( true ) {
    if (*(int *)(local_98.Ssl + 8) != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::HTTP::DetailTwo::FHeaderNg,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar18) break;
    if (uVar17 == 3) goto LAB_14458491d;
    if ((*(longlong *)pFVar19 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x79,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      FVar11.field0_0x0 = (FOutcome_u_0)(*pcVar7)();
      return (FOutcome)FVar11.field0_0x0;
    }
    puVar12 = (undefined8 *)nghttp2_rcbuf_get_buf(local_58,*(longlong *)pFVar19);
    local_78 = (char *)*puVar12;
    uStack_70 = puVar12[1];
    if ((*(longlong *)(pFVar19 + 8) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x79,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      FVar11.field0_0x0 = (FOutcome_u_0)(*pcVar7)();
      return (FOutcome)FVar11.field0_0x0;
    }
    puVar12 = (undefined8 *)nghttp2_rcbuf_get_buf(local_48,*(longlong *)(pFVar19 + 8));
    pcVar15 = local_78;
    local_68 = (char *)*puVar12;
    uStack_60 = puVar12[1];
    iVar16 = (int)uStack_70;
    if (uVar17 == 1) {
LAB_144584896:
      if (iVar16 != 0) {
        iVar9 = FGenericPlatformStricmp::Strnicmp(pcVar15,"content-length",(longlong)iVar16);
        if ((iVar9 == 0) && ("content-length"[iVar16] == '\0')) {
          lVar14 = -0x8000000000000000;
          for (pcVar15 = local_68;
              (pcVar15 != local_68 + (int)uStack_60 && ((int)*pcVar15 - 0x30U < 10));
              pcVar15 = pcVar15 + 1) {
            lVar14 = (ulonglong)((int)*pcVar15 - 0x30U) + lVar14 * 10;
          }
          this->ContentLength = lVar14;
          uVar17 = uVar17 | 2;
        }
      }
LAB_144584902:
      pFVar19 = pFVar19 + 0x10;
      uVar10 = (ulonglong)uVar6;
    }
    else {
      if (iVar16 == 0) {
LAB_144584891:
        if (uVar17 != 2) goto LAB_144584896;
        goto LAB_144584902;
      }
      iVar9 = FGenericPlatformStricmp::Strnicmp(local_78,":status",(longlong)iVar16);
      if ((iVar9 != 0) || (":status"[iVar16] != '\0')) goto LAB_144584891;
      uVar13 = 0;
      for (pcVar15 = local_68;
          (pcVar15 != local_68 + (int)uStack_60 && ((int)*pcVar15 - 0x30U < 10));
          pcVar15 = pcVar15 + 1) {
        uVar13 = ((int)*pcVar15 - 0x30U) + uVar13 * 10;
      }
      uVar17 = uVar17 | 1;
      uVar10 = (ulonglong)uVar6;
      pFVar19 = pFVar19 + 0x10;
      this->StatusCode = uVar13;
    }
  }
  if ((uVar17 & 1) == 0) goto LAB_144584969;
LAB_14458491d:
  uVar17 = this->StatusCode;
  if (uVar17 - 100 < 900) {
    if (uVar17 < 200 || (uVar17 == 0x130 || uVar17 == 0xcc)) {
      this->ContentLength = 0;
    }
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(undefined4 *)&param_1->_padding_ = 0;
    return (FOutcome)(FOutcome_u_0)param_1;
  }
LAB_144584969:
  uVar17 = this->StatusCode;
  if (((0xffff < (int)uVar17) || ((int)uVar17 < -0xffff)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Code <= 0xffff && Code >= -0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                         ,0x9a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    FVar11.field0_0x0 = (FOutcome_u_0)(*pcVar7)();
    return (FOutcome)FVar11.field0_0x0;
  }
  param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d725d8;
  *(short *)((longlong)&param_1->_padding_ + 6) = (short)uVar17;
  return (FOutcome)(FOutcome_u_0)param_1;
}

