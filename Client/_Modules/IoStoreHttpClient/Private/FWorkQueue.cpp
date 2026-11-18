// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 3

// AddActivity @ 14456f050

void __thiscall UE::IoStore::HTTP::FWorkQueue::AddActivity(FWorkQueue *this,FActivityNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Next != (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Activity->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x160,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Next != (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->Next = (this->List).Head;
  (this->List).Head = param_1;
  this->ActiveSlots = this->ActiveSlots | 1L << ((longlong)param_1->Slot & 0x3fU);
  return;
}

// PopActivity @ 14457c370

FActivityNode * __thiscall UE::IoStore::HTTP::FWorkQueue::PopActivity(FWorkQueue *this)

{
  code *pcVar1;
  bool bVar2;
  FActivityNode *pFVar3;
  
  pFVar3 = (this->List).Head;
  if (pFVar3 == (FActivityNode *)0x0) {
    return (FActivityNode *)0x0;
  }
  (this->List).Head = pFVar3->Next;
  pFVar3->Next = (FActivityNode *)0x0;
  if ((this->ActiveSlots >> ((ulonglong)(byte)pFVar3->Slot & 0x3f) & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveSlots & (1ull << Activity->Slot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x16f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActivityNode *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->ActiveSlots = this->ActiveSlots ^ 1L << ((longlong)pFVar3->Slot & 0x3fU);
  if (pFVar3->Next != (FActivityNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Activity->Next == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                       ,0x172,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FActivityNode *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// TickCancels @ 144582830

void __thiscall UE::IoStore::HTTP::FWorkQueue::TickCancels(FWorkQueue *this,FTickState *param_1)

{
  FActivityNode **ppFVar1;
  FActivityNode *pFVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScopeBuffer *this_00;
  TStringView<char> *pTVar7;
  uint *puVar8;
  FLanePostcode this_01;
  LARGE_INTEGER local_48 [2];
  
  if ((param_1->Cancels != 0) && ((this->ActiveSlots & param_1->Cancels) != 0)) {
    if (((this->List).Head == (FActivityNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!List.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                           ,0x181,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01.Value = 0;
    this->ActiveSlots = 0;
    pFVar2 = (this->List).Head;
    while (pFVar2 != (FActivityNode *)0x0) {
      ppFVar1 = &pFVar2->Next;
      pFVar2 = *ppFVar1;
      *ppFVar1 = (FActivityNode *)this_01.Value;
      this_01.Value = (ulong64)(this->List).Head;
      (this->List).Head = pFVar2;
    }
    (this->List).Head = (FActivityNode *)0x0;
    while (this_01.Value != 0) {
      uVar3 = *(ulong64 *)(this_01.Value + 0x98);
      *(undefined8 *)(this_01.Value + 0x98) = 0;
      if ((param_1->Cancels >> ((ulonglong)*(byte *)(this_01.Value + 0xa0) & 0x3f) & 1) == 0) {
        *(FActivityNode **)(this_01.Value + 0x98) = (this->List).Head;
        (this->List).Head = (FActivityNode *)this_01.Value;
        this->ActiveSlots =
             this->ActiveSlots | 1L << ((longlong)*(char *)(this_01.Value + 0xa0) & 0x3fU);
        this_01.Value = uVar3;
      }
      else {
        if (*(byte *)this_01.Value < 6) {
          this_00 = (FScopeBuffer *)LaneEstate_Lookup(GActivityTraceEstate,this_01);
          if (StateScopes[0] == 0) {
            pTVar7 = StateNames;
            puVar8 = StateScopes;
            do {
              uVar6 = FCpuProfilerTrace::OutputEventType(pTVar7->DataPtr,"",0);
              pTVar7 = pTVar7 + 1;
              *puVar8 = uVar6;
              puVar8 = puVar8 + 1;
            } while (pTVar7 != (TStringView<char> *)"Iax/Build");
          }
          uVar6 = StateScopes[7];
          QueryPerformanceCounter(local_48);
          LaneTraceDetail::FScopeBuffer::Leave(this_00,local_48[0].QuadPart);
          LaneTraceDetail::FScopeBuffer::Enter(this_00,local_48[0].QuadPart,uVar6);
          LaneTraceDetail::FScopeBuffer::Flush(this_00,false);
          if ((*(char *)this_01.Value == '\a') &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("State != InState",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Activity.inl"
                                 ,0x115,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined1 *)this_01.Value = 7;
          FActivity::CallSink((FActivity *)this_01.Value);
        }
        if ((*(longlong *)(this_01.Value + 0x98) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Node->Next == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\HttpClient\\Private\\Loop.inl"
                               ,0x102,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(FActivityNode **)(this_01.Value + 0x98) = (param_1->DoneList).Head;
        (param_1->DoneList).Head = (FActivityNode *)this_01.Value;
        this_01.Value = uVar3;
      }
    }
  }
  return;
}

