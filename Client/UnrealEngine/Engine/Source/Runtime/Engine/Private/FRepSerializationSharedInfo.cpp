// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FRepSerializationSharedInfo @ 1484bdc60

void __thiscall
FRepSerializationSharedInfo::~FRepSerializationSharedInfo(FRepSerializationSharedInfo *this)

{
  int *piVar1;
  int iVar2;
  FNetBitWriter *pFVar3;
  ForElementType<UE::Net::FNetToken> FVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = (this->SharedPropertyInfo).ArrayMax;
  piVar1 = &(this->SharedPropertyInfo).ArrayMax;
  (this->SharedPropertyInfo).ArrayNum = 0;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,iVar2,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar3 = (this->SerializedProperties).Ptr;
  (this->SerializedProperties).Ptr = (FNetBitWriter *)0x0;
  if (pFVar3 != (FNetBitWriter *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  this->bIsValid = false;
  FVar4 = (this->NetTokensPendingExport).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar3 = (this->SerializedProperties).Ptr;
  if (pFVar3 != (FNetBitWriter *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar5 = (this->SharedPropertyInfo).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// CountBytes @ 1484cd570

void __thiscall
FRepSerializationSharedInfo::CountBytes(FRepSerializationSharedInfo *this,FArchive *param_1)

{
  FNetBitWriter *pFVar1;
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"FRepSerializationSharedInfo::CountBytes");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->SharedPropertyInfo).ArrayNum * 0x28,
             (longlong)(this->SharedPropertyInfo).ArrayMax * 0x28);
  ::FString::FString(&local_48,"SharedPropertyInfo");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  pFVar1 = (this->SerializedProperties).Ptr;
  if (pFVar1 != (FNetBitWriter *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x270))(pFVar1,param_1);
  }
  ::FString::FString(&local_48,"SerializedProperties");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

// Init @ 1484dc5e0

void __thiscall FRepSerializationSharedInfo::Init(FRepSerializationSharedInfo *this)

{
  FNetBitWriter *pFVar1;
  FNetBitWriter *pFVar2;
  
  if ((this->SerializedProperties).Ptr == (FNetBitWriter *)0x0) {
    pFVar1 = ::operator_new(0xd0);
    pFVar2 = (FNetBitWriter *)0x0;
    if (pFVar1 != (FNetBitWriter *)0x0) {
      pFVar2 = FNetBitWriter::FNetBitWriter(pFVar1,0);
    }
    pFVar1 = (this->SerializedProperties).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->SerializedProperties).Ptr = pFVar2, pFVar1 != (FNetBitWriter *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001484dc628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar1->_padding_)(pFVar1,1);
      return;
    }
  }
  return;
}

// Reset @ 1484f1930

void __thiscall FRepSerializationSharedInfo::Reset(FRepSerializationSharedInfo *this)

{
  if (this->bIsValid != false) {
    (this->SharedPropertyInfo).ArrayNum = 0;
    if ((this->SharedPropertyInfo).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,&(this->SharedPropertyInfo).ArrayMax);
    }
    (**(code **)(((this->SerializedProperties).Ptr)->_padding_ + 0xc0))();
    (this->NetTokensPendingExport).ArrayNum = 0;
    if ((this->NetTokensPendingExport).ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                (4,4,0,&(this->NetTokensPendingExport).AllocatorInstance,0,
                 &(this->NetTokensPendingExport).ArrayMax);
    }
    this->bIsValid = false;
  }
  return;
}

