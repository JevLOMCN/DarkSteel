// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 75

// StaticClass @ 1491ee1d0

UClass * __cdecl UNiagaraDataInterfaceSpline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpline",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSpline,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSpline>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpline>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton;
}

// FindClosestUnitDistanceFromPositionWS<TIntegralConstant<bool,1>_> @ 1491fe000

void __thiscall
UNiagaraDataInterfaceSpline::FindClosestUnitDistanceFromPositionWS<TIntegralConstant<bool,1>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float local_b8;
  float local_b4;
  float local_b0 [2];
  TVector<double> local_a8;
  FNDIInputParam<FNiagaraPosition> local_88;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_a8,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_88,param_1);
  iVar5 = 0;
  local_b0[0] = 0.0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_b0);
  lVar7 = (longlong)(int)local_b0[0];
  pfVar2 = pfVar2 + (int)local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8.field0_0x0._s_0.Y);
  if (bVar1) {
    if (0 < param_1->NumInstances) {
      pfVar3 = local_88.Z.InputPtr;
      pfVar4 = local_88.Y.InputPtr;
      pfVar6 = local_88.X.InputPtr;
      do {
        local_b4 = *pfVar4;
        pfVar4 = pfVar4 + local_88.Y.AdvanceOffset;
        local_b8 = *pfVar6;
        local_b0[0] = *pfVar3;
        FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                  ((FNiagaraLWCConverter *)((longlong)local_a8.field0_0x0._s_0.Y + 0x1d0),&local_a8,
                   (FNiagaraPosition *)&local_b8);
        fVar8 = FNDISpline_InstanceData::
                FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,1>_>
                          ((FNDISpline_InstanceData *)local_a8.field0_0x0._s_0.Y,&local_a8);
        iVar5 = iVar5 + 1;
        *pfVar2 = fVar8;
        pfVar2 = pfVar2 + lVar7;
        pfVar3 = pfVar3 + local_88.Z.AdvanceOffset;
        pfVar6 = pfVar6 + local_88.X.AdvanceOffset;
      } while (iVar5 < param_1->NumInstances);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar2 = 0.0;
        iVar5 = iVar5 + 1;
        pfVar2 = pfVar2 + lVar7;
      } while (iVar5 < param_1->NumInstances);
    }
  }
  return;
}

// FindClosestUnitDistanceFromPositionWS<TIntegralConstant<bool,0>_> @ 1491fe1c0

