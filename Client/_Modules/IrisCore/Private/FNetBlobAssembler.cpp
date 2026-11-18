// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// FNetBlobAssembler @ 144229310

FNetBlobAssembler * __thiscall
UE::Net::FNetBlobAssembler::FNetBlobAssembler(FNetBlobAssembler *this)

{
  (this->NetBlobCreationInfo).Type = 0xffffffff;
  (this->NetBlobCreationInfo).Flags = None;
  (this->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Payload).ArrayNum = 0;
  (this->Payload).ArrayMax = 0;
  FNetBitStreamWriter::FNetBitStreamWriter(&this->BitWriter);
  (this->RefHandle).field0_0x0.Value = 0;
  this->PartialNetBlobHandlerConfig = (USequentialPartialNetBlobHandlerConfig *)0x0;
  this->NextPartIndex = 0;
  this->NextSequenceSumber = 0;
  this->LastPartSequenceNumber = 0xffffffff;
  this->FirstPayloadBitCount = 0;
  this->bIsReadyToAssemble = false;
  this->bIsBrokenSequence = false;
  this->bIsProcessingReliable = false;
  return this;
}

// AddPartialNetBlob @ 14422eb80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FNetBlobAssembler::AddPartialNetBlob
          (FNetBlobAssembler *this,FNetSerializationContext *param_1,FNetRefHandle param_2,
          TRefCountPtr<UE::Net::FPartialNetBlob> *param_3)

