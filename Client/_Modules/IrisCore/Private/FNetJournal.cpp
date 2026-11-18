// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// Print @ 144334f80

FString * __thiscall
UE::Net::FNetJournal::Print
          (FNetJournal *this,FString *__return_storage_ptr__,UReplicationSystem *param_1)

{
  uint uVar1;
  uint uVar2;
  FReplicationSystemInternal *pFVar3;
  FNetRefHandleManager *pFVar4;
  FNetRefHandleManager *this_00;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  FString local_58;
  FString local_48;
  FNetRefHandleManager *pFVar6;
  
  pFVar4 = (FNetRefHandleManager *)0x0;
  uVar8 = 0;
  this_00 = pFVar4;
  if (param_1 != (UReplicationSystem *)0x0) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal(param_1);
    this_00 = &pFVar3->NetRefHandleManager;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar1 = this->NumEntries;
  uVar7 = 0x20;
  if (uVar1 < 0x20) {
    uVar7 = uVar1;
  }
  ::FString::AppendfImpl(__return_storage_ptr__,L"ErrorContext:\n");
  pFVar6 = pFVar4;
  if (uVar7 != 0) {
    do {
      uVar2 = uVar8 + (uVar1 - uVar7) & 0x1f;
      if ((((ulonglong)pFVar4 ^ this->Entries[uVar2].NetRefHandle.field0_0x0.Value) &
          0x3fffffffffffff) != 0) {
        if (this_00 == (FNetRefHandleManager *)0x0) {
          uVar5 = (uint)pFVar6 | 2;
          FNetRefHandle::ToString(&this->Entries[uVar2].NetRefHandle,&local_58);
        }
        else {
          uVar5 = (uint)pFVar6 | 1;
          Net::Private::FNetRefHandleManager::PrintObjectFromNetRefHandle
                    (this_00,&local_48,
                     (FNetRefHandle)
                     *(FNetRefHandle_u_0 *)&this->Entries[uVar2].NetRefHandle.field0_0x0._s_0);
        }
        pFVar6 = (FNetRefHandleManager *)(ulonglong)uVar5;
        ::FString::AppendfImpl(__return_storage_ptr__,L"%s\n");
        if (((uVar5 & 2) != 0) &&
           (pFVar6 = (FNetRefHandleManager *)(ulonglong)(uVar5 & 0xfffffffd),
           local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((((ulonglong)pFVar6 & 1) != 0) &&
           (pFVar6 = (FNetRefHandleManager *)(ulonglong)((uint)pFVar6 & 0xfffffffe),
           local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        pFVar4 = (FNetRefHandleManager *)this->Entries[uVar2].NetRefHandle.field0_0x0.Value;
      }
      ::FString::AppendfImpl(__return_storage_ptr__,L"%u: - BitOffset: %u:%s\n");
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return __return_storage_ptr__;
}

