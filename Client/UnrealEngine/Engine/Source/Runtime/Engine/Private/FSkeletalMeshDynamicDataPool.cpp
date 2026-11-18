// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// AddStatsMemory @ 14862e220

void __thiscall
FSkeletalMeshDynamicDataPool::AddStatsMemory
          (FSkeletalMeshDynamicDataPool *this,int param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if (-1 < CountersChannel->Enabled) {
    lVar2 = (longlong)param_2;
    if (param_2 != 0) {
      LOCK();
      __GTraceCounterSkeletalMesh_DynamicDataPool_Size.Value =
           (atomic<__int64>)
           ((longlong)__GTraceCounterSkeletalMesh_DynamicDataPool_Size.Value + lVar2);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterId == (atomic<unsigned_int>)0x0)
        {
          uVar1 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterId ==
              (atomic<unsigned_int>)0x0) {
            __GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterId._2_2_ = 0;
            __GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterId._0_2_ = uVar1;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterSkeletalMesh_DynamicDataPool_Size.CounterId._0_2_,
                   (long64)__GTraceCounterSkeletalMesh_DynamicDataPool_Size.Value);
      }
    }
    if (param_1 == 0) {
      FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
                (&__GTraceCounterSkeletalMesh_DynamicDataPool_Bucket0,lVar2);
    }
    else {
      if (param_1 == 1) {
        FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
                  (&__GTraceCounterSkeletalMesh_DynamicDataPool_Bucket1,lVar2);
        return;
      }
      if (param_1 == 2) {
        FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
                  (&__GTraceCounterSkeletalMesh_DynamicDataPool_Bucket2,lVar2);
        return;
      }
      if (param_1 == 3) {
        FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
                  (&__GTraceCounterSkeletalMesh_DynamicDataPool_Bucket3,lVar2);
        return;
      }
      if (param_1 == 4) {
        FCountersTrace::TCounter<__int64,0,std::atomic<__int64>,0>::Add
                  (&__GTraceCounterSkeletalMesh_DynamicDataPool_Bucket4,lVar2);
        return;
      }
    }
  }
  return;
}

// GetBucketIndex @ 148645a20

int __thiscall
FSkeletalMeshDynamicDataPool::GetBucketIndex(FSkeletalMeshDynamicDataPool *this,int param_1)

{
  if (param_1 < 0x41) {
    return 4;
  }
  if (param_1 < 0x81) {
    return 3;
  }
  if (param_1 < 0x101) {
    return 2;
  }
  return (int)(param_1 < 0x201);
}

// GetPoolBudget @ 14864c8f0

long64 __cdecl FSkeletalMeshDynamicDataPool::GetPoolBudget(void)

{
  int iVar1;
  
  iVar1 = GSkeletalMeshDynamicDataPoolBudget << 10;
  if (GSkeletalMeshDynamicDataPoolBudget << 10 < 0) {
    iVar1 = 0;
  }
  return (longlong)iVar1;
}

