// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// FPoseHistoryEntry @ 14a8e0930

FPoseHistoryEntry * __thiscall
UE::PoseSearch::FPoseHistoryEntry::FPoseHistoryEntry
          (FPoseHistoryEntry *this,FPoseHistoryEntry *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->ComponentSpaceRotations).ArrayMax;
  (this->ComponentSpaceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ComponentSpaceRotations).ArrayNum;
  pFVar6 = (param_1->ComponentSpaceRotations).AllocatorInstance.Data;
  (this->ComponentSpaceRotations).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->ComponentSpaceRotations).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar2 = &this->ComponentSpacePositions;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ComponentSpacePositions).ArrayMax;
  iVar5 = (param_1->ComponentSpacePositions).ArrayNum;
  pFVar6 = (param_1->ComponentSpacePositions).AllocatorInstance.Data;
  (this->ComponentSpacePositions).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  pTVar3 = &this->ComponentSpaceScales;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ComponentSpaceScales).ArrayMax;
  iVar5 = (param_1->ComponentSpaceScales).ArrayNum;
  pFVar6 = (param_1->ComponentSpaceScales).AllocatorInstance.Data;
  (this->ComponentSpaceScales).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar4 = &this->CurveValues;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurveValues).ArrayMax;
  iVar5 = (param_1->CurveValues).ArrayNum;
  pFVar6 = (param_1->CurveValues).AllocatorInstance.Data;
  (this->CurveValues).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->AccumulatedSeconds = param_1->AccumulatedSeconds;
  return this;
}

