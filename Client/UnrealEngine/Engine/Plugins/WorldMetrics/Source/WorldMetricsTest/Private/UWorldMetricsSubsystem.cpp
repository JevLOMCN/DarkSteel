// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsTest
// Functions: 3

// AcquireExtension<UMockWorldMetricsExtensionA> @ 14f13e1e0

UMockWorldMetricsExtensionA * __thiscall
UWorldMetricsSubsystem::AcquireExtension<UMockWorldMetricsExtensionA>
          (UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  UMockWorldMetricsExtensionA *pUVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  pUVar1 = (UMockWorldMetricsExtensionA *)
           AcquireExtension(this,param_1,
                            (TSubclassOf<UWorldMetricsExtension> *)&local_res18[0].ObjectPtr);
  return pUVar1;
}

// AddMetric<UMockWorldMetricA> @ 14f13e240

UMockWorldMetricA * __thiscall
UWorldMetricsSubsystem::AddMetric<UMockWorldMetricA>(UWorldMetricsSubsystem *this)

{
  UMockWorldMetricA *pUVar1;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0].DebugPtr = UMockWorldMetricA::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0].DebugPtr);
  }
  pUVar1 = (UMockWorldMetricA *)
           AddMetric(this,(TSubclassOf<UWorldMetricInterface> *)&local_res10[0].ObjectPtr);
  return pUVar1;
}

// ReleaseExtension<UMockWorldMetricsExtensionA> @ 14f13ff20

bool __thiscall
UWorldMetricsSubsystem::ReleaseExtension<UMockWorldMetricsExtensionA>
          (UWorldMetricsSubsystem *this,UWorldMetricInterface *param_1)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = UMockWorldMetricsExtensionA::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = ReleaseExtension(this,param_1,
                           (TSubclassOf<UWorldMetricsExtension> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

