// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 76

// `dynamic_initializer_for_'CVar_IasIdleMs'' @ 140f8fa00

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__CVar_IasIdleMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasIdleMs,L"ias.HttpIdleMs",&GIdleMs,
             L"Time in milliseconds to close idle connections or fail waits",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasIdleMs__);
  return;
}

// `dynamic_initializer_for_'CVar_IasRecvWorkThresholdKiB'' @ 140f8fa50

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__CVar_IasRecvWorkThresholdKiB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasRecvWorkThresholdKiB,L"ias.HttpRecvWorkThresholdKiB",&GRecvWorkThresholdKiB,
             L"Threshold of data remaining at which next request is sent (in KiB)",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasRecvWorkThresholdKiB__);
  return;
}

// `dynamic_initializer_for_'CVar_IasSocksIp'' @ 140f8faa0

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__CVar_IasSocksIp__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasSocksIp,L"ias.HttpSocksIp",&GSocksIp,
             L"Routes all IAS HTTP traffic through the given SOCKS proxy",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasSocksIp__);
  return;
}

// `dynamic_initializer_for_'CVar_IasSocksPort'' @ 140f8faf0

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__CVar_IasSocksPort__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasSocksPort,L"ias.HttpSocksPort",&GSocksPort,L"Port of the SOCKS proxy to use",0
            );
  atexit(_dynamic_atexit_destructor_for__CVar_IasSocksPort__);
  return;
}

// `dynamic_initializer_for_'CVar_IasSocksVersion'' @ 140f8fb40

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__CVar_IasSocksVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasSocksVersion,L"ias.HttpSocksVersion",&GSocksVersion,
             L"SOCKS proxy protocol version to use",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasSocksVersion__);
  return;
}

// `dynamic_initializer_for_'GActivityTraceEstate'' @ 140f8fb90

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__GActivityTraceEstate__(void)

{
  FLaneTraceSpec local_38;
  
  local_38.Name.Size = 0xc;
  local_38.Name.DataPtr = "Iax/Activity";
  local_38.Group.DataPtr = "Iax";
  local_38.Group.Size = 3;
  local_38.Channel = GetIaxTraceChannel();
  local_38.Weight = 0xb;
  GActivityTraceEstate = LaneEstate_New(&local_38);
  return;
}

// `dynamic_initializer_for_'GDefaultCertRoots'' @ 140f8fbf0

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__GDefaultCertRoots__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDefaultCertRoots__);
  return;
}

// `dynamic_initializer_for_'GSocketLaneEstate'' @ 140f8fc10

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__GSocketLaneEstate__(void)

{
  FLaneTraceSpec local_38;
  
  local_38.Name.Size = 10;
  local_38.Name.DataPtr = "Iax/Socket";
  local_38.Group.DataPtr = "Iax";
  local_38.Group.Size = 3;
  local_38.Channel = GetIaxTraceChannel();
  local_38.Weight = 0xc;
  GSocketLaneEstate = LaneEstate_New(&local_38);
  return;
}

// `dynamic_initializer_for_'GSocksIp'' @ 140f8fc70

void __cdecl UE::IoStore::HTTP::_dynamic_initializer_for__GSocksIp__(void)

{
  ::FString::FString(&GSocksIp,"");
  atexit(_dynamic_atexit_destructor_for__GSocksIp__);
  return;
}

// operator<<<char,char_const_*_&> @ 144569660

TStringBuilderBase<char> * __cdecl
operator<<<char,char_const_*_&>(TStringBuilderBase<char> *param_1,char **param_2)

{
  char *_Str;
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  _Str = *param_2;
  iVar4 = 0;
  if (_Str != (char *)0x0) {
    sVar1 = strlen(_Str);
    iVar4 = (int)sVar1;
  }
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<char>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,_Str,uVar3);
    param_1->CurPos = (char *)((longlong)pvVar2 + uVar3);
  }
  return param_1;
}

// operator<<<char,TStringView<char>_&> @ 1445696e0

