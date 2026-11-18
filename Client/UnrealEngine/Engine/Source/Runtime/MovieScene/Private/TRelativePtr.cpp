// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// Reset @ 146151110

void __thiscall
TRelativePtr<void,unsigned_short>::Reset
          (TRelativePtr<void,unsigned_short> *this,void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                       ,0x46,
                       L"Attempting to assign a negative offset to an unsigned relative pointer!!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (0xfffe < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                       ,0x3a,
                       L"Attempting to create a relative pointer outside the bounds of its capacity."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Offset = (ushort)((longlong)param_2 - (longlong)param_1);
  return;
}

// Reset @ 1462b9190

void __thiscall
TRelativePtr<void,unsigned_int>::Reset
          (TRelativePtr<void,unsigned_int> *this,void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                       ,0x46,
                       L"Attempting to assign a negative offset to an unsigned relative pointer!!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if (0xfffffffe < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                       ,0x3a,
                       L"Attempting to create a relative pointer outside the bounds of its capacity."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Offset = (uint)((longlong)param_2 - (longlong)param_1);
  return;
}

