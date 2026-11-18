// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// ApplyLimits @ 14a23f340

void __thiscall
FRigControlValue::ApplyLimits
          (FRigControlValue *this,
          TArray<FRigControlLimitEnabled,TSizedDefaultAllocator<32>_> *param_1,
          ERigControlType param_2,FRigControlValue *param_3,FRigControlValue *param_4)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  int iVar39;
  FScriptContainerElement *pFVar40;
  code *pcVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  bool bVar50;
  TQuat<double> *pTVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  TRotator<double> local_458;
  TRotator<double> local_440;
  TRotator<double> local_428;
  TRotator<double> local_410;
  TRotator<double> local_3f8;
  TRotator<double> local_3e0;
  TRotator<double> local_3c8;
  TRotator<double> local_3b0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  TQuat<double> local_2b8;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  undefined1 local_260 [16];
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [6];
  
  piVar1 = &param_1->ArrayNum;
  iVar39 = *piVar1;
  if (iVar39 == 0) {
    return;
  }
  switch(param_2) {
  case Float:
  case ScaleFloat:
    if ((iVar39 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((*pFVar40 == (FScriptContainerElement)0x0) && (pFVar40[1] == (FScriptContainerElement)0x0))
    {
      return;
    }
    (this->FloatStorage).bValid = true;
    if ((*piVar1 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    fVar53 = (param_4->FloatStorage).Float00;
    fVar54 = (param_3->FloatStorage).Float00;
    if (*pFVar40 == (FScriptContainerElement)0x0) {
      if (pFVar40[1] == (FScriptContainerElement)0x0) {
        (this->FloatStorage).Float00 = (this->FloatStorage).Float00;
        return;
      }
LAB_14a23f48a:
      fVar56 = (this->FloatStorage).Float00;
      if (*pFVar40 == (FScriptContainerElement)0x0) {
        if (fVar53 <= fVar56) {
          fVar56 = fVar53;
        }
        (this->FloatStorage).Float00 = fVar56;
        return;
      }
    }
    else {
      if (pFVar40[1] == (FScriptContainerElement)0x0) goto LAB_14a23f48a;
      fVar56 = (this->FloatStorage).Float00;
      if (fVar53 <= fVar54) {
        if (fVar54 <= fVar56) {
          fVar56 = fVar54;
        }
        if (fVar56 <= fVar53) {
          fVar56 = fVar53;
        }
        (this->FloatStorage).Float00 = fVar56;
        return;
      }
      if (fVar53 <= fVar56) {
        fVar56 = fVar53;
      }
    }
    if (fVar56 <= fVar54) {
      fVar56 = fVar54;
    }
    (this->FloatStorage).Float00 = fVar56;
    break;
  case Integer:
    if ((iVar39 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((*pFVar40 != (FScriptContainerElement)0x0) || (pFVar40[1] != (FScriptContainerElement)0x0))
    {
      (this->FloatStorage).bValid = true;
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar53 = (param_4->FloatStorage).Float00;
      fVar54 = (param_3->FloatStorage).Float00;
      if (*pFVar40 == (FScriptContainerElement)0x0) {
        if (pFVar40[1] == (FScriptContainerElement)0x0) {
          (this->FloatStorage).Float00 = (this->FloatStorage).Float00;
          return;
        }
      }
      else if (pFVar40[1] != (FScriptContainerElement)0x0) {
        fVar56 = (this->FloatStorage).Float00;
        if ((int)fVar54 < (int)fVar53) {
          if ((int)fVar56 < (int)fVar53) {
            fVar53 = fVar56;
          }
          if ((int)fVar54 < (int)fVar53) {
            fVar54 = fVar53;
          }
          (this->FloatStorage).Float00 = fVar54;
          return;
        }
        if ((int)fVar56 < (int)fVar54) {
          fVar54 = fVar56;
        }
        if ((int)fVar53 < (int)fVar54) {
          fVar53 = fVar54;
        }
        (this->FloatStorage).Float00 = fVar53;
        return;
      }
      fVar56 = (this->FloatStorage).Float00;
      if (*pFVar40 == (FScriptContainerElement)0x0) {
        if ((int)fVar56 < (int)fVar53) {
          fVar53 = fVar56;
        }
        (this->FloatStorage).Float00 = fVar53;
      }
      else {
        if ((int)fVar54 < (int)fVar56) {
          fVar54 = fVar56;
        }
        (this->FloatStorage).Float00 = fVar54;
      }
    }
    break;
  case Vector2D:
    if ((1 < iVar39) &&
       ((((pFVar40 = (param_1->AllocatorInstance).Data, *pFVar40 != (FScriptContainerElement)0x0 ||
          (pFVar40[1] != (FScriptContainerElement)0x0)) ||
         (pFVar40[2] != (FScriptContainerElement)0x0)) ||
        (pFVar40[3] != (FScriptContainerElement)0x0)))) {
      (this->FloatStorage).bValid = true;
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)(param_1->AllocatorInstance).Data,(float *)this
                          ,(float *)param_3,(float *)param_4);
      (this->FloatStorage).Float00 = fVar53;
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 2),
                          &(this->FloatStorage).Float01,&(param_3->FloatStorage).Float01,
                          &(param_4->FloatStorage).Float01);
      (this->FloatStorage).Float01 = fVar53;
    }
    break;
  case Position:
  case Scale:
  case Rotator:
    if (2 < iVar39) {
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((((*pFVar40 == (FScriptContainerElement)0x0) &&
           (pFVar40[1] == (FScriptContainerElement)0x0)) &&
          (pFVar40[2] == (FScriptContainerElement)0x0)) &&
         (pFVar40[3] == (FScriptContainerElement)0x0)) {
        if ((param_1->ArrayNum < 3) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar41 = (code *)swi(3);
          (*pcVar41)();
          return;
        }
        pFVar40 = (param_1->AllocatorInstance).Data;
        if ((pFVar40[4] == (FScriptContainerElement)0x0) &&
           (pFVar40[5] == (FScriptContainerElement)0x0)) {
          return;
        }
      }
      (this->FloatStorage).bValid = true;
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)(param_1->AllocatorInstance).Data,(float *)this
                          ,(float *)param_3,(float *)param_4);
      (this->FloatStorage).Float00 = fVar53;
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 2),
                          &(this->FloatStorage).Float01,&(param_3->FloatStorage).Float01,
                          &(param_4->FloatStorage).Float01);
      (this->FloatStorage).Float01 = fVar53;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 4),
                          &(this->FloatStorage).Float02,&(param_3->FloatStorage).Float02,
                          &(param_4->FloatStorage).Float02);
      (this->FloatStorage).Float02 = fVar53;
    }
    break;
  case Transform:
    if (iVar39 < 9) {
      return;
    }
    (this->FloatStorage).bValid = true;
    fVar53 = (param_3->FloatStorage).Float12;
    uVar3 = (param_3->FloatStorage).Float10;
    uVar21 = (param_3->FloatStorage).Float11;
    dVar47 = (double)(float)uVar3;
    uVar59 = SUB84((double)(float)uVar21,0);
    uVar60 = (undefined4)((ulonglong)(double)(float)uVar21 >> 0x20);
    uVar4 = (param_3->FloatStorage).Float20;
    uVar22 = (param_3->FloatStorage).Float21;
    dVar49 = (double)(float)uVar4;
    uVar63 = SUB84((double)(float)uVar22,0);
    uVar64 = (undefined4)((ulonglong)(double)(float)uVar22 >> 0x20);
    uVar5 = (param_4->FloatStorage).Float10;
    uVar23 = (param_4->FloatStorage).Float11;
    dVar46 = (double)(float)uVar5;
    uVar57 = SUB84((double)(float)uVar23,0);
    uVar58 = (undefined4)((ulonglong)(double)(float)uVar23 >> 0x20);
    uVar6 = (param_4->FloatStorage).Float20;
    uVar24 = (param_4->FloatStorage).Float21;
    dVar48 = (double)(float)uVar6;
    uVar61 = SUB84((double)(float)uVar24,0);
    uVar62 = (undefined4)((ulonglong)(double)(float)uVar24 >> 0x20);
    uVar7 = (param_3->FloatStorage).Float00;
    uVar25 = (param_3->FloatStorage).Float01;
    uVar8 = (param_3->FloatStorage).Float02;
    uVar26 = (param_3->FloatStorage).Float03;
    dVar42 = (double)fVar53;
    local_278._8_4_ = uVar59;
    local_278._0_8_ = dVar47;
    local_278._12_4_ = uVar60;
    fVar54 = (param_3->FloatStorage).Float22;
    dVar43 = (double)fVar54;
    local_260._8_4_ = uVar63;
    local_260._0_8_ = dVar49;
    local_260._12_4_ = uVar64;
    uVar9 = (param_4->FloatStorage).Float00;
    uVar27 = (param_4->FloatStorage).Float01;
    local_248._8_4_ = uVar57;
    local_248._0_8_ = dVar46;
    local_248._12_4_ = uVar58;
    local_398._8_4_ = SUB84((double)(float)uVar27,0);
    local_398._0_8_ = (double)(float)uVar9;
    local_398._12_4_ = (int)((ulonglong)(double)(float)uVar27 >> 0x20);
    uVar10 = (param_4->FloatStorage).Float02;
    uVar28 = (param_4->FloatStorage).Float03;
    local_230._8_4_ = uVar61;
    local_230._0_8_ = dVar48;
    local_230._12_4_ = uVar62;
    local_388._8_4_ = SUB84((double)(float)uVar28,0);
    local_388._0_8_ = (double)(float)uVar10;
    local_388._12_4_ = (int)((ulonglong)(double)(float)uVar28 >> 0x20);
    fVar56 = (param_4->FloatStorage).Float12;
    dVar44 = (double)fVar56;
    fVar52 = (param_4->FloatStorage).Float22;
    dVar45 = (double)fVar52;
    local_268 = dVar42;
    local_250 = dVar43;
    local_238 = dVar44;
    local_220 = dVar45;
    if ((*piVar1 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((*pFVar40 == (FScriptContainerElement)0x0) && (pFVar40[1] == (FScriptContainerElement)0x0))
    {
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[2] != (FScriptContainerElement)0x0) ||
         (pFVar40[3] != (FScriptContainerElement)0x0)) goto LAB_14a23f9ef;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[4] != (FScriptContainerElement)0x0) ||
         (pFVar40[5] != (FScriptContainerElement)0x0)) goto LAB_14a23f9ef;
    }
    else {
LAB_14a23f9ef:
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      local_218._8_4_ = uVar57;
      local_218._0_8_ = dVar46;
      local_218._12_4_ = uVar58;
      local_200._8_4_ = uVar59;
      local_200._0_8_ = dVar47;
      local_200._12_4_ = uVar60;
      if (*pFVar40 == (FScriptContainerElement)0x0) {
        if (pFVar40[1] == (FScriptContainerElement)0x0) {
          fVar55 = (this->FloatStorage).Float10;
        }
        else {
LAB_14a23fa92:
          fVar55 = (this->FloatStorage).Float10;
          if (*pFVar40 == (FScriptContainerElement)0x0) {
            if ((float)uVar5 <= fVar55) {
              fVar55 = (float)uVar5;
            }
          }
          else if (fVar55 <= (float)uVar3) {
            fVar55 = (float)uVar3;
          }
        }
      }
      else {
        if (pFVar40[1] == (FScriptContainerElement)0x0) goto LAB_14a23fa92;
        fVar55 = (this->FloatStorage).Float10;
        if ((float)uVar5 <= (float)uVar3) {
          if ((float)uVar3 <= fVar55) {
            fVar55 = (float)uVar3;
          }
          if (fVar55 <= (float)uVar5) {
            fVar55 = (float)uVar5;
          }
        }
        else {
          if ((float)uVar5 <= fVar55) {
            fVar55 = (float)uVar5;
          }
          if (fVar55 <= (float)uVar3) {
            fVar55 = (float)uVar3;
          }
        }
      }
      (this->FloatStorage).Float10 = fVar55;
      local_208 = dVar44;
      local_1f0 = dVar42;
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      local_1e8._8_4_ = uVar57;
      local_1e8._0_8_ = dVar46;
      local_1e8._12_4_ = uVar58;
      local_140._8_4_ = uVar59;
      local_140._0_8_ = dVar47;
      local_140._12_4_ = uVar60;
      fVar55 = (float)uVar23;
      if (pFVar40[2] == (FScriptContainerElement)0x0) {
        if (pFVar40[3] == (FScriptContainerElement)0x0) {
          fVar55 = (this->FloatStorage).Float11;
        }
        else {
LAB_14a23fb64:
          fVar2 = (this->FloatStorage).Float11;
          if (pFVar40[2] == (FScriptContainerElement)0x0) {
            if (fVar2 <= (float)uVar23) {
              fVar55 = fVar2;
            }
          }
          else {
            fVar55 = (float)uVar21;
            if ((float)uVar21 <= fVar2) {
              fVar55 = fVar2;
            }
          }
        }
      }
      else {
        if (pFVar40[3] == (FScriptContainerElement)0x0) goto LAB_14a23fb64;
        fVar2 = (this->FloatStorage).Float11;
        if ((float)uVar23 <= (float)uVar21) {
          fVar55 = (float)uVar21;
          if (fVar2 <= (float)uVar21) {
            fVar55 = fVar2;
          }
          if (fVar55 <= (float)uVar23) {
            fVar55 = (float)uVar23;
          }
        }
        else {
          if (fVar2 <= (float)uVar23) {
            fVar55 = fVar2;
          }
          if (fVar55 <= (float)uVar21) {
            fVar55 = (float)uVar21;
          }
        }
      }
      (this->FloatStorage).Float11 = fVar55;
      local_1d8 = dVar44;
      local_130 = dVar42;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      local_158._8_4_ = uVar57;
      local_158._0_8_ = dVar46;
      local_158._12_4_ = uVar58;
      local_1d0._8_4_ = uVar59;
      local_1d0._0_8_ = dVar47;
      local_1d0._12_4_ = uVar60;
      if (pFVar40[4] == (FScriptContainerElement)0x0) {
        if (pFVar40[5] == (FScriptContainerElement)0x0) {
          fVar55 = (this->FloatStorage).Float12;
        }
        else {
LAB_14a23fc27:
          fVar2 = (this->FloatStorage).Float12;
          if (pFVar40[4] == (FScriptContainerElement)0x0) {
            fVar55 = fVar56;
            if (fVar2 <= fVar56) {
              fVar55 = fVar2;
            }
          }
          else {
            fVar55 = fVar53;
            if (fVar53 <= fVar2) {
              fVar55 = fVar2;
            }
          }
        }
      }
      else {
        if (pFVar40[5] == (FScriptContainerElement)0x0) goto LAB_14a23fc27;
        fVar55 = (this->FloatStorage).Float12;
        if (fVar56 <= fVar53) {
          if (fVar55 <= fVar53) {
            fVar53 = fVar55;
          }
          fVar55 = fVar53;
          if (fVar53 <= fVar56) {
            fVar55 = fVar56;
          }
        }
        else {
          if (fVar55 <= fVar56) {
            fVar56 = fVar55;
          }
          fVar55 = fVar56;
          if (fVar56 <= fVar53) {
            fVar55 = fVar53;
          }
        }
      }
      (this->FloatStorage).Float12 = fVar55;
      local_1c0 = dVar42;
      local_148 = dVar44;
    }
    if ((param_1->ArrayNum < 4) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((pFVar40[6] == (FScriptContainerElement)0x0) && (pFVar40[7] == (FScriptContainerElement)0x0)
       ) {
      if ((param_1->ArrayNum < 5) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[8] != (FScriptContainerElement)0x0) ||
         (pFVar40[9] != (FScriptContainerElement)0x0)) goto LAB_14a23fd4e;
      if ((param_1->ArrayNum < 6) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[10] != (FScriptContainerElement)0x0) ||
         (pFVar40[0xb] != (FScriptContainerElement)0x0)) goto LAB_14a23fd4e;
    }
    else {
LAB_14a23fd4e:
      uVar11 = (this->FloatStorage).Float00;
      uVar29 = (this->FloatStorage).Float01;
      local_2f8._8_4_ = SUB84((double)(float)uVar29,0);
      local_2f8._0_8_ = (double)(float)uVar11;
      local_2f8._12_4_ = (int)((ulonglong)(double)(float)uVar29 >> 0x20);
      uVar12 = (this->FloatStorage).Float02;
      uVar30 = (this->FloatStorage).Float03;
      local_2e8._8_4_ = SUB84((double)(float)uVar30,0);
      local_2e8._0_8_ = (double)(float)uVar12;
      local_2e8._12_4_ = (int)((ulonglong)(double)(float)uVar30 >> 0x20);
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_2f8,&local_3f8);
      local_2d8._8_4_ = SUB84((double)(float)uVar25,0);
      local_2d8._0_8_ = (double)(float)uVar7;
      local_2d8._12_4_ = (int)((ulonglong)(double)(float)uVar25 >> 0x20);
      local_2c8._8_4_ = SUB84((double)(float)uVar26,0);
      local_2c8._0_8_ = (double)(float)uVar8;
      local_2c8._12_4_ = (int)((ulonglong)(double)(float)uVar26 >> 0x20);
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_2d8,&local_3c8);
      local_2b8.X = (double)local_398._0_8_;
      local_2b8.Y = (double)local_398._8_8_;
      local_2b8.Z = (double)local_388._0_8_;
      local_2b8.W = (double)local_388._8_8_;
      UE::Math::TQuat<double>::Rotator(&local_2b8,&local_3e0);
      local_458.Pitch = local_3f8.Pitch;
      local_458.Yaw = local_3f8.Yaw;
      local_458.Roll = local_3f8.Roll;
      if ((param_1->ArrayNum < 4) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar56 = (float)local_3e0.Pitch;
      fVar55 = (float)local_3c8.Pitch;
      fVar53 = (float)local_458.Pitch;
      if (pFVar40[6] == (FScriptContainerElement)0x0) {
        if ((pFVar40[7] != (FScriptContainerElement)0x0) && (fVar56 <= fVar53)) {
          fVar53 = fVar56;
        }
      }
      else {
        if (pFVar40[7] != (FScriptContainerElement)0x0) {
          if (fVar56 <= fVar55) {
            if (fVar55 <= fVar53) {
              fVar53 = fVar55;
            }
            if (fVar53 <= fVar56) {
              fVar53 = fVar56;
            }
            goto LAB_14a23fe5c;
          }
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
        }
        if (fVar53 <= fVar55) {
          fVar53 = fVar55;
        }
      }
LAB_14a23fe5c:
      local_458.Pitch = (double)fVar53;
      if ((param_1->ArrayNum < 5) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar56 = (float)local_3e0.Yaw;
      fVar55 = (float)local_3c8.Yaw;
      fVar53 = (float)local_458.Yaw;
      if (pFVar40[8] == (FScriptContainerElement)0x0) {
        if ((pFVar40[9] != (FScriptContainerElement)0x0) && (fVar56 <= fVar53)) {
          fVar53 = fVar56;
        }
      }
      else {
        if (pFVar40[9] != (FScriptContainerElement)0x0) {
          if (fVar56 <= fVar55) {
            if (fVar55 <= fVar53) {
              fVar53 = fVar55;
            }
            if (fVar53 <= fVar56) {
              fVar53 = fVar56;
            }
            goto LAB_14a23fef4;
          }
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
        }
        if (fVar53 <= fVar55) {
          fVar53 = fVar55;
        }
      }
LAB_14a23fef4:
      local_458.Yaw = (double)fVar53;
      if ((param_1->ArrayNum < 6) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar56 = (float)local_3e0.Roll;
      fVar55 = (float)local_3c8.Roll;
      fVar53 = (float)local_458.Roll;
      if (pFVar40[10] == (FScriptContainerElement)0x0) {
        if ((pFVar40[0xb] != (FScriptContainerElement)0x0) && (fVar56 <= fVar53)) {
          fVar53 = fVar56;
        }
      }
      else {
        if (pFVar40[0xb] != (FScriptContainerElement)0x0) {
          if (fVar56 <= fVar55) {
            if (fVar55 <= fVar53) {
              fVar53 = fVar55;
            }
            if (fVar53 <= fVar56) {
              fVar53 = fVar56;
            }
            goto LAB_14a23ff8c;
          }
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
        }
        if (fVar53 <= fVar55) {
          fVar53 = fVar55;
        }
      }
LAB_14a23ff8c:
      local_458.Roll = (double)fVar53;
      pTVar51 = UE::Math::TRotator<double>::Quaternion(&local_458,&local_f8);
      dVar42 = pTVar51->Y;
      dVar44 = pTVar51->Z;
      dVar46 = pTVar51->W;
      (this->FloatStorage).Float00 = (float)pTVar51->X;
      (this->FloatStorage).Float01 = (float)dVar42;
      (this->FloatStorage).Float02 = (float)dVar44;
      (this->FloatStorage).Float03 = (float)dVar46;
    }
    if ((param_1->ArrayNum < 7) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((pFVar40[0xc] == (FScriptContainerElement)0x0) &&
       (pFVar40[0xd] == (FScriptContainerElement)0x0)) {
      if ((param_1->ArrayNum < 8) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[0xe] == (FScriptContainerElement)0x0) &&
         (pFVar40[0xf] == (FScriptContainerElement)0x0)) {
        if ((param_1->ArrayNum < 9) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar41 = (code *)swi(3);
          (*pcVar41)();
          return;
        }
        pFVar40 = (param_1->AllocatorInstance).Data;
        if ((pFVar40[0x10] == (FScriptContainerElement)0x0) &&
           (pFVar40[0x11] == (FScriptContainerElement)0x0)) {
          return;
        }
      }
    }
    if ((param_1->ArrayNum < 7) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    local_1b8._8_4_ = uVar61;
    local_1b8._0_8_ = dVar48;
    local_1b8._12_4_ = uVar62;
    local_1a0._8_4_ = uVar63;
    local_1a0._0_8_ = dVar49;
    local_1a0._12_4_ = uVar64;
    fVar53 = (float)uVar6;
    if (pFVar40[0xc] == (FScriptContainerElement)0x0) {
      if (pFVar40[0xd] == (FScriptContainerElement)0x0) {
        fVar53 = (this->FloatStorage).Float20;
      }
      else {
LAB_14a240190:
        fVar56 = (this->FloatStorage).Float20;
        if (pFVar40[0xc] == (FScriptContainerElement)0x0) {
          if (fVar56 <= (float)uVar6) {
            fVar53 = fVar56;
          }
        }
        else {
          fVar53 = (float)uVar4;
          if ((float)uVar4 <= fVar56) {
            fVar53 = fVar56;
          }
        }
      }
    }
    else {
      if (pFVar40[0xd] == (FScriptContainerElement)0x0) goto LAB_14a240190;
      fVar56 = (this->FloatStorage).Float20;
      if ((float)uVar6 <= (float)uVar4) {
        fVar53 = (float)uVar4;
        if (fVar56 <= (float)uVar4) {
          fVar53 = fVar56;
        }
        if (fVar53 <= (float)uVar6) {
          fVar53 = (float)uVar6;
        }
      }
      else {
        if (fVar56 <= (float)uVar6) {
          fVar53 = fVar56;
        }
        if (fVar53 <= (float)uVar4) {
          fVar53 = (float)uVar4;
        }
      }
    }
    (this->FloatStorage).Float20 = fVar53;
    local_1a8 = dVar45;
    local_190 = dVar43;
    if ((param_1->ArrayNum < 8) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    local_188._8_4_ = uVar61;
    local_188._0_8_ = dVar48;
    local_188._12_4_ = uVar62;
    local_170._8_4_ = uVar63;
    local_170._0_8_ = dVar49;
    local_170._12_4_ = uVar64;
    fVar53 = (float)uVar24;
    if (pFVar40[0xe] == (FScriptContainerElement)0x0) {
      if (pFVar40[0xf] == (FScriptContainerElement)0x0) {
        fVar53 = (this->FloatStorage).Float21;
      }
      else {
LAB_14a240265:
        fVar56 = (this->FloatStorage).Float21;
        if (pFVar40[0xe] == (FScriptContainerElement)0x0) {
          if (fVar56 <= (float)uVar24) {
            fVar53 = fVar56;
          }
        }
        else {
          fVar53 = (float)uVar22;
          if ((float)uVar22 <= fVar56) {
            fVar53 = fVar56;
          }
        }
      }
    }
    else {
      if (pFVar40[0xf] == (FScriptContainerElement)0x0) goto LAB_14a240265;
      fVar56 = (this->FloatStorage).Float21;
      if ((float)uVar24 <= (float)uVar22) {
        fVar53 = (float)uVar22;
        if (fVar56 <= (float)uVar22) {
          fVar53 = fVar56;
        }
        if (fVar53 <= (float)uVar24) {
          fVar53 = (float)uVar24;
        }
      }
      else {
        if (fVar56 <= (float)uVar24) {
          fVar53 = fVar56;
        }
        if (fVar53 <= (float)uVar22) {
          fVar53 = (float)uVar22;
        }
      }
    }
    (this->FloatStorage).Float21 = fVar53;
    if ((param_1->ArrayNum < 9) &&
       (local_178 = dVar45, local_160 = dVar43,
       bVar50 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if (pFVar40[0x10] == (FScriptContainerElement)0x0) {
      if (pFVar40[0x11] == (FScriptContainerElement)0x0) {
        fVar53 = (this->FloatStorage).Float22;
      }
      else {
LAB_14a240308:
        fVar56 = (this->FloatStorage).Float22;
        if (pFVar40[0x10] == (FScriptContainerElement)0x0) {
          fVar53 = fVar52;
          if (fVar56 <= fVar52) {
            fVar53 = fVar56;
          }
        }
        else {
          fVar53 = fVar54;
          if (fVar54 <= fVar56) {
            fVar53 = fVar56;
          }
        }
      }
    }
    else {
      if (pFVar40[0x11] == (FScriptContainerElement)0x0) goto LAB_14a240308;
      fVar53 = (this->FloatStorage).Float22;
      if (fVar52 <= fVar54) {
        if (fVar53 <= fVar54) {
          fVar54 = fVar53;
        }
        fVar53 = fVar54;
        if (fVar54 <= fVar52) {
          fVar53 = fVar52;
        }
      }
      else {
        if (fVar53 <= fVar52) {
          fVar52 = fVar53;
        }
        fVar53 = fVar52;
        if (fVar52 <= fVar54) {
          fVar53 = fVar54;
        }
      }
    }
    (this->FloatStorage).Float22 = fVar53;
    break;
  case TransformNoScale:
    if (iVar39 < 6) {
      return;
    }
    (this->FloatStorage).bValid = true;
    uVar13 = (param_3->FloatStorage).Float00;
    uVar31 = (param_3->FloatStorage).Float01;
    local_358._8_4_ = SUB84((double)(float)uVar31,0);
    local_358._0_8_ = (double)(float)uVar13;
    local_358._12_4_ = (int)((ulonglong)(double)(float)uVar31 >> 0x20);
    uVar14 = (param_3->FloatStorage).Float02;
    uVar32 = (param_3->FloatStorage).Float03;
    local_368 = (double)(param_3->FloatStorage).Float12;
    local_348._8_4_ = SUB84((double)(float)uVar32,0);
    local_348._0_8_ = (double)(float)uVar14;
    local_348._12_4_ = (int)((ulonglong)(double)(float)uVar32 >> 0x20);
    uVar15 = (param_3->FloatStorage).Float10;
    uVar33 = (param_3->FloatStorage).Float11;
    local_328 = (double)(param_4->FloatStorage).Float12;
    local_378._8_4_ = SUB84((double)(float)uVar33,0);
    local_378._0_8_ = (double)(float)uVar15;
    local_378._12_4_ = (int)((ulonglong)(double)(float)uVar33 >> 0x20);
    uVar16 = (param_4->FloatStorage).Float00;
    uVar34 = (param_4->FloatStorage).Float01;
    local_318._8_4_ = SUB84((double)(float)uVar34,0);
    local_318._0_8_ = (double)(float)uVar16;
    local_318._12_4_ = (int)((ulonglong)(double)(float)uVar34 >> 0x20);
    uVar17 = (param_4->FloatStorage).Float02;
    uVar35 = (param_4->FloatStorage).Float03;
    local_308._8_4_ = SUB84((double)(float)uVar35,0);
    local_308._0_8_ = (double)(float)uVar17;
    local_308._12_4_ = (int)((ulonglong)(double)(float)uVar35 >> 0x20);
    uVar18 = (param_4->FloatStorage).Float10;
    uVar36 = (param_4->FloatStorage).Float11;
    local_338._8_4_ = SUB84((double)(float)uVar36,0);
    local_338._0_8_ = (double)(float)uVar18;
    local_338._12_4_ = (int)((ulonglong)(double)(float)uVar36 >> 0x20);
    if ((*piVar1 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((*pFVar40 == (FScriptContainerElement)0x0) && (pFVar40[1] == (FScriptContainerElement)0x0))
    {
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[2] != (FScriptContainerElement)0x0) ||
         (pFVar40[3] != (FScriptContainerElement)0x0)) goto LAB_14a2404b1;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[4] != (FScriptContainerElement)0x0) ||
         (pFVar40[5] != (FScriptContainerElement)0x0)) goto LAB_14a2404b1;
    }
    else {
LAB_14a2404b1:
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar53 = (float)(double)local_338._0_8_;
      fVar54 = (float)(double)local_378._0_8_;
      if (*pFVar40 == (FScriptContainerElement)0x0) {
        if (pFVar40[1] == (FScriptContainerElement)0x0) {
          fVar56 = (this->FloatStorage).Float10;
        }
        else {
LAB_14a24053b:
          fVar52 = (this->FloatStorage).Float10;
          if (*pFVar40 == (FScriptContainerElement)0x0) {
            fVar56 = fVar53;
            if (fVar52 <= fVar53) {
              fVar56 = fVar52;
            }
          }
          else {
            fVar56 = fVar54;
            if (fVar54 <= fVar52) {
              fVar56 = fVar52;
            }
          }
        }
      }
      else {
        if (pFVar40[1] == (FScriptContainerElement)0x0) goto LAB_14a24053b;
        fVar56 = (this->FloatStorage).Float10;
        if (fVar53 <= fVar54) {
          if (fVar56 <= fVar54) {
            fVar54 = fVar56;
          }
          fVar56 = fVar54;
          if (fVar54 <= fVar53) {
            fVar56 = fVar53;
          }
        }
        else {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          fVar56 = fVar53;
          if (fVar53 <= fVar54) {
            fVar56 = fVar54;
          }
        }
      }
      (this->FloatStorage).Float10 = fVar56;
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar53 = (float)(double)local_338._8_8_;
      fVar54 = (float)(double)local_378._8_8_;
      if (pFVar40[2] == (FScriptContainerElement)0x0) {
        if (pFVar40[3] == (FScriptContainerElement)0x0) {
          fVar56 = (this->FloatStorage).Float11;
        }
        else {
LAB_14a2405e6:
          fVar52 = (this->FloatStorage).Float11;
          if (pFVar40[2] == (FScriptContainerElement)0x0) {
            fVar56 = fVar53;
            if (fVar52 <= fVar53) {
              fVar56 = fVar52;
            }
          }
          else {
            fVar56 = fVar54;
            if (fVar54 <= fVar52) {
              fVar56 = fVar52;
            }
          }
        }
      }
      else {
        if (pFVar40[3] == (FScriptContainerElement)0x0) goto LAB_14a2405e6;
        fVar56 = (this->FloatStorage).Float11;
        if (fVar53 <= fVar54) {
          if (fVar56 <= fVar54) {
            fVar54 = fVar56;
          }
          fVar56 = fVar54;
          if (fVar54 <= fVar53) {
            fVar56 = fVar53;
          }
        }
        else {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          fVar56 = fVar53;
          if (fVar53 <= fVar54) {
            fVar56 = fVar54;
          }
        }
      }
      (this->FloatStorage).Float11 = fVar56;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      fVar53 = (float)local_328;
      fVar54 = (float)local_368;
      if (pFVar40[4] == (FScriptContainerElement)0x0) {
        if (pFVar40[5] == (FScriptContainerElement)0x0) {
          fVar56 = (this->FloatStorage).Float12;
        }
        else {
LAB_14a240691:
          fVar56 = (this->FloatStorage).Float12;
          if (pFVar40[4] == (FScriptContainerElement)0x0) {
            if (fVar53 <= fVar56) {
              fVar56 = fVar53;
            }
          }
          else if (fVar56 <= fVar54) {
            fVar56 = fVar54;
          }
        }
      }
      else {
        if (pFVar40[5] == (FScriptContainerElement)0x0) goto LAB_14a240691;
        fVar56 = (this->FloatStorage).Float12;
        if (fVar53 <= fVar54) {
          if (fVar56 <= fVar54) {
            fVar54 = fVar56;
          }
          fVar56 = fVar54;
          if (fVar54 <= fVar53) {
            fVar56 = fVar53;
          }
        }
        else {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          fVar56 = fVar53;
          if (fVar53 <= fVar54) {
            fVar56 = fVar54;
          }
        }
      }
      (this->FloatStorage).Float12 = fVar56;
    }
    if ((param_1->ArrayNum < 4) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((pFVar40[6] == (FScriptContainerElement)0x0) && (pFVar40[7] == (FScriptContainerElement)0x0)
       ) {
      if ((param_1->ArrayNum < 5) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[8] == (FScriptContainerElement)0x0) &&
         (pFVar40[9] == (FScriptContainerElement)0x0)) {
        if ((param_1->ArrayNum < 6) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar41 = (code *)swi(3);
          (*pcVar41)();
          return;
        }
        pFVar40 = (param_1->AllocatorInstance).Data;
        if ((pFVar40[10] == (FScriptContainerElement)0x0) &&
           (pFVar40[0xb] == (FScriptContainerElement)0x0)) {
          return;
        }
      }
    }
    uVar19 = (this->FloatStorage).Float00;
    uVar37 = (this->FloatStorage).Float01;
    local_298._8_4_ = SUB84((double)(float)uVar37,0);
    local_298._0_8_ = (double)(float)uVar19;
    local_298._12_4_ = (int)((ulonglong)(double)(float)uVar37 >> 0x20);
    uVar20 = (this->FloatStorage).Float02;
    uVar38 = (this->FloatStorage).Float03;
    local_288._8_4_ = SUB84((double)(float)uVar38,0);
    local_288._0_8_ = (double)(float)uVar20;
    local_288._12_4_ = (int)((ulonglong)(double)(float)uVar38 >> 0x20);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_298,&local_3b0);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_358,&local_410);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_318,&local_428);
    local_440.Pitch = local_3b0.Pitch;
    local_440.Yaw = local_3b0.Yaw;
    local_440.Roll = local_3b0.Roll;
    if ((param_1->ArrayNum < 4) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    fVar54 = (float)local_428.Pitch;
    fVar56 = (float)local_410.Pitch;
    fVar53 = (float)local_440.Pitch;
    if (pFVar40[6] == (FScriptContainerElement)0x0) {
      if ((pFVar40[7] != (FScriptContainerElement)0x0) && (fVar54 <= fVar53)) {
        fVar53 = fVar54;
      }
    }
    else {
      if (pFVar40[7] != (FScriptContainerElement)0x0) {
        if (fVar54 <= fVar56) {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          if (fVar53 <= fVar54) {
            fVar53 = fVar54;
          }
          goto LAB_14a24087f;
        }
        if (fVar54 <= fVar53) {
          fVar53 = fVar54;
        }
      }
      if (fVar53 <= fVar56) {
        fVar53 = fVar56;
      }
    }
LAB_14a24087f:
    local_440.Pitch = (double)fVar53;
    if ((param_1->ArrayNum < 5) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    fVar54 = (float)local_428.Yaw;
    fVar56 = (float)local_410.Yaw;
    fVar53 = (float)local_440.Yaw;
    if (pFVar40[8] == (FScriptContainerElement)0x0) {
      if ((pFVar40[9] != (FScriptContainerElement)0x0) && (fVar54 <= fVar53)) {
        fVar53 = fVar54;
      }
    }
    else {
      if (pFVar40[9] != (FScriptContainerElement)0x0) {
        if (fVar54 <= fVar56) {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          if (fVar53 <= fVar54) {
            fVar53 = fVar54;
          }
          goto LAB_14a240918;
        }
        if (fVar54 <= fVar53) {
          fVar53 = fVar54;
        }
      }
      if (fVar53 <= fVar56) {
        fVar53 = fVar56;
      }
    }
LAB_14a240918:
    local_440.Yaw = (double)fVar53;
    if ((param_1->ArrayNum < 6) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    fVar54 = (float)local_428.Roll;
    fVar56 = (float)local_410.Roll;
    fVar53 = (float)local_440.Roll;
    if (pFVar40[10] == (FScriptContainerElement)0x0) {
      if ((pFVar40[0xb] != (FScriptContainerElement)0x0) && (fVar54 <= fVar53)) {
        fVar53 = fVar54;
      }
    }
    else {
      if (pFVar40[0xb] != (FScriptContainerElement)0x0) {
        if (fVar54 <= fVar56) {
          if (fVar56 <= fVar53) {
            fVar53 = fVar56;
          }
          if (fVar53 <= fVar54) {
            fVar53 = fVar54;
          }
          goto LAB_14a2409b1;
        }
        if (fVar54 <= fVar53) {
          fVar53 = fVar54;
        }
      }
      if (fVar53 <= fVar56) {
        fVar53 = fVar56;
      }
    }
LAB_14a2409b1:
    local_440.Roll = (double)fVar53;
    pTVar51 = UE::Math::TRotator<double>::Quaternion(&local_440,local_d8);
    dVar42 = pTVar51->Y;
    dVar43 = pTVar51->Z;
    dVar44 = pTVar51->W;
    (this->FloatStorage).Float00 = (float)pTVar51->X;
    (this->FloatStorage).Float01 = (float)dVar42;
    (this->FloatStorage).Float02 = (float)dVar43;
    (this->FloatStorage).Float03 = (float)dVar44;
    break;
  case EulerTransform:
    if (iVar39 < 9) {
      return;
    }
    (this->FloatStorage).bValid = true;
    if ((*piVar1 < 1) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((*pFVar40 == (FScriptContainerElement)0x0) && (pFVar40[1] == (FScriptContainerElement)0x0))
    {
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[2] != (FScriptContainerElement)0x0) ||
         (pFVar40[3] != (FScriptContainerElement)0x0)) goto LAB_14a240b04;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[4] != (FScriptContainerElement)0x0) ||
         (pFVar40[5] != (FScriptContainerElement)0x0)) goto LAB_14a240b04;
    }
    else {
LAB_14a240b04:
      if ((param_1->ArrayNum < 1) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)(param_1->AllocatorInstance).Data,
                          &(this->FloatStorage).Float03,&(param_3->FloatStorage).Float03,
                          &(param_4->FloatStorage).Float03);
      (this->FloatStorage).Float03 = fVar53;
      if ((param_1->ArrayNum < 2) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 2),
                          &(this->FloatStorage).Float10,&(param_3->FloatStorage).Float10,
                          &(param_4->FloatStorage).Float10);
      (this->FloatStorage).Float10 = fVar53;
      if ((param_1->ArrayNum < 3) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 4),
                          &(this->FloatStorage).Float11,&(param_3->FloatStorage).Float11,
                          &(param_4->FloatStorage).Float11);
      (this->FloatStorage).Float11 = fVar53;
    }
    if ((param_1->ArrayNum < 4) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((pFVar40[6] == (FScriptContainerElement)0x0) && (pFVar40[7] == (FScriptContainerElement)0x0)
       ) {
      if ((param_1->ArrayNum < 5) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[8] != (FScriptContainerElement)0x0) ||
         (pFVar40[9] != (FScriptContainerElement)0x0)) goto LAB_14a240cf3;
      if ((param_1->ArrayNum < 6) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[10] != (FScriptContainerElement)0x0) ||
         (pFVar40[0xb] != (FScriptContainerElement)0x0)) goto LAB_14a240cf3;
    }
    else {
LAB_14a240cf3:
      if ((param_1->ArrayNum < 4) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 6),
                          (float *)this,(float *)param_3,(float *)param_4);
      (this->FloatStorage).Float00 = fVar53;
      if ((param_1->ArrayNum < 5) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 8),
                          &(this->FloatStorage).Float01,&(param_3->FloatStorage).Float01,
                          &(param_4->FloatStorage).Float01);
      (this->FloatStorage).Float01 = fVar53;
      if ((param_1->ArrayNum < 6) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      fVar53 = FRigControlLimitEnabled::Apply<float>
                         ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 10),
                          &(this->FloatStorage).Float02,&(param_3->FloatStorage).Float02,
                          &(param_4->FloatStorage).Float02);
      (this->FloatStorage).Float02 = fVar53;
    }
    if ((param_1->ArrayNum < 7) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    pFVar40 = (param_1->AllocatorInstance).Data;
    if ((pFVar40[0xc] == (FScriptContainerElement)0x0) &&
       (pFVar40[0xd] == (FScriptContainerElement)0x0)) {
      if ((param_1->ArrayNum < 8) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar41 = (code *)swi(3);
        (*pcVar41)();
        return;
      }
      pFVar40 = (param_1->AllocatorInstance).Data;
      if ((pFVar40[0xe] == (FScriptContainerElement)0x0) &&
         (pFVar40[0xf] == (FScriptContainerElement)0x0)) {
        if ((param_1->ArrayNum < 9) &&
           (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar50)) {
          pcVar41 = (code *)swi(3);
          (*pcVar41)();
          return;
        }
        pFVar40 = (param_1->AllocatorInstance).Data;
        if ((pFVar40[0x10] == (FScriptContainerElement)0x0) &&
           (pFVar40[0x11] == (FScriptContainerElement)0x0)) {
          return;
        }
      }
    }
    if ((param_1->ArrayNum < 7) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    fVar53 = FRigControlLimitEnabled::Apply<float>
                       ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 0xc),
                        &(this->FloatStorage).Float12,&(param_3->FloatStorage).Float12,
                        &(param_4->FloatStorage).Float12);
    (this->FloatStorage).Float12 = fVar53;
    if ((param_1->ArrayNum < 8) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    fVar53 = FRigControlLimitEnabled::Apply<float>
                       ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 0xe),
                        &(this->FloatStorage).Float13,&(param_3->FloatStorage).Float13,
                        &(param_4->FloatStorage).Float13);
    (this->FloatStorage).Float13 = fVar53;
    if ((param_1->ArrayNum < 9) &&
       (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar50)) {
      pcVar41 = (code *)swi(3);
      (*pcVar41)();
      return;
    }
    fVar53 = FRigControlLimitEnabled::Apply<float>
                       ((FRigControlLimitEnabled *)((param_1->AllocatorInstance).Data + 0x10),
                        &(this->FloatStorage).Float20,&(param_3->FloatStorage).Float20,
                        &(param_4->FloatStorage).Float20);
    (this->FloatStorage).Float20 = fVar53;
  }
  return;
}

