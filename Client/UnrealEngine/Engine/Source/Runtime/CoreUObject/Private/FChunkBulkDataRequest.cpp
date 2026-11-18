// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FChunkBulkDataRequest @ 141f20b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FChunkBulkDataRequest * __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::FChunkBulkDataRequest
          (FChunkBulkDataRequest *this,TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *param_1,
          FIoBuffer *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->_padding_ = (longlong)&___7FChunkRequest_Private_BulkData_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)(param_2->CorePtr).Reference;
  (param_2->CorePtr).Reference = (BufCore *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UE__BulkData__Private__FChunkRequest__;
  this->_padding_ = (longlong)&_vftable__for__IBulkDataIORequest__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)&this->Callback = 0;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (param_1 != (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)0x0) {
    local_48 = *(longlong *)param_1;
    uStack_20 = (longlong *)0x0;
    if (local_48 != 0) {
      puVar9 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar9)(puVar9,&local_38);
    }
    lVar7 = *(longlong *)&this->Callback;
    uVar8 = *(undefined8 *)&(this->Callback).field_0x8;
    uVar1 = *(undefined4 *)&(this->Callback).field_0x10;
    uVar2 = *(undefined4 *)&(this->Callback).field_0x14;
    uVar3 = *(undefined4 *)&(this->Callback).field_0x18;
    uVar4 = *(undefined4 *)&(this->Callback).field_0x1c;
    uVar5 = *(undefined8 *)&(this->Callback).field_0x20;
    plVar6 = *(longlong **)&(this->Callback).field_0x28;
    *(longlong *)&this->Callback = local_48;
    *(undefined8 *)&(this->Callback).field_0x8 = uStack_40;
    *(undefined4 *)&(this->Callback).field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(this->Callback).field_0x14 = local_38._4_4_;
    *(undefined4 *)&(this->Callback).field_0x18 = uStack_30;
    *(undefined4 *)&(this->Callback).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->Callback).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->Callback).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->Callback).field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(this->Callback).field_0x2c = uStack_20._4_4_;
    local_38._0_4_ = uVar1;
    local_38._4_4_ = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar5;
    uStack_20 = plVar6;
    if (lVar7 != 0) {
      plVar10 = &local_38;
      if (plVar6 != (longlong *)0x0) {
        plVar10 = plVar6;
      }
      local_48 = lVar7;
      uStack_40 = uVar8;
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return this;
}

// ~FChunkBulkDataRequest @ 141f23780

void __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::~FChunkBulkDataRequest(FChunkBulkDataRequest *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Callback != 0) {
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    plVar2 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IBulkDataIORequest__6B_;
  FChunkRequest::~FChunkRequest((FChunkRequest *)this);
  return;
}

// Cancel @ 141f2aa10

void __thiscall UE::BulkData::Private::FChunkBulkDataRequest::Cancel(FChunkBulkDataRequest *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((*(int *)&this[-1].Callback.field_0x28 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x7d,L"The request must be issued before it can be canceled"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = &this[-1].Callback.field_0x28;
  LOCK();
  bVar3 = *(int *)puVar1 == 1;
  if (bVar3) {
    *(undefined4 *)puVar1 = 2;
  }
  UNLOCK();
  if (!bVar3) {
    return;
  }
  FIoRequest::Cancel((FIoRequest *)&this[-1].Callback.field_0x18);
  return;
}

// GetReadResults @ 141f36030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uchar * __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::GetReadResults(FChunkBulkDataRequest *this)

{
  undefined8 *puVar1;
  uchar *puVar2;
  TIoStatusOr<unsigned_char_*> *this_00;
  undefined1 auStack_48 [32];
  TIoStatusOr<unsigned_char_*> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((*(uint *)&this[-1].Callback.field_0x28 & 4) == 0) {
    return (uchar *)0x0;
  }
  puVar1 = *(undefined8 **)&this[-1].Callback.field_0x8;
  if ((*(byte *)((longlong)puVar1 + 0x19) & 1) != 0) {
    this_00 = FIoBuffer::Release((FIoBuffer *)&this[-1].Callback.field_0x8,&local_28);
    if ((this_00->StatusValue).ErrorCode != Ok) {
      StatusOrCrash(&this_00->StatusValue);
    }
    FIoStatus::operator=(&this_00->StatusValue,&FIoStatus::Unknown);
    puVar2 = *(uchar **)(this_00->Value).Pad;
    FIoStatus::operator=(&local_28.StatusValue,Unknown);
    FIoStatus::~FIoStatus(&local_28.StatusValue);
    return puVar2;
  }
  return (uchar *)*puVar1;
}

// GetSize @ 141f36b20

long64 __thiscall UE::BulkData::Private::FChunkBulkDataRequest::GetSize(FChunkBulkDataRequest *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (*(int *)&this[-1].Callback.field_0x28 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetStatus() != EChunkRequestStatus::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x13a,L"The request must be issued before polling for size");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
  }
  if ((*(uint *)&this[-1].Callback.field_0x28 & 4) != 0) {
    return *(long64 *)&this[-1].Callback.field_0x20;
  }
  return -1;
}

// HandleChunkResult @ 141f36fa0

void __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::HandleChunkResult
          (FChunkBulkDataRequest *this,TIoStatusOr<FIoBuffer> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  longlong *local_res18 [2];
  
  if (*(void **)&this->Callback != (void *)0x0) {
    local_res8[0] = (param_1->StatusValue).ErrorCode != Ok;
    local_res18[0] = &this->_padding_;
    Core::Private::Function::CheckCallable(*(void **)&this->Callback);
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    pcVar2 = *(code **)&this->Callback;
    plVar4 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8,local_res18);
  }
  return;
}

// PollCompletion @ 141f40330

bool __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::PollCompletion(FChunkBulkDataRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*(int *)&this[-1].Callback.field_0x28 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetStatus() != EChunkRequestStatus::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,300,L"The request must be issued before polling for completion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)((byte)(*(uint *)&this[-1].Callback.field_0x28 >> 3) & 1);
}

// WaitCompletion @ 141f50570

bool __thiscall
UE::BulkData::Private::FChunkBulkDataRequest::WaitCompletion
          (FChunkBulkDataRequest *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  FMonotonicTimePoint FVar5;
  
  if ((*(int *)&this[-1].Callback.field_0x28 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x132,L"The request must be issued before waiting for completion"), bVar3)
     ) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((*(int *)&this[-1].Callback.field_0x28 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x76,L"The request must be issued before waiting for completion"), bVar3))
  {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  dVar2 = __real_7ff0000000000000;
  if ((0.0 < param_1) && (dVar2 = (double)param_1, (double)param_1 == 0.0)) {
    return (bool)(this[-1].Callback.field_0x10 & 1);
  }
  FVar5 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  bVar3 = FManualResetEvent::WaitUntil
                    ((FManualResetEvent *)&this[-1].Callback.field_0x10,
                     (FMonotonicTimePoint)(dVar2 + *FVar5.Time));
  return bVar3;
}

