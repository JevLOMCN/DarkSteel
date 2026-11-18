// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// operator<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>_TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState> @ 145c3ab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>_TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FFrameState>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ForElementType<FSetElementId> FStack_40;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FStack_40.InlineData[0] = '\0';
  FStack_40.InlineData[1] = '\0';
  FStack_40.InlineData[2] = '\0';
  FStack_40.InlineData[3] = '\0';
  FStack_40._padding_ = 0;
  local_48 = 0xffffffff;
  local_58 = (void *)0x0;
  uStack_50 = 0x8000000000;
  local_28 = 0;
  FStack_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  uStack_30 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  uStack_20 = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
              *)local_78);
  __return_storage_ptr__->field_0x60 = (char)uStack_20;
  if ((char)uStack_20 != '\0') {
    *(undefined8 *)&__return_storage_ptr__->field_0x58 = local_28;
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (FStack_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  uVar2 = uStack_50._4_4_;
  local_48 = 0xffffffff;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  if (0x80 < uVar2) {
    uStack_50 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance> @ 145c3ace0

TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance> * __thiscall
TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&>::
operator<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>
          (TKeyInitializer<UE::RHI::GPUProfiler::FQueue_const_&> *this,
          TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>
          *__return_storage_ptr__)

{
  *(FQueue_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  ::operator_delete((void *)0x0,8);
  ::operator_delete((void *)0x0,8);
  ::operator_delete((void *)0x0,8);
  return __return_storage_ptr__;
}

