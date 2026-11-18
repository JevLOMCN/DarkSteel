// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// FPeakSpeed @ 143224da0

FPeakSpeed * __thiscall
BuildPatchServices::FPeakSpeed::FPeakSpeed
          (FPeakSpeed *this,ulong64 *param_1,ulong64 *param_2,
          TArray<BuildPatchServices::ISpeedRecorder::FRecord,TSizedDefaultAllocator<32>_> *param_3)

{
  this->CyclesConfidenceFactor = *param_1;
  this->SizeConfidenceFactor = *param_2;
  this->Records = param_3;
  this->bIsConfident = false;
  this->PeakSpeed = 0.0;
  return this;
}

// Get @ 143253850

double __thiscall BuildPatchServices::FPeakSpeed::Get(FPeakSpeed *this)

{
  return this->PeakSpeed;
}

// Update @ 14326c5d0

void __thiscall BuildPatchServices::FPeakSpeed::Update(FPeakSpeed *this)

{
  TArray<BuildPatchServices::ISpeedRecorder::FRecord,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  
  uVar13 = 0;
  uVar8 = 0;
  bVar10 = false;
  uVar12 = 0xffffffffffffffff;
  uVar11 = this->Records->ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar9 = (longlong)(int)uVar11 * 0x18;
    do {
      if (bVar10 != false) goto LAB_14326c6cc;
      pTVar1 = this->Records;
      uVar6 = 0;
      if ((int)uVar11 < pTVar1->ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      uVar3 = *(ulonglong *)(pFVar2 + lVar9);
      if (uVar3 < uVar12) {
        uVar7 = *(ulonglong *)(pFVar2 + lVar9 + 8);
        if (uVar12 < *(ulonglong *)(pFVar2 + lVar9 + 8)) {
          uVar7 = uVar12;
        }
        uVar13 = uVar13 + (uVar7 - uVar3);
        uVar12 = uVar3;
      }
      uVar8 = uVar8 + *(longlong *)(pFVar2 + lVar9 + 0x10);
      if ((this->CyclesConfidenceFactor <= uVar13) && (this->SizeConfidenceFactor <= uVar8)) {
        bVar10 = true;
      }
      lVar9 = lVar9 + -0x18;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    if (bVar10 != false) goto LAB_14326c6cc;
  }
  if (this->bIsConfident != false) {
    return;
  }
LAB_14326c6cc:
  dVar14 = (double)uVar8 / ((double)uVar13 * FGenericPlatformTime::SecondsPerCycle64);
  if ((this->PeakSpeed <= dVar14 && dVar14 != this->PeakSpeed) || (this->bIsConfident == false)) {
    this->PeakSpeed = dVar14;
    this->bIsConfident = bVar10;
  }
  return;
}

