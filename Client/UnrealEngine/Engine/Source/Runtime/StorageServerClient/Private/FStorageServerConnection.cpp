// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 28

// operator() @ 148cb81a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>::operator()
          (void *this,TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FStorageServerConnection *this_00;
  double dVar7;
  undefined8 this_01;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  LARGE_INTEGER local_68;
  char local_60;
  TIoStatusOr<FIoBuffer> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_60 = *(char *)((longlong)this + 0x20);
  bVar4 = *(bool *)((longlong)this + 0x28);
  if (local_60 != '\0') {
    local_68 = (LARGE_INTEGER)((LARGE_INTEGER *)((longlong)this + 0x18))->QuadPart;
    if (local_68.QuadPart != 0) {
      LOCK();
      *(int *)(local_68.QuadPart + 0xc) = *(int *)(local_68.QuadPart + 0xc) + 1;
      UNLOCK();
    }
  }
  uVar5 = *(ulong64 *)((longlong)this + 0x10);
  uVar6 = *(ulong64 *)((longlong)this + 8);
  FIoStatus::FIoStatus((FIoStatus *)local_88);
  FIoStatus::operator=((FIoStatus *)local_88,(FIoStatus *)param_1);
  if (local_88._8_4_ == Ok) {
    local_88._16_8_ = *(undefined8 *)&param_1->field_0x10;
    if ((uchar  [8])local_88._16_8_ != (uchar  [8])0x0) {
      LOCK();
      *(int *)(local_88._16_8_ + 0xc) = *(int *)(local_88._16_8_ + 0xc) + 1;
      UNLOCK();
    }
  }
  local_88[0x18] = param_1->field_0x18;
  FStorageServerConnection::ReadChunkRequestProcessHttpResult
            (&local_58,(TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)local_88,uVar6,
             uVar5,(TOptional<FIoBuffer> *)&local_68.s,bVar4);
  if (local_58.StatusValue.ErrorCode == Ok) {
    QueryPerformanceCounter(&local_68);
    this_00 = *(FStorageServerConnection **)this;
    dVar7 = (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar3 = *(double *)((longlong)this + 0x40);
    if (local_58.StatusValue.ErrorCode != Ok) {
      StatusOrCrash(&local_58.StatusValue);
    }
    FStorageServerConnection::AddTimingInstance
              (this_00,dVar7 - dVar3,
               (ulonglong)
               CONCAT14(*(uchar *)((longlong)local_58.Value.Pad + 0x18),
                        *(uint *)((longlong)local_58.Value.Pad + 8)));
  }
  FIoStatus::FIoStatus((FIoStatus *)local_88);
  FIoStatus::operator=((FIoStatus *)local_88,&local_58.StatusValue);
  if (local_88._8_4_ == Ok) {
    local_88[0x10] = local_58.Value.Pad[0];
    local_88[0x11] = local_58.Value.Pad[1];
    local_88[0x12] = local_58.Value.Pad[2];
    local_88[0x13] = local_58.Value.Pad[3];
    local_88[0x14] = local_58.Value.Pad[4];
    local_88[0x15] = local_58.Value.Pad[5];
    local_88[0x16] = local_58.Value.Pad[6];
    local_88[0x17] = local_58.Value.Pad[7];
    if (local_58.Value.Pad != (uchar  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_58.Value.Pad + 0xc) =
           *(int *)((longlong)local_58.Value.Pad + 0xc) + 1;
      UNLOCK();
    }
  }
  (**(code **)((longlong)this + 0x30))(*(undefined8 *)((longlong)this + 0x38),local_88);
  FIoStatus::operator=((FIoStatus *)local_88,Unknown);
  this_01 = local_88._16_8_;
  if ((local_88._8_4_ == Ok) && ((uchar  [8])local_88._16_8_ != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_88._16_8_);
    LOCK();
    piVar1 = (int *)(this_01 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01);
      ::operator_delete((void *)this_01,0x20);
    }
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_88);
  FIoStatus::operator=(&local_58.StatusValue,Unknown);
  if ((local_58.StatusValue.ErrorCode == Ok) && (local_58.Value.Pad != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_58.Value.Pad);
    LOCK();
    piVar1 = (int *)((longlong)local_58.Value.Pad + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_58.Value.Pad);
      ::operator_delete((void *)local_58.Value.Pad,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_58.StatusValue);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>((TIoStatusOr<FIoBuffer> *)param_1);
  return;
}

// operator() @ 148cb8b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStorageServerConnection::ReadChunkRequest'::__l12::<lambda_1>::operator()
          (void *this,FIoChunkId *param_1,EStorageServerContentType param_2,FIoBuffer param_3,
          TOptional<unsigned___int64> *param_4)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  code *pcVar3;
  undefined8 this_01;
  bool bVar4;
  undefined1 auStackY_78 [32];
  undefined1 local_40 [24];
  EStorageServerContentType local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((**(longlong **)this != *(longlong *)param_1->Id) ||
     ((int)(*(longlong **)this)[1] != *(int *)(param_1->Id + 8))) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8449410219921899106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                       ,0x19e,"ChunkId == Id");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FIoBuffer::MakeOwned((FIoBuffer *)param_3.CorePtr.Reference);
  FIoStatus::FIoStatus((FIoStatus *)local_40);
  FIoStatus::operator=((FIoStatus *)local_40,&FIoStatus::Ok);
  local_40._16_8_ = *(undefined8 *)param_3.CorePtr.Reference;
  if ((BufCore *)local_40._16_8_ != (BufCore *)0x0) {
    LOCK();
    ((BufCore *)local_40._16_8_)->NumRefs = ((BufCore *)local_40._16_8_)->NumRefs + 1;
    UNLOCK();
  }
  local_28 = param_2;
  TTuple<TIoStatusOr<FIoBuffer>,enum_EStorageServerContentType>::operator=
            (*(void **)((longlong)this + 8),
             (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)local_40);
  FIoStatus::operator=((FIoStatus *)local_40,Unknown);
  this_01 = local_40._16_8_;
  if ((local_40._8_4_ == Ok) && ((BufCore *)local_40._16_8_ != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_40._16_8_);
    LOCK();
    piVar1 = (int *)(this_01 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01);
      ::operator_delete((void *)this_01,0x20);
    }
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_40);
  if (param_4->bIsSet == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(ulong64 **)((longlong)this + 0x10) = param_4->TypedValue;
  this_00 = *(BufCore **)param_3.CorePtr.Reference;
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
  return;
}

// AddTimingInstance @ 148cbc9e0

void __thiscall
FStorageServerConnection::AddTimingInstance
          (FStorageServerConnection *this,double param_1,ulong64 param_2)

{
  atomic<double> aVar1;
  ushort uVar2;
  bool bVar3;
  atomic<double> aVar4;
  double dVar5;
  atomic<double> aVar6;
  
  if (0.0 <= param_1) {
    if ((longlong)(param_2 * 8) < 0) {
      dVar5 = (double)((param_2 & 0x1fffffffffffffff) << 2);
      dVar5 = dVar5 + dVar5;
    }
    else {
      dVar5 = (double)(longlong)(param_2 * 8);
    }
    aVar6 = (atomic<double>)((dVar5 / param_1) * __real_3eb0c6f7a0b5ed8d);
    LOCK();
    this->AccumulatedBytes = (atomic<unsigned___int64>)((longlong)this->AccumulatedBytes + param_2);
    UNLOCK();
    LOCK();
    this->RequestCount = (atomic<unsigned_int>)((int)this->RequestCount + 1);
    UNLOCK();
    do {
      aVar1 = this->MinRequestThroughput;
      aVar4 = aVar1;
      if ((double)aVar6 <= (double)aVar1) {
        aVar4 = aVar6;
      }
      LOCK();
      bVar3 = aVar1 == this->MinRequestThroughput;
      if (bVar3) {
        this->MinRequestThroughput = aVar4;
      }
      UNLOCK();
    } while (!bVar3);
    do {
      aVar1 = this->MaxRequestThroughput;
      aVar4 = aVar1;
      if ((double)aVar1 <= (double)aVar6) {
        aVar4 = aVar6;
      }
      LOCK();
      bVar3 = aVar1 == this->MaxRequestThroughput;
      if (bVar3) {
        this->MaxRequestThroughput = aVar4;
      }
      UNLOCK();
    } while (!bVar3);
  }
  if ((param_2 != 0) &&
     (__GTraceCounterZenHttpClientThroughputBytes.Value =
           __GTraceCounterZenHttpClientThroughputBytes.Value + param_2,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterZenHttpClientThroughputBytes.CounterId == (atomic<unsigned_int>)0x0) {
      uVar2 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenHttpClientThroughputBytes.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterZenHttpClientThroughputBytes.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenHttpClientThroughputBytes.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenHttpClientThroughputBytes.CounterId._2_2_ = 0;
        __GTraceCounterZenHttpClientThroughputBytes.CounterId._0_2_ = uVar2;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenHttpClientThroughputBytes.CounterId._0_2_,
               __GTraceCounterZenHttpClientThroughputBytes.Value);
    return;
  }
  return;
}

// BuildReadChunkRequestUrl @ 148cbcf60

void __thiscall
FStorageServerConnection::BuildReadChunkRequestUrl
          (FStorageServerConnection *this,TStringBuilderBase<char> *param_1,FIoChunkId *param_2,
          ulong64 param_3,ulong64 param_4)

{
  TStringBuilderBase<char> *this_00;
  void *pvVar1;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this_00 = TStringBuilderBase<char>::Append<FAnsiString_&>(param_1,&this->BaseURI);
  if (this_00->End < this_00->CurPos + 1) {
    TStringBuilderBase<char>::Extend(this_00,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(this_00->CurPos,&s__,1);
  local_18.ArrayNum = 0xc;
  this_00->CurPos = (char *)((longlong)pvVar1 + 1);
  local_18.DataPtr = param_2->Id;
  UE::String::BytesToHexLower(&local_18,this_00);
  if (param_3 != 0) {
    local_18.DataPtr = "?";
    local_18.ArrayNum = 1;
    TStringBuilderBase<char>::Append<TStringView<char>_>(param_1,(TStringView<char> *)&local_18);
    TStringBuilderBase<char>::AppendfImpl(param_1,"offset=%llu");
  }
  if (param_4 != 0xffffffffffffffff) {
    local_18.ArrayNum = 1;
    if (param_3 == 0) {
      local_18.DataPtr = "?";
    }
    else {
      local_18.DataPtr = "&";
    }
    TStringBuilderBase<char>::Append<TStringView<char>_>(param_1,(TStringView<char> *)&local_18);
    TStringBuilderBase<char>::AppendfImpl(param_1,"size=%llu");
  }
  return;
}

// ChunkInfosRequest @ 148cbdc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cbdeaa) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStorageServerConnection::ChunkInfosRequest
          (FStorageServerConnection *this,
          TFunctionRef<void___cdecl(FIoChunkId,FIoHash,__int64)> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  int *piVar2;
  int iVar3;
  atomic<unsigned___int64> aVar4;
  IStorageServerHttpClient *pIVar5;
  code *pcVar6;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar7;
  bool bVar8;
  bool bVar9;
  FSharedBuffer FVar10;
  uchar this_00 [8];
  undefined4 uVar11;
  TStringBuilderBase<char> *this_01;
  FCbField *this_02;
  TCbBuffer<FCbFieldView> *pTVar13;
  FBufferOwner *pFVar14;
  char cVar15;
  bool bVar16;
  undefined1 auStack_448 [32];
  FCbFieldView *local_428;
  char **local_420;
  undefined1 local_418;
  FCbFieldView *local_410;
  undefined4 local_408;
  undefined1 local_400;
  char local_3f8;
  code *local_3e8;
  code *pcStack_3e0;
  TCbBuffer<FCbFieldView> local_3d8;
  undefined1 local_3b8 [32];
  TCbBuffer<FCbFieldView> local_398;
  char *local_378;
  void *pvStack_370;
  code *local_368;
  uchar auStack_360 [4];
  undefined4 uStack_35c;
  code *local_358;
  void *pvStack_350;
  char *local_348;
  uint uStack_340;
  undefined4 uStack_33c;
  TCbFieldIterator<FCbField> local_338;
  FString local_318;
  TCbBuffer<FCbArrayView> local_308;
  undefined *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FCbFieldView local_2d8;
  undefined1 local_2c8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_2b8 [2];
  FMemoryReaderView local_2a8;
  TCbBuffer<FCbFieldView> local_1f8;
  FIoStatus local_1d8;
  uchar local_1c8 [8];
  code *local_1b8;
  uchar auStack_1b0 [4];
  undefined4 uStack_1ac;
  FCbObjectId local_1a8;
  FIoHash local_19c;
  TIoStatusOr<FIoBuffer> local_188;
  TStringBuilderBase<char> local_168;
  undefined1 local_148 [256];
  ulonglong local_48 [2];
  size_t sVar12;
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_448;
  bVar9 = false;
  bVar8 = false;
  uVar11._0_1_ = '\0';
  uVar11._1_1_ = '\0';
  uVar11._2_1_ = '\0';
  uVar11._3_1_ = '\0';
  local_3b8._0_8_ = local_3b8._0_8_ & 0xffffffff00000000;
  bVar16 = CpuChannel->Enabled < 0;
  if (bVar16) {
    local_3f8 = '\0';
  }
  else {
    local_3f8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId291,"FStorageServerConnection::ChunkInfosRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x123);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId291);
  }
  cVar15 = !bVar16;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (char *)local_48;
  this_01 = TStringBuilderBase<char>::Append<FAnsiString_&>(&local_168,&this->BaseURI);
  TStringBuilderBase<char>::Append<char,0>(this_01,"/chunkinfos?fieldnames=id,rawhash,rawsize",0x29)
  ;
  pIVar5 = (this->HttpClient).Ptr;
  pcStack_3e0 = (code *)CONCAT44(pcStack_3e0._4_4_,3);
  pvStack_370 = (void *)((ulonglong)pvStack_370 & 0xffffffffffffff00);
  uStack_340 = uStack_340 & 0xffffff00;
  pcVar6 = *(code **)((longlong)*pIVar5 + 8);
  local_3e8 = (code *)0x150d74d54;
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<char>::Extend(&local_168,1);
  }
  *local_168.CurPos = '\0';
  local_1b8 = (code *)local_168.Base;
  if ((code *)local_168.Base != (code *)0x0) {
    sVar12 = strlen(local_168.Base);
    uVar11 = (undefined4)sVar12;
  }
  local_410 = (FCbFieldView *)&local_378;
  local_400 = 1;
  local_358 = local_3e8;
  pvStack_350 = pcStack_3e0;
  local_408 = __real_bf800000;
  local_418 = 0;
  local_428 = (FCbFieldView *)&local_358;
  local_368 = local_1b8;
  uStack_35c = uStack_1ac;
  local_420 = &local_348;
  auStack_360 = (uchar  [4])uVar11;
  auStack_1b0 = (uchar  [4])uVar11;
  (*pcVar6)(pIVar5,&local_188,&local_368,1);
  FIoStatus::FIoStatus(&local_1d8);
  FIoStatus::operator=(&local_1d8,&local_188.StatusValue);
  if ((local_1d8.ErrorCode == Ok) &&
     (local_1c8[0] = local_188.Value.Pad[0], local_1c8[1] = local_188.Value.Pad[1],
     local_1c8[2] = local_188.Value.Pad[2], local_1c8[3] = local_188.Value.Pad[3],
     local_1c8[4] = local_188.Value.Pad[4], local_1c8[5] = local_188.Value.Pad[5],
     local_1c8[6] = local_188.Value.Pad[6], local_1c8[7] = local_188.Value.Pad[7],
     local_188.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_188.Value.Pad + 0xc) =
         *(int *)((longlong)local_188.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  if (local_1d8.ErrorCode == Ok) {
    local_3e8 = *(code **)local_1c8;
    pcStack_3e0 = (code *)(ulonglong)
                          CONCAT14(*(uchar *)((longlong)local_1c8 + 0x18),
                                   *(uint *)((longlong)local_1c8 + 8));
    local_378 = (char *)local_3e8;
    pvStack_370 = pcStack_3e0;
    FMemoryReaderView::FMemoryReaderView(&local_2a8,(TMemoryView<void_const_> *)&local_378,false);
    pcStack_3e0 = FUniqueBuffer::Alloc;
    local_3e8 = UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
    this_02 = LoadCompactBinary((FCbField *)&local_308,(FArchive *)&local_2a8,
                                (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_3e8)
    ;
    FCbField::AsObject(this_02,(FCbObject *)local_2c8);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_308.Buffer.Owner);
    pcStack_3e0 = (code *)CONCAT44(pcStack_3e0._4_4_,10);
    local_3e8 = (code *)0x151cb8598;
    local_378 = "chunkinfos";
    pvStack_370 = pcStack_3e0;
    FCbObjectView::FindView
              ((FCbObjectView *)local_2c8,(FCbFieldView *)&local_3e8,
               (TStringView<char8_t> *)&local_378);
    if (((ulonglong)local_3e8 & 0x1f) == 0) {
      local_398._padding_ = 0;
      local_398._padding_ = 0;
      local_398.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      if (local_2b8[0].Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &(local_2b8[0].Owner)->ReferenceCountsAndFlags;
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
          LOCK();
          (local_2b8[0].Owner)->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((longlong)(local_2b8[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      local_3b8._0_8_ = local_2b8[0].Owner;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_398,(FCbFieldView *)&local_3e8,(FSharedBuffer)local_3b8);
    }
    FCbField::AsArray((FCbField *)&local_398,(FCbArray *)&local_308);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_398.Buffer.Owner);
    TCbBuffer<FCbArrayView>::begin(&local_308,(FCbFieldIterator *)&local_338);
    while (((byte)local_338._padding_ & 0x1f) != 0) {
      FCbFieldView::AsObjectView((FCbFieldView *)&local_338,(FCbObjectView *)&local_318);
      if (local_338._padding_._1_1_ == '\0') {
        local_1f8._padding_ = CONCAT62(local_338._padding_._2_6_,(ushort)(byte)local_338._padding_);
        bVar9 = true;
        local_1f8._padding_ = local_338._padding_;
        if ((FBufferOwner *)local_338._padding_ != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)(local_338._padding_ + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
            LOCK();
            *(atomic<unsigned___int64> *)(local_338._padding_ + 0x18) =
                 (atomic<unsigned___int64>)
                 ((longlong)*(atomic<unsigned___int64> *)(local_338._padding_ + 0x18) + 0x40000000);
            UNLOCK();
          }
        }
        local_1f8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_338._padding_;
        pTVar13 = (TCbBuffer<FCbFieldView> *)
                  FCbObject::FCbObject<FCbFieldView>
                            ((FCbObject *)local_3b8,(FCbObjectView *)&local_318,&local_1f8);
      }
      else {
        bVar8 = true;
        local_3d8._padding_ = 0;
        local_3d8._padding_ = 0;
        local_3d8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        FCbObjectView::FCbObjectView((FCbObjectView *)&local_3d8);
        pTVar13 = &local_3d8;
        local_3d8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      local_398._padding_ = pTVar13->_padding_;
      local_398._padding_ = pTVar13->_padding_;
      TVar7.Owner = (pTVar13->Buffer).Owner.Owner;
      (pTVar13->Buffer).Owner.Owner = (FBufferOwner *)0x0;
      FVar10.Owner.Owner = local_3d8.Buffer.Owner.Owner;
      local_398.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar7.Owner;
      if ((bVar8) && (bVar8 = false, local_3d8.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_3d8.Buffer.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar4._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_3d8.Buffer.Owner.Owner + 0x10))
                    (local_3d8.Buffer.Owner.Owner);
          *(void **)((longlong)FVar10.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar10.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar10.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar10.Owner.Owner)(FVar10.Owner.Owner,1);
          }
        }
      }
      if (bVar9) {
        bVar9 = false;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_3b8 + 0x10));
      }
      local_2e8 = &s_id;
      uStack_2e0 = 2;
      local_3b8._12_4_ = uStack_2dc;
      local_3b8._8_4_ = 2;
      local_3b8._0_8_ = &s_id;
      FCbObjectView::FindView
                ((FCbObjectView *)&local_398,&local_2d8,(TStringView<char8_t> *)local_3b8);
      if ((local_2d8.TypeWithFlags & CustomByName) == None) {
        local_1f8._padding_ = 0;
        local_1f8._padding_ = 0;
        local_1f8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        if (local_398.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
            LOCK();
            *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) =
                 (atomic<unsigned___int64>)
                 ((longlong)
                  *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) +
                 0x40000000);
            UNLOCK();
          }
        }
        local_3b8._0_8_ = local_398.Buffer.Owner.Owner;
        TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                  (&local_1f8,&local_2d8,(FSharedBuffer)local_3b8);
      }
      local_1a8.Bytes[0] = '\0';
      local_1a8.Bytes[1] = '\0';
      local_1a8.Bytes[2] = '\0';
      local_1a8.Bytes[3] = '\0';
      local_1a8.Bytes[4] = '\0';
      local_1a8.Bytes[5] = '\0';
      local_1a8.Bytes[6] = '\0';
      local_1a8.Bytes[7] = '\0';
      local_1a8.Bytes[8] = '\0';
      local_1a8.Bytes[9] = '\0';
      local_1a8.Bytes[10] = '\0';
      local_1a8.Bytes[0xb] = '\0';
      FCbFieldView::AsObjectId((FCbFieldView *)&local_1f8,(FCbObjectId *)&local_1b8,&local_1a8);
      FVar10.Owner.Owner = local_1f8.Buffer.Owner.Owner;
      if (local_1f8.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f8.Buffer.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar4._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_1f8.Buffer.Owner.Owner + 0x10))
                    (local_1f8.Buffer.Owner.Owner);
          *(void **)((longlong)FVar10.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar10.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar10.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar10.Owner.Owner)(FVar10.Owner.Owner,1);
          }
        }
      }
      local_368 = (code *)0x151cb85a8;
      auStack_360[0] = '\a';
      auStack_360[1] = '\0';
      auStack_360[2] = '\0';
      auStack_360[3] = '\0';
      local_3b8._12_4_ = uStack_35c;
      local_3b8._8_4_ = 7;
      local_3b8._0_8_ = "rawhash";
      FCbObjectView::FindView
                ((FCbObjectView *)&local_398,(FCbFieldView *)&local_358,
                 (TStringView<char8_t> *)local_3b8);
      if (((ulonglong)local_358 & 0x1f) == 0) {
        local_3d8._padding_ = 0;
        local_3d8._padding_ = 0;
        local_3d8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        if (local_398.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
            LOCK();
            *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) =
                 (atomic<unsigned___int64>)
                 ((longlong)
                  *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) +
                 0x40000000);
            UNLOCK();
          }
        }
        local_3b8._0_8_ = local_398.Buffer.Owner.Owner;
        TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                  (&local_3d8,(FCbFieldView *)&local_358,(FSharedBuffer)local_3b8);
      }
      local_1f8.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
           ((ulonglong)local_1f8.Buffer.Owner.Owner & 0xffffffff00000000);
      local_1f8._padding_ = 0;
      local_1f8._padding_ = 0;
      FCbFieldView::AsHash((FCbFieldView *)&local_3d8,&local_19c,(FIoHash *)&local_1f8);
      FVar10.Owner.Owner = local_3d8.Buffer.Owner.Owner;
      if (local_3d8.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_3d8.Buffer.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar4._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_3d8.Buffer.Owner.Owner + 0x10))
                    (local_3d8.Buffer.Owner.Owner);
          *(void **)((longlong)FVar10.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar10.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar10.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar10.Owner.Owner)(FVar10.Owner.Owner,1);
          }
        }
      }
      uStack_340 = 7;
      local_348 = "rawsize";
      local_3b8._12_4_ = uStack_33c;
      local_3b8._8_4_ = 7;
      local_3b8._0_8_ = "rawsize";
      FCbObjectView::FindView
                ((FCbObjectView *)&local_398,(FCbFieldView *)&local_378,
                 (TStringView<char8_t> *)local_3b8);
      if (((ulonglong)local_378 & 0x1f) == 0) {
        local_3d8._padding_ = 0;
        local_3d8._padding_ = 0;
        local_3d8.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        if (local_398.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
            LOCK();
            *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) =
                 (atomic<unsigned___int64>)
                 ((longlong)
                  *(atomic<unsigned___int64> *)((longlong)local_398.Buffer.Owner.Owner + 0x18) +
                 0x40000000);
            UNLOCK();
          }
        }
        local_3b8._0_8_ = local_398.Buffer.Owner.Owner;
        TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                  (&local_3d8,(FCbFieldView *)&local_378,(FSharedBuffer)local_3b8);
      }
      pFVar14 = (FBufferOwner *)
                FCbFieldView::AsInteger
                          ((FCbFieldView *)&local_3d8,0xffffffffffffffff,(FIntegerParams)0x7f);
      FVar10.Owner.Owner = local_3d8.Buffer.Owner.Owner;
      if (local_3d8.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_3d8.Buffer.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar4._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_3d8.Buffer.Owner.Owner + 0x10))
                    (local_3d8.Buffer.Owner.Owner);
          *(void **)((longlong)FVar10.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar10.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar10.Owner.Owner + 0x18);
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar10.Owner.Owner)(FVar10.Owner.Owner,1);
          }
        }
      }
      local_1f8.Buffer.Owner.Owner._0_1_ = local_19c.Hash[0x10];
      local_1f8.Buffer.Owner.Owner._1_1_ = local_19c.Hash[0x11];
      local_1f8.Buffer.Owner.Owner._2_1_ = local_19c.Hash[0x12];
      local_1f8.Buffer.Owner.Owner._3_1_ = local_19c.Hash[0x13];
      local_1f8._padding_._0_1_ = local_19c.Hash[0];
      local_1f8._padding_._1_1_ = local_19c.Hash[1];
      local_1f8._padding_._2_1_ = local_19c.Hash[2];
      local_1f8._padding_._3_1_ = local_19c.Hash[3];
      local_1f8._padding_._4_1_ = local_19c.Hash[4];
      local_1f8._padding_._5_1_ = local_19c.Hash[5];
      local_1f8._padding_._6_1_ = local_19c.Hash[6];
      local_1f8._padding_._7_1_ = local_19c.Hash[7];
      local_1f8._padding_._0_1_ = local_19c.Hash[8];
      local_1f8._padding_._1_1_ = local_19c.Hash[9];
      local_1f8._padding_._2_1_ = local_19c.Hash[10];
      local_1f8._padding_._3_1_ = local_19c.Hash[0xb];
      local_1f8._padding_._4_1_ = local_19c.Hash[0xc];
      local_1f8._padding_._5_1_ = local_19c.Hash[0xd];
      local_1f8._padding_._6_1_ = local_19c.Hash[0xe];
      local_1f8._padding_._7_1_ = local_19c.Hash[0xf];
      pcStack_3e0 = (code *)CONCAT44(pcStack_3e0._4_4_,auStack_1b0);
      local_3e8 = local_1b8;
      local_3b8._0_8_ = pFVar14;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_3e8,&local_1f8,local_3b8);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_398.Buffer.Owner);
      TCbFieldIterator<FCbField>::operator++(&local_338);
      cVar15 = local_3f8;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_338._padding_);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_308.Buffer.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_2b8);
    FArchive::~FArchive((FArchive *)&local_2a8);
  }
  else {
    FIoStatus::ToString(&local_1d8,&local_318);
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  FIoStatus::operator=(&local_1d8,Unknown);
  this_00 = local_1c8;
  if ((local_1d8.ErrorCode == Ok) && (local_1c8 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1c8);
    LOCK();
    piVar2 = (int *)((longlong)this_00 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
      ::operator_delete((void *)this_00,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_1d8);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_188);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_168);
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ChunkSizeRequest @ 148cbe580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FStorageServerConnection::ChunkSizeRequest(FStorageServerConnection *this,FIoChunkId *param_1)

{
  atomic<unsigned___int64> *paVar1;
  int *piVar2;
  atomic<unsigned___int64> aVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  ICacheStrategy *pIVar7;
  FScriptContainerElement *pFVar8;
  IStorageServerHttpClient *pIVar9;
  code *pcVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  FSharedBuffer FVar14;
  uchar this_00 [8];
  bool bVar15;
  char cVar16;
  void *pvVar17;
  size_t sVar18;
  FCbField *this_01;
  ulong64 uVar19;
  undefined4 uVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_348 [32];
  LARGE_INTEGER *local_328;
  undefined1 *local_320;
  undefined1 local_318;
  TCbBuffer<FCbFieldView> *local_310;
  undefined4 local_308;
  undefined1 local_300;
  FIoChunkId *local_2f8;
  code *pcStack_2f0;
  LARGE_INTEGER local_2e8;
  void *pvStack_2e0;
  ulong64 local_2d8;
  TCbBuffer<FCbFieldView> local_2d0;
  undefined1 local_2b8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_2a8 [2];
  undefined1 local_298 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_288 [2];
  FArchiveState local_278;
  undefined8 local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  FIoStatus local_1c8;
  uchar local_1b8 [8];
  TIoStatusOr<FIoBuffer> local_1b0;
  TStringBuilderBase<char> local_188;
  FIoChunkId local_168 [21];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_348;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId323,"FStorageServerConnection::ChunkSizeRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x143);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId323);
  }
  bVar15 = FinalizeSetupCacheStrategy(this);
  local_2d8 = 0;
  if (((!bVar15) || (pIVar7 = (this->CacheStrategy).Ptr, pIVar7 == (ICacheStrategy *)0x0)) ||
     (cVar16 = (**(code **)(pIVar7->_padding_ + 0x18))(pIVar7,param_1,&local_2d8),
     uVar19 = local_2d8, cVar16 == '\0')) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId333,"FStorageServerConnection::ChunkSizeRequest::Http",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0x14d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId333);
    }
    pFVar8 = (this->BaseURI).Data.AllocatorInstance.Data;
    local_188.Base = (char *)local_168;
    local_188.End = (char *)local_68;
    local_188.bIsDynamic = false;
    local_188.bIsExternal = false;
    local_188.CurPos = (char *)local_168;
    iVar5 = (this->BaseURI).Data.ArrayNum;
    iVar21 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar21 = 0;
    }
    uVar19 = (ulong64)iVar21;
    if (local_68 < local_168[0].Id + uVar19) {
      TStringBuilderBase<char>::Extend(&local_188,uVar19);
    }
    if (iVar21 != 0) {
      pvVar17 = FGenericPlatformString::Memcpy(local_188.CurPos,pFVar8,uVar19);
      local_188.CurPos = (char *)((longlong)pvVar17 + uVar19);
    }
    if (local_188.End < (uchar *)local_188.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_188,1);
    }
    pvVar17 = FGenericPlatformString::Memcpy(local_188.CurPos,&s__,1);
    local_188.CurPos = (char *)((longlong)pvVar17 + 1);
    pvStack_2e0 = (void *)CONCAT44(pvStack_2e0._4_4_,0xc);
    pcStack_2f0 = pvStack_2e0;
    local_2f8 = param_1;
    local_2e8 = (LARGE_INTEGER)param_1;
    UE::String::BytesToHexLower((TArrayView<unsigned_char_const_,int> *)&local_2f8,&local_188);
    if (local_188.End < local_188.CurPos + 5) {
      TStringBuilderBase<char>::Extend(&local_188,5);
    }
    pvVar17 = FGenericPlatformString::Memcpy(local_188.CurPos,"/info",5);
    local_188.CurPos = (char *)((longlong)pvVar17 + 5);
    QueryPerformanceCounter(&local_2e8);
    pIVar9 = (this->HttpClient).Ptr;
    pvStack_2e0 = (void *)CONCAT44(pvStack_2e0._4_4_,3);
    local_2d0._padding_ = local_2d0._padding_ & 0xffffffffffffff00;
    dVar13 = (double)local_2e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffffffffff00;
    pcVar10 = *(code **)((longlong)*pIVar9 + 8);
    local_2e8.QuadPart = 0x150d74d54;
    if (local_188.End < local_188.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_188,1);
    }
    *local_188.CurPos = '\0';
    uVar20 = 0;
    local_2f8 = (FIoChunkId *)local_188.Base;
    if ((FIoChunkId *)local_188.Base != (FIoChunkId *)0x0) {
      sVar18 = strlen(local_188.Base);
      uVar20 = (undefined4)sVar18;
    }
    local_310 = &local_2d0;
    local_300 = 1;
    local_308 = __real_bf800000;
    local_320 = local_2b8;
    local_318 = 0;
    local_328 = &local_2e8;
    pcStack_2f0 = (code *)CONCAT44(pcStack_2f0._4_4_,uVar20);
    (*pcVar10)(pIVar9,&local_1b0,&local_2f8,1);
    FIoStatus::FIoStatus(&local_1c8);
    FIoStatus::operator=(&local_1c8,&local_1b0.StatusValue);
    if (local_1c8.ErrorCode == Ok) {
      local_1b8[0] = local_1b0.Value.Pad[0];
      local_1b8[1] = local_1b0.Value.Pad[1];
      local_1b8[2] = local_1b0.Value.Pad[2];
      local_1b8[3] = local_1b0.Value.Pad[3];
      local_1b8[4] = local_1b0.Value.Pad[4];
      local_1b8[5] = local_1b0.Value.Pad[5];
      local_1b8[6] = local_1b0.Value.Pad[6];
      local_1b8[7] = local_1b0.Value.Pad[7];
      if (local_1b0.Value.Pad != (uchar  [8])0x0) {
        LOCK();
        *(int *)((longlong)local_1b0.Value.Pad + 0xc) =
             *(int *)((longlong)local_1b0.Value.Pad + 0xc) + 1;
        UNLOCK();
      }
      QueryPerformanceCounter(&local_2e8);
      dVar12 = (double)local_2e8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      if (local_1c8.ErrorCode != Ok) {
        StatusOrCrash(&local_1c8);
      }
      AddTimingInstance(this,dVar12 - dVar13,
                        (ulonglong)
                        CONCAT14(*(uchar *)((longlong)local_1b8 + 0x18),
                                 *(uint *)((longlong)local_1b8 + 8)));
      if (local_1c8.ErrorCode != Ok) {
        StatusOrCrash(&local_1c8);
      }
      uVar4 = *(uchar *)((longlong)local_1b8 + 0x18);
      uVar11 = *(undefined8 *)local_1b8;
      uVar6 = *(uint *)((longlong)local_1b8 + 8);
      local_278._padding_ = 0;
      local_278.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      local_278.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      local_278.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
      local_278.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      local_278._40_8_ = 0;
      local_278.ArSerializingDefaults = 0;
      local_278.ArPortFlags = 0;
      local_278.ArMaxSerializeSize = 0;
      local_278.ArUEVer.FileVersionUE4 = 0;
      local_278.ArUEVer.FileVersionUE5 = 0;
      local_278.ArLicenseeUEVer = 0;
      local_278.ArEngineVer.Major = 0;
      local_278.ArEngineVer.Minor = 0;
      local_278.ArEngineVer.Patch = 0;
      local_278.ArEngineVer._6_2_ = 0;
      local_278.ArEngineVer.Changelist = 0;
      local_278.CustomVersionContainer = (FCustomVersionContainer *)0x0;
      local_278.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      local_278.SavePackageData = (FArchiveSavePackageData *)0x0;
      local_278.SerializedProperty = (FProperty *)0x0;
      local_278.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      local_278.bCustomVersionsAreReset = false;
      local_278._129_7_ = 0;
      local_278.NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(&local_278);
      local_1e8 = 0;
      local_278._padding_ = (longlong)&___7FMemoryReaderView__6B_;
      local_1d0 = 0x7fffffffffffffff;
      local_1e0 = uVar11;
      local_1d8 = (ulonglong)CONCAT14(uVar4,uVar6);
      FArchiveState::SetIsLoading(&local_278,true);
      (**(code **)(local_278._padding_ + 0x108))(&local_278,0);
      pcStack_2f0 = FUniqueBuffer::Alloc;
      local_2f8 = (FIoChunkId *)
                  UE::Core::Private::Function::
                  TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                  ::Call;
      this_01 = LoadCompactBinary((FCbField *)local_2b8,(FArchive *)&local_278,
                                  (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)
                                  &local_2f8);
      FCbField::AsObject(this_01,(FCbObject *)local_298);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_2a8);
      pcStack_2f0 = (code *)CONCAT44(pcStack_2f0._4_4_,4);
      local_2f8 = (FIoChunkId *)&s_size;
      local_2b8._0_8_ = &s_size;
      local_2b8._8_8_ = pcStack_2f0;
      FCbObjectView::FindView
                ((FCbObjectView *)local_298,(FCbFieldView *)&local_2f8,
                 (TStringView<char8_t> *)local_2b8);
      if (((ulonglong)local_2f8 & 0x1f) == 0) {
        local_2d0._padding_ = 0;
        local_2d0._padding_ = 0;
        local_2d0.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        if (local_288[0].Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = &(local_288[0].Owner)->ReferenceCountsAndFlags;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
            LOCK();
            (local_288[0].Owner)->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((longlong)(local_288[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
            UNLOCK();
          }
        }
        local_2e8.QuadPart = (LONGLONG)local_288[0].Owner;
        TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                  (&local_2d0,(FCbFieldView *)&local_2f8,(FSharedBuffer)&local_2e8);
      }
      local_2d8 = FCbFieldView::AsInteger((FCbFieldView *)&local_2d0,0,(FIntegerParams)0x7f);
      FVar14.Owner.Owner = local_2d0.Buffer.Owner.Owner;
      if (local_2d0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)local_2d0.Buffer.Owner.Owner + 0x18);
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
        UNLOCK();
        if ((aVar3._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_2d0.Buffer.Owner.Owner + 0x10))
                    (local_2d0.Buffer.Owner.Owner);
          *(void **)((longlong)FVar14.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar14.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)FVar14.Owner.Owner + 0x18);
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar14.Owner.Owner)(FVar14.Owner.Owner,1);
          }
        }
      }
      pIVar7 = (this->CacheStrategy).Ptr;
      if (pIVar7 != (ICacheStrategy *)0x0) {
        (**(code **)(pIVar7->_padding_ + 0x10))(pIVar7,param_1,local_2d8);
      }
      uVar19 = local_2d8;
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_288);
      FArchive::~FArchive((FArchive *)&local_278);
    }
    else {
      if (local_1c8.ErrorCode != NotFound) {
        FIoStatus::ToString(&local_1c8,(FString *)local_2b8);
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
        if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_2b8._0_8_);
        }
      }
      uVar19 = 0xffffffffffffffff;
    }
    FIoStatus::operator=(&local_1c8,Unknown);
    this_00 = local_1b8;
    if ((local_1c8.ErrorCode == Ok) && (local_1b8 != (uchar  [8])0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)this_00 + 0xc);
      iVar21 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
        ::operator_delete((void *)this_00,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_1c8);
    TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_1b0);
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_188);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar19;
}

