// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 14

// ~IAllocationsProvider @ 14d3d1480

void __thiscall
TraceServices::IAllocationsProvider::~IAllocationsProvider(IAllocationsProvider *this)

{
  return;
}

// EnumerateAllocEventsTimeline @ 14d3dbe70

void __thiscall
TraceServices::IAllocationsProvider::EnumerateAllocEventsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,2,param_1,param_2,&local_18);
  return;
}

// EnumerateFreeEventsTimeline @ 14d3dbeb0

void __thiscall
TraceServices::IAllocationsProvider::EnumerateFreeEventsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,3,param_1,param_2,&local_18);
  return;
}

// EnumerateMaxLiveAllocationsTimeline @ 14d3dc740

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMaxLiveAllocationsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,1,param_1,param_2,&local_18);
  return;
}

// EnumerateMaxTotalAllocatedMemoryTimeline @ 14d3dc780

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMaxTotalAllocatedMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,1,param_1,param_2,&local_18);
  return;
}

// EnumerateMaxTotalCompressedSwapMemoryTimeline @ 14d3dc7c0

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMaxTotalCompressedSwapMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,5,param_1,param_2,&local_18);
  return;
}

// EnumerateMaxTotalSwapMemoryTimeline @ 14d3dc800

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMaxTotalSwapMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,3,param_1,param_2,&local_18);
  return;
}

// EnumerateMinLiveAllocationsTimeline @ 14d3dca70

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMinLiveAllocationsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,0,param_1,param_2,&local_18);
  return;
}

// EnumerateMinTotalAllocatedMemoryTimeline @ 14d3dcab0

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMinTotalAllocatedMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,0,param_1,param_2,&local_18);
  return;
}

// EnumerateMinTotalCompressedSwapMemoryTimeline @ 14d3dcaf0

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMinTotalCompressedSwapMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,4,param_1,param_2,&local_18);
  return;
}

// EnumerateMinTotalSwapMemoryTimeline @ 14d3dcb30

void __thiscall
TraceServices::IAllocationsProvider::EnumerateMinTotalSwapMemoryTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned___int64)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xe0))(this,2,param_1,param_2,&local_18);
  return;
}

// EnumeratePageInEventsTimeline @ 14d3dcb70

void __thiscall
TraceServices::IAllocationsProvider::EnumeratePageInEventsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,4,param_1,param_2,&local_18);
  return;
}

// EnumeratePageOutEventsTimeline @ 14d3dcbb0

void __thiscall
TraceServices::IAllocationsProvider::EnumeratePageOutEventsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,5,param_1,param_2,&local_18);
  return;
}

// EnumerateSwapFreeEventsTimeline @ 14d3dccd0

void __thiscall
TraceServices::IAllocationsProvider::EnumerateSwapFreeEventsTimeline
          (IAllocationsProvider *this,int param_1,int param_2,
          TFunctionRef<void___cdecl(double,double,unsigned_int)> *param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *(undefined8 *)param_3;
  local_10 = *(undefined8 *)&param_3->field_0x8;
  (**(code **)((longlong)*this + 0xd8))(this,6,param_1,param_2,&local_18);
  return;
}

