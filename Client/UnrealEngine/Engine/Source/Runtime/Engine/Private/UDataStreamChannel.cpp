// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// StaticClass @ 148007330

UClass * __cdecl UDataStreamChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataStreamChannel",
               &Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton,
               StaticRegisterNativesUDataStreamChannel,0x2098,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataStreamChannel>,
               InternalVTableHelperCtorCaller<UDataStreamChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton;
}

// UDataStreamChannel @ 148015760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDataStreamChannel * __thiscall
UDataStreamChannel::UDataStreamChannel(UDataStreamChannel *this,FObjectInitializer *param_1)

{
  TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
  *this_00;
  undefined1 *puVar1;
  FName *pFVar2;
  FName local_res8 [4];
  
  UChannel::UChannel((UChannel *)this,param_1);
  this_00 = &this->WriteRecords;
  this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
  (this->DataStreamManager).field0_0x0.DebugPtr = (UDataStreamManager *)0x0;
  this_00->Head = 0;
  this_00->Tail = 0;
  (this->WriteRecords).IndexMask = 0;
  (this->WriteRecords).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteRecords).Storage.ArrayNum = 0;
  (this->WriteRecords).Storage.ArrayMax = 0;
  TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
  ::SetCapacity(this_00,0x100);
  this->bIsReadyToHandshake = 0;
  this->bHandshakeComplete = 0;
  this->bHandshakeSent = 0;
  pFVar2 = ::FName::FName(local_res8,"DataStream");
  this->_padding_ = (longlong)*pFVar2;
  return this;
}

// UDataStreamChannel @ 1480157d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDataStreamChannel * __thiscall
UDataStreamChannel::UDataStreamChannel(UDataStreamChannel *this,FVTableHelper *param_1)

