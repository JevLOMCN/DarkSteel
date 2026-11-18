// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// ~FShaderCompileThreadRunnableBase @ 148511080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnableBase::~FShaderCompileThreadRunnableBase
          (FShaderCompileThreadRunnableBase *this)

{
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// GetExternalWorkerMemoryUsage @ 14852a6e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileMemoryUsage * __thiscall
FShaderCompileThreadRunnableBase::GetExternalWorkerMemoryUsage
          (FShaderCompileThreadRunnableBase *this,FShaderCompileMemoryUsage *__return_storage_ptr__)

{
  __return_storage_ptr__->VirtualMemory = 0;
  __return_storage_ptr__->PhysicalMemory = 0;
  return __return_storage_ptr__;
}

// OnMachineResourcesChanged @ 148534960

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnableBase::OnMachineResourcesChanged(FShaderCompileThreadRunnableBase *this)

{
  return;
}

// PrintWorkerMemoryUsage @ 14853a890

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FShaderCompileThreadRunnableBase::PrintWorkerMemoryUsage
          (FShaderCompileThreadRunnableBase *this,bool param_1)

{
  return false;
}

// Stop @ 148548550

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompileThreadRunnableBase::Stop(FShaderCompileThreadRunnableBase *this)

{
  LOCK();
  this->bForceFinish = (TAtomic<bool>)0x1;
  UNLOCK();
  return;
}

// FShaderCompileThreadRunnableBase @ 1485a4240

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FShaderCompileThreadRunnableBase * __thiscall
FShaderCompileThreadRunnableBase::FShaderCompileThreadRunnableBase
          (FShaderCompileThreadRunnableBase *this,FShaderCompilingManager *param_1)

{
  this->Manager = param_1;
  this->WorkerStateHash = 0;
  this->_padding_ = (longlong)&___7FShaderCompileThreadRunnableBase__6B_;
  this->WorkerStateChangeTimestamp = -1.0;
  this->Thread = (FRunnableThread *)0x0;
  this->MinPriorityIndex = 0;
  this->MaxPriorityIndex = 4;
  this->bForceFinish = (TAtomic<bool>)0x0;
  if (GShaderCompilerCurrentMemoryLimitInMiB == -1) {
    GShaderCompilerCurrentMemoryLimitInMiB = GShaderCompilerConfiguredMemoryLimitInMiB;
  }
  return this;
}

// ForEachPendingJob @ 1485c2c60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnableBase::ForEachPendingJob
          (FShaderCompileThreadRunnableBase *this,
          TFunction<bool___cdecl(FShaderCommonCompileJob_*)> *param_1)

{
  return;
}

// GetThreadName @ 1485cb650

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

wchar_t * __thiscall
FShaderCompileThreadRunnableBase::GetThreadName(FShaderCompileThreadRunnableBase *this)

{
  return L"ShaderCompilingThread";
}

// Run @ 1485d73d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FShaderCompileThreadRunnableBase::Run(FShaderCompileThreadRunnableBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_ShaderCompiler.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_ShaderCompiler.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  if (this->Manager->bAllowAsynchronousShaderCompiling == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manager->bAllowAsynchronousShaderCompiling",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                       ,0x140,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  while (this->bForceFinish == (TAtomic<bool>)0x0) {
    (**(code **)(this->_padding_ + 0x48))(this);
  }
  if (3 < (byte)LogShaderCompilers._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// SetPriorityRange @ 1485d9d50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnableBase::SetPriorityRange
          (FShaderCompileThreadRunnableBase *this,EShaderCompileJobPriority param_1,
          EShaderCompileJobPriority param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->MinPriorityIndex = (uint)param_1;
  this->MaxPriorityIndex = (uint)param_2;
  if ((uint)param_2 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxPriorityIndex >= MinPriorityIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerThreadRunnable.cpp"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StartThread @ 1485dc180

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FShaderCompileThreadRunnableBase::StartThread(FShaderCompileThreadRunnableBase *this)

{
  return;
}

// WorkerStateHeartbeat @ 1485df8a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FShaderCompileThreadRunnableBase::WorkerStateHeartbeat
          (FShaderCompileThreadRunnableBase *this,ulong64 param_1)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (((param_1 == 0) || (param_1 != this->WorkerStateHash)) ||
     (dVar2 = this->WorkerStateChangeTimestamp, this->WorkerStateChangeTimestamp < 0.0)) {
    this->WorkerStateChangeTimestamp = dVar1;
    this->WorkerStateHash = param_1;
    dVar2 = dVar1;
  }
  if ((double)GShaderWorkerStateChangeHeartbeat < dVar1 - dVar2) {
    if (2 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    this->WorkerStateChangeTimestamp = dVar1;
    return false;
  }
  return true;
}

