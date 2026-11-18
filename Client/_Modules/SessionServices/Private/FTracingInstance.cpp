// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 3

// FTracingInstance @ 148cede60

/* WARNING: Enum "Type": Some values do not have unique names */

FTracingInstance * __thiscall
FTraceController::FTracingInstance::FTracingInstance
          (FTracingInstance *this,FTracingInstance *param_1)

{
  TMap<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
  *this_00;
  bool bVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar2 = (param_1->Status).SessionId.B;
  uVar5 = (param_1->Status).SessionId.C;
  uVar6 = (param_1->Status).SessionId.D;
  (this->Status).SessionId.A = (param_1->Status).SessionId.A;
  (this->Status).SessionId.B = uVar2;
  (this->Status).SessionId.C = uVar5;
  (this->Status).SessionId.D = uVar6;
  uVar2 = (param_1->Status).InstanceId.B;
  uVar5 = (param_1->Status).InstanceId.C;
  uVar6 = (param_1->Status).InstanceId.D;
  (this->Status).InstanceId.A = (param_1->Status).InstanceId.A;
  (this->Status).InstanceId.B = uVar2;
  (this->Status).InstanceId.C = uVar5;
  (this->Status).InstanceId.D = uVar6;
  (this->Status).bIsTracing = (param_1->Status).bIsTracing;
  (this->Status).bIsPaused = (param_1->Status).bIsPaused;
  bVar1 = (param_1->Status).bAreStatNamedEventsEnabled;
  (this->Status).Endpoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).bAreStatNamedEventsEnabled = bVar1;
  (this->Status).Endpoint.Data.AllocatorInstance.Data =
       (param_1->Status).Endpoint.Data.AllocatorInstance.Data;
  (param_1->Status).Endpoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Endpoint.Data.ArrayNum = (param_1->Status).Endpoint.Data.ArrayNum;
  (this->Status).Endpoint.Data.ArrayMax = (param_1->Status).Endpoint.Data.ArrayMax;
  (param_1->Status).Endpoint.Data.ArrayNum = 0;
  (param_1->Status).Endpoint.Data.ArrayMax = 0;
  uVar2 = (param_1->Status).SessionGuid.B;
  uVar5 = (param_1->Status).SessionGuid.C;
  uVar6 = (param_1->Status).SessionGuid.D;
  (this->Status).SessionGuid.A = (param_1->Status).SessionGuid.A;
  (this->Status).SessionGuid.B = uVar2;
  (this->Status).SessionGuid.C = uVar5;
  (this->Status).SessionGuid.D = uVar6;
  uVar2 = (param_1->Status).TraceGuid.B;
  uVar5 = (param_1->Status).TraceGuid.C;
  uVar6 = (param_1->Status).TraceGuid.D;
  (this->Status).TraceGuid.A = (param_1->Status).TraceGuid.A;
  (this->Status).TraceGuid.B = uVar2;
  (this->Status).TraceGuid.C = uVar5;
  (this->Status).TraceGuid.D = uVar6;
  (this->Status).Settings.bUseWorkerThread = (param_1->Status).Settings.bUseWorkerThread;
  (this->Status).Settings.bUseImportantCache = (param_1->Status).Settings.bUseImportantCache;
  uVar2 = (param_1->Status).Settings.TailSizeBytes;
  (this->Status).Settings.ChannelPresets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Settings.TailSizeBytes = uVar2;
  (this->Status).Settings.ChannelPresets.AllocatorInstance.Data =
       (param_1->Status).Settings.ChannelPresets.AllocatorInstance.Data;
  (param_1->Status).Settings.ChannelPresets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Settings.ChannelPresets.ArrayNum =
       (param_1->Status).Settings.ChannelPresets.ArrayNum;
  (this->Status).Settings.ChannelPresets.ArrayMax =
       (param_1->Status).Settings.ChannelPresets.ArrayMax;
  (param_1->Status).Settings.ChannelPresets.ArrayNum = 0;
  (param_1->Status).Settings.ChannelPresets.ArrayMax = 0;
  TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
              *)&(this->Status).Channels,
             (TSet<TTuple<unsigned_int,FTraceStatus::FChannel>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceStatus::FChannel,0>,FDefaultSetAllocator>
              *)&(param_1->Status).Channels);
  uVar4 = (param_1->Status).Stats.BytesTraced;
  (this->Status).Stats.BytesSent = (param_1->Status).Stats.BytesSent;
  (this->Status).Stats.BytesTraced = uVar4;
  uVar2 = (param_1->Status).Stats.CacheAllocated;
  uVar5 = (param_1->Status).Stats.CacheUsed;
  (this->Status).Stats.MemoryUsed = (param_1->Status).Stats.MemoryUsed;
  (this->Status).Stats.CacheAllocated = uVar2;
  (this->Status).Stats.CacheUsed = uVar5;
  uVar7 = *(undefined4 *)&(param_1->Status).Stats.field_0x24;
  (this->Status).Stats.CacheWaste = (param_1->Status).Stats.CacheWaste;
  *(undefined4 *)&(this->Status).Stats.field_0x24 = uVar7;
  (this->Status).StatusTimestamp.Ticks = (param_1->Status).StatusTimestamp.Ticks;
  (this->Status).TraceSystemStatus = (param_1->Status).TraceSystemStatus;
  (this->Commands)._padding_ = (longlong)&___7FTraceControllerCommands__6B_;
  uVar2 = (param_1->Commands).ServiceAddress.UniqueId.B;
  uVar5 = (param_1->Commands).ServiceAddress.UniqueId.C;
  uVar6 = (param_1->Commands).ServiceAddress.UniqueId.D;
  (this->Commands).ServiceAddress.UniqueId.A = (param_1->Commands).ServiceAddress.UniqueId.A;
  (this->Commands).ServiceAddress.UniqueId.B = uVar2;
  (this->Commands).ServiceAddress.UniqueId.C = uVar5;
  (this->Commands).ServiceAddress.UniqueId.D = uVar6;
  (this->Commands).MessageEndpoint.Object = (param_1->Commands).MessageEndpoint.Object;
  pTVar3 = (param_1->Commands).MessageEndpoint.SharedReferenceCount.ReferenceController;
  (this->Commands).MessageEndpoint.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &(this->Commands).SettableChannels;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->Commands).SettableChannels.field_0x8 = 0;
  *(undefined8 *)&(this->Commands).SettableChannels.field_0x20 = 0;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x28 = 0;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x2c = 0x80;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x34 = 0;
  *(undefined8 *)&(this->Commands).SettableChannels.field_0x40 = 0;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x48 = 0;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
               *)&(param_1->Commands).SettableChannels);
  return this;
}

