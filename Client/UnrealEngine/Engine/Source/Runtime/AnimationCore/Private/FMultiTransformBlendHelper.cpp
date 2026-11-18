// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 6

// AddParent @ 14237f3c0

void __thiscall
FMultiTransformBlendHelper::AddParent
          (FMultiTransformBlendHelper *this,TTransform<double> *param_1,float param_2)

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
                      (&bGEnsureHasExecuted<_946883634130845473>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0xdf,"Transforms.Num() == ParentWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// AddRotation @ 14237f730

void __thiscall
FMultiTransformBlendHelper::AddRotation
          (FMultiTransformBlendHelper *this,TQuat<double> *param_1,float param_2)

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
                      (&bGEnsureHasExecuted<_946883634130845459>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0xed,"Rotations.Num() == RotationWeights.Num()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// AddScale @ 14237fa70

void __thiscall
FMultiTransformBlendHelper::AddScale
          (FMultiTransformBlendHelper *this,TVector<double> *param_1,float param_2)

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
                      (&bGEnsureHasExecuted<_946883634130845452>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0xf4,"Scales.Num() == ScaleWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// AddTranslation @ 14237fdb0

void __thiscall
FMultiTransformBlendHelper::AddTranslation
          (FMultiTransformBlendHelper *this,TVector<double> *param_1,float param_2)

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
                      (&bGEnsureHasExecuted<_946883634130845466>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Private\\AnimationCoreUtil.h"
                       ,0xe6,"Translations.Num() == TranslationWeights.Num()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// GetBlendedParent @ 1423832e0

bool __thiscall
FMultiTransformBlendHelper::GetBlendedParent
          (FMultiTransformBlendHelper *this,TTransform<double> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar35 [16];
  double dVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar34;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  uint uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  
  if (((this->Transforms).ArrayNum < 1) ||
     (fVar26 = GetTotalWeight(this,&this->ParentWeights), fVar26 <= __real_3727c5ac)) {
    return false;
  }
  fVar48 = __real_3f800000;
  if (__real_3f800000 < fVar26) {
    fVar48 = __real_3f800000 / fVar26;
  }
  iVar1 = (this->Transforms).ArrayNum;
  if ((iVar1 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return (bool)uVar17;
  }
  pFVar2 = (this->Transforms).AllocatorInstance.Data;
  if (((this->ParentWeights).ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar3 = (code *)swi(3);
    uVar17 = (*pcVar3)();
    return (bool)uVar17;
  }
  dVar34 = *(double *)(pFVar2 + 8);
  uVar18 = 1;
  dVar40 = *(double *)(pFVar2 + 0x30);
  dVar10 = *(double *)(pFVar2 + 0x38);
  fVar26 = fVar48 * *(float *)(this->ParentWeights).AllocatorInstance.Data;
  dVar11 = *(double *)(pFVar2 + 0x40);
  dVar33 = *(double *)(pFVar2 + 0x48);
  dVar39 = *(double *)(pFVar2 + 0x50);
  dVar12 = *(double *)(pFVar2 + 0x58);
  dVar8 = (double)fVar26;
  dVar9 = (double)fVar26;
  dVar5 = (double)fVar26;
  dVar6 = (double)fVar26;
  dVar13 = *(double *)(pFVar2 + 0x10);
  dVar14 = *(double *)(pFVar2 + 0x18);
  auVar41._0_8_ = *(double *)(pFVar2 + 0x20) * dVar8;
  auVar41._8_8_ = *(double *)(pFVar2 + 0x28) * dVar9;
  (param_1->Rotation).XY.m128d_f64[0] = *(double *)pFVar2 * dVar8;
  (param_1->Rotation).XY.m128d_f64[1] = dVar34 * dVar9;
  (param_1->Rotation).ZW.m128d_f64[0] = dVar13 * dVar5;
  (param_1->Rotation).ZW.m128d_f64[1] = dVar14 * dVar6;
  *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64 = auVar41;
  auVar31._8_4_ = SUB84(dVar10 * dVar6,0);
  auVar31._0_8_ = dVar40 * dVar5;
  auVar31._12_4_ = (int)((ulonglong)(dVar10 * dVar6) >> 0x20);
  *(undefined1 (*) [16])(param_1->Translation).ZW.m128d_f64 = auVar31;
  auVar7._8_4_ = SUB84(dVar9 * dVar33,0);
  auVar7._0_8_ = dVar8 * dVar11;
  auVar7._12_4_ = (int)((ulonglong)(dVar9 * dVar33) >> 0x20);
  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar7;
  auVar43._8_4_ = SUB84(dVar12 * dVar6,0);
  auVar43._0_8_ = dVar39 * dVar5;
  auVar43._12_4_ = (int)((ulonglong)(dVar12 * dVar6) >> 0x20);
  *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64 = auVar43;
  if (1 < (longlong)iVar1) {
    lVar20 = 1;
    lVar19 = 0x60;
    do {
      uVar46 = 0;
      if ((int)uVar18 < (this->ParentWeights).ArrayNum) {
        uVar46 = ~uVar18 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      fVar26 = fVar48 * *(float *)((this->ParentWeights).AllocatorInstance.Data + lVar20 * 4);
      uVar46 = 0;
      if ((int)uVar18 < (this->Transforms).ArrayNum) {
        uVar46 = ~uVar18 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar3 = (code *)swi(3);
        uVar17 = (*pcVar3)();
        return (bool)uVar17;
      }
      pFVar2 = (this->Transforms).AllocatorInstance.Data;
      dVar34 = (double)fVar26;
      dVar40 = (double)fVar26;
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 1;
      dVar10 = (double)fVar26;
      dVar11 = (double)fVar26;
      dVar8 = *(double *)(pFVar2 + lVar19 + 0x10) * dVar10;
      dVar9 = *(double *)(pFVar2 + lVar19 + 0x10 + 8) * dVar11;
      dVar5 = *(double *)(pFVar2 + lVar19) * dVar34;
      dVar6 = *(double *)(pFVar2 + lVar19 + 8) * dVar40;
      auVar35._8_4_ = SUB84(dVar9,0);
      auVar35._0_8_ = dVar8;
      auVar35._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar5;
      auVar27._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar33 = dVar8 * (param_1->Rotation).ZW.m128d_f64[0] +
               dVar5 * (param_1->Rotation).XY.m128d_f64[0];
      dVar39 = auVar35._8_8_ * (param_1->Rotation).ZW.m128d_f64[1] +
               auVar27._8_8_ * (param_1->Rotation).XY.m128d_f64[1];
      auVar28._8_4_ = SUB84(dVar39,0);
      auVar28._0_8_ = dVar33;
      auVar28._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uVar21 = -(ulonglong)(0.0 <= auVar28._8_8_ + dVar33);
      uVar23 = -(ulonglong)(0.0 <= dVar33 + dVar39);
      uVar46 = (uint)(uVar21 >> 0x20);
      uVar47 = (uint)(uVar23 >> 0x20);
      auVar36._0_8_ = (ulonglong)dVar5 & uVar21;
      auVar36._8_4_ = (undefined4)((ulonglong)dVar6 & uVar23);
      auVar36._12_4_ = (undefined4)(((ulonglong)dVar6 & uVar23) >> 0x20);
      auVar42._0_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar5,0);
      auVar42._4_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar5) >> 0x20);
      auVar42._8_4_ = ~(uint)uVar23 & SUB84(0.0 - dVar6,0);
      auVar42._12_4_ = ~uVar47 & (uint)((ulonglong)(0.0 - dVar6) >> 0x20);
      auVar41._0_8_ = SUB168(auVar42 | auVar36,0) + (param_1->Rotation).XY.m128d_f64[0];
      auVar41._8_8_ = SUB168(auVar42 | auVar36,8) + (param_1->Rotation).XY.m128d_f64[1];
      *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar41;
      auVar37._0_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar8,0);
      auVar37._4_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar23 & SUB84(0.0 - dVar9,0);
      auVar37._12_4_ = ~uVar47 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
      auVar44._0_8_ = uVar21 & (ulonglong)dVar8;
      auVar44._8_4_ = (undefined4)(uVar23 & (ulonglong)dVar9);
      auVar44._12_4_ = (undefined4)((uVar23 & (ulonglong)dVar9) >> 0x20);
      dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
      (param_1->Rotation).ZW.m128d_f64[0] =
           SUB168(auVar37 | auVar44,0) + (param_1->Rotation).ZW.m128d_f64[0];
      (param_1->Rotation).ZW.m128d_f64[1] = SUB168(auVar37 | auVar44,8) + dVar5;
      dVar6 = *(double *)(pFVar2 + lVar19 + 0x20 + 8);
      dVar8 = *(double *)(pFVar2 + lVar19 + 0x30);
      dVar9 = *(double *)(pFVar2 + lVar19 + 0x30 + 8);
      dVar5 = (param_1->Translation).XY.m128d_f64[1];
      (param_1->Translation).XY.m128d_f64[0] =
           *(double *)(pFVar2 + lVar19 + 0x20) * dVar34 + (param_1->Translation).XY.m128d_f64[0];
      (param_1->Translation).XY.m128d_f64[1] = dVar6 * dVar40 + dVar5;
      dVar5 = (param_1->Translation).ZW.m128d_f64[1];
      (param_1->Translation).ZW.m128d_f64[0] =
           dVar8 * dVar10 + (param_1->Translation).ZW.m128d_f64[0];
      (param_1->Translation).ZW.m128d_f64[1] = dVar9 * dVar11 + dVar5;
      lVar15 = lVar19 + 0x40;
      dVar6 = *(double *)(pFVar2 + lVar15 + 8);
      dVar8 = *(double *)(pFVar2 + lVar19 + 0x50);
      dVar9 = *(double *)(pFVar2 + lVar19 + 0x50 + 8);
      lVar19 = lVar19 + 0x60;
      dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
      (param_1->Scale3D).XY.m128d_f64[0] =
           *(double *)(pFVar2 + lVar15) * dVar34 + (param_1->Scale3D).XY.m128d_f64[0];
      (param_1->Scale3D).XY.m128d_f64[1] = dVar6 * dVar40 + dVar5;
      dVar5 = (param_1->Scale3D).ZW.m128d_f64[1];
      (param_1->Scale3D).ZW.m128d_f64[0] = dVar8 * dVar10 + (param_1->Scale3D).ZW.m128d_f64[0];
      (param_1->Scale3D).ZW.m128d_f64[1] = dVar9 * dVar11 + dVar5;
    } while (lVar20 < iVar1);
  }
  dVar5 = (param_1->Rotation).XY.m128d_f64[0];
  dVar6 = (param_1->Rotation).XY.m128d_f64[1];
  dVar8 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar34 = dVar8 * dVar8 + dVar5 * dVar5;
  dVar40 = dVar9 * dVar9 + dVar6 * dVar6;
  auVar29._8_4_ = SUB84(dVar40,0);
  auVar29._0_8_ = dVar34;
  auVar29._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  auVar30._0_8_ = auVar29._8_8_ + dVar34;
  auVar30._8_8_ = dVar34 + dVar40;
  auVar43 = sqrtpd(auVar41,auVar30);
  uVar23 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar30._0_8_);
  uVar24 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar30._8_8_);
  uVar22 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar30._0_8_);
  uVar25 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar30._8_8_);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar43);
  auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43);
  auVar32._0_8_ = uVar22 & (ulonglong)(auVar31._0_8_ * dVar5);
  uVar21 = uVar25 & (ulonglong)(auVar31._8_8_ * dVar6);
  auVar32._8_4_ = (undefined4)uVar21;
  auVar32._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar45._0_8_ = uVar23 & (ulonglong)(auVar43._0_8_ * dVar8);
  uVar21 = uVar24 & (ulonglong)(auVar43._8_8_ * dVar9);
  auVar45._8_4_ = (undefined4)uVar21;
  auVar45._12_4_ = (undefined4)(uVar21 >> 0x20);
  auVar4._4_4_ = ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar4._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar4._8_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar4._12_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  auVar38._0_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar38._4_4_ = ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar38._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar38._12_4_ = ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_
  ;
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar32 | auVar4;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar45 | auVar38;
  return true;
}

// GetTotalWeight @ 1423841e0

float __thiscall
FMultiTransformBlendHelper::GetTotalWeight
          (FMultiTransformBlendHelper *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

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