// CreateHttpClient @ 148cc02a0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_> __thiscall
FStorageServerConnection::CreateHttpClient
          (FStorageServerConnection *this,FString *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FString *pFVar5;
  TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_> TVar6;
  ForAnyElementType *pFVar7;
  FBuiltInHttpClientPlatformSocketPool *pFVar8;
  FBuiltInHttpClientPlatformSocketPool *pFVar9;
  ISocketSubsystem *pIVar10;
  FScriptContainerElement *pFVar11;
  atomic<int> *paVar12;
  longlong lVar13;
  undefined4 in_register_00000084;
  FString *pFVar14;
  int in_R9D;
  FName local_res10 [3];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  TSharedPtr<FInternetAddr,1> local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar14 = (FString *)CONCAT44(in_register_00000084,param_2);
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  pFVar5 = ::FString::FString(&local_68,pFVar14);
  StringToInternetAddr(this,&local_88,pFVar5,in_R9D);
  if (local_88.Object == (FInternetAddr *)0x0) {
    iVar1 = (pFVar14->Data).ArrayNum;
    pFVar11 = (pFVar14->Data).AllocatorInstance.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = iVar1;
    if (iVar1 == 0) {
      local_9c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_a8,iVar1,&local_9c);
      memcpy(local_a8.Data,pFVar11,(longlong)iVar1 * 2);
    }
    pFVar7 = &local_a8;
    bVar3 = false;
    bVar4 = true;
  }
  else {
    if ((local_88.Object == (FInternetAddr *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6.Ptr = (IStorageServerHttpClient *)(*pcVar2)();
      return (TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_>)
             TVar6.Ptr;
    }
    pFVar7 = (ForAnyElementType *)
             (**(code **)((longlong)*local_88.Object + 0x80))(local_88.Object,local_78,0);
    bVar3 = true;
    bVar4 = false;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = *(int *)&pFVar7[1].Data;
  lVar13 = (longlong)local_b0;
  pFVar11 = pFVar7->Data;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
    memcpy(local_b8.Data,pFVar11,lVar13 * 2);
  }
  pFVar9 = (FBuiltInHttpClientPlatformSocketPool *)0x0;
  if ((bVar4) && (local_a8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8.Data);
  }
  if ((bVar3) && (local_78[0] != (void *)0x0)) {
    FMemory::Free(local_78[0]);
  }
  if (3 < (byte)LogStorageServerConnection._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection)
    ;
  }
  pFVar5 = ::FString::FString(&local_58,pFVar14);
  bVar4 = ::FString::StartsWith(pFVar5,L"platform://",0xb,IgnoreCase);
  pFVar11 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (bVar4) {
    pFVar8 = ::operator_new(0x100,0x40);
    if (pFVar8 != (FBuiltInHttpClientPlatformSocketPool *)0x0) {
      pFVar5 = ::FString::FString(&local_48,pFVar14);
      pFVar9 = FBuiltInHttpClientPlatformSocketPool::FBuiltInHttpClientPlatformSocketPool
                         (pFVar8,pFVar5);
    }
  }
  else {
    local_res10[0].ComparisonIndex.Value = 0;
    local_res10[0].Number = 0;
    pIVar10 = ISocketSubsystem::Get(local_res10);
    pFVar8 = ::operator_new(0x80,0x40);
    if (pFVar8 != (FBuiltInHttpClientPlatformSocketPool *)0x0) {
      if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar12 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar12 = &(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      (pFVar8->Address).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_88.Object;
      *(undefined ***)pFVar8 = &___7FBuiltInHttpClientFSocketPool__6B_;
      *(TReferenceControllerBase<1> **)&(pFVar8->Address).Data.ArrayNum =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      pFVar8->Communication = (IPlatformHostCommunication *)pIVar10;
      *(undefined8 *)&pFVar8->SocketPool = 0;
      *(undefined8 *)&pFVar8->SocketPool = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      pFVar9 = pFVar8;
    }
  }
  pFVar11 = ::operator_new(0x20);
  _Src.Data = local_b8.Data;
  if (pFVar11 == (FScriptContainerElement *)0x0) {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pFVar9 != (FBuiltInHttpClientPlatformSocketPool *)0x0) {
      (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    }
  }
  else {
    lVar13 = (longlong)local_b0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = local_b0;
    if (local_b0 == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0,0,(ForAnyElementType *)&local_98,local_b0,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,lVar13 * 2);
    }
    *(FBuiltInHttpClientPlatformSocketPool **)(pFVar11 + 8) = pFVar9;
    *(undefined ***)pFVar11 = &___7FBuiltInHttpClient__6B_;
    ::FString::FString((FString *)(pFVar11 + 0x10),&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    (param_1->Data).AllocatorInstance.Data = pFVar11;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  pFVar11 = (pFVar14->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return (TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_>)
         (IStorageServerHttpClient *)param_1;
}

// CreateShare @ 148cc06d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cc0a0a) */
/* WARNING: Type propagation algorithm not settling */

TIoStatusOr<FString> * __thiscall
FStorageServerConnection::CreateShare
          (FStorageServerConnection *this,TIoStatusOr<FString> *__return_storage_ptr__,
          FString *param_1,FString *param_2,FString *param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  IStorageServerHttpClient *pIVar4;
  code *pcVar5;
  uchar this_00 [8];
  bool bVar6;
  void *pvVar7;
  size_t sVar8;
  FString *pFVar9;
  TIoStatusOr<FString> *pTVar10;
  ulong64 uVar11;
  int iVar12;
  undefined1 auStack_278 [32];
  char **local_258;
  undefined1 *local_250;
  undefined1 local_248;
  undefined1 *local_240;
  undefined4 local_238;
  undefined1 local_230;
  FString *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  FIoStatus local_218;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [8];
  undefined1 local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  FIoStatus local_1a8;
  uchar local_198 [8];
  TStringBuilderBase<char> local_188;
  TIoStatusOr<FIoBuffer> local_168 [10];
  TIoStatusOr<FIoBuffer> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_188.Base = (char *)local_168;
  local_188.End = (char *)&local_68;
  local_188.CurPos = (char *)local_168;
  iVar2 = (this->BaseURI).Data.ArrayNum;
  pFVar3 = (this->BaseURI).Data.AllocatorInstance.Data;
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  iVar12 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar12 = 0;
  }
  uVar11 = (ulong64)iVar12;
  local_228 = param_2;
  if (&local_68 <
      (TIoStatusOr<FIoBuffer> *)
      ((longlong)
       &(((TIoStatusOr<FIoBuffer> *)(&local_168[0].Value + -2))->StatusValue).ErrorMessage.Chars +
      uVar11)) {
    TStringBuilderBase<char>::Extend(&local_188,uVar11);
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,pFVar3,uVar11);
    local_188.CurPos = (char *)((longlong)pvVar7 + uVar11);
  }
  if (local_188.End <
      (TIoStatusOr<FIoBuffer> *)
      ((longlong)&(((FIoStatus *)local_188.CurPos)->ErrorMessage).Chars + 1)) {
    TStringBuilderBase<char>::Extend(&local_188,1);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,&s__,1);
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  local_188.CurPos = (char *)((longlong)pvVar7 + 1);
  iVar2 = (param_1->Data).ArrayNum;
  iVar12 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar12 = 0;
  }
  if (local_188.End < (TIoStatusOr<FIoBuffer> *)(local_188.CurPos + iVar12)) {
    TStringBuilderBase<char>::Extend(&local_188,(longlong)iVar12);
  }
  if (iVar12 != 0) {
    local_188.CurPos =
         FGenericPlatformString::Convert<wchar_t,char>
                   (local_188.CurPos,iVar12,(wchar_t *)pFVar3,iVar12);
  }
  if (local_188.End < (TIoStatusOr<FIoBuffer> *)(local_188.CurPos + 1)) {
    TStringBuilderBase<char>::Extend(&local_188,1);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,&s__,1);
  local_188.CurPos = (char *)((longlong)pvVar7 + 1);
  if (local_188.End < (TIoStatusOr<FIoBuffer> *)((longlong)pvVar7 + 0x19)) {
    TStringBuilderBase<char>::Extend(&local_188,0x18);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,"000000000000000000000000",0x18);
  local_188.CurPos = (char *)((longlong)pvVar7 + 0x18);
  if (local_188.End < (TIoStatusOr<FIoBuffer> *)((longlong)pvVar7 + 0x24)) {
    TStringBuilderBase<char>::Extend(&local_188,0xc);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,"?share_path=",0xc);
  local_188.CurPos = (char *)((longlong)pvVar7 + 0xc);
  PercentEncodeString(&local_188,local_228);
  if (1 < (param_3->Data).ArrayNum) {
    if (local_188.End < (TIoStatusOr<FIoBuffer> *)(local_188.CurPos + 7)) {
      TStringBuilderBase<char>::Extend(&local_188,7);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_188.CurPos,"&alias=",7);
    local_188.CurPos = (char *)((longlong)pvVar7 + 7);
    PercentEncodeString(&local_188,param_3);
  }
  pIVar4 = (this->HttpClient).Ptr;
  uStack_220 = 3;
  local_1f0 = 0;
  local_1e0 = 0;
  pcVar5 = *(code **)((longlong)*pIVar4 + 8);
  local_228 = (FString *)0x151cb82f8;
  if (local_188.End < (TIoStatusOr<FIoBuffer> *)(local_188.CurPos + 1)) {
    TStringBuilderBase<char>::Extend(&local_188,1);
  }
  *local_188.CurPos = '\0';
  uStack_200 = 0;
  local_208 = (TIoStatusOr<FIoBuffer> *)local_188.Base;
  if ((TIoStatusOr<FIoBuffer> *)local_188.Base != (TIoStatusOr<FIoBuffer> *)0x0) {
    sVar8 = strlen(local_188.Base);
    uStack_200 = (undefined4)sVar8;
  }
  uStack_1d0 = CONCAT44(uStack_21c,uStack_220);
  local_240 = local_1f8;
  local_230 = 1;
  local_1d8 = (char *)local_228;
  local_238 = __real_bf800000;
  local_250 = local_1e8;
  local_248 = 0;
  local_258 = &local_1d8;
  local_1c8 = (undefined4)local_208;
  uStack_1c4 = local_208._4_4_;
  uStack_1bc = uStack_1fc;
  uStack_1c0 = uStack_200;
  (*pcVar5)(pIVar4,&local_68,&local_1c8,0);
  FIoStatus::FIoStatus(&local_1a8);
  FIoStatus::operator=(&local_1a8,&local_68.StatusValue);
  if ((local_1a8.ErrorCode == Ok) &&
     (local_198[0] = local_68.Value.Pad[0], local_198[1] = local_68.Value.Pad[1],
     local_198[2] = local_68.Value.Pad[2], local_198[3] = local_68.Value.Pad[3],
     local_198[4] = local_68.Value.Pad[4], local_198[5] = local_68.Value.Pad[5],
     local_198[6] = local_68.Value.Pad[6], local_198[7] = local_68.Value.Pad[7],
     local_68.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_68.Value.Pad + 0xc) = *(int *)((longlong)local_68.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  if (local_1a8.ErrorCode == Ok) {
    pFVar9 = ::FString::ConstructFromPtrSize
                       (&local_1b8,*(char **)local_198,*(uint *)((longlong)local_198 + 8));
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    (__return_storage_ptr__->Value).Pad[0] = '\0';
    (__return_storage_ptr__->Value).Pad[1] = '\0';
    (__return_storage_ptr__->Value).Pad[2] = '\0';
    (__return_storage_ptr__->Value).Pad[3] = '\0';
    (__return_storage_ptr__->Value).Pad[4] = '\0';
    (__return_storage_ptr__->Value).Pad[5] = '\0';
    (__return_storage_ptr__->Value).Pad[6] = '\0';
    (__return_storage_ptr__->Value).Pad[7] = '\0';
    *(FScriptContainerElement **)(__return_storage_ptr__->Value).Pad =
         (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((__return_storage_ptr__->Value).Pad + 8) = (pFVar9->Data).ArrayNum;
    *(int *)((__return_storage_ptr__->Value).Pad + 0xc) = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_218.ErrorMessage.Chars = local_1a8.ErrorMessage.Chars;
    if (local_1a8.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_1a8.ErrorMessage.Chars + -4) = *(int *)(local_1a8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_218.ErrorCode = local_1a8.ErrorCode;
    local_218.SystemErrorCode = local_1a8.SystemErrorCode;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    if ((local_218.ErrorCode == Ok) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TIoStatusOr<FString> *)(*pcVar5)();
      return pTVar10;
    }
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_218);
    FIoStatus::~FIoStatus(&local_218);
  }
  FIoStatus::operator=(&local_1a8,Unknown);
  this_00 = local_198;
  if ((local_1a8.ErrorCode == Ok) && (local_198 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_198);
    LOCK();
    piVar1 = (int *)((longlong)this_00 + 0xc);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
      ::operator_delete((void *)this_00,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_1a8);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_68);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_188);
  return __return_storage_ptr__;
}

// FileManifestRequest @ 148cc2fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cc31de) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStorageServerConnection::FileManifestRequest
          (FStorageServerConnection *this,
          TFunctionRef<void___cdecl(FIoChunkId,TStringView<wchar_t>,__int64)> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  int *piVar2;
  atomic<unsigned___int64> aVar3;
  ulonglong uVar4;
  IStorageServerHttpClient *pIVar5;
  code *pcVar6;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar7;
  uchar *puVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  TCbBuffer<FCbObjectView> *pTVar13;
  FSharedBuffer FVar14;
  char *pcVar15;
  FScriptContainerElement *pFVar16;
  TStringBuilderBase<char> *this_00;
  size_t sVar17;
  TCbBuffer<FCbObjectView> *pTVar18;
  uchar auVar19 [8];
  TStringView<char8_t> *pTVar20;
  void *pvVar21;
  undefined4 uVar22;
  ulong64 uVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStack_5d8 [32];
  char **local_5b8;
  FCbFieldView *local_5b0;
  undefined1 local_5a8;
  undefined1 *local_5a0;
  undefined4 local_598;
  undefined1 local_590;
  char local_588;
  undefined1 local_578 [8];
  undefined8 uStack_570;
  TCbBuffer<FCbFieldView> local_568;
  char *local_548;
  void *pvStack_540;
  TCbBuffer<FCbFieldView> local_538;
  undefined1 local_518 [16];
  undefined8 local_508;
  uchar auStack_500 [4];
  undefined4 uStack_4fc;
  FCbFieldView local_4f8;
  char *local_4e8;
  void *pvStack_4e0;
  FCbFieldView local_4d8;
  TFunctionRef<void___cdecl(FIoChunkId,TStringView<wchar_t>,__int64)> *local_4c8;
  TCbFieldIterator<FCbField> local_4c0;
  undefined *local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  FCbFieldView local_488;
  char *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  TCbBuffer<FCbObjectView> local_468;
  undefined1 local_450 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_440;
  FCbObjectView local_438;
  TCbBuffer<FCbArrayView> local_428;
  TStringView<char8_t> local_410;
  FIoStatus local_400;
  uchar local_3f0 [8];
  FCbObjectId local_3e8;
  char *local_3dc;
  uchar local_3d4 [4];
  TIoStatusOr<FIoBuffer> local_3d0;
  EStorageServerContentType local_3b8;
  TStringBuilderBase<wchar_t> local_3a8;
  FScriptContainerElement local_388 [256];
  TStringBuilderBase<char> local_288;
  char local_268 [256];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_5d8;
  bVar10 = false;
  bVar9 = false;
  uVar22._0_1_ = '\0';
  uVar22._1_1_ = '\0';
  uVar22._2_1_ = '\0';
  uVar22._3_1_ = '\0';
  local_578 = (undefined1  [8])((ulonglong)local_578 & 0xffffffff00000000);
  bVar29 = CpuChannel->Enabled < 0;
  local_4c8 = param_1;
  if (bVar29) {
    local_588 = '\0';
  }
  else {
    local_588 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId257,"FStorageServerConnection::FileManifestRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x101);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId257);
  }
  cVar24 = !bVar29;
  local_288.Base = local_268;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  local_288.CurPos = local_268;
  local_288.End = (char *)local_168;
  this_00 = TStringBuilderBase<char>::Append<FAnsiString_&>(&local_288,&this->BaseURI);
  TStringBuilderBase<char>::Append<char,0>
            (this_00,"/files?refresh=true&fieldnames=id,clientpath,rawsize",0x34);
  pIVar5 = (this->HttpClient).Ptr;
  pvStack_540 = (void *)CONCAT44(pvStack_540._4_4_,3);
  local_518._8_8_ = local_518._8_8_ & 0xffffffffffffff00;
  local_4d8.Value._0_1_ = 0;
  pcVar6 = *(code **)((longlong)*pIVar5 + 8);
  local_548 = "GET";
  if (local_288.End < (FScriptContainerElement *)(local_288.CurPos + 1)) {
    TStringBuilderBase<char>::Extend(&local_288,1);
  }
  *local_288.CurPos = '\0';
  local_508 = local_288.Base;
  if (local_288.Base != (char *)0x0) {
    sVar17 = strlen(local_288.Base);
    uVar22 = (undefined4)sVar17;
  }
  pcVar15 = local_508;
  local_5a0 = local_518;
  local_590 = 1;
  local_4e8 = local_548;
  pvStack_4e0 = pvStack_540;
  local_598 = __real_bf800000;
  local_5a8 = 0;
  local_5b8 = &local_4e8;
  local_4f8.TypeWithFlags = (undefined1)local_508;
  local_4f8.Error = local_508._1_1_;
  local_4f8._2_2_ = local_508._2_2_;
  local_4f8.NameLen = local_508._4_4_;
  local_4f8.Value._4_4_ = uStack_4fc;
  local_5b0 = &local_4d8;
  local_508 = pcVar15;
  auStack_500 = (uchar  [4])uVar22;
  local_4f8.Value._0_4_ = uVar22;
  (*pcVar6)(pIVar5,&local_3d0,&local_4f8,3);
  FIoStatus::FIoStatus(&local_400);
  FIoStatus::operator=(&local_400,&local_3d0.StatusValue);
  if ((local_400.ErrorCode == Ok) &&
     (local_3f0[0] = local_3d0.Value.Pad[0], local_3f0[1] = local_3d0.Value.Pad[1],
     local_3f0[2] = local_3d0.Value.Pad[2], local_3f0[3] = local_3d0.Value.Pad[3],
     local_3f0[4] = local_3d0.Value.Pad[4], local_3f0[5] = local_3d0.Value.Pad[5],
     local_3f0[6] = local_3d0.Value.Pad[6], local_3f0[7] = local_3d0.Value.Pad[7],
     local_3d0.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_3d0.Value.Pad + 0xcU) =
         *(int *)((longlong)local_3d0.Value.Pad + 0xcU) + 1;
    UNLOCK();
  }
  if (local_400.ErrorCode == Ok) {
    if (local_3f0 != (uchar  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_3f0 + 0xcU) = *(int *)((longlong)local_3f0 + 0xcU) + 1;
      UNLOCK();
    }
    local_578 = (undefined1  [8])local_3f0;
    ProcessResponse((FCbObject *)local_450,(FIoBuffer)local_578,local_3b8);
    pvStack_540 = (void *)CONCAT44(pvStack_540._4_4_,5);
    local_548 = "files";
    local_518._0_8_ = "files";
    local_518._8_8_ = pvStack_540;
    FCbObjectView::FindView
              ((FCbObjectView *)local_450,(FCbFieldView *)&local_548,
               (TStringView<char8_t> *)local_518);
    if (((ulonglong)local_548 & 0x1f) == 0) {
      local_538._padding_ = 0;
      local_538._padding_ = 0;
      local_538.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      if ((uchar  [8])local_440.Owner != (uchar  [8])0x0) {
        LOCK();
        paVar1 = &(local_440.Owner)->ReferenceCountsAndFlags;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
          LOCK();
          (local_440.Owner)->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((longlong)(local_440.Owner)->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      local_578 = (undefined1  [8])local_440.Owner;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_538,(FCbFieldView *)&local_548,(FSharedBuffer)local_578);
    }
    FCbField::AsArray((FCbField *)&local_538,(FCbArray *)&local_428);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_538.Buffer.Owner);
    TCbBuffer<FCbArrayView>::begin(&local_428,(FCbFieldIterator *)&local_4c0);
    if (((byte)local_4c0._padding_ & 0x1f) != 0) {
      do {
        FCbFieldView::AsObjectView((FCbFieldView *)&local_4c0,&local_438);
        if (local_4c0._padding_._1_1_ == '\0') {
          bVar10 = true;
          if ((uchar  [8])local_4c0._padding_ != (uchar  [8])0x0) {
            LOCK();
            puVar8 = (uchar *)(local_4c0._padding_ + 0x18);
            uVar4 = *(ulonglong *)puVar8;
            *(longlong *)puVar8 = *(longlong *)puVar8 + 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 0) {
              LOCK();
              *(longlong *)(local_4c0._padding_ + 0x18U) =
                   *(longlong *)(local_4c0._padding_ + 0x18U) + 0x40000000;
              UNLOCK();
            }
          }
          local_578 = (undefined1  [8])local_4c0._padding_;
          TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                    (&local_468,&local_438,(FSharedBuffer)local_578);
          pTVar18 = &local_468;
          pTVar13 = &local_468;
        }
        else {
          bVar9 = true;
          local_568._padding_ = 0;
          local_568._padding_ = 0;
          local_568.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
          FCbObjectView::FCbObjectView((FCbObjectView *)&local_568);
          pTVar18 = (TCbBuffer<FCbObjectView> *)&local_568;
          local_568.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
          pTVar13 = (TCbBuffer<FCbObjectView> *)&local_568;
        }
        lVar11 = pTVar18->_padding_;
        lVar12 = pTVar18->_padding_;
        TVar7.Owner = (pTVar13->Buffer).Owner.Owner;
        (pTVar13->Buffer).Owner.Owner = (FBufferOwner *)0x0;
        FVar14.Owner.Owner = local_568.Buffer.Owner.Owner;
        local_538._padding_ = lVar11;
        local_538._padding_ = lVar12;
        local_538.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar7.Owner;
        if ((bVar9) && (bVar9 = false, local_568.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)local_568.Buffer.Owner.Owner + 0x18);
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
          UNLOCK();
          if ((aVar3._0_4_ & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)local_568.Buffer.Owner.Owner + 0x10))
                      (local_568.Buffer.Owner.Owner);
            *(void **)((longlong)FVar14.Owner.Owner + 8) = (void *)0x0;
            *(ulong64 *)((longlong)FVar14.Owner.Owner + 0x10) = 0;
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)FVar14.Owner.Owner + 0x18);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
            UNLOCK();
            if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)FVar14.Owner.Owner)(FVar14.Owner.Owner,1);
            }
          }
        }
        if (bVar10) {
          bVar10 = false;
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_468.Buffer.Owner);
        }
        local_498 = &s_id;
        uStack_490 = 2;
        uStack_570._4_4_ = uStack_48c;
        uStack_570._0_4_ = 2;
        local_578 = (undefined1  [8])&s_id;
        FCbObjectView::FindView
                  ((FCbObjectView *)&local_538,&local_488,(TStringView<char8_t> *)local_578);
        if ((local_488.TypeWithFlags & CustomByName) == None) {
          local_568._padding_ = 0;
          local_568._padding_ = 0;
          local_568.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        else {
          if (local_538.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
            UNLOCK();
            if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
              LOCK();
              *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) =
                   (atomic<unsigned___int64>)
                   ((longlong)
                    *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) +
                   0x40000000);
              UNLOCK();
            }
          }
          local_578 = (undefined1  [8])local_538.Buffer.Owner.Owner;
          TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                    (&local_568,&local_488,(FSharedBuffer)local_578);
        }
        local_3e8.Bytes[0] = '\0';
        local_3e8.Bytes[1] = '\0';
        local_3e8.Bytes[2] = '\0';
        local_3e8.Bytes[3] = '\0';
        local_3e8.Bytes[4] = '\0';
        local_3e8.Bytes[5] = '\0';
        local_3e8.Bytes[6] = '\0';
        local_3e8.Bytes[7] = '\0';
        local_3e8.Bytes[8] = '\0';
        local_3e8.Bytes[9] = '\0';
        local_3e8.Bytes[10] = '\0';
        local_3e8.Bytes[0xb] = '\0';
        FCbFieldView::AsObjectId((FCbFieldView *)&local_568,(FCbObjectId *)&local_3dc,&local_3e8);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_568.Buffer.Owner);
        local_478 = "rawsize";
        uStack_470 = 7;
        uStack_570._4_4_ = uStack_46c;
        uStack_570._0_4_ = 7;
        local_578 = (undefined1  [8])0x151cb8500;
        FCbObjectView::FindView
                  ((FCbObjectView *)&local_538,&local_4f8,(TStringView<char8_t> *)local_578);
        if ((local_4f8._0_4_ & 0x1f) == 0) {
          local_568._padding_ = 0;
          local_568._padding_ = 0;
          local_568.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        else {
          if (local_538.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
            UNLOCK();
            if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
              LOCK();
              *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) =
                   (atomic<unsigned___int64>)
                   ((longlong)
                    *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) +
                   0x40000000);
              UNLOCK();
            }
          }
          local_578 = (undefined1  [8])local_538.Buffer.Owner.Owner;
          TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                    (&local_568,&local_4f8,(FSharedBuffer)local_578);
        }
        auVar19 = (uchar  [8])
                  FCbFieldView::AsInteger
                            ((FCbFieldView *)&local_568,0xffffffffffffffff,(FIntegerParams)0x7f);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_568.Buffer.Owner);
        local_3a8.Base = (wchar_t *)local_388;
        local_4e8 = "clientpath";
        local_3a8.CurPos = (wchar_t *)local_388;
        pvStack_4e0 = (void *)CONCAT44(pvStack_4e0._4_4_,10);
        local_3a8.End = (wchar_t *)&local_288;
        local_3a8.bIsDynamic = false;
        local_3a8.bIsExternal = false;
        local_578 = (undefined1  [8])0x151cb8508;
        uStack_570 = pvStack_4e0;
        FCbObjectView::FindView
                  ((FCbObjectView *)&local_538,&local_4d8,(TStringView<char8_t> *)local_578);
        if ((local_4d8.TypeWithFlags & CustomByName) == None) {
          local_568._padding_ = 0;
          local_568._padding_ = 0;
          local_568.Buffer.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        else {
          if (local_538.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
            UNLOCK();
            if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
              LOCK();
              *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) =
                   (atomic<unsigned___int64>)
                   ((longlong)
                    *(atomic<unsigned___int64> *)((longlong)local_538.Buffer.Owner.Owner + 0x18) +
                   0x40000000);
              UNLOCK();
            }
          }
          local_578 = (undefined1  [8])local_538.Buffer.Owner.Owner;
          TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                    (&local_568,&local_4d8,(FSharedBuffer)local_578);
        }
        pvStack_540 = (void *)0x0;
        local_548 = (char *)0x0;
        local_578 = (undefined1  [8])0x0;
        uStack_570._0_4_ = 0;
        uStack_570._4_4_ = 0;
        pTVar20 = FCbFieldView::AsString
                            ((FCbFieldView *)&local_568,&local_410,(TStringView<char8_t> *)local_578
                            );
        puVar8 = pTVar20->DataPtr;
        iVar25 = (int)*(undefined8 *)&pTVar20->Size;
        local_68.Data = (FScriptContainerElement *)0x0;
        if (puVar8 == (uchar *)0x0) {
          local_60 = (FScriptContainerElement *)0x0;
          local_58 = 0;
        }
        else {
          iVar27 = 0;
          if ((0 < iVar25) && (iVar27 = 0, puVar8[(longlong)iVar25 + -1] == '\0')) {
            iVar27 = 1;
            iVar25 = iVar25 + -1;
          }
          local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar8,iVar25);
          uVar28 = local_58 + iVar27;
          uVar26 = uVar28;
          if (uVar28 < 0x81) {
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              uVar26 = 0;
              goto LAB_148cc367d;
            }
          }
          else {
LAB_148cc367d:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_68,0,uVar26,2);
          }
          local_60 = local_168;
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            local_60 = local_68.Data;
          }
          UE::Core::Private::Convert((wchar_t *)local_60,uVar28,puVar8,iVar27 + iVar25);
        }
        iVar25 = local_58;
        pFVar16 = local_60;
        uVar23 = (ulong64)local_58;
        if (local_3a8.End < (TStringBuilderBase<char> *)((longlong)local_3a8.CurPos + uVar23 * 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar23);
        }
        if (iVar25 != 0) {
          pvVar21 = FGenericPlatformString::Memcpy(local_3a8.CurPos,pFVar16,uVar23 * 2);
          local_3a8.CurPos = (wchar_t *)((longlong)pvVar21 + uVar23 * 2);
        }
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
        FVar14.Owner.Owner = local_568.Buffer.Owner.Owner;
        if (local_568.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)((longlong)local_568.Buffer.Owner.Owner + 0x18);
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
          UNLOCK();
          if ((aVar3._0_4_ & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)local_568.Buffer.Owner.Owner + 0x10))
                      (local_568.Buffer.Owner.Owner);
            *(void **)((longlong)FVar14.Owner.Owner + 8) = (void *)0x0;
            *(ulong64 *)((longlong)FVar14.Owner.Owner + 0x10) = 0;
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)((longlong)FVar14.Owner.Owner + 0x18);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
            UNLOCK();
            if (((uint)((ulonglong)aVar3 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)FVar14.Owner.Owner)(FVar14.Owner.Owner,1);
            }
          }
        }
        local_518._0_8_ = local_3a8.Base;
        uVar22 = (undefined4)((longlong)local_3a8.CurPos - (longlong)local_3a8.Base >> 1);
        local_518._8_4_ = uVar22;
        auStack_500[0] = local_3d4[0];
        auStack_500[1] = local_3d4[1];
        auStack_500[2] = local_3d4[2];
        auStack_500[3] = local_3d4[3];
        local_568._padding_ = (longlong)local_3a8.Base;
        local_568._padding_ = CONCAT44(local_518._12_4_,uVar22);
        local_508 = local_3dc;
        local_578 = (undefined1  [8])auVar19;
        (**(code **)local_4c8)(*(undefined8 *)&local_4c8->field_0x8,&local_508,&local_568,local_578)
        ;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3a8);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_538.Buffer.Owner);
        TCbFieldIterator<FCbField>::operator++(&local_4c0);
        cVar24 = local_588;
      } while (((byte)local_4c0._padding_ & 0x1f) != 0);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_4c0._padding_);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_428.Buffer.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_440);
  }
  else {
    FIoStatus::ToString(&local_400,(FString *)&local_568);
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
    if ((FScriptContainerElement *)local_568._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_568._padding_);
    }
  }
  FIoStatus::operator=(&local_400,Unknown);
  auVar19 = local_3f0;
  if ((local_400.ErrorCode == Ok) && (local_3f0 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_3f0);
    LOCK();
    piVar2 = (int *)((longlong)auVar19 + 0xc);
    iVar25 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar25 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)auVar19);
      ::operator_delete((void *)auVar19,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_400);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_3d0);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_288);
  if (cVar24 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FinalizeSetupCacheStrategy @ 148cc3ad0

bool __thiscall FStorageServerConnection::FinalizeSetupCacheStrategy(FStorageServerConnection *this)

{
  FAsyncQueryLatestServerChunkInfo *pFVar1;
  FEvent *pFVar2;
  char cVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->CacheStrategy).Ptr == (ICacheStrategy *)0x0) {
    return false;
  }
  pFVar1 = (this->AsyncQueryLatestServerChunkInfo).Object;
  if (pFVar1 != (FAsyncQueryLatestServerChunkInfo *)0x0) {
    pFVar2 = pFVar1->IsCompleted;
    cVar3 = (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0,0);
    if (cVar3 == '\0') {
      return false;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->AsyncQueryLatestServerChunkInfo !=
        (TSharedPtr<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1> *)&local_18) {
      (this->AsyncQueryLatestServerChunkInfo).Object = (FAsyncQueryLatestServerChunkInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncQueryLatestServerChunkInfo).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return true;
}

// GetAndResetStats @ 148cc6a10

void __thiscall
FStorageServerConnection::GetAndResetStats(FStorageServerConnection *this,FConnectionStats *param_1)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned___int64> aVar2;
  atomic<double> aVar3;
  
  LOCK();
  aVar2 = this->AccumulatedBytes;
  this->AccumulatedBytes = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  param_1->AccumulatedBytes = (ulong64)aVar2;
  LOCK();
  aVar1 = this->RequestCount;
  this->RequestCount = (atomic<unsigned_int>)0x0;
  UNLOCK();
  param_1->RequestCount = (uint)aVar1;
  LOCK();
  aVar3 = this->MinRequestThroughput;
  this->MinRequestThroughput = (atomic<double>)0x7fefffffffffffff;
  UNLOCK();
  param_1->MinRequestThroughput = (double)aVar3;
  LOCK();
  aVar3 = this->MaxRequestThroughput;
  this->MaxRequestThroughput = (atomic<double>)0xffefffffffffffff;
  UNLOCK();
  param_1->MaxRequestThroughput = (double)aVar3;
  return;
}