// GetAsTransform @ 14a25dfb0

TTransform<double> * __thiscall
FRigControlValue::GetAsTransform
          (FRigControlValue *this,TTransform<double> *__return_storage_ptr__,ERigControlType param_1
          ,ERigControlAxis param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  __m128d _Var43;
  __m128d _Var44;
  bool bVar45;
  TRotator<double> *this_00;
  TQuat<double> *pTVar46;
  TTransform<double> *pTVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float local_2d8;
  float fStack_2d4;
  TRotator<double> local_2a0;
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 local_268 [3];
  float local_210;
  float fStack_20c;
  float fStack_208;
  TRotator<double> local_e8 [3];
  TQuat<double> local_98;
  TQuat<double> local_78 [3];
  
  _Var43.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var44 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var43.m128d_f64;
  _Var43 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var44.m128d_f64;
  _Var44 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var43.m128d_f64;
  _Var43 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var44.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var43.m128d_f64;
  uVar42 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar41 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar40 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  switch(param_1) {
  case Bool:
    if (*(char *)&(this->FloatStorage).Float00 == '\0') {
      uVar65 = 0;
      uVar66 = 0;
    }
    else {
      uVar65 = (undefined4)__real_3ff0000000000000;
      uVar66 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)CONCAT44(uVar66,uVar65);
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    break;
  case Float:
    fVar1 = (this->FloatStorage).Float00;
    if (param_2 == X) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)fVar1;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Y) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Z) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    break;
  case Integer:
    fVar1 = (this->FloatStorage).Float00;
    if (param_2 == X) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)(int)fVar1;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Y) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)(int)fVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Z) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)(int)fVar1;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    break;
  case Vector2D:
    uVar2 = (this->FloatStorage).Float00;
    uVar6 = (this->FloatStorage).Float01;
    if (param_2 == X) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)(float)uVar2;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)(float)uVar6;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Y) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)(float)uVar2;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)(float)uVar6;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    else if (param_2 == Z) {
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)(float)uVar2;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)(float)uVar6;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = 0.0;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    }
    break;
  case Position:
    uVar3 = (this->FloatStorage).Float00;
    uVar7 = (this->FloatStorage).Float01;
    fVar1 = (this->FloatStorage).Float02;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)(float)uVar3;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)(float)uVar7;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar1;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    break;
  case Scale:
    uVar4 = (this->FloatStorage).Float00;
    uVar8 = (this->FloatStorage).Float01;
    fVar1 = (this->FloatStorage).Float02;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)(float)uVar4;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)(float)uVar8;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar1;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    break;
  case Rotator:
    uVar5 = (this->FloatStorage).Float00;
    uVar9 = (this->FloatStorage).Float01;
    local_268[0]._0_8_ = (undefined8)(float)uVar5;
    local_268[0]._8_8_ = (undefined8)(float)uVar9;
    local_268[0]._16_8_ = (undefined8)(this->FloatStorage).Float02;
    this_00 = UE::Math::TRotator<double>::MakeFromEuler
                        (local_e8,(TVector<double> *)&local_268[0]._s_0);
    pTVar46 = UE::Math::TRotator<double>::Quaternion(this_00,&local_98);
    dVar61 = pTVar46->Z;
    dVar18 = pTVar46->W;
    dVar32 = pTVar46->Y;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar46->X;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar32;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar61;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar18;
    break;
  case Transform:
    fVar1 = (this->FloatStorage).Float02;
    fVar26 = (this->FloatStorage).Float03;
    fVar27 = (this->FloatStorage).Float10;
    fVar28 = (this->FloatStorage).Float12;
    fVar29 = (this->FloatStorage).Float20;
    fVar30 = (this->FloatStorage).Float21;
    fVar31 = (this->FloatStorage).Float22;
    dVar18 = (double)(this->FloatStorage).Float01;
    dVar61 = (double)(this->FloatStorage).Float11;
    auVar24._8_4_ = SUB84(dVar18,0);
    auVar24._0_8_ = (double)(this->FloatStorage).Float00;
    auVar24._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar24;
    dVar18 = (double)fVar26;
    auVar23._8_4_ = SUB84(dVar18,0);
    auVar23._0_8_ = (double)fVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar23;
    auVar20._8_4_ = SUB84(dVar61,0);
    auVar20._0_8_ = (double)fVar27;
    auVar20._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar20;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar28;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    auVar62._0_8_ = (double)fVar29;
    auVar62._8_8_ = (double)fVar30;
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar62;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar31;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    dVar32 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
    dVar33 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
    dVar34 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
    dVar35 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
    dVar61 = dVar34 * dVar34 + dVar32 * dVar32;
    dVar18 = dVar35 * dVar35 + dVar33 * dVar33;
    auVar52._8_4_ = SUB84(dVar18,0);
    auVar52._0_8_ = dVar61;
    auVar52._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar53._0_8_ = auVar52._8_8_ + dVar61;
    auVar53._8_8_ = dVar61 + dVar18;
    auVar69 = sqrtpd(auVar62,auVar53);
    uVar48 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar53._0_8_);
    uVar50 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar53._8_8_);
    uVar49 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar53._0_8_);
    uVar51 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar53._8_8_);
    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar69);
    auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar69);
    auVar54._0_8_ = uVar49 & (ulonglong)(auVar64._0_8_ * dVar32);
    uVar25 = uVar51 & (ulonglong)(auVar64._8_8_ * dVar33);
    auVar54._8_4_ = (undefined4)uVar25;
    auVar54._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar67._0_8_ = uVar48 & (ulonglong)(auVar69._0_8_ * dVar34);
    uVar25 = uVar50 & (ulonglong)(auVar69._8_8_ * dVar35);
    auVar67._8_4_ = (undefined4)uVar25;
    auVar67._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar21._4_4_ =
         ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar21._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar21._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar21._12_4_ =
         ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    uVar11 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    uVar12 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    uVar13 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar54 | auVar21;
    auVar17._4_4_ = ~(uint)(uVar48 >> 0x20) & uVar12;
    auVar17._0_4_ = ~(uint)uVar48 & uVar11;
    auVar17._8_4_ = ~(uint)uVar50 & uVar13;
    auVar17._12_4_ = ~(uint)(uVar50 >> 0x20) & uVar14;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar67 | auVar17;
    break;
  case TransformNoScale:
    fVar1 = (this->FloatStorage).Float02;
    uVar36 = (this->FloatStorage).Float10;
    uVar37 = (this->FloatStorage).Float11;
    uVar38 = (this->FloatStorage).Float12;
    dVar18 = (double)(this->FloatStorage).Float01;
    dVar61 = (double)(this->FloatStorage).Float03;
    auVar22._8_4_ = SUB84(dVar18,0);
    auVar22._0_8_ = (double)(this->FloatStorage).Float00;
    auVar22._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar22;
    auVar15._8_4_ = SUB84(dVar61,0);
    auVar15._0_8_ = (double)fVar1;
    auVar15._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar15;
    auVar63._0_8_ = (double)(float)uVar36;
    auVar63._8_8_ = (double)(float)uVar37;
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar63;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)(float)uVar38;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (double)uVar40;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)uVar41;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)uVar42;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    dVar32 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
    dVar33 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
    dVar34 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
    dVar35 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
    dVar61 = dVar34 * dVar34 + dVar32 * dVar32;
    dVar18 = dVar35 * dVar35 + dVar33 * dVar33;
    auVar55._8_4_ = SUB84(dVar18,0);
    auVar55._0_8_ = dVar61;
    auVar55._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar56._0_8_ = auVar55._8_8_ + dVar61;
    auVar56._8_8_ = dVar61 + dVar18;
    auVar69 = sqrtpd(auVar63,auVar56);
    uVar48 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar56._0_8_);
    uVar50 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar56._8_8_);
    uVar49 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar56._0_8_);
    uVar51 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar56._8_8_);
    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar69);
    auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar69);
    auVar57._0_8_ = uVar49 & (ulonglong)(auVar64._0_8_ * dVar32);
    uVar25 = uVar51 & (ulonglong)(auVar64._8_8_ * dVar33);
    auVar57._8_4_ = (undefined4)uVar25;
    auVar57._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar68._0_8_ = uVar48 & (ulonglong)(auVar69._0_8_ * dVar34);
    uVar25 = uVar50 & (ulonglong)(auVar69._8_8_ * dVar35);
    auVar68._8_4_ = (undefined4)uVar25;
    auVar68._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar19._4_4_ =
         ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar19._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar19._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar19._12_4_ =
         ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar16._4_4_ =
         ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar16._0_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar16._8_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar16._12_4_ =
         ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar57 | auVar19;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar68 | auVar16;
    break;
  case EulerTransform:
    fVar1 = (this->FloatStorage).Float03;
    fVar26 = (this->FloatStorage).Float10;
    fVar27 = (this->FloatStorage).Float11;
    local_2a0.Pitch = (double)(this->FloatStorage).Float00;
    local_2a0.Yaw = (double)(this->FloatStorage).Float01;
    local_2a0.Roll = (double)(this->FloatStorage).Float02;
    local_288 = (double)(this->FloatStorage).Float12;
    local_278 = (double)(this->FloatStorage).Float20;
    dStack_280 = (double)(this->FloatStorage).Float13;
    pTVar46 = UE::Math::TRotator<double>::Quaternion(&local_2a0,local_78);
    auVar39._8_8_ = dStack_280;
    auVar39._0_8_ = local_288;
    dVar61 = pTVar46->Y;
    dVar18 = pTVar46->Z;
    dVar32 = pTVar46->W;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar46->X;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar61;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar18;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar32;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)fVar1;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar26;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar27;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar39;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_278;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    dVar32 = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
    dVar33 = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
    dVar34 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
    dVar35 = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
    dVar61 = dVar34 * dVar34 + dVar32 * dVar32;
    dVar18 = dVar35 * dVar35 + dVar33 * dVar33;
    auVar58._8_4_ = SUB84(dVar18,0);
    auVar58._0_8_ = dVar61;
    auVar58._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar59._0_8_ = auVar58._8_8_ + dVar61;
    auVar59._8_8_ = dVar61 + dVar18;
    auVar64 = sqrtpd(auVar39,auVar59);
    uVar48 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar59._0_8_);
    uVar50 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar59._8_8_);
    uVar49 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar59._0_8_);
    uVar51 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar59._8_8_);
    auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar64);
    auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar64);
    auVar70._0_8_ = uVar48 & (ulonglong)(auVar69._0_8_ * dVar34);
    uVar25 = uVar50 & (ulonglong)(auVar69._8_8_ * dVar35);
    auVar70._8_4_ = (undefined4)uVar25;
    auVar70._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar60._0_8_ = uVar49 & (ulonglong)(auVar64._0_8_ * dVar32);
    uVar25 = uVar51 & (ulonglong)(auVar64._8_8_ * dVar33);
    auVar60._8_4_ = (undefined4)uVar25;
    auVar60._12_4_ = (undefined4)(uVar25 >> 0x20);
    auVar64._4_4_ =
         ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar64._0_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar64._8_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar64._12_4_ =
         ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    auVar69._4_4_ =
         ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar69._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar69._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar69._12_4_ =
         ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar60 | auVar69;
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar70 | auVar64;
    break;
  case ScaleFloat:
    dVar61 = (double)(this->FloatStorage).Float00;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar61;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar61;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar61;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
    break;
  default:
    bVar45 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3112195313419418941>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyDefines.h"
                        ,0x2c3,"false");
    if (bVar45) {
      pcVar10 = (code *)swi(3);
      pTVar47 = (TTransform<double> *)(*pcVar10)();
      return pTVar47;
    }
  }
  return __return_storage_ptr__;
}

