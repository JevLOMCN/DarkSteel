// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 20

// FRigVMFunction @ 14a0bcc20

FRigVMFunction * __thiscall
FRigVMFunction::FRigVMFunction(FRigVMFunction *this,FRigVMFunction *param_1)

{
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FRigVMFunctionArgument *pFVar6;
  FScriptContainerElement *pFVar7;
  
  ::FString::FString(&this->Name,&param_1->Name);
  pTVar1 = &this->Arguments;
  this->Struct = param_1->Struct;
  this->Factory = param_1->Factory;
  this->OwnerRegistry = param_1->OwnerRegistry;
  this->FunctionPtr = param_1->FunctionPtr;
  this->Index = param_1->Index;
  this->TemplateIndex = param_1->TemplateIndex;
  this->PermutationIndex = param_1->PermutationIndex;
  piVar2 = &(this->Arguments).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Arguments).ArrayNum;
  pFVar6 = (FRigVMFunctionArgument *)(param_1->Arguments).AllocatorInstance.Data;
  (this->Arguments).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
              ((pTVar1->AllocatorInstance).Data,pFVar6,iVar5);
  }
  pTVar3 = &this->ArgumentTypeIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArgumentTypeIndices).ArrayMax;
  iVar5 = (param_1->ArgumentTypeIndices).ArrayNum;
  pFVar7 = (param_1->ArgumentTypeIndices).AllocatorInstance.Data;
  (this->ArgumentTypeIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0xc);
  }
  pTVar4 = &this->ArgumentNames;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArgumentNames).ArrayMax;
  iVar5 = (param_1->ArgumentNames).ArrayNum;
  pFVar7 = (param_1->ArgumentNames).AllocatorInstance.Data;
  (this->ArgumentNames).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 3);
  }
  return this;
}

// FRigVMFunction @ 14a0bcda0

FRigVMFunction * __thiscall
FRigVMFunction::FRigVMFunction
          (FRigVMFunction *this,wchar_t *param_1,
          _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
          *param_2,UScriptStruct *param_3,int param_4,
          TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *param_5)

{
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRigVMFunctionArgument *pFVar3;
  code *pcVar4;
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRigVMFunction *pFVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  ::FString::FString(&this->Name,param_1);
  pTVar1 = &this->Arguments;
  this->Index = param_4;
  this->Struct = param_3;
  this->Factory = (FRigVMDispatchFactory *)0x0;
  this->OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  this->FunctionPtr = param_2;
  this->TemplateIndex = -1;
  this->PermutationIndex = -1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = param_5->ArrayNum;
  pFVar3 = (FRigVMFunctionArgument *)(param_5->AllocatorInstance).Data;
  piVar2 = &(this->Arguments).ArrayMax;
  (this->Arguments).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
              ((pTVar1->AllocatorInstance).Data,pFVar3,iVar7);
  }
  piVar2 = &(this->ArgumentNames).ArrayNum;
  (this->ArgumentNames).ArrayMax = 0;
  *piVar2 = 0;
  (this->ArgumentTypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArgumentTypeIndices).ArrayNum = 0;
  (this->ArgumentTypeIndices).ArrayMax = 0;
  (this->ArgumentNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar10 = (this->Arguments).ArrayNum;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar10,&(this->ArgumentNames).AllocatorInstance,piVar2,
                       &(this->ArgumentNames).ArrayMax);
    memset((this->ArgumentNames).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
           (longlong)(int)uVar10 << 3);
  }
  uVar10 = 0;
  if (0 < (this->Arguments).ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Arguments).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FRigVMFunction *)(*pcVar4)();
        return pFVar9;
      }
      ::FName::FName((FName *)&param_5,*(wchar_t **)((pTVar1->AllocatorInstance).Data + lVar12));
      pTVar5 = param_5;
      uVar8 = 0;
      if ((int)uVar10 < (this->ArgumentNames).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FRigVMFunction *)(*pcVar4)();
        return pFVar9;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x38;
      *(TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> **)
       ((this->ArgumentNames).AllocatorInstance.Data + lVar11) = pTVar5;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->Arguments).ArrayNum);
  }
  return this;
}

// FRigVMFunction @ 14a0bcfe0

FRigVMFunction * __thiscall FRigVMFunction::FRigVMFunction(FRigVMFunction *this)