// GetCompressedOffset @ 148cc6dc0

ulong64 __cdecl
FStorageServerConnection::GetCompressedOffset(FCompressedBuffer *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ECompressionLevel local_res10 [8];
  ECompressor local_res18 [8];
  ulong64 local_res20;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = 0;
  local_res20 = 0;
  bVar2 = FCompressedBuffer::TryGetCompressParameters(param_1,local_res18,local_res10,&local_res20);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bOk",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                       ,0x4e2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (local_res20 != 0) {
    uVar4 = param_2 % local_res20;
  }
  return uVar4;
}

// GetDefaultCacheConfiguration @ 148cc7020

void __thiscall
FStorageServerConnection::GetDefaultCacheConfiguration
          (FStorageServerConnection *this,FCacheConfiguration *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = FCommandLine::Get();
  param_1->bEnable = false;
  pwVar3 = wcsstr(pwVar2,L"-ZenDisableCache");
  if ((pwVar3 == (wchar_t *)0x0) && (bVar1 = UE::IsUsingZenPakFileStreaming(), !bVar1)) {
    pwVar3 = wcsstr(pwVar2,L"-ZenEnableCache");
    if (pwVar3 == (wchar_t *)0x0) {
      if (param_1->bEnable == false) {
        return;
      }
    }
    else {
      param_1->bEnable = true;
    }
    pwVar3 = wcsstr(pwVar2,L"-ZenInvalidateCache");
    param_1->bForceInvalidate = pwVar3 != (wchar_t *)0x0;
    bVar1 = FParse::Value(pwVar2,L"-ZenCacheSizeKB=",&param_1->CacheSizeKB);
    if (!bVar1) {
      param_1->CacheSizeKB = 0x400000;
    }
    bVar1 = FParse::Value(pwVar2,L"-ZenCacheAbandonSizeKB=",&param_1->AbandonSizeKB);
    if (!bVar1) {
      param_1->AbandonSizeKB = 0x80000;
    }
    param_1->FlushInterval = 10.0;
    param_1->FlushEveryNEntries = 0;
    pwVar3 = wcsstr(pwVar2,L"-ZenUseSimpleJournal");
    param_1->bUseSectionedJournal = pwVar3 == (wchar_t *)0x0;
    pwVar2 = wcsstr(pwVar2,L"-ZenNoMmappedStorage");
    param_1->bUseMemoryMappedStorage = pwVar2 == (wchar_t *)0x0;
    return;
  }
  param_1->bEnable = false;
  return;
}

// GetWorkspaces @ 148cc8720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cc887e) */

TIoStatusOr<FStorageServerConnection::Workspaces> * __thiscall
FStorageServerConnection::GetWorkspaces
          (FStorageServerConnection *this,
          TIoStatusOr<FStorageServerConnection::Workspaces> *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  int *piVar2;
  atomic<unsigned___int64> aVar3;
  uchar uVar4;
  uint uVar5;
  IStorageServerHttpClient *pIVar6;
  undefined8 uVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  uchar this_00 [8];
  bool bVar10;
  int iVar11;
  FCbField *this_01;
  TStringView<char8_t> *pTVar12;
  FString *pFVar13;
  TIoStatusOr<FStorageServerConnection::Workspaces> *pTVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_788 [32];
  ForAnyElementType local_738;
  undefined8 local_730;
  FString local_728;
  FString local_718;
  FScriptContainerElement local_708;
  ForAnyElementType local_700;
  undefined8 local_6f8;
  Share local_6f0;
  FBufferOwner *local_6c0;
  FIoStatus local_6b8;
  TCbBuffer<FCbFieldView> local_6a8;
  FCbObjectView local_690;
  TIoStatusOr<FStorageServerConnection::Workspaces> *local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  FCbObjectView local_658;
  undefined8 local_648;
  undefined8 uStack_640;
  TCbFieldIterator<FCbFieldView> local_638;
  TCbFieldIterator<FCbFieldView> local_620;
  char *local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  int iStack_5f0;
  code *local_5e8;
  code *local_5e0;
  char *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  FCbFieldView local_5c8;
  undefined *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  FCbObjectId *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  char *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  char *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  char *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined *local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  FCbObjectId *local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  char *local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  char *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_518 [2];
  char *local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  TStringView<char8_t> local_4e8;
  FCbFieldView local_4d8;
  FCbFieldView local_4c8;
  TStringView<char8_t> local_4b8;
  FCbFieldView local_4a8;
  TArrayView<unsigned_char_const_,int> local_498;
  TStringView<char8_t> local_488;
  TStringView<char8_t> local_478;
  FCbFieldView local_468;
  FString local_458;
  TStringView<char8_t> local_448;
  FCbFieldView local_438;
  TStringView<char8_t> local_428;
  FCbFieldView local_418;
  FCbFieldView local_408;
  FCbFieldView local_3f8;
  TStringView<char8_t> local_3e8;
  FCbFieldView local_3d8;
  TArrayView<unsigned_char_const_,int> local_3c8;
  TStringView<char8_t> local_3b8;
  TStringView<char8_t> local_3a8;
  FCbFieldView local_398;
  FString local_388;
  TStringView<char8_t> local_378;
  TStringView<char8_t> local_368;
  FCbFieldView local_358;
  FString local_348;
  undefined1 local_330;
  undefined1 local_320;
  FArchiveState local_318;
  undefined8 local_288;
  undefined8 local_280;
  ulonglong local_278;
  undefined8 local_270;
  undefined1 local_268 [24];
  TStringView<char8_t> local_250;
  uchar *local_238;
  undefined8 uStack_230;
  TStringView<char8_t> local_228;
  uchar *local_218;
  undefined8 uStack_210;
  TStringView<char8_t> local_208;
  uchar *local_1f8;
  undefined8 uStack_1f0;
  FIoStatus local_1e8;
  uchar local_1d8 [8];
  FCbObjectId local_1d0;
  FCbObjectId local_1c4;
  TIoStatusOr<FIoBuffer> local_1b8;
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [64];
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  FCbObjectId local_58;
  FCbObjectId local_4c;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_788;
  pIVar6 = (this->HttpClient).Ptr;
  uStack_600 = 3;
  local_330 = 0;
  local_320 = 0;
  local_608 = "GET";
  pFVar17 = (this->BaseURI).Data.AllocatorInstance.Data;
  uStack_500 = CONCAT44(uStack_5fc,3);
  iVar11 = (this->BaseURI).Data.ArrayNum;
  local_508 = "GET";
  iStack_5f0 = iVar11 + -1;
  if (iVar11 == 0) {
    iStack_5f0 = 0;
  }
  local_5f8._0_4_ = SUB84(pFVar17,0);
  local_5f8._4_4_ = (undefined4)((ulonglong)pFVar17 >> 0x20);
  local_4f8 = (undefined4)local_5f8;
  uStack_4f4 = local_5f8._4_4_;
  local_680 = __return_storage_ptr__;
  local_5f8 = pFVar17;
  iStack_4f0 = iStack_5f0;
  (**(code **)((longlong)*pIVar6 + 8))(pIVar6,&local_1b8,&local_4f8);
  FIoStatus::FIoStatus(&local_1e8);
  FIoStatus::operator=(&local_1e8,&local_1b8.StatusValue);
  if ((local_1e8.ErrorCode == Ok) &&
     (local_1d8[0] = local_1b8.Value.Pad[0], local_1d8[1] = local_1b8.Value.Pad[1],
     local_1d8[2] = local_1b8.Value.Pad[2], local_1d8[3] = local_1b8.Value.Pad[3],
     local_1d8[4] = local_1b8.Value.Pad[4], local_1d8[5] = local_1b8.Value.Pad[5],
     local_1d8[6] = local_1b8.Value.Pad[6], local_1d8[7] = local_1b8.Value.Pad[7],
     local_1b8.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_1b8.Value.Pad + 0xc) =
         *(int *)((longlong)local_1b8.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  if (local_1e8.ErrorCode == Ok) {
    uVar4 = *(uchar *)((longlong)local_1d8 + 0x18);
    uVar7 = *(undefined8 *)local_1d8;
    uVar5 = *(uint *)((longlong)local_1d8 + 8);
    local_318._padding_ = 0;
    local_318.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_318.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_318.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_318.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_318._40_8_ = 0;
    local_318.ArSerializingDefaults = 0;
    local_318.ArPortFlags = 0;
    local_318.ArMaxSerializeSize = 0;
    local_318.ArUEVer.FileVersionUE4 = 0;
    local_318.ArUEVer.FileVersionUE5 = 0;
    local_318.ArLicenseeUEVer = 0;
    local_318.ArEngineVer.Major = 0;
    local_318.ArEngineVer.Minor = 0;
    local_318.ArEngineVer.Patch = 0;
    local_318.ArEngineVer._6_2_ = 0;
    local_318.ArEngineVer.Changelist = 0;
    local_318.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_318.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_318.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_318.SerializedProperty = (FProperty *)0x0;
    local_318.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_318.bCustomVersionsAreReset = false;
    local_318._129_7_ = 0;
    local_318.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_318);
    local_288 = 0;
    local_318._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_270 = 0x7fffffffffffffff;
    local_280 = uVar7;
    local_278 = (ulonglong)CONCAT14(uVar4,uVar5);
    FArchiveState::SetIsLoading(&local_318,true);
    (**(code **)(local_318._padding_ + 0x108))(&local_318,0);
    local_5e0 = FUniqueBuffer::Alloc;
    local_5e8 = UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
    this_01 = LoadCompactBinary((FCbField *)local_268,(FArchive *)&local_318,
                                (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_5e8)
    ;
    FCbField::AsObject(this_01,(FCbObject *)local_528);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_268 + 0x10));
    uStack_5d0 = 10;
    local_5d8 = "workspaces";
    local_4e8._12_4_ = uStack_5cc;
    local_4e8.Size = 10;
    local_4e8.DataPtr = "workspaces";
    local_738.Data = (FScriptContainerElement *)0x0;
    local_730 = 0;
    FCbObjectView::FindView((FCbObjectView *)local_528,&local_5c8,&local_4e8);
    if ((local_5c8.TypeWithFlags & CustomByName) == None) {
      local_6a8._padding_ = 0;
      local_6a8._padding_ = 0;
      local_6a8.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      if (local_518[0].Owner != (FBufferOwner *)0x0) {
        LOCK();
        paVar1 = &(local_518[0].Owner)->ReferenceCountsAndFlags;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
        UNLOCK();
        if (((ulonglong)aVar3 & 0x3fffffff) == 0) {
          LOCK();
          (local_518[0].Owner)->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((longlong)(local_518[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      local_6c0 = local_518[0].Owner;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_6a8,&local_5c8,(FSharedBuffer)&local_6c0);
    }
    FCbFieldView::AsArrayView((FCbFieldView *)&local_6a8,(FCbArrayView *)&local_4d8);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_6a8.Buffer.Owner);
    FCbFieldView::CreateViewIterator(&local_4d8,(FCbFieldViewIterator *)&local_638);
    while (((byte)local_638._padding_ & 0x1f) != 0) {
      FCbFieldView::AsObjectView(&local_4c8,&local_690);
      local_5b8 = &s_id;
      uStack_5b0 = 2;
      local_4b8._12_4_ = uStack_5ac;
      local_4b8.Size = 2;
      local_4b8.DataPtr = "id";
      FCbObjectView::FindView(&local_690,&local_4a8,&local_4b8);
      local_1c4.Bytes[0] = '\0';
      local_1c4.Bytes[1] = '\0';
      local_1c4.Bytes[2] = '\0';
      local_1c4.Bytes[3] = '\0';
      local_1c4.Bytes[4] = '\0';
      local_1c4.Bytes[5] = '\0';
      local_1c4.Bytes[6] = '\0';
      local_1c4.Bytes[7] = '\0';
      local_1c4.Bytes[8] = '\0';
      local_1c4.Bytes[9] = '\0';
      local_1c4.Bytes[10] = '\0';
      local_1c4.Bytes[0xb] = '\0';
      local_5a8 = FCbFieldView::AsObjectId(&local_4a8,&local_58,&local_1c4);
      local_198.Base = local_178;
      local_198.CurPos = local_178;
      uStack_5a0 = 0xc;
      local_498._12_4_ = uStack_59c;
      local_498.ArrayNum = 0xc;
      local_198.End = (wchar_t *)&local_f8;
      local_198.bIsDynamic = false;
      local_198.bIsExternal = false;
      local_498.DataPtr = local_5a8->Bytes;
      UE::String::BytesToHexLower(&local_498,&local_198);
      if (local_198.End < (TStringBuilderBase<wchar_t> *)(local_198.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_198,1);
      }
      *local_198.CurPos = L'\0';
      ::FString::FString(&local_728,local_198.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
      local_598 = "root_path";
      uStack_590 = 9;
      local_488._12_4_ = uStack_58c;
      local_488.Size = 9;
      local_488.DataPtr = "root_path";
      FCbObjectView::FindView(&local_690,&local_468,&local_488);
      uStack_670 = 0;
      local_678 = 0;
      local_478.DataPtr = (uchar *)0x0;
      local_478.Size = 0;
      local_478._12_4_ = 0;
      pTVar12 = FCbFieldView::AsString(&local_468,&local_208,&local_478);
      local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_718.Data.ArrayNum = 0;
      local_718.Data.ArrayMax = 0;
      local_1f8 = pTVar12->DataPtr;
      uStack_1f0 = *(undefined8 *)&pTVar12->Size;
      pFVar13 = ::FString::ConstructFromPtrSize
                          (&local_458,pTVar12->DataPtr,(int)*(undefined8 *)&pTVar12->Size);
      if (&local_718 != pFVar13) {
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
        local_718.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_718.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        local_718.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      local_588 = "allow_share_creation_from_http";
      uStack_580 = 0x1e;
      local_448._12_4_ = uStack_57c;
      local_448.Size = 0x1e;
      local_448.DataPtr = "allow_share_creation_from_http";
      FCbObjectView::FindView(&local_690,&local_438,&local_448);
      local_708 = (FScriptContainerElement)FCbFieldView::AsBool(&local_438,false);
      local_700.Data = (FScriptContainerElement *)0x0;
      local_6f8 = 0;
      if (1 < local_728.Data.ArrayNum) {
        local_578 = "shares";
        uStack_570 = 6;
        local_428._12_4_ = uStack_56c;
        local_428.Size = 6;
        local_428.DataPtr = "shares";
        FCbObjectView::FindView(&local_690,&local_418,&local_428);
        FCbFieldView::AsArrayView(&local_418,(FCbArrayView *)&local_408);
        FCbFieldView::CreateViewIterator(&local_408,(FCbFieldViewIterator *)&local_620);
        while (((byte)local_620._padding_ & 0x1f) != 0) {
          FCbFieldView::AsObjectView(&local_3f8,&local_658);
          local_568 = &s_id;
          uStack_560 = 2;
          local_3e8._12_4_ = uStack_55c;
          local_3e8.Size = 2;
          local_3e8.DataPtr = "id";
          FCbObjectView::FindView(&local_658,&local_3d8,&local_3e8);
          local_1d0.Bytes[0] = '\0';
          local_1d0.Bytes[1] = '\0';
          local_1d0.Bytes[2] = '\0';
          local_1d0.Bytes[3] = '\0';
          local_1d0.Bytes[4] = '\0';
          local_1d0.Bytes[5] = '\0';
          local_1d0.Bytes[6] = '\0';
          local_1d0.Bytes[7] = '\0';
          local_1d0.Bytes[8] = '\0';
          local_1d0.Bytes[9] = '\0';
          local_1d0.Bytes[10] = '\0';
          local_1d0.Bytes[0xb] = '\0';
          local_558 = FCbFieldView::AsObjectId(&local_3d8,&local_4c,&local_1d0);
          local_f8.Base = local_d8;
          local_f8.CurPos = local_d8;
          uStack_550 = 0xc;
          local_3c8._12_4_ = uStack_54c;
          local_3c8.ArrayNum = 0xc;
          local_f8.End = (wchar_t *)&local_58;
          local_f8.bIsDynamic = false;
          local_f8.bIsExternal = false;
          local_3c8.DataPtr = local_558->Bytes;
          UE::String::BytesToHexLower(&local_3c8,&local_f8);
          if (local_f8.End < (FCbObjectId *)(local_f8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_f8,1);
          }
          *local_f8.CurPos = L'\0';
          ::FString::FString(&local_6f0.Id,local_f8.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
          local_548 = "share_path";
          uStack_540 = 10;
          local_3b8._12_4_ = uStack_53c;
          local_3b8.Size = 10;
          local_3b8.DataPtr = "share_path";
          FCbObjectView::FindView(&local_658,&local_398,&local_3b8);
          uStack_660 = 0;
          local_668 = 0;
          local_3a8.DataPtr = (uchar *)0x0;
          local_3a8.Size = 0;
          local_3a8._12_4_ = 0;
          pTVar12 = FCbFieldView::AsString(&local_398,&local_250,&local_3a8);
          local_6f0.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6f0.Path.Data.ArrayNum = 0;
          local_6f0.Path.Data.ArrayMax = 0;
          local_238 = pTVar12->DataPtr;
          uStack_230 = *(undefined8 *)&pTVar12->Size;
          pFVar13 = ::FString::ConstructFromPtrSize
                              (&local_388,pTVar12->DataPtr,(int)*(undefined8 *)&pTVar12->Size);
          if (&local_6f0.Path != pFVar13) {
            if (local_6f0.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6f0.Path.Data.AllocatorInstance.Data);
            }
            local_6f0.Path.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6f0.Path.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_6f0.Path.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          local_538 = "alias";
          uStack_530 = 5;
          local_378._12_4_ = uStack_52c;
          local_378.Size = 5;
          local_378.DataPtr = "alias";
          FCbObjectView::FindView(&local_658,&local_358,&local_378);
          uStack_640 = 0;
          local_648 = 0;
          local_368.DataPtr = (uchar *)0x0;
          local_368.Size = 0;
          local_368._12_4_ = 0;
          pTVar12 = FCbFieldView::AsString(&local_358,&local_228,&local_368);
          local_6f0.Alias.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6f0.Alias.Data.ArrayNum = 0;
          local_6f0.Alias.Data.ArrayMax = 0;
          local_218 = pTVar12->DataPtr;
          uStack_210 = *(undefined8 *)&pTVar12->Size;
          pFVar13 = ::FString::ConstructFromPtrSize
                              (&local_348,pTVar12->DataPtr,(int)*(undefined8 *)&pTVar12->Size);
          if (&local_6f0.Alias != pFVar13) {
            if (local_6f0.Alias.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6f0.Alias.Data.AllocatorInstance.Data);
            }
            local_6f0.Alias.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6f0.Alias.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_6f0.Alias.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (1 < local_6f0.Id.Data.ArrayNum) {
            if (((local_700.Data <= &local_6f0) &&
                (&local_6f0 < (Share *)(local_700.Data + (longlong)local_6f8._4_4_ * 0x30))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TIoStatusOr<FStorageServerConnection::Workspaces> *)(*pcVar8)();
              return pTVar14;
            }
            iVar11 = (int)local_6f8;
            if ((int)local_6f8 == local_6f8._4_4_) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&local_700,(int *)((longlong)&local_6f8 + 4));
            }
            local_6f8 = CONCAT44(local_6f8._4_4_,iVar11 + 1);
            pFVar17 = local_700.Data + (longlong)iVar11 * 0x30;
            ::FString::FString((FString *)pFVar17,&local_6f0.Id);
            FVar9.Data = local_6f0.Path.Data.AllocatorInstance.Data;
            *(undefined8 *)(pFVar17 + 0x10) = 0;
            lVar15 = (longlong)local_6f0.Path.Data.ArrayNum;
            *(int *)(pFVar17 + 0x18) = local_6f0.Path.Data.ArrayNum;
            if (local_6f0.Path.Data.ArrayNum == 0) {
              *(int *)(pFVar17 + 0x1c) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_6f0.Path.Data.ArrayNum,0,(ForAnyElementType *)(pFVar17 + 0x10),
                         local_6f0.Path.Data.ArrayNum,(int *)(pFVar17 + 0x1c));
                    /* WARNING: Load size is inaccurate */
              memcpy(pFVar17[0x10],FVar9.Data,lVar15 * 2);
            }
            FVar9.Data = local_6f0.Alias.Data.AllocatorInstance.Data;
            pFVar16 = pFVar17 + 0x20;
            *(FScriptContainerElement **)pFVar16 = (FScriptContainerElement *)0x0;
            lVar15 = (longlong)local_6f0.Alias.Data.ArrayNum;
            *(int *)(pFVar17 + 0x28) = local_6f0.Alias.Data.ArrayNum;
            if (local_6f0.Alias.Data.ArrayNum == 0) {
              *(int *)(pFVar17 + 0x2c) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_6f0.Alias.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,
                         local_6f0.Alias.Data.ArrayNum,(int *)(pFVar17 + 0x2c));
                    /* WARNING: Load size is inaccurate */
              memcpy(*pFVar16,FVar9.Data,lVar15 * 2);
            }
          }
          if (local_6f0.Alias.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f0.Alias.Data.AllocatorInstance.Data);
          }
          if (local_6f0.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f0.Path.Data.AllocatorInstance.Data);
          }
          if (local_6f0.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f0.Id.Data.AllocatorInstance.Data);
          }
          TCbFieldIterator<FCbFieldView>::operator++(&local_620);
        }
        if (((local_738.Data <= (FScriptContainerElement *)&local_728) &&
            (local_730._4_4_ = (int)((ulonglong)local_730 >> 0x20),
            lVar15 = (longlong)local_730._4_4_,
            (FScriptContainerElement *)&local_728 < local_738.Data + lVar15 * 0x38)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TIoStatusOr<FStorageServerConnection::Workspaces> *)(*pcVar8)();
          return pTVar14;
        }
        iVar11 = (int)local_730;
        if ((int)local_730 == local_730._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&local_738,(int *)((longlong)&local_730 + 4));
        }
        local_730 = CONCAT44(local_730._4_4_,iVar11 + 1);
        pFVar16 = local_738.Data + (longlong)iVar11 * 0x38;
        ::FString::FString((FString *)pFVar16,&local_728);
        ::FString::FString((FString *)(pFVar16 + 0x10),&local_718);
        FVar9.Data = local_700.Data;
        pFVar17 = pFVar16 + 0x28;
        pFVar16[0x20] = local_708;
        *(FScriptContainerElement **)pFVar17 = (FScriptContainerElement *)0x0;
        iVar11 = (int)local_6f8;
        *(int *)(pFVar16 + 0x30) = (int)local_6f8;
        if ((int)local_6f8 == 0) {
          *(int *)(pFVar16 + 0x34) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(int)local_6f8,0,(ForAnyElementType *)pFVar17,(int)local_6f8,
                     (int *)(pFVar16 + 0x34));
                    /* WARNING: Load size is inaccurate */
          ConstructItems<FStorageServerConnection::Workspaces::Share,FStorageServerConnection::Workspaces::Share,int>
                    (*pFVar17,(Share *)FVar9.Data,iVar11);
        }
      }
      DestructItems<FStorageServerConnection::Workspaces::Share,int>
                ((Share *)local_700.Data,(int)local_6f8);
      if ((Share *)local_700.Data != (Share *)0x0) {
        FMemory::Free(local_700.Data);
      }
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      TCbFieldIterator<FCbFieldView>::operator++(&local_638);
      __return_storage_ptr__ = local_680;
    }
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(FScriptContainerElement **)(__return_storage_ptr__->Value).Pad = local_738.Data;
    *(int *)((__return_storage_ptr__->Value).Pad + 8) = (int)local_730;
    *(int *)((__return_storage_ptr__->Value).Pad + 0xc) = local_730._4_4_;
    local_730 = 0;
    local_738.Data = (FScriptContainerElement *)0x0;
    DestructItems<FStorageServerConnection::Workspaces::Workspace,int>((Workspace *)0x0,0);
    if (local_738.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_518);
    FArchive::~FArchive((FArchive *)&local_318);
  }
  else {
    local_6b8.ErrorMessage.Chars = local_1e8.ErrorMessage.Chars;
    if (local_1e8.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_1e8.ErrorMessage.Chars + -4) = *(int *)(local_1e8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_6b8.ErrorCode = local_1e8.ErrorCode;
    local_6b8.SystemErrorCode = local_1e8.SystemErrorCode;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    if ((local_6b8.ErrorCode == Ok) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InStatus.IsOk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                            ,0x102,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      pTVar14 = (TIoStatusOr<FStorageServerConnection::Workspaces> *)(*pcVar8)();
      return pTVar14;
    }
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_6b8);
    FIoStatus::~FIoStatus(&local_6b8);
  }
  FIoStatus::operator=(&local_1e8,Unknown);
  this_00 = local_1d8;
  if ((local_1e8.ErrorCode == Ok) && (local_1d8 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1d8);
    LOCK();
    piVar2 = (int *)((longlong)this_00 + 0xc);
    iVar11 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
      ::operator_delete((void *)this_00,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_1e8);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_1b8);
  return __return_storage_ptr__;
}

