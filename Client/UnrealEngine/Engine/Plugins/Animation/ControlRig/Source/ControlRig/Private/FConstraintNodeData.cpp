// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a2b88e0

UScriptStruct * __cdecl FConstraintNodeData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintNodeData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FConstraintNodeData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintNodeData,(UObject *)pUVar1,
                         L"ConstraintNodeData");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintNodeData.OuterSingleton;
}

// FConstraintNodeData @ 14a2d82e0

/* WARNING: Type propagation algorithm not settling */

FConstraintNodeData * __thiscall
FConstraintNodeData::FConstraintNodeData(FConstraintNodeData *this,FConstraintNodeData *param_1)

{
  int *piVar1;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  longlong lVar5;
  
  dVar4 = (param_1->RelativeParent).Rotation.XY.m128d_f64[1];
  pTVar2 = &this->Constraints;
  (this->RelativeParent).Rotation.XY.m128d_f64[0] =
       (param_1->RelativeParent).Rotation.XY.m128d_f64[0];
  (this->RelativeParent).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->RelativeParent).Rotation.ZW.m128d_f64[1];
  (this->RelativeParent).Rotation.ZW.m128d_f64[0] =
       (param_1->RelativeParent).Rotation.ZW.m128d_f64[0];
  (this->RelativeParent).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->RelativeParent).Translation.XY.m128d_f64[1];
  (this->RelativeParent).Translation.XY.m128d_f64[0] =
       (param_1->RelativeParent).Translation.XY.m128d_f64[0];
  (this->RelativeParent).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->RelativeParent).Translation.ZW.m128d_f64[1];
  (this->RelativeParent).Translation.ZW.m128d_f64[0] =
       (param_1->RelativeParent).Translation.ZW.m128d_f64[0];
  (this->RelativeParent).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->RelativeParent).Scale3D.XY.m128d_f64[1];
  (this->RelativeParent).Scale3D.XY.m128d_f64[0] = (param_1->RelativeParent).Scale3D.XY.m128d_f64[0]
  ;
  (this->RelativeParent).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->RelativeParent).Scale3D.ZW.m128d_f64[1];
  (this->RelativeParent).Scale3D.ZW.m128d_f64[0] = (param_1->RelativeParent).Scale3D.ZW.m128d_f64[0]
  ;
  (this->RelativeParent).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Translation.field0_0x0._s_0.Y;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.X =
       (param_1->ConstraintOffset).Translation.field0_0x0._s_0.X;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.Y = dVar4;
  lVar5 = (param_1->ConstraintOffset)._padding_;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.Z =
       (param_1->ConstraintOffset).Translation.field0_0x0._s_0.Z;
  (this->ConstraintOffset)._padding_ = lVar5;
  dVar4 = (param_1->ConstraintOffset).Rotation.Y;
  (this->ConstraintOffset).Rotation.X = (param_1->ConstraintOffset).Rotation.X;
  (this->ConstraintOffset).Rotation.Y = dVar4;
  dVar4 = (param_1->ConstraintOffset).Rotation.W;
  (this->ConstraintOffset).Rotation.Z = (param_1->ConstraintOffset).Rotation.Z;
  (this->ConstraintOffset).Rotation.W = dVar4;
  dVar4 = (param_1->ConstraintOffset).Scale.field0_0x0._s_0.Y;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.X =
       (param_1->ConstraintOffset).Scale.field0_0x0._s_0.X;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.Y = dVar4;
  lVar5 = (param_1->ConstraintOffset)._padding_;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.Z =
       (param_1->ConstraintOffset).Scale.field0_0x0._s_0.Z;
  (this->ConstraintOffset)._padding_ = lVar5;
  dVar4 = (param_1->ConstraintOffset).Parent.Rotation.XY.m128d_f64[1];
  (this->ConstraintOffset).Parent.Rotation.XY.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Rotation.XY.m128d_f64[0];
  (this->ConstraintOffset).Parent.Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Parent.Rotation.ZW.m128d_f64[1];
  (this->ConstraintOffset).Parent.Rotation.ZW.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Rotation.ZW.m128d_f64[0];
  (this->ConstraintOffset).Parent.Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Parent.Translation.XY.m128d_f64[1];
  (this->ConstraintOffset).Parent.Translation.XY.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Translation.XY.m128d_f64[0];
  (this->ConstraintOffset).Parent.Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Parent.Translation.ZW.m128d_f64[1];
  (this->ConstraintOffset).Parent.Translation.ZW.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Translation.ZW.m128d_f64[0];
  (this->ConstraintOffset).Parent.Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Parent.Scale3D.XY.m128d_f64[1];
  (this->ConstraintOffset).Parent.Scale3D.XY.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Scale3D.XY.m128d_f64[0];
  (this->ConstraintOffset).Parent.Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->ConstraintOffset).Parent.Scale3D.ZW.m128d_f64[1];
  (this->ConstraintOffset).Parent.Scale3D.ZW.m128d_f64[0] =
       (param_1->ConstraintOffset).Parent.Scale3D.ZW.m128d_f64[0];
  (this->ConstraintOffset).Parent.Scale3D.ZW.m128d_f64[1] = dVar4;
  this->LinkedNode = param_1->LinkedNode;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Constraints).ArrayMax;
  iVar3 = (param_1->Constraints).ArrayNum;
  _Src = (param_1->Constraints).AllocatorInstance.Data;
  (this->Constraints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x28);
  }
  return this;
}

