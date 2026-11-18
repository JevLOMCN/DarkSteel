// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06fd00

UScriptStruct * __cdecl FRigVMExternalVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExternalVariable,(UObject *)pUVar1,
                         L"RigVMExternalVariable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExternalVariable.OuterSingleton;
}

// GetTypeIndex @ 14a09b750

TRigVMTypeIndex * __thiscall
FRigVMExternalVariable::GetTypeIndex
          (FRigVMExternalVariable *this,TRigVMTypeIndex *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *this_00;
  FString *pFVar7;
  TRigVMTypeIndex *pTVar8;
  ForAnyElementType FVar9;
  FName local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FRigVMRegistryHandle local_38;
  char local_30;
  FRigVMRegistry_RWLock *local_28;
  atomic<FRigVMRegistry_NoLock::ELockType> local_20;
  
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_);
  if ((((bVar5) && (this->_padding_ != 0)) &&
      (bVar5 = ::FName::IsWithinBounds((FNameEntryId)(uint)this->_padding_), bVar5)) &&
     (this->_padding_ != 0)) {
    this_00 = FRigVMRegistry_RWLock::Get();
    if ((char)this->_padding_ == '\0') {
      local_res8 = (FName)this->_padding_;
    }
    else {
      pFVar7 = ::FName::ToString((FName *)&this->_padding_,&local_58);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      RigVMStringUtils::JoinStrings(&local_68,&local_78,pFVar7,L"TArray<",(wchar_t *)0x0,L">");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar9.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar9.Data);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = ::FName::ToString(&local_res8,&local_48);
    FRigVMRegistryHandle::FRigVMRegistryHandle(&local_38,(FRigVMRegistry_NoLock *)this_00);
    local_30 = '\x01';
    local_20 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    aVar3 = this_00->WriteLockOwnerThread;
    local_28 = this_00;
    aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
    if (aVar3 != aVar6) {
      AcquireSRWLockShared((PSRWLOCK)&local_28->Lock);
    }
    LOCK();
    paVar1 = &local_28->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x0) {
      LOCK();
      local_28->LockType = local_20;
      UNLOCK();
    }
    else if ((local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
            (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4767296351463538103>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRigVMTypeIndex *)(*pcVar4)();
      return pTVar8;
    }
    FRigVMRegistry_NoLock::GetTypeIndexFromCPPType_NoLock
              ((FRigVMRegistry_NoLock *)this_00,__return_storage_ptr__,pFVar7);
    if (local_30 != '\0') {
      LOCK();
      paVar1 = &local_28->LockCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        LOCK();
        local_28->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      if (local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
        if (((int)aVar2 + -1 < 0) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538070>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar8;
        }
        aVar3 = local_28->WriteLockOwnerThread;
        aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
        if (aVar3 != aVar6) {
          ReleaseSRWLockShared((PSRWLOCK)&local_28->Lock);
        }
      }
      else if (local_20 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
        if ((aVar2 != (atomic<int>)0x1) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4767296351463538060>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                               ,0x274,"CurrentLockCount == 0"), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar8;
        }
        LOCK();
        local_28->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
        UNLOCK();
        ReleaseSRWLockExclusive((PSRWLOCK)&local_28->Lock);
      }
    }
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  return __return_storage_ptr__;
}