// HandshakeRequest @ 148cc97f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cc9908) */

bool __thiscall FStorageServerConnection::HandshakeRequest(FStorageServerConnection *this)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  IStorageServerHttpClient *pIVar5;
  undefined8 uVar6;
  uchar this_00 [8];
  FCbField *this_01;
  int iVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  char **local_188;
  undefined1 *local_180;
  undefined1 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined1 local_158 [16];
  char *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_130 [24];
  undefined1 local_118 [32];
  FArchiveState local_f8;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  FIoStatus local_48;
  uchar local_38 [8];
  TIoStatusOr<FIoBuffer> local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pIVar5 = (this->HttpClient).Ptr;
  _uStack_140 = CONCAT44(uStack_13c,3);
  local_160 = 0;
  local_130[8] = 0;
  local_118[8] = 0;
  local_158._0_8_ = (this->BaseURI).Data.AllocatorInstance.Data;
  iVar3 = (this->BaseURI).Data.ArrayNum;
  local_148 = "GET";
  local_168 = __real_40a00000;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  local_170 = local_130;
  local_180 = local_118;
  local_178 = 0;
  local_188 = &local_148;
  local_158._8_4_ = iVar7;
  (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_30,local_158,0);
  FIoStatus::FIoStatus(&local_48);
  FIoStatus::operator=(&local_48,&local_30.StatusValue);
  if ((local_48.ErrorCode == Ok) &&
     (local_38[0] = local_30.Value.Pad[0], local_38[1] = local_30.Value.Pad[1],
     local_38[2] = local_30.Value.Pad[2], local_38[3] = local_30.Value.Pad[3],
     local_38[4] = local_30.Value.Pad[4], local_38[5] = local_30.Value.Pad[5],
     local_38[6] = local_30.Value.Pad[6], local_38[7] = local_30.Value.Pad[7],
     local_30.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_30.Value.Pad + 0xc) = *(int *)((longlong)local_30.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  bVar8 = local_48.ErrorCode == Ok;
  if (bVar8) {
    uVar2 = *(uchar *)((longlong)local_38 + 0x18);
    uVar6 = *(undefined8 *)local_38;
    uVar4 = *(uint *)((longlong)local_38 + 8);
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_f8);
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_50 = 0x7fffffffffffffff;
    local_60 = uVar6;
    local_58 = (ulonglong)CONCAT14(uVar2,uVar4);
    FArchiveState::SetIsLoading(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
    local_158._8_8_ = FUniqueBuffer::Alloc;
    local_158._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
         ::Call;
    this_01 = LoadCompactBinary((FCbField *)local_118,(FArchive *)&local_f8,
                                (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)local_158);
    FCbField::AsObject(this_01,(FCbObject *)local_130);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_118 + 0x10));
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_130 + 0x10));
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  FIoStatus::operator=(&local_48,Unknown);
  this_00 = local_38;
  if ((local_48.ErrorCode == Ok) && (local_38 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_38);
    LOCK();
    piVar1 = (int *)((longlong)this_00 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00);
      ::operator_delete((void *)this_00,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_48);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_30);
  return bVar8;
}

// Initialize @ 148cc9b30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStorageServerConnection::Initialize
          (FStorageServerConnection *this,TArrayView<FString_const_,int> *param_1,int param_2,
          TStringView<char> *param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  IStorageServerHttpClient *pIVar6;
  int iVar7;
  bool bVar8;
  TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_> TVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_res10;
  TArrayView<FString_const_,int> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  
  FAnsiString::AssignRange(&this->BaseURI,param_3->DataPtr,(int)*(undefined8 *)&param_3->Size);
  local_58.DataPtr = param_1->DataPtr;
  local_58.ArrayNum = param_1->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
  SortHostAddressesByLocalSubnet(this,&local_48,&local_58,param_2);
  bVar8 = FAnsiString::StartsWith(&this->BaseURI,"/ws/",4,IgnoreCase);
  iVar7 = local_48.ArrayNum;
  if (bVar8) {
    this->bIsUsingZenWorkspace = true;
  }
  pFVar11 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar10.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar10.Data == pFVar11) {
      pIVar6 = (this->HttpClient).Ptr;
      if (pIVar6 != (IStorageServerHttpClient *)0x0) {
        (this->HttpClient).Ptr = (IStorageServerHttpClient *)0x0;
        (**(code **)*pIVar6)(pIVar6,1);
      }
      bVar8 = false;
      goto LAB_148cc9d5d;
    }
    iVar3 = *(int *)(FVar10.Data + 8);
    pvVar5 = *(void **)FVar10.Data;
    local_58.DataPtr = (FString *)0x0;
    local_58.ArrayNum = iVar3;
    if (iVar3 == 0) {
      local_58.ArrayNum = 0;
      local_58._12_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)&local_58,iVar3,(int *)&local_58.field_0xc);
      memcpy(local_58.DataPtr,pvVar5,(longlong)iVar3 * 2);
    }
    TVar9 = CreateHttpClient(this,(FString *)&local_res10,(int)&local_58);
    if (this != (FStorageServerConnection *)TVar9.Ptr) {
      pIVar6 = (this->HttpClient).Ptr;
      (this->HttpClient).Ptr = (IStorageServerHttpClient *)*TVar9.Ptr;
      *TVar9.Ptr = (IStorageServerHttpClient)0x0;
      if (pIVar6 != (IStorageServerHttpClient *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
    if (local_res10.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_res10.Data)(local_res10.Data,1);
    }
    pFVar1 = &this->CurrentHostAddr;
    if ((FScriptContainerElement *)pFVar1 != FVar10.Data) {
      iVar3 = *(int *)(FVar10.Data + 8);
      piVar2 = &(this->CurrentHostAddr).Data.ArrayMax;
      pvVar5 = *(void **)FVar10.Data;
      iVar4 = *piVar2;
      (this->CurrentHostAddr).Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pFVar1->Data).AllocatorInstance.Data,pvVar5,(longlong)iVar3 * 2);
        }
      }
    }
    bVar8 = HandshakeRequest(this);
    if (bVar8) break;
    FVar10.Data = FVar10.Data + 0x10;
  }
  if (3 < (byte)LogStorageServerConnection._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection)
    ;
  }
  SetupCacheStrategy(this);
  bVar8 = true;
LAB_148cc9d5d:
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar8;
}

// IsHostnameAddress @ 148cccbb0

bool __cdecl FStorageServerConnection::IsHostnameAddress(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  bVar2 = ::FString::StartsWith(param_1,L"hostname://",0xb,IgnoreCase);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// IsPlatformSocketAddress @ 148ccce00

bool __cdecl FStorageServerConnection::IsPlatformSocketAddress(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  bVar2 = ::FString::StartsWith(param_1,L"platform://",0xb,IgnoreCase);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// PackageStoreRequest @ 148cd1b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cd1cf6) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStorageServerConnection::PackageStoreRequest
          (FStorageServerConnection *this,
          TFunctionRef<void___cdecl(FPackageStoreEntryResource_&&)> *param_1)

{
  uchar *puVar1;
  atomic<unsigned___int64> *paVar2;
  int *piVar3;
  int iVar4;
  atomic<unsigned___int64> aVar5;
  ulonglong uVar6;
  IStorageServerHttpClient *pIVar7;
  code *pcVar8;
  uchar auVar9 [8];
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  TCbBuffer<FCbObjectView> *pTVar15;
  FSharedBuffer FVar16;
  TStringBuilderBase<char> *this_00;
  size_t sVar17;
  TCbBuffer<FCbObjectView> *pTVar18;
  undefined4 uVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_398 [32];
  TStringView<char8_t> *local_378;
  TStringView<char8_t> *local_370;
  undefined1 local_368;
  FCbFieldView *local_360;
  undefined4 local_358;
  undefined1 local_350;
  TStringView<char8_t> local_348;
  TCbBuffer<FCbFieldView> local_338;
  FCbFieldView local_318;
  TCbBuffer<FCbObjectView> local_308;
  TStringView<char8_t> local_2e8;
  FCbFieldView local_2d8;
  FString local_2c8;
  TCbFieldIterator<FCbField> local_2b8;
  FCbObjectView local_298;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_288;
  undefined1 local_280 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_270;
  TCbBuffer<FCbObjectView> local_268;
  uchar local_250 [8];
  longlong lStack_248;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_240;
  TCbBuffer<FCbArrayView> local_238;
  FPackageStoreEntryResource local_218;
  FIoStatus local_1b8;
  uchar local_1a8 [8];
  TIoStatusOr<FIoBuffer> local_1a0;
  EStorageServerContentType local_188;
  TStringBuilderBase<char> local_178;
  char local_158 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_398;
  local_178.Base = local_158;
  bVar12 = false;
  bVar11 = false;
  uVar19 = 0;
  local_348.DataPtr = (uchar *)((ulonglong)local_348.DataPtr & 0xffffffff00000000);
  local_178.CurPos = local_158;
  local_178.End = (char *)local_58;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  this_00 = TStringBuilderBase<char>::Append<FAnsiString_&>(&local_178,&this->BaseURI);
  TStringBuilderBase<char>::Append<char,0>(this_00,"/entries?fieldfilter=packagestoreentry",0x26);
  pIVar7 = (this->HttpClient).Ptr;
  local_348.Size = 3;
  local_2d8.Value._0_1_ = 0;
  local_2e8._8_8_ = local_2e8._8_8_ & 0xffffffffffffff00;
  pcVar8 = *(code **)((longlong)*pIVar7 + 8);
  local_348.DataPtr = "GET";
  if (local_178.End < local_178.CurPos + 1) {
    TStringBuilderBase<char>::Extend(&local_178,1);
  }
  *local_178.CurPos = '\0';
  local_318._0_8_ = local_178.Base;
  if (local_178.Base != (char *)0x0) {
    sVar17 = strlen(local_178.Base);
    uVar19 = (undefined4)sVar17;
  }
  local_360 = &local_2d8;
  local_350 = 1;
  local_358 = __real_bf800000;
  local_370 = &local_2e8;
  local_368 = 0;
  local_378 = &local_348;
  local_318.Value._0_4_ = uVar19;
  (*pcVar8)(pIVar7,&local_1a0,&local_318,3);
  FIoStatus::FIoStatus(&local_1b8);
  FIoStatus::operator=(&local_1b8,&local_1a0.StatusValue);
  if ((local_1b8.ErrorCode == Ok) &&
     (local_1a8[0] = local_1a0.Value.Pad[0], local_1a8[1] = local_1a0.Value.Pad[1],
     local_1a8[2] = local_1a0.Value.Pad[2], local_1a8[3] = local_1a0.Value.Pad[3],
     local_1a8[4] = local_1a0.Value.Pad[4], local_1a8[5] = local_1a0.Value.Pad[5],
     local_1a8[6] = local_1a0.Value.Pad[6], local_1a8[7] = local_1a0.Value.Pad[7],
     local_1a0.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_1a0.Value.Pad + 0xc) =
         *(int *)((longlong)local_1a0.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  if (local_1b8.ErrorCode == Ok) {
    if (local_1a8 != (uchar  [8])0x0) {
      LOCK();
      *(int *)((longlong)local_1a8 + 0xc) = *(int *)((longlong)local_1a8 + 0xc) + 1;
      UNLOCK();
    }
    local_348.DataPtr = (uchar *)local_1a8;
    ProcessResponse((FCbObject *)local_280,(FIoBuffer)&local_348,local_188);
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId240,"StorageServerPackageStoreRequestParseEntries",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0xf0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId240);
    }
    local_318.Value._0_4_ = 7;
    local_318._0_8_ = "entries";
    local_2e8._8_8_ = CONCAT44(local_318.Value._4_4_,7);
    local_2e8.DataPtr = "entries";
    FCbObjectView::FindView((FCbObjectView *)local_280,&local_318,&local_2e8);
    if ((local_318._0_8_ & 0x1f) == 0) {
      local_338._padding_ = 0;
      local_338._padding_ = 0;
      local_338.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    }
    else {
      if ((uchar  [8])local_270.Owner != (uchar  [8])0x0) {
        LOCK();
        paVar2 = &(local_270.Owner)->ReferenceCountsAndFlags;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
        UNLOCK();
        if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
          LOCK();
          (local_270.Owner)->ReferenceCountsAndFlags =
               (atomic<unsigned___int64>)
               ((longlong)(local_270.Owner)->ReferenceCountsAndFlags + 0x40000000);
          UNLOCK();
        }
      }
      local_348.DataPtr = (uchar *)local_270.Owner;
      TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                (&local_338,&local_318,(FSharedBuffer)&local_348);
    }
    FCbField::AsArray((FCbField *)&local_338,(FCbArray *)&local_238);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_338.Buffer.Owner);
    TCbBuffer<FCbArrayView>::begin(&local_238,(FCbFieldIterator *)&local_2b8);
    bVar14 = 0;
    while (((byte)local_2b8._padding_ & 0x1f) != 0) {
      FCbFieldView::AsObjectView((FCbFieldView *)&local_2b8,(FCbObjectView *)&local_2e8);
      if (local_2b8._padding_._1_1_ == '\0') {
        bVar12 = true;
        if ((uchar  [8])local_2b8._padding_ != (uchar  [8])0x0) {
          LOCK();
          puVar1 = (uchar *)(local_2b8._padding_ + 0x18);
          uVar6 = *(ulonglong *)puVar1;
          *(longlong *)puVar1 = *(longlong *)puVar1 + 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 0) {
            LOCK();
            *(longlong *)(local_2b8._padding_ + 0x18) =
                 *(longlong *)(local_2b8._padding_ + 0x18) + 0x40000000;
            UNLOCK();
          }
        }
        local_348.DataPtr = (uchar *)local_2b8._padding_;
        TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                  (&local_308,(FCbObjectView *)&local_2e8,(FSharedBuffer)&local_348);
        pTVar18 = &local_308;
        pTVar15 = &local_308;
      }
      else {
        bVar11 = true;
        local_338._padding_ = 0;
        local_338._padding_ = 0;
        local_338.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        FCbObjectView::FCbObjectView((FCbObjectView *)&local_338);
        pTVar18 = (TCbBuffer<FCbObjectView> *)&local_338;
        local_338.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        pTVar15 = (TCbBuffer<FCbObjectView> *)&local_338;
      }
      local_298._0_4_ = *(undefined4 *)&pTVar18->_padding_;
      local_298._4_4_ = *(undefined4 *)((longlong)&pTVar18->_padding_ + 4);
      local_298._8_4_ = *(undefined4 *)&pTVar18->_padding_;
      local_298._12_4_ = *(undefined4 *)((longlong)&pTVar18->_padding_ + 4);
      local_288.Owner = (pTVar15->Buffer).Owner.Owner;
      (pTVar15->Buffer).Owner.Owner = (FBufferOwner *)0x0;
      FVar16.Owner.Owner = local_338.Buffer.Owner.Owner;
      if ((bVar11) && (bVar11 = false, local_338.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)local_338.Buffer.Owner.Owner + 0x18);
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
        UNLOCK();
        if ((aVar5._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_338.Buffer.Owner.Owner + 0x10))
                    (local_338.Buffer.Owner.Owner);
          *(void **)((longlong)FVar16.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar16.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar2 = (atomic<unsigned___int64> *)((longlong)FVar16.Owner.Owner + 0x18);
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar16.Owner.Owner)(FVar16.Owner.Owner,1);
          }
        }
      }
      if (bVar12) {
        bVar12 = false;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_308.Buffer.Owner);
      }
      local_318._0_8_ = "packagestoreentry";
      local_318.Value._0_4_ = 0x11;
      local_348._12_4_ = local_318.Value._4_4_;
      local_348.Size = 0x11;
      local_348.DataPtr = "packagestoreentry";
      FCbObjectView::FindView(&local_298,&local_2d8,&local_348);
      if ((local_2d8.TypeWithFlags & CustomByName) == None) {
        local_338._padding_ = 0;
        local_338._padding_ = 0;
        local_338.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        if (local_288.Owner != (FBufferOwner *)0x0) {
          LOCK();
          paVar2 = &(local_288.Owner)->ReferenceCountsAndFlags;
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
          UNLOCK();
          if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
            LOCK();
            (local_288.Owner)->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)
                 ((longlong)(local_288.Owner)->ReferenceCountsAndFlags + 0x40000000);
            UNLOCK();
          }
        }
        local_348.DataPtr = (uchar *)local_288.Owner;
        TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
                  (&local_338,&local_2d8,(FSharedBuffer)&local_348);
      }
      FCbFieldView::AsObjectView((FCbFieldView *)&local_338,(FCbObjectView *)&local_2c8);
      bVar21 = local_338._padding_._1_1_ != '\0';
      if (bVar21) {
        local_308._padding_ = 0;
        local_308._padding_ = 0;
        local_308.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        FCbObjectView::FCbObjectView((FCbObjectView *)&local_308);
        pTVar18 = &local_308;
        local_308.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      else {
        local_348.DataPtr = (uchar *)local_338.Buffer.Owner.Owner;
        local_338.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                  (&local_268,(FCbObjectView *)&local_2c8,(FSharedBuffer)&local_348);
        pTVar18 = &local_268;
      }
      auVar9 = (uchar  [8])pTVar18->_padding_;
      lVar10 = pTVar18->_padding_;
      bVar13 = bVar14 | bVar21;
      local_240.Owner = (pTVar18->Buffer).Owner.Owner;
      (pTVar18->Buffer).Owner.Owner = (FBufferOwner *)0x0;
      FVar16.Owner.Owner = local_308.Buffer.Owner.Owner;
      local_250 = auVar9;
      lStack_248 = lVar10;
      if (((bool)(bVar14 | bVar21)) &&
         (bVar13 = 0, local_308.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
        LOCK();
        paVar2 = (atomic<unsigned___int64> *)((longlong)local_308.Buffer.Owner.Owner + 0x18);
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + -1);
        UNLOCK();
        if ((aVar5._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_308.Buffer.Owner.Owner + 0x10))
                    (local_308.Buffer.Owner.Owner);
          *(void **)((longlong)FVar16.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar16.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar2 = (atomic<unsigned___int64> *)((longlong)FVar16.Owner.Owner + 0x18);
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar16.Owner.Owner)(FVar16.Owner.Owner,1);
          }
        }
      }
      if (!bVar21) {
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_268.Buffer.Owner);
      }
      local_348.DataPtr = (uchar *)auVar9;
      local_348._8_8_ = lVar10;
      FPackageStoreEntryResource::FromCbObject(&local_218,(FCbObjectView *)&local_348);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_240);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_338.Buffer.Owner);
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_218);
      if (local_218.SoftPackageReferences.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_218.SoftPackageReferences.AllocatorInstance.Data);
      }
      if (local_218.OptionalSegmentImportedPackageIds.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.OptionalSegmentImportedPackageIds.AllocatorInstance.Data);
      }
      if (local_218.ShaderMapHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.ShaderMapHashes.AllocatorInstance.Data);
      }
      if (local_218.ImportedPackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.ImportedPackageIds.AllocatorInstance.Data);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_288);
      TCbFieldIterator<FCbField>::operator++(&local_2b8);
      bVar14 = bVar13;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2b8._padding_);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_238.Buffer.Owner);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_270);
  }
  else {
    FIoStatus::ToString(&local_1b8,&local_2c8);
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
  }
  FIoStatus::operator=(&local_1b8,Unknown);
  auVar9 = local_1a8;
  if ((local_1b8.ErrorCode == Ok) && (local_1a8 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1a8);
    LOCK();
    piVar3 = (int *)((longlong)auVar9 + 0xc);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)auVar9);
      ::operator_delete((void *)auVar9,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_1b8);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_1a0);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_178);
  return;
}

