// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ~FVisualLogDevice @ 1489ba1d0

void __thiscall FVisualLogDevice::~FVisualLogDevice(FVisualLogDevice *this)

{
  this->_padding_ = (longlong)&___7FVisualLogDevice__6B_;
  return;
}

// Cleanup @ 1489cf2e0

void __thiscall FVisualLogDevice::Cleanup(FVisualLogDevice *this,bool param_1)

{
  return;
}

// DiscardRecordingToFile @ 1489d6610

void __thiscall FVisualLogDevice::DiscardRecordingToFile(FVisualLogDevice *this)

{
  return;
}

// GetRecordedLogs @ 1489ecb60

void __thiscall
FVisualLogDevice::GetRecordedLogs
          (FVisualLogDevice *this,
          TArray<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// HasFlags @ 1489f2370

bool __thiscall FVisualLogDevice::HasFlags(FVisualLogDevice *this,int param_1)

{
  return false;
}

// Serialize @ 148a12950

void __thiscall
FVisualLogDevice::Serialize
          (FVisualLogDevice *this,UObject *param_1,FName param_2,FName param_3,
          FVisualLogEntry *param_4)

{
  FName local_res18;
  FName local_res20;
  
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 8))(this,param_1,&local_res18,&local_res18,&local_res20,param_4);
  return;
}

// SetFileName @ 148a14880

void __thiscall FVisualLogDevice::SetFileName(FVisualLogDevice *this,FString *param_1)

{
  return;
}

// StartRecordingToFile @ 148a175a0

void __thiscall FVisualLogDevice::StartRecordingToFile(FVisualLogDevice *this,double param_1)

{
  return;
}

// StopRecordingToFile @ 148a18980

void __thiscall FVisualLogDevice::StopRecordingToFile(FVisualLogDevice *this,double param_1)

{
  return;
}