{
  bool *pbVar1;
  ushort uVar2;
  uint uVar3;
  FPartialNetBlob *pFVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 local_res8 [8];
  
  this->bIsReadyToAssemble = false;
  if (((this->PartialNetBlobHandlerConfig == (USequentialPartialNetBlobHandlerConfig *)0x0) &&
      (bVar5 = `UE::Net::FNetBlobAssembler::AddPartialNetBlob'::__l3::<lambda_1>::operator()
                         (local_res8), FVar8 = GNetError_InvalidValue, !bVar5)) ||
     (FVar8 = NetError_PartialNetBlobSequenceError, this->bIsBrokenSequence != false)) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar8);
    return;
  }
  pFVar4 = param_3->Reference;
  uVar6 = this->NextSequenceSumber;
  uVar10 = (char)pFVar4->SequenceFlags & IsFirstPart;
  uVar3 = pFVar4->SequenceNumber;
  bVar5 = (bool)(*(byte *)((longlong)&pFVar4->_padding_ + 4) & 1);
  pbVar1 = &this->bIsProcessingReliable;
  if ((uVar3 == uVar6) && (bVar5 == *pbVar1)) {
LAB_14422ec50:
    *pbVar1 = bVar5;
    if (uVar10 != None) {
      uVar6 = 0;
      if ((param_3->Reference->SequenceFlags & IsFirstPart) == None) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)param_3->Reference->PartCount;
      }
      this->NextSequenceSumber = uVar3;
      if ((param_3->Reference->SequenceFlags & IsFirstPart) != None) {
        uVar6 = (uint)param_3->Reference->PartCount;
      }
      this->LastPartSequenceNumber = (uVar6 - 1) + uVar3;
      if (((uVar9 != 0) && (uVar9 <= this->PartialNetBlobHandlerConfig->MaxPartCount)) &&
         (uVar2 = param_3->Reference->PayloadBitCount,
         (uint)uVar2 <= this->PartialNetBlobHandlerConfig->MaxPartBitCount)) {
        (this->RefHandle).field0_0x0._s_0 = (FNetRefHandle_u_0_s_0)param_2.field0_0x0;
        this->NetBlobCreationInfo = param_3->Reference->OriginalCreationInfo;
        this->FirstPayloadBitCount = (uint)uVar2;
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->Payload,(uVar2 + 7 >> 3) * uVar9 + 3 >> 2,Default);
        FNetBitStreamWriter::InitBytes
                  (&this->BitWriter,(this->Payload).AllocatorInstance.Data,
                   (this->Payload).ArrayNum << 2);
        pFVar7 = (param_3->Reference->Payload).AllocatorInstance.Data;
LAB_14422ed59:
        FNetBitStreamWriter::WriteBitStream(&this->BitWriter,(uint *)pFVar7,0,(uint)uVar2);
        if (this->NextSequenceSumber == this->LastPartSequenceNumber) {
          this->bIsReadyToAssemble = true;
          return;
        }
        this->NextSequenceSumber = this->NextSequenceSumber + 1;
        return;
      }
      this->bIsBrokenSequence = true;
      FVar8 = GNetError_InvalidValue;
      goto LAB_14422ed3c;
    }
    if ((((ulonglong)param_2.field0_0x0 ^ (this->RefHandle).field0_0x0.Value) & 0x3fffffffffffff) ==
        0) {
      uVar3 = this->FirstPayloadBitCount;
      uVar2 = param_3->Reference->PayloadBitCount;
      if ((uVar2 == uVar3) ||
         ((uVar6 == this->LastPartSequenceNumber && (uVar2 < uVar3 || uVar2 == uVar3)))) {
        pFVar7 = (param_3->Reference->Payload).AllocatorInstance.Data;
        goto LAB_14422ed59;
      }
      this->bIsBrokenSequence = true;
      FVar8 = GNetError_InvalidValue;
      goto LAB_14422ed3c;
    }
  }
  else if (*pbVar1 == false) {
    if ((uVar10 == None) && (uVar3 != uVar6)) {
      this->bIsBrokenSequence = true;
      FVar8 = NetError_PartialNetBlobSequenceError;
      if (bVar5 == false) {
        return;
      }
      goto LAB_14422ed3c;
    }
    goto LAB_14422ec50;
  }
  this->bIsBrokenSequence = true;
  FVar8 = NetError_PartialNetBlobSequenceError;
LAB_14422ed3c:
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar8);
  return;
}

// Assemble @ 144231ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<UE::Net::FNetBlob> __thiscall
UE::Net::FNetBlobAssembler::Assemble(FNetBlobAssembler *this,FNetSerializationContext *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  FNetRefHandle_u_0 FVar10;
  wchar_t *pwVar11;
  FNetRefHandle_u_0 FVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FNetSerializationContext *pFVar17;
  FNetSerializationContext *pFVar18;
  bool bVar19;
  FNetBitStreamWriter *pFVar20;
  FNetSerializationContext *pFVar21;
  FNetSerializationContext *pFVar22;
  longlong lVar23;
  FName FVar24;
  FNetSerializationContext *in_R8;
  undefined1 auStack_408 [32];
  FNetRefHandle_u_0 local_3e8 [2];
  FNetBitStreamWriter local_3d8;
  FNetSerializationContext local_3b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  this->bIsReadyToAssemble = false;
  (**(code **)*in_R8->NetBlobReceiver)(in_R8->NetBlobReceiver,local_3e8,this);
  FVar24 = GNetError_UnsupportedNetBlob;
  if (((in_R8->ErrorContext).Error != (FName)0x0) ||
     ((FRawDataNetBlob *)local_3e8[0].Value == (FRawDataNetBlob *)0x0)) {
    FNetSerializationContext::SetBitStreamOverflow(in_R8);
    FNetErrorContext::SetError(&in_R8->ErrorContext,FVar24);
    (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
    if ((FRawDataNetBlob *)local_3e8[0].Value == (FRawDataNetBlob *)0x0) {
      return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
    }
    plVar1 = (longlong *)(local_3e8[0].Value + 0x28);
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if (*(int *)plVar1 != 0) {
      return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
    }
    (**(code **)(*(longlong *)local_3e8[0] + 0x20))(local_3e8[0].Value,1);
    return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
  }
  FNetBitStreamWriter::CommitWrites(&this->BitWriter);
  FVar10 = local_3e8[0];
  if ((*(undefined1 *)(local_3e8[0].Value + 0xc) & 2) == 0) {
    FNetBitStreamReader::FNetBitStreamReader((FNetBitStreamReader *)&local_3d8);
    FNetBitStreamReader::InitBits
              ((FNetBitStreamReader *)&local_3d8,(this->Payload).AllocatorInstance.Data,
               (this->BitWriter).BufferBitPosition - (this->BitWriter).BufferBitStartOffset);
    lVar23 = 6;
    pFVar17 = in_R8;
    pFVar18 = &local_3b8;
    do {
      pFVar22 = pFVar18;
      pFVar21 = pFVar17;
      FVar24 = (pFVar21->ErrorContext).Error;
      pwVar9 = (pFVar21->ReadJournal).Entries[0].Name;
      FVar10 = (pFVar21->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
      (pFVar22->ErrorContext).ObjectHandle.field0_0x0 =
           (pFVar21->ErrorContext).ObjectHandle.field0_0x0;
      (pFVar22->ErrorContext).Error = FVar24;
      uVar2 = (pFVar21->ReadJournal).Entries[0].BitOffset;
      uVar5 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[0].field_0x14;
      pwVar11 = (pFVar21->ReadJournal).Entries[1].Name;
      (pFVar22->ReadJournal).Entries[0].Name = pwVar9;
      (pFVar22->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar10;
      FVar10 = (pFVar21->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
      uVar3 = (pFVar21->ReadJournal).Entries[1].BitOffset;
      uVar6 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[1].field_0x14;
      (pFVar22->ReadJournal).Entries[0].BitOffset = uVar2;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[0].field_0x14 = uVar5;
      (pFVar22->ReadJournal).Entries[1].Name = pwVar11;
      pwVar9 = (pFVar21->ReadJournal).Entries[2].Name;
      FVar12 = (pFVar21->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
      (pFVar22->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar10;
      (pFVar22->ReadJournal).Entries[1].BitOffset = uVar3;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[1].field_0x14 = uVar6;
      uVar2 = (pFVar21->ReadJournal).Entries[2].BitOffset;
      uVar5 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[2].field_0x14;
      pwVar11 = (pFVar21->ReadJournal).Entries[3].Name;
      (pFVar22->ReadJournal).Entries[2].Name = pwVar9;
      (pFVar22->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar12;
      FVar10 = (pFVar21->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
      uVar3 = (pFVar21->ReadJournal).Entries[3].BitOffset;
      uVar6 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[3].field_0x14;
      (pFVar22->ReadJournal).Entries[2].BitOffset = uVar2;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[2].field_0x14 = uVar5;
      (pFVar22->ReadJournal).Entries[3].Name = pwVar11;
      pwVar9 = (pFVar21->ReadJournal).Entries[4].Name;
      FVar12 = (pFVar21->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
      (pFVar22->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar10;
      (pFVar22->ReadJournal).Entries[3].BitOffset = uVar3;
      *(undefined4 *)&(pFVar22->ReadJournal).Entries[3].field_0x14 = uVar6;
      (pFVar22->ReadJournal).Entries[4].Name = pwVar9;
      (pFVar22->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar12;
      lVar23 = lVar23 + -1;
      pFVar17 = (FNetSerializationContext *)&(pFVar21->ReadJournal).Entries[4].BitOffset;
      pFVar18 = (FNetSerializationContext *)&(pFVar22->ReadJournal).Entries[4].BitOffset;
    } while (lVar23 != 0);
    uVar5 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[4].field_0x14;
    pwVar9 = (pFVar21->ReadJournal).Entries[5].Name;
    uVar4 = (this->RefHandle).field0_0x0.Value;
    FVar10 = (pFVar21->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
    uVar2 = (pFVar21->ReadJournal).Entries[5].BitOffset;
    uVar6 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[5].field_0x14;
    (pFVar22->ReadJournal).Entries[4].BitOffset = (pFVar21->ReadJournal).Entries[4].BitOffset;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[4].field_0x14 = uVar5;
    (pFVar22->ReadJournal).Entries[5].Name = pwVar9;
    pwVar9 = (pFVar21->ReadJournal).Entries[6].Name;
    FVar12 = (pFVar21->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
    (pFVar22->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar10;
    (pFVar22->ReadJournal).Entries[5].BitOffset = uVar2;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[5].field_0x14 = uVar6;
    uVar2 = (pFVar21->ReadJournal).Entries[6].BitOffset;
    uVar5 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[6].field_0x14;
    pwVar11 = (pFVar21->ReadJournal).Entries[7].Name;
    (pFVar22->ReadJournal).Entries[6].Name = pwVar9;
    (pFVar22->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar12;
    FVar10 = (pFVar21->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
    uVar3 = (pFVar21->ReadJournal).Entries[7].BitOffset;
    uVar15 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[7].field_0x14;
    (pFVar22->ReadJournal).Entries[6].BitOffset = uVar2;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[6].field_0x14 = uVar5;
    (pFVar22->ReadJournal).Entries[7].Name = pwVar11;
    uVar5 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[8].Name;
    uVar6 = *(undefined4 *)((longlong)&(pFVar21->ReadJournal).Entries[8].Name + 4);
    uVar7 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
    uVar8 = *(undefined4 *)
             ((longlong)&(pFVar21->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4);
    uVar2 = (pFVar21->ReadJournal).Entries[8].BitOffset;
    uVar16 = *(undefined4 *)&(pFVar21->ReadJournal).Entries[8].field_0x14;
    (pFVar22->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar10;
    (pFVar22->ReadJournal).Entries[7].BitOffset = uVar3;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[7].field_0x14 = uVar15;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[8].Name = uVar5;
    *(undefined4 *)((longlong)&(pFVar22->ReadJournal).Entries[8].Name + 4) = uVar6;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = uVar7;
    *(undefined4 *)((longlong)&(pFVar22->ReadJournal).Entries[8].NetRefHandle.field0_0x0 + 4) =
         uVar8;
    (pFVar22->ReadJournal).Entries[8].BitOffset = uVar2;
    *(undefined4 *)&(pFVar22->ReadJournal).Entries[8].field_0x14 = uVar16;
    local_3b8.BitStreamReader = (FNetBitStreamReader *)&local_3d8;
    local_3b8.BitStreamWriter = (FNetBitStreamWriter *)0x0;
    local_3b8.TraceCollector = (FNetTraceCollector *)0x0;
    if (uVar4 == 0) {
      (**(code **)(*(longlong *)local_3e8[0] + 0x18))(local_3e8[0].Value,&local_3b8);
    }
    else {
      (**(code **)(*(longlong *)local_3e8[0] + 8))();
    }
    FVar24 = local_3b8.ErrorContext.Error;
    if (local_3b8.ErrorContext.Error == (FName)0x0) {
      bVar19 = FNetSerializationContext::IsBitStreamOverflown(&local_3b8);
      FVar24 = GNetError_BitStreamError;
      if (!bVar19) {
        if ((this->BitWriter).BufferBitPosition - (this->BitWriter).BufferBitStartOffset !=
            local_3d8.BufferBitPosition - local_3d8.BufferBitStartOffset) {
          FNetSerializationContext::SetBitStreamOverflow(in_R8);
          FNetErrorContext::SetError(&in_R8->ErrorContext,FVar24);
          (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
          FNetBitStreamReader::~FNetBitStreamReader((FNetBitStreamReader *)&local_3d8);
          goto LAB_144231ceb;
        }
        FNetBitStreamReader::~FNetBitStreamReader((FNetBitStreamReader *)&local_3d8);
        goto LAB_144231cd7;
      }
      FVar24 = local_3b8.ErrorContext.Error;
      if (local_3b8.ErrorContext.Error == (FName)0x0) {
        FVar24 = GNetError_BitStreamOverflow;
      }
    }
    FNetSerializationContext::SetBitStreamOverflow(in_R8);
    FNetErrorContext::SetError(&in_R8->ErrorContext,FVar24);
    (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
    FNetBitStreamReader::~FNetBitStreamReader((FNetBitStreamReader *)&local_3d8);
  }
  else {
    uVar2 = (this->BitWriter).BufferBitPosition;
    uVar3 = (this->BitWriter).BufferBitStartOffset;
    pFVar20 = FNetBitStreamWriter::FNetBitStreamWriter(&local_3d8);
    uVar13 = pFVar20->BufferBitCapacity;
    uVar14 = pFVar20->BufferBitStartOffset;
    (this->BitWriter).Buffer = pFVar20->Buffer;
    (this->BitWriter).BufferBitCapacity = uVar13;
    (this->BitWriter).BufferBitStartOffset = uVar14;
    uVar13 = pFVar20->PendingWord;
    uVar14 = pFVar20->OverflowBitCount;
    uVar5 = *(undefined4 *)&pFVar20->field_0x1c;
    (this->BitWriter).BufferBitPosition = pFVar20->BufferBitPosition;
    (this->BitWriter).PendingWord = uVar13;
    (this->BitWriter).OverflowBitCount = uVar14;
    *(undefined4 *)&(this->BitWriter).field_0x1c = uVar5;
    FNetBitStreamWriter::~FNetBitStreamWriter(&local_3d8);
    FRawDataNetBlob::SetRawData((FRawDataNetBlob *)FVar10,&this->Payload,uVar2 - uVar3);
LAB_144231cd7:
    (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = (ulong64)local_3e8[0];
    if ((FRawDataNetBlob *)local_3e8[0].Value == (FRawDataNetBlob *)0x0) {
      return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
    }
    *(int *)(local_3e8[0].Value + 0x28) = *(int *)(local_3e8[0].Value + 0x28) + 1;
  }
LAB_144231ceb:
  if ((FRawDataNetBlob *)local_3e8[0].Value != (FRawDataNetBlob *)0x0) {
    plVar1 = (longlong *)(local_3e8[0].Value + 0x28);
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if (*(int *)plVar1 == 0) {
      (**(code **)(*(longlong *)local_3e8[0] + 0x20))(local_3e8[0].Value,1);
    }
  }
  return (TRefCountPtr<UE::Net::FNetBlob>)(FNetBlob *)param_1;
}

// Init @ 144240140

void __thiscall
UE::Net::FNetBlobAssembler::Init(FNetBlobAssembler *this,FNetBlobAssemblerInitParams *param_1)

{
  USequentialPartialNetBlobHandlerConfig *pUVar1;
  undefined1 local_res8 [32];
  
  pUVar1 = param_1->PartialNetBlobHandlerConfig;
  this->PartialNetBlobHandlerConfig = pUVar1;
  if (pUVar1 == (USequentialPartialNetBlobHandlerConfig *)0x0) {
    `UE::Net::FNetBlobAssembler::Init'::__l2::<lambda_1>::operator()(local_res8);
    return;
  }
  return;
}

// operator() @ 1504b3610

bool __thiscall `UE::Net::FNetBlobAssembler::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7796838219022073835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7796838219022073835>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b36f0

bool __thiscall
`UE::Net::FNetBlobAssembler::AddPartialNetBlob'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7796838219022073828>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7796838219022073828>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