void __thiscall
UNiagaraDataInterfaceSpline::FindClosestUnitDistanceFromPositionWS<TIntegralConstant<bool,0>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  int local_e0 [2];
  float local_d8;
  float local_d4;
  float local_d0;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8;
  FNDIInputParam<FNiagaraPosition> local_b8;
  TVector<double> local_68 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_c8,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_b8,param_1);
  iVar11 = 0;
  local_e0[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar6 = local_e0[0];
  lVar13 = (longlong)local_e0[0];
  pfVar7 = pfVar7 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8.Ptr);
  fVar3 = __real_3f800000;
  if (bVar4) {
    iVar1 = *(int *)&((local_c8.Ptr)->SplineCurves).Position.field_0x8;
    fVar14 = __real_3f800000;
    if (0 < iVar1) {
      uVar10 = iVar1 - 1;
      uVar5 = 0;
      if ((int)uVar10 < iVar1) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar14 = *(float *)((longlong)(int)uVar10 * 0x58 +
                         *(longlong *)&((local_c8.Ptr)->SplineCurves).Position);
    }
    if (0 < param_1->NumInstances) {
      pfVar8 = local_b8.Z.InputPtr;
      pfVar9 = local_b8.Y.InputPtr;
      pfVar12 = local_b8.X.InputPtr;
      do {
        local_d4 = *pfVar9;
        pfVar9 = pfVar9 + local_b8.Y.AdvanceOffset;
        local_d8 = *pfVar12;
        local_d0 = *pfVar8;
        FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                  (&(local_c8.Ptr)->LwcConverter,local_68,(FNiagaraPosition *)&local_d8);
        fVar15 = FNDISpline_InstanceData::
                 FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,0>_>
                           (local_c8.Ptr,local_68);
        iVar11 = iVar11 + 1;
        *pfVar7 = fVar15 * (fVar3 / fVar14);
        pfVar7 = pfVar7 + iVar6;
        pfVar8 = pfVar8 + local_b8.Z.AdvanceOffset;
        pfVar12 = pfVar12 + local_b8.X.AdvanceOffset;
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else {
    iVar6 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar7 = 0.0;
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + lVar13;
      } while (iVar6 < param_1->NumInstances);
      return;
    }
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 149205d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  float *local_res10;
  int local_110 [4];
  int local_100 [4];
  int local_f0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_e8 [2];
  TVector<double> local_c0 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_e8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar6 = param_1->RegReadCount;
  iVar16 = 0;
  bVar5 = param_1->RegInc[iVar6];
  local_110[0] = 0;
  puVar7 = param_1->RegisterData[iVar6];
  param_1->RegReadCount = iVar6 + 1;
  fVar1 = (float)puVar7[(int)((uint)bVar5 * param_1->PerInstanceFnInstanceIdx)];
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar15 = (longlong)local_110[0];
  local_100[0] = 0;
  pfVar12 = pfVar12 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  lVar17 = (longlong)local_100[0];
  local_f0[0] = 0;
  pfVar13 = pfVar13 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  lVar18 = (longlong)local_f0[0];
  local_res10 = local_res10 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_e8[0].Ptr);
  dVar4 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  dVar9 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  if (bVar11) {
    if (0 < param_1->NumInstances) {
      fVar2 = ((local_e8[0].Ptr)->SplineLUT).SplineLength;
      do {
        pTVar14 = FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                            (local_e8[0].Ptr,local_c0,fVar1 * fVar2);
        dVar3 = (pTVar14->field0_0x0)._s_0.X;
        dVar4 = (pTVar14->field0_0x0)._s_0.Y;
        dVar19 = (pTVar14->field0_0x0)._s_0.Z;
        dVar20 = dVar4 * dVar4 + dVar3 * dVar3 + dVar19 * dVar19;
        if (dVar20 == dVar10) {
          uVar21 = (pTVar14->field0_0x0)._s_0.X;
          uVar22 = (pTVar14->field0_0x0)._s_0.Y;
          uVar23 = (pTVar14->field0_0x0)._s_0.Z;
        }
        else {
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (dVar9 <= dVar20) {
            dVar20 = dVar10 / SQRT(dVar20);
            uVar21 = dVar3 * dVar20;
            uVar22 = dVar4 * dVar20;
            uVar23 = dVar19 * dVar20;
          }
        }
        iVar16 = iVar16 + 1;
        dVar3 = (double)uVar22 * ((local_e8[0].Ptr)->Transform).M[1][0] +
                ((local_e8[0].Ptr)->Transform).M[0][0] * (double)uVar21 +
                (double)uVar23 * ((local_e8[0].Ptr)->Transform).M[2][0] +
                ((local_e8[0].Ptr)->Transform).M[3][0] * 0.0;
        dVar4 = (double)uVar22 * ((local_e8[0].Ptr)->Transform).M[1][1] +
                ((local_e8[0].Ptr)->Transform).M[0][1] * (double)uVar21 +
                (double)uVar23 * ((local_e8[0].Ptr)->Transform).M[2][1] +
                ((local_e8[0].Ptr)->Transform).M[3][1] * 0.0;
        dVar20 = ((local_e8[0].Ptr)->Transform).M[1][2] * (double)uVar22 +
                 ((local_e8[0].Ptr)->Transform).M[0][2] * (double)uVar21 +
                 (double)uVar23 * ((local_e8[0].Ptr)->Transform).M[2][2] +
                 ((local_e8[0].Ptr)->Transform).M[3][2] * 0.0;
        dVar19 = dVar10 / SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar20 * dVar20);
        *pfVar12 = (float)(dVar3 * dVar19);
        pfVar12 = pfVar12 + lVar15;
        *pfVar13 = (float)(dVar4 * dVar19);
        pfVar13 = pfVar13 + lVar17;
        *local_res10 = (float)(dVar20 * dVar19);
        local_res10 = local_res10 + lVar18;
      } while (iVar16 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar16 = iVar16 + 1;
      dVar20 = dVar3 * ((local_e8[0].Ptr)->Transform).M[0][0] +
               dVar4 * ((local_e8[0].Ptr)->Transform).M[1][0] +
               ((local_e8[0].Ptr)->Transform).M[2][0] * 0.0 +
               ((local_e8[0].Ptr)->Transform).M[3][0] * 0.0;
      dVar24 = dVar3 * ((local_e8[0].Ptr)->Transform).M[0][1] +
               dVar4 * ((local_e8[0].Ptr)->Transform).M[1][1] +
               ((local_e8[0].Ptr)->Transform).M[2][1] * 0.0 +
               ((local_e8[0].Ptr)->Transform).M[3][1] * 0.0;
      dVar9 = dVar4 * ((local_e8[0].Ptr)->Transform).M[1][2] +
              dVar3 * ((local_e8[0].Ptr)->Transform).M[0][2] +
              ((local_e8[0].Ptr)->Transform).M[2][2] * 0.0 +
              ((local_e8[0].Ptr)->Transform).M[3][2] * 0.0;
      dVar19 = dVar10 / SQRT(dVar24 * dVar24 + dVar20 * dVar20 + dVar9 * dVar9);
      *pfVar12 = (float)(dVar19 * dVar20);
      pfVar12 = pfVar12 + lVar15;
      *pfVar13 = (float)(dVar19 * dVar24);
      pfVar13 = pfVar13 + lVar17;
      *local_res10 = (float)(dVar19 * dVar9);
      local_res10 = local_res10 + lVar18;
    } while (iVar16 < param_1->NumInstances);
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149206220

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  TVector<double> *pTVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  float *local_res10;
  float *local_res18;
  FUserPtrHandler<FNDISpline_InstanceData> local_d8;
  undefined1 local_c8 [24];
  longlong local_b0;
  int local_a8 [28];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_d8,param_1);
  iVar11 = 0;
  local_a8[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  local_c8._8_4_ = 0;
  pfVar7 = pfVar7 + local_a8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_c8)->_s_0).Y);
  uVar5 = local_c8._8_4_;
  lVar13 = (longlong)(int)local_c8._8_4_;
  local_c8._8_4_ = 0;
  pfVar8 = pfVar8 + uVar5 * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister
                          (param_1,(int *)&(((TVector<double>_u_0 *)local_c8)->_s_0).Y);
  uVar5 = local_c8._8_4_;
  lVar14 = (longlong)(int)local_c8._8_4_;
  local_c8._8_4_ = 0;
  local_res10 = local_res10 + uVar5 * param_1->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister
                          (param_1,(int *)&(((TVector<double>_u_0 *)local_c8)->_s_0).Y);
  lVar12 = (longlong)(int)local_c8._8_4_;
  local_res18 = local_res18 + local_c8._8_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_d8.Ptr);
  dVar15 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  dVar3 = __real_3e45798ee0000000;
  dVar4 = __real_3ff0000000000000;
  if (bVar6) {
    fVar1 = ((local_d8.Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar9 = (longlong)local_a8[0];
      local_d8._0_8_ = lVar13 * 4;
      local_c8._0_8_ = lVar14 * 4;
      local_b0 = lVar12 << 2;
      do {
        pTVar10 = FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                            (local_d8.Ptr,
                             (TVector<double> *)&((TVector<double>_u_0 *)local_c8)->_s_0,
                             fVar1 * *pfVar7);
        dVar2 = (pTVar10->field0_0x0)._s_0.X;
        dVar15 = (pTVar10->field0_0x0)._s_0.Y;
        dVar20 = (pTVar10->field0_0x0)._s_0.Z;
        dVar16 = dVar15 * dVar15 + dVar2 * dVar2 + dVar20 * dVar20;
        if (dVar16 == dVar4) {
          local_c8._16_8_ = (pTVar10->field0_0x0)._s_0.Z;
          uVar17 = local_c8._16_8_;
          uVar18 = (pTVar10->field0_0x0)._s_0.X;
          uVar19 = (pTVar10->field0_0x0)._s_0.Y;
        }
        else if (dVar3 <= dVar16) {
          dVar16 = dVar4 / SQRT(dVar16);
          uVar18 = dVar2 * dVar16;
          uVar19 = dVar15 * dVar16;
          uVar17 = dVar20 * dVar16;
        }
        else {
          local_c8._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        pfVar7 = pfVar7 + lVar9;
        iVar11 = iVar11 + 1;
        dVar20 = (double)uVar19 * ((local_d8.Ptr)->Transform).M[1][0] +
                 ((local_d8.Ptr)->Transform).M[0][0] * (double)uVar18 +
                 (double)uVar17 * ((local_d8.Ptr)->Transform).M[2][0] +
                 ((local_d8.Ptr)->Transform).M[3][0] * 0.0;
        dVar16 = (double)uVar19 * ((local_d8.Ptr)->Transform).M[1][1] +
                 ((local_d8.Ptr)->Transform).M[0][1] * (double)uVar18 +
                 (double)uVar17 * ((local_d8.Ptr)->Transform).M[2][1] +
                 ((local_d8.Ptr)->Transform).M[3][1] * 0.0;
        dVar2 = (double)uVar19 * ((local_d8.Ptr)->Transform).M[1][2] +
                (double)uVar18 * ((local_d8.Ptr)->Transform).M[0][2] +
                (double)uVar17 * ((local_d8.Ptr)->Transform).M[2][2] +
                ((local_d8.Ptr)->Transform).M[3][2] * 0.0;
        dVar15 = dVar4 / SQRT(dVar16 * dVar16 + dVar20 * dVar20 + dVar2 * dVar2);
        *pfVar8 = (float)(dVar20 * dVar15);
        pfVar8 = pfVar8 + lVar13;
        *local_res10 = (float)(dVar16 * dVar15);
        local_res10 = local_res10 + lVar14;
        *local_res18 = (float)(dVar2 * dVar15);
        local_res18 = (float *)((longlong)local_res18 + local_b0);
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar11 = iVar11 + 1;
      dVar16 = dVar15 * ((local_d8.Ptr)->Transform).M[1][0] +
               dVar2 * ((local_d8.Ptr)->Transform).M[0][0] +
               ((local_d8.Ptr)->Transform).M[2][0] * 0.0 + ((local_d8.Ptr)->Transform).M[3][0] * 0.0
      ;
      dVar21 = dVar15 * ((local_d8.Ptr)->Transform).M[1][1] +
               dVar2 * ((local_d8.Ptr)->Transform).M[0][1] +
               ((local_d8.Ptr)->Transform).M[2][1] * 0.0 + ((local_d8.Ptr)->Transform).M[3][1] * 0.0
      ;
      dVar3 = dVar15 * ((local_d8.Ptr)->Transform).M[1][2] +
              dVar2 * ((local_d8.Ptr)->Transform).M[0][2] +
              ((local_d8.Ptr)->Transform).M[2][2] * 0.0 + ((local_d8.Ptr)->Transform).M[3][2] * 0.0;
      dVar20 = dVar4 / SQRT(dVar21 * dVar21 + dVar16 * dVar16 + dVar3 * dVar3);
      *pfVar8 = (float)(dVar20 * dVar16);
      pfVar8 = pfVar8 + lVar13;
      *local_res10 = (float)(dVar20 * dVar21);
      local_res10 = local_res10 + lVar14;
      *local_res18 = (float)(dVar20 * dVar3);
      local_res18 = local_res18 + lVar12;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 149206720

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  uint *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  TVector<double> *pTVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  FUserPtrHandler<FNDISpline_InstanceData> local_d8;
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [8];
  TVector<double> local_80 [3];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_d8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = param_1->RegReadCount;
  iVar17 = 0;
  local_c0[0] = 0;
  bVar6 = param_1->RegInc[iVar12];
  puVar7 = param_1->RegisterData[iVar12];
  param_1->RegReadCount = iVar12 + 1;
  fVar1 = (float)puVar7[(int)((uint)bVar6 * param_1->PerInstanceFnInstanceIdx)];
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  lVar20 = (longlong)local_c0[0];
  local_b0[0] = 0;
  pfVar13 = pfVar13 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  lVar18 = (longlong)local_b0[0];
  local_a0[0] = 0;
  pfVar14 = pfVar14 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  lVar19 = (longlong)local_a0[0];
  pfVar15 = pfVar15 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_d8.Ptr);
  dVar10 = __real_3e45798ee0000000;
  dVar9 = __real_3ff0000000000000;
  if (bVar11) {
    if (0 < param_1->NumInstances) {
      fVar2 = ((local_d8.Ptr)->SplineLUT).SplineLength;
      do {
        pTVar16 = FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                            (local_d8.Ptr,local_80,fVar1 * fVar2);
        dVar3 = (pTVar16->field0_0x0)._s_0.X;
        dVar4 = (pTVar16->field0_0x0)._s_0.Y;
        dVar5 = (pTVar16->field0_0x0)._s_0.Z;
        dVar22 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
        if (dVar22 == dVar9) {
          uVar21 = (pTVar16->field0_0x0)._s_0.Y;
          uVar23 = (pTVar16->field0_0x0)._s_0.X;
          uVar24 = (pTVar16->field0_0x0)._s_0.Z;
        }
        else {
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (dVar10 <= dVar22) {
            dVar22 = dVar9 / SQRT(dVar22);
            uVar21 = dVar4 * dVar22;
            uVar23 = dVar3 * dVar22;
            uVar24 = dVar5 * dVar22;
          }
        }
        iVar17 = iVar17 + 1;
        *pfVar13 = (float)(double)uVar23;
        pfVar13 = pfVar13 + lVar20;
        *pfVar14 = (float)(double)uVar21;
        pfVar14 = pfVar14 + lVar18;
        *pfVar15 = (float)(double)uVar24;
        pfVar15 = pfVar15 + lVar19;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else {
    iVar12 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar13 = 0.0;
        iVar12 = iVar12 + 1;
        *pfVar14 = 1.0;
        pfVar13 = pfVar13 + lVar20;
        *pfVar15 = 0.0;
        pfVar14 = pfVar14 + lVar18;
        pfVar15 = pfVar15 + lVar19;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 1492069e0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  TVector<double> *pTVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_c0 [4];
  int local_b0 [2];
  TVector<double> local_a8;
  FUserPtrHandler<FNDISpline_InstanceData> local_90 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_90,param_1);
  iVar15 = 0;
  local_b0[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_a8.field0_0x0._8_4_ = 0;
  pfVar9 = pfVar9 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister
                      (param_1,(int *)((longlong)&local_a8.field0_0x0 + 8));
  uVar7 = local_a8.field0_0x0._8_4_;
  lVar18 = (longlong)(int)local_a8.field0_0x0._8_4_;
  local_a8.field0_0x0._8_4_ = 0;
  pfVar10 = pfVar10 + uVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister
                      (param_1,(int *)((longlong)&local_a8.field0_0x0 + 8));
  lVar16 = (longlong)(int)local_a8.field0_0x0._8_4_;
  local_c0[0] = 0;
  pfVar11 = pfVar11 + local_a8.field0_0x0._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  pfVar12 = pfVar12 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_90[0].Ptr);
  dVar6 = __real_3e45798ee0000000;
  dVar5 = __real_3ff0000000000000;
  if (bVar8) {
    fVar1 = ((local_90[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)(int)local_a8.field0_0x0._8_4_;
      lVar17 = (longlong)local_b0[0];
      lVar13 = (longlong)local_c0[0];
      do {
        pTVar14 = FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                            (local_90[0].Ptr,&local_a8,fVar1 * *pfVar9);
        dVar2 = (pTVar14->field0_0x0)._s_0.X;
        dVar3 = (pTVar14->field0_0x0)._s_0.Y;
        dVar4 = (pTVar14->field0_0x0)._s_0.Z;
        dVar20 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
        if (dVar20 == dVar5) {
          local_a8.field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          uVar19 = (pTVar14->field0_0x0)._s_0.Y;
          uVar22 = (pTVar14->field0_0x0)._s_0.X;
          uVar21 = local_a8.field0_0x0._s_0.Z;
        }
        else if (dVar6 <= dVar20) {
          dVar20 = dVar5 / SQRT(dVar20);
          uVar22 = dVar2 * dVar20;
          uVar19 = dVar3 * dVar20;
          uVar21 = dVar4 * dVar20;
        }
        else {
          local_a8.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        pfVar9 = pfVar9 + lVar17;
        iVar15 = iVar15 + 1;
        *pfVar10 = (float)(double)uVar22;
        pfVar10 = pfVar10 + lVar18;
        *pfVar11 = (float)(double)uVar19;
        pfVar11 = pfVar11 + lVar16;
        *pfVar12 = (float)(double)uVar21;
        pfVar12 = pfVar12 + lVar13;
      } while (iVar15 < param_1->NumInstances);
    }
  }
  else {
    iVar15 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar10 = 0.0;
        iVar15 = iVar15 + 1;
        *pfVar11 = 1.0;
        pfVar10 = pfVar10 + lVar18;
        *pfVar12 = 0.0;
        pfVar11 = pfVar11 + lVar16;
        pfVar12 = pfVar12 + local_c0[0];
      } while (iVar15 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 149206ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float local_res10 [2];
  float *local_res18;
  float *local_res20;
  int local_108 [2];
  longlong local_100;
  int local_f8 [2];
  float *local_f0;
  int local_e0 [2];
  TVector<double>_u_0 local_d8;
  FUserPtrHandler<FNDISpline_InstanceData> local_c0 [8];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_c0,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar11 = 0;
  local_f8[0] = 0;
  bVar2 = param_1->RegInc[iVar3];
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  lVar13 = (longlong)local_f8[0];
  local_108[0] = 0;
  pfVar9 = pfVar9 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_res20 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  lVar14 = (longlong)local_108[0];
  local_e0[0] = 0;
  pfVar10 = pfVar10 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0 = pfVar10;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar12 = (longlong)local_e0[0];
  local_res18 = local_res18 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c0[0].Ptr);
  dVar19 = _UNK_15061cbc8;
  dVar7 = ___xmm_3ff00000000000000000000000000000;
  dVar6 = __real_3ff0000000000000;
  if (bVar8) {
    fVar15 = FSplineCurves::GetSplineLength(&(local_c0[0].Ptr)->SplineCurves);
    dVar7 = __real_3e45798ee0000000;
    dVar6 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      local_100 = lVar12 << 2;
      local_res10[0] = 0.0;
      do {
        fVar16 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&((local_c0[0].Ptr)->SplineCurves).ReparamTable,
                            fVar1 * fVar15,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_c0[0].Ptr)->SplineCurves,
                   (TVector<double> *)&local_d8._s_0,fVar16,&UE::Math::TVector<double>::ZeroVector);
        dVar19 = local_d8._s_0.Y * local_d8._s_0.Y + local_d8._s_0.X * local_d8._s_0.X +
                 local_d8._s_0.Z * local_d8._s_0.Z;
        uVar17 = local_d8._s_0.X;
        uVar18 = local_d8._s_0.Y;
        uVar20 = local_d8._s_0.Z;
        if ((dVar19 != dVar6) &&
           (uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar7 <= dVar19)) {
          dVar19 = dVar6 / SQRT(dVar19);
          uVar17 = dVar19 * local_d8._s_0.X;
          uVar18 = dVar19 * local_d8._s_0.Y;
          uVar20 = dVar19 * local_d8._s_0.Z;
        }
        iVar11 = iVar11 + 1;
        dVar22 = (double)uVar18 * ((local_c0[0].Ptr)->Transform).M[1][0] +
                 (double)uVar17 * ((local_c0[0].Ptr)->Transform).M[0][0] +
                 (double)uVar20 * ((local_c0[0].Ptr)->Transform).M[2][0] +
                 ((local_c0[0].Ptr)->Transform).M[3][0] * 0.0;
        dVar23 = (double)uVar18 * ((local_c0[0].Ptr)->Transform).M[1][1] +
                 (double)uVar17 * ((local_c0[0].Ptr)->Transform).M[0][1] +
                 (double)uVar20 * ((local_c0[0].Ptr)->Transform).M[2][1] +
                 ((local_c0[0].Ptr)->Transform).M[3][1] * 0.0;
        dVar19 = (double)uVar18 * ((local_c0[0].Ptr)->Transform).M[1][2] +
                 (double)uVar17 * ((local_c0[0].Ptr)->Transform).M[0][2] +
                 (double)uVar20 * ((local_c0[0].Ptr)->Transform).M[2][2] +
                 ((local_c0[0].Ptr)->Transform).M[3][2] * 0.0;
        dVar21 = dVar6 / SQRT(dVar23 * dVar23 + dVar22 * dVar22 + dVar19 * dVar19);
        *pfVar9 = (float)(dVar21 * dVar22);
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)(dVar21 * dVar23);
        pfVar10 = pfVar10 + lVar14;
        *local_res18 = (float)(dVar21 * dVar19);
        local_res18 = (float *)((longlong)local_res18 + local_100);
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar11 = iVar11 + 1;
      dVar23 = dVar19 * ((local_c0[0].Ptr)->Transform).M[1][0] +
               dVar7 * ((local_c0[0].Ptr)->Transform).M[0][0] +
               ((local_c0[0].Ptr)->Transform).M[2][0] * 0.0 +
               ((local_c0[0].Ptr)->Transform).M[3][0] * 0.0;
      dVar24 = dVar19 * ((local_c0[0].Ptr)->Transform).M[1][1] +
               dVar7 * ((local_c0[0].Ptr)->Transform).M[0][1] +
               ((local_c0[0].Ptr)->Transform).M[2][1] * 0.0 +
               ((local_c0[0].Ptr)->Transform).M[3][1] * 0.0;
      dVar21 = dVar19 * ((local_c0[0].Ptr)->Transform).M[1][2] +
               dVar7 * ((local_c0[0].Ptr)->Transform).M[0][2] +
               ((local_c0[0].Ptr)->Transform).M[2][2] * 0.0 +
               ((local_c0[0].Ptr)->Transform).M[3][2] * 0.0;
      dVar22 = dVar6 / SQRT(dVar24 * dVar24 + dVar23 * dVar23 + dVar21 * dVar21);
      *pfVar9 = (float)(dVar22 * dVar23);
      pfVar9 = pfVar9 + lVar13;
      *pfVar10 = (float)(dVar22 * dVar24);
      pfVar10 = pfVar10 + lVar14;
      *local_res18 = (float)(dVar22 * dVar21);
      local_res18 = local_res18 + lVar12;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149207210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  float local_res10 [2];
  float *local_res18;
  float *local_res20;
  int local_100 [2];
  longlong local_f8;
  longlong local_f0;
  int local_e8 [2];
  float *local_e0;
  float *local_d8;
  FUserPtrHandler<FNDISpline_InstanceData> local_d0;
  TVector<double>_u_0 local_c0 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_d0,param_1);
  iVar8 = 0;
  local_e8[0] = 0;
  local_e0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  local_100[0] = 0;
  local_e0 = local_e0 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar11 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar6 = pfVar6 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_d8 = pfVar6;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar9 = (longlong)local_100[0];
  local_100[0] = 0;
  local_res18 = local_res18 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  lVar10 = (longlong)local_100[0];
  local_res20 = local_res20 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_d0.Ptr);
  dVar17 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  dVar2 = __real_3ff0000000000000;
  if (bVar5) {
    fVar13 = FSplineCurves::GetSplineLength(&(local_d0.Ptr)->SplineCurves);
    dVar3 = __real_3e45798ee0000000;
    dVar2 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar7 = (longlong)local_e8[0];
      local_f8 = lVar7 * 4;
      local_d0._0_8_ = lVar11 << 2;
      local_f0 = lVar10 << 2;
      local_res10[0] = 0.0;
      pfVar12 = local_e0;
      do {
        fVar14 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&((local_d0.Ptr)->SplineCurves).ReparamTable,
                            fVar13 * *pfVar12,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_d0.Ptr)->SplineCurves,
                   (TVector<double> *)&local_c0[0]._s_0,fVar14,
                   &UE::Math::TVector<double>::ZeroVector);
        dVar17 = (double)local_c0[0]._8_8_ * (double)local_c0[0]._8_8_ +
                 (double)local_c0[0]._0_8_ * (double)local_c0[0]._0_8_ +
                 (double)local_c0[0]._16_8_ * (double)local_c0[0]._16_8_;
        uVar15 = local_c0[0]._s_0.X;
        uVar16 = local_c0[0]._s_0.Y;
        uVar19 = local_c0[0]._s_0.Z;
        if (dVar17 != dVar2) {
          if (dVar3 <= dVar17) {
            dVar17 = dVar2 / SQRT(dVar17);
            uVar15 = dVar17 * (double)local_c0[0]._0_8_;
            uVar19 = dVar17 * (double)local_c0[0]._16_8_;
            uVar16 = dVar17 * (double)local_c0[0]._8_8_;
          }
          else {
            local_c0[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        pfVar12 = pfVar12 + lVar7;
        iVar8 = iVar8 + 1;
        dVar17 = (double)uVar15 * ((local_d0.Ptr)->Transform).M[0][0] +
                 (double)uVar16 * ((local_d0.Ptr)->Transform).M[1][0] +
                 (double)uVar19 * ((local_d0.Ptr)->Transform).M[2][0] +
                 ((local_d0.Ptr)->Transform).M[3][0] * 0.0;
        dVar1 = (double)uVar15 * ((local_d0.Ptr)->Transform).M[0][1] +
                (double)uVar16 * ((local_d0.Ptr)->Transform).M[1][1] +
                (double)uVar19 * ((local_d0.Ptr)->Transform).M[2][1] +
                ((local_d0.Ptr)->Transform).M[3][1] * 0.0;
        dVar20 = ((local_d0.Ptr)->Transform).M[1][2] * (double)uVar16 +
                 ((local_d0.Ptr)->Transform).M[0][2] * (double)uVar15 +
                 (double)uVar19 * ((local_d0.Ptr)->Transform).M[2][2] +
                 ((local_d0.Ptr)->Transform).M[3][2] * 0.0;
        dVar18 = dVar2 / SQRT(dVar1 * dVar1 + dVar17 * dVar17 + dVar20 * dVar20);
        *pfVar6 = (float)(dVar18 * dVar17);
        pfVar6 = (float *)((longlong)pfVar6 + local_d0._0_8_);
        *local_res18 = (float)(dVar18 * dVar1);
        local_res18 = local_res18 + lVar9;
        *local_res20 = (float)(dVar18 * dVar20);
        local_res20 = (float *)((longlong)local_res20 + local_f0);
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar8 = iVar8 + 1;
      dVar1 = dVar3 * ((local_d0.Ptr)->Transform).M[0][0] +
              dVar17 * ((local_d0.Ptr)->Transform).M[1][0] +
              ((local_d0.Ptr)->Transform).M[2][0] * 0.0 + ((local_d0.Ptr)->Transform).M[3][0] * 0.0;
      dVar18 = dVar3 * ((local_d0.Ptr)->Transform).M[0][1] +
               dVar17 * ((local_d0.Ptr)->Transform).M[1][1] +
               ((local_d0.Ptr)->Transform).M[2][1] * 0.0 + ((local_d0.Ptr)->Transform).M[3][1] * 0.0
      ;
      dVar21 = ((local_d0.Ptr)->Transform).M[1][2] * dVar17 +
               ((local_d0.Ptr)->Transform).M[0][2] * dVar3 +
               ((local_d0.Ptr)->Transform).M[2][2] * 0.0 + ((local_d0.Ptr)->Transform).M[3][2] * 0.0
      ;
      dVar20 = dVar2 / SQRT(dVar18 * dVar18 + dVar1 * dVar1 + dVar21 * dVar21);
      *pfVar6 = (float)(dVar20 * dVar1);
      pfVar6 = pfVar6 + lVar11;
      *local_res18 = (float)(dVar20 * dVar18);
      local_res18 = local_res18 + lVar9;
      *local_res20 = (float)(dVar20 * dVar21);
      local_res20 = local_res20 + lVar10;
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 149207750

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float local_res10 [2];
  FInterpCurve<UE::Math::TVector<double>_> *local_res18;
  FInterpCurve<float> *local_res20;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  TVector<double>_u_0 local_c8;
  FUserPtrHandler<FNDISpline_InstanceData> local_a8 [7];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_a8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = param_1->RegReadCount;
  iVar12 = 0;
  local_e0[0] = 0;
  bVar2 = param_1->RegInc[iVar8];
  puVar3 = param_1->RegisterData[iVar8];
  param_1->RegReadCount = iVar8 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar13 = (longlong)local_e0[0];
  local_d0[0] = 0;
  pfVar9 = pfVar9 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar14 = (longlong)local_d0[0];
  local_f0[0] = 0;
  pfVar10 = pfVar10 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  pfVar11 = pfVar11 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8[0].Ptr);
  if (bVar7) {
    local_res18 = (FInterpCurve<UE::Math::TVector<double>_> *)&(local_a8[0].Ptr)->SplineCurves;
    fVar16 = FSplineCurves::GetSplineLength((FSplineCurves *)local_res18);
    dVar6 = __real_3e45798ee0000000;
    dVar5 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      local_res20 = (FInterpCurve<float> *)&((local_a8[0].Ptr)->SplineCurves).ReparamTable;
      lVar15 = (longlong)local_f0[0];
      local_res10[0] = 0.0;
      do {
        fVar17 = FInterpCurve<float>::Eval(local_res20,fVar1 * fVar16,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  (local_res18,(TVector<double> *)&local_c8._s_0,fVar17,
                   &UE::Math::TVector<double>::ZeroVector);
        dVar19 = local_c8._s_0.Y * local_c8._s_0.Y + local_c8._s_0.X * local_c8._s_0.X +
                 local_c8._s_0.Z * local_c8._s_0.Z;
        uVar18 = local_c8._s_0.Y;
        uVar20 = local_c8._s_0.X;
        uVar21 = local_c8._s_0.Z;
        if ((dVar19 != dVar5) &&
           (uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar6 <= dVar19)) {
          dVar19 = dVar5 / SQRT(dVar19);
          uVar18 = local_c8._s_0.Y * dVar19;
          uVar20 = local_c8._s_0.X * dVar19;
          uVar21 = local_c8._s_0.Z * dVar19;
        }
        iVar12 = iVar12 + 1;
        *pfVar9 = (float)(double)uVar20;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)(double)uVar18;
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)(double)uVar21;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar9 = 0.0;
        iVar8 = iVar8 + 1;
        *pfVar10 = 1.0;
        pfVar9 = pfVar9 + lVar13;
        *pfVar11 = 0.0;
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + local_f0[0];
      } while (iVar8 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149207a60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineDirectionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_res10 [2];
  FInterpCurve<UE::Math::TVector<double>_> *local_res18;
  longlong local_res20;
  int local_d0 [2];
  FInterpCurve<float> *local_c8;
  FNDISpline_InstanceData *local_c0;
  int local_b0 [4];
  int local_a0 [2];
  undefined1 local_98 [96];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_c8,param_1);
  iVar8 = 0;
  local_a0[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_98._8_4_ = 0;
  pfVar4 = pfVar4 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  lVar9 = (longlong)(int)local_98._8_4_;
  local_b0[0] = 0;
  pfVar5 = pfVar5 + local_98._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_d0[0] = 0;
  pfVar6 = pfVar6 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  pfVar7 = pfVar7 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c0);
  if (bVar3) {
    local_res18 = (FInterpCurve<UE::Math::TVector<double>_> *)&local_c0->SplineCurves;
    fVar12 = FSplineCurves::GetSplineLength((FSplineCurves *)local_res18);
    dVar2 = __real_3e45798ee0000000;
    dVar1 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      local_c8 = (FInterpCurve<float> *)&(local_c0->SplineCurves).ReparamTable;
      lVar10 = (longlong)local_a0[0];
      lVar11 = (longlong)(int)local_98._8_4_;
      local_res20 = (longlong)local_b0[0] << 2;
      lVar9 = (longlong)local_d0[0];
      local_res10[0] = 0.0;
      do {
        fVar13 = FInterpCurve<float>::Eval(local_c8,fVar12 * *pfVar4,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  (local_res18,(TVector<double> *)&((TVector<double>_u_0 *)local_98)->_s_0,fVar13,
                   &UE::Math::TVector<double>::ZeroVector);
        uVar17 = CONCAT44(local_98._12_4_,local_98._8_4_);
        dVar14 = (double)uVar17 * (double)uVar17 + (double)local_98._0_8_ * (double)local_98._0_8_ +
                 (double)local_98._16_8_ * (double)local_98._16_8_;
        uVar15 = local_98._0_8_;
        uVar16 = local_98._16_8_;
        if (dVar14 != dVar1) {
          if (dVar2 <= dVar14) {
            dVar14 = dVar1 / SQRT(dVar14);
            uVar15 = (double)local_98._0_8_ * dVar14;
            uVar17 = (double)uVar17 * dVar14;
            uVar16 = (double)local_98._16_8_ * dVar14;
          }
          else {
            local_98._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        pfVar4 = pfVar4 + lVar10;
        iVar8 = iVar8 + 1;
        *pfVar5 = (float)(double)uVar15;
        pfVar5 = pfVar5 + lVar11;
        *pfVar6 = (float)(double)uVar17;
        pfVar6 = (float *)((longlong)pfVar6 + local_res20);
        *pfVar7 = (float)(double)uVar16;
        pfVar7 = pfVar7 + lVar9;
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar5 = 0.0;
        iVar8 = iVar8 + 1;
        *pfVar6 = 1.0;
        pfVar5 = pfVar5 + lVar9;
        *pfVar7 = 0.0;
        pfVar6 = pfVar6 + local_b0[0];
        pfVar7 = pfVar7 + local_d0[0];
      } while (iVar8 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 149207d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_88;
  TVector<double>_u_0 local_78 [3];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_88,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = param_1->RegReadCount;
  iVar22 = 0;
  local_a0[0] = 0;
  bVar3 = param_1->RegInc[iVar4];
  puVar5 = param_1->RegisterData[iVar4];
  param_1->RegReadCount = iVar4 + 1;
  fVar1 = (float)puVar5[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  lVar23 = (longlong)local_a0[0];
  local_90[0] = 0;
  pfVar18 = pfVar18 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  lVar24 = (longlong)local_90[0];
  local_b0[0] = 0;
  pfVar19 = pfVar19 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  pfVar20 = pfVar20 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar17 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_88.Ptr);
  dVar8 = _UNK_15061cbc8;
  dVar7 = ___xmm_3ff00000000000000000000000000000;
  dVar15 = __real_3ff0000000000000;
  if (bVar17) {
    if (0 < param_1->NumInstances) {
      lVar21 = (longlong)local_b0[0];
      fVar2 = ((local_88.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,1>_>
                  (local_88.Ptr,(TVector<double> *)&local_78[0]._s_0,fVar1 * fVar2);
        iVar22 = iVar22 + 1;
        dVar7 = ((local_88.Ptr)->Transform).M[0][1];
        dVar8 = ((local_88.Ptr)->Transform).M[2][1];
        dVar9 = ((local_88.Ptr)->Transform).M[1][1];
        dVar10 = ((local_88.Ptr)->Transform).M[3][1];
        dVar11 = ((local_88.Ptr)->Transform).M[0][2];
        dVar12 = ((local_88.Ptr)->Transform).M[1][2];
        dVar13 = ((local_88.Ptr)->Transform).M[2][2];
        dVar14 = ((local_88.Ptr)->Transform).M[3][2];
        *pfVar18 = (float)(((local_88.Ptr)->Transform).M[0][0] * (double)local_78[0]._0_8_ +
                           ((local_88.Ptr)->Transform).M[1][0] * (double)local_78[0]._8_8_ +
                           ((local_88.Ptr)->Transform).M[2][0] * (double)local_78[0]._16_8_ +
                          ((local_88.Ptr)->Transform).M[3][0] * dVar15);
        pfVar18 = pfVar18 + lVar23;
        *pfVar19 = (float)(dVar7 * (double)local_78[0]._0_8_ + dVar9 * (double)local_78[0]._8_8_ +
                           dVar8 * (double)local_78[0]._16_8_ + dVar10 * dVar15);
        pfVar19 = pfVar19 + lVar24;
        *pfVar20 = (float)((double)local_78[0]._8_8_ * dVar12 + (double)local_78[0]._0_8_ * dVar11 +
                           (double)local_78[0]._16_8_ * dVar13 + dVar14 * dVar15);
        pfVar20 = pfVar20 + lVar21;
      } while (iVar22 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      dVar15 = ((local_88.Ptr)->Transform).M[0][1];
      iVar22 = iVar22 + 1;
      dVar9 = ((local_88.Ptr)->Transform).M[1][1];
      dVar10 = ((local_88.Ptr)->Transform).M[1][2];
      dVar11 = ((local_88.Ptr)->Transform).M[2][1];
      dVar12 = ((local_88.Ptr)->Transform).M[3][1];
      dVar13 = ((local_88.Ptr)->Transform).M[0][2];
      dVar14 = ((local_88.Ptr)->Transform).M[2][2];
      dVar16 = ((local_88.Ptr)->Transform).M[3][2];
      *pfVar18 = (float)(((local_88.Ptr)->Transform).M[0][0] * 0.0 +
                         ((local_88.Ptr)->Transform).M[1][0] * 0.0 +
                         dVar7 * ((local_88.Ptr)->Transform).M[2][0] +
                        dVar8 * ((local_88.Ptr)->Transform).M[3][0]);
      pfVar18 = pfVar18 + lVar23;
      *pfVar19 = (float)(dVar15 * 0.0 + dVar9 * 0.0 + dVar7 * dVar11 + dVar8 * dVar12);
      pfVar19 = pfVar19 + lVar24;
      *pfVar20 = (float)(dVar10 * 0.0 + dVar13 * 0.0 + dVar14 * dVar7 + dVar8 * dVar16);
      pfVar20 = pfVar20 + local_b0[0];
    } while (iVar22 < param_1->NumInstances);
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149208100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  undefined8 this_00;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int local_a0 [2];
  longlong local_98;
  int local_90 [2];
  TVector<double>_u_0 local_88 [3];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_88[0]._s_0,param_1);
  iVar19 = 0;
  local_a0[0] = 0;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_90[0] = 0;
  pfVar14 = pfVar14 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar12 = local_90[0];
  lVar20 = (longlong)local_90[0];
  local_90[0] = 0;
  pfVar15 = pfVar15 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  pfVar16 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar12 = local_90[0];
  lVar21 = (longlong)local_90[0];
  local_90[0] = 0;
  pfVar16 = pfVar16 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  this_00 = local_88[0]._s_0.Y;
  pfVar17 = pfVar17 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_88[0]._8_8_);
  dVar3 = _UNK_15061cbc8;
  dVar2 = ___xmm_3ff00000000000000000000000000000;
  dVar10 = __real_3ff0000000000000;
  if (bVar13) {
    fVar1 = *(float *)(this_00 + 0x298);
    if (0 < param_1->NumInstances) {
      lVar18 = (longlong)local_a0[0];
      local_98 = (longlong)local_90[0] << 2;
      do {
        FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,1>_>
                  ((FNDISpline_InstanceData *)this_00,(TVector<double> *)&local_88[0]._s_0,
                   fVar1 * *pfVar14);
        iVar19 = iVar19 + 1;
        dVar2 = *(double *)(this_00 + 0x78);
        pfVar14 = pfVar14 + lVar18;
        dVar3 = *(double *)(this_00 + 0xb8);
        dVar4 = *(double *)(this_00 + 0x98);
        dVar5 = *(double *)(this_00 + 0xd8);
        dVar6 = *(double *)(this_00 + 0xa0);
        dVar7 = *(double *)(this_00 + 0x80);
        dVar8 = *(double *)(this_00 + 0xc0);
        dVar9 = *(double *)(this_00 + 0xe0);
        *pfVar15 = (float)(((TMatrix<double> *)(this_00 + 0x70))->M[0][0] *
                           (double)local_88[0]._0_8_ +
                           (*(double (*) [4])(this_00 + 0x90))[0] * (double)local_88[0]._8_8_ +
                           (*(double (*) [4])(this_00 + 0xb0))[0] * (double)local_88[0]._16_8_ +
                          dVar10 * (*(double (*) [4])(this_00 + 0xd0))[0]);
        pfVar15 = pfVar15 + lVar20;
        *pfVar16 = (float)(dVar2 * (double)local_88[0]._0_8_ + dVar4 * (double)local_88[0]._8_8_ +
                           dVar3 * (double)local_88[0]._16_8_ + dVar10 * dVar5);
        pfVar16 = pfVar16 + lVar21;
        *pfVar17 = (float)((double)local_88[0]._8_8_ * dVar6 + (double)local_88[0]._0_8_ * dVar7 +
                           dVar8 * (double)local_88[0]._16_8_ + dVar9 * dVar10);
        pfVar17 = (float *)((longlong)pfVar17 + local_98);
      } while (iVar19 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      dVar10 = *(double *)(this_00 + 0x78);
      iVar19 = iVar19 + 1;
      dVar4 = *(double *)(this_00 + 0x98);
      dVar5 = *(double *)(this_00 + 0xb8);
      dVar6 = *(double *)(this_00 + 0xd8);
      dVar7 = *(double *)(this_00 + 0xa0);
      dVar8 = *(double *)(this_00 + 0x80);
      dVar9 = *(double *)(this_00 + 0xc0);
      dVar11 = *(double *)(this_00 + 0xe0);
      *pfVar15 = (float)(((TMatrix<double> *)(this_00 + 0x70))->M[0][0] * 0.0 +
                         (*(double (*) [4])(this_00 + 0x90))[0] * 0.0 +
                         (*(double (*) [4])(this_00 + 0xb0))[0] * dVar2 +
                        dVar3 * (*(double (*) [4])(this_00 + 0xd0))[0]);
      pfVar15 = pfVar15 + lVar20;
      *pfVar16 = (float)(dVar10 * 0.0 + dVar4 * 0.0 + dVar5 * dVar2 + dVar3 * dVar6);
      pfVar16 = pfVar16 + lVar21;
      *pfVar17 = (float)(dVar7 * 0.0 + dVar8 * 0.0 + dVar9 * dVar2 + dVar11 * dVar3);
      pfVar17 = pfVar17 + local_90[0];
    } while (iVar19 < param_1->NumInstances);
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 1492084a0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  FUserPtrHandler<FNDISpline_InstanceData> local_98;
  int local_80 [4];
  int local_70 [4];
  int local_60 [2];
  TVector<double>_u_0 local_58 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_98,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_1->RegReadCount;
  iVar11 = 0;
  local_80[0] = 0;
  bVar3 = param_1->RegInc[iVar7];
  puVar4 = param_1->RegisterData[iVar7];
  param_1->RegReadCount = iVar7 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar12 = (longlong)local_80[0];
  local_70[0] = 0;
  pfVar8 = pfVar8 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar13 = (longlong)local_70[0];
  local_60[0] = 0;
  pfVar9 = pfVar9 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar14 = (longlong)local_60[0];
  pfVar10 = pfVar10 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_98.Ptr);
  if (bVar6) {
    if (0 < param_1->NumInstances) {
      fVar2 = ((local_98.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,1>_>
                  (local_98.Ptr,(TVector<double> *)&local_58[0]._s_0,fVar1 * fVar2);
        iVar11 = iVar11 + 1;
        *pfVar8 = (float)(double)local_58[0]._0_8_;
        pfVar8 = pfVar8 + lVar12;
        *pfVar9 = (float)(double)local_58[0]._8_8_;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)(double)local_58[0]._16_8_;
        pfVar10 = pfVar10 + lVar14;
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar8 = 0.0;
        iVar7 = iVar7 + 1;
        *pfVar9 = 0.0;
        pfVar8 = pfVar8 + lVar12;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        pfVar10 = pfVar10 + lVar14;
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149208690

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int local_90 [4];
  int local_80 [2];
  undefined1 local_78 [24];
  FUserPtrHandler<FNDISpline_InstanceData> local_60 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_60,param_1);
  iVar9 = 0;
  local_80[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_78._8_4_ = 0;
  pfVar4 = pfVar4 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  uVar2 = local_78._8_4_;
  lVar12 = (longlong)(int)local_78._8_4_;
  local_78._8_4_ = 0;
  pfVar5 = pfVar5 + uVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  lVar10 = (longlong)(int)local_78._8_4_;
  local_90[0] = 0;
  pfVar6 = pfVar6 + local_78._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pfVar7 = pfVar7 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_60[0].Ptr);
  if (bVar3) {
    fVar1 = ((local_60[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)(int)local_78._8_4_;
      lVar11 = (longlong)local_80[0];
      lVar8 = (longlong)local_90[0];
      do {
        FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,1>_>
                  (local_60[0].Ptr,(TVector<double> *)&((TVector<double>_u_0 *)local_78)->_s_0,
                   fVar1 * *pfVar4);
        pfVar4 = pfVar4 + lVar11;
        iVar9 = iVar9 + 1;
        *pfVar5 = (float)(double)local_78._0_8_;
        pfVar5 = pfVar5 + lVar12;
        *pfVar6 = (float)(double)CONCAT44(local_78._12_4_,local_78._8_4_);
        pfVar6 = pfVar6 + lVar10;
        *pfVar7 = (float)(double)local_78._16_8_;
        pfVar7 = pfVar7 + lVar8;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else {
    iVar9 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar5 = 0.0;
        iVar9 = iVar9 + 1;
        *pfVar6 = 0.0;
        pfVar5 = pfVar5 + lVar12;
        *pfVar7 = 0.0;
        pfVar6 = pfVar6 + lVar10;
        pfVar7 = pfVar7 + local_90[0];
      } while (iVar9 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 149208860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float local_res10 [2];
  longlong local_res18;
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_98;
  TVector<double>_u_0 local_88 [3];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_98,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar20 = 0;
  local_b0[0] = 0;
  bVar2 = param_1->RegInc[iVar3];
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  lVar21 = (longlong)local_b0[0];
  local_a0[0] = 0;
  pfVar17 = pfVar17 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  lVar22 = (longlong)local_a0[0];
  local_c0[0] = 0;
  pfVar18 = pfVar18 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  pfVar19 = pfVar19 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_98.Ptr);
  dVar6 = _UNK_15061cbc8;
  dVar15 = ___xmm_3ff00000000000000000000000000000;
  if (bVar16) {
    fVar23 = FSplineCurves::GetSplineLength(&(local_98.Ptr)->SplineCurves);
    dVar15 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      local_res18 = (longlong)local_c0[0] << 2;
      local_res10[0] = 0.0;
      do {
        fVar24 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&((local_98.Ptr)->SplineCurves).ReparamTable,
                            fVar1 * fVar23,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::Eval
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_98.Ptr)->SplineCurves,
                   (TVector<double> *)&local_88[0]._s_0,fVar24,
                   &UE::Math::TVector<double>::ZeroVector);
        iVar20 = iVar20 + 1;
        dVar6 = ((local_98.Ptr)->Transform).M[1][1];
        dVar7 = ((local_98.Ptr)->Transform).M[0][1];
        dVar8 = ((local_98.Ptr)->Transform).M[2][1];
        dVar9 = ((local_98.Ptr)->Transform).M[3][1];
        dVar10 = ((local_98.Ptr)->Transform).M[1][2];
        dVar11 = ((local_98.Ptr)->Transform).M[2][2];
        dVar12 = ((local_98.Ptr)->Transform).M[3][2];
        dVar13 = ((local_98.Ptr)->Transform).M[0][2];
        *pfVar17 = (float)((double)local_88[0]._0_8_ * ((local_98.Ptr)->Transform).M[0][0] +
                           ((local_98.Ptr)->Transform).M[1][0] * (double)local_88[0]._8_8_ +
                           ((local_98.Ptr)->Transform).M[2][0] * (double)local_88[0]._16_8_ +
                          ((local_98.Ptr)->Transform).M[3][0] * dVar15);
        pfVar17 = pfVar17 + lVar21;
        *pfVar18 = (float)((double)local_88[0]._0_8_ * dVar7 + dVar6 * (double)local_88[0]._8_8_ +
                           dVar8 * (double)local_88[0]._16_8_ + dVar9 * dVar15);
        pfVar18 = pfVar18 + lVar22;
        *pfVar19 = (float)((double)local_88[0]._8_8_ * dVar10 + (double)local_88[0]._0_8_ * dVar13 +
                           (double)local_88[0]._16_8_ * dVar11 + dVar12 * dVar15);
        pfVar19 = (float *)((longlong)pfVar19 + local_res18);
      } while (iVar20 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      dVar7 = ((local_98.Ptr)->Transform).M[0][1];
      iVar20 = iVar20 + 1;
      dVar8 = ((local_98.Ptr)->Transform).M[1][1];
      dVar9 = ((local_98.Ptr)->Transform).M[1][2];
      dVar10 = ((local_98.Ptr)->Transform).M[2][1];
      dVar11 = ((local_98.Ptr)->Transform).M[3][1];
      dVar12 = ((local_98.Ptr)->Transform).M[0][2];
      dVar13 = ((local_98.Ptr)->Transform).M[2][2];
      dVar14 = ((local_98.Ptr)->Transform).M[3][2];
      *pfVar17 = (float)(((local_98.Ptr)->Transform).M[0][0] * 0.0 +
                         ((local_98.Ptr)->Transform).M[1][0] * 0.0 +
                         dVar15 * ((local_98.Ptr)->Transform).M[2][0] +
                        dVar6 * ((local_98.Ptr)->Transform).M[3][0]);
      pfVar17 = pfVar17 + lVar21;
      *pfVar18 = (float)(dVar7 * 0.0 + dVar8 * 0.0 + dVar15 * dVar10 + dVar6 * dVar11);
      pfVar18 = pfVar18 + lVar22;
      *pfVar19 = (float)(dVar9 * 0.0 + dVar12 * 0.0 + dVar13 * dVar15 + dVar6 * dVar14);
      pfVar19 = pfVar19 + local_c0[0];
    } while (iVar20 < param_1->NumInstances);
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149208c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr FVar5;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float local_res10 [2];
  float *local_res18;
  longlong local_res20;
  TVector<double>_u_0 local_a8;
  longlong local_90;
  int local_88 [2];
  longlong local_80;
  int local_78 [16];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_a8._s_0,param_1);
  iVar18 = 0;
  local_88[0] = 0;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_78[0] = 0;
  local_res18 = local_res18 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  iVar12 = local_78[0];
  lVar19 = (longlong)local_78[0];
  local_78[0] = 0;
  pfVar14 = pfVar14 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  iVar12 = local_78[0];
  lVar20 = (longlong)local_78[0];
  local_78[0] = 0;
  pfVar15 = pfVar15 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  pfVar16 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  uVar11 = local_a8._s_0.Y;
  pfVar16 = pfVar16 + local_78[0] * param_1->PerInstanceFnInstanceIdx;
  bVar13 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8._s_0.Y);
  dVar10 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  if (bVar13) {
    fVar21 = FSplineCurves::GetSplineLength((FSplineCurves *)(uVar11 + 0x200));
    dVar9 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar17 = (longlong)local_88[0];
      local_res20 = lVar17 * 4;
      local_a8._s_0.X = (double)(lVar19 * 4);
      local_90 = lVar20 << 2;
      local_80 = (longlong)local_78[0] << 2;
      local_res10[0] = 0.0;
      do {
        fVar22 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)(uVar11 + 0x248),fVar21 * *local_res18,
                            local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::Eval
                  ((FInterpCurve<UE::Math::TVector<double>_> *)(uVar11 + 0x200),
                   (TVector<double> *)&local_a8._s_0,fVar22,&UE::Math::TVector<double>::ZeroVector);
        local_res18 = local_res18 + lVar17;
        FVar1 = *(FWeakObjectPtr *)(uVar11 + 0x98);
        iVar18 = iVar18 + 1;
        FVar2 = *(FWeakObjectPtr *)(uVar11 + 0x78);
        FVar3 = *(FWeakObjectPtr *)(uVar11 + 0xb8);
        FVar4 = *(FWeakObjectPtr *)(uVar11 + 0xd8);
        FVar5 = *(FWeakObjectPtr *)(uVar11 + 0xa0);
        FVar6 = *(FWeakObjectPtr *)(uVar11 + 0x80);
        FVar7 = *(FWeakObjectPtr *)(uVar11 + 0xc0);
        FVar8 = *(FWeakObjectPtr *)(uVar11 + 0xe0);
        *pfVar14 = (float)(local_a8._s_0.X * (double)*(FWeakObjectPtr *)(uVar11 + 0x70) +
                           (double)*(FWeakObjectPtr *)(uVar11 + 0x90) * local_a8._s_0.Y +
                           (double)*(FWeakObjectPtr *)(uVar11 + 0xb0) * local_a8._s_0.Z +
                          dVar9 * (double)*(FWeakObjectPtr *)(uVar11 + 0xd0));
        pfVar14 = pfVar14 + lVar19;
        *pfVar15 = (float)(local_a8._s_0.X * (double)FVar2 + (double)FVar1 * local_a8._s_0.Y +
                           (double)FVar3 * local_a8._s_0.Z + dVar9 * (double)FVar4);
        pfVar15 = (float *)((longlong)pfVar15 + local_90);
        *pfVar16 = (float)(local_a8._s_0.Y * (double)FVar5 + local_a8._s_0.X * (double)FVar6 +
                           (double)FVar7 * local_a8._s_0.Z + (double)FVar8 * dVar9);
        pfVar16 = (float *)((longlong)pfVar16 + local_80);
      } while (iVar18 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      FVar1 = *(FWeakObjectPtr *)(uVar11 + 0x78);
      iVar18 = iVar18 + 1;
      FVar2 = *(FWeakObjectPtr *)(uVar11 + 0x98);
      FVar3 = *(FWeakObjectPtr *)(uVar11 + 0xb8);
      FVar4 = *(FWeakObjectPtr *)(uVar11 + 0xd8);
      FVar5 = *(FWeakObjectPtr *)(uVar11 + 0xa0);
      FVar6 = *(FWeakObjectPtr *)(uVar11 + 0x80);
      FVar7 = *(FWeakObjectPtr *)(uVar11 + 0xc0);
      FVar8 = *(FWeakObjectPtr *)(uVar11 + 0xe0);
      *pfVar14 = (float)((double)*(FWeakObjectPtr *)(uVar11 + 0x70) * 0.0 +
                         (double)*(FWeakObjectPtr *)(uVar11 + 0x90) * 0.0 +
                         (double)*(FWeakObjectPtr *)(uVar11 + 0xb0) * dVar9 +
                        dVar10 * (double)*(FWeakObjectPtr *)(uVar11 + 0xd0));
      pfVar14 = pfVar14 + lVar19;
      *pfVar15 = (float)((double)FVar1 * 0.0 + (double)FVar2 * 0.0 + (double)FVar3 * dVar9 +
                        dVar10 * (double)FVar4);
      pfVar15 = pfVar15 + lVar20;
      *pfVar16 = (float)((double)FVar5 * 0.0 + (double)FVar6 * 0.0 + (double)FVar7 * dVar9 +
                        (double)FVar8 * dVar10);
      pfVar16 = pfVar16 + local_78[0];
    } while (iVar18 < param_1->NumInstances);
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 149209000

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  FNDISpline_InstanceData *pFVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float local_res10 [2];
  FInterpCurve<float> *local_res18;
  int local_a0 [4];
  int local_90 [4];
  int local_80 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_78;
  TVector<double>_u_0 local_68 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_78,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = param_1->RegReadCount;
  iVar11 = 0;
  local_90[0] = 0;
  bVar2 = param_1->RegInc[iVar7];
  puVar3 = param_1->RegisterData[iVar7];
  param_1->RegReadCount = iVar7 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  lVar12 = (longlong)local_90[0];
  local_80[0] = 0;
  pfVar8 = pfVar8 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar13 = (longlong)local_80[0];
  local_a0[0] = 0;
  pfVar9 = pfVar9 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  pFVar5 = local_78.Ptr;
  pfVar10 = pfVar10 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_78.Ptr);
  if (bVar6) {
    fVar15 = FSplineCurves::GetSplineLength(&pFVar5->SplineCurves);
    if (0 < param_1->NumInstances) {
      local_res18 = (FInterpCurve<float> *)&(pFVar5->SplineCurves).ReparamTable;
      local_res10[0] = 0.0;
      lVar14 = (longlong)local_a0[0];
      do {
        fVar16 = FInterpCurve<float>::Eval(local_res18,fVar1 * fVar15,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::Eval
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_78.Ptr)->SplineCurves,
                   (TVector<double> *)&local_68[0]._s_0,fVar16,
                   &UE::Math::TVector<double>::ZeroVector);
        iVar11 = iVar11 + 1;
        *pfVar8 = (float)(double)local_68[0]._0_8_;
        pfVar8 = pfVar8 + lVar12;
        *pfVar9 = (float)(double)local_68[0]._8_8_;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)(double)local_68[0]._16_8_;
        pfVar10 = pfVar10 + lVar14;
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar8 = 0.0;
        iVar7 = iVar7 + 1;
        *pfVar9 = 0.0;
        pfVar8 = pfVar8 + lVar12;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        pfVar10 = pfVar10 + local_a0[0];
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 149209240

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplinePositionByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  FNDISpline_InstanceData *pFVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  int local_98 [4];
  int local_88 [4];
  int local_78 [2];
  undefined1 local_70 [24];
  FUserPtrHandler<FNDISpline_InstanceData> local_58 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_58,param_1);
  iVar7 = 0;
  local_78[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  local_70._8_4_ = 0;
  pfVar3 = pfVar3 + local_78[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_70)->_s_0).Y);
  lVar8 = (longlong)(int)local_70._8_4_;
  local_98[0] = 0;
  pfVar4 = pfVar4 + local_70._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_88[0] = 0;
  pfVar5 = pfVar5 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  pFVar1 = local_58[0].Ptr;
  pfVar6 = pfVar6 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_58[0].Ptr);
  if (bVar2) {
    fVar10 = FSplineCurves::GetSplineLength(&pFVar1->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar8 = (longlong)local_78[0];
      lVar9 = (longlong)(int)local_70._8_4_;
      local_res18 = (longlong)local_98[0] << 2;
      local_res20 = (longlong)local_88[0] << 2;
      local_res10[0] = 0.0;
      do {
        fVar11 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&(pFVar1->SplineCurves).ReparamTable,
                            fVar10 * *pfVar3,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::Eval
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_58[0].Ptr)->SplineCurves,
                   (TVector<double> *)&((TVector<double>_u_0 *)local_70)->_s_0,fVar11,
                   &UE::Math::TVector<double>::ZeroVector);
        pfVar3 = pfVar3 + lVar8;
        iVar7 = iVar7 + 1;
        *pfVar4 = (float)(double)local_70._0_8_;
        pfVar4 = pfVar4 + lVar9;
        *pfVar5 = (float)(double)CONCAT44(local_70._12_4_,local_70._8_4_);
        pfVar5 = (float *)((longlong)pfVar5 + local_res18);
        *pfVar6 = (float)(double)local_70._16_8_;
        pfVar6 = (float *)((longlong)pfVar6 + local_res20);
      } while (iVar7 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar4 = 0.0;
        iVar7 = iVar7 + 1;
        *pfVar5 = 0.0;
        pfVar4 = pfVar4 + lVar8;
        *pfVar6 = 0.0;
        pfVar5 = pfVar5 + local_98[0];
        pfVar6 = pfVar6 + local_88[0];
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 149209460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_130 [4];
  int local_120 [4];
  int local_110 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = param_1->RegReadCount;
  iVar14 = 0;
  bVar3 = param_1->RegInc[iVar4];
  local_120[0] = 0;
  puVar5 = param_1->RegisterData[iVar4];
  param_1->RegReadCount = iVar4 + 1;
  fVar1 = (float)puVar5[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar15 = (longlong)local_120[0];
  local_110[0] = 0;
  pfVar10 = pfVar10 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar16 = (longlong)local_110[0];
  local_130[0] = 0;
  pfVar11 = pfVar11 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_130);
  pfVar12 = pfVar12 + local_130[0] * param_1->PerInstanceFnInstanceIdx;
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  dVar17 = _UNK_15076ad98;
  dVar7 = ___xmm_0000000000000000bff0000000000000;
  dVar8 = __real_3ff0000000000000;
  if (bVar9) {
    if (0 < param_1->NumInstances) {
      lVar13 = (longlong)local_130[0];
      fVar2 = ((local_108.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_108.Ptr,local_f8,fVar1 * fVar2,Local);
        dVar7 = local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar7 = dVar7 + dVar7;
        dVar19 = local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar18 = dVar18 + dVar18;
        dVar21 = (local_f8[0].Y * dVar18 - local_f8[0].Z * dVar19) +
                 local_f8[0].W * dVar7 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar17 = (local_f8[0].Z * dVar7 - local_f8[0].X * dVar18) +
                 local_f8[0].W * dVar19 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar7 = (local_f8[0].X * dVar19 - local_f8[0].Y * dVar7) +
                local_f8[0].W * dVar18 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][0] +
                 dVar7 * ((local_108.Ptr)->Transform).M[2][0] +
                 ((local_108.Ptr)->Transform).M[3][0] * 0.0;
        dVar19 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][1] +
                 dVar7 * ((local_108.Ptr)->Transform).M[2][1] +
                 ((local_108.Ptr)->Transform).M[3][1] * 0.0;
        iVar14 = iVar14 + 1;
        dVar7 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
                dVar21 * ((local_108.Ptr)->Transform).M[0][2] +
                dVar7 * ((local_108.Ptr)->Transform).M[2][2] +
                ((local_108.Ptr)->Transform).M[3][2] * 0.0;
        dVar17 = dVar8 / SQRT(dVar19 * dVar19 + dVar18 * dVar18 + dVar7 * dVar7);
        *pfVar10 = (float)(dVar17 * dVar18);
        pfVar10 = pfVar10 + lVar15;
        *pfVar11 = (float)(dVar17 * dVar19);
        pfVar11 = pfVar11 + lVar16;
        *pfVar12 = (float)(dVar17 * dVar7);
        pfVar12 = pfVar12 + lVar13;
      } while (iVar14 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar14 = iVar14 + 1;
      dVar21 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
               dVar7 * ((local_108.Ptr)->Transform).M[0][0] +
               ((local_108.Ptr)->Transform).M[2][0] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][0] * 0.0;
      dVar20 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
               dVar7 * ((local_108.Ptr)->Transform).M[0][1] +
               ((local_108.Ptr)->Transform).M[2][1] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][1] * 0.0;
      dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
               dVar7 * ((local_108.Ptr)->Transform).M[0][2] +
               ((local_108.Ptr)->Transform).M[2][2] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][2] * 0.0;
      dVar19 = dVar8 / SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar18 * dVar18);
      *pfVar10 = (float)(dVar19 * dVar21);
      pfVar10 = pfVar10 + lVar15;
      *pfVar11 = (float)(dVar19 * dVar20);
      pfVar11 = pfVar11 + lVar16;
      *pfVar12 = (float)(dVar19 * dVar18);
      pfVar12 = pfVar12 + local_130[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 1492099e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double this_00;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_110 [2];
  longlong local_108;
  int local_100 [2];
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)local_f8,param_1);
  iVar11 = 0;
  local_110[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_100[0] = 0;
  pfVar6 = pfVar6 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar12 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar7 = pfVar7 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar13 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar8 = pfVar8 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  this_00 = local_f8[0].Y;
  pfVar9 = pfVar9 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_f8[0].Y);
  dVar14 = _UNK_15076ad98;
  dVar2 = ___xmm_0000000000000000bff0000000000000;
  dVar3 = __real_3ff0000000000000;
  if (bVar5) {
    fVar1 = ((FNiagaraDataInterfaceSplineLUT *)((longlong)this_00 + 0x268))->SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)local_110[0];
      local_108 = (longlong)local_100[0] << 2;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  ((FNDISpline_InstanceData *)this_00,local_f8,fVar1 * *pfVar6,Local);
        dVar2 = local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar2 = dVar2 + dVar2;
        dVar16 = local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar16 = dVar16 + dVar16;
        dVar15 = local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar15 = dVar15 + dVar15;
        dVar18 = (local_f8[0].Y * dVar15 - local_f8[0].Z * dVar16) +
                 local_f8[0].W * dVar2 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar14 = (local_f8[0].Z * dVar2 - local_f8[0].X * dVar15) +
                 local_f8[0].W * dVar16 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar2 = (local_f8[0].X * dVar16 - local_f8[0].Y * dVar2) +
                local_f8[0].W * dVar15 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
                 dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
        dVar16 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
                 dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
        iVar11 = iVar11 + 1;
        pfVar6 = pfVar6 + lVar10;
        dVar2 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
                dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
                dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
                ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
        dVar14 = dVar3 / SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar2 * dVar2);
        *pfVar7 = (float)(dVar14 * dVar15);
        pfVar7 = pfVar7 + lVar12;
        *pfVar8 = (float)(dVar14 * dVar16);
        pfVar8 = pfVar8 + lVar13;
        *pfVar9 = (float)(dVar14 * dVar2);
        pfVar9 = (float *)((longlong)pfVar9 + local_108);
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar11 = iVar11 + 1;
      dVar18 = dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
      dVar17 = dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
      dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
               dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
      dVar16 = dVar3 / SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar15 * dVar15);
      *pfVar7 = (float)(dVar16 * dVar18);
      pfVar7 = pfVar7 + lVar12;
      *pfVar8 = (float)(dVar16 * dVar17);
      pfVar8 = pfVar8 + lVar13;
      *pfVar9 = (float)(dVar16 * dVar15);
      pfVar9 = pfVar9 + local_100[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 149209f70

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  TQuat<double> local_c8 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = param_1->RegReadCount;
  iVar15 = 0;
  local_f0[0] = 0;
  bVar3 = param_1->RegInc[iVar11];
  puVar4 = param_1->RegisterData[iVar11];
  param_1->RegReadCount = iVar11 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  lVar18 = (longlong)local_f0[0];
  local_e0[0] = 0;
  pfVar12 = pfVar12 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar16 = (longlong)local_e0[0];
  local_d0[0] = 0;
  pfVar13 = pfVar13 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar17 = (longlong)local_d0[0];
  pfVar14 = pfVar14 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  if (bVar10) {
    if (0 < param_1->NumInstances) {
      fVar2 = ((local_108.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_108.Ptr,local_c8,fVar1 * fVar2,Local);
        uVar9 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        iVar15 = iVar15 + 1;
        dVar8 = local_c8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_c8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar8 = dVar8 + dVar8;
        dVar7 = local_c8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                local_c8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar7 = dVar7 + dVar7;
        dVar6 = local_c8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                local_c8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar6 = dVar6 + dVar6;
        dVar19 = local_c8[0].W * dVar7 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        *pfVar12 = (float)((local_c8[0].Y * dVar6 - dVar7 * local_c8[0].Z) +
                          local_c8[0].W * dVar8 +
                          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X);
        pfVar12 = pfVar12 + lVar18;
        *pfVar13 = (float)((dVar8 * local_c8[0].Z - local_c8[0].X * dVar6) + dVar19);
        pfVar13 = pfVar13 + lVar16;
        *pfVar14 = (float)((local_c8[0].X * dVar7 - local_c8[0].Y * dVar8) +
                          local_c8[0].W * dVar6 + (double)uVar9);
        pfVar14 = pfVar14 + lVar17;
      } while (iVar15 < param_1->NumInstances);
    }
  }
  else {
    iVar11 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar12 = -1.0;
        iVar11 = iVar11 + 1;
        *pfVar13 = 0.0;
        pfVar12 = pfVar12 + lVar18;
        *pfVar14 = 0.0;
        pfVar13 = pfVar13 + lVar16;
        pfVar14 = pfVar14 + lVar17;
      } while (iVar11 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920a2c0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  int local_f0 [2];
  TQuat<double> local_e8;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8 [9];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_c8,param_1);
  iVar12 = 0;
  local_f0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e8.Y._0_4_ = 0;
  pfVar8 = pfVar8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar13 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar9 = pfVar9 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar14 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar10 = pfVar10 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  lVar15 = (longlong)local_e8.Y._0_4_;
  pfVar11 = pfVar11 + local_e8.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8[0].Ptr);
  if (bVar6) {
    fVar1 = ((local_c8[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)local_f0[0];
      lVar15 = (longlong)local_e8.Y._0_4_;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_c8[0].Ptr,&local_e8,fVar1 * *pfVar8,Local);
        uVar5 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        iVar12 = iVar12 + 1;
        dVar4 = (double)CONCAT44(local_e8.Y._4_4_,local_e8.Y._0_4_);
        pfVar8 = pfVar8 + lVar16;
        dVar3 = dVar4 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_e8.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar3 = dVar3 + dVar3;
        dVar2 = local_e8.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                local_e8.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar18 = local_e8.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 dVar4 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar2 = dVar2 + dVar2;
        dVar18 = dVar18 + dVar18;
        dVar17 = local_e8.W * dVar2 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        *pfVar9 = (float)((dVar18 * dVar4 - local_e8.Z * dVar2) +
                         local_e8.W * dVar3 +
                         UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X);
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)((local_e8.Z * dVar3 - local_e8.X * dVar18) + dVar17);
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)((local_e8.X * dVar2 - dVar3 * dVar4) +
                          local_e8.W * dVar18 + (double)uVar5);
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar9 = -1.0;
        iVar7 = iVar7 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        *pfVar11 = 0.0;
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920a610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_130 [4];
  int local_120 [4];
  int local_110 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar13 = 0;
  bVar2 = param_1->RegInc[iVar3];
  local_120[0] = 0;
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar14 = (longlong)local_120[0];
  local_110[0] = 0;
  pfVar9 = pfVar9 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar15 = (longlong)local_110[0];
  local_130[0] = 0;
  pfVar10 = pfVar10 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_130);
  pfVar11 = pfVar11 + local_130[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  dVar17 = _UNK_15076ad98;
  dVar6 = ___xmm_0000000000000000bff0000000000000;
  dVar7 = __real_3ff0000000000000;
  if (bVar8) {
    fVar16 = FSplineCurves::GetSplineLength(&(local_108.Ptr)->SplineCurves);
    dVar7 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar12 = (longlong)local_130[0];
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_108.Ptr,local_f8,fVar1 * fVar16,Local);
        dVar6 = local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar6 = dVar6 + dVar6;
        dVar19 = local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar18 = dVar18 + dVar18;
        dVar21 = (local_f8[0].Y * dVar18 - local_f8[0].Z * dVar19) +
                 local_f8[0].W * dVar6 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar17 = (local_f8[0].Z * dVar6 - local_f8[0].X * dVar18) +
                 local_f8[0].W * dVar19 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar6 = (local_f8[0].X * dVar19 - local_f8[0].Y * dVar6) +
                local_f8[0].W * dVar18 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][0] +
                 dVar6 * ((local_108.Ptr)->Transform).M[2][0] +
                 ((local_108.Ptr)->Transform).M[3][0] * 0.0;
        dVar19 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][1] +
                 dVar6 * ((local_108.Ptr)->Transform).M[2][1] +
                 ((local_108.Ptr)->Transform).M[3][1] * 0.0;
        iVar13 = iVar13 + 1;
        dVar6 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
                dVar21 * ((local_108.Ptr)->Transform).M[0][2] +
                dVar6 * ((local_108.Ptr)->Transform).M[2][2] +
                ((local_108.Ptr)->Transform).M[3][2] * 0.0;
        dVar17 = dVar7 / SQRT(dVar19 * dVar19 + dVar18 * dVar18 + dVar6 * dVar6);
        *pfVar9 = (float)(dVar17 * dVar18);
        pfVar9 = pfVar9 + lVar14;
        *pfVar10 = (float)(dVar17 * dVar19);
        pfVar10 = pfVar10 + lVar15;
        *pfVar11 = (float)(dVar17 * dVar6);
        pfVar11 = pfVar11 + lVar12;
      } while (iVar13 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar13 = iVar13 + 1;
      dVar21 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
               dVar6 * ((local_108.Ptr)->Transform).M[0][0] +
               ((local_108.Ptr)->Transform).M[2][0] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][0] * 0.0;
      dVar20 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
               dVar6 * ((local_108.Ptr)->Transform).M[0][1] +
               ((local_108.Ptr)->Transform).M[2][1] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][1] * 0.0;
      dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
               dVar6 * ((local_108.Ptr)->Transform).M[0][2] +
               ((local_108.Ptr)->Transform).M[2][2] * 0.0 +
               ((local_108.Ptr)->Transform).M[3][2] * 0.0;
      dVar19 = dVar7 / SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar18 * dVar18);
      *pfVar9 = (float)(dVar19 * dVar21);
      pfVar9 = pfVar9 + lVar14;
      *pfVar10 = (float)(dVar19 * dVar20);
      pfVar10 = pfVar10 + lVar15;
      *pfVar11 = (float)(dVar19 * dVar18);
      pfVar11 = pfVar11 + local_130[0];
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920ab90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double this_00;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_110 [2];
  longlong local_108;
  int local_100 [2];
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)local_f8,param_1);
  iVar10 = 0;
  local_110[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_100[0] = 0;
  pfVar5 = pfVar5 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar3 = local_100[0];
  lVar11 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar6 = pfVar6 + iVar3 * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar3 = local_100[0];
  lVar12 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar7 = pfVar7 + iVar3 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  this_00 = local_f8[0].Y;
  pfVar8 = pfVar8 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_f8[0].Y);
  dVar14 = _UNK_15076ad98;
  dVar1 = ___xmm_0000000000000000bff0000000000000;
  dVar2 = __real_3ff0000000000000;
  if (bVar4) {
    fVar13 = FSplineCurves::GetSplineLength((FSplineCurves *)((longlong)this_00 + 0x200));
    dVar2 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar9 = (longlong)local_110[0];
      local_108 = (longlong)local_100[0] << 2;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  ((FNDISpline_InstanceData *)this_00,local_f8,fVar13 * *pfVar5,Local);
        dVar1 = local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar1 = dVar1 + dVar1;
        dVar16 = local_f8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar16 = dVar16 + dVar16;
        dVar15 = local_f8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar15 = dVar15 + dVar15;
        dVar18 = (local_f8[0].Y * dVar15 - local_f8[0].Z * dVar16) +
                 local_f8[0].W * dVar1 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar14 = (local_f8[0].Z * dVar1 - local_f8[0].X * dVar15) +
                 local_f8[0].W * dVar16 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar1 = (local_f8[0].X * dVar16 - local_f8[0].Y * dVar1) +
                local_f8[0].W * dVar15 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
                 dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
        dVar16 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
                 dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
        iVar10 = iVar10 + 1;
        pfVar5 = pfVar5 + lVar9;
        dVar1 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
                dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
                dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
                ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
        dVar14 = dVar2 / SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar1 * dVar1);
        *pfVar6 = (float)(dVar14 * dVar15);
        pfVar6 = pfVar6 + lVar11;
        *pfVar7 = (float)(dVar14 * dVar16);
        pfVar7 = pfVar7 + lVar12;
        *pfVar8 = (float)(dVar14 * dVar1);
        pfVar8 = (float *)((longlong)pfVar8 + local_108);
      } while (iVar10 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      dVar18 = dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
      dVar17 = dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
      dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
               dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
      dVar16 = dVar2 / SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar15 * dVar15);
      *pfVar6 = (float)(dVar16 * dVar18);
      pfVar6 = pfVar6 + lVar11;
      *pfVar7 = (float)(dVar16 * dVar17);
      pfVar7 = pfVar7 + lVar12;
      *pfVar8 = (float)(dVar16 * dVar15);
      pfVar8 = pfVar8 + local_100[0];
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920b120

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  TQuat<double> local_c8 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = param_1->RegReadCount;
  iVar13 = 0;
  local_f0[0] = 0;
  bVar2 = param_1->RegInc[iVar9];
  puVar3 = param_1->RegisterData[iVar9];
  param_1->RegReadCount = iVar9 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  lVar16 = (longlong)local_f0[0];
  local_e0[0] = 0;
  pfVar10 = pfVar10 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar14 = (longlong)local_e0[0];
  local_d0[0] = 0;
  pfVar11 = pfVar11 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar15 = (longlong)local_d0[0];
  pfVar12 = pfVar12 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  if (bVar8) {
    fVar17 = FSplineCurves::GetSplineLength(&(local_108.Ptr)->SplineCurves);
    if (0 < param_1->NumInstances) {
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_108.Ptr,local_c8,fVar1 * fVar17,Local);
        uVar7 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        iVar13 = iVar13 + 1;
        dVar6 = local_c8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_c8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar6 = dVar6 + dVar6;
        dVar5 = local_c8[0].Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                local_c8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar5 = dVar5 + dVar5;
        dVar19 = local_c8[0].X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                 local_c8[0].Y * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_c8[0].W * dVar5 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        *pfVar10 = (float)((local_c8[0].Y * dVar19 - local_c8[0].Z * dVar5) +
                          local_c8[0].W * dVar6 +
                          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X);
        pfVar10 = pfVar10 + lVar16;
        *pfVar11 = (float)((local_c8[0].Z * dVar6 - local_c8[0].X * dVar19) + dVar18);
        pfVar11 = pfVar11 + lVar14;
        *pfVar12 = (float)((local_c8[0].X * dVar5 - local_c8[0].Y * dVar6) +
                          local_c8[0].W * dVar19 + (double)uVar7);
        pfVar12 = pfVar12 + lVar15;
      } while (iVar13 < param_1->NumInstances);
    }
  }
  else {
    iVar9 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar10 = -1.0;
        iVar9 = iVar9 + 1;
        *pfVar11 = 0.0;
        pfVar10 = pfVar10 + lVar16;
        *pfVar12 = 0.0;
        pfVar11 = pfVar11 + lVar14;
        pfVar12 = pfVar12 + lVar15;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920b470

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRightVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  int local_f0 [2];
  TQuat<double> local_e8;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8 [9];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_c8,param_1);
  iVar12 = 0;
  local_f0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e8.Y._0_4_ = 0;
  pfVar8 = pfVar8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar13 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar9 = pfVar9 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar14 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar10 = pfVar10 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  lVar15 = (longlong)local_e8.Y._0_4_;
  pfVar11 = pfVar11 + local_e8.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8[0].Ptr);
  if (bVar6) {
    fVar17 = FSplineCurves::GetSplineLength(&(local_c8[0].Ptr)->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)local_f0[0];
      lVar15 = (longlong)local_e8.Y._0_4_;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_c8[0].Ptr,&local_e8,fVar17 * *pfVar8,Local);
        uVar5 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        iVar12 = iVar12 + 1;
        dVar4 = (double)CONCAT44(local_e8.Y._4_4_,local_e8.Y._0_4_);
        pfVar8 = pfVar8 + lVar16;
        dVar3 = dVar4 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z -
                local_e8.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        dVar3 = dVar3 + dVar3;
        dVar2 = local_e8.Z * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X -
                local_e8.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
        dVar2 = dVar2 + dVar2;
        dVar1 = local_e8.X * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y -
                dVar4 * UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
        dVar1 = dVar1 + dVar1;
        dVar18 = local_e8.W * dVar2 + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
        *pfVar9 = (float)((dVar4 * dVar1 - dVar2 * local_e8.Z) +
                         local_e8.W * dVar3 +
                         UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X);
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)((dVar3 * local_e8.Z - local_e8.X * dVar1) + dVar18);
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)((local_e8.X * dVar2 - dVar4 * dVar3) + local_e8.W * dVar1 + (double)uVar5
                          );
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar9 = -1.0;
        iVar7 = iVar7 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        *pfVar11 = 0.0;
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920b7c0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int local_100 [4];
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_c8;
  TQuat<double> local_b8 [4];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_c8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = param_1->RegReadCount;
  iVar22 = 0;
  local_d0[0] = 0;
  bVar3 = param_1->RegInc[iVar18];
  puVar4 = param_1->RegisterData[iVar18];
  param_1->RegReadCount = iVar18 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar23 = (longlong)local_d0[0];
  local_100[0] = 0;
  iVar18 = local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar19 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  iVar20 = local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e0[0] = 0;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar21 = local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8.Ptr);
  if (bVar10) {
    dVar6 = ((local_c8.Ptr)->TransformQuat).X;
    dVar7 = ((local_c8.Ptr)->TransformQuat).Y;
    dVar8 = ((local_c8.Ptr)->TransformQuat).Z;
    dVar9 = ((local_c8.Ptr)->TransformQuat).W;
    if (0 < param_1->NumInstances) {
      lVar15 = (longlong)local_100[0];
      fVar2 = ((local_c8.Ptr)->SplineLUT).SplineLength;
      lVar16 = (longlong)local_f0[0];
      lVar17 = (longlong)local_e0[0];
      pfVar12 = pfVar12 + iVar19;
      pfVar11 = pfVar11 + iVar18;
      pfVar13 = pfVar13 + iVar20;
      pfVar14 = pfVar14 + iVar21;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_c8.Ptr,local_b8,fVar1 * fVar2,Local);
        iVar22 = iVar22 + 1;
        dVar27 = local_b8[0].W * dVar6;
        dVar28 = local_b8[0].Z * dVar6;
        dVar25 = local_b8[0].Z * dVar7;
        dVar26 = local_b8[0].W * dVar7;
        dVar24 = local_b8[0].Y * dVar8;
        dVar29 = local_b8[0].Z * dVar8;
        local_b8[0].Z =
             local_b8[0].Y * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
             + local_b8[0].Z * dVar9 +
             local_b8[0].X * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
             + local_b8[0].W * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_b8[0].W =
             local_b8[0].X * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
             + local_b8[0].W * dVar9 +
             local_b8[0].Y * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
             + dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_b8[0].Y =
             dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_b8[0].Y * dVar9 +
             dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_b8[0].X * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
        ;
        *pfVar11 = (float)(dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                           + local_b8[0].X * dVar9 +
                           dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                          + dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
                          );
        *pfVar12 = (float)local_b8[0].Y;
        *pfVar13 = (float)local_b8[0].Z;
        *pfVar14 = (float)local_b8[0].W;
        pfVar12 = pfVar12 + lVar15;
        pfVar11 = pfVar11 + lVar23;
        pfVar13 = pfVar13 + lVar16;
        pfVar14 = pfVar14 + lVar17;
      } while (iVar22 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar12 = pfVar12 + iVar19;
    pfVar11 = pfVar11 + iVar18;
    pfVar13 = pfVar13 + iVar20;
    pfVar14 = pfVar14 + iVar21;
    do {
      iVar22 = iVar22 + 1;
      *pfVar11 = UE::Math::TQuat<float>::Identity.X;
      *pfVar12 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar13 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar14 = UE::Math::TQuat<float>::Identity.W;
      pfVar12 = pfVar12 + local_100[0];
      pfVar11 = pfVar11 + lVar23;
      pfVar13 = pfVar13 + local_f0[0];
      pfVar14 = pfVar14 + local_e0[0];
    } while (iVar22 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920bba0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double this_00;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float *local_res10;
  int local_100 [2];
  longlong local_f8;
  int local_f0 [2];
  longlong local_e8;
  int local_e0 [2];
  TQuat<double> local_d8;
  int local_b0 [4];
  int local_a0 [26];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_d8,param_1);
  iVar21 = 0;
  local_e0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar16 = local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  iVar17 = local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_100[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar18 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_b0[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  iVar19 = local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  this_00 = local_d8.Y;
  iVar20 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_d8.Y);
  if (bVar7) {
    dVar3 = ((TQuat<double> *)((longlong)this_00 + 0x50))->X;
    dVar4 = ((TQuat<double> *)((longlong)this_00 + 0x50))->Y;
    dVar5 = ((TQuat<double> *)((longlong)this_00 + 0x50))->Z;
    dVar6 = ((TQuat<double> *)((longlong)this_00 + 0x50))->W;
    fVar1 = ((FNiagaraDataInterfaceSplineLUT *)((longlong)this_00 + 0x268))->SplineLength;
    if (0 < param_1->NumInstances) {
      lVar13 = (longlong)local_f0[0];
      lVar14 = (longlong)local_100[0];
      lVar15 = (longlong)local_b0[0];
      local_e8 = (longlong)local_e0[0] << 2;
      local_f8 = (longlong)local_a0[0] << 2;
      pfVar9 = pfVar9 + iVar17;
      pfVar12 = pfVar12 + iVar20;
      pfVar10 = pfVar10 + iVar18;
      pfVar11 = pfVar11 + iVar19;
      local_res10 = pfVar8 + iVar16;
      do {
        pfVar8 = (float *)(local_e8 + (longlong)local_res10);
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  ((FNDISpline_InstanceData *)this_00,&local_d8,fVar1 * *local_res10,Local);
        iVar21 = iVar21 + 1;
        dVar25 = local_d8.W * dVar3;
        dVar24 = local_d8.Z * dVar4;
        dVar22 = dVar5 * local_d8.Y;
        dVar2 = local_d8.Y * dVar3;
        dVar26 = local_d8.Y * dVar4;
        local_d8.Y = local_d8.Z * dVar3 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_d8.Y * dVar6 +
                     local_d8.W * dVar4 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar5 * local_d8.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar23 = dVar5 * local_d8.Z;
        local_d8.Z = dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     local_d8.Z * dVar6 +
                     local_d8.X * dVar4 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar5 * local_d8.W *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_d8.W = local_d8.X * dVar3 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_d8.W * dVar6 +
                     dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        *pfVar9 = (float)(dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                          local_d8.X * dVar6 +
                          dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
        *pfVar10 = (float)local_d8.Y;
        *pfVar11 = (float)local_d8.Z;
        *pfVar12 = (float)local_d8.W;
        pfVar9 = pfVar9 + lVar13;
        pfVar12 = (float *)(local_f8 + (longlong)pfVar12);
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + lVar15;
        local_res10 = pfVar8;
      } while (iVar21 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar8 = pfVar9 + iVar17;
    pfVar9 = pfVar12 + iVar20;
    pfVar10 = pfVar10 + iVar18;
    pfVar11 = pfVar11 + iVar19;
    do {
      iVar21 = iVar21 + 1;
      *pfVar8 = UE::Math::TQuat<float>::Identity.X;
      *pfVar10 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar11 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar9 = UE::Math::TQuat<float>::Identity.W;
      pfVar8 = pfVar8 + local_f0[0];
      pfVar9 = pfVar9 + local_a0[0];
      pfVar10 = pfVar10 + local_100[0];
      pfVar11 = pfVar11 + local_b0[0];
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920bf50

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int local_b0 [4];
  int local_a0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_98;
  int local_80 [4];
  int local_70 [2];
  TQuat<double> local_68;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_98,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = param_1->RegReadCount;
  iVar17 = 0;
  local_80[0] = 0;
  bVar3 = param_1->RegInc[iVar13];
  puVar4 = param_1->RegisterData[iVar13];
  param_1->RegReadCount = iVar13 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar18 = (longlong)local_80[0];
  local_70[0] = 0;
  iVar13 = local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar19 = (longlong)local_70[0];
  local_b0[0] = 0;
  iVar14 = local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  iVar15 = local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar16 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_98.Ptr);
  if (bVar6) {
    if (0 < param_1->NumInstances) {
      lVar11 = (longlong)local_b0[0];
      lVar12 = (longlong)local_a0[0];
      fVar2 = ((local_98.Ptr)->SplineLUT).SplineLength;
      pfVar8 = pfVar8 + iVar14;
      pfVar7 = pfVar7 + iVar13;
      pfVar9 = pfVar9 + iVar15;
      pfVar10 = pfVar10 + iVar16;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_98.Ptr,&local_68,fVar1 * fVar2,Local);
        iVar17 = iVar17 + 1;
        *pfVar7 = (float)local_68.X;
        *pfVar8 = (float)local_68.Y;
        *pfVar9 = (float)local_68.Z;
        *pfVar10 = (float)local_68.W;
        pfVar8 = pfVar8 + lVar19;
        pfVar7 = pfVar7 + lVar18;
        pfVar9 = pfVar9 + lVar11;
        pfVar10 = pfVar10 + lVar12;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar14;
    pfVar7 = pfVar7 + iVar13;
    pfVar9 = pfVar9 + iVar15;
    pfVar10 = pfVar10 + iVar16;
    do {
      iVar17 = iVar17 + 1;
      *pfVar7 = UE::Math::TQuat<float>::Identity.X;
      *pfVar8 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar9 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar10 = UE::Math::TQuat<float>::Identity.W;
      pfVar8 = pfVar8 + lVar19;
      pfVar7 = pfVar7 + lVar18;
      pfVar9 = pfVar9 + local_b0[0];
      pfVar10 = pfVar10 + local_a0[0];
    } while (iVar17 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920c1e0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *local_res10;
  int local_a0 [4];
  int local_90 [4];
  int local_80 [2];
  TQuat<double> local_78;
  FUserPtrHandler<FNDISpline_InstanceData> local_58 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_58,param_1);
  iVar15 = 0;
  local_80[0] = 0;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_78.Y._0_4_ = 0;
  local_res10 = local_res10 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_78.Y);
  iVar4 = local_78.Y._0_4_;
  lVar18 = (longlong)local_78.Y._0_4_;
  local_78.Y._0_4_ = 0;
  iVar3 = param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_78.Y);
  lVar16 = (longlong)local_78.Y._0_4_;
  local_a0[0] = 0;
  iVar12 = local_78.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar13 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_90[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar14 = local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_58[0].Ptr);
  if (bVar5) {
    fVar1 = ((local_58[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)local_78.Y._0_4_;
      lVar17 = (longlong)local_80[0];
      lVar10 = (longlong)local_a0[0];
      lVar11 = (longlong)local_90[0];
      pfVar8 = pfVar8 + iVar13;
      pfVar7 = pfVar7 + iVar12;
      pfVar6 = pfVar6 + iVar4 * iVar3;
      pfVar9 = pfVar9 + iVar14;
      do {
        fVar2 = *local_res10;
        local_res10 = local_res10 + lVar17;
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_58[0].Ptr,&local_78,fVar1 * fVar2,Local);
        iVar15 = iVar15 + 1;
        *pfVar6 = (float)local_78.X;
        *pfVar7 = (float)(double)CONCAT44(local_78.Y._4_4_,local_78.Y._0_4_);
        *pfVar8 = (float)local_78.Z;
        *pfVar9 = (float)local_78.W;
        pfVar8 = pfVar8 + lVar10;
        pfVar7 = pfVar7 + lVar16;
        pfVar6 = pfVar6 + lVar18;
        pfVar9 = pfVar9 + lVar11;
      } while (iVar15 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar13;
    pfVar7 = pfVar7 + iVar12;
    pfVar6 = pfVar6 + iVar4 * iVar3;
    pfVar9 = pfVar9 + iVar14;
    do {
      iVar15 = iVar15 + 1;
      *pfVar6 = UE::Math::TQuat<float>::Identity.X;
      *pfVar7 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar8 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar9 = UE::Math::TQuat<float>::Identity.W;
      pfVar8 = pfVar8 + local_a0[0];
      pfVar7 = pfVar7 + lVar16;
      pfVar6 = pfVar6 + lVar18;
      pfVar9 = pfVar9 + local_90[0];
    } while (iVar15 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920c480

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int local_100 [4];
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_c8;
  TQuat<double> local_b8 [4];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_c8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar17 = param_1->RegReadCount;
  iVar21 = 0;
  local_d0[0] = 0;
  bVar2 = param_1->RegInc[iVar17];
  puVar3 = param_1->RegisterData[iVar17];
  param_1->RegReadCount = iVar17 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar22 = (longlong)local_d0[0];
  local_100[0] = 0;
  iVar17 = local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar18 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0[0] = 0;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  iVar19 = local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e0[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar20 = local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8.Ptr);
  if (bVar9) {
    dVar5 = ((local_c8.Ptr)->TransformQuat).X;
    dVar6 = ((local_c8.Ptr)->TransformQuat).Y;
    dVar7 = ((local_c8.Ptr)->TransformQuat).Z;
    dVar8 = ((local_c8.Ptr)->TransformQuat).W;
    fVar23 = FSplineCurves::GetSplineLength(&(local_c8.Ptr)->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar14 = (longlong)local_100[0];
      lVar15 = (longlong)local_f0[0];
      lVar16 = (longlong)local_e0[0];
      pfVar11 = pfVar11 + iVar18;
      pfVar10 = pfVar10 + iVar17;
      pfVar12 = pfVar12 + iVar19;
      pfVar13 = pfVar13 + iVar20;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_c8.Ptr,local_b8,fVar1 * fVar23,Local);
        iVar21 = iVar21 + 1;
        dVar27 = local_b8[0].W * dVar5;
        dVar28 = local_b8[0].Z * dVar5;
        dVar25 = local_b8[0].Z * dVar6;
        dVar26 = local_b8[0].W * dVar6;
        dVar24 = local_b8[0].Y * dVar7;
        dVar29 = local_b8[0].Z * dVar7;
        local_b8[0].Z =
             local_b8[0].Y * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
             + local_b8[0].Z * dVar8 +
             local_b8[0].X * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
             + local_b8[0].W * dVar7 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_b8[0].W =
             local_b8[0].X * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
             + local_b8[0].W * dVar8 +
             local_b8[0].Y * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
             + dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_b8[0].Y =
             dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_b8[0].Y * dVar8 +
             dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_b8[0].X * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
        ;
        *pfVar10 = (float)(dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                           + local_b8[0].X * dVar8 +
                           dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                          + dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
                          );
        *pfVar11 = (float)local_b8[0].Y;
        *pfVar12 = (float)local_b8[0].Z;
        *pfVar13 = (float)local_b8[0].W;
        pfVar11 = pfVar11 + lVar14;
        pfVar10 = pfVar10 + lVar22;
        pfVar12 = pfVar12 + lVar15;
        pfVar13 = pfVar13 + lVar16;
      } while (iVar21 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar11 = pfVar11 + iVar18;
    pfVar10 = pfVar10 + iVar17;
    pfVar12 = pfVar12 + iVar19;
    pfVar13 = pfVar13 + iVar20;
    do {
      iVar21 = iVar21 + 1;
      *pfVar10 = UE::Math::TQuat<float>::Identity.X;
      *pfVar11 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar12 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar13 = UE::Math::TQuat<float>::Identity.W;
      pfVar11 = pfVar11 + local_100[0];
      pfVar10 = pfVar10 + lVar22;
      pfVar12 = pfVar12 + local_f0[0];
      pfVar13 = pfVar13 + local_e0[0];
    } while (iVar21 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920c870

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double this_00;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float *local_res10;
  int local_100 [2];
  longlong local_f8;
  int local_f0 [2];
  longlong local_e8;
  int local_e0 [2];
  TQuat<double> local_d8;
  int local_b0 [4];
  int local_a0 [26];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)&local_d8,param_1);
  iVar20 = 0;
  local_e0[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar15 = local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  iVar16 = local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_100[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar17 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  local_b0[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  iVar18 = local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  this_00 = local_d8.Y;
  iVar19 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_d8.Y);
  if (bVar6) {
    dVar2 = ((TQuat<double> *)((longlong)this_00 + 0x50))->X;
    dVar3 = ((TQuat<double> *)((longlong)this_00 + 0x50))->Y;
    dVar4 = ((TQuat<double> *)((longlong)this_00 + 0x50))->Z;
    dVar5 = ((TQuat<double> *)((longlong)this_00 + 0x50))->W;
    fVar21 = FSplineCurves::GetSplineLength((FSplineCurves *)((longlong)this_00 + 0x200));
    if (0 < param_1->NumInstances) {
      lVar12 = (longlong)local_f0[0];
      lVar13 = (longlong)local_100[0];
      lVar14 = (longlong)local_b0[0];
      local_e8 = (longlong)local_e0[0] << 2;
      local_f8 = (longlong)local_a0[0] << 2;
      pfVar8 = pfVar8 + iVar16;
      pfVar11 = pfVar11 + iVar19;
      pfVar9 = pfVar9 + iVar17;
      pfVar10 = pfVar10 + iVar18;
      local_res10 = pfVar7 + iVar15;
      do {
        pfVar7 = (float *)(local_e8 + (longlong)local_res10);
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  ((FNDISpline_InstanceData *)this_00,&local_d8,fVar21 * *local_res10,Local);
        iVar20 = iVar20 + 1;
        dVar25 = local_d8.W * dVar2;
        dVar24 = local_d8.Z * dVar3;
        dVar22 = dVar4 * local_d8.Y;
        dVar1 = local_d8.Y * dVar2;
        dVar26 = local_d8.Y * dVar3;
        local_d8.Y = local_d8.Z * dVar2 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_d8.Y * dVar5 +
                     local_d8.W * dVar3 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar4 * local_d8.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar23 = dVar4 * local_d8.Z;
        local_d8.Z = dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     local_d8.Z * dVar5 +
                     local_d8.X * dVar3 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar4 * local_d8.W *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_d8.W = local_d8.X * dVar2 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_d8.W * dVar5 +
                     dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        *pfVar8 = (float)(dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                          local_d8.X * dVar5 +
                          dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                         dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
        *pfVar9 = (float)local_d8.Y;
        *pfVar10 = (float)local_d8.Z;
        *pfVar11 = (float)local_d8.W;
        pfVar8 = pfVar8 + lVar12;
        pfVar11 = (float *)(local_f8 + (longlong)pfVar11);
        pfVar9 = pfVar9 + lVar13;
        pfVar10 = pfVar10 + lVar14;
        local_res10 = pfVar7;
      } while (iVar20 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar7 = pfVar8 + iVar16;
    pfVar8 = pfVar11 + iVar19;
    pfVar9 = pfVar9 + iVar17;
    pfVar10 = pfVar10 + iVar18;
    do {
      iVar20 = iVar20 + 1;
      *pfVar7 = UE::Math::TQuat<float>::Identity.X;
      *pfVar9 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar10 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar8 = UE::Math::TQuat<float>::Identity.W;
      pfVar7 = pfVar7 + local_f0[0];
      pfVar8 = pfVar8 + local_a0[0];
      pfVar9 = pfVar9 + local_100[0];
      pfVar10 = pfVar10 + local_b0[0];
    } while (iVar20 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920cc30

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  FNDISpline_InstanceData *pFVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_78;
  TQuat<double> local_68;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_78,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = param_1->RegReadCount;
  iVar17 = 0;
  local_80[0] = 0;
  bVar2 = param_1->RegInc[iVar13];
  puVar3 = param_1->RegisterData[iVar13];
  param_1->RegReadCount = iVar13 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar18 = (longlong)local_80[0];
  local_b0[0] = 0;
  iVar13 = local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  iVar14 = local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar15 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_90[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pFVar5 = local_78.Ptr;
  iVar16 = local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_78.Ptr);
  if (bVar6) {
    fVar20 = FSplineCurves::GetSplineLength(&pFVar5->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar11 = (longlong)local_a0[0];
      lVar19 = (longlong)local_b0[0];
      lVar12 = (longlong)local_90[0];
      pfVar8 = pfVar8 + iVar14;
      pfVar7 = pfVar7 + iVar13;
      pfVar9 = pfVar9 + iVar15;
      pfVar10 = pfVar10 + iVar16;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_78.Ptr,&local_68,fVar1 * fVar20,Local);
        iVar17 = iVar17 + 1;
        *pfVar7 = (float)local_68.X;
        *pfVar8 = (float)local_68.Y;
        *pfVar9 = (float)local_68.Z;
        *pfVar10 = (float)local_68.W;
        pfVar8 = pfVar8 + lVar19;
        pfVar7 = pfVar7 + lVar18;
        pfVar9 = pfVar9 + lVar11;
        pfVar10 = pfVar10 + lVar12;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar8 = pfVar8 + iVar14;
    pfVar7 = pfVar7 + iVar13;
    pfVar9 = pfVar9 + iVar15;
    pfVar10 = pfVar10 + iVar16;
    do {
      iVar17 = iVar17 + 1;
      *pfVar7 = UE::Math::TQuat<float>::Identity.X;
      *pfVar8 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar9 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar10 = UE::Math::TQuat<float>::Identity.W;
      pfVar8 = pfVar8 + local_b0[0];
      pfVar7 = pfVar7 + lVar18;
      pfVar9 = pfVar9 + local_a0[0];
      pfVar10 = pfVar10 + local_90[0];
    } while (iVar17 < param_1->NumInstances);
  }
  return;
}

// SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920ced0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineRotationByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  FNDISpline_InstanceData *pFVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float *local_res10;
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [2];
  TQuat<double> local_78;
  FUserPtrHandler<FNDISpline_InstanceData> local_58 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_58,param_1);
  iVar14 = 0;
  local_80[0] = 0;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_78.Y._0_4_ = 0;
  local_res10 = local_res10 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_78.Y);
  lVar15 = (longlong)local_78.Y._0_4_;
  local_b0[0] = 0;
  iVar10 = local_78.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  iVar11 = local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar12 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_90[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pFVar2 = local_58[0].Ptr;
  iVar13 = local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_58[0].Ptr);
  if (bVar3) {
    fVar18 = FSplineCurves::GetSplineLength(&pFVar2->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar15 = (longlong)local_b0[0];
      lVar17 = (longlong)local_78.Y._0_4_;
      lVar16 = (longlong)local_80[0];
      lVar8 = (longlong)local_a0[0];
      lVar9 = (longlong)local_90[0];
      pfVar6 = pfVar6 + iVar12;
      pfVar5 = pfVar5 + iVar11;
      pfVar4 = pfVar4 + iVar10;
      pfVar7 = pfVar7 + iVar13;
      do {
        fVar1 = *local_res10;
        local_res10 = local_res10 + lVar16;
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_58[0].Ptr,&local_78,fVar18 * fVar1,Local);
        iVar14 = iVar14 + 1;
        *pfVar4 = (float)local_78.X;
        *pfVar5 = (float)(double)CONCAT44(local_78.Y._4_4_,local_78.Y._0_4_);
        *pfVar6 = (float)local_78.Z;
        *pfVar7 = (float)local_78.W;
        pfVar6 = pfVar6 + lVar8;
        pfVar5 = pfVar5 + lVar15;
        pfVar4 = pfVar4 + lVar17;
        pfVar7 = pfVar7 + lVar9;
      } while (iVar14 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar12;
    pfVar5 = pfVar5 + iVar11;
    pfVar4 = pfVar4 + iVar10;
    pfVar7 = pfVar7 + iVar13;
    do {
      iVar14 = iVar14 + 1;
      *pfVar4 = UE::Math::TQuat<float>::Identity.X;
      *pfVar5 = UE::Math::TQuat<float>::Identity.Y;
      *pfVar6 = UE::Math::TQuat<float>::Identity.Z;
      *pfVar7 = UE::Math::TQuat<float>::Identity.W;
      pfVar6 = pfVar6 + local_a0[0];
      pfVar5 = pfVar5 + local_b0[0];
      pfVar4 = pfVar4 + lVar15;
      pfVar7 = pfVar7 + local_90[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920d180

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  bool bVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_d8;
  float fStack_d4;
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_a8;
  TVector<double>_u_0 local_98 [4];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_a8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = param_1->RegReadCount;
  iVar15 = 0;
  local_d0[0] = 0;
  bVar3 = param_1->RegInc[iVar4];
  puVar5 = param_1->RegisterData[iVar4];
  param_1->RegReadCount = iVar4 + 1;
  fVar1 = (float)puVar5[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar16 = (longlong)local_d0[0];
  local_b0[0] = 0;
  pfVar11 = pfVar11 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  lVar17 = (longlong)local_b0[0];
  local_c0[0] = 0;
  pfVar12 = pfVar12 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  pfVar13 = pfVar13 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8.Ptr);
  uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar8 = __real_3ff0000000000000;
  if (bVar10) {
    if (0 < param_1->NumInstances) {
      lVar14 = (longlong)local_c0[0];
      fVar2 = ((local_a8.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                  (local_a8.Ptr,(TVector<double> *)&local_98[0]._s_0,fVar1 * fVar2);
        iVar15 = iVar15 + 1;
        dVar19 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][0] +
                 (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][0] +
                 (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][0] +
                 ((local_a8.Ptr)->Transform).M[3][0] * 0.0;
        dVar20 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][1] +
                 (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][1] +
                 (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][1] +
                 ((local_a8.Ptr)->Transform).M[3][1] * 0.0;
        dVar7 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][2] +
                (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][2] +
                (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][2] +
                ((local_a8.Ptr)->Transform).M[3][2] * 0.0;
        dVar18 = dVar8 / SQRT(dVar20 * dVar20 + dVar19 * dVar19 + dVar7 * dVar7);
        *pfVar11 = (float)(dVar19 * dVar18);
        pfVar11 = pfVar11 + lVar16;
        *pfVar12 = (float)(dVar20 * dVar18);
        pfVar12 = pfVar12 + lVar17;
        *pfVar13 = (float)(dVar7 * dVar18);
        pfVar13 = pfVar13 + lVar14;
      } while (iVar15 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    fStack_d4 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_d8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar11 = local_d8;
      iVar15 = iVar15 + 1;
      *pfVar12 = fStack_d4;
      pfVar11 = pfVar11 + lVar16;
      *pfVar13 = (float)uVar9;
      pfVar12 = pfVar12 + lVar17;
      pfVar13 = pfVar13 + local_c0[0];
    } while (iVar15 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920d4d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FUserPtrHandler<FNDISpline_InstanceData> local_b8;
  undefined8 local_a8;
  int local_a0 [2];
  undefined1 local_98 [96];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_b8,param_1);
  iVar11 = 0;
  local_a0[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_98._8_4_ = 0;
  pfVar6 = pfVar6 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  uVar4 = local_98._8_4_;
  lVar12 = (longlong)(int)local_98._8_4_;
  local_98._8_4_ = 0;
  pfVar7 = pfVar7 + uVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  uVar4 = local_98._8_4_;
  lVar13 = (longlong)(int)local_98._8_4_;
  local_98._8_4_ = 0;
  pfVar8 = pfVar8 + uVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  pfVar9 = pfVar9 + local_98._8_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_b8.Ptr);
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = __real_3ff0000000000000;
  if (bVar5) {
    fVar1 = ((local_b8.Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)local_a0[0];
      local_b8._0_8_ = lVar13 << 2;
      local_a8 = (longlong)(int)local_98._8_4_ << 2;
      do {
        FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                  (local_b8.Ptr,(TVector<double> *)&((TVector<double>_u_0 *)local_98)->_s_0,
                   fVar1 * *pfVar6);
        dVar2 = (double)CONCAT44(local_98._12_4_,local_98._8_4_);
        iVar11 = iVar11 + 1;
        pfVar6 = pfVar6 + lVar10;
        dVar15 = (double)local_98._0_8_ * ((local_b8.Ptr)->Transform).M[0][0] +
                 dVar2 * ((local_b8.Ptr)->Transform).M[1][0] +
                 (double)local_98._16_8_ * ((local_b8.Ptr)->Transform).M[2][0] +
                 ((local_b8.Ptr)->Transform).M[3][0] * 0.0;
        dVar16 = (double)local_98._0_8_ * ((local_b8.Ptr)->Transform).M[0][1] +
                 dVar2 * ((local_b8.Ptr)->Transform).M[1][1] +
                 (double)local_98._16_8_ * ((local_b8.Ptr)->Transform).M[2][1] +
                 ((local_b8.Ptr)->Transform).M[3][1] * 0.0;
        dVar2 = dVar2 * ((local_b8.Ptr)->Transform).M[1][2] +
                (double)local_98._0_8_ * ((local_b8.Ptr)->Transform).M[0][2] +
                (double)local_98._16_8_ * ((local_b8.Ptr)->Transform).M[2][2] +
                ((local_b8.Ptr)->Transform).M[3][2] * 0.0;
        dVar14 = dVar3 / SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar2 * dVar2);
        *pfVar7 = (float)(dVar15 * dVar14);
        pfVar7 = pfVar7 + lVar12;
        *pfVar8 = (float)(dVar16 * dVar14);
        pfVar8 = (float *)((longlong)pfVar8 + local_b8._0_8_);
        *pfVar9 = (float)(dVar2 * dVar14);
        pfVar9 = (float *)((longlong)pfVar9 + local_a8);
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    local_a8._4_4_ =
         (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_a8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar7 = (float)local_a8;
      iVar11 = iVar11 + 1;
      *pfVar8 = local_a8._4_4_;
      pfVar7 = pfVar7 + lVar12;
      *pfVar9 = (float)uVar4;
      pfVar8 = pfVar8 + lVar13;
      pfVar9 = pfVar9 + (int)local_98._8_4_;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920d840

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  FNDISpline_InstanceData *this_00;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_80 [4];
  int local_70 [4];
  int local_60 [2];
  TVector<double>_u_0 local_58 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)local_98,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = param_1->RegReadCount;
  iVar12 = 0;
  local_80[0] = 0;
  bVar3 = param_1->RegInc[iVar4];
  puVar5 = param_1->RegisterData[iVar4];
  param_1->RegReadCount = iVar4 + 1;
  fVar1 = (float)puVar5[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar15 = (longlong)local_80[0];
  local_70[0] = 0;
  pfVar9 = pfVar9 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar13 = (longlong)local_70[0];
  local_60[0] = 0;
  pfVar10 = pfVar10 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar14 = (longlong)local_60[0];
  pfVar11 = pfVar11 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)CONCAT44(uStack_8c,local_90));
  uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar8) {
    if (0 < param_1->NumInstances) {
      this_00 = (FNDISpline_InstanceData *)CONCAT44(uStack_8c,local_90);
      fVar2 = (this_00->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                  (this_00,(TVector<double> *)&local_58[0]._s_0,fVar1 * fVar2);
        this_00 = (FNDISpline_InstanceData *)CONCAT44(uStack_8c,local_90);
        iVar12 = iVar12 + 1;
        *pfVar9 = (float)(double)local_58[0]._0_8_;
        pfVar9 = pfVar9 + lVar15;
        *pfVar10 = (float)(double)local_58[0]._8_8_;
        pfVar10 = pfVar10 + lVar13;
        *pfVar11 = (float)(double)local_58[0]._16_8_;
        pfVar11 = pfVar11 + lVar14;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    local_98._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_98._0_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar9 = (float)local_98._0_4_;
      iVar12 = iVar12 + 1;
      *pfVar10 = (float)local_98._4_4_;
      pfVar9 = pfVar9 + lVar15;
      *pfVar11 = (float)uVar7;
      pfVar10 = pfVar10 + lVar13;
      pfVar11 = pfVar11 + lVar14;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920da60

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float local_98;
  float fStack_94;
  int local_90 [4];
  int local_80 [2];
  undefined1 local_78 [24];
  FUserPtrHandler<FNDISpline_InstanceData> local_60 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_60,param_1);
  iVar9 = 0;
  local_90[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_78._8_4_ = 0;
  pfVar4 = pfVar4 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  uVar2 = local_78._8_4_;
  lVar12 = (longlong)(int)local_78._8_4_;
  local_78._8_4_ = 0;
  pfVar5 = pfVar5 + uVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  lVar10 = (longlong)(int)local_78._8_4_;
  local_80[0] = 0;
  pfVar6 = pfVar6 + local_78._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  pfVar7 = pfVar7 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_60[0].Ptr);
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar3) {
    fVar1 = ((local_60[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)(int)local_78._8_4_;
      lVar11 = (longlong)local_90[0];
      lVar8 = (longlong)local_80[0];
      do {
        FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
                  (local_60[0].Ptr,(TVector<double> *)&((TVector<double>_u_0 *)local_78)->_s_0,
                   fVar1 * *pfVar4);
        pfVar4 = pfVar4 + lVar11;
        iVar9 = iVar9 + 1;
        *pfVar5 = (float)(double)local_78._0_8_;
        pfVar5 = pfVar5 + lVar12;
        *pfVar6 = (float)(double)CONCAT44(local_78._12_4_,local_78._8_4_);
        pfVar6 = pfVar6 + lVar10;
        *pfVar7 = (float)(double)local_78._16_8_;
        pfVar7 = pfVar7 + lVar8;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    fStack_94 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_98 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar5 = local_98;
      iVar9 = iVar9 + 1;
      *pfVar6 = fStack_94;
      pfVar5 = pfVar5 + lVar12;
      *pfVar7 = (float)uVar2;
      pfVar6 = pfVar6 + lVar10;
      pfVar7 = pfVar7 + local_80[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920dc70

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_res10 [2];
  longlong local_res18;
  float local_d8;
  float fStack_d4;
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_a8;
  TVector<double>_u_0 local_98 [4];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_a8,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar13 = 0;
  local_d0[0] = 0;
  bVar2 = param_1->RegInc[iVar3];
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar14 = (longlong)local_d0[0];
  local_b0[0] = 0;
  pfVar10 = pfVar10 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  lVar15 = (longlong)local_b0[0];
  local_c0[0] = 0;
  pfVar11 = pfVar11 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  pfVar12 = pfVar12 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_a8.Ptr);
  uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar9) {
    fVar16 = FSplineCurves::GetSplineLength(&(local_a8.Ptr)->SplineCurves);
    dVar7 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      local_res18 = (longlong)local_c0[0] << 2;
      local_res10[0] = 0.0;
      do {
        fVar17 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&((local_a8.Ptr)->SplineCurves).ReparamTable,
                            fVar1 * fVar16,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_a8.Ptr)->SplineCurves,
                   (TVector<double> *)&local_98[0]._s_0,fVar17,
                   &UE::Math::TVector<double>::ZeroVector);
        iVar13 = iVar13 + 1;
        dVar19 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][0] +
                 (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][0] +
                 (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][0] +
                 ((local_a8.Ptr)->Transform).M[3][0] * 0.0;
        dVar20 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][1] +
                 (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][1] +
                 (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][1] +
                 ((local_a8.Ptr)->Transform).M[3][1] * 0.0;
        dVar6 = (double)local_98[0]._8_8_ * ((local_a8.Ptr)->Transform).M[1][2] +
                (double)local_98[0]._0_8_ * ((local_a8.Ptr)->Transform).M[0][2] +
                (double)local_98[0]._16_8_ * ((local_a8.Ptr)->Transform).M[2][2] +
                ((local_a8.Ptr)->Transform).M[3][2] * 0.0;
        dVar18 = dVar7 / SQRT(dVar20 * dVar20 + dVar19 * dVar19 + dVar6 * dVar6);
        *pfVar10 = (float)(dVar19 * dVar18);
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)(dVar20 * dVar18);
        pfVar11 = pfVar11 + lVar15;
        *pfVar12 = (float)(dVar6 * dVar18);
        pfVar12 = (float *)((longlong)pfVar12 + local_res18);
      } while (iVar13 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    fStack_d4 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_d8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar10 = local_d8;
      iVar13 = iVar13 + 1;
      *pfVar11 = fStack_d4;
      pfVar10 = pfVar10 + lVar14;
      *pfVar12 = (float)uVar8;
      pfVar11 = pfVar11 + lVar15;
      pfVar12 = pfVar12 + local_c0[0];
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920dff0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_res10 [2];
  float *local_res18;
  longlong local_res20;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8;
  longlong local_b8;
  int local_b0 [2];
  undefined8 local_a8;
  int local_a0 [2];
  undefined1 local_98 [96];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_c8,param_1);
  iVar9 = 0;
  local_a0[0] = 0;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_98._8_4_ = 0;
  local_res18 = local_res18 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  lVar10 = (longlong)(int)local_98._8_4_;
  local_b0[0] = 0;
  pfVar5 = pfVar5 + local_98._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98._8_4_ = 0;
  pfVar6 = pfVar6 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_98)->_s_0).Y);
  pfVar7 = pfVar7 + local_98._8_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8.Ptr);
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar4) {
    fVar11 = FSplineCurves::GetSplineLength(&(local_c8.Ptr)->SplineCurves);
    dVar2 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar8 = (longlong)local_a0[0];
      local_res20 = lVar8 * 4;
      local_c8._0_8_ = lVar10 << 2;
      local_b8 = (longlong)local_b0[0] << 2;
      local_a8 = (longlong)(int)local_98._8_4_ << 2;
      local_res10[0] = 0.0;
      do {
        fVar12 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&((local_c8.Ptr)->SplineCurves).ReparamTable,
                            fVar11 * *local_res18,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_c8.Ptr)->SplineCurves,
                   (TVector<double> *)&((TVector<double>_u_0 *)local_98)->_s_0,fVar12,
                   &UE::Math::TVector<double>::ZeroVector);
        dVar1 = (double)CONCAT44(local_98._12_4_,local_98._8_4_);
        local_res18 = local_res18 + lVar8;
        dVar14 = dVar1 * ((local_c8.Ptr)->Transform).M[1][0] +
                 (double)local_98._0_8_ * ((local_c8.Ptr)->Transform).M[0][0] +
                 (double)local_98._16_8_ * ((local_c8.Ptr)->Transform).M[2][0] +
                 ((local_c8.Ptr)->Transform).M[3][0] * 0.0;
        dVar15 = dVar1 * ((local_c8.Ptr)->Transform).M[1][1] +
                 (double)local_98._0_8_ * ((local_c8.Ptr)->Transform).M[0][1] +
                 (double)local_98._16_8_ * ((local_c8.Ptr)->Transform).M[2][1] +
                 ((local_c8.Ptr)->Transform).M[3][1] * 0.0;
        dVar1 = dVar1 * ((local_c8.Ptr)->Transform).M[1][2] +
                (double)local_98._0_8_ * ((local_c8.Ptr)->Transform).M[0][2] +
                (double)local_98._16_8_ * ((local_c8.Ptr)->Transform).M[2][2] +
                ((local_c8.Ptr)->Transform).M[3][2] * 0.0;
        dVar13 = dVar2 / SQRT(dVar15 * dVar15 + dVar14 * dVar14 + dVar1 * dVar1);
        *pfVar5 = (float)(dVar14 * dVar13);
        pfVar5 = (float *)((longlong)pfVar5 + local_c8._0_8_);
        *pfVar6 = (float)(dVar15 * dVar13);
        pfVar6 = (float *)((longlong)pfVar6 + local_b8);
        *pfVar7 = (float)(dVar1 * dVar13);
        pfVar7 = (float *)((longlong)pfVar7 + local_a8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    local_a8._4_4_ =
         (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_a8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar5 = (float)local_a8;
      iVar9 = iVar9 + 1;
      *pfVar6 = local_a8._4_4_;
      pfVar5 = pfVar5 + lVar10;
      *pfVar7 = (float)uVar3;
      pfVar6 = pfVar6 + local_b0[0];
      pfVar7 = pfVar7 + (int)local_98._8_4_;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920e350

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  FNDISpline_InstanceData *pFVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float local_res10 [2];
  FInterpCurve<float> *local_res18;
  float local_a8;
  float fStack_a4;
  int local_a0 [4];
  int local_90 [4];
  int local_80 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_78;
  TVector<double>_u_0 local_68 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_78,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar12 = 0;
  local_a0[0] = 0;
  bVar2 = param_1->RegInc[iVar3];
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  lVar13 = (longlong)local_a0[0];
  local_80[0] = 0;
  pfVar9 = pfVar9 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar14 = (longlong)local_80[0];
  local_90[0] = 0;
  pfVar10 = pfVar10 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pFVar7 = local_78.Ptr;
  pfVar11 = pfVar11 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_78.Ptr);
  uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar8) {
    fVar16 = FSplineCurves::GetSplineLength(&pFVar7->SplineCurves);
    if (0 < param_1->NumInstances) {
      local_res18 = (FInterpCurve<float> *)&(pFVar7->SplineCurves).ReparamTable;
      local_res10[0] = 0.0;
      lVar15 = (longlong)local_90[0];
      do {
        fVar17 = FInterpCurve<float>::Eval(local_res18,fVar1 * fVar16,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_78.Ptr)->SplineCurves,
                   (TVector<double> *)&local_68[0]._s_0,fVar17,
                   &UE::Math::TVector<double>::ZeroVector);
        iVar12 = iVar12 + 1;
        *pfVar9 = (float)(double)local_68[0]._0_8_;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)(double)local_68[0]._8_8_;
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)(double)local_68[0]._16_8_;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    fStack_a4 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_a8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar9 = local_a8;
      iVar12 = iVar12 + 1;
      *pfVar10 = fStack_a4;
      pfVar9 = pfVar9 + lVar13;
      *pfVar11 = (float)uVar6;
      pfVar10 = pfVar10 + lVar14;
      pfVar11 = pfVar11 + local_90[0];
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920e5b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineTangentByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  FNDISpline_InstanceData *pFVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  int local_b0 [2];
  undefined8 local_a8;
  int local_90 [4];
  int local_80 [2];
  undefined1 local_78 [24];
  FUserPtrHandler<FNDISpline_InstanceData> local_60 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_60,param_1);
  iVar9 = 0;
  local_78._8_4_ = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_78)->_s_0).Y);
  local_b0[0] = 0;
  pfVar4 = pfVar4 + local_78._8_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_90[0] = 0;
  pfVar5 = pfVar5 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_80[0] = 0;
  pfVar6 = pfVar6 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  pFVar2 = local_60[0].Ptr;
  pfVar7 = pfVar7 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_60[0].Ptr);
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar3) {
    fVar11 = FSplineCurves::GetSplineLength(&pFVar2->SplineCurves);
    if (0 < param_1->NumInstances) {
      local_a8 = (FInterpCurve<float> *)&(pFVar2->SplineCurves).ReparamTable;
      lVar10 = (longlong)(int)local_78._8_4_;
      local_res18 = (longlong)local_b0[0] << 2;
      local_res20 = (longlong)local_90[0] << 2;
      lVar8 = (longlong)local_80[0];
      local_res10[0] = 0.0;
      do {
        fVar12 = FInterpCurve<float>::Eval(local_a8,fVar11 * *pfVar4,local_res10);
        FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                  ((FInterpCurve<UE::Math::TVector<double>_> *)&(local_60[0].Ptr)->SplineCurves,
                   (TVector<double> *)&((TVector<double>_u_0 *)local_78)->_s_0,fVar12,
                   &UE::Math::TVector<double>::ZeroVector);
        pfVar4 = pfVar4 + lVar10;
        iVar9 = iVar9 + 1;
        *pfVar5 = (float)(double)local_78._0_8_;
        pfVar5 = (float *)((longlong)pfVar5 + local_res18);
        *pfVar6 = (float)(double)CONCAT44(local_78._12_4_,local_78._8_4_);
        pfVar6 = (float *)((longlong)pfVar6 + local_res20);
        *pfVar7 = (float)(double)local_78._16_8_;
        pfVar7 = pfVar7 + lVar8;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    local_a8._4_4_ =
         (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_a8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      *pfVar5 = (float)local_a8;
      iVar9 = iVar9 + 1;
      *pfVar6 = local_a8._4_4_;
      pfVar5 = pfVar5 + local_b0[0];
      *pfVar7 = (float)uVar1;
      pfVar6 = pfVar6 + local_90[0];
      pfVar7 = pfVar7 + local_80[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920e7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_130 [4];
  int local_120 [4];
  int local_110 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar4 = param_1->RegReadCount;
  iVar14 = 0;
  bVar3 = param_1->RegInc[iVar4];
  local_120[0] = 0;
  puVar5 = param_1->RegisterData[iVar4];
  param_1->RegReadCount = iVar4 + 1;
  fVar1 = (float)puVar5[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar15 = (longlong)local_120[0];
  local_110[0] = 0;
  pfVar10 = pfVar10 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar16 = (longlong)local_110[0];
  local_130[0] = 0;
  pfVar11 = pfVar11 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_130);
  pfVar12 = pfVar12 + local_130[0] * param_1->PerInstanceFnInstanceIdx;
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  dVar17 = _UNK_150689518;
  dVar7 = ___xmm_00000000000000003ff0000000000000;
  dVar8 = __real_3ff0000000000000;
  if (bVar9) {
    if (0 < param_1->NumInstances) {
      lVar13 = (longlong)local_130[0];
      fVar2 = ((local_108.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_108.Ptr,local_f8,fVar1 * fVar2,Local);
        dVar7 = local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar7 = dVar7 + dVar7;
        dVar19 = local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar18 = dVar18 + dVar18;
        dVar21 = (local_f8[0].Y * dVar18 - local_f8[0].Z * dVar19) +
                 local_f8[0].W * dVar7 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar17 = (local_f8[0].Z * dVar7 - local_f8[0].X * dVar18) +
                 local_f8[0].W * dVar19 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar7 = (local_f8[0].X * dVar19 - local_f8[0].Y * dVar7) +
                local_f8[0].W * dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][0] +
                 dVar7 * ((local_108.Ptr)->Transform).M[2][0] +
                 ((local_108.Ptr)->Transform).M[3][0] * 0.0;
        dVar19 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][1] +
                 dVar7 * ((local_108.Ptr)->Transform).M[2][1] +
                 ((local_108.Ptr)->Transform).M[3][1] * 0.0;
        iVar14 = iVar14 + 1;
        dVar7 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
                dVar21 * ((local_108.Ptr)->Transform).M[0][2] +
                dVar7 * ((local_108.Ptr)->Transform).M[2][2] +
                ((local_108.Ptr)->Transform).M[3][2] * 0.0;
        dVar17 = dVar8 / SQRT(dVar19 * dVar19 + dVar18 * dVar18 + dVar7 * dVar7);
        *pfVar10 = (float)(dVar17 * dVar18);
        pfVar10 = pfVar10 + lVar15;
        *pfVar11 = (float)(dVar17 * dVar19);
        pfVar11 = pfVar11 + lVar16;
        *pfVar12 = (float)(dVar17 * dVar7);
        pfVar12 = pfVar12 + lVar13;
      } while (iVar14 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar14 = iVar14 + 1;
      dVar21 = ((local_108.Ptr)->Transform).M[1][0] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][0] * 0.0 +
               dVar7 * ((local_108.Ptr)->Transform).M[2][0] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][0];
      dVar20 = ((local_108.Ptr)->Transform).M[1][1] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][1] * 0.0 +
               dVar7 * ((local_108.Ptr)->Transform).M[2][1] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][1];
      dVar18 = ((local_108.Ptr)->Transform).M[1][2] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][2] * 0.0 +
               dVar7 * ((local_108.Ptr)->Transform).M[2][2] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][2];
      dVar19 = dVar8 / SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar18 * dVar18);
      *pfVar10 = (float)(dVar19 * dVar21);
      pfVar10 = pfVar10 + lVar15;
      *pfVar11 = (float)(dVar19 * dVar20);
      pfVar11 = pfVar11 + lVar16;
      *pfVar12 = (float)(dVar19 * dVar18);
      pfVar12 = pfVar12 + local_130[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920ed50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double this_00;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_110 [2];
  longlong local_108;
  int local_100 [2];
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)local_f8,param_1);
  iVar11 = 0;
  local_110[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_100[0] = 0;
  pfVar6 = pfVar6 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar12 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar7 = pfVar7 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar4 = local_100[0];
  lVar13 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar8 = pfVar8 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  this_00 = local_f8[0].Y;
  pfVar9 = pfVar9 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_f8[0].Y);
  dVar14 = _UNK_150689518;
  dVar2 = ___xmm_00000000000000003ff0000000000000;
  dVar3 = __real_3ff0000000000000;
  if (bVar5) {
    fVar1 = ((FNiagaraDataInterfaceSplineLUT *)((longlong)this_00 + 0x268))->SplineLength;
    if (0 < param_1->NumInstances) {
      lVar10 = (longlong)local_110[0];
      local_108 = (longlong)local_100[0] << 2;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  ((FNDISpline_InstanceData *)this_00,local_f8,fVar1 * *pfVar6,Local);
        dVar2 = local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar2 = dVar2 + dVar2;
        dVar16 = local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar16 = dVar16 + dVar16;
        dVar15 = local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar15 = dVar15 + dVar15;
        dVar18 = (local_f8[0].Y * dVar15 - local_f8[0].Z * dVar16) +
                 local_f8[0].W * dVar2 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar14 = (local_f8[0].Z * dVar2 - local_f8[0].X * dVar15) +
                 local_f8[0].W * dVar16 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar2 = (local_f8[0].X * dVar16 - local_f8[0].Y * dVar2) +
                local_f8[0].W * dVar15 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
                 dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
        dVar16 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
                 dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
        iVar11 = iVar11 + 1;
        pfVar6 = pfVar6 + lVar10;
        dVar2 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
                dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
                dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
                ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
        dVar14 = dVar3 / SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar2 * dVar2);
        *pfVar7 = (float)(dVar14 * dVar15);
        pfVar7 = pfVar7 + lVar12;
        *pfVar8 = (float)(dVar14 * dVar16);
        pfVar8 = pfVar8 + lVar13;
        *pfVar9 = (float)(dVar14 * dVar2);
        pfVar9 = (float *)((longlong)pfVar9 + local_108);
      } while (iVar11 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar11 = iVar11 + 1;
      dVar18 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] * 0.0 +
               dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0];
      dVar17 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] * 0.0 +
               dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1];
      dVar15 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] * 0.0 +
               dVar2 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2];
      dVar16 = dVar3 / SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar15 * dVar15);
      *pfVar7 = (float)(dVar16 * dVar18);
      pfVar7 = pfVar7 + lVar12;
      *pfVar8 = (float)(dVar16 * dVar17);
      pfVar8 = pfVar8 + lVar13;
      *pfVar9 = (float)(dVar16 * dVar15);
      pfVar9 = pfVar9 + local_100[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 14920f2e0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  TQuat<double> local_c8 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = param_1->RegReadCount;
  iVar15 = 0;
  local_f0[0] = 0;
  bVar3 = param_1->RegInc[iVar11];
  puVar4 = param_1->RegisterData[iVar11];
  param_1->RegReadCount = iVar11 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar3 * param_1->PerInstanceFnInstanceIdx)];
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  lVar18 = (longlong)local_f0[0];
  local_e0[0] = 0;
  pfVar12 = pfVar12 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar16 = (longlong)local_e0[0];
  local_d0[0] = 0;
  pfVar13 = pfVar13 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar17 = (longlong)local_d0[0];
  pfVar14 = pfVar14 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  if (bVar10) {
    if (0 < param_1->NumInstances) {
      fVar2 = ((local_108.Ptr)->SplineLUT).SplineLength;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_108.Ptr,local_c8,fVar1 * fVar2,Local);
        uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        iVar15 = iVar15 + 1;
        dVar8 = local_c8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_c8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar8 = dVar8 + dVar8;
        dVar7 = local_c8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                local_c8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar7 = dVar7 + dVar7;
        dVar6 = local_c8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                local_c8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar6 = dVar6 + dVar6;
        dVar19 = local_c8[0].W * dVar7 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        *pfVar12 = (float)((local_c8[0].Y * dVar6 - dVar7 * local_c8[0].Z) +
                          local_c8[0].W * dVar8 +
                          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X);
        pfVar12 = pfVar12 + lVar18;
        *pfVar13 = (float)((dVar8 * local_c8[0].Z - local_c8[0].X * dVar6) + dVar19);
        pfVar13 = pfVar13 + lVar16;
        *pfVar14 = (float)((local_c8[0].X * dVar7 - local_c8[0].Y * dVar8) +
                          local_c8[0].W * dVar6 + (double)uVar9);
        pfVar14 = pfVar14 + lVar17;
      } while (iVar15 < param_1->NumInstances);
    }
  }
  else {
    iVar11 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar12 = 0.0;
        iVar11 = iVar11 + 1;
        *pfVar13 = 0.0;
        pfVar12 = pfVar12 + lVar18;
        *pfVar14 = 1.0;
        pfVar13 = pfVar13 + lVar16;
        pfVar14 = pfVar14 + lVar17;
      } while (iVar11 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920f630

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,1>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  int local_f0 [2];
  TQuat<double> local_e8;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8 [9];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_c8,param_1);
  iVar12 = 0;
  local_f0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e8.Y._0_4_ = 0;
  pfVar8 = pfVar8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar13 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar9 = pfVar9 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar14 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar10 = pfVar10 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  lVar15 = (longlong)local_e8.Y._0_4_;
  pfVar11 = pfVar11 + local_e8.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8[0].Ptr);
  if (bVar6) {
    fVar1 = ((local_c8[0].Ptr)->SplineLUT).SplineLength;
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)local_f0[0];
      lVar15 = (longlong)local_e8.Y._0_4_;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
                  (local_c8[0].Ptr,&local_e8,fVar1 * *pfVar8,Local);
        uVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        iVar12 = iVar12 + 1;
        dVar4 = (double)CONCAT44(local_e8.Y._4_4_,local_e8.Y._0_4_);
        pfVar8 = pfVar8 + lVar16;
        dVar3 = dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_e8.Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar3 = dVar3 + dVar3;
        dVar2 = local_e8.Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                local_e8.X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar18 = local_e8.X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar2 = dVar2 + dVar2;
        dVar18 = dVar18 + dVar18;
        dVar17 = local_e8.W * dVar2 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        *pfVar9 = (float)((dVar18 * dVar4 - local_e8.Z * dVar2) +
                         local_e8.W * dVar3 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X)
        ;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)((local_e8.Z * dVar3 - local_e8.X * dVar18) + dVar17);
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)((local_e8.X * dVar2 - dVar3 * dVar4) +
                          local_e8.W * dVar18 + (double)uVar5);
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar9 = 0.0;
        iVar7 = iVar7 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        *pfVar11 = 1.0;
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_> @ 14920f980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_130 [4];
  int local_120 [4];
  int local_110 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_1->RegReadCount;
  iVar13 = 0;
  bVar2 = param_1->RegInc[iVar3];
  local_120[0] = 0;
  puVar4 = param_1->RegisterData[iVar3];
  param_1->RegReadCount = iVar3 + 1;
  fVar1 = (float)puVar4[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar14 = (longlong)local_120[0];
  local_110[0] = 0;
  pfVar9 = pfVar9 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  lVar15 = (longlong)local_110[0];
  local_130[0] = 0;
  pfVar10 = pfVar10 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_130);
  pfVar11 = pfVar11 + local_130[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  dVar17 = _UNK_150689518;
  dVar6 = ___xmm_00000000000000003ff0000000000000;
  dVar7 = __real_3ff0000000000000;
  if (bVar8) {
    fVar16 = FSplineCurves::GetSplineLength(&(local_108.Ptr)->SplineCurves);
    dVar7 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar12 = (longlong)local_130[0];
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_108.Ptr,local_f8,fVar1 * fVar16,Local);
        dVar6 = local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar6 = dVar6 + dVar6;
        dVar19 = local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar18 = dVar18 + dVar18;
        dVar21 = (local_f8[0].Y * dVar18 - local_f8[0].Z * dVar19) +
                 local_f8[0].W * dVar6 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar17 = (local_f8[0].Z * dVar6 - local_f8[0].X * dVar18) +
                 local_f8[0].W * dVar19 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar6 = (local_f8[0].X * dVar19 - local_f8[0].Y * dVar6) +
                local_f8[0].W * dVar18 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar18 = dVar17 * ((local_108.Ptr)->Transform).M[1][0] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][0] +
                 dVar6 * ((local_108.Ptr)->Transform).M[2][0] +
                 ((local_108.Ptr)->Transform).M[3][0] * 0.0;
        dVar19 = dVar17 * ((local_108.Ptr)->Transform).M[1][1] +
                 dVar21 * ((local_108.Ptr)->Transform).M[0][1] +
                 dVar6 * ((local_108.Ptr)->Transform).M[2][1] +
                 ((local_108.Ptr)->Transform).M[3][1] * 0.0;
        iVar13 = iVar13 + 1;
        dVar6 = dVar17 * ((local_108.Ptr)->Transform).M[1][2] +
                dVar21 * ((local_108.Ptr)->Transform).M[0][2] +
                dVar6 * ((local_108.Ptr)->Transform).M[2][2] +
                ((local_108.Ptr)->Transform).M[3][2] * 0.0;
        dVar17 = dVar7 / SQRT(dVar19 * dVar19 + dVar18 * dVar18 + dVar6 * dVar6);
        *pfVar9 = (float)(dVar17 * dVar18);
        pfVar9 = pfVar9 + lVar14;
        *pfVar10 = (float)(dVar17 * dVar19);
        pfVar10 = pfVar10 + lVar15;
        *pfVar11 = (float)(dVar17 * dVar6);
        pfVar11 = pfVar11 + lVar12;
      } while (iVar13 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar13 = iVar13 + 1;
      dVar21 = ((local_108.Ptr)->Transform).M[1][0] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][0] * 0.0 +
               dVar6 * ((local_108.Ptr)->Transform).M[2][0] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][0];
      dVar20 = ((local_108.Ptr)->Transform).M[1][1] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][1] * 0.0 +
               dVar6 * ((local_108.Ptr)->Transform).M[2][1] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][1];
      dVar18 = ((local_108.Ptr)->Transform).M[1][2] * 0.0 +
               ((local_108.Ptr)->Transform).M[0][2] * 0.0 +
               dVar6 * ((local_108.Ptr)->Transform).M[2][2] +
               dVar17 * ((local_108.Ptr)->Transform).M[3][2];
      dVar19 = dVar7 / SQRT(dVar20 * dVar20 + dVar21 * dVar21 + dVar18 * dVar18);
      *pfVar9 = (float)(dVar19 * dVar21);
      pfVar9 = pfVar9 + lVar14;
      *pfVar10 = (float)(dVar19 * dVar20);
      pfVar10 = pfVar10 + lVar15;
      *pfVar11 = (float)(dVar19 * dVar18);
      pfVar11 = pfVar11 + local_130[0];
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_> @ 14920ff00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandler,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double this_00;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_110 [2];
  longlong local_108;
  int local_100 [2];
  TQuat<double> local_f8 [6];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            ((FUserPtrHandler<FNDISpline_InstanceData> *)local_f8,param_1);
  iVar10 = 0;
  local_110[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_100[0] = 0;
  pfVar5 = pfVar5 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar3 = local_100[0];
  lVar11 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar6 = pfVar6 + iVar3 * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  iVar3 = local_100[0];
  lVar12 = (longlong)local_100[0];
  local_100[0] = 0;
  pfVar7 = pfVar7 + iVar3 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  this_00 = local_f8[0].Y;
  pfVar8 = pfVar8 + local_100[0] * param_1->PerInstanceFnInstanceIdx;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_f8[0].Y);
  dVar14 = _UNK_150689518;
  dVar1 = ___xmm_00000000000000003ff0000000000000;
  dVar2 = __real_3ff0000000000000;
  if (bVar4) {
    fVar13 = FSplineCurves::GetSplineLength((FSplineCurves *)((longlong)this_00 + 0x200));
    dVar2 = __real_3ff0000000000000;
    if (0 < param_1->NumInstances) {
      lVar9 = (longlong)local_110[0];
      local_108 = (longlong)local_100[0] << 2;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  ((FNDISpline_InstanceData *)this_00,local_f8,fVar13 * *pfVar5,Local);
        dVar1 = local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar1 = dVar1 + dVar1;
        dVar16 = local_f8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                 local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar16 = dVar16 + dVar16;
        dVar15 = local_f8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 local_f8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar15 = dVar15 + dVar15;
        dVar18 = (local_f8[0].Y * dVar15 - local_f8[0].Z * dVar16) +
                 local_f8[0].W * dVar1 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar14 = (local_f8[0].Z * dVar1 - local_f8[0].X * dVar15) +
                 local_f8[0].W * dVar16 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar1 = (local_f8[0].X * dVar16 - local_f8[0].Y * dVar1) +
                local_f8[0].W * dVar15 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar15 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] +
                 dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0] * 0.0;
        dVar16 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] +
                 dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] +
                 dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
                 ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1] * 0.0;
        iVar10 = iVar10 + 1;
        pfVar5 = pfVar5 + lVar9;
        dVar1 = dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] +
                dVar18 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] +
                dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
                ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2] * 0.0;
        dVar14 = dVar2 / SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar1 * dVar1);
        *pfVar6 = (float)(dVar14 * dVar15);
        pfVar6 = pfVar6 + lVar11;
        *pfVar7 = (float)(dVar14 * dVar16);
        pfVar7 = pfVar7 + lVar12;
        *pfVar8 = (float)(dVar14 * dVar1);
        pfVar8 = (float *)((longlong)pfVar8 + local_108);
      } while (iVar10 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      dVar18 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][0] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][0] * 0.0 +
               dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][0] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][0];
      dVar17 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][1] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][1] * 0.0 +
               dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][1] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][1];
      dVar15 = ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[1][2] * 0.0 +
               ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[0][2] * 0.0 +
               dVar1 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[2][2] +
               dVar14 * ((TMatrix<double> *)((longlong)this_00 + 0x70))->M[3][2];
      dVar16 = dVar2 / SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar15 * dVar15);
      *pfVar6 = (float)(dVar16 * dVar18);
      pfVar6 = pfVar6 + lVar11;
      *pfVar7 = (float)(dVar16 * dVar17);
      pfVar7 = pfVar7 + lVar12;
      *pfVar8 = (float)(dVar16 * dVar15);
      pfVar8 = pfVar8 + local_100[0];
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_> @ 149210490

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncConstHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  FUserPtrHandler<FNDISpline_InstanceData> local_108;
  int local_f0 [4];
  int local_e0 [4];
  int local_d0 [2];
  TQuat<double> local_c8 [5];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_108,param_1);
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegReadCount < NumRegisters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                         ,0x160,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = param_1->RegReadCount;
  iVar13 = 0;
  local_f0[0] = 0;
  bVar2 = param_1->RegInc[iVar9];
  puVar3 = param_1->RegisterData[iVar9];
  param_1->RegReadCount = iVar9 + 1;
  fVar1 = (float)puVar3[(int)((uint)bVar2 * param_1->PerInstanceFnInstanceIdx)];
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  lVar16 = (longlong)local_f0[0];
  local_e0[0] = 0;
  pfVar10 = pfVar10 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar14 = (longlong)local_e0[0];
  local_d0[0] = 0;
  pfVar11 = pfVar11 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  lVar15 = (longlong)local_d0[0];
  pfVar12 = pfVar12 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_108.Ptr);
  if (bVar8) {
    fVar17 = FSplineCurves::GetSplineLength(&(local_108.Ptr)->SplineCurves);
    if (0 < param_1->NumInstances) {
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_108.Ptr,local_c8,fVar1 * fVar17,Local);
        uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        iVar13 = iVar13 + 1;
        dVar6 = local_c8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_c8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar6 = dVar6 + dVar6;
        dVar5 = local_c8[0].Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                local_c8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar5 = dVar5 + dVar5;
        dVar19 = local_c8[0].X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                 local_c8[0].Y * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar19 = dVar19 + dVar19;
        dVar18 = local_c8[0].W * dVar5 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        *pfVar10 = (float)((local_c8[0].Y * dVar19 - local_c8[0].Z * dVar5) +
                          local_c8[0].W * dVar6 +
                          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X);
        pfVar10 = pfVar10 + lVar16;
        *pfVar11 = (float)((local_c8[0].Z * dVar6 - local_c8[0].X * dVar19) + dVar18);
        pfVar11 = pfVar11 + lVar14;
        *pfVar12 = (float)((local_c8[0].X * dVar5 - local_c8[0].Y * dVar6) +
                          local_c8[0].W * dVar19 + (double)uVar7);
        pfVar12 = pfVar12 + lVar15;
      } while (iVar13 < param_1->NumInstances);
    }
  }
  else {
    iVar9 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar10 = 0.0;
        iVar9 = iVar9 + 1;
        *pfVar11 = 0.0;
        pfVar10 = pfVar10 + lVar16;
        *pfVar12 = 1.0;
        pfVar11 = pfVar11 + lVar14;
        pfVar12 = pfVar12 + lVar15;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  return;
}

// SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_> @ 1492107e0

void __thiscall
UNiagaraDataInterfaceSpline::
SampleSplineUpVectorByUnitDistance<TIntegralConstant<bool,0>,FNDITransformHandlerNoop,VectorVM::FExternalFuncRegisterHandler<float>_>
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  int local_f0 [2];
  TQuat<double> local_e8;
  FUserPtrHandler<FNDISpline_InstanceData> local_c8 [9];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_c8,param_1);
  iVar12 = 0;
  local_f0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f0);
  local_e8.Y._0_4_ = 0;
  pfVar8 = pfVar8 + local_f0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar13 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar9 = pfVar9 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  iVar7 = local_e8.Y._0_4_;
  lVar14 = (longlong)local_e8.Y._0_4_;
  local_e8.Y._0_4_ = 0;
  pfVar10 = pfVar10 + iVar7 * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_e8.Y);
  lVar15 = (longlong)local_e8.Y._0_4_;
  pfVar11 = pfVar11 + local_e8.Y._0_4_ * param_1->PerInstanceFnInstanceIdx;
  bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_c8[0].Ptr);
  if (bVar6) {
    fVar17 = FSplineCurves::GetSplineLength(&(local_c8[0].Ptr)->SplineCurves);
    if (0 < param_1->NumInstances) {
      lVar16 = (longlong)local_f0[0];
      lVar15 = (longlong)local_e8.Y._0_4_;
      do {
        FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
                  (local_c8[0].Ptr,&local_e8,fVar17 * *pfVar8,Local);
        uVar5 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        iVar12 = iVar12 + 1;
        dVar4 = (double)CONCAT44(local_e8.Y._4_4_,local_e8.Y._0_4_);
        pfVar8 = pfVar8 + lVar16;
        dVar3 = dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
                local_e8.Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        dVar3 = dVar3 + dVar3;
        dVar2 = local_e8.Z * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
                local_e8.X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
        dVar2 = dVar2 + dVar2;
        dVar1 = local_e8.X * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
                dVar4 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
        dVar1 = dVar1 + dVar1;
        dVar18 = local_e8.W * dVar2 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
        *pfVar9 = (float)((dVar4 * dVar1 - dVar2 * local_e8.Z) +
                         local_e8.W * dVar3 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X)
        ;
        pfVar9 = pfVar9 + lVar13;
        *pfVar10 = (float)((dVar3 * local_e8.Z - local_e8.X * dVar1) + dVar18);
        pfVar10 = pfVar10 + lVar14;
        *pfVar11 = (float)((local_e8.X * dVar2 - dVar4 * dVar3) + local_e8.W * dVar1 + (double)uVar5
                          );
        pfVar11 = pfVar11 + lVar15;
      } while (iVar12 < param_1->NumInstances);
    }
  }
  else {
    iVar7 = 0;
    if (0 < param_1->NumInstances) {
      do {
        *pfVar9 = 0.0;
        iVar7 = iVar7 + 1;
        *pfVar10 = 0.0;
        pfVar9 = pfVar9 + lVar13;
        *pfVar11 = 1.0;
        pfVar10 = pfVar10 + lVar14;
        pfVar11 = pfVar11 + lVar15;
      } while (iVar7 < param_1->NumInstances);
    }
  }
  return;
}

