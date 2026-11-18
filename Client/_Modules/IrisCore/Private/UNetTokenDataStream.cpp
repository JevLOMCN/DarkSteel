// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// StaticClass @ 14425d970

UClass * __cdecl UNetTokenDataStream::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenDataStream",
               &Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton,
               StaticRegisterNativesUNetTokenDataStream,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetTokenDataStream>,
               InternalVTableHelperCtorCaller<UNetTokenDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton;
}

// UNetTokenDataStream @ 144267b30

UNetTokenDataStream * __thiscall UNetTokenDataStream::UNetTokenDataStream(UNetTokenDataStream *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDataStream::UDataStream((UDataStream *)this,pFVar1);
  this->ReplicationSystemId = 0xffffffff;
  this->ConnectionId = 0xffffffff;
  this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
  (this->NetTokenExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetTokenExports).Front = 0;
  (this->NetTokenExports).AfterBack = 0;
  (this->NetTokensPendingExport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetTokensPendingExport).Front = 0;
  (this->NetTokensPendingExport).AfterBack = 0;
  this->NetTokenStore = (FNetTokenStore *)0x0;
  this->RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  this->NetExports = (FNetExports *)0x0;
  (this->NetTokenExports).IndexMask = 0xffffffff;
  (this->NetTokensPendingExport).IndexMask = 0xffffffff;
  return this;
}

// UNetTokenDataStream @ 144267bb0

UNetTokenDataStream * __thiscall
UNetTokenDataStream::UNetTokenDataStream(UNetTokenDataStream *this,FVTableHelper *param_1)

{
  UDataStream::UDataStream((UDataStream *)this,param_1);
  this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
  (this->NetTokenExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetTokenExports).Front = 0;
  (this->NetTokenExports).AfterBack = 0;
  (this->NetTokensPendingExport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetTokensPendingExport).Front = 0;
  (this->NetTokensPendingExport).AfterBack = 0;
  (this->NetTokenExports).IndexMask = 0xffffffff;
  (this->NetTokensPendingExport).IndexMask = 0xffffffff;
  return this;
}

// ~UNetTokenDataStream @ 144269440

void __thiscall UNetTokenDataStream::~UNetTokenDataStream(UNetTokenDataStream *this)

{
  this->_padding_ = (longlong)&___7UNetTokenDataStream__6B_;
  TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>(&this->NetTokensPendingExport);
  TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::
  ~TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>(&this->NetTokenExports);
  UDataStream::~UDataStream((UDataStream *)this);
  return;
}

// AddNetTokenForExplicitExport @ 14426bca0

void __thiscall
UNetTokenDataStream::AddNetTokenForExplicitExport(UNetTokenDataStream *this,FNetToken param_1)

{
  TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  
  this_00 = &this->NetTokensPendingExport;
  uVar1 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                    (this_00,((this->NetTokensPendingExport).AfterBack -
                             (this->NetTokensPendingExport).Front) + 1);
  if ((this->NetTokensPendingExport).IndexMask + 1 < uVar1) {
    TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate(this_00,uVar1);
  }
  uVar1 = (this->NetTokensPendingExport).AfterBack;
  (this->NetTokensPendingExport).AfterBack = uVar1 + 1;
  ((FNetToken_u_0 *)
  ((this_00->AllocatorInstance).Data +
  (ulonglong)(uVar1 & (this->NetTokensPendingExport).IndexMask) * 4))->_s_0 =
       (FNetToken_u_0_s_0)param_1.field0_0x0;
  return;
}

// BeginWrite @ 14426e360

EWriteResult __thiscall
UNetTokenDataStream::BeginWrite(UNetTokenDataStream *this,FBeginWriteParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  EWriteResult EVar3;
  
  if (this->NetTokenStore != (FNetTokenStore *)0x0) {
    return -(uint)((this->NetTokensPendingExport).AfterBack != (this->NetTokensPendingExport).Front)
           & HasMoreData;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7595264812431442010>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenDataStream.cpp"
                     ,0x5a,"NetTokenStore");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return NoData;
}

// GetPrivateStaticClass @ 14427c1d0