// GetComponentSpaceTransform @ 14a8f98b0

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
UE::PoseSearch::FPoseHistoryEntry::GetComponentSpaceTransform
          (FPoseHistoryEntry *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined4 uVar14;
  __m128d _Var15;
  __m128d _Var16;
  bool bVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  TVector<float> *pTVar20;
  longlong lVar21;
  uint uVar22;
  
  lVar21 = (longlong)param_1;
  if ((param_1 < 0) || (iVar7 = (this->ComponentSpaceRotations).ArrayNum, iVar7 <= param_1)) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    _Var15.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    _Var16 = UE::Math::TTransform<double>::Identity.Translation.XY;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var15.m128d_f64;
    _Var15 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var16.m128d_f64;
    _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var15.m128d_f64;
    _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var16.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var15.m128d_f64;
  }
  else {
    if ((this->ComponentSpacePositions).ArrayNum != iVar7) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentSpacePositions.Num() == ComponentSpaceRotations.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x194,L"");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar9)();
        return pTVar19;
      }
    }
    iVar7 = (this->ComponentSpaceScales).ArrayNum;
    if ((iVar7 != 0) && ((this->ComponentSpaceRotations).ArrayNum != iVar7)) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentSpaceScales.IsEmpty() || ComponentSpaceRotations.Num() == ComponentSpaceScales.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x195,L"");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar9)();
        return pTVar19;
      }
    }
    uVar22 = (uint)~param_1 >> 0x1f;
    uVar18 = 0;
    if (param_1 < (this->ComponentSpaceRotations).ArrayNum) {
      uVar18 = uVar22;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar9)();
        return pTVar19;
      }
    }
    pFVar8 = (this->ComponentSpaceRotations).AllocatorInstance.Data;
    fVar1 = *(float *)(pFVar8 + lVar21 * 0x10);
    fVar2 = *(float *)(pFVar8 + lVar21 * 0x10 + 4);
    uVar6 = *(undefined8 *)(pFVar8 + lVar21 * 0x10 + 8);
    dVar13 = (double)(float)((ulonglong)uVar6 >> 0x20);
    iVar7 = (this->ComponentSpaceScales).ArrayNum;
    if (iVar7 == 0) {
      pTVar20 = &UE::Math::TVector<float>::OneVector;
    }
    else {
      uVar18 = 0;
      if (param_1 < iVar7) {
        uVar18 = uVar22;
      }
      if (uVar18 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar9 = (code *)swi(3);
          pTVar19 = (TTransform<double> *)(*pcVar9)();
          return pTVar19;
        }
      }
      pTVar20 = (TVector<float> *)
                ((this->ComponentSpaceScales).AllocatorInstance.Data + lVar21 * 0xc);
    }
    fVar3 = *(float *)pTVar20;
    fVar4 = *(float *)((longlong)pTVar20 + 4);
    fVar5 = *(float *)((longlong)pTVar20 + 8);
    uVar18 = 0;
    if (param_1 < (this->ComponentSpacePositions).ArrayNum) {
      uVar18 = uVar22;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        pTVar19 = (TTransform<double> *)(*pcVar9)();
        return pTVar19;
      }
    }
    pFVar8 = (this->ComponentSpacePositions).AllocatorInstance.Data;
    auVar11._8_4_ = SUB84((double)fVar2,0);
    auVar11._0_8_ = (double)fVar1;
    auVar11._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar11;
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ = (double)(float)uVar6;
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar12;
    uVar6 = *(undefined8 *)(pFVar8 + lVar21 * 0x18 + 8);
    uVar14 = *(undefined4 *)(pFVar8 + lVar21 * 0x18 + 4);
    dVar13 = *(double *)(pFVar8 + lVar21 * 0x18 + 0x10);
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 =
         *(undefined4 *)(pFVar8 + lVar21 * 0x18);
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar14;
    *(int *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = (int)uVar6;
    *(int *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
         (int)((ulonglong)uVar6 >> 0x20);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar13;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    auVar10._8_4_ = SUB84((double)fVar4,0);
    auVar10._0_8_ = (double)fVar3;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return __return_storage_ptr__;
}

// GetCurveValue @ 14a8f9b90

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UE::PoseSearch::FPoseHistoryEntry::GetCurveValue(FPoseHistoryEntry *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((-1 < param_1) && (param_1 < (this->CurveValues).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->CurveValues).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
    }
    return *(float *)((this->CurveValues).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  if (1 < (byte)LogPoseSearch._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return 0.0;
}

// Num @ 14a9037e0

int __thiscall UE::PoseSearch::FPoseHistoryEntry::Num(FPoseHistoryEntry *this)

{
  return (this->ComponentSpaceRotations).ArrayNum;
}

// SetComponentSpaceTransform @ 14a907d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PoseSearch::FPoseHistoryEntry::SetComponentSpaceTransform
          (FPoseHistoryEntry *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar15 = (param_2->Rotation).XY.m128d_f64[0];
  dVar12 = (param_2->Rotation).XY.m128d_f64[1];
  dVar13 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
  lVar10 = (longlong)param_1;
  dVar15 = dVar13 * dVar13 + dVar15 * dVar15;
  dVar12 = dVar14 * dVar14 + dVar12 * dVar12;
  dVar13 = dVar12 + dVar15;
  dVar15 = dVar15 + dVar12;
  dVar12 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar13;
  dVar14 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar15;
  lVar11 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
            (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar14,0) & _UNK_15061cc88));
  dVar13 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar13;
  dVar15 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar15;
  auVar5._8_4_ = (int)lVar11;
  auVar5._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
                  (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar5._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  uVar8 = movmskpd((int)this,auVar5);
  lVar11 = -(ulonglong)
            ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
            (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar15,0) & _UNK_15061cc88));
  auVar4._8_4_ = (int)lVar11;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                  (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar4._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  iVar7 = movmskpd((int)&stack0x00000000,auVar4);
  if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Transform.IsRotationNormalized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0x186,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar15 = (param_2->Rotation).XY.m128d_f64[0];
  dVar12 = (param_2->Rotation).XY.m128d_f64[1];
  dVar13 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->ComponentSpaceRotations).ArrayNum) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->ComponentSpaceRotations).AllocatorInstance.Data + lVar10 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44((float)dVar12,(float)dVar15);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44((float)dVar14,(float)dVar13);
  dVar15 = (param_2->Translation).ZW.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[0];
  dVar13 = (param_2->Translation).XY.m128d_f64[1];
  uVar8 = 0;
  if (param_1 < (this->ComponentSpacePositions).ArrayNum) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ComponentSpacePositions).AllocatorInstance.Data;
  pFVar1 = pFVar2 + lVar10 * 0x18;
  *(double *)pFVar1 = dVar12;
  *(double *)(pFVar1 + 8) = dVar13;
  *(double *)(pFVar2 + lVar10 * 0x18 + 0x10) = dVar15;
  iVar7 = (this->ComponentSpaceScales).ArrayNum;
  if (iVar7 != 0) {
    dVar15 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar12 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar13 = (param_2->Scale3D).ZW.m128d_f64[0];
    uVar8 = 0;
    if (param_1 < iVar7) {
      uVar8 = uVar9;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->ComponentSpaceScales).AllocatorInstance.Data;
    *(float *)(pFVar1 + lVar10 * 0xc) = (float)dVar15;
    *(float *)(pFVar1 + lVar10 * 0xc + 4) = (float)dVar12;
    *(float *)(pFVar1 + lVar10 * 0xc + 8) = (float)dVar13;
  }
  return;
}

