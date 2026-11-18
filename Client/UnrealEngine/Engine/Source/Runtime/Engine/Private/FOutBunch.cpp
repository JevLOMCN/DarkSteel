// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FOutBunch @ 147a25e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::FOutBunch(FOutBunch *this,FOutBunch *param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  ForElementType<UE::Net::FNetToken> _Dst;
  ForElementType<UE::Net::FNetToken> _Src;
  
  FBitWriter::FBitWriter((FBitWriter *)this,(FBitWriter *)param_1);
  this->_padding_ = (longlong)&___7FNetBitWriter__6B_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  this->Next = param_1->Next;
  this->Channel = param_1->Channel;
  this->Time = param_1->Time;
  this->ChIndex = param_1->ChIndex;
  this->ChName = param_1->ChName;
  this->ChSequence = param_1->ChSequence;
  this->PacketId = param_1->PacketId;
  bVar6 = (this->ReceivedAck ^ param_1->ReceivedAck) & 1 ^ this->field_0xfc;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 2 ^ bVar6;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 4 ^ bVar6;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 8 ^ bVar6;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 0x10 ^ bVar6;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 0x20 ^ bVar6;
  this->field_0xfc = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfc) & 0x40 ^ bVar6;
  this->field_0xfc = bVar6;
  this->field_0xfc = (bVar6 ^ param_1->field_0xfc) & 0x7f ^ param_1->field_0xfc;
  bVar6 = (this->bHasPackageMapExports ^ param_1->bHasPackageMapExports) & 1 ^ this->field_0xfd;
  this->field_0xfd = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfd) & 2 ^ bVar6;
  this->field_0xfd = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0xfd) & 4 ^ bVar6;
  pTVar2 = &this->ExportNetGUIDs;
  this->field_0xfd = bVar6;
  this->field_0xfd = (bVar6 ^ param_1->field_0xfd) & 8 ^ bVar6;
  this->CloseReason = param_1->CloseReason;
  piVar1 = &(this->ExportNetGUIDs).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ExportNetGUIDs).ArrayNum;
  pFVar5 = (param_1->ExportNetGUIDs).AllocatorInstance.Data;
  (this->ExportNetGUIDs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->NetFieldExports;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NetFieldExports).ArrayMax;
  iVar4 = (param_1->NetFieldExports).ArrayNum;
  pFVar5 = (param_1->NetFieldExports).AllocatorInstance.Data;
  (this->NetFieldExports).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  (this->NetTokensPendingExport).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  _Src = (param_1->NetTokensPendingExport).AllocatorInstance.SecondaryData;
  iVar4 = (param_1->NetTokensPendingExport).ArrayNum;
  (this->NetTokensPendingExport).ArrayNum = iVar4;
  if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
    _Src = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensPendingExport;
  }
  piVar1 = &(this->NetTokensPendingExport).ArrayMax;
  if (iVar4 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,iVar4,0,&(this->NetTokensPendingExport).AllocatorInstance,iVar4,piVar1);
    _Dst = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<UE::Net::FNetToken>)0x0) {
      _Dst = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExport;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar4 << 2);
  }
  ::FString::FString(&this->DebugString,&param_1->DebugString);
  return this;
}

// FOutBunch @ 147a261a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::FOutBunch(FOutBunch *this,UChannel *param_1,bool param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  UNetConnection *pUVar4;
  FName FVar5;
  UChannel *pUVar6;
  
  pUVar4 = (param_1->Connection).field0_0x0.DebugPtr;
  FNetBitWriter::FNetBitWriter
            ((FNetBitWriter *)this,(pUVar4->PackageMap).field0_0x0.DebugPtr,
             (longlong)((pUVar4->MaxPacket * 8 - pUVar4->MaxPacketHandlerBits) + -0x235));
  this->Channel = param_1;
  this->Next = (FOutBunch *)0x0;
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  this->Time = 0.0;
  this->ChIndex = param_1->ChIndex;
  FVar5 = param_1->ChName;
  this->bHasPackageMapExports = '\0';
  this->bOutWantsFullInitState = '\0';
  this->bPartialCustomExportsFinal = '\0';
  this->bHasMustBeMappedGUIDs = '\0';
  this->ChName = FVar5;
  this->ChSequence = 0;
  this->PacketId = 0;
  this->CloseReason = Destroyed;
  this->field_0xfc = param_2 << 2;
  (this->ExportNetGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportNetGUIDs).ArrayNum = 0;
  (this->ExportNetGUIDs).ArrayMax = 0;
  (this->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFieldExports).ArrayNum = 0;
  (this->NetFieldExports).ArrayMax = 0;
  (this->NetTokensPendingExport).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokensPendingExport).ArrayNum = 0;
  (this->NetTokensPendingExport).ArrayMax = 4;
  pUVar6 = this->Channel;
  (this->DebugString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugString).Data.ArrayNum = 0;
  (this->DebugString).Data.ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&this->_padding_ + 2) ^
                      ((pUVar6->Connection).field0_0x0.DebugPtr)->bNeedsByteSwapping) & 1;
  if ((int)(this->bClose + 0x1ff) <= pUVar6->NumOutRec) {
    FBitWriter::SetOverflowed((FBitWriter *)this,-1);
  }
  return this;
}

