// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FOwnedBulkDataPtr @ 141f23ac0

void __thiscall FOwnedBulkDataPtr::~FOwnedBulkDataPtr(FOwnedBulkDataPtr *this)

{
  IMappedFileRegion *pIVar1;
  IMappedFileHandle *pIVar2;
  
  if (this->AllocatedData != (void *)0x0) {
    FMemory::Free(this->AllocatedData);
    return;
  }
  pIVar1 = this->MappedRegion;
  if (pIVar1 == (IMappedFileRegion *)0x0) {
    if (this->MappedHandle == (IMappedFileHandle *)0x0) {
      return;
    }
  }
  else {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  pIVar2 = this->MappedHandle;
  if (pIVar2 == (IMappedFileHandle *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f23b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pIVar2->_padding_)(pIVar2,1);
  return;
}

// GetPointer @ 141f35fc0

void * __thiscall FOwnedBulkDataPtr::GetPointer(FOwnedBulkDataPtr *this)

{
  IMappedFileRegion *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  pvVar4 = this->AllocatedData;
  if (pvVar4 == (void *)0x0) {
    pIVar1 = this->MappedRegion;
    if (pIVar1 != (IMappedFileRegion *)0x0) {
      if ((pIVar1->MappedPtr == (uchar *)0x0) || (pIVar1->MappedSize == 0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedPtr && MappedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\MappedFileHandle.h"
                           ,0x19,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pvVar4 = (void *)(*pcVar2)();
          return pvVar4;
        }
      }
      return pIVar1->MappedPtr;
    }
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}

