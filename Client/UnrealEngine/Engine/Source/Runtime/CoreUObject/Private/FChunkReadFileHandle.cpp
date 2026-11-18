// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// FChunkReadFileHandle @ 141f20c20

/* WARNING: Enum "Type": Some values do not have unique names */

FChunkReadFileHandle * __thiscall
UE::BulkData::Private::FChunkReadFileHandle::FChunkReadFileHandle
          (FChunkReadFileHandle *this,FIoChunkId *param_1,FIoOffsetAndLength *param_2,
          ulong64 param_3,ulong64 param_4)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7IAsyncReadFileHandle__6B_;
  FVar3 = StatPtr_STAT_AsyncFileHandles;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_AsyncFileHandles");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar2,
                       L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  this->_padding_ = (longlong)&___7FChunkReadFileHandle_Private_BulkData_UE__6B_;
  *(undefined8 *)(this->ChunkId).Id = *(undefined8 *)param_1->Id;
  *(undefined4 *)((this->ChunkId).Id + 8) = *(undefined4 *)(param_1->Id + 8);
  *(undefined8 *)(this->ChunkRange).OffsetAndLength = *(undefined8 *)param_2->OffsetAndLength;
  *(undefined2 *)((this->ChunkRange).OffsetAndLength + 8) =
       *(undefined2 *)(param_2->OffsetAndLength + 8);
  this->AvailableChunkSize = param_4;
  this->ChunkSize = param_3;
  return this;
}