// FConstraintNodeData @ 14a2d8450

FConstraintNodeData * __thiscall FConstraintNodeData::FConstraintNodeData(FConstraintNodeData *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RelativeParent).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.Y = (double)uVar9;
  (this->ConstraintOffset).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  (this->ConstraintOffset).Rotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->ConstraintOffset).Rotation.Y = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  (this->ConstraintOffset).Rotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->ConstraintOffset).Rotation.W = dVar10;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.Y = (double)uVar9;
  (this->ConstraintOffset).Scale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *&(this->ConstraintOffset).Parent.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ConstraintOffset).Parent.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ConstraintOffset).Parent.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ConstraintOffset).Parent.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ConstraintOffset).Parent.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ConstraintOffset).Parent.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->LinkedNode).ComparisonIndex = 0;
  (this->LinkedNode).Number = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  return this;
}

// AddConstraint @ 14a2ec6e0

void __thiscall
FConstraintNodeData::AddConstraint(FConstraintNodeData *this,FTransformConstraint *param_1)

{
  int *piVar1;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  FTransformConstraint *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  pTVar2 = &this->Constraints;
  uVar11 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->Constraints).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar12 + 0x18) == param_1->TargetNode) {
        uVar9 = 0;
        if ((int)uVar11 < (this->Constraints).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x28;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          uVar6 = *(undefined8 *)&(param_1->Operator).RotationAxes.bY;
          *(undefined8 *)pFVar4 = *(undefined8 *)&param_1->Operator;
          *(undefined8 *)(pFVar4 + 8) = uVar6;
          FVar7 = param_1->TargetNode;
          *(FName *)(pFVar4 + 0x10) = param_1->SourceNode;
          *(FName *)(pFVar4 + 0x18) = FVar7;
          *(undefined8 *)(pFVar4 + 0x20) = *(undefined8 *)&param_1->Weight;
          return;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x28;
    } while ((int)uVar11 < (this->Constraints).ArrayNum);
  }
  pFVar3 = (FTransformConstraint *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Constraints).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = (this->Constraints).ArrayNum;
  piVar1 = &(this->Constraints).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x428,&pTVar2->AllocatorInstance,piVar1);
    (this->Constraints).ArrayNum = iVar10;
  }
  lVar12 = (longlong)iVar10;
  (this->Constraints).ArrayNum = iVar10 + 1;
  uVar6 = *(undefined8 *)&(param_1->Operator).RotationAxes.bY;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar12 * 0x28) = *(undefined8 *)&param_1->Operator;
  *(undefined8 *)(pFVar4 + lVar12 * 0x28 + 8) = uVar6;
  FVar7 = param_1->TargetNode;
  *(FName *)(pFVar4 + lVar12 * 0x28 + 0x10) = param_1->SourceNode;
  ((FName *)(pFVar4 + lVar12 * 0x28 + 0x10))[1] = FVar7;
  *(undefined8 *)(pFVar4 + lVar12 * 0x28 + 0x20) = *(undefined8 *)&param_1->Weight;
  return;
}

// DeleteConstraint @ 14a2ff0f0

void __thiscall FConstraintNodeData::DeleteConstraint(FConstraintNodeData *this,FName *param_1)

{
  int *piVar1;
  TArray<FTransformConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  uVar6 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar7 = 0;
    pTVar2 = &this->Constraints;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Constraints).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar7 + 0x18) == *param_1) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Constraints).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x28;
        iVar8 = ~uVar6 + (this->Constraints).ArrayNum;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 0x28,(longlong)iVar8 * 0x28);
        }
        piVar1 = &(this->Constraints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,&pTVar2->AllocatorInstance,(this->Constraints).ArrayNum,
                   &(this->Constraints).ArrayMax);
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -0x28;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while ((int)uVar6 < (this->Constraints).ArrayNum);
  }
  return;
}

// FindConstraint @ 14a3051b0

FTransformConstraint * __thiscall
FConstraintNodeData::FindConstraint(FConstraintNodeData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTransformConstraint *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Constraints).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransformConstraint *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->Constraints).AllocatorInstance.Data + lVar6 + 0x18) == *param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->Constraints).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FTransformConstraint *)(*pcVar1)();
          return pFVar4;
        }
        return (FTransformConstraint *)
               ((this->Constraints).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < (this->Constraints).ArrayNum);
  }
  return (FTransformConstraint *)0x0;
}