{
  this->Index = -1;
  this->TemplateIndex = -1;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  this->Struct = (UScriptStruct *)0x0;
  this->Factory = (FRigVMDispatchFactory *)0x0;
  this->OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  this->FunctionPtr =
       (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
        *)0x0;
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = 0;
  (this->Arguments).ArrayMax = 0;
  (this->ArgumentTypeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArgumentTypeIndices).ArrayNum = 0;
  (this->ArgumentTypeIndices).ArrayMax = 0;
  (this->ArgumentNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArgumentNames).ArrayNum = 0;
  (this->ArgumentNames).ArrayMax = 0;
  this->PermutationIndex = -1;
  return this;
}

// ~FRigVMFunction @ 14a0c2cd0

void __thiscall FRigVMFunction::~FRigVMFunction(FRigVMFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ArgumentNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArgumentTypeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)(this->Arguments).AllocatorInstance.Data,
             (this->Arguments).ArrayNum);
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a0c47a0

FRigVMFunction * __thiscall FRigVMFunction::operator=(FRigVMFunction *this,FRigVMFunction *param_1)

{
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (this != param_1) {
    pFVar6 = (this->Name).Data.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
    (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
    (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
    (param_1->Name).Data.ArrayNum = 0;
    (param_1->Name).Data.ArrayMax = 0;
  }
  pTVar1 = &param_1->Arguments;
  this->Struct = param_1->Struct;
  pTVar2 = &this->Arguments;
  this->Factory = param_1->Factory;
  this->OwnerRegistry = param_1->OwnerRegistry;
  this->FunctionPtr = param_1->FunctionPtr;
  this->Index = param_1->Index;
  this->TemplateIndex = param_1->TemplateIndex;
  this->PermutationIndex = param_1->PermutationIndex;
  if (pTVar2 != pTVar1) {
    DestructItems<FRigVMFunctionArgument,int>
              ((FRigVMFunctionArgument *)(pTVar2->AllocatorInstance).Data,(this->Arguments).ArrayNum
              );
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Arguments).ArrayNum = (param_1->Arguments).ArrayNum;
    (this->Arguments).ArrayMax = (param_1->Arguments).ArrayMax;
    (param_1->Arguments).ArrayNum = 0;
    (param_1->Arguments).ArrayMax = 0;
  }
  pTVar3 = &param_1->ArgumentTypeIndices;
  pTVar4 = &this->ArgumentTypeIndices;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArgumentTypeIndices).ArrayNum = (param_1->ArgumentTypeIndices).ArrayNum;
    (this->ArgumentTypeIndices).ArrayMax = (param_1->ArgumentTypeIndices).ArrayMax;
    (param_1->ArgumentTypeIndices).ArrayNum = 0;
    (param_1->ArgumentTypeIndices).ArrayMax = 0;
  }
  pTVar7 = &param_1->ArgumentNames;
  pTVar5 = &this->ArgumentNames;
  if (pTVar5 != pTVar7) {
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArgumentNames).ArrayNum = (param_1->ArgumentNames).ArrayNum;
    (this->ArgumentNames).ArrayMax = (param_1->ArgumentNames).ArrayMax;
    (param_1->ArgumentNames).ArrayNum = 0;
    (param_1->ArgumentNames).ArrayMax = 0;
  }
  return this;
}

// GetArgumentNameForOperandIndex @ 14a0df9b0

