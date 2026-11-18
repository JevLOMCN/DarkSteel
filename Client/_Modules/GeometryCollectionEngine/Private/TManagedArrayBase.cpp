// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// Fill @ 1463b0f40

void __thiscall TManagedArrayBase<float>::Fill(TManagedArrayBase<float> *this,float *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Array).ArrayNum) {
    lVar6 = 0;
    do {
      fVar1 = *param_1;
      uVar4 = 0;
      if ((int)uVar5 < (this->Array).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(float *)((this->Array).AllocatorInstance.Data + lVar6) = fVar1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->Array).ArrayNum);
  }
  return;
}

// Fill @ 1463b1000

void __thiscall
TManagedArrayBase<UE::Math::TVector<double>_>::Fill
          (TManagedArrayBase<UE::Math::TVector<double>_> *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar11 = 0;
  if (0 < (this->Array).ArrayNum) {
    lVar12 = 0;
    do {
      uVar5 = *(undefined4 *)&param_1->field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      uVar10 = 0;
      if ((int)uVar11 < (this->Array).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
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
      pFVar3 = (this->Array).AllocatorInstance.Data;
      uVar11 = uVar11 + 1;
      pFVar1 = pFVar3 + lVar12;
      *(undefined4 *)pFVar1 = uVar5;
      *(undefined4 *)(pFVar1 + 4) = uVar6;
      *(undefined4 *)(pFVar1 + 8) = uVar7;
      *(undefined4 *)(pFVar1 + 0xc) = uVar8;
      *(double *)(pFVar3 + lVar12 + 0x10) = dVar2;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < (this->Array).ArrayNum);
  }
  return;
}