// UNiagaraDataInterfaceSpline @ 149213480

UNiagaraDataInterfaceSpline * __thiscall
UNiagaraDataInterfaceSpline::UNiagaraDataInterfaceSpline
          (UNiagaraDataInterfaceSpline *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpline__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SplineUserParameter);
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  return this;
}

// UNiagaraDataInterfaceSpline @ 149213520

UNiagaraDataInterfaceSpline * __thiscall
UNiagaraDataInterfaceSpline::UNiagaraDataInterfaceSpline
          (UNiagaraDataInterfaceSpline *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar4 = (undefined8 *)0x0;
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpline__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->SoftSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SplineUserParameter);
  this->bUseLUT = false;
  this->NumLUTSteps = 0x100;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&local_res8,
                     (FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->SplineUserParameter).Parameter._padding_ = iVar2;
  puVar3 = ::operator_new(0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &___7FNiagaraDataInterfaceProxySpline__6B_;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    puVar3[10] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)this->_padding_;
  if ((puVar3 != puVar4) && (this->_padding_ = (longlong)puVar4, puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x448);
    if (pcVar1 != UNiagaraDataInterface::PushToRenderThreadImpl) {
      (*pcVar1)(this);
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return this;
}

// ~UNiagaraDataInterfaceSpline @ 149215fa0

void __thiscall
UNiagaraDataInterfaceSpline::~UNiagaraDataInterfaceSpline(UNiagaraDataInterfaceSpline *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSpline__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNDISpline_InstanceData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->SplineUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 149218c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FReadBuffer *this_00;
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  FName FVar7;
  FRHIBuffer *pFVar8;
  FRHIShaderResourceView *pFVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  bool bVar26;
  FNDISpline_InstanceData_RenderThread *pFVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar29;
  FThreadStats *pFVar30;
  FThreadStatsPool *pFVar31;
  void *pvVar32;
  float *pfVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  longlong lVar39;
  uchar auVar40 [8];
  uchar auVar41 [8];
  uchar auVar42 [8];
  uchar auVar43 [8];
  uchar auVar44 [8];
  uchar auVar45 [8];
  ulonglong uVar46;
  undefined1 auStackY_378 [32];
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  FStatMessage local_2c8;
  FStatMessage local_2b8;
  FStatMessage local_2a8;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  FStatMessage local_288;
  FStatMessage local_278;
  FStatMessage local_268;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8 [2];
  float afStack_1d0 [2];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double dStack_130;
  TMatrix<float> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar27 = TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
                        *)(*(longlong *)this + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  dVar5 = *(double *)((longlong)this + 0x40);
  dVar6 = *(double *)((longlong)this + 0x48);
  dVar12 = *(double *)((longlong)this + 0x30);
  dVar13 = *(double *)((longlong)this + 0x38);
  dVar14 = *(double *)((longlong)this + 0x60);
  dVar15 = *(double *)((longlong)this + 0x68);
  dVar16 = *(double *)((longlong)this + 0x50);
  dVar17 = *(double *)((longlong)this + 0x58);
  dVar18 = *(double *)((longlong)this + 0x80);
  dVar19 = *(double *)((longlong)this + 0x88);
  dVar20 = *(double *)((longlong)this + 0x70);
  dVar21 = *(double *)((longlong)this + 0x78);
  dVar22 = *(double *)((longlong)this + 0x20);
  dVar23 = *(double *)((longlong)this + 0x28);
  dVar24 = *(double *)((longlong)this + 0x18);
  (pFVar27->SplineTransform).M[0][0] = (float)*(double *)((longlong)this + 0x10);
  (pFVar27->SplineTransform).M[0][1] = (float)dVar24;
  (pFVar27->SplineTransform).M[0][2] = (float)dVar22;
  (pFVar27->SplineTransform).M[0][3] = (float)dVar23;
  (pFVar27->SplineTransform).M[1][0] = (float)dVar12;
  (pFVar27->SplineTransform).M[1][1] = (float)dVar13;
  (pFVar27->SplineTransform).M[1][2] = (float)dVar5;
  (pFVar27->SplineTransform).M[1][3] = (float)dVar6;
  (pFVar27->SplineTransform).M[2][0] = (float)dVar16;
  (pFVar27->SplineTransform).M[2][1] = (float)dVar17;
  (pFVar27->SplineTransform).M[2][2] = (float)dVar14;
  (pFVar27->SplineTransform).M[2][3] = (float)dVar15;
  (pFVar27->SplineTransform).M[3][0] = (float)dVar20;
  (pFVar27->SplineTransform).M[3][1] = (float)dVar21;
  (pFVar27->SplineTransform).M[3][2] = (float)dVar18;
  (pFVar27->SplineTransform).M[3][3] = (float)dVar19;
  local_188 = *(double *)((longlong)this + 0x30);
  dStack_180 = *(double *)((longlong)this + 0x38);
  local_198 = *(double *)((longlong)this + 0x20);
  dStack_190 = *(double *)((longlong)this + 0x28);
  local_178 = *(double *)((longlong)this + 0x40);
  dStack_170 = *(double *)((longlong)this + 0x48);
  local_1a8 = *(double *)((longlong)this + 0x10);
  dStack_1a0 = *(double *)((longlong)this + 0x18);
  local_158 = *(double *)((longlong)this + 0x60);
  dStack_150 = *(double *)((longlong)this + 0x68);
  dStack_130 = *(double *)((longlong)this + 0x88);
  local_168 = *(double *)((longlong)this + 0x50);
  dStack_160 = *(double *)((longlong)this + 0x58);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  (pFVar27->SplineTransformRotationMat).M[0][0] = (float)local_1a8;
  (pFVar27->SplineTransformRotationMat).M[0][1] = (float)dStack_1a0;
  (pFVar27->SplineTransformRotationMat).M[0][2] = (float)local_198;
  (pFVar27->SplineTransformRotationMat).M[0][3] = (float)dStack_190;
  *(ulonglong *)(pFVar27->SplineTransformRotationMat).M[1] =
       CONCAT44((float)dStack_180,(float)local_188);
  *(ulonglong *)((pFVar27->SplineTransformRotationMat).M[1] + 2) =
       CONCAT44((float)dStack_170,(float)local_178);
  (pFVar27->SplineTransformRotationMat).M[2][0] = (float)local_168;
  (pFVar27->SplineTransformRotationMat).M[2][1] = (float)dStack_160;
  (pFVar27->SplineTransformRotationMat).M[2][2] = (float)local_158;
  (pFVar27->SplineTransformRotationMat).M[2][3] = (float)dStack_150;
  *(float *)((longlong)((pFVar27->SplineTransformRotationMat).M + 3) + 0) = 0.0;
  *(float *)((longlong)((pFVar27->SplineTransformRotationMat).M + 3) + 4) = 0.0;
  *(ulonglong *)((pFVar27->SplineTransformRotationMat).M[3] + 2) =
       (ulonglong)(uint)(float)dStack_130 << 0x20;
  fVar25 = __real_322bcc77;
  UE::Math::TMatrix<float>::RemoveScaling(&pFVar27->SplineTransformRotationMat,__real_322bcc77);
  if ((((float)((uint)(pFVar27->SplineTransform).M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= fVar25) &&
      ((float)((uint)(pFVar27->SplineTransform).M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       fVar25)) &&
     ((float)((uint)(pFVar27->SplineTransform).M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      fVar25)) {
    if ((((float)((uint)(pFVar27->SplineTransform).M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)
          <= fVar25) &&
        ((float)((uint)(pFVar27->SplineTransform).M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff)
         <= fVar25)) &&
       ((float)((uint)(pFVar27->SplineTransform).M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= fVar25)) {
      if ((((float)((uint)(pFVar27->SplineTransform).M[2][0] &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar25) &&
          ((float)((uint)(pFVar27->SplineTransform).M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff
                  ) <= fVar25)) &&
         (local_1e8 = UE::Math::TMatrix<float>::Identity.M[0][0],
         fStack_1e4 = UE::Math::TMatrix<float>::Identity.M[0][1],
         fStack_1e0 = UE::Math::TMatrix<float>::Identity.M[0][2],
         fStack_1dc = UE::Math::TMatrix<float>::Identity.M[0][3],
         local_1c8 = UE::Math::TMatrix<float>::Identity.M[2][0],
         fStack_1c4 = UE::Math::TMatrix<float>::Identity.M[2][1],
         fStack_1c0 = UE::Math::TMatrix<float>::Identity.M[2][2],
         fStack_1bc = UE::Math::TMatrix<float>::Identity.M[2][3],
         local_1b8 = UE::Math::TMatrix<float>::Identity.M[3][0],
         fStack_1b4 = UE::Math::TMatrix<float>::Identity.M[3][1],
         fStack_1b0 = UE::Math::TMatrix<float>::Identity.M[3][2],
         fStack_1ac = UE::Math::TMatrix<float>::Identity.M[3][3],
         local_1d8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._0_8_,
         afStack_1d0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._8_8_,
         (float)((uint)(pFVar27->SplineTransform).M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff)
         <= fVar25)) goto LAB_149218f1c;
    }
  }
  FMath::MatrixInverse(&local_128,&pFVar27->SplineTransform);
  local_1e8 = local_128.M[0][0];
  fStack_1e4 = local_128.M[0][1];
  fStack_1e0 = local_128.M[0][2];
  fStack_1dc = local_128.M[0][3];
  local_1c8 = local_128.M[2][0];
  fStack_1c4 = local_128.M[2][1];
  fStack_1c0 = local_128.M[2][2];
  fStack_1bc = local_128.M[2][3];
  local_1b8 = local_128.M[3][0];
  fStack_1b4 = local_128.M[3][1];
  fStack_1b0 = local_128.M[3][2];
  fStack_1ac = local_128.M[3][3];
  local_1d8 = (float  [2])local_128.M[1]._0_8_;
  afStack_1d0 = (float  [2])local_128.M[1]._8_8_;
LAB_149218f1c:
  (pFVar27->SplineTransformInverse).M[0][0] = local_1e8;
  (pFVar27->SplineTransformInverse).M[0][1] = fStack_1e4;
  (pFVar27->SplineTransformInverse).M[0][2] = fStack_1e0;
  (pFVar27->SplineTransformInverse).M[0][3] = fStack_1dc;
  *(float (*) [2])(pFVar27->SplineTransformInverse).M[1] = local_1d8;
  *(float (*) [2])((pFVar27->SplineTransformInverse).M[1] + 2) = afStack_1d0;
  (pFVar27->SplineTransformInverse).M[2][0] = local_1c8;
  (pFVar27->SplineTransformInverse).M[2][1] = fStack_1c4;
  (pFVar27->SplineTransformInverse).M[2][2] = fStack_1c0;
  (pFVar27->SplineTransformInverse).M[2][3] = fStack_1bc;
  (pFVar27->SplineTransformInverse).M[3][0] = local_1b8;
  (pFVar27->SplineTransformInverse).M[3][1] = fStack_1b4;
  (pFVar27->SplineTransformInverse).M[3][2] = fStack_1b0;
  (pFVar27->SplineTransformInverse).M[3][3] = fStack_1ac;
  local_258 = (pFVar27->SplineTransformInverse).M[0][0];
  local_248 = (pFVar27->SplineTransformInverse).M[0][1];
  local_238 = (pFVar27->SplineTransformInverse).M[0][2];
  local_228 = (pFVar27->SplineTransformInverse).M[0][3];
  fStack_234 = (pFVar27->SplineTransformInverse).M[1][2];
  fStack_224 = (pFVar27->SplineTransformInverse).M[1][3];
  fStack_240 = (pFVar27->SplineTransformInverse).M[2][1];
  fStack_230 = (pFVar27->SplineTransformInverse).M[2][2];
  fStack_220 = (pFVar27->SplineTransformInverse).M[2][3];
  fStack_23c = (pFVar27->SplineTransformInverse).M[3][1];
  fStack_22c = (pFVar27->SplineTransformInverse).M[3][2];
  fStack_21c = (pFVar27->SplineTransformInverse).M[3][3];
  fStack_244 = (pFVar27->SplineTransformInverse).M[1][1];
  fStack_250 = (pFVar27->SplineTransformInverse).M[2][0];
  fStack_24c = (pFVar27->SplineTransformInverse).M[3][0];
  fStack_254 = (pFVar27->SplineTransformInverse).M[1][0];
  (pFVar27->SplineTransformInverseTranspose).M[0][0] = local_258;
  (pFVar27->SplineTransformInverseTranspose).M[0][1] = fStack_254;
  (pFVar27->SplineTransformInverseTranspose).M[0][2] = fStack_250;
  (pFVar27->SplineTransformInverseTranspose).M[0][3] = fStack_24c;
  (pFVar27->SplineTransformInverseTranspose).M[1][0] = local_248;
  (pFVar27->SplineTransformInverseTranspose).M[1][1] = fStack_244;
  (pFVar27->SplineTransformInverseTranspose).M[1][2] = fStack_240;
  (pFVar27->SplineTransformInverseTranspose).M[1][3] = fStack_23c;
  (pFVar27->SplineTransformInverseTranspose).M[2][0] = local_238;
  (pFVar27->SplineTransformInverseTranspose).M[2][1] = fStack_234;
  (pFVar27->SplineTransformInverseTranspose).M[2][2] = fStack_230;
  (pFVar27->SplineTransformInverseTranspose).M[2][3] = fStack_22c;
  (pFVar27->SplineTransformInverseTranspose).M[3][0] = local_228;
  (pFVar27->SplineTransformInverseTranspose).M[3][1] = fStack_224;
  (pFVar27->SplineTransformInverseTranspose).M[3][2] = fStack_220;
  (pFVar27->SplineTransformInverseTranspose).M[3][3] = fStack_21c;
  local_2d8 = (float)*(double *)((longlong)this + 0x90);
  fStack_2d0 = (float)*(double *)((longlong)this + 0xa0);
  fStack_2cc = (float)*(double *)((longlong)this + 0xa8);
  fStack_2d4 = (float)*(double *)((longlong)this + 0x98);
  (pFVar27->SplineTransformRotation).X = local_2d8;
  (pFVar27->SplineTransformRotation).Y = fStack_2d4;
  (pFVar27->SplineTransformRotation).Z = fStack_2d0;
  (pFVar27->SplineTransformRotation).W = fStack_2cc;
  dVar5 = *(double *)((longlong)this + 0xb8);
  dVar6 = *(double *)((longlong)this + 0xc0);
  this_00 = &pFVar27->SplinePositionsLUT;
  (pFVar27->DefaultUpVector).field0_0x0._s_0.X = (float)*(double *)((longlong)this + 0xb0);
  (pFVar27->DefaultUpVector).field0_0x0._s_0.Y = (float)dVar5;
  (pFVar27->DefaultUpVector).field0_0x0._s_0.Z = (float)dVar6;
  auVar45[4] = '\0';
  auVar45[5] = '\0';
  auVar45[6] = '\0';
  auVar45[7] = '\0';
  auVar45._0_4_ = (pFVar27->SplinePositionsLUT).NumBytes;
  pFVar27->SplineLength = *(float *)((longlong)this + 0xf8);
  pFVar27->SplineDistanceStep = *(float *)((longlong)this + 0xfc);
  pFVar27->InvSplineDistanceStep = *(float *)((longlong)this + 0x100);
  pFVar27->MaxIndex = *(int *)((longlong)this + 0x104);
  if (auVar45 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_218,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_2c8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      local_308 = FVar7;
      local_2c8.StatData.Pad = auVar45;
      local_2c8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_2c8);
      FStatsTrace::Add(&local_308,-(longlong)auVar45);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar41[4] = '\0';
  auVar41[5] = '\0';
  auVar41[6] = '\0';
  auVar41[7] = '\0';
  auVar41._0_4_ = (pFVar27->SplineScalesLUT).NumBytes;
  if (auVar41 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_210,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_2b8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      local_300 = FVar7;
      local_2b8.StatData.Pad = auVar41;
      local_2b8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_2b8);
      FStatsTrace::Add(&local_300,-(longlong)auVar41);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar42[4] = '\0';
  auVar42[5] = '\0';
  auVar42[6] = '\0';
  auVar42[7] = '\0';
  auVar42._0_4_ = (pFVar27->SplineRotationsLUT).NumBytes;
  if (auVar42 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_208,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_2a8.NameAndInfo.Number = FVar7.Number & 0xffffbfff | 0xb000;
      local_2f8 = FVar7;
      local_2a8.StatData.Pad = auVar42;
      local_2a8.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_2a8);
      FStatsTrace::Add(&local_2f8,-(longlong)auVar42);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  uVar37 = 0;
  (pFVar27->SplinePositionsLUT).NumBytes = 0;
  pFVar8 = (this_00->Buffer).Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (this_00->Buffer).Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplinePositionsLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplinePositionsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  (pFVar27->SplineScalesLUT).NumBytes = 0;
  pFVar8 = (pFVar27->SplineScalesLUT).Buffer.Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (pFVar27->SplineScalesLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplineScalesLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplineScalesLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  (pFVar27->SplineRotationsLUT).NumBytes = 0;
  pFVar8 = (pFVar27->SplineRotationsLUT).Buffer.Reference;
  if (pFVar8 != (FRHIBuffer *)0x0) {
    (pFVar27->SplineRotationsLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar8);
  }
  pFVar9 = (pFVar27->SplineRotationsLUT).SRV.Reference;
  if (pFVar9 != (FRHIShaderResourceView *)0x0) {
    (pFVar27->SplineRotationsLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar9);
  }
  if ((*(int *)((longlong)this + 0xd0) == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("rtShaderLUT.Positions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                          ,0x2ce,L""), bVar26)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FReadBuffer::Initialize
            (this_00,(FRHICommandListBase *)param_1,L"SplinePositionsLUT",0x10,
             *(uint *)((longlong)this + 0xd0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pvVar32 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1,(this_00->Buffer).Reference,0,
                       *(int *)((longlong)this + 0xd0) << 4,RLM_WriteOnly);
  if (0 < *(int *)((longlong)this + 0xd0)) {
    pfVar33 = (float *)((longlong)pvVar32 + 8);
    uVar46 = uVar37;
    do {
      uVar35 = (uint)uVar37;
      uVar38 = ~uVar35 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-2] = (float)*(double *)(uVar46 + *(longlong *)((longlong)this + 200));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-1] = (float)*(double *)(*(longlong *)((longlong)this + 200) + 8 + uVar46);
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0xd0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar37 = (ulonglong)(uVar35 + 1);
      dVar5 = *(double *)(*(longlong *)((longlong)this + 200) + 0x10 + uVar46);
      uVar46 = uVar46 + 0x18;
      pfVar33[1] = 1.0;
      *pfVar33 = (float)dVar5;
      pfVar33 = pfVar33 + 4;
    } while ((int)(uVar35 + 1) < *(int *)((longlong)this + 0xd0));
  }
  uVar37 = 0;
  FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,(this_00->Buffer).Reference);
  FReadBuffer::Initialize
            (&pFVar27->SplineScalesLUT,(FRHICommandListBase *)param_1,L"SplineScalesLUT",0x10,
             *(uint *)((longlong)this + 0xe0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pvVar32 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1,(pFVar27->SplineScalesLUT).Buffer.Reference,0,
                       *(int *)((longlong)this + 0xe0) << 4,RLM_WriteOnly);
  iVar34 = *(int *)((longlong)this + 0xe0);
  if (0 < iVar34) {
    pfVar33 = (float *)((longlong)pvVar32 + 8);
    uVar46 = uVar37;
    do {
      uVar35 = (uint)uVar37;
      uVar38 = ~uVar35 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar35 < iVar34) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-2] = (float)*(double *)(uVar46 + *(longlong *)((longlong)this + 0xd8));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0xe0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pfVar33[-1] = (float)*(double *)(uVar46 + 8 + *(longlong *)((longlong)this + 0xd8));
      uVar36 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0xe0)) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar37 = (ulonglong)(uVar35 + 1);
      dVar5 = *(double *)(*(longlong *)((longlong)this + 0xd8) + 0x10 + uVar46);
      uVar46 = uVar46 + 0x18;
      pfVar33[1] = 1.0;
      *pfVar33 = (float)dVar5;
      pfVar33 = pfVar33 + 4;
      iVar34 = *(int *)((longlong)this + 0xe0);
    } while ((int)(uVar35 + 1) < iVar34);
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,(pFVar27->SplineScalesLUT).Buffer.Reference);
  FReadBuffer::Initialize
            (&pFVar27->SplineRotationsLUT,(FRHICommandListBase *)param_1,L"SplineRotationsLUT",0x10,
             *(uint *)((longlong)this + 0xf0),PF_A32B32G32R32F,Static,
             (FResourceArrayUploadInterface *)0x0);
  pfVar33 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1,(pFVar27->SplineRotationsLUT).Buffer.Reference
                       ,0,*(int *)((longlong)this + 0xf0) << 4,RLM_WriteOnly);
  iVar34 = *(int *)((longlong)this + 0xf0);
  uVar36 = 0;
  if (0 < iVar34) {
    lVar39 = 0;
    do {
      uVar35 = 0;
      if ((int)uVar36 < iVar34) {
        uVar35 = ~uVar36 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar10 = *(longlong *)((longlong)this + 0xe8);
      uVar36 = uVar36 + 1;
      pdVar1 = (double *)(lVar10 + lVar39);
      pdVar2 = (double *)(lVar10 + 8 + lVar39);
      pdVar3 = (double *)(lVar10 + 0x10 + lVar39);
      pdVar4 = (double *)(lVar10 + 0x18 + lVar39);
      lVar39 = lVar39 + 0x20;
      local_298 = (float)*pdVar1;
      fStack_294 = (float)*pdVar2;
      fStack_290 = (float)*pdVar3;
      fStack_28c = (float)*pdVar4;
      *pfVar33 = local_298;
      pfVar33[1] = fStack_294;
      pfVar33[2] = fStack_290;
      pfVar33[3] = fStack_28c;
      pfVar33 = pfVar33 + 4;
      iVar34 = *(int *)((longlong)this + 0xf0);
    } while ((int)uVar36 < iVar34);
  }
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,(pFVar27->SplineRotationsLUT).Buffer.Reference);
  auVar43[4] = '\0';
  auVar43[5] = '\0';
  auVar43[6] = '\0';
  auVar43[7] = '\0';
  auVar43._0_4_ = (pFVar27->SplinePositionsLUT).NumBytes;
  if (auVar43 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_200,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_288.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_2f0 = FVar7;
      local_288.StatData.Pad = auVar43;
      local_288.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_288);
      FStatsTrace::Add(&local_2f0,(long64)auVar43);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar40[4] = '\0';
  auVar40[5] = '\0';
  auVar40[6] = '\0';
  auVar40[7] = '\0';
  auVar40._0_4_ = (pFVar27->SplineScalesLUT).NumBytes;
  if (auVar40 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_1f8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_278.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_2e8 = FVar7;
      local_278.StatData.Pad = auVar40;
      local_278.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_278);
      FStatsTrace::Add(&local_2e8,(long64)auVar40);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  auVar44[4] = '\0';
  auVar44[5] = '\0';
  auVar44[6] = '\0';
  auVar44[7] = '\0';
  auVar44._0_4_ = (pFVar27->SplineRotationsLUT).NumBytes;
  if (auVar44 != (uchar  [8])0x0) {
    FVar29 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar28 = ::FName::FName(&local_1f0,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar28,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar7 = *(FName *)FVar29;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar30 == (FThreadStats *)0x0) {
        pFVar31 = FThreadStatsPool::Get();
        pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
      }
      local_268.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_2e0 = FVar7;
      local_268.StatData.Pad = auVar44;
      local_268.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar30,&local_268);
      FStatsTrace::Add(&local_2e0,(long64)auVar44);
      if (pFVar30->ScopeCount == 0) {
        FThreadStats::Flush(pFVar30,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar30,false,false);
      }
    }
  }
  return;
}

// BuildShaderParameters @ 1492207f0

void __thiscall
UNiagaraDataInterfaceSpline::BuildShaderParameters
          (UNiagaraDataInterfaceSpline *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDISplineLocal::FShaderParameters>::GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x150;
  return;
}

// CanExecuteOnTarget @ 149221b70

bool __thiscall
UNiagaraDataInterfaceSpline::CanExecuteOnTarget
          (UNiagaraDataInterfaceSpline *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 149223060

bool __thiscall
UNiagaraDataInterfaceSpline::CopyToInternal
          (UNiagaraDataInterfaceSpline *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UNiagaraDataInterfaceSpline *pUVar3;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  pUVar3 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>(param_1);
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar3->SoftSourceActor,
             (TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftSourceActor);
  FNiagaraVariable::operator=
            (&(pUVar3->SplineUserParameter).Parameter,&(this->SplineUserParameter).Parameter);
  pUVar3->bUseLUT = this->bUseLUT;
  iVar1 = this->NumLUTSteps;
  *(uint *)&pUVar3->_padding_ = (uint)pUVar3->_padding_ | 1;
  pUVar3->NumLUTSteps = iVar1;
  if ((pUVar3->_padding_ & 4) != 0) {
    (**(code **)(pUVar3->_padding_ + 0x448))(pUVar3);
    *(uint *)&pUVar3->_padding_ = (uint)pUVar3->_padding_ & 0xfffffffe;
  }
  return true;
}

// DestroyPerInstanceData @ 14922b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSpline::DestroyPerInstanceData
          (UNiagaraDataInterfaceSpline *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  ulong64 local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_*,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData_GT,
               (int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
  }
  if (*(void **)((longlong)param_1 + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x288));
  }
  if (*(void **)((longlong)param_1 + 0x278) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x278));
  }
  if (*(void **)((longlong)param_1 + 0x268) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x268));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  if (*(void **)((longlong)param_1 + 0x218) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x218));
  }
  if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x200));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSpline::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData570>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceSpline::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData570>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 14922d830