UClass * __cdecl UNetTokenDataStream::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetTokenDataStream",
               &Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton,
               StaticRegisterNativesUNetTokenDataStream,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetTokenDataStream>,
               InternalVTableHelperCtorCaller<UNetTokenDataStream>,local_res8,
               UDataStream::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetTokenDataStream.InnerSingleton;
}

// HasAcknowledgedAllReliableData @ 14427d760

bool __thiscall UNetTokenDataStream::HasAcknowledgedAllReliableData(UNetTokenDataStream *this)

{
  if (((this->NetTokensPendingExport).AfterBack == (this->NetTokensPendingExport).Front) &&
     ((this->NetTokenExports).AfterBack == (this->NetTokenExports).Front)) {
    return true;
  }
  return false;
}

// Init @ 14427e130

void __thiscall UNetTokenDataStream::Init(UNetTokenDataStream *this,FInitParameters *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FNetTokenStore *pFVar6;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  UReplicationSystem *this_00;
  UReplicationSystem *pUVar8;
  ForAnyElementType FVar9;
  uint local_res8 [2];
  uint *local_res10;
  TArray<UE::Net::FNetToken,TSizedDefaultAllocator<32>_> local_28;
  
  UDataStream::Init((UDataStream *)this,param_1);
  uVar5 = param_1->ReplicationSystemId;
  pUVar8 = (UReplicationSystem *)0x0;
  this->ReplicationSystemId = uVar5;
  this->ConnectionId = param_1->ConnectionId;
  this_00 = pUVar8;
  if (uVar5 < (uint)UE::Net::FReplicationSystemFactory::ReplicationSystems.ArrayNum) {
    uVar4 = 0;
    if ((int)uVar5 < UE::Net::FReplicationSystemFactory::ReplicationSystems.ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar7 = &UE::Net::FReplicationSystemFactory::ReplicationSystems;
    if (UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData !=
        (ForElementType<UReplicationSystem_*>)0x0) {
      pTVar7 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)UE::Net::FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.
                  SecondaryData;
    }
    this_00 = *(UReplicationSystem **)((longlong)pTVar7 + (longlong)(int)uVar5 * 8);
  }
  pFVar6 = UReplicationSystem::GetNetTokenStore(this_00);
  this->NetTokenStore = pFVar6;
  local_res8[0] = param_1->ConnectionId;
  if ((local_res8[0] == 0) || ((uint)(pFVar6->RemoteNetTokenStoreStates).ArrayNum <= local_res8[0]))
  {
    local_res10 = local_res8;
    bVar3 = `UE::Net::FNetTokenStore::GetRemoteNetTokenStoreState'::__l3::<lambda_1>::operator()
                      (&local_res10);
    if (!bVar3) goto LAB_14427e25f;
  }
  uVar5 = local_res8[0];
  uVar4 = 0;
  if ((int)local_res8[0] < (pFVar6->RemoteNetTokenStoreStates).ArrayNum) {
    uVar4 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar8 = *(UReplicationSystem **)
            ((pFVar6->RemoteNetTokenStoreStates).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
LAB_14427e25f:
  this->RemoteNetTokenStoreState = (FNetTokenStoreState *)pUVar8;
  this->NetExports = param_1->NetExports;
  if (UE::Net::Private::bIrisPreExportExistingNetTokensOnConnect != false) {
    UE::Net::FNetTokenStore::GetAllNetTokens(this->NetTokenStore,&local_28);
    for (FVar9.Data = local_28.AllocatorInstance.Data;
        FVar9.Data != local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
        FVar9.Data = FVar9.Data + 4) {
      uVar5 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                        (&this->NetTokensPendingExport,
                         ((this->NetTokensPendingExport).AfterBack -
                         (this->NetTokensPendingExport).Front) + 1);
      if ((this->NetTokensPendingExport).IndexMask + 1 < uVar5) {
        TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
                  (&this->NetTokensPendingExport,uVar5);
      }
      uVar5 = (this->NetTokensPendingExport).AfterBack;
      pFVar1 = (this->NetTokensPendingExport).AllocatorInstance.Data;
      (this->NetTokensPendingExport).AfterBack = uVar5 + 1;
      *(undefined4 *)(pFVar1 + (ulonglong)((this->NetTokensPendingExport).IndexMask & uVar5) * 4) =
           *(undefined4 *)FVar9.Data;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessPacketDeliveryStatus @ 144288080

void __thiscall
UNetTokenDataStream::ProcessPacketDeliveryStatus
          (UNetTokenDataStream *this,EPacketDeliveryStatus param_1,FDataStreamRecord *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  if (param_2 != (FDataStreamRecord *)0x0) {
    if (param_1 == Lost) {
      while( true ) {
        uVar2 = (this->NetTokenExports).Front;
        uVar3 = (this->NetTokenExports).IndexMask;
        pFVar4 = (this->NetTokenExports).AllocatorInstance.Data;
        uVar7 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                          (&this->NetTokensPendingExport,
                           ((this->NetTokensPendingExport).AfterBack -
                           (this->NetTokensPendingExport).Front) + 1);
        if ((this->NetTokensPendingExport).IndexMask + 1 < uVar7) {
          TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
                    (&this->NetTokensPendingExport,uVar7);
        }
        puVar1 = &(this->NetTokensPendingExport).Front;
        *puVar1 = *puVar1 - 1;
        *(undefined4 *)
         ((this->NetTokensPendingExport).AllocatorInstance.Data +
         (ulonglong)
         ((this->NetTokensPendingExport).IndexMask & (this->NetTokensPendingExport).Front) * 4) =
             *(undefined4 *)(pFVar4 + (ulonglong)(uVar2 & uVar3) * 4);
        if (((this->NetTokenExports).IndexMask == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                               ,0x37f,L""), bVar6)) break;
        puVar1 = &(this->NetTokenExports).Front;
        *puVar1 = *puVar1 + 1;
        param_2 = param_2 + -1;
        if (param_2 == (FDataStreamRecord *)0x0) {
          return;
        }
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    do {
      if (((this->NetTokenExports).IndexMask == 0xffffffff) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar1 = &(this->NetTokenExports).Front;
      *puVar1 = *puVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != (FDataStreamRecord *)0x0);
  }
  return;
}

// ReadData @ 1442888a0

void __thiscall
UNetTokenDataStream::ReadData(UNetTokenDataStream *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  FNetRefHandle_u_0 local_res8;
  
  if (this->NetTokenStore == (FNetTokenStore *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7595264812431442118>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenDataStream.cpp"
                       ,0xc6,"NetTokenStore");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = param_1->BitStreamReader;
    uVar3 = 0xffffffff;
    pFVar6 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 != (FNetTraceCollector *)0x0) {
      uVar3 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTokenDataStream = UE::Net::CreatePersistentNetDebugName(L"NetTokenDataStream",0x12);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(NetTokenDataStream);
      FVar5 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = uVar4;
    }
    uVar4 = UE::Net::FNetBitStreamReader::ReadBits(this_00,1);
    while (((uVar4 & 1) != 0 && (this_00->OverflowBitCount == 0))) {
      UE::Net::FNetTokenStore::InternalReadNetToken
                ((FNetSerializationContext *)&local_res8._s_0,(uint)param_1);
      UE::Net::FNetTokenStore::ReadTokenData
                (this->NetTokenStore,param_1,(FNetToken)local_res8.Value._0_4_,
                 this->RemoteNetTokenStoreState);
      uVar4 = UE::Net::FNetBitStreamReader::ReadBits(this_00,1);
    }
    if (uVar3 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar6,uVar3,this_00->BufferBitPosition);
    }
  }
  return;
}

// StaticRegisterNativesUNetTokenDataStream @ 144297aa0

void __cdecl UNetTokenDataStream::StaticRegisterNativesUNetTokenDataStream(void)

{
  return;
}

// WriteData @ 14429acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EWriteResult __thiscall
UNetTokenDataStream::WriteData
          (UNetTokenDataStream *this,FNetSerializationContext *param_1,FDataStreamRecord **param_2)

{
  uint *puVar1;
  FNetToken_u_0 *pFVar2;
  FNetTokenStore *pFVar3;
  FBatchExports *pFVar4;
  FScriptContainerElement *pFVar5;
  FAcknowledgedExports *pFVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  FName FVar9;
  FNetRefHandle_u_0 FVar10;
  wchar_t *pwVar11;
  FNetRefHandle_u_0 FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  FNetSerializationContext *pFVar17;
  bool bVar18;
  EWriteResult EVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  FName *pFVar25;
  FNetSerializationContext *pFVar26;
  ulonglong uVar27;
  ForElementType<FNetTracePacketContentEvent> FVar28;
  ForElementType<FSetElementId> FVar29;
  ForElementType<UE::Net::FNetToken> FVar30;
  ForElementType<FNetTracePacketContentEvent> FVar31;
  FNetSerializationContext *pFVar32;
  FNetTraceCollector *pFVar33;
  FNetBitStreamWriter *this_00;
  int iVar34;
  ForElementType<UE::Net::FNetToken> FVar35;
  uint uVar36;
  undefined1 auStackY_468 [32];
  uint local_434;
  uint local_430;
  FNetBitStreamWriter local_428;
  ENetTokenAuthority local_408;
  FNetBitStreamWriter *local_400;
  FNetTraceCollector *local_3f8;
  FDataStreamRecord **local_3f0;
  FName local_3e8;
  FNetExportContext *local_3e0;
  FNetExportRollbackScope local_3d8;
  FNetSerializationContext local_3b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  this_00 = param_1->BitStreamWriter;
  pFVar3 = this->NetTokenStore;
  local_400 = this_00;
  local_3f0 = param_2;
  if (pFVar3 == (FNetTokenStore *)0x0) {
    bVar18 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7595264812431442025>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenDataStream.cpp"
                        ,0x69,"NetTokenStore");
    if (bVar18) {
      pcVar8 = (code *)swi(3);
      EVar19 = (*pcVar8)();
      return EVar19;
    }
  }
  else if ((((this->NetTokensPendingExport).AfterBack != (this->NetTokensPendingExport).Front) &&
           (this_00->OverflowBitCount == 0)) &&
          (this_00->BufferBitCapacity != this_00->BufferBitPosition)) {
    pFVar22 = (FName *)(pFVar3->TokenDataStores).AllocatorInstance.Data;
    pFVar25 = pFVar22 + (longlong)(pFVar3->TokenDataStores).ArrayNum * 2;
    for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 2) {
      if (UE::Net::FStringTokenStore::StringTokenStoreName == *pFVar22) {
        local_3e8 = pFVar22[1];
        goto LAB_14429ae06;
      }
    }
    local_3e8.ComparisonIndex.Value = 0;
    local_3e8.Number = 0;
LAB_14429ae06:
    local_3e0 = param_1->ExportContext;
    pFVar33 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar33 = param_1->TraceCollector;
    }
    local_434 = 0;
    local_430 = 0xffffffff;
    local_3f8 = pFVar33;
    if (pFVar33 != (FNetTraceCollector *)0x0) {
      local_430 = FNetTrace::BeginPacketContentEvent(pFVar33,NameId,this_00->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        NetTokenDataStream = UE::Net::CreatePersistentNetDebugName(L"NetTokenDataStream",0x12);
        _Init_thread_footer(&::_TSS0);
      }
      uVar20 = FNetTrace::TraceName(NetTokenDataStream);
      FVar28 = (pFVar33->Events).AllocatorInstance.SecondaryData;
      if (FVar28 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar28 = (ForElementType<FNetTracePacketContentEvent>)&pFVar33->Events;
      }
      *(uint *)((longlong)FVar28 + (ulonglong)local_430 * 0x10) = uVar20;
    }
    if (this_00->OverflowBitCount == 0) {
      iVar34 = this_00->BufferBitCapacity - this_00->BufferBitPosition;
    }
    else {
      iVar34 = 0;
    }
    UE::Net::FNetBitStreamWriter::CreateSubstream(this_00,&local_428,iVar34 - 1);
    lVar23 = 6;
    pFVar17 = &local_3b8;
    do {
      pFVar32 = param_1;
      pFVar26 = pFVar17;
      FVar9 = (pFVar32->ErrorContext).Error;
      pwVar24 = (pFVar32->ReadJournal).Entries[0].Name;
      FVar10 = (pFVar32->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
      (pFVar26->ErrorContext).ObjectHandle.field0_0x0 =
           (pFVar32->ErrorContext).ObjectHandle.field0_0x0;
      (pFVar26->ErrorContext).Error = FVar9;
      uVar20 = (pFVar32->ReadJournal).Entries[0].BitOffset;
      uVar13 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[0].field_0x14;
      pwVar11 = (pFVar32->ReadJournal).Entries[1].Name;
      (pFVar26->ReadJournal).Entries[0].Name = pwVar24;
      (pFVar26->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar10;
      FVar10 = (pFVar32->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
      uVar21 = (pFVar32->ReadJournal).Entries[1].BitOffset;
      uVar14 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[1].field_0x14;
      (pFVar26->ReadJournal).Entries[0].BitOffset = uVar20;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[0].field_0x14 = uVar13;
      (pFVar26->ReadJournal).Entries[1].Name = pwVar11;
      pwVar24 = (pFVar32->ReadJournal).Entries[2].Name;
      FVar12 = (pFVar32->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
      (pFVar26->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar10;
      (pFVar26->ReadJournal).Entries[1].BitOffset = uVar21;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[1].field_0x14 = uVar14;
      uVar20 = (pFVar32->ReadJournal).Entries[2].BitOffset;
      uVar13 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[2].field_0x14;
      pwVar11 = (pFVar32->ReadJournal).Entries[3].Name;
      (pFVar26->ReadJournal).Entries[2].Name = pwVar24;
      (pFVar26->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar12;
      FVar10 = (pFVar32->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
      uVar21 = (pFVar32->ReadJournal).Entries[3].BitOffset;
      uVar14 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[3].field_0x14;
      (pFVar26->ReadJournal).Entries[2].BitOffset = uVar20;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[2].field_0x14 = uVar13;
      (pFVar26->ReadJournal).Entries[3].Name = pwVar11;
      pwVar24 = (pFVar32->ReadJournal).Entries[4].Name;
      FVar12 = (pFVar32->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
      (pFVar26->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar10;
      (pFVar26->ReadJournal).Entries[3].BitOffset = uVar21;
      *(undefined4 *)&(pFVar26->ReadJournal).Entries[3].field_0x14 = uVar14;
      (pFVar26->ReadJournal).Entries[4].Name = pwVar24;
      (pFVar26->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar12;
      lVar23 = lVar23 + -1;
      pFVar17 = (FNetSerializationContext *)&(pFVar26->ReadJournal).Entries[4].BitOffset;
      param_1 = (FNetSerializationContext *)&(pFVar32->ReadJournal).Entries[4].BitOffset;
    } while (lVar23 != 0);
    uVar13 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[4].field_0x14;
    pwVar24 = (pFVar32->ReadJournal).Entries[5].Name;
    uVar15 = (pFVar32->ReadJournal).Entries[8].BitOffset;
    uVar16 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[8].field_0x14;
    FVar10 = (pFVar32->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
    uVar21 = (pFVar32->ReadJournal).Entries[5].BitOffset;
    uVar14 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[5].field_0x14;
    uVar20 = (this->NetTokensPendingExport).Front;
    (pFVar26->ReadJournal).Entries[4].BitOffset = (pFVar32->ReadJournal).Entries[4].BitOffset;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[4].field_0x14 = uVar13;
    (pFVar26->ReadJournal).Entries[5].Name = pwVar24;
    pwVar24 = (pFVar32->ReadJournal).Entries[6].Name;
    FVar12 = (pFVar32->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
    (pFVar26->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar10;
    (pFVar26->ReadJournal).Entries[5].BitOffset = uVar21;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[5].field_0x14 = uVar14;
    uVar21 = (pFVar32->ReadJournal).Entries[6].BitOffset;
    uVar13 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[6].field_0x14;
    pwVar11 = (pFVar32->ReadJournal).Entries[7].Name;
    (pFVar26->ReadJournal).Entries[6].Name = pwVar24;
    (pFVar26->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar12;
    FVar10 = (pFVar32->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
    uVar36 = (pFVar32->ReadJournal).Entries[7].BitOffset;
    uVar14 = *(undefined4 *)&(pFVar32->ReadJournal).Entries[7].field_0x14;
    (pFVar26->ReadJournal).Entries[6].BitOffset = uVar21;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[6].field_0x14 = uVar13;
    (pFVar26->ReadJournal).Entries[7].Name = pwVar11;
    pwVar24 = (pFVar32->ReadJournal).Entries[8].Name;
    FVar12 = (pFVar32->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
    (pFVar26->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar10;
    (pFVar26->ReadJournal).Entries[7].BitOffset = uVar36;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[7].field_0x14 = uVar14;
    (pFVar26->ReadJournal).Entries[8].Name = pwVar24;
    (pFVar26->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar12;
    (pFVar26->ReadJournal).Entries[8].BitOffset = uVar15;
    *(undefined4 *)&(pFVar26->ReadJournal).Entries[8].field_0x14 = uVar16;
    local_3b8.BitStreamWriter = &local_428;
    local_3b8.BitStreamReader = (FNetBitStreamReader *)0x0;
    local_408 = (this->NetTokenStore->Params).Authority;
    uVar21 = 0;
    if ((this->NetTokensPendingExport).AfterBack != uVar20) {
      do {
        uVar36 = local_428.BufferBitPosition - local_428.BufferBitStartOffset;
        if (local_3b8.ExportContext == (FNetExportContext *)0x0) {
          local_3d8.StartNumNetHandleExports = 0;
          local_3d8.StartNumNetTokenExports = 0;
          local_3d8.StartNumPendingExports = 0;
          local_3d8.StartNumNetTokensPendingExports = 0;
        }
        else {
          pFVar4 = (local_3b8.ExportContext)->BatchExports;
          local_3d8.StartNumNetTokenExports = (pFVar4->NetTokensExportedInCurrentBatch).ArrayNum;
          local_3d8.StartNumNetHandleExports = (pFVar4->HandlesExportedInCurrentBatch).ArrayNum;
          local_3d8.StartNumNetTokensPendingExports =
               (pFVar4->NetTokensPendingExportInCurrentBatch).ArrayNum;
          local_3d8.StartNumPendingExports =
               (pFVar4->ReferencesPendingExportInCurrentBatch).ArrayNum;
        }
        uVar27 = (ulonglong)(uVar20 & (this->NetTokensPendingExport).IndexMask);
        pFVar5 = (this->NetTokensPendingExport).AllocatorInstance.Data;
        uVar20 = *(uint *)(pFVar5 + uVar27 * 4);
        pFVar2 = (FNetToken_u_0 *)(pFVar5 + uVar27 * 4);
        local_3d8.Context = &local_3b8;
        if (((uVar20 >> 0x17 & 1) == 0) || (local_408 == Authority)) {
          pFVar6 = local_3e0->AcknowledgedExports;
          if (*(int *)&(pFVar6->AcknowledgedExportedNetTokens).Elements.field_0x8 !=
              *(int *)&(pFVar6->AcknowledgedExportedNetTokens).Elements.field_0x34) {
            FVar7 = (pFVar6->AcknowledgedExportedNetTokens).Hash.SecondaryData;
            FVar29 = (ForElementType<FSetElementId>)&(pFVar6->AcknowledgedExportedNetTokens).Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar29 = FVar7;
            }
            iVar34 = *(int *)((longlong)FVar29 +
                             (ulonglong)
                             ((pFVar6->AcknowledgedExportedNetTokens).HashSize - 1U & uVar20) * 4);
            if (iVar34 != -1) {
              lVar23 = *(longlong *)&(pFVar6->AcknowledgedExportedNetTokens).Elements;
              do {
                if (*(uint *)(lVar23 + (longlong)iVar34 * 0xc) == uVar20) goto LAB_14429b263;
                iVar34 = *(int *)(lVar23 + 4 + (longlong)iVar34 * 0xc);
              } while (iVar34 != -1);
            }
          }
          pFVar4 = local_3e0->BatchExports;
          FVar30 = (pFVar4->NetTokensExportedInCurrentBatch).AllocatorInstance.SecondaryData;
          FVar35 = (ForElementType<UE::Net::FNetToken>)&pFVar4->NetTokensExportedInCurrentBatch;
          if (FVar30 != (ForElementType<UE::Net::FNetToken>)0x0) {
            FVar35 = FVar30;
          }
          for (FVar30 = FVar35;
              FVar30 != (ForElementType<UE::Net::FNetToken>)
                        ((longlong)FVar35 +
                        (longlong)(pFVar4->NetTokensExportedInCurrentBatch).ArrayNum * 4);
              FVar30 = (ForElementType<UE::Net::FNetToken>)((longlong)FVar30 + 4)) {
            if (*(uint *)FVar30 == uVar20) {
              if ((int)((longlong)FVar30 - (longlong)FVar35 >> 2) != -1) goto LAB_14429b263;
              break;
            }
          }
          uVar20 = 0xffffffff;
          pFVar33 = (FNetTraceCollector *)0x0;
          if (1 < GNetTraceRuntimeVerbosity) {
            pFVar33 = local_3b8.TraceCollector;
          }
          if (pFVar33 != (FNetTraceCollector *)0x0) {
            uVar20 = 0xffffffff;
            if (local_428.OverflowBitCount != 0) {
              uVar20 = 0;
            }
            uVar20 = FNetTrace::BeginPacketContentEvent
                               (pFVar33,NameId,uVar20 & local_428.BufferBitPosition);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Name = UE::Net::CreatePersistentNetDebugName(L"NetTokenExport",0xe);
              _Init_thread_footer(&::_TSS0);
            }
            uVar21 = FNetTrace::TraceName(::Name);
            FVar28 = (pFVar33->Events).AllocatorInstance.SecondaryData;
            FVar31 = (ForElementType<FNetTracePacketContentEvent>)&pFVar33->Events;
            if (FVar28 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar31 = FVar28;
            }
            *(uint *)((longlong)FVar31 + (ulonglong)uVar20 * 0x10) = uVar21;
          }
          UE::Net::FNetBitStreamWriter::WriteBits(&local_428,1,1);
          UE::Net::FNetTokenStore::InternalWriteNetToken
                    (&local_3b8,(FNetToken)*(FNetToken_u_0 *)&pFVar2->_s_0,true);
          UE::Net::FNetTokenStore::WriteTokenData
                    (this->NetTokenStore,&local_3b8,(FNetToken)*(FNetToken_u_0 *)&pFVar2->_s_0);
          if (local_428.OverflowBitCount != 0) {
            if (uVar20 != 0xffffffff) {
              uVar21 = 0xffffffff;
              if (local_428.OverflowBitCount != 0) {
                uVar21 = 0;
              }
              FNetTrace::EndPacketContentEvent(pFVar33,uVar20,uVar21 & local_428.BufferBitPosition);
            }
            if ((local_3b8.ErrorContext.Error != (FName)0x0) ||
               (bVar18 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(&local_3b8), bVar18
               )) {
              UE::Net::Private::FNetExportRollbackScope::Rollback(&local_3d8);
            }
            pFVar33 = local_3f8;
            this_00 = local_400;
            param_2 = local_3f0;
            uVar21 = local_434;
            if (local_428.OverflowBitCount != 0) {
              UE::Net::FNetBitStreamWriter::Seek(&local_428,uVar36);
              pFVar33 = local_3f8;
              this_00 = local_400;
              param_2 = local_3f0;
            }
            break;
          }
          if (uVar20 != 0xffffffff) {
            pwVar24 = UE::Net::FStringTokenStore::ResolveToken
                                ((FStringTokenStore *)local_3e8,
                                 (FNetToken)*(FNetToken_u_0 *)&pFVar2->_s_0,
                                 (FNetTokenStoreState *)0x0);
            uVar21 = FNetTrace::TraceName(pwVar24);
            FVar28 = (pFVar33->Events).AllocatorInstance.SecondaryData;
            FVar31 = (ForElementType<FNetTracePacketContentEvent>)&pFVar33->Events;
            if (FVar28 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar31 = FVar28;
            }
            *(uint *)((longlong)FVar31 + (ulonglong)uVar20 * 0x10) = uVar21;
          }
          UE::Net::Private::FNetExportContext::AddExported
                    (local_3e0,(FNetToken)*(FNetToken_u_0 *)&pFVar2->_s_0);
          uVar21 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                             (&this->NetTokenExports,
                              ((this->NetTokenExports).AfterBack - (this->NetTokenExports).Front) +
                              1);
          if ((this->NetTokenExports).IndexMask + 1 < uVar21) {
            TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
                      (&this->NetTokenExports,uVar21);
          }
          uVar21 = (this->NetTokenExports).AfterBack;
          pFVar5 = (this->NetTokenExports).AllocatorInstance.Data;
          local_434 = local_434 + 1;
          (this->NetTokenExports).AfterBack = uVar21 + 1;
          ((FNetToken_u_0 *)(pFVar5 + (ulonglong)(uVar21 & (this->NetTokenExports).IndexMask) * 4))
          ->_s_0 = *(FNetToken_u_0_s_0 *)pFVar2;
          if (uVar20 != 0xffffffff) {
            uVar21 = 0xffffffff;
            if (local_428.OverflowBitCount != 0) {
              uVar21 = 0;
            }
            FNetTrace::EndPacketContentEvent(pFVar33,uVar20,uVar21 & local_428.BufferBitPosition);
          }
        }
LAB_14429b263:
        if (((this->NetTokensPendingExport).IndexMask == 0xffffffff) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                                ,0x37f,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          EVar19 = (*pcVar8)();
          return EVar19;
        }
        puVar1 = &(this->NetTokensPendingExport).Front;
        *puVar1 = *puVar1 + 1;
        if ((local_3b8.ErrorContext.Error != (FName)0x0) ||
           (bVar18 = UE::Net::FNetSerializationContext::IsBitStreamOverflown(&local_3b8), bVar18)) {
          UE::Net::Private::FNetExportRollbackScope::Rollback(&local_3d8);
        }
        if (local_428.OverflowBitCount != 0) {
          UE::Net::FNetBitStreamWriter::Seek(&local_428,uVar36);
        }
        uVar20 = (this->NetTokensPendingExport).Front;
        pFVar33 = local_3f8;
        this_00 = local_400;
        param_2 = local_3f0;
        uVar21 = local_434;
      } while ((this->NetTokensPendingExport).AfterBack != uVar20);
    }
    if (uVar21 == 0) {
      UE::Net::FNetBitStreamWriter::DiscardSubstream(this_00,&local_428);
      if ((0 < (int)((this->NetTokensPendingExport).AfterBack - (this->NetTokensPendingExport).Front
                    )) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7595264812431442109>,true,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetTokenDataStream.cpp"
                              ,0xbd,"!bHasMoreDataToSend"), bVar18)) {
        pcVar8 = (code *)swi(3);
        EVar19 = (*pcVar8)();
        return EVar19;
      }
      EVar19 = NoData;
    }
    else {
      UE::Net::FNetBitStreamWriter::CommitSubstream(this_00,&local_428);
      UE::Net::FNetBitStreamWriter::WriteBits(this_00,0,1);
      *param_2 = (FDataStreamRecord *)(ulonglong)uVar21;
      EVar19 = (0 < (int)((this->NetTokensPendingExport).AfterBack -
                         (this->NetTokensPendingExport).Front)) + Ok;
    }
    UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_428);
    if (local_430 == 0xffffffff) {
      return EVar19;
    }
    uVar20 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar20 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar33,local_430,uVar20);
    return EVar19;
  }
  if ((this->NetTokenExports).AfterBack == (this->NetTokenExports).Front) {
    uVar20 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                       (&this->NetTokenExports,0);
    TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
              (&this->NetTokenExports,uVar20);
    uVar20 = TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::NormalizeCapacity
                       (&this->NetTokensPendingExport,
                        (this->NetTokensPendingExport).AfterBack -
                        (this->NetTokensPendingExport).Front);
    TRingBuffer<UE::Net::FNetToken,TSizedDefaultAllocator<32>_>::Reallocate
              (&this->NetTokensPendingExport,uVar20);
  }
  return NoData;
}