// ReadChunkBatchRequest @ 148cd4890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
FStorageServerConnection::ReadChunkBatchRequest
          (FStorageServerConnection *this,FIoStatus *__return_storage_ptr__,
          TArray<FStorageServerConnection::FChunkBatchRequestEntry,TSizedDefaultAllocator<32>_>
          *param_1,TFunctionRef<void___cdecl(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&)>
                   *param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  IStorageServerHttpClient *pIVar3;
  BufCore *this_00;
  wchar_t *pwVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TUniquePtr<IStorageServerHttpClient,TDefaultDelete<IStorageServerHttpClient>_> *pTVar9;
  TSharedString<wchar_t> TVar10;
  ForAnyElementType FVar11;
  TRefCountPtr<FIoBuffer::BufCore> this_01;
  FIoBuffer this_02;
  uchar this_03 [8];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  FIoStatus *pFVar20;
  void *pvVar21;
  size_t sVar22;
  ulonglong uVar23;
  FIoBuffer *pFVar24;
  FIoStatus *pFVar25;
  ForElementType<FSetElementId> FVar26;
  char cVar27;
  uint uVar28;
  ulong64 uVar29;
  longlong lVar30;
  FIoHash *pFVar31;
  FStorageServerConnection *pFVar32;
  FScriptContainerElement *pFVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  ulonglong uVar36;
  uint *puVar37;
  bool bVar38;
  undefined1 auStackY_938 [32];
  undefined1 local_8e7;
  undefined1 local_8e6 [6];
  undefined1 local_8e0 [8];
  undefined1 local_8d8;
  undefined1 local_8d7 [7];
  char local_8d0 [12];
  uint local_8c4;
  ForAnyElementType local_8c0;
  int local_8b8 [2];
  ForAnyElementType local_8b0;
  int local_8a8 [2];
  undefined1 local_8a0 [8];
  FIoBuffer local_898;
  FCbWriter local_890;
  FStorageServerConnection *local_868;
  ulonglong uStack_860;
  FIoStatus *local_858;
  TFunctionRef<void___cdecl(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&)>
  *local_850;
  TRefCountPtr<FIoBuffer::BufCore> local_848;
  FIoBuffer local_840;
  FCbObjectView local_838;
  uchar local_828 [8];
  uchar local_820 [8];
  ulong64 local_818;
  bool local_810;
  FIoStatus local_808;
  TPairInitializer<FIoHash_const_&,int_const_&> local_7f8;
  LARGE_INTEGER local_7e8 [2];
  uchar local_7d8 [8];
  uchar local_7d0 [8];
  undefined8 local_7c8;
  uint local_7c0;
  uchar local_7b8 [8];
  uchar local_7b0 [8];
  FArchiveState local_7a8;
  ulonglong local_718;
  FStorageServerConnection *local_710;
  ulonglong uStack_708;
  ulonglong local_700;
  TCbFieldIterator<FCbFieldView> local_6f8;
  char *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  char *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  char *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  char *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  char *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  char *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  char *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  char *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  char *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  char *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  TMemoryView<void> local_638;
  char *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  TRefCountPtr<FIoBuffer::BufCore> local_608;
  undefined1 local_600;
  FScriptContainerElement *local_5f8;
  uint *local_5f0;
  char *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  char *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  char *local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  char *local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  char *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  FIoBuffer local_598;
  FString local_590;
  TStringView<char8_t> local_578;
  TStringView<char8_t> local_568;
  TStringView<char8_t> local_558;
  TStringView<char8_t> local_548;
  TStringView<char8_t> local_538;
  TStringView<char8_t> local_528;
  TStringView<char8_t> local_518;
  TStringView<char8_t> local_508;
  TStringView<char8_t> local_4f8;
  undefined1 local_4e0;
  char *local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  TStringView<char8_t> local_4b8;
  FCbFieldView local_4a8;
  FCbFieldView local_498;
  FCbFieldView local_488;
  FCbFieldView local_478;
  TStringView<char8_t> local_468;
  FCbFieldView local_458;
  TStringView<char8_t> local_448;
  FCbFieldView local_438;
  TStringView<char8_t> local_428;
  FCbFieldView local_418;
  TStringView<char8_t> local_408;
  FCbFieldView local_3f8;
  TStringView<char8_t> local_3e8;
  FCbFieldView local_3d8;
  FCbFieldView local_3c8;
  ulong64 local_3b8;
  undefined1 local_3b0;
  FIoStatus local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 local_384;
  undefined8 uStack_37c;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined1 local_328;
  FCbFieldViewIterator local_320;
  FIoStatus local_308;
  uchar local_2f8 [8];
  FIoHash local_2f0;
  FIoHash local_2dc;
  TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> local_2c8;
  FIoHash local_278;
  int local_260;
  int local_25c;
  FCbObjectId local_250;
  FCbObjectId local_244;
  TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
  local_238;
  TIoStatusOr<FIoBuffer> local_1e8;
  FIoHash local_1c8;
  FIoHash local_1b4;
  FIoHash local_1a0;
  TStringBuilderBase<char> local_188;
  ulonglong local_168 [32];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_938;
  bVar38 = -1 < CpuChannel->Enabled;
  local_868 = this;
  local_858 = __return_storage_ptr__;
  local_850 = param_2;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId469,"FStorageServerConnection::ReadChunkBatchRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x1d5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId469);
  }
  TVar10.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  iVar18 = param_1->ArrayNum;
  if (iVar18 == 0) {
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar10.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar4 = TVar10.Chars + -4;
      *(int *)pwVar4 = *(int *)pwVar4 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
    if (!bVar38) {
      return __return_storage_ptr__;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return __return_storage_ptr__;
  }
  if (1 < iVar18) {
    pFVar33 = (param_1->AllocatorInstance).Data;
    pFVar35 = pFVar33 + (longlong)iVar18 * 0x30;
    local_2c8.Elements._0_8_ = 0;
    local_2c8.Elements._8_8_ = 0;
    local_2c8.Elements._32_8_ = 0;
    local_2c8.Elements._40_4_ = 0;
    local_2c8.Elements._44_4_ = 0x80;
    local_2c8.Elements._48_4_ = 0xffffffff;
    local_2c8.Elements._52_4_ = 0;
    local_2c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2c8.HashSize = 0;
    while( true ) {
      if (param_1->ArrayNum != iVar18) {
        local_8e7 = 0;
        `TCheckedPointerIterator<FStorageServerConnection::FChunkBatchRequestEntry_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_8e7);
      }
      if (pFVar33 == pFVar35) break;
      local_7c0 = *(uint *)(pFVar33 + 8);
      local_7c8 = *(undefined8 *)&pFVar33->field_0x0;
      uVar28 = (uint)((ulonglong)local_7c8 >> 0x20);
      if (local_2c8.Elements._8_4_ != local_2c8.Elements._52_4_) {
        FVar26 = (ForElementType<FSetElementId>)&local_2c8.Hash;
        if (local_2c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar26 = local_2c8.Hash.SecondaryData;
        }
        iVar2 = *(int *)((longlong)FVar26 +
                        (ulonglong)
                        (local_2c8.HashSize - 1U &
                        ((uint)local_7c8 & 0xff) * 0x30f35d61 + 0x58a2c485 +
                        ((((((uVar28 >> 8 & 0xff) * 0x21 +
                            ((ushort)((ulonglong)local_7c8 >> 0x30) & 0xff)) * 0x21 +
                           (uint)(byte)((ulonglong)local_7c8 >> 0x38)) * 0x21 + (local_7c0 & 0xff))
                          * 0x21 + (local_7c0 >> 8 & 0xff)) * 0x21 + (local_7c0 >> 0x10 & 0xff)) *
                        0x21 + (((uint)((ulonglong)local_7c8 >> 8) & 0xff) * 0x21 +
                               ((uint)((ulonglong)local_7c8 >> 0x10) & 0xff)) * 0x40a9121 +
                        (uVar28 & 0xff) * -0x13be2b1f +
                        ((uint)((ulonglong)local_7c8 >> 0x18) & 0xff) * 0x747c7101 +
                        (local_7c0 >> 0x18)) * 4);
        while (iVar2 != -1) {
          lVar19 = (longlong)iVar2;
          if ((*(longlong *)(local_2c8.Elements._0_8_ + lVar19 * 0x14) ==
               *(longlong *)&pFVar33->field_0x0) &&
             (*(int *)(local_2c8.Elements._0_8_ + 8 + lVar19 * 0x14) == *(int *)(pFVar33 + 8))) {
            ::LexToString(&local_590,(FIoChunkId *)pFVar33);
            UE::Logging::Private::BasicFatalLog
                      (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
            if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_590.Data.AllocatorInstance.Data);
            }
            pFVar20 = local_858;
            TVar10.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
            (local_858->ErrorMessage).Chars = FIoStatus::Unknown.ErrorMessage.Chars;
            if (TVar10.Chars != (wchar_t *)0x0) {
              LOCK();
              pwVar4 = TVar10.Chars + -4;
              *(int *)pwVar4 = *(int *)pwVar4 + 1;
              UNLOCK();
            }
            local_858->ErrorCode = FIoStatus::Unknown.ErrorCode;
            local_858->SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
            local_2c8.HashSize = 0;
            if (local_2c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_2c8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_2c8.Elements);
            if (!bVar38) {
              return pFVar20;
            }
            FCpuProfilerTrace::OutputEndEvent();
            return pFVar20;
          }
          iVar2 = *(int *)(local_2c8.Elements._0_8_ + 0xc + lVar19 * 0x14);
        }
      }
      TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::
      Emplace<FIoChunkId_const_&>(&local_2c8,(FIoChunkId *)local_8a0,(bool *)pFVar33);
      pFVar33 = pFVar33 + 0x30;
    }
    local_2c8.HashSize = 0;
    if (local_2c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.Elements);
  }
  QueryPerformanceCounter((LARGE_INTEGER *)&local_7f8.Value);
  dVar7 = (double)(longlong)local_7f8.Value * FGenericPlatformTime::SecondsPerCycle;
  FCbWriter::FCbWriter(&local_890);
  FCbWriter::BeginObject(&local_890);
  uStack_6c0 = 6;
  local_6c8 = "method";
  local_578._12_4_ = uStack_6bc;
  local_578.Size = 6;
  local_578.DataPtr = "method";
  FCbWriter::SetNameOrAddString(&local_890,&local_578);
  uStack_6b0 = 9;
  local_6b8 = "getchunks";
  local_568._12_4_ = uStack_6ac;
  local_568.Size = 9;
  local_568.DataPtr = "getchunks";
  FCbWriter::SetNameOrAddString(&local_890,&local_568);
  uStack_6a0 = 7;
  local_6a8 = "Request";
  local_558._12_4_ = uStack_69c;
  local_558.Size = 7;
  local_558.DataPtr = "Request";
  FCbWriter::SetName(&local_890,&local_558);
  FCbWriter::BeginObject(&local_890);
  if (param_3) {
    uStack_690 = 8;
    local_698 = "SkipData";
    local_548._12_4_ = uStack_68c;
    local_548.Size = 8;
    local_548.DataPtr = "SkipData";
    FCbWriter::SetNameOrAddString(&local_890,&local_548);
    FCbWriter::AddBool(&local_890,true);
  }
  uStack_680 = 6;
  local_688 = "Chunks";
  local_538._12_4_ = uStack_67c;
  local_538.Size = 6;
  local_538.DataPtr = "Chunks";
  FCbWriter::SetName(&local_890,&local_538);
  FCbWriter::BeginArray(&local_890);
  iVar18 = param_1->ArrayNum;
  pFVar33 = (param_1->AllocatorInstance).Data;
  pFVar35 = pFVar33 + (longlong)iVar18 * 0x30;
  while( true ) {
    if (param_1->ArrayNum != iVar18) {
      local_8e6[0] = 0;
      `TCheckedPointerIterator<FStorageServerConnection::FChunkBatchRequestEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_8e6);
    }
    if (pFVar33 == pFVar35) break;
    FCbWriter::BeginObject(&local_890);
    if (!param_3) {
      local_678 = "Offset";
      uStack_670 = 6;
      local_528._12_4_ = uStack_66c;
      local_528.Size = 6;
      local_528.DataPtr = "Offset";
      FCbWriter::SetNameOrAddString(&local_890,&local_528);
      FCbWriter::AddInteger(&local_890,*(ulong64 *)(pFVar33 + 0x10));
      uStack_660 = 4;
      local_668 = "Size";
      local_518._12_4_ = uStack_65c;
      local_518.Size = 4;
      local_518.DataPtr = "Size";
      FCbWriter::SetNameOrAddString(&local_890,&local_518);
      FCbWriter::AddInteger(&local_890,*(ulong64 *)&pFVar33[0x18].field_0x0);
    }
    local_658 = "Oid";
    uStack_650 = 3;
    local_508._12_4_ = uStack_64c;
    local_508.Size = 3;
    local_508.DataPtr = "Oid";
    FCbWriter::SetNameOrAddString(&local_890,&local_508);
    ::operator<<(&local_890,(FIoChunkId *)pFVar33);
    if (pFVar33[0x28] != (FScriptContainerElement)0x0) {
      uStack_640 = 6;
      local_648 = "ModTag";
      local_4f8._12_4_ = uStack_63c;
      local_4f8.Size = 6;
      local_4f8.DataPtr = "ModTag";
      FCbWriter::SetNameOrAddString(&local_890,&local_4f8);
      if ((pFVar33[0x28] == (FScriptContainerElement)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar16)) {
        pcVar5 = (code *)swi(3);
        pFVar20 = (FIoStatus *)(*pcVar5)();
        return pFVar20;
      }
      FCbWriter::AddInteger(&local_890,*(ulong64 *)(pFVar33 + 0x20));
    }
    FCbWriter::EndObject(&local_890);
    pFVar33 = pFVar33 + 0x30;
  }
  FCbWriter::EndArray(&local_890);
  FCbWriter::EndObject(&local_890);
  FCbWriter::EndObject(&local_890);
  pFVar32 = local_868;
  local_188.Base = (char *)local_168;
  local_188.CurPos = (char *)local_168;
  local_188.End = (char *)local_68;
  pFVar33 = (local_868->BaseURI).Data.AllocatorInstance.Data;
  iVar2 = (local_868->BaseURI).Data.ArrayNum;
  local_188.bIsDynamic = false;
  local_188.bIsExternal = false;
  iVar18 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar18 = 0;
  }
  uVar29 = (ulong64)iVar18;
  if (local_68 < (ulonglong *)((longlong)local_168 + uVar29)) {
    TStringBuilderBase<char>::Extend(&local_188,uVar29);
  }
  if (iVar18 != 0) {
    pvVar21 = FGenericPlatformString::Memcpy(local_188.CurPos,pFVar33,uVar29);
    local_188.CurPos = (char *)(uVar29 + (longlong)pvVar21);
  }
  if (local_188.End < (ulonglong *)((longlong)local_188.CurPos + 4)) {
    TStringBuilderBase<char>::Extend(&local_188,4);
  }
  pvVar21 = FGenericPlatformString::Memcpy(local_188.CurPos,"/rpc",4);
  local_188.CurPos = (char *)((longlong)pvVar21 + 4);
  uVar29 = FCbWriter::GetSaveSize(&local_890);
  FIoBuffer::FIoBuffer(&local_898,uVar29);
  local_638.Data = *(void **)local_898.CorePtr.Reference;
  local_638.Size =
       (ulong64)CONCAT14(*(uchar *)((longlong)local_898.CorePtr.Reference + 0x18),
                         *(uint *)((longlong)local_898.CorePtr.Reference + 8));
  FCbWriter::Save(&local_890,&local_320,&local_638);
  pIVar3 = (pFVar32->HttpClient).Ptr;
  local_4e0 = 0;
  pcVar5 = *(code **)((longlong)*pIVar3 + 8);
  local_608 = local_898.CorePtr.Reference;
  if (local_898.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_898.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_898.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  local_628 = "POST";
  local_600 = 1;
  uStack_620 = 4;
  if (local_188.End < local_188.CurPos + 1) {
    TStringBuilderBase<char>::Extend(&local_188,1);
  }
  *local_188.CurPos = '\0';
  uStack_610 = 0;
  local_618 = (ulonglong *)local_188.Base;
  if ((ulonglong *)local_188.Base != (ulonglong *)0x0) {
    sVar22 = strlen(local_188.Base);
    uStack_610 = (undefined4)sVar22;
  }
  uStack_4d0 = CONCAT44(uStack_61c,uStack_620);
  local_4d8 = local_628;
  local_4c8 = (undefined4)local_618;
  uStack_4c4 = local_618._4_4_;
  uStack_4bc = uStack_60c;
  uStack_4c0 = uStack_610;
  (*pcVar5)(pIVar3,&local_1e8,&local_4c8,3);
  FIoStatus::FIoStatus(&local_308);
  FIoStatus::operator=(&local_308,&local_1e8.StatusValue);
  if (local_308.ErrorCode != Ok) {
    (local_858->ErrorMessage).Chars = local_308.ErrorMessage.Chars;
    if (local_308.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_308.ErrorMessage.Chars + -4) = *(int *)(local_308.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_858->SystemErrorCode = local_308.SystemErrorCode;
    local_858->ErrorCode = local_308.ErrorCode;
    pFVar20 = local_858;
    goto LAB_148cd6113;
  }
  local_2f8[0] = local_1e8.Value.Pad[0];
  local_2f8[1] = local_1e8.Value.Pad[1];
  local_2f8[2] = local_1e8.Value.Pad[2];
  local_2f8[3] = local_1e8.Value.Pad[3];
  local_2f8[4] = local_1e8.Value.Pad[4];
  local_2f8[5] = local_1e8.Value.Pad[5];
  local_2f8[6] = local_1e8.Value.Pad[6];
  local_2f8[7] = local_1e8.Value.Pad[7];
  if (local_1e8.Value.Pad != (uchar  [8])0x0) {
    LOCK();
    *(int *)((longlong)local_1e8.Value.Pad + 0xc) =
         *(int *)((longlong)local_1e8.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  QueryPerformanceCounter(local_7e8);
  dVar6 = (double)local_7e8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (local_308.ErrorCode != Ok) {
    StatusOrCrash(&local_308);
  }
  AddTimingInstance(pFVar32,dVar6 - dVar7,
                    (ulonglong)
                    CONCAT14(*(uchar *)((longlong)local_2f8 + 0x18),
                             *(uint *)((longlong)local_2f8 + 8)));
  if (local_308.ErrorCode != Ok) {
    StatusOrCrash(&local_308);
  }
  local_868 = *(FStorageServerConnection **)local_2f8;
  uStack_860 = (ulonglong)
               CONCAT14(*(uchar *)((longlong)local_2f8 + 0x18),*(uint *)((longlong)local_2f8 + 8));
  local_7a8._padding_ = 0;
  local_7a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_7a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_7a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_7a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_7a8._40_8_ = 0;
  local_7a8.ArSerializingDefaults = 0;
  local_7a8.ArPortFlags = 0;
  local_7a8.ArMaxSerializeSize = 0;
  local_7a8.ArUEVer.FileVersionUE4 = 0;
  local_7a8.ArUEVer.FileVersionUE5 = 0;
  local_7a8.ArLicenseeUEVer = 0;
  local_7a8.ArEngineVer.Major = 0;
  local_7a8.ArEngineVer.Minor = 0;
  local_7a8.ArEngineVer.Patch = 0;
  local_7a8.ArEngineVer._6_2_ = 0;
  local_7a8.ArEngineVer.Changelist = 0;
  local_7a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_7a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_7a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_7a8.SerializedProperty = (FProperty *)0x0;
  local_7a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_7a8.bCustomVersionsAreReset = false;
  local_7a8._129_7_ = 0;
  local_7a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_7a8);
  local_718 = 0;
  local_7a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_700 = 0x7fffffffffffffff;
  local_710 = local_868;
  uStack_708 = uStack_860;
  FArchiveState::SetIsLoading(&local_7a8,true);
  (**(code **)(local_7a8._padding_ + 0x108))(&local_7a8,0);
  if (local_7a8.ArIsError == 0) {
    if (*(code **)(local_7a8._padding_ + 0x30) == FMemoryReaderView::TotalSize) {
      uVar23 = local_700;
      if ((longlong)uStack_708 < (longlong)local_700) {
        uVar23 = uStack_708;
      }
    }
    else {
      uVar23 = (**(code **)(local_7a8._padding_ + 0x30))(&local_7a8);
    }
    if ((longlong)uVar23 < (longlong)(local_718 + 0x10)) {
      FArchiveState::SetError(&local_7a8);
    }
    else {
      uVar23 = local_718;
      if (uStack_708 < local_718) {
        uVar23 = uStack_708;
      }
      pTVar9 = &local_710->HttpClient;
      uVar36 = 0x10;
      if (uStack_708 - uVar23 < 0x10) {
        uVar36 = uStack_708 - uVar23;
      }
      if (uVar36 < 0x11) {
        if (uVar36 != 0) goto LAB_148cd53cd;
      }
      else {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InView.Size <= Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                            ,0xdb,
                            L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
        if (bVar16) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
LAB_148cd53cd:
        memcpy(&local_260,(void *)((longlong)&pTVar9->Ptr + uVar23),uVar36);
      }
      local_718 = local_718 + 0x10;
    }
  }
  if (local_260 != -0x55885534) {
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
    pFVar20 = local_858;
    TVar10 = FIoStatus::Unknown.ErrorMessage;
    (local_858->ErrorMessage).Chars = FIoStatus::Unknown.ErrorMessage.Chars;
    if (TVar10.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar4 = TVar10.Chars + -4;
      *(int *)pwVar4 = *(int *)pwVar4 + 1;
      UNLOCK();
    }
    local_858->ErrorCode = FIoStatus::Unknown.ErrorCode;
    local_858->SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
    FArchive::~FArchive((FArchive *)&local_7a8);
    goto LAB_148cd6113;
  }
  local_8c0.Data = (FScriptContainerElement *)0x0;
  local_8b8[0] = 0;
  local_8b8[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,local_25c + 1,&local_8c0,local_8b8,local_8b8 + 1);
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._48_4_ = 0xffffffff;
  local_238.Elements._52_4_ = 0;
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_238.HashSize = 0;
  local_8c4 = 0;
  if (0 < local_8b8[0]) {
    do {
      uVar28 = local_8c4;
      uVar17 = 0;
      if ((int)local_8c4 < local_8b8[0]) {
        uVar17 = ~local_8c4 >> 0x1f;
      }
      iVar18 = local_8b8[0];
      if (uVar17 == 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
        iVar18 = local_8b8[0];
      }
      pFVar33 = local_8c0.Data + (longlong)(int)uVar28 * 0x20;
      if (local_7a8.ArIsError == 0) {
        lVar30 = local_718 + 0x20;
        lVar19 = (**(code **)(local_7a8._padding_ + 0x30))(&local_7a8);
        if (lVar19 < lVar30) {
          FArchiveState::SetError(&local_7a8);
        }
        else {
          uVar23 = local_718;
          if (uStack_708 < local_718) {
            uVar23 = uStack_708;
          }
          pTVar9 = &local_710->HttpClient;
          uVar36 = 0x20;
          if (uStack_708 - uVar23 < 0x20) {
            uVar36 = uStack_708 - uVar23;
          }
          if (uVar36 < 0x21) {
            if (uVar36 != 0) goto LAB_148cd55fc;
          }
          else {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InView.Size <= Size",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                ,0xdb,
                                L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              pFVar20 = (FIoStatus *)(*pcVar5)();
              return pFVar20;
            }
LAB_148cd55fc:
            memcpy(pFVar33,(void *)((longlong)&pTVar9->Ptr + uVar23),uVar36);
          }
          local_718 = local_718 + 0x20;
        }
        iVar18 = local_8b8[0];
      }
      lVar19 = (longlong)(int)local_8c4;
      uVar28 = 0;
      if ((int)local_8c4 < iVar18) {
        uVar28 = ~local_8c4 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        pFVar20 = (FIoStatus *)(*pcVar5)();
        return pFVar20;
      }
      local_5f8 = local_8c0.Data + lVar19 * 0x20 + 0xc;
      local_5f0 = &local_8c4;
      TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FIoHash_const_&,int_const_&>_>
                (&local_238,&local_7f8,(bool *)&local_5f8);
      local_8c4 = local_8c4 + 1;
    } while ((int)local_8c4 < local_8b8[0]);
  }
  uVar23 = 0;
  if (local_308.ErrorCode != Ok) {
    StatusOrCrash(&local_308);
  }
  FCbFieldView::FCbFieldView(&local_4a8,(void *)(local_718 + *(longlong *)local_2f8),HasFieldType);
  local_8b0.Data = (FScriptContainerElement *)0x0;
  local_8a8[0] = 0;
  local_8a8[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,local_25c + 1,&local_8b0,local_8a8,local_8a8 + 1);
  if (0 < local_8b8[0]) {
    lVar19 = -0x20;
    uVar36 = uVar23;
    do {
      uVar28 = (uint)uVar23;
      uVar34 = local_718;
      if (uVar28 != 0) {
        uVar17 = 0;
        if ((int)(uVar28 - 1) < local_8a8[0]) {
          uVar17 = -uVar28 >> 0x1f;
        }
        iVar18 = local_8b8[0];
        if (uVar17 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar5 = (code *)swi(3);
            pFVar20 = (FIoStatus *)(*pcVar5)();
            return pFVar20;
          }
          iVar18 = local_8b8[0];
        }
        local_868 = (FStorageServerConnection *)local_8b0.Data;
        uVar17 = 0;
        if ((int)(uVar28 - 1) < iVar18) {
          uVar17 = -uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
        uVar34 = *(longlong *)(local_8c0.Data + lVar19) +
                 *(longlong *)((uVar36 - 8) + (longlong)local_868);
      }
      uVar17 = 0;
      if ((int)uVar28 < local_8a8[0]) {
        uVar17 = ~uVar28 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        pFVar20 = (FIoStatus *)(*pcVar5)();
        return pFVar20;
      }
      uVar23 = (ulonglong)(uVar28 + 1);
      lVar19 = lVar19 + 0x20;
      *(ulonglong *)(local_8b0.Data + uVar36) = uVar34;
      uVar36 = uVar36 + 8;
    } while ((int)(uVar28 + 1) < local_8b8[0]);
  }
  pFVar32 = (FStorageServerConnection *)0x0;
  uStack_5e0 = 6;
  local_5e8 = "Chunks";
  local_4b8._12_4_ = uStack_5dc;
  local_4b8.Size = 6;
  local_4b8.DataPtr = "Chunks";
  FCbObjectView::FindView((FCbObjectView *)&local_4a8,&local_498,&local_4b8);
  FCbFieldView::AsArrayView(&local_498,(FCbArrayView *)&local_488);
  local_868 = (FStorageServerConnection *)0x0;
  FCbFieldView::CreateViewIterator(&local_488,(FCbFieldViewIterator *)&local_6f8);
  if (((byte)local_6f8._padding_ & 0x1f) == 0) {
LAB_148cd603c:
    bVar16 = true;
    pFVar25 = FIoStatus::FIoStatus(&local_3a8,NotFound);
    bVar8 = false;
  }
  else {
    do {
      local_478.Value = (void *)local_6f8._padding_;
      FCbFieldView::AsObjectView(&local_478,&local_838);
      local_5d8 = "Id";
      uStack_5d0 = 2;
      local_468._12_4_ = uStack_5cc;
      local_468.Size = 2;
      local_468.DataPtr = "Id";
      FCbObjectView::FindView(&local_838,&local_458,&local_468);
      local_244.Bytes[0] = '\0';
      local_244.Bytes[1] = '\0';
      local_244.Bytes[2] = '\0';
      local_244.Bytes[3] = '\0';
      local_244.Bytes[4] = '\0';
      local_244.Bytes[5] = '\0';
      local_244.Bytes[6] = '\0';
      local_244.Bytes[7] = '\0';
      local_244.Bytes[8] = '\0';
      local_244.Bytes[9] = '\0';
      local_244.Bytes[10] = '\0';
      local_244.Bytes[0xb] = '\0';
      FCbFieldView::AsObjectId(&local_458,&local_250,&local_244);
      local_5c8 = "RawHash";
      uStack_5c0 = 7;
      local_448._12_4_ = uStack_5bc;
      local_448.Size = 7;
      local_448.DataPtr = "RawHash";
      FCbObjectView::FindView(&local_838,&local_438,&local_448);
      local_1c8.Hash[0x10] = '\0';
      local_1c8.Hash[0x11] = '\0';
      local_1c8.Hash[0x12] = '\0';
      local_1c8.Hash[0x13] = '\0';
      local_1c8.Hash[0] = '\0';
      local_1c8.Hash[1] = '\0';
      local_1c8.Hash[2] = '\0';
      local_1c8.Hash[3] = '\0';
      local_1c8.Hash[4] = '\0';
      local_1c8.Hash[5] = '\0';
      local_1c8.Hash[6] = '\0';
      local_1c8.Hash[7] = '\0';
      local_1c8.Hash[8] = '\0';
      local_1c8.Hash[9] = '\0';
      local_1c8.Hash[10] = '\0';
      local_1c8.Hash[0xb] = '\0';
      local_1c8.Hash[0xc] = '\0';
      local_1c8.Hash[0xd] = '\0';
      local_1c8.Hash[0xe] = '\0';
      local_1c8.Hash[0xf] = '\0';
      FCbFieldView::AsHash(&local_438,&local_2dc,&local_1c8);
      uStack_5b0 = 0xc;
      local_5b8 = "FragmentHash";
      local_428._12_4_ = uStack_5ac;
      local_428.Size = 0xc;
      local_428.DataPtr = "FragmentHash";
      FCbObjectView::FindView(&local_838,&local_418,&local_428);
      local_1b4.Hash[0x10] = '\0';
      local_1b4.Hash[0x11] = '\0';
      local_1b4.Hash[0x12] = '\0';
      local_1b4.Hash[0x13] = '\0';
      local_1b4.Hash[0] = '\0';
      local_1b4.Hash[1] = '\0';
      local_1b4.Hash[2] = '\0';
      local_1b4.Hash[3] = '\0';
      local_1b4.Hash[4] = '\0';
      local_1b4.Hash[5] = '\0';
      local_1b4.Hash[6] = '\0';
      local_1b4.Hash[7] = '\0';
      local_1b4.Hash[8] = '\0';
      local_1b4.Hash[9] = '\0';
      local_1b4.Hash[10] = '\0';
      local_1b4.Hash[0xb] = '\0';
      local_1b4.Hash[0xc] = '\0';
      local_1b4.Hash[0xd] = '\0';
      local_1b4.Hash[0xe] = '\0';
      local_1b4.Hash[0xf] = '\0';
      FCbFieldView::AsHash(&local_418,&local_278,&local_1b4);
      uStack_5a0 = 4;
      local_5a8 = "Hash";
      local_408._12_4_ = uStack_59c;
      local_408.Size = 4;
      local_408.DataPtr = "Hash";
      FCbObjectView::FindView(&local_838,&local_3f8,&local_408);
      local_1a0.Hash[0x10] = '\0';
      local_1a0.Hash[0x11] = '\0';
      local_1a0.Hash[0x12] = '\0';
      local_1a0.Hash[0x13] = '\0';
      local_1a0.Hash[0] = '\0';
      local_1a0.Hash[1] = '\0';
      local_1a0.Hash[2] = '\0';
      local_1a0.Hash[3] = '\0';
      local_1a0.Hash[4] = '\0';
      local_1a0.Hash[5] = '\0';
      local_1a0.Hash[6] = '\0';
      local_1a0.Hash[7] = '\0';
      local_1a0.Hash[8] = '\0';
      local_1a0.Hash[9] = '\0';
      local_1a0.Hash[10] = '\0';
      local_1a0.Hash[0xb] = '\0';
      local_1a0.Hash[0xc] = '\0';
      local_1a0.Hash[0xd] = '\0';
      local_1a0.Hash[0xe] = '\0';
      local_1a0.Hash[0xf] = '\0';
      FCbFieldView::AsHash(&local_3f8,&local_2f0,&local_1a0);
      uStack_6d0 = 6;
      local_6d8 = "ModTag";
      local_3e8._12_4_ = uStack_6cc;
      local_3e8.Size = 6;
      local_3e8.DataPtr = "ModTag";
      FCbObjectView::FindView(&local_838,&local_3d8,&local_3e8);
      local_3c8.TypeWithFlags = local_3d8.TypeWithFlags;
      local_3c8.Error = local_3d8.Error;
      local_3c8._2_1_ = local_3d8._2_1_;
      local_3c8._3_1_ = local_3d8._3_1_;
      local_3c8.NameLen._0_1_ = (undefined1)local_3d8.NameLen;
      local_3c8.NameLen._1_1_ = local_3d8.NameLen._1_1_;
      local_3c8.NameLen._2_1_ = local_3d8.NameLen._2_1_;
      local_3c8.NameLen._3_1_ = local_3d8.NameLen._3_1_;
      local_3c8.Value._0_1_ = local_3d8.Value._0_1_;
      local_3c8.Value._1_1_ = local_3d8.Value._1_1_;
      local_3c8.Value._2_1_ = local_3d8.Value._2_1_;
      local_3c8.Value._3_1_ = local_3d8.Value._3_1_;
      local_3c8.Value._4_1_ = local_3d8.Value._4_1_;
      local_3c8.Value._5_1_ = local_3d8.Value._5_1_;
      local_3c8.Value._6_1_ = local_3d8.Value._6_1_;
      local_3c8.Value._7_1_ = local_3d8.Value._7_1_;
      bVar16 = (local_3d8.TypeWithFlags & CustomById) != IntegerPositive;
      if (bVar16) {
        local_328 = 0;
      }
      else {
        local_818 = FCbFieldView::AsInteger(&local_3c8,0,(FIntegerParams)0x80);
        local_3b8 = local_818;
        local_3b0 = 1;
      }
      uVar14 = local_250.Bytes._8_4_;
      uVar12 = local_250.Bytes._0_8_;
      local_810 = !bVar16;
      local_828[0] = local_250.Bytes[0];
      local_828[1] = local_250.Bytes[1];
      local_828[2] = local_250.Bytes[2];
      local_828[3] = local_250.Bytes[3];
      local_828[4] = local_250.Bytes[4];
      local_828[5] = local_250.Bytes[5];
      local_828[6] = local_250.Bytes[6];
      local_828[7] = local_250.Bytes[7];
      local_820[0] = local_250.Bytes[8];
      local_820[1] = local_250.Bytes[9];
      local_820[2] = local_250.Bytes[10];
      local_820[3] = local_250.Bytes[0xb];
      if (param_3) {
        pFVar24 = FIoBuffer::FIoBuffer(&local_598);
        uVar15 = local_250.Bytes._8_4_;
        uVar13 = local_250.Bytes._0_8_;
        local_250.Bytes[8] = (uchar)uVar14;
        local_250.Bytes[9] = SUB41(uVar14,1);
        local_250.Bytes[10] = SUB41(uVar14,2);
        local_250.Bytes[0xb] = SUB41(uVar14,3);
        local_7b0[0] = local_250.Bytes[8];
        local_7b0[1] = local_250.Bytes[9];
        local_7b0[2] = local_250.Bytes[10];
        local_7b0[3] = local_250.Bytes[0xb];
        local_250.Bytes[0] = (uchar)uVar12;
        local_250.Bytes[1] = SUB81(uVar12,1);
        local_250.Bytes[2] = SUB81(uVar12,2);
        local_250.Bytes[3] = SUB81(uVar12,3);
        local_250.Bytes[4] = SUB81(uVar12,4);
        local_250.Bytes[5] = SUB81(uVar12,5);
        local_250.Bytes[6] = SUB81(uVar12,6);
        local_250.Bytes[7] = SUB81(uVar12,7);
        local_7b8[0] = local_250.Bytes[0];
        local_7b8[1] = local_250.Bytes[1];
        local_7b8[2] = local_250.Bytes[2];
        local_7b8[3] = local_250.Bytes[3];
        local_7b8[4] = local_250.Bytes[4];
        local_7b8[5] = local_250.Bytes[5];
        local_7b8[6] = local_250.Bytes[6];
        local_7b8[7] = local_250.Bytes[7];
        local_8e0[0] = 0;
        local_250.Bytes._0_8_ = uVar13;
        local_250.Bytes._8_4_ = uVar15;
        (**(code **)local_850)(*(undefined8 *)&local_850->field_0x8,local_7b8,local_8e0,pFVar24);
        this_00 = (pFVar24->CorePtr).Reference;
        if (this_00 == (BufCore *)0x0) goto LAB_148cd5fc1;
        FIoBuffer::BufCore::CheckRefCount(this_00);
        LOCK();
        piVar1 = &this_00->NumRefs;
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 != 1) goto LAB_148cd5fc1;
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
        local_868 = (FStorageServerConnection *)((longlong)&(local_868->HttpClient).Ptr + 1);
        pFVar32 = local_868;
      }
      else {
        local_388 = 0;
        local_398 = 0;
        uStack_390 = 0;
        if (((local_2dc.Hash._0_8_ == 0) && (local_2dc.Hash._8_8_ == 0)) &&
           (local_2dc.Hash._16_4_ == 0)) {
          local_374 = 0;
          local_384 = 0;
          uStack_37c = 0;
          if (((local_278.Hash._0_8_ == 0) && (local_278.Hash._8_8_ == 0)) &&
             (local_278.Hash._16_4_ == 0)) {
            local_360 = 0;
            local_370 = 0;
            uStack_368 = 0;
            if (((CONCAT44(local_2f0.Hash._4_4_,local_2f0.Hash._0_4_) == 0) &&
                (local_2f0.Hash._8_8_ == 0)) && (local_2f0.Hash._16_4_ == 0)) {
              local_8d8 = 0;
              bVar16 = `FStorageServerConnection::ReadChunkBatchRequest'::__l85::<lambda_1>::
                       operator()(&local_8d8);
              if (!bVar16) goto LAB_148cd5fd2;
            }
          }
        }
        local_34c = 0;
        local_35c = 0;
        uStack_354 = 0;
        if (((CONCAT44(local_2f0.Hash._4_4_,local_2f0.Hash._0_4_) == 0) &&
            (local_2f0.Hash._8_8_ == 0)) && (local_2f0.Hash._16_4_ == 0)) {
          local_338 = 0;
          local_348 = 0;
          uStack_340 = 0;
          uVar23 = local_2dc.Hash._0_8_;
          if ((local_2dc.Hash._0_8_ == 0) &&
             (uVar23 = local_2dc.Hash._8_8_, local_2dc.Hash._8_8_ == 0)) {
            uVar23 = (ulonglong)(uint)local_2dc.Hash._16_4_;
          }
          pFVar31 = &local_2dc;
          if (uVar23 == 0) {
            pFVar31 = &local_278;
          }
          uVar28 = *(uint *)pFVar31->Hash;
        }
        else {
          pFVar31 = &local_2f0;
          uVar28 = local_2f0.Hash._0_4_;
        }
        iVar18 = TSet<TTuple<FIoHash,int>,TDefaultMapHashableKeyFuncs<FIoHash,int,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FIoHash>(&local_238,uVar28,pFVar31);
        puVar37 = (uint *)0x0;
        if (iVar18 == -1) {
LAB_148cd5db8:
          local_8d7[0] = 0;
          bVar16 = `FStorageServerConnection::ReadChunkBatchRequest'::__l88::<lambda_2>::operator()
                             (local_8d7);
          pFVar32 = local_868;
          if (!bVar16) goto LAB_148cd5fd2;
        }
        else {
          lVar19 = (longlong)iVar18 * 0x20 + local_238.Elements._0_8_;
          puVar37 = (uint *)(lVar19 + 0x14);
          if (lVar19 == 0) {
            puVar37 = (uint *)0x0;
          }
          if (puVar37 == (uint *)0x0) goto LAB_148cd5db8;
        }
        uVar28 = *puVar37;
        uVar17 = 0;
        if ((int)uVar28 < local_8b8[0]) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
        FVar11.Data = local_8c0.Data;
        lVar19 = (longlong)(int)uVar28 * 0x20;
        if ((((*(longlong *)(local_8c0.Data + lVar19 + 0xc) != *(longlong *)pFVar31->Hash) ||
             (*(longlong *)(local_8c0.Data + lVar19 + 0x14) != *(longlong *)(pFVar31->Hash + 8))) ||
            (*(int *)(local_8c0.Data + lVar19 + 0x1c) != *(int *)(pFVar31->Hash + 0x10))) &&
           (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8449410219921898884>,true,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                                ,0x27c,"Attachment.Hash == AttachmentHash"), bVar16)) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
        uVar28 = *(uint *)(FVar11.Data + lVar19 + 8);
        if ((uVar28 & 1) == 0) {
          cVar27 = ((uVar28 & 2) == 0) + '\x01';
        }
        else {
          cVar27 = '\x03';
        }
        uVar29 = *(ulong64 *)(FVar11.Data + lVar19);
        if (local_308.ErrorCode != Ok) {
          StatusOrCrash(&local_308);
        }
        uVar28 = *puVar37;
        lVar19 = *(longlong *)local_2f8;
        uVar17 = 0;
        if ((int)uVar28 < local_8a8[0]) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          pFVar20 = (FIoStatus *)(*pcVar5)();
          return pFVar20;
        }
        FIoBuffer::FIoBuffer
                  (&local_840,Wrap,
                   (void *)(*(longlong *)(local_8b0.Data + (longlong)(int)uVar28 * 8) + lVar19),
                   uVar29);
        local_848 = local_840.CorePtr.Reference;
        if (local_840.CorePtr.Reference != (BufCore *)0x0) {
          LOCK();
          *(int *)((longlong)local_840.CorePtr.Reference + 0xc) =
               *(int *)((longlong)local_840.CorePtr.Reference + 0xc) + 1;
          UNLOCK();
        }
        local_7d0[0] = local_820[0];
        local_7d0[1] = local_820[1];
        local_7d0[2] = local_820[2];
        local_7d0[3] = local_820[3];
        local_7d8[0] = local_828[0];
        local_7d8[1] = local_828[1];
        local_7d8[2] = local_828[2];
        local_7d8[3] = local_828[3];
        local_7d8[4] = local_828[4];
        local_7d8[5] = local_828[5];
        local_7d8[6] = local_828[6];
        local_7d8[7] = local_828[7];
        local_8d0[0] = cVar27;
        (**(code **)local_850)(*(undefined8 *)&local_850->field_0x8,local_7d8,local_8d0,&local_848);
        this_01.Reference = local_848.Reference;
        if (local_848.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(local_848.Reference);
          LOCK();
          piVar1 = &(this_01.Reference)->NumRefs;
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            FIoBuffer::BufCore::~BufCore(this_01.Reference);
            ::operator_delete(this_01.Reference,0x20);
          }
        }
        this_02.CorePtr.Reference = local_840.CorePtr.Reference;
        if (local_840.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_840.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)this_02.CorePtr.Reference + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)this_02.CorePtr.Reference);
            ::operator_delete((void *)this_02.CorePtr.Reference,0x20);
          }
        }
