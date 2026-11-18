// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// EnumerateRegions @ 14d45b5e0

bool __thiscall
TraceServices::FRegionLane::EnumerateRegions
          (FRegionLane *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)> *param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_30._16_8_ = local_res8;
  local_30._8_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegions'::__l2::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
       ::Call;
  local_10 = local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegions'::__l2::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
             ::Call;
  GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
            ((TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
              *)(local_38 + 8),param_1,param_1,
             (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)param_3,
             (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)&local_18);
  if (local_30._0_4_ != -1) {
    for (; (int)local_30._0_4_ <= (int)local_30._4_4_; local_30._0_4_ = local_30._0_4_ + 1) {
      cVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// EnumerateRegionsBackwards @ 14d45b9f0

bool __thiscall
TraceServices::FRegionLane::EnumerateRegionsBackwards
          (FRegionLane *this,double param_1,double param_2,
          TFunctionRef<bool___cdecl(TraceServices::FTimeRegion_const_&)> *param_3)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_30._16_8_ = local_res8;
  local_30._8_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegionsBackwards'::__l2::<lambda_2>,double,TraceServices::FTimeRegion_const_&>
       ::Call;
  local_10 = local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TraceServices::FRegionLane::EnumerateRegionsBackwards'::__l2::<lambda_1>,double,TraceServices::FTimeRegion_const_&>
             ::Call;
  GetElementRangeOverlappingGivenRange<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
            ((TPagedArray<TraceServices::FTimeRegion,TraceServices::TPagedArrayPage<TraceServices::FTimeRegion>_>
              *)(local_38 + 8),param_1,param_2,
             (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)param_3,
             (TFunctionRef<double___cdecl(TraceServices::FTimeRegion_const_&)> *)&local_18);
  if (local_30._0_4_ != -1) {
    for (; (int)local_30._0_4_ <= (int)local_30._4_4_; local_30._4_4_ = local_30._4_4_ + -1) {
      cVar1 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  return true;
}

