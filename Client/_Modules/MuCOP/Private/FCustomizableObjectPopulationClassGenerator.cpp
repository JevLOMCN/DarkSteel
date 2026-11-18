// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 1

// GenerateParameters @ 14d3696a0

void __thiscall
FCustomizableObjectPopulationClassGenerator::GenerateParameters
          (FCustomizableObjectPopulationClassGenerator *this,FRandomStream *param_1,
          UCustomizableObjectInstance *param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  UCustomizableObject *this_00;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FLinearColor_u_0 *pFVar16;
  FScriptContainerElement *this_01;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  FRandomStream *local_res10;
  FLinearColor_u_0 local_b0 [7];
  
  fVar6 = __real_3f800000;
  this_01 = (this->ConstraintSamplers).AllocatorInstance.Data;
  uVar3 = (this->ConstraintSamplers).ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar15 = this_01 + 0x10;
  pFVar12 = this_01 + uVar11 * 0x30;
  local_res10 = param_1;
LAB_14d369716:
  if ((this->ConstraintSamplers).ArrayNum != (int)uVar11) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<CustomizableObjectPopulation::FConstraintSampler,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res8);
  }
  if (this_01 == pFVar12) {
    return;
  }
  iVar9 = *(int *)(pFVar15 + -8);
  if (iVar9 < 2) goto switchD_14d369834_default;
  uVar10 = 0;
  if ((int)(iVar9 - 1U) < iVar9) {
    uVar10 = ~(iVar9 - 1U) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)(*(longlong *)&this_01->field_0x0 + -4 + (longlong)*(int *)(pFVar15 + -8) * 4) < 1)
  goto switchD_14d369834_default;
  this_00 = UCustomizableObjectInstance::GetCustomizableObject(param_2);
  if (this_00 == (UCustomizableObject *)0x0) {
    return;
  }
  uVar8 = CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
                    ((FDiscreteImportanceSampler *)this_01,param_1);
  lVar13 = (longlong)(int)uVar8;
  uVar10 = 0;
  if ((int)uVar8 < *(int *)(pFVar15 + 0x18)) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&pFVar15[0x10].field_0x0;
  switch(*(undefined1 *)(lVar4 + 4 + lVar13 * 8)) {
  case 1:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->BoolSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (this->BoolSamplers).AllocatorInstance.Data;
    iVar9 = *(int *)(pFVar14 + (longlong)(int)uVar10 * 8);
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    else {
      uVar8 = param_1->Seed * 0xbb38435 + 0x3619636b;
      param_1->Seed = uVar8;
      iVar9 = (int)(((float)(uVar8 >> 9 | 0x3f800000) - fVar6) * (float)iVar9);
    }
    iVar1 = *(int *)(pFVar14 + (longlong)(int)uVar10 * 8 + 4);
    bVar7 = UCustomizableObjectInstance::ContainsBoolParameter(param_2,(FString *)pFVar15);
    if (bVar7) {
      UCustomizableObjectInstance::SetBoolParameterSelectedOption
                (param_2,(FString *)pFVar15,iVar9 < iVar1);
      this_01 = this_01 + 0x30;
      uVar11 = (ulonglong)uVar3;
      pFVar15 = pFVar15 + 0x30;
      goto LAB_14d369716;
    }
    break;
  case 2:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->IntSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (this->IntSamplers).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
    bVar7 = CustomizableObjectPopulation::FDiscreteImportanceSampler::IsValidSampler
                      ((FDiscreteImportanceSampler *)pFVar14);
    if (bVar7) {
      uVar8 = CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
                        ((FDiscreteImportanceSampler *)pFVar14,param_1);
      uVar10 = 0;
      if ((int)uVar8 < *(int *)(pFVar14 + 0x18)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = *(longlong *)&pFVar14[0x10].field_0x0;
      bVar7 = UCustomizableObjectInstance::ContainsIntParameter(param_2,(FString *)pFVar15);
      if ((bVar7) &&
         (bVar7 = UCustomizableObject::IsParameterMultidimensional(this_00,(FString *)pFVar15),
         !bVar7)) {
        UCustomizableObjectInstance::SetIntParameterSelectedOption
                  (param_2,(FString *)pFVar15,(FString *)((longlong)(int)uVar8 * 0x10 + lVar13),-1);
        this_01 = this_01 + 0x30;
        uVar11 = (ulonglong)uVar3;
        pFVar15 = pFVar15 + 0x30;
        goto LAB_14d369716;
      }
    }
    break;
  case 3:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->UniformFloatSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (this->UniformFloatSamplers).AllocatorInstance.Data;
    fVar17 = *(float *)(pFVar14 + (longlong)(int)uVar10 * 8 + 4);
    fVar2 = *(float *)(pFVar14 + (longlong)(int)uVar10 * 8);
    uVar10 = param_1->Seed * 0xbb38435 + 0x3619636b;
    param_1->Seed = uVar10;
    bVar7 = UCustomizableObjectInstance::ContainsFloatParameter(param_2,(FString *)pFVar15);
    if ((bVar7) &&
       (bVar7 = UCustomizableObject::IsParameterMultidimensional(this_00,(FString *)pFVar15), !bVar7
       )) {
      fVar2 = (fVar17 - fVar2) * ((float)(uVar10 >> 9 | 0x3f800000) - fVar6) + fVar2;
LAB_14d369ad4:
      UCustomizableObjectInstance::SetFloatParameterSelectedOption
                (param_2,(FString *)pFVar15,fVar2,-1);
      this_01 = this_01 + 0x30;
      uVar11 = (ulonglong)uVar3;
      pFVar15 = pFVar15 + 0x30;
      goto LAB_14d369716;
    }
    break;
  case 4:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->RangesSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar14 = (this->RangesSamplers).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
    bVar7 = CustomizableObjectPopulation::FDiscreteImportanceSampler::IsValidSampler
                      ((FDiscreteImportanceSampler *)pFVar14);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidSampler()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationSamplers.cpp"
                           ,0xa8,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
                      ((FDiscreteImportanceSampler *)pFVar14,param_1);
    uVar10 = 0;
    if ((int)uVar8 < *(int *)(pFVar14 + 0x18)) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar17 = *(float *)(*(longlong *)&pFVar14[0x10].field_0x0 + 4 + (longlong)(int)uVar8 * 8);
    uVar10 = 0;
    if ((int)uVar8 < *(int *)(pFVar14 + 0x18)) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_1 = local_res10;
    fVar2 = *(float *)(*(longlong *)&pFVar14[0x10].field_0x0 + (longlong)(int)uVar8 * 8);
    uVar10 = local_res10->Seed * 0xbb38435 + 0x3619636b;
    local_res10->Seed = uVar10;
    bVar7 = UCustomizableObjectInstance::ContainsFloatParameter(param_2,(FString *)pFVar15);
    if (bVar7) {
      fVar2 = ((float)(uVar10 >> 9 | 0x3f800000) - fVar6) * (fVar17 - fVar2) + fVar2;
      goto LAB_14d369ad4;
    }
    break;
  case 5:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->CurveSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar17 = CustomizableObjectPopulation::FCurveSampler::Sample
                       ((FCurveSampler *)
                        ((this->CurveSamplers).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x48
                        ),param_1);
    bVar7 = UCustomizableObjectInstance::ContainsFloatParameter(param_2,(FString *)pFVar15);
    if (!bVar7) break;
    UCustomizableObjectInstance::SetFloatParameterSelectedOption
              (param_2,(FString *)pFVar15,fVar17,-1);
    this_01 = this_01 + 0x30;
    uVar11 = (ulonglong)uVar3;
    pFVar15 = pFVar15 + 0x30;
    goto LAB_14d369716;
  case 6:
    uVar10 = *(uint *)(lVar4 + lVar13 * 8);
    uVar8 = 0;
    if ((int)uVar10 < (this->UniformColorSamplers).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = (longlong)(int)uVar10 * 0x68;
    pFVar14 = (this->UniformColorSamplers).AllocatorInstance.Data;
    uVar10 = param_1->Seed * 0xbb38435 + 0x3619636b;
    fVar17 = *(float *)(pFVar14 + lVar13 + 4);
    fVar2 = *(float *)(pFVar14 + lVar13);
    param_1->Seed = uVar10;
    fVar2 = (fVar17 - fVar2) * ((float)(uVar10 >> 9 | 0x3f800000) - fVar6) + fVar2;
    fVar17 = FCompressedRichCurve::Eval((FCompressedRichCurve *)(pFVar14 + lVar13 + 0x50),fVar2,0.0)
    ;
    fVar18 = FCompressedRichCurve::Eval((FCompressedRichCurve *)(pFVar14 + lVar13 + 0x38),fVar2,0.0)
    ;
    fVar19 = FCompressedRichCurve::Eval((FCompressedRichCurve *)(pFVar14 + lVar13 + 0x20),fVar2,0.0)
    ;
    local_b0[0]._0_4_ =
         FCompressedRichCurve::Eval((FCompressedRichCurve *)(pFVar14 + lVar13 + 8),fVar2,0.0);
    local_b0[0]._4_4_ = fVar19;
    local_b0[0]._8_4_ = fVar18;
    local_b0[0]._12_4_ = fVar17;
    bVar7 = UCustomizableObjectInstance::ContainsVectorParameter(param_2,(FString *)pFVar15);
    if (bVar7) {
      pFVar16 = local_b0;
LAB_14d369eb1:
      UCustomizableObjectInstance::SetColorParameterSelectedOption
                (param_2,(FString *)pFVar15,(FLinearColor *)&pFVar16->_s_0);
    }
    break;
  case 7:
    bVar7 = UCustomizableObjectInstance::ContainsVectorParameter(param_2,(FString *)pFVar15);
    if (bVar7) {
      uVar10 = *(uint *)(lVar4 + lVar13 * 8);
      uVar8 = 0;
      if ((int)uVar10 < (this->ConstantColors).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar16 = (FLinearColor_u_0 *)
                ((this->ConstantColors).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10);
      goto LAB_14d369eb1;
    }
  }
switchD_14d369834_default:
  uVar11 = (ulonglong)uVar3;
  this_01 = this_01 + 0x30;
  pFVar15 = pFVar15 + 0x30;
  goto LAB_14d369716;
}