{
  UChannel::UChannel((UChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
  (this->DataStreamManager).field0_0x0.DebugPtr = (UDataStreamManager *)0x0;
  (this->WriteRecords).Head = 0;
  (this->WriteRecords).Tail = 0;
  (this->WriteRecords).IndexMask = 0;
  (this->WriteRecords).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WriteRecords).Storage.ArrayNum = 0;
  (this->WriteRecords).Storage.ArrayMax = 0;
  return this;
}

// ~UDataStreamChannel @ 1480184a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::~UDataStreamChannel(UDataStreamChannel *this)

{
  this->_padding_ = (longlong)&___7UDataStreamChannel__6B_;
  TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
  ::
  ~TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
            (&this->WriteRecords);
  UChannel::~UChannel((UChannel *)this);
  return;
}

// operator() @ 14801b1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EWriteResult __thiscall `UDataStreamChannel::WriteData'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  FNetTraceCollector *pFVar2;
  FScriptContainerElement *_Src;
  UNetConnection *pUVar3;
  code *pcVar4;
  bool bVar5;
  EWriteResult EVar6;
  EWriteResult EVar7;
  longlong lVar8;
  FText *this_00;
  FString *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  bool bVar12;
  undefined1 auStackY_5d8 [32];
  FString local_598;
  FScriptContainerElement *local_588;
  undefined1 local_580 [20];
  int local_56c;
  int local_568;
  FText local_558;
  FNetResult local_548;
  FNetResult local_518;
  FOutBunch local_4e8;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_380 [95];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  FNetTraceCollector *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  if (**(char **)((longlong)this + 8) != '\0') {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId302,"UDataStreamChannel_PreSendBunchAndFlushNet",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                 ,0x12e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId302);
    }
    (**(code **)(**(longlong **)(*(longlong *)this + 0x28) + 0x308))();
    **(undefined1 **)((longlong)this + 8) = 0;
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  EVar7 = NoData;
  if (((*(UNetConnection **)(*(longlong *)this + 0x28))->SendBuffer).Num == 0) {
    UNetConnection::WriteBitsToSendBuffer
              (*(UNetConnection **)(*(longlong *)this + 0x28),(uchar *)0x0,0,(uchar *)0x0,0,Unknown)
    ;
  }
  UE::Net::FNetBitStreamWriter::FNetBitStreamWriter((FNetBitStreamWriter *)(local_580 + 8));
  UE::Net::FNetBitStreamWriter::InitBytes
            ((FNetBitStreamWriter *)(local_580 + 8),(void *)(*(longlong *)this + 0x90),
             *(uint *)((longlong)this + 0x20));
  lVar8 = 0x20;
  local_398 = 0;
  puVar10 = local_380;
  local_390 = 0;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  local_38 = local_38 & 0xfffffffc;
  local_78 = local_580 + 8;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = *(undefined4 *)(*(longlong *)(*(longlong *)this + 0x28) + 0x1454);
  pFVar2 = *(FNetTraceCollector **)(*(longlong *)(*(longlong *)this + 0x28) + 0x1ec8);
  local_70 = pFVar2;
  if (pFVar2 != (FNetTraceCollector *)0x0) {
    FNetTrace::BeginBunch(pFVar2);
  }
  local_588 = (FScriptContainerElement *)0x0;
  EVar6 = (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x2d0))
                    (*(longlong **)(*(longlong *)this + 0x68),&local_398,&local_588);
  if ((EVar6 == NoData) || (local_390 != 0)) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId331,"UDataStreamChannel_NoDataSent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                 ,0x14b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
    }
    if (pFVar2 != (FNetTraceCollector *)0x0) {
      FNetTrace::DiscardBunch(pFVar2);
    }
    if (local_390 != 0) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_558,L"NetworkErrors",L"DataStreamChannelWriteData",
                           L"DataStreamChannel failed to write data.");
      pFVar9 = FText::ToString(this_00);
      local_598.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_598.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      lVar8 = (longlong)local_598.Data.ArrayNum;
      _Src = (pFVar9->Data).AllocatorInstance.Data;
      if (local_598.Data.ArrayNum == 0) {
        local_598.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_598.Data.ArrayNum,0,(ForAnyElementType *)&local_598,
                   local_598.Data.ArrayNum,&local_598.Data.ArrayMax);
        memcpy(local_598.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
      }
      if (local_558.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_558.TextData.Reference + 0x10))();
      }
      pUVar3 = *(UNetConnection **)(*(longlong *)this + 0x28);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_548,HostClosedConnection);
      UNetConnection::SendCloseReason(pUVar3,&local_548);
      if (local_548.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_548.NextResult + -0x10))
                  ((longlong)local_548.NextResult + -0x10);
      }
      if (local_548.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.ErrorContext.Data.AllocatorInstance.Data);
      }
      UE::Net::TNetControlMessageImpl<6,FString>::Send
                (*(UNetConnection **)(*(longlong *)this + 0x28),&local_598);
      (**(code **)(**(longlong **)(*(longlong *)this + 0x28) + 0x308))
                (*(longlong **)(*(longlong *)this + 0x28),1);
      pUVar3 = *(UNetConnection **)(*(longlong *)this + 0x28);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_518,HostClosedConnection);
      UNetConnection::Close(pUVar3,&local_518);
      if (local_518.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_518.NextResult + -0x10))
                  ((longlong)local_518.NextResult + -0x10);
      }
      if (local_518.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.ErrorContext.Data.AllocatorInstance.Data);
      }
      if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UE::Net::FNetBitStreamWriter::CommitWrites((FNetBitStreamWriter *)(local_580 + 8));
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId350,"UDataStreamChannel_SendBunchAndFlushNet",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                 ,0x15e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId350);
    }
    FOutBunch::FOutBunch(&local_4e8,*(long64 *)((longlong)this + 0x18));
    local_4e8.Channel = *(UChannel **)this;
    local_4e8.ChName = (local_4e8.Channel)->ChName;
    local_4e8.ChIndex = (local_4e8.Channel)->ChIndex;
    local_4e8.Next = (FOutBunch *)0x0;
    local_4e8.bReliable = (byte)~((local_4e8.Channel)->field_0x30 << 4) >> 4;
    local_4e8._padding_ = (longlong)pFVar2;
    FBitWriter::SerializeBits
              ((FBitWriter *)&local_4e8,&local_4e8.Channel[1].Connection,
               (ulonglong)(uint)(local_568 - local_56c));
    UChannel::SendBunch(*(UChannel **)this,(FOutBunch *)local_580,SUB81(&local_4e8,0));
    local_4e8._padding_ = 0;
    if (local_580._0_4_ == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PacketIds.First != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                         ,0x177,L"");
      EVar7 = NoData;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        EVar7 = (*pcVar4)();
        return EVar7;
      }
    }
    else {
      lVar8 = *(longlong *)this;
      local_598.Data.AllocatorInstance.Data = local_588;
      uVar11 = (ulonglong)(uint)(*(int *)(lVar8 + 0x70) - *(int *)(lVar8 + 0x74)) + 1;
      local_598.Data.ArrayNum = local_580._0_4_;
      if ((ulonglong)(longlong)*(int *)(lVar8 + 0x88) < uVar11) {
        TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
        ::SetCapacity((TResizableCircularQueue<UDataStreamChannel::FDataStreamChannelRecord,TSizedDefaultAllocator<32>_>
                       *)(lVar8 + 0x70),uVar11);
      }
      uVar1 = *(uint *)(lVar8 + 0x70);
      *(uint *)(lVar8 + 0x70) = uVar1 + 1;
      puVar10 = (undefined8 *)
                (*(longlong *)(lVar8 + 0x80) + (ulonglong)(*(uint *)(lVar8 + 0x78) & uVar1) * 0x10);
      *puVar10 = local_598.Data.AllocatorInstance.Data;
      puVar10[1] = CONCAT44(local_598.Data.ArrayMax,local_598.Data.ArrayNum);
      **(undefined1 **)((longlong)this + 8) = 1;
      EVar7 = EVar6;
    }
    FOutBunch::~FOutBunch(&local_4e8);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter((FNetBitStreamWriter *)(local_580 + 8));
  return EVar7;
}

