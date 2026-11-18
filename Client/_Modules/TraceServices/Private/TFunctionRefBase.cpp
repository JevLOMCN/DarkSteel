// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// operator() @ 14d434df0

EEventEnumerate __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&,unsigned_int)>
::operator()(void *this,double param_1,double param_2,uint param_3,
            FLoadTimeProfilerCpuEvent *param_4,uint param_5)

{
  code *pcVar1;
  EEventEnumerate EVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double local_res10;
  double local_res18;
  uint local_res20 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  EVar2 = (*pcVar1)(uVar3,&local_res10,&local_res18,local_res20,param_4,&param_5);
  return EVar2;
}

// operator() @ 14d434e70

EEventEnumerate __thiscall
UE::Core::Private::Function::
TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&,unsigned_int)>
::operator()(void *this,double param_1,double param_2,uint param_3,FTimingProfilerEvent *param_4,
            uint param_5)

{
  code *pcVar1;
  EEventEnumerate EVar2;
  undefined8 uVar3;
  longlong *plVar4;
  double local_res10;
  double local_res18;
  uint local_res20 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20[0] = param_3;
  CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  EVar2 = (*pcVar1)(uVar3,&local_res10,&local_res18,local_res20,param_4,&param_5);
  return EVar2;
}

