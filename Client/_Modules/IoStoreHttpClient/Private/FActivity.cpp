// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 29

// FActivity @ 14456a840

FActivity * __thiscall UE::IoStore::HTTP::FActivity::FActivity(FActivity *this,FParams *param_1)

{
  FBuffer *this_00;
  ushort uVar1;
  FHost *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  char *_Src;
  bool bVar5;
  FActivity *pFVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  
  this_00 = &this->Buffer;
  this->State = Build;
  bVar5 = param_1->bAllowChunked;
  this->HeaderCount = 0;
  this->TransactId = 0;
  this->field_0x1 = this->field_0x1 ^ (this->bAllowChunked ^ bVar5) & 1;
  (this->Stopwatch).Samples[0] = 0;
  (this->Stopwatch).Samples[1] = 0;
  (this->Stopwatch).Samples[2] = 0;
  (this->Stopwatch).Samples[3] = 0;
  (this->Stopwatch).Counts[0] = 0;
  (this->Stopwatch).Counts[1] = 0;
  pFVar2 = param_1->Host;
  (this->field14_0x38).Host = pFVar2;
  *(undefined8 *)&this->Sink = 0;
  *(undefined8 *)&(this->Sink).field_0x28 = 0;
  (this->Transaction).Self = 0;
  uVar1 = param_1->BufferSize;
  this_00->Data = (ulong64)param_1->Buffer;
  (this->Buffer).Max = (uint)uVar1;
  (this->Buffer).field2_0xc.UsedInline = 0x80000000;
  if (pFVar2 == (FHost *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Host != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xb0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  if ((param_1->Path).Size == 0) {
    local_58 = 0x50645db4;
    uStack_54 = 1;
    uVar11 = 1;
  }
  else {
    local_58 = *(undefined4 *)&(param_1->Path).DataPtr;
    uStack_54 = *(undefined4 *)((longlong)&(param_1->Path).DataPtr + 4);
    uVar11 = (param_1->Path).Size;
  }
  if ((int)uVar11 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (*(char *)CONCAT44(uStack_54,local_58) != '/') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Path[0] == \'/\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xb4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  uVar3 = *(ulonglong *)&(param_1->Method).Size;
  _Src = (param_1->Method).DataPtr;
  uVar10 = ((this->Buffer).field2_0xc.UsedInline & 0x7fffffff) + (int)uVar3;
  if ((this->Buffer).Max < uVar10) {
    FBuffer::Extend(this_00,uVar10,0x100);
  }
  uVar8 = (this->Buffer).field2_0xc.UsedInline;
  pvVar9 = (void *)((ulonglong)(uVar8 & 0x7fffffff) + this_00->Data);
  (this->Buffer).field2_0xc.UsedInline = (uVar8 ^ uVar10) & 0x7fffffff ^ uVar8;
  memcpy(pvVar9,_Src,uVar3 & 0xffffffff);
  uVar10 = (int)pvVar9 - (int)this_00->Data;
  if (0xff < uVar10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret <= 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xbc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->MethodOffset = (uchar)uVar10;
  uVar10 = ((this->Buffer).field2_0xc.UsedInline & 0x7fffffff) + uVar11;
  if ((this->Buffer).Max < uVar10) {
    FBuffer::Extend(this_00,uVar10,0x100);
  }
  uVar8 = (this->Buffer).field2_0xc.UsedInline;
  pvVar9 = (void *)((ulonglong)(uVar8 & 0x7fffffff) + this_00->Data);
  (this->Buffer).field2_0xc.UsedInline = (uVar8 ^ uVar10) & 0x7fffffff ^ uVar8;
  memcpy(pvVar9,(char *)CONCAT44(uStack_54,local_58),(ulonglong)uVar11);
  uVar10 = (int)pvVar9 - (int)this_00->Data;
  if (0xff < uVar10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret <= 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xbc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->PathOffset = (uchar)uVar10;
  this->PathLength = (ushort)uVar11;
  uVar10 = param_1->ContentSizeEst + 0x3ff >> 10;
  uVar11 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> uVar11 == 0; uVar11 = uVar11 - 1) {
    }
  }
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = uVar11;
  }
  this->LengthScore = '\0';
  cVar7 = '\x0f';
  if (uVar8 < 0xf) {
    cVar7 = (char)uVar8;
  }
  this->field_0x1 = this->field_0x1 | cVar7 << 4;
  return this;
}

// operator() @ 14456cc30

bool __thiscall
`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>::operator()
          (void *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FRequest *this_00;
  longlong lVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  TStringView<char> local_58;
  TStringView<char> local_48;
  char *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  
  pcVar6 = param_2->DataPtr;
  uVar7._0_4_ = param_2->Size;
  uVar7._4_4_ = *(undefined4 *)&param_2->field_0xc;
  pcVar5 = param_1->DataPtr;
  local_48.Size = param_1->Size;
  local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FRequest **)(*(longlong *)this + 0x80);
  if (((ulonglong)this_00 & 1) == 0) {
    local_58.DataPtr = pcVar6;
    local_58._8_8_ = uVar7;
    local_48.DataPtr = pcVar5;
    UE::IoStore::HTTP::DetailOne::FRequest::AddHeader(this_00,&local_48,&local_58);
    return true;
  }
  uVar13 = (ulonglong)this_00 ^ 1;
  iVar11 = (int)*(undefined8 *)&param_1->Size;
  if (iVar11 != 0) {
    iVar10 = FGenericPlatformStricmp::Strnicmp(pcVar5,"connection",(longlong)iVar11);
    if (((iVar10 == 0) && ("connection"[iVar11] == '\0')) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Key.Equals(\"connection\", ESearchCase::IgnoreCase)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionTwo.inl"
                           ,0x283,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
  }
  local_68 = SUB84(pcVar6,0);
  uStack_64 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  local_28 = (longlong)iVar11;
  uStack_30 = local_68;
  uStack_2c = uStack_64;
  local_18 = 6;
  lStack_20 = (longlong)(int)uVar7;
  local_38 = pcVar5;
  if (((*(char ***)(uVar13 + 8) <= &local_38) &&
      (&local_38 < *(char ***)(uVar13 + 8) + (longlong)*(int *)(uVar13 + 0x14) * 5)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  iVar11 = *(int *)(uVar13 + 0x10);
  if (iVar11 == *(int *)(uVar13 + 0x14)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)(uVar13 + 8),(int *)(uVar13 + 0x14));
  }
  *(int *)(uVar13 + 0x10) = iVar11 + 1;
  lVar12 = (longlong)iVar11;
  lVar3 = *(longlong *)(uVar13 + 8);
  puVar1 = (undefined8 *)(lVar3 + lVar12 * 0x28);
  *puVar1 = local_38;
  puVar1[1] = CONCAT44(uStack_2c,uStack_30);
  plVar2 = (longlong *)(lVar3 + 0x10 + lVar12 * 0x28);
  *plVar2 = local_28;
  plVar2[1] = lStack_20;
  *(ulonglong *)(lVar3 + 0x20 + lVar12 * 0x28) = CONCAT71(uStack_17,local_18);
  return true;
}

// AddHeader @ 14456f100

void __thiscall
UE::IoStore::HTTP::FActivity::AddHeader
          (FActivity *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  int iVar1;
  int iVar2;
  char *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FBuffer *this_00;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  
  if (this->State != Build) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::Build",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->HeaderCount == 0xffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderCount < 0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->HeaderCount = this->HeaderCount + 1;
  iVar1 = param_2->Size;
  this_00 = &this->Buffer;
  iVar2 = param_1->Size;
  uVar6 = (this->Buffer).field2_0xc.UsedInline;
  uVar5 = (int)this_00->Data + uVar6 & 1;
  uVar7 = 2 - uVar5;
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  uVar6 = uVar7 + (uVar6 & 0x7fffffff) + (iVar1 + iVar2 + 5U & 0xfffffffe);
  if ((this->Buffer).Max < uVar6) {
    FBuffer::Extend(this_00,uVar6,0x100);
  }
  uVar5 = (this->Buffer).field2_0xc.UsedInline;
  puVar8 = (undefined2 *)((ulonglong)uVar7 + (ulonglong)(uVar5 & 0x7fffffff) + this_00->Data);
  _Src = param_1->DataPtr;
  (this->Buffer).field2_0xc.UsedInline = (uVar5 ^ uVar6) & 0x7fffffff ^ uVar5;
  *puVar8 = (short)iVar2;
  puVar8[1] = (short)iVar1;
  memcpy(puVar8 + 2,_Src,(longlong)iVar2);
  memcpy((void *)((longlong)iVar2 + (longlong)(puVar8 + 2)),param_2->DataPtr,(longlong)iVar1);
  return;
}

// CallSink @ 14456fcf0

void __thiscall UE::IoStore::HTTP::FActivity::CallSink(FActivity *this)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  FScopeBuffer *this_00;
  undefined8 uVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Scope = FCpuProfilerTrace::OutputEventType("Iax/Sink","",0);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
  uVar3 = Scope;
  QueryPerformanceCounter(&local_res8);
  LaneTraceDetail::FScopeBuffer::Enter(this_00,local_res8.QuadPart,uVar3);
  LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
  Core::Private::Function::CheckCallable(*(void **)&this->Sink);
  plVar1 = *(longlong **)&(this->Sink).field_0x28;
  pcVar2 = *(code **)&this->Sink;
  plVar5 = (longlong *)&(this->Sink).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,this);
  if (this_00 != (FScopeBuffer *)0x0) {
    QueryPerformanceCounter(&local_res8);
    LaneTraceDetail::FScopeBuffer::Leave(this_00,local_res8.QuadPart);
    LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
  }
  return;
}

// Cancel @ 14456fe20

void __thiscall UE::IoStore::HTTP::FActivity::Cancel(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScopeBuffer *this_00;
  TStringView<char> *pTVar4;
  uint *puVar5;
  LARGE_INTEGER local_28 [2];
  
  if (RecvDone < this->State) {
    return;
  }
  this_00 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
  if (StateScopes[0] == 0) {
    pTVar4 = StateNames;
    puVar5 = StateScopes;
    do {
      uVar3 = FCpuProfilerTrace::OutputEventType(pTVar4->DataPtr,"",0);
      pTVar4 = pTVar4 + 1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (pTVar4 != (TStringView<char> *)"Iax/Build");
  }
  uVar3 = StateScopes[7];
  QueryPerformanceCounter(local_28);
  LaneTraceDetail::FScopeBuffer::Leave(this_00,local_28[0].QuadPart);
  LaneTraceDetail::FScopeBuffer::Enter(this_00,local_28[0].QuadPart,uVar3);
  LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
  if ((this->State == Cancelled) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x115,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->State = Cancelled;
  CallSink(this);
  return;
}

// ChangeState @ 14456ffc0

void __thiscall UE::IoStore::HTTP::FActivity::ChangeState(FActivity *this,EState param_1)

{
  code *pcVar1;
  bool bVar2;
  
  Trace(this,StateChange,(uint)param_1);
  if (this->State == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State != InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->State = param_1;
  return;
}

// Done @ 144572490

void __thiscall UE::IoStore::HTTP::FActivity::Done(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScopeBuffer *pFVar4;
  TStringView<char> *pTVar5;
  TStringView<char> *pTVar6;
  uint *puVar7;
  uint *puVar8;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  
  pFVar4 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
  pTVar6 = StateNames;
  puVar8 = StateScopes;
  if (StateScopes[0] == 0) {
    pTVar5 = StateNames;
    puVar7 = StateScopes;
    do {
      uVar3 = FCpuProfilerTrace::OutputEventType(pTVar5->DataPtr,"",0);
      pTVar5 = pTVar5 + 1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
    } while (pTVar5 != (TStringView<char> *)"Iax/Build");
  }
  uVar3 = StateScopes[5];
  QueryPerformanceCounter(&local_38);
  LaneTraceDetail::FScopeBuffer::Leave(pFVar4,local_38.QuadPart);
  LaneTraceDetail::FScopeBuffer::Enter(pFVar4,local_38.QuadPart,uVar3);
  LaneTraceDetail::FScopeBuffer::Flush(pFVar4,false);
  if ((this->State == RecvDone) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x115,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->State = RecvDone;
  CallSink(this);
  pFVar4 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
  if (StateScopes[0] == 0) {
    do {
      uVar3 = FCpuProfilerTrace::OutputEventType(pTVar6->DataPtr,"",0);
      pTVar6 = pTVar6 + 1;
      *puVar8 = uVar3;
      puVar8 = puVar8 + 1;
    } while (pTVar6 != (TStringView<char> *)"Iax/Build");
  }
  uVar3 = StateScopes[6];
  QueryPerformanceCounter(&local_30);
  LaneTraceDetail::FScopeBuffer::Leave(pFVar4,local_30.QuadPart);
  LaneTraceDetail::FScopeBuffer::Enter(pFVar4,local_30.QuadPart,uVar3);
  LaneTraceDetail::FScopeBuffer::Flush(pFVar4,false);
  if ((this->State == Completed) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x115,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->State = Completed;
  return;
}

// EnumerateHeaders @ 144572a00

void __thiscall
UE::IoStore::HTTP::FActivity::EnumerateHeaders
          (FActivity *this,TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  short *local_38;
  undefined8 uStack_30;
  
  lVar6 = (ulonglong)this->PathLength + (ulonglong)this->PathOffset;
  if (this->HeaderCount != 0) {
    uVar5 = (ulonglong)this->HeaderCount;
    do {
      uVar7 = lVar6 + 1U & 0xfffffffffffffffe;
      psVar4 = (short *)((this->Buffer).Data + uVar7);
      local_38 = psVar4 + 2;
      uStack_30 = CONCAT44(uStack_4c,(int)*psVar4);
      local_48 = (longlong)psVar4 + (longlong)*psVar4 + 4;
      uStack_40 = CONCAT44(uStack_5c,(uint)(ushort)psVar4[1]);
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar3 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar3 = (longlong *)&param_1->field_0x10;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_38,&local_48);
      lVar6 = (ulonglong)(ushort)psVar4[1] + 4 + (longlong)*psVar4 + uVar7;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// Fail @ 144572e60

void __thiscall UE::IoStore::HTTP::FActivity::Fail(FActivity *this,FOutcome *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScopeBuffer *this_00;
  TStringView<char> *pTVar4;
  uint *puVar5;
  LARGE_INTEGER local_28 [2];
  
  if (this->State == Failed) {
    return;
  }
  this->field14_0x38 = *(FActivity_u_56 *)&param_1->field0_0x0;
  this_00 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
  if (StateScopes[0] == 0) {
    pTVar4 = StateNames;
    puVar5 = StateScopes;
    do {
      uVar3 = FCpuProfilerTrace::OutputEventType(pTVar4->DataPtr,"",0);
      pTVar4 = pTVar4 + 1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (pTVar4 != (TStringView<char> *)"Iax/Build");
  }
  uVar3 = StateScopes[8];
  QueryPerformanceCounter(local_28);
  LaneTraceDetail::FScopeBuffer::Leave(this_00,local_28[0].QuadPart);
  LaneTraceDetail::FScopeBuffer::Enter(this_00,local_28[0].QuadPart,uVar3);
  LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
  if ((this->State == Failed) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State != InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x115,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->State = Failed;
  CallSink(this);
  return;
}

// GetContent @ 144573720

FIoBuffer * __thiscall UE::IoStore::HTTP::FActivity::GetContent(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  FIoBuffer *pFVar3;
  
  if ((this->State != RecvContent) && (this->State != RecvStream)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::RecvContent || State == EState::RecvStream",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x173,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoBuffer *)(*pcVar1)();
      return pFVar3;
    }
    return (FIoBuffer *)(this->field14_0x38).Host;
  }
  return (FIoBuffer *)(this->field14_0x38).Host;
}

// GetError @ 144573ed0

FOutcome __thiscall UE::IoStore::HTTP::FActivity::GetError(FActivity *this)

{
  FOutcome_u_0 in_RDX;
  
  *(ulonglong *)in_RDX = *(ulonglong *)in_RDX & 0xffff000000000000 ^ 0x15060d4b2;
  *(undefined2 *)((longlong)in_RDX + 6) = 0xffff;
  *(FActivity_u_56 *)in_RDX = this->field14_0x38;
  return (FOutcome)in_RDX;
}

// GetHost @ 144574110

FHost * __thiscall UE::IoStore::HTTP::FActivity::GetHost(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  FHost *pFVar3;
  
  if (this->State < RecvStream) {
    return (this->field14_0x38).Host;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("State <= EState::RecvMessage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                     ,0x155,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FHost *)(*pcVar1)();
    return pFVar3;
  }
  return (this->field14_0x38).Host;
}

// GetMethod @ 1445742a0

TStringView<char> * __thiscall
UE::IoStore::HTTP::FActivity::GetMethod(FActivity *this,TStringView<char> *__return_storage_ptr__)

{
  byte bVar1;
  
  bVar1 = this->MethodOffset;
  __return_storage_ptr__->DataPtr = (char *)((ulonglong)bVar1 + (this->Buffer).Data);
  __return_storage_ptr__->Size = (uint)this->PathOffset - (uint)bVar1;
  return __return_storage_ptr__;
}

// GetPath @ 1445743c0

TStringView<char> * __thiscall
UE::IoStore::HTTP::FActivity::GetPath(FActivity *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (char *)((ulonglong)this->PathOffset + (this->Buffer).Data);
  __return_storage_ptr__->Size = (uint)this->PathLength;
  return __return_storage_ptr__;
}

// GetRemainingKiB @ 144574560

uint __thiscall UE::IoStore::HTTP::FActivity::GetRemainingKiB(FActivity *this)

{
  ulonglong uVar1;
  FTransactRef *pFVar2;
  
  if (this->State < RecvContent) {
    return 0xffffffff;
  }
  if (RecvContent < this->State) {
    return 0;
  }
  pFVar2 = GetTransaction(this);
  uVar1 = pFVar2->Self;
  if ((uVar1 & 1) != 0) {
    return (uint)(*(longlong *)((uVar1 ^ 1) + 0x40) >> 10);
  }
  if (*(char *)(uVar1 + 0x158) == '\x01') {
    return (uint)(*(longlong *)(uVar1 + 0x150) >> 10);
  }
  return 0xffffffff;
}

// GetSinkParam @ 1445747c0

ulong64 __thiscall UE::IoStore::HTTP::FActivity::GetSinkParam(FActivity *this)

{
  return this->SinkParam;
}

// GetStage @ 1445747f0

EStage __thiscall UE::IoStore::HTTP::FActivity::GetStage(FActivity *this)

{
  switch(this->State) {
  case Build:
    return Build;
  case Send:
  case RecvMessage:
    return Response;
  case RecvStream:
  case RecvContent:
  case RecvDone:
    return Content;
  case Completed:
    return Done;
  case Cancelled:
    return Cancelled;
  default:
    return Failed;
  }
}

// GetStopwatch @ 144574b30

FStopwatch * __thiscall UE::IoStore::HTTP::FActivity::GetStopwatch(FActivity *this)

{
  return &this->Stopwatch;
}

// GetTransactId @ 144574b60

uint __thiscall UE::IoStore::HTTP::FActivity::GetTransactId(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->TransactId != 0) {
    return this->TransactId;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TransactId != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                     ,0x13a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return this->TransactId;
}

// GetTransaction @ 144574c30

FTransactRef * __thiscall UE::IoStore::HTTP::FActivity::GetTransaction(FActivity *this)

{
  code *pcVar1;
  bool bVar2;
  FTransactRef *pFVar3;
  
  if ((this->State == Build) || (Completed < this->State)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State >= EState::Send && State <= EState::Completed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x141,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTransactRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->Transaction).Self == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Transaction.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x142,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTransactRef *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->Transaction;
}

// Recv @ 14457d0b0

FOutcome __thiscall
UE::IoStore::HTTP::FActivity::Recv(FActivity *this,FHttpPeer *param_1,int *param_2)

{
  EState EVar1;
  code *pcVar2;
  bool bVar3;
  FOutcome FVar4;
  
  if ((this->State < RecvMessage) || (RecvContent < this->State)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State >= EState::RecvMessage && State < EState::RecvDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x276,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar4.field0_0x0;
    }
  }
  EVar1 = this->State;
  if (EVar1 == RecvMessage) {
    RecvMessage(this,param_1);
  }
  else if (EVar1 == RecvContent) {
    RecvContent(this,param_1,param_2);
  }
  else if (EVar1 == RecvStream) {
    RecvStream(this,param_1,param_2);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                       ,0x27c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar4.field0_0x0;
    }
    param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d73148;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// RecvContent @ 14457dab0

FOutcome __thiscall
UE::IoStore::HTTP::FActivity::RecvContent(FActivity *this,FHttpPeer *param_1,int *param_2)

{
  ulonglong *puVar1;
  FBody *this_00;
  longlong *plVar2;
  ssl_st *psVar3;
  ulonglong uVar4;
  ssl_st *psVar5;
  int *in_R9;
  undefined8 *puVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  FTlsPeer local_38;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId549,"IasHttp::DoRecvContent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
               ,0x225);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId549);
  }
  this_00 = (FBody *)(this->Transaction).Self;
  if (((ulonglong)this_00 & 1) == 0) {
    if (this_00->State == Recv) {
      psVar5 = (ssl_st *)this_00->Remaining;
    }
    else {
      psVar5 = (ssl_st *)0xffffffffffffffff;
    }
  }
  else {
    psVar5 = *(ssl_st **)(((ulonglong)this_00 ^ 1) + 0x40);
  }
  puVar6 = (undefined8 *)((ulonglong)this_00 ^ 1);
  plVar2 = (longlong *)((this->field14_0x38).Host)->VerifyCert;
  local_38._padding_ = (longlong)CONCAT14((char)plVar2[3],(int)plVar2[1]);
  if ((ulonglong)local_38._padding_ < psVar5) {
    psVar5 = (ssl_st *)local_38._padding_;
  }
  local_38._padding_ = local_38._padding_ + (*plVar2 - (longlong)psVar5);
  local_38.Ssl = (ssl_st *)(longlong)*in_R9;
  if (psVar5 < (ssl_st *)(longlong)*in_R9) {
    local_38.Ssl = psVar5;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    DetailOne::FBody::TryRecv(this_00,(TMemoryView<void> *)&local_res8.s,&local_38);
    uVar4 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
  }
  else {
    psVar5 = (ssl_st *)puVar6[6];
    puVar1 = puVar6 + 8;
    psVar3 = local_38.Ssl;
    if (-1 < (longlong)psVar5) {
      psVar3 = (ssl_st *)*puVar1;
      if ((longlong)*puVar1 < 0) {
        *puVar1 = (ulonglong)psVar5;
        psVar3 = psVar5;
      }
      if (local_38.Ssl < psVar3) {
        psVar3 = local_38.Ssl;
      }
    }
    local_38.Ssl = psVar3;
    DetailTwo::FDriverNg::RecvBody
              ((FDriverNg *)*puVar6,(FTlsPeer *)&local_res8.s,(TMemoryView<void> *)param_2);
    uVar4 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
    if (0x7fffffffffff < (uVar4 & 0xffffffffffff)) {
      *puVar1 = *puVar1 - (ulonglong)local_res8.s.LowPart;
    }
  }
  if ((uVar4 & 0xffffffffffff) < 0x800000000000) {
    Fail(this,(FOutcome *)&local_res8.s);
  }
  else {
    *in_R9 = *in_R9 - (int)uVar4;
    if ((local_res8.s.HighPart & 0x18000U) != 0x18000) {
      if ((this->Stopwatch).Samples[3] == 0) {
        QueryPerformanceCounter(&local_res8);
        (this->Stopwatch).Samples[3] = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
      }
      Done(this);
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
      *(undefined4 *)&param_1->_padding_ = 0xfffffffc;
      goto LAB_14457dc9a;
    }
  }
  param_1->_padding_ = uVar4;
LAB_14457dc9a:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// RecvMessage @ 14457e240

FOutcome __thiscall UE::IoStore::HTTP::FActivity::RecvMessage(FActivity *this,FHttpPeer *param_1)

{
  uint *puVar1;
  int *piVar2;
  FStatusHeaders *this_00;
  FHost *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FOutcome FVar8;
  FIoBuffer *pFVar9;
  byte bVar10;
  char *pcVar11;
  ulong64 uVar12;
  FIoBuffer this_01;
  byte bVar13;
  byte bVar14;
  ulonglong uVar15;
  bool bVar16;
  FOutcome_u_0 local_res20;
  LARGE_INTEGER local_58;
  FIoBuffer local_50;
  FIoBuffer local_48 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId458,"IasHttp::DoRecvMessage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
               ,0x1ca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId458);
  }
  Trace(this,StateChange,(uint)this->State);
  if ((this->Stopwatch).Samples[2] == 0) {
    QueryPerformanceCounter(&local_58);
    *(LARGE_INTEGER *)((this->Stopwatch).Samples + 2) = local_58;
  }
  puVar1 = (this->Stopwatch).Counts + 1;
  *puVar1 = *puVar1 + 1;
  this_00 = (FStatusHeaders *)(this->Transaction).Self;
  if (((ulonglong)this_00 & 1) == 0) {
    DetailOne::FStatusHeaders::TryRecvResponse(this_00,(FTlsPeer *)&local_res20._s_0);
  }
  else {
    DetailTwo::FStatusHeaders::TryRecvResponse
              ((FStatusHeaders *)((ulonglong)this_00 ^ 1),(FTlsPeer *)&local_res20._s_0);
  }
  if (((ulonglong)local_res20 & 0xffffffffffff) < 0x800000000000) {
    Fail(this,(FOutcome *)&local_res20._s_0);
LAB_14457e327:
    param_1->_padding_ = (longlong)local_res20;
    if (!bVar16) {
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if ((local_res20._s_1.Tag & 0x18000) == 0x18000) goto LAB_14457e327;
  if ((local_res20._s_1.Tag != 0x8000) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Outcome.IsOk()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x1dd,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
    return (FOutcome)FVar8.field0_0x0;
  }
  uVar15 = (this->Transaction).Self;
  if ((uVar15 & 1) == 0) {
    if ((*(short *)(uVar15 + 0x126) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MessageRight > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x155,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    bVar13 = *(byte *)(uVar15 + 0x12a) >> 1 & 1;
  }
  else {
    bVar13 = (byte)((ulonglong)*(undefined8 *)((uVar15 ^ 1) + 0x30) >> 0x3f);
  }
  uVar15 = (this->Transaction).Self;
  if ((uVar15 & 1) == 0) {
    if ((*(short *)(uVar15 + 0x122) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offsets.Headers > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x14e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    uVar15 = *(ulonglong *)(uVar15 + 0x118);
  }
  else {
    uVar15 = *(ulonglong *)((uVar15 ^ 1) + 0x30);
  }
  if (bVar13 == 0) {
    if ((longlong)uVar15 < 0) {
      pcVar11 = "Invalid content length";
      goto LAB_14457e45a;
    }
  }
  else if (this->bAllowChunked == 0) {
    pcVar11 = "Chunked transfer encoding disabled (ERRNOCHUNK)";
LAB_14457e45a:
    local_res20 = (FOutcome_u_0)((ulonglong)pcVar11 | 0xffff000000000000);
    Fail(this,(FOutcome *)&local_res20._s_0);
    param_1->_padding_ = (ulonglong)pcVar11 | 0xffff000000000000;
    if (!bVar16) {
      return (FOutcome)(FOutcome_u_0)param_1;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  pFVar3 = (this->field14_0x38).Host;
  CallSink(this);
  bVar14 = this->MethodOffset;
  if ((uint)this->PathOffset == (uint)bVar14) {
LAB_14457e4ed:
    bVar14 = 1;
  }
  else {
    uVar12 = (ulonglong)(uint)this->PathOffset - (longlong)(int)(uint)bVar14;
    iVar7 = FGenericPlatformStricmp::Strnicmp
                      ((char *)((ulonglong)(uint)bVar14 + (this->Buffer).Data),"HEAD",uVar12);
    if ((iVar7 != 0) || ("HEAD"[uVar12] != '\0')) goto LAB_14457e4ed;
    bVar14 = 0;
  }
  uVar4 = (this->Transaction).Self;
  if ((uVar4 & 1) == 0) {
    if ((*(short *)(uVar4 + 0x126) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MessageRight > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x155,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    bVar10 = *(byte *)(uVar4 + 0x12a) >> 1;
  }
  else {
    bVar10 = (byte)((ulonglong)*(undefined8 *)((uVar4 ^ 1) + 0x30) >> 0x3f);
  }
  if ((bVar14 & (0 < (longlong)uVar15 | bVar10)) == 0) {
    ChangeState(this,RecvDone);
    *(undefined4 *)&param_1->_padding_ = 0xfffffffc;
  }
  else {
    if ((this->field14_0x38).Host == pFVar3) {
      pcVar11 = "User did not provide a destination buffer";
LAB_14457e57b:
      local_res20 = (FOutcome_u_0)((ulonglong)pcVar11 | 0xffff000000000000);
      Fail(this,(FOutcome *)&local_res20._s_0);
      param_1->_padding_ = (ulonglong)pcVar11 | 0xffff000000000000;
      goto LAB_14457e696;
    }
    iVar7 = *(int *)(((this->field14_0x38).Host)->VerifyCert + 8);
    if (iVar7 == 0) {
      uVar12 = uVar15 & 0xffffffff;
      if (bVar13 != 0) {
        uVar12 = 0x1000;
      }
      pFVar9 = FIoBuffer::FIoBuffer(&local_50,uVar12);
      FIoBuffer::operator=((this->field14_0x38).Dest,pFVar9);
      this_01.CorePtr.Reference = local_50.CorePtr.Reference;
LAB_14457e61a:
      if (this_01.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
        LOCK();
        piVar2 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
          ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
        }
      }
    }
    else if (bVar13 == 0) {
      if ((longlong)iVar7 < (longlong)uVar15) {
        pcVar11 = "Destination buffer too small";
        goto LAB_14457e57b;
      }
    }
    else if (iVar7 < 0x100) {
      pFVar9 = FIoBuffer::FIoBuffer(local_48,0x100);
      FIoBuffer::operator=((this->field14_0x38).Dest,pFVar9);
      this_01.CorePtr.Reference = local_48[0].CorePtr.Reference;
      goto LAB_14457e61a;
    }
    if (((this->field14_0x38).Host == (FHost *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x21c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar5)();
      return (FOutcome)FVar8.field0_0x0;
    }
    ChangeState(this,(bVar13 ^ 1) + RecvStream);
    *(undefined4 *)&param_1->_padding_ = 0xfffffffd;
  }
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
LAB_14457e696:
  if (!bVar16) {
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return (FOutcome)(FOutcome_u_0)param_1;
}

// RecvStream @ 14457e870

FOutcome __thiscall
UE::IoStore::HTTP::FActivity::RecvStream(FActivity *this,FHttpPeer *param_1,int *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  FBody *this_00;
  FHost *pFVar3;
  BufCore *pBVar4;
  TRefCountPtr<FIoBuffer::BufCore> TVar5;
  code *pcVar6;
  FIoBuffer this_01;
  bool bVar7;
  ulonglong uVar8;
  FOutcome FVar9;
  FIoBuffer *pFVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int *in_R9;
  bool bVar15;
  LARGE_INTEGER local_res8;
  FOutcome_u_0 local_res20;
  FIoBuffer local_98 [2];
  FIoBuffer local_88;
  undefined8 uStack_80;
  BufCore *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  FTlsPeer local_58;
  TMemoryView<void_const_> local_48;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId581,"IasHttp::DoRecvStream",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
               ,0x245);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId581);
  }
  puVar11 = (undefined8 *)((this->field14_0x38).Host)->VerifyCert;
  local_78 = (BufCore *)*puVar11;
  uStack_70 = (ulonglong)CONCAT14(*(undefined1 *)(puVar11 + 3),*(undefined4 *)(puVar11 + 1));
  iVar13 = *in_R9;
  uVar14 = (longlong)iVar13;
  if (uStack_70 < (ulonglong)(longlong)iVar13) {
    uVar14 = uStack_70;
  }
  uStack_80._0_4_ = (int)uVar14;
  local_88.CorePtr.Reference._0_4_ = SUB84(local_78,0);
  local_88.CorePtr.Reference._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_80._4_4_ = (undefined4)(uVar14 >> 0x20);
  *in_R9 = iVar13 - (int)uStack_80;
  this_00 = (FBody *)(this->Transaction).Self;
  local_88.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)local_78;
  if (((ulonglong)this_00 & 1) == 0) {
    local_58._padding_._0_4_ = local_88.CorePtr.Reference._0_4_;
    local_58._padding_._4_4_ = local_88.CorePtr.Reference._4_4_;
    local_58.Ssl._4_4_ = uStack_80._4_4_;
    local_58.Ssl._0_4_ = (int)uStack_80;
    uStack_80 = uVar14;
    DetailOne::FBody::TryRecv(this_00,(TMemoryView<void> *)&local_res20._s_0,&local_58);
    uVar14 = CONCAT44(local_res20._s_1.Tag,local_res20._s_1.Result);
  }
  else {
    puVar11 = (undefined8 *)((ulonglong)this_00 ^ 1);
    uVar12 = puVar11[6];
    puVar1 = puVar11 + 8;
    uStack_5c = uStack_80._4_4_;
    if (-1 < (longlong)uVar12) {
      uVar8 = *puVar1;
      if ((longlong)*puVar1 < 0) {
        *puVar1 = uVar12;
        uVar8 = uVar12;
      }
      if (uVar14 < uVar8) {
        uVar8 = uVar14;
      }
      uStack_80._0_4_ = (int)uVar8;
      uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
      uStack_5c = uStack_80._4_4_;
      uVar14 = uVar8;
    }
    uStack_80 = uVar14;
    uStack_64 = local_88.CorePtr.Reference._4_4_;
    local_68 = local_88.CorePtr.Reference._0_4_;
    iStack_60 = (int)uStack_80;
    DetailTwo::FDriverNg::RecvBody
              ((FDriverNg *)*puVar11,(FTlsPeer *)&local_res20._s_0,(TMemoryView<void> *)param_2);
    uVar14 = CONCAT44(local_res20._s_1.Tag,local_res20._s_1.Result);
    if (0x7fffffffffff < (uVar14 & 0xffffffffffff)) {
      *puVar1 = *puVar1 - (ulonglong)(uint)local_res20._s_1.Result;
    }
  }
  if ((uVar14 & 0xffffffffffff) < 0x800000000000) {
    Fail(this,(FOutcome *)&local_res20._s_0);
  }
  else {
    iVar13 = (int)uVar14;
    if (iVar13 != 0) {
      pFVar3 = (this->field14_0x38).Host;
      pBVar4 = ((TRefCountPtr<FIoBuffer::BufCore> *)&pFVar3->VerifyCert)->Reference;
      uVar12 = (ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow);
      local_88.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)pBVar4->DataPtr;
      uStack_80 = (longlong)iVar13;
      if (uVar12 < (ulonglong)(longlong)iVar13) {
        uStack_80 = uVar12;
      }
      local_48.Data = (void *)local_88.CorePtr.Reference;
      local_48.Size = uStack_80;
      FIoBuffer::FIoBuffer(local_98,&local_48,(FIoBuffer *)pFVar3);
      TVar5.Reference = ((TRefCountPtr<FIoBuffer::BufCore> *)&pFVar3->VerifyCert)->Reference;
      ((TRefCountPtr<FIoBuffer::BufCore> *)&pFVar3->VerifyCert)->Reference =
           (BufCore *)local_98[0].CorePtr.Reference;
      local_98[0].CorePtr.Reference =
           (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar5.Reference;
      CallSink(this);
      TVar5.Reference = ((TRefCountPtr<FIoBuffer::BufCore> *)&pFVar3->VerifyCert)->Reference;
      ((TRefCountPtr<FIoBuffer::BufCore> *)&pFVar3->VerifyCert)->Reference =
           (BufCore *)local_98[0].CorePtr.Reference;
      local_98[0].CorePtr.Reference =
           (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar5.Reference;
      if (TVar5.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(TVar5.Reference);
        LOCK();
        piVar2 = &(TVar5.Reference)->NumRefs;
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FIoBuffer::BufCore::~BufCore(TVar5.Reference);
          ::operator_delete(TVar5.Reference,0x20);
        }
      }
    }
    if (local_res20._s_1.Tag == 0x8000) {
      if ((this->Stopwatch).Samples[3] == 0) {
        QueryPerformanceCounter(&local_res8);
        *(LARGE_INTEGER *)((this->Stopwatch).Samples + 3) = local_res8;
      }
      pFVar10 = FIoBuffer::FIoBuffer(&local_88);
      FIoBuffer::operator=((this->field14_0x38).Dest,pFVar10);
      this_01.CorePtr.Reference = local_88.CorePtr.Reference;
      if (local_88.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_88.CorePtr.Reference);
        LOCK();
        piVar2 = (int *)((longlong)this_01.CorePtr.Reference + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
          ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
        }
      }
      Done(this);
      *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
      *(undefined4 *)&param_1->_padding_ = 0xfffffffc;
      goto LAB_14457eb5d;
    }
    if (((local_res20._s_1.Tag & 0x18000) != 0x18000) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Outcome.IsWaiting()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x265,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar9.field0_0x0 = (FOutcome_u_0)(*pcVar6)();
      return (FOutcome)FVar9.field0_0x0;
    }
  }
  param_1->_padding_ = uVar14;
LAB_14457eb5d:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Send @ 144580b00

FOutcome __thiscall UE::IoStore::HTTP::FActivity::Send(FActivity *this,FHttpPeer *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  FOutcome_u_0 FVar5;
  bool bVar6;
  uint uVar7;
  FOutcome FVar8;
  FScopeBuffer *this_00;
  TStringView<char> *pTVar9;
  uint *puVar10;
  FTlsPeer *in_R8;
  bool bVar11;
  FOutcome_u_0 local_68;
  undefined4 local_60;
  uint uStack_5c;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48 [2];
  
  if ((this->Stopwatch).Samples[0] == 0) {
    QueryPerformanceCounter(&local_58);
    (this->Stopwatch).Samples[0] = (ulong64)local_58;
  }
  puVar10 = (this->Stopwatch).Counts;
  *puVar10 = *puVar10 + 1;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId431,"IasHttp::DoSend",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
               ,0x1af);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId431);
  }
  puVar2 = (undefined8 *)(this->Transaction).Self;
  if (((ulonglong)puVar2 & 1) == 0) {
    uVar1 = *(ushort *)((longlong)puVar2 + 0x112);
    uVar3 = *puVar2;
    if (((int)((*(uint *)((longlong)puVar2 + 0xc) & 0x7fffffff) - (uint)uVar1) < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SendSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x103,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar4)();
      return (FOutcome)FVar8.field0_0x0;
    }
    FTlsPeer::Send(in_R8,(char *)&local_60,(uint)uVar1 + (int)uVar3);
    local_68._s_1.Tag = uStack_5c;
    local_68._s_1.Result = local_60;
    if (uStack_5c == 0x8000) {
      if ((((ulonglong)local_68 & 0xffffffffffff) < 0x800000000000) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Misc.inl"
                             ,0x59,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar4)();
        return (FOutcome)FVar8.field0_0x0;
      }
      *(short *)((longlong)puVar2 + 0x112U) =
           *(short *)((longlong)puVar2 + 0x112U) + (short)local_60;
      uVar7 = *(uint *)((longlong)puVar2 + 0xc) & 0x7fffffff;
      if (*(ushort *)((longlong)puVar2 + 0x112) == uVar7) {
        uStack_5c = 0x8000;
      }
      else {
        if ((uVar7 <= *(ushort *)((longlong)puVar2 + 0x112)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AlreadySent < GetSize()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                               ,0x112,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar4)();
          return (FOutcome)FVar8.field0_0x0;
        }
        uStack_5c = 0x18000;
      }
      local_68 = (FOutcome_u_0)((ulonglong)uStack_5c << 0x20);
    }
  }
  else {
    DetailTwo::FDriverNg::PumpSend
              (*(FDriverNg **)((ulonglong)puVar2 ^ 1),(FTlsPeer *)&local_68._s_0);
    uStack_5c = local_68._s_1.Tag;
  }
  FVar5 = local_68;
  if (((ulonglong)local_68 & 0xffffffffffff) < 0x800000000000) {
    Fail(this,(FOutcome *)&local_68._s_0);
  }
  else if ((uStack_5c & 0x18000) != 0x18000) {
    if ((uStack_5c != 0x8000) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Outcome.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x1bd,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar4)();
      return (FOutcome)FVar8.field0_0x0;
    }
    if ((this->Stopwatch).Samples[1] == 0) {
      QueryPerformanceCounter(&local_50);
      *(LARGE_INTEGER *)((this->Stopwatch).Samples + 1) = local_50;
    }
    this_00 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,(FLanePostcode)this);
    if (StateScopes[0] == 0) {
      pTVar9 = StateNames;
      puVar10 = StateScopes;
      do {
        uVar7 = FCpuProfilerTrace::OutputEventType(pTVar9->DataPtr,"",0);
        pTVar9 = pTVar9 + 1;
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
      } while (pTVar9 != (TStringView<char> *)"Iax/Build");
    }
    uVar7 = StateScopes[2];
    QueryPerformanceCounter(local_48);
    LaneTraceDetail::FScopeBuffer::Leave(this_00,local_48[0].QuadPart);
    LaneTraceDetail::FScopeBuffer::Enter(this_00,local_48[0].QuadPart,uVar7);
    LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
    if ((this->State == RecvMessage) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("State != InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x115,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar8.field0_0x0 = (FOutcome_u_0)(*pcVar4)();
      return (FOutcome)FVar8.field0_0x0;
    }
    this->State = RecvMessage;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(undefined4 *)&param_1->_padding_ = 0xfffffffe;
    goto LAB_144580e1a;
  }
  param_1->_padding_ = (longlong)FVar5;
LAB_144580e1a:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// SetDestination @ 144581860

void __thiscall UE::IoStore::HTTP::FActivity::SetDestination(FActivity *this,FIoBuffer *param_1)

{
  (this->field14_0x38).Dest = param_1;
  return;
}

// SetSink @ 144581bf0

void __thiscall
UE::IoStore::HTTP::FActivity::SetSink
          (FActivity *this,
          TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *param_1,ulong64 param_2
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->Sink;
  uVar3 = *(undefined8 *)&(this->Sink).field_0x8;
  uVar4 = *(undefined8 *)&(this->Sink).field_0x10;
  uVar5 = *(undefined8 *)&(this->Sink).field_0x18;
  uVar6 = *(undefined8 *)&(this->Sink).field_0x20;
  uVar7 = *(undefined8 *)&(this->Sink).field_0x28;
  *(undefined8 *)&this->Sink = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Sink).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->Sink).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->Sink).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->Sink).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->Sink).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  this->SinkParam = param_2;
  return;
}

// Tick @ 144581f30

FOutcome __thiscall
UE::IoStore::HTTP::FActivity::Tick(FActivity *this,FHttpPeer *param_1,int *param_2)

{
  EState EVar1;
  code *pcVar2;
  bool bVar3;
  FOutcome FVar4;
  longlong in_R9;
  undefined4 local_res8;
  int iStackX_c;
  
  if ((this->State == Build) && (Transact(this,(FHttpPeer *)&local_res8), iStackX_c != 0x8000)) {
    param_1->_padding_ = CONCAT44(iStackX_c,local_res8);
    return (FOutcome)(FOutcome_u_0)param_1;
  }
  if (this->State == Send) {
    Send(this,param_1);
  }
  else {
    if ((2 < (byte)(this->State - RecvMessage)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("State > EState::Send && State < EState::RecvDone",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x291,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar4.field0_0x0;
    }
    if ((in_R9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaxRecvSize != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x292,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar4.field0_0x0;
    }
    if (((this->State < RecvMessage) || (RecvContent < this->State)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("State >= EState::RecvMessage && State < EState::RecvDone",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x276,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
      return (FOutcome)FVar4.field0_0x0;
    }
    EVar1 = this->State;
    if (EVar1 == RecvMessage) {
      RecvMessage(this,param_1);
    }
    else if (EVar1 == RecvContent) {
      RecvContent(this,param_1,param_2);
    }
    else if (EVar1 == RecvStream) {
      RecvStream(this,param_1,param_2);
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                         ,0x27c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4.field0_0x0 = (FOutcome_u_0)(*pcVar2)();
        return (FOutcome)FVar4.field0_0x0;
      }
      param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d73148;
      *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
    }
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

// Transact @ 144583970

FOutcome __thiscall UE::IoStore::HTTP::FActivity::Transact(FActivity *this,FHttpPeer *param_1)

{
  longlong lVar1;
  ulong64 uVar2;
  FRequest *this_00;
  code *pcVar3;
  FLaneEstate *pFVar4;
  bool bVar5;
  uint uVar6;
  FOutcome FVar7;
  size_t sVar8;
  FScopeBuffer *this_01;
  void *pvVar9;
  longlong *_Dst;
  undefined8 *puVar10;
  TStringView<char> *pTVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong in_R8;
  int iVar14;
  LARGE_INTEGER local_f8;
  TStringView<char> local_f0;
  TStringView<char> local_e0;
  TStringView<char> local_d0;
  char *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  TStringView<char> local_88;
  TStringView<char> local_78;
  TStringView<char> local_68;
  code *local_58 [2];
  undefined **local_48;
  FActivity *local_40;
  undefined8 local_30;
  
  _Dst = (longlong *)0x0;
  iVar14 = 0;
  if (*(char *)(in_R8 + 0x18) == '\x01') {
    _Dst = FMemory::Malloc(0x160,8);
    memset(_Dst,0,0x160);
    *(undefined4 *)(_Dst + 1) = 0x100;
    *_Dst = (longlong)(_Dst + 2);
    *(undefined4 *)((longlong)_Dst + 0xc) = 0x80000000;
    *(undefined4 *)((longlong)_Dst + 0x124) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst + 0x114) = 0xffff;
    *(undefined1 *)((longlong)_Dst + 0x116) = 0xff;
    _Dst[0x23] = -1;
    plVar12 = _Dst;
LAB_144583a40:
    if ((((ulonglong)plVar12 & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Ptr & 1) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\TransactionOne.inl"
                           ,0x3c8,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar7.field0_0x0;
    }
  }
  else if (*(char *)(in_R8 + 0x18) == '\x02') {
    lVar1 = *(longlong *)(in_R8 + 0x10);
    plVar12 = FMemory::Malloc(0x48,8);
    *plVar12 = lVar1;
    _Dst = (longlong *)((ulonglong)plVar12 | 1);
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = -1;
    *(undefined4 *)(plVar12 + 7) = 0;
    plVar12[8] = -1;
    goto LAB_144583a40;
  }
  plVar12 = (longlong *)(this->Transaction).Self;
  (this->Transaction).Self = (ulong64)_Dst;
  if (plVar12 == (longlong *)0x0) goto LAB_144583ac5;
  if (((ulonglong)plVar12 & 1) == 0) {
    pvVar9 = (void *)*plVar12;
    if ((pvVar9 != (void *)0x0) && (-1 < *(int *)((longlong)plVar12 + 0xc))) goto LAB_144583ab8;
  }
  else {
    plVar12 = (longlong *)((ulonglong)plVar12 ^ 1);
    DestructItems<UE::IoStore::HTTP::DetailTwo::FHeaderNg,int>
              ((FHeaderNg *)plVar12[4],(int)plVar12[5]);
    if ((void *)plVar12[4] != (void *)0x0) {
      FMemory::Free((void *)plVar12[4]);
    }
    pvVar9 = (void *)plVar12[1];
    if (pvVar9 != (void *)0x0) {
LAB_144583ab8:
      FMemory::Free(pvVar9);
    }
  }
  FMemory::Free(plVar12);
LAB_144583ac5:
  if ((this->Transaction).Self == 0) {
    param_1->_padding_ = param_1->_padding_ & 0xffff000000000000U ^ 0x150d72fd0;
    *(undefined2 *)((longlong)&param_1->_padding_ + 6) = 0xffff;
  }
  else {
    if ((RecvMessage < this->State) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("State <= EState::RecvMessage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x155,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar7.field0_0x0;
    }
    uVar2 = (this->Buffer).Data;
    local_f0.DataPtr = (char *)(uVar2 + this->PathOffset);
    local_e0.Size = (uint)this->PathOffset - (uint)this->MethodOffset;
    bVar5 = ((this->field14_0x38).Host)->bPooled;
    local_f0.Size = (int)this->PathLength;
    local_e0.DataPtr = (char *)(uVar2 + this->MethodOffset);
    local_d0.DataPtr = ((this->field14_0x38).Host)->HostName;
    if (local_d0.DataPtr != (char *)0x0) {
      sVar8 = strlen(local_d0.DataPtr);
      iVar14 = (int)sVar8;
    }
    local_d0.Size = iVar14;
    FTransaction::Begin<TStringView<char>,TStringView<char>,TStringView<char>_>
              ((FTransaction *)(this->Transaction).Self,&local_d0,&local_e0,&local_f0);
    local_30 = 0;
    local_48 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
    local_40 = this;
    EnumerateHeaders(this,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_58);
    this_00 = (FRequest *)(this->Transaction).Self;
    if (((ulonglong)this_00 & 1) == 0) {
      if (bVar5 == false) {
        uStack_b0 = 5;
        local_b8 = "close";
        local_88._12_4_ = uStack_ac;
        local_88.Size = 5;
        local_a8 = "Connection";
        uStack_a0 = 10;
        local_78._12_4_ = uStack_9c;
        local_78.Size = 10;
        local_78.DataPtr = "Connection";
        local_88.DataPtr = "close";
        DetailOne::FRequest::AddHeader(this_00,&local_78,&local_88);
      }
      uStack_90 = 2;
      local_98 = &::s___;
      local_68._12_4_ = uStack_8c;
      local_68.Size = 2;
      local_68.DataPtr = "\r\n";
      DetailOne::FRequest::operator<<(this_00,&local_68);
      this_00->HeaderRight = *(short *)((longlong)&this_00->_padding_ + 4);
      uVar6 = 1;
    }
    else {
      puVar10 = (undefined8 *)((ulonglong)this_00 ^ 1);
      uVar6 = nghttp2_submit_request2
                        (*(undefined8 *)*puVar10,0,puVar10[1],(longlong)*(int *)(puVar10 + 2),0,
                         (undefined8 *)*puVar10);
      *(uint *)(puVar10 + 3) = uVar6;
    }
    pFVar4 = GActivityTraceEstate;
    this->TransactId = uVar6;
    this_01 = (FScopeBuffer *)LaneEstate_Lookup(pFVar4,(FLanePostcode)this);
    if (StateScopes[0] == 0) {
      pTVar11 = StateNames;
      puVar13 = StateScopes;
      do {
        uVar6 = FCpuProfilerTrace::OutputEventType(pTVar11->DataPtr,"",0);
        pTVar11 = pTVar11 + 1;
        *puVar13 = uVar6;
        puVar13 = puVar13 + 1;
      } while (pTVar11 != (TStringView<char> *)"Iax/Build");
    }
    uVar6 = StateScopes[1];
    QueryPerformanceCounter(&local_f8);
    LaneTraceDetail::FScopeBuffer::Leave(this_01,local_f8.QuadPart);
    LaneTraceDetail::FScopeBuffer::Enter(this_01,local_f8.QuadPart,uVar6);
    LaneTraceDetail::FScopeBuffer::Flush(this_01,false);
    if ((this->State == Send) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("State != InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                           ,0x115,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      FVar7.field0_0x0 = (FOutcome_u_0)(*pcVar3)();
      return (FOutcome)FVar7.field0_0x0;
    }
    this->State = Send;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0x8000;
    *(undefined4 *)&param_1->_padding_ = 0;
  }
  return (FOutcome)(FOutcome_u_0)param_1;
}