// SetFromTransform @ 14a293350

void __thiscall
FRigControlValue::SetFromTransform
          (FRigControlValue *this,TTransform<double> *param_1,ERigControlType param_2,
          ERigControlAxis param_3)

{
  undefined4 uVar1;
  undefined4 uVar3;
  double dVar2;
  code *pcVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  bool bVar12;
  TVector<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 in_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar33 [16];
  double dVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  TRotator<double> local_440;
  TQuat<double> local_428;
  double local_408;
  double local_400;
  double local_3f8;
  TRotator<double> local_3f0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  TVector<double>_u_0 local_3b8;
  TRotator<double> local_3a0;
  TRotator<double> local_388;
  TRotator<double> local_370;
  TRotator<double> local_358;
  double local_338;
  double dStack_330;
  double local_328;
  TRotator<double> local_320;
  double local_308;
  double dStack_300;
  double local_2f8;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8 [7];
  TRotator<double> local_1d0;
  TVector<double> local_1b8 [7];
  TRotator<double> local_110 [11];
  
  dVar41 = __real_3e45798ee0000000;
  switch(param_2) {
  case Bool:
    dVar31 = (param_1->Translation).XY.m128d_f64[0];
    (this->FloatStorage).bValid = true;
    *(bool *)&(this->FloatStorage).Float00 = dVar41 < dVar31;
    break;
  case Float:
    if (param_3 == X) {
      dVar41 = (param_1->Translation).XY.m128d_f64[0];
    }
    else {
      if (param_3 != Y) {
        if (param_3 != Z) {
          return;
        }
        dVar41 = (param_1->Translation).ZW.m128d_f64[0];
        (this->FloatStorage).bValid = true;
        (this->FloatStorage).Float00 = (float)dVar41;
        return;
      }
      auVar5._4_8_ = in_XMM1_Qb;
      auVar5._0_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      auVar33._0_8_ = auVar5._0_8_ << 0x20;
      auVar33._8_4_ = *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      auVar33._12_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      dVar41 = auVar33._8_8_;
    }
    goto LAB_14a2933ff;
  case Integer:
    if (param_3 == X) {
      dVar41 = (param_1->Translation).XY.m128d_f64[0];
      (this->FloatStorage).bValid = true;
      (this->FloatStorage).Float00 = (float)(int)dVar41;
    }
    else if (param_3 == Y) {
      auVar6._4_8_ = in_XMM1_Qb;
      auVar6._0_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 4);
      auVar34._0_8_ = auVar6._0_8_ << 0x20;
      auVar34._8_4_ = *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1);
      auVar34._12_4_ = *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc);
      (this->FloatStorage).bValid = true;
      (this->FloatStorage).Float00 = (float)(int)auVar34._8_8_;
    }
    else if (param_3 == Z) {
      dVar41 = (param_1->Translation).ZW.m128d_f64[0];
      (this->FloatStorage).bValid = true;
      (this->FloatStorage).Float00 = (float)(int)dVar41;
    }
    break;
  case Vector2D:
    dVar2 = (param_1->Translation).XY.m128d_f64[0];
    dVar32 = (param_1->Translation).XY.m128d_f64[1];
    dVar31 = (param_1->Translation).ZW.m128d_f64[0];
    dVar41 = dVar32;
    if (((param_3 == X) || (dVar41 = dVar2, param_3 == Y)) || (dVar31 = dVar32, param_3 == Z)) {
      (this->FloatStorage).bValid = true;
      (this->FloatStorage).Float00 = (float)dVar41;
      (this->FloatStorage).Float01 = (float)dVar31;
      (this->FloatStorage).Float02 = 0.0;
    }
    break;
  case Position:
    auVar25 = *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64;
    dVar41 = (param_1->Translation).ZW.m128d_f64[0];
    goto LAB_14a2934fa;
  case Scale:
    auVar25 = *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64;
    dVar41 = (param_1->Scale3D).ZW.m128d_f64[0];
