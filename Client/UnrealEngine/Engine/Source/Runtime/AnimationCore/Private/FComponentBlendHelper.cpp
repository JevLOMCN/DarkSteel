// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 8

// AddParent @ 14237f1f0

void __thiscall
FComponentBlendHelper::AddParent
          (FComponentBlendHelper *this,TTransform<double> *param_1,float param_2)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  float local_res18 [4];
  
  pTVar2 = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Transforms).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Transforms).ArrayNum;
  piVar1 = &(this->Transforms).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1060,(ForAnyElementType *)this,piVar1);
  }
  (this->Transforms).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar3 = (this->Transforms).AllocatorInstance.Data;
  lVar8 = (longlong)iVar7 * 0x60;
  *(double *)(pFVar3 + lVar8) = (param_1->Rotation).XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 8) = dVar5;
  dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
  *(double *)(pFVar3 + lVar8 + 0x10) = (param_1->Rotation).ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 0x10 + 8) = dVar5;
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  *(double *)(pFVar3 + lVar8 + 0x20) = (param_1->Translation).XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 0x20 + 8) = dVar5;
  dVar5 = (param_1->Translation).ZW.m128d_f64[1];
  *(double *)(pFVar3 + lVar8 + 0x30) = (param_1->Translation).ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 0x30 + 8) = dVar5;
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  *(double *)(pFVar3 + lVar8 + 0x40) = (param_1->Scale3D).XY.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 0x40 + 8) = dVar5;
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
  *(double *)(pFVar3 + lVar8 + 0x50) = (param_1->Scale3D).ZW.m128d_f64[0];
  *(double *)(pFVar3 + lVar8 + 0x50 + 8) = dVar5;
  pFVar3 = (this->ParentWeights).AllocatorInstance.Data;
  if (pFVar3 <= (FScriptContainerElement *)local_res18) {
    if ((FScriptContainerElement *)local_res18 <
        pFVar3 + (longlong)(this->ParentWeights).ArrayMax * 4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar7 = (this->ParentWeights).ArrayNum;
  piVar1 = &(this->ParentWeights).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ParentWeights).AllocatorInstance,piVar1);
  }
  (this->ParentWeights).ArrayNum = iVar7 + 1;
  *(float *)((this->ParentWeights).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res18[0];
  if ((this->Transforms).ArrayNum != (this->ParentWeights).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_946883634130845668>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0x1c,"Transforms.Num() == ParentWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// AddRotation @ 14237f590

void __thiscall
FComponentBlendHelper::AddRotation(FComponentBlendHelper *this,TQuat<double> *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TQuat<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  float local_res18 [4];
  
  pTVar3 = (TQuat<double> *)(this->Rotations).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Rotations).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->Rotations).ArrayNum;
  piVar1 = &(this->Rotations).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,&(this->Rotations).AllocatorInstance,piVar1);
  }
  (this->Rotations).ArrayNum = iVar8 + 1;
  dVar6 = param_1->Y;
  pFVar4 = (this->Rotations).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar8 * 0x20;
  *(double *)pFVar2 = param_1->X;
  *(double *)(pFVar2 + 8) = dVar6;
  dVar6 = param_1->W;
  pFVar4 = pFVar4 + (longlong)iVar8 * 0x20 + 0x10;
  *(double *)pFVar4 = param_1->Z;
  *(double *)(pFVar4 + 8) = dVar6;
  pFVar2 = (this->RotationWeights).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->RotationWeights).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->RotationWeights).ArrayNum;
  piVar1 = &(this->RotationWeights).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->RotationWeights).AllocatorInstance,piVar1);
  }
  (this->RotationWeights).ArrayNum = iVar8 + 1;
  *(float *)((this->RotationWeights).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_res18[0];
  if ((this->Rotations).ArrayNum != (this->RotationWeights).ArrayNum) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_946883634130845654>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0x2a,"Rotations.Num() == RotationWeights.Num()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// AddScale @ 14237f8d0

void __thiscall
FComponentBlendHelper::AddScale(FComponentBlendHelper *this,TVector<double> *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  float local_res18 [4];
  
  pFVar2 = (this->Scales).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Scales).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Scales).ArrayNum;
  piVar1 = &(this->Scales).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Scales).AllocatorInstance,piVar1);
  }
  (this->Scales).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (this->Scales).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar5;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (this->ScaleWeights).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->ScaleWeights).ArrayMax * 4)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->ScaleWeights).ArrayNum;
  piVar1 = &(this->ScaleWeights).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ScaleWeights).AllocatorInstance,piVar1);
  }
  (this->ScaleWeights).ArrayNum = iVar7 + 1;
  *(float *)((this->ScaleWeights).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res18[0];
  if ((this->Scales).ArrayNum != (this->ScaleWeights).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_946883634130845647>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0x31,"Scales.Num() == ScaleWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// AddTranslation @ 14237fc10

void __thiscall
FComponentBlendHelper::AddTranslation
          (FComponentBlendHelper *this,TVector<double> *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  float local_res18 [4];
  
  pFVar2 = (this->Translations).AllocatorInstance.Data;
  local_res18[0] = param_2;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Translations).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Translations).ArrayNum;
  piVar1 = &(this->Translations).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Translations).AllocatorInstance,piVar1);
  }
  (this->Translations).ArrayNum = iVar7 + 1;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  pFVar3 = (this->Translations).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar7 * 0x18;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar5;
  *(double *)(pFVar3 + (longlong)iVar7 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar2 = (this->TranslationWeights).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2 + (longlong)(this->TranslationWeights).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->TranslationWeights).ArrayNum;
  piVar1 = &(this->TranslationWeights).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->TranslationWeights).AllocatorInstance,piVar1);
  }
  (this->TranslationWeights).ArrayNum = iVar7 + 1;
  *(float *)((this->TranslationWeights).AllocatorInstance.Data + (longlong)iVar7 * 4) =
       local_res18[0];
  if ((this->Translations).ArrayNum != (this->TranslationWeights).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_946883634130845661>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0x23,"Translations.Num() == TranslationWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetBlendedParent @ 142382b80

bool __thiscall
FComponentBlendHelper::GetBlendedParent(FComponentBlendHelper *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  ulonglong uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  undefined8 uVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  float fVar35;
  double local_res8;
  double local_res18;
  double local_res20;
  double local_188;
  undefined1 local_158 [16];
  
  if (((this->Transforms).ArrayNum < 1) ||
     (fVar22 = GetTotalWeight(this,&this->ParentWeights), fVar22 <= __real_3727c5ac)) {
    return false;
  }
  fVar35 = __real_3f800000;
  if (__real_3f800000 < fVar22) {
    fVar35 = __real_3f800000 / fVar22;
  }
  lVar18 = (longlong)(this->Transforms).ArrayNum;
  if (((this->ParentWeights).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  fVar22 = *(float *)(this->ParentWeights).AllocatorInstance.Data;
  if (((this->Transforms).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  dVar8 = (double)(fVar35 * fVar22);
  local_res8 = dVar8 * *(double *)(pFVar1 + 0x20);
  local_res20 = dVar8 * *(double *)(pFVar1 + 0x30);
  local_res18 = dVar8 * *(double *)(pFVar1 + 0x28);
  if (((this->Transforms).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  dVar6 = dVar8 * *(double *)pFVar1;
  dVar7 = dVar8 * *(double *)(pFVar1 + 8);
  dVar4 = dVar8 * *(double *)(pFVar1 + 0x10);
  dVar5 = dVar8 * *(double *)(pFVar1 + 0x18);
  if (((this->Transforms).ArrayNum < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  uVar15 = 1;
  auVar26 = *(undefined1 (*) [16])(pFVar1 + 0x50);
  local_188 = *(double *)(pFVar1 + 0x40) * dVar8;
  local_158._0_8_ = auVar26._0_8_ * dVar8;
  dVar8 = *(double *)(pFVar1 + 0x48) * dVar8;
  local_158._8_4_ = auVar26._8_4_;
  local_158._12_4_ = auVar26._12_4_;
  if (1 < lVar18) {
    lVar16 = 0x60;
    lVar19 = 1;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar34 = 0;
      if ((int)uVar15 < (this->ParentWeights).ArrayNum) {
        uVar34 = uVar17;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      fVar22 = fVar35 * *(float *)((this->ParentWeights).AllocatorInstance.Data + lVar19 * 4);
      uVar34 = 0;
      if ((int)uVar15 < (this->Transforms).ArrayNum) {
        uVar34 = uVar17;
      }
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      pFVar2 = (this->Transforms).AllocatorInstance.Data;
      dVar9 = (double)fVar22;
      pFVar1 = pFVar2 + lVar16 + 0x20;
      uVar34 = 0;
      if ((int)uVar15 < (this->Transforms).ArrayNum) {
        uVar34 = uVar17;
      }
      local_res8 = local_res8 + (*(double *)pFVar1 - local_res8) * dVar9;
      local_res18 = local_res18 + (*(double *)(pFVar1 + 8) - local_res18) * dVar9;
      local_res20 = local_res20 + (*(double *)(pFVar2 + lVar16 + 0x30) - local_res20) * dVar9;
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      pFVar2 = (this->Transforms).AllocatorInstance.Data;
      pFVar1 = pFVar2 + lVar16 + 0x40;
      dVar23 = *(double *)(pFVar1 + 8);
      uVar34 = 0;
      if ((int)uVar15 < (this->Transforms).ArrayNum) {
        uVar34 = uVar17;
      }
      local_188 = local_188 + dVar9 * *(double *)pFVar1;
      dVar8 = dVar8 + dVar9 * dVar23;
      local_158._0_8_ = (double)local_158._0_8_ + dVar9 * *(double *)(pFVar2 + lVar16 + 0x50);
      uVar29 = local_158._8_8_;
      if ((uVar34 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      pFVar1 = (this->Transforms).AllocatorInstance.Data;
      auVar26 = *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x10);
      auVar32 = *(undefined1 (*) [16])(pFVar1 + lVar16);
      auVar10._4_8_ = dVar23;
      auVar10._0_4_ = auVar26._4_4_;
      auVar31._0_8_ = auVar10._0_8_ << 0x20;
      auVar31._8_4_ = auVar26._8_4_;
      auVar31._12_4_ = auVar26._12_4_;
      auVar11._4_8_ = uVar29;
      auVar11._0_4_ = auVar32._4_4_;
      auVar24._0_8_ = auVar11._0_8_ << 0x20;
      auVar24._8_4_ = auVar32._8_4_;
      auVar24._12_4_ = auVar32._12_4_;
      dVar23 = __real_bff0000000000000;
      if (__real_0000000000000000 <=
          auVar31._8_8_ * dVar5 + auVar26._0_8_ * dVar4 +
          auVar24._8_8_ * dVar7 + auVar32._0_8_ * dVar6) {
        dVar23 = __real_3ff0000000000000;
      }
      in_XMM2._8_8_ = 0;
      in_XMM2._0_8_ = dVar23;
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 1;
      lVar16 = lVar16 + 0x60;
      dVar23 = (double)(__real_3f800000 - fVar22) * dVar23;
      dVar6 = dVar23 * dVar6 + auVar32._0_8_ * dVar9;
      dVar7 = dVar23 * dVar7 + auVar32._8_8_ * dVar9;
      dVar4 = dVar23 * dVar4 + auVar26._0_8_ * dVar9;
      dVar5 = dVar23 * dVar5 + auVar26._8_8_ * dVar9;
    } while (lVar19 < lVar18);
  }
  auVar25._8_4_ = SUB84(dVar7,0);
  auVar25._0_8_ = dVar6;
  auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar23 = dVar6 * dVar6 + dVar4 * dVar4;
  dVar30 = auVar25._8_8_ * dVar7 + dVar5 * dVar5;
  dVar9 = dVar30 + dVar23;
  dVar23 = dVar23 + dVar30;
  auVar26._8_4_ = SUB84(dVar23,0);
  auVar26._0_8_ = dVar9;
  auVar26._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar32 = sqrtpd(in_XMM2,auVar26);
  uVar20 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar21 = -(ulonglong)(__real_3e45798ee0000000 <= dVar23);
  uVar15 = (uint)(uVar20 >> 0x20);
  uVar34 = (uint)(uVar21 >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
  auVar27._0_8_ = uVar20 & (ulonglong)(auVar26._0_8_ * dVar4);
  uVar12 = uVar21 & (ulonglong)(auVar26._8_8_ * dVar5);
  auVar27._8_4_ = (undefined4)uVar12;
  auVar27._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar33._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar33._4_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar33._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar33._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
  auVar28._0_8_ = (ulonglong)(auVar26._0_8_ * dVar6) & uVar20;
  uVar12 = (ulonglong)(auVar26._8_8_ * dVar7) & uVar21;
  auVar28._8_4_ = (undefined4)uVar12;
  auVar28._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar32._4_4_ =
       ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar32._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar32._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar32._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar28 | auVar32;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar33 | auVar27;
  (param_1->Translation).XY.m128d_f64[0] = local_res8;
  (param_1->Translation).XY.m128d_f64[1] = local_res18;
  (param_1->Translation).ZW.m128d_f64[0] = local_res20;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  (param_1->Scale3D).XY.m128d_f64[0] = local_188;
  (param_1->Scale3D).XY.m128d_f64[1] = dVar8;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)local_158._0_8_;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return true;
}

// GetBlendedRotation @ 1423836f0

bool __thiscall
FComponentBlendHelper::GetBlendedRotation(FComponentBlendHelper *this,TQuat<double> *param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  float fVar29;
  
  if (((this->Rotations).ArrayNum < 1) ||
     (fVar16 = GetTotalWeight(this,&this->RotationWeights), fVar16 <= __real_3727c5ac)) {
    return false;
  }
  fVar29 = __real_3f800000;
  if (__real_3f800000 < fVar16) {
    fVar29 = __real_3f800000 / fVar16;
  }
  if (((this->Rotations).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pFVar3 = (this->Rotations).AllocatorInstance.Data;
  if (((this->RotationWeights).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pdVar1 = &param_1->Z;
  uVar11 = 1;
  dVar17 = (double)(fVar29 * *(float *)(this->RotationWeights).AllocatorInstance.Data);
  dVar25 = *(double *)(pFVar3 + 0x10);
  dVar18 = *(double *)(pFVar3 + 0x18);
  auVar24._8_4_ = SUB84(dVar17 * *(double *)(pFVar3 + 8),0);
  auVar24._0_8_ = dVar17 * *(double *)pFVar3;
  auVar24._12_4_ = (int)((ulonglong)(dVar17 * *(double *)(pFVar3 + 8)) >> 0x20);
  param_1->X = dVar17 * *(double *)pFVar3;
  param_1->Y = (double)auVar24._8_8_;
  param_1->Z = dVar17 * dVar25;
  param_1->W = dVar17 * dVar18;
  if (1 < (this->Rotations).ArrayNum) {
    lVar12 = 1;
    lVar13 = 0x20;
    do {
      uVar28 = 0;
      if ((int)uVar11 < (this->Rotations).ArrayNum) {
        uVar28 = ~uVar11 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      pFVar3 = (this->Rotations).AllocatorInstance.Data;
      uVar28 = 0;
      if ((int)uVar11 < (this->RotationWeights).ArrayNum) {
        uVar28 = ~uVar11 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      dVar25 = param_1->Y;
      dVar18 = param_1->X;
      dVar17 = *pdVar1;
      dVar22 = param_1->W;
      dVar5 = (double)(fVar29 * *(float *)((this->RotationWeights).AllocatorInstance.Data +
                                          lVar12 * 4));
      pFVar2 = pFVar3 + lVar13;
      dVar21 = dVar5 * *(double *)pFVar2;
      dVar7 = dVar5 * *(double *)(pFVar2 + 8);
      pFVar3 = pFVar3 + lVar13 + 0x10;
      dVar6 = dVar5 * *(double *)pFVar3;
      dVar5 = dVar5 * *(double *)(pFVar3 + 8);
      if (0.0 <= dVar18 * dVar21 + dVar25 * dVar7 + dVar22 * dVar5 + dVar17 * dVar6) {
        dVar22 = dVar22 + dVar5;
        dVar17 = dVar17 + dVar6;
        dVar25 = dVar25 + dVar7;
        dVar18 = dVar18 + dVar21;
      }
      else {
        dVar22 = dVar22 - dVar5;
        dVar17 = dVar17 - dVar6;
        dVar25 = dVar25 - dVar7;
        dVar18 = dVar18 - dVar21;
      }
      in_XMM4._8_8_ = 0;
      in_XMM4._0_8_ = dVar17;
      param_1->X = dVar18;
      uVar11 = uVar11 + 1;
      param_1->Y = dVar25;
      lVar12 = lVar12 + 1;
      *pdVar1 = dVar17;
      lVar13 = lVar13 + 0x20;
      param_1->W = dVar22;
    } while ((int)uVar11 < (this->Rotations).ArrayNum);
  }
  dVar17 = *pdVar1;
  dVar22 = param_1->W;
  dVar5 = param_1->X;
  dVar6 = param_1->Y;
  dVar18 = dVar17 * dVar17 + dVar5 * dVar5;
  dVar21 = dVar22 * dVar22 + dVar6 * dVar6;
  dVar25 = dVar21 + dVar18;
  dVar18 = dVar18 + dVar21;
  auVar26._8_4_ = SUB84(dVar18,0);
  auVar26._0_8_ = dVar25;
  auVar26._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar24 = sqrtpd(in_XMM4,auVar26);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar25);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar18);
  uVar11 = (uint)(uVar14 >> 0x20);
  uVar28 = (uint)(uVar15 >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
  auVar27._0_8_ = uVar14 & (ulonglong)(auVar26._0_8_ * dVar5);
  uVar8 = uVar15 & (ulonglong)(auVar26._8_8_ * dVar6);
  auVar27._8_4_ = (undefined4)uVar8;
  auVar27._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar19._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar19._4_4_ =
       ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar19._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar19._12_4_ =
       ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
  auVar23._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar23._4_4_ =
       ~uVar11 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar23._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar23._12_4_ =
       ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar20._0_8_ = (ulonglong)(auVar24._0_8_ * dVar17) & uVar14;
  uVar15 = (ulonglong)(auVar24._8_8_ * dVar22) & uVar15;
  auVar20._8_4_ = (undefined4)uVar15;
  auVar20._12_4_ = (undefined4)(uVar15 >> 0x20);
  param_1->X = (double)SUB168(auVar27 | auVar19,0);
  param_1->Y = (double)SUB168(auVar27 | auVar19,8);
  param_1->Z = (double)SUB168(auVar23 | auVar20,0);
  param_1->W = (double)SUB168(auVar23 | auVar20,8);
  return true;
}

// GetBlendedTranslation @ 142383b10

bool __thiscall
FComponentBlendHelper::GetBlendedTranslation(FComponentBlendHelper *this,TVector<double> *param_1)

{
  longlong lVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  
  if (((this->Translations).ArrayNum < 1) ||
     (fVar12 = GetTotalWeight(this,&this->TranslationWeights), fVar12 <= __real_3727c5ac)) {
    return false;
  }
  fVar15 = __real_3f800000;
  if (__real_3f800000 < fVar12) {
    fVar15 = __real_3f800000 / fVar12;
  }
  if (((this->Translations).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar3 = (this->Translations).AllocatorInstance.Data;
  if (((this->TranslationWeights).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar9 = 1;
  dVar13 = (double)(fVar15 * *(float *)(this->TranslationWeights).AllocatorInstance.Data);
  dVar2 = *(double *)(pFVar3 + 0x10);
  auVar5._8_4_ = SUB84(*(double *)(pFVar3 + 8) * dVar13,0);
  auVar5._0_8_ = *(double *)pFVar3 * dVar13;
  auVar5._12_4_ = (int)((ulonglong)(*(double *)(pFVar3 + 8) * dVar13) >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar5;
  (param_1->field0_0x0)._s_0.Z = dVar13 * dVar2;
  if (1 < (this->Translations).ArrayNum) {
    lVar10 = 1;
    lVar11 = 0x18;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Translations).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar3 = (this->Translations).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar9 < (this->TranslationWeights).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar9 = uVar9 + 1;
      lVar1 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      dVar14 = (double)(fVar15 * *(float *)((this->TranslationWeights).AllocatorInstance.Data +
                                           lVar1));
      lVar1 = lVar11 + 8;
      dVar2 = *(double *)(pFVar3 + lVar11 + 0x10);
      dVar13 = *(double *)(pFVar3 + lVar11);
      lVar11 = lVar11 + 0x18;
      (param_1->field0_0x0)._s_0.Y =
           dVar14 * *(double *)(pFVar3 + lVar1) + (param_1->field0_0x0)._s_0.Y;
      (param_1->field0_0x0)._s_0.Z = dVar14 * dVar2 + (param_1->field0_0x0)._s_0.Z;
      (param_1->field0_0x0)._s_0.X = dVar14 * dVar13 + (param_1->field0_0x0)._s_0.X;
    } while ((int)uVar9 < (this->Translations).ArrayNum);
  }
  return true;
}

// GetTotalWeight @ 142384160

float __thiscall
FComponentBlendHelper::GetTotalWeight
          (FComponentBlendHelper *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  fVar4 = 0.0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    fVar4 = fVar4 + *(float *)pFVar3;
    pFVar3 = pFVar3 + 4;
  }
  return fVar4;
}