LAB_148cd5fc1:
        local_868 = (FStorageServerConnection *)((longlong)&(local_868->HttpClient).Ptr + 1);
        pFVar32 = local_868;
      }
LAB_148cd5fd2:
      TCbFieldIterator<FCbFieldView>::operator++(&local_6f8);
    } while (((byte)local_6f8._padding_ & 0x1f) != 0);
    if (pFVar32 == (FStorageServerConnection *)0x0) goto LAB_148cd603c;
    local_808.ErrorMessage.Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    pFVar25 = &local_808;
    local_808.ErrorCode = FIoStatus::Ok.ErrorCode;
    bVar8 = true;
    bVar16 = false;
    local_808.SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  pFVar20 = local_858;
  pwVar4 = (pFVar25->ErrorMessage).Chars;
  (local_858->ErrorMessage).Chars = pwVar4;
  if (pwVar4 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar4 + -4) = *(int *)(pwVar4 + -4) + 1;
    UNLOCK();
  }
  local_858->ErrorCode = pFVar25->ErrorCode;
  local_858->SystemErrorCode = pFVar25->SystemErrorCode;
  if (bVar16) {
    FIoStatus::~FIoStatus(&local_3a8);
  }
  if (bVar8) {
    FIoStatus::~FIoStatus(&local_808);
  }
  if ((FStorageServerConnection *)local_8b0.Data != (FStorageServerConnection *)0x0) {
    FMemory::Free(local_8b0.Data);
  }
  local_238.HashSize = 0;
  if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_238.Elements);
  if (local_8c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c0.Data);
  }
  FArchive::~FArchive((FArchive *)&local_7a8);
LAB_148cd6113:
  FIoStatus::operator=(&local_308,Unknown);
  this_03 = local_2f8;
  if ((local_308.ErrorCode == Ok) && (local_2f8 != (uchar  [8])0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_2f8);
    LOCK();
    piVar1 = (int *)((longlong)this_03 + 0xc);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_03);
      ::operator_delete((void *)this_03,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_308);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_1e8);
  if (local_898.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_898.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_898.CorePtr.Reference + 0xc);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_898.CorePtr.Reference);
      ::operator_delete((void *)local_898.CorePtr.Reference,0x20);
    }
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_188);
  FCbWriter::~FCbWriter(&local_890);
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar20;
}

// ReadChunkRequest @ 148cd6220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<FIoBuffer> * __thiscall
FStorageServerConnection::ReadChunkRequest
          (FStorageServerConnection *this,TIoStatusOr<FIoBuffer> *__return_storage_ptr__,
          FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,TOptional<FIoBuffer> *param_4,
          bool param_5)

{
  int *piVar1;
  undefined8 uVar2;
  ICacheStrategy *pIVar3;
  IStorageServerHttpClient *pIVar4;
  code *pcVar5;
  BufCore *this_00;
  double dVar6;
  double dVar7;
  bool bVar8;
  EIoErrorCode EVar9;
  TTypeCompatibleBytes<FIoBuffer> TVar10;
  bool bVar11;
  char cVar12;
  ushort uVar13;
  int iVar14;
  size_t sVar15;
  TIoStatusOr<FIoBuffer> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_3e8 [32];
  undefined1 local_398;
  LARGE_INTEGER local_388;
  ulong64 local_380;
  FIoChunkId *local_378;
  FIoBuffer local_370;
  TArray<FStorageServerConnection::FChunkBatchRequestEntry,TSizedDefaultAllocator<32>_> local_368;
  TOptional<FIoBuffer> *local_358;
  undefined8 local_350;
  FIoStatus local_348;
  FIoStatus local_338;
  LARGE_INTEGER local_328 [2];
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  code *local_2f8;
  FIoChunkId **local_2f0;
  TOptional<FIoBuffer> local_2e8;
  undefined1 local_2d8 [32];
  FIoChunkId *local_2b8;
  TIoStatusOr<FIoBuffer> *local_2b0;
  undefined8 *local_2a8;
  undefined1 local_298;
  undefined1 local_288;
  undefined1 local_278;
  char *local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  TIoStatusOr<FIoBuffer> local_248;
  undefined1 local_230;
  TIoStatusOr<FIoBuffer> local_228;
  undefined1 local_210;
  TIoStatusOr<FIoBuffer> local_208;
  undefined1 local_1f0;
  TIoStatusOr<FIoBuffer> local_1e8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  TStringBuilderBase<char> local_198;
  char local_178 [256];
  ulonglong local_78 [7];
  
  local_78[0] = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_380 = param_3;
  local_358 = param_4;
  bVar19 = -1 < CpuChannel->Enabled;
  local_378 = param_1;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId375,"FStorageServerConnection::ReadChunkRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x177);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId375);
  }
  bVar11 = FinalizeSetupCacheStrategy(this);
  QueryPerformanceCounter(&local_388);
  local_248.StatusValue.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  dVar7 = (double)local_388.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_248.StatusValue.ErrorCode = FIoStatus::Unknown.ErrorCode;
  local_248.StatusValue.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
  local_230 = 0;
  local_350 = 0;
  FIoBuffer::FIoBuffer(&local_370);
  bVar8 = false;
  if ((bVar11) && (pIVar3 = (this->CacheStrategy).Ptr, pIVar3 != (ICacheStrategy *)0x0)) {
    local_298 = 0;
    cVar12 = (**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,local_378,param_2,local_380);
    if (cVar12 != '\0') {
      bVar8 = true;
      __GTraceCounterZenCacheHit.Value = __GTraceCounterZenCacheHit.Value + 1;
      uVar18 = (ulonglong)
               CONCAT14(*(uchar *)((longlong)local_370.CorePtr.Reference + 0x18),
                        *(uint *)((longlong)local_370.CorePtr.Reference + 8));
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterZenCacheHit.CounterId == (atomic<unsigned_int>)0x0) {
          uVar13 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterZenCacheHit.CounterName,TraceCounterType_Int,
                              __GTraceCounterZenCacheHit.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenCacheHit.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenCacheHit.CounterId._2_2_ = 0;
            __GTraceCounterZenCacheHit.CounterId._0_2_ = uVar13;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenCacheHit.CounterId._0_2_,__GTraceCounterZenCacheHit.Value);
      }
      if ((uVar18 != 0) &&
         (__GTraceCounterZenCacheHitBytes.Value = __GTraceCounterZenCacheHitBytes.Value + uVar18,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterZenCacheHitBytes.CounterId == (atomic<unsigned_int>)0x0) {
          uVar13 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterZenCacheHitBytes.CounterName,TraceCounterType_Int,
                              __GTraceCounterZenCacheHitBytes.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenCacheHitBytes.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenCacheHitBytes.CounterId._2_2_ = 0;
            __GTraceCounterZenCacheHitBytes.CounterId._0_2_ = uVar13;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenCacheHitBytes.CounterId._0_2_,
                   __GTraceCounterZenCacheHitBytes.Value);
      }
      SetZenCacheRatio();
      FIoStatus::FIoStatus(&local_228.StatusValue);
      FIoStatus::operator=(&local_228.StatusValue,&FIoStatus::Ok);
      EVar9 = local_248.StatusValue.ErrorCode;
      local_228.Value.Pad = (uchar  [8])local_370.CorePtr.Reference;
      if (local_370.CorePtr.Reference != (BufCore *)0x0) {
        LOCK();
        *(int *)((longlong)local_370.CorePtr.Reference + 0xc) =
             *(int *)((longlong)local_370.CorePtr.Reference + 0xc) + 1;
        UNLOCK();
      }
      local_210 = local_398;
      FIoStatus::operator=(&local_248.StatusValue,Unknown);
      TVar10.Pad = local_248.Value.Pad;
      if ((EVar9 == Ok) && (local_248.Value.Pad != (uchar  [8])0x0)) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_248.Value.Pad);
        LOCK();
        piVar1 = (int *)((longlong)TVar10.Pad + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)TVar10.Pad);
          ::operator_delete((void *)TVar10.Pad,0x20);
        }
      }
      if (local_228.StatusValue.ErrorCode == Ok) {
        local_248.Value.Pad[0] = local_228.Value.Pad[0];
        local_248.Value.Pad[1] = local_228.Value.Pad[1];
        local_248.Value.Pad[2] = local_228.Value.Pad[2];
        local_248.Value.Pad[3] = local_228.Value.Pad[3];
        local_248.Value.Pad[4] = local_228.Value.Pad[4];
        local_248.Value.Pad[5] = local_228.Value.Pad[5];
        local_248.Value.Pad[6] = local_228.Value.Pad[6];
        local_248.Value.Pad[7] = local_228.Value.Pad[7];
        local_228.Value.Pad[0] = '\0';
        local_228.Value.Pad[1] = '\0';
        local_228.Value.Pad[2] = '\0';
        local_228.Value.Pad[3] = '\0';
        local_228.Value.Pad[4] = '\0';
        local_228.Value.Pad[5] = '\0';
        local_228.Value.Pad[6] = '\0';
        local_228.Value.Pad[7] = '\0';
        FIoStatus::operator=(&local_228.StatusValue,Unknown);
        FIoStatus::operator=(&local_248.StatusValue,Ok);
      }
      else {
        FIoStatus::operator=(&local_248.StatusValue,&local_228.StatusValue);
      }
      local_230 = local_210;
      TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_228);
      goto LAB_148cd6788;
    }
  }
  if (this->bIsUsingZenWorkspace == false) {
    local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.ArrayNum = 0;
    local_368.ArrayMax = 0;
    uVar2 = *(undefined8 *)local_378->Id;
    local_1c0 = *(undefined4 *)(local_378->Id + 8);
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_368.AllocatorInstance,&local_368.ArrayMax);
    lVar17 = (longlong)iVar14;
    local_368.ArrayNum = iVar14 + 1;
    *(undefined8 *)(local_368.AllocatorInstance.Data + lVar17 * 0x30) = uVar2;
    *(undefined4 *)(local_368.AllocatorInstance.Data + lVar17 * 0x30 + 8) = local_1c0;
    *(ulong64 *)(local_368.AllocatorInstance.Data + lVar17 * 0x30 + 0x18) = local_380;
    local_2b8 = local_378;
    local_2b0 = &local_248;
    local_2a8 = &local_350;
    local_2f0 = &local_2b8;
    *(ulong64 *)(local_368.AllocatorInstance.Data + lVar17 * 0x30 + 0x10) = param_2;
    local_368.AllocatorInstance.Data[lVar17 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
    local_2f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStorageServerConnection::ReadChunkRequest'::__l12::<lambda_1>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
                ::Call;
    local_1c8 = uVar2;
    ReadChunkBatchRequest
              (this,&local_338,&local_368,
               (TFunctionRef<void___cdecl(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&)>
                *)&local_2f8,false);
    if (local_338.ErrorCode != Ok) {
      local_348.ErrorMessage.Chars = local_338.ErrorMessage.Chars;
      if (local_338.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_338.ErrorMessage.Chars + -4) =
             *(int *)(local_338.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_348.ErrorCode = local_338.ErrorCode;
      local_348.SystemErrorCode = local_338.SystemErrorCode;
      FIoStatus::FIoStatus(&local_208.StatusValue);
      if ((local_348.ErrorCode == Ok) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InStatus.IsOk()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                              ,0x102,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
        return pTVar16;
      }
      FIoStatus::operator=(&local_208.StatusValue,&local_348);
      FIoStatus::~FIoStatus(&local_348);
      EVar9 = local_248.StatusValue.ErrorCode;
      local_1f0 = 0;
      FIoStatus::operator=(&local_248.StatusValue,Unknown);
      TVar10.Pad = local_248.Value.Pad;
      if ((EVar9 == Ok) && (local_248.Value.Pad != (uchar  [8])0x0)) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_248.Value.Pad);
        LOCK();
        piVar1 = (int *)((longlong)TVar10.Pad + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)TVar10.Pad);
          ::operator_delete((void *)TVar10.Pad,0x20);
        }
      }
      if (local_208.StatusValue.ErrorCode == Ok) {
        local_248.Value.Pad[0] = local_208.Value.Pad[0];
        local_248.Value.Pad[1] = local_208.Value.Pad[1];
        local_248.Value.Pad[2] = local_208.Value.Pad[2];
        local_248.Value.Pad[3] = local_208.Value.Pad[3];
        local_248.Value.Pad[4] = local_208.Value.Pad[4];
        local_248.Value.Pad[5] = local_208.Value.Pad[5];
        local_248.Value.Pad[6] = local_208.Value.Pad[6];
        local_248.Value.Pad[7] = local_208.Value.Pad[7];
        local_208.Value.Pad[0] = '\0';
        local_208.Value.Pad[1] = '\0';
        local_208.Value.Pad[2] = '\0';
        local_208.Value.Pad[3] = '\0';
        local_208.Value.Pad[4] = '\0';
        local_208.Value.Pad[5] = '\0';
        local_208.Value.Pad[6] = '\0';
        local_208.Value.Pad[7] = '\0';
        FIoStatus::operator=(&local_208.StatusValue,Unknown);
        FIoStatus::operator=(&local_248.StatusValue,Ok);
      }
      else {
        FIoStatus::operator=(&local_248.StatusValue,&local_208.StatusValue);
      }
      local_230 = local_1f0;
      TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_208);
    }
    FIoStatus::~FIoStatus(&local_338);
    if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.AllocatorInstance.Data);
    }
  }
  else {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId399,"FStorageServerConnection::ReadChunkRequest::Http",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,399);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId399);
    }
    local_198.Base = local_178;
    local_198.CurPos = local_178;
    local_198.bIsDynamic = false;
    local_198.bIsExternal = false;
    local_198.End = (char *)local_78;
    BuildReadChunkRequestUrl(this,&local_198,local_378,param_2,local_380);
    pIVar4 = (this->HttpClient).Ptr;
    uStack_310 = 3;
    local_288 = 0;
    local_278 = 0;
    pcVar5 = *(code **)((longlong)*pIVar4 + 8);
    local_318 = "GET";
    if (local_198.End < local_198.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_198,1);
    }
    *local_198.CurPos = '\0';
    uStack_300 = 0;
    local_308 = local_198.Base;
    if (local_198.Base != (char *)0x0) {
      sVar15 = strlen(local_198.Base);
      uStack_300 = (undefined4)sVar15;
    }
    uStack_260 = CONCAT44(uStack_30c,uStack_310);
    local_268 = local_318;
    local_258 = (undefined4)local_308;
    uStack_254 = local_308._4_4_;
    uStack_24c = uStack_2fc;
    uStack_250 = uStack_300;
    pTVar16 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)(pIVar4,&local_1e8,&local_258,0);
    if (pTVar16 != &local_248) {
      TIoStatusOr<FIoBuffer>::Reset(&local_248);
      if ((pTVar16->StatusValue).ErrorCode == Ok) {
        local_248.Value.Pad = *&(pTVar16->Value).Pad;
        *(undefined8 *)(pTVar16->Value).Pad = 0;
        FIoStatus::operator=((FIoStatus *)pTVar16,Unknown);
        FIoStatus::operator=(&local_248.StatusValue,Ok);
      }
      else {
        FIoStatus::operator=(&local_248.StatusValue,(FIoStatus *)pTVar16);
      }
    }
    local_230 = (&pTVar16->Value)[1].Pad[0];
    TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_1e8);
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_198);
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar8 = false;
    param_4 = local_358;
  }
