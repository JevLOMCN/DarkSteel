// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Create @ 14148e9c0

void __cdecl UE::FPlatformIoDispatcher::Create(FPlatformIoDispatcherCreateParams *param_1)

{
  IPlatformIoDispatcher IVar1;
  TUniquePtr<UE::IPlatformIoDispatcher,TDefaultDelete<UE::IPlatformIoDispatcher>_> TVar2;
  FGenericPlatformIoDispatcher *this;
  FGenericPlatformIoDispatcher *pFVar3;
  TUniquePtr<UE::IPlatformIoDispatcher,TDefaultDelete<UE::IPlatformIoDispatcher>_> TVar4;
  
  this = ::operator_new(0x458);
  pFVar3 = (FGenericPlatformIoDispatcher *)0x0;
  if (this != (FGenericPlatformIoDispatcher *)0x0) {
    pFVar3 = FGenericPlatformIoDispatcher::FGenericPlatformIoDispatcher(this,param_1);
  }
  TVar2.Ptr = GPlatformIoDispatcher.Ptr;
  TVar4.Ptr = (IPlatformIoDispatcher *)&pFVar3->_padding_;
  if (pFVar3 == (FGenericPlatformIoDispatcher *)0x0) {
    TVar4.Ptr = (IPlatformIoDispatcher *)(FGenericPlatformIoDispatcher *)0x0;
  }
  if (GPlatformIoDispatcher.Ptr != (IPlatformIoDispatcher *)0x0) {
    IVar1 = *GPlatformIoDispatcher.Ptr;
    GPlatformIoDispatcher.Ptr = TVar4.Ptr;
    (**(code **)IVar1)(TVar2.Ptr,1);
    TVar4.Ptr = GPlatformIoDispatcher.Ptr;
  }
  GPlatformIoDispatcher.Ptr = TVar4.Ptr;
  return;
}

// Get @ 141497340

IPlatformIoDispatcher * __cdecl UE::FPlatformIoDispatcher::Get(void)

{
  return GPlatformIoDispatcher.Ptr;
}

// Initialize @ 14149c2d0

void __cdecl UE::FPlatformIoDispatcher::Initialize(void)

{
  FIoStatus local_18;
  
  if (GPlatformIoDispatcher.Ptr != (IPlatformIoDispatcher *)0x0) {
    (**(code **)((longlong)*GPlatformIoDispatcher.Ptr + 8))(GPlatformIoDispatcher.Ptr,&local_18);
    FIoStatus::~FIoStatus(&local_18);
  }
  return;
}

// Shutdown @ 1414b0ad0

void __cdecl UE::FPlatformIoDispatcher::Shutdown(void)

{
  TUniquePtr<UE::IPlatformIoDispatcher,TDefaultDelete<UE::IPlatformIoDispatcher>_> TVar1;
  
  TVar1.Ptr = GPlatformIoDispatcher.Ptr;
  if (GPlatformIoDispatcher.Ptr != (IPlatformIoDispatcher *)0x0) {
    GPlatformIoDispatcher.Ptr = (IPlatformIoDispatcher *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001414b0aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*TVar1.Ptr)(TVar1.Ptr,1);
    return;
  }
  return;
}

// TryGet @ 1414b6710

IPlatformIoDispatcher * __cdecl UE::FPlatformIoDispatcher::TryGet(void)

{
  return GPlatformIoDispatcher.Ptr;
}