FName * __thiscall
FRigVMFunction::GetArgumentNameForOperandIndex
          (FRigVMFunction *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  if ((param_3->Registry != this->OwnerRegistry) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                         ,0x10b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FName *)(*pcVar1)();
    return pFVar3;
  }
  if (this->Factory == (FRigVMDispatchFactory *)0x0) {
    if (((param_1 < 0) || ((this->ArgumentNames).ArrayNum <= param_1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArgumentNames.IsValidIndex(InOperandIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                           ,0x116,L"RigVMFunction %s: Invalid operand index %d/%d"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
    uVar6 = 0;
    if (param_1 < (this->ArgumentNames).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
    pFVar5 = (this->ArgumentNames).AllocatorInstance.Data;
  }
  else {
    pTVar4 = FRigVMDispatchFactory::UpdateArgumentNameCache_NoLock(this->Factory,param_2,param_3);
    if ((pTVar4 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FactoryArgumentNames",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                           ,0x110,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
    if (((param_1 < 0) || (pTVar4->ArrayNum <= param_1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FactoryArgumentNames->IsValidIndex(InOperandIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                           ,0x111,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
    uVar6 = 0;
    if (param_1 < pTVar4->ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
    pFVar5 = (pTVar4->AllocatorInstance).Data;
  }
  return (FName *)(pFVar5 + (longlong)param_1 * 8);
}

// GetArgumentTypeIndices @ 14a0dff30

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMFunction::GetArgumentTypeIndices(FRigVMFunction *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  AcquireSRWLockExclusive((PSRWLOCK)&((FRigVMRegistry_RWLock *)local_28.Registry)->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_18->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if ((FRigVMRegistry_RWLock *)local_28.Registry != (FRigVMRegistry_RWLock *)this->OwnerRegistry) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0x84,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pTVar7 = &this->ArgumentTypeIndices;
  if (((this->ArgumentTypeIndices).ArrayNum == 0) && ((this->Arguments).ArrayNum != 0)) {
    GetArgumentTypeIndices_NoLock(this,&local_28,pTVar7);
  }
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      aVar5 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pTVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pTVar7;
}

// GetArgumentTypeIndices_NoLock @ 14a0e0130

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMFunction::GetArgumentTypeIndices_NoLock(FRigVMFunction *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (((this->ArgumentTypeIndices).ArrayNum == 0) && ((this->Arguments).ArrayNum != 0)) {
    GetArgumentTypeIndices_NoLock(this,param_1,&this->ArgumentTypeIndices);
  }
  return &this->ArgumentTypeIndices;
}

// GetArgumentTypeIndices_NoLock @ 14a0e01b0

void __thiscall
FRigVMFunction::GetArgumentTypeIndices_NoLock
          (FRigVMFunction *this,FRigVMRegistryHandle *param_1,
          TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  FRigVMRegistry_NoLock *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  FProperty *pFVar10;
  size_t sVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_00;
  FRigVMTemplate *this_01;
  TRigVMTypeIndex *pTVar14;
  ulonglong uVar15;
  FRigVMTemplateArgument *this_02;
  ForAnyElementType FVar16;
  FRigVMTemplateArgument *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_188;
  FString local_178;
  FString local_168;
  FName local_158;
  int local_150;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  FName local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  UScriptStruct *local_100;
  FName local_f8;
  UScriptStruct *local_f0;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FScriptContainerElement *local_c0;
  FName local_b8;
  FName local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  undefined1 local_60 [12];
  TRigVMTypeIndex local_54;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (this->Struct == (UScriptStruct *)0x0) {
    lVar18 = (**(code **)(param_1->Registry->_padding_ + 0x178))();
    if ((-1 < this->TemplateIndex) && (this->TemplateIndex < *(int *)(lVar18 + 0x10))) {
      this_00 = (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
                (**(code **)(param_1->Registry->_padding_ + 0x178))();
      this_01 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                          (this_00,this->TemplateIndex);
      if ((this->PermutationIndex == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PermutationIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                             ,0xa8,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = this->PermutationIndex;
      iVar8 = FRigVMTemplate::FindPermutation_NoLock(this_01,this,param_1);
      if ((iVar7 != iVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PermutationIndex == Template->FindPermutation_NoLock(this, InRegistry)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                             ,0xa9,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->Arguments).ArrayNum;
      pFVar19 = (this->Arguments).AllocatorInstance.Data;
      pFVar20 = pFVar19 + (longlong)iVar7 * 0x38;
      while( true ) {
        if ((this->Arguments).ArrayNum != iVar7) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FRigVMFunctionArgument_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar19 == pFVar20) break;
        pFVar4 = param_1->Registry;
        pcVar5 = *(code **)(pFVar4->_padding_ + 0x100);
        ::FString::FString(&local_78,*(wchar_t **)(pFVar19 + 8));
        (*pcVar5)(pFVar4,&local_158,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_150 == -1) {
          ::FName::FName(&local_b0,*(wchar_t **)pFVar19);
          this_02 = (FRigVMTemplateArgument *)(this_01->Arguments).AllocatorInstance.Data;
          pFVar17 = this_02 + (this_01->Arguments).ArrayNum;
          for (; this_02 != pFVar17; this_02 = this_02 + 1) {
            if (this_02->Name == local_b0) {
              if (this_02 != (FRigVMTemplateArgument *)0x0) {
                pTVar14 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                                    (this_02,&local_54,this->PermutationIndex,param_1);
                local_158 = pTVar14->Name;
                local_150 = pTVar14->Index;
              }
              break;
            }
          }
        }
        pFVar9 = (FName *)(param_2->AllocatorInstance).Data;
        if (((pFVar9 <= &local_158) &&
            (&local_158 < (FName *)((longlong)pFVar9 + (longlong)param_2->ArrayMax * 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pFVar19 = pFVar19 + 0x38;
        param_2->ArrayNum = iVar8 + 1;
        pFVar3 = (param_2->AllocatorInstance).Data;
        *(FName *)(pFVar3 + (longlong)iVar8 * 0xc) = local_158;
        *(int *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_150;
      }
    }
  }
  else {
    local_13c = (this->Arguments).ArrayNum;
    uVar15 = (ulonglong)(int)local_13c;
    pFVar19 = (this->Arguments).AllocatorInstance.Data;
    pFVar20 = pFVar19 + uVar15 * 0x38;
    local_c0 = pFVar20;
    while( true ) {
      if ((this->Arguments).ArrayNum != (int)uVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRigVMFunctionArgument_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar19 == pFVar20) break;
      pUVar2 = this->Struct;
      pFVar9 = ::FName::FName(&local_68,*(wchar_t **)pFVar19);
      pFVar10 = UStruct::FindPropertyByName((UStruct *)pUVar2,*pFVar9);
      if (pFVar10 == (FProperty *)0x0) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_148 = 0;
        local_140 = 0xffffffff;
        if (((pFVar3 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar19 = pFVar19 + 0x38;
        pFVar3 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0xc) = local_148;
        uVar15 = (ulonglong)local_13c;
        *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = local_140;
      }
      else {
        local_138.ComparisonIndex.Value = 0;
        local_138.Number = 0;
        local_100 = (UScriptStruct *)0x0;
        RigVMPropertyUtils::GetTypeFromProperty(pFVar10,&local_138,(UObject **)&local_100);
        local_f8 = local_138;
        local_f0 = local_100;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_100 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_100);
        }
        ::FName::ToString(&local_f8,&local_130);
        pUVar2 = local_f0;
        FVar16.Data = local_130.Data.AllocatorInstance.Data;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        lVar18 = (longlong)local_130.Data.ArrayNum;
        local_188.Data.ArrayNum = local_130.Data.ArrayNum;
        if (local_130.Data.ArrayNum == 0) {
          local_188.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                     local_130.Data.ArrayNum,&local_188.Data.ArrayMax);
          memcpy(local_188.Data.AllocatorInstance.Data,FVar16.Data,lVar18 * 2);
        }
        RigVMTypeUtils::CleanupCPPType(&local_188);
        if (pUVar2 == (UScriptStruct *)0x0) {
          bVar6 = RigVMTypeUtils::RequiresCPPTypeObject(&local_188);
          if (bVar6) {
            RigVMTypeUtils::ObjectFromCPPType(&local_188,true,(FRigVMUserDefinedTypeResolver *)0x0);
          }
        }
        else {
          sVar11 = wcslen(L"TSubclassOf<");
          bVar6 = ::FString::StartsWith(&local_188,L"TSubclassOf<",(int)sVar11,IgnoreCase);
          pUVar12 = Z_Construct_UClass_UClass_NoRegister();
          iVar7 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar12->_padding_)) {
            pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar7 = (int)pUVar12->_padding_;
            if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar7) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar12->_padding_)) {
              pUVar12 = Z_Construct_UClass_UEnum_NoRegister();
              iVar7 = (int)pUVar12->_padding_;
              if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                  &pUVar12->_padding_)) {
                local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_178.Data.ArrayNum = 0;
                local_178.Data.ArrayMax = 0;
              }
              else {
                RigVMTypeUtils::CPPTypeFromEnum(&local_178,(UEnum *)pUVar2);
              }
            }
            else {
              RigVMTypeUtils::GetUniqueStructTypeName(&local_178,pUVar2);
            }
          }
          else if (bVar6) {
            local_d8 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_d8,&local_a8);
            (**(code **)(pUVar2->_padding_ + 0x318))(pUVar2);
            ::FString::PrintfImpl(&local_178,L"TSubclassOf<%s%s>");
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          else {
            pUVar12 = Z_Construct_UClass_UInterface_NoRegister();
            if (pUVar12 != (UClass *)0x0) {
              iVar7 = (int)pUVar12->_padding_;
              if (((int)pUVar2->_padding_ < iVar7) ||
                 ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar7 * 8) !=
                  &pUVar12->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                local_d0 = (FName)pUVar2->_padding_;
                ::FName::ToString(&local_d0,&local_98);
                ::FString::PrintfImpl(&local_178,L"TScriptInterface<%s%s>");
                if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                goto LAB_14a0e0541;
              }
            }
            local_c8 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_c8,&local_88);
            (**(code **)(pUVar2->_padding_ + 0x318))(pUVar2);
            ::FString::PrintfImpl(&local_178,L"TObjectPtr<%s%s>");
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
LAB_14a0e0541:
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          FVar16.Data = local_178.Data.AllocatorInstance.Data;
          iVar7 = local_178.Data.ArrayNum;
          local_188.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.Data.ArrayNum = local_178.Data.ArrayNum;
          local_188.Data.ArrayMax = local_178.Data.ArrayMax;
          local_178.Data.ArrayNum = 0;
          local_178.Data.ArrayMax = 0;
          if (iVar7 == local_130.Data.ArrayNum) {
            if (iVar7 < 2) goto LAB_14a0e0740;
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)FVar16.Data,
                               (wchar_t *)local_130.Data.AllocatorInstance.Data);
            bVar6 = iVar7 == 0;
          }
          else {
            bVar6 = local_130.Data.ArrayNum + iVar7 == 1;
          }
          iVar7 = local_130.Data.ArrayNum;
          FVar16.Data = local_130.Data.AllocatorInstance.Data;
          if (!bVar6) {
            local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_168.Data.ArrayNum = local_130.Data.ArrayNum;
            if (local_130.Data.ArrayNum == 0) {
              local_168.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
                         local_130.Data.ArrayNum,&local_168.Data.ArrayMax);
              memcpy(local_168.Data.AllocatorInstance.Data,FVar16.Data,(longlong)iVar7 * 2);
            }
            while( true ) {
              sVar11 = wcslen(L"TArray<");
              bVar6 = ::FString::StartsWith(&local_168,L"TArray<",(int)sVar11,IgnoreCase);
              pFVar20 = local_c0;
              if (!bVar6) break;
              local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e8.Data.ArrayNum = 0;
              local_e8.Data.ArrayMax = 0;
              RigVMStringUtils::JoinStrings
                        (&local_120,&local_e8,&local_188,L"TArray<",(wchar_t *)0x0,L">");
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              local_188.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
              local_188.Data.ArrayNum = local_120.Data.ArrayNum;
              local_188.Data.ArrayMax = local_120.Data.ArrayMax;
              local_120.Data.ArrayNum = 0;
              local_120.Data.ArrayMax = 0;
              local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar7 = 0;
              if (local_168.Data.ArrayNum != 0) {
                iVar7 = local_168.Data.ArrayNum + -1;
              }
              ::FString::Mid(&local_168,&local_110,7,iVar7 + -8);
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
              local_168.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
              local_168.Data.ArrayNum = local_110.Data.ArrayNum;
              local_168.Data.ArrayMax = local_110.Data.ArrayMax;
              local_110.Data.ArrayNum = 0;
              local_110.Data.ArrayMax = 0;
              local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
          }
        }
LAB_14a0e0740:
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_188.Data.ArrayNum != 0) {
          FVar16.Data = local_188.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_b8,(wchar_t *)FVar16.Data);
        local_f8 = local_b8;
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        pFVar13 = (FScriptContainerElement *)
                  (**(code **)(param_1->Registry->_padding_ + 0xc0))
                            (param_1->Registry,local_60,&local_f8);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar13) && (pFVar13 < pFVar3 + (longlong)*piVar1 * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar19 = pFVar19 + 0x38;
        pFVar3 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0xc) = *(undefined8 *)pFVar13;
        uVar15 = (ulonglong)local_13c;
        *(undefined4 *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = *(undefined4 *)(pFVar13 + 8);
      }
    }
  }
  return;
}

// GetExecuteContextStruct @ 14a0e49e0

UScriptStruct * __thiscall FRigVMFunction::GetExecuteContextStruct(FRigVMFunction *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  UScriptStruct *pUVar8;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar7;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  pUVar8 = GetExecuteContextStruct_NoLock(this,&local_28);
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UScriptStruct *)(*pcVar4)();
      return pUVar8;
    }
  }
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  return pUVar8;
}

// GetExecuteContextStruct_NoLock @ 14a0e4cc0

UScriptStruct * __thiscall
FRigVMFunction::GetExecuteContextStruct_NoLock(FRigVMFunction *this,FRigVMRegistryHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  UPackage *pUVar5;
  FStructOnScope local_38;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0xed,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UScriptStruct *)(*pcVar2)();
      return pUVar4;
    }
  }
  if (this->Factory != (FRigVMDispatchFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a0e4d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar4 = (UScriptStruct *)(**(code **)(this->Factory->_padding_ + 0x20))();
    return pUVar4;
  }
  pUVar4 = this->Struct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct,(UObject *)pUVar5,L"RigVMStruct");
      if (Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14a0e4daa;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton)->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FStructOnScope::FStructOnScope(&local_38,(UStruct *)this->Struct);
      pUVar4 = (UScriptStruct *)(**(code **)(*(longlong *)local_38.SampleStructMemory + 0x30))();
      FStructOnScope::~FStructOnScope(&local_38);
      return pUVar4;
    }
  }
