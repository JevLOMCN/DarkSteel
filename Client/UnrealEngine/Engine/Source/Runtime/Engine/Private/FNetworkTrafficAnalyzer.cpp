// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FNetworkTrafficAnalyzer @ 148089540

FNetworkTrafficAnalyzer * __thiscall
FNetworkTrafficAnalyzer::FNetworkTrafficAnalyzer
          (FNetworkTrafficAnalyzer *this,FNetworkCongestionControl *param_1)

{
  this->TrafficControlModule = param_1;
  (this->OutPacketRecords).Head = 0;
  (this->OutPacketRecords).Tail = 0;
  (this->OutPacketRecords).IndexMask = 0;
  (this->OutPacketRecords).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutPacketRecords).Storage.ArrayNum = 0;
  (this->OutPacketRecords).Storage.ArrayMax = 0;
  TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::SetCapacity
            (&this->OutPacketRecords,8);
  this->LatestUplinkBandwidth = 0.0;
  this->LatestRTT = 0.0;
  this->OutSeq = '\0';
  this->OutAckedSeq = '\0';
  this->BytesInFlight = 0;
  this->bInitialized = false;
  return this;
}

// OnAck @ 1480b9c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkTrafficAnalyzer::OnAck(FNetworkTrafficAnalyzer *this,FAckSample *param_1)

{
  FScriptContainerElement FVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ulonglong uVar7;
  double dVar8;
  
  FVar1 = *(FScriptContainerElement *)&param_1->Ack;
  cVar5 = (char)FVar1 - (this->OutAckedSeq).Value;
  if ('\0' < cVar5) {
    if (6 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (((this->OutPacketRecords).Head == (this->OutPacketRecords).Tail) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset < Count()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x4c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((FScriptContainerElement)((this->OutAckedSeq).Value + '\x01') !=
         (this->OutPacketRecords).Storage.AllocatorInstance.Data
         [(ulonglong)((this->OutPacketRecords).IndexMask & (this->OutPacketRecords).Tail) * 0x10 + 8
         ]) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(OutAckedSeq + SeqT(1)) == SeqT(OutPacketRecords.Peek().Seq)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\TrafficControl.cpp"
                                   ,0x7b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (1 < cVar5) {
      uVar7 = (ulonglong)((int)cVar5 - 1);
      do {
        if (((this->OutPacketRecords).Head == (this->OutPacketRecords).Tail) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar2 = (this->OutPacketRecords).Tail;
        this->BytesInFlight =
             this->BytesInFlight -
             *(int *)((this->OutPacketRecords).Storage.AllocatorInstance.Data +
                     (ulonglong)(uVar2 & (this->OutPacketRecords).IndexMask) * 0x10 + 0xc);
        if ((this->OutPacketRecords).Head == uVar2) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1638566698149740322>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0xde,"Count() > 0");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          (this->OutPacketRecords).Tail = uVar2 + 1;
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (((this->OutPacketRecords).Head == (this->OutPacketRecords).Tail) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset < Count()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x4c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->OutPacketRecords).Storage.AllocatorInstance.Data;
    uVar7 = (ulonglong)((this->OutPacketRecords).IndexMask & (this->OutPacketRecords).Tail);
    if ((FVar1 != pFVar3[uVar7 * 0x10 + 8]) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ack == SeqT(PacketRecord.Seq)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\TrafficControl.cpp"
                           ,0x87,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->BytesInFlight = this->BytesInFlight - *(int *)(pFVar3 + uVar7 * 0x10 + 0xc);
    dVar8 = param_1->Timestamp - *(double *)(pFVar3 + uVar7 * 0x10);
    this->LatestRTT = dVar8;
    if (0.0 < dVar8) {
      this->LatestUplinkBandwidth = (double)*(int *)(pFVar3 + uVar7 * 0x10 + 0xc) / dVar8;
    }
    uVar2 = (this->OutPacketRecords).Tail;
    if ((this->OutPacketRecords).Head == uVar2) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740322>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xde,"Count() > 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      (this->OutPacketRecords).Tail = uVar2 + 1;
    }
    (this->OutAckedSeq).Value = (uchar)FVar1;
    if (6 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  return;
}

// OnSend @ 1480ba160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetworkTrafficAnalyzer::OnSend(FNetworkTrafficAnalyzer *this,FSeqSample *param_1)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  ulong64 uVar7;
  
  uVar2 = (uchar)param_1->Seq;
  if (this->bInitialized == false) {
    (this->OutAckedSeq).Value = uVar2 + 0xff;
  }
  else if (uVar2 != (uchar)((this->OutSeq).Value + '\x01')) {
    if ((byte)LogNet._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return;
  }
  (this->OutSeq).Value = uVar2;
  this->bInitialized = true;
  if ((uVar2 == (this->OutAckedSeq).Value) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSeq != OutAckedSeq",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\TrafficControl.cpp"
                         ,0x5e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->BytesInFlight = this->BytesInFlight + param_1->PacketSize;
  uVar7 = (ulonglong)((this->OutPacketRecords).Head - (this->OutPacketRecords).Tail) + 1;
  if ((ulonglong)(longlong)(this->OutPacketRecords).Storage.ArrayNum < uVar7) {
    TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::SetCapacity
              (&this->OutPacketRecords,uVar7);
  }
  uVar3 = (this->OutPacketRecords).Head;
  (this->OutPacketRecords).Head = uVar3 + 1;
  uVar5 = *(undefined8 *)&param_1->Seq;
  pFVar1 = (this->OutPacketRecords).Storage.AllocatorInstance.Data +
           (ulonglong)((this->OutPacketRecords).IndexMask & uVar3) * 0x10;
  *(double *)pFVar1 = param_1->Timestamp;
  *(undefined8 *)(pFVar1 + 8) = uVar5;
  if (6 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return;
}