// FOutBunch @ 147a262d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::FOutBunch(FOutBunch *this,UPackageMap *param_1,long64 param_2)

{
  undefined1 *puVar1;
  
  FNetBitWriter::FNetBitWriter((FNetBitWriter *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  this->bHasPackageMapExports = '\0';
  this->bOutWantsFullInitState = '\0';
  this->bPartialCustomExportsFinal = '\0';
  this->bHasMustBeMappedGUIDs = '\0';
  this->Next = (FOutBunch *)0x0;
  this->Channel = (UChannel *)0x0;
  this->Time = 0.0;
  this->ChIndex = 0;
  (this->ChName).ComparisonIndex = 0;
  *(undefined8 *)&(this->ChName).Number = 0;
  this->PacketId = 0;
  puVar1 = &this->field_0xfc;
  this->ReceivedAck = '\0';
  this->bPartialFinal = '\0';
  this->bPartialInitial = '\0';
  this->bPartial = '\0';
  this->bReliable = '\0';
  this->bIsReplicationPaused = '\0';
  this->bClose = '\0';
  this->bOpen = '\0';
  this->CloseReason = Destroyed;
  (this->ExportNetGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportNetGUIDs).ArrayNum = 0;
  (this->ExportNetGUIDs).ArrayMax = 0;
  (this->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFieldExports).ArrayNum = 0;
  (this->NetFieldExports).ArrayMax = 0;
  (this->NetTokensPendingExport).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokensPendingExport).ArrayNum = 0;
  (this->NetTokensPendingExport).ArrayMax = 4;
  (this->DebugString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugString).Data.ArrayNum = 0;
  (this->DebugString).Data.ArrayMax = 0;
  return this;
}

// FOutBunch @ 147a26380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::FOutBunch(FOutBunch *this)

{
  FNetBitWriter::FNetBitWriter((FNetBitWriter *)this,0);
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  (this->ChName).ComparisonIndex = 0;
  (this->ChName).Number = 0;
  (this->ExportNetGUIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportNetGUIDs).ArrayNum = 0;
  (this->ExportNetGUIDs).ArrayMax = 0;
  (this->NetFieldExports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFieldExports).ArrayNum = 0;
  (this->NetFieldExports).ArrayMax = 0;
  (this->NetTokensPendingExport).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  (this->NetTokensPendingExport).ArrayNum = 0;
  (this->NetTokensPendingExport).ArrayMax = 4;
  (this->DebugString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugString).Data.ArrayNum = 0;
  (this->DebugString).Data.ArrayMax = 0;
  return this;
}

// FOutBunch @ 147a26400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::FOutBunch(FOutBunch *this,long64 param_1)

{
  FOutBunch(this,(UPackageMap *)0x0,param_1);
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  return this;
}

// ~FOutBunch @ 147a29b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FOutBunch::~FOutBunch(FOutBunch *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Net::FNetToken> FVar2;
  
  this->_padding_ = (longlong)&___7FOutBunch__6B_;
  FNetTrace::DestroyTraceCollector((FNetTraceCollector *)this->_padding_);
  pFVar1 = (this->DebugString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->NetFieldExports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExportNetGUIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBitWriter::~FBitWriter((FBitWriter *)this);
  return;
}

// operator= @ 147a2b230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FOutBunch * __thiscall FOutBunch::operator=(FOutBunch *this,FOutBunch *param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  ForElementType<UE::Net::FNetToken> _Dst;
  ForElementType<UE::Net::FNetToken> _Src;
  
  FBitWriter::operator=((FBitWriter *)this,(FBitWriter *)param_1);
  lVar5 = param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = lVar5;
  this->Next = param_1->Next;
  this->Channel = param_1->Channel;
  this->Time = param_1->Time;
  this->ChIndex = param_1->ChIndex;
  this->ChName = param_1->ChName;
  this->ChSequence = param_1->ChSequence;
  this->PacketId = param_1->PacketId;
  bVar7 = (this->ReceivedAck ^ param_1->ReceivedAck) & 1 ^ this->field_0xfc;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 2 ^ bVar7;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 4 ^ bVar7;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 8 ^ bVar7;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 0x10 ^ bVar7;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 0x20 ^ bVar7;
  this->field_0xfc = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfc) & 0x40 ^ bVar7;
  this->field_0xfc = bVar7;
  this->field_0xfc = (bVar7 ^ param_1->field_0xfc) & 0x7f ^ param_1->field_0xfc;
  bVar7 = (this->bHasPackageMapExports ^ param_1->bHasPackageMapExports) & 1 ^ this->field_0xfd;
  this->field_0xfd = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfd) & 2 ^ bVar7;
  this->field_0xfd = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0xfd) & 4 ^ bVar7;
  this->field_0xfd = bVar7;
  pTVar2 = &this->ExportNetGUIDs;
  this->field_0xfd = (bVar7 ^ param_1->field_0xfd) & 8 ^ bVar7;
  this->CloseReason = param_1->CloseReason;
  if (pTVar2 != &param_1->ExportNetGUIDs) {
    iVar4 = (param_1->ExportNetGUIDs).ArrayNum;
    piVar1 = &(this->ExportNetGUIDs).ArrayMax;
    pFVar6 = (param_1->ExportNetGUIDs).AllocatorInstance.Data;
    (this->ExportNetGUIDs).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
      }
    }
  }
  pTVar3 = &this->NetFieldExports;
  if (pTVar3 != &param_1->NetFieldExports) {
    iVar4 = (param_1->NetFieldExports).ArrayNum;
    piVar1 = &(this->NetFieldExports).ArrayMax;
    pFVar6 = (param_1->NetFieldExports).AllocatorInstance.Data;
    (this->NetFieldExports).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 3);
      }
    }
  }
  if (this != param_1) {
    _Src = (param_1->NetTokensPendingExport).AllocatorInstance.SecondaryData;
    piVar1 = &(this->NetTokensPendingExport).ArrayMax;
    iVar4 = (param_1->NetTokensPendingExport).ArrayNum;
    if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
      _Src = (ForElementType<UE::Net::FNetToken>)&param_1->NetTokensPendingExport;
    }
    (this->NetTokensPendingExport).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                (4,4,iVar4,*piVar1,&(this->NetTokensPendingExport).AllocatorInstance,iVar4,piVar1);
      _Dst = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
      if (iVar4 != 0) {
        if (_Dst == (ForElementType<UE::Net::FNetToken>)0x0) {
          _Dst = (ForElementType<UE::Net::FNetToken>)&this->NetTokensPendingExport;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar4 << 2);
      }
    }
  }
  ::FString::operator=(&this->DebugString,&param_1->DebugString);
  return this;
}