// ~FChunkReadFileHandle @ 141f237e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::BulkData::Private::FChunkReadFileHandle::~FChunkReadFileHandle(FChunkReadFileHandle *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FStackX_8;
  FStatMessage FStack_18;
  
  this->_padding_ = (longlong)&___7IAsyncReadFileHandle__6B_;
  FVar3 = StatPtr_STAT_AsyncFileHandles;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar2 = ::FName::FName(&FStackX_8,"STAT_AsyncFileHandles");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar2,
                       L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    FStackX_8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    FStack_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    FStack_18.StatData.Pad[0] = '\x01';
    FStack_18.StatData.Pad[1] = '\0';
    FStack_18.StatData.Pad[2] = '\0';
    FStack_18.StatData.Pad[3] = '\0';
    FStack_18.StatData.Pad[4] = '\0';
    FStack_18.StatData.Pad[5] = '\0';
    FStack_18.StatData.Pad[6] = '\0';
    FStack_18.StatData.Pad[7] = '\0';
    FStackX_8 = FVar1;
    FStack_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&FStack_18);
    FStatsTrace::Add(&FStackX_8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// ReadRequest @ 141f419c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
UE::BulkData::Private::FChunkReadFileHandle::ReadRequest
          (FChunkReadFileHandle *this,long64 param_1,long64 param_2,EAsyncIOPriorityAndFlags param_3
          ,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  FIoBuffer *pFVar11;
  IAsyncReadRequest *pIVar12;
  IAsyncReadRequest *this_00;
  IAsyncReadRequest *pIVar13;
  FIoBuffer this_01;
  IAsyncReadRequest *this_02;
  FIoBuffer local_res8;
  ulong64 local_res10;
  FIoChunkId local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  ulong64 local_80;
  long64 lStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  uint uStack_64;
  FIoReadOptions local_58;
  
  local_res10 = param_1;
  if (param_5 == (uchar *)0x0) {
    pFVar11 = FIoBuffer::FIoBuffer(&local_res8,param_2);
    this_00 = (IAsyncReadRequest *)(pFVar11->CorePtr).Reference;
    (pFVar11->CorePtr).Reference = (BufCore *)0x0;
    this_01.CorePtr.Reference = local_res8.CorePtr.Reference;
  }
  else {
    pFVar11 = FIoBuffer::FIoBuffer((FIoBuffer *)&param_5,Wrap,param_5,param_2);
    this_00 = (IAsyncReadRequest *)(pFVar11->CorePtr).Reference;
    (pFVar11->CorePtr).Reference = (BufCore *)0x0;
    this_01.CorePtr.Reference =
         (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)param_5;
  }
  if (this_01.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
    LOCK();
    piVar1 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
      ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
    }
  }
  pIVar12 = ::operator_new(0x80);
  pIVar13 = (IAsyncReadRequest *)0x0;
  this_02 = pIVar13;
  if (pIVar12 != (IAsyncReadRequest *)0x0) {
    *(undefined ***)pIVar12 = &___7FChunkRequest_Private_BulkData_UE__6B_;
    (pIVar12->field8_0x8).Memory = (uchar *)this_00;
    *(undefined8 *)&(pIVar12->Callback).field_0x8 = 0;
    *(undefined1 *)&pIVar12->Callback = 0;
    *(undefined8 *)&(pIVar12->Callback).field_0x10 = 0xffffffffffffffff;
    *(undefined4 *)&(pIVar12->Callback).field_0x18 = 0;
    IAsyncReadRequest::IAsyncReadRequest
              ((IAsyncReadRequest *)&(pIVar12->Callback).field_0x20,param_4,false,(uchar *)0x0);
    *(undefined ***)pIVar12 =
         &FChunkReadFileRequest::_vftable__for__UE__BulkData__Private__FChunkRequest__;
    *(undefined ***)&(pIVar12->Callback).field_0x20 =
         &FChunkReadFileRequest::_vftable__for__IAsyncReadRequest__;
    puVar3 = (pIVar12->field8_0x8).Memory;
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    uVar7 = puVar3[4];
    uVar8 = puVar3[5];
    uVar9 = puVar3[6];
    uVar10 = puVar3[7];
    (pIVar12->Callback).field_0x28 = puVar3[0];
    (pIVar12->Callback).field_0x29 = uVar4;
    (pIVar12->Callback).field_0x2a = uVar5;
    (pIVar12->Callback).field_0x2b = uVar6;
    (pIVar12->Callback).field_0x2c = uVar7;
    (pIVar12->Callback).field_0x2d = uVar8;
    (pIVar12->Callback).field_0x2e = uVar9;
    (pIVar12->Callback).field_0x2f = uVar10;
    this_00 = pIVar13;
    this_02 = pIVar12;
  }
  local_98 = ___xmm_00000000ffffffffc000000080000000;
  uStack_90 = _UNK_1507f9e48;
  local_80 = local_res10;
  local_a8.Id._8_4_ = *(undefined4 *)((this->ChunkId).Id + 8);
  lStack_78 = param_2;
  local_70 = 0;
  uStack_68 = 0;
  local_58._24_8_ = (ulonglong)uStack_64 << 0x20;
  local_88 = 0x3fffffff;
  local_58.RequestedOffset = local_res10;
  local_58.RequestedSize = param_2;
  local_a8.Id._0_8_ = *(undefined8 *)(this->ChunkId).Id;
  local_84 = 0x7fffffff;
  local_58.TargetVa = (void *)0x0;
  FChunkRequest::Issue
            ((FChunkRequest *)this_02,&local_a8,&local_58,
             *(int *)((longlong)&local_98 + (ulonglong)(param_3 & AIOP_PRIORITY_MASK) * 4));
  pIVar12 = (IAsyncReadRequest *)&(this_02->Callback).field_0x20;
  if (this_02 == (IAsyncReadRequest *)0x0) {
    pIVar12 = pIVar13;
  }
  if (this_00 != (IAsyncReadRequest *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)this_00);
    LOCK();
    piVar1 = (int *)((longlong)&this_00->field8_0x8 + 4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  return pIVar12;
}

// SizeRequest @ 141f4dc60

IAsyncReadRequest * __thiscall
UE::BulkData::Private::FChunkReadFileHandle::SizeRequest
          (FChunkReadFileHandle *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1)

{
  ulong64 uVar1;
  IAsyncReadRequest *this_00;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (IAsyncReadRequest *)0x0) {
    uVar1 = this->ChunkSize;
    IAsyncReadRequest::IAsyncReadRequest(this_00,param_1,true,(uchar *)0x0);
    *(undefined ***)this_00 = &___7FChunkFileSizeRequest_Private_BulkData_UE__6B_;
    if (uVar1 != 0) {
      (this_00->field8_0x8).Size = uVar1;
    }
    IAsyncReadRequest::SetDataComplete(this_00);
    this_00->bCompleteAndCallbackCalled = true;
    return this_00;
  }
  return (IAsyncReadRequest *)0x0;
}

