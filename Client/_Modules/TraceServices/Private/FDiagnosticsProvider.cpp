// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FDiagnosticsProvider @ 14d4213a0

FDiagnosticsProvider * __thiscall
TraceServices::FDiagnosticsProvider::FDiagnosticsProvider
          (FDiagnosticsProvider *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FDiagnosticsProvider_TraceServices__6B_;
  (this->SessionInfo).Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).Platform.Data.ArrayNum = 0;
  (this->SessionInfo).Platform.Data.ArrayMax = 0;
  (this->SessionInfo).AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).AppName.Data.ArrayNum = 0;
  (this->SessionInfo).AppName.Data.ArrayMax = 0;
  (this->SessionInfo).ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).ProjectName.Data.ArrayNum = 0;
  (this->SessionInfo).ProjectName.Data.ArrayMax = 0;
  (this->SessionInfo).CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).CommandLine.Data.ArrayNum = 0;
  (this->SessionInfo).CommandLine.Data.ArrayMax = 0;
  (this->SessionInfo).Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).Branch.Data.ArrayNum = 0;
  (this->SessionInfo).Branch.Data.ArrayMax = 0;
  (this->SessionInfo).BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).BuildVersion.Data.ArrayNum = 0;
  (this->SessionInfo).BuildVersion.Data.ArrayMax = 0;
  (this->SessionInfo).VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionInfo).VFSPaths.Data.ArrayNum = 0;
  (this->SessionInfo).VFSPaths.Data.ArrayMax = 0;
  (this->SessionInfo).Changelist = 0;
  (this->SessionInfo).ConfigurationType = Unknown;
  (this->SessionInfo).TargetType = Unknown;
  (this->SessionInfo).InstanceId.A = 0;
  (this->SessionInfo).InstanceId.B = 0;
  (this->SessionInfo).InstanceId.C = 0;
  (this->SessionInfo).InstanceId.D = 0;
  this->bIsSessionInfoAvailable = false;
  return this;
}

// ~FDiagnosticsProvider @ 14d42b8f0

void __thiscall
TraceServices::FDiagnosticsProvider::~FDiagnosticsProvider(FDiagnosticsProvider *this)

{
  this->_padding_ = (longlong)&___7FDiagnosticsProvider_TraceServices__6B_;
  FSessionInfo::~FSessionInfo(&this->SessionInfo);
  return;
}

// GetSessionInfo @ 14d46c980

FSessionInfo * __thiscall
TraceServices::FDiagnosticsProvider::GetSessionInfo(FDiagnosticsProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return &this->SessionInfo;
}

// IsSessionInfoAvailable @ 14d474cd0

bool __thiscall
TraceServices::FDiagnosticsProvider::IsSessionInfoAvailable(FDiagnosticsProvider *this)

{
  (**(code **)((longlong)*this->Session + 0x98))();
  return this->bIsSessionInfoAvailable;
}

// SetSessionInfo @ 14d48b330

void __thiscall
TraceServices::FDiagnosticsProvider::SetSessionInfo
          (FDiagnosticsProvider *this,FSessionInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)((longlong)*this->Session + 0xb0))();
  ::FString::operator=(&(this->SessionInfo).Platform,&param_1->Platform);
  ::FString::operator=(&(this->SessionInfo).AppName,&param_1->AppName);
  ::FString::operator=(&(this->SessionInfo).ProjectName,&param_1->ProjectName);
  ::FString::operator=(&(this->SessionInfo).CommandLine,&param_1->CommandLine);
  ::FString::operator=(&(this->SessionInfo).Branch,&param_1->Branch);
  ::FString::operator=(&(this->SessionInfo).BuildVersion,&param_1->BuildVersion);
  ::FString::operator=(&(this->SessionInfo).VFSPaths,&param_1->VFSPaths);
  (this->SessionInfo).Changelist = param_1->Changelist;
  (this->SessionInfo).ConfigurationType = param_1->ConfigurationType;
  (this->SessionInfo).TargetType = param_1->TargetType;
  uVar1 = (param_1->InstanceId).B;
  uVar2 = (param_1->InstanceId).C;
  uVar3 = (param_1->InstanceId).D;
  (this->SessionInfo).InstanceId.A = (param_1->InstanceId).A;
  (this->SessionInfo).InstanceId.B = uVar1;
  (this->SessionInfo).InstanceId.C = uVar2;
  (this->SessionInfo).InstanceId.D = uVar3;
  this->bIsSessionInfoAvailable = true;
  return;
}

