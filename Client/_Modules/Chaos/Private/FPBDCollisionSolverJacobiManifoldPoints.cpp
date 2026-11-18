// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// UpdateMass @ 143a226d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::UpdateMass
          (FPBDCollisionSolverJacobiManifoldPoints *this,int param_1,FConstraintSolverBody *param_2,
          FConstraintSolverBody *param_3)

{
  FSolverBody *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar19 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  if (__real_00800000 <
      (param_2->State).InvMScale * (param_2->State).ShockPropagationScale *
      (param_2->Body->State).InvM) {
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar21 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x4;
    fVar19 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x4;
    fVar22 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x8;
    fVar5 = fVar19 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x8 -
            fVar21 * fVar22;
    fVar24 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0;
    fVar19 = fVar21 * fVar24 -
             fVar19 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal;
    fVar21 = fVar22 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal -
             fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x8;
    if ((this->ManifoldPoints).NumElements <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ManifoldPoints).NumElements <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar22 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x8;
    fVar24 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x4;
    fVar4 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0;
    fVar20 = fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.field_0x8
             - fVar22 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.
                                   field_0x4;
    fVar24 = fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.field_0x4 -
             fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU;
    fVar22 = fVar22 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU -
             fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.field_0x8;
    if ((this->ManifoldPoints).NumElements <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ManifoldPoints).NumElements <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = param_2->Body;
    fVar4 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x8;
    fVar6 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.field_0x4;
    fVar7 = *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0;
    fVar23 = fVar6 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x8 -
             fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x4;
    fVar9 = fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV -
            fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x8;
    fVar11 = fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x4 -
             fVar6 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV;
    fVar12 = (param_2->State).InvIScale * (param_2->State).ShockPropagationScale;
    fVar6 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x20;
    fVar4 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x24;
    fVar7 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x18;
    fVar8 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x14;
    fVar10 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x10;
    fVar17 = fVar12 * *(float *)&(pFVar1->State).InvI;
    fVar13 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x28;
    fVar16 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x4;
    fVar12 = fVar12 * *(float *)&(pFVar1->State).InvI.field_0x8;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0 =
         fVar21 * fVar16 + fVar5 * fVar17 + fVar19 * fVar12;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.field_0x4 =
         fVar21 * fVar8 + fVar5 * fVar10 + fVar19 * fVar7;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.field_0x8 =
         fVar21 * fVar4 + fVar5 * fVar6 + fVar19 * fVar13;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0 =
         fVar16 * fVar22 + fVar17 * fVar20 + fVar12 * fVar24;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0.field_0x4 =
         fVar8 * fVar22 + fVar10 * fVar20 + fVar7 * fVar24;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0.field_0x8 =
         fVar4 * fVar22 + fVar6 * fVar20 + fVar13 * fVar24;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0 =
         fVar16 * fVar9 + fVar17 * fVar23 + fVar12 * fVar11;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0.field_0x4 =
         fVar8 * fVar9 + fVar10 * fVar23 + fVar7 * fVar11;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0.field_0x8 =
         fVar4 * fVar9 + fVar6 * fVar23 + fVar13 * fVar11;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar21 = fVar21 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.
                                 field_0x4 +
             fVar5 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0 +
             fVar19 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.
                                 field_0x8 +
             (param_2->State).ShockPropagationScale * (param_2->State).InvMScale *
             (param_2->Body->State).InvM;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar19 = fVar20 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0 +
             fVar22 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0.
                                 field_0x4 +
             fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular0.
                                 field_0x8 +
             (param_2->State).ShockPropagationScale * (param_2->State).InvMScale *
             (param_2->Body->State).InvM;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar22 = fVar23 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0 +
             fVar9 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0.
                                field_0x4 +
             fVar11 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular0.
                                 field_0x8 +
             (param_2->State).ShockPropagationScale * (param_2->State).InvMScale *
             (param_2->Body->State).InvM;
  }
  if (__real_00800000 <
      (param_3->State).InvMScale * (param_3->State).ShockPropagationScale *
      (param_3->Body->State).InvM) {
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar24 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x4;
    fVar5 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x8;
    fVar20 = fVar5 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x4 -
             fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                 field_0x8;
    fVar4 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal;
    fVar5 = fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                               field_0x8 -
            fVar5 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1;
    fVar24 = fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1 -
             fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x4;
    if ((this->ManifoldPoints).NumElements <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ManifoldPoints).NumElements <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.field_0x4;
    fVar6 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU.field_0x8;
    fVar7 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentU;
    fVar8 = fVar6 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                               field_0x4 -
            fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                               field_0x8;
    fVar6 = fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                               field_0x8 -
            fVar6 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1;
    fVar4 = fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1 -
            fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                               field_0x4;
    if ((this->ManifoldPoints).NumElements <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ManifoldPoints).NumElements <= param_1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar23 = (param_3->State).InvIScale * (param_3->State).ShockPropagationScale;
    pFVar1 = param_3->Body;
    fVar7 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x4;
    fVar12 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV.field_0x8;
    fVar11 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x24;
    fVar9 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentV;
    fVar16 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x14;
    fVar18 = fVar12 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                 field_0x4 -
             fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x8;
    fVar12 = fVar9 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x8 -
             fVar12 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1;
    fVar13 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x18;
    fVar14 = fVar7 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1 -
             fVar9 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x4;
    fVar17 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x8;
    fVar7 = fVar23 * *(float *)&(pFVar1->State).InvI;
    fVar9 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x10;
    fVar15 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x4;
    fVar10 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x20;
    fVar23 = fVar23 * *(float *)&(pFVar1->State).InvI.field_0x28;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1 =
         fVar7 * fVar20 + fVar5 * fVar15 + fVar24 * fVar17;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1.field_0x4 =
         fVar9 * fVar20 + fVar5 * fVar16 + fVar13 * fVar24;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1.field_0x8 =
         fVar10 * fVar20 + fVar5 * fVar11 + fVar23 * fVar24;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular1 =
         fVar7 * fVar8 + fVar15 * fVar6 + fVar17 * fVar4;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular1.field_0x4 =
         fVar9 * fVar8 + fVar16 * fVar6 + fVar13 * fVar4;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentUAngular1.field_0x8 =
         fVar10 * fVar8 + fVar11 * fVar6 + fVar23 * fVar4;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular1 =
         fVar15 * fVar12 + fVar7 * fVar18 + fVar17 * fVar14;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular1.field_0x4 =
         fVar16 * fVar12 + fVar9 * fVar18 + fVar13 * fVar14;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactTangentVAngular1.field_0x8 =
         fVar11 * fVar12 + fVar10 * fVar18 + fVar23 * fVar14;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar21 = fVar21 + fVar20 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactNormalAngular1 +
                      fVar5 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                         ContactNormalAngular1.field_0x4 +
                      fVar24 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactNormalAngular1.field_0x8 +
                      (param_3->State).InvMScale * (param_3->State).ShockPropagationScale *
                      (param_3->Body->State).InvM;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar19 = fVar19 + fVar6 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                         ContactTangentUAngular1.field_0x4 +
                      fVar8 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                         ContactTangentUAngular1 +
                      fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                         ContactTangentUAngular1.field_0x8 +
                      (param_3->State).InvMScale * (param_3->State).ShockPropagationScale *
                      (param_3->Body->State).InvM;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar22 = fVar22 + fVar18 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactTangentVAngular1 +
                      fVar12 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactTangentVAngular1.field_0x4 +
                      fVar14 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactTangentVAngular1.field_0x8 +
                      (param_3->State).InvMScale * (param_3->State).ShockPropagationScale *
                      (param_3->Body->State).InvM;
  }
  fVar5 = __real_3f800000;
  fVar24 = __real_322bcc77;
  if (fVar21 <= __real_322bcc77) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = __real_3f800000 / fVar21;
  }
  if (((this->ManifoldPoints).NumElements <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->ManifoldPoints).Elements[param_1].ContactMassNormal = fVar21;
  if (fVar19 <= fVar24) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = fVar5 / fVar19;
  }
  if (((this->ManifoldPoints).NumElements <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->ManifoldPoints).Elements[param_1].ContactMassTangentU = fVar19;
  if (fVar22 <= fVar24) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = fVar5 / fVar22;
  }
  if (((this->ManifoldPoints).NumElements <= param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->ManifoldPoints).Elements[param_1].ContactMassTangentV = fVar5;
  return;
}

