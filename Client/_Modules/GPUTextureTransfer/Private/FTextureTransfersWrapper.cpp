// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 1

// CleanupTextureTransfer @ 14d758340

void __thiscall
UE::GPUTextureTransfer::FTextureTransfersWrapper::CleanupTextureTransfer
          (FTextureTransfersWrapper *this,ITextureTransfer *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_1 != (ITextureTransfer *)0x0) {
    bVar4 = 1;
    do {
      uVar6 = (ulonglong)bVar4;
      if (((this->Transfers).ArrayNum <= (int)(uint)bVar4) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->Transfers).AllocatorInstance.Data + uVar6 * 8) != 0) {
        uVar5 = (uint)bVar4;
        if (((this->Transfers).ArrayNum <= (int)(uint)bVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(ITextureTransfer **)((this->Transfers).AllocatorInstance.Data + uVar6 * 8) == param_1)
        {
          if (((this->Transfers).ArrayNum <= (int)uVar5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(**(longlong **)((this->Transfers).AllocatorInstance.Data + uVar6 * 8) + 0x80)
          )();
          if (((this->Transfers).ArrayNum <= (int)uVar5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar1 = *(undefined8 **)((this->Transfers).AllocatorInstance.Data + uVar6 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          if (((this->Transfers).ArrayNum <= (int)uVar5) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)((this->Transfers).AllocatorInstance.Data + uVar6 * 8) = 0;
        }
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 4);
  }
  return;
}