// FTracingInstance @ 148cedff0

/* WARNING: Enum "Type": Some values do not have unique names */

FTracingInstance * __thiscall
FTraceController::FTracingInstance::FTracingInstance
          (FTracingInstance *this,TSharedRef<IMessageBus,1> *param_1,FMessageAddress *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<IMessageBus,1> local_28;
  FGuid local_18;
  
  *(undefined4 *)&(this->Status).field_0x23 = 0;
  (this->Status).field_0x27 = 0;
  (this->Status).Settings.bUseWorkerThread = false;
  (this->Status).Settings.bUseImportantCache = false;
  *(undefined2 *)&(this->Status).Settings.field_0x2 = 0;
  (this->Status).Settings.TailSizeBytes = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x10 = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x18 = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x38 = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x4c = 0;
  *(undefined8 *)((longlong)&(this->Status).Stats.BytesSent + 4) = 0;
  *(undefined8 *)((longlong)&(this->Status).Stats.BytesTraced + 4) = 0;
  *(undefined8 *)((longlong)&(this->Status).Stats.MemoryUsed + 4) = 0;
  (this->Status).Stats.CacheUsed = 0;
  (this->Status).Stats.CacheWaste = 0;
  *(undefined4 *)&(this->Status).Stats.field_0x24 = 0;
  *(undefined8 *)&(this->Status).TraceSystemStatus = 0;
  (this->Status).SessionId.A = 0;
  (this->Status).SessionId.B = 0;
  (this->Status).SessionId.C = 0;
  (this->Status).SessionId.D = 0;
  (this->Status).InstanceId.A = 0;
  (this->Status).InstanceId.B = 0;
  (this->Status).InstanceId.C = 0;
  (this->Status).InstanceId.D = 0;
  (this->Status).bIsTracing = false;
  (this->Status).bIsPaused = false;
  (this->Status).bAreStatNamedEventsEnabled = false;
  (this->Status).Endpoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Endpoint.Data.ArrayNum = 0;
  (this->Status).Endpoint.Data.ArrayMax = 0;
  (this->Status).SessionGuid.A = 0;
  (this->Status).SessionGuid.B = 0;
  (this->Status).SessionGuid.C = 0;
  (this->Status).SessionGuid.D = 0;
  (this->Status).TraceGuid.A = 0;
  (this->Status).TraceGuid.B = 0;
  (this->Status).TraceGuid.C = 0;
  (this->Status).TraceGuid.D = 0;
  (this->Status).Settings.ChannelPresets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Status).Settings.ChannelPresets.ArrayNum = 0;
  (this->Status).Settings.ChannelPresets.ArrayMax = 0;
  *(undefined8 *)&(this->Status).Channels = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x8 = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x20 = 0;
  *(undefined4 *)&(this->Status).Channels.field_0x28 = 0;
  *(undefined4 *)&(this->Status).Channels.field_0x2c = 0x80;
  *(undefined4 *)&(this->Status).Channels.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Status).Channels.field_0x34 = 0;
  *(undefined8 *)&(this->Status).Channels.field_0x40 = 0;
  *(undefined4 *)&(this->Status).Channels.field_0x48 = 0;
  (this->Status).StatusTimestamp.Ticks = 0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.A = (param_2->UniqueId).A;
  local_18.B = (param_2->UniqueId).B;
  local_18.C = (param_2->UniqueId).C;
  local_18.D = (param_2->UniqueId).D;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  FTraceControllerCommands::FTraceControllerCommands
            (&this->Commands,&local_28,(FMessageAddress *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// ~FTracingInstance @ 148ceecb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceController::FTracingInstance::~FTracingInstance(FTracingInstance *this)

{
  void *pvVar1;
  
  (this->Commands)._padding_ = (longlong)&___7FTraceControllerCommands__6B_;
  *(undefined4 *)&(this->Commands).SettableChannels.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Commands).SettableChannels.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Commands).SettableChannels);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Commands).MessageEndpoint.SharedReferenceCount.ReferenceController);
  (this->Commands)._padding_ = (longlong)&___7ITraceControllerCommands__6B_;
  FTraceStatus::~FTraceStatus(&this->Status);
  return;
}