// SetNum @ 14a9082b0

void __thiscall
UE::PoseSearch::FPoseHistoryEntry::SetNum(FPoseHistoryEntry *this,int param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = &(this->ComponentSpaceRotations).ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,param_1 - iVar4,(ForAnyElementType *)this,piVar1,
               &(this->ComponentSpaceRotations).ArrayMax);
  }
  else {
    if (param_1 < 0) goto LAB_14a908598;
    if (param_1 < iVar4) {
      uVar7 = iVar4 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar7 != 0) {
        pFVar5 = (this->ComponentSpaceRotations).AllocatorInstance.Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar7) - param_1;
        if (iVar4 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar7 * 0x10,(longlong)iVar4 << 4);
        }
        *piVar1 = *piVar1 - uVar7;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,(ForAnyElementType *)this,*piVar1,
                   &(this->ComponentSpaceRotations).ArrayMax);
      }
    }
  }
  iVar4 = (this->ComponentSpacePositions).ArrayNum;
  piVar1 = &(this->ComponentSpacePositions).ArrayNum;
  if (iVar4 < param_1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_1 - iVar4,&(this->ComponentSpacePositions).AllocatorInstance,piVar1,
               &(this->ComponentSpacePositions).ArrayMax);
  }
  else {
    if (param_1 < 0) {
LAB_14a908598:
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar7 = iVar4 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar7 != 0) {
        pFVar5 = (this->ComponentSpacePositions).AllocatorInstance.Data + (longlong)param_1 * 0x18;
        iVar4 = (*piVar1 - uVar7) - param_1;
        if (iVar4 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar7 * 0x18,(longlong)iVar4 * 0x18);
        }
        *piVar1 = *piVar1 - uVar7;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(this->ComponentSpacePositions).AllocatorInstance,*piVar1,
                   &(this->ComponentSpacePositions).ArrayMax);
      }
    }
  }
  iVar4 = (this->ComponentSpaceScales).ArrayNum;
  piVar1 = &(this->ComponentSpaceScales).ArrayNum;
  uVar7 = 0;
  if (param_2) {
    uVar7 = param_1;
  }
  if (iVar4 < (int)uVar7) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar7 - iVar4,&(this->ComponentSpaceScales).AllocatorInstance,piVar1,
               &(this->ComponentSpaceScales).ArrayMax);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar4) {
      uVar6 = iVar4 - uVar7;
      if ((int)(uVar6 | uVar7) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar6 != 0) {
        pFVar5 = (this->ComponentSpaceScales).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
        iVar4 = (*piVar1 - uVar6) - uVar7;
        if (iVar4 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar6 * 0xc,(longlong)iVar4 * 0xc);
        }
        *piVar1 = *piVar1 - uVar6;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&(this->ComponentSpaceScales).AllocatorInstance,*piVar1,
                   &(this->ComponentSpaceScales).ArrayMax);
      }
    }
  }
  return;
}

