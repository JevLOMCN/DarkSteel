// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 14741ee50

UScriptStruct * __cdecl FTransformCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTransformCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCurve,(UObject *)pUVar1,
                         L"TransformCurve");
  }
  return Z_Registration_Info_UScriptStruct_FTransformCurve.OuterSingleton;
}

// CopyCurve @ 1474450f0

void __thiscall FTransformCurve::CopyCurve(FTransformCurve *this,FTransformCurve *param_1)

{
  FRichCurve::operator=
            ((this->TranslationCurve).FloatCurves,(param_1->TranslationCurve).FloatCurves);
  FRichCurve::operator=
            ((this->TranslationCurve).FloatCurves + 1,(param_1->TranslationCurve).FloatCurves + 1);
  FRichCurve::operator=
            ((this->TranslationCurve).FloatCurves + 2,(param_1->TranslationCurve).FloatCurves + 2);
  FRichCurve::operator=((this->RotationCurve).FloatCurves,(param_1->RotationCurve).FloatCurves);
  FRichCurve::operator=
            ((this->RotationCurve).FloatCurves + 1,(param_1->RotationCurve).FloatCurves + 1);
  FRichCurve::operator=
            ((this->RotationCurve).FloatCurves + 2,(param_1->RotationCurve).FloatCurves + 2);
  FRichCurve::operator=((this->ScaleCurve).FloatCurves,(param_1->ScaleCurve).FloatCurves);
  FRichCurve::operator=((this->ScaleCurve).FloatCurves + 1,(param_1->ScaleCurve).FloatCurves + 1);
  FRichCurve::operator=((this->ScaleCurve).FloatCurves + 2,(param_1->ScaleCurve).FloatCurves + 2);
  return;
}

// Evaluate @ 147449380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FTransformCurve::Evaluate
          (FTransformCurve *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  __m128 _Var9;
  TQuat<double> *pTVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  TRotator<double> local_98;
  TQuat<double> local_78 [3];
  
  _Var9.m128_f32 = GlobalVectorConstants::Float0001.m128_f32;
  auVar1._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar1._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar1._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar1;
  dVar7 = (double)_Var9.m128_f32[3];
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = (double)_Var9.m128_f32[2];
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar2;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar12,0);
  auVar4._0_8_ = (double)fVar11;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar4;
  _Var9 = GlobalVectorConstants::Float1110;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar5;
  dVar7 = (double)_Var9.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (double)_Var9.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar6;
  fVar11 = FRichCurve::Eval((this->TranslationCurve).FloatCurves,param_1,0.0);
  fVar12 = FRichCurve::Eval((this->TranslationCurve).FloatCurves + 1,param_1,0.0);
  fVar13 = FRichCurve::Eval((this->TranslationCurve).FloatCurves + 2,param_1,0.0);
  local_78[0].Z = (double)(fVar13 * param_2);
  auVar8._8_4_ = SUB84((double)(fVar12 * param_2),0);
  auVar8._0_8_ = (double)(fVar11 * param_2);
  auVar8._12_4_ = (int)((ulonglong)(double)(fVar12 * param_2) >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_78[0].Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  if (((0 < (this->ScaleCurve).FloatCurves[0].Keys.ArrayNum) ||
      (0 < (this->ScaleCurve).FloatCurves[1].Keys.ArrayNum)) ||
     (dVar7 = __real_3ff0000000000000, dVar14 = ___xmm_3ff00000000000003ff0000000000000,
     dVar15 = _UNK_150689688, 0 < (this->ScaleCurve).FloatCurves[2].Keys.ArrayNum)) {
    fVar11 = FRichCurve::Eval((this->ScaleCurve).FloatCurves,param_1,0.0);
    fVar12 = FRichCurve::Eval((this->ScaleCurve).FloatCurves + 1,param_1,0.0);
    fVar13 = FRichCurve::Eval((this->ScaleCurve).FloatCurves + 2,param_1,0.0);
    dVar7 = (double)(fVar13 * param_2);
    dVar14 = (double)(fVar11 * param_2);
    dVar15 = (double)(fVar12 * param_2);
  }
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar14;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar15;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar7;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  local_78[0].Z = dVar7;
  fVar11 = FRichCurve::Eval((this->RotationCurve).FloatCurves,param_1,0.0);
  fVar12 = FRichCurve::Eval((this->RotationCurve).FloatCurves + 1,param_1,0.0);
  fVar13 = FRichCurve::Eval((this->RotationCurve).FloatCurves + 2,param_1,0.0);
  local_98.Yaw = (double)(fVar13 * param_2);
  local_98.Pitch = (double)(fVar12 * param_2);
  local_98.Roll = (double)(fVar11 * param_2);
  pTVar10 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
  dVar7 = pTVar10->Y;
  dVar14 = pTVar10->Z;
  dVar15 = pTVar10->W;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar10->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar14;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar15;
  return __return_storage_ptr__;
}