bool __thiscall
UNiagaraDataInterfaceSpline::Equals
          (UNiagaraDataInterfaceSpline *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSpline_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSpline_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&param_1[1]._padding_,
                       (FSoftObjectPath *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8);
    if ((((bVar2) &&
         ((FNiagaraDataInterfaceProxy *)(this->SplineUserParameter).Parameter._padding_ ==
          param_1[1].Proxy.Ptr)) &&
        ((int)(this->SplineUserParameter).Parameter._padding_ == *(int *)&param_1[1].field_0x30)) &&
       (((bool)(char)param_1[2]._padding_ == this->bUseLUT &&
        (*(int *)((longlong)&param_1[2]._padding_ + 4) == this->NumLUTSteps)))) {
      return true;
    }
  }
  return false;
}

// GetLocalToWorld @ 149236020

void __thiscall
UNiagaraDataInterfaceSpline::GetLocalToWorld
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  FUserPtrHandler<FNDISpline_InstanceData> local_58;
  TMatrix<float> local_48;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_58,param_1);
  local_48.M[0][2] = (float)((local_58.Ptr)->Transform).M[0][2];
  local_48.M[0][3] = (float)((local_58.Ptr)->Transform).M[0][3];
  local_48.M[0][0] = (float)((local_58.Ptr)->Transform).M[0][0];
  local_48.M[0][1] = (float)((local_58.Ptr)->Transform).M[0][1];
  local_48.M[1][0] = (float)((local_58.Ptr)->Transform).M[1][0];
  local_48.M[1][1] = (float)((local_58.Ptr)->Transform).M[1][1];
  local_48.M[1][2] = (float)((local_58.Ptr)->Transform).M[1][2];
  local_48.M[1][3] = (float)((local_58.Ptr)->Transform).M[1][3];
  local_48.M[2][2] = (float)((local_58.Ptr)->Transform).M[2][2];
  local_48.M[2][3] = (float)((local_58.Ptr)->Transform).M[2][3];
  local_48.M[2][0] = (float)((local_58.Ptr)->Transform).M[2][0];
  local_48.M[2][1] = (float)((local_58.Ptr)->Transform).M[2][1];
  local_48.M[3][0] = (float)((local_58.Ptr)->Transform).M[3][0];
  local_48.M[3][1] = (float)((local_58.Ptr)->Transform).M[3][1];
  local_48.M[3][2] = (float)((local_58.Ptr)->Transform).M[3][2];
  local_48.M[3][3] = (float)((local_58.Ptr)->Transform).M[3][3];
  WriteTransform(this,&local_48,param_1);
  return;
}