// WriteSharedProperty @ 148501870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRepSerializedPropertyInfo * __thiscall
FRepSerializationSharedInfo::WriteSharedProperty
          (FRepSerializationSharedInfo *this,FRepLayoutCmd *param_1,FRepSharedPropertyKey *param_2,
          int param_3,ushort param_4,TRepDataBufferBase<0,unsigned_char_const_> param_5,bool param_6
          ,bool param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNetBitWriter *this_00;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  FRepLayoutCmd *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FRepSerializedPropertyInfo *pFVar12;
  longlong lVar13;
  ForElementType<FNetTracePacketContentEvent> FVar14;
  FScriptContainerElement *pFVar15;
  FNetTraceCollector *pFVar16;
  uint local_res8 [2];
  FRepLayoutCmd *local_res10;
  uint local_res18 [2];
  int local_res20;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  
  pFVar15 = (this->SharedPropertyInfo).AllocatorInstance.Data;
  local_58._0_4_ = param_2->CmdIndex;
  local_58._4_4_ = param_2->ArrayIndex;
  uStack_50 = *(undefined8 *)&param_2->ArrayDepth;
  local_48 = param_2->DataPtr;
  pFVar2 = pFVar15 + (longlong)(this->SharedPropertyInfo).ArrayNum * 0x28;
  local_res10 = param_1;
  local_res20 = param_3;
  if (pFVar15 != pFVar2) {
    do {
      if ((((*(int *)pFVar15 == (undefined4)local_58) && (*(int *)(pFVar15 + 4) == local_58._4_4_))
          && (*(int *)(pFVar15 + 8) == (int)uStack_50)) && (*(void **)(pFVar15 + 0x10) == local_48))
      {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SharedPropertyInfo.ContainsByPredicate([PropertyKey](const FRepSerializedPropertyInfo& Info) { return (Info.PropertyKey == PropertyKey); })"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                           ,0xaa9,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FRepSerializedPropertyInfo *)(*pcVar4)();
          return pFVar12;
        }
        break;
      }
      pFVar15 = pFVar15 + 0x28;
    } while (pFVar15 != pFVar2);
  }
  if (((this->SerializedProperties).Ptr == (FNetBitWriter *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                         ,0xaac,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FRepSerializedPropertyInfo *)(*pcVar4)();
    return pFVar12;
  }
  iVar9 = (this->SharedPropertyInfo).ArrayNum;
  piVar1 = &(this->SharedPropertyInfo).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  (this->SharedPropertyInfo).ArrayNum = iVar9 + 1;
  lVar13 = (longlong)iVar9;
  pFVar2 = (this->SharedPropertyInfo).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar13 * 0x28) = 0;
  *(undefined4 *)(pFVar2 + lVar13 * 0x28 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar13 * 0x28 + 0x10) = 0;
  pFVar12 = (FRepSerializedPropertyInfo *)(pFVar2 + lVar13 * 0x28);
  pFVar12->BitOffset = 0;
  pFVar12->BitLength = 0;
  pFVar12->PropBitOffset = 0;
  pFVar12->PropBitLength = 0;
  uVar10 = param_2->ArrayIndex;
  uVar5 = param_2->ArrayDepth;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  (pFVar12->PropertyKey).CmdIndex = param_2->CmdIndex;
  (pFVar12->PropertyKey).ArrayIndex = uVar10;
  (pFVar12->PropertyKey).ArrayDepth = uVar5;
  *(undefined4 *)&(pFVar12->PropertyKey).field_0xc = uVar6;
  (pFVar12->PropertyKey).DataPtr = param_2->DataPtr;
  pFVar12->BitOffset = (int)((this->SerializedProperties).Ptr)->_padding_;
  if (6 < (byte)LogRepProperties._0_1_) {
    ::FString::PrintfImpl(&local_68,L"{Cmd: %u, Index: %u, Depth: %u, Ptr: 0x%08llx}");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRepProperties);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (param_6) {
    this_00 = (this->SerializedProperties).Ptr;
    uVar10 = 0xffffffff;
    pFVar16 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar16 = (this_00->TraceCollector).Ptr;
    }
    uVar5 = (uint)this_00->_padding_;
    if (pFVar16 != (FNetTraceCollector *)0x0) {
      uVar10 = FNetTrace::BeginPacketContentEvent(pFVar16,NameId,uVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        PropertyHandle = UE::Net::CreatePersistentNetDebugName(L"PropertyHandle",0xe);
        _Init_thread_footer(&::_TSS0);
      }
      uVar11 = FNetTrace::TraceName(PropertyHandle);
      FVar14 = (pFVar16->Events).AllocatorInstance.SecondaryData;
      if (FVar14 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar14 = (ForElementType<FNetTracePacketContentEvent>)&pFVar16->Events;
      }
      *(uint *)((longlong)FVar14 + (ulonglong)uVar10 * 0x10) = uVar11;
    }
    local_res18[0] = (uint)param_4;
    (**(code **)(this_00->_padding_ + 0x1a0))(this_00,local_res18);
    if (6 < (byte)LogRepProperties._0_1_) {
      UE::Logging::Private::BasicLog<7>
                ((FStaticBasicLogRecord *)&PTR_u_WritePropertyHa_151ae5800,
                 (FLogCategoryBase *)&LogRepProperties);
    }
    if (param_7) {
      plVar3 = (longlong *)this_00->_padding_;
      local_res8[0] = 0xabadf00d;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((this_00->_padding_ & 0x10000) == 0) {
          (**(code **)(this_00->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      if ((local_res8[0] != 0xabadf00d) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Checksum == 0xABADF00D",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepLayout.cpp"
                             ,0x365,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FRepSerializedPropertyInfo *)(*pcVar4)();
        return pFVar12;
      }
    }
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat1943 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat1943 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::TrackWritePropertyHandle
                (&GNetworkProfiler,(short)this_00->_padding_ - (short)uVar5,(UNetConnection *)0x0);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
    param_3 = local_res20;
    if (uVar10 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar16,uVar10,(uint)this_00->_padding_);
      param_3 = local_res20;
    }
  }
  pFVar7 = local_res10;
  pFVar12->PropBitOffset = (int)((this->SerializedProperties).Ptr)->_padding_;
  (**(code **)(local_res10->Property->_padding_ + 200))
            (local_res10->Property,(this->SerializedProperties).Ptr,0,param_5.Data,0);
  pFVar12->PropBitLength =
       (int)((this->SerializedProperties).Ptr)->_padding_ - pFVar12->PropBitOffset;
  if (param_7) {
    SerializeReadWritePropertyChecksum<0>
              (pFVar7,param_3,param_5,(FBitArchive *)(this->SerializedProperties).Ptr);
  }
  pFVar12->BitLength = (int)((this->SerializedProperties).Ptr)->_padding_ - pFVar12->BitOffset;
  return pFVar12;
}