// AddReferencedObjects @ 1480200d0

void __cdecl UDataStreamChannel::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDataStreamChannel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(longlong *)&param_1[2].field_0x18 != 0) {
      (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[2].field_0x18,0,0);
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UDataStreamChannel>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AppendExportBunches @ 1480220f0

void __thiscall
UDataStreamChannel::AppendExportBunches
          (UDataStreamChannel *this,TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// AppendMustBeMappedGuids @ 148022100

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDataStreamChannel::AppendMustBeMappedGuids(UDataStreamChannel *this,FOutBunch *param_1)

{
  return;
}

// CanStopTicking @ 1480231d0

bool __thiscall UDataStreamChannel::CanStopTicking(UDataStreamChannel *this)

{
  return false;
}

// CleanUp @ 1480234b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDataStreamChannel::CleanUp(UDataStreamChannel *this,bool param_1,EChannelCloseReason param_2)

{
  uint uVar1;
  UDataStreamManager *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pUVar2 = (this->DataStreamManager).field0_0x0.DebugPtr;
  if ((pUVar2 != (UDataStreamManager *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
    (**(code **)(((this->DataStreamManager).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
    UObjectBaseUtility::MarkAsGarbage
              ((UObjectBaseUtility *)(this->DataStreamManager).field0_0x0.DebugPtr);
    (this->DataStreamManager).field0_0x0.DebugPtr = (UDataStreamManager *)0x0;
  }
  uVar1 = (this->WriteRecords).Tail;
  if (0xffffffff < (ulonglong)((this->WriteRecords).Head - uVar1) + (ulonglong)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SIZE_T(Tail) + Count <= TNumericLimits<IndexT>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0x107,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  (this->WriteRecords).Head = 0;
  (this->WriteRecords).Tail = 0;
  bVar4 = UChannel::CleanUp((UChannel *)this,param_1,param_2);
  return bVar4;
}

// Describe @ 14802a5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UDataStreamChannel::Describe(UDataStreamChannel *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar1 = UChannel::Describe((UChannel *)this,&local_18);
  pFVar2 = ::FString::FString(&local_28,L"DataStream: ");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAdditionalRequiredBunches @ 148035140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> * __thiscall
UDataStreamChannel::GetAdditionalRequiredBunches
          (UDataStreamChannel *this,
          TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FOutBunch *param_1
          ,EChannelGetAdditionalRequiredBunchesFlags param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1480368a0

UClass * __cdecl UDataStreamChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataStreamChannel",
               &Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton,
               StaticRegisterNativesUDataStreamChannel,0x2098,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataStreamChannel>,
               InternalVTableHelperCtorCaller<UDataStreamChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataStreamChannel.InnerSingleton;
}

// HasAcknowledgedAllReliableData @ 14803cd40

bool __thiscall UDataStreamChannel::HasAcknowledgedAllReliableData(UDataStreamChannel *this)

{
  UDataStreamManager *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->DataStreamManager).field0_0x0.DebugPtr;
  if (pUVar1 != (UDataStreamManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014803cd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))();
    return (bool)uVar2;
  }
  return true;
}

// Init @ 14803d0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDataStreamChannel::Init
          (UDataStreamChannel *this,UNetConnection *param_1,int param_2,EChannelCreateFlags param_3)

{
  UChannel::Init((UChannel *)this,param_1,param_2,param_3);
  InitDataStreamManager(this);
  return;
}

// InitDataStreamManager @ 14803e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDataStreamChannel::InitDataStreamManager(UDataStreamChannel *this)

{
  UReplicationSystem *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDataStreamManager *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(UReplicationSystem **)(*(longlong *)(this->_padding_ + 0x58) + 0x9b0);
  if (this_00 == (UReplicationSystem *)0x0) {
    this->bIsReadyToHandshake = 0;
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDataStreamManager_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = pUVar3;
    pUVar5 = (UDataStreamManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDataStreamManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DataStreamManager).field0_0x0.DebugPtr = pUVar5;
    UReplicationSystem::InitDataStreamManager(this_00,*(uint *)(this->_padding_ + 0x1eb4),pUVar5);
    this->bIsReadyToHandshake = 1;
  }
  return;
}

// IsPacketWindowFull @ 148041ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDataStreamChannel::IsPacketWindowFull(UDataStreamChannel *this)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = UE::Net::Private::IrisPacketSequenceSafetyMargin;
  if (UE::Net::Private::IrisPacketSequenceSafetyMargin < 0) {
    uVar2 = 0;
  }
  bVar1 = UNetConnection::IsPacketSequenceWindowFull((UNetConnection *)this->_padding_,uVar2);
  if (bVar1) {
    if (5 < (byte)LogIris._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    return true;
  }
  return (ulonglong)(longlong)(this->WriteRecords).Storage.ArrayNum <=
         (ulonglong)((this->WriteRecords).Head - (this->WriteRecords).Tail);
}

// PostTickDispatch @ 14804a060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::PostTickDispatch(UDataStreamChannel *this)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  if ((((((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr)->bIsUsingIris != false)
     && (this->bHandshakeComplete != 0)) {
    uVar3 = UE::Net::Private::IrisPacketSequenceSafetyMargin;
    if (UE::Net::Private::IrisPacketSequenceSafetyMargin < 0) {
      uVar3 = 0;
    }
    bVar2 = UNetConnection::IsPacketSequenceWindowFull((UNetConnection *)this->_padding_,uVar3);
    if (bVar2) {
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return;
      }
    }
    else if (((((ulonglong)((this->WriteRecords).Head - (this->WriteRecords).Tail) <
                (ulonglong)(longlong)(this->WriteRecords).Storage.ArrayNum) &&
              (bVar2 = UNetConnection::HasReceivedClientPacket((UNetConnection *)this->_padding_),
              bVar2)) &&
             ((lVar1 = *(longlong *)(this->_padding_ + 0x198), lVar1 == 0 ||
              (*(char *)(lVar1 + 1) == '\x02')))) &&
            (bVar2 = UChannel::IsNetReady((UChannel *)this), bVar2)) {
      if (__CsvProfilerStat207 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("UDataStreamChannel_PostTickDispatch_Write");
        __CsvProfilerStat207 = true;
      }
      FCsvProfiler::BeginExclusiveStat
                ("UDataStreamChannel_PostTickDispatch_Write",
                 "CSV_UDataStreamChannel_PostTickDispatch_Write");
      bVar2 = -1 < CpuChannel->Enabled;
      if (bVar2) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId210,"UDataStreamChannel_PostTickDispatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                   ,0xd2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId210);
      }
      FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
      local_res10 = LLMTagDeclaration_Iris.UniqueName;
      FMemScope::FMemScope(&local_res18,&local_res10,true);
      WriteData(this,PostTickDispatch);
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res8);
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FCsvProfiler::EndExclusiveStat("UDataStreamChannel_PostTickDispatch_Write");
    }
  }
  return;
}

// ReInit @ 14804ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDataStreamChannel::ReInit(UDataStreamChannel *this)

{
  UReplicationSystem *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDataStreamManager *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = *(UReplicationSystem **)(*(longlong *)(this->_padding_ + 0x58) + 0x9b0);
  if (this_00 == (UReplicationSystem *)0x0) {
    this->bIsReadyToHandshake = 0;
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDataStreamManager_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
    auStack_98._8_8_ = pUVar3;
    pUVar5 = (UDataStreamManager *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDataStreamManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->DataStreamManager).field0_0x0.DebugPtr = pUVar5;
    UReplicationSystem::InitDataStreamManager(this_00,*(uint *)(this->_padding_ + 0x1eb4),pUVar5);
    this->bIsReadyToHandshake = 1;
  }
  return;
}

// ReceivedAck @ 14804d040

void __thiscall UDataStreamChannel::ReceivedAck(UDataStreamChannel *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  UDataStreamManager *pUVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  int local_res10 [6];
  int *local_28;
  FScriptContainerElement *local_20;
  UDataStreamChannel *local_18;
  
  uVar1 = *(undefined4 *)&this->field_0x2090;
  if (ZPULL(uVar1,2,1) == 0) {
    if (this->bHandshakeSent != 0) {
      *(uint *)&this->field_0x2090 = uVar1 | 4;
      return;
    }
  }
  else {
    local_res10[0] = param_1;
    if (((this->WriteRecords).Head == (this->WriteRecords).Tail) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset < Count()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                           ,0x4c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar6 = (this->WriteRecords).Storage.AllocatorInstance.Data +
             (ulonglong)((this->WriteRecords).IndexMask & (this->WriteRecords).Tail) * 0x10;
    if (local_res10[0] != *(int *)(pFVar6 + 8)) {
      local_28 = local_res10;
      local_20 = pFVar6;
      local_18 = this;
      bVar5 = `UDataStreamChannel::ReceivedAck'::__l9::<lambda_1>::operator()(&local_28);
      if (!bVar5) {
        return;
      }
    }
    pUVar3 = (this->DataStreamManager).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x2e8))(pUVar3,0,*(undefined8 *)pFVar6);
    uVar2 = (this->WriteRecords).Tail;
    if ((this->WriteRecords).Head == uVar2) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1638566698149740322>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0xde,"Count() > 0");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      (this->WriteRecords).Tail = uVar2 + 1;
    }
  }
  return;
}

// ReceivedBunch @ 14804d150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::ReceivedBunch(UDataStreamChannel *this,FInBunch *param_1)

{
  int iVar1;
  UDataStreamManager *pUVar2;
  UReplicationSystem *this_00;
  bool bVar3;
  ForAnyElementType _Src;
  FNetRefHandle_u_0 FVar4;
  bool bVar5;
  longlong lVar6;
  FConnectionHandle FVar7;
  wchar_t *pwVar8;
  FString *pFVar9;
  UObjectReplicationBridge *pUVar10;
  UClass *pUVar11;
  UNetConnection *pUVar12;
  undefined8 *puVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStackY_498 [32];
  FString local_458;
  ENetRefHandleError local_448 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_440;
  FNetResult local_430;
  FNetBitStreamReader local_400;
  FString local_3e0;
  FString local_3d0;
  FNetRefHandle_u_0 local_3b8;
  longlong local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  FNetBitStreamReader *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_448[0] = None;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId109,"UDataStreamChannel_ReceivedBunch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
               ,0x6d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId109);
  }
  if (param_1->_padding_ == 0) goto LAB_14804d5f8;
  if (param_1->bPartial != '\0') {
    param_1->_padding_ = param_1->_padding_;
    FArchiveState::SetError((FArchiveState *)param_1);
    goto LAB_14804d5f8;
  }
  UE::Net::FNetBitStreamReader::FNetBitStreamReader(&local_400);
  UE::Net::FNetBitStreamReader::InitBits
            (&local_400,(void *)param_1->_padding_,(uint)param_1->_padding_);
  UE::Net::FNetBitStreamReader::Seek(&local_400,(uint)param_1->_padding_);
  lVar6 = 0x20;
  local_3b8.Value = 0;
  puVar13 = local_3a0;
  local_3b0 = 0;
  do {
    *puVar13 = 0;
    puVar13 = puVar13 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_a0 = &local_400;
  local_58 = local_58 & 0xfffffffc;
  local_98 = 0;
  local_a8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = *(undefined4 *)(this->_padding_ + 0x1450);
  uStack_90 = *(undefined8 *)(this->_padding_ + 0x1ec0);
  pUVar2 = (this->DataStreamManager).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&local_3b8);
  param_1->_padding_ = param_1->_padding_;
  if ((local_3b0 != 0) ||
     (bVar5 = UE::Net::FNetSerializationContext::IsBitStreamOverflown
                        ((FNetSerializationContext *)&local_3b8._s_0), bVar5)) {
    if (local_3b8.Value != 0) {
      UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_3b8._s_0,&local_3d0);
      ::FString::PrintfImpl((FString *)&local_440,L"IrisNetRefHandleError=%s");
      FVar7 = (FConnectionHandle)StaticEnum<enum_ENetCloseResult>();
      local_430.Result = 0x6e;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FConnectionHandle)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)FVar7);
      }
      local_430.ResultEnumObj.WeakPtr.ObjectIndex = 0;
      local_430.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
      local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7 != (FConnectionHandle)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)FVar7);
      }
      FWeakObjectPtr::operator=(&local_430.ResultEnumObj.WeakPtr,(FObjectPtr)&local_458);
      _Src.Data = local_440.AllocatorInstance.Data;
      lVar6 = (longlong)local_440.ArrayNum;
      local_430.RawResultEnumObj = (void *)FVar7;
      local_430.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_430.ErrorContext.Data.ArrayNum = 0;
      local_430.ErrorContext.Data.ArrayMax = 0;
      local_430.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      if (local_440.ArrayNum < 2) {
        bVar3 = true;
        bVar5 = false;
        pwVar8 = ::LexToString(IrisNetRefHandleError);
        pFVar9 = ::FString::FString(&local_3e0,pwVar8);
      }
      else {
        bVar3 = false;
        bVar5 = true;
        local_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.Data.ArrayNum = local_440.ArrayNum;
        if (local_440.ArrayNum == 0) {
          local_458.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_440.ArrayNum,0,(ForAnyElementType *)&local_458,local_440.ArrayNum,
                     &local_458.Data.ArrayMax);
          memcpy(local_458.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
        }
        pFVar9 = &local_458;
      }
      iVar1 = (pFVar9->Data).ArrayNum;
      iVar14 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar14 = 0;
      }
      ::FString::AssignRange
                (&local_430.ErrorContext,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar14);
      if ((bVar5) &&
         ((FConnectionHandle)local_458.Data.AllocatorInstance.Data != (FConnectionHandle)0x0)) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      if ((bVar3) && (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
      }
      if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.AllocatorInstance.Data);
      }
      if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      UE::Net::AddToChainResultPtr
                ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,&local_430);
      if (((this->_padding_ != 0) && (lVar6 = *(longlong *)(this->_padding_ + 0x58), lVar6 != 0)) &&
         (this_00 = *(UReplicationSystem **)(lVar6 + 0x9b0), this_00 != (UReplicationSystem *)0x0))
      {
        pUVar10 = UReplicationSystem::GetReplicationBridge(this_00);
        if (pUVar10 == (UObjectReplicationBridge *)0x0) {
LAB_14804d503:
          pUVar10 = (UObjectReplicationBridge *)0x0;
        }
        else {
          pUVar11 = UEngineReplicationBridge::StaticClass();
          iVar1 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar11->_padding_)) goto LAB_14804d503;
        }
        FVar4 = local_3b8;
        if (pUVar10 != (UObjectReplicationBridge *)0x0) {
          local_448[0] = BitstreamCorrupted;
          if ((UNetDriver *)pUVar10[1]._padding_ != (UNetDriver *)0x0) {
            local_458.Data.AllocatorInstance.Data._4_4_ = 0;
            local_458.Data.AllocatorInstance.Data._0_4_ = *(uint *)(this->_padding_ + 0x1eb4);
            pUVar12 = UNetDriver::GetConnectionByHandle
                                ((UNetDriver *)pUVar10[1]._padding_,
                                 (FConnectionHandle)local_458.Data.AllocatorInstance.Data);
            if (pUVar12 == (UNetConnection *)0x0) {
              if (1 < (byte)LogIris._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              }
            }
            else {
              local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_458.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)(FVar4.Value & 0x3fffffffffffff);
              local_440.ArrayNum = 0;
              local_440.ArrayMax = 0;
              UE::Net::
              TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
              ::Send(pUVar12,local_448,(ulong64 *)&local_458,&local_440);
              if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_440.AllocatorInstance.Data);
              }
            }
          }
        }
      }
      if (local_430.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_430.NextResult + -0x10))
                  ((longlong)local_430.NextResult + -0x10);
      }
      if (local_430.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.ErrorContext.Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  UE::Net::FNetBitStreamReader::~FNetBitStreamReader(&local_400);
LAB_14804d5f8:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReceivedNak @ 14804d640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::ReceivedNak(UDataStreamChannel *this,int param_1)

{
  uint uVar1;
  UDataStreamManager *pUVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int local_res10 [6];
  int *local_28;
  FScriptContainerElement *local_20;
  UDataStreamChannel *local_18;
  
  local_res10[0] = param_1;
  if (this->bHandshakeComplete == 0) {
    UChannel::ReceivedNak((UChannel *)this,param_1);
    return;
  }
  if (((this->WriteRecords).Head == (this->WriteRecords).Tail) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset < Count()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                         ,0x4c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->WriteRecords).Storage.AllocatorInstance.Data +
           (ulonglong)((this->WriteRecords).IndexMask & (this->WriteRecords).Tail) * 0x10;
  if (local_res10[0] != *(int *)(pFVar5 + 8)) {
    local_28 = local_res10;
    local_20 = pFVar5;
    local_18 = this;
    bVar4 = `UDataStreamChannel::ReceivedNak'::__l6::<lambda_1>::operator()(&local_28);
    if (!bVar4) {
      return;
    }
  }
  pUVar2 = (this->DataStreamManager).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,1,*(undefined8 *)pFVar5);
  uVar1 = (this->WriteRecords).Tail;
  if ((this->WriteRecords).Head == uVar1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1638566698149740322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                       ,0xde,"Count() > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    (this->WriteRecords).Tail = uVar1 + 1;
  }
  return;
}

// SendOpenBunch @ 148056ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::SendOpenBunch(UDataStreamChannel *this)

{
  undefined1 auStack_198 [32];
  undefined1 local_178 [224];
  double local_98;
  UDataStreamChannel *local_90;
  int local_80;
  longlong local_7c;
  byte local_6c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((this->bHandshakeSent == 0) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
    FOutBunch::FOutBunch((FOutBunch *)(local_178 + 0x10),8);
    local_7c = this->_padding_;
    local_6c = local_6c | 0x10;
    local_80 = *(int *)((longlong)&this->_padding_ + 4);
    local_98 = 0.0;
    local_90 = this;
    UChannel::SendBunch((UChannel *)this,(FOutBunch *)local_178,(bool)((char)local_178 + '\x10'));
    if (local_178._0_4_ != -1) {
      this->bHandshakeSent = 1;
    }
    FOutBunch::~FOutBunch((FOutBunch *)(local_178 + 0x10));
  }
  return;
}

// StaticRegisterNativesUDataStreamChannel @ 148065360

void __cdecl UDataStreamChannel::StaticRegisterNativesUDataStreamChannel(void)

{
  return;
}

// Tick @ 148066030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::Tick(UDataStreamChannel *this)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStackY_1b8 [32];
  FLLMScope local_188 [2];
  undefined1 local_180 [232];
  undefined8 local_98;
  UDataStreamChannel *local_90;
  undefined4 local_80;
  longlong local_7c;
  byte local_6c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((((((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr)->bIsUsingIris != false)
     && (this->bIsReadyToHandshake != 0)) {
    uVar3 = UE::Net::Private::IrisPacketSequenceSafetyMargin;
    if (UE::Net::Private::IrisPacketSequenceSafetyMargin < 0) {
      uVar3 = 0;
    }
    bVar2 = UNetConnection::IsPacketSequenceWindowFull((UNetConnection *)this->_padding_,uVar3);
    if (bVar2) {
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
    }
    else if (((((ulonglong)((this->WriteRecords).Head - (this->WriteRecords).Tail) <
                (ulonglong)(longlong)(this->WriteRecords).Storage.ArrayNum) &&
              (bVar2 = UNetConnection::HasReceivedClientPacket((UNetConnection *)this->_padding_),
              bVar2)) &&
             ((lVar1 = *(longlong *)(this->_padding_ + 0x198), lVar1 == 0 ||
              (*(char *)(lVar1 + 1) == '\x02')))) &&
            (bVar2 = UChannel::IsNetReady((UChannel *)this), bVar2)) {
      if (this->bHandshakeComplete == 0) {
        if ((this->bHandshakeSent == 0) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
          FOutBunch::FOutBunch((FOutBunch *)(local_180 + 0x18),8);
          local_7c = this->_padding_;
          local_6c = local_6c | 0x10;
          local_80 = *(undefined4 *)((longlong)&this->_padding_ + 4);
          local_98._0_4_ = 0;
          local_98._4_4_ = 0;
          local_90 = this;
          UChannel::SendBunch((UChannel *)this,(FOutBunch *)local_180,
                              (bool)((char)local_180 + '\x18'));
          if (local_180._0_4_ != 0xffffffff) {
            this->bHandshakeSent = 1;
          }
          FOutBunch::~FOutBunch((FOutBunch *)(local_180 + 0x18));
        }
      }
      else {
        if (__CsvProfilerStat245 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("UDataStreamChannel_Tick_Write");
          __CsvProfilerStat245 = true;
        }
        FCsvProfiler::BeginExclusiveStat
                  ("UDataStreamChannel_Tick_Write","CSV_UDataStreamChannel_Tick_Write");
        bVar2 = -1 < CpuChannel->Enabled;
        if (bVar2) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId248,"UDataStreamChannel_Tick",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                     ,0xf8);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
        }
        FLLMScope::FLLMScope(local_188,LLMTagDeclaration_Iris.UniqueName,false,None,Default,true);
        local_180._0_4_ = LLMTagDeclaration_Iris.UniqueName.ComparisonIndex.Value;
        local_180._4_4_ = LLMTagDeclaration_Iris.UniqueName.Number;
        FMemScope::FMemScope((FMemScope *)(local_180 + 8),(FName *)local_180,true);
        WriteData(this,Full);
        FMemScope::~FMemScope((FMemScope *)(local_180 + 8));
        FLLMScope::~FLLMScope(local_188);
        if (bVar2) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FCsvProfiler::EndExclusiveStat("UDataStreamChannel_Tick_Write");
      }
    }
  }
  return;
}

// WriteData @ 148071c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDataStreamChannel::WriteData(UDataStreamChannel *this,EDataStreamWriteMode param_1)

{
  UDataStreamManager *pUVar1;
  bool bVar2;
  uint uVar3;
  EWriteResult EVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  EDataStreamWriteMode local_res8;
  int local_resc;
  char local_res10 [8];
  UDataStreamChannel *local_48;
  char *local_40;
  EDataStreamWriteMode *local_38;
  ulonglong local_30;
  uint local_28;
  
  lVar5 = this->_padding_;
  uVar3 = ((*(int *)(lVar5 + 0xa0) * 8 - *(int *)(lVar5 + 0x188)) - 0x235U >> 5) << 2;
  local_resc = 1;
  uVar7 = 0x2000;
  if (uVar3 < 0x2000) {
    uVar7 = uVar3;
  }
  local_res8 = param_1;
  if (param_1 == Full) {
    iVar6 = *(int *)(lVar5 + 0x738) + *(int *)(lVar5 + 600);
    if (iVar6 < 0) {
      lVar5 = (longlong)-iVar6 / (longlong)(ulonglong)(uVar7 * 8);
      iVar6 = UE::Net::Private::GReplicationWriterMaxAllowedPacketsIfNotHugeObject;
      if (lVar5 < UE::Net::Private::GReplicationWriterMaxAllowedPacketsIfNotHugeObject) {
        iVar6 = (int)lVar5;
      }
      local_resc = 1;
      if (1 < iVar6) {
        local_resc = iVar6;
      }
    }
    bVar2 = NetConnectionHelper::HasDisabledBandwidthThrottling();
    if (bVar2) {
      local_resc = 0;
    }
  }
  pUVar1 = (this->DataStreamManager).field0_0x0.DebugPtr;
  local_40 = local_res10;
  local_38 = &local_res8;
  local_res10[0] = 0x134 < *(longlong *)(this->_padding_ + 0x738);
  local_48 = this;
  local_30 = (ulonglong)(uVar7 * 8);
  local_28 = uVar7;
  iVar6 = (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,&local_res8);
  if (iVar6 != 0) {
    do {
      EVar4 = `UDataStreamChannel::WriteData'::__l2::<lambda_1>::operator()(&local_48);
      if ((EVar4 != HasMoreData) || (bVar2 = UChannel::IsNetReady((UChannel *)this), !bVar2)) break;
      uVar7 = UE::Net::Private::IrisPacketSequenceSafetyMargin;
      if (UE::Net::Private::IrisPacketSequenceSafetyMargin < 0) {
        uVar7 = 0;
      }
      bVar2 = UNetConnection::IsPacketSequenceWindowFull((UNetConnection *)this->_padding_,uVar7);
      if (bVar2) {
        if (5 < (byte)LogIris._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        }
        break;
      }
    } while ((ulonglong)((this->WriteRecords).Head - (this->WriteRecords).Tail) <
             (ulonglong)(longlong)(this->WriteRecords).Storage.ArrayNum);
    (**(code **)(((this->DataStreamManager).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
    if ((param_1 == PostTickDispatch) && (local_res10[0] != '\0')) {
      if (CpuChannel->Enabled < 0) {
        (**(code **)(*(longlong *)this->_padding_ + 0x308))((longlong *)this->_padding_,0);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId421,"UDataStreamChannel_FlushNet",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Experimental\\Iris\\DataStreamChannel.cpp"
                   ,0x1a5);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId421);
        (**(code **)(*(longlong *)this->_padding_ + 0x308))((longlong *)this->_padding_,0);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// operator() @ 150521150

bool __thiscall `UDataStreamChannel::ReceivedNak'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7554738046487232982>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7554738046487232982>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150521350

bool __thiscall `UDataStreamChannel::ReceivedAck'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7554738046487232962>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7554738046487232962>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