// GetLocalToWorldInverseTransposed @ 1492360e0

void __thiscall
UNiagaraDataInterfaceSpline::GetLocalToWorldInverseTransposed
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  FUserPtrHandler<FNDISpline_InstanceData> local_58;
  TMatrix<float> local_48;
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (&local_58,param_1);
  local_48.M[0][2] = (float)((local_58.Ptr)->TransformInverseTransposed).M[0][2];
  local_48.M[0][3] = (float)((local_58.Ptr)->TransformInverseTransposed).M[0][3];
  local_48.M[0][0] = (float)((local_58.Ptr)->TransformInverseTransposed).M[0][0];
  local_48.M[0][1] = (float)((local_58.Ptr)->TransformInverseTransposed).M[0][1];
  local_48.M[1][0] = (float)((local_58.Ptr)->TransformInverseTransposed).M[1][0];
  local_48.M[1][1] = (float)((local_58.Ptr)->TransformInverseTransposed).M[1][1];
  local_48.M[1][2] = (float)((local_58.Ptr)->TransformInverseTransposed).M[1][2];
  local_48.M[1][3] = (float)((local_58.Ptr)->TransformInverseTransposed).M[1][3];
  local_48.M[2][2] = (float)((local_58.Ptr)->TransformInverseTransposed).M[2][2];
  local_48.M[2][3] = (float)((local_58.Ptr)->TransformInverseTransposed).M[2][3];
  local_48.M[2][0] = (float)((local_58.Ptr)->TransformInverseTransposed).M[2][0];
  local_48.M[2][1] = (float)((local_58.Ptr)->TransformInverseTransposed).M[2][1];
  local_48.M[3][0] = (float)((local_58.Ptr)->TransformInverseTransposed).M[3][0];
  local_48.M[3][1] = (float)((local_58.Ptr)->TransformInverseTransposed).M[3][1];
  local_48.M[3][2] = (float)((local_58.Ptr)->TransformInverseTransposed).M[3][2];
  local_48.M[3][3] = (float)((local_58.Ptr)->TransformInverseTransposed).M[3][3];
  WriteTransform(this,&local_48,param_1);
  return;
}

