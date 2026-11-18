// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// IsReplicationPaused @ 147260cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::IsReplicationPaused(UChannel *this)

{
  return this->bIsReplicationPaused;
}

// ReInit @ 147260cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReInit(UChannel *this)

{
  return;
}

// SetReplicationPaused @ 147260d50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::SetReplicationPaused(UChannel *this,bool param_1)

{
  this->bIsReplicationPaused = 0;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | (uint)param_1 << 3;
  return;
}

// StaticClass @ 147260d90

UClass * __cdecl UChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UChannel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Channel",&Z_Registration_Info_UClass_UChannel.InnerSingleton,
               StaticRegisterNativesUChannel,0x68,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UChannel>,
               InternalVTableHelperCtorCaller<UChannel>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChannel.InnerSingleton;
}

// UChannel @ 14726cb10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChannel * __thiscall UChannel::UChannel(UChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChannel__6B_;
  (this->Connection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  (this->ChName).ComparisonIndex = 0;
  (this->ChName).Number = 0;
  (this->OpenPacketId).First = -1;
  (this->OpenPacketId).Last = -1;
  return this;
}

// UChannel @ 14726cb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChannel * __thiscall UChannel::UChannel(UChannel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UChannel__6B_;
  (this->Connection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  (this->ChName).ComparisonIndex = 0;
  (this->ChName).Number = 0;
  (this->OpenPacketId).First = -1;
  (this->OpenPacketId).Last = -1;
  return this;
}

// ~UChannel @ 14726d330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::~UChannel(UChannel *this)

{
  this->_padding_ = (longlong)&___7UChannel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BecomeDormant @ 14726e900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::BecomeDormant(UChannel *this)

{
  return;
}

// CanStopTicking @ 14726e950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::CanStopTicking(UChannel *this)

{
  return (bool)(~this->bPendingDormancy & 1);
}

// GetPrivateStaticClass @ 14726f210

UClass * __cdecl UChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Channel",&Z_Registration_Info_UClass_UChannel.InnerSingleton,
               StaticRegisterNativesUChannel,0x68,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UChannel>,
               InternalVTableHelperCtorCaller<UChannel>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChannel.InnerSingleton;
}

// ReadyForDormancy @ 1472705a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::ReadyForDormancy(UChannel *this,bool param_1)

{
  return false;
}

// ReceivedBunch @ 147270690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReceivedBunch(UChannel *this,FInBunch *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Channel.h"
             ,0x75,L"Pure virtual not implemented (%s)");
  return;
}

// Serialize @ 147270740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::Serialize(UChannel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StartBecomingDormant @ 1472708c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::StartBecomingDormant(UChannel *this)

{
  return;
}

// StaticRegisterNativesUChannel @ 1472709d0

void __cdecl UChannel::StaticRegisterNativesUChannel(void)

{
  return;
}

// AddedToChannelPool @ 147a31c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::AddedToChannelPool(UChannel *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->Connection).field0_0x0.DebugPtr != (UNetConnection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Connection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x69c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->InRec != (FInBunch *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x69d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->OutRec != (FOutBunch *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OutRec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x69e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->InPartialBunch != (FInBunch *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InPartialBunch",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x69f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->ChIndex = 0;
  puVar2 = &this->field_0x30;
  this->OpenAcked = 0;
  this->bOpenedForCheckpoint = 0;
  this->OpenedLocally = 0;
  this->bPooled = 1;
  this->SentClosingBunch = 0;
  this->bPausedUntilReliableACK = 0;
  this->bIsInDormancyHysteresis = 0;
  this->bPendingDormancy = 0;
  this->bTornOff = 0;
  this->Broken = 0;
  this->OpenTemporary = 0;
  this->bIsReplicationPaused = 0;
  this->Dormant = 0;
  this->Closing = 0;
  (this->OpenPacketId).First = -1;
  (this->OpenPacketId).Last = -1;
  this->NumInRec = 0;
  this->NumOutRec = 0;
  return;
}

// AppendExportBunches @ 147a31f80

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
UChannel::AppendExportBunches
          (UChannel *this,TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UPackageMapClient *this_00;
  
  this_00 = CastChecked<UPackageMapClient,UPackageMap>
                      (&((this->Connection).field0_0x0.DebugPtr)->PackageMap,NullChecked);
  UPackageMapClient::AppendExportBunches(this_00,param_1);
  return;
}

