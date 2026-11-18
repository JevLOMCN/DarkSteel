// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FSharedImage @ 14887eb90

void __thiscall FSharedImage::~FSharedImage(FSharedImage *this)

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
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
    return;
  }
  return;
}