// GetPrivateStaticClass @ 149236f40

UClass * __cdecl UNiagaraDataInterfaceSpline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSpline",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSpline,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSpline>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSpline>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSpline.InnerSingleton;
}

// GetVMExternalFunction @ 149239980

void __thiscall
UNiagaraDataInterfaceSpline::GetVMExternalFunction
          (UNiagaraDataInterfaceSpline *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  UNiagaraDataInterfaceSpline *pUVar4;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  int local_70;
  undefined1 local_68 [8];
  ForAnyElementType local_60;
  int local_58;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDestructionSentinel local_20;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDISplineLocal::SampleSplinePositionByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x13e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplinePositionByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x143,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplinePositionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineRotationByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x148,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineRotationByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x14d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRotationByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineUpVectorByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x152,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineUpVectorByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x157,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineUpVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineDirectionByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x15c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineDirectionByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x161,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineDirectionByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineRightVectorByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x166,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineRightVectorByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x16b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineRightVectorByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineTangentByUnitDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x170,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandlerNoop>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::SampleSplineTangentByUnitDistanceWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x175,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = CastChecked<UNiagaraDataInterfaceSpline,UNiagaraDataInterface>
                       ((UNiagaraDataInterface *)this);
    if ((pUVar4->bUseLUT == false) || (NDISplineLocal::GbNiagaraDISplineDisableLUTs != false)) {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,0>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
    else {
      TNDIParamBinder<1,float,TUNiagaraDataInterfaceSpline_SampleSplineTangentByUnitDistanceBinder>
      ::Bind<TIntegralConstant<bool,1>,FNDITransformHandler>
                ((UNiagaraDataInterface *)this,param_1,param_2,param_3);
    }
  }
  else if (FVar1 == NDISplineLocal::FindClosestUnitDistanceFromPositionWSName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                           ,0x17a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSplineUseLUTBinder<TUNiagaraDataInterfaceSpline_FindClosestUnitDistanceFromPositionWSBinder>::
    Bind<>((UNiagaraDataInterface *)this,param_1,param_2,param_3);
  }
  else {
    if (FVar1 == NDISplineLocal::GetSplineLocalToWorldName) {
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 16",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                             ,0x17f,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar5 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSpline>
                         ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                           *)local_98,this,(pmf_22989bbc)0x149236020);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_50);
      if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_90.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
        local_88 = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_98;
    }
    else if (FVar1 == NDISplineLocal::GetSplineLocalToWorldInverseTransposedName) {
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 16",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                             ,0x184,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar5 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSpline>
                         ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                           *)local_80,this,(pmf_22989bbc)0x1492360e0);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)&local_38);
      if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_80;
    }
    else {
      if (FVar1 != NDISplineLocal::GetSplineLengthName) {
        return;
      }
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                             ,0x189,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar5 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSpline>
                         ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                           *)local_68,this,(pmf_22989bbc)0x149254530);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_20);
      if ((local_58 != 0) && (local_60.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_60.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_60,0,0,0x10);
        local_58 = 0;
      }
      if (local_20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_68;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  }
  return;
}

// HasPreSimulateTick @ 14923c5a0

bool __thiscall UNiagaraDataInterfaceSpline::HasPreSimulateTick(UNiagaraDataInterfaceSpline *this)

{
  return true;
}

// InitPerInstanceData @ 14923f4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSpline::InitPerInstanceData
          (UNiagaraDataInterfaceSpline *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  FNDISpline_InstanceData **ppFVar11;
  int iVar12;
  TPairInitializer<unsigned___int64_&&,FNDISpline_InstanceData_*_&> local_res8;
  ulong64 local_res18 [2];
  TVector<double>_u_0 local_48;
  
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar12 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x28),
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x28) = iVar12;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x170) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x180) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 400) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1a0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1b0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1c0) = auVar8;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNiagaraLWCConverter::FNiagaraLWCConverter
            ((FNiagaraLWCConverter *)((longlong)param_1 + 0x1d0),(TVector<double> *)&local_48._s_0);
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined1 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined1 *)((longlong)param_1 + 0x228) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined1 *)((longlong)param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined1 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2a8) = 0;
  local_res18[0] = param_2->ID;
  local_48._s_0.X = (double)local_res18;
  local_48._s_0.Y = (double)&local_res8.Value;
  local_res8.Value = param_1;
  TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FNDISpline_InstanceData_*_&>_>
            ((TSet<TTuple<unsigned___int64,FNDISpline_InstanceData_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_*,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData_GT,&local_res8,(bool *)&local_48);
  ppFVar11 = local_res8.Value;
  *local_res8.Value = (FNDISpline_InstanceData *)0x0;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  local_res8.Value[10] = (FNDISpline_InstanceData *)UE::Math::TQuat<double>::Identity.X;
  local_res8.Value[0xb] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  local_res8.Value[0xc] = (FNDISpline_InstanceData *)UE::Math::TQuat<double>::Identity.Z;
  local_res8.Value[0xd] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_res8.Value[0xe] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[0][0];
  local_res8.Value[0xf] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_res8.Value[0x10] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[0][2];
  local_res8.Value[0x11] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_res8.Value[0x12] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[1][0];
  local_res8.Value[0x13] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_res8.Value[0x14] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[1][2];
  local_res8.Value[0x15] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_res8.Value[0x16] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[2][0];
  local_res8.Value[0x17] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_res8.Value[0x18] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[2][2];
  local_res8.Value[0x19] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_res8.Value[0x1a] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[3][0];
  local_res8.Value[0x1b] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_res8.Value[0x1c] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[3][2];
  local_res8.Value[0x1d] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_res8.Value[0x1e] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[0][0];
  local_res8.Value[0x1f] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_res8.Value[0x20] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[0][2];
  local_res8.Value[0x21] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_res8.Value[0x22] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[1][0];
  local_res8.Value[0x23] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_res8.Value[0x24] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[1][2];
  local_res8.Value[0x25] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_res8.Value[0x26] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[2][0];
  local_res8.Value[0x27] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_res8.Value[0x28] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[2][2];
  local_res8.Value[0x29] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_res8.Value[0x2a] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[3][0];
  local_res8.Value[0x2b] = (FNDISpline_InstanceData *)dVar10;
  dVar10 = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_res8.Value[0x2c] = (FNDISpline_InstanceData *)UE::Math::TMatrix<double>::Identity.M[3][2];
  local_res8.Value[0x2d] = (FNDISpline_InstanceData *)dVar10;
  *(double (*) [2])(local_res8.Value + 0x2e) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])(local_res8.Value + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])(local_res8.Value + 0x32) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])(local_res8.Value + 0x34) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])(local_res8.Value + 0x36) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])(local_res8.Value + 0x38) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_res8.Value[0x3d] =
       (FNDISpline_InstanceData *)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_res8.Value[0x3e] = (FNDISpline_InstanceData *)uVar9;
  local_res8.Value[0x3f] =
       (FNDISpline_InstanceData *)UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined1 *)(local_res8.Value + 0x55) = 0;
  *(undefined4 *)((longlong)local_res8.Value + 0x2ac) = 0xffffffff;
  *(undefined4 *)(local_res8.Value + 0x4e) = 0;
  if (*(int *)((longlong)local_res8.Value + 0x274) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(local_res8.Value + 0x4d),0,
               (int *)((longlong)local_res8.Value + 0x274));
  }
  *(undefined4 *)(ppFVar11 + 0x50) = 0;
  if (*(int *)((longlong)ppFVar11 + 0x284) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(ppFVar11 + 0x4f),0,(int *)((longlong)ppFVar11 + 0x284)
              );
  }
  *(undefined4 *)(ppFVar11 + 0x52) = 0;
  if (*(int *)((longlong)ppFVar11 + 0x294) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,(ForAnyElementType *)(ppFVar11 + 0x51),0,
               (int *)((longlong)ppFVar11 + 0x294));
  }
  ppFVar11[0x53] = (FNDISpline_InstanceData *)0x0;
  *(undefined4 *)(ppFVar11 + 0x54) = 0;
  *(undefined4 *)((longlong)ppFVar11 + 0x2a4) = 0xffffffff;
  return true;
}

// PerInstanceDataPassedToRenderThreadSize @ 149244730

int __thiscall
UNiagaraDataInterfaceSpline::PerInstanceDataPassedToRenderThreadSize
          (UNiagaraDataInterfaceSpline *this)

{
  return 0;
}

// PerInstanceDataSize @ 149244760

int __thiscall UNiagaraDataInterfaceSpline::PerInstanceDataSize(UNiagaraDataInterfaceSpline *this)

{
  return 0x2b0;
}