// AppendMustBeMappedGuids @ 147a32070

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
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UChannel::AppendMustBeMappedGuids(UChannel *this,FOutBunch *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  UPackageMapClient *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_1c8 [32];
  ushort local_198 [2];
  undefined1 local_194 [12];
  FOutBunch local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar7 = CastChecked<UPackageMapClient,UPackageMap>
                     (&((this->Connection).field0_0x0.DebugPtr)->PackageMap,NullChecked);
  if (0 < (pUVar7->MustBeMappedGuidsInLastBunch).ArrayNum) {
    FOutBunch::FOutBunch(&local_188,param_1);
    (**(code **)(param_1->_padding_ + 0xc0))(param_1);
    plVar4 = (longlong *)param_1->_padding_;
    local_198[0] = (ushort)(pUVar7->MustBeMappedGuidsInLastBunch).ArrayNum;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_198,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_198);
      }
    }
    else {
      local_198[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
    pFVar8 = (pUVar7->MustBeMappedGuidsInLastBunch).AllocatorInstance.Data;
    iVar3 = (pUVar7->MustBeMappedGuidsInLastBunch).ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pUVar7->MustBeMappedGuidsInLastBunch).ArrayNum != iVar3) {
        local_194[0] = 0;
        `TCheckedPointerIterator<FNetworkGUID,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_194);
      }
      if (pFVar8 == pFVar2) break;
      (**(code **)(param_1->_padding_ + 0x1a8))(param_1,pFVar8);
      pFVar8 = pFVar8 + 8;
    }
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat1125 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat1125 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::TrackMustBeMappedGuids
                (&GNetworkProfiler,local_198[0],(ushort)param_1->_padding_,
                 (this->Connection).field0_0x0.DebugPtr);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    pcVar5 = *(code **)(param_1->_padding_ + 400);
    if ((local_188._padding_._1_1_ & 2) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0x49,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (*pcVar5)(param_1);
    param_1->bHasMustBeMappedGUIDs = '\x01';
    piVar1 = &(pUVar7->MustBeMappedGuidsInLastBunch).ArrayMax;
    (pUVar7->MustBeMappedGuidsInLastBunch).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(pUVar7->MustBeMappedGuidsInLastBunch).AllocatorInstance,0,piVar1);
    }
    local_188._padding_ = (longlong)&___7FOutBunch__6B_;
    FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_188._padding_);
    if (local_188.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.DebugString.Data.AllocatorInstance.Data);
    }
    if (local_188.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::FNetToken>)0x0) {
      FMemory::Free((void *)local_188.NetTokensPendingExport.AllocatorInstance.SecondaryData);
    }
    if (local_188.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.NetFieldExports.AllocatorInstance.Data);
    }
    if (local_188.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.ExportNetGUIDs.AllocatorInstance.Data);
    }
    FBitWriter::~FBitWriter((FBitWriter *)&local_188);
  }
  return;
}

// AssertInSequenced @ 147a334c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::AssertInSequenced(UChannel *this)

{
  FInBunch *pFVar1;
  FInBunch *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = this->InRec;
  while( true ) {
    if (pFVar1 == (FInBunch *)0x0) {
      return;
    }
    pFVar2 = pFVar1->Next;
    if (pFVar2 == (FInBunch *)0x0) break;
    if ((pFVar2->ChSequence <= pFVar1->ChSequence) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->Next->ChSequence>In->ChSequence",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x234,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = pFVar1->Next;
  }
  return;
}

// BeginDestroy @ 147a34240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::BeginDestroy(UChannel *this)

{
  char cVar1;
  
  if ((((this->_padding_ & 0x10) == 0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
     (this->bPooled == 0)) {
    cVar1 = (**(code **)(this->_padding_ + 0x348))(this,1,0);
    if ((cVar1 != '\0') && (this->bPooled == 0)) {
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CleanUp @ 147a36c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::CleanUp(UChannel *this,bool param_1,EChannelCloseReason param_2)

{
  uint uVar1;
  int iVar2;
  UNetConnection *pUVar3;
  FOutBunch *pFVar4;
  FInBunch *pFVar5;
  FInBunch *pFVar6;
  code *pcVar7;
  FOutBunch *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined7 in_register_00000081;
  int local_res8 [2];
  int local_res20 [2];
  TObjectPtr<UChannel>_u_0 local_68;
  TObjectPtr<UChannel>_u_0 local_60;
  void *local_58 [2];
  FNetResult local_48;
  
  if ((this->ChIndex == 0) && (this->Closing == 0)) {
    if (4 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_58,CONCAT71(in_register_00000081,param_2));
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    pUVar3 = (this->Connection).field0_0x0.DebugPtr;
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_48,ControlChannelClose);
    UNetConnection::Close(pUVar3,&local_48);
    if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
    }
    if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  if ((this->OutRec != (FOutBunch *)0x0) &&
     (pUVar3 = (this->Connection).field0_0x0.DebugPtr, pUVar3->bInternalAck == 0)) {
    uVar1 = this->ChIndex;
    iVar2 = this->OutRec->ChSequence;
    uVar11 = 0;
    if ((int)uVar1 < (pUVar3->PendingOutRec).ArrayNum) {
      uVar11 = ~uVar1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    *(int *)((pUVar3->PendingOutRec).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) = iVar2;
  }
  pFVar8 = this->OutRec;
  while (pFVar8 != (FOutBunch *)0x0) {
    pFVar4 = pFVar8->Next;
    (**(code **)pFVar8->_padding_)(pFVar8,1);
    pFVar8 = pFVar4;
  }
  this->OutRec = (FOutBunch *)0x0;
  pFVar6 = this->InRec;
  while (pFVar6 != (FInBunch *)0x0) {
    pFVar5 = pFVar6->Next;
    (**(code **)pFVar6->_padding_)(pFVar6,1);
    pFVar6 = pFVar5;
  }
  pFVar6 = this->InPartialBunch;
  this->InRec = (FInBunch *)0x0;
  if (pFVar6 != (FInBunch *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
    this->InPartialBunch = (FInBunch *)0x0;
  }
  if ((this->ChIndex != -1) &&
     (pUVar3 = (this->Connection).field0_0x0.DebugPtr, pUVar3->bReserveDestroyedChannels != false))
  {
    local_res8[0] = this->ChIndex;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&pUVar3->ReservedChannels,local_res20,(bool *)local_res8);
  }
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  local_68.DebugPtr = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar3->OpenChannels,(TObjectPtr<UChannel> *)&local_68.ObjectPtr);
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  local_60.DebugPtr = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar3->ChannelsToTick,(TObjectPtr<UChannel> *)&local_60.ObjectPtr);
  uVar1 = this->ChIndex;
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  uVar11 = 0;
  if ((int)uVar1 < (pUVar3->Channels).ArrayNum) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  *(undefined8 *)((pUVar3->Channels).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) = 0;
  (this->Connection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  return true;
}

// Close @ 147a38220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

long64 __thiscall UChannel::Close(UChannel *this,EChannelCloseReason param_1)

{
  uint uVar1;
  int iVar2;
  UNetConnection *pUVar3;
  UChannel *pUVar4;
  PacketHandler *pPVar5;
  code *pcVar6;
  bool bVar7;
  EConnectionState EVar8;
  long64 lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong local_1e0;
  FString local_1d8;
  undefined1 local_1c8 [8];
  void *local_1c0 [2];
  void *local_1b0 [2];
  void *local_1a0 [3];
  FOutBunch local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (((this->OpenedLocally == 0) && (this->ChIndex != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpenedLocally || ChIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x12f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    lVar9 = (*pcVar6)();
    return lVar9;
  }
  uVar1 = this->ChIndex;
  lVar10 = 0;
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  iVar2 = (pUVar3->Channels).ArrayNum;
  uVar11 = 0;
  if ((int)uVar1 < iVar2) {
    uVar11 = ~uVar1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (local_1e8 = (longlong)(int)uVar1, local_1e0 = (longlong)iVar2,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar6 = (code *)swi(3);
    lVar9 = (*pcVar6)();
    return lVar9;
  }
  pUVar4 = *(UChannel **)((pUVar3->Channels).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  if (pUVar4 == (UChannel *)0x0) {
    bVar7 = this == (UChannel *)0x0;
  }
  else {
    bVar7 = pUVar4 == this;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->Channels[ChIndex]==this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x130,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    lVar9 = (*pcVar6)();
    return lVar9;
  }
  if ((this->Closing == 0) &&
     ((((EVar8 = UNetConnection::GetConnectionState((this->Connection).field0_0x0.DebugPtr),
        EVar8 == USOCK_Open ||
        (EVar8 = UNetConnection::GetConnectionState((this->Connection).field0_0x0.DebugPtr),
        EVar8 == USOCK_Pending)) ||
       ((EVar8 = UNetConnection::GetConnectionState((this->Connection).field0_0x0.DebugPtr),
        EVar8 == USOCK_Closing && (this->ChIndex == 0)))) && (this->SentClosingBunch == 0)))) {
    if ((this->ChIndex == 0) && (4 < (byte)LogNet._0_1_)) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_1c0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_1c0[0] != (void *)0x0) {
        FMemory::Free(local_1c0[0]);
      }
    }
    if (5 < (byte)LogNetDormancy._0_1_) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_1b0);
      ::LexToString(param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_1b0[0] != (void *)0x0) {
        FMemory::Free(local_1b0[0]);
      }
    }
    pUVar3 = (this->Connection).field0_0x0.DebugPtr;
    pPVar5 = (pUVar3->Handler).Ptr;
    if ((pPVar5 == (PacketHandler *)0x0) || (pPVar5->State == Initialized)) {
      if ((pUVar3->bInternalAck == 0) &&
         ((((pUVar3->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr ==
          (UNetConnection *)0x0)) {
        iVar2 = (pUVar3->InReliable).ArrayNum;
        if (iVar2 < 1) {
          local_1e8 = 0;
          local_1e0 = (longlong)iVar2;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            lVar9 = (*pcVar6)();
            return lVar9;
          }
        }
        if (*(int *)(pUVar3->InReliable).AllocatorInstance.Data == pUVar3->InitInReliable) {
          return 0;
        }
      }
      FOutBunch::FOutBunch(&local_188,this,true);
      this->SentClosingBunch = 1;
      (**(code **)(this->_padding_ + 0x2d0))(this,local_1a0);
      ::FString::PrintfImpl(&local_1d8,L"%.2f Close: %s");
      if (local_188.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.DebugString.Data.AllocatorInstance.Data);
      }
      local_188.DebugString.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
      local_188.DebugString.Data.ArrayNum = local_1d8.Data.ArrayNum;
      local_188.DebugString.Data.ArrayMax = local_1d8.Data.ArrayMax;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1a0[0] != (void *)0x0) {
        FMemory::Free(local_1a0[0]);
      }
      if (((local_188._padding_._1_1_ & 2) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CloseBunch.IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x149,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        lVar9 = (*pcVar6)();
        return lVar9;
      }
      if ((local_188.bClose == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CloseBunch.bClose",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x14a,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        lVar9 = (*pcVar6)();
        return lVar9;
      }
      local_188.bReliable = '\x01';
      local_188.CloseReason = param_1;
      (**(code **)(this->_padding_ + 0x318))(this,local_1c8,&local_188,0);
      FOutBunch::~FOutBunch(&local_188);
      lVar10 = local_188._padding_;
    }
  }
  return lVar10;
}

// ConditionalCleanUp @ 147a39d90

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
UChannel::ConditionalCleanUp(UChannel *this,bool param_1,EChannelCloseReason param_2)

{
  UNetConnection *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UNetDriver *this_00;
  
  if ((this == (UChannel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((uint)this->_padding_ >> 0x1e & 1) == 0) && (this->bPooled == 0)) {
    pUVar1 = (this->Connection).field0_0x0.DebugPtr;
    this_00 = (UNetDriver *)0x0;
    if (pUVar1 != (UNetConnection *)0x0) {
      this_00 = (pUVar1->Driver).field0_0x0.DebugPtr;
    }
    cVar4 = (**(code **)(this->_padding_ + 0x348))(this,param_1,param_2);
    if (cVar4 != '\0') {
      if ((this_00 != (UNetDriver *)0x0) && (!param_1)) {
        UNetDriver::ReleaseToChannelPool(this_00,this);
      }
      if (this->bPooled == 0) {
        UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
      }
    }
  }
  return;
}

// Describe @ 147a3ec00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UChannel::Describe(UChannel *this,FString *__return_storage_ptr__)

{
  UNetConnection *pUVar1;
  longlong lVar2;
  bool bVar3;
  void *local_18 [2];
  
  bVar3 = false;
  pUVar1 = (this->Connection).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetConnection *)0x0) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,local_18);
    if (*(int *)(lVar2 + 8) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"[UChannel] ChIndex: %d, Closing: %d %s");
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetAdditionalRequiredBunches @ 147a4e6e0

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
UChannel::GetAdditionalRequiredBunches
          (UChannel *this,TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FOutBunch *param_1,EChannelGetAdditionalRequiredBunchesFlags param_2)

{
  UPackageMapClient *this_00;
  
  this_00 = CastChecked<UPackageMapClient,UPackageMap>
                      (&((this->Connection).field0_0x0.DebugPtr)->PackageMap,NullChecked);
  UPackageMapClient::GetAdditionalRequiredBunches(this_00,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// HasAcknowledgedAllReliableData @ 147a5c290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::HasAcknowledgedAllReliableData(UChannel *this)

{
  return this->NumOutRec == 0;
}

// Init @ 147a5cc30

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
UChannel::Init(UChannel *this,UNetConnection *param_1,int param_2,EChannelCreateFlags param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  if (lVar1 == 0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)param_1[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1[1]._padding_);
    }
    param_1 = *(UNetConnection **)(param_1 + 1);
  }
  (this->Connection).field0_0x0 = (TObjectPtr<UNetConnection>_u_0)param_1;
  this->ChIndex = param_2;
  (this->OpenPacketId).First = -1;
  (this->OpenPacketId).Last = -1;
  *(EChannelCreateFlags *)&this->field_0x30 =
       (param_3 & OpenedLocally) << 0xb | *(uint *)&this->field_0x30 & 0xffffe9ff;
  return;
}

// IsNetReady @ 147a63380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UChannel::IsNetReady(UChannel *this,bool param_1)

{
  int iVar1;
  
  if (0x1fe < this->NumOutRec) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a63393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Connection).field0_0x0.DebugPtr)->_padding_ + 800))();
  return iVar1;
}

// IsNetReady @ 147a633a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::IsNetReady(UChannel *this)

{
  undefined1 uVar1;
  
  if (0x1fe < this->NumOutRec) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000147a633b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Connection).field0_0x0.DebugPtr)->_padding_ + 0x318))();
  return (bool)uVar1;
}

// PrepBunch @ 147a67290

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall
UChannel::PrepBunch(UChannel *this,FOutBunch *param_1,FOutBunch *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UNetConnection *pUVar3;
  FScriptContainerElement *pFVar4;
  UNetworkMetricsDatabase *this_00;
  code *pcVar5;
  FOutBunch **ppFVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  FOutBunch *pFVar10;
  longlong lVar11;
  undefined7 in_register_00000089;
  longlong lVar12;
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  if (pUVar3->ResendAllDataState != None) {
    return param_1;
  }
  if (param_1->bReliable == '\0') {
    pUVar3->LastOutBunch = (FOutBunch *)0x0;
    param_2 = param_1;
  }
  else {
    if (param_2 == (FOutBunch *)0x0) {
      if ((int)(param_1->bClose + 0x1ff) <= this->NumOutRec) {
        if (2 < (byte)LogNetTraffic._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))
                    (this,local_48,0,CONCAT71(in_register_00000089,param_3));
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
        }
        PrintReliableBunchBuffer(this);
      }
      param_1->Next = (FOutBunch *)0x0;
      uVar2 = this->ChIndex;
      pUVar3 = (this->Connection).field0_0x0.DebugPtr;
      uVar9 = 0;
      if ((int)uVar2 < (pUVar3->OutReliable).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FOutBunch *)(*pcVar5)();
        return pFVar10;
      }
      pFVar4 = (pUVar3->OutReliable).AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)(int)uVar2 * 4;
      *(int *)pFVar1 = *(int *)pFVar1 + 1;
      param_1->ChSequence = *(int *)(pFVar4 + (longlong)(int)uVar2 * 4);
      this->NumOutRec = this->NumOutRec + 1;
      this_00 = (((((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr)->
                NetworkMetricsDatabase).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UNetworkMetricsDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UNetworkMetricsDatabase::SetMaxInt
                (this_00,UE::Net::Metric::OutgoingReliableMessageQueueMaxSize,
                 (longlong)this->NumOutRec);
      pFVar10 = ::operator_new(0x150);
      if (pFVar10 == (FOutBunch *)0x0) {
        param_2 = (FOutBunch *)0x0;
      }
      else {
        param_2 = FOutBunch::FOutBunch(pFVar10,param_1);
      }
      ppFVar6 = &this->OutRec;
      pFVar10 = this->OutRec;
      while (pFVar10 != (FOutBunch *)0x0) {
        ppFVar6 = &pFVar10->Next;
        pFVar10 = *ppFVar6;
      }
      *ppFVar6 = param_2;
    }
    else {
      param_1->Next = param_2->Next;
      FOutBunch::operator=(param_2,param_1);
    }
    ((this->Connection).field0_0x0.DebugPtr)->LastOutBunch = param_2;
    pTVar7 = CVarNetReliableDebug.Ref;
    bVar8 = IsInParallelGameThread();
    lVar12 = 4;
    if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 4;
    }
    if ((*(int *)((longlong)pTVar7->ShadowedValue + lVar11) == 1) && (2 < (byte)LogNetTraffic._0_1_)
       ) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    pTVar7 = CVarNetReliableDebug.Ref;
    bVar8 = IsInParallelGameThread();
    if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
      lVar12 = 0;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar12) == 2) {
      if (2 < (byte)LogNetTraffic._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
      PrintReliableBunchBuffer(this);
      if (2 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
    }
  }
  return param_2;
}

// PrintReliableBunchBuffer @ 147a68680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::PrintReliableBunchBuffer(UChannel *this)

{
  FOutBunch *pFVar1;
  
  for (pFVar1 = this->OutRec; pFVar1 != (FOutBunch *)0x0; pFVar1 = pFVar1->Next) {
    if (2 < (byte)LogNetTraffic._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
  }
  if ((byte)LogNetTraffic._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  return;
}

// ReceivedAck @ 147a70250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReceivedAck(UChannel *this,int param_1)

{
  return;
}

// ReceivedAcks @ 147a70260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReceivedAcks(UChannel *this)

{
  UNetConnection *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UNetDriver *this_00;
  EChannelCloseReason local_res10 [8];
  
  bVar3 = ReceivedAcks(this,local_res10);
  if (bVar3) {
    if ((this == (UChannel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) && (this->bPooled == 0)) {
      pUVar1 = (this->Connection).field0_0x0.DebugPtr;
      this_00 = (UNetDriver *)0x0;
      if (pUVar1 != (UNetConnection *)0x0) {
        this_00 = (pUVar1->Driver).field0_0x0.DebugPtr;
      }
      cVar4 = (**(code **)(this->_padding_ + 0x348))(this,0,local_res10[0]);
      if (cVar4 != '\0') {
        if (this_00 != (UNetDriver *)0x0) {
          UNetDriver::ReleaseToChannelPool(this_00,this);
        }
        if (this->bPooled == 0) {
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
        }
      }
    }
  }
  return;
}

// ReceivedAcks @ 147a70330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::ReceivedAcks(UChannel *this,EChannelCloseReason *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  UNetConnection *pUVar3;
  UChannel *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  FOutBunch *pFVar10;
  EChannelCloseReason EVar11;
  UNetDriver *this_00;
  void *local_38 [2];
  void *local_28 [2];
  
  uVar2 = this->ChIndex;
  this_00 = (UNetDriver *)0x0;
  pUVar3 = (this->Connection).field0_0x0.DebugPtr;
  uVar9 = 0;
  if ((int)uVar2 < (pUVar3->Channels).ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pUVar4 = *(UChannel **)((pUVar3->Channels).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  if (pUVar4 == (UChannel *)0x0) {
    bVar6 = this == (UChannel *)0x0;
  }
  else {
    bVar6 = pUVar4 == this;
  }
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection->Channels[ChIndex]==this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                         ,0x1c7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar10 = this->OutRec;
  bVar6 = false;
  EVar11 = Destroyed;
  if (pFVar10 != (FOutBunch *)0x0) {
    while (pFVar10->ReceivedAck != 0) {
      if (pFVar10->bOpen != '\0') {
        if (pFVar10->bPartial != '\0') {
          do {
            if (6 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            if (pFVar10->ReceivedAck == 0) goto LAB_147a70510;
          } while ((!(bool)pFVar10->bPartialFinal) &&
                  (pFVar10 = pFVar10->Next, pFVar10 != (FOutBunch *)0x0));
        }
        if (6 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        this->OpenAcked = 1;
        pFVar10 = this->OutRec;
      }
      if (((bVar6) || (pFVar10->bClose != '\0')) && (bVar6 = true, pFVar10->bClose != '\0')) {
        EVar11 = pFVar10->CloseReason;
      }
      this->OutRec = pFVar10->Next;
      (**(code **)pFVar10->_padding_)(pFVar10,1);
      this->NumOutRec = this->NumOutRec + -1;
      pFVar10 = this->OutRec;
      if (pFVar10 == (FOutBunch *)0x0) break;
    }
  }
LAB_147a70510:
  if (this->OpenAcked == 1 && this->OpenTemporary == 1) {
    if (5 < (byte)LogNetDormancy._0_1_) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_38);
      ::LexToString(EVar11);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
    if ((this->OutRec != (FOutBunch *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OutRec",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x20b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) && (this->bPooled == 0)) {
      pUVar3 = (this->Connection).field0_0x0.DebugPtr;
      if (pUVar3 != (UNetConnection *)0x0) {
        this_00 = (pUVar3->Driver).field0_0x0.DebugPtr;
      }
      cVar8 = (**(code **)(this->_padding_ + 0x348))(this,0,EVar11);
      if (cVar8 != '\0') {
        if (this_00 != (UNetDriver *)0x0) {
          UNetDriver::ReleaseToChannelPool(this_00,this);
        }
        if (this->bPooled == 0) {
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
        }
      }
    }
  }
  else if (bVar6) {
    if (5 < (byte)LogNetDormancy._0_1_) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_28);
      ::LexToString(EVar11);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    if ((this->OutRec != (FOutBunch *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OutRec",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x214,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *param_1 = EVar11;
    return true;
  }
  return false;
}

// ReceivedNak @ 147a74a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReceivedNak(UChannel *this,int param_1)

{
  FOutBunch *pFVar1;
  UNetConnection *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FNetTraceCollector *pFVar6;
  FNetTraceCollector *pFVar7;
  
  pFVar1 = this->OutRec;
  do {
    if (pFVar1 == (FOutBunch *)0x0) {
      return;
    }
    if ((pFVar1->PacketId == param_1) && (pFVar1->ReceivedAck == 0)) {
      if ((pFVar1->bReliable == '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Out->bReliable",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x677,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (4 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      this_00 = (this->Connection).field0_0x0.DebugPtr;
      if (this_00->OutTraceCollector == (FNetTraceCollector *)0x0) {
        UNetConnection::SendRawBunch(this_00,pFVar1,false,(FNetTraceCollector *)0x0);
      }
      else if (GNetTraceRuntimeVerbosity != 0) {
        if (GNetTraceRuntimeVerbosity == 0) {
          pFVar6 = (FNetTraceCollector *)0x0;
        }
        else {
          pFVar6 = FNetTrace::CreateTraceCollector();
        }
        if (pFVar6 != (FNetTraceCollector *)0x0) {
          pFVar7 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar7 = pFVar6;
          }
          if (pFVar7 != (FNetTraceCollector *)0x0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              NetTraceNameId_1666 = UE::Net::CreatePersistentNetDebugName(L"ResendBunch",0xb);
              _Init_thread_footer(&::_TSS0);
            }
            lVar3 = pFVar1->_padding_;
            uVar5 = FNetTrace::TraceName(NetTraceNameId_1666);
            FNetTrace::TracePacketContentEvent(pFVar6,uVar5,0,(uint)lVar3,1);
          }
          UNetConnection::SendRawBunch((this->Connection).field0_0x0.DebugPtr,pFVar1,false,pFVar6);
          FNetTrace::DestroyTraceCollector(pFVar6);
        }
      }
    }
    pFVar1 = pFVar1->Next;
  } while( true );
}

// ReceivedNextBunch @ 147a74bf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::ReceivedNextBunch(UChannel *this,FInBunch *param_1,bool *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  UNetConnection *pUVar3;
  UNetDriver *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FInBunch *pFVar9;
  uchar *puVar10;
  UPackageMapClient *this_00;
  FChannelDefinition *pFVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FInBunch *pFVar16;
  bool *pbVar18;
  undefined1 local_res10 [8];
  bool *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_2e8 [8];
  byte *local_2e0;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  void *local_288 [2];
  void *local_278 [2];
  FString local_268;
  void *local_258 [2];
  void *local_248 [2];
  void *local_238 [2];
  void *local_228 [2];
  void *local_218 [2];
  void *local_208 [2];
  void *local_1f8 [2];
  undefined1 local_1e8 [40];
  longlong local_1c0;
  undefined1 local_1b8 [40];
  longlong local_190;
  undefined1 local_188 [40];
  longlong local_160;
  undefined1 local_158 [40];
  longlong local_130;
  undefined1 local_128 [40];
  longlong local_100;
  undefined1 local_f8 [40];
  longlong local_d0;
  undefined1 local_c8 [40];
  longlong local_a0;
  undefined1 local_98 [40];
  longlong local_70;
  undefined1 local_68 [40];
  longlong local_40;
  FInBunch *pFVar17;
  
  local_res18 = param_2;
  if (param_1->bReliable != '\0') {
    pUVar3 = (this->Connection).field0_0x0.DebugPtr;
    uVar14 = param_1->ChIndex;
    uVar13 = 0;
    if ((int)uVar14 < (pUVar3->InReliable).ArrayNum) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((param_1->ChSequence !=
         *(int *)((pUVar3->InReliable).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) + 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Bunch.ChSequence == Connection->InReliable[Bunch.ChIndex] + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x30b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar14 = param_1->ChIndex;
    pUVar3 = (this->Connection).field0_0x0.DebugPtr;
    local_2e0 = (byte *)CONCAT44(local_2e0._4_4_,param_1->ChSequence);
    uVar13 = 0;
    if ((int)uVar14 < (pUVar3->InReliable).ArrayNum) {
      uVar13 = ~uVar14 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(undefined4 *)((pUVar3->InReliable).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) =
         local_2e0._0_4_;
  }
  local_2e0 = &param_1->field_0xe8;
  pFVar17 = param_1;
  pbVar18 = local_res18;
  if (param_1->bPartial != '\0') {
    pFVar9 = this->InPartialBunch;
    pFVar17 = (FInBunch *)0x0;
    pFVar16 = (FInBunch *)0x0;
    if (param_1->bPartialInitial == '\0') {
      if (pFVar9 != (FInBunch *)0x0) {
        iVar2 = param_1->ChSequence;
        bVar6 = iVar2 == pFVar9->ChSequence + 1;
        if ((bVar6) || (iVar2 == pFVar9->ChSequence)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (pFVar9->bReliable != '\0') {
          bVar8 = bVar6;
        }
        if (((pFVar9->bPartialFinal == '\0') && (bVar8)) &&
           (((pFVar9->field_0xe8 ^ param_1->field_0xe8) & 8) == 0)) {
          if (5 < (byte)LogNetPartialBunch._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch)
            ;
          }
          if (6 < (byte)LogNetPartialBunch._0_1_) {
            FInBunch::ToString(param_1,&local_268);
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u___s_151831518,
                       (FLogCategoryBase *)&LogNetPartialBunch);
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
          }
          if ((!(bool)param_1->bHasPackageMapExports) &&
             (lVar15 = param_1->_padding_ - param_1->_padding_, 0 < lVar15)) {
            pFVar17 = this->InPartialBunch;
            puVar10 = FBitReader::GetDataPosChecked((FBitReader *)param_1);
            FBitReader::AppendDataFromChecked((FBitReader *)pFVar17,puVar10,(uint)lVar15);
          }
          if (((!(bool)param_1->bHasPackageMapExports) &&
              (param_1->bPartialCustomExportsFinal == '\0')) &&
             ((param_1->bPartialFinal == '\0' &&
              (lVar15 = param_1->_padding_ - param_1->_padding_, uVar14 = (uint)(lVar15 >> 0x3f) & 7
              , ((int)lVar15 + uVar14 & 7) != uVar14)))) {
            if (2 < (byte)LogNetPartialBunch._0_1_) {
              (**(code **)(this->_padding_ + 0x2d0))(this,local_258);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
              if (local_258[0] != (void *)0x0) {
                FMemory::Free(local_258[0]);
              }
            }
            FArchiveState::SetError((FArchiveState *)param_1);
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_188,PartialNonByteAligned);
            UE::Net::AddToChainResultPtr
                      ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                       (TNetResult<ENetCloseResult> *)local_188);
            if (local_160 != 0) {
              (**(code **)(local_160 + -0x10))(local_160 + -0x10);
            }
            goto LAB_147a74e25;
          }
          this->InPartialBunch->ChSequence = param_1->ChSequence;
          pFVar17 = this->InPartialBunch;
          if (param_1->bPartialFinal == '\0') {
            ::FString::FString(&local_2a8,L"Received Partial Bunch.");
            LogPartialBunch(&local_2a8,param_1,pFVar17);
            pFVar17 = pFVar16;
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
          }
          else {
            ::FString::FString(&local_2b8,L"Completed Partial Bunch.");
            LogPartialBunch(&local_2b8,param_1,pFVar17);
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            }
            if ((bool)param_1->bHasPackageMapExports) {
              if (2 < (byte)LogNetPartialBunch._0_1_) {
                (**(code **)(this->_padding_ + 0x2d0))(this,local_248);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
                if (local_248[0] != (void *)0x0) {
                  FMemory::Free(local_248[0]);
                }
              }
              FArchiveState::SetError((FArchiveState *)param_1);
              UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                        (local_158,PartialFinalPackageMapExports);
              UE::Net::AddToChainResultPtr
                        ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                         (TNetResult<ENetCloseResult> *)local_158);
              local_188._24_8_ = local_158._24_8_;
              if (local_130 != 0) {
                (**(code **)(local_130 + -0x10))(local_130 + -0x10);
                local_188._24_8_ = local_158._24_8_;
              }
              goto LAB_147a74e25;
            }
            pFVar17 = this->InPartialBunch;
            pFVar17->bPartialFinal = '\x01';
            bVar12 = this->InPartialBunch->field_0xe8;
            this->InPartialBunch->field_0xe8 = (bVar12 ^ param_1->field_0xe8) & 2 ^ bVar12;
            this->InPartialBunch->CloseReason = param_1->CloseReason;
            bVar12 = this->InPartialBunch->field_0xe8;
            this->InPartialBunch->field_0xe8 = (bVar12 ^ param_1->field_0xe8) & 4 ^ bVar12;
            uVar7 = this->InPartialBunch->field_0xe9;
            this->InPartialBunch->field_0xe9 =
                 (this->InPartialBunch->bHasMustBeMappedGUIDs ^ param_1->bHasMustBeMappedGUIDs) & 1
                 ^ uVar7;
          }
          goto LAB_147a75728;
        }
      }
      if ((((this->Connection).field0_0x0.DebugPtr)->bInternalAck != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Connection->IsInternalAck()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x3a1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      *local_res18 = true;
      pFVar17 = this->InPartialBunch;
      if ((pFVar17 != (FInBunch *)0x0) && (pFVar17->bReliable != '\0')) {
        if (param_1->bReliable == '\0') {
          if ((byte)LogNetPartialBunch._0_1_ < 5) {
            return false;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
          return false;
        }
        if (2 < (byte)LogNetPartialBunch._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))(this,local_238);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
          if (local_238[0] != (void *)0x0) {
            FMemory::Free(local_238[0]);
          }
        }
        FArchiveState::SetError((FArchiveState *)param_1);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_128,PartialMergeReliableDestroy);
        UE::Net::AddToChainResultPtr
                  ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                   (TNetResult<ENetCloseResult> *)local_128);
        local_188._24_8_ = local_128._24_8_;
        if (local_100 != 0) {
          (**(code **)(local_100 + -0x10))(local_100 + -0x10);
          local_188._24_8_ = local_128._24_8_;
        }
        goto LAB_147a74e25;
      }
      if (5 < (byte)LogNetPartialBunch._0_1_) {
        if (pFVar17 == (FInBunch *)0x0) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        }
        else {
          ::FString::FString(&local_298,L"Received Partial Bunch Out of Sequence.");
          LogPartialBunch(&local_298,param_1,pFVar17);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar9 = this->InPartialBunch;
      pFVar17 = pFVar16;
      if (pFVar9 != (FInBunch *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
        goto LAB_147a75725;
      }
    }
    else {
      if (pFVar9 != (FInBunch *)0x0) {
        if (pFVar9->bPartialFinal == '\0') {
          if (pFVar9->bReliable != '\0') {
            if (param_1->bReliable == '\0') {
              if (4 < (byte)LogNetPartialBunch._0_1_) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
              }
              *local_res18 = true;
              return false;
            }
            if (2 < (byte)LogNetPartialBunch._0_1_) {
              (**(code **)(this->_padding_ + 0x2d0))(this,local_288);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
              if (local_288[0] != (void *)0x0) {
                FMemory::Free(local_288[0]);
              }
            }
            FArchiveState::SetError((FArchiveState *)param_1);
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_1e8,PartialInitialReliableDestroy);
            UE::Net::AddToChainResultPtr
                      ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                       (TNetResult<ENetCloseResult> *)local_1e8);
            local_188._24_8_ = local_1e8._24_8_;
            if (local_1c0 != 0) {
              (**(code **)(local_1c0 + -0x10))(local_1c0 + -0x10);
              local_188._24_8_ = local_1e8._24_8_;
            }
            goto LAB_147a74e25;
          }
          if (5 < (byte)LogNetPartialBunch._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch)
            ;
          }
        }
        pFVar9 = this->InPartialBunch;
        if (pFVar9 != (FInBunch *)0x0) {
          (**(code **)pFVar9->_padding_)();
        }
        this->InPartialBunch = (FInBunch *)0x0;
      }
      local_2e0 = &param_1->field_0xe8;
      pFVar9 = ::operator_new(0xf0);
      if (pFVar9 == (FInBunch *)0x0) {
LAB_147a75725:
        this->InPartialBunch = (FInBunch *)0x0;
        pFVar17 = pFVar16;
      }
      else {
        FNetBitReader::FNetBitReader((FNetBitReader *)pFVar9,(UPackageMap *)0x0,(uchar *)0x0,0);
        pFVar9->_padding_ = (longlong)&___7FInBunch__6B_;
        (pFVar9->ChName).ComparisonIndex = 0;
        (pFVar9->ChName).Number = 0;
        pFVar9->PacketId = param_1->PacketId;
        pFVar9->Next = param_1->Next;
        pFVar9->Connection = param_1->Connection;
        pFVar9->ChIndex = param_1->ChIndex;
        pFVar9->ChName = param_1->ChName;
        pFVar9->ChSequence = param_1->ChSequence;
        bVar12 = (pFVar9->bOpen ^ *local_2e0) & 1 ^ pFVar9->field_0xe8;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 2 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 4 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 8 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 0x10 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 0x20 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        bVar12 = (bVar12 ^ *local_2e0) & 0x40 ^ bVar12;
        pFVar9->field_0xe8 = bVar12;
        pFVar9->field_0xe8 = (bVar12 ^ *local_2e0) & 0x7f ^ *local_2e0;
        bVar12 = (pFVar9->bHasMustBeMappedGUIDs ^ param_1->bHasMustBeMappedGUIDs) & 1 ^
                 pFVar9->field_0xe9;
        pFVar9->field_0xe9 = bVar12;
        bVar12 = (bVar12 ^ param_1->field_0xe9) & 2 ^ bVar12;
        pFVar9->field_0xe9 = bVar12;
        pFVar9->field_0xe9 = (bVar12 ^ param_1->field_0xe9) & 4 ^ bVar12;
        pFVar9->CloseReason = param_1->CloseReason;
        pFVar9->_padding_ = param_1->_padding_;
        pFVar9->_padding_ = 0;
        this->InPartialBunch = pFVar9;
        if (((char)*local_2e0 < '\0') ||
           (lVar15 = param_1->_padding_ - param_1->_padding_, lVar15 < 1)) {
          ::FString::FString(&local_2c8,L"Received New partial bunch. It only contained NetGUIDs.");
          LogPartialBunch(&local_2c8,param_1,pFVar9);
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            pFVar17 = pFVar16;
          }
        }
        else {
          if ((param_1->bPartialCustomExportsFinal == '\0') &&
             (uVar14 = (uint)(lVar15 >> 0x3f) & 7, ((uint)lVar15 + uVar14 & 7) != uVar14)) {
            if (2 < (byte)LogNetPartialBunch._0_1_) {
              (**(code **)(this->_padding_ + 0x2d0))(this,local_278);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
              if (local_278[0] != (void *)0x0) {
                FMemory::Free(local_278[0]);
              }
            }
            FArchiveState::SetError((FArchiveState *)param_1);
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_1b8,PartialInitialNonByteAligned);
            UE::Net::AddToChainResultPtr
                      ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                       (TNetResult<ENetCloseResult> *)local_1b8);
            local_188._24_8_ = local_1b8._24_8_;
            if (local_190 != 0) {
              (**(code **)(local_190 + -0x10))(local_190 + -0x10);
              local_188._24_8_ = local_1b8._24_8_;
            }
            goto LAB_147a74e25;
          }
          puVar10 = FBitReader::GetDataPosChecked((FBitReader *)param_1);
          FBitReader::AppendDataFromChecked((FBitReader *)pFVar9,puVar10,(uint)lVar15);
          pFVar9 = this->InPartialBunch;
          ::FString::FString(&local_2d8,L"Received new partial bunch.");
          LogPartialBunch(&local_2d8,param_1,pFVar9);
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
LAB_147a75728:
    pbVar18 = local_res18;
    if (((this->InPartialBunch != (FInBunch *)0x0) &&
        (((this->Connection).field0_0x0.DebugPtr)->bUnlimitedBunchSizeAllowed == 0)) &&
       ((longlong)NetMaxConstructedPartialBunchSizeBytes < this->InPartialBunch->_padding_ + 7 >> 3)
       ) {
      if (1 < (byte)LogNetPartialBunch._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_228);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        if (local_228[0] != (void *)0x0) {
          FMemory::Free(local_228[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)param_1);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_f8,PartialTooLarge);
      UE::Net::AddToChainResultPtr
                ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                 (TNetResult<ENetCloseResult> *)local_f8);
      local_188._24_8_ = local_f8._24_8_;
      if (local_d0 != 0) {
        (**(code **)(local_d0 + -0x10))(local_d0 + -0x10);
        local_188._24_8_ = local_f8._24_8_;
      }
      goto LAB_147a74e25;
    }
    if ((*local_res18 == false) && (param_1->bPartialCustomExportsFinal != '\0')) {
      if (5 < (byte)LogNetPartialBunch._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
      }
      if (pFVar17 != (FInBunch *)0x0) {
        local_res10[0] = 0;
        `UChannel::ReceivedNextBunch'::__l311::<lambda_1>::operator()(local_res10);
      }
      if (param_1->bPartialFinal != '\0') {
        local_res20[0] = 0;
        `UChannel::ReceivedNextBunch'::__l311::<lambda_2>::operator()(local_res20);
      }
      if (this->InPartialBunch == (FInBunch *)0x0) {
        local_2e8[0] = 0;
        `UChannel::ReceivedNextBunch'::__l311::<lambda_3>::operator()(local_2e8);
      }
      pFVar9 = this->InPartialBunch;
      if ((pFVar9 != (FInBunch *)0x0) &&
         (((this->Connection).field0_0x0.DebugPtr)->bInternalAck == 0)) {
        pFVar9->field_0xe9 = (pFVar9->field_0xe9 ^ param_1->field_0xe9) & 2 ^ pFVar9->field_0xe9;
        this_00 = CastChecked<UPackageMapClient,UPackageMap>
                            (&((this->Connection).field0_0x0.DebugPtr)->PackageMap,NullChecked);
        UPackageMapClient::ReceiveCustomExportsBunch(this_00,this->InPartialBunch);
        pFVar9 = this->InPartialBunch;
        if ((pFVar9->_padding_ & 0x200) != 0) {
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (local_c8,ReceivedNetGUIDBunchFail);
          UE::Net::AddToChainResultPtr
                    ((TPimplPtr<UE::Net::FNetResult,1> *)&this->InPartialBunch->_padding_,
                     (TNetResult<ENetCloseResult> *)local_c8);
          if (local_a0 != 0) {
            (**(code **)(local_a0 + -0x10))(local_a0 + -0x10);
          }
          if ((void *)local_c8._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_c8._24_8_);
          }
          if ((byte)LogNetTraffic._0_1_ < 2) {
            return false;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          return false;
        }
        FBitReader::ResetData((FBitReader *)pFVar9,(FBitReader *)pFVar9,0,pFVar9->_padding_);
        this->InPartialBunch->bPartialCustomExportsFinal = '\0';
      }
    }
  }
  if (pFVar17 == (FInBunch *)0x0) {
    return false;
  }
  pUVar4 = (((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr;
  if (((pUVar4 == (UNetDriver *)0x0) ||
      (pFVar11 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                 ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                                *)&pUVar4->ChannelDefinitionMap,this->ChName),
      pFVar11->bServerOpen == '\0')) ||
     (pFVar11 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                               *)&((((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.
                                  DebugPtr)->ChannelDefinitionMap,this->ChName),
     pFVar11->bClientOpen == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (pFVar17->bOpen != 0) {
    if (!bVar6) {
      if (this->OpenedLocally != 0) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_218);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OpenedLocally",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x3fb,
                           L"Received channel open command for channel that was already opened locally. %s"
                          );
        if (local_218[0] != (void *)0x0) {
          FMemory::Free(local_218[0]);
        }
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (((this->OpenPacketId).First != -1) || ((this->OpenPacketId).Last != -1)) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1840253650790775811>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x3fd,
                           "OpenPacketId.First == INDEX_NONE && OpenPacketId.Last == INDEX_NONE");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (1 < (byte)LogNetTraffic._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))(this,local_208);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          if (local_208[0] != (void *)0x0) {
            FMemory::Free(local_208[0]);
          }
        }
        FArchiveState::SetError((FArchiveState *)param_1);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_98,AlreadyOpen);
        UE::Net::AddToChainResultPtr
                  ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                   (TNetResult<ENetCloseResult> *)local_98);
        local_188._24_8_ = local_98._24_8_;
        if (local_70 != 0) {
          (**(code **)(local_70 + -0x10))(local_70 + -0x10);
          local_188._24_8_ = local_98._24_8_;
        }
        goto LAB_147a74e25;
      }
    }
    (this->OpenPacketId).First = pFVar17->PacketId;
    iVar2 = param_1->PacketId;
    this->OpenAcked = 1;
    (this->OpenPacketId).Last = iVar2;
    if (5 < (byte)LogNetTraffic._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
  }
  if (!bVar6) {
    if (this->OpenAcked == 0 && this->OpenedLocally == 0) {
      if (pFVar17->bReliable == '\0') {
        if (((this->Connection).field0_0x0.DebugPtr)->bInternalAck == 0) {
          *pbVar18 = true;
          if ((byte)LogNetTraffic._0_1_ < 6) {
            return false;
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          return false;
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1840253650790775774>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x422,"!Connection->IsInternalAck()");
        if (!bVar6) {
          this->Broken = 1;
          return false;
        }
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (1 < (byte)LogNetTraffic._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_1f8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        if (local_1f8[0] != (void *)0x0) {
          FMemory::Free(local_1f8[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)param_1);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_68,ReliableBeforeOpen);
      UE::Net::AddToChainResultPtr
                ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                 (TNetResult<ENetCloseResult> *)local_68);
      local_188._24_8_ = local_68._24_8_;
      if (local_40 != 0) {
        (**(code **)(local_40 + -0x10))(local_40 + -0x10);
        local_188._24_8_ = local_68._24_8_;
      }
LAB_147a74e25:
      if ((void *)local_188._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_188._24_8_);
      }
      return false;
    }
    if (((this->OpenPacketId).First == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpenPacketId.First != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x433,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (((this->OpenPacketId).Last == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpenPacketId.Last != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x434,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  bVar6 = ReceivedSequencedBunch(this,pFVar17);
  return bVar6;
}

// ReceivedRawBunch @ 147a76cf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::ReceivedRawBunch(UChannel *this,FInBunch *param_1,bool *param_2)

{
  undefined1 *puVar1;
  UNetConnection *pUVar2;
  UChannel *pUVar3;
  UNetworkMetricsDatabase *this_00;
  FInBunch *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_Stat_ChannelReceivedRawBunch> FVar12;
  UClass *pUVar13;
  FInBunch *pFVar14;
  UPackageMapClient *pUVar15;
  uint uVar16;
  uint uVar17;
  UPackageMapClient *this_01;
  FInBunch **ppFVar18;
  FName FVar19;
  uint uVar20;
  bool bVar21;
  bool local_res20 [8];
  FColor_u_0 local_150 [2];
  UNetConnection *local_148;
  FName local_140;
  FName local_138;
  FName local_128;
  FString local_120;
  FString local_110;
  undefined1 local_100 [40];
  longlong local_d8;
  undefined1 local_d0 [40];
  longlong local_a8;
  undefined1 local_a0 [40];
  longlong local_78;
  undefined1 local_70 [40];
  longlong local_48;
  
  pUVar15 = (UPackageMapClient *)0x0;
  uVar20 = 0;
  FVar12 = StatPtr_Stat_ChannelReceivedRawBunch;
  if (StatPtr_Stat_ChannelReceivedRawBunch ==
      (FThreadSafeStaticStat<FStat_Stat_ChannelReceivedRawBunch>)0x0) {
    pFVar11 = ::FName::FName(&local_128,"Stat_ChannelReceivedRawBunch");
    FVar12 = (FThreadSafeStaticStat<FStat_Stat_ChannelReceivedRawBunch>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_ChannelReceivedRawBunch,*pFVar11,
                        L"Channel ReceivedRawBunch","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  bVar21 = false;
  bVar8 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_147a76e62:
    bVar7 = bVar21;
    bVar6 = bVar8;
    bVar8 = false;
    FVar19 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar21 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_140.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                   ,0x25d);
        bVar7 = true;
        bVar6 = true;
        bVar21 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a76e62;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UChannel_ReceivedRawBunch");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId607,"UChannel_ReceivedRawBunch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
               ,0x25f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId607);
  }
  if (((bool)param_1->bHasPackageMapExports) &&
     (pUVar2 = (this->Connection).field0_0x0.DebugPtr, pUVar2->bInternalAck == 0)) {
    this_01 = pUVar15;
    if ((pUVar2->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
      pUVar13 = Z_Construct_UClass_UPackageMapClient_NoRegister();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)&pUVar2->PackageMap,pUVar13);
      if (bVar9) {
        this_01 = (UPackageMapClient *)(pUVar2->PackageMap).field0_0x0.DebugPtr;
      }
    }
    UPackageMapClient::ReceiveNetGUIDBunch(this_01,param_1);
    if ((param_1->_padding_ & 0x200) != 0) {
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_100,ReceivedNetGUIDBunchFail);
      UE::Net::AddToChainResultPtr
                ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                 (TNetResult<ENetCloseResult> *)local_100);
      if (local_d8 != 0) {
        (**(code **)(local_d8 + -0x10))(local_d8 + -0x10);
      }
      if ((void *)local_100._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_100._24_8_);
      }
      if (1 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      goto LAB_147a776bf;
    }
  }
  pUVar2 = (this->Connection).field0_0x0.DebugPtr;
  if ((pUVar2->bInternalAck == 0) || (this->Broken == 0)) {
    uVar20 = this->ChIndex;
    uVar16 = 0;
    uVar17 = uVar16;
    if ((int)uVar20 < (pUVar2->Channels).ArrayNum) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(UChannel **)((pUVar2->Channels).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
    if (pUVar3 == (UChannel *)0x0) {
      bVar9 = this == (UChannel *)0x0;
    }
    else {
      bVar9 = pUVar3 == this;
    }
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Connection->Channels[ChIndex]==this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x27e,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->bReliable != '\0') {
      pUVar2 = (this->Connection).field0_0x0.DebugPtr;
      uVar20 = this->ChIndex;
      uVar17 = uVar16;
      if ((int)uVar20 < (pUVar2->InReliable).ArrayNum) {
        uVar17 = ~uVar20 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (param_1->ChSequence !=
          *(int *)((pUVar2->InReliable).AllocatorInstance.Data + (longlong)(int)uVar20 * 4) + 1) {
        if ((((this->Connection).field0_0x0.DebugPtr)->bInternalAck != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Connection->IsInternalAck()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar20 = this->ChIndex;
        local_148 = (this->Connection).field0_0x0.DebugPtr;
        uVar17 = uVar16;
        if ((int)uVar20 < (local_148->InReliable).ArrayNum) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((param_1->ChSequence <=
             *(int *)((local_148->InReliable).AllocatorInstance.Data + (longlong)(int)uVar20 * 4))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Bunch.ChSequence>Connection->InReliable[ChIndex]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                  ,0x288,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (param_1->bPartialCustomExportsFinal != '\0') {
          if (2 < (byte)LogNetPartialBunch._0_1_) {
            FInBunch::ToString(param_1,&local_110);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch)
            ;
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
          *param_2 = true;
        }
        if (4 < (byte)LogNetTraffic._0_1_) {
          local_148 = (this->Connection).field0_0x0.DebugPtr;
          if (this->ChIndex < (local_148->InReliable).ArrayNum) {
            uVar16 = (uint)~this->ChIndex >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        }
        pFVar14 = this->InRec;
        ppFVar18 = &this->InRec;
        if (pFVar14 != (FInBunch *)0x0) {
          do {
            if (param_1->ChSequence == pFVar14->ChSequence) goto LAB_147a776bf;
            if (param_1->ChSequence < pFVar14->ChSequence) break;
            ppFVar18 = &pFVar14->Next;
            pFVar14 = *ppFVar18;
          } while (pFVar14 != (FInBunch *)0x0);
        }
        pFVar14 = ::operator_new(0xf0);
        if (pFVar14 != (FInBunch *)0x0) {
          pUVar15 = (UPackageMapClient *)FInBunch::FInBunch(pFVar14,param_1);
        }
        pUVar15->_padding_ = (longlong)*ppFVar18;
        *ppFVar18 = (FInBunch *)pUVar15;
        this->NumInRec = this->NumInRec + 1;
        this_00 = (((((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr)->
                  NetworkMetricsDatabase).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UNetworkMetricsDatabase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        UNetworkMetricsDatabase::SetMaxInt
                  (this_00,UE::Net::Metric::IncomingReliableMessageQueueMaxSize,
                   (longlong)this->NumInRec);
        if (0x1ff < this->NumInRec) {
          FArchiveState::SetError((FArchiveState *)param_1);
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (local_d0,MaxReliableExceeded);
          UE::Net::AddToChainResultPtr
                    ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                     (TNetResult<ENetCloseResult> *)local_d0);
          if (local_a8 != 0) {
            (**(code **)(local_a8 + -0x10))(local_a8 + -0x10);
          }
          if ((void *)local_d0._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_d0._24_8_);
          }
          if (1 < (byte)LogNetTraffic._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          }
        }
        goto LAB_147a776bf;
      }
    }
    bVar9 = ReceivedNextBunch(this,param_1,param_2);
    if ((param_1->_padding_ & 0x200) == 0) {
      if ((!bVar9) && (this->InRec != (FInBunch *)0x0)) {
        while( true ) {
          if ((((this->Connection).field0_0x0.DebugPtr)->bInternalAck != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Connection->IsInternalAck()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                 ,0x2cc,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar20 = this->ChIndex;
          pUVar2 = (this->Connection).field0_0x0.DebugPtr;
          uVar17 = uVar16;
          if ((int)uVar20 < (pUVar2->InReliable).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (this->InRec->ChSequence !=
              *(int *)((pUVar2->InReliable).AllocatorInstance.Data + (longlong)(int)uVar20 * 4) + 1)
          break;
          if (4 < (byte)LogNetTraffic._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          }
          pFVar14 = this->InRec;
          local_res20[0] = false;
          pFVar4 = pFVar14->Next;
          this->NumInRec = this->NumInRec + -1;
          this->InRec = pFVar4;
          pFVar14->Next = (FInBunch *)0x0;
          bVar9 = ReceivedNextBunch(this,pFVar14,local_res20);
          if ((local_res20[0] != false) && (2 < (byte)LogNetTraffic._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
          }
          if ((param_1->_padding_ & 0x200) != 0) {
            if (1 < (byte)LogNetTraffic._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            }
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_70,ReceivedNextBunchQueueFail);
            UE::Net::AddToChainResultPtr
                      ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                       (TNetResult<ENetCloseResult> *)local_70);
            if (local_48 != 0) {
              (**(code **)(local_48 + -0x10))(local_48 + -0x10);
            }
            goto LAB_147a776ad;
          }
          if (pFVar14 != (FInBunch *)0x0) {
            (**(code **)pFVar14->_padding_)(pFVar14,1);
          }
          if ((bVar9) || (this->InRec == (FInBunch *)0x0)) break;
        }
      }
    }
    else {
      if (1 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_a0,ReceivedNextBunchFail);
      UE::Net::AddToChainResultPtr
                ((TPimplPtr<UE::Net::FNetResult,1> *)&param_1->_padding_,
                 (TNetResult<ENetCloseResult> *)local_a0);
      local_70._24_8_ = local_a0._24_8_;
      if (local_78 != 0) {
        (**(code **)(local_78 + -0x10))(local_78 + -0x10);
        local_70._24_8_ = local_a0._24_8_;
      }
LAB_147a776ad:
      if ((void *)local_70._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_70._24_8_);
      }
    }
  }
  else if ((param_1->bClose != '\0') &&
          (param_1->bPartial != '\x01' || param_1->bPartialFinal != '\0')) {
    if (4 < (byte)LogNetTraffic._0_1_) {
      FInBunch::ToString(param_1,&local_120);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if (param_1->CloseReason == Dormancy) {
      uVar20 = 4;
    }
    this->Dormant = uVar20 >> 2;
    if ((((((uint)this->_padding_ >> 0x1e & 1) == 0) && (this->bPooled == 0)) &&
        (cVar10 = (**(code **)(this->_padding_ + 0x348))(this,1,param_1->CloseReason),
        cVar10 != '\0')) && (this->bPooled == 0)) {
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
    }
  }
LAB_147a776bf:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ReceivedSequencedBunch @ 147a77740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChannel::ReceivedSequencedBunch(UChannel *this,FInBunch *param_1)

{
  UNetConnection *pUVar1;
  char cVar2;
  uint uVar3;
  UNetDriver *this_00;
  bool bVar4;
  bool bVar5;
  FInBunch *local_18;
  UChannel *local_10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UChannel_ReceivedSequencedBunch");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId571,"UChannel_ReceivedSequencedBunch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
               ,0x23b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId571);
  }
  if (this->Closing == 0) {
    (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  }
  if (param_1->bClose == '\0') {
    bVar4 = false;
  }
  else {
    this_00 = (UNetDriver *)0x0;
    uVar3 = 0;
    if (param_1->CloseReason == Dormancy) {
      uVar3 = 4;
    }
    this->Dormant = uVar3 >> 2;
    if (this->InRec != (FInBunch *)0x0) {
      local_18 = param_1;
      local_10 = this;
      `UChannel::ReceivedSequencedBunch'::__l11::<lambda_1>::operator()(&local_18);
    }
    if ((this->ChIndex == 0) && (4 < (byte)LogNet._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (4 < (byte)LogNetTraffic._0_1_) {
      ::LexToString(param_1->CloseReason);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    if ((((uint)this->_padding_ >> 0x1e & 1) == 0) && (this->bPooled == 0)) {
      pUVar1 = (this->Connection).field0_0x0.DebugPtr;
      if (pUVar1 != (UNetConnection *)0x0) {
        this_00 = (pUVar1->Driver).field0_0x0.DebugPtr;
      }
      cVar2 = (**(code **)(this->_padding_ + 0x348))(this,0,param_1->CloseReason);
      if (cVar2 != '\0') {
        if (this_00 != (UNetDriver *)0x0) {
          UNetDriver::ReleaseToChannelPool(this_00,this);
        }
        if (this->bPooled == 0) {
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
        }
      }
    }
    bVar4 = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
}

// SendBunch @ 147a85630

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPacketIdRange __thiscall UChannel::SendBunch(UChannel *this,FOutBunch *param_1,bool param_2)

{
  TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  int *piVar3;
  UNetConnection *pUVar4;
  UChannel *pUVar5;
  longlong *plVar6;
  UNetConnection *pUVar7;
  longlong lVar8;
  long64 lVar9;
  code *pcVar10;
  undefined1 uVar11;
  int iVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FPacketIdRange FVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  FNetTraceCollector *pFVar21;
  uchar *puVar22;
  FOutBunch *pFVar23;
  FNetTraceCollector *pFVar24;
  FText *this_00;
  FString *pFVar25;
  FOutBunch *pFVar26;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  byte bVar30;
  FScriptContainerElement *pFVar31;
  ForElementType<FNetTracePacketContentEvent> FVar32;
  int iVar33;
  wchar_t *pwVar34;
  FNetTraceCollector *pFVar35;
  ulonglong uVar36;
  int iVar37;
  ulonglong uVar38;
  byte bVar39;
  byte bVar40;
  undefined7 in_register_00000081;
  byte in_R9B;
  longlong lVar41;
  FNetTraceCollector *pFVar42;
  uint local_res8 [2];
  FPacketIdRange local_res10;
  FNetTraceCollector *local_res18;
  byte local_res20;
  char *pcVar43;
  bool local_1c8;
  FLLMScope local_1c4;
  FPacketIdRange local_1c0;
  FNetTraceCollector *local_1b8;
  FMemScope local_1b0;
  ulonglong local_1a8;
  FString local_1a0;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  FOutBunch *local_180;
  int local_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  FName local_168;
  FScriptContainerElement *local_160;
  FNetTraceCollector **local_158;
  UChannel *local_150;
  FString local_148;
  byte local_138;
  undefined7 uStack_137;
  long64 lStack_130;
  void *local_128 [2];
  void *local_118 [2];
  void *local_108 [2];
  void *local_f8 [2];
  void *local_e8 [2];
  void *local_d8 [2];
  FText local_c8;
  void *local_b8 [2];
  FNetResult local_a8;
  FNetResult local_78;
  
  local_res18 = (FNetTraceCollector *)CONCAT71(in_register_00000081,param_2);
  pFVar42 = (FNetTraceCollector *)0x0;
  pwVar34 = (wchar_t *)&DAT_00000001;
  uVar15 = 0;
  local_res8[0] = 0;
  pwVar20 = (wchar_t *)&DAT_00000001;
  local_res10 = (FPacketIdRange)param_1;
  local_res20 = in_R9B;
  FLLMScope::FLLMScope(&local_1c4,LLMTagDeclaration_NetChannel.UniqueName,false,None,Default,true);
  local_168 = LLMTagDeclaration_NetChannel.UniqueName;
  FMemScope::FMemScope(&local_1b0,&local_168,true);
  if (this->ChIndex == -1) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1840253650790775579>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                        ,0x4e5,"ChIndex != -1");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    param_1->_padding_ = -1;
    FMemScope::~FMemScope(&local_1b0);
    FLLMScope::~FLLMScope(&local_1c4);
  }
  else {
    if (((((this->Connection).field0_0x0.DebugPtr)->bUnlimitedBunchSizeAllowed == 0) &&
        (local_res18 != (FNetTraceCollector *)0x0)) &&
       ((longlong)NetMaxConstructedPartialBunchSizeBytes <
        *(longlong *)((longlong)local_res18->OffsetStack + 0x20) + 7 >> 3)) {
      local_158 = &local_res18;
      local_150 = this;
      bVar13 = `UChannel::SendBunch'::__l6::<lambda_1>::operator()(&local_158);
      if (!bVar13) {
        if (1 < (byte)LogNetPartialBunch._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))(this,local_128);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
          if (local_128[0] != (void *)0x0) {
            FMemory::Free(local_128[0]);
          }
        }
        FArchiveState::SetError((FArchiveState *)local_res18);
        param_1->_padding_ = -1;
        FMemScope::~FMemScope(&local_1b0);
        FLLMScope::~FLLMScope(&local_1c4);
        return (FPacketIdRange)param_1;
      }
    }
    if ((this->Closing != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Closing",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0x4f2,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    uVar17 = this->ChIndex;
    pUVar4 = (this->Connection).field0_0x0.DebugPtr;
    iVar16 = (pUVar4->Channels).ArrayNum;
    pFVar31 = (FScriptContainerElement *)(longlong)iVar16;
    uVar29 = uVar15;
    if ((int)uVar17 < iVar16) {
      uVar29 = ~uVar17 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (pwVar20 = (wchar_t *)(longlong)(int)uVar17,
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pwVar34 = (wchar_t *)pFVar31, bVar13)) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    pUVar5 = *(UChannel **)
              ((pUVar4->Channels).AllocatorInstance.Data + (longlong)(longlong)(int)uVar17 * 8);
    if (pUVar5 == (UChannel *)0x0) {
      bVar13 = this == (UChannel *)0x0;
    }
    else {
      bVar13 = pUVar5 == this;
    }
    if (!bVar13) {
      uVar17 = this->ChIndex;
      pUVar4 = (this->Connection).field0_0x0.DebugPtr;
      uVar29 = uVar15;
      if ((int)uVar17 < (pUVar4->Channels).ArrayNum) {
        uVar29 = ~uVar17 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        FVar18 = (FPacketIdRange)(*pcVar10)();
        return FVar18;
      }
      if (*(longlong *)((pUVar4->Channels).AllocatorInstance.Data + (longlong)(int)uVar17 * 8) == 0)
      {
        pwVar34 = L"Null";
        pFVar24 = pFVar42;
      }
      else {
        uVar17 = this->ChIndex;
        pUVar4 = (this->Connection).field0_0x0.DebugPtr;
        if ((int)uVar17 < (pUVar4->Channels).ArrayNum) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          FVar18 = (FPacketIdRange)(*pcVar10)();
          return FVar18;
        }
        plVar6 = *(longlong **)
                  ((pUVar4->Channels).AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
        puVar19 = (undefined8 *)(**(code **)(*plVar6 + 0x2d0))(plVar6,local_108);
        if (*(int *)(puVar19 + 1) == 0) {
          pwVar34 = L"";
          pFVar24 = (FNetTraceCollector *)&DAT_00000001;
        }
        else {
          pwVar34 = (wchar_t *)*puVar19;
          pFVar24 = (FNetTraceCollector *)&DAT_00000001;
        }
      }
      puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d0))(this,local_118);
      if (*(int *)(puVar19 + 1) == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)*puVar19;
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Connection->Channels[ChIndex]==this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0x4f3,L"This: %s, Connection->Channels[ChIndex]: %s");
      if (local_118[0] != (void *)0x0) {
        FMemory::Free(local_118[0]);
      }
      if ((pFVar24 != (FNetTraceCollector *)0x0) && (local_108[0] != (void *)0x0)) {
        FMemory::Free(local_108[0]);
      }
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        FVar18 = (FPacketIdRange)(*pcVar10)();
        return FVar18;
      }
    }
    if ((ZPULL(*(undefined1 *)((longlong)local_res18->NestingStack + 0x29),1,1) != '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bunch->IsError()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0x4f4,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    if (((*(byte *)((longlong)local_res18->OffsetStack + 0x7d) & 1) != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Bunch->bHasPackageMapExports",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0x4f5,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    if (((*(byte *)((longlong)local_res18->OffsetStack + 0x7c) & 4) == 0) ||
       (*(char *)((longlong)local_res18->OffsetStack + 0x7e) != '\x01')) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    uVar15 = *(uint *)&this->field_0x30;
    if ((ZPULL(uVar15,0xc,1) != 0) &&
       ((pUVar4 = (this->Connection).field0_0x0.DebugPtr, (this->OpenPacketId).First == -1 ||
        ((pUVar4->ResendAllDataState != None && (!bVar13)))))) {
      bVar27 = 1;
      if (pUVar4->ResendAllDataState == SinceCheckpoint) {
        bVar27 = ~this->bOpenedForCheckpoint & 1;
        uVar15 = uVar15 | 0x2000;
        *(uint *)&this->field_0x30 = uVar15;
      }
      if (bVar27 != 0) {
        bVar27 = *(byte *)((longlong)local_res18->OffsetStack + 0x7c) | 2;
        *(byte *)((longlong)local_res18->OffsetStack + 0x7c) = bVar27;
        uVar15 = (~(uint)bVar27 ^ *(uint *)&this->field_0x30) & 0x10 ^ *(uint *)&this->field_0x30;
        *(uint *)&this->field_0x30 = uVar15;
      }
    }
    if ((((uVar15 & 0x10) != 0) &&
        ((*(byte *)((longlong)local_res18->OffsetStack + 0x7c) & 0x10) != 0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!OpenTemporary || !Bunch->bReliable",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                            ,0x50d,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      FVar18 = (FPacketIdRange)(*pcVar10)();
      return FVar18;
    }
    pUVar4 = (this->Connection).field0_0x0.DebugPtr;
    pTVar1 = &pUVar4->OutgoingBunches;
    piVar3 = &(pUVar4->OutgoingBunches).ArrayMax;
    iVar16 = (pUVar4->MaxPacket * 8 - pUVar4->MaxPacketHandlerBits) + -0x235;
    lVar41 = (longlong)iVar16;
    (pUVar4->OutgoingBunches).ArrayNum = 0;
    local_1a8 = lVar41 + (ulonglong)(iVar16 >> 0x1f & 7) & 0xfffffffffffffff8;
    if (*piVar3 < 0) {
      pwVar20 = (wchar_t *)0x0;
      pwVar34 = (wchar_t *)piVar3;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar3);
    }
    if (((this->Connection).field0_0x0.DebugPtr)->bInternalAck == 0) {
      puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 0x308))(this,local_f8,local_res18,0);
      if (pTVar1 != (TArray<FOutBunch_*,TSizedDefaultAllocator<32>_> *)puVar19) {
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        if (pFVar31 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar31);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar19;
        *puVar19 = 0;
        (pUVar4->OutgoingBunches).ArrayNum = *(int *)(puVar19 + 1);
        *piVar3 = *(int *)((longlong)puVar19 + 0xc);
        puVar19[1] = 0;
      }
      if (local_f8[0] != (void *)0x0) {
        FMemory::Free(local_f8[0]);
      }
    }
    local_1c8 = false;
    if ((pUVar4->OutgoingBunches).ArrayNum == 0) {
      local_1c8 = (bool)local_res20;
    }
    cVar14 = (**(code **)(((((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr)->
                          _padding_ + 0x3f8))();
    pFVar24 = local_res18;
    if (cVar14 != '\0') {
      uVar15 = 0xffffffff;
      pFVar35 = pFVar42;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar35 = *(FNetTraceCollector **)((longlong)local_res18->OffsetStack + 0x40);
      }
      if (pFVar35 != (FNetTraceCollector *)0x0) {
        uVar15 = FNetTrace::BeginPacketContentEvent
                           (pFVar35,NameId,*(uint *)((longlong)local_res18->OffsetStack + 0x20));
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          MustBeMappedGuids_IsAtStartOfBunch =
               UE::Net::CreatePersistentNetDebugName(L"MustBeMappedGuids_IsAtStartOfBunch",0x22);
          _Init_thread_footer(&::_TSS0);
        }
        uVar17 = FNetTrace::TraceName(MustBeMappedGuids_IsAtStartOfBunch);
        FVar32 = (pFVar35->Events).AllocatorInstance.SecondaryData;
        if (FVar32 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar32 = (ForElementType<FNetTracePacketContentEvent>)&pFVar35->Events;
        }
        *(uint *)((longlong)FVar32 + (ulonglong)uVar15 * 0x10) = uVar17;
      }
      (**(code **)(this->_padding_ + 0x310))(this,local_res18);
      pFVar21 = (FNetTraceCollector *)(ulonglong)local_1c8;
      if ((*(byte *)((longlong)local_res18->OffsetStack + 0x7d) & 2) != 0) {
        pFVar21 = pFVar42;
      }
      local_1c8 = SUB81(pFVar21,0);
      if (uVar15 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent
                  (pFVar35,uVar15,*(uint *)((longlong)pFVar24->OffsetStack + 0x20));
      }
    }
    local_180 = (FOutBunch *)0x0;
    if (((local_1c8 != false) &&
        (pUVar7 = (this->Connection).field0_0x0.DebugPtr,
        (pUVar7->LastOut).ChIndex == *(int *)((longlong)local_res18->OffsetStack + 0x68))) &&
       (((((pUVar7->LastOut).field_0xfc ^ *(byte *)((longlong)local_res18->OffsetStack + 0x7c)) &
         0x10) == 0 &&
        ((((pUVar7->AllowMerge != false && (lVar8 = (pUVar7->LastEnd).Num, lVar8 != 0)) &&
          (lVar8 == (pUVar7->SendBuffer).Num)) &&
         ((pUVar7->LastOut)._padding_ + *(longlong *)((longlong)local_res18->OffsetStack + 0x20) <=
          lVar41)))))) {
      if ((((pUVar7->LastOut)._padding_ & 0x200) != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Connection->LastOut.IsError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                              ,0x547,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        FVar18 = (FPacketIdRange)(*pcVar10)();
        return FVar18;
      }
      pUVar7 = (this->Connection).field0_0x0.DebugPtr;
      lVar9 = *(long64 *)(local_res18->OffsetStack + 8);
      pcVar10 = *(code **)((pUVar7->LastOut)._padding_ + 400);
      puVar22 = FBitWriter::GetData((FBitWriter *)local_res18);
      (*pcVar10)(&pUVar7->LastOut,puVar22,lVar9);
      pUVar7 = (this->Connection).field0_0x0.DebugPtr;
      bVar27 = (pUVar7->LastOut).field_0xfc;
      (pUVar7->LastOut).field_0xfc =
           (bVar27 | (byte)local_res18->OffsetStack[0x1f]) & 2 ^ bVar27 & 0xfd;
      pUVar7 = (this->Connection).field0_0x0.DebugPtr;
      bVar27 = (pUVar7->LastOut).field_0xfc;
      (pUVar7->LastOut).field_0xfc =
           (bVar27 | (byte)local_res18->OffsetStack[0x1f]) & 4 ^ bVar27 & 0xfb;
      (((this->Connection).field0_0x0.DebugPtr)->LastOut)._padding_ =
           *(longlong *)(local_res18->OffsetStack + 0x10);
      local_res18->OffsetStack[0x10] = 0;
      local_res18->OffsetStack[0x11] = 0;
      pUVar7 = (this->Connection).field0_0x0.DebugPtr;
      local_180 = pUVar7->LastOutBunch;
      local_res18 = (FNetTraceCollector *)&pUVar7->LastOut;
      if ((((pUVar7->LastOut)._padding_ & 0x200) != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Bunch->IsError()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                              ,0x553,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        FVar18 = (FPacketIdRange)(*pcVar10)();
        return FVar18;
      }
      UNetConnection::PopLastStart((this->Connection).field0_0x0.DebugPtr);
      puVar2 = &((((this->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr)->OutBunches
      ;
      *puVar2 = *puVar2 - 1;
    }
    if (lVar41 < *(longlong *)(local_res18->OffsetStack + 8)) {
      puVar22 = FBitWriter::GetData((FBitWriter *)local_res18);
      local_1c8 = false;
      uVar36 = *(ulonglong *)(local_res18->OffsetStack + 8);
      local_1c0 = (FPacketIdRange)puVar22;
      while (0 < (longlong)uVar36) {
        pFVar23 = ::operator_new(0x150);
        pFVar24 = pFVar42;
        if (pFVar23 != (FOutBunch *)0x0) {
          pFVar24 = (FNetTraceCollector *)FOutBunch::FOutBunch(pFVar23,this,false);
        }
        uVar38 = local_1a8;
        if ((longlong)uVar36 < (longlong)local_1a8) {
          uVar38 = uVar36;
        }
        local_1b8 = pFVar24;
        (**(code **)(*(longlong *)pFVar24->NestingStack + 400))(pFVar24,puVar22,uVar38);
        *(longlong *)(local_1b8->OffsetStack + 0x10) =
             *(longlong *)(local_res18->OffsetStack + 0x10);
        local_res18->OffsetStack[0x10] = 0;
        local_res18->OffsetStack[0x11] = 0;
        pFVar31 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar31 <= (FScriptContainerElement *)&local_1b8) &&
           ((FScriptContainerElement *)&local_1b8 <
            pFVar31 + (longlong)(pUVar4->OutgoingBunches).ArrayMax * 8)) {
          pwVar20 = (wchar_t *)&local_1b8;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          pwVar34 = (wchar_t *)pFVar31;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            FVar18 = (FPacketIdRange)(*pcVar10)();
            return FVar18;
          }
        }
        iVar16 = (pUVar4->OutgoingBunches).ArrayNum;
        if (iVar16 == (pUVar4->OutgoingBunches).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,&(pUVar4->OutgoingBunches).ArrayMax);
        }
        (pUVar4->OutgoingBunches).ArrayNum = iVar16 + 1;
        *(FNetTraceCollector **)((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 8) =
             local_1b8;
        ::FString::PrintfImpl(&local_1a0,L"Partial[%d]: %s");
        pFVar24 = local_1b8;
        pFVar25 = (FString *)((longlong)(local_1b8->Events).AllocatorInstance.InlineData + 0x28);
        if (pFVar25 != &local_1a0) {
          pFVar31 = (pFVar25->Data).AllocatorInstance.Data;
          if (pFVar31 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar31);
          }
          (pFVar25->Data).AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)(pFVar24->Events).AllocatorInstance.InlineData + 0x30) =
               local_1a0.Data.ArrayNum;
          *(int *)((longlong)(pFVar24->Events).AllocatorInstance.InlineData + 0x34) =
               local_1a0.Data.ArrayMax;
          local_1a0.Data.ArrayNum = 0;
          local_1a0.Data.ArrayMax = 0;
        }
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        uVar36 = uVar36 - uVar38;
        puVar22 = (uchar *)((longlong)local_1c0 + ((longlong)uVar38 >> 3));
        local_1c0 = (FPacketIdRange)puVar22;
        if (4 < (byte)LogNetPartialBunch._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        }
        if (uVar36 == 0) break;
        uVar15 = (uint)((longlong)uVar38 >> 0x3f) & 7;
        if (((int)uVar38 + uVar15 & 7) != uVar15) {
          pcVar43 = "bitsLeft == 0 || bitsThisBunch % 8 == 0";
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1840253650790775432>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                              ,0x578,"bitsLeft == 0 || bitsThisBunch % 8 == 0");
          pwVar20 = (wchar_t *)pcVar43;
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            FVar18 = (FPacketIdRange)(*pcVar10)();
            return FVar18;
          }
        }
      }
    }
    else {
      pFVar31 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar31 <= (FScriptContainerElement *)&local_res18) &&
         ((FScriptContainerElement *)&local_res18 <
          pFVar31 + (longlong)(pUVar4->OutgoingBunches).ArrayMax * 8)) {
        pwVar20 = (wchar_t *)&local_res18;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        pwVar34 = (wchar_t *)pFVar31;
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          FVar18 = (FPacketIdRange)(*pcVar10)();
          return FVar18;
        }
      }
      iVar16 = (pUVar4->OutgoingBunches).ArrayNum;
      if (iVar16 == (pUVar4->OutgoingBunches).ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(pUVar4->OutgoingBunches).ArrayMax);
      }
      (pUVar4->OutgoingBunches).ArrayNum = iVar16 + 1;
      *(FNetTraceCollector **)((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 8) =
           local_res18;
    }
    iVar16 = (pUVar4->OutgoingBunches).ArrayNum;
    iVar37 = this->NumOutRec + iVar16;
    local_1c0.First = -1;
    local_1c0.Last = -1;
    iVar33 = ((byte)((byte)local_res18->OffsetStack[0x1f] >> 2) & 1) + 0x200;
    if (((0 < GCVarNetPartialBunchReliableThreshold) &&
        (GCVarNetPartialBunchReliableThreshold <= iVar16)) &&
       (((this->Connection).field0_0x0.DebugPtr)->bInternalAck == 0)) {
      if (iVar37 < iVar33) {
        if (4 < (byte)LogNetPartialBunch._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u__OutgoingBunche_151832730,
                     (FLogCategoryBase *)&LogNetPartialBunch);
        }
        *(byte *)(local_res18->OffsetStack + 0x1f) = (byte)local_res18->OffsetStack[0x1f] | 0x10;
        this->bPausedUntilReliableACK = 1;
      }
      else if (2 < (byte)LogNetPartialBunch._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))
                  (this,local_e8,iVar16,GCVarNetPartialBunchReliableThreshold,pwVar20,pwVar34);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        if (local_e8[0] != (void *)0x0) {
          FMemory::Free(local_e8[0]);
        }
      }
    }
    if (((local_res18->OffsetStack[0x1f] & 0x10) == 0) || (iVar37 < iVar33)) {
      if ((4 < (byte)LogNetPartialBunch._0_1_) && (1 < (pUVar4->OutgoingBunches).ArrayNum)) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_b8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        if (local_b8[0] != (void *)0x0) {
          FMemory::Free(local_b8[0]);
        }
      }
      iVar16 = (pUVar4->OutgoingBunches).ArrayNum;
      if (0 < iVar16) {
        local_1a8 = 0;
        pFVar24 = pFVar42;
        do {
          uVar36 = local_1a8;
          uVar17 = (uint)pFVar24;
          uVar15 = 0;
          if ((int)uVar17 < iVar16) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            FVar18 = (FPacketIdRange)(*pcVar10)();
            return FVar18;
          }
          pFVar23 = *(FOutBunch **)((pTVar1->AllocatorInstance).Data + uVar36);
          bVar30 = (pFVar23->field_0xfc ^ (byte)local_res18->OffsetStack[0x1f]) & 0x10 ^
                   pFVar23->field_0xfc;
          pFVar23->field_0xfc = bVar30;
          bVar30 = (bVar30 ^ (byte)local_res18->OffsetStack[0x1f]) & 2 ^ bVar30;
          pFVar23->field_0xfc = bVar30;
          bVar30 = (bVar30 ^ (byte)local_res18->OffsetStack[0x1f]) & 4 ^ bVar30;
          pFVar23->field_0xfc = bVar30;
          pFVar23->CloseReason = *(undefined1 *)((longlong)local_res18->OffsetStack + 0x7e);
          bVar30 = (bVar30 ^ (byte)local_res18->OffsetStack[0x1f]) & 8 ^ bVar30;
          bVar27 = pFVar23->field_0xfd;
          pFVar23->field_0xfc = bVar30;
          pFVar23->ChIndex = local_res18->OffsetStack[0x1a];
          uVar15 = local_res18->OffsetStack[0x1c];
          (pFVar23->ChName).ComparisonIndex = (FNameEntryId)local_res18->OffsetStack[0x1b];
          (pFVar23->ChName).Number = uVar15;
          if (pFVar23->bHasPackageMapExports == '\0' && pFVar23->bPartialCustomExportsFinal == '\0')
          {
            bVar27 = (bVar27 | *(undefined1 *)((longlong)local_res18->OffsetStack + 0x7d)) & 2 ^
                     bVar27 & 0xfd;
            pFVar23->field_0xfd = bVar27;
          }
          if (1 < (pUVar4->OutgoingBunches).ArrayNum) {
            bVar28 = 0;
            if (uVar17 == 0) {
              bVar28 = 0x40;
            }
            pFVar23->field_0xfc = bVar28 | bVar30 & 0xbf | 0x20;
            bVar39 = 0;
            if (uVar17 == (pUVar4->OutgoingBunches).ArrayNum - 1U) {
              bVar39 = 0x80;
            }
            bVar40 = 0xfd;
            if (uVar17 == 0) {
              bVar40 = 0xff;
            }
            bVar40 = (bVar39 | bVar28 | bVar30 & 0x3f | 0x20) & bVar40;
            pFVar23->field_0xfc = bVar40;
            if (((local_res18->OffsetStack[0x1f] & 4) == 0) ||
               ((pUVar4->OutgoingBunches).ArrayNum - 1U != uVar17)) {
              bVar30 = 0;
            }
            else {
              bVar30 = 4;
            }
            bVar30 = bVar40 & 0xfb | bVar30;
            pFVar23->field_0xfc = bVar30;
          }
          if (((bVar27 & 4) != 0) && ((bVar30 & 0x20) == 0)) {
            local_res8[0] = local_res8[0] & 0xffffff00;
            `UChannel::SendBunch'::__l233::<lambda_3>::operator()(local_res8);
          }
          pFVar26 = PrepBunch(this,pFVar23,local_180,local_1c8);
          if ((5 < (byte)LogNetPartialBunch._0_1_) && (1 < (pUVar4->OutgoingBunches).ArrayNum)) {
            lVar41 = pFVar26->_padding_;
            if (((pFVar26->_padding_ & 0x200) != 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsError()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                                    ,0x49,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              FVar18 = (FPacketIdRange)(*pcVar10)();
              return FVar18;
            }
            FCrc::MemCrc_DEPRECATED((void *)pFVar26->_padding_,(int)(lVar41 + 7 >> 3),0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch)
            ;
            if (6 < (byte)LogNetPartialBunch._0_1_) {
              local_188 = (pFVar26->DebugString).Data.ArrayNum;
              lVar41 = (longlong)local_188;
              local_160 = (pFVar26->DebugString).Data.AllocatorInstance.Data;
              local_190.Data = (FScriptContainerElement *)0x0;
              if (local_188 == 0) {
                local_184 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_188,0,&local_190,local_188,&local_184);
                memcpy(local_190.Data,local_160,lVar41 * 2);
              }
              UE::Logging::Private::BasicLog<7>
                        (&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
              if (local_190.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_190.Data);
              }
            }
          }
          pFVar24 = (FNetTraceCollector *)pFVar23->_padding_;
          pFVar26->ReceivedAck = '\0';
          iVar16 = UNetConnection::SendRawBunch
                             ((this->Connection).field0_0x0.DebugPtr,pFVar26,local_1c8,pFVar24);
          if (((this->OpenPacketId).First == -1) && (this->OpenedLocally != 0)) {
            FVar18.Last = iVar16;
            FVar18.First = iVar16;
            this->OpenPacketId = FVar18;
            local_178 = iVar16;
            iStack_174 = iVar16;
          }
          if (pFVar26->bClose != '\0') {
            (**(code **)(this->_padding_ + 0x2c0))(this);
          }
          iVar37 = iVar16;
          iVar12 = iVar16;
          iVar33 = iVar16;
          if (uVar17 != 0) {
            iVar37 = local_170;
            iVar12 = iStack_16c;
            iVar33 = local_1c0.First;
          }
          iStack_16c = iVar12;
          local_170 = iVar37;
          local_1c0.Last = iVar33;
          local_1c0.First = iVar16;
          FOutBunch::operator=(&((this->Connection).field0_0x0.DebugPtr)->LastOut,pFVar26);
          pUVar7 = (this->Connection).field0_0x0.DebugPtr;
          pFVar24 = (FNetTraceCollector *)(ulonglong)(uVar17 + 1);
          local_1a8 = local_1a8 + 8;
          lStack_130 = (pUVar7->SendBuffer).Num;
          bVar27 = *(byte *)((longlong)&(pUVar7->SendBuffer)._padding_ + 1) >> 1;
          local_138 = bVar27 & 1;
          *(ulonglong *)&pUVar7->LastEnd = CONCAT71(uStack_137,bVar27) & 0xffffffffffffff01;
          (pUVar7->LastEnd).Num = lStack_130;
          iVar16 = (pUVar4->OutgoingBunches).ArrayNum;
        } while ((int)(uVar17 + 1) < iVar16);
      }
      if (((local_res18->OffsetStack[0x1f] & 2) != 0) &&
         (((this->Connection).field0_0x0.DebugPtr)->ResendAllDataState == None)) {
        this->OpenPacketId = local_1c0;
      }
      while ((iVar16 = (int)pFVar42, -1 < iVar16 && (iVar16 < (pUVar4->OutgoingBunches).ArrayNum)))
      {
        if ((iVar16 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          FVar18 = (FPacketIdRange)(*pcVar10)();
          return FVar18;
        }
        pFVar42 = *(FNetTraceCollector **)((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 8);
        if ((pFVar42 != local_res18) && (pFVar42 != (FNetTraceCollector *)0x0)) {
          (*(code *)**(undefined8 **)pFVar42->NestingStack)(pFVar42,1);
        }
        pFVar42 = (FNetTraceCollector *)(ulonglong)(iVar16 + 1);
      }
      *(FPacketIdRange *)local_res10 = local_1c0;
      param_1 = (FOutBunch *)local_res10;
    }
    else {
      if (2 < (byte)LogNetPartialBunch._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        if (local_d8[0] != (void *)0x0) {
          FMemory::Free(local_d8[0]);
        }
        if (2 < (byte)LogNetPartialBunch._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetPartialBunch);
        }
      }
      PrintReliableBunchBuffer(this);
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"NetworkErrors",L"ClientReliableBufferOverflow",
                           L"Outgoing reliable buffer overflow");
      pFVar25 = FText::ToString(this_00);
      ::FString::FString(&local_148,pFVar25);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      pUVar4 = (this->Connection).field0_0x0.DebugPtr;
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_a8,ReliableBufferOverflow);
      UNetConnection::SendCloseReason(pUVar4,&local_a8);
      if (local_a8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_a8.NextResult + -0x10))((longlong)local_a8.NextResult + -0x10);
      }
      if (local_a8.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.ErrorContext.Data.AllocatorInstance.Data);
      }
      UE::Net::TNetControlMessageImpl<6,FString>::Send
                ((this->Connection).field0_0x0.DebugPtr,&local_148);
      pUVar4 = (this->Connection).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x308))(pUVar4,1);
      pUVar4 = (this->Connection).field0_0x0.DebugPtr;
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_78,ReliableBufferOverflow);
      UNetConnection::Close(pUVar4,&local_78);
      if (local_78.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_78.NextResult + -0x10))((longlong)local_78.NextResult + -0x10);
      }
      if (local_78.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ErrorContext.Data.AllocatorInstance.Data);
      }
      param_1 = (FOutBunch *)local_res10;
      *(FPacketIdRange *)local_res10 = local_1c0;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    FMemScope::~FMemScope(&local_1b0);
    FLLMScope::~FLLMScope(&local_1c4);
  }
  return (FPacketIdRange)param_1;
}

// SendRawBunch @ 147a873b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UChannel::SendRawBunch(UChannel *this,FOutBunch *param_1,bool param_2,FNetTraceCollector *param_3)

{
  FPacketIdRange FVar1;
  int iVar2;
  
  param_1->ReceivedAck = '\0';
  iVar2 = UNetConnection::SendRawBunch
                    ((this->Connection).field0_0x0.DebugPtr,param_1,param_2,param_3);
  if (((this->OpenPacketId).First == -1) && (this->OpenedLocally != 0)) {
    FVar1.Last = iVar2;
    FVar1.First = iVar2;
    this->OpenPacketId = FVar1;
  }
  if (param_1->bClose != '\0') {
    (**(code **)(this->_padding_ + 0x2c0))(this);
  }
  return iVar2;
}

// Serialize @ 147a88f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::Serialize(UChannel *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"UChannel::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  UObject::Serialize((UObject *)this,param_1);
  ::FString::FString(&local_48,"Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    if (this->InRec != (FInBunch *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
      (**(code **)(this->InRec->_padding_ + 0x270))(this->InRec,param_1);
      ::FString::FString(&local_48,"InRec");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (this->OutRec != (FOutBunch *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
      (**(code **)(this->OutRec->_padding_ + 0x270))(this->OutRec,param_1);
      ::FString::FString(&local_48,"OutRec");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (this->InPartialBunch != (FInBunch *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
      (**(code **)(this->InPartialBunch->_padding_ + 0x270))(this->InPartialBunch,param_1);
      ::FString::FString(&local_48,"InPartialBunch");
      UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

// SetClosingFlag @ 147a8be90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::SetClosingFlag(UChannel *this)

{
  this->Closing = 1;
  return;
}

// Tick @ 147a98720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChannel::Tick(UChannel *this)

{
  char cVar1;
  
  if (this->bPendingDormancy != 0) {
    cVar1 = (**(code **)(this->_padding_ + 800))(this,0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147a98749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x340))(this);
      return;
    }
  }
  return;
}

// operator() @ 150516d50

bool __thiscall `UChannel::SendBunch'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775573>);
  if (bVar2) {
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x2d0))
              (*(longlong **)((longlong)this + 8),local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775573>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150516ddd;
    }
  }
  bVar2 = false;
LAB_150516ddd:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150516e50

bool __thiscall `UChannel::ReceivedNextBunch'::__l311::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775844>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775844>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517320

bool __thiscall `UChannel::ReceivedSequencedBunch'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790776246>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790776246>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150517790

bool __thiscall `UChannel::ReceivedNextBunch'::__l311::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775843>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775843>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517b70

bool __thiscall `UChannel::ReceivedNextBunch'::__l311::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775842>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775842>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517e20

bool __thiscall `UChannel::SendBunch'::__l233::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790775354>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790775354>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

