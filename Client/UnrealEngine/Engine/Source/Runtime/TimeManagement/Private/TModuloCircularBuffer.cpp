// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 1

// Add @ 146041cc0

void __thiscall
UE::TimeManagement::TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
Add(TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
   TVector2<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar2 = (uint)this->NextIndexToInsert;
  uVar5 = *(undefined4 *)&param_1->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  uVar10 = 0;
  if ((int)uVar2 < (this->Data).ArrayNum) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (this->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  iVar3 = (this->Data).ArrayNum;
  this->bIsBufferFull =
       (bool)(this->bIsBufferFull | this->NextIndexToInsert == (longlong)(iVar3 + -1));
  this->NextIndexToInsert = (this->NextIndexToInsert + 1) % (ulonglong)(longlong)iVar3;
  return;
}

