// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ~FNetworkCongestionControl @ 147fa90f0

void __thiscall
FNetworkCongestionControl::~FNetworkCongestionControl(FNetworkCongestionControl *this)

{
  uint *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = (this->Analyzer).OutPacketRecords.Tail;
  uVar6 = (this->Analyzer).OutPacketRecords.Head - uVar2;
  if (0xffffffff < (ulonglong)uVar6 + (ulonglong)uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = &(this->Analyzer).OutPacketRecords.Tail;
  *puVar1 = *puVar1 + uVar6;
  (this->Analyzer).OutPacketRecords.Storage.ArrayNum = 0;
  pFVar3 = (this->Analyzer).OutPacketRecords.Storage.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// FNetworkCongestionControl @ 148089360

FNetworkCongestionControl * __thiscall
FNetworkCongestionControl::FNetworkCongestionControl
          (FNetworkCongestionControl *this,double param_1,uint param_2)

{
  TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_> *this_00;
  
  (this->Analyzer).TrafficControlModule = this;
  this_00 = &(this->Analyzer).OutPacketRecords;
  this_00->Head = 0;
  this_00->Tail = 0;
  (this->Analyzer).OutPacketRecords.IndexMask = 0;
  (this->Analyzer).OutPacketRecords.Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Analyzer).OutPacketRecords.Storage.ArrayNum = 0;
  (this->Analyzer).OutPacketRecords.Storage.ArrayMax = 0;
  TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::SetCapacity(this_00,8);
  (this->Analyzer).LatestUplinkBandwidth = 0.0;
  (this->Analyzer).LatestRTT = 0.0;
  (this->Analyzer).OutSeq = '\0';
  (this->Analyzer).OutAckedSeq = '\0';
  (this->Analyzer).BytesInFlight = 0;
  (this->Analyzer).bInitialized = false;
  this->MinRTT = 10.0;
  this->NetSpeed = param_1;
  this->MaxPacketsAllowedInFlight = param_2;
  return this;
}

// GetCongestionWindow @ 1480a4330

double __thiscall FNetworkCongestionControl::GetCongestionWindow(FNetworkCongestionControl *this)

{
  return this->NetSpeed * this->MinRTT;
}

// GetMinRTT @ 1480a60f0

double __thiscall FNetworkCongestionControl::GetMinRTT(FNetworkCongestionControl *this)

{
  return this->MinRTT;
}

// IsReadyToSend @ 1480b3ef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNetworkCongestionControl::IsReadyToSend(FNetworkCongestionControl *this,double param_1)

{
  if (((double)(this->Analyzer).BytesInFlight < this->MinRTT * this->NetSpeed) &&
     ((this->Analyzer).OutPacketRecords.Head - (this->Analyzer).OutPacketRecords.Tail <
      this->MaxPacketsAllowedInFlight)) {
    if (6 < (byte)LogNetTraffic._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    return true;
  }
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  return false;
}

// OnAck @ 1480b9c10

void __thiscall
FNetworkCongestionControl::OnAck(FNetworkCongestionControl *this,FAckSample *param_1)

{
  double dVar1;
  
  FNetworkTrafficAnalyzer::OnAck(&this->Analyzer,param_1);
  dVar1 = (this->Analyzer).LatestRTT;
  if (dVar1 <= this->MinRTT) {
    this->MinRTT = dVar1;
    return;
  }
  this->MinRTT = this->MinRTT * __real_3feccccccccccccd + dVar1 * __real_3fb999999999999a;
  return;
}

// OnSend @ 1480ba040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNetworkCongestionControl::OnSend(FNetworkCongestionControl *this,FSeqSample *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  uchar uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  ulong64 uVar9;
  
  uVar3 = (uchar)param_1->Seq;
  if ((this->Analyzer).bInitialized == false) {
    (this->Analyzer).OutAckedSeq.Value = uVar3 + 0xff;
  }
  else if (uVar3 != (uchar)((this->Analyzer).OutSeq.Value + '\x01')) {
    if ((byte)LogNet._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return;
  }
  (this->Analyzer).OutSeq.Value = uVar3;
  (this->Analyzer).bInitialized = true;
  if ((uVar3 == (this->Analyzer).OutAckedSeq.Value) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSeq != OutAckedSeq",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\TrafficControl.cpp"
                         ,0x5e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = &(this->Analyzer).BytesInFlight;
  *puVar1 = *puVar1 + param_1->PacketSize;
  uVar9 = (ulonglong)
          ((this->Analyzer).OutPacketRecords.Head - (this->Analyzer).OutPacketRecords.Tail) + 1;
  if ((ulonglong)(longlong)(this->Analyzer).OutPacketRecords.Storage.ArrayNum < uVar9) {
    TResizableCircularQueue<FSeqSample,TSizedDefaultAllocator<32>_>::SetCapacity
              (&(this->Analyzer).OutPacketRecords,uVar9);
  }
  uVar4 = (this->Analyzer).OutPacketRecords.Head;
  uVar5 = (this->Analyzer).OutPacketRecords.IndexMask;
  (this->Analyzer).OutPacketRecords.Head = uVar4 + 1;
  uVar7 = *(undefined8 *)&param_1->Seq;
  pFVar2 = (this->Analyzer).OutPacketRecords.Storage.AllocatorInstance.Data +
           (ulonglong)(uVar5 & uVar4) * 0x10;
  *(double *)pFVar2 = param_1->Timestamp;
  *(undefined8 *)(pFVar2 + 8) = uVar7;
  if (6 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return;
}

// UpdateMinRTT @ 1480e0610

void __thiscall
FNetworkCongestionControl::UpdateMinRTT(FNetworkCongestionControl *this,double param_1)

{
  double dVar1;
  
  dVar1 = (this->Analyzer).LatestRTT;
  if (dVar1 <= this->MinRTT) {
    this->MinRTT = dVar1;
    return;
  }
  this->MinRTT = this->MinRTT * __real_3feccccccccccccd + dVar1 * __real_3fb999999999999a;
  return;
}