LAB_148cd6788:
  local_2e8.bIsSet = param_4->bIsSet;
  if ((local_2e8.bIsSet != false) &&
     (local_2e8.TypedValue.CorePtr.Reference =
           (TRefCountPtr<FIoBuffer::BufCore>)(param_4->TypedValue).CorePtr.Reference,
     local_2e8.TypedValue.CorePtr.Reference != (BufCore *)0x0)) {
    LOCK();
    ((BufCore *)local_2e8.TypedValue.CorePtr.Reference)->NumRefs =
         ((BufCore *)local_2e8.TypedValue.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  FIoStatus::FIoStatus((FIoStatus *)local_2d8);
  FIoStatus::operator=((FIoStatus *)local_2d8,&local_248.StatusValue);
  if ((local_2d8._8_4_ == Ok) &&
     (local_2d8[0x10] = local_248.Value.Pad[0], local_2d8[0x11] = local_248.Value.Pad[1],
     local_2d8[0x12] = local_248.Value.Pad[2], local_2d8[0x13] = local_248.Value.Pad[3],
     local_2d8[0x14] = local_248.Value.Pad[4], local_2d8[0x15] = local_248.Value.Pad[5],
     local_2d8[0x16] = local_248.Value.Pad[6], local_2d8[0x17] = local_248.Value.Pad[7],
     local_248.Value.Pad != (uchar  [8])0x0)) {
    LOCK();
    *(int *)((longlong)local_248.Value.Pad + 0xc) =
         *(int *)((longlong)local_248.Value.Pad + 0xc) + 1;
    UNLOCK();
  }
  local_2d8[0x18] = local_230;
  ReadChunkRequestProcessHttpResult
            (__return_storage_ptr__,
             (TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *)local_2d8,param_2,local_380
             ,&local_2e8,param_5);
  if ((__return_storage_ptr__->StatusValue).ErrorCode == Ok) {
    if ((!bVar8) && ((this->CacheStrategy).Ptr != (ICacheStrategy *)0x0)) {
      if (local_248.StatusValue.ErrorCode != Ok) {
        StatusOrCrash(&local_248.StatusValue);
      }
      __GTraceCounterZenCacheMiss.Value = __GTraceCounterZenCacheMiss.Value + 1;
      uVar18 = (ulonglong)
               CONCAT14(*(uchar *)((longlong)local_248.Value.Pad + 0x18),
                        *(uint *)((longlong)local_248.Value.Pad + 8));
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterZenCacheMiss.CounterId == (atomic<unsigned_int>)0x0) {
          uVar13 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterZenCacheMiss.CounterName,TraceCounterType_Int,
                              __GTraceCounterZenCacheMiss.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenCacheMiss.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenCacheMiss.CounterId._2_2_ = 0;
            __GTraceCounterZenCacheMiss.CounterId._0_2_ = uVar13;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenCacheMiss.CounterId._0_2_,__GTraceCounterZenCacheMiss.Value);
      }
      if ((uVar18 != 0) &&
         (__GTraceCounterZenCacheMissBytes.Value = __GTraceCounterZenCacheMissBytes.Value + uVar18,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterZenCacheMissBytes.CounterId == (atomic<unsigned_int>)0x0) {
          uVar13 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterZenCacheMissBytes.CounterName,TraceCounterType_Int,
                              __GTraceCounterZenCacheMissBytes.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterZenCacheMissBytes.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterZenCacheMissBytes.CounterId._2_2_ = 0;
            __GTraceCounterZenCacheMissBytes.CounterId._0_2_ = uVar13;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterZenCacheMissBytes.CounterId._0_2_,
                   __GTraceCounterZenCacheMissBytes.Value);
      }
      SetZenCacheRatio();
      pIVar3 = (this->CacheStrategy).Ptr;
      pcVar5 = *(code **)(pIVar3->_padding_ + 0x28);
      if (local_248.StatusValue.ErrorCode != Ok) {
        StatusOrCrash(&local_248.StatusValue);
      }
      (*pcVar5)(pIVar3,local_378,param_2,local_380);
      param_4 = local_358;
    }
    QueryPerformanceCounter(local_328);
    dVar6 = (double)local_328[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if ((__return_storage_ptr__->StatusValue).ErrorCode != Ok) {
      StatusOrCrash(&__return_storage_ptr__->StatusValue);
    }
    lVar17 = *(longlong *)(__return_storage_ptr__->Value).Pad;
    AddTimingInstance(this,dVar6 - dVar7,
                      (ulonglong)
                      CONCAT14(*(undefined1 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 8)));
  }
  if (local_370.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_370.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_370.CorePtr.Reference + 0xc);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_370.CorePtr.Reference);
      ::operator_delete((void *)local_370.CorePtr.Reference,0x20);
    }
  }
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(&local_248);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((param_4->bIsSet != false) &&
     (this_00 = (param_4->TypedValue).CorePtr.Reference, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  return __return_storage_ptr__;
}

// ReadChunkRequestAsync @ 148cd6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStorageServerConnection::ReadChunkRequestAsync
          (FStorageServerConnection *this,FIoChunkId *param_1,ulong64 param_2,ulong64 param_3,
          TOptional<FIoBuffer> *param_4,bool param_5,
          TFunctionRef<void___cdecl(TIoStatusOr<FIoBuffer>)> *param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  size_t sVar5;
  longlong *plVar6;
  BufCore *pBVar7;
  bool bVar8;
  undefined1 auStackY_288 [32];
  LARGE_INTEGER local_238 [2];
  char *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  char *local_218;
  undefined4 uStack_210;
  longlong local_208;
  IStorageServerHttpClient *local_200;
  code *local_1f8;
  undefined1 local_1e8;
  undefined1 local_1d8;
  code *local_1c8 [2];
  longlong local_1b8;
  BufCore *local_1b0;
  longlong *local_1a0;
  TStringBuilderBase<char> local_178;
  char local_158 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId672,"FStorageServerConnection::ReadChunkRequestAsync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x2a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId672);
  }
  QueryPerformanceCounter(local_238);
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (char *)local_58;
  dVar4 = (double)local_238[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  BuildReadChunkRequestUrl(this,&local_178,param_1,param_2,param_3);
  local_200 = (this->HttpClient).Ptr;
  _uStack_220 = CONCAT44(uStack_21c,3);
  local_1e8 = 0;
  local_1d8 = 0;
  local_1f8 = *(code **)((longlong)*local_200 + 0x10);
  local_228 = "GET";
  if (local_178.End < local_178.CurPos + 1) {
    TStringBuilderBase<char>::Extend(&local_178,1);
  }
  *local_178.CurPos = '\0';
  uStack_210 = 0;
  local_218 = local_178.Base;
  if (local_178.Base != (char *)0x0) {
    sVar5 = strlen(local_178.Base);
    uStack_210 = (undefined4)sVar5;
  }
  bVar3 = param_4->bIsSet;
  pBVar7 = local_1b0;
  if ((bVar3 != false) &&
     (pBVar7 = (param_4->TypedValue).CorePtr.Reference, pBVar7 != (BufCore *)0x0)) {
    LOCK();
    pBVar7->NumRefs = pBVar7->NumRefs + 1;
    UNLOCK();
  }
  local_1c8[0] = (code *)0x0;
  local_238[0]._0_4_ = *(DWORD *)&param_6->field_0x0;
  local_238[0]._4_4_ = *(LONG *)&param_6->field_0x4;
  local_208 = *(longlong *)&param_6->field_0x8;
  local_1a0 = FMemory::Malloc(0x50,8);
  local_1a0[1] = (longlong)this;
  local_1a0[2] = param_2;
  local_1a0[3] = param_3;
  *(bool *)(local_1a0 + 5) = bVar3;
  *local_1a0 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStorageServerConnection::ReadChunkRequestAsync'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  if ((bVar3 != false) && (local_1a0[4] = (longlong)pBVar7, pBVar7 != (BufCore *)0x0)) {
    LOCK();
    pBVar7->NumRefs = pBVar7->NumRefs + 1;
    UNLOCK();
  }
  *(bool *)(local_1a0 + 6) = param_5;
  ((LARGE_INTEGER *)(local_1a0 + 7))->s = (_struct_19)local_238[0];
  local_1a0[8] = local_208;
  local_1a0[9] = (longlong)dVar4;
  if (local_1a0 != (longlong *)&DAT_fffffffffffffff8) {
    local_1c8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FStorageServerConnection::ReadChunkRequestAsync'::__l2::<lambda_1>,void,TTuple<TIoStatusOr<FIoBuffer>,enum_EStorageServerContentType>_>
                   ::Call;
  }
  (*local_1f8)(local_200,local_1c8,&local_218,0);
  if (local_1c8[0] != (code *)0x0) {
    plVar6 = &local_1b8;
    if (local_1a0 != (longlong *)0x0) {
      plVar6 = local_1a0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((bVar3 != false) && (pBVar7 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar7);
    LOCK();
    piVar1 = &pBVar7->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar7);
      ::operator_delete(pBVar7,0x20);
    }
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_178);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((param_4->bIsSet != false) &&
     (pBVar7 = (param_4->TypedValue).CorePtr.Reference, pBVar7 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar7);
    LOCK();
    piVar1 = &pBVar7->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar7);
      ::operator_delete(pBVar7,0x20);
    }
  }
  return;
}

// ReadChunkRequestProcessHttpResult @ 148cd6ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cd71a6) */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<FIoBuffer> * __cdecl
FStorageServerConnection::ReadChunkRequestProcessHttpResult
          (TIoStatusOr<FIoBuffer> *__return_storage_ptr__,
          TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *param_1,ulong64 param_2,
          ulong64 param_3,TOptional<FIoBuffer> *param_4,bool param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uchar uVar4;
  code *pcVar5;
  TRefCountPtr<FIoBuffer::BufCore> TVar6;
  bool bVar7;
  ushort uVar8;
  TIoStatusOr<FIoBuffer> *pTVar9;
  FSharedBuffer FVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  FIoBuffer *pFVar13;
  FIoStatus *pFVar14;
  uint uVar15;
  FIoBuffer FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  BufCore *this;
  BufCore *pBVar19;
  bool bVar20;
  undefined1 auStackY_248 [32];
  FIoBuffer local_218;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_210;
  ulong64 local_208;
  ECompressionLevel local_200;
  ECompressor local_1ff [7];
  ulonglong local_1f8;
  TIoStatusOr<FIoBuffer> *local_1f0;
  TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *local_1e8;
  ulong64 local_1e0;
  FIoBuffer local_1d8;
  FIoStatus local_1d0;
  TMemoryView<void> local_1b8;
  FCompressedBufferReader local_1a8;
  BufCore *local_168;
  FString local_160;
  FArchiveState local_148;
  undefined8 local_b8;
  ulong64 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  FIoStatus local_98;
  FIoStatus local_88;
  TRefCountPtr<FIoBuffer::BufCore> local_78;
  FCompressedBuffer local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar18 = 0;
  local_210.Owner._0_4_ = 0;
  local_1f8 = param_2;
  local_1f0 = __return_storage_ptr__;
  local_1e8 = param_1;
  local_1e0 = param_3;
  FIoStatus::FIoStatus(&local_88);
  FIoStatus::operator=(&local_88,(FIoStatus *)param_1);
  if ((local_88.ErrorCode == Ok) &&
     (local_78.Reference = *(BufCore **)&param_1->field_0x10, local_78.Reference != (BufCore *)0x0))
  {
    LOCK();
    (local_78.Reference)->NumRefs = (local_78.Reference)->NumRefs + 1;
    UNLOCK();
  }
  cVar3 = param_1->field_0x18;
  if (local_88.ErrorCode != Ok) {
    if (2 < (byte)LogStorageServerConnection._0_1_) {
      FIoStatus::ToString(&local_88,&local_160);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogStorageServerConnection);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    local_1d0.ErrorMessage.Chars = local_88.ErrorMessage.Chars;
    if (local_88.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_88.ErrorMessage.Chars + -4) = *(int *)(local_88.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_1d0.ErrorCode = local_88.ErrorCode;
    local_1d0.SystemErrorCode = local_88.SystemErrorCode;
    TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(__return_storage_ptr__,&local_1d0);
    FIoStatus::operator=(&local_88,Unknown);
    TVar6.Reference = local_78.Reference;
    if ((local_88.ErrorCode == Ok) && (local_78.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(local_78.Reference);
      LOCK();
      piVar1 = &(TVar6.Reference)->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(TVar6.Reference);
        ::operator_delete(TVar6.Reference,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_88);
    TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>((TIoStatusOr<FIoBuffer> *)param_1);
    cVar3 = param_4->bIsSet;
    goto LAB_148cd79f7;
  }
  if (local_78.Reference != (BufCore *)0x0) {
    LOCK();
    (local_78.Reference)->NumRefs = (local_78.Reference)->NumRefs + 1;
    UNLOCK();
  }
  uVar17 = (ulonglong)CONCAT14((local_78.Reference)->DataSizeHigh,(local_78.Reference)->DataSizeLow)
  ;
  local_218.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)local_78.Reference;
  if ((uVar17 != 0) &&
     (__GTraceCounterZenHttpClientSerializedBytes.Value =
           __GTraceCounterZenHttpClientSerializedBytes.Value + uVar17, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterZenHttpClientSerializedBytes.CounterId == (atomic<unsigned_int>)0x0) {
      uVar8 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterZenHttpClientSerializedBytes.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterZenHttpClientSerializedBytes.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterZenHttpClientSerializedBytes.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterZenHttpClientSerializedBytes.CounterId._2_2_ = 0;
        __GTraceCounterZenHttpClientSerializedBytes.CounterId._0_2_ = uVar8;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterZenHttpClientSerializedBytes.CounterId._0_2_,
               __GTraceCounterZenHttpClientSerializedBytes.Value);
  }
  if (cVar3 == '\x02') {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1196,"FStorageServerConnection::ReadChunkRequest::Binary",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0x4ac);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1196);
    }
    if (param_4->bIsSet == false) {
      FIoBuffer::MakeOwned(&local_218);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad =
           local_218.CorePtr.Reference;
      local_218.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar16.CorePtr.Reference = local_218.CorePtr.Reference;
      if (local_218.CorePtr.Reference == (BufCore *)0x0) goto LAB_148cd7431;
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_218.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)FVar16.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) goto LAB_148cd7431;
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar16.CorePtr.Reference);
    }
    else {
      pBVar19 = (param_4->TypedValue).CorePtr.Reference;
      if (((ulonglong)CONCAT14(pBVar19->DataSizeHigh,pBVar19->DataSizeLow) <
           (ulonglong)
           CONCAT14(*(uchar *)((longlong)local_218.CorePtr.Reference + 0x18),
                    *(uint *)((longlong)local_218.CorePtr.Reference + 8))) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8449410219921898320>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                             ,0x4b0,"OptDestination->GetSize() >= Buffer.GetSize()"), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
        return pTVar9;
      }
      if ((param_4->bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
        return pTVar9;
      }
      pBVar19 = (param_4->TypedValue).CorePtr.Reference;
      if (pBVar19 != (BufCore *)0x0) {
        LOCK();
        pBVar19->NumRefs = pBVar19->NumRefs + 1;
        UNLOCK();
      }
      memcpy(pBVar19->DataPtr,*(void **)local_218.CorePtr.Reference,
             (ulonglong)
             CONCAT14(*(uchar *)((longlong)local_218.CorePtr.Reference + 0x18),
                      *(uint *)((longlong)local_218.CorePtr.Reference + 8)));
      FIoBuffer::BufCore::SetSize
                (pBVar19,(ulonglong)
                         CONCAT14(*(uchar *)((longlong)local_218.CorePtr.Reference + 0x18),
                                  *(uint *)((longlong)local_218.CorePtr.Reference + 8)));
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(BufCore **)(__return_storage_ptr__->Value).Pad = pBVar19;
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar16.CorePtr.Reference = local_218.CorePtr.Reference;
      if (local_218.CorePtr.Reference == (BufCore *)0x0) goto LAB_148cd7431;
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_218.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)FVar16.CorePtr.Reference + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) goto LAB_148cd7431;
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar16.CorePtr.Reference);
    }
    ::operator_delete((void *)FVar16.CorePtr.Reference,0x20);
LAB_148cd7431:
    FIoStatus::operator=(&local_88,Unknown);
    TVar6.Reference = local_78.Reference;
    if ((local_88.ErrorCode == Ok) && (local_78.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(local_78.Reference);
      LOCK();
      piVar1 = &(TVar6.Reference)->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(TVar6.Reference);
        ::operator_delete(TVar6.Reference,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_88);
    TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>((TIoStatusOr<FIoBuffer> *)param_1);
    TOptional<FIoBuffer>::~TOptional<FIoBuffer>(param_4);
    return __return_storage_ptr__;
  }
  if (cVar3 == '\x03') {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1215,
                 "FStorageServerConnection::ReadChunkRequest::CompressedBinary",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0x4bf);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1215);
    }
    uVar15 = *(uint *)((longlong)local_218.CorePtr.Reference + 8);
    uVar4 = *(uchar *)((longlong)local_218.CorePtr.Reference + 0x18);
    uVar11 = *(ulong64 *)local_218.CorePtr.Reference;
    local_148._padding_ = 0;
    local_148.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_148.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_148.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_148.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_148._40_8_ = 0;
    local_148.ArSerializingDefaults = 0;
    local_148.ArPortFlags = 0;
    local_148.ArMaxSerializeSize = 0;
    local_148.ArUEVer.FileVersionUE4 = 0;
    local_148.ArUEVer.FileVersionUE5 = 0;
    local_148.ArLicenseeUEVer = 0;
    local_148.ArEngineVer.Major = 0;
    local_148.ArEngineVer.Minor = 0;
    local_148.ArEngineVer.Patch = 0;
    local_148.ArEngineVer._6_2_ = 0;
    local_148.ArEngineVer.Changelist = 0;
    local_148.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_148.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_148.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_148.SerializedProperty = (FProperty *)0x0;
    local_148.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_148.bCustomVersionsAreReset = false;
    local_148._129_7_ = 0;
    local_148.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_148);
    local_b8 = 0;
    local_148._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_a0 = 0x7fffffffffffffff;
    local_b0 = uVar11;
    local_a8 = (ulonglong)CONCAT14(uVar4,uVar15);
    FArchiveState::SetIsLoading(&local_148,true);
    (**(code **)(local_148._padding_ + 0x108))(&local_148,0);
    FVar10 = FSharedBuffer::MakeView(&local_210,*(ulong64 *)local_218.CorePtr.Reference);
    FCompressedBuffer::FromCompressed(&local_70,(FSharedBuffer *)FVar10.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_210);
    FCompressedBufferReader::FCompressedBufferReader(&local_1a8,&local_70);
    uVar11 = FCompressedBufferReader::GetRawSize(&local_1a8);
    uVar17 = local_1f8;
    if (uVar11 != 0) {
      if (local_1f8 != 0) {
        local_208 = 0;
        bVar7 = FCompressedBuffer::TryGetCompressParameters
                          (&local_70,local_1ff,&local_200,&local_208);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bOk",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                               ,0x4e2,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
          return pTVar9;
        }
        if (local_208 != 0) {
          uVar18 = uVar17 % local_208;
        }
      }
      uVar12 = uVar11;
      if ((local_1e0 != 0) && (local_1e0 < uVar11)) {
        uVar12 = local_1e0;
      }
      uVar17 = uVar11 - uVar18;
      if (uVar12 < uVar11 - uVar18) {
        uVar17 = uVar12;
      }
      local_1f8 = uVar17;
      if (param_4->bIsSet == false) {
LAB_148cd76df:
        pFVar13 = FIoBuffer::FIoBuffer(&local_1d8,uVar17);
        uVar15 = 2;
        pBVar19 = (pFVar13->CorePtr).Reference;
        this = local_168;
      }
      else {
        pBVar19 = (param_4->TypedValue).CorePtr.Reference;
        if ((CONCAT14(pBVar19->DataSizeHigh,pBVar19->DataSizeLow) < uVar17) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8449410219921898293>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                               ,0x4cb,
                               "!OptDestination.IsSet() || OptDestination->GetSize() >= BytesToRead"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TIoStatusOr<FIoBuffer> *)(*pcVar5)();
          return pTVar9;
        }
        if (param_4->bIsSet == false) goto LAB_148cd76df;
        pBVar19 = (param_4->TypedValue).CorePtr.Reference;
        if (pBVar19 != (BufCore *)0x0) {
          LOCK();
          pBVar19->NumRefs = pBVar19->NumRefs + 1;
          UNLOCK();
        }
        uVar15 = 1;
        this = pBVar19;
      }
      if (pBVar19 != (BufCore *)0x0) {
        LOCK();
        pBVar19->NumRefs = pBVar19->NumRefs + 1;
        UNLOCK();
      }
      if (((uVar15 & 2) != 0) &&
         (local_210.Owner._0_4_ = uVar15 & 0xfffffffd, uVar17 = local_1f8,
         uVar15 = (uint)local_210.Owner, local_1d8.CorePtr.Reference != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1d8.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8.CorePtr.Reference + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar17 = local_1f8;
        uVar15 = (uint)local_210.Owner;
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_1d8.CorePtr.Reference);
          ::operator_delete((void *)local_1d8.CorePtr.Reference,0x20);
          uVar17 = local_1f8;
          uVar15 = (uint)local_210.Owner;
        }
      }
      if (((uVar15 & 1) != 0) && (this != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount(this);
        LOCK();
        piVar1 = &this->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(this);
          ::operator_delete(this,0x20);
        }
      }
      FIoBuffer::BufCore::SetSize(pBVar19,uVar17);
      local_1b8.Data = pBVar19->DataPtr;
      local_1b8.Size = (ulong64)CONCAT14(pBVar19->DataSizeHigh,pBVar19->DataSizeLow);
      bVar7 = FCompressedBufferReader::TryDecompressTo(&local_1a8,&local_1b8,uVar18,(uint)param_5);
      pTVar9 = local_1f0;
      if (bVar7) {
        FIoStatus::FIoStatus(&local_1f0->StatusValue);
        FIoStatus::operator=(&pTVar9->StatusValue,&FIoStatus::Ok);
        *(BufCore **)(pTVar9->Value).Pad = pBVar19;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  (&local_1a8.Context.CompressedBlock.Owner);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.Context.RawBlock.Owner);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.Context.Header.Owner);
        FCompositeBuffer::~FCompositeBuffer(&local_70.CompressedData);
        FArchive::~FArchive((FArchive *)&local_148);
        if (bVar20) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FVar16.CorePtr.Reference = local_218.CorePtr.Reference;
        if (local_218.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_218.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)FVar16.CorePtr.Reference + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar16.CorePtr.Reference);
            ::operator_delete((void *)FVar16.CorePtr.Reference,0x20);
          }
        }
        FIoStatus::operator=(&local_88,Unknown);
        TVar6.Reference = local_78.Reference;
        if ((local_88.ErrorCode == Ok) && (local_78.Reference != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(local_78.Reference);
          LOCK();
          piVar1 = &(TVar6.Reference)->NumRefs;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore(TVar6.Reference);
            ::operator_delete(TVar6.Reference,0x20);
          }
        }
        FIoStatus::~FIoStatus(&local_88);
        TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>((TIoStatusOr<FIoBuffer> *)local_1e8);
        TOptional<FIoBuffer>::~TOptional<FIoBuffer>(param_4);
        return pTVar9;
      }
      FIoBuffer::BufCore::CheckRefCount(pBVar19);
      LOCK();
      piVar1 = &pBVar19->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      __return_storage_ptr__ = local_1f0;
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar19);
        ::operator_delete(pBVar19,0x20);
        __return_storage_ptr__ = local_1f0;
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              (&local_1a8.Context.CompressedBlock.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.Context.RawBlock.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.Context.Header.Owner);
    FCompositeBuffer::~FCompositeBuffer(&local_70.CompressedData);
    FArchive::~FArchive((FArchive *)&local_148);
    param_1 = local_1e8;
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
      param_1 = local_1e8;
    }
  }
  pFVar14 = FIoStatus::FIoStatus(&local_98,Unknown);
  TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(__return_storage_ptr__,pFVar14);
  FVar16.CorePtr.Reference = local_218.CorePtr.Reference;
  if (local_218.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_218.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)FVar16.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar16.CorePtr.Reference);
      ::operator_delete((void *)FVar16.CorePtr.Reference,0x20);
    }
  }
  FIoStatus::operator=(&local_88,Unknown);
  TVar6.Reference = local_78.Reference;
  if ((local_88.ErrorCode == Ok) && (local_78.Reference != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(local_78.Reference);
    LOCK();
    piVar1 = &(TVar6.Reference)->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(TVar6.Reference);
      ::operator_delete(TVar6.Reference,0x20);
    }
  }
  FIoStatus::~FIoStatus(&local_88);
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>((TIoStatusOr<FIoBuffer> *)param_1);
  cVar3 = param_4->bIsSet;
LAB_148cd79f7:
  if ((cVar3 != '\0') &&
     (pBVar19 = (param_4->TypedValue).CorePtr.Reference, pBVar19 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(pBVar19);
    LOCK();
    piVar1 = &pBVar19->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar19);
      ::operator_delete(pBVar19,0x20);
    }
  }
  return __return_storage_ptr__;
}

