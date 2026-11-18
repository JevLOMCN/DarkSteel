// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// ~FNetPacketNotify @ 147fa9060

void __thiscall FNetPacketNotify::~FNetPacketNotify(FNetPacketNotify *this)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FNetPacketNotify::FSentAckData> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar2 = (this->AckRecord).Tail;
  uVar6 = (this->AckRecord).Head - uVar2;
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
  puVar1 = &(this->AckRecord).Tail;
  *puVar1 = *puVar1 + uVar6;
  (this->AckRecord).Storage.ArrayNum = 0;
  FVar3 = (this->AckRecord).Storage.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

// FNetPacketNotify @ 1480143b0

FNetPacketNotify * __thiscall FNetPacketNotify::FNetPacketNotify(FNetPacketNotify *this)

{
  (this->AckRecord).Head = 0;
  (this->AckRecord).Tail = 0;
  (this->AckRecord).IndexMask = 0;
  (this->AckRecord).Storage.AllocatorInstance.SecondaryData =
       (ForElementType<FNetPacketNotify::FSentAckData>)0x0;
  (this->AckRecord).Storage.ArrayNum = 0;
  (this->AckRecord).Storage.ArrayMax = 0x80;
  TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
  ::SetCapacity(&this->AckRecord,0x40);
  this->WrittenHistoryWordCount = 0;
  (this->WrittenInAckSeq).Value = 0;
  (this->InSeqHistory).Storage[0] = 0;
  (this->InSeqHistory).Storage[1] = 0;
  (this->InSeqHistory).Storage[2] = 0;
  (this->InSeqHistory).Storage[3] = 0;
  (this->InSeqHistory).Storage[4] = 0;
  (this->InSeqHistory).Storage[5] = 0;
  (this->InSeqHistory).Storage[6] = 0;
  (this->InSeqHistory).Storage[7] = 0;
  this->InSeq = 0;
  this->InAckSeq = 0;
  this->InAckSeqAck = 0;
  this->WaitingForFlushSeqAck = 0;
  this->OutSeq = 0;
  this->OutAckSeq = 0;
  return this;
}

// AckSeq @ 14801e590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNetPacketNotify::AckSeq
          (FNetPacketNotify *this,TSequenceNumber<14,unsigned_short> param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  
  if ((param_1.Value != (this->InSeq).Value) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AckedSeq == InSeq",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPacketNotify.cpp"
                         ,0x5f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  while ((uVar5 = (this->InAckSeq).Value, param_1.Value != uVar5 &&
         ((param_1.Value - uVar5 & 0x3fff) < 0x2000))) {
    uVar5 = uVar5 + 1 & 0x3fff;
    (this->InAckSeq).Value = uVar5;
    uVar6 = 0;
    if (uVar5 == param_1.Value) {
      uVar6 = (uint)param_2;
    }
    if (5 < (byte)LogNetTraffic._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    uVar1 = (this->InSeqHistory).Storage[0];
    uVar2 = (this->InSeqHistory).Storage[1];
    (this->InSeqHistory).Storage[0] = uVar1 * 2 | uVar6;
    uVar6 = (this->InSeqHistory).Storage[2];
    (this->InSeqHistory).Storage[1] = uVar2 * 2 | uVar1 >> 0x1f;
    uVar1 = (this->InSeqHistory).Storage[3];
    (this->InSeqHistory).Storage[2] = uVar6 * 2 | uVar2 >> 0x1f;
    uVar2 = (this->InSeqHistory).Storage[4];
    (this->InSeqHistory).Storage[3] = uVar1 * 2 | uVar6 >> 0x1f;
    uVar6 = (this->InSeqHistory).Storage[5];
    (this->InSeqHistory).Storage[4] = uVar2 * 2 | uVar1 >> 0x1f;
    uVar1 = (this->InSeqHistory).Storage[6];
    (this->InSeqHistory).Storage[5] = uVar6 * 2 | uVar2 >> 0x1f;
    (this->InSeqHistory).Storage[6] = uVar1 * 2 | uVar6 >> 0x1f;
    (this->InSeqHistory).Storage[7] = uVar1 >> 0x1f | (this->InSeqHistory).Storage[7] * 2;
  }
  return;
}

// CommitAndIncrementOutSeq @ 148024790

TSequenceNumber<14,unsigned_short> __thiscall
FNetPacketNotify::CommitAndIncrementOutSeq(FNetPacketNotify *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ushort *in_RDX;
  ulong64 uVar5;
  ForElementType<FNetPacketNotify::FSentAckData> FVar6;
  undefined4 local_res8;
  
  if (this->WrittenHistoryWordCount == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WrittenHistoryWordCount != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPacketNotify.cpp"
                       ,0x102,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (TSequenceNumber<14,unsigned_short>)uVar4;
    }
  }
  uVar5 = (ulonglong)((this->AckRecord).Head - (this->AckRecord).Tail) + 1;
  local_res8 = CONCAT22((this->WrittenInAckSeq).Value,(this->OutSeq).Value);
  if ((ulonglong)(longlong)(this->AckRecord).Storage.ArrayNum < uVar5) {
    TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
    ::SetCapacity(&this->AckRecord,uVar5);
  }
  uVar1 = (this->AckRecord).Head;
  (this->AckRecord).Head = uVar1 + 1;
  FVar6 = (this->AckRecord).Storage.AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
    FVar6 = (ForElementType<FNetPacketNotify::FSentAckData>)&(this->AckRecord).Storage;
  }
  *(undefined4 *)((longlong)FVar6 + (ulonglong)((this->AckRecord).IndexMask & uVar1) * 4) =
       local_res8;
  this->WrittenHistoryWordCount = 0;
  uVar4 = (this->OutSeq).Value + 1 & 0x3fff;
  (this->OutSeq).Value = uVar4;
  *in_RDX = uVar4;
  return (TSequenceNumber<14,unsigned_short>)(ushort)in_RDX;
}

