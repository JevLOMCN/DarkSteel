// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AllocateUObject @ 142260d30

UObjectBase * __thiscall
FUObjectAllocator::AllocateUObject(FUObjectAllocator *this,int param_1,int param_2,bool param_3)

{
  FLinearAllocator *this_00;
  UObjectBase *pUVar1;
  
  if ((param_3) && (!GPersistentAllocatorIsDisabled)) {
    this_00 = GetPersistentLinearAllocator();
    pUVar1 = FLinearAllocator::Allocate(this_00,(longlong)param_1,param_2);
    return pUVar1;
  }
  pUVar1 = FMemory::Malloc((longlong)param_1,param_2);
  return pUVar1;
}

// DisablePersistentAllocator @ 142269790

void __thiscall FUObjectAllocator::DisablePersistentAllocator(FUObjectAllocator *this)

{
  GPersistentAllocatorIsDisabled = true;
  return;
}

// FreeUObject @ 14226d4d0

void __thiscall FUObjectAllocator::FreeUObject(FUObjectAllocator *this,UObjectBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectAllocator.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GPersistentLinearAllocatorExtends.Size <=
      (longlong)param_1 - GPersistentLinearAllocatorExtends.Address) {
    FMemory::Free(param_1);
    return;
  }
  if (GExitPurge == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GExitPurge",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectAllocator.cpp"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