// Update @ 14a9098d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FPoseHistoryEntry::Update
          (FPoseHistoryEntry *this,float param_1,IComponentSpacePoseProvider *param_2,
          TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
          *param_3,bool param_4,FBlendedCurve *param_5,TArrayView<FName_const_,int> *param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  IComponentSpacePoseProvider IVar3;
  longlong lVar4;
  FName FVar5;
  undefined8 uVar6;
  code *pcVar7;
  FIdentityFunctor FVar8;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar9;
  TArrayView<FName_const_,int> *pTVar10;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar11;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *pTVar12;
  bool bVar13;
  longlong lVar14;
  TTransform<double> *pTVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  FIdentityFunctor local_1f8 [8];
  FBlendedCurve *local_1f0;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_1e8;
  uint local_1e0;
  TArrayView<FName_const_,int> *local_1d8;
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  FName local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1b8;
  longlong local_1b0;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  undefined4 local_12c;
  undefined1 local_128 [96];
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_1d8 = param_6;
  IVar3 = *param_2;
  this->AccumulatedSeconds = param_1;
  local_1f0 = param_5;
  local_1e8 = param_3;
  lVar14 = (**(code **)((longlong)IVar3 + 0x10))(param_2);
  if ((lVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Skeleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x15a,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(int *)&param_3->field_0x8 == *(int *)&param_3->field_0x34) {
    iVar18 = *(int *)(lVar14 + 0x70);
    SetNum(this,iVar18,param_4);
    iVar17 = 0;
    if (iVar18 != 0) {
      do {
        pTVar15 = (TTransform<double> *)
                  (**(code **)((longlong)*param_2 + 8))(param_2,local_128,iVar17);
        SetComponentSpaceTransform(this,iVar17,pTVar15);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar18);
    }
  }
  else {
    SetNum(this,*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34,true);
    iVar18 = *(int *)&param_3->field_0x28;
    puVar1 = &param_3->field_0x10;
    iStack_1a0 = 0;
    local_188 = 0;
    uStack_19c = 1;
    iStack_18c = 0;
    if (iVar18 != 0) {
      puVar22 = *(uint **)&param_3->field_0x20;
      if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar23 = *puVar22;
      while (uVar23 == 0) {
        lVar14 = (longlong)iStack_1a0;
        local_188 = local_188 + 0x20;
        iStack_1a0 = iStack_1a0 + 1;
        iStack_18c = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
        goto LAB_14a909a40;
        uVar23 = puVar22[lVar14 + 1];
      }
      uStack_19c = -uVar23 & uVar23;
      uVar2 = (ulonglong)uStack_19c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1c8 = (int)lVar14;
      iStack_18c = local_188 + -1 + local_1c8;
      if (iVar18 < iStack_18c) {
        iStack_18c = iVar18;
      }
    }
LAB_14a909a40:
    uVar23 = *(uint *)&param_3->field_0x28;
    uStack_184 = local_12c;
    iStack_180 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
    uStack_190 = 0xffffffff;
    uVar24 = uVar23 & 0xffffffe0;
    TStack_170._padding_ = CONCAT44(uStack_19c,iStack_1a0);
    TStack_170.CurrentBitIndex = iStack_18c;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar23 >> 5;
    TStack_170._28_4_ = local_12c;
    TStack_170.BaseBitIndex = local_188;
    uStack_150 = CONCAT44(uStack_17c,iStack_180);
    local_1a8 = param_3;
    local_198 = puVar1;
    local_178 = param_3;
    TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar9 = local_1e8;
    uVar20 = *(uint *)&param_3->field_0x28;
    if (uVar23 != uVar20) {
      puVar21 = *(undefined1 **)&param_3->field_0x20;
      if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
      while (uVar23 == 0) {
        lVar14 = (longlong)iVar17;
        uVar24 = uVar24 + 0x20;
        iVar17 = iVar17 + 1;
        uVar23 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14a909b50;
        uVar23 = *(uint *)(puVar21 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1c4 = (int)lVar14;
      uVar23 = local_1c4 + -1 + uVar24;
      if ((int)uVar20 < (int)uVar23) {
        uVar23 = uVar20;
      }
    }
LAB_14a909b50:
    while( true ) {
      pTVar12 = local_178;
      if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
        local_1f8[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
      }
      lVar14 = (longlong)TStack_170.CurrentBitIndex;
      if (((TStack_170.CurrentBitIndex == uVar23) &&
          (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (param_5 = local_1f0, pTVar12 == pTVar9)) break;
      lVar4 = *(longlong *)pTVar12;
      pTVar15 = (TTransform<double> *)
                (**(code **)((longlong)*param_2 + 8))
                          (param_2,local_c8,*(undefined2 *)(lVar4 + lVar14 * 0xc));
      SetComponentSpaceTransform(this,(uint)*(ushort *)(lVar4 + 2 + lVar14 * 0xc),pTVar15);
      TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
    }
  }
  local_1b8 = &this->CurveValues;
  iVar18 = local_1d8->ArrayNum;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(local_1b8,iVar18,Default);
  FVar8 = local_1f8[0];
  uVar23 = 0;
  if (0 < iVar18) {
    local_1e8 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                 *)0x0;
    FVar19 = local_1f8[0];
    local_1b0 = (longlong)iVar18;
    do {
      pTVar10 = local_1d8;
      pTVar9 = local_1e8;
      uVar24 = 0;
      if ((int)uVar23 < local_1d8->ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_208 = (longlong)(int)uVar23;
        local_200 = (longlong)local_1d8->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar5 = pTVar10->DataPtr[(longlong)pTVar9];
      local_1c0 = FVar5;
      if (param_5->field_0x10 == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
                  (*(FCurveElement **)param_5,*(int *)&param_5->field_0x8,FVar8,
                   (FElementSortPredicate)FVar19);
        param_5->field_0x10 = 1;
      }
      local_1e0 = *(uint *)&param_5->field_0x8;
      iVar18 = 0;
      iVar17 = 0;
      local_1d0 = *(longlong *)param_5;
      uVar24 = local_1e0;
      if (0 < (int)local_1e0) {
        do {
          uVar20 = uVar24 >> 1;
          uVar6 = *(undefined8 *)(local_1d0 + (longlong)(int)(uVar20 + iVar18) * 0x10);
          iVar16 = (int)uVar6 - FVar5.ComparisonIndex.Value;
          if (iVar16 == 0) {
            iVar16 = (int)((ulonglong)uVar6 >> 0x20) - local_1c0.Number;
          }
          iVar17 = iVar18;
          if (iVar16 < 0) {
            iVar17 = uVar20 + iVar18 + (uVar24 & 1);
          }
          FVar19 = local_1f8[0];
          uVar24 = uVar20;
          iVar18 = iVar17;
        } while (uVar20 != 0);
      }
      if (iVar17 < (int)local_1e0) {
        lVar14 = (longlong)iVar17 * 0x10;
        uVar6 = *(undefined8 *)(lVar14 + local_1d0);
        iVar18 = FVar5.ComparisonIndex.Value.Value - (int)uVar6;
        if (iVar18 == 0) {
          iVar18 = local_1c0.Number - (int)((ulonglong)uVar6 >> 0x20);
        }
        if ((iVar18 < 0) || (iVar17 == -1)) goto LAB_14a909d95;
        if (iVar17 < 0) {
          local_200 = (longlong)(int)local_1e0;
          local_208 = (longlong)iVar17;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar14 = *(longlong *)local_1f0 + lVar14;
        if (lVar14 == 0) goto LAB_14a909d95;
        uVar25 = *(undefined4 *)(lVar14 + 8);
      }
      else {
LAB_14a909d95:
        uVar25 = 0;
      }
      pTVar11 = local_1b8;
      param_5 = local_1f0;
      uVar24 = 0;
      if ((int)uVar23 < local_1b8->ArrayNum) {
        uVar24 = ~uVar23 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_208 = (longlong)(int)uVar23;
        local_200 = (longlong)local_1b8->ArrayNum;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar23 = uVar23 + 1;
      *(undefined4 *)((pTVar11->AllocatorInstance).Data + (longlong)local_1e8 * 4) = uVar25;
      local_1e8 = (TMap<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                   *)((longlong)local_1e8 + 1);
    } while ((longlong)local_1e8 < local_1b0);
  }
  return;
}

