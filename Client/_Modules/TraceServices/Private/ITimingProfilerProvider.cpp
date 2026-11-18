// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 20

// ~ITimingProfilerProvider @ 14d42d1a0

void __thiscall
TraceServices::ITimingProfilerProvider::~ITimingProfilerProvider(ITimingProfilerProvider *this)

{
  return;
}

// CreateAggregation @ 14d447c80

ITable<TraceServices::FTimingProfilerAggregatedStats> * __thiscall
TraceServices::ITimingProfilerProvider::CreateAggregation
          (ITimingProfilerProvider *this,FCreateAggregationParams *param_1)

{
  return (ITable<TraceServices::FTimingProfilerAggregatedStats> *)0x0;
}

// CreateButterfly @ 14d4491a0

ITimingProfilerButterfly * __thiscall
TraceServices::ITimingProfilerProvider::CreateButterfly
          (ITimingProfilerProvider *this,FCreateButterflyParams *param_1)

{
  return (ITimingProfilerButterfly *)0x0;
}

// CreateButterfly @ 14d4491b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d44926a) */
/* WARNING: Removing unreachable block (ram,0x00014d44927b) */
/* WARNING: Removing unreachable block (ram,0x00014d44927f) */

ITimingProfilerButterfly * __thiscall
TraceServices::ITimingProfilerProvider::CreateButterfly
          (ITimingProfilerProvider *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_3,bool param_4)

{
  ITimingProfilerButterfly *pIVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  bool local_68;
  bool local_67;
  undefined1 local_66;
  code *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *plStack_30;
  void *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_68 = param_4;
  local_67 = param_4;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,bool,unsigned_int>
             ::Call;
  local_b8 = (undefined4)*(undefined8 *)&param_3->field_0x8;
  uStack_b4 = (undefined4)((ulonglong)*(undefined8 *)&param_3->field_0x8 >> 0x20);
  local_a8 = param_1;
  uStack_c0 = (undefined4)*(undefined8 *)param_3;
  uStack_bc = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  local_a0 = param_2;
  local_38 = local_b8;
  uStack_34 = uStack_b4;
  plStack_30 = (longlong *)0x0;
  local_98 = 0;
  local_70 = (longlong *)0x0;
  local_66 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_48 = 0x52b1db60;
  uStack_44 = 1;
  uStack_40 = uStack_c0;
  uStack_3c = uStack_bc;
  uStack_b0 = 0;
  local_20 = 0;
  local_28 = (void *)0x0;
  plStack_30 = (longlong *)0x0;
  uStack_44 = 1;
  local_48 = 0x52b1db60;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::ITimingProfilerProvider::CreateButterfly'::__l2::<lambda_1>,bool,unsigned_int>
             ::Call;
  local_66 = 0;
  local_70 = (longlong *)0x0;
  local_98 = 0;
  uStack_b0 = 0;
  local_d8 = 0;
  pIVar1 = (ITimingProfilerButterfly *)(**(code **)((longlong)*this + 0xd0))(this,&local_a8);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_58 != (code *)0x0) {
    plVar2 = (longlong *)&local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar2 = plStack_30;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return pIVar1;
}

// EnumerateGpuFences @ 14d459e70

void __thiscall
TraceServices::ITimingProfilerProvider::EnumerateGpuFences
          (ITimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuFenceWrapper_const_&)>
          *param_4)

{
  return;
}

// EnumerateGpuQueues @ 14d459f10

void __thiscall
TraceServices::ITimingProfilerProvider::EnumerateGpuQueues
          (ITimingProfilerProvider *this,
          TFunctionRef<void___cdecl(TraceServices::FGpuQueueInfo_const_&)> *param_1)

{
  return;
}

// EnumerateGpuSignalFences @ 14d45a190

void __thiscall
TraceServices::ITimingProfilerProvider::EnumerateGpuSignalFences
          (ITimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuSignalFence_const_&)>
          *param_4)

{
  return;
}

// EnumerateGpuWaitFences @ 14d45a440

void __thiscall
TraceServices::ITimingProfilerProvider::EnumerateGpuWaitFences
          (ITimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(TraceServices::FGpuWaitFence_const_&)>
          *param_4)

{
  return;
}

// EnumerateResolvedGpuFences @ 14d45c6b0

void __thiscall
TraceServices::ITimingProfilerProvider::EnumerateResolvedGpuFences
          (ITimingProfilerProvider *this,uint param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEnumerateResult___cdecl(unsigned_int,TraceServices::FGpuSignalFence_const_&,unsigned_int,TraceServices::FGpuWaitFence_const_&)>
          *param_4)

{
  return;
}

// GetGpu2TimelineIndex @ 14d467e30

bool __thiscall
TraceServices::ITimingProfilerProvider::GetGpu2TimelineIndex
          (ITimingProfilerProvider *this,uint *param_1)

{
  return false;
}

// GetGpuQueueTimelineIndex @ 14d468140

bool __thiscall
TraceServices::ITimingProfilerProvider::GetGpuQueueTimelineIndex
          (ITimingProfilerProvider *this,uint param_1,uint *param_2)

{
  return false;
}

// GetGpuTimelineIndex @ 14d468370

bool __thiscall
TraceServices::ITimingProfilerProvider::GetGpuTimelineIndex
          (ITimingProfilerProvider *this,uint *param_1)

{
  return false;
}

// GetMetadata @ 14d4695d0

TArrayView<unsigned_char_const_,int> * __thiscall
TraceServices::ITimingProfilerProvider::GetMetadata
          (ITimingProfilerProvider *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,uint param_1)

{
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMetadataSpec @ 14d469730

FMetadataSpec * __thiscall
TraceServices::ITimingProfilerProvider::GetMetadataSpec(ITimingProfilerProvider *this,uint param_1)

{
  return (FMetadataSpec *)0x0;
}

// GetOriginalTimerIdFromMetadata @ 14d46b5b0

uint __thiscall
TraceServices::ITimingProfilerProvider::GetOriginalTimerIdFromMetadata
          (ITimingProfilerProvider *this,uint param_1)

{
  return param_1;
}

// GetRatioOfThreadsToUse @ 14d46c240

double __thiscall
TraceServices::ITimingProfilerProvider::GetRatioOfThreadsToUse(ITimingProfilerProvider *this)

{
  return __real_3fe8000000000000;
}

// GetVerseTimelineIndex @ 14d471b90

bool __thiscall
TraceServices::ITimingProfilerProvider::GetVerseTimelineIndex
          (ITimingProfilerProvider *this,uint *param_1)

{
  return false;
}

// HasCpuTiming @ 14d471bd0

bool __thiscall TraceServices::ITimingProfilerProvider::HasCpuTiming(ITimingProfilerProvider *this)

{
  return true;
}

// HasGpuTiming @ 14d471e10

bool __thiscall TraceServices::ITimingProfilerProvider::HasGpuTiming(ITimingProfilerProvider *this)

{
  return false;
}

// HasVerseTiming @ 14d471eb0

bool __thiscall
TraceServices::ITimingProfilerProvider::HasVerseTiming(ITimingProfilerProvider *this)

{
  return false;
}

