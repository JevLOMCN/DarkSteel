// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// CalculateRestLengths @ 14dbc07c0

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::CalculateRestLengths
          (FPBDAxialSpringConstraintsBase *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res8;
  
  if ((param_2->ArrayNum != (this->Constraints).ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DistsToCompute.Num() == Constraints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAxialSpringConstraintsBase.h"
                         ,0x5d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar14 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar16 = 0;
    local_res8 = 0;
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar14 < (this->Constraints).ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar10 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar16);
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar5 = param_1->DataPtr;
      uVar11 = 0;
      if ((int)uVar14 < (this->Constraints).ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar16 + 4);
      uVar12 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar6 = param_1->DataPtr;
      uVar12 = 0;
      if ((int)uVar14 < (this->Constraints).ArrayNum) {
        uVar12 = uVar15;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar16 + 8);
      uVar13 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar7 = param_1->DataPtr;
      fVar17 = *(float *)&pTVar6[(int)uVar11].field_0x8;
      fVar18 = *(float *)&pTVar6[(int)uVar11].field_0x4;
      fVar1 = *(float *)(pTVar6 + (int)uVar11);
      fVar19 = *(float *)&pTVar7[(int)uVar12].field_0x8;
      fVar2 = *(float *)&pTVar7[(int)uVar12].field_0x4;
      fVar3 = *(float *)(pTVar7 + (int)uVar12);
      uVar11 = 0;
      if ((int)uVar14 < (this->Barys).ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar4 = *(float *)((this->Barys).AllocatorInstance.Data + local_res8);
      fVar19 = *(float *)&pTVar5[(int)uVar10].field_0x8 -
               (fVar4 * (fVar17 - fVar19) + *(float *)&pTVar7[(int)uVar12].field_0x8);
      fVar17 = *(float *)(pTVar5 + (int)uVar10) -
               ((fVar1 - fVar3) * fVar4 + *(float *)(pTVar7 + (int)uVar12));
      fVar18 = *(float *)&pTVar5[(int)uVar10].field_0x4 -
               (fVar4 * (fVar18 - fVar2) + *(float *)&pTVar7[(int)uVar12].field_0x4);
      uVar10 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0xc;
      *(float *)((longlong)param_2->DataPtr + local_res8) =
           SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19);
      local_res8 = local_res8 + 4;
    } while ((int)uVar14 < (this->Constraints).ArrayNum);
  }
  return;
}

// ResetRestLengths @ 14dc0f650

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraintsBase::ResetRestLengths
          (FPBDAxialSpringConstraintsBase *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> local_18;
  
  local_18.DataPtr = (float *)(this->Dists).AllocatorInstance.Data;
  iVar1 = (this->Dists).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  CalculateRestLengths(this,param_1,&local_18);
  return;
}