// CountMemory @ 147a3ae50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FOutBunch::CountMemory(FOutBunch *this,FArchive *param_1)

{
  for (; this != (FOutBunch *)0x0; this = this->Next) {
    FNetBitWriter::CountMemory((FNetBitWriter *)this,param_1);
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x80,0x80);
  }
  return;
}

// Reset @ 147a83390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FOutBunch::Reset(FOutBunch *this)

{
  FBitWriter::Reset((FBitWriter *)this);
  (this->NetTokensPendingExport).ArrayNum = 0;
  if ((this->NetTokensPendingExport).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
              (4,4,0,&(this->NetTokensPendingExport).AllocatorInstance,0,
               &(this->NetTokensPendingExport).ArrayMax);
  }
  return;
}

// ToString @ 147ffa240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall FOutBunch::ToString(FOutBunch *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,L"FOutBunch: ");
  ::FString::PrintfImpl(&local_18,L"Channel[%d] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"ChSequence: %d ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"NumBits: %lld ");
  iVar3 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"PacketId: %d ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bOpen: %d ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bClose: %d ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar2 = 0;
  if (this->bClose != '\0') {
    ::LexToString(this->CloseReason);
    ::FString::PrintfImpl(&local_18,L"CloseReason: %s ");
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_18,L"bIsReplicationPaused: %d ");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bReliable: %d ");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bPartial: %d//%d//%d ");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"bHasPackageMapExports: %d ");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"NetTokensPendingExport: %d ");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.ArrayNum = (this->DebugString).Data.ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (this->DebugString).Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar3;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