// PerInstanceTick @ 149244e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSpline::PerInstanceTick
          (UNiagaraDataInterfaceSpline *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  FInterpCurveQuat *pFVar1;
  undefined8 *puVar2;
  FInterpCurveVector *pFVar3;
  FInterpCurveFloat *pFVar4;
  FSplineCurves *pFVar5;
  double dVar6;
  longlong lVar7;
  UNiagaraSystem *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  FNiagaraTypeDefinition *pFVar16;
  USplineComponent *this_01;
  TObjectPtr<UObject> TVar17;
  UClass *pUVar18;
  UObject *pUVar19;
  USplineComponent *this_02;
  USceneComponent *this_03;
  TMatrix<double> *pTVar20;
  FNiagaraLWCConverter *pFVar21;
  FSplineCurves *pFVar22;
  FRenderCommandList *this_04;
  FCommandList *this_05;
  FRenderCommandTag *pFVar23;
  code **ppcVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0 [2];
  FString local_4d0;
  FString local_4c0;
  USplineComponent *local_4b0;
  wchar_t *local_4a8;
  wchar_t **local_4a0;
  wchar_t *local_498;
  wchar_t **local_490;
  undefined1 local_488 [24];
  undefined1 local_470 [16];
  double local_460;
  TTransform<double> local_458;
  FScriptContainerElement *local_3f8;
  double dStack_3f0;
  FScriptContainerElement *local_3e8;
  double dStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  double local_3c8;
  double dStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  double local_3a8;
  double dStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  double local_388;
  double dStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  double dStack_360;
  void *local_358 [3];
  void *local_340;
  void *local_328;
  void *local_310;
  FNiagaraLWCConverter local_2f0;
  TMatrix<double> local_2d8;
  code *local_258 [2];
  code *local_248 [3];
  code **local_230;
  FNiagaraDataInterfaceProxySpline *local_228;
  code *local_220;
  code *local_218;
  code *pcStack_210;
  code *local_208;
  code *pcStack_200;
  code *local_1f8;
  code *pcStack_1f0;
  code *local_1e8;
  code *pcStack_1e0;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  FNiagaraDataInterfaceSplineLUT local_160;
  undefined1 local_118 [40];
  code **local_f0;
  byte local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_508;
  if ((param_2 == (FNiagaraSystemInstance *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSpline.cpp"
                          ,0x24a,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  if (param_1 == (void *)0x0) {
    return true;
  }
  local_4e8 = 0;
  if (((this->SplineUserParameter).Parameter._padding_ != 0) &&
     (pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           &(this->SplineUserParameter).Parameter._padding_),
     (pFVar16->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    if (*(int *)((longlong)param_1 + 0x10) == -1) {
      local_4e0[0] = 0;
    }
    else {
      FNiagaraParameterStore::GetUObject
                (*(FNiagaraParameterStore **)((longlong)param_1 + 0x18),(int)local_4e0);
    }
    if (local_4e0[0] == 0) {
      bVar12 = *(longlong *)((longlong)param_1 + 8) == 0;
    }
    else {
      bVar12 = local_4e0[0] == *(longlong *)((longlong)param_1 + 8);
    }
    if (!bVar12) {
      return true;
    }
  }
  this_01 = (USplineComponent *)FWeakObjectPtr::Get(param_1);
  if (this_01 == (USplineComponent *)0x0) {
    local_4e0[1] = 0;
    if ((((this->SplineUserParameter).Parameter._padding_ == 0) ||
        (pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)
                              &(this->SplineUserParameter).Parameter._padding_),
        (pFVar16->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
       (param_2 == (FNiagaraSystemInstance *)0x0)) {
      pUVar19 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftSourceActor);
      if (pUVar19 == (UObject *)0x0) {
        this_03 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
        if ((this_03 == (USceneComponent *)0x0) ||
           (this_02 = (USplineComponent *)USceneComponent::GetAttachmentRootActor(this_03),
           this_02 == (USplineComponent *)0x0)) goto LAB_1492451f2;
      }
      else {
        this_02 = (USplineComponent *)
                  TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftSourceActor);
        if (this_02 != (USplineComponent *)0x0) {
          pUVar18 = Z_Construct_UClass_AActor_NoRegister();
          iVar26 = (int)pUVar18->_padding_;
          if ((iVar26 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
              &pUVar18->_padding_)) goto LAB_1492451ea;
        }
        this_02 = (USplineComponent *)0x0;
      }
LAB_1492451ea:
      this_01 = AActor::FindComponentByClass<USplineComponent>((AActor *)this_02);
    }
    else {
      TVar17 = FNiagaraParameterDirectBinding<UObject_*>::Init
                         ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x10),
                          (FNiagaraParameterStore *)local_488,
                          (FNiagaraVariable *)&param_2->InstanceParameters);
      this_02 = *(USplineComponent **)TVar17.field0_0x0;
      *(USplineComponent **)((longlong)param_1 + 8) = this_02;
      if (this_02 != (USplineComponent *)0x0) {
        pUVar18 = Z_Construct_UClass_USplineComponent_NoRegister();
        iVar26 = (int)pUVar18->_padding_;
        if ((*(int *)(this_02->_padding_ + 0x38) < iVar26) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
            &pUVar18->_padding_)) {
          pUVar18 = Z_Construct_UClass_AActor_NoRegister();
          iVar26 = (int)pUVar18->_padding_;
          if ((iVar26 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
              &pUVar18->_padding_)) goto LAB_1492451ea;
          if ((2 < (byte)LogNiagara._0_1_) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
             2 < (byte)LogNiagara._0_1_)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_02,(FString *)(local_488 + 8),(UObject *)0x0,None)
            ;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            if ((FWeakObjectPtr)local_488._8_8_ != (FWeakObjectPtr)0x0) {
              FMemory::Free((void *)local_488._8_8_);
            }
            if (2 < (byte)LogNiagara._0_1_) {
              pUVar19 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
              if (pUVar19 == (UObject *)0x0) {
LAB_1492450c8:
                ::FString::FString(&local_4d0,L"None");
              }
              else {
                pUVar18 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
                lVar7 = *(longlong *)&pUVar19->field_0x10;
                iVar26 = (int)pUVar18->_padding_;
                if (((*(int *)(lVar7 + 0x38) < iVar26) ||
                    ((longlong *)
                     *(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar26 * 8) !=
                     &pUVar18->_padding_)) || (lVar7 == 0)) goto LAB_1492450c8;
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar19,&local_4d0,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
              if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
              }
              if (2 < (byte)LogNiagara._0_1_) {
                this_00 = param_2->System;
                if ((this_00 == (UNiagaraSystem *)0x0) || (this_00->_padding_ == 0)) {
                  ::FString::FString(&local_4c0,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_4c0,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
        else if (((uint)this_02->_padding_ >> 0x1e & 1) == 0) {
          this_01 = this_02;
        }
      }
    }
LAB_1492451f2:
    local_4b0 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (USplineComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FWeakObjectPtr::operator=(param_1,(FObjectPtr)&local_4b0);
    if (this_01 == (USplineComponent *)0x0) {
      return false;
    }
  }
  local_458.Scale3D.ZW.m128d_f64[0] = (double)this_01->_padding_;
  local_458.Scale3D.ZW.m128d_f64[1] = (double)this_01->_padding_;
  local_458.Scale3D.XY.m128d_f64[0] = (double)this_01->_padding_;
  local_458.Scale3D.XY.m128d_f64[1] = (double)this_01->_padding_;
  local_458.Rotation.ZW.m128d_f64[0] = (double)this_01->_padding_;
  local_458.Rotation.ZW.m128d_f64[1] = (double)this_01->_padding_;
  dVar11 = (double)this_01->_padding_;
  dVar10 = (double)this_01->_padding_;
  dVar30 = (double)(param_2->LWCTile).field0_0x0._s_0.X * __real_c140000000000000;
  local_460 = (double)(param_2->LWCTile).field0_0x0._s_0.Z * __real_c140000000000000;
  dVar6 = (double)this_01->_padding_;
  dVar9 = (double)this_01->_padding_ + 0.0;
  dVar29 = (double)(param_2->LWCTile).field0_0x0._s_0.Y * __real_c140000000000000;
  local_458.Rotation.XY.m128d_f64[0] = (double)this_01->_padding_;
  local_458.Rotation.XY.m128d_f64[1] = (double)this_01->_padding_;
  *(double *)((longlong)param_1 + 0x50) = local_458.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_1 + 0x58) = local_458.Rotation.XY.m128d_f64[1];
  dVar10 = dVar10 + dVar29;
  local_458.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_458.Translation.XY.m128d_f64[0] = (FScriptContainerElement *)(dVar11 + dVar30);
  local_458.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_470._8_4_ = SUB84(dVar29,0);
  local_470._0_8_ = dVar30;
  local_470._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  local_458.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_458.Translation.ZW.m128d_f64[0] = (FScriptContainerElement *)(local_460 + dVar6);
  local_458.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(double *)((longlong)param_1 + 0x60) = local_458.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_1 + 0x68) = local_458.Rotation.ZW.m128d_f64[1];
  local_3f8 = (FScriptContainerElement *)local_458.Rotation.XY.m128d_f64[0];
  dStack_3f0 = local_458.Rotation.XY.m128d_f64[1];
  local_3e8 = (FScriptContainerElement *)local_458.Rotation.ZW.m128d_f64[0];
  dStack_3e0 = local_458.Rotation.ZW.m128d_f64[1];
  pTVar20 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_458,&local_2d8);
  dVar9 = __real_3e45798ee0000000;
  dVar6 = pTVar20->M[0][1];
  *(double *)((longlong)param_1 + 0x70) = pTVar20->M[0][0];
  *(double *)((longlong)param_1 + 0x78) = dVar6;
  dVar6 = pTVar20->M[0][3];
  *(double *)((longlong)param_1 + 0x80) = pTVar20->M[0][2];
  *(double *)((longlong)param_1 + 0x88) = dVar6;
  dVar6 = pTVar20->M[1][1];
  *(double *)((longlong)param_1 + 0x90) = pTVar20->M[1][0];
  *(double *)((longlong)param_1 + 0x98) = dVar6;
  dVar6 = pTVar20->M[1][3];
  *(double *)((longlong)param_1 + 0xa0) = pTVar20->M[1][2];
  *(double *)((longlong)param_1 + 0xa8) = dVar6;
  dVar6 = pTVar20->M[2][1];
  *(double *)((longlong)param_1 + 0xb0) = pTVar20->M[2][0];
  *(double *)((longlong)param_1 + 0xb8) = dVar6;
  dVar6 = pTVar20->M[2][3];
  *(double *)((longlong)param_1 + 0xc0) = pTVar20->M[2][2];
  *(double *)((longlong)param_1 + 200) = dVar6;
  dVar6 = pTVar20->M[3][1];
  *(double *)((longlong)param_1 + 0xd0) = pTVar20->M[3][0];
  *(double *)((longlong)param_1 + 0xd8) = dVar6;
  dVar6 = pTVar20->M[3][3];
  *(double *)((longlong)param_1 + 0xe0) = pTVar20->M[3][2];
  *(double *)((longlong)param_1 + 0xe8) = dVar6;
  uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0x70) &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x70) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9) &&
      (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0x78) &
                (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x78) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) &&
     (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0x80) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x80) >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) {
    uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0x90) &
             (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x90) >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9) &&
        (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0x98) &
                  (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x98) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) &&
       (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0xa0) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xa0) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) {
      uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0xb0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xb0) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9) &&
          (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0xb8) &
                    (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xb8) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) &&
         (uVar27 = (uint)*(undefined8 *)((longlong)param_1 + 0xc0) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar28 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xc0) >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar28,uVar27) < dVar9 || (double)CONCAT44(uVar28,uVar27) == dVar9)) {
        local_4a8 = 
        L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
        ;
        if (1 < (byte)LogUnrealMath._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
        }
        local_4a0 = &local_4a8;
        `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_4a0);
      }
    }
  }
  bVar12 = FMath::MatrixInverse(&local_d8,(TMatrix<double> *)((longlong)param_1 + 0x70));
  if (!bVar12) {
    local_498 = 
    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
    ;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_490 = &local_498;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_490);
  }
  uStack_3d0 = SUB84(local_d8.M[1][0],0);
  uStack_3cc = (undefined4)((ulonglong)local_d8.M[1][0] >> 0x20);
  uStack_370 = SUB84(local_d8.M[1][3],0);
  uStack_36c = (undefined4)((ulonglong)local_d8.M[1][3] >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xf0) = local_d8.M[0][0]._0_4_;
  *(undefined4 *)((longlong)param_1 + 0xf4) = local_d8.M[0][0]._4_4_;
  *(undefined4 *)((longlong)param_1 + 0xf8) = uStack_3d0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_3cc;
  *(double *)((longlong)param_1 + 0x100) = local_d8.M[2][0];
  *(double *)((longlong)param_1 + 0x108) = local_d8.M[3][0];
  local_3d8 = local_d8.M[0][0]._0_4_;
  uStack_3d4 = local_d8.M[0][0]._4_4_;
  local_3c8 = local_d8.M[2][0];
  dStack_3c0 = local_d8.M[3][0];
  uStack_3b0 = SUB84(local_d8.M[1][1],0);
  uStack_3ac = (undefined4)((ulonglong)local_d8.M[1][1] >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x110) = local_d8.M[0][1]._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x114) = local_d8.M[0][1]._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x118) = uStack_3b0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uStack_3ac;
  *(double *)((longlong)param_1 + 0x120) = local_d8.M[2][1];
  *(double *)((longlong)param_1 + 0x128) = local_d8.M[3][1];
  local_3b8 = local_d8.M[0][1]._0_4_;
  uStack_3b4 = local_d8.M[0][1]._4_4_;
  uStack_390 = SUB84(local_d8.M[1][2],0);
  uStack_38c = (undefined4)((ulonglong)local_d8.M[1][2] >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x130) = local_d8.M[0][2]._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x134) = local_d8.M[0][2]._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x138) = uStack_390;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uStack_38c;
  local_3a8 = local_d8.M[2][1];
  dStack_3a0 = local_d8.M[3][1];
  *(double *)((longlong)param_1 + 0x140) = local_d8.M[2][2];
  *(double *)((longlong)param_1 + 0x148) = local_d8.M[3][2];
  local_398 = local_d8.M[0][2]._0_4_;
  uStack_394 = local_d8.M[0][2]._4_4_;
  local_388 = local_d8.M[2][2];
  dStack_380 = local_d8.M[3][2];
  *(undefined4 *)((longlong)param_1 + 0x150) = local_d8.M[0][3]._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x154) = local_d8.M[0][3]._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x158) = uStack_370;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uStack_36c;
  *(double *)((longlong)param_1 + 0x160) = local_d8.M[2][3];
  *(double *)((longlong)param_1 + 0x168) = local_d8.M[3][3];
  local_378 = local_d8.M[0][3]._0_4_;
  uStack_374 = local_d8.M[0][3]._4_4_;
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x170) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x178) = lVar7;
  local_368 = local_d8.M[2][3];
  dStack_360 = local_d8.M[3][3];
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x180) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x188) = lVar7;
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 400) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x198) = lVar7;
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1a0) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1a8) = lVar7;
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1b0) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1b8) = lVar7;
  lVar7 = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1c0) = this_01->_padding_;
  *(longlong *)((longlong)param_1 + 0x1c8) = lVar7;
  dVar6 = (this_01->DefaultUpVector).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1e8) = (this_01->DefaultUpVector).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x1f0) = dVar6;
  *(double *)((longlong)param_1 + 0x1f8) = (this_01->DefaultUpVector).field0_0x0._s_0.Z;
  pFVar21 = FNiagaraSystemInstance::GetLWCConverter(param_2,&local_2f0,false);
  dVar6 = (pFVar21->SystemWorldPos).field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x1d0) = (pFVar21->SystemWorldPos).field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x1d8) = dVar6;
  *(double *)((longlong)param_1 + 0x1e0) = (pFVar21->SystemWorldPos).field0_0x0._s_0.Z;
  if (((this->bUseLUT == false) && (((uint)this->_padding_ >> 2 & 1) == 0)) ||
     (-1 < *(int *)((longlong)param_1 + 0x2a4))) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  iVar26 = *(int *)((longlong)param_1 + 0x2ac);
  iVar15 = USplineComponent::GetVersion(this_01);
  if (iVar26 == iVar15) {
LAB_149245835:
    if (((((uint)this->_padding_ >> 2 & 1) != 0) && (*(char *)((longlong)param_1 + 0x2a8) == '\0'))
       && (*(int *)((longlong)param_1 + 0x2a4) != -1)) {
      bVar14 = 1;
      goto LAB_14924580b;
    }
  }
  else {
    pFVar22 = USplineComponent::GetSplineCurves(this_01,(FSplineCurves *)local_358);
    pFVar5 = (FSplineCurves *)((longlong)param_1 + 0x200);
    if (pFVar5 != pFVar22) {
      if (*(void **)&pFVar5->Position != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar5->Position);
      }
      *(undefined8 *)&pFVar5->Position = *(undefined8 *)&pFVar22->Position;
      *(undefined8 *)&pFVar22->Position = 0;
      *(undefined4 *)((longlong)param_1 + 0x208) = *(undefined4 *)&(pFVar22->Position).field_0x8;
      *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)&(pFVar22->Position).field_0xc;
      *(undefined8 *)&(pFVar22->Position).field_0x8 = 0;
    }
    pFVar1 = &pFVar22->Rotation;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x218);
    *(undefined1 *)((longlong)param_1 + 0x210) = (pFVar22->Position).field_0x10;
    *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)&(pFVar22->Position).field_0x14;
    if ((FInterpCurveQuat *)puVar2 != pFVar1) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      *puVar2 = *(undefined8 *)pFVar1;
      *(undefined8 *)pFVar1 = 0;
      *(undefined4 *)((longlong)param_1 + 0x220) = *(undefined4 *)&(pFVar22->Rotation).field_0x8;
      *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)&(pFVar22->Rotation).field_0xc;
      *(undefined8 *)&(pFVar22->Rotation).field_0x8 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x228) = (pFVar22->Rotation).field_0x10;
    pFVar3 = &pFVar22->Scale;
    *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)&(pFVar22->Rotation).field_0x14;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x230);
    if ((FInterpCurveVector *)puVar2 != pFVar3) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      *puVar2 = *(undefined8 *)pFVar3;
      *(undefined8 *)pFVar3 = 0;
      *(undefined4 *)((longlong)param_1 + 0x238) = *(undefined4 *)&(pFVar22->Scale).field_0x8;
      *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)&(pFVar22->Scale).field_0xc;
      *(undefined8 *)&(pFVar22->Scale).field_0x8 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x240) = (pFVar22->Scale).field_0x10;
    pFVar4 = &pFVar22->ReparamTable;
    *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)&(pFVar22->Scale).field_0x14;
    puVar2 = (undefined8 *)((longlong)param_1 + 0x248);
    if ((FInterpCurveFloat *)puVar2 != pFVar4) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      *puVar2 = *(undefined8 *)pFVar4;
      *(undefined8 *)pFVar4 = 0;
      *(undefined4 *)((longlong)param_1 + 0x250) = *(undefined4 *)&(pFVar22->ReparamTable).field_0x8
      ;
      *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)&(pFVar22->ReparamTable).field_0xc
      ;
      *(undefined8 *)&(pFVar22->ReparamTable).field_0x8 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 600) = (pFVar22->ReparamTable).field_0x10;
    *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)&(pFVar22->ReparamTable).field_0x14;
    *(uint *)((longlong)param_1 + 0x260) = pFVar22->Version;
    if (local_310 != (void *)0x0) {
      FMemory::Free(local_310);
    }
    if (local_328 != (void *)0x0) {
      FMemory::Free(local_328);
    }
    if (local_340 != (void *)0x0) {
      FMemory::Free(local_340);
    }
    if (local_358[0] != (void *)0x0) {
      FMemory::Free(local_358[0]);
    }
    *(undefined4 *)((longlong)param_1 + 0x2ac) = *(undefined4 *)((longlong)param_1 + 0x260);
    *(undefined1 *)((longlong)param_1 + 0x2a8) = 0;
    FNiagaraDataInterfaceSplineLUT::Reset
              ((FNiagaraDataInterfaceSplineLUT *)((longlong)param_1 + 0x268));
    if ((this->bUseLUT != false) || (((uint)this->_padding_ >> 2 & 1) != 0)) {
      bVar12 = true;
      goto LAB_149245835;
    }
    bVar12 = false;
  }
  bVar14 = 0;
LAB_14924580b:
  if (bVar12) {
    if (this->bUseLUT == false) {
      iVar26 = 0x100;
    }
    else {
      iVar26 = this->NumLUTSteps;
    }
    FNiagaraDataInterfaceSplineLUT::BuildLUT
              ((FNiagaraDataInterfaceSplineLUT *)((longlong)param_1 + 0x268),
               (FSplineCurves *)((longlong)param_1 + 0x200),iVar26);
    bVar14 = (byte)((uint)this->_padding_ >> 2) & 1;
  }
  if (bVar14 != 0) {
    local_228 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxySpline>
                          ((UNiagaraDataInterface *)this);
    local_218 = *(code **)((longlong)param_1 + 0x70);
    pcStack_210 = *(code **)((longlong)param_1 + 0x78);
    local_208 = *(code **)((longlong)param_1 + 0x80);
    pcStack_200 = *(code **)((longlong)param_1 + 0x88);
    local_1f8 = *(code **)((longlong)param_1 + 0x90);
    pcStack_1f0 = *(code **)((longlong)param_1 + 0x98);
    local_1e8 = *(code **)((longlong)param_1 + 0xa0);
    pcStack_1e0 = *(code **)((longlong)param_1 + 0xa8);
    local_1d8 = *(code **)((longlong)param_1 + 0xb0);
    pcStack_1d0 = *(code **)((longlong)param_1 + 0xb8);
    local_1c8 = *(code **)((longlong)param_1 + 0xc0);
    pcStack_1c0 = *(code **)((longlong)param_1 + 200);
    local_1b8 = *(code **)((longlong)param_1 + 0xd0);
    pcStack_1b0 = *(code **)((longlong)param_1 + 0xd8);
    local_1a8 = *(code **)((longlong)param_1 + 0xe0);
    pcStack_1a0 = *(code **)((longlong)param_1 + 0xe8);
    local_198 = *(code **)((longlong)param_1 + 0x50);
    pcStack_190 = *(code **)((longlong)param_1 + 0x58);
    local_188 = *(code **)((longlong)param_1 + 0x60);
    pcStack_180 = *(code **)((longlong)param_1 + 0x68);
    local_178 = *(code **)((longlong)param_1 + 0x1e8);
    pcStack_170 = *(code **)((longlong)param_1 + 0x1f0);
    *(undefined1 *)((longlong)param_1 + 0x2a8) = 1;
    local_220 = (code *)param_2->ID;
    local_168 = *(code **)((longlong)param_1 + 0x1f8);
    FNiagaraDataInterfaceSplineLUT::FNiagaraDataInterfaceSplineLUT
              (&local_160,(FNiagaraDataInterfaceSplineLUT *)((longlong)param_1 + 0x268));
    local_258[0] = (code *)0x0;
    local_230 = FMemory::Malloc(0x120,0x10);
    *local_230 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,1,1>
                          ::_vftable_;
    local_230[2] = (code *)local_228;
    local_230[3] = local_220;
    local_230[4] = local_218;
    local_230[5] = pcStack_210;
    local_230[6] = local_208;
    local_230[7] = pcStack_200;
    local_230[8] = local_1f8;
    local_230[9] = pcStack_1f0;
    local_230[10] = local_1e8;
    local_230[0xb] = pcStack_1e0;
    local_230[0xc] = local_1d8;
    local_230[0xd] = pcStack_1d0;
    local_230[0xe] = local_1c8;
    local_230[0xf] = pcStack_1c0;
    local_230[0x10] = local_1b8;
    local_230[0x11] = pcStack_1b0;
    local_230[0x12] = local_1a8;
    local_230[0x13] = pcStack_1a0;
    local_230[0x14] = local_198;
    local_230[0x15] = pcStack_190;
    local_230[0x16] = local_188;
    local_230[0x17] = pcStack_180;
    local_230[0x18] = local_178;
    local_230[0x19] = pcStack_170;
    local_230[0x1a] = local_168;
    local_230[0x1b] = (code *)0x0;
    local_230[0x1b] = (code *)local_160.Positions.AllocatorInstance.Data;
    local_160.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_230 + 0x1c) = local_160.Positions.ArrayNum;
    *(int *)((longlong)local_230 + 0xe4) = local_160.Positions.ArrayMax;
    local_160.Positions.ArrayNum = 0;
    local_160.Positions.ArrayMax = 0;
    local_230[0x1d] = (code *)0x0;
    local_230[0x1d] = (code *)local_160.Scales.AllocatorInstance.Data;
    local_160.Scales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_230 + 0x1e) = local_160.Scales.ArrayNum;
    *(int *)((longlong)local_230 + 0xf4) = local_160.Scales.ArrayMax;
    local_160.Scales.ArrayNum = 0;
    local_160.Scales.ArrayMax = 0;
    local_230[0x1f] = (code *)0x0;
    local_230[0x1f] = (code *)local_160.Rotations.AllocatorInstance.Data;
    local_160.Rotations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_230 + 0x20) = local_160.Rotations.ArrayNum;
    *(int *)((longlong)local_230 + 0x104) = local_160.Rotations.ArrayMax;
    local_160.Rotations.ArrayNum = 0;
    local_160.Rotations.ArrayMax = 0;
    *(float *)(local_230 + 0x21) = local_160.SplineLength;
    *(float *)((longlong)local_230 + 0x10c) = local_160.SplineDistanceStep;
    *(float *)(local_230 + 0x22) = local_160.InvSplineDistanceStep;
    *(int *)((longlong)local_230 + 0x114) = local_160.MaxIndex;
    if (local_230 + 2 != (code **)0x0) {
      local_258[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_04 = FRenderCommandList::GetInstanceTLS();
    if (this_04 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSpline::PerInstanceTick_[::F]::TSTR_FUpdateDIColorCurve691>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_258);
    }
    else {
      this_05 = FRenderCommandList::GetRenderThread(this_04);
      local_118._0_8_ = local_258[0];
      local_258[0] = (code *)0x0;
      local_f0 = local_230;
      local_230 = (code **)0x0;
      local_118._16_8_ = local_248[0];
      local_118._24_8_ = local_248[1];
      local_118._32_8_ = local_248[2];
      local_e8 = 2;
      pFVar23 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceSpline::PerInstanceTick'[::F]::TSTR_FUpdateDIColorCurve691>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_05,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_118,pFVar23);
      uVar25 = (ulonglong)local_e8;
      if ((2 < uVar25) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          ppcVar24 = (code **)(local_118 + 0x10);
          if (local_f0 != (code **)0x0) {
            ppcVar24 = local_f0;
          }
          (**(code **)(*ppcVar24 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar25])(local_118);
      }
    }
    if (local_258[0] != (code *)0x0) {
      ppcVar24 = local_258 + 2;
      if (local_230 != (code **)0x0) {
        ppcVar24 = local_230;
      }
      (**(code **)(*ppcVar24 + 0x10))();
    }
    if (local_160.Rotations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Rotations.AllocatorInstance.Data);
    }
    if (local_160.Scales.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Scales.AllocatorInstance.Data);
    }
    if (local_160.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Positions.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 149246a60

void __thiscall UNiagaraDataInterfaceSpline::PostInitProperties(UNiagaraDataInterfaceSpline *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 149246f80

void __thiscall UNiagaraDataInterfaceSpline::PostLoad(UNiagaraDataInterfaceSpline *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceSpline **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// SetShaderParameters @ 14924e550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSpline::SetShaderParameters
          (UNiagaraDataInterfaceSpline *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  ulong64 uVar8;
  FNDISpline_InstanceData_RenderThread *pFVar9;
  FRHIShaderResourceView *pFVar10;
  uint uVar11;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar11 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<NDISplineLocal::FShaderParameters>::GetStructMetadata();
  puVar3 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar7->Size + uVar11;
  uVar8 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar9 = TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FNDISpline_InstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISpline_InstanceData_RenderThread,0>_>
                   *)(pFVar2 + 1),uVar8);
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  if (pFVar9 == (FNDISpline_InstanceData_RenderThread *)0x0) {
    *(undefined8 *)(puVar3 + uVar11) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + uVar11) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x10) =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x10) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x20) =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x20) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x30) =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x30) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x40) =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x40) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x50) =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x50) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x60) =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x60) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x70) =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x70) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x80) =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x80) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x90) =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0x90) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xa0) =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xa0) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xb0) =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xb0) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xc0) =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xc0) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xd0) =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xd0) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xe0) =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xe0) + 8) = uVar5;
    uVar5 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xf0) =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((longlong)(puVar3 + (ulonglong)uVar11 + 0xf0) + 8) = uVar5;
    *(TQuat<float> *)(puVar3 + (ulonglong)uVar11 + 0x100) = UE::Math::TQuat<float>::Identity;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x110) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
    *(float *)(puVar3 + (ulonglong)uVar11 + 0x118) =
         UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
    puVar1 = puVar3 + (ulonglong)uVar11 + 0x11c;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = puVar3 + (ulonglong)uVar11 + 0x124;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    pFVar10 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar3 + (ulonglong)uVar11 + 0x130) = pFVar10;
    pFVar10 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar3 + (ulonglong)uVar11 + 0x138) = pFVar10;
    pFVar10 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  else {
    uVar5 = *(undefined8 *)((pFVar9->SplineTransform).M[0] + 2);
    *(undefined8 *)(puVar3 + uVar11) = *(undefined8 *)(pFVar9->SplineTransform).M[0];
    *(undefined8 *)(puVar3 + uVar11 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransform).M[1] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x10) =
         *(undefined8 *)(pFVar9->SplineTransform).M[1];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x10 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransform).M[2] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x20) =
         *(undefined8 *)(pFVar9->SplineTransform).M[2];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x20 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransform).M[3] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x30) =
         *(undefined8 *)(pFVar9->SplineTransform).M[3];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x30 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformRotationMat).M[0] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x40) =
         *(undefined8 *)(pFVar9->SplineTransformRotationMat).M[0];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x40 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformRotationMat).M[1] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x50) =
         *(undefined8 *)(pFVar9->SplineTransformRotationMat).M[1];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x50 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformRotationMat).M[2] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x60) =
         *(undefined8 *)(pFVar9->SplineTransformRotationMat).M[2];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x60 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformRotationMat).M[3] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x70) =
         *(undefined8 *)(pFVar9->SplineTransformRotationMat).M[3];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x70 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverse).M[0] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x80) =
         *(undefined8 *)(pFVar9->SplineTransformInverse).M[0];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x80 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverse).M[1] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x90) =
         *(undefined8 *)(pFVar9->SplineTransformInverse).M[1];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x90 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverse).M[2] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xa0) =
         *(undefined8 *)(pFVar9->SplineTransformInverse).M[2];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xa0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverse).M[3] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xb0) =
         *(undefined8 *)(pFVar9->SplineTransformInverse).M[3];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xb0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverseTranspose).M[0] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xc0) =
         *(undefined8 *)(pFVar9->SplineTransformInverseTranspose).M[0];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xc0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverseTranspose).M[1] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xd0) =
         *(undefined8 *)(pFVar9->SplineTransformInverseTranspose).M[1];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xd0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverseTranspose).M[2] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xe0) =
         *(undefined8 *)(pFVar9->SplineTransformInverseTranspose).M[2];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xe0 + 8) = uVar5;
    uVar5 = *(undefined8 *)((pFVar9->SplineTransformInverseTranspose).M[3] + 2);
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xf0) =
         *(undefined8 *)(pFVar9->SplineTransformInverseTranspose).M[3];
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0xf0 + 8) = uVar5;
    uVar5 = *(undefined8 *)&(pFVar9->SplineTransformRotation).Z;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x100) =
         *(undefined8 *)&pFVar9->SplineTransformRotation;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x100 + 8) = uVar5;
    *(undefined8 *)(puVar3 + (ulonglong)uVar11 + 0x110) =
         *(undefined8 *)&(pFVar9->DefaultUpVector).field0_0x0;
    *(float *)(puVar3 + (ulonglong)uVar11 + 0x118) = (pFVar9->DefaultUpVector).field0_0x0._s_0.Z;
    *(float *)(puVar3 + (ulonglong)uVar11 + 0x11c) = pFVar9->SplineLength;
    *(float *)(puVar3 + (ulonglong)uVar11 + 0x120) = pFVar9->SplineDistanceStep;
    *(float *)(puVar3 + (ulonglong)uVar11 + 0x124) = pFVar9->InvSplineDistanceStep;
    *(int *)(puVar3 + (ulonglong)uVar11 + 0x128) = pFVar9->MaxIndex;
    *(FRHIShaderResourceView **)(puVar3 + (ulonglong)uVar11 + 0x130) =
         (pFVar9->SplinePositionsLUT).SRV.Reference;
    *(FRHIShaderResourceView **)(puVar3 + (ulonglong)uVar11 + 0x138) =
         (pFVar9->SplineScalesLUT).SRV.Reference;
    pFVar10 = (pFVar9->SplineRotationsLUT).SRV.Reference;
  }
  *(FRHIShaderResourceView **)(puVar3 + (ulonglong)uVar11 + 0x140) = pFVar10;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSpline @ 14924f510

void __cdecl UNiagaraDataInterfaceSpline::StaticRegisterNativesUNiagaraDataInterfaceSpline(void)

{
  return;
}

// VMGetSplineLength @ 149254530

void __thiscall
UNiagaraDataInterfaceSpline::VMGetSplineLength
          (UNiagaraDataInterfaceSpline *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int local_30 [2];
  FUserPtrHandler<FNDISpline_InstanceData> local_28 [2];
  
  VectorVM::FUserPtrHandler<FNDISpline_InstanceData>::FUserPtrHandler<FNDISpline_InstanceData>
            (local_28,param_1);
  iVar3 = 0;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  fVar5 = 0.0;
  iVar4 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_28[0].Ptr);
  if (bVar1) {
    if (this->bUseLUT == false) {
      fVar5 = FSplineCurves::GetSplineLength(&(local_28[0].Ptr)->SplineCurves);
    }
    else {
      fVar5 = ((local_28[0].Ptr)->SplineLUT).SplineLength;
    }
  }
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar5;
      pfVar2 = pfVar2 + local_30[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// WriteTransform @ 149254f50

void __thiscall
UNiagaraDataInterfaceSpline::WriteTransform
          (UNiagaraDataInterfaceSpline *this,TMatrix<float> *param_1,
          FVectorVMExternalFunctionContext *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *local_res20;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  int local_1a0 [4];
  int local_190 [4];
  int local_180 [4];
  int local_170 [4];
  int local_160 [4];
  int local_150 [4];
  int local_140 [4];
  int local_130 [4];
  int local_120 [10];
  float *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  int local_a8 [4];
  int local_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  
  iVar6 = 0;
  local_130[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_130);
  local_140[0] = 0;
  pfVar1 = pfVar1 + local_130[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_140);
  local_150[0] = 0;
  pfVar2 = pfVar2 + local_140[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_150);
  local_160[0] = 0;
  pfVar3 = pfVar3 + local_150[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_160);
  local_170[0] = 0;
  pfVar4 = pfVar4 + local_160[0] * param_2->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_170);
  local_180[0] = 0;
  pfVar5 = pfVar5 + local_170[0] * param_2->PerInstanceFnInstanceIdx;
  local_f8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_180);
  local_190[0] = 0;
  local_f8 = local_f8 + local_180[0] * param_2->PerInstanceFnInstanceIdx;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_190);
  local_1a0[0] = 0;
  local_f0 = local_f0 + local_190[0] * param_2->PerInstanceFnInstanceIdx;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_1a0);
  local_a8[0] = 0;
  local_e8 = local_e8 + local_1a0[0] * param_2->PerInstanceFnInstanceIdx;
  local_e0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_a8);
  local_e0 = local_e0 + local_a8[0] * param_2->PerInstanceFnInstanceIdx;
  local_98[0] = 0;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_98);
  local_88[0] = 0;
  local_d8 = local_d8 + local_98[0] * param_2->PerInstanceFnInstanceIdx;
  local_d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_88);
  local_78[0] = 0;
  local_d0 = local_d0 + local_88[0] * param_2->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_78);
  local_68[0] = 0;
  local_res20 = local_res20 + local_78[0] * param_2->PerInstanceFnInstanceIdx;
  local_1c8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_68);
  local_58[0] = 0;
  local_1c8 = local_1c8 + local_68[0] * param_2->PerInstanceFnInstanceIdx;
  local_1c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_58);
  local_48[0] = 0;
  local_1c0 = local_1c0 + local_58[0] * param_2->PerInstanceFnInstanceIdx;
  local_1b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_48);
  local_120[0] = 0;
  local_1b8 = local_1b8 + local_48[0] * param_2->PerInstanceFnInstanceIdx;
  local_1b0 = FVectorVMExternalFunctionContext::GetNextRegister(param_2,local_120);
  local_1b0 = local_1b0 + local_120[0] * param_2->PerInstanceFnInstanceIdx;
  if (0 < param_2->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = param_1->M[0][0];
      *pfVar2 = param_1->M[0][1];
      *pfVar3 = param_1->M[0][2];
      *pfVar4 = param_1->M[0][3];
      pfVar1 = pfVar1 + local_130[0];
      pfVar2 = pfVar2 + local_140[0];
      pfVar3 = pfVar3 + local_150[0];
      pfVar4 = pfVar4 + local_160[0];
      *pfVar5 = param_1->M[1][0];
      pfVar5 = pfVar5 + local_170[0];
      *local_f8 = param_1->M[1][1];
      local_f8 = local_f8 + local_180[0];
      *local_f0 = param_1->M[1][2];
      local_f0 = local_f0 + local_190[0];
      *local_e8 = param_1->M[1][3];
      local_e8 = local_e8 + local_1a0[0];
      *local_e0 = param_1->M[2][0];
      local_e0 = local_e0 + local_a8[0];
      *local_d8 = param_1->M[2][1];
      local_d8 = local_d8 + local_98[0];
      *local_d0 = param_1->M[2][2];
      local_d0 = local_d0 + local_88[0];
      *local_res20 = param_1->M[2][3];
      local_res20 = local_res20 + local_78[0];
      *local_1c8 = param_1->M[3][0];
      local_1c8 = local_1c8 + local_68[0];
      *local_1c0 = param_1->M[3][1];
      local_1c0 = local_1c0 + local_58[0];
      *local_1b8 = param_1->M[3][2];
      local_1b8 = local_1b8 + local_48[0];
      *local_1b0 = param_1->M[3][3];
      local_1b0 = local_1b0 + local_120[0];
    } while (iVar6 < param_2->NumInstances);
  }
  return;
}

