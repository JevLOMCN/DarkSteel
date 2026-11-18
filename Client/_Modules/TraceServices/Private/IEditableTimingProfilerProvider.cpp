// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 21

// ~IEditableTimingProfilerProvider @ 14d42d0f0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::~IEditableTimingProfilerProvider
          (IEditableTimingProfilerProvider *this)

{
  return;
}

// AddCpuTimer @ 14d43a300

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddCpuTimer
          (IEditableTimingProfilerProvider *this,TStringView<wchar_t> *param_1,wchar_t *param_2,
          uint param_3)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)((longlong)*this + 0x20))(local_18,0,&local_18,param_2,param_3);
  return uVar1;
}

// AddGpuQueue @ 14d43aec0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::AddGpuQueue
          (IEditableTimingProfilerProvider *this,uint param_1,uchar param_2,uchar param_3,
          uchar param_4,wchar_t *param_5)

{
  return;
}

// AddGpuSignalFence @ 14d43b160

void __thiscall
TraceServices::IEditableTimingProfilerProvider::AddGpuSignalFence
          (IEditableTimingProfilerProvider *this,uint param_1,FGpuSignalFence *param_2)

{
  return;
}

// AddGpuTimer @ 14d43b170

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddGpuTimer
          (IEditableTimingProfilerProvider *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)((longlong)*this + 0x28))(local_18,2,&local_18);
  return uVar1;
}

// AddGpuWaitFence @ 14d43b440

void __thiscall
TraceServices::IEditableTimingProfilerProvider::AddGpuWaitFence
          (IEditableTimingProfilerProvider *this,uint param_1,FGpuWaitFence *param_2)

{
  return;
}

// AddMetadataSpec @ 14d43ba20

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddMetadataSpec
          (IEditableTimingProfilerProvider *this,FMetadataSpec *param_1)

{
  return 0;
}

// AddTimer @ 14d43e480

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddTimer
          (IEditableTimingProfilerProvider *this,ETimingProfilerTimerType param_1)

{
  return 0;
}

// AddTimer @ 14d43e490

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddTimer
          (IEditableTimingProfilerProvider *this,ETimingProfilerTimerType param_1,
          TStringView<wchar_t> *param_2)

{
  uint uVar1;
  undefined7 in_register_00000011;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar1 = (**(code **)((longlong)*this + 0x30))(this,CONCAT71(in_register_00000011,param_1));
  if (uVar1 != 0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->Size;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)((longlong)*this + 0x38))(this,uVar1,&local_18);
  }
  return uVar1;
}

// AddTimer @ 14d43e4f0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddTimer
          (IEditableTimingProfilerProvider *this,ETimingProfilerTimerType param_1,
          TStringView<wchar_t> *param_2,wchar_t *param_3,uint param_4)

{
  uint uVar1;
  undefined7 in_register_00000011;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar1 = (**(code **)((longlong)*this + 0x30))(this,CONCAT71(in_register_00000011,param_1));
  if (uVar1 != 0) {
    local_18 = *(undefined4 *)&param_2->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iStack_10 = param_2->Size;
    uStack_c = *(undefined4 *)&param_2->field_0xc;
    (**(code **)((longlong)*this + 0x40))(this,uVar1,&local_18,param_3,param_4);
  }
  return uVar1;
}

// AddVerseTimer @ 14d43e8f0

uint __thiscall
TraceServices::IEditableTimingProfilerProvider::AddVerseTimer
          (IEditableTimingProfilerProvider *this,TStringView<wchar_t> *param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->Size;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  uVar1 = (**(code **)((longlong)*this + 0x28))(local_18,3,&local_18);
  return uVar1;
}

// GetGpuQueueEditableTimeline @ 14d468020

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::IEditableTimingProfilerProvider::GetGpuQueueEditableTimeline
          (IEditableTimingProfilerProvider *this,uint param_1)

{
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// GetGpuQueueWorkEditableTimeline @ 14d468330

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::IEditableTimingProfilerProvider::GetGpuQueueWorkEditableTimeline
          (IEditableTimingProfilerProvider *this,uint param_1)

{
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// GetReadProvider @ 14d46c280

ITimingProfilerProvider * __thiscall
TraceServices::IEditableTimingProfilerProvider::GetReadProvider
          (IEditableTimingProfilerProvider *this)

{
  return (ITimingProfilerProvider *)0x0;
}

// GetVerseEditableTimeline @ 14d471b50

IEditableTimeline<TraceServices::FTimingProfilerEvent> * __thiscall
TraceServices::IEditableTimingProfilerProvider::GetVerseEditableTimeline
          (IEditableTimingProfilerProvider *this)

{
  return (IEditableTimeline<TraceServices::FTimingProfilerEvent> *)0x0;
}

// SetMetadata @ 14d48a0f0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetMetadata
          (IEditableTimingProfilerProvider *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// SetMetadata @ 14d48a100

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetMetadata
          (IEditableTimingProfilerProvider *this,uint param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  return;
}

// SetMetadataSpec @ 14d48a1f0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetMetadataSpec
          (IEditableTimingProfilerProvider *this,uint param_1,uint param_2)

{
  return;
}

// SetRatioOfThreadsToUse @ 14d48b070

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetRatioOfThreadsToUse
          (IEditableTimingProfilerProvider *this,double param_1)

{
  return;
}

// SetTimerLocation @ 14d48b9b0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetTimerLocation
          (IEditableTimingProfilerProvider *this,uint param_1,wchar_t *param_2,uint param_3)

{
  return;
}

// SetTimerNameAndLocation @ 14d48bbe0

void __thiscall
TraceServices::IEditableTimingProfilerProvider::SetTimerNameAndLocation
          (IEditableTimingProfilerProvider *this,uint param_1,TStringView<wchar_t> *param_2,
          wchar_t *param_3,uint param_4)

{
  undefined4 in_register_00000014;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->Size;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  (**(code **)((longlong)*this + 0x38))(local_18,CONCAT44(in_register_00000014,param_1),&local_18);
                    /* WARNING: Could not recover jumptable at 0x00014d48bc2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x48))(this,param_1,param_3,param_4);
  return;
}