// SetupCacheStrategy @ 148cde580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStorageServerConnection::SetupCacheStrategy(FStorageServerConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ICacheStrategy *pIVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FCacheJournalSectioned *this_00;
  size_t sVar9;
  TUniquePtr<StorageServer::ICacheJournal,TDefaultDelete<StorageServer::ICacheJournal>_> TVar10;
  FCacheJournalSimple *this_01;
  FCacheStorageMmap *this_02;
  TUniquePtr<StorageServer::ICacheStorage,TDefaultDelete<StorageServer::ICacheStorage>_> TVar11;
  FCacheStorageBlocking *this_03;
  FCacheStrategyLinear *this_04;
  TReferenceControllerBase<1> *pTVar12;
  FEvent *pFVar13;
  FRunnableThread *pFVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  ulong64 uVar18;
  longlong lVar19;
  int iVar20;
  FAsyncQueryLatestServerChunkInfo *pFVar21;
  TUniquePtr<StorageServer::ICacheJournal,TDefaultDelete<StorageServer::ICacheJournal>_> local_res10
  ;
  TUniquePtr<StorageServer::ICacheStorage,TDefaultDelete<StorageServer::ICacheStorage>_> local_res18
  ;
  atomic<unsigned___int64> local_res20;
  int local_f4;
  float fStack_f0;
  int local_ec;
  int iStack_e8;
  undefined2 local_e4;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FAsyncQueryLatestServerChunkInfo *local_a0;
  FSharedReferencer<1> FStack_98;
  longlong local_90;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  atomic<unsigned___int64> *local_78;
  longlong *local_70;
  code *local_68;
  atomic<unsigned___int64> **local_60;
  TStringView<wchar_t> local_58 [2];
  
  TVar10.Ptr = (ICacheJournal *)0x0;
  local_f4 = 0;
  fStack_f0 = 0.0;
  local_ec = 0;
  iStack_e8 = 0;
  local_e4 = 0;
  pwVar6 = FCommandLine::Get();
  pwVar7 = wcsstr(pwVar6,L"-ZenDisableCache");
  if (((pwVar7 != (wchar_t *)0x0) || (bVar4 = UE::IsUsingZenPakFileStreaming(), bVar4)) ||
     (pwVar7 = wcsstr(pwVar6,L"-ZenEnableCache"), pwVar7 == (wchar_t *)0x0)) {
    pIVar1 = (this->CacheStrategy).Ptr;
    if (pIVar1 != (ICacheStrategy *)0x0) {
      (this->CacheStrategy).Ptr = (ICacheStrategy *)0x0;
      (**(code **)pIVar1->_padding_)(pIVar1,1);
      return;
    }
  }
  else {
    pwVar7 = wcsstr(pwVar6,L"-ZenInvalidateCache");
    bVar4 = FParse::Value(pwVar6,L"-ZenCacheSizeKB=",&local_f4);
    if (!bVar4) {
      local_f4 = 0x400000;
    }
    bVar4 = FParse::Value(pwVar6,L"-ZenCacheAbandonSizeKB=",&iStack_e8);
    fStack_f0 = 10.0;
    local_ec = 0;
    if (!bVar4) {
      iStack_e8 = 0x80000;
    }
    pwVar8 = wcsstr(pwVar6,L"-ZenUseSimpleJournal");
    local_e4 = CONCAT11(local_e4._1_1_,pwVar8 == (wchar_t *)0x0);
    pwVar6 = wcsstr(pwVar6,L"-ZenNoMmappedStorage");
    fVar3 = fStack_f0;
    local_e4 = CONCAT11(pwVar6 == (wchar_t *)0x0,(char)local_e4);
    lVar17 = (longlong)local_f4;
    uVar18 = (ulong64)local_ec;
    lVar19 = (longlong)iStack_e8;
    iVar20 = 0;
    if ((char)local_e4 == '\0') {
      local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = 0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0xd,0,(ForAnyElementType *)&local_d0,0,&local_d0.Data.ArrayMax);
      ::FString::PathAppend(&local_d0,L"ZenCache.db",0xb);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar16.Data = local_d0.Data.AllocatorInstance.Data;
      }
      this_01 = ::operator_new(0x128);
      FVar15.Data = local_d0.Data.AllocatorInstance.Data;
      if (this_01 != (FCacheJournalSimple *)0x0) {
        TVar10.Ptr = (ICacheJournal *)
                     StorageServer::FCacheJournalSimple::FCacheJournalSimple
                               (this_01,(wchar_t *)FVar16.Data,uVar18);
        FVar15.Data = local_d0.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0x1d,0,(ForAnyElementType *)&local_e0,0,&local_e0.Data.ArrayMax);
      ::FString::PathAppend(&local_e0,L"ZenCacheJournalSectioned.db",0x1b);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_e0.Data.ArrayNum != 0) {
        FVar16.Data = local_e0.Data.AllocatorInstance.Data;
      }
      this_00 = ::operator_new(0x88);
      FVar15.Data = local_e0.Data.AllocatorInstance.Data;
      if (this_00 != (FCacheJournalSectioned *)0x0) {
        local_88 = FVar16.Data;
        if (FVar16.Data != (FScriptContainerElement *)0x0) {
          sVar9 = wcslen((wchar_t *)FVar16.Data);
          iVar20 = (int)sVar9;
        }
        local_58[0]._12_4_ = uStack_7c;
        local_58[0].Size = iVar20;
        local_58[0].DataPtr = (wchar_t *)local_88;
        iStack_80 = iVar20;
        TVar10.Ptr = (ICacheJournal *)
                     StorageServer::FCacheJournalSectioned::FCacheJournalSectioned(this_00,local_58)
        ;
        FVar15.Data = local_e0.Data.AllocatorInstance.Data;
      }
    }
    local_res10.Ptr = TVar10.Ptr;
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    if (local_e4._1_1_ == '\0') {
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = 0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0x12,0,(ForAnyElementType *)&local_b0,0,&local_b0.Data.ArrayMax);
      ::FString::PathAppend(&local_b0,L"ZenCache.storage",0x10);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_b0.Data.ArrayNum != 0) {
        FVar16.Data = local_b0.Data.AllocatorInstance.Data;
      }
      this_03 = ::operator_new(0x21200f8);
      if (this_03 == (FCacheStorageBlocking *)0x0) {
        TVar11.Ptr = (ICacheStorage *)0x0;
        FVar16.Data = local_b0.Data.AllocatorInstance.Data;
      }
      else {
        TVar11.Ptr = (ICacheStorage *)
                     StorageServer::FCacheStorageBlocking::FCacheStorageBlocking
                               (this_03,(wchar_t *)FVar16.Data,lVar17 << 10);
        FVar16.Data = local_b0.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0x12,0,(ForAnyElementType *)&local_c0,0,&local_c0.Data.ArrayMax);
      ::FString::PathAppend(&local_c0,L"ZenCache.storage",0x10);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_c0.Data.ArrayNum != 0) {
        FVar16.Data = local_c0.Data.AllocatorInstance.Data;
      }
      this_02 = ::operator_new(0x28);
      if (this_02 == (FCacheStorageMmap *)0x0) {
        TVar11.Ptr = (ICacheStorage *)0x0;
        FVar16.Data = local_c0.Data.AllocatorInstance.Data;
      }
      else {
        TVar11.Ptr = (ICacheStorage *)
                     StorageServer::FCacheStorageMmap::FCacheStorageMmap
                               (this_02,(wchar_t *)FVar16.Data,lVar17 << 10);
        FVar16.Data = local_c0.Data.AllocatorInstance.Data;
      }
    }
    pFVar21 = (FAsyncQueryLatestServerChunkInfo *)&DAT_00000010;
    local_res18.Ptr = TVar11.Ptr;
    if (FVar16.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar16.Data);
    }
    this_04 = ::operator_new(0x68);
    if (this_04 == (FCacheStrategyLinear *)0x0) {
      this_04 = (FCacheStrategyLinear *)0x0;
    }
    else {
      StorageServer::ICacheStrategy::ICacheStrategy
                ((ICacheStrategy *)this_04,&local_res10,&local_res18,fVar3);
      this_04->_padding_ = (longlong)&___7FCacheStrategyLinear_StorageServer__6B_;
      lpCriticalSection = &this_04->JournalLock;
      this_04->CurrentSize = (atomic<unsigned___int64>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
      local_78 = &local_res20;
      local_res20 = (atomic<unsigned___int64>)0x0;
      local_90 = 0;
      local_70 = &local_90;
      local_60 = &local_78;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`StorageServer::FCacheStrategyLinear::FCacheStrategyLinear'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheEntry_const_&>
                 ::Call;
      (**(code **)(*(longlong *)this_04->_padding_ + 0x50))
                ((longlong *)this_04->_padding_,&local_68);
      LOCK();
      this_04->CurrentSize = local_res20;
      UNLOCK();
      this_04->CurrentInvalidSize = (longlong)local_res20 - local_90;
      this_04->AbandonAtInvalidSize = lVar19 << 10;
      StorageServer::FCacheStrategyLinear::SetCounters(this_04);
      if (((pwVar7 != (wchar_t *)0x0) ||
          (cVar5 = (**(code **)(*(longlong *)this_04->_padding_ + 8))(), cVar5 != '\0')) ||
         (TVar11.Ptr = local_res18.Ptr, TVar10.Ptr = local_res10.Ptr,
         this_04->AbandonAtInvalidSize <= this_04->CurrentInvalidSize)) {
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        (**(code **)(*(longlong *)this_04->_padding_ + 0x10))();
        LOCK();
        this_04->CurrentSize = (atomic<unsigned___int64>)0x0;
        UNLOCK();
        this_04->CurrentInvalidSize = 0;
        StorageServer::FCacheStrategyLinear::SetCounters(this_04);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        TVar11.Ptr = local_res18.Ptr;
        TVar10.Ptr = local_res10.Ptr;
      }
    }
    pIVar1 = (this->CacheStrategy).Ptr;
    (this->CacheStrategy).Ptr = (ICacheStrategy *)this_04;
    if (pIVar1 != (ICacheStrategy *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
    pTVar12 = ::operator_new(0x28);
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      local_a0 = ___xmm_00000000000000000000000000000010;
      FStack_98.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAsyncQueryLatestServerChunkInfo_FStorageServerConnection___00_SharedPointerInternals__6B_
      ;
      pTVar12[1]._padding_ =
           (longlong)&___7FAsyncQueryLatestServerChunkInfo_FStorageServerConnection__6B_;
      *(FStorageServerConnection **)&pTVar12[1].SharedReferenceCount = this;
      pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
      pTVar12[2]._padding_ = (longlong)pFVar13;
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)(pTVar12 + 1),L"StorageServerCacheEntriesInit",0,TPri_Normal
                           ,0xffffffffffffffff,None);
      if (pFVar14 == (FRunnableThread *)0x0) {
        (**(code **)(*(longlong *)pTVar12[2]._padding_ + 0x10))();
      }
      pFVar21 = (FAsyncQueryLatestServerChunkInfo *)(pTVar12 + 1);
      if ((pFVar21 == (FAsyncQueryLatestServerChunkInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      FStack_98.ReferenceController = pTVar12;
      local_a0 = pFVar21;
    }
    if (&this->AsyncQueryLatestServerChunkInfo !=
        (TSharedPtr<FStorageServerConnection::FAsyncQueryLatestServerChunkInfo,1> *)&local_a0) {
      (this->AsyncQueryLatestServerChunkInfo).Object = pFVar21;
      local_a0 = (FAsyncQueryLatestServerChunkInfo *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncQueryLatestServerChunkInfo).SharedReferenceCount,&FStack_98);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_98.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    if ((FCacheStorageBlocking *)TVar11.Ptr != (FCacheStorageBlocking *)0x0) {
      (**(code **)((FCacheStorageBlocking *)TVar11.Ptr)->_padding_)(TVar11.Ptr,1);
    }
    if ((FCacheJournalSimple *)TVar10.Ptr != (FCacheJournalSimple *)0x0) {
      (**(code **)((FCacheJournalSimple *)TVar10.Ptr)->_padding_)(TVar10.Ptr,1);
    }
  }
  return;
}

// SortHostAddressesByLocalSubnet @ 148cdfb50

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FStorageServerConnection::SortHostAddressesByLocalSubnet
          (FStorageServerConnection *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1,int param_2)

{
  FString *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FName FVar5;
  FInternetAddr *pFVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ISocketSubsystem *pIVar12;
  FOutputDeviceRedirector *pFVar13;
  longlong *plVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  FString *pFVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FName local_res18;
  int local_res20;
  undefined1 local_188 [8];
  ForAnyElementType local_180;
  undefined8 local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  FString local_120;
  FScriptContainerElement *local_110;
  int local_108;
  int local_104;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TSharedPtr<FInternetAddr,1> local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  longlong local_90;
  TReferenceControllerBase<1> *local_88;
  FString local_80;
  FString local_70;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pFVar1 = param_1->DataPtr;
  iVar9 = param_1->ArrayNum;
  bVar8 = true;
  local_res18 = (FName)param_1;
  local_res20 = param_2;
  for (pFVar20 = pFVar1; pFVar20 != pFVar1 + iVar9; pFVar20 = pFVar20 + 1) {
    local_100.Data.ArrayNum = (pFVar20->Data).ArrayNum;
    lVar21 = (longlong)local_100.Data.ArrayNum;
    pFVar17 = (pFVar20->Data).AllocatorInstance.Data;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_100.Data.ArrayNum == 0) {
      local_100.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                 local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
      memcpy(local_100.Data.AllocatorInstance.Data,pFVar17,lVar21 * 2);
    }
    bVar7 = ::FString::StartsWith(&local_100,L"platform://",0xb,IgnoreCase);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      bVar8 = false;
      break;
    }
  }
  FVar5 = local_res18;
  if ((iVar9 < 2) || (bVar8)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = iVar9;
    if (iVar9 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,0,&__return_storage_ptr__->AllocatorInstance,iVar9,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<FString,FString,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar1,iVar9);
    }
  }
  else {
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    pIVar12 = ISocketSubsystem::Get(&local_res18);
    local_188[0] = 0;
    pcVar2 = *(code **)(pIVar12->_padding_ + 0xe0);
    pFVar13 = GetGlobalLogSingleton();
    plVar14 = (longlong *)(*pcVar2)(pIVar12,local_58,pFVar13,local_188);
    pTVar3 = (TReferenceControllerBase<1> *)plVar14[1];
    plVar14 = (longlong *)*plVar14;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    if ((plVar14 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar15;
    }
    (**(code **)(*plVar14 + 0x80))(plVar14,&local_110,0);
    pFVar17 = local_110 + (longlong)local_108 * 2;
    do {
      if (pFVar17 == local_110) goto LAB_148cdfda5;
      pFVar17 = pFVar17 + -2;
    } while (*(wchar_t *)pFVar17 != L'.');
    iVar9 = (int)((longlong)pFVar17 - (longlong)local_110 >> 1);
    if (iVar9 != -1) {
      iVar11 = local_108 + -1;
      if (local_108 == 0) {
        iVar11 = 0;
      }
      if (iVar9 < iVar11) {
        iVar11 = iVar9;
      }
      iVar9 = 0;
      if (0 < iVar11) {
        iVar9 = iVar11;
      }
      pFVar17 = (FScriptContainerElement *)L"";
      if (local_108 != 0) {
        pFVar17 = local_110;
      }
      ::FString::ConstructFromPtrSize(&local_c0,(wchar_t *)pFVar17,iVar9);
      if (local_110 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110);
      }
      local_110 = local_c0.Data.AllocatorInstance.Data;
      local_108 = local_c0.Data.ArrayNum;
      local_104 = local_c0.Data.ArrayMax;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
LAB_148cdfda5:
    iVar11 = local_res20;
    pFVar17 = *(FScriptContainerElement **)FVar5;
    pFVar22 = pFVar17 + (longlong)*(int *)((longlong)FVar5 + 8) * 0x10;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    local_124 = 0;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    iVar9 = local_128;
    for (; local_128 = iVar9, pFVar17 != pFVar22; pFVar17 = pFVar17 + 0x10) {
      local_f0.Data.ArrayNum = *(int *)(pFVar17 + 8);
      lVar21 = (longlong)local_f0.Data.ArrayNum;
      pvVar4 = *(void **)pFVar17;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_f0.Data.ArrayNum == 0) {
        local_f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                   local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
        memcpy(local_f0.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
      }
      bVar8 = ::FString::StartsWith(&local_f0,L"platform://",0xb,IgnoreCase);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        if (((local_130.Data <= pFVar17) && (pFVar17 < local_130.Data + (longlong)local_124 * 0x10))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar2 = (code *)swi(3);
          pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar15;
        }
        if (local_128 == local_124) {
          local_128 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_130,&local_124);
        }
        FVar18.Data = local_130.Data;
        iVar9 = local_128;
        local_128 = local_128 + 1;
LAB_148cdff12:
        ::FString::FString((FString *)(FVar18.Data + (longlong)iVar9 * 0x10),(FString *)pFVar17);
      }
      else {
        local_e0.Data.ArrayNum = *(int *)(pFVar17 + 8);
        lVar21 = (longlong)local_e0.Data.ArrayNum;
        pvVar4 = *(void **)pFVar17;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_e0.Data.ArrayNum == 0) {
          local_e0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_e0.Data.ArrayNum,0,(ForAnyElementType *)&local_e0,
                     local_e0.Data.ArrayNum,&local_e0.Data.ArrayMax);
          memcpy(local_e0.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
        }
        bVar8 = ::FString::StartsWith(&local_e0,L"hostname://",0xb,IgnoreCase);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          if (((local_160.Data <= pFVar17) &&
              (pFVar17 < local_160.Data + (longlong)local_158._4_4_ * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar2 = (code *)swi(3);
            pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar15;
          }
          iVar9 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_160,(int *)((longlong)&local_158 + 4));
          }
          local_158 = CONCAT44(local_158._4_4_,iVar9 + 1);
          FVar18.Data = local_160.Data;
          goto LAB_148cdff12;
        }
        local_b0.Data.ArrayNum = *(int *)(pFVar17 + 8);
        lVar21 = (longlong)local_b0.Data.ArrayNum;
        pvVar4 = *(void **)pFVar17;
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_b0.Data.ArrayNum == 0) {
          local_b0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,
                     local_b0.Data.ArrayNum,&local_b0.Data.ArrayMax);
          memcpy(local_b0.Data.AllocatorInstance.Data,pvVar4,lVar21 * 2);
        }
        StringToInternetAddr(this,&local_d0,&local_b0,iVar11);
        pFVar6 = local_d0.Object;
        if (local_d0.Object != (FInternetAddr *)0x0) {
          if ((local_d0.Object == (FInternetAddr *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar15;
          }
          (**(code **)((longlong)*pFVar6 + 0x80))(pFVar6,&local_120,0);
          if ((pFVar6 == (FInternetAddr *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar15;
          }
          plVar14 = (longlong *)(**(code **)((longlong)*pFVar6 + 0xa8))(pFVar6,local_60);
          FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
          iVar9 = 0;
          if (*plVar14 == local_90) {
            ::FString::FString(&local_80,":1");
            iVar16 = local_80.Data.ArrayNum + -1;
            FVar18.Data = local_80.Data.AllocatorInstance.Data;
            if (local_80.Data.ArrayNum == 0) {
              iVar16 = 0;
              FVar18.Data = (FScriptContainerElement *)L"";
            }
            bVar8 = ::FString::EndsWith(&local_120,(wchar_t *)FVar18.Data,iVar16,IgnoreCase);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              if (((local_140.Data <= pFVar17) &&
                  (pFVar17 < local_140.Data + (longlong)local_138._4_4_ * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar2 = (code *)swi(3);
                pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar15;
              }
              iVar9 = (int)local_138;
              if ((int)local_138 == local_138._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_140,(int *)((longlong)&local_138 + 4));
              }
              local_138 = CONCAT44(local_138._4_4_,iVar9 + 1);
              FVar18.Data = local_140.Data + (longlong)iVar9 * 0x10;
            }
            else {
LAB_148ce0334:
              pFVar19 = local_120.Data.AllocatorInstance.Data +
                        (longlong)local_120.Data.ArrayNum * 2;
              do {
                if (pFVar19 == local_120.Data.AllocatorInstance.Data) goto LAB_148ce03bd;
                pFVar19 = pFVar19 + -2;
              } while (*(wchar_t *)pFVar19 != L'.');
              iVar16 = (int)((longlong)pFVar19 - (longlong)local_120.Data.AllocatorInstance.Data >>
                            1);
              if (iVar16 != -1) {
                iVar10 = local_120.Data.ArrayNum + -1;
                if (local_120.Data.ArrayNum == 0) {
                  iVar10 = iVar9;
                }
                if (iVar16 < iVar10) {
                  iVar10 = iVar16;
                }
                if (0 < iVar10) {
                  iVar9 = iVar10;
                }
                FVar18.Data = (FScriptContainerElement *)L"";
                if (local_120.Data.ArrayNum != 0) {
                  FVar18.Data = local_120.Data.AllocatorInstance.Data;
                }
                ::FString::ConstructFromPtrSize(&local_a0,(wchar_t *)FVar18.Data,iVar9);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                local_120.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
                local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_120.Data.ArrayNum = local_a0.Data.ArrayNum;
                local_120.Data.ArrayMax = local_a0.Data.ArrayMax;
                local_a0.Data.ArrayNum = 0;
                local_a0.Data.ArrayMax = 0;
              }
LAB_148ce03bd:
              if (local_108 == local_120.Data.ArrayNum) {
                if (1 < local_108) {
                  iVar9 = wcscmp((wchar_t *)local_110,
                                 (wchar_t *)local_120.Data.AllocatorInstance.Data);
                  bVar8 = iVar9 == 0;
                  goto LAB_148ce03e4;
                }
              }
              else {
                bVar8 = local_108 + local_120.Data.ArrayNum == 1;
LAB_148ce03e4:
                if (!bVar8) {
                  if (((local_170.Data <= pFVar17) &&
                      (pFVar17 < local_170.Data + (longlong)local_168._4_4_ * 0x10)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar2 = (code *)swi(3);
                    pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                    return pTVar15;
                  }
                  iVar9 = (int)local_168;
                  if ((int)local_168 == local_168._4_4_) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_170,(int *)((longlong)&local_168 + 4));
                  }
                  local_168 = CONCAT44(local_168._4_4_,iVar9 + 1);
                  FVar18.Data = local_170.Data + (longlong)iVar9 * 0x10;
                  goto LAB_148ce053d;
                }
              }
              if (((local_170.Data <= pFVar17) &&
                  (pFVar17 < local_170.Data + (longlong)local_168._4_4_ * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar2 = (code *)swi(3);
                pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar15;
              }
              iVar9 = (int)local_168;
              if ((int)local_168 == local_168._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_170,(int *)((longlong)&local_168 + 4));
              }
              local_168 = CONCAT44(local_168._4_4_,iVar9 + 1);
              memmove(local_170.Data + 0x10,local_170.Data,(longlong)iVar9 << 4);
              FVar18.Data = local_170.Data;
            }
          }
          else {
            ::FString::FString(&local_70,"127.0.0.");
            iVar16 = local_70.Data.ArrayNum + -1;
            FVar18.Data = local_70.Data.AllocatorInstance.Data;
            if (local_70.Data.ArrayNum == 0) {
              iVar16 = iVar9;
              FVar18.Data = (FScriptContainerElement *)L"";
            }
            bVar8 = ::FString::StartsWith(&local_120,(wchar_t *)FVar18.Data,iVar16,IgnoreCase);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if (!bVar8) goto LAB_148ce0334;
            if (((local_150.Data <= pFVar17) &&
                (pFVar17 < local_150.Data + (longlong)local_148._4_4_ * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar2 = (code *)swi(3);
              pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar15;
            }
            iVar9 = (int)local_148;
            if ((int)local_148 == local_148._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_150,(int *)((longlong)&local_148 + 4));
            }
            local_148 = CONCAT44(local_148._4_4_,iVar9 + 1);
            FVar18.Data = local_150.Data + (longlong)iVar9 * 0x10;
          }
LAB_148ce053d:
          ::FString::FString((FString *)FVar18.Data,(FString *)pFVar17);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
      }
      pTVar3 = local_88;
      iVar9 = local_128;
    }
    if (iVar9 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar9,&local_180,(int *)&local_178,
                          (int *)((longlong)&local_178 + 4));
      ConstructItems<FString,FString,int>
                (local_180.Data + (longlong)iVar11 * 0x10,(FString *)local_130.Data,iVar9);
    }
    iVar9 = (int)local_138;
    if ((int)local_138 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_138,&local_180,(int *)&local_178,
                          (int *)((longlong)&local_178 + 4));
      ConstructItems<FString,FString,int>
                (local_180.Data + (longlong)iVar11 * 0x10,(FString *)local_140.Data,iVar9);
    }
    iVar9 = (int)local_148;
    if ((int)local_148 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_148,&local_180,(int *)&local_178,
                          (int *)((longlong)&local_178 + 4));
      ConstructItems<FString,FString,int>
                (local_180.Data + (longlong)iVar11 * 0x10,(FString *)local_150.Data,iVar9);
    }
    iVar9 = (int)local_168;
    if ((int)local_168 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_168,&local_180,(int *)&local_178,
                          (int *)((longlong)&local_178 + 4));
      ConstructItems<FString,FString,int>
                (local_180.Data + (longlong)iVar11 * 0x10,(FString *)local_170.Data,iVar9);
    }
    iVar9 = (int)local_158;
    if ((int)local_158 != 0) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,(int)local_158,&local_180,(int *)&local_178,
                          (int *)((longlong)&local_178 + 4));
      ConstructItems<FString,FString,int>
                (local_180.Data + (longlong)iVar11 * 0x10,(FString *)local_160.Data,iVar9);
    }
    FVar18.Data = local_180.Data;
    local_180.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AllocatorInstance).Data = FVar18.Data;
    __return_storage_ptr__->ArrayNum = (int)local_178;
    __return_storage_ptr__->ArrayMax = local_178._4_4_;
    local_178 = 0;
    DestructItems<FString,int>((FString *)local_160.Data,(int)local_158);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    DestructItems<FString,int>((FString *)local_170.Data,(int)local_168);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    DestructItems<FString,int>((FString *)local_150.Data,(int)local_148);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    DestructItems<FString,int>((FString *)local_140.Data,(int)local_138);
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    DestructItems<FString,int>((FString *)local_130.Data,local_128);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    if (local_110 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    DestructItems<FString,int>((FString *)local_180.Data,(int)local_178);
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
  }
  return __return_storage_ptr__;
}

// StringToInternetAddr @ 148ce0880

TSharedPtr<FInternetAddr,1> * __thiscall
FStorageServerConnection::StringToInternetAddr
          (FStorageServerConnection *this,TSharedPtr<FInternetAddr,1> *__return_storage_ptr__,
          FString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ISocketSubsystem *pIVar5;
  FString *pFVar6;
  TSharedPtr<FInternetAddr,1> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  FName local_res10 [2];
  int local_res20;
  FString local_e8;
  undefined8 local_d8;
  TSharedPtr<FInternetAddr,1> local_d0;
  void *local_b8 [2];
  void *local_a8;
  void *local_98;
  int local_88;
  FAddressInfoResultData *local_80;
  int local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  
  __return_storage_ptr__->Object = (FInternetAddr *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  local_res20 = param_2;
  pIVar5 = ISocketSubsystem::Get(local_res10);
  pFVar6 = ::FString::FString(&local_58,param_1);
  bVar3 = ::FString::StartsWith(pFVar6,L"platform://",0xb,IgnoreCase);
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (!bVar3) {
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    pFVar6 = ::FString::FString(&local_48,param_1);
    bVar3 = ::FString::StartsWith(pFVar6,L"hostname://",0xb,IgnoreCase);
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (bVar3) {
      iVar8 = (param_1->Data).ArrayNum;
      iVar9 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar9 = 0;
      }
      iVar8 = iVar9;
      if (iVar9 + -0xb < iVar9) {
        iVar8 = iVar9 + -0xb;
      }
      iVar10 = 0;
      if (0 < iVar8) {
        iVar10 = iVar8;
      }
      ::FString::AssignRange
                (&local_e8,
                 (wchar_t *)
                 ((param_1->Data).AllocatorInstance.Data + ((longlong)iVar9 - (longlong)iVar10) * 2)
                 ,iVar10);
      pFVar6 = &local_e8;
    }
    else {
      pFVar6 = param_1;
      if ((1 < (param_1->Data).ArrayNum) &&
         (*(short *)(param_1->Data).AllocatorInstance.Data == 0x5b)) {
        iVar8 = (param_1->Data).ArrayNum;
        iVar9 = iVar8 + -2;
        if (iVar8 == 0) {
          iVar9 = -1;
        }
        pwVar11 = ::FString::operator[](param_1,iVar9);
        if (*pwVar11 == L']') {
          iVar8 = (param_1->Data).ArrayNum;
          iVar9 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar9 = 0;
          }
          iVar8 = 1;
          if (iVar9 < 1) {
            iVar8 = iVar9;
          }
          iVar10 = iVar9 - iVar8;
          if (iVar9 + -2 < iVar9 - iVar8) {
            iVar10 = iVar9 + -2;
          }
          iVar9 = 0;
          if (0 < iVar10) {
            iVar9 = iVar10;
          }
          ::FString::AssignRange
                    (&local_e8,
                     (wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar8 * 2),iVar9
                    );
          pFVar6 = &local_e8;
        }
      }
      pTVar7 = (TSharedPtr<FInternetAddr,1> *)
               (**(code **)(pIVar5->_padding_ + 0x58))(pIVar5,local_68,pFVar6);
      if (__return_storage_ptr__ != pTVar7) {
        __return_storage_ptr__->Object = pTVar7->Object;
        pTVar7->Object = (FInternetAddr *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    if ((__return_storage_ptr__->Object == (FInternetAddr *)0x0) ||
       (cVar4 = (**(code **)((longlong)*__return_storage_ptr__->Object + 0x98))(), cVar4 == '\0')) {
      local_d8 = 0;
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      (**(code **)(pIVar5->_padding_ + 0x40))(pIVar5,local_b8,pwVar11,0,0,0,0);
      if ((local_88 == 0) && (0 < local_78)) {
        local_d0.SharedReferenceCount.ReferenceController =
             (local_80->Address).SharedReferenceCount.ReferenceController;
        local_d0.Object = (local_80->Address).Object;
        if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (__return_storage_ptr__ != &local_d0) {
          __return_storage_ptr__->Object = local_d0.Object;
          local_d0.Object = (FInternetAddr *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&__return_storage_ptr__->SharedReferenceCount,&local_d0.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
      }
      DestructItems<FAddressInfoResultData,int>(local_80,local_78);
      if (local_80 != (FAddressInfoResultData *)0x0) {
        FMemory::Free(local_80);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8[0] != (void *)0x0) {
        FMemory::Free(local_b8[0]);
      }
    }
    if ((__return_storage_ptr__->Object != (FInternetAddr *)0x0) &&
       (cVar4 = (**(code **)((longlong)*__return_storage_ptr__->Object + 0x98))(), cVar4 != '\0')) {
      if ((__return_storage_ptr__->Object == (FInternetAddr *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FInternetAddr,1> *)(*pcVar2)();
        return pTVar7;
      }
      (**(code **)((longlong)*__return_storage_ptr__->Object + 0x28))
                (__return_storage_ptr__->Object,local_res20);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// operator() @ 150539940

bool __thiscall
`FStorageServerConnection::ReadChunkBatchRequest'::__l85::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8449410219921898898>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8449410219921898898>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505399c0

bool __thiscall
`FStorageServerConnection::ReadChunkBatchRequest'::__l88::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8449410219921898890>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8449410219921898890>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

