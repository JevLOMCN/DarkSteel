// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// Fill @ 14e9463c0

void __thiscall
TManagedArrayBase<UE::Math::TVector2<float>_>::Fill
          (TManagedArrayBase<UE::Math::TVector2<float>_> *this,TVector2<float> *param_1)

{
  TVector2<float>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Array).ArrayNum) {
    lVar6 = 0;
    do {
      TVar1 = param_1->field0_0x0;
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
      ((TVector2<float>_u_0 *)((this->Array).AllocatorInstance.Data + lVar6))->_s_0 =
           (TVector2<float>_u_0_s_0)TVar1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Array).ArrayNum);
  }
  return;
}

// Fill @ 14e946470

void __thiscall
TManagedArrayBase<FLinearColor>::Fill(TManagedArrayBase<FLinearColor> *this,FLinearColor *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  if (0 < (this->Array).ArrayNum) {
    lVar10 = 0;
    do {
      fVar3 = (param_1->field0_0x0)._s_0.R;
      fVar4 = (param_1->field0_0x0)._s_0.G;
      fVar5 = (param_1->field0_0x0)._s_0.B;
      fVar6 = (param_1->field0_0x0)._s_0.A;
      uVar8 = 0;
      if ((int)uVar9 < (this->Array).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      pFVar1 = (this->Array).AllocatorInstance.Data + lVar10;
      *(float *)pFVar1 = fVar3;
      *(float *)(pFVar1 + 4) = fVar4;
      *(float *)(pFVar1 + 8) = fVar5;
      *(float *)(pFVar1 + 0xc) = fVar6;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->Array).ArrayNum);
  }
  return;
}