LAB_14a0e4daa:
  pUVar4 = FRigVMExecuteContext::StaticStruct();
  return pUVar4;
}

// GetMethodName @ 14a0e8100

FName __thiscall FRigVMFunction::GetMethodName(FRigVMFunction *this)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  FName in_RDX;
  ForAnyElementType FVar2;
  longlong lVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.ArrayNum = (this->Name).Data.ArrayNum;
  lVar3 = (longlong)local_38.Data.ArrayNum;
  _Src = (this->Name).Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L"::");
  bVar1 = ::FString::Split(&local_38,&local_18,(FString *)0x0,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)in_RDX,(wchar_t *)FVar2.Data);
  }
  else {
    *(undefined8 *)in_RDX = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetModuleName @ 14a0e8220

FString * __thiscall
FRigVMFunction::GetModuleName(FRigVMFunction *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetModuleRelativeHeaderPath @ 14a0e8240

FString * __thiscall
FRigVMFunction::GetModuleRelativeHeaderPath(FRigVMFunction *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetName @ 14a0e8260

FString * __thiscall FRigVMFunction::GetName(FRigVMFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->Name);
  return __return_storage_ptr__;
}

// GetTemplate @ 14a0ecc10

FRigVMTemplate * __thiscall FRigVMFunction::GetTemplate(FRigVMFunction *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMTemplate *pFVar8;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_00;
  FRigVMTemplate *this_01;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  pFVar8 = (FRigVMTemplate *)0x0;
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  if (pFVar7 != (FRigVMRegistry_RWLock *)this->OwnerRegistry) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0xce,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigVMTemplate *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (this->TemplateIndex != -1) {
    this_00 = (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
              (**(code **)(pFVar7->_padding_ + 0x178))(pFVar7);
    this_01 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                        (this_00,this->TemplateIndex);
    if (this_01->Notation != (FName)0x0) {
      bVar5 = FRigVMTemplate::UsesDispatch(this_01);
      if ((bVar5) || (1 < (this_01->Permutations).ArrayNum)) {
        pFVar8 = this_01;
      }
    }
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigVMTemplate *)(*pcVar4)();
      return pFVar8;
    }
  }
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  return pFVar8;
}

// GetTemplate_NoLock @ 14a0ecd60

FRigVMTemplate * __thiscall
FRigVMFunction::GetTemplate_NoLock(FRigVMFunction *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigVMTemplate *pFVar3;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0xce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMTemplate *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->TemplateIndex != -1) {
    this_00 = (TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *)
              (**(code **)(param_1->Registry->_padding_ + 0x178))();
    pFVar3 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (this_00,this->TemplateIndex);
    if (pFVar3->Notation != (FName)0x0) {
      bVar2 = FRigVMTemplate::UsesDispatch(pFVar3);
      if ((!bVar2) && ((pFVar3->Permutations).ArrayNum < 2)) {
        pFVar3 = (FRigVMTemplate *)0x0;
      }
      return pFVar3;
    }
  }
  return (FRigVMTemplate *)0x0;
}