// GetCurrentSequenceHistoryLength @ 148035580

int __thiscall FNetPacketNotify::GetCurrentSequenceHistoryLength(FNetPacketNotify *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(this->InAckSeq).Value - (uint)(this->InAckSeqAck).Value;
  iVar1 = 0x100;
  if ((uVar2 & 0x3fff) < 0x2000) {
    iVar3 = (int)(uVar2 * 0x40000) >> 0x12;
    iVar1 = 0x100;
    if (iVar3 < 0x100) {
      iVar1 = iVar3;
    }
  }
  return iVar1;
}

// GetHasUnacknowledgedAcks @ 148035ae0

bool __thiscall FNetPacketNotify::GetHasUnacknowledgedAcks(FNetPacketNotify *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0x100;
  uVar4 = (uint)(this->InAckSeq).Value - (uint)(this->InAckSeqAck).Value;
  if ((uVar4 & 0x3fff) < 0x2000) {
    iVar5 = (int)(uVar4 * 0x40000) >> 0x12;
    iVar6 = 0x100;
    if (iVar5 < 0x100) {
      iVar6 = iVar5;
    }
    if (iVar6 < 1) {
      return false;
    }
  }
  do {
    if ((0xff < (ulonglong)(longlong)iVar7) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\Util\\SequenceHistory.h"
                           ,0x72,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (((this->InSeqHistory).Storage[(ulonglong)(longlong)iVar7 >> 5] >> ((byte)iVar7 & 0x1f) & 1)
        != 0) {
      return true;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar6);
  return false;
}

// Init @ 14803d070

void __thiscall
FNetPacketNotify::Init
          (FNetPacketNotify *this,TSequenceNumber<14,unsigned_short> param_1,
          TSequenceNumber<14,unsigned_short> param_2)

{
  ushort uVar1;
  
  (this->InSeqHistory).Storage[0] = 0;
  (this->InSeqHistory).Storage[1] = 0;
  (this->InSeqHistory).Storage[2] = 0;
  (this->InSeqHistory).Storage[3] = 0;
  (this->InSeqHistory).Storage[4] = 0;
  (this->InSeqHistory).Storage[5] = 0;
  (this->InSeqHistory).Storage[6] = 0;
  (this->InSeqHistory).Storage[7] = 0;
  (this->OutSeq).Value = param_2.Value;
  uVar1 = param_2.Value - 1 & 0x3fff;
  (this->InSeq).Value = param_1.Value;
  (this->OutAckSeq).Value = uVar1;
  (this->WaitingForFlushSeqAck).Value = uVar1;
  (this->InAckSeq).Value = param_1.Value;
  (this->InAckSeqAck).Value = param_1.Value;
  return;
}

// InternalUpdate @ 148040cd0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNetPacketNotify::InternalUpdate(FNetPacketNotify *this,FNotificationHeader *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = (this->OutAckSeq).Value;
  uVar2 = (this->WaitingForFlushSeqAck).Value;
  if (((uVar2 == uVar1) || (0x1fff < (uVar2 - uVar1 & 0x3fff))) &&
     ((uVar5 = (uint)(param_1->Seq).Value - (uint)(this->InAckSeqAck).Value,
      0x1fff < (uVar5 & 0x3fff) || (0x100 < (uint)((int)(uVar5 * 0x40000) >> 0x12))))) {
    bVar3 = GetHasUnacknowledgedAcks(this);
    if (bVar3) {
      if (2 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      (this->WaitingForFlushSeqAck).Value = (this->OutSeq).Value;
    }
    else {
      uVar1 = (param_1->Seq).Value;
      if (2 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      (this->InAckSeqAck).Value = uVar1 - 1 & 0x3fff;
    }
  }
  uVar1 = (this->OutAckSeq).Value;
  uVar2 = (this->WaitingForFlushSeqAck).Value;
  if ((uVar2 == uVar1) || (0x1fff < (uVar2 - uVar1 & 0x3fff))) {
    (this->InSeq).Value = (param_1->Seq).Value;
  }
  else {
    uVar7 = (uint)(param_1->Seq).Value;
    uVar5 = uVar7 - (this->InAckSeqAck).Value;
    if (((0x1fff < (uVar5 & 0x3fff)) || (0x100 < (uint)((int)(uVar5 * 0x40000) >> 0x12))) &&
       (bVar3 = GetHasUnacknowledgedAcks(this), bVar3)) {
      uVar1 = (this->InAckSeqAck).Value;
      uVar5 = (uint)(this->InAckSeq).Value - (uint)uVar1;
      iVar4 = 0x100;
      if ((uVar5 & 0x3fff) < 0x2000) {
        iVar6 = (int)(uVar5 * 0x40000) >> 0x12;
        iVar4 = 0x100;
        if (iVar6 < 0x100) {
          iVar4 = iVar6;
        }
      }
      uVar7 = (uint)((uVar1 - (short)iVar4) + 0x100 & 0x3fff);
    }
    uVar5 = uVar7 - (this->InSeq).Value;
    if ((uVar5 & 0x3fff) < 0x2000) {
      param_2 = (int)(uVar5 * 0x40000) >> 0x12;
      (this->InSeq).Value = (ushort)uVar7;
      AckSeq(this,(TSequenceNumber<14,unsigned_short>)(ushort)uVar7,false);
      if (5 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
    }
    else {
      if (5 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      param_2 = 0;
    }
  }
  return param_2;
}

// ReadHeader @ 14804cee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNetPacketNotify::ReadHeader
          (FNetPacketNotify *this,FNotificationHeader *param_1,FBitReader *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint local_res10 [2];
  
  plVar1 = (longlong *)param_2->_padding_;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->_padding_ & 0x10000) == 0) {
      (**(code **)(param_2->_padding_ + 0x188))(param_2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_2,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (param_1->Seq).Value = (ushort)(local_res10[0] >> 0x12);
  (param_1->AckedSeq).Value = (ushort)(local_res10[0] >> 4) & 0x3fff;
  uVar4 = (ulonglong)(local_res10[0] & 0xf) + 1;
  param_1->HistoryWordCount = uVar4;
  uVar3 = 8;
  if (uVar4 < 8) {
    uVar3 = uVar4;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = *(uint **)param_2->_padding_;
    if ((uint *)((undefined8 *)param_2->_padding_)[1] < puVar2 + 1) {
      if ((param_2->_padding_ & 0x10000) == 0) {
        (**(code **)(param_2->_padding_ + 0x188))(param_2,param_1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_2,(uint *)param_1);
      }
    }
    else {
      (param_1->History).Storage[0] = *puVar2;
      *(longlong *)param_2->_padding_ = *(longlong *)param_2->_padding_ + 4;
    }
    param_1 = (FNotificationHeader *)((param_1->History).Storage + 1);
  }
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  return (bool)((byte)~*(byte *)((longlong)&param_2->_padding_ + 1) >> 1 & 1);
}

// SetWaitForSequenceHistoryFlush @ 14805f8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetPacketNotify::SetWaitForSequenceHistoryFlush(FNetPacketNotify *this)

{
  if (2 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    (this->WaitingForFlushSeqAck).Value = (this->OutSeq).Value;
    return;
  }
  (this->WaitingForFlushSeqAck).Value = (this->OutSeq).Value;
  return;
}

// UpdateInAckSeqAck @ 14806cef0

/* WARNING: Enum "Type": Some values do not have unique names */

TSequenceNumber<14,unsigned_short> __thiscall
FNetPacketNotify::UpdateInAckSeqAck
          (FNetPacketNotify *this,int param_1,TSequenceNumber<14,unsigned_short> param_2)

{
  undefined4 uVar1;
  undefined4 in_register_00000014;
  ForElementType<FNetPacketNotify::FSentAckData> FVar2;
  int iVar3;
  undefined6 in_register_00000082;
  short in_R9W;
  uint uVar4;
  short *local_res8;
  ushort uStackX_1a;
  short local_res20 [4];
  
  uVar4 = (this->AckRecord).Tail;
  iVar3 = (int)CONCAT62(in_register_00000082,param_2.Value);
  local_res20[0] = in_R9W;
  if ((ulonglong)(longlong)iVar3 <= (ulonglong)((this->AckRecord).Head - uVar4)) {
    if (1 < iVar3) {
      TResizableCircularQueue<FNetPacketNotify::FSentAckData,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
      ::PopNoCheck(&this->AckRecord,(longlong)iVar3 - 1);
      uVar4 = (this->AckRecord).Tail;
    }
    FVar2 = (this->AckRecord).Storage.AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<FNetPacketNotify::FSentAckData>)0x0) {
      FVar2 = (ForElementType<FNetPacketNotify::FSentAckData>)&(this->AckRecord).Storage;
    }
    uVar1 = *(undefined4 *)((longlong)FVar2 + (ulonglong)((this->AckRecord).IndexMask & uVar4) * 4);
    (this->AckRecord).Tail = uVar4 + 1;
    if ((short)uVar1 == local_res20[0]) {
      if (5 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      uStackX_1a = (ushort)((uint)uVar1 >> 0x10);
      *(ushort *)CONCAT44(in_register_00000014,param_1) = uStackX_1a;
      return (TSequenceNumber<14,unsigned_short>)(ushort)param_1;
    }
  }
  local_res8 = local_res20;
  `FNetPacketNotify::UpdateInAckSeqAck'::__l2::<lambda_1>::operator()(&local_res8);
  *(ushort *)CONCAT44(in_register_00000014,param_1) = local_res20[0] - 0x100U & 0x3fff;
  return (TSequenceNumber<14,unsigned_short>)(ushort)param_1;
}

// WillSequenceFitInSequenceHistory @ 148071b30

bool __thiscall
FNetPacketNotify::WillSequenceFitInSequenceHistory
          (FNetPacketNotify *this,TSequenceNumber<14,unsigned_short> param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1.Value - (uint)(this->InAckSeqAck).Value;
  if ((uVar1 & 0x3fff) < 0x2000) {
    return (uint)((int)(uVar1 * 0x40000) >> 0x12) < 0x101;
  }
  return false;
}

// WriteHeader @ 148071e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNetPacketNotify::WriteHeader(FNetPacketNotify *this,FBitWriter *param_1,bool param_2)

{
  ushort uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint local_res8 [2];
  uint local_res18 [4];
  
  uVar1 = (this->InAckSeq).Value;
  uVar7 = (uint)uVar1 - (uint)(this->InAckSeqAck).Value;
  iVar4 = 0x100;
  if ((uVar7 & 0x3fff) < 0x2000) {
    iVar8 = (int)(uVar7 * 0x40000) >> 0x12;
    iVar4 = 0x100;
    if (iVar8 < 0x100) {
      iVar4 = iVar8;
    }
  }
  uVar6 = (longlong)iVar4 + 0x1fU >> 5;
  uVar5 = 8;
  if (uVar6 < 8) {
    uVar5 = uVar6;
  }
  uVar6 = 1;
  if (1 < uVar5) {
    uVar6 = uVar5;
  }
  if ((param_2) &&
     (bVar3 = this->WrittenHistoryWordCount < uVar6, uVar6 = this->WrittenHistoryWordCount, bVar3))
  {
    return false;
  }
  this->WrittenHistoryWordCount = uVar6;
  (this->WrittenInAckSeq).Value = uVar1;
  plVar2 = (longlong *)param_1->_padding_;
  local_res18[0] =
       ((uint)((this->OutSeq).Value & 0x3fff) << 0xe | (uint)(uVar1 & 0x3fff)) << 4 |
       (int)uVar6 - 1U & 0xf;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar5 = 8;
  if (this->WrittenHistoryWordCount < 8) {
    uVar5 = this->WrittenHistoryWordCount;
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)param_1->_padding_;
      local_res8[0] = (this->InSeqHistory).Storage[uVar6];
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  return true;
}

// operator() @ 150520720

bool __thiscall `FNetPacketNotify::UpdateInAckSeqAck'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5359698304382795847>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5359698304382795847>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

