// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// ~IQueuedWorkInternalData @ 148d9cfd0

void __thiscall IQueuedWorkInternalData::~IQueuedWorkInternalData(IQueuedWorkInternalData *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