// UpdateMassNormal @ 143a23af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::UpdateMassNormal
          (FPBDCollisionSolverJacobiManifoldPoints *this,int param_1,FConstraintSolverBody *param_2,
          FConstraintSolverBody *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FSolverBody *pFVar10;
  code *pcVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar9 = __real_00800000;
  fVar16 = 0.0;
  if (__real_00800000 <
      (param_2->State).InvMScale * (param_2->State).ShockPropagationScale *
      (param_2->Body->State).InvM) {
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar10 = param_2->Body;
    fVar16 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x8;
    fVar1 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x4;
    fVar15 = fVar16 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.
                                 field_0x4 -
             fVar1 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.
                                field_0x8;
    fVar2 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal;
    fVar14 = fVar1 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0 -
             fVar2 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.
                                field_0x4;
    fVar17 = fVar2 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0.
                                field_0x8 -
             fVar16 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition0;
    fVar13 = (param_2->State).InvIScale * (param_2->State).ShockPropagationScale;
    fVar16 = *(float *)&(pFVar10->State).InvI;
    fVar1 = *(float *)&(pFVar10->State).InvI.field_0x10;
    fVar2 = *(float *)&(pFVar10->State).InvI.field_0x4;
    fVar3 = *(float *)&(pFVar10->State).InvI.field_0x14;
    fVar4 = *(float *)&(pFVar10->State).InvI.field_0x24;
    fVar5 = *(float *)&(pFVar10->State).InvI.field_0x20;
    fVar6 = *(float *)&(pFVar10->State).InvI.field_0x8;
    fVar7 = *(float *)&(pFVar10->State).InvI.field_0x18;
    fVar8 = *(float *)&(pFVar10->State).InvI.field_0x28;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0 =
         fVar13 * fVar2 * fVar17 + fVar13 * fVar16 * fVar15 + fVar13 * fVar6 * fVar14;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.field_0x4 =
         fVar13 * fVar3 * fVar17 + fVar13 * fVar1 * fVar15 + fVar13 * fVar7 * fVar14;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.field_0x8 =
         fVar13 * fVar4 * fVar17 + fVar13 * fVar5 * fVar15 + fVar13 * fVar8 * fVar14;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar16 = fVar17 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.
                                 field_0x4 +
             fVar15 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0 +
             fVar14 * *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular0.
                                 field_0x8 +
             (param_2->State).ShockPropagationScale * (param_2->State).InvMScale *
             (param_2->Body->State).InvM;
  }
  if (fVar9 < (param_3->State).InvMScale * (param_3->State).ShockPropagationScale *
              (param_3->Body->State).InvM) {
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar13 = (param_3->State).InvIScale * (param_3->State).ShockPropagationScale;
    pFVar10 = param_3->Body;
    fVar9 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x4;
    fVar1 = *(float *)&(pFVar10->State).InvI.field_0x20;
    fVar2 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal.field_0x8;
    fVar3 = *(float *)&(pFVar10->State).InvI.field_0x10;
    fVar17 = fVar2 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x4 -
             fVar9 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x8;
    fVar4 = *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormal;
    fVar15 = fVar9 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1 -
             fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x4;
    fVar9 = *(float *)&(pFVar10->State).InvI.field_0x18;
    fVar14 = fVar4 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1.
                                field_0x8 -
             fVar2 * *(float *)&(this->ManifoldPoints).Elements[param_1].RelativeContactPosition1;
    fVar2 = *(float *)&(pFVar10->State).InvI.field_0x24;
    fVar4 = *(float *)&(pFVar10->State).InvI.field_0x28;
    fVar5 = *(float *)&(pFVar10->State).InvI.field_0x14;
    fVar6 = *(float *)&(pFVar10->State).InvI;
    fVar7 = *(float *)&(pFVar10->State).InvI.field_0x4;
    fVar8 = *(float *)&(pFVar10->State).InvI.field_0x8;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1 =
         fVar14 * fVar13 * fVar7 + fVar17 * fVar13 * fVar6 + fVar15 * fVar13 * fVar8;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1.field_0x4 =
         fVar14 * fVar13 * fVar5 + fVar17 * fVar13 * fVar3 + fVar15 * fVar13 * fVar9;
    *(float *)&(this->ManifoldPoints).Elements[param_1].ContactNormalAngular1.field_0x8 =
         fVar14 * fVar13 * fVar2 + fVar17 * fVar13 * fVar1 + fVar15 * fVar13 * fVar4;
    if (((this->ManifoldPoints).NumElements <= param_1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < NumElements",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                            ,0x60,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar16 = fVar16 + fVar14 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactNormalAngular1.field_0x4 +
                      fVar17 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactNormalAngular1 +
                      fVar15 * *(float *)&(this->ManifoldPoints).Elements[param_1].
                                          ContactNormalAngular1.field_0x8 +
                      (param_3->State).ShockPropagationScale * (param_3->State).InvMScale *
                      (param_3->Body->State).InvM;
  }
  if (fVar16 <= __real_322bcc77) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = __real_3f800000 / fVar16;
  }
  if (((this->ManifoldPoints).NumElements <= param_1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < NumElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                          ,0x60,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  (this->ManifoldPoints).Elements[param_1].ContactMassNormal = fVar16;
  return;
}