TStringBuilderBase<char> * __cdecl
operator<<<char,TStringView<char>_&>(TStringBuilderBase<char> *param_1,TStringView<char> *param_2)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_2->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  uVar4 = (ulong64)iVar3;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<char>::Extend(param_1,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pcVar1,uVar4);
    param_1->CurPos = (char *)((longlong)pvVar2 + uVar4);
  }
  return param_1;
}

// operator<<<char,char_const_*> @ 144569760

TStringBuilderBase<char> * __cdecl
operator<<<char,char_const_*>(TStringBuilderBase<char> *param_1,char **param_2)

{
  char *_Str;
  size_t sVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  _Str = *param_2;
  iVar4 = 0;
  if (_Str != (char *)0x0) {
    sVar1 = strlen(_Str);
    iVar4 = (int)sVar1;
  }
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<char>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,_Str,uVar3);
    param_1->CurPos = (char *)((longlong)pvVar2 + uVar3);
  }
  return param_1;
}

// DefaultConstructItems<UE::IoStore::HTTP::FPeerGroup,int> @ 144569cf0

void __cdecl DefaultConstructItems<UE::IoStore::HTTP::FPeerGroup,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x10000;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::HTTP::DetailTwo::FHeaderNg,int> @ 144569d40

void __cdecl
DestructItems<UE::IoStore::HTTP::DetailTwo::FHeaderNg,int>(FHeaderNg *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((param_1->Value).Inner != (nghttp2_rcbuf *)0x0) {
      nghttp2_rcbuf_decref();
    }
    if ((param_1->Key).Inner != (nghttp2_rcbuf *)0x0) {
      nghttp2_rcbuf_decref();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::IoStore::HTTP::FHostGroup,int> @ 144569d90

void __cdecl DestructItems<UE::IoStore::HTTP::FHostGroup,int>(FHostGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if (((param_1->Work).List.Head != (FActivityNode *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0xc5,L""), bVar3)) break;
    DestructItems<UE::IoStore::HTTP::FPeerGroup,int>
              ((FPeerGroup *)(param_1->PeerGroups).AllocatorInstance.Data,
               (param_1->PeerGroups).ArrayNum);
    pFVar1 = (param_1->PeerGroups).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// DestructItems<UE::IoStore::HTTP::FPeerGroup,int> @ 144569e10

void __cdecl DestructItems<UE::IoStore::HTTP::FPeerGroup,int>(FPeerGroup *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FActivityList *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Recv;
    do {
      UE::IoStore::HTTP::FHttpPeer::~FHttpPeer((FHttpPeer *)(pFVar3 + 1));
      if ((pFVar3->Head != (FActivityNode *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Head == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0xc5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((((FPeerGroup *)(pFVar3 + -1))->Send).Head != (FActivityNode *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Head == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                             ,0xc5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = pFVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enter<LaneTraceDetail::F$TraceThreadInfoFields> @ 144569eb0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<LaneTraceDetail::F_TraceThreadInfoFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  FNextSharedBuffer *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FSharedBuffer *pFVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_res10;
  FNextSharedBuffer local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'::
      __l2::Uid = LaneTraceDetail::F$TraceThreadInfoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar4 = GSharedBuffer;
  uVar5 = `public:_static_unsigned_int___cdecl_LaneTraceDetail::F$TraceThreadInfoFields::GetUid(void)'
          ::__l2::Uid >> 1;
  iVar6 = -((param_1 + 0x11) * 0x400 | 1);
  LOCK();
  iVar2 = GSharedBuffer->Cursor;
  GSharedBuffer->Cursor = GSharedBuffer->Cursor + iVar6;
  UNLOCK();
  if (iVar6 + iVar2 < 0) {
    pFVar1 = Writer_NextSharedBuffer(&local_18,pFVar4,iVar2,iVar6);
    pFVar4 = pFVar1->Buffer;
    iVar2 = pFVar1->RegionStart;
  }
  puVar3 = (undefined4 *)((longlong)pFVar4 - ((longlong)iVar2 >> 10));
  local_res10 = CONCAT22((short)param_1 + 0xd,(short)uVar5);
  *puVar3 = local_res10;
  __return_storage_ptr__->Ptr = (uchar *)(puVar3 + 1);
  __return_storage_ptr__->BufferOffset = ((int)pFVar4 - (int)puVar3) + -4;
  __return_storage_ptr__->AuxCursor = 8;
  *(undefined1 *)(puVar3 + 3) = 3;
  return __return_storage_ptr__;
}

// EnumerateHeaders<`UE::IoStore::HTTP::MiscTest'::__l2::<lambda_2>_&> @ 14456a0c0

void __cdecl
UE::IoStore::HTTP::EnumerateHeaders<_UE::IoStore::HTTP::MiscTest_::__l2::<lambda_2>_&>
          (TStringView<char> *param_1,<lambda_2> *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = param_1->DataPtr;
  pcVar5 = pcVar7 + param_1->Size;
  while( true ) {
    iVar6 = 0;
    pcVar3 = pcVar7;
    for (pcVar4 = pcVar7; (pcVar3 < pcVar5 && (*pcVar4 != ':')); pcVar4 = pcVar4 + 1) {
      iVar6 = iVar6 + 1;
      pcVar3 = pcVar7 + iVar6;
    }
    pcVar7 = pcVar7 + (longlong)iVar6 + 1;
    pcVar4 = pcVar7 + 1;
    pcVar3 = pcVar7;
    if (pcVar4 < pcVar5) break;
LAB_14456a1e2:
    pcVar7 = pcVar3 + 2;
    if (pcVar5 <= pcVar7) {
      return;
    }
  }
LAB_14456a120:
  if ((*pcVar3 != '\r') || (*pcVar4 != '\n')) goto LAB_14456a12a;
  if (*pcVar7 == ' ' || *pcVar7 == '\t') {
    do {
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 == ' ' || *pcVar7 == '\t');
  }
  pcVar4 = pcVar3;
  do {
    pcVar1 = pcVar4;
    if (pcVar1 <= pcVar7 + 1) break;
    pcVar4 = pcVar1 + -1;
  } while (*pcVar4 == ' ' || *pcVar4 == '\t');
  iVar6 = (int)pcVar1 - (int)pcVar7;
  if (iVar6 == 0) {
LAB_14456a1d9:
    *param_2->AllIsWell = false;
    pcVar3 = pcVar5;
  }
  else {
    iVar2 = FGenericPlatformStricmp::Strnicmp(pcVar7,"bar",(longlong)iVar6);
    if ((iVar2 != 0) || ("bar"[iVar6] != '\0')) goto LAB_14456a1d9;
    *param_2->AllIsWell = true;
  }
  goto LAB_14456a1e2;
LAB_14456a12a:
  pcVar3 = pcVar3 + (ulonglong)(*pcVar4 != '\r') + 1;
  pcVar4 = pcVar3 + 1;
  if (pcVar5 <= pcVar4) goto LAB_14456a1e2;
  goto LAB_14456a120;
}

// <unnamed-type-Content> @ 14456a810

<unnamed_type_Content> * __thiscall
`UE::IoStore::HTTP::HttpTest'::__l2::<unnamed-type-Content>::<unnamed_type_Content>(void *this)

{
  FIoBuffer::FIoBuffer(this);
  *(undefined8 *)((longlong)this + 8) = 0;
  return this;
}

// ~<unnamed-type-Content> @ 14456b930

void __thiscall
`UE::IoStore::HTTP::HttpTest'::__l2::<unnamed-type-Content>::~<unnamed_type_Content>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  this_00 = *(BufCore **)this;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0> @ 14456b9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::HttpTest_::__l37::<lambda_11>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`37'::<lambda_11>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1> @ 14456b9c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::FResponse::GetHeader_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0> @ 14456b9e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0> @ 14456ba00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::FEventLoop::Redirect_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0> @ 14456ba20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::FActivity::Transact_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1> @ 14456ba40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::FEventLoop::Send_::__l5::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::`5'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00014456ba63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0> @ 14456ba70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::ChunkedTest_::__l2::<lambda_2>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_2>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0> @ 14456bad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::HttpTest_::__l2::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0> @ 14456baf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::TlsTest_::__l2::<lambda_2>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::`2'::<lambda_2>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 8);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0> @ 14456bb50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::IasHttpTest_::__l5::<lambda_2>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::`5'::<lambda_2>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1> @ 14456bb70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::RedirectTest_::__l2::<lambda_3>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::`2'::<lambda_3>,0,1>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 8);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1> @ 14456bbd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::ChunkedTest_::__l2::<lambda_4>,0,1>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_4>,0,1>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x18);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0> @ 14456bc30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::HttpTest_::__l2::<lambda_4>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_4>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0> @ 14456bc50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::ChunkedTest_::__l2::<lambda_5>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0> @ 14456bcb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::HTTP::HttpTest_::__l18::<lambda_7>,0,0>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`18'::<lambda_7>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 14456e6c0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::IoStore::HTTP::HttpTest'::__l54::<lambda_13>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e730

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_5>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e7a0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::IoStore::HTTP::HttpTest'::__l54::<lambda_13>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e7e0

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_5>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`37'::<lambda_11>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456e9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::`5'::<lambda_1>,0,1>::_vftable_
  ;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ea00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_2>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ea80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456eac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::`2'::<lambda_2>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 8);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456eb40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::`5'::<lambda_2>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456eb80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::`2'::<lambda_3>,0,1>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 8);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ec00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_4>,0,1>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x18);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ec80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_4>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ecc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14456ed40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`18'::<lambda_7>,0,0>::_vftable_;
  this_00 = *(BufCore **)((longlong)this + 0x10);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Encode64_7bit @ 144572640

int __cdecl LaneTraceDetail::Encode64_7bit(long64 param_1,void *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (param_1 & 0xfffffff0000000U) << 4 | (ulonglong)((uint)param_1 & 0xfffffff);
  iVar2 = (uint)(0xfffffff < param_1) + (uint)(0x3fff < param_1) + (uint)(0x3ffffffffff < param_1) +
          (uint)(0x7f < param_1) + (uint)(0x1fffff < param_1) + (uint)(0x7ffffffff < param_1) +
          (0x1ffffffffffff < param_1) + 1;
  uVar1 = (uVar1 & 0xfffc0000fffc000) << 2 | uVar1 & 0x3fff00003fff;
  *(ulonglong *)param_2 =
       0x80808080808080 >> ((8U - (char)iVar2 & 7) << 3) | (uVar1 & 0x3f803f803f803f80) * 2 |
       uVar1 & 0x7f007f007f007f;
  return iVar2;
}

// LaneEstate_Build @ 144578c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLaneTrace * __cdecl LaneEstate_Build(FLaneEstate *param_1,FLanePostcode param_2)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLaneTrace *pFVar6;
  FEntry *pFVar7;
  FEntry *pFVar8;
  undefined1 local_res8 [8];
  FLaneEstate *local_res18;
  
  lpCriticalSection = &param_1->field_0x30;
  local_res18 = param_1;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = *(int *)&param_1->field_0x60;
  pFVar8 = *(FEntry **)&param_1->field_0x58;
  pFVar7 = pFVar8 + iVar1;
  while( true ) {
    if (*(int *)&param_1->field_0x60 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar8->Postcode == 0) goto LAB_144578cff;
    pFVar8 = pFVar8 + 1;
  }
  uVar2 = *(uint *)&param_1->field_0x60;
  TArray<LaneTraceDetail::FEstate::FEntry,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<LaneTraceDetail::FEstate::FEntry,TSizedDefaultAllocator<32>_> *)
             &param_1->field_0x58,uVar2 + 4,Default);
  uVar5 = 0;
  if ((int)uVar2 < *(int *)&param_1->field_0x60) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FLaneTrace *)(*pcVar3)();
    return pFVar6;
  }
  pFVar8 = (FEntry *)((longlong)(int)uVar2 * 0x10 + *(longlong *)&param_1->field_0x58);
LAB_144578cff:
  pFVar6 = `LaneTraceDetail::FEstate::Build'::__l2::<lambda_1>::operator()
                     (&local_res18,param_2.Value,pFVar8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar6;
}

// LaneEstate_Delete @ 144578d50

void __cdecl LaneEstate_Delete(FLaneEstate *param_1)

{
  if (param_1 != (FLaneEstate *)0x0) {
    LaneTraceDetail::FEstate::~FEstate((FEstate *)param_1);
    operator_delete(param_1,0x68);
  }
  return;
}

// LaneEstate_Demolish @ 144578d80

void __cdecl LaneEstate_Demolish(FLaneEstate *param_1,FLanePostcode param_2)

{
  undefined1 *lpCriticalSection;
  ushort uVar1;
  LARGE_INTEGER *this;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 *puVar6;
  ulong64 *puVar7;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res18 [2];
  
  lpCriticalSection = &param_1->field_0x30;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = *(int *)&param_1->field_0x60;
  puVar6 = *(ulong64 **)&param_1->field_0x58;
  puVar7 = puVar6 + (longlong)iVar5 * 2;
  while( true ) {
    if (*(int *)&param_1->field_0x60 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar6 == puVar7) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                         ,0x22f,L"Invalid/unknown postcode given, unable to demolish estate: %llx");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_144578eb1;
    }
    if (*puVar6 == param_2.Value) break;
    puVar6 = puVar6 + 2;
  }
  this = (LARGE_INTEGER *)puVar6[1];
  QueryPerformanceCounter(local_res18);
  uVar1 = *(ushort *)((longlong)this + 0x24);
  while (uVar1 != 0) {
    if (((ulonglong)local_res18[0] < (ulonglong)*(_struct_19 *)this) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Timestamp >= LastTimestamp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                           ,0xcd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->QuadPart = (LONGLONG)local_res18[0];
    if (*(ushort *)((longlong)this + 0x24) == 0) break;
    uVar2 = this[1].QuadPart;
    this[1].QuadPart = (LONGLONG)local_res18[0];
    iVar5 = LaneTraceDetail::Encode64_7bit((local_res18[0].QuadPart - uVar2) * 2,(void *)this[2]);
    *(ushort *)((longlong)this + 0x24) = *(ushort *)((longlong)this + 0x24) - 1;
    this[2].QuadPart = (LONGLONG)((uchar *)this[2].QuadPart + iVar5);
    uVar1 = *(ushort *)((longlong)this + 0x24);
  }
  LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)&this->s,true);
  *puVar6 = 0;
LAB_144578eb1:
                    /* WARNING: Could not recover jumptable at 0x000144578eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LaneEstate_Lookup @ 144578ee0

FLaneTrace * __cdecl LaneEstate_Lookup(FLaneEstate *param_1,FLanePostcode param_2)

{
  undefined1 *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLaneTrace *pFVar4;
  ulong64 *puVar5;
  ulong64 *puVar6;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &param_1->field_0x30;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = *(int *)&param_1->field_0x60;
  puVar5 = *(ulong64 **)&param_1->field_0x58;
  puVar6 = puVar5 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&param_1->field_0x60 != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<LaneTraceDetail::FEstate::FEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar6) break;
    if (*puVar5 == param_2.Value) {
      pFVar4 = (FLaneTrace *)puVar5[1];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pFVar4;
    }
    puVar5 = puVar5 + 2;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                     ,0x21c,L"Invalid/unknown postcode given, unable to find estate: %llx");
  if (!bVar3) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FLaneTrace *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FLaneTrace *)(*pcVar2)();
  return pFVar4;
}

// LaneEstate_New @ 144578fc0

FLaneEstate * __cdecl LaneEstate_New(FLaneTraceSpec *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FLaneEstate *pFVar4;
  undefined8 *puVar5;
  
  pFVar4 = operator_new(0x68);
  if (pFVar4 != (FLaneEstate *)0x0) {
    iVar3 = (param_1->Name).Size;
    uVar1 = *(undefined4 *)&(param_1->Name).field_0xc;
    *(char **)pFVar4 = (param_1->Name).DataPtr;
    *(int *)&pFVar4->field_0x8 = iVar3;
    *(undefined4 *)&pFVar4->field_0xc = uVar1;
    uVar1 = *(undefined4 *)((longlong)&(param_1->Group).DataPtr + 4);
    iVar3 = (param_1->Group).Size;
    uVar2 = *(undefined4 *)&(param_1->Group).field_0xc;
    *(undefined4 *)&pFVar4->field_0x10 = *(undefined4 *)&(param_1->Group).DataPtr;
    *(undefined4 *)&pFVar4->field_0x14 = uVar1;
    *(int *)&pFVar4->field_0x18 = iVar3;
    *(undefined4 *)&pFVar4->field_0x1c = uVar2;
    uVar1 = *(undefined4 *)((longlong)&param_1->Channel + 4);
    iVar3 = param_1->Weight;
    uVar2 = *(undefined4 *)&param_1->field_0x2c;
    *(undefined4 *)&pFVar4->field_0x20 = *(undefined4 *)&param_1->Channel;
    *(undefined4 *)&pFVar4->field_0x24 = uVar1;
    *(int *)&pFVar4->field_0x28 = iVar3;
    *(undefined4 *)&pFVar4->field_0x2c = uVar2;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar4->field_0x30,4000);
    *(undefined4 *)&pFVar4->field_0x60 = 0;
    *(undefined8 *)&pFVar4->field_0x58 = 0;
    *(undefined4 *)&pFVar4->field_0x64 = 0;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,4,(ForAnyElementType *)&pFVar4->field_0x58,(int *)&pFVar4->field_0x60,
                       (int *)&pFVar4->field_0x64);
    puVar5 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)&pFVar4->field_0x58);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    return pFVar4;
  }
  return (FLaneEstate *)0x0;
}

// LaneTrace_Change @ 144579080

void __cdecl LaneTrace_Change(FLaneTrace *param_1,uint param_2)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  LaneTraceDetail::FScopeBuffer::Leave((FScopeBuffer *)param_1,local_res8.QuadPart);
  LaneTraceDetail::FScopeBuffer::Enter((FScopeBuffer *)param_1,local_res8.QuadPart,param_2);
  LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)param_1,false);
  return;
}

// LaneTrace_Delete @ 1445790e0

void __cdecl LaneTrace_Delete(FLaneTrace *param_1)

{
  if (param_1 != (FLaneTrace *)0x0) {
    LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)param_1,true);
    operator_delete(param_1,0xa8);
  }
  return;
}

// LaneTrace_Enter @ 144579110

void __cdecl LaneTrace_Enter(FLaneTrace *param_1,uint param_2)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  LaneTraceDetail::FScopeBuffer::Enter((FScopeBuffer *)param_1,local_res8.QuadPart,param_2);
  LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)param_1,false);
  return;
}

// LaneTrace_Leave @ 144579160

void __cdecl LaneTrace_Leave(FLaneTrace *param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  LaneTraceDetail::FScopeBuffer::Leave((FScopeBuffer *)param_1,local_res8[0].QuadPart);
  LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)param_1,false);
  return;
}

// LaneTrace_LeaveAll @ 1445791a0

void __cdecl LaneTrace_LeaveAll(FLaneTrace *param_1)

{
  short sVar1;
  LARGE_INTEGER LVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  sVar1 = *(short *)&param_1->field_0x24;
  while (sVar1 != 0) {
    LVar2._0_4_ = *(DWORD *)&param_1->field_0x0;
    LVar2._4_4_ = *(LONG *)&param_1->field_0x4;
    if (((ulonglong)local_res8 < (ulonglong)LVar2) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Timestamp >= LastTimestamp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\LaneTrace.cpp"
                           ,0xcd,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(LARGE_INTEGER *)param_1 = local_res8;
    if (*(short *)&param_1->field_0x24 == 0) break;
    lVar3 = *(longlong *)&param_1->field_0x8;
    *(LARGE_INTEGER *)&param_1->field_0x8 = (LONGLONG)local_res8;
    iVar6 = LaneTraceDetail::Encode64_7bit
                      ((local_res8.QuadPart - lVar3) * 2,*(void **)&param_1->field_0x10);
    *(short *)&param_1->field_0x24 = *(short *)&param_1->field_0x24 + -1;
    *(longlong *)&param_1->field_0x10 = *(longlong *)&param_1->field_0x10 + (longlong)iVar6;
    sVar1 = *(short *)&param_1->field_0x24;
  }
  LaneTraceDetail::FScopeBuffer::Flush((FScopeBuffer *)param_1,true);
  return;
}

// LaneTrace_New @ 144579260

FLaneTrace * __cdecl LaneTrace_New(FLaneTraceSpec *param_1)

{
  void *pvVar1;
  char *_Str;
  uchar *puVar2;
  uint uVar3;
  FLaneTrace *pFVar4;
  longlong lVar6;
  int iVar7;
  FImportantLogScope local_28;
  size_t sVar5;
  
  pFVar4 = operator_new(0xa8);
  if (pFVar4 != (FLaneTrace *)0x0) {
    pvVar1 = param_1->Channel;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)&pFVar4->field_0x8 = 0;
    *(undefined1 **)&pFVar4->field_0x10 = &pFVar4->field_0x26;
    *(void **)&pFVar4->field_0x18 = pvVar1;
    *(undefined4 *)&pFVar4->field_0x20 = 0;
    *(undefined2 *)&pFVar4->field_0x24 = 0;
    LOCK();
    UNLOCK();
    uVar3 = (param_1->Name).Size;
    iVar7 = NextId + 0x801;
    NextId = NextId + 1;
    UE::Trace::Private::FImportantLogScope::Enter<LaneTraceDetail::F_TraceThreadInfoFields>
              (&local_28,uVar3);
    puVar2 = local_28.Ptr;
    *(int *)local_28.Ptr = iVar7;
    *(int *)((longlong)local_28.Ptr + 4) = param_1->Weight;
    _Str = (param_1->Name).DataPtr;
    if ((int)uVar3 < 0) {
      sVar5 = strlen(_Str);
      uVar3 = (uint)sVar5;
    }
    lVar6 = (longlong)local_28.AuxCursor;
    *(uint *)(lVar6 + (longlong)puVar2) = uVar3 << 0xd | 0x200;
    *(undefined1 *)(lVar6 + (longlong)puVar2) = 1;
    memcpy((void *)(lVar6 + 4 + (longlong)puVar2),_Str,(longlong)(int)uVar3);
    *(undefined1 *)((longlong)(int)(local_28.AuxCursor + uVar3) + 4 + (longlong)puVar2) = 3;
    LOCK();
    *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) =
         *(int *)((longlong)local_28.BufferOffset + (longlong)local_28.Ptr) + 1;
    UNLOCK();
    *(int *)&pFVar4->field_0x20 = iVar7;
    return pFVar4;
  }
  return (FLaneTrace *)0x0;
}

// LaneTrace_NewScope @ 144579390

uint __cdecl LaneTrace_NewScope(TStringView<char> *param_1)

{
  uint uVar1;
  
  uVar1 = FCpuProfilerTrace::OutputEventType(param_1->DataPtr,"",0);
  return uVar1;
}

// `dynamic_atexit_destructor_for_'CVar_IasIdleMs'' @ 15036c950

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__CVar_IasIdleMs__(void)

{
  CVar_IasIdleMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasIdleMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasRecvWorkThresholdKiB'' @ 15036c970

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__CVar_IasRecvWorkThresholdKiB__(void)

{
  CVar_IasRecvWorkThresholdKiB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasRecvWorkThresholdKiB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasSocksIp'' @ 15036c990

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__CVar_IasSocksIp__(void)

{
  CVar_IasSocksIp._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasSocksIp);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasSocksPort'' @ 15036c9b0

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__CVar_IasSocksPort__(void)

{
  CVar_IasSocksPort._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasSocksPort);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasSocksVersion'' @ 15036c9d0

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__CVar_IasSocksVersion__(void)

{
  CVar_IasSocksVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasSocksVersion);
  return;
}

// `dynamic_atexit_destructor_for_'GDefaultCertRoots'' @ 15036c9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__GDefaultCertRoots__(void)

{
  int *piVar1;
  int iVar2;
  FCertRoots FVar3;
  
  FVar3.Handle = GDefaultCertRoots.Handle;
  if (GDefaultCertRoots.Handle != 0) {
    if (GDefaultCertRoots.Handle != 0) {
      LOCK();
      piVar1 = (int *)(GDefaultCertRoots.Handle + 0x94);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 2) {
        X509_VERIFY_PARAM_free(*(undefined8 *)(FVar3.Handle + 0x198));
        CRYPTO_free(*(undefined8 *)(FVar3.Handle + 0x358),"ssl\\ssl_lib.c",0xae);
        *(undefined8 *)(FVar3.Handle + 0x358) = 0;
        CRYPTO_free(*(undefined8 *)(FVar3.Handle + 0x360),"ssl\\ssl_lib.c",0xb1);
        *(undefined8 *)(FVar3.Handle + 0x360) = 0;
        *(undefined1 *)(FVar3.Handle + 0x368) = 0;
        if (*(longlong *)(FVar3.Handle + 0x28) != 0) {
          SSL_CTX_flush_sessions(FVar3.Handle,0);
        }
        CRYPTO_free_ex_data(1,FVar3.Handle,FVar3.Handle + 0xe0);
        OPENSSL_LH_free(*(undefined8 *)(FVar3.Handle + 0x28));
        X509_STORE_free(*(undefined8 *)(FVar3.Handle + 0x20));
        CTLOG_STORE_free(*(undefined8 *)(FVar3.Handle + 0x1a8));
        OPENSSL_sk_free(*(undefined8 *)(FVar3.Handle + 8));
        OPENSSL_sk_free(*(undefined8 *)(FVar3.Handle + 0x10));
        OPENSSL_sk_free(*(undefined8 *)(FVar3.Handle + 0x18));
        ssl_cert_free(*(undefined8 *)(FVar3.Handle + 0x138));
        OPENSSL_sk_pop_free(*(undefined8 *)(FVar3.Handle + 0x110),X509_NAME_free);
        OPENSSL_sk_pop_free(*(undefined8 *)(FVar3.Handle + 0x118),X509_NAME_free);
        OPENSSL_sk_pop_free(*(undefined8 *)(FVar3.Handle + 0xf8),X509_free);
        *(undefined8 *)(FVar3.Handle + 0x100) = 0;
        OPENSSL_sk_free(*(undefined8 *)(FVar3.Handle + 0x370));
        SSL_CTX_SRP_CTX_free(FVar3.Handle);
        ENGINE_finish(*(undefined8 *)(FVar3.Handle + 0x1e0));
        CRYPTO_free(*(undefined8 *)(FVar3.Handle + 0x248),"ssl\\ssl_lib.c",0xcd5);
        CRYPTO_free(*(undefined8 *)(FVar3.Handle + 600),"ssl\\ssl_lib.c",0xcd6);
        CRYPTO_free(*(undefined8 *)(FVar3.Handle + 0x270),"ssl\\ssl_lib.c",0xcd8);
        CRYPTO_secure_free(*(undefined8 *)(FVar3.Handle + 0x218),"ssl\\ssl_lib.c",0xcd9);
        CRYPTO_THREAD_lock_free(*(undefined8 *)(FVar3.Handle + 0x380));
        CRYPTO_free(FVar3.Handle,"ssl\\ssl_lib.c",0xcdd);
      }
    }
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GSocksIp'' @ 15036ca10

void __cdecl UE::IoStore::HTTP::_dynamic_atexit_destructor_for__GSocksIp__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSocksIp.Data.AllocatorInstance.Data;
  if (GSocksIp.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSocksIp.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Statics'' @ 15036ca30

void __cdecl
`UE::IoStore::HTTP::DetailTwo::FDriverNg::FDriverNg'::__l2::
_dynamic_atexit_destructor_for__Statics__(void)

{
  nghttp2_session_callbacks_del(Statics.Instance);
  return;
}