// GetKeys @ 1474569b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformCurve::GetKeys
          (FTransformCurve *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TTransform<double> *pTVar3;
  code *pcVar4;
  float fVar5;
  FTransformCurve *this_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  FVectorCurve *pFVar11;
  longlong lVar12;
  FVectorCurve *pFVar13;
  FVectorCurve *pFVar14;
  FVectorCurve *pFVar15;
  FRichCurve *this_01;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_118 [32];
  float local_c8 [2];
  FTransformCurve *local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar16 = (this->TranslationCurve).FloatCurves[0].Keys.ArrayNum;
  pFVar15 = (FVectorCurve *)0x0;
  uVar17 = (this->TranslationCurve).FloatCurves[1].Keys.ArrayNum;
  uVar7 = (this->TranslationCurve).FloatCurves[2].Keys.ArrayNum;
  if ((int)uVar16 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar17 < (int)uVar16) {
    uVar17 = uVar16;
  }
  pFVar13 = &this->RotationCurve;
  if ((int)uVar7 < (int)uVar17) {
    uVar7 = uVar17;
  }
  uVar16 = (this->RotationCurve).FloatCurves[0].Keys.ArrayNum;
  uVar17 = (this->RotationCurve).FloatCurves[1].Keys.ArrayNum;
  pFVar11 = &this->TranslationCurve;
  if ((int)uVar7 < 1) {
    uVar7 = 0;
    pFVar11 = pFVar15;
  }
  if ((int)uVar16 < 0) {
    uVar16 = 0;
  }
  if ((int)uVar17 < (int)uVar16) {
    uVar17 = uVar16;
  }
  uVar16 = (this->RotationCurve).FloatCurves[2].Keys.ArrayNum;
  if ((int)uVar16 < (int)uVar17) {
    uVar16 = uVar17;
  }
  uVar17 = (this->ScaleCurve).FloatCurves[1].Keys.ArrayNum;
  if ((int)uVar16 <= (int)uVar7) {
    pFVar13 = pFVar11;
    uVar16 = uVar7;
  }
  uVar7 = (this->ScaleCurve).FloatCurves[0].Keys.ArrayNum;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  if ((int)uVar17 < (int)uVar7) {
    uVar17 = uVar7;
  }
  uVar7 = (this->ScaleCurve).FloatCurves[2].Keys.ArrayNum;
  if ((int)uVar7 < (int)uVar17) {
    uVar7 = uVar17;
  }
  if ((int)uVar16 < (int)uVar7) {
    uVar16 = uVar7;
    pFVar13 = &this->ScaleCurve;
  }
  if (pFVar13 != (FVectorCurve *)0x0) {
    piVar10 = &pFVar13->FloatCurves[0].Keys.ArrayNum;
    pFVar11 = pFVar15;
    pFVar14 = pFVar15;
    do {
      uVar17 = (uint)pFVar14;
      if (*piVar10 == uVar16) break;
      pFVar14 = (FVectorCurve *)(ulonglong)((uint)pFVar14 + 1);
      pFVar11 = (FVectorCurve *)((longlong)&pFVar11->_padding_ + 1);
      piVar10 = piVar10 + 0x20;
      uVar17 = 0;
    } while ((longlong)pFVar11 < 3);
    local_c0 = this;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar10 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar10 != uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar16,&param_1->AllocatorInstance,0,piVar10);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (*piVar1 != uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar16,&param_2->AllocatorInstance,0,piVar1);
    }
    this_01 = pFVar13->FloatCurves + (int)uVar17;
    iVar8 = (**(code **)(this_01->_padding_ + 8))(this_01);
    FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_01,iVar8);
    this_00 = local_c0;
    fVar5 = __real_3f800000;
    while ((iVar8 = (int)pFVar15, -1 < iVar8 && (iVar8 < (int)this_01->_padding_))) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_c8[0] = FRichCurve::GetKeyTime
                              (this_01,(FKeyHandle)
                                       *(uint *)(this_01->_padding_ + (longlong)iVar8 * 4));
      Evaluate(this_00,&local_b8,local_c8[0],fVar5);
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar2 + (longlong)*piVar10 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar10) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar10);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
      pTVar3 = (TTransform<double> *)(param_2->AllocatorInstance).Data;
      if (((pTVar3 <= &local_b8) && (&local_b8 < pTVar3 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1060,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar9 + 1;
      pFVar2 = (param_2->AllocatorInstance).Data;
      lVar12 = (longlong)iVar9 * 0x60;
      *(double *)(pFVar2 + lVar12) = local_b8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 8) = local_b8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar12 + 0x10) = local_b8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 0x10 + 8) = local_b8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + lVar12 + 0x20) = local_b8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 0x20 + 8) = local_b8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar12 + 0x30) = local_b8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 0x30 + 8) = local_b8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + lVar12 + 0x40) = local_b8.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 0x40 + 8) = local_b8.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar2 + lVar12 + 0x50) = local_b8.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar2 + lVar12 + 0x50 + 8) = local_b8.Scale3D.ZW.m128d_f64[1];
      pFVar15 = (FVectorCurve *)(ulonglong)(iVar8 + 1);
    }
  }
  return;
}