LAB_14a2934fa:
    (this->FloatStorage).bValid = true;
    auVar7._4_8_ = in_XMM0_Qb;
    auVar7._0_4_ = auVar25._4_4_;
    auVar18._0_8_ = auVar7._0_8_ << 0x20;
    auVar18._8_4_ = auVar25._8_4_;
    auVar18._12_4_ = auVar25._12_4_;
    (this->FloatStorage).Float00 = (float)auVar25._0_8_;
    (this->FloatStorage).Float01 = (float)auVar18._8_8_;
    (this->FloatStorage).Float02 = (float)dVar41;
    break;
  case Rotator:
    uVar1 = (this->FloatStorage).Float00;
    uVar3 = (this->FloatStorage).Float01;
    local_3b8._s_0.X = (double)(float)uVar1;
    local_3b8._s_0.Y = (double)(float)uVar3;
    local_3b8._s_0.Z = (double)(this->FloatStorage).Float02;
    UE::Math::TRotator<double>::MakeFromEuler(&local_440,(TVector<double> *)&local_3b8._s_0);
    UE::Math::TRotator<double>::GetWindingAndRemainder(&local_440,&local_1d0,&local_388);
    local_2e8.X = (param_1->Rotation).XY.m128d_f64[0];
    local_2e8.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_2e8.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_2e8.W = (param_1->Rotation).ZW.m128d_f64[1];
    UE::Math::TRotator<double>::TRotator<double>(&local_3a0,&local_2e8);
    auVar20._0_8_ = local_3a0.Roll - local_388.Roll;
    auVar35._0_8_ = local_3a0.Yaw - local_388.Yaw;
    auVar35._8_8_ = 0;
    auVar19._8_4_ = SUB84(auVar35._0_8_,0);
    auVar19._0_8_ = local_3a0.Pitch - local_388.Pitch;
    auVar19._12_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20);
    auVar25 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar25 = roundpd(auVar35,auVar25,3);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar36._0_8_ = auVar25._0_8_ * dVar2;
    dVar32 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar36._8_8_ = auVar25._8_8_ * dVar32;
    auVar20._8_8_ = 0;
    auVar25 = divpd(auVar20,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar50 = (local_3a0.Pitch - local_388.Pitch) - auVar36._0_8_;
    dVar52 = auVar35._0_8_ - auVar36._8_8_;
    auVar25 = roundpd(auVar36,auVar25,3);
    dVar46 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar21._8_4_ = SUB84(dVar52,0);
    auVar21._0_8_ = dVar50;
    auVar21._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    dVar41 = auVar20._0_8_ - auVar25._0_8_ * dVar46;
    dVar31 = 0.0 - auVar25._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    dVar49 = auVar21._8_8_ + dVar32;
    uVar14 = -(ulonglong)(0.0 <= dVar41);
    uVar16 = -(ulonglong)(0.0 <= dVar31);
    uVar15 = -(ulonglong)(0.0 <= dVar50);
    uVar17 = -(ulonglong)(0.0 <= dVar52);
    auVar42._0_8_ = uVar14 & (ulonglong)dVar41;
    auVar42._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar31);
    auVar42._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar31) >> 0x20);
    auVar47._0_4_ = ~(uint)uVar15 & SUB84(dVar50 + dVar2,0);
    auVar47._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar2) >> 0x20);
    auVar47._8_4_ = ~(uint)uVar17 & SUB84(dVar49,0);
    auVar47._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar49 >> 0x20);
    auVar37._0_8_ = uVar15 & (ulonglong)dVar50;
    auVar37._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar52);
    auVar37._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar52) >> 0x20);
    auVar47 = auVar47 | auVar37;
    auVar22._8_4_ = SUB84(dVar31,0);
    auVar22._0_8_ = dVar41;
    auVar22._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    dVar31 = auVar22._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar51._0_4_ = ~(uint)uVar14 & SUB84(dVar41 + dVar46,0);
    auVar51._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar41 + dVar46) >> 0x20);
    auVar51._8_4_ = ~(uint)uVar16 & SUB84(dVar31,0);
    auVar51._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar31 >> 0x20);
    auVar51 = auVar51 | auVar42;
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar47._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar47._8_8_);
    auVar44._0_8_ = uVar15 & (ulonglong)(auVar47._0_8_ - dVar2);
    uVar14 = uVar16 & (ulonglong)(auVar47._8_8_ - dVar32);
    auVar44._8_4_ = (undefined4)uVar14;
    auVar44._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar23._0_4_ = ~(uint)uVar15 & auVar47._0_4_;
    auVar23._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar47._4_4_;
    auVar23._8_4_ = ~(uint)uVar16 & auVar47._8_4_;
    auVar23._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar47._12_4_;
    local_440.Pitch = local_440.Pitch + SUB168(auVar44 | auVar23,0);
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar51._0_8_);
    local_440.Yaw = local_440.Yaw + SUB168(auVar44 | auVar23,8);
    local_440.Roll =
         local_440.Roll +
         (double)(uVar14 & (ulonglong)(auVar51._0_8_ - dVar46) |
                 CONCAT44(~(uint)(uVar14 >> 0x20) & auVar51._4_4_,~(uint)uVar14 & auVar51._0_4_));
    pTVar13 = UE::Math::TRotator<double>::Euler(&local_440,local_1b8);
    dVar41 = (pTVar13->field0_0x0)._s_0.X;
    dVar31 = (pTVar13->field0_0x0)._s_0.Y;
    dVar2 = (pTVar13->field0_0x0)._s_0.Z;
    (this->FloatStorage).bValid = true;
    (this->FloatStorage).Float00 = (float)dVar41;
    (this->FloatStorage).Float01 = (float)dVar31;
    (this->FloatStorage).Float02 = (float)dVar2;
    break;
  case Transform:
    dVar41 = (param_1->Translation).XY.m128d_f64[1];
    dVar46 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar49 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar31 = (param_1->Translation).XY.m128d_f64[0];
    dVar2 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar50 = (param_1->Rotation).XY.m128d_f64[0];
    dVar52 = (param_1->Rotation).XY.m128d_f64[1];
    dVar10 = (param_1->Translation).ZW.m128d_f64[0];
    dVar32 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar11 = (param_1->Scale3D).ZW.m128d_f64[0];
    (this->FloatStorage).bValid = true;
    (this->FloatStorage).Float00 = (float)dVar50;
    (this->FloatStorage).Float01 = (float)dVar52;
    (this->FloatStorage).Float02 = (float)dVar46;
    (this->FloatStorage).Float03 = (float)dVar49;
    (this->FloatStorage).Float10 = (float)dVar31;
    (this->FloatStorage).Float11 = (float)dVar41;
    (this->FloatStorage).Float12 = (float)dVar10;
    (this->FloatStorage).Float13 = 0.0;
    (this->FloatStorage).Float20 = (float)dVar2;
    (this->FloatStorage).Float21 = (float)dVar32;
    (this->FloatStorage).Float22 = (float)dVar11;
    (this->FloatStorage).Float23 = 0.0;
    break;
  case TransformNoScale:
    auVar25 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar41 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar31 = (param_1->Rotation).ZW.m128d_f64[1];
    auVar8._4_8_ = in_XMM0_Qb;
    auVar8._0_4_ = auVar25._4_4_;
    auVar24._0_8_ = auVar8._0_8_ << 0x20;
    auVar24._8_4_ = auVar25._8_4_;
    auVar24._12_4_ = auVar25._12_4_;
    dVar2 = (param_1->Translation).XY.m128d_f64[0];
    dVar32 = (param_1->Translation).XY.m128d_f64[1];
    dVar46 = (param_1->Translation).ZW.m128d_f64[0];
    (this->FloatStorage).bValid = true;
    (this->FloatStorage).Float00 = (float)auVar25._0_8_;
    (this->FloatStorage).Float01 = (float)auVar24._8_8_;
    (this->FloatStorage).Float02 = (float)dVar41;
    (this->FloatStorage).Float03 = (float)dVar31;
    (this->FloatStorage).Float10 = (float)dVar2;
    (this->FloatStorage).Float11 = (float)dVar32;
    (this->FloatStorage).Float12 = (float)dVar46;
    (this->FloatStorage).Float13 = 0.0;
    break;
  case EulerTransform:
    local_338 = (param_1->Translation).XY.m128d_f64[0];
    dStack_330 = (param_1->Translation).XY.m128d_f64[1];
    local_328 = (param_1->Translation).ZW.m128d_f64[0];
    local_2c8[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_2c8[0].W = (param_1->Rotation).ZW.m128d_f64[1];
    local_2c8[0].X = (param_1->Rotation).XY.m128d_f64[0];
    local_2c8[0].Y = (param_1->Rotation).XY.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(local_2c8,&local_320);
    local_308 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_300 = (param_1->Scale3D).XY.m128d_f64[1];
    local_2f8 = (param_1->Scale3D).ZW.m128d_f64[0];
    local_3f0.Pitch = (double)(this->FloatStorage).Float00;
    local_3f0.Yaw = (double)(this->FloatStorage).Float01;
    local_3f0.Roll = (double)(this->FloatStorage).Float02;
    local_408 = (double)(this->FloatStorage).Float03;
    local_400 = (double)(this->FloatStorage).Float10;
    local_3f8 = (double)(this->FloatStorage).Float11;
    local_3d8 = (double)(this->FloatStorage).Float12;
    local_3c8 = (double)(this->FloatStorage).Float20;
    local_3d0 = (double)(this->FloatStorage).Float13;
    UE::Math::TRotator<double>::GetWindingAndRemainder(&local_3f0,local_110,&local_358);
    local_428.X = (param_1->Rotation).XY.m128d_f64[0];
    local_428.Y = (param_1->Rotation).XY.m128d_f64[1];
    local_428.Z = (param_1->Rotation).ZW.m128d_f64[0];
    local_428.W = (param_1->Rotation).ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_428,&local_370);
    auVar26._0_8_ = local_370.Roll - local_358.Roll;
    auVar38._0_8_ = local_370.Yaw - local_358.Yaw;
    auVar38._8_8_ = 0;
    auVar25._8_4_ = SUB84(auVar38._0_8_,0);
    auVar25._0_8_ = local_370.Pitch - local_358.Pitch;
    auVar25._12_4_ = (int)((ulonglong)auVar38._0_8_ >> 0x20);
    auVar25 = divpd(auVar25,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar25 = roundpd(auVar38,auVar25,3);
    dVar41 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar39._0_8_ = auVar25._0_8_ * dVar41;
    dVar31 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar39._8_8_ = auVar25._8_8_ * dVar31;
    auVar26._8_8_ = 0;
    dVar46 = (local_370.Pitch - local_358.Pitch) - auVar39._0_8_;
    dVar49 = auVar38._0_8_ - auVar39._8_8_;
    auVar25 = divpd(auVar26,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    auVar25 = roundpd(auVar39,auVar25,3);
    dVar2 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar27._8_4_ = SUB84(dVar49,0);
    auVar27._0_8_ = dVar46;
    auVar27._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dVar50 = auVar26._0_8_ - auVar25._0_8_ * dVar2;
    dVar52 = 0.0 - auVar25._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    dVar32 = auVar27._8_8_ + dVar31;
    uVar14 = -(ulonglong)(0.0 <= dVar50);
    uVar16 = -(ulonglong)(0.0 <= dVar52);
    uVar15 = -(ulonglong)(0.0 <= dVar46);
    uVar17 = -(ulonglong)(0.0 <= dVar49);
    auVar40._0_8_ = uVar15 & (ulonglong)dVar46;
    auVar40._8_4_ = (undefined4)(uVar17 & (ulonglong)dVar49);
    auVar40._12_4_ = (undefined4)((uVar17 & (ulonglong)dVar49) >> 0x20);
    auVar45._0_4_ = ~(uint)uVar15 & SUB84(dVar46 + dVar41,0);
    auVar45._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar46 + dVar41) >> 0x20);
    auVar45._8_4_ = ~(uint)uVar17 & SUB84(dVar32,0);
    auVar45._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
    auVar45 = auVar45 | auVar40;
    auVar43._0_8_ = uVar14 & (ulonglong)dVar50;
    auVar43._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar52);
    auVar43._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar52) >> 0x20);
    auVar28._8_4_ = SUB84(dVar52,0);
    auVar28._0_8_ = dVar50;
    auVar28._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    dVar32 = auVar28._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar48._0_4_ = ~(uint)uVar14 & SUB84(dVar50 + dVar2,0);
    auVar48._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar2) >> 0x20);
    auVar48._8_4_ = ~(uint)uVar16 & SUB84(dVar32,0);
    auVar48._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
    auVar48 = auVar48 | auVar43;
    dVar32 = GlobalVectorConstants::Double180.ZW.m128d_f64[0];
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar45._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar45._8_8_);
    (this->FloatStorage).bValid = true;
    auVar53._0_8_ = uVar15 & (ulonglong)(auVar45._0_8_ - dVar41);
    uVar14 = uVar16 & (ulonglong)(auVar45._8_8_ - dVar31);
    auVar53._8_4_ = (undefined4)uVar14;
    auVar53._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar29._0_4_ = ~(uint)uVar15 & auVar45._0_4_;
    auVar29._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar45._4_4_;
    auVar29._8_4_ = ~(uint)uVar16 & auVar45._8_4_;
    auVar29._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar45._12_4_;
    auVar53 = auVar53 | auVar29;
    uVar14 = -(ulonglong)(dVar32 < auVar48._0_8_);
    auVar9._4_8_ = auVar29._8_8_;
    auVar9._0_4_ = auVar53._4_4_;
    auVar30._0_8_ = auVar9._0_8_ << 0x20;
    auVar30._8_4_ = auVar53._8_4_;
    auVar30._12_4_ = auVar53._12_4_;
    (this->FloatStorage).Float00 = (float)(auVar53._0_8_ + local_3f0.Pitch);
    (this->FloatStorage).Float01 = (float)(auVar30._8_8_ + local_3f0.Yaw);
    (this->FloatStorage).Float02 =
         (float)((double)((ulonglong)(auVar48._0_8_ - dVar2) & uVar14 |
                         CONCAT44(~(uint)(uVar14 >> 0x20) & auVar48._4_4_,
                                  ~(uint)uVar14 & auVar48._0_4_)) + local_3f0.Roll);
    (this->FloatStorage).Float03 = (float)local_338;
    (this->FloatStorage).Float10 = (float)dStack_330;
    (this->FloatStorage).Float11 = (float)local_328;
    (this->FloatStorage).Float12 = (float)local_308;
    (this->FloatStorage).Float13 = (float)dStack_300;
    (this->FloatStorage).Float20 = (float)local_2f8;
    break;
  case ScaleFloat:
    dVar41 = (param_1->Scale3D).XY.m128d_f64[0];
LAB_14a2933ff:
    (this->FloatStorage).bValid = true;
    (this->FloatStorage).Float00 = (float)dVar41;
    break;
  default:
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3112195313419418796>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyDefines.h"
                        ,0x354,"false");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// StaticStruct @ 14a2bd750

UScriptStruct * __cdecl FRigControlValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigControlValue.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigControlValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigControlValue,(UObject *)pUVar1,
                         L"RigControlValue");
  }
  return Z_Registration_Info_UScriptStruct_FRigControlValue.OuterSingleton;
}