// Serialize_NoLock @ 14a10ede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMFunction::Serialize_NoLock
          (FRigVMFunction *this,FArchive *param_1,FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  FRigVMDispatchFactory *pFVar10;
  FRigVMRegistry_RWLock *this_00;
  FRigVMFunction *pFVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  FRigVMFunctionArgument *pFVar15;
  FRigVMFunctionArgument *pFVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_128 [32];
  uint local_f8;
  undefined1 local_f4 [4];
  uint local_f0 [2];
  FRigVMRegistryHandle *local_e8;
  longlong local_e0;
  UScriptStruct *local_d8 [2];
  undefined1 local_c8 [40];
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e8 = param_2;
  if (((param_1->field_0x28 & 4) != 0) && (param_2->Registry != this->OwnerRegistry)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0x11e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ::operator<<(param_1,&this->Name);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&this->Struct);
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) {
      local_d8[0] = (UScriptStruct *)0x0;
      if (this->Factory != (FRigVMDispatchFactory *)0x0) {
        local_d8[0] = this->Factory->FactoryScriptStruct;
      }
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_d8);
      plVar12 = *(longlong **)&param_1->field_0x8;
      local_f0[0] = (this->Arguments).ArrayNum;
      if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_f0,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_f0);
        }
      }
      else {
        local_f0[0] = *(uint *)*plVar12;
        *plVar12 = *plVar12 + 4;
      }
      iVar7 = (this->Arguments).ArrayNum;
      pFVar15 = (FRigVMFunctionArgument *)(this->Arguments).AllocatorInstance.Data;
      pFVar16 = pFVar15 + iVar7;
      while( true ) {
        if ((this->Arguments).ArrayNum != iVar7) {
          `TCheckedPointerIterator<FRigVMFunctionArgument,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f4);
        }
        if (pFVar15 == pFVar16) break;
        FRigVMFunctionArgument::Serialize_NoLock(pFVar15,param_1);
        pFVar15 = pFVar15 + 1;
      }
    }
  }
  else {
    this->Index = -1;
    this->TemplateIndex = -1;
    uVar13 = 0;
    this->FunctionPtr =
         (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
          *)0x0;
    iVar7 = (this->Arguments).ArrayNum;
    pFVar15 = (FRigVMFunctionArgument *)(this->Arguments).AllocatorInstance.Data;
    piVar1 = &(this->Arguments).ArrayMax;
    piVar2 = &(this->Arguments).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FRigVMFunctionArgument,int>(pFVar15,iVar7);
      *piVar2 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->Arguments).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FRigVMFunctionArgument,int>(pFVar15,iVar7);
      *piVar2 = 0;
    }
    (this->ArgumentTypeIndices).ArrayNum = 0;
    if ((this->ArgumentTypeIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(this->ArgumentTypeIndices).AllocatorInstance,0,
                 &(this->ArgumentTypeIndices).ArrayMax);
    }
    (this->ArgumentNames).ArrayNum = 0;
    if ((this->ArgumentNames).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->ArgumentNames).AllocatorInstance,0,&(this->ArgumentNames).ArrayMax);
    }
    local_e0 = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_e0);
    plVar12 = *(longlong **)&param_1->field_0x8;
    local_f8 = 0;
    if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_f8);
      }
    }
    else {
      local_f8 = *(uint *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    lVar14 = (longlong)(int)local_f8;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,local_f8,&(this->Arguments).AllocatorInstance,piVar2,piVar1);
    memset((this->Arguments).AllocatorInstance.Data + (longlong)iVar7 * 0x38,0,lVar14 * 0x38);
    if (0 < (int)local_f8) {
      do {
        uVar8 = 0;
        if ((int)uVar13 < *piVar2) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FRigVMFunctionArgument::Serialize_NoLock
                  ((FRigVMFunctionArgument *)
                   ((this->Arguments).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x38),param_1
                  );
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)local_f8);
    }
    if (local_e0 == 0) {
      this->Factory = (FRigVMDispatchFactory *)0x0;
      this_00 = FRigVMRegistry_RWLock::Get();
      uStack_60 = 0;
      local_78 = (void *)0x0;
      uStack_70 = 0x8000000000;
      local_68 = 0xffffffff;
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_c8._0_8_ = 0;
      local_c8._8_8_ = 0;
      local_c8._16_8_ = 0;
      local_c8._24_8_ = 0;
      local_c8._32_8_ = 0;
      plStack_a0 = (longlong *)0x0;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_98._16_8_ = 0;
      uStack_80 = 0;
      if ((this->Name).Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
      }
      AcquireSRWLockExclusive((PSRWLOCK)&this_00->Lock);
      aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
      LOCK();
      this_00->WriteLockOwnerThread = aVar9;
      UNLOCK();
      LOCK();
      paVar3 = &this_00->LockCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x0) {
        LOCK();
        this_00->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
        UNLOCK();
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538103>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x249,"DesiredLockType != LockType_Write");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar11 = FRigVMRegistry_NoLock::FindFunction_NoLock
                          ((FRigVMRegistry_NoLock *)this_00,pwVar17,
                           (FRigVMUserDefinedTypeResolver *)local_c8);
      LOCK();
      paVar3 = &this_00->LockCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        LOCK();
        this_00->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      this_00->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&this_00->Lock);
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_98,0,local_98._8_4_);
      iVar7 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      uVar13 = uStack_70._4_4_;
      local_68 = 0xffffffff;
      uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
      if (0x80 < uVar13) {
        uStack_70 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (local_c8._0_8_ != 0) {
        plVar12 = (longlong *)(local_c8 + 0x10);
        if (plStack_a0 != (longlong *)0x0) {
          plVar12 = plStack_a0;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (pFVar11 != (FRigVMFunction *)0x0) {
        this->FunctionPtr = pFVar11->FunctionPtr;
      }
    }
    else {
      pFVar10 = (FRigVMDispatchFactory *)(**(code **)(local_e8->Registry->_padding_ + 0x198))();
      this->Factory = pFVar10;
    }
  }
  return;
}

// SupportsExecuteContextStruct @ 14a1119e0

/* WARNING: Removing unreachable block (ram,0x00014a111b4e) */
/* WARNING: Removing unreachable block (ram,0x00014a111b54) */
/* WARNING: Removing unreachable block (ram,0x00014a111b58) */
/* WARNING: Removing unreachable block (ram,0x00014a111b84) */
/* WARNING: Removing unreachable block (ram,0x00014a111b8a) */

bool __thiscall
FRigVMFunction::SupportsExecuteContextStruct(FRigVMFunction *this,UScriptStruct *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  atomic<unsigned_int> aVar9;
  FRigVMRegistry_RWLock *pFVar10;
  UScriptStruct *pUVar11;
  FRigVMRegistryHandle local_38;
  undefined1 local_30;
  FRigVMRegistry_RWLock *local_28;
  undefined1 local_20;
  
  pFVar10 = FRigVMRegistry_RWLock::Get();
  local_30 = 1;
  aVar3 = pFVar10->WriteLockOwnerThread;
  local_20 = 0;
  local_38.Registry = (FRigVMRegistry_NoLock *)pFVar10;
  local_28 = pFVar10;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar9) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar10->Lock);
  }
  LOCK();
  paVar1 = &pFVar10->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar10->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  if ((pFVar10 != (FRigVMRegistry_RWLock *)this->OwnerRegistry) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                         ,0x104,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pUVar11 = GetExecuteContextStruct_NoLock(this,&local_38);
  if (pUVar11 != (UScriptStruct *)0x0) {
    iVar4 = (int)pUVar11->_padding_;
    if ((iVar4 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar4 * 8) ==
        &pUVar11->_padding_)) {
      bVar6 = true;
      goto LAB_14a111acb;
    }
  }
  bVar6 = false;
LAB_14a111acb:
  LOCK();
  paVar1 = &pFVar10->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar10->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  if (((int)aVar2 + -1 < 0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4767296351463538070>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                         ,0x26a,"CurrentLockCount >= 0"), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  aVar3 = pFVar10->WriteLockOwnerThread;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar9) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar10->Lock);
  }
  return bVar6;
}

// SupportsExecuteContextStruct_NoLock @ 14a111e00

bool __thiscall
FRigVMFunction::SupportsExecuteContextStruct_NoLock
          (FRigVMFunction *this,UScriptStruct *param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  
  if (param_2->Registry != this->OwnerRegistry) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMFunction.cpp"
                       ,0x104,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar5 = GetExecuteContextStruct_NoLock(this,param_2);
  if (pUVar5 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar5->_padding_
       )) {
      return true;
    }
  }
  return false;
}