// GetVectorCurveByIndex @ 147464e70

FVectorCurve * __thiscall FTransformCurve::GetVectorCurveByIndex(FTransformCurve *this,int param_1)

{
  if (param_1 == 0) {
    return &this->TranslationCurve;
  }
  if (param_1 == 1) {
    return &this->RotationCurve;
  }
  if (param_1 == 2) {
    return &this->ScaleCurve;
  }
  return (FVectorCurve *)0x0;
}

// GetVectorCurveByIndex @ 147464ea0

FVectorCurve * __thiscall FTransformCurve::GetVectorCurveByIndex(FTransformCurve *this,int param_1)

{
  if (param_1 == 0) {
    return &this->TranslationCurve;
  }
  if (param_1 == 1) {
    return &this->RotationCurve;
  }
  if (param_1 == 2) {
    return &this->ScaleCurve;
  }
  return (FVectorCurve *)0x0;
}

// Resize @ 147475850

void __thiscall
FTransformCurve::Resize
          (FTransformCurve *this,float param_1,bool param_2,float param_3,float param_4)

{
  FVectorCurve::Resize(&this->TranslationCurve,param_1,param_2,param_3,param_4);
  FVectorCurve::Resize(&this->RotationCurve,param_1,param_2,param_3,param_4);
  FVectorCurve::Resize(&this->ScaleCurve,param_1,param_2,param_3,param_4);
  return;
}

// UpdateOrAddKey @ 147482940

void __thiscall
FTransformCurve::UpdateOrAddKey(FTransformCurve *this,TTransform<double> *param_1,float param_2)

{
  TRotator<double> local_58;
  TVector<double>_u_0 local_38;
  double dStack_20;
  
  local_38._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_38._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_38._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  FVectorCurve::UpdateOrAddKey(&this->TranslationCurve,(TVector<double> *)&local_38._s_0,param_2);
  local_38._s_0.X = (param_1->Rotation).XY.m128d_f64[0];
  local_38._s_0.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_38._s_0.Z = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_20 = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_38._s_0,&local_58);
  local_38._s_0.X = local_58.Roll;
  local_38._s_0.Y = local_58.Pitch;
  local_38._s_0.Z = local_58.Yaw;
  FVectorCurve::UpdateOrAddKey(&this->RotationCurve,(TVector<double> *)&local_38._s_0,param_2);
  local_38._s_0.X = (param_1->Scale3D).XY.m128d_f64[0];
  local_38._s_0.Y = (param_1->Scale3D).XY.m128d_f64[1];
  local_38._s_0.Z = (param_1->Scale3D).ZW.m128d_f64[0];
  FVectorCurve::UpdateOrAddKey(&this->ScaleCurve,(TVector<double> *)&local_38._s_0,param_2);
  return;
}

