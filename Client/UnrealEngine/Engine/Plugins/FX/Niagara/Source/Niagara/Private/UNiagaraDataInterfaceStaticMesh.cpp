// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 123

// StaticClass @ 148ee5400

UClass * __cdecl UNiagaraDataInterfaceStaticMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceStaticMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceStaticMesh,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceStaticMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceStaticMesh>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton;
}

// VMGetFilteredSocketTransform<FNDITransformHandler> @ 148f445e0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSocketTransform<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  longlong lVar45;
  FStaticMeshLODResources *this_00;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  FStaticMeshLODResources *pFVar51;
  float *pfVar52;
  float *pfVar53;
  float *pfVar54;
  float fVar55;
  ulonglong uVar56;
  float *pfVar57;
  FStaticMeshLODResources *pFVar58;
  float *pfVar59;
  float *pfVar60;
  float *pfVar61;
  float *pfVar62;
  float fVar63;
  float *pfVar64;
  int iVar65;
  float *pfVar66;
  float *pfVar67;
  float *pfVar68;
  bool bVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float *local_2d8;
  undefined1 local_2c8 [16];
  int local_2b8;
  longlong local_2b0;
  float local_2a8;
  longlong local_2a0;
  float local_298;
  longlong local_290;
  float local_288;
  FVectorVMExternalFunctionContext *local_280;
  float local_278;
  undefined1 local_268 [12];
  undefined4 uStack_25c;
  undefined1 local_258 [12];
  undefined4 uStack_24c;
  longlong local_248;
  float fStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  float fStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  float fStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1e8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1b8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_188;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_158;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_118;
  FStaticMeshLODResources *local_108;
  FColorVertexBuffer *local_100 [2];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  
  local_280 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_118,param_1);
  iVar65 = 0;
  local_108 = (FStaticMeshLODResources *)0x0;
  pFVar51 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_118.Ptr,local_100);
  this_00 = local_108;
  pFVar58 = local_108;
  if (local_108 != pFVar51) {
    if (pFVar51 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar51->_padding_ = (int)pFVar51->_padding_ + 1;
      UNLOCK();
    }
    bVar69 = local_108 != (FStaticMeshLODResources *)0x0;
    pFVar58 = pFVar51;
    local_108 = pFVar51;
    if (bVar69) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>
            ((FExternalFuncInputHandler<int> *)local_2c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1e8,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_158,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1b8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_188,param_1);
  uVar48 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar47 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar6 = __real_3f800000;
  fVar63 = (float)((local_118.Ptr)->NumFilteredSockets + -1);
  if ((int)fVar63 < 0) {
    local_258._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_258._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_258._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_24c = 0x3f800000;
    fVar14 = ((local_118.Ptr)->Rotation).X;
    fVar15 = ((local_118.Ptr)->Rotation).Y;
    fVar16 = ((local_118.Ptr)->Rotation).Z;
    fVar29 = ((local_118.Ptr)->Rotation).W;
    local_208 = (float)((local_118.Ptr)->Transform).M[1][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                (float)((local_118.Ptr)->Transform).M[0][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                (float)((local_118.Ptr)->Transform).M[2][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                (float)((local_118.Ptr)->Transform).M[3][0] * 1.0;
    fStack_204 = (float)((local_118.Ptr)->Transform).M[1][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->Transform).M[0][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->Transform).M[2][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->Transform).M[3][1] * 1.0;
    fStack_200 = (float)((local_118.Ptr)->Transform).M[1][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->Transform).M[0][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->Transform).M[2][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->Transform).M[3][2] * 1.0;
    fStack_1fc = (float)((local_118.Ptr)->Transform).M[1][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->Transform).M[0][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->Transform).M[2][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->Transform).M[3][3] * 1.0;
    fVar6 = UE::Math::TQuat<float>::Identity.X;
    fVar63 = UE::Math::TQuat<float>::Identity.Y;
    fVar7 = UE::Math::TQuat<float>::Identity.Z;
    fVar55 = UE::Math::TQuat<float>::Identity.W;
    fVar70 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
    fVar74 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
    fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
    fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
    fVar71 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
    fVar75 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
    fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
    fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
    fVar72 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar73 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_2c8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_268._4_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    local_268._0_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    local_268._8_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    uStack_25c = 0;
    local_1f8 = (float)((local_118.Ptr)->TransformInverseTransposed).M[1][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                (float)((local_118.Ptr)->TransformInverseTransposed).M[0][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                (float)((local_118.Ptr)->TransformInverseTransposed).M[2][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                (float)((local_118.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    fStack_1f4 = (float)((local_118.Ptr)->TransformInverseTransposed).M[1][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[0][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[2][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    fStack_1f0 = (float)((local_118.Ptr)->TransformInverseTransposed).M[1][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[0][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[2][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    fStack_1ec = (float)((local_118.Ptr)->TransformInverseTransposed).M[1][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[0][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[2][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_118.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    local_2c8._0_8_ =
         (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    if (0 < param_1->NumInstances) {
      local_f0 = (longlong)local_1e8.X.AdvanceOffset * 4;
      local_e8 = (longlong)local_1e8.Y.AdvanceOffset * 4;
      local_e0 = (longlong)local_1e8.Z.AdvanceOffset * 4;
      local_d8 = (longlong)local_158.X.AdvanceOffset * 4;
      local_268._0_8_ = (longlong)local_158.Y.AdvanceOffset * 4;
      local_258._0_8_ = (longlong)local_158.Z.AdvanceOffset * 4;
      local_248 = (longlong)local_158.W.AdvanceOffset * 4;
      local_238 = (longlong)local_1b8.X.AdvanceOffset * 4;
      local_228 = (longlong)local_1b8.Y.AdvanceOffset * 4;
      local_218 = (longlong)local_1b8.Z.AdvanceOffset * 4;
      local_2b0 = (longlong)local_188.X.AdvanceOffset * 4;
      local_2a0 = (longlong)local_188.Y.AdvanceOffset * 4;
      local_290 = (longlong)local_188.Z.AdvanceOffset * 4;
      local_2c8._0_8_ = local_188.Y.Register;
      local_2d8 = local_188.X.Register;
      pfVar52 = local_1e8.Z.Register;
      pfVar53 = local_1e8.Y.Register;
      pfVar54 = local_158.X.Register;
      pfVar57 = local_188.Z.Register;
      pfVar59 = local_1e8.X.Register;
      pfVar60 = local_158.W.Register;
      pfVar61 = local_158.Z.Register;
      pfVar62 = local_158.Y.Register;
      pfVar64 = local_1b8.Y.Register;
      pfVar66 = local_1b8.X.Register;
      pfVar67 = local_1b8.Z.Register;
      do {
        iVar65 = iVar65 + 1;
        *pfVar59 = local_208;
        *pfVar53 = fStack_204;
        *pfVar52 = fStack_200;
        *pfVar54 = fVar55 * fVar14 * fVar70 + fVar29 * fVar6 + fVar7 * fVar15 * fVar71 +
                   fVar63 * fVar16 * fVar72;
        *pfVar62 = fVar7 * fVar14 * fVar74 + fVar29 * fVar63 + fVar55 * fVar15 * fVar75 +
                   fVar6 * fVar16 * fVar73;
        *pfVar61 = fVar63 * fVar14 * fVar8 + fVar29 * fVar7 + fVar6 * fVar15 * fVar9 +
                   fVar55 * fVar16 * fVar10;
        *pfVar60 = fVar6 * fVar14 * fVar11 + fVar29 * fVar55 + fVar63 * fVar15 * fVar12 +
                   fVar7 * fVar16 * fVar13;
        *pfVar66 = local_1f8;
        *pfVar64 = fStack_1f4;
        *pfVar67 = fStack_1f0;
        *local_2d8 = (float)uVar46;
        pfVar68 = (float *)(local_2c8._0_8_ + (longlong)local_188.Y.AdvanceOffset * 4);
        *(undefined4 *)local_2c8._0_8_ = uVar47;
        *pfVar57 = (float)uVar48;
        pfVar52 = pfVar52 + local_1e8.Z.AdvanceOffset;
        pfVar53 = pfVar53 + local_1e8.Y.AdvanceOffset;
        pfVar54 = pfVar54 + local_158.X.AdvanceOffset;
        pfVar57 = pfVar57 + local_188.Z.AdvanceOffset;
        pFVar58 = local_108;
        pfVar59 = pfVar59 + local_1e8.X.AdvanceOffset;
        pfVar60 = pfVar60 + local_158.W.AdvanceOffset;
        pfVar61 = pfVar61 + local_158.Z.AdvanceOffset;
        pfVar62 = pfVar62 + local_158.Y.AdvanceOffset;
        pfVar64 = pfVar64 + local_1b8.Y.AdvanceOffset;
        pfVar66 = pfVar66 + local_1b8.X.AdvanceOffset;
        pfVar67 = pfVar67 + local_1b8.Z.AdvanceOffset;
        local_2d8 = local_2d8 + local_188.X.AdvanceOffset;
        local_2c8._0_8_ = pfVar68;
      } while (iVar65 < local_280->NumInstances);
    }
  }
  else {
    uVar46 = uStack_23c;
    uVar47 = uStack_22c;
    uVar48 = uStack_21c;
    uVar49 = uStack_20c;
    if (0 < param_1->NumInstances) {
      do {
        uStack_20c = uVar49;
        uStack_21c = uVar48;
        uStack_22c = uVar47;
        uStack_23c = uVar46;
        pfVar52 = (float *)(local_2c8._0_8_ + (longlong)local_2b8 * 4);
        fVar7 = fVar63;
        if ((int)*(float *)local_2c8._0_8_ < (int)fVar63) {
          fVar7 = *(float *)local_2c8._0_8_;
        }
        fVar55 = 0.0;
        if (0 < (int)fVar7) {
          fVar55 = fVar7;
        }
        uVar50 = 0;
        if ((int)fVar55 < ((local_118.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar50 = ~(uint)fVar55 >> 0x1f;
        }
        local_2c8._0_8_ = pfVar52;
        if ((uVar50 == 0) &&
           (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar69)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(ushort *)
                 (((local_118.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
                 (longlong)(int)fVar55 * 2);
        uVar56 = (ulonglong)uVar3;
        if ((((local_118.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar3) &&
           (bVar69 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar69)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = ((local_118.Ptr)->CachedSockets).AllocatorInstance.Data;
        fVar70 = (float)((local_118.Ptr)->Transform).M[0][2];
        pFVar2 = pFVar4 + uVar56 * 0x30 + 0x10;
        fVar7 = *(float *)pFVar2;
        fVar55 = *(float *)(pFVar2 + 4);
        local_238 = *(longlong *)pFVar2;
        local_228 = *(longlong *)pFVar2;
        local_218 = *(longlong *)pFVar2;
        local_2a0 = *(longlong *)pFVar2;
        local_290 = *(longlong *)pFVar2;
        local_280 = *(FVectorVMExternalFunctionContext **)pFVar2;
        local_298 = *(float *)(pFVar2 + 8);
        fVar74 = (float)((local_118.Ptr)->Transform).M[0][0];
        fVar75 = (float)((local_118.Ptr)->Transform).M[0][1];
        local_1f8 = (float)((local_118.Ptr)->Transform).M[1][0];
        fStack_1f4 = (float)((local_118.Ptr)->Transform).M[1][1];
        fStack_1f0 = (float)((local_118.Ptr)->Transform).M[1][2];
        fStack_1ec = (float)((local_118.Ptr)->Transform).M[1][3];
        local_208 = (float)((local_118.Ptr)->Transform).M[2][0];
        fStack_204 = (float)((local_118.Ptr)->Transform).M[2][1];
        fStack_200 = (float)((local_118.Ptr)->Transform).M[2][2];
        fStack_1fc = (float)((local_118.Ptr)->Transform).M[2][3];
        fVar71 = (float)((local_118.Ptr)->Transform).M[3][0];
        fVar72 = (float)((local_118.Ptr)->Transform).M[3][1];
        fStack_d0 = (float)((local_118.Ptr)->Transform).M[3][2];
        fStack_cc = (float)((local_118.Ptr)->Transform).M[3][3];
        local_d8 = CONCAT44(fVar72,fVar71);
        uStack_20c = 0x3f800000;
        dVar17 = ((local_118.Ptr)->PrevTransform).M[1][0];
        dVar18 = ((local_118.Ptr)->PrevTransform).M[1][1];
        dVar19 = ((local_118.Ptr)->PrevTransform).M[1][2];
        dVar20 = ((local_118.Ptr)->PrevTransform).M[0][2];
        dVar21 = ((local_118.Ptr)->PrevTransform).M[0][0];
        dVar22 = ((local_118.Ptr)->PrevTransform).M[0][1];
        uStack_21c = 0x3f800000;
        dVar23 = ((local_118.Ptr)->PrevTransform).M[2][2];
        dVar24 = ((local_118.Ptr)->PrevTransform).M[2][0];
        dVar25 = ((local_118.Ptr)->PrevTransform).M[2][1];
        dVar26 = ((local_118.Ptr)->PrevTransform).M[3][2];
        dVar27 = ((local_118.Ptr)->PrevTransform).M[3][0];
        dVar28 = ((local_118.Ptr)->PrevTransform).M[3][1];
        if ((local_118.Ptr)->DeltaSeconds <= 0.0) {
          fVar73 = 0.0;
        }
        else {
          fVar73 = fVar6 / (local_118.Ptr)->DeltaSeconds;
        }
        pfVar52 = local_1e8.X.Register + local_1e8.X.AdvanceOffset;
        uStack_22c = 0x3f800000;
        *local_1e8.X.Register =
             fVar55 * local_1f8 + fVar7 * fVar74 + local_298 * local_208 + fVar71 * 1.0;
        *local_1e8.Y.Register =
             fVar55 * fStack_1f4 + fVar7 * fVar75 + local_298 * fStack_204 + fVar72 * 1.0;
        local_1e8.Y.Register = local_1e8.Y.Register + local_1e8.Y.AdvanceOffset;
        *local_1e8.Z.Register =
             fVar55 * fStack_1f0 + fVar7 * fVar70 + local_298 * fStack_200 + fStack_d0 * 1.0;
        fVar29 = ((local_118.Ptr)->Rotation).X;
        fVar30 = ((local_118.Ptr)->Rotation).Y;
        fVar31 = ((local_118.Ptr)->Rotation).Z;
        fVar32 = ((local_118.Ptr)->Rotation).W;
        local_1e8.Z.Register = local_1e8.Z.Register + local_1e8.Z.AdvanceOffset;
        pFVar2 = pFVar4 + uVar56 * 0x30;
        fVar33 = *(float *)pFVar2;
        fVar34 = *(float *)(pFVar2 + 4);
        fVar35 = *(float *)(pFVar2 + 8);
        fVar36 = *(float *)(pFVar2 + 0xc);
        fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
        fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
        fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
        fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
        fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
        fVar15 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
        fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar16 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        *local_158.X.Register =
             fVar36 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
             fVar32 * fVar33 +
             fVar35 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
             fVar34 * fVar31 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        *local_158.Y.Register =
             fVar35 * fVar29 * fVar8 + fVar32 * fVar34 + fVar36 * fVar30 * fVar9 +
             fVar33 * fVar31 * fVar10;
        *local_158.Z.Register =
             fVar34 * fVar29 * fVar11 + fVar32 * fVar35 + fVar33 * fVar30 * fVar12 +
             fVar36 * fVar31 * fVar13;
        local_158.Z.Register = local_158.Z.Register + local_158.Z.AdvanceOffset;
        *local_158.W.Register =
             fVar33 * fVar29 * fVar14 + fVar32 * fVar36 + fVar34 * fVar30 * fVar15 +
             fVar35 * fVar31 * fVar16;
        pFVar4 = pFVar4 + uVar56 * 0x30 + 0x20;
        fVar8 = *(float *)pFVar4;
        fVar9 = *(float *)(pFVar4 + 4);
        local_248 = *(longlong *)pFVar4;
        local_2b0 = *(longlong *)pFVar4;
        local_2a8 = *(float *)(pFVar4 + 8);
        dVar37 = ((local_118.Ptr)->TransformInverseTransposed).M[1][2];
        local_158.W.Register = local_158.W.Register + local_158.W.AdvanceOffset;
        dVar38 = ((local_118.Ptr)->TransformInverseTransposed).M[1][1];
        pfVar53 = local_1b8.X.Register + local_1b8.X.AdvanceOffset;
        dVar39 = ((local_118.Ptr)->TransformInverseTransposed).M[0][2];
        dVar40 = ((local_118.Ptr)->TransformInverseTransposed).M[2][2];
        uStack_23c = 0;
        dVar41 = ((local_118.Ptr)->TransformInverseTransposed).M[0][1];
        dVar42 = ((local_118.Ptr)->TransformInverseTransposed).M[2][1];
        dVar43 = ((local_118.Ptr)->TransformInverseTransposed).M[3][2];
        dVar44 = ((local_118.Ptr)->TransformInverseTransposed).M[3][1];
        *local_1b8.X.Register =
             (float)((local_118.Ptr)->TransformInverseTransposed).M[1][0] * fVar9 +
             (float)((local_118.Ptr)->TransformInverseTransposed).M[0][0] * fVar8 +
             (float)((local_118.Ptr)->TransformInverseTransposed).M[2][0] * local_2a8 +
             (float)((local_118.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
        *local_1b8.Y.Register =
             (float)dVar38 * fVar9 + (float)dVar41 * fVar8 + (float)dVar42 * local_2a8 +
             (float)dVar44 * 0.0;
        *local_1b8.Z.Register =
             (float)dVar37 * fVar9 + (float)dVar39 * fVar8 + (float)dVar40 * local_2a8 +
             (float)dVar43 * 0.0;
        local_1b8.Z.Register = local_1b8.Z.Register + local_1b8.Z.AdvanceOffset;
        iVar65 = iVar65 + 1;
        *local_188.X.Register =
             ((fVar55 * local_1f8 + fVar7 * fVar74 + local_298 * local_208 + fVar71 * 1.0) -
             ((float)dVar17 * fVar55 + (float)dVar21 * fVar7 + (float)dVar24 * local_298 +
             (float)dVar27 * 1.0)) * fVar73;
        *local_188.Y.Register =
             ((fVar55 * fStack_1f4 + fVar7 * fVar75 + local_298 * fStack_204 + fVar72 * 1.0) -
             ((float)dVar18 * fVar55 + (float)dVar22 * fVar7 + (float)dVar25 * local_298 +
             (float)dVar28 * 1.0)) * fVar73;
        *local_188.Z.Register =
             ((fVar55 * fStack_1f0 + fVar7 * fVar70 + local_298 * fStack_200 + fStack_d0 * 1.0) -
             ((float)dVar19 * fVar55 + (float)dVar20 * fVar7 + (float)dVar23 * local_298 +
             (float)dVar26 * 1.0)) * fVar73;
        local_188.Z.Register = local_188.Z.Register + local_188.Z.AdvanceOffset;
        pFVar58 = local_108;
        local_288 = local_298;
        local_278 = local_298;
        fStack_240 = local_2a8;
        uVar46 = 0;
        fStack_230 = local_298;
        uVar47 = 0x3f800000;
        fStack_220 = local_298;
        uVar48 = 0x3f800000;
        fStack_210 = local_298;
        uVar49 = 0x3f800000;
        local_1e8.X.Register = pfVar52;
        local_1b8.X.Register = pfVar53;
        local_1b8.Y.Register = local_1b8.Y.Register + local_1b8.Y.AdvanceOffset;
        local_188.X.Register = local_188.X.Register + local_188.X.AdvanceOffset;
        local_188.Y.Register = local_188.Y.Register + local_188.Y.AdvanceOffset;
        local_158.X.Register = local_158.X.Register + local_158.X.AdvanceOffset;
        local_158.Y.Register = local_158.Y.Register + local_158.Y.AdvanceOffset;
      } while (iVar65 < param_1->NumInstances);
    }
  }
  if (pFVar58 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar58->_padding_;
    LOCK();
    lVar45 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar45 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar58->_padding_)(pFVar58,1);
    }
  }
  return;
}

// VMGetFilteredSocketTransform<FNDITransformHandlerNoop> @ 148f452a0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSocketTransform<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  ushort uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FStaticMeshLODResources *pFVar14;
  FStaticMeshLODResources *pFVar15;
  bool bVar16;
  uint uVar17;
  FStaticMeshLODResources *pFVar18;
  longlong lVar19;
  float *pfVar20;
  float fVar21;
  ulonglong uVar22;
  FStaticMeshLODResources *pFVar23;
  int iVar24;
  float fVar25;
  float *pfVar26;
  float fVar27;
  float local_258;
  float fStack_254;
  float *local_248;
  float *local_240;
  undefined8 local_230;
  int local_220 [2];
  longlong local_218;
  float local_210;
  longlong local_208;
  float local_200;
  longlong local_1f8;
  float local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  longlong local_1a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_108;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_c8;
  FStaticMeshLODResources *local_b8;
  FColorVertexBuffer *local_b0 [17];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_c8,param_1);
  iVar24 = 0;
  local_b8 = (FStaticMeshLODResources *)0x0;
  pFVar18 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_c8.Ptr,local_b0);
  pFVar14 = local_b8;
  pFVar23 = local_b8;
  pFVar15 = local_b8;
  if (local_b8 != pFVar18) {
    if (pFVar18 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
      UNLOCK();
    }
    pFVar23 = pFVar18;
    pFVar15 = pFVar18;
    if (local_b8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_b8->_padding_;
      LOCK();
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_b8->_padding_;
        local_b8 = pFVar18;
        (**(code **)*plVar1)(pFVar14,1);
        pFVar15 = local_b8;
      }
    }
  }
  local_b8 = pFVar15;
  local_220[0] = 0;
  local_230 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_220);
  local_230 = local_230 + local_220[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  fVar8 = UE::Math::TQuat<float>::Identity.W;
  fVar27 = UE::Math::TQuat<float>::Identity.Z;
  fVar21 = UE::Math::TQuat<float>::Identity.Y;
  fVar7 = UE::Math::TQuat<float>::Identity.X;
  uVar13 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar11 = __real_3f800000;
  fVar25 = (float)((local_c8.Ptr)->NumFilteredSockets + -1);
  if ((int)fVar25 < 0) {
    if (0 < param_1->NumInstances) {
      fStack_254 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
      ;
      local_258 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1a0 = (longlong)local_168.Z.AdvanceOffset * 4;
      local_1c8 = local_108.W.Register;
      local_1d0 = local_108.Z.Register;
      local_218 = (longlong)local_138.X.AdvanceOffset * 4;
      local_1d8 = local_108.Y.Register;
      local_1e0 = local_108.X.Register;
      local_208 = (longlong)local_138.Y.AdvanceOffset * 4;
      local_1b0 = local_168.Z.Register;
      local_230._4_4_ =
           (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      fVar25 = local_230._4_4_;
      local_1b8 = local_168.Y.Register;
      local_1f8 = (longlong)local_138.Z.AdvanceOffset * 4;
      local_230._0_4_ = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      fVar11 = (float)local_230;
      local_1c0 = local_168.X.Register;
      local_230 = local_138.Z.Register;
      local_1e8 = local_198.Z.Register;
      local_240 = local_138.Y.Register;
      local_248 = local_198.Y.Register;
      local_1a8 = local_138.X.Register;
      pfVar20 = local_198.X.Register;
      do {
        *pfVar20 = local_258;
        pfVar20 = pfVar20 + local_198.X.AdvanceOffset;
        iVar24 = iVar24 + 1;
        *local_248 = fStack_254;
        local_248 = local_248 + local_198.Y.AdvanceOffset;
        *local_1e8 = (float)uVar12;
        local_1e8 = local_1e8 + local_198.Z.AdvanceOffset;
        *local_1e0 = fVar7;
        local_1e0 = local_1e0 + local_108.X.AdvanceOffset;
        *local_1d8 = fVar21;
        local_1d8 = local_1d8 + local_108.Y.AdvanceOffset;
        *local_1d0 = fVar27;
        local_1d0 = local_1d0 + local_108.Z.AdvanceOffset;
        *local_1c8 = fVar8;
        local_1c8 = local_1c8 + local_108.W.AdvanceOffset;
        *local_1c0 = fVar11;
        local_1c0 = local_1c0 + local_168.X.AdvanceOffset;
        *local_1b8 = fVar25;
        local_1b8 = local_1b8 + local_168.Y.AdvanceOffset;
        pfVar2 = local_1b0 + local_168.Z.AdvanceOffset;
        *local_1b0 = (float)uVar13;
        pfVar26 = local_1a8 + local_138.X.AdvanceOffset;
        *local_1a8 = local_258;
        *local_240 = fStack_254;
        *local_230 = (float)uVar12;
        pFVar23 = local_b8;
        local_240 = local_240 + local_138.Y.AdvanceOffset;
        local_230 = local_230 + local_138.Z.AdvanceOffset;
        local_1b0 = pfVar2;
        local_1a8 = pfVar26;
      } while (iVar24 < param_1->NumInstances);
    }
  }
  else {
    iVar24 = 0;
    if (0 < param_1->NumInstances) {
      do {
        lVar19 = (longlong)local_220[0];
        fVar7 = fVar25;
        if ((int)*local_230 < (int)fVar25) {
          fVar7 = *local_230;
        }
        fVar21 = 0.0;
        if (0 < (int)fVar7) {
          fVar21 = fVar7;
        }
        uVar17 = 0;
        if ((int)fVar21 < ((local_c8.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar17 = ~(uint)fVar21 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(ushort *)
                 (((local_c8.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
                 (longlong)(int)fVar21 * 2);
        uVar22 = (ulonglong)uVar4;
        if ((((local_c8.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar4) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = ((local_c8.Ptr)->CachedSockets).AllocatorInstance.Data;
        pFVar3 = pFVar5 + uVar22 * 0x30 + 0x10;
        fVar7 = *(float *)pFVar3;
        fVar21 = *(float *)(pFVar3 + 4);
        local_208 = *(longlong *)pFVar3;
        local_1f8 = *(longlong *)pFVar3;
        local_200 = *(float *)(pFVar3 + 8);
        if ((local_c8.Ptr)->DeltaSeconds <= 0.0) {
          fVar27 = 0.0;
        }
        else {
          fVar27 = fVar11 / (local_c8.Ptr)->DeltaSeconds;
        }
        *local_198.X.Register = fVar7;
        local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
        *local_198.Y.Register = fVar21;
        local_198.Y.Register = local_198.Y.Register + local_198.Y.AdvanceOffset;
        *local_198.Z.Register = local_200;
        local_198.Z.Register = local_198.Z.Register + local_198.Z.AdvanceOffset;
        pFVar3 = pFVar5 + uVar22 * 0x30;
        fVar8 = *(float *)(pFVar3 + 4);
        fVar9 = *(float *)(pFVar3 + 8);
        fVar10 = *(float *)(pFVar3 + 0xc);
        *local_108.X.Register = *(float *)pFVar3;
        local_108.X.Register = local_108.X.Register + local_108.X.AdvanceOffset;
        *local_108.Y.Register = fVar8;
        local_108.Y.Register = local_108.Y.Register + local_108.Y.AdvanceOffset;
        *local_108.Z.Register = fVar9;
        local_108.Z.Register = local_108.Z.Register + local_108.Z.AdvanceOffset;
        *local_108.W.Register = fVar10;
        pFVar5 = pFVar5 + uVar22 * 0x30 + 0x20;
        fVar8 = *(float *)(pFVar5 + 4);
        local_218 = *(longlong *)pFVar5;
        local_210 = *(float *)(pFVar5 + 8);
        local_108.W.Register = local_108.W.Register + local_108.W.AdvanceOffset;
        pfVar20 = local_168.X.Register + local_168.X.AdvanceOffset;
        *local_168.X.Register = *(float *)pFVar5;
        *local_168.Y.Register = fVar8;
        local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
        *local_168.Z.Register = local_210;
        local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
        *local_138.X.Register = (fVar7 - fVar7) * fVar27;
        local_138.X.Register = local_138.X.Register + local_138.X.AdvanceOffset;
        *local_138.Y.Register = (fVar21 - fVar21) * fVar27;
        local_138.Y.Register = local_138.Y.Register + local_138.Y.AdvanceOffset;
        pfVar2 = local_138.Z.Register + local_138.Z.AdvanceOffset;
        iVar24 = iVar24 + 1;
        *local_138.Z.Register = 0.0;
        pFVar23 = local_b8;
        local_230 = local_230 + lVar19;
        local_1f0 = local_200;
        local_168.X.Register = pfVar20;
        local_138.Z.Register = pfVar2;
      } while (iVar24 < param_1->NumInstances);
    }
  }
  if (pFVar23 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar23->_padding_;
    LOCK();
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar23->_padding_)(pFVar23,1);
    }
  }
  return;
}

// VMGetFilteredSocketTransformInterpolated<FNDITransformHandler> @ 148f459e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSocketTransformInterpolated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  ushort uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  longlong lVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  FStaticMeshLODResources *this_00;
  uint uVar36;
  FStaticMeshLODResources *pFVar37;
  TQuat<float> *pTVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  ulonglong uVar43;
  float *pfVar44;
  FStaticMeshLODResources *pFVar45;
  float *pfVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  int iVar50;
  float *pfVar51;
  uint uVar52;
  float *pfVar53;
  float *pfVar54;
  bool bVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float *local_308;
  float *local_2f8;
  TQuat<float> local_248;
  FNDIOutputParam<UE::Math::TVector<float>_> local_238;
  FNDIOutputParam<UE::Math::TVector<float>_> local_208;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1d8;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_1a8;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_158;
  FStaticMeshLODResources *local_148;
  FColorVertexBuffer *local_140 [2];
  longlong local_130;
  longlong local_128;
  TQuat<float> local_118;
  TQuat<float> local_108;
  FExternalFuncInputHandler<int> local_f8;
  FExternalFuncInputHandler<float> local_e0 [7];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_158,param_1);
  iVar50 = 0;
  local_148 = (FStaticMeshLODResources *)0x0;
  pFVar37 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_158.Ptr,local_140);
  this_00 = local_148;
  pFVar45 = local_148;
  if (local_148 != pFVar37) {
    if (pFVar37 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar37->_padding_ = (int)pFVar37->_padding_ + 1;
      UNLOCK();
    }
    bVar55 = local_148 != (FStaticMeshLODResources *)0x0;
    pFVar45 = pFVar37;
    local_148 = pFVar37;
    if (bVar55) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>(&local_f8,param_1);
  VectorVM::FExternalFuncInputHandler<float>::FExternalFuncInputHandler<float>(local_e0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_238,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_1a8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_208,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1d8,param_1);
  uVar35 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar33 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar13 = __real_3f800000;
  uVar52 = (local_158.Ptr)->NumFilteredSockets - 1;
  if ((int)uVar52 < 0) {
    fVar63 = (float)((local_158.Ptr)->Transform).M[1][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar64 = (float)((local_158.Ptr)->Transform).M[1][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar65 = (float)((local_158.Ptr)->Transform).M[1][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar61 = (float)((local_158.Ptr)->Transform).M[0][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar58 = (float)((local_158.Ptr)->Transform).M[0][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar60 = (float)((local_158.Ptr)->Transform).M[0][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    dVar20 = ((local_158.Ptr)->Transform).M[3][2];
    fVar57 = (float)((local_158.Ptr)->Transform).M[2][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar59 = (float)((local_158.Ptr)->Transform).M[2][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar62 = (float)((local_158.Ptr)->Transform).M[2][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    dVar21 = ((local_158.Ptr)->Transform).M[3][0];
    dVar22 = ((local_158.Ptr)->Transform).M[3][1];
    fVar13 = UE::Math::TQuat<float>::Identity.X;
    fVar4 = UE::Math::TQuat<float>::Identity.Y;
    fVar14 = UE::Math::TQuat<float>::Identity.Z;
    fVar15 = UE::Math::TQuat<float>::Identity.W;
    fVar16 = ((local_158.Ptr)->Rotation).X;
    fVar17 = ((local_158.Ptr)->Rotation).Y;
    fVar18 = ((local_158.Ptr)->Rotation).Z;
    fVar19 = ((local_158.Ptr)->Rotation).W;
    local_168 = fVar16 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                fVar19 * fVar13 +
                fVar17 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                fVar18 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fStack_164 = fVar16 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                 fVar19 * fVar4 +
                 fVar17 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                 fVar18 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fStack_160 = fVar16 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                 fVar19 * fVar14 +
                 fVar17 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                 fVar18 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fStack_15c = fVar16 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                 fVar19 * fVar15 +
                 fVar17 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                 fVar18 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_248.X = (float)((local_158.Ptr)->TransformInverseTransposed).M[0][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[1][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[2][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    local_248.Y = (float)((local_158.Ptr)->TransformInverseTransposed).M[0][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[1][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[2][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    local_248.Z = (float)((local_158.Ptr)->TransformInverseTransposed).M[0][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[1][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[2][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    local_248.W = (float)((local_158.Ptr)->TransformInverseTransposed).M[0][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[1][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[2][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_158.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    if (0 < param_1->NumInstances) {
      local_130 = (longlong)local_238.X.AdvanceOffset * 4;
      local_128 = (longlong)local_238.Y.AdvanceOffset * 4;
      local_108._0_8_ = (longlong)local_238.Z.AdvanceOffset * 4;
      local_118._0_8_ = (longlong)local_1a8.X.AdvanceOffset * 4;
      local_2f8 = local_1d8.Y.Register;
      local_308 = local_1d8.X.Register;
      pfVar39 = local_238.Z.Register;
      pfVar40 = local_238.Y.Register;
      pfVar41 = local_1a8.X.Register;
      pfVar44 = local_1d8.Z.Register;
      pfVar46 = local_238.X.Register;
      pfVar47 = local_1a8.W.Register;
      pfVar48 = local_1a8.Z.Register;
      pfVar49 = local_1a8.Y.Register;
      pfVar51 = local_208.Y.Register;
      pfVar53 = local_208.X.Register;
      pfVar54 = local_208.Z.Register;
      do {
        iVar50 = iVar50 + 1;
        *pfVar46 = fVar63 + fVar61 + fVar57 + (float)dVar21 * 1.0;
        *pfVar40 = fVar64 + fVar58 + fVar59 + (float)dVar22 * 1.0;
        *pfVar39 = fVar65 + fVar60 + fVar62 + (float)dVar20 * 1.0;
        *pfVar41 = local_168;
        *pfVar49 = fStack_164;
        *pfVar48 = fStack_160;
        *pfVar47 = fStack_15c;
        *pfVar53 = local_248.X;
        *pfVar51 = local_248.Y;
        *pfVar54 = local_248.Z;
        *local_308 = (float)uVar33;
        *local_2f8 = (float)uVar34;
        *pfVar44 = (float)uVar35;
        pfVar39 = pfVar39 + local_238.Z.AdvanceOffset;
        pfVar40 = pfVar40 + local_238.Y.AdvanceOffset;
        pfVar41 = pfVar41 + local_1a8.X.AdvanceOffset;
        pfVar44 = pfVar44 + local_1d8.Z.AdvanceOffset;
        pFVar45 = local_148;
        pfVar46 = pfVar46 + local_238.X.AdvanceOffset;
        pfVar47 = pfVar47 + local_1a8.W.AdvanceOffset;
        pfVar48 = pfVar48 + local_1a8.Z.AdvanceOffset;
        pfVar49 = pfVar49 + local_1a8.Y.AdvanceOffset;
        pfVar51 = pfVar51 + local_208.Y.AdvanceOffset;
        pfVar53 = pfVar53 + local_208.X.AdvanceOffset;
        pfVar54 = pfVar54 + local_208.Z.AdvanceOffset;
        local_308 = local_308 + local_1d8.X.AdvanceOffset;
        local_2f8 = local_2f8 + local_1d8.Y.AdvanceOffset;
      } while (iVar50 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      puVar2 = (uint *)(local_f8.InputPtr + local_f8.AdvanceOffset);
      uVar36 = uVar52;
      if (*local_f8.InputPtr < (int)uVar52) {
        uVar36 = *local_f8.InputPtr;
      }
      uVar42 = 0;
      if (0 < (int)uVar36) {
        uVar42 = uVar36;
      }
      uVar36 = 0;
      if ((int)uVar42 < ((local_158.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
        uVar36 = ~uVar42 >> 0x1f;
      }
      local_f8.InputPtr = (int *)puVar2;
      if ((uVar36 == 0) &&
         (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar55)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar4 = *local_e0[0].InputPtr;
      uVar5 = *(ushort *)
               (((local_158.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
               (longlong)(int)uVar42 * 2);
      uVar43 = (ulonglong)uVar5;
      local_e0[0].InputPtr = local_e0[0].InputPtr + local_e0[0].AdvanceOffset;
      if ((((local_158.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar5) &&
         (bVar55 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar55)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = ((local_158.Ptr)->CachedSockets).AllocatorInstance.Data;
      pFVar3 = pFVar6 + uVar43 * 0x30 + 0x10;
      fVar14 = *(float *)pFVar3;
      fVar15 = *(float *)(pFVar3 + 4);
      fVar16 = *(float *)(pFVar3 + 8);
      fVar66 = (float)((local_158.Ptr)->PrevTransform).M[1][0] * fVar15 +
               (float)((local_158.Ptr)->PrevTransform).M[0][0] * fVar14 +
               (float)((local_158.Ptr)->PrevTransform).M[2][0] * fVar16 +
               (float)((local_158.Ptr)->PrevTransform).M[3][0] * 1.0;
      fVar67 = (float)((local_158.Ptr)->PrevTransform).M[1][1] * fVar15 +
               (float)((local_158.Ptr)->PrevTransform).M[0][1] * fVar14 +
               (float)((local_158.Ptr)->PrevTransform).M[2][1] * fVar16 +
               (float)((local_158.Ptr)->PrevTransform).M[3][1] * 1.0;
      fVar68 = (float)((local_158.Ptr)->PrevTransform).M[1][2] * fVar15 +
               (float)((local_158.Ptr)->PrevTransform).M[0][2] * fVar14 +
               (float)((local_158.Ptr)->PrevTransform).M[2][2] * fVar16 +
               (float)((local_158.Ptr)->PrevTransform).M[3][2] * 1.0;
      pFVar3 = pFVar6 + uVar43 * 0x30;
      fVar17 = *(float *)pFVar3;
      fVar18 = *(float *)(pFVar3 + 4);
      fVar19 = *(float *)(pFVar3 + 8);
      fVar61 = *(float *)(pFVar3 + 0xc);
      fVar57 = ((local_158.Ptr)->PrevRotation).X;
      fVar58 = ((local_158.Ptr)->PrevRotation).Y;
      fVar59 = ((local_158.Ptr)->PrevRotation).Z;
      fVar60 = ((local_158.Ptr)->PrevRotation).W;
      local_118.Z = fVar57 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar60 * fVar19 +
                    fVar58 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar59 * fVar61 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_118.W = fVar57 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar60 * fVar61 +
                    fVar58 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar59 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      local_118.Y = fVar57 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar60 * fVar18 +
                    fVar58 * fVar61 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar59 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_118.X = fVar57 * fVar61 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar60 * fVar17 +
                    fVar58 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar59 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar17 = ((local_158.Ptr)->Rotation).X;
      fVar18 = ((local_158.Ptr)->Rotation).Y;
      fVar19 = ((local_158.Ptr)->Rotation).Z;
      fVar61 = ((local_158.Ptr)->Rotation).W;
      pFVar3 = pFVar6 + uVar43 * 0x30;
      fVar57 = *(float *)pFVar3;
      fVar58 = *(float *)(pFVar3 + 4);
      fVar59 = *(float *)(pFVar3 + 8);
      fVar60 = *(float *)(pFVar3 + 0xc);
      local_248.X = fVar60 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar61 * fVar57 +
                    fVar59 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar58 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_248.Y = fVar59 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar61 * fVar58 +
                    fVar60 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar57 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_248.Z = fVar58 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar61 * fVar59 +
                    fVar57 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar60 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_248.W = fVar57 * fVar17 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar61 * fVar60 +
                    fVar58 * fVar18 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar59 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      pFVar6 = pFVar6 + uVar43 * 0x30 + 0x20;
      fVar17 = *(float *)pFVar6;
      fVar18 = *(float *)(pFVar6 + 4);
      fVar19 = *(float *)(pFVar6 + 8);
      dVar20 = ((local_158.Ptr)->TransformInverseTransposed).M[1][0];
      dVar21 = ((local_158.Ptr)->TransformInverseTransposed).M[1][1];
      dVar22 = ((local_158.Ptr)->TransformInverseTransposed).M[1][2];
      dVar23 = ((local_158.Ptr)->TransformInverseTransposed).M[0][2];
      fVar63 = (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[0][0] * fVar17 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[1][0] * fVar18 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[2][0] * fVar19 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[3][0] * 0.0;
      fVar64 = (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[0][1] * fVar17 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[1][1] * fVar18 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[2][1] * fVar19 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[3][1] * 0.0;
      fVar65 = (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[0][2] * fVar17 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[1][2] * fVar18 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[2][2] * fVar19 +
               (float)((local_158.Ptr)->PrevTransformInverseTransposed).M[3][2] * 0.0;
      dVar24 = ((local_158.Ptr)->TransformInverseTransposed).M[2][2];
      dVar25 = ((local_158.Ptr)->TransformInverseTransposed).M[0][0];
      dVar26 = ((local_158.Ptr)->TransformInverseTransposed).M[0][1];
      dVar27 = ((local_158.Ptr)->TransformInverseTransposed).M[2][0];
      dVar28 = ((local_158.Ptr)->TransformInverseTransposed).M[2][1];
      dVar29 = ((local_158.Ptr)->TransformInverseTransposed).M[3][2];
      dVar30 = ((local_158.Ptr)->TransformInverseTransposed).M[3][0];
      dVar31 = ((local_158.Ptr)->TransformInverseTransposed).M[3][1];
      fVar69 = ((float)((local_158.Ptr)->Transform).M[1][0] * fVar15 +
                (float)((local_158.Ptr)->Transform).M[0][0] * fVar14 +
                (float)((local_158.Ptr)->Transform).M[2][0] * fVar16 +
               (float)((local_158.Ptr)->Transform).M[3][0] * 1.0) - fVar66;
      fVar62 = ((float)((local_158.Ptr)->Transform).M[1][2] * fVar15 +
                (float)((local_158.Ptr)->Transform).M[0][2] * fVar14 +
                (float)((local_158.Ptr)->Transform).M[2][2] * fVar16 +
               (float)((local_158.Ptr)->Transform).M[3][2] * 1.0) - fVar68;
      fVar70 = ((float)((local_158.Ptr)->Transform).M[1][1] * fVar15 +
                (float)((local_158.Ptr)->Transform).M[0][1] * fVar14 +
                (float)((local_158.Ptr)->Transform).M[2][1] * fVar16 +
               (float)((local_158.Ptr)->Transform).M[3][1] * 1.0) - fVar67;
      pTVar38 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_108,&local_118,&local_248,fVar4);
      fVar14 = pTVar38->X;
      fVar15 = pTVar38->Y;
      fVar16 = pTVar38->Z;
      fVar61 = pTVar38->W;
      fVar57 = fVar15 * fVar15 + fVar14 * fVar14;
      fVar58 = fVar14 * fVar14 + fVar15 * fVar15;
      fVar59 = fVar61 * fVar61 + fVar16 * fVar16;
      fVar60 = fVar16 * fVar16 + fVar61 * fVar61;
      auVar56._0_4_ = fVar59 + fVar57;
      auVar56._4_4_ = fVar60 + fVar58;
      auVar56._8_4_ = fVar57 + fVar59;
      auVar56._12_4_ = fVar58 + fVar60;
      bVar55 = ___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar56._0_4_;
      bVar10 = _UNK_1506895d4 <= auVar56._4_4_;
      bVar11 = _UNK_1506895d8 <= auVar56._8_4_;
      bVar12 = _UNK_1506895dc <= auVar56._12_4_;
      auVar56 = sqrtps(auVar56,auVar56);
      auVar56 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar56);
      uVar36 = GlobalVectorConstants::Float0001.m128_u32[0];
      uVar42 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar8 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar9 = GlobalVectorConstants::Float0001.m128_u32[3];
      if ((local_158.Ptr)->DeltaSeconds <= 0.0) {
        fVar57 = 0.0;
      }
      else {
        fVar57 = fVar13 / (local_158.Ptr)->DeltaSeconds;
      }
      iVar50 = iVar50 + 1;
      *local_238.X.Register = fVar69 * fVar4 + fVar66;
      local_238.X.Register = local_238.X.Register + local_238.X.AdvanceOffset;
      *local_238.Y.Register = fVar70 * fVar4 + fVar67;
      local_238.Y.Register = local_238.Y.Register + local_238.Y.AdvanceOffset;
      *local_238.Z.Register = fVar62 * fVar4 + fVar68;
      local_238.Z.Register = local_238.Z.Register + local_238.Z.AdvanceOffset;
      *local_1a8.X.Register =
           (float)((uint)(auVar56._0_4_ * fVar14) & -(uint)bVar55 | ~-(uint)bVar55 & uVar36);
      local_1a8.X.Register = local_1a8.X.Register + local_1a8.X.AdvanceOffset;
      *local_1a8.Y.Register =
           (float)((uint)(auVar56._4_4_ * fVar15) & -(uint)bVar10 | ~-(uint)bVar10 & uVar42);
      local_1a8.Y.Register = local_1a8.Y.Register + local_1a8.Y.AdvanceOffset;
      *local_1a8.Z.Register =
           (float)((uint)(auVar56._8_4_ * fVar16) & -(uint)bVar11 | ~-(uint)bVar11 & uVar8);
      local_1a8.Z.Register = local_1a8.Z.Register + local_1a8.Z.AdvanceOffset;
      *local_1a8.W.Register =
           (float)((uint)(auVar56._12_4_ * fVar61) & -(uint)bVar12 | ~-(uint)bVar12 & uVar9);
      local_1a8.W.Register = local_1a8.W.Register + local_1a8.W.AdvanceOffset;
      *local_208.X.Register =
           (((float)dVar20 * fVar18 + (float)dVar25 * fVar17 + (float)dVar27 * fVar19 +
            (float)dVar30 * 0.0) - fVar63) * fVar4 + fVar63;
      local_208.X.Register = local_208.X.Register + local_208.X.AdvanceOffset;
      *local_208.Y.Register =
           (((float)dVar21 * fVar18 + (float)dVar26 * fVar17 + (float)dVar28 * fVar19 +
            (float)dVar31 * 0.0) - fVar64) * fVar4 + fVar64;
      local_208.Y.Register = local_208.Y.Register + local_208.Y.AdvanceOffset;
      *local_208.Z.Register =
           (((float)dVar22 * fVar18 + (float)dVar23 * fVar17 + (float)dVar24 * fVar19 +
            (float)dVar29 * 0.0) - fVar65) * fVar4 + fVar65;
      local_208.Z.Register = local_208.Z.Register + local_208.Z.AdvanceOffset;
      *local_1d8.X.Register = fVar57 * fVar69;
      local_1d8.X.Register = local_1d8.X.Register + local_1d8.X.AdvanceOffset;
      pfVar39 = local_1d8.Y.Register + local_1d8.Y.AdvanceOffset;
      *local_1d8.Y.Register = fVar57 * fVar70;
      *local_1d8.Z.Register = fVar57 * fVar62;
      local_1d8.Z.Register = local_1d8.Z.Register + local_1d8.Z.AdvanceOffset;
      pFVar45 = local_148;
      local_1d8.Y.Register = pfVar39;
    } while (iVar50 < param_1->NumInstances);
  }
  if (pFVar45 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar45->_padding_;
    LOCK();
    lVar32 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar32 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar45->_padding_)(pFVar45,1);
    }
  }
  return;
}

// VMGetMeshBounds<1> @ 148f46850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetMeshBounds<1>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  FStaticMeshLODResources *pFVar12;
  int iVar13;
  FStaticMeshLODResources *pFVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_358 [32];
  float local_338;
  undefined4 uStack_334;
  float local_330;
  undefined4 uStack_32c;
  float *local_328;
  float *local_318;
  undefined8 local_308;
  float local_300;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  FStaticMeshLODResources *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  FVectorVMExternalFunctionContext *local_248;
  float *local_240;
  longlong local_238;
  FNDIOutputParam<UE::Math::TVector<float>_> local_230;
  FNDIOutputParam<UE::Math::TVector<float>_> local_200;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1d0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_170;
  FNDIOutputParam<UE::Math::TVector<float>_> local_140;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_110;
  FStaticMeshLODResources *local_100;
  FColorVertexBuffer *local_f8 [3];
  undefined1 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_248 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_110,param_1);
  iVar13 = 0;
  local_100 = (FStaticMeshLODResources *)0x0;
  pFVar12 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_110.Ptr,local_f8);
  local_2d8 = local_100;
  pFVar14 = local_100;
  if (local_100 != pFVar12) {
    if (pFVar12 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    pFVar14 = pFVar12;
    local_2d8 = pFVar12;
    if (local_100 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_100->_padding_;
      LOCK();
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar11 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_100->_padding_)(local_100,1);
      }
    }
  }
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_230,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_200,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1d0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_140,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1a0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_170,param_1);
  local_e0 = 1;
  fVar28 = ((local_110.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.X;
  fVar35 = ((local_110.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Y;
  fVar37 = ((local_110.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.X;
  fVar38 = ((local_110.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Y;
  fVar39 = ((local_110.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  fVar40 = ((local_110.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  dVar23 = ((local_110.Ptr)->Transform).M[2][0];
  dVar27 = ((local_110.Ptr)->Transform).M[2][1];
  dVar36 = ((local_110.Ptr)->Transform).M[0][2];
  dVar10 = ((local_110.Ptr)->Transform).M[2][2];
  dVar21 = (double)(fVar28 - fVar37);
  dVar9 = (double)(fVar35 + fVar38);
  dVar22 = (double)(fVar35 - fVar38);
  local_318 = (float *)(double)(fVar39 - fVar40);
  local_328 = (float *)(double)(fVar28 + fVar37);
  dVar31 = ((double)local_328 + dVar21) * ___xmm_3fe00000000000003fe0000000000000;
  dVar33 = (dVar9 + dVar22) * _UNK_150689678;
  dVar8 = (double)(fVar39 + fVar40);
  dVar5 = ((double)local_328 - dVar21) * ___xmm_3fe00000000000003fe0000000000000;
  dVar6 = (dVar9 - dVar22) * _UNK_150689678;
  dVar29 = (dVar8 + (double)local_318) * ___xmm_3fe00000000000003fe0000000000000;
  dVar7 = (dVar8 - (double)local_318) * ___xmm_3fe00000000000003fe0000000000000;
  auVar24._8_4_ = SUB84(dVar29,0);
  auVar24._0_8_ = dVar29;
  auVar24._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  dVar3 = ((local_110.Ptr)->Transform).M[0][0] * dVar31 +
          dVar33 * ((local_110.Ptr)->Transform).M[1][0] + dVar29 * dVar23 +
          ((local_110.Ptr)->Transform).M[3][0];
  dVar4 = ((local_110.Ptr)->Transform).M[0][1] * dVar31 +
          dVar33 * ((local_110.Ptr)->Transform).M[1][1] + auVar24._8_8_ * dVar27 +
          ((local_110.Ptr)->Transform).M[3][1];
  dVar32 = ((local_110.Ptr)->Transform).M[0][0] * dVar5;
  dVar34 = ((local_110.Ptr)->Transform).M[0][1] * dVar5;
  dVar5 = dVar36 * dVar5;
  dVar36 = dVar36 * dVar31 + dVar33 * ((local_110.Ptr)->Transform).M[1][2] + dVar29 * dVar10 +
           ((local_110.Ptr)->Transform).M[3][2];
  auVar25._8_4_ = SUB84(dVar7,0);
  auVar25._0_8_ = dVar7;
  auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar23 = dVar7 * dVar23;
  dVar27 = auVar25._8_8_ * dVar27;
  dVar7 = dVar7 * dVar10;
  auVar26._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar26._8_4_ = SUB84(dVar27,0) & _UNK_15061cc88;
  auVar26._12_4_ = (uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c;
  dVar23 = dVar6 * ((local_110.Ptr)->Transform).M[1][0];
  dVar27 = dVar6 * ((local_110.Ptr)->Transform).M[1][1];
  dVar6 = dVar6 * ((local_110.Ptr)->Transform).M[1][2];
  dVar23 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           auVar26._0_8_;
  dVar27 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar34,0) & _UNK_15061cc88) +
           (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar27,0) & _UNK_15061cc88) + auVar26._8_8_;
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar3;
  auVar30._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  fVar40 = (float)(((double)local_318 + dVar8) * __real_3fe0000000000000);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar38 = (float)(((double)local_328 + dVar21) * __real_3fe0000000000000);
  fVar39 = (float)((dVar9 + dVar22) * __real_3fe0000000000000);
  fVar37 = (float)(((dVar5 + dVar36) - (dVar36 - dVar5)) * __real_3fe0000000000000);
  fVar35 = (float)(((dVar27 + dVar4) - (auVar30._8_8_ - dVar27)) * __real_3fe0000000000000);
  fVar28 = (float)(((dVar23 + dVar3) - (dVar3 - dVar23)) * __real_3fe0000000000000);
  _local_338 = CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar35 + fVar39);
  _local_330 = CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar37 + fVar40);
  uVar2 = *(undefined8 *)&((local_110.Ptr)->OwnerToMeshVector).field0_0x0;
  local_300 = ((local_110.Ptr)->OwnerToMeshVector).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    local_238 = (longlong)local_230.X.AdvanceOffset * 4;
    local_2d0 = (longlong)local_230.Y.AdvanceOffset * 4;
    local_2c8 = (longlong)local_230.Z.AdvanceOffset * 4;
    local_2c0 = (longlong)local_200.X.AdvanceOffset * 4;
    local_2b8 = (longlong)local_200.Y.AdvanceOffset * 4;
    local_2b0 = (longlong)local_200.Z.AdvanceOffset * 4;
    local_308._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_308._0_4_ = (float)uVar2;
    local_2a8 = (longlong)local_1d0.X.AdvanceOffset * 4;
    local_2a0 = (longlong)local_1d0.Y.AdvanceOffset * 4;
    local_298 = (longlong)local_1d0.Z.AdvanceOffset * 4;
    local_290 = (longlong)local_140.X.AdvanceOffset * 4;
    local_288 = (longlong)local_140.Y.AdvanceOffset * 4;
    local_280 = (longlong)local_140.Z.AdvanceOffset * 4;
    local_278 = (longlong)local_1a0.X.AdvanceOffset * 4;
    local_270 = (longlong)local_1a0.Y.AdvanceOffset * 4;
    local_268 = (longlong)local_1a0.Z.AdvanceOffset * 4;
    local_260 = (longlong)local_170.X.AdvanceOffset * 4;
    local_258 = (longlong)local_170.Y.AdvanceOffset * 4;
    local_250 = (longlong)local_170.Z.AdvanceOffset * 4;
    local_2e8 = local_1a0.Z.Register;
    local_2f0 = local_1a0.Y.Register;
    local_2f8 = local_1a0.X.Register;
    local_318 = local_170.Z.Register;
    local_328 = local_170.Y.Register;
    local_2e0 = local_170.X.Register;
    do {
      local_240 = local_230.X.Register + local_230.X.AdvanceOffset;
      *local_230.X.Register = fVar38;
      *local_230.Y.Register = fVar39;
      *local_230.Z.Register = fVar40;
      *local_200.X.Register = fVar38 - fVar28;
      *local_200.Y.Register = fVar39 - fVar35;
      *local_200.Z.Register = fVar40 - fVar37;
      *local_1d0.X.Register = fVar28 + fVar38;
      *local_1d0.Y.Register = fVar35 + fVar39;
      *local_1d0.Z.Register = fVar37 + fVar40;
      *local_140.X.Register = fVar28 + fVar28;
      *local_140.Y.Register = fVar35 + fVar35;
      *local_140.Z.Register = fVar37 + fVar37;
      pfVar15 = local_2f8 + local_1a0.X.AdvanceOffset;
      *local_2f8 = fVar28;
      pfVar16 = local_2f0 + local_1a0.Y.AdvanceOffset;
      *local_2f0 = fVar35;
      pfVar17 = local_2e8 + local_1a0.Z.AdvanceOffset;
      *local_2e8 = fVar37;
      pfVar18 = local_2e0 + local_170.X.AdvanceOffset;
      *local_2e0 = (float)local_308;
      pfVar19 = local_328 + local_170.Y.AdvanceOffset;
      *local_328 = local_308._4_4_;
      pfVar20 = local_318 + local_170.Z.AdvanceOffset;
      iVar13 = iVar13 + 1;
      *local_318 = local_300;
      local_230.Z.Register = local_230.Z.Register + local_230.Z.AdvanceOffset;
      local_230.Y.Register = local_230.Y.Register + local_230.Y.AdvanceOffset;
      local_1d0.Z.Register = local_1d0.Z.Register + local_1d0.Z.AdvanceOffset;
      pFVar14 = local_2d8;
      local_140.X.Register = local_140.X.Register + local_140.X.AdvanceOffset;
      local_230.X.Register = local_240;
      local_200.Z.Register = local_200.Z.Register + local_200.Z.AdvanceOffset;
      local_200.Y.Register = local_200.Y.Register + local_200.Y.AdvanceOffset;
      local_200.X.Register = local_200.X.Register + local_200.X.AdvanceOffset;
      local_140.Z.Register = local_140.Z.Register + local_140.Z.AdvanceOffset;
      local_140.Y.Register = local_140.Y.Register + local_140.Y.AdvanceOffset;
      local_1d0.Y.Register = local_1d0.Y.Register + local_1d0.Y.AdvanceOffset;
      local_1d0.X.Register = local_1d0.X.Register + local_1d0.X.AdvanceOffset;
      local_328 = pfVar19;
      local_318 = pfVar20;
      local_2f8 = pfVar15;
      local_2f0 = pfVar16;
      local_2e8 = pfVar17;
      local_2e0 = pfVar18;
    } while (iVar13 < local_248->NumInstances);
  }
  if (pFVar14 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar14->_padding_;
    LOCK();
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (plVar1 != (longlong *)0x0)) {
      local_308 = uVar2;
      (**(code **)pFVar14->_padding_)(pFVar14,1);
    }
  }
  return;
}

// VMGetMeshBounds<0> @ 148f47040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetMeshBounds<0>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  longlong lVar15;
  FStaticMeshLODResources *pFVar16;
  int iVar17;
  FStaticMeshLODResources *pFVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  double dVar31;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar32 [16];
  double dVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_338 [32];
  float local_318;
  float local_314;
  undefined8 local_310;
  float local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  FStaticMeshLODResources *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  FVectorVMExternalFunctionContext *local_240;
  float *local_238;
  longlong local_230;
  FNDIOutputParam<UE::Math::TVector<float>_> local_228;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_108;
  FStaticMeshLODResources *local_f8;
  FColorVertexBuffer *local_f0 [3];
  undefined1 local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_240 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_108,param_1);
  iVar17 = 0;
  local_f8 = (FStaticMeshLODResources *)0x0;
  pFVar16 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_108.Ptr,local_f0);
  local_2d0 = local_f8;
  pFVar18 = local_f8;
  if (local_f8 != pFVar16) {
    if (pFVar16 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar16->_padding_ = (int)pFVar16->_padding_ + 1;
      UNLOCK();
    }
    pFVar18 = pFVar16;
    local_2d0 = pFVar16;
    if (local_f8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_f8->_padding_;
      LOCK();
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_f8->_padding_)(local_f8,1);
      }
    }
  }
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_228,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  local_d8 = 1;
  fVar37 = ((local_108.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.X;
  fVar42 = ((local_108.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Y;
  fVar43 = ((local_108.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  fVar44 = ((local_108.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.X;
  fVar45 = ((local_108.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Y;
  fVar46 = ((local_108.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  dVar41 = ((local_108.Ptr)->Transform).M[1][0];
  dVar6 = ((local_108.Ptr)->Transform).M[1][1];
  dVar25 = ((local_108.Ptr)->Transform).M[2][0];
  dVar26 = ((local_108.Ptr)->Transform).M[2][1];
  dVar9 = ((local_108.Ptr)->Transform).M[1][2];
  dVar13 = ((local_108.Ptr)->Transform).M[2][2];
  dVar3 = (double)(fVar37 - fVar44);
  dVar7 = (double)(fVar37 + fVar44);
  dVar10 = (double)(fVar43 + fVar46);
  dVar31 = (double)(fVar42 + fVar45);
  dVar39 = (double)(fVar42 - fVar45);
  dVar27 = (double)(fVar43 - fVar46);
  dVar4 = ((local_108.Ptr)->Transform).M[0][0];
  dVar5 = ((local_108.Ptr)->Transform).M[0][1];
  dVar14 = ((local_108.Ptr)->Transform).M[0][2];
  dVar38 = (dVar7 + dVar3) * ___xmm_3fe00000000000003fe0000000000000;
  dVar40 = (dVar31 + dVar39) * _UNK_150689678;
  dVar36 = (dVar10 + dVar27) * ___xmm_3fe00000000000003fe0000000000000;
  dVar8 = (dVar7 - dVar3) * ___xmm_3fe00000000000003fe0000000000000;
  dVar31 = (dVar31 - dVar39) * _UNK_150689678;
  dVar27 = (dVar10 - dVar27) * ___xmm_3fe00000000000003fe0000000000000;
  auVar28._8_4_ = SUB84(dVar36,0);
  auVar28._0_8_ = dVar36;
  auVar28._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  dVar3 = dVar4 * dVar38 + dVar41 * dVar40 + dVar36 * dVar25 + ((local_108.Ptr)->Transform).M[3][0];
  dVar7 = dVar5 * dVar38 + dVar6 * dVar40 + auVar28._8_8_ * dVar26 +
          ((local_108.Ptr)->Transform).M[3][1];
  dVar10 = dVar14 * dVar8;
  dVar4 = dVar4 * dVar8;
  dVar5 = dVar5 * dVar8;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
  uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
  dVar39 = dVar14 * dVar38 + dVar9 * dVar40 + dVar36 * dVar13 + ((local_108.Ptr)->Transform).M[3][2]
  ;
  dVar25 = dVar27 * dVar25;
  dVar26 = dVar27 * dVar26;
  dVar9 = dVar9 * dVar31;
  dVar27 = dVar27 * dVar13;
  dVar41 = dVar41 * dVar31;
  dVar6 = dVar6 * dVar31;
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar33,SUB84(dVar10,0) & uVar30) +
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar33,SUB84(dVar9,0) & uVar30) +
           (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar33,SUB84(dVar27,0) & uVar30);
  dVar31 = dVar39 - dVar10;
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar33,SUB84(dVar4,0) & uVar30) +
          (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar33,SUB84(dVar41,0) & uVar30) +
          (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar33,SUB84(dVar25,0) & uVar30);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar35,SUB84(dVar5,0) & uVar34) +
          (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar35,SUB84(dVar6,0) & uVar34) +
          (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar35,SUB84(dVar26,0) & uVar34);
  dVar10 = dVar10 + dVar39;
  dVar39 = dVar3 - dVar4;
  dVar41 = dVar7 - dVar5;
  dVar4 = dVar4 + dVar3;
  dVar5 = dVar5 + dVar7;
  auVar11._4_8_ = __xmm_7fffffffffffffff7fffffffffffffff._8_8_;
  auVar11._0_4_ = (int)((ulonglong)dVar39 >> 0x20);
  auVar32._0_8_ = auVar11._0_8_ << 0x20;
  auVar32._8_4_ = SUB84(dVar41,0);
  auVar32._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  auVar12._4_8_ = dVar8;
  auVar12._0_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar29._0_8_ = auVar12._0_8_ << 0x20;
  auVar29._8_4_ = SUB84(dVar5,0);
  auVar29._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  fVar46 = (float)((dVar31 + dVar10) * __real_3fe0000000000000);
  fVar43 = (float)((dVar10 - dVar31) * __real_3fe0000000000000);
  fVar45 = (float)((auVar32._8_8_ + auVar29._8_8_) * __real_3fe0000000000000);
  fVar42 = (float)((auVar29._8_8_ - auVar32._8_8_) * __real_3fe0000000000000);
  fVar44 = (float)((dVar39 + dVar4) * __real_3fe0000000000000);
  fVar37 = (float)((dVar4 - dVar39) * __real_3fe0000000000000);
  local_318 = fVar42 + fVar45;
  local_314 = fVar43 + fVar46;
  uVar2 = *(undefined8 *)&((local_108.Ptr)->OwnerToMeshVector).field0_0x0;
  local_308 = ((local_108.Ptr)->OwnerToMeshVector).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    local_230 = (longlong)local_228.X.AdvanceOffset * 4;
    local_2c8 = (longlong)local_228.Y.AdvanceOffset * 4;
    local_2c0 = (longlong)local_228.Z.AdvanceOffset * 4;
    local_2b8 = (longlong)local_1f8.X.AdvanceOffset * 4;
    local_2b0 = (longlong)local_1f8.Y.AdvanceOffset * 4;
    local_2a8 = (longlong)local_1f8.Z.AdvanceOffset * 4;
    local_310._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_310._0_4_ = (float)uVar2;
    local_2a0 = (longlong)local_1c8.X.AdvanceOffset * 4;
    local_298 = (longlong)local_1c8.Y.AdvanceOffset * 4;
    local_290 = (longlong)local_1c8.Z.AdvanceOffset * 4;
    local_288 = (longlong)local_138.X.AdvanceOffset * 4;
    local_280 = (longlong)local_138.Y.AdvanceOffset * 4;
    local_278 = (longlong)local_138.Z.AdvanceOffset * 4;
    local_270 = (longlong)local_198.X.AdvanceOffset * 4;
    local_268 = (longlong)local_198.Y.AdvanceOffset * 4;
    local_260 = (longlong)local_198.Z.AdvanceOffset * 4;
    local_258 = (longlong)local_168.X.AdvanceOffset * 4;
    local_250 = (longlong)local_168.Y.AdvanceOffset * 4;
    local_248 = (longlong)local_168.Z.AdvanceOffset * 4;
    local_2f0 = local_198.Z.Register;
    local_2f8 = local_198.Y.Register;
    local_300 = local_198.X.Register;
    local_2d8 = local_168.Z.Register;
    local_2e0 = local_168.Y.Register;
    local_2e8 = local_168.X.Register;
    do {
      local_238 = local_228.X.Register + local_228.X.AdvanceOffset;
      *local_228.X.Register = fVar44;
      *local_228.Y.Register = fVar45;
      *local_228.Z.Register = fVar46;
      *local_1f8.X.Register = fVar44 - fVar37;
      *local_1f8.Y.Register = fVar45 - fVar42;
      *local_1f8.Z.Register = fVar46 - fVar43;
      *local_1c8.X.Register = fVar37 + fVar44;
      *local_1c8.Y.Register = local_318;
      *local_1c8.Z.Register = local_314;
      *local_138.X.Register = fVar37 + fVar37;
      *local_138.Y.Register = fVar42 + fVar42;
      *local_138.Z.Register = fVar43 + fVar43;
      pfVar19 = local_300 + local_198.X.AdvanceOffset;
      *local_300 = fVar37;
      pfVar20 = local_2f8 + local_198.Y.AdvanceOffset;
      *local_2f8 = fVar42;
      pfVar21 = local_2f0 + local_198.Z.AdvanceOffset;
      *local_2f0 = fVar43;
      pfVar22 = local_2e8 + local_168.X.AdvanceOffset;
      *local_2e8 = (float)local_310;
      pfVar23 = local_2e0 + local_168.Y.AdvanceOffset;
      *local_2e0 = local_310._4_4_;
      pfVar24 = local_2d8 + local_168.Z.AdvanceOffset;
      iVar17 = iVar17 + 1;
      *local_2d8 = local_308;
      local_228.Z.Register = local_228.Z.Register + local_228.Z.AdvanceOffset;
      local_228.Y.Register = local_228.Y.Register + local_228.Y.AdvanceOffset;
      local_1c8.Z.Register = local_1c8.Z.Register + local_1c8.Z.AdvanceOffset;
      pFVar18 = local_2d0;
      local_138.X.Register = local_138.X.Register + local_138.X.AdvanceOffset;
      local_228.X.Register = local_238;
      local_1f8.Z.Register = local_1f8.Z.Register + local_1f8.Z.AdvanceOffset;
      local_1f8.Y.Register = local_1f8.Y.Register + local_1f8.Y.AdvanceOffset;
      local_1f8.X.Register = local_1f8.X.Register + local_1f8.X.AdvanceOffset;
      local_138.Z.Register = local_138.Z.Register + local_138.Z.AdvanceOffset;
      local_138.Y.Register = local_138.Y.Register + local_138.Y.AdvanceOffset;
      local_1c8.Y.Register = local_1c8.Y.Register + local_1c8.Y.AdvanceOffset;
      local_1c8.X.Register = local_1c8.X.Register + local_1c8.X.AdvanceOffset;
      local_300 = pfVar19;
      local_2f8 = pfVar20;
      local_2f0 = pfVar21;
      local_2e8 = pfVar22;
      local_2e0 = pfVar23;
      local_2d8 = pfVar24;
    } while (iVar17 < local_240->NumInstances);
  }
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar18->_padding_;
    LOCK();
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
      local_310 = uVar2;
      (**(code **)pFVar18->_padding_)(pFVar18,1);
    }
  }
  return;
}

// VMGetSocketTransform<FNDITransformHandler> @ 148f6a9f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSocketTransform<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  FStaticMeshLODResources *this_00;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  uint uVar48;
  FStaticMeshLODResources *pFVar49;
  longlong lVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  float fVar54;
  float *pfVar55;
  FStaticMeshLODResources *pFVar56;
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  float *pfVar60;
  float *pfVar61;
  int iVar62;
  float *pfVar63;
  float *pfVar64;
  float fVar65;
  float *pfVar66;
  bool bVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float *local_2e8;
  undefined1 local_2d8 [16];
  int local_2c8;
  longlong local_2c0;
  float local_2b8;
  longlong local_2b0;
  float local_2a8;
  longlong local_2a0;
  float local_298;
  FVectorVMExternalFunctionContext *local_290;
  float local_288;
  undefined1 local_278 [12];
  undefined4 uStack_26c;
  undefined1 local_268 [12];
  undefined4 uStack_25c;
  longlong local_258;
  float fStack_250;
  undefined4 uStack_24c;
  longlong local_248;
  float fStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  float fStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_168;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f8;
  FStaticMeshLODResources *local_e8;
  FColorVertexBuffer *local_e0 [23];
  
  local_290 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f8,param_1);
  iVar62 = 0;
  local_e8 = (FStaticMeshLODResources *)0x0;
  pFVar49 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_f8.Ptr,local_e0);
  this_00 = local_e8;
  pFVar56 = local_e8;
  if (local_e8 != pFVar49) {
    if (pFVar49 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar49->_padding_ = (int)pFVar49->_padding_ + 1;
      UNLOCK();
    }
    bVar67 = local_e8 != (FStaticMeshLODResources *)0x0;
    pFVar56 = pFVar49;
    local_e8 = pFVar49;
    if (bVar67) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>
            ((FExternalFuncInputHandler<int> *)local_2d8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_168,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  uVar46 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar45 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar5 = __real_3f800000;
  fVar65 = (float)(((local_f8.Ptr)->CachedSockets).ArrayNum + -1);
  if ((int)fVar65 < 0) {
    local_268._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_268._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_268._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_25c = 0x3f800000;
    fVar13 = ((local_f8.Ptr)->Rotation).X;
    fVar14 = ((local_f8.Ptr)->Rotation).Y;
    fVar15 = ((local_f8.Ptr)->Rotation).Z;
    fVar28 = ((local_f8.Ptr)->Rotation).W;
    local_218 = (float)((local_f8.Ptr)->Transform).M[0][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                (float)((local_f8.Ptr)->Transform).M[1][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                (float)((local_f8.Ptr)->Transform).M[2][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                (float)((local_f8.Ptr)->Transform).M[3][0] * 1.0;
    fStack_214 = (float)((local_f8.Ptr)->Transform).M[0][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->Transform).M[1][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->Transform).M[2][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->Transform).M[3][1] * 1.0;
    fStack_210 = (float)((local_f8.Ptr)->Transform).M[0][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->Transform).M[1][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->Transform).M[2][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->Transform).M[3][2] * 1.0;
    fStack_20c = (float)((local_f8.Ptr)->Transform).M[0][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->Transform).M[1][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->Transform).M[2][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->Transform).M[3][3] * 1.0;
    fVar5 = UE::Math::TQuat<float>::Identity.X;
    fVar65 = UE::Math::TQuat<float>::Identity.Y;
    fVar6 = UE::Math::TQuat<float>::Identity.Z;
    fVar54 = UE::Math::TQuat<float>::Identity.W;
    fVar68 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
    fVar72 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
    fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
    fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
    fVar69 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
    fVar73 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
    fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
    fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
    fVar70 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fVar71 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_2d8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_278._4_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    local_278._0_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    local_278._8_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    uStack_26c = 0;
    local_208 = (float)((local_f8.Ptr)->TransformInverseTransposed).M[1][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                (float)((local_f8.Ptr)->TransformInverseTransposed).M[0][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                (float)((local_f8.Ptr)->TransformInverseTransposed).M[2][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                (float)((local_f8.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    fStack_204 = (float)((local_f8.Ptr)->TransformInverseTransposed).M[1][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[0][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[2][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    fStack_200 = (float)((local_f8.Ptr)->TransformInverseTransposed).M[1][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[0][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[2][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    fStack_1fc = (float)((local_f8.Ptr)->TransformInverseTransposed).M[1][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[0][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[2][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_f8.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    local_2d8._0_8_ =
         (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    if (0 < param_1->NumInstances) {
      local_128 = (longlong)local_1f8.X.AdvanceOffset * 4;
      local_120 = (longlong)local_1f8.Y.AdvanceOffset * 4;
      local_118 = (longlong)local_1f8.Z.AdvanceOffset * 4;
      local_108 = (longlong)local_168.X.AdvanceOffset * 4;
      local_278._0_8_ = (longlong)local_168.Y.AdvanceOffset * 4;
      local_268._0_8_ = (longlong)local_168.Z.AdvanceOffset * 4;
      local_258 = (longlong)local_168.W.AdvanceOffset * 4;
      local_248 = (longlong)local_1c8.X.AdvanceOffset * 4;
      local_238 = (longlong)local_1c8.Y.AdvanceOffset * 4;
      local_228 = (longlong)local_1c8.Z.AdvanceOffset * 4;
      local_2c0 = (longlong)local_198.X.AdvanceOffset * 4;
      local_2b0 = (longlong)local_198.Y.AdvanceOffset * 4;
      local_2a0 = (longlong)local_198.Z.AdvanceOffset * 4;
      local_2d8._0_8_ = local_198.Y.Register;
      local_2e8 = local_198.X.Register;
      pfVar51 = local_1f8.Z.Register;
      pfVar52 = local_1f8.Y.Register;
      pfVar53 = local_168.X.Register;
      pfVar55 = local_198.Z.Register;
      pfVar57 = local_1f8.X.Register;
      pfVar58 = local_168.W.Register;
      pfVar59 = local_168.Z.Register;
      pfVar60 = local_168.Y.Register;
      pfVar61 = local_1c8.Y.Register;
      pfVar63 = local_1c8.X.Register;
      pfVar66 = local_1c8.Z.Register;
      do {
        iVar62 = iVar62 + 1;
        *pfVar57 = local_218;
        *pfVar52 = fStack_214;
        *pfVar51 = fStack_210;
        *pfVar53 = fVar54 * fVar13 * fVar68 + fVar28 * fVar5 + fVar6 * fVar14 * fVar69 +
                   fVar65 * fVar15 * fVar70;
        *pfVar60 = fVar6 * fVar13 * fVar72 + fVar28 * fVar65 + fVar54 * fVar14 * fVar73 +
                   fVar5 * fVar15 * fVar71;
        *pfVar59 = fVar65 * fVar13 * fVar7 + fVar28 * fVar6 + fVar5 * fVar14 * fVar8 +
                   fVar54 * fVar15 * fVar9;
        *pfVar58 = fVar5 * fVar13 * fVar10 + fVar28 * fVar54 + fVar65 * fVar14 * fVar11 +
                   fVar6 * fVar15 * fVar12;
        *pfVar63 = local_208;
        *pfVar61 = fStack_204;
        *pfVar66 = fStack_200;
        *local_2e8 = (float)uVar44;
        pfVar64 = (float *)(local_2d8._0_8_ + (longlong)local_198.Y.AdvanceOffset * 4);
        *(undefined4 *)local_2d8._0_8_ = uVar45;
        *pfVar55 = (float)uVar46;
        pfVar51 = pfVar51 + local_1f8.Z.AdvanceOffset;
        pfVar52 = pfVar52 + local_1f8.Y.AdvanceOffset;
        pfVar53 = pfVar53 + local_168.X.AdvanceOffset;
        pfVar55 = pfVar55 + local_198.Z.AdvanceOffset;
        pFVar56 = local_e8;
        pfVar57 = pfVar57 + local_1f8.X.AdvanceOffset;
        pfVar58 = pfVar58 + local_168.W.AdvanceOffset;
        pfVar59 = pfVar59 + local_168.Z.AdvanceOffset;
        pfVar60 = pfVar60 + local_168.Y.AdvanceOffset;
        pfVar61 = pfVar61 + local_1c8.Y.AdvanceOffset;
        pfVar63 = pfVar63 + local_1c8.X.AdvanceOffset;
        pfVar66 = pfVar66 + local_1c8.Z.AdvanceOffset;
        local_2e8 = local_2e8 + local_198.X.AdvanceOffset;
        local_2d8._0_8_ = pfVar64;
      } while (iVar62 < local_290->NumInstances);
    }
  }
  else {
    uVar44 = uStack_24c;
    uVar45 = uStack_23c;
    uVar46 = uStack_22c;
    uVar47 = uStack_21c;
    if (0 < param_1->NumInstances) {
      do {
        uStack_21c = uVar47;
        uStack_22c = uVar46;
        uStack_23c = uVar45;
        uStack_24c = uVar44;
        pfVar51 = (float *)(local_2d8._0_8_ + (longlong)local_2c8 * 4);
        fVar6 = fVar65;
        if ((int)*(float *)local_2d8._0_8_ < (int)fVar65) {
          fVar6 = *(float *)local_2d8._0_8_;
        }
        fVar54 = 0.0;
        if (0 < (int)fVar6) {
          fVar54 = fVar6;
        }
        uVar48 = 0;
        if ((int)fVar54 < ((local_f8.Ptr)->CachedSockets).ArrayNum) {
          uVar48 = ~(uint)fVar54 >> 0x1f;
        }
        local_2d8._0_8_ = pfVar51;
        if ((uVar48 == 0) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar67)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = ((local_f8.Ptr)->CachedSockets).AllocatorInstance.Data;
        fVar68 = (float)((local_f8.Ptr)->Transform).M[0][2];
        lVar50 = (longlong)(int)fVar54;
        fVar72 = (float)((local_f8.Ptr)->Transform).M[0][0];
        fVar73 = (float)((local_f8.Ptr)->Transform).M[0][1];
        pFVar2 = pFVar3 + lVar50 * 0x30 + 0x10;
        fVar6 = *(float *)pFVar2;
        fVar54 = *(float *)(pFVar2 + 4);
        local_248 = *(longlong *)pFVar2;
        local_238 = *(longlong *)pFVar2;
        local_228 = *(longlong *)pFVar2;
        local_2b0 = *(longlong *)pFVar2;
        local_2a0 = *(longlong *)pFVar2;
        local_290 = *(FVectorVMExternalFunctionContext **)pFVar2;
        local_2a8 = *(float *)(pFVar2 + 8);
        local_208 = (float)((local_f8.Ptr)->Transform).M[1][0];
        fStack_204 = (float)((local_f8.Ptr)->Transform).M[1][1];
        fStack_200 = (float)((local_f8.Ptr)->Transform).M[1][2];
        fStack_1fc = (float)((local_f8.Ptr)->Transform).M[1][3];
        local_218 = (float)((local_f8.Ptr)->Transform).M[2][0];
        fStack_214 = (float)((local_f8.Ptr)->Transform).M[2][1];
        fStack_210 = (float)((local_f8.Ptr)->Transform).M[2][2];
        fStack_20c = (float)((local_f8.Ptr)->Transform).M[2][3];
        fVar69 = (float)((local_f8.Ptr)->Transform).M[3][0];
        fVar70 = (float)((local_f8.Ptr)->Transform).M[3][1];
        fStack_100 = (float)((local_f8.Ptr)->Transform).M[3][2];
        fStack_fc = (float)((local_f8.Ptr)->Transform).M[3][3];
        local_108 = CONCAT44(fVar70,fVar69);
        uStack_21c = 0x3f800000;
        dVar16 = ((local_f8.Ptr)->PrevTransform).M[1][0];
        dVar17 = ((local_f8.Ptr)->PrevTransform).M[1][1];
        dVar18 = ((local_f8.Ptr)->PrevTransform).M[1][2];
        dVar19 = ((local_f8.Ptr)->PrevTransform).M[0][2];
        dVar20 = ((local_f8.Ptr)->PrevTransform).M[0][0];
        dVar21 = ((local_f8.Ptr)->PrevTransform).M[0][1];
        uStack_22c = 0x3f800000;
        dVar22 = ((local_f8.Ptr)->PrevTransform).M[2][2];
        dVar23 = ((local_f8.Ptr)->PrevTransform).M[2][0];
        dVar24 = ((local_f8.Ptr)->PrevTransform).M[2][1];
        dVar25 = ((local_f8.Ptr)->PrevTransform).M[3][2];
        dVar26 = ((local_f8.Ptr)->PrevTransform).M[3][0];
        dVar27 = ((local_f8.Ptr)->PrevTransform).M[3][1];
        if ((local_f8.Ptr)->DeltaSeconds <= 0.0) {
          fVar71 = 0.0;
        }
        else {
          fVar71 = fVar5 / (local_f8.Ptr)->DeltaSeconds;
        }
        pfVar51 = local_1f8.X.Register + local_1f8.X.AdvanceOffset;
        uStack_23c = 0x3f800000;
        *local_1f8.X.Register =
             fVar54 * local_208 + fVar6 * fVar72 + local_2a8 * local_218 + fVar69 * 1.0;
        *local_1f8.Y.Register =
             fVar54 * fStack_204 + fVar6 * fVar73 + local_2a8 * fStack_214 + fVar70 * 1.0;
        local_1f8.Y.Register = local_1f8.Y.Register + local_1f8.Y.AdvanceOffset;
        *local_1f8.Z.Register =
             fVar54 * fStack_200 + fVar6 * fVar68 + local_2a8 * fStack_210 + fStack_100 * 1.0;
        fVar28 = ((local_f8.Ptr)->Rotation).X;
        fVar29 = ((local_f8.Ptr)->Rotation).Y;
        fVar30 = ((local_f8.Ptr)->Rotation).Z;
        fVar31 = ((local_f8.Ptr)->Rotation).W;
        local_1f8.Z.Register = local_1f8.Z.Register + local_1f8.Z.AdvanceOffset;
        pFVar2 = pFVar3 + lVar50 * 0x30;
        fVar32 = *(float *)pFVar2;
        fVar33 = *(float *)(pFVar2 + 4);
        fVar34 = *(float *)(pFVar2 + 8);
        fVar35 = *(float *)(pFVar2 + 0xc);
        fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
        fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
        fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
        fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
        fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
        fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
        fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar15 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        *local_168.X.Register =
             fVar35 * fVar28 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
             fVar31 * fVar32 +
             fVar34 * fVar29 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
             fVar33 * fVar30 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        *local_168.Y.Register =
             fVar34 * fVar28 * fVar7 + fVar31 * fVar33 + fVar35 * fVar29 * fVar8 +
             fVar32 * fVar30 * fVar9;
        *local_168.Z.Register =
             fVar33 * fVar28 * fVar10 + fVar31 * fVar34 + fVar32 * fVar29 * fVar11 +
             fVar35 * fVar30 * fVar12;
        local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
        *local_168.W.Register =
             fVar32 * fVar28 * fVar13 + fVar31 * fVar35 + fVar33 * fVar29 * fVar14 +
             fVar34 * fVar30 * fVar15;
        pFVar3 = pFVar3 + lVar50 * 0x30 + 0x20;
        fVar7 = *(float *)pFVar3;
        fVar8 = *(float *)(pFVar3 + 4);
        local_258 = *(longlong *)pFVar3;
        local_2c0 = *(longlong *)pFVar3;
        local_2b8 = *(float *)(pFVar3 + 8);
        dVar36 = ((local_f8.Ptr)->TransformInverseTransposed).M[1][2];
        local_168.W.Register = local_168.W.Register + local_168.W.AdvanceOffset;
        dVar37 = ((local_f8.Ptr)->TransformInverseTransposed).M[1][1];
        pfVar52 = local_1c8.X.Register + local_1c8.X.AdvanceOffset;
        dVar38 = ((local_f8.Ptr)->TransformInverseTransposed).M[0][2];
        dVar39 = ((local_f8.Ptr)->TransformInverseTransposed).M[2][2];
        uStack_24c = 0;
        dVar40 = ((local_f8.Ptr)->TransformInverseTransposed).M[0][1];
        dVar41 = ((local_f8.Ptr)->TransformInverseTransposed).M[2][1];
        dVar42 = ((local_f8.Ptr)->TransformInverseTransposed).M[3][2];
        dVar43 = ((local_f8.Ptr)->TransformInverseTransposed).M[3][1];
        *local_1c8.X.Register =
             (float)((local_f8.Ptr)->TransformInverseTransposed).M[1][0] * fVar8 +
             (float)((local_f8.Ptr)->TransformInverseTransposed).M[0][0] * fVar7 +
             (float)((local_f8.Ptr)->TransformInverseTransposed).M[2][0] * local_2b8 +
             (float)((local_f8.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
        *local_1c8.Y.Register =
             (float)dVar37 * fVar8 + (float)dVar40 * fVar7 + (float)dVar41 * local_2b8 +
             (float)dVar43 * 0.0;
        *local_1c8.Z.Register =
             (float)dVar36 * fVar8 + (float)dVar38 * fVar7 + (float)dVar39 * local_2b8 +
             (float)dVar42 * 0.0;
        local_1c8.Z.Register = local_1c8.Z.Register + local_1c8.Z.AdvanceOffset;
        iVar62 = iVar62 + 1;
        *local_198.X.Register =
             ((fVar54 * local_208 + fVar6 * fVar72 + local_2a8 * local_218 + fVar69 * 1.0) -
             ((float)dVar16 * fVar54 + (float)dVar20 * fVar6 + (float)dVar23 * local_2a8 +
             (float)dVar26 * 1.0)) * fVar71;
        *local_198.Y.Register =
             ((fVar54 * fStack_204 + fVar6 * fVar73 + local_2a8 * fStack_214 + fVar70 * 1.0) -
             ((float)dVar17 * fVar54 + (float)dVar21 * fVar6 + (float)dVar24 * local_2a8 +
             (float)dVar27 * 1.0)) * fVar71;
        *local_198.Z.Register =
             ((fVar54 * fStack_200 + fVar6 * fVar68 + local_2a8 * fStack_210 + fStack_100 * 1.0) -
             ((float)dVar18 * fVar54 + (float)dVar19 * fVar6 + (float)dVar22 * local_2a8 +
             (float)dVar25 * 1.0)) * fVar71;
        local_198.Z.Register = local_198.Z.Register + local_198.Z.AdvanceOffset;
        pFVar56 = local_e8;
        local_298 = local_2a8;
        local_288 = local_2a8;
        fStack_250 = local_2b8;
        uVar44 = 0;
        fStack_240 = local_2a8;
        uVar45 = 0x3f800000;
        fStack_230 = local_2a8;
        uVar46 = 0x3f800000;
        fStack_220 = local_2a8;
        uVar47 = 0x3f800000;
        local_1f8.X.Register = pfVar51;
        local_1c8.X.Register = pfVar52;
        local_1c8.Y.Register = local_1c8.Y.Register + local_1c8.Y.AdvanceOffset;
        local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
        local_198.Y.Register = local_198.Y.Register + local_198.Y.AdvanceOffset;
        local_168.X.Register = local_168.X.Register + local_168.X.AdvanceOffset;
        local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
      } while (iVar62 < param_1->NumInstances);
    }
  }
  if (pFVar56 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar56->_padding_;
    LOCK();
    lVar50 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar50 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar56->_padding_)(pFVar56,1);
    }
  }
  return;
}

// VMGetSocketTransform<FNDITransformHandlerNoop> @ 148f6b660

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSocketTransform<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  FStaticMeshLODResources *pFVar13;
  FStaticMeshLODResources *pFVar14;
  bool bVar15;
  uint uVar16;
  FStaticMeshLODResources *pFVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FStaticMeshLODResources *pFVar23;
  int iVar24;
  float *pfVar25;
  float fVar26;
  float local_258;
  float fStack_254;
  float *local_248;
  float *local_240;
  float *local_230;
  undefined8 local_228;
  int local_218 [2];
  longlong local_210;
  float local_208;
  longlong local_200;
  float local_1f8;
  longlong local_1f0;
  float local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  longlong local_1a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_108;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_c8;
  FStaticMeshLODResources *local_b8;
  FColorVertexBuffer *local_b0 [17];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_c8,param_1);
  iVar24 = 0;
  local_b8 = (FStaticMeshLODResources *)0x0;
  pFVar17 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_c8.Ptr,local_b0);
  pFVar13 = local_b8;
  pFVar23 = local_b8;
  pFVar14 = local_b8;
  if (local_b8 != pFVar17) {
    if (pFVar17 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar17->_padding_ = (int)pFVar17->_padding_ + 1;
      UNLOCK();
    }
    pFVar23 = pFVar17;
    pFVar14 = pFVar17;
    if (local_b8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_b8->_padding_;
      LOCK();
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_b8->_padding_;
        local_b8 = pFVar17;
        (**(code **)*plVar1)(pFVar13,1);
        pFVar14 = local_b8;
      }
    }
  }
  local_b8 = pFVar14;
  local_218[0] = 0;
  pfVar18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_218);
  iVar12 = local_218[0];
  pfVar18 = pfVar18 + local_218[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  fVar6 = UE::Math::TQuat<float>::Identity.W;
  fVar26 = UE::Math::TQuat<float>::Identity.Z;
  fVar22 = UE::Math::TQuat<float>::Identity.Y;
  fVar20 = UE::Math::TQuat<float>::Identity.X;
  uVar11 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar9 = __real_3f800000;
  fVar21 = (float)(((local_c8.Ptr)->CachedSockets).ArrayNum + -1);
  if ((int)fVar21 < 0) {
    if (0 < param_1->NumInstances) {
      fStack_254 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
      ;
      local_258 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1a0 = (longlong)local_168.Z.AdvanceOffset * 4;
      local_1c8 = local_108.W.Register;
      local_1d0 = local_108.Z.Register;
      local_210 = (longlong)local_138.X.AdvanceOffset * 4;
      local_1d8 = local_108.Y.Register;
      local_1e0 = local_108.X.Register;
      local_200 = (longlong)local_138.Y.AdvanceOffset * 4;
      local_1b0 = local_168.Z.Register;
      local_228._4_4_ =
           (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      fVar21 = local_228._4_4_;
      local_1b8 = local_168.Y.Register;
      local_1f0 = (longlong)local_138.Z.AdvanceOffset * 4;
      local_228._0_4_ = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      fVar9 = (float)local_228;
      local_1c0 = local_168.X.Register;
      local_228 = local_138.Z.Register;
      local_248 = local_198.Z.Register;
      local_240 = local_138.Y.Register;
      local_230 = local_198.Y.Register;
      local_1a8 = local_138.X.Register;
      pfVar18 = local_198.X.Register;
      do {
        *pfVar18 = local_258;
        pfVar18 = pfVar18 + local_198.X.AdvanceOffset;
        iVar24 = iVar24 + 1;
        *local_230 = fStack_254;
        local_230 = local_230 + local_198.Y.AdvanceOffset;
        *local_248 = (float)uVar10;
        local_248 = local_248 + local_198.Z.AdvanceOffset;
        *local_1e0 = fVar20;
        local_1e0 = local_1e0 + local_108.X.AdvanceOffset;
        *local_1d8 = fVar22;
        local_1d8 = local_1d8 + local_108.Y.AdvanceOffset;
        *local_1d0 = fVar26;
        local_1d0 = local_1d0 + local_108.Z.AdvanceOffset;
        *local_1c8 = fVar6;
        local_1c8 = local_1c8 + local_108.W.AdvanceOffset;
        *local_1c0 = fVar9;
        local_1c0 = local_1c0 + local_168.X.AdvanceOffset;
        *local_1b8 = fVar21;
        local_1b8 = local_1b8 + local_168.Y.AdvanceOffset;
        pfVar2 = local_1b0 + local_168.Z.AdvanceOffset;
        *local_1b0 = (float)uVar11;
        pfVar25 = local_1a8 + local_138.X.AdvanceOffset;
        *local_1a8 = local_258;
        *local_240 = fStack_254;
        *local_228 = (float)uVar10;
        pFVar23 = local_b8;
        local_240 = local_240 + local_138.Y.AdvanceOffset;
        local_228 = local_228 + local_138.Z.AdvanceOffset;
        local_1b0 = pfVar2;
        local_1a8 = pfVar25;
      } while (iVar24 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      fVar20 = fVar21;
      if ((int)*pfVar18 < (int)fVar21) {
        fVar20 = *pfVar18;
      }
      fVar22 = 0.0;
      if (0 < (int)fVar20) {
        fVar22 = fVar20;
      }
      uVar16 = 0;
      if ((int)fVar22 < ((local_c8.Ptr)->CachedSockets).ArrayNum) {
        uVar16 = ~(uint)fVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = ((local_c8.Ptr)->CachedSockets).AllocatorInstance.Data;
      lVar19 = (longlong)(int)fVar22;
      pFVar3 = pFVar4 + lVar19 * 0x30 + 0x10;
      fVar20 = *(float *)pFVar3;
      fVar22 = *(float *)(pFVar3 + 4);
      local_200 = *(longlong *)pFVar3;
      local_1f0 = *(longlong *)pFVar3;
      local_1f8 = *(float *)(pFVar3 + 8);
      if ((local_c8.Ptr)->DeltaSeconds <= 0.0) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = fVar9 / (local_c8.Ptr)->DeltaSeconds;
      }
      *local_198.X.Register = fVar20;
      local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
      *local_198.Y.Register = fVar22;
      local_198.Y.Register = local_198.Y.Register + local_198.Y.AdvanceOffset;
      *local_198.Z.Register = local_1f8;
      local_198.Z.Register = local_198.Z.Register + local_198.Z.AdvanceOffset;
      pFVar3 = pFVar4 + lVar19 * 0x30;
      fVar6 = *(float *)(pFVar3 + 4);
      fVar7 = *(float *)(pFVar3 + 8);
      fVar8 = *(float *)(pFVar3 + 0xc);
      *local_108.X.Register = *(float *)pFVar3;
      local_108.X.Register = local_108.X.Register + local_108.X.AdvanceOffset;
      *local_108.Y.Register = fVar6;
      local_108.Y.Register = local_108.Y.Register + local_108.Y.AdvanceOffset;
      *local_108.Z.Register = fVar7;
      local_108.Z.Register = local_108.Z.Register + local_108.Z.AdvanceOffset;
      *local_108.W.Register = fVar8;
      pFVar4 = pFVar4 + lVar19 * 0x30 + 0x20;
      fVar6 = *(float *)(pFVar4 + 4);
      local_210 = *(longlong *)pFVar4;
      local_208 = *(float *)(pFVar4 + 8);
      local_108.W.Register = local_108.W.Register + local_108.W.AdvanceOffset;
      pfVar2 = local_168.X.Register + local_168.X.AdvanceOffset;
      *local_168.X.Register = *(float *)pFVar4;
      *local_168.Y.Register = fVar6;
      local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
      *local_168.Z.Register = local_208;
      local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
      *local_138.X.Register = (fVar20 - fVar20) * fVar26;
      local_138.X.Register = local_138.X.Register + local_138.X.AdvanceOffset;
      *local_138.Y.Register = (fVar22 - fVar22) * fVar26;
      local_138.Y.Register = local_138.Y.Register + local_138.Y.AdvanceOffset;
      pfVar25 = local_138.Z.Register + local_138.Z.AdvanceOffset;
      iVar24 = iVar24 + 1;
      *local_138.Z.Register = 0.0;
      pFVar23 = local_b8;
      pfVar18 = pfVar18 + iVar12;
      local_1e8 = local_1f8;
      local_168.X.Register = pfVar2;
      local_138.Z.Register = pfVar25;
    } while (iVar24 < param_1->NumInstances);
  }
  if (pFVar23 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar23->_padding_;
    LOCK();
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar23->_padding_)(pFVar23,1);
    }
  }
  return;
}

// VMGetSocketTransformInterpolated<FNDITransformHandler> @ 148f6bd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSocketTransformInterpolated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  FStaticMeshLODResources *this_00;
  uint uVar31;
  FStaticMeshLODResources *pFVar32;
  longlong lVar33;
  TQuat<float> *pTVar34;
  float *pfVar35;
  float *pfVar36;
  uint uVar37;
  float *pfVar38;
  FStaticMeshLODResources *pFVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  uint uVar45;
  float *pfVar46;
  float *pfVar47;
  int iVar48;
  float *pfVar49;
  bool bVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float *local_308;
  float *local_2f8;
  TQuat<float> local_248;
  FNDIOutputParam<UE::Math::TVector<float>_> local_238;
  FNDIOutputParam<UE::Math::TVector<float>_> local_208;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1d8;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_1a8;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  longlong local_150;
  TQuat<float> local_148;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_138;
  FStaticMeshLODResources *local_128;
  FColorVertexBuffer *local_120 [3];
  TQuat<float> local_108;
  FExternalFuncInputHandler<int> local_f8;
  FExternalFuncInputHandler<float> local_e0 [7];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_138,param_1);
  iVar48 = 0;
  local_128 = (FStaticMeshLODResources *)0x0;
  pFVar32 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_138.Ptr,local_120);
  this_00 = local_128;
  pFVar39 = local_128;
  if (local_128 != pFVar32) {
    if (pFVar32 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar32->_padding_ = (int)pFVar32->_padding_ + 1;
      UNLOCK();
    }
    bVar50 = local_128 != (FStaticMeshLODResources *)0x0;
    pFVar39 = pFVar32;
    local_128 = pFVar32;
    if (bVar50) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>(&local_f8,param_1);
  VectorVM::FExternalFuncInputHandler<float>::FExternalFuncInputHandler<float>(local_e0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_238,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_1a8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_208,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1d8,param_1);
  uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar12 = __real_3f800000;
  uVar45 = ((local_138.Ptr)->CachedSockets).ArrayNum - 1;
  if ((int)uVar45 < 0) {
    fVar61 = (float)((local_138.Ptr)->Transform).M[0][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar62 = (float)((local_138.Ptr)->Transform).M[0][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar63 = (float)((local_138.Ptr)->Transform).M[0][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar56 = (float)((local_138.Ptr)->Transform).M[1][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar59 = (float)((local_138.Ptr)->Transform).M[1][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar54 = (float)((local_138.Ptr)->Transform).M[1][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    dVar16 = ((local_138.Ptr)->Transform).M[3][2];
    fVar57 = (float)((local_138.Ptr)->Transform).M[2][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar52 = (float)((local_138.Ptr)->Transform).M[2][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar55 = (float)((local_138.Ptr)->Transform).M[2][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    dVar17 = ((local_138.Ptr)->Transform).M[3][0];
    dVar18 = ((local_138.Ptr)->Transform).M[3][1];
    fVar4 = ((local_138.Ptr)->Rotation).X;
    fVar13 = ((local_138.Ptr)->Rotation).Y;
    fVar14 = ((local_138.Ptr)->Rotation).Z;
    fVar15 = ((local_138.Ptr)->Rotation).W;
    fVar12 = UE::Math::TQuat<float>::Identity.W;
    fVar58 = UE::Math::TQuat<float>::Identity.X;
    fVar53 = UE::Math::TQuat<float>::Identity.Y;
    fVar60 = UE::Math::TQuat<float>::Identity.Z;
    local_168 = fVar12 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                fVar15 * fVar58 +
                fVar60 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                fVar53 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fStack_164 = fVar60 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                 fVar15 * fVar53 +
                 fVar12 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                 fVar58 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fStack_160 = fVar53 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                 fVar15 * fVar60 +
                 fVar58 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                 fVar12 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fStack_15c = fVar58 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                 fVar15 * fVar12 +
                 fVar53 * fVar13 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                 fVar60 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_248.X = (float)((local_138.Ptr)->TransformInverseTransposed).M[1][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[0][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[2][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    local_248.Y = (float)((local_138.Ptr)->TransformInverseTransposed).M[1][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[0][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[2][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    local_248.Z = (float)((local_138.Ptr)->TransformInverseTransposed).M[1][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[0][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[2][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    local_248.W = (float)((local_138.Ptr)->TransformInverseTransposed).M[1][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[0][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[2][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_138.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    if (0 < param_1->NumInstances) {
      local_158 = (longlong)local_238.X.AdvanceOffset * 4;
      local_150 = (longlong)local_238.Y.AdvanceOffset * 4;
      local_108._0_8_ = (longlong)local_238.Z.AdvanceOffset * 4;
      local_148._0_8_ = (longlong)local_1a8.X.AdvanceOffset * 4;
      local_2f8 = local_1d8.Y.Register;
      local_308 = local_1d8.X.Register;
      pfVar35 = local_238.Z.Register;
      pfVar36 = local_238.Y.Register;
      pfVar38 = local_1d8.Z.Register;
      pfVar40 = local_1a8.X.Register;
      pfVar41 = local_238.X.Register;
      pfVar42 = local_1a8.W.Register;
      pfVar43 = local_1a8.Z.Register;
      pfVar44 = local_1a8.Y.Register;
      pfVar46 = local_208.Y.Register;
      pfVar47 = local_208.X.Register;
      pfVar49 = local_208.Z.Register;
      do {
        iVar48 = iVar48 + 1;
        *pfVar41 = fVar61 + fVar56 + fVar57 + (float)dVar17 * 1.0;
        *pfVar36 = fVar62 + fVar59 + fVar52 + (float)dVar18 * 1.0;
        *pfVar35 = fVar63 + fVar54 + fVar55 + (float)dVar16 * 1.0;
        *pfVar40 = local_168;
        *pfVar44 = fStack_164;
        *pfVar43 = fStack_160;
        *pfVar42 = fStack_15c;
        *pfVar47 = local_248.X;
        *pfVar46 = local_248.Y;
        *pfVar49 = local_248.Z;
        *local_308 = (float)uVar28;
        *local_2f8 = (float)uVar29;
        *pfVar38 = (float)uVar30;
        pfVar35 = pfVar35 + local_238.Z.AdvanceOffset;
        pfVar36 = pfVar36 + local_238.Y.AdvanceOffset;
        pfVar38 = pfVar38 + local_1d8.Z.AdvanceOffset;
        pFVar39 = local_128;
        pfVar40 = pfVar40 + local_1a8.X.AdvanceOffset;
        pfVar41 = pfVar41 + local_238.X.AdvanceOffset;
        pfVar42 = pfVar42 + local_1a8.W.AdvanceOffset;
        pfVar43 = pfVar43 + local_1a8.Z.AdvanceOffset;
        pfVar44 = pfVar44 + local_1a8.Y.AdvanceOffset;
        pfVar46 = pfVar46 + local_208.Y.AdvanceOffset;
        pfVar47 = pfVar47 + local_208.X.AdvanceOffset;
        pfVar49 = pfVar49 + local_208.Z.AdvanceOffset;
        local_308 = local_308 + local_1d8.X.AdvanceOffset;
        local_2f8 = local_2f8 + local_1d8.Y.AdvanceOffset;
      } while (iVar48 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      puVar2 = (uint *)(local_f8.InputPtr + local_f8.AdvanceOffset);
      uVar31 = uVar45;
      if (*local_f8.InputPtr < (int)uVar45) {
        uVar31 = *local_f8.InputPtr;
      }
      uVar37 = 0;
      if (0 < (int)uVar31) {
        uVar37 = uVar31;
      }
      fVar4 = *local_e0[0].InputPtr;
      local_e0[0].InputPtr = local_e0[0].InputPtr + local_e0[0].AdvanceOffset;
      uVar31 = 0;
      if ((int)uVar37 < ((local_138.Ptr)->CachedSockets).ArrayNum) {
        uVar31 = ~uVar37 >> 0x1f;
      }
      local_f8.InputPtr = (int *)puVar2;
      if ((uVar31 == 0) &&
         (bVar50 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar50)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar33 = (longlong)(int)uVar37;
      pFVar5 = ((local_138.Ptr)->CachedSockets).AllocatorInstance.Data;
      pFVar3 = pFVar5 + lVar33 * 0x30 + 0x10;
      fVar13 = *(float *)pFVar3;
      fVar14 = *(float *)(pFVar3 + 4);
      fVar15 = *(float *)(pFVar3 + 8);
      fVar64 = (float)((local_138.Ptr)->PrevTransform).M[1][0] * fVar14 +
               (float)((local_138.Ptr)->PrevTransform).M[0][0] * fVar13 +
               (float)((local_138.Ptr)->PrevTransform).M[2][0] * fVar15 +
               (float)((local_138.Ptr)->PrevTransform).M[3][0] * 1.0;
      fVar65 = (float)((local_138.Ptr)->PrevTransform).M[1][1] * fVar14 +
               (float)((local_138.Ptr)->PrevTransform).M[0][1] * fVar13 +
               (float)((local_138.Ptr)->PrevTransform).M[2][1] * fVar15 +
               (float)((local_138.Ptr)->PrevTransform).M[3][1] * 1.0;
      fVar66 = (float)((local_138.Ptr)->PrevTransform).M[1][2] * fVar14 +
               (float)((local_138.Ptr)->PrevTransform).M[0][2] * fVar13 +
               (float)((local_138.Ptr)->PrevTransform).M[2][2] * fVar15 +
               (float)((local_138.Ptr)->PrevTransform).M[3][2] * 1.0;
      pFVar3 = pFVar5 + lVar33 * 0x30;
      fVar56 = *(float *)pFVar3;
      fVar57 = *(float *)(pFVar3 + 4);
      fVar58 = *(float *)(pFVar3 + 8);
      fVar59 = *(float *)(pFVar3 + 0xc);
      fVar52 = ((local_138.Ptr)->PrevRotation).X;
      fVar53 = ((local_138.Ptr)->PrevRotation).Y;
      fVar54 = ((local_138.Ptr)->PrevRotation).Z;
      fVar55 = ((local_138.Ptr)->PrevRotation).W;
      local_148.Z = fVar52 * fVar57 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar55 * fVar58 +
                    fVar53 * fVar56 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar54 * fVar59 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_148.W = fVar52 * fVar56 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar55 * fVar59 +
                    fVar53 * fVar57 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar54 * fVar58 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      local_148.Y = fVar52 * fVar58 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar55 * fVar57 +
                    fVar53 * fVar59 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar54 * fVar56 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_148.X = fVar52 * fVar59 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar55 * fVar56 +
                    fVar53 * fVar58 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar54 * fVar57 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar56 = ((local_138.Ptr)->Rotation).X;
      fVar57 = ((local_138.Ptr)->Rotation).Y;
      fVar58 = ((local_138.Ptr)->Rotation).Z;
      fVar59 = ((local_138.Ptr)->Rotation).W;
      pFVar3 = pFVar5 + lVar33 * 0x30;
      fVar52 = *(float *)pFVar3;
      fVar53 = *(float *)(pFVar3 + 4);
      fVar54 = *(float *)(pFVar3 + 8);
      fVar55 = *(float *)(pFVar3 + 0xc);
      local_248.X = fVar56 * fVar55 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar59 * fVar52 +
                    fVar57 * fVar54 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar58 * fVar53 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_248.Y = fVar56 * fVar54 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar59 * fVar53 +
                    fVar57 * fVar55 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar58 * fVar52 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_248.Z = fVar56 * fVar53 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar59 * fVar54 +
                    fVar57 * fVar52 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar58 * fVar55 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_248.W = fVar56 * fVar52 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar59 * fVar55 +
                    fVar57 * fVar53 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar58 * fVar54 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      pFVar5 = pFVar5 + lVar33 * 0x30 + 0x20;
      fVar56 = *(float *)pFVar5;
      fVar57 = *(float *)(pFVar5 + 4);
      fVar58 = *(float *)(pFVar5 + 8);
      dVar16 = ((local_138.Ptr)->TransformInverseTransposed).M[1][0];
      dVar17 = ((local_138.Ptr)->TransformInverseTransposed).M[1][1];
      dVar18 = ((local_138.Ptr)->TransformInverseTransposed).M[1][2];
      dVar19 = ((local_138.Ptr)->TransformInverseTransposed).M[0][2];
      fVar61 = (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[1][0] * fVar57 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[0][0] * fVar56 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[2][0] * fVar58 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[3][0] * 0.0;
      fVar62 = (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[1][1] * fVar57 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[0][1] * fVar56 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[2][1] * fVar58 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[3][1] * 0.0;
      fVar63 = (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[1][2] * fVar57 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[0][2] * fVar56 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[2][2] * fVar58 +
               (float)((local_138.Ptr)->PrevTransformInverseTransposed).M[3][2] * 0.0;
      dVar20 = ((local_138.Ptr)->TransformInverseTransposed).M[2][2];
      dVar21 = ((local_138.Ptr)->TransformInverseTransposed).M[0][0];
      dVar22 = ((local_138.Ptr)->TransformInverseTransposed).M[0][1];
      dVar23 = ((local_138.Ptr)->TransformInverseTransposed).M[2][0];
      dVar24 = ((local_138.Ptr)->TransformInverseTransposed).M[2][1];
      dVar25 = ((local_138.Ptr)->TransformInverseTransposed).M[3][2];
      dVar26 = ((local_138.Ptr)->TransformInverseTransposed).M[3][0];
      dVar27 = ((local_138.Ptr)->TransformInverseTransposed).M[3][1];
      fVar67 = ((float)((local_138.Ptr)->Transform).M[1][0] * fVar14 +
                (float)((local_138.Ptr)->Transform).M[0][0] * fVar13 +
                (float)((local_138.Ptr)->Transform).M[2][0] * fVar15 +
               (float)((local_138.Ptr)->Transform).M[3][0] * 1.0) - fVar64;
      fVar60 = ((float)((local_138.Ptr)->Transform).M[1][2] * fVar14 +
                (float)((local_138.Ptr)->Transform).M[0][2] * fVar13 +
                (float)((local_138.Ptr)->Transform).M[2][2] * fVar15 +
               (float)((local_138.Ptr)->Transform).M[3][2] * 1.0) - fVar66;
      fVar68 = ((float)((local_138.Ptr)->Transform).M[1][1] * fVar14 +
                (float)((local_138.Ptr)->Transform).M[0][1] * fVar13 +
                (float)((local_138.Ptr)->Transform).M[2][1] * fVar15 +
               (float)((local_138.Ptr)->Transform).M[3][1] * 1.0) - fVar65;
      pTVar34 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_108,&local_148,&local_248,fVar4);
      fVar13 = pTVar34->X;
      fVar14 = pTVar34->Y;
      fVar15 = pTVar34->Z;
      fVar59 = pTVar34->W;
      fVar52 = fVar14 * fVar14 + fVar13 * fVar13;
      fVar53 = fVar13 * fVar13 + fVar14 * fVar14;
      fVar54 = fVar59 * fVar59 + fVar15 * fVar15;
      fVar55 = fVar15 * fVar15 + fVar59 * fVar59;
      auVar51._0_4_ = fVar54 + fVar52;
      auVar51._4_4_ = fVar55 + fVar53;
      auVar51._8_4_ = fVar52 + fVar54;
      auVar51._12_4_ = fVar53 + fVar55;
      bVar50 = ___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar51._0_4_;
      bVar9 = _UNK_1506895d4 <= auVar51._4_4_;
      bVar10 = _UNK_1506895d8 <= auVar51._8_4_;
      bVar11 = _UNK_1506895dc <= auVar51._12_4_;
      auVar51 = sqrtps(auVar51,auVar51);
      auVar51 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar51);
      uVar31 = GlobalVectorConstants::Float0001.m128_u32[0];
      uVar37 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar7 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar8 = GlobalVectorConstants::Float0001.m128_u32[3];
      if ((local_138.Ptr)->DeltaSeconds <= 0.0) {
        fVar52 = 0.0;
      }
      else {
        fVar52 = fVar12 / (local_138.Ptr)->DeltaSeconds;
      }
      iVar48 = iVar48 + 1;
      *local_238.X.Register = fVar67 * fVar4 + fVar64;
      local_238.X.Register = local_238.X.Register + local_238.X.AdvanceOffset;
      *local_238.Y.Register = fVar68 * fVar4 + fVar65;
      local_238.Y.Register = local_238.Y.Register + local_238.Y.AdvanceOffset;
      *local_238.Z.Register = fVar60 * fVar4 + fVar66;
      local_238.Z.Register = local_238.Z.Register + local_238.Z.AdvanceOffset;
      *local_1a8.X.Register =
           (float)((uint)(auVar51._0_4_ * fVar13) & -(uint)bVar50 | ~-(uint)bVar50 & uVar31);
      local_1a8.X.Register = local_1a8.X.Register + local_1a8.X.AdvanceOffset;
      *local_1a8.Y.Register =
           (float)((uint)(auVar51._4_4_ * fVar14) & -(uint)bVar9 | ~-(uint)bVar9 & uVar37);
      local_1a8.Y.Register = local_1a8.Y.Register + local_1a8.Y.AdvanceOffset;
      *local_1a8.Z.Register =
           (float)((uint)(auVar51._8_4_ * fVar15) & -(uint)bVar10 | ~-(uint)bVar10 & uVar7);
      local_1a8.Z.Register = local_1a8.Z.Register + local_1a8.Z.AdvanceOffset;
      *local_1a8.W.Register =
           (float)((uint)(auVar51._12_4_ * fVar59) & -(uint)bVar11 | ~-(uint)bVar11 & uVar8);
      local_1a8.W.Register = local_1a8.W.Register + local_1a8.W.AdvanceOffset;
      *local_208.X.Register =
           (((float)dVar16 * fVar57 + (float)dVar21 * fVar56 + (float)dVar23 * fVar58 +
            (float)dVar26 * 0.0) - fVar61) * fVar4 + fVar61;
      local_208.X.Register = local_208.X.Register + local_208.X.AdvanceOffset;
      *local_208.Y.Register =
           (((float)dVar17 * fVar57 + (float)dVar22 * fVar56 + (float)dVar24 * fVar58 +
            (float)dVar27 * 0.0) - fVar62) * fVar4 + fVar62;
      local_208.Y.Register = local_208.Y.Register + local_208.Y.AdvanceOffset;
      *local_208.Z.Register =
           (((float)dVar18 * fVar57 + (float)dVar19 * fVar56 + (float)dVar20 * fVar58 +
            (float)dVar25 * 0.0) - fVar63) * fVar4 + fVar63;
      local_208.Z.Register = local_208.Z.Register + local_208.Z.AdvanceOffset;
      *local_1d8.X.Register = fVar52 * fVar67;
      local_1d8.X.Register = local_1d8.X.Register + local_1d8.X.AdvanceOffset;
      pfVar35 = local_1d8.Y.Register + local_1d8.Y.AdvanceOffset;
      *local_1d8.Y.Register = fVar52 * fVar68;
      *local_1d8.Z.Register = fVar52 * fVar60;
      local_1d8.Z.Register = local_1d8.Z.Register + local_1d8.Z.AdvanceOffset;
      pFVar39 = local_128;
      local_1d8.Y.Register = pfVar35;
    } while (iVar48 < param_1->NumInstances);
  }
  if (pFVar39 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar39->_padding_;
    LOCK();
    lVar33 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar33 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar39->_padding_)(pFVar39,1);
    }
  }
  return;
}

// VMGetTriPositionAndVelocity_Deprecated<FNDITransformHandler> @ 148f6cba0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriPositionAndVelocity_Deprecated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uchar *puVar3;
  double dVar4;
  double dVar5;
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
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float *pfVar20;
  bool bVar21;
  FStaticMeshLODResources *pFVar22;
  float *pfVar23;
  FIndexArrayView *pFVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float fVar34;
  FStaticMeshLODResources *pFVar35;
  ulonglong uVar36;
  float fVar37;
  longlong lVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  FStaticMeshLODResources *local_258;
  float *local_250;
  float local_248;
  longlong local_240;
  float *local_238;
  undefined8 uStack_230;
  float *local_228;
  float *local_220;
  float *local_218;
  float *local_210;
  float *local_208;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1e8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1b8;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  float *local_140;
  float *local_138;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_130;
  FStaticMeshLODResources *local_120;
  FColorVertexBuffer *local_118 [2];
  FIndexArrayView local_108;
  int local_f8 [4];
  FNDIInputParam<UE::Math::TVector<float>_> local_e8;
  FIndexArrayView local_98 [7];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_130,param_1);
  iVar39 = 0;
  local_120 = (FStaticMeshLODResources *)0x0;
  pFVar22 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_130.Ptr,local_118);
  local_258 = local_120;
  pFVar35 = local_120;
  if (local_120 != pFVar22) {
    if (pFVar22 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar22->_padding_ = (int)pFVar22->_padding_ + 1;
      UNLOCK();
    }
    pFVar35 = pFVar22;
    local_258 = pFVar22;
    if (local_120 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_120->_padding_;
      LOCK();
      lVar38 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar38 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_120->_padding_)(local_120,1);
      }
    }
  }
  local_f8[0] = 0;
  pfVar23 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  lVar38 = (longlong)local_f8[0];
  iVar26 = local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_e8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1e8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1b8,param_1);
  if (pFVar35 == (FStaticMeshLODResources *)0x0) {
    local_268 = (undefined1  [8])0x0;
    pFVar24 = (FIndexArrayView *)local_268;
    fStack_260 = 0.0;
    fStack_25c = (float)((uint)fStack_25c & 0xffffff00);
  }
  else {
    pFVar24 = FRawStaticIndexBuffer::GetArrayView(&pFVar35->IndexBuffer,local_98);
  }
  local_238 = pFVar24->UntypedIndexData;
  uStack_230._0_4_ = pFVar24->NumIndices;
  uStack_230._4_1_ = pFVar24->b32Bit;
  uStack_230._5_3_ = *(undefined3 *)&pFVar24->field_0xd;
  if (pFVar35 != (FStaticMeshLODResources *)0x0) {
    pFVar24 = FRawStaticIndexBuffer::GetArrayView(&pFVar35->IndexBuffer,&local_108);
    fVar37 = (float)(pFVar24->NumIndices / 3 + -1);
    if ((((-1 < (int)fVar37) && (pFVar35 != (FStaticMeshLODResources *)0x0)) &&
        ((pFVar35->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
       ((bVar21 = FPositionVertexBuffer::GetAllowCPUAccess
                            (&(pFVar35->VertexBuffers).PositionVertexBuffer),
        fVar16 = __real_3f800000, bVar21 &&
        (0 < (int)(pFVar35->VertexBuffers).PositionVertexBuffer.NumVertices)))) {
      pfVar20 = local_238;
      if (0 < param_1->NumInstances) {
        local_188 = (longlong)local_e8.Z.AdvanceOffset * 4;
        local_180 = (longlong)local_e8.Y.AdvanceOffset * 4;
        local_178 = (longlong)local_e8.X.AdvanceOffset * 4;
        local_170 = (longlong)local_1e8.X.AdvanceOffset * 4;
        local_168 = (longlong)local_1e8.Y.AdvanceOffset * 4;
        local_160 = (longlong)local_1e8.Z.AdvanceOffset * 4;
        local_158 = (longlong)local_1b8.X.AdvanceOffset * 4;
        local_150 = (longlong)local_1b8.Y.AdvanceOffset * 4;
        local_240 = lVar38 * 4;
        local_148 = (longlong)local_1b8.Z.AdvanceOffset * 4;
        local_218 = local_1e8.Z.Register;
        local_220 = local_1e8.Y.Register;
        local_228 = local_1e8.X.Register;
        local_258 = (FStaticMeshLODResources *)local_1b8.Z.Register;
        local_208 = local_1b8.Y.Register;
        local_210 = local_1b8.X.Register;
        uStack_1ec = 0x3f800000;
        fStack_25c = 1.0;
        pfVar23 = pfVar23 + iVar26;
        do {
          fVar42 = *local_e8.Z.InputPtr;
          local_140 = pfVar23 + lVar38;
          fVar43 = *local_e8.Y.InputPtr;
          fVar44 = fVar37;
          if ((int)*pfVar23 < (int)fVar37) {
            fVar44 = *pfVar23;
          }
          fVar41 = *local_e8.X.InputPtr;
          local_e8.Z.InputPtr = local_e8.Z.InputPtr + local_e8.Z.AdvanceOffset;
          local_e8.Y.InputPtr = local_e8.Y.InputPtr + local_e8.Y.AdvanceOffset;
          local_e8.X.InputPtr = local_e8.X.InputPtr + local_e8.X.AdvanceOffset;
          fVar40 = 0.0;
          if (0 < (int)fVar44) {
            fVar40 = fVar44;
          }
          lVar27 = (longlong)((int)fVar40 * 3);
          if (uStack_230._4_1_ == '\0') {
            fVar44 = (float)(uint)*(ushort *)((longlong)local_238 + lVar27 * 2 + 4);
            fVar40 = (float)(uint)*(ushort *)((longlong)local_238 + lVar27 * 2 + 2);
            fVar34 = (float)(uint)*(ushort *)((longlong)local_238 + lVar27 * 2);
          }
          else {
            fVar44 = local_238[lVar27 + 2];
            fVar40 = local_238[lVar27 + 1];
            fVar34 = local_238[lVar27];
          }
          puVar3 = (pFVar35->VertexBuffers).PositionVertexBuffer.Data;
          uVar2 = (pFVar35->VertexBuffers).PositionVertexBuffer.Stride;
          uVar25 = (ulonglong)(uVar2 * (int)fVar40);
          uVar36 = (ulonglong)(uVar2 * (int)fVar34);
          uVar28 = (ulonglong)(uVar2 * (int)fVar44);
          local_1f8 = fVar43 * *(float *)(puVar3 + uVar25) + fVar41 * *(float *)(puVar3 + uVar36) +
                      fVar42 * *(float *)(puVar3 + uVar28);
          fStack_1f4 = fVar41 * *(float *)(puVar3 + uVar36 + 4) +
                       fVar43 * *(float *)(puVar3 + uVar25 + 4) +
                       fVar42 * *(float *)(puVar3 + uVar28 + 4);
          fStack_260 = fVar41 * *(float *)(puVar3 + uVar36 + 8) +
                       fVar43 * *(float *)(puVar3 + uVar25 + 8) +
                       fVar42 * *(float *)(puVar3 + uVar28 + 8);
          dVar4 = ((local_130.Ptr)->PrevTransform).M[0][2];
          dVar5 = ((local_130.Ptr)->PrevTransform).M[0][0];
          dVar6 = ((local_130.Ptr)->PrevTransform).M[0][1];
          fVar42 = (float)((local_130.Ptr)->Transform).M[3][0] * 1.0 +
                   (float)((local_130.Ptr)->Transform).M[2][0] * fStack_260 +
                   (float)((local_130.Ptr)->Transform).M[1][0] * fStack_1f4 +
                   (float)((local_130.Ptr)->Transform).M[0][0] * local_1f8;
          fVar43 = (float)((local_130.Ptr)->Transform).M[3][1] * 1.0 +
                   (float)((local_130.Ptr)->Transform).M[2][1] * fStack_260 +
                   (float)((local_130.Ptr)->Transform).M[1][1] * fStack_1f4 +
                   (float)((local_130.Ptr)->Transform).M[0][1] * local_1f8;
          fVar44 = (float)((local_130.Ptr)->Transform).M[3][2] * 1.0 +
                   (float)((local_130.Ptr)->Transform).M[2][2] * fStack_260 +
                   (float)((local_130.Ptr)->Transform).M[1][2] * fStack_1f4 +
                   (float)((local_130.Ptr)->Transform).M[0][2] * local_1f8;
          dVar7 = ((local_130.Ptr)->PrevTransform).M[1][2];
          local_268._4_4_ = fStack_1f4;
          local_268._0_4_ = local_1f8;
          dVar8 = ((local_130.Ptr)->PrevTransform).M[1][0];
          dVar9 = ((local_130.Ptr)->PrevTransform).M[1][1];
          dVar10 = ((local_130.Ptr)->PrevTransform).M[2][2];
          dVar11 = ((local_130.Ptr)->PrevTransform).M[2][0];
          dVar12 = ((local_130.Ptr)->PrevTransform).M[2][1];
          dVar13 = ((local_130.Ptr)->PrevTransform).M[3][2];
          dVar14 = ((local_130.Ptr)->PrevTransform).M[3][0];
          dVar15 = ((local_130.Ptr)->PrevTransform).M[3][1];
          if ((local_130.Ptr)->DeltaSeconds <= 0.0) {
            fVar41 = 0.0;
          }
          else {
            fVar41 = fVar16 / (local_130.Ptr)->DeltaSeconds;
          }
          iVar39 = iVar39 + 1;
          pfVar29 = local_228 + local_1e8.X.AdvanceOffset;
          *local_228 = fVar42;
          pfVar30 = local_220 + local_1e8.Y.AdvanceOffset;
          *local_220 = fVar43;
          pfVar31 = local_218 + local_1e8.Z.AdvanceOffset;
          *local_218 = fVar44;
          pfVar32 = local_210 + local_1b8.X.AdvanceOffset;
          *local_210 = fVar41 * (fVar42 - ((float)dVar14 * 1.0 +
                                          (float)dVar11 * fStack_260 +
                                          (float)dVar8 * fStack_1f4 + (float)dVar5 * local_1f8));
          pfVar33 = local_208 + local_1b8.Y.AdvanceOffset;
          *local_208 = fVar41 * (fVar43 - ((float)dVar15 * 1.0 +
                                          (float)dVar12 * fStack_260 +
                                          (float)dVar9 * fStack_1f4 + (float)dVar6 * local_1f8));
          pFVar22 = (FStaticMeshLODResources *)((longlong)&local_258->_padding_ + local_148);
          *(float *)&local_258->_padding_ =
               fVar41 * (fVar44 - ((float)dVar13 * 1.0 +
                                  (float)dVar10 * fStack_260 +
                                  (float)dVar7 * fStack_1f4 + (float)dVar4 * local_1f8));
          pfVar23 = local_140;
          local_258 = pFVar22;
          local_250 = local_e8.Y.InputPtr;
          pfVar20 = local_e8.X.InputPtr;
          local_228 = pfVar29;
          local_220 = pfVar30;
          local_218 = pfVar31;
          local_210 = pfVar32;
          local_208 = pfVar33;
          fStack_1f0 = fStack_260;
          local_138 = local_e8.Z.InputPtr;
        } while (iVar39 < param_1->NumInstances);
      }
      goto LAB_148f6d3b3;
    }
  }
  uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_248 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_250 = (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_268._0_4_ =
       (float)((local_130.Ptr)->Transform).M[3][0] * 1.0 +
       (float)((local_130.Ptr)->Transform).M[2][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_130.Ptr)->Transform).M[1][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_130.Ptr)->Transform).M[0][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_268._4_4_ =
       (float)((local_130.Ptr)->Transform).M[3][1] * 1.0 +
       (float)((local_130.Ptr)->Transform).M[2][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_130.Ptr)->Transform).M[1][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_130.Ptr)->Transform).M[0][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fStack_260 = (float)((local_130.Ptr)->Transform).M[3][2] * 1.0 +
               (float)((local_130.Ptr)->Transform).M[2][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_130.Ptr)->Transform).M[1][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_130.Ptr)->Transform).M[0][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fStack_25c = (float)((local_130.Ptr)->Transform).M[3][3] * 1.0 +
               (float)((local_130.Ptr)->Transform).M[2][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_130.Ptr)->Transform).M[1][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_130.Ptr)->Transform).M[0][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  pfVar20 = local_238;
  if (0 < param_1->NumInstances) {
    local_240 = (longlong)local_1b8.Y.AdvanceOffset * 4;
    do {
      iVar39 = iVar39 + 1;
      *local_1e8.X.Register = (float)local_268._0_4_;
      *local_1e8.Y.Register = (float)local_268._4_4_;
      *local_1e8.Z.Register = fStack_260;
      *local_1b8.X.Register = (float)uVar17;
      *local_1b8.Y.Register = (float)uVar18;
      *(undefined4 *)&((FStaticMeshLODResources *)local_1b8.Z.Register)->_padding_ = uVar19;
      local_1e8.Z.Register = local_1e8.Z.Register + local_1e8.Z.AdvanceOffset;
      local_1e8.Y.Register = local_1e8.Y.Register + local_1e8.Y.AdvanceOffset;
      pFVar35 = local_258;
      local_1e8.X.Register = local_1e8.X.Register + local_1e8.X.AdvanceOffset;
      local_1b8.Z.Register =
           (float *)((longlong)local_1b8.Z.AdvanceOffset * 4 + (longlong)local_1b8.Z.Register);
      local_1b8.Y.Register = local_1b8.Y.Register + local_1b8.Y.AdvanceOffset;
      local_1b8.X.Register = local_1b8.X.Register + local_1b8.X.AdvanceOffset;
      pfVar20 = (float *)((longlong)local_1b8.Z.AdvanceOffset * 4);
    } while (iVar39 < param_1->NumInstances);
  }
LAB_148f6d3b3:
  local_238 = pfVar20;
  if (pFVar35 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar35->_padding_;
    LOCK();
    lVar38 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar38 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar35->_padding_)(pFVar35,1);
    }
  }
  return;
}

// VMGetTriPosition_Deprecated<FNDITransformHandler> @ 148f6d430

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriPosition_Deprecated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uchar *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FStaticMeshLODResources *pFVar16;
  float *pfVar17;
  FIndexArrayView *pFVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float fVar26;
  int iVar27;
  FStaticMeshLODResources *pFVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong lVar33;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  int local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  undefined8 uStack_170;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  float *local_110;
  float *local_108;
  longlong local_100;
  longlong local_f8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f0;
  FStaticMeshLODResources *local_e0;
  FColorVertexBuffer *local_d8 [2];
  FIndexArrayView local_c8;
  int local_b8 [4];
  FNDIInputParam<UE::Math::TVector<float>_> local_a8;
  FIndexArrayView local_58 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f0,param_1);
  iVar27 = 0;
  local_e0 = (FStaticMeshLODResources *)0x0;
  pFVar16 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_f0.Ptr,local_d8);
  pFVar28 = local_e0;
  if (local_e0 != pFVar16) {
    if (pFVar16 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar16->_padding_ = (int)pFVar16->_padding_ + 1;
      UNLOCK();
    }
    pFVar28 = pFVar16;
    if (local_e0 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_e0->_padding_;
      LOCK();
      lVar33 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar33 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_e0->_padding_)(local_e0,1);
      }
    }
  }
  local_b8[0] = 0;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  lVar33 = (longlong)local_b8[0];
  iVar20 = local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_a8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  if (pFVar28 == (FStaticMeshLODResources *)0x0) {
    local_1a8 = (undefined1  [8])0x0;
    pFVar18 = (FIndexArrayView *)local_1a8;
    fStack_1a0 = 0.0;
    fStack_19c = (float)((uint)fStack_19c & 0xffffff00);
  }
  else {
    pFVar18 = FRawStaticIndexBuffer::GetArrayView(&pFVar28->IndexBuffer,local_58);
  }
  local_178 = pFVar18->UntypedIndexData;
  uStack_170._0_4_ = pFVar18->NumIndices;
  uStack_170._4_1_ = pFVar18->b32Bit;
  uStack_170._5_3_ = *(undefined3 *)&pFVar18->field_0xd;
  if (pFVar28 != (FStaticMeshLODResources *)0x0) {
    pFVar18 = FRawStaticIndexBuffer::GetArrayView(&pFVar28->IndexBuffer,&local_c8);
    fVar30 = (float)(pFVar18->NumIndices / 3 + -1);
    if ((((-1 < (int)fVar30) && (pFVar28 != (FStaticMeshLODResources *)0x0)) &&
        ((pFVar28->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
       ((bVar15 = FPositionVertexBuffer::GetAllowCPUAccess
                            (&(pFVar28->VertexBuffers).PositionVertexBuffer), bVar15 &&
        (0 < (int)(pFVar28->VertexBuffers).PositionVertexBuffer.NumVertices)))) {
      local_198 = 0;
      pfVar23 = local_178;
      if (0 < param_1->NumInstances) {
        local_138 = (longlong)local_a8.Y.AdvanceOffset * 4;
        local_130 = (longlong)local_a8.X.AdvanceOffset * 4;
        local_128 = (longlong)local_168.X.AdvanceOffset * 4;
        local_120 = (longlong)local_168.Y.AdvanceOffset * 4;
        local_100 = lVar33 * 4;
        local_f8 = (longlong)local_a8.Z.AdvanceOffset * 4;
        local_118 = (longlong)local_168.Z.AdvanceOffset * 4;
        local_180 = local_168.Z.Register;
        local_188 = local_168.Y.Register;
        local_190 = local_168.X.Register;
        fStack_19c = 1.0;
        pfVar17 = pfVar17 + iVar20;
        do {
          fVar2 = *local_a8.Z.InputPtr;
          fVar3 = *local_a8.Y.InputPtr;
          fVar4 = *local_a8.X.InputPtr;
          local_a8.Z.InputPtr = local_a8.Z.InputPtr + local_a8.Z.AdvanceOffset;
          fVar32 = fVar30;
          if ((int)*pfVar17 < (int)fVar30) {
            fVar32 = *pfVar17;
          }
          local_a8.Y.InputPtr = local_a8.Y.InputPtr + local_a8.Y.AdvanceOffset;
          local_a8.X.InputPtr = local_a8.X.InputPtr + local_a8.X.AdvanceOffset;
          fVar31 = 0.0;
          if (0 < (int)fVar32) {
            fVar31 = fVar32;
          }
          lVar21 = (longlong)((int)fVar31 * 3);
          if (uStack_170._4_1_ == '\0') {
            fVar32 = (float)(uint)*(ushort *)((longlong)local_178 + lVar21 * 2 + 4);
            fVar31 = (float)(uint)*(ushort *)((longlong)local_178 + lVar21 * 2 + 2);
            fVar26 = (float)(uint)*(ushort *)((longlong)local_178 + lVar21 * 2);
          }
          else {
            fVar32 = local_178[lVar21 + 2];
            fVar31 = local_178[lVar21 + 1];
            fVar26 = local_178[lVar21];
          }
          puVar6 = (pFVar28->VertexBuffers).PositionVertexBuffer.Data;
          uVar5 = (pFVar28->VertexBuffers).PositionVertexBuffer.Stride;
          uVar19 = (ulonglong)(uVar5 * (int)fVar31);
          uVar22 = (ulonglong)(uVar5 * (int)fVar32);
          uVar29 = (ulonglong)(uVar5 * (int)fVar26);
          dVar7 = ((local_f0.Ptr)->Transform).M[0][1];
          local_1a8._0_4_ =
               fVar4 * *(float *)(puVar6 + uVar29) + fVar3 * *(float *)(puVar6 + uVar19) +
               fVar2 * *(float *)(puVar6 + uVar22);
          local_1a8._4_4_ =
               fVar3 * *(float *)(puVar6 + uVar19 + 4) + fVar4 * *(float *)(puVar6 + uVar29 + 4) +
               fVar2 * *(float *)(puVar6 + uVar22 + 4);
          dVar8 = ((local_f0.Ptr)->Transform).M[0][2];
          fStack_1a0 = fVar3 * *(float *)(puVar6 + uVar19 + 8) +
                       fVar4 * *(float *)(puVar6 + uVar29 + 8) +
                       fVar2 * *(float *)(puVar6 + uVar22 + 8);
          dVar9 = ((local_f0.Ptr)->Transform).M[1][2];
          dVar10 = ((local_f0.Ptr)->Transform).M[2][2];
          dVar11 = ((local_f0.Ptr)->Transform).M[1][1];
          dVar12 = ((local_f0.Ptr)->Transform).M[2][1];
          dVar13 = ((local_f0.Ptr)->Transform).M[3][2];
          dVar14 = ((local_f0.Ptr)->Transform).M[3][1];
          pfVar23 = local_190 + local_168.X.AdvanceOffset;
          *local_190 = (float)((local_f0.Ptr)->Transform).M[3][0] * 1.0 +
                       (float)((local_f0.Ptr)->Transform).M[2][0] * fStack_1a0 +
                       (float)((local_f0.Ptr)->Transform).M[1][0] * (float)local_1a8._4_4_ +
                       (float)((local_f0.Ptr)->Transform).M[0][0] * (float)local_1a8._0_4_;
          pfVar24 = local_188 + local_168.Y.AdvanceOffset;
          *local_188 = (float)dVar14 * 1.0 +
                       (float)dVar12 * fStack_1a0 +
                       (float)dVar11 * (float)local_1a8._4_4_ +
                       (float)dVar7 * (float)local_1a8._0_4_;
          pfVar25 = local_180 + local_168.Z.AdvanceOffset;
          *local_180 = (float)dVar13 * 1.0 +
                       (float)dVar10 * fStack_1a0 +
                       (float)dVar9 * (float)local_1a8._4_4_ + (float)dVar8 * (float)local_1a8._0_4_
          ;
          local_198 = local_198 + 1;
          pfVar17 = pfVar17 + lVar33;
          local_190 = pfVar23;
          local_188 = pfVar24;
          local_180 = pfVar25;
          pfVar23 = local_a8.X.InputPtr;
          local_110 = local_a8.Z.InputPtr;
          local_108 = local_a8.Y.InputPtr;
        } while (local_198 < param_1->NumInstances);
      }
      goto LAB_148f6d9a5;
    }
  }
  local_1a8._0_4_ =
       (float)((local_f0.Ptr)->Transform).M[3][0] * 1.0 +
       (float)((local_f0.Ptr)->Transform).M[2][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_f0.Ptr)->Transform).M[1][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_f0.Ptr)->Transform).M[0][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_1a8._4_4_ =
       (float)((local_f0.Ptr)->Transform).M[3][1] * 1.0 +
       (float)((local_f0.Ptr)->Transform).M[2][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_f0.Ptr)->Transform).M[1][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_f0.Ptr)->Transform).M[0][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fStack_1a0 = (float)((local_f0.Ptr)->Transform).M[3][2] * 1.0 +
               (float)((local_f0.Ptr)->Transform).M[2][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_f0.Ptr)->Transform).M[1][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_f0.Ptr)->Transform).M[0][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fStack_19c = (float)((local_f0.Ptr)->Transform).M[3][3] * 1.0 +
               (float)((local_f0.Ptr)->Transform).M[2][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_f0.Ptr)->Transform).M[1][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_f0.Ptr)->Transform).M[0][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  pfVar23 = local_178;
  if (0 < param_1->NumInstances) {
    do {
      iVar27 = iVar27 + 1;
      *local_168.X.Register = (float)local_1a8._0_4_;
      *local_168.Y.Register = (float)local_1a8._4_4_;
      *local_168.Z.Register = fStack_1a0;
      local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
      local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
      local_168.X.Register = local_168.X.Register + local_168.X.AdvanceOffset;
    } while (iVar27 < param_1->NumInstances);
  }
LAB_148f6d9a5:
  local_178 = pfVar23;
  if (pFVar28 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar28->_padding_;
    LOCK();
    lVar33 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar33 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar28->_padding_)(pFVar28,1);
    }
  }
  return;
}

// VMGetTriPosition_Deprecated<FNDITransformHandlerNoop> @ 148f6da20

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriPosition_Deprecated<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uchar *puVar9;
  undefined4 uVar10;
  undefined1 auVar11 [8];
  bool bVar12;
  uint uVar13;
  FStaticMeshLODResources *pFVar14;
  float *pfVar15;
  FIndexArrayView *pFVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  int iVar24;
  FStaticMeshLODResources *pFVar25;
  float fVar26;
  ulonglong uVar27;
  float fVar28;
  longlong lVar29;
  float fVar30;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  int local_158;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  FNDIOutputParam<UE::Math::TVector<float>_> local_120;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  FStaticMeshLODResources *local_b0;
  FColorVertexBuffer *local_a8 [2];
  FNDIInputParam<UE::Math::TVector<float>_> local_98;
  FIndexArrayView local_48 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)local_c0,param_1);
  iVar24 = 0;
  local_b0 = (FStaticMeshLODResources *)0x0;
  pFVar14 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      ((FInstanceData_GameThread *)local_c0._8_8_,local_a8);
  pFVar25 = local_b0;
  if (local_b0 != pFVar14) {
    if (pFVar14 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    pFVar25 = pFVar14;
    if (local_b0 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_b0->_padding_;
      LOCK();
      lVar29 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar29 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_b0->_padding_)(local_b0,1);
      }
    }
  }
  local_b0 = (FStaticMeshLODResources *)((ulonglong)local_b0 & 0xffffffff00000000);
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_b0);
  lVar29 = (longlong)(int)local_b0;
  iVar17 = (int)local_b0 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_98,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_120,param_1);
  if (pFVar25 == (FStaticMeshLODResources *)0x0) {
    local_168 = (undefined1  [8])0x0;
    pFVar16 = (FIndexArrayView *)local_168;
    uStack_160 = (ulonglong)uStack_160._5_3_ << 0x28;
  }
  else {
    pFVar16 = FRawStaticIndexBuffer::GetArrayView(&pFVar25->IndexBuffer,local_48);
  }
  local_168 = (undefined1  [8])pFVar16->UntypedIndexData;
  uStack_160._0_4_ = pFVar16->NumIndices;
  uStack_160._4_1_ = pFVar16->b32Bit;
  uStack_160._5_3_ = *(uint3 *)&pFVar16->field_0xd;
  if (pFVar25 != (FStaticMeshLODResources *)0x0) {
    pFVar16 = FRawStaticIndexBuffer::GetArrayView(&pFVar25->IndexBuffer,(FIndexArrayView *)local_c0)
    ;
    fVar28 = (float)(pFVar16->NumIndices / 3 + -1);
    if ((((-1 < (int)fVar28) && (pFVar25 != (FStaticMeshLODResources *)0x0)) &&
        ((pFVar25->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
       ((bVar12 = FPositionVertexBuffer::GetAllowCPUAccess
                            (&(pFVar25->VertexBuffers).PositionVertexBuffer), bVar12 &&
        (0 < (int)(pFVar25->VertexBuffers).PositionVertexBuffer.NumVertices)))) {
      local_158 = 0;
      auVar11 = local_168;
      if (0 < param_1->NumInstances) {
        local_f0 = (longlong)local_120.X.AdvanceOffset * 4;
        local_e8 = (longlong)local_120.Y.AdvanceOffset * 4;
        local_d8 = (longlong)local_98.Z.AdvanceOffset * 4;
        local_d0 = (longlong)local_98.Y.AdvanceOffset * 4;
        local_c8 = (longlong)local_98.X.AdvanceOffset * 4;
        local_e0 = (longlong)local_120.Z.AdvanceOffset * 4;
        local_150 = local_98.Z.InputPtr;
        local_148 = local_98.Y.InputPtr;
        local_140 = local_98.X.InputPtr;
        local_128 = local_120.Z.Register;
        local_130 = local_120.Y.Register;
        local_138 = local_120.X.Register;
        pfVar15 = pfVar15 + iVar17;
        do {
          auVar11 = (undefined1  [8])(pfVar15 + lVar29);
          fVar30 = fVar28;
          if ((int)*pfVar15 < (int)fVar28) {
            fVar30 = *pfVar15;
          }
          fVar2 = *local_150;
          local_150 = local_150 + local_98.Z.AdvanceOffset;
          fVar3 = *local_148;
          local_148 = local_148 + local_98.Y.AdvanceOffset;
          fVar4 = *local_140;
          local_140 = local_140 + local_98.X.AdvanceOffset;
          fVar26 = 0.0;
          if (0 < (int)fVar30) {
            fVar26 = fVar30;
          }
          lVar19 = (longlong)((int)fVar26 * 3);
          if (uStack_160._4_1_ == false) {
            fVar30 = (float)(uint)*(ushort *)((longlong)local_168 + lVar19 * 2 + 4);
            fVar26 = (float)(uint)*(ushort *)((longlong)local_168 + lVar19 * 2 + 2);
            fVar23 = (float)(uint)*(ushort *)((longlong)local_168 + lVar19 * 2);
          }
          else {
            fVar30 = *(float *)((longlong)local_168 + (lVar19 + 2) * 4);
            fVar26 = *(float *)((longlong)local_168 + (lVar19 + 1) * 4);
            fVar23 = *(float *)((longlong)local_168 + lVar19 * 4);
          }
          puVar9 = (pFVar25->VertexBuffers).PositionVertexBuffer.Data;
          uVar8 = (pFVar25->VertexBuffers).PositionVertexBuffer.Stride;
          uVar13 = uVar8 * (int)fVar26;
          uVar18 = uVar8 * (int)fVar30;
          uVar27 = (ulonglong)(uVar8 * (int)fVar23);
          fVar30 = *(float *)(puVar9 + (ulonglong)uVar13 + 4);
          fVar26 = *(float *)(puVar9 + (ulonglong)uVar18 + 4);
          fVar23 = *(float *)(puVar9 + uVar27 + 4);
          fVar5 = *(float *)(puVar9 + uVar27 + 8);
          fVar6 = *(float *)(puVar9 + (ulonglong)uVar13 + 8);
          fVar7 = *(float *)(puVar9 + (ulonglong)uVar18 + 8);
          pfVar20 = local_138 + local_120.X.AdvanceOffset;
          *local_138 = fVar4 * *(float *)(puVar9 + uVar27) + fVar3 * *(float *)(puVar9 + uVar13) +
                       fVar2 * *(float *)(puVar9 + uVar18);
          pfVar21 = local_130 + local_120.Y.AdvanceOffset;
          *local_130 = fVar4 * fVar23 + fVar3 * fVar30 + fVar2 * fVar26;
          pfVar22 = local_128 + local_120.Z.AdvanceOffset;
          *local_128 = fVar4 * fVar5 + fVar3 * fVar6 + fVar2 * fVar7;
          local_158 = local_158 + 1;
          pfVar15 = (float *)auVar11;
          local_138 = pfVar20;
          local_130 = pfVar21;
          local_128 = pfVar22;
        } while (local_158 < param_1->NumInstances);
      }
      goto LAB_148f6de35;
    }
  }
  uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_168 = (undefined1  [8])UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  auVar11 = local_168;
  uStack_160._0_4_ = (int)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    local_168._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_168._0_4_ = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    do {
      iVar24 = iVar24 + 1;
      *local_120.X.Register = (float)local_168._0_4_;
      *local_120.Y.Register = (float)local_168._4_4_;
      *local_120.Z.Register = (float)uVar10;
      local_120.Z.Register = local_120.Z.Register + local_120.Z.AdvanceOffset;
      local_120.Y.Register = local_120.Y.Register + local_120.Y.AdvanceOffset;
      local_120.X.Register = local_120.X.Register + local_120.X.AdvanceOffset;
    } while (iVar24 < param_1->NumInstances);
  }
LAB_148f6de35:
  local_168 = auVar11;
  if (pFVar25 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar25->_padding_;
    LOCK();
    lVar29 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar29 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar25->_padding_)(pFVar25,1);
    }
  }
  return;
}

// VMGetTriangle<FNDITransformHandler> @ 148f6dea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangle<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  FVectorVMExternalFunctionContext *pFVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  FStaticMeshLODResources *pFVar9;
  FIndexArrayView *pFVar10;
  ulonglong uVar11;
  TVector4<float> *pTVar12;
  TVector<float> *pTVar13;
  ulonglong uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  undefined4 *puVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  FStaticMeshLODResources *pFVar30;
  uint uVar31;
  FStaticMeshVertexBuffer *this_00;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_518 [32];
  uint local_4f8;
  float local_4e8;
  float fStack_4e4;
  undefined4 local_4e0;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  float local_4c8;
  float fStack_4c4;
  undefined4 local_4c0;
  FStaticMeshVertexBuffer *local_4b8;
  int local_4b0;
  float *local_4a8;
  float *local_4a0;
  float *local_498;
  FVectorVMExternalFunctionContext *local_490;
  float local_488;
  float local_484;
  FStaticMeshLODResources *local_480;
  float *local_478;
  longlong local_470;
  float *local_468;
  longlong local_460;
  longlong local_458;
  longlong local_450;
  longlong local_448;
  float *local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  float *local_410;
  longlong local_408;
  longlong local_400;
  float *local_3f8;
  float *local_3f0;
  float *local_3e8;
  float *local_3e0;
  float *local_3d8;
  float *local_3d0;
  float *local_3c8;
  float *local_3c0;
  float *local_3b8;
  float *local_3b0;
  float *local_3a8;
  float *local_3a0;
  float *local_398;
  TVector4<float>_u_0 local_388;
  int local_378;
  undefined4 uStack_374;
  int local_370;
  float *local_368;
  int local_360;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  FNDIOutputParam<UE::Math::TVector<float>_> local_338;
  FNDIOutputParam<UE::Math::TVector<float>_> local_308;
  FNDIOutputParam<UE::Math::TVector<float>_> local_2d8;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  undefined1 local_280 [12];
  char cStack_274;
  longlong local_270;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_268;
  FStaticMeshLODResources *local_258;
  FColorVertexBuffer *local_250;
  FNDITransformHandler local_248 [16];
  undefined1 local_238 [16];
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  TVector<float> local_1f8;
  TVector<float> local_1ec;
  FIndexArrayView local_1e0;
  FIndexArrayView local_1d0;
  TVector4<float> local_1b8;
  TVector4<float> local_1a8;
  TVector4<float> local_198;
  TVector4<float> local_188;
  TVector4<float> local_178;
  TMatrix<float> local_168;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_518;
  local_490 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_268,param_1);
  iVar32 = 0;
  local_258 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_268.Ptr,&local_250);
  local_480 = local_258;
  pFVar30 = local_258;
  if (local_258 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar30 = pFVar9;
    local_480 = pFVar9;
    if (local_258 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_258->_padding_;
      LOCK();
      lVar27 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_258->_padding_)(local_258,1);
      }
    }
  }
  local_378 = 0;
  local_3c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_378);
  lVar27 = (longlong)local_378;
  local_3c0 = local_3c0 + local_378 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_128,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_388._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_338,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_308,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_2d8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_168,param_1);
  if (pFVar30 == (FStaticMeshLODResources *)0x0) {
    local_4d8 = (undefined1  [8])0x0;
    pFVar10 = (FIndexArrayView *)local_4d8;
    fStack_4d0 = 0.0;
    fStack_4cc = (float)((uint)fStack_4cc & 0xffffff00);
  }
  else {
    pFVar10 = FRawStaticIndexBuffer::GetArrayView(&pFVar30->IndexBuffer,&local_1e0);
  }
  local_280._0_8_ = pFVar10->UntypedIndexData;
  local_280._8_4_ = pFVar10->NumIndices;
  cStack_274 = pFVar10->b32Bit;
  unique0x10001b07 = *(undefined3 *)&pFVar10->field_0xd;
  if (pFVar30 != (FStaticMeshLODResources *)0x0) {
    pFVar10 = FRawStaticIndexBuffer::GetArrayView(&pFVar30->IndexBuffer,&local_1d0);
    iVar2 = pFVar10->NumIndices;
    local_488 = (float)((int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >>
                             0x1f) + -1 + iVar2 / 3 + (iVar2 >> 0x1f));
    if (((((-1 < (int)local_488) && (pFVar30 != (FStaticMeshLODResources *)0x0)) &&
         ((pFVar30->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
        ((bVar8 = FPositionVertexBuffer::GetAllowCPUAccess
                            (&(pFVar30->VertexBuffers).PositionVertexBuffer), bVar8 &&
         (0 < (int)(pFVar30->VertexBuffers).PositionVertexBuffer.NumVertices)))) &&
       ((this_00 = &(pFVar30->VertexBuffers).StaticMeshVertexBuffer, local_4b8 = this_00,
        (pFVar30->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0 &&
        ((bVar8 = FStaticMeshVertexBuffer::GetAllowCPUAccess(this_00), uVar6 = local_280._0_8_,
         pFVar5 = local_490, bVar8 &&
         (0 < (int)(pFVar30->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))))) {
      local_4b0 = 0;
      if (0 < param_1->NumInstances) {
        local_288 = (longlong)(int)local_118 << 2;
        local_290 = (longlong)(int)local_388._s_0.Z << 2;
        local_298 = (longlong)local_370 << 2;
        cVar7 = cStack_274;
        local_468 = (float *)CONCAT44(fStack_f4,local_f8);
        local_478 = (float *)CONCAT44(fStack_10c,fStack_110);
        local_410 = (float *)CONCAT44(local_128._4_4_,local_128._0_4_);
        local_2a8 = (longlong)local_360 << 2;
        local_2a0 = (longlong)local_338.X.AdvanceOffset << 2;
        local_270 = (longlong)local_338.Y.AdvanceOffset << 2;
        local_440 = (float *)((longlong)local_338.Z.AdvanceOffset << 2);
        local_438 = (longlong)local_308.X.AdvanceOffset << 2;
        local_430 = (longlong)local_308.Y.AdvanceOffset << 2;
        local_428 = (longlong)local_308.Z.AdvanceOffset << 2;
        local_420 = (longlong)local_2d8.X.AdvanceOffset << 2;
        local_418 = (longlong)local_2d8.Y.AdvanceOffset << 2;
        local_450 = (longlong)local_2d8.Z.AdvanceOffset << 2;
        local_448 = (longlong)(int)local_168.M[0][2] << 2;
        local_458 = (longlong)(int)local_168.M[1][2] << 2;
        local_408 = lVar27 << 2;
        local_470 = (longlong)local_e8 << 2;
        local_400 = (longlong)(int)fStack_100 << 2;
        local_460 = (longlong)(int)local_168.M[2][2] << 2;
        local_3b0 = local_368;
        local_3c8 = (float *)local_388._0_8_;
        local_398 = local_338.Z.Register;
        local_3a0 = local_338.Y.Register;
        fStack_34c = 1.0;
        fStack_33c = 1.0;
        fStack_4cc = 0.0;
        local_238 = ZEXT416((uint)__real_3f800000);
        local_3a8 = local_338.X.Register;
        local_3e8 = local_308.Z.Register;
        local_3f0 = local_308.Y.Register;
        local_3f8 = local_308.X.Register;
        local_3d0 = local_2d8.Z.Register;
        local_3d8 = local_2d8.Y.Register;
        local_3e0 = local_2d8.X.Register;
        fVar33 = __real_3f800000;
        local_4a8 = (float *)CONCAT44(local_168.M[0][1],local_168.M[0][0]);
        local_4a0 = (float *)CONCAT44(local_168.M[1][1],local_168.M[1][0]);
        local_498 = (float *)CONCAT44(local_168.M[2][1],local_168.M[2][0]);
        local_3b8 = (float *)CONCAT44(uStack_374,local_378);
        do {
          fVar34 = *local_468;
          fVar38 = *local_478;
          fVar39 = *local_410;
          fVar35 = local_488;
          if ((int)*local_3c0 < (int)local_488) {
            fVar35 = *local_3c0;
          }
          local_468 = (float *)(local_470 + (longlong)local_468);
          local_478 = (float *)((longlong)local_478 + local_400);
          local_410 = (float *)(local_288 + (longlong)local_410);
          fVar41 = 0.0;
          if (0 < (int)fVar35) {
            fVar41 = fVar35;
          }
          lVar27 = (longlong)((int)fVar41 * 3);
          if (cVar7 == '\0') {
            uVar31 = (uint)*(ushort *)(uVar6 + 4 + lVar27 * 2);
            uVar28 = (uint)*(ushort *)(uVar6 + 2 + lVar27 * 2);
            uVar25 = (uint)*(ushort *)(uVar6 + lVar27 * 2);
          }
          else {
            uVar31 = *(uint *)(uVar6 + 8 + lVar27 * 4);
            uVar28 = *(uint *)(uVar6 + 4 + lVar27 * 4);
            uVar25 = *(uint *)(uVar6 + lVar27 * 4);
          }
          puVar4 = *(uchar **)&this_00[1].TangentsVertexBuffer.field_0x18;
          uVar3 = *(uint *)&this_00[1].TangentsVertexBuffer.field_0x20;
          uVar29 = (ulonglong)(uVar3 * uVar25);
          uVar11 = (ulonglong)(uVar3 * uVar28);
          uVar14 = (ulonglong)(uVar3 * uVar31);
          local_358 = fVar38 * *(float *)(puVar4 + uVar11) + fVar39 * *(float *)(puVar4 + uVar29) +
                      fVar34 * *(float *)(puVar4 + uVar14);
          fStack_354 = fVar38 * *(float *)(puVar4 + uVar11 + 4) +
                       fVar39 * *(float *)(puVar4 + uVar29 + 4) +
                       fVar34 * *(float *)(puVar4 + uVar14 + 4);
          fStack_350 = fVar38 * *(float *)(puVar4 + uVar11 + 8) +
                       fVar39 * *(float *)(puVar4 + uVar29 + 8) +
                       fVar34 * *(float *)(puVar4 + uVar14 + 8);
          local_228 = (float)((local_268.Ptr)->Transform).M[0][0] * local_358 +
                      (float)((local_268.Ptr)->Transform).M[1][0] * fStack_354 +
                      (float)((local_268.Ptr)->Transform).M[2][0] * fStack_350 +
                      (float)((local_268.Ptr)->Transform).M[3][0] * fStack_34c;
          fStack_224 = (float)((local_268.Ptr)->Transform).M[0][1] * local_358 +
                       (float)((local_268.Ptr)->Transform).M[1][1] * fStack_354 +
                       (float)((local_268.Ptr)->Transform).M[2][1] * fStack_350 +
                       (float)((local_268.Ptr)->Transform).M[3][1] * fStack_34c;
          fStack_220 = (float)((local_268.Ptr)->Transform).M[0][2] * local_358 +
                       (float)((local_268.Ptr)->Transform).M[1][2] * fStack_354 +
                       (float)((local_268.Ptr)->Transform).M[2][2] * fStack_350 +
                       (float)((local_268.Ptr)->Transform).M[3][2] * fStack_34c;
          fStack_21c = (float)((local_268.Ptr)->Transform).M[0][3] * local_358 +
                       (float)((local_268.Ptr)->Transform).M[1][3] * fStack_354 +
                       (float)((local_268.Ptr)->Transform).M[2][3] * fStack_350 +
                       (float)((local_268.Ptr)->Transform).M[3][3] * fStack_34c;
          fVar35 = local_228 -
                   ((float)((local_268.Ptr)->PrevTransform).M[1][0] * fStack_354 +
                    (float)((local_268.Ptr)->PrevTransform).M[0][0] * local_358 +
                    (float)((local_268.Ptr)->PrevTransform).M[2][0] * fStack_350 +
                   (float)((local_268.Ptr)->PrevTransform).M[3][0] * fStack_33c);
          if ((local_268.Ptr)->DeltaSeconds <= 0.0) {
            fVar33 = 0.0;
          }
          else {
            fVar33 = fVar33 / (local_268.Ptr)->DeltaSeconds;
          }
          local_484 = (fStack_224 -
                      ((float)((local_268.Ptr)->PrevTransform).M[1][1] * fStack_354 +
                       (float)((local_268.Ptr)->PrevTransform).M[0][1] * local_358 +
                       (float)((local_268.Ptr)->PrevTransform).M[2][1] * fStack_350 +
                      (float)((local_268.Ptr)->PrevTransform).M[3][1] * fStack_33c)) * fVar33;
          local_490 = (FVectorVMExternalFunctionContext *)
                      CONCAT44(local_490._4_4_,
                               (fStack_220 -
                               ((float)((local_268.Ptr)->PrevTransform).M[1][2] * fStack_354 +
                                (float)((local_268.Ptr)->PrevTransform).M[0][2] * local_358 +
                                (float)((local_268.Ptr)->PrevTransform).M[2][2] * fStack_350 +
                               (float)((local_268.Ptr)->PrevTransform).M[3][2] * fStack_33c)) *
                               fVar33);
          if (cVar7 == '\0') {
            local_4f8 = (uint)*(ushort *)(uVar6 + 4 + lVar27 * 2);
            uVar31 = (uint)*(ushort *)(uVar6 + 2 + lVar27 * 2);
            uVar28 = (uint)*(ushort *)(uVar6 + lVar27 * 2);
          }
          else {
            local_4f8 = *(uint *)(uVar6 + 8 + lVar27 * 4);
            uVar31 = *(uint *)(uVar6 + 4 + lVar27 * 4);
            uVar28 = *(uint *)(uVar6 + lVar27 * 4);
          }
          local_3c0 = (float *)(local_408 + (longlong)local_3c0);
          local_348 = local_358;
          fStack_344 = fStack_354;
          fStack_340 = fStack_350;
          local_218 = fStack_224;
          fStack_214 = fStack_224;
          fStack_210 = fStack_224;
          fStack_20c = fStack_224;
          local_208 = fStack_220;
          fStack_204 = fStack_220;
          fStack_200 = fStack_220;
          fStack_1fc = fStack_220;
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentX(local_4b8,&local_1b8,uVar28);
          fVar41 = (pTVar12->field0_0x0)._s_0.Z;
          fVar36 = (pTVar12->field0_0x0)._s_0.Y;
          fVar40 = (pTVar12->field0_0x0)._s_0.X;
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentX(local_4b8,&local_1a8,uVar31);
          fVar37 = (pTVar12->field0_0x0)._s_0.X;
          fVar42 = (pTVar12->field0_0x0)._s_0.Y;
          fVar43 = (pTVar12->field0_0x0)._s_0.Z;
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentX(local_4b8,&local_198,local_4f8);
          fStack_4e4 = fVar34 * (pTVar12->field0_0x0)._s_0.Y + fVar38 * fVar42 + fVar39 * fVar36;
          local_4e8 = fVar34 * (pTVar12->field0_0x0)._s_0.X + fVar38 * fVar37 + fVar39 * fVar40;
          local_4e0 = fVar34 * (pTVar12->field0_0x0)._s_0.Z + fVar38 * fVar43 + fVar39 * fVar41;
          local_168.M[0][2] = (float)((local_268.Ptr)->Transform).M[0][2];
          local_168.M[0][3] = (float)((local_268.Ptr)->Transform).M[0][3];
          local_168.M[0][0] = (float)((local_268.Ptr)->Transform).M[0][0];
          local_168.M[0][1] = (float)((local_268.Ptr)->Transform).M[0][1];
          local_168.M[1][0] = (float)((local_268.Ptr)->Transform).M[1][0];
          local_168.M[1][1] = (float)((local_268.Ptr)->Transform).M[1][1];
          local_168.M[1][2] = (float)((local_268.Ptr)->Transform).M[1][2];
          local_168.M[1][3] = (float)((local_268.Ptr)->Transform).M[1][3];
          local_168.M[2][0] = (float)((local_268.Ptr)->Transform).M[2][0];
          local_168.M[2][1] = (float)((local_268.Ptr)->Transform).M[2][1];
          local_168.M[2][2] = (float)((local_268.Ptr)->Transform).M[2][2];
          local_168.M[2][3] = (float)((local_268.Ptr)->Transform).M[2][3];
          local_168.M[3][0] = (float)((local_268.Ptr)->Transform).M[3][0];
          local_168.M[3][1] = (float)((local_268.Ptr)->Transform).M[3][1];
          local_168.M[3][2] = (float)((local_268.Ptr)->Transform).M[3][2];
          local_168.M[3][3] = (float)((local_268.Ptr)->Transform).M[3][3];
          FNDITransformHandler::TransformUnitVector
                    (local_248,(TVector<float> *)&local_4e8,&local_168);
          if (cVar7 == '\0') {
            local_4f8 = (uint)*(ushort *)(uVar6 + 4 + lVar27 * 2);
            uVar31 = (uint)*(ushort *)(uVar6 + 2 + lVar27 * 2);
            uVar28 = (uint)*(ushort *)(uVar6 + lVar27 * 2);
          }
          else {
            local_4f8 = *(uint *)(uVar6 + 8 + lVar27 * 4);
            uVar31 = *(uint *)(uVar6 + 4 + lVar27 * 4);
            uVar28 = *(uint *)(uVar6 + lVar27 * 4);
          }
          pTVar13 = FStaticMeshVertexBuffer::VertexTangentY(local_4b8,&local_1f8,uVar28);
          fVar41 = (pTVar13->field0_0x0)._s_0.Z;
          fVar36 = (pTVar13->field0_0x0)._s_0.Y;
          fVar40 = (pTVar13->field0_0x0)._s_0.X;
          pTVar13 = FStaticMeshVertexBuffer::VertexTangentY(local_4b8,&local_1ec,uVar31);
          fVar37 = (pTVar13->field0_0x0)._s_0.Z;
          fVar42 = (pTVar13->field0_0x0)._s_0.Y;
          fVar43 = (pTVar13->field0_0x0)._s_0.X;
          pTVar13 = FStaticMeshVertexBuffer::VertexTangentY
                              (local_4b8,(TVector<float> *)local_280,local_4f8);
          fStack_4c4 = fVar34 * (pTVar13->field0_0x0)._s_0.Y + fVar39 * fVar36 + fVar38 * fVar42;
          local_4c8 = fVar34 * (pTVar13->field0_0x0)._s_0.X + fVar39 * fVar40 + fVar38 * fVar43;
          local_4c0 = fVar34 * (pTVar13->field0_0x0)._s_0.Z + fVar39 * fVar41 + fVar38 * fVar37;
          local_168.M[0][2] = (float)((local_268.Ptr)->Transform).M[0][2];
          local_168.M[0][3] = (float)((local_268.Ptr)->Transform).M[0][3];
          local_168.M[0][0] = (float)((local_268.Ptr)->Transform).M[0][0];
          local_168.M[0][1] = (float)((local_268.Ptr)->Transform).M[0][1];
          local_168.M[1][0] = (float)((local_268.Ptr)->Transform).M[1][0];
          local_168.M[1][1] = (float)((local_268.Ptr)->Transform).M[1][1];
          local_168.M[1][2] = (float)((local_268.Ptr)->Transform).M[1][2];
          local_168.M[1][3] = (float)((local_268.Ptr)->Transform).M[1][3];
          local_168.M[2][0] = (float)((local_268.Ptr)->Transform).M[2][0];
          local_168.M[2][1] = (float)((local_268.Ptr)->Transform).M[2][1];
          local_168.M[2][2] = (float)((local_268.Ptr)->Transform).M[2][2];
          local_168.M[2][3] = (float)((local_268.Ptr)->Transform).M[2][3];
          local_168.M[3][0] = (float)((local_268.Ptr)->Transform).M[3][0];
          local_168.M[3][1] = (float)((local_268.Ptr)->Transform).M[3][1];
          local_168.M[3][2] = (float)((local_268.Ptr)->Transform).M[3][2];
          local_168.M[3][3] = (float)((local_268.Ptr)->Transform).M[3][3];
          FNDITransformHandler::TransformUnitVector
                    (local_248,(TVector<float> *)&local_4c8,&local_168);
          if (cVar7 == '\0') {
            local_4f8 = (uint)*(ushort *)(uVar6 + 4 + lVar27 * 2);
            uVar31 = (uint)*(ushort *)(uVar6 + 2 + lVar27 * 2);
            uVar28 = (uint)*(ushort *)(uVar6 + lVar27 * 2);
          }
          else {
            local_4f8 = *(uint *)(uVar6 + 8 + lVar27 * 4);
            uVar31 = *(uint *)(uVar6 + 4 + lVar27 * 4);
            uVar28 = *(uint *)(uVar6 + lVar27 * 4);
          }
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ(local_4b8,&local_188,uVar28);
          this_00 = local_4b8;
          fVar41 = (pTVar12->field0_0x0)._s_0.Z;
          fVar36 = (pTVar12->field0_0x0)._s_0.Y;
          fVar40 = (pTVar12->field0_0x0)._s_0.X;
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ(local_4b8,&local_178,uVar31);
          fVar37 = (pTVar12->field0_0x0)._s_0.X;
          fVar42 = (pTVar12->field0_0x0)._s_0.Y;
          fVar43 = (pTVar12->field0_0x0)._s_0.Z;
          pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ
                              (this_00,(TVector4<float> *)&local_388._s_0,local_4f8);
          local_4d8._0_4_ =
               fVar34 * (pTVar12->field0_0x0)._s_0.X + fVar38 * fVar37 + fVar39 * fVar40;
          local_4d8._4_4_ =
               fVar34 * (pTVar12->field0_0x0)._s_0.Y + fVar38 * fVar42 + fVar39 * fVar36;
          fStack_4d0 = fVar34 * (pTVar12->field0_0x0)._s_0.Z + fVar38 * fVar43 + fVar39 * fVar41;
          fVar38 = (float)((local_268.Ptr)->Transform).M[1][0] * (float)local_4d8._4_4_ +
                   (float)((local_268.Ptr)->Transform).M[0][0] * (float)local_4d8._0_4_ +
                   (float)((local_268.Ptr)->Transform).M[2][0] * fStack_4d0 +
                   (float)((local_268.Ptr)->Transform).M[3][0] * fStack_4cc;
          fVar39 = (float)((local_268.Ptr)->Transform).M[1][1] * (float)local_4d8._4_4_ +
                   (float)((local_268.Ptr)->Transform).M[0][1] * (float)local_4d8._0_4_ +
                   (float)((local_268.Ptr)->Transform).M[2][1] * fStack_4d0 +
                   (float)((local_268.Ptr)->Transform).M[3][1] * fStack_4cc;
          fVar41 = (float)((local_268.Ptr)->Transform).M[1][2] * (float)local_4d8._4_4_ +
                   (float)((local_268.Ptr)->Transform).M[0][2] * (float)local_4d8._0_4_ +
                   (float)((local_268.Ptr)->Transform).M[2][2] * fStack_4d0 +
                   (float)((local_268.Ptr)->Transform).M[3][2] * fStack_4cc;
          pfVar15 = (float *)(local_290 + (longlong)local_3c8);
          fVar34 = (float)local_238._0_4_ /
                   SQRT(fVar39 * fVar39 + fVar38 * fVar38 + fVar41 * fVar41);
          *local_3c8 = local_228;
          *local_3b8 = local_218;
          *local_3b0 = local_208;
          *local_3a8 = fVar33 * fVar35;
          *local_3a0 = local_484;
          *local_398 = local_490._0_4_;
          pfVar16 = (float *)(local_438 + (longlong)local_3f8);
          *local_3f8 = fVar38 * fVar34;
          pfVar17 = (float *)(local_430 + (longlong)local_3f0);
          *local_3f0 = fVar39 * fVar34;
          pfVar18 = (float *)(local_428 + (longlong)local_3e8);
          *local_3e8 = fVar41 * fVar34;
          pfVar19 = (float *)(local_420 + (longlong)local_3e0);
          *local_3e0 = local_4c8;
          pfVar20 = (float *)(local_418 + (longlong)local_3d8);
          *local_3d8 = fStack_4c4;
          fVar33 = __real_3f800000;
          pfVar21 = (float *)(local_450 + (longlong)local_3d0);
          *local_3d0 = (float)local_4c0;
          pfVar22 = (float *)(local_448 + (longlong)local_4a8);
          *local_4a8 = local_4e8;
          pfVar23 = (float *)(local_458 + (longlong)local_4a0);
          *local_4a0 = fStack_4e4;
          pfVar24 = (float *)(local_460 + (longlong)local_498);
          *local_498 = (float)local_4e0;
          local_4b0 = local_4b0 + 1;
          pFVar30 = local_480;
          local_4a8 = pfVar22;
          local_4a0 = pfVar23;
          local_498 = pfVar24;
          local_3f8 = pfVar16;
          local_3f0 = pfVar17;
          local_3e8 = pfVar18;
          local_3e0 = pfVar19;
          local_3d8 = pfVar20;
          local_3d0 = pfVar21;
          local_3c8 = pfVar15;
          local_3b8 = (float *)(local_298 + (longlong)local_3b8);
          local_3b0 = (float *)(local_2a8 + (longlong)local_3b0);
          local_3a8 = (float *)(local_2a0 + (longlong)local_3a8);
          local_3a0 = (float *)(local_270 + (longlong)local_3a0);
          local_398 = (float *)((longlong)local_440 + (longlong)local_398);
        } while (local_4b0 < pFVar5->NumInstances);
      }
      goto LAB_148f6f27e;
    }
  }
  _local_4e8 = 0x3f800000;
  local_4e0 = 0.0;
  local_4c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar33 = (float)((local_268.Ptr)->TransformInverseTransposed).M[0][2];
  fStack_11c = (float)((local_268.Ptr)->TransformInverseTransposed).M[0][3];
  _local_4c8 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                        UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  fVar46 = (float)((local_268.Ptr)->TransformInverseTransposed).M[0][0];
  fVar47 = (float)((local_268.Ptr)->TransformInverseTransposed).M[0][1];
  fStack_4d0 = (float)((local_268.Ptr)->Transform).M[1][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_268.Ptr)->Transform).M[0][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
               (float)((local_268.Ptr)->Transform).M[2][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_268.Ptr)->Transform).M[3][2] * 1.0;
  fStack_4cc = (float)((local_268.Ptr)->Transform).M[1][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_268.Ptr)->Transform).M[0][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
               (float)((local_268.Ptr)->Transform).M[2][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_268.Ptr)->Transform).M[3][3] * 1.0;
  fVar34 = (float)((local_268.Ptr)->TransformInverseTransposed).M[1][2];
  fStack_10c = (float)((local_268.Ptr)->TransformInverseTransposed).M[1][3];
  fVar41 = (float)((local_268.Ptr)->TransformInverseTransposed).M[1][0];
  fVar40 = (float)((local_268.Ptr)->TransformInverseTransposed).M[1][1];
  fVar38 = (float)((local_268.Ptr)->TransformInverseTransposed).M[2][2];
  fStack_fc = (float)((local_268.Ptr)->TransformInverseTransposed).M[2][3];
  fVar42 = (float)((local_268.Ptr)->TransformInverseTransposed).M[2][0];
  fVar43 = (float)((local_268.Ptr)->TransformInverseTransposed).M[2][1];
  fVar44 = (float)((local_268.Ptr)->TransformInverseTransposed).M[3][0];
  fVar45 = (float)((local_268.Ptr)->TransformInverseTransposed).M[3][1];
  fVar39 = (float)((local_268.Ptr)->TransformInverseTransposed).M[3][2];
  fStack_ec = (float)((local_268.Ptr)->TransformInverseTransposed).M[3][3];
  local_4d8._4_4_ =
       (float)((local_268.Ptr)->Transform).M[1][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_268.Ptr)->Transform).M[0][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
       (float)((local_268.Ptr)->Transform).M[2][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_268.Ptr)->Transform).M[3][1] * 1.0;
  local_4d8._0_4_ =
       (float)((local_268.Ptr)->Transform).M[1][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_268.Ptr)->Transform).M[0][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
       (float)((local_268.Ptr)->Transform).M[2][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_268.Ptr)->Transform).M[3][0] * 1.0;
  local_128._0_4_ = fVar46;
  local_128._4_4_ = fVar47;
  fStack_120 = fVar33;
  local_118 = fVar41;
  fStack_114 = fVar40;
  fStack_110 = fVar34;
  local_108 = fVar42;
  fStack_104 = fVar43;
  fStack_100 = fVar38;
  local_f8 = fVar44;
  fStack_f4 = fVar45;
  fStack_f0 = fVar39;
  FNDITransformHandler::TransformUnitVector
            (local_248,(TVector<float> *)&local_4e8,(TMatrix<float> *)local_128);
  fVar35 = _UNK_150689504 * fVar41 + ___xmm_00000000000000003f80000000000000 * fVar46 +
           _UNK_150689508 * fVar42 + _UNK_15068950c * fVar44;
  fVar36 = _UNK_150689504 * fVar40 + ___xmm_00000000000000003f80000000000000 * fVar47 +
           _UNK_150689508 * fVar43 + _UNK_15068950c * fVar45;
  fVar37 = _UNK_150689504 * fVar34 + ___xmm_00000000000000003f80000000000000 * fVar33 +
           _UNK_150689508 * fVar38 + _UNK_15068950c * fVar39;
  fVar48 = __real_3f800000 / SQRT(fVar36 * fVar36 + fVar35 * fVar35 + fVar37 * fVar37);
  fVar41 = _UNK_150689534 * fVar41 + ___xmm_000000003f8000000000000000000000 * fVar46 +
           _UNK_150689538 * fVar42 + _UNK_15068953c * fVar44;
  fVar40 = _UNK_150689534 * fVar40 + ___xmm_000000003f8000000000000000000000 * fVar47 +
           _UNK_150689538 * fVar43 + _UNK_15068953c * fVar45;
  fVar33 = _UNK_150689534 * fVar34 + ___xmm_000000003f8000000000000000000000 * fVar33 +
           _UNK_150689538 * fVar38 + _UNK_15068953c * fVar39;
  fVar34 = __real_3f800000 / SQRT(fVar40 * fVar40 + fVar41 * fVar41 + fVar33 * fVar33);
  if (0 < param_1->NumInstances) {
    local_400 = (longlong)(int)local_388._s_0.Z * 4;
    local_470 = (longlong)local_370 * 4;
    local_408 = (longlong)local_360 * 4;
    local_410 = (float *)((longlong)local_338.X.AdvanceOffset * 4);
    local_478 = (float *)((longlong)local_338.Y.AdvanceOffset * 4);
    local_468 = (float *)((longlong)local_338.Z.AdvanceOffset * 4);
    local_460 = (longlong)local_308.X.AdvanceOffset * 4;
    local_458 = (longlong)local_308.Y.AdvanceOffset * 4;
    local_448 = (longlong)local_308.Z.AdvanceOffset * 4;
    local_450 = (longlong)local_2d8.X.AdvanceOffset * 4;
    local_418 = (longlong)local_2d8.Y.AdvanceOffset * 4;
    local_420 = (longlong)local_2d8.Z.AdvanceOffset * 4;
    local_428 = (longlong)(int)local_168.M[0][2] * 4;
    local_430 = (longlong)(int)local_168.M[1][2] * 4;
    local_438 = (longlong)(int)local_168.M[2][2] * 4;
    puVar26 = (undefined4 *)CONCAT44(uStack_374,local_378);
    local_4a8 = (float *)CONCAT44(local_168.M[2][1],local_168.M[2][0]);
    local_4a0 = (float *)CONCAT44(local_168.M[1][1],local_168.M[1][0]);
    local_498 = (float *)CONCAT44(local_168.M[0][1],local_168.M[0][0]);
    do {
      iVar32 = iVar32 + 1;
      local_440 = (float *)(local_388._0_8_ + (longlong)(int)local_388._s_0.Z * 4);
      *(undefined4 *)local_388._0_8_ = local_4d8._0_4_;
      *puVar26 = local_4d8._4_4_;
      *local_368 = fStack_4d0;
      *local_338.X.Register = local_4c8;
      *local_338.Y.Register = fStack_4c4;
      *local_338.Z.Register = (float)local_4c0;
      *local_308.X.Register = fVar34 * fVar41;
      *local_308.Y.Register = fVar34 * fVar40;
      *local_308.Z.Register = fVar34 * fVar33;
      *local_2d8.X.Register = fVar48 * fVar35;
      *local_2d8.Y.Register = fVar48 * fVar36;
      *local_2d8.Z.Register = fVar48 * fVar37;
      pfVar15 = local_498 + (int)local_168.M[0][2];
      *local_498 = local_4e8;
      pfVar16 = local_4a0 + (int)local_168.M[1][2];
      *local_4a0 = fStack_4e4;
      pfVar17 = local_4a8 + (int)local_168.M[2][2];
      *local_4a8 = (float)local_4e0;
      local_368 = local_368 + local_360;
      puVar26 = puVar26 + local_370;
      local_308.Z.Register = local_308.Z.Register + local_308.Z.AdvanceOffset;
      local_308.X.Register = local_308.X.Register + local_308.X.AdvanceOffset;
      local_308.Y.Register = local_308.Y.Register + local_308.Y.AdvanceOffset;
      local_388._0_8_ = local_440;
      local_338.Z.Register = (float *)((longlong)local_468 + (longlong)local_338.Z.Register);
      local_338.Y.Register = (float *)((longlong)local_478 + (longlong)local_338.Y.Register);
      local_338.X.Register = (float *)((longlong)local_410 + (longlong)local_338.X.Register);
      local_2d8.Y.Register = local_2d8.Y.Register + local_2d8.Y.AdvanceOffset;
      pFVar30 = local_480;
      local_2d8.X.Register = local_2d8.X.Register + local_2d8.X.AdvanceOffset;
      local_2d8.Z.Register = local_2d8.Z.Register + local_2d8.Z.AdvanceOffset;
      local_4a8 = pfVar17;
      local_4a0 = pfVar16;
      local_498 = pfVar15;
    } while (iVar32 < local_490->NumInstances);
  }
LAB_148f6f27e:
  if (pFVar30 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar30->_padding_;
    LOCK();
    lVar27 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar27 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar30->_padding_)(pFVar30,1);
    }
  }
  return;
}

// VMGetTriangle<FNDITransformHandlerNoop> @ 148f6f340

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangle<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  FStaticMeshVertexBuffers *this_00;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  FStaticMeshVertexDataInterface *pFVar42;
  uchar *puVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  bool bVar46;
  char cVar47;
  float fVar48;
  FStaticMeshLODResources *pFVar49;
  float *pfVar50;
  FIndexArrayView *pFVar51;
  ulonglong uVar52;
  TVector4<float> *pTVar53;
  TVector<float> *pTVar54;
  int iVar55;
  float *pfVar56;
  ulonglong uVar57;
  float *pfVar58;
  float *pfVar59;
  float *pfVar60;
  float *pfVar61;
  float *pfVar62;
  float *pfVar63;
  float *pfVar64;
  float *pfVar65;
  float *pfVar66;
  float *pfVar67;
  float *pfVar68;
  float fVar69;
  longlong lVar70;
  longlong lVar71;
  uint uVar72;
  float *pfVar73;
  ulonglong uVar74;
  float *pfVar75;
  float fVar76;
  uint uVar77;
  uint uVar78;
  int local_430;
  float local_428;
  float fStack_424;
  float *local_418;
  float *local_410;
  float *local_408;
  FStaticMeshLODResources *local_3c8;
  undefined1 local_338 [12];
  bool bStack_32c;
  uint3 uStack_32b;
  TVector4<float>_u_0 local_328;
  FStaticMeshLODResources *local_318;
  int local_310 [2];
  float *local_308;
  int local_300;
  float *local_2f8;
  float *local_2f0;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  float *local_2d0;
  float *local_2c8;
  float *local_2c0;
  float *local_2b8;
  float *local_2b0;
  float *local_2a8;
  FStaticMeshLODResources *local_2a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_298;
  FNDIOutputParam<UE::Math::TVector<float>_> local_268;
  FNDIOutputParam<UE::Math::TVector<float>_> local_238;
  FNDIOutputParam<UE::Math::TVector<float>_> local_208;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  FNDIInputParam<UE::Math::TVector<float>_> local_1a8;
  TVector<float> local_158;
  TVector<float> local_14c;
  FIndexArrayView local_140;
  FIndexArrayView local_130;
  TVector4<float> local_118;
  TVector4<float> local_108;
  TVector4<float> local_f8;
  TVector4<float> local_e8;
  TVector4<float> local_d8 [11];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_328._s_0,
             param_1);
  local_318 = (FStaticMeshLODResources *)0x0;
  pFVar49 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      ((FInstanceData_GameThread *)CONCAT44(local_328._s_0.W,local_328._s_0.Z),
                       (FColorVertexBuffer **)local_310);
  local_3c8 = local_318;
  if (local_318 != pFVar49) {
    if (pFVar49 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar49->_padding_ = (int)pFVar49->_padding_ + 1;
      UNLOCK();
    }
    local_3c8 = pFVar49;
    if (local_318 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_318->_padding_;
      LOCK();
      lVar70 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar70 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_318->_padding_)(local_318,1);
      }
    }
  }
  local_318 = (FStaticMeshLODResources *)((ulonglong)local_318 & 0xffffffff00000000);
  pfVar50 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_318);
  lVar70 = (longlong)(int)local_318;
  iVar55 = (int)local_318 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1a8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_328._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_298,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_268,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_208,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_238,param_1);
  if (local_3c8 == (FStaticMeshLODResources *)0x0) {
    local_338._0_8_ = (void *)0x0;
    stack0xfffffffffffffcd0 = (ulonglong)uStack_32b << 0x28;
    pFVar51 = (FIndexArrayView *)local_338;
  }
  else {
    pFVar51 = FRawStaticIndexBuffer::GetArrayView(&local_3c8->IndexBuffer,&local_140);
  }
  local_338._0_8_ = pFVar51->UntypedIndexData;
  local_338._8_4_ = pFVar51->NumIndices;
  bStack_32c = pFVar51->b32Bit;
  uStack_32b = *(uint3 *)&pFVar51->field_0xd;
  if (local_3c8 != (FStaticMeshLODResources *)0x0) {
    pFVar51 = FRawStaticIndexBuffer::GetArrayView(&local_3c8->IndexBuffer,&local_130);
    fVar76 = (float)(pFVar51->NumIndices / 3 + -1);
    if (((((-1 < (int)fVar76) && (local_3c8 != (FStaticMeshLODResources *)0x0)) &&
         ((local_3c8->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
        ((bVar46 = FPositionVertexBuffer::GetAllowCPUAccess
                             (&(local_3c8->VertexBuffers).PositionVertexBuffer), bVar46 &&
         (0 < (int)(local_3c8->VertexBuffers).PositionVertexBuffer.NumVertices)))) &&
       ((local_3c8->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) {
      this_00 = &local_3c8->VertexBuffers;
      pFVar42 = (local_3c8->VertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if (((pFVar42 != (FStaticMeshVertexDataInterface *)0x0) &&
          ((local_3c8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
           (FStaticMeshVertexDataInterface *)0x0)) &&
         ((cVar47 = (**(code **)((longlong)*pFVar42 + 0x58))(), cVar47 != '\0' &&
          ((cVar47 = (**(code **)((longlong)
                                  *(local_3c8->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                                 0x58))(), uVar45 = local_338._0_8_, cVar47 != '\0' &&
           (0 < (int)(local_3c8->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))))) {
        local_430 = 0;
        if (0 < param_1->NumInstances) {
          local_1c8 = (longlong)local_1a8.X.AdvanceOffset << 2;
          local_1d0 = (longlong)(int)local_328._s_0.Z << 2;
          local_1d8 = (longlong)local_310[0] << 2;
          bVar46 = bStack_32c;
          local_1b8 = (longlong)local_300 << 2;
          local_1b0 = (longlong)local_298.X.AdvanceOffset << 2;
          local_1c0 = (longlong)local_298.Y.AdvanceOffset << 2;
          local_2f8 = local_308;
          local_2a0 = local_318;
          local_2a8 = (float *)local_328._0_8_;
          local_2e0 = local_298.Z.Register;
          local_2e8 = local_298.Y.Register;
          local_2f0 = local_298.X.Register;
          local_2c8 = local_268.Z.Register;
          local_2d0 = local_268.Y.Register;
          local_2d8 = local_268.X.Register;
          local_2b0 = local_208.Z.Register;
          local_2b8 = local_208.Y.Register;
          local_2c0 = local_208.X.Register;
          local_408 = local_238.Z.Register;
          local_410 = local_238.Y.Register;
          local_418 = local_238.X.Register;
          pfVar73 = local_1a8.Z.InputPtr;
          pfVar75 = local_1a8.Y.InputPtr;
          pfVar56 = local_1a8.X.InputPtr;
          pfVar50 = pfVar50 + iVar55;
          do {
            fVar4 = *pfVar73;
            fVar5 = *pfVar75;
            fVar69 = fVar76;
            if ((int)*pfVar50 < (int)fVar76) {
              fVar69 = *pfVar50;
            }
            fVar6 = *pfVar56;
            pfVar73 = pfVar73 + local_1a8.Z.AdvanceOffset;
            pfVar75 = pfVar75 + local_1a8.Y.AdvanceOffset;
            pfVar56 = (float *)(local_1c8 + (longlong)pfVar56);
            fVar48 = 0.0;
            if (0 < (int)fVar69) {
              fVar48 = fVar69;
            }
            lVar71 = (longlong)((int)fVar48 * 3);
            lVar2 = lVar71 * 2 + 4;
            lVar3 = lVar71 * 4 + 8;
            if (bVar46 == false) {
              uVar78 = (uint)*(ushort *)(uVar45 + lVar2);
              uVar77 = (uint)*(ushort *)(uVar45 + 2 + lVar71 * 2);
              uVar72 = (uint)*(ushort *)(uVar45 + lVar71 * 2);
            }
            else {
              uVar78 = *(uint *)(uVar45 + lVar3);
              uVar77 = *(uint *)(uVar45 + 4 + lVar71 * 4);
              uVar72 = *(uint *)(uVar45 + lVar71 * 4);
            }
            puVar43 = (local_3c8->VertexBuffers).PositionVertexBuffer.Data;
            uVar41 = (local_3c8->VertexBuffers).PositionVertexBuffer.Stride;
            uVar74 = (ulonglong)(uVar41 * uVar72);
            uVar52 = (ulonglong)(uVar41 * uVar77);
            uVar57 = (ulonglong)(uVar41 * uVar78);
            fVar69 = *(float *)(puVar43 + uVar74);
            fVar48 = *(float *)(puVar43 + uVar52);
            fVar7 = *(float *)(puVar43 + uVar57);
            fVar8 = *(float *)(puVar43 + uVar52 + 4);
            fVar9 = *(float *)(puVar43 + uVar57 + 4);
            fVar10 = *(float *)(puVar43 + uVar74 + 4);
            fVar11 = *(float *)(puVar43 + uVar52 + 8);
            fVar12 = *(float *)(puVar43 + uVar57 + 8);
            fVar13 = *(float *)(puVar43 + uVar74 + 8);
            if (bVar46 == false) {
              uVar78 = (uint)*(ushort *)(uVar45 + lVar2);
              uVar77 = (uint)*(ushort *)(uVar45 + 2 + lVar71 * 2);
              uVar72 = (uint)*(ushort *)(uVar45 + lVar71 * 2);
            }
            else {
              uVar78 = *(uint *)(uVar45 + lVar3);
              uVar77 = *(uint *)(uVar45 + 4 + lVar71 * 4);
              uVar72 = *(uint *)(uVar45 + lVar71 * 4);
            }
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,&local_118,uVar72);
            fVar14 = (pTVar53->field0_0x0)._s_0.Z;
            fVar15 = (pTVar53->field0_0x0)._s_0.Y;
            fVar16 = (pTVar53->field0_0x0)._s_0.X;
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,&local_108,uVar77);
            fVar17 = (pTVar53->field0_0x0)._s_0.X;
            fVar18 = (pTVar53->field0_0x0)._s_0.Y;
            fVar19 = (pTVar53->field0_0x0)._s_0.Z;
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,local_d8,uVar78);
            fVar20 = (pTVar53->field0_0x0)._s_0.X;
            fVar21 = (pTVar53->field0_0x0)._s_0.Y;
            fVar22 = (pTVar53->field0_0x0)._s_0.Z;
            if (bVar46 == false) {
              uVar78 = (uint)*(ushort *)(uVar45 + lVar2);
              uVar77 = (uint)*(ushort *)(uVar45 + 2 + lVar71 * 2);
              uVar72 = (uint)*(ushort *)(uVar45 + lVar71 * 2);
            }
            else {
              uVar78 = *(uint *)(uVar45 + lVar3);
              uVar77 = *(uint *)(uVar45 + 4 + lVar71 * 4);
              uVar72 = *(uint *)(uVar45 + lVar71 * 4);
            }
            pTVar54 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,&local_158,uVar72);
            fVar23 = (pTVar54->field0_0x0)._s_0.Z;
            fVar24 = (pTVar54->field0_0x0)._s_0.Y;
            fVar25 = (pTVar54->field0_0x0)._s_0.X;
            pTVar54 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,&local_14c,uVar77);
            fVar26 = (pTVar54->field0_0x0)._s_0.Z;
            fVar27 = (pTVar54->field0_0x0)._s_0.Y;
            fVar28 = (pTVar54->field0_0x0)._s_0.X;
            pTVar54 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,(TVector<float> *)local_338,uVar78
                                );
            fVar29 = (pTVar54->field0_0x0)._s_0.Z;
            fVar30 = (pTVar54->field0_0x0)._s_0.Y;
            fVar31 = (pTVar54->field0_0x0)._s_0.X;
            if (bVar46 == false) {
              uVar78 = (uint)*(ushort *)(uVar45 + lVar2);
              uVar77 = (uint)*(ushort *)(uVar45 + 2 + lVar71 * 2);
              uVar72 = (uint)*(ushort *)(uVar45 + lVar71 * 2);
            }
            else {
              uVar78 = *(uint *)(uVar45 + lVar3);
              uVar77 = *(uint *)(uVar45 + 4 + lVar71 * 4);
              uVar72 = *(uint *)(uVar45 + lVar71 * 4);
            }
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,&local_f8,uVar72);
            fVar32 = (pTVar53->field0_0x0)._s_0.Z;
            fVar33 = (pTVar53->field0_0x0)._s_0.Y;
            fVar34 = (pTVar53->field0_0x0)._s_0.X;
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,&local_e8,uVar77);
            fVar35 = (pTVar53->field0_0x0)._s_0.X;
            fVar36 = (pTVar53->field0_0x0)._s_0.Y;
            fVar37 = (pTVar53->field0_0x0)._s_0.Z;
            pTVar53 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,(TVector4<float> *)&local_328._s_0
                                 ,uVar78);
            fVar38 = (pTVar53->field0_0x0)._s_0.Z;
            fVar39 = (pTVar53->field0_0x0)._s_0.Y;
            fVar40 = (pTVar53->field0_0x0)._s_0.X;
            pfVar58 = (float *)(local_1d0 + (longlong)local_2a8);
            *local_2a8 = fVar5 * fVar48 + fVar6 * fVar69 + fVar4 * fVar7;
            pFVar49 = (FStaticMeshLODResources *)((longlong)&local_2a0->_padding_ + local_1d8);
            *(float *)&local_2a0->_padding_ = fVar6 * fVar10 + fVar5 * fVar8 + fVar4 * fVar9;
            pfVar59 = (float *)(local_1b8 + (longlong)local_2f8);
            *local_2f8 = fVar6 * fVar13 + fVar5 * fVar11 + fVar4 * fVar12;
            pfVar60 = (float *)(local_1b0 + (longlong)local_2f0);
            *local_2f0 = 0.0;
            pfVar61 = (float *)(local_1c0 + (longlong)local_2e8);
            *local_2e8 = 0.0;
            pfVar62 = local_2e0 + local_298.Z.AdvanceOffset;
            *local_2e0 = 0.0;
            pfVar63 = local_2d8 + local_268.X.AdvanceOffset;
            *local_2d8 = fVar4 * fVar40 + fVar5 * fVar35 + fVar6 * fVar34;
            pfVar64 = local_2d0 + local_268.Y.AdvanceOffset;
            *local_2d0 = fVar4 * fVar39 + fVar5 * fVar36 + fVar6 * fVar33;
            pfVar65 = local_2c8 + local_268.Z.AdvanceOffset;
            *local_2c8 = fVar4 * fVar38 + fVar5 * fVar37 + fVar6 * fVar32;
            pfVar66 = local_2c0 + local_208.X.AdvanceOffset;
            *local_2c0 = fVar5 * fVar28 + fVar6 * fVar25 + fVar4 * fVar31;
            pfVar67 = local_2b8 + local_208.Y.AdvanceOffset;
            *local_2b8 = fVar5 * fVar27 + fVar6 * fVar24 + fVar4 * fVar30;
            pfVar68 = local_2b0 + local_208.Z.AdvanceOffset;
            *local_2b0 = fVar5 * fVar26 + fVar6 * fVar23 + fVar4 * fVar29;
            *local_418 = fVar4 * fVar20 + fVar5 * fVar17 + fVar6 * fVar16;
            *local_410 = fVar4 * fVar21 + fVar5 * fVar18 + fVar6 * fVar15;
            *local_408 = fVar4 * fVar22 + fVar5 * fVar19 + fVar6 * fVar14;
            local_430 = local_430 + 1;
            pfVar50 = pfVar50 + lVar70;
            local_418 = local_418 + local_238.X.AdvanceOffset;
            local_410 = local_410 + local_238.Y.AdvanceOffset;
            local_408 = local_408 + local_238.Z.AdvanceOffset;
            local_2f8 = pfVar59;
            local_2f0 = pfVar60;
            local_2e8 = pfVar61;
            local_2e0 = pfVar62;
            local_2d8 = pfVar63;
            local_2d0 = pfVar64;
            local_2c8 = pfVar65;
            local_2c0 = pfVar66;
            local_2b8 = pfVar67;
            local_2b0 = pfVar68;
            local_2a8 = pfVar58;
            local_2a0 = pFVar49;
          } while (local_430 < param_1->NumInstances);
        }
        goto LAB_148f7008c;
      }
    }
  }
  uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  iVar55 = 0;
  if (0 < param_1->NumInstances) {
    fStack_424 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_428 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_418 = local_238.Z.Register;
    local_410 = local_238.Y.Register;
    local_408 = local_238.X.Register;
    pFVar49 = local_318;
    do {
      iVar55 = iVar55 + 1;
      *(float *)local_328._0_8_ = local_428;
      *(float *)&pFVar49->_padding_ = fStack_424;
      *local_308 = (float)uVar44;
      *local_298.X.Register = local_428;
      *local_298.Y.Register = fStack_424;
      *local_298.Z.Register = (float)uVar44;
      *local_268.X.Register = 0.0;
      *local_268.Y.Register = 0.0;
      *local_268.Z.Register = 1.0;
      *local_208.X.Register = 0.0;
      *local_208.Y.Register = 1.0;
      *local_208.Z.Register = 0.0;
      *local_408 = 1.0;
      *local_410 = 0.0;
      *local_418 = 0.0;
      local_308 = local_308 + local_300;
      local_298.X.Register = local_298.X.Register + local_298.X.AdvanceOffset;
      local_268.Y.Register = local_268.Y.Register + local_268.Y.AdvanceOffset;
      local_268.Z.Register = local_268.Z.Register + local_268.Z.AdvanceOffset;
      pFVar49 = (FStaticMeshLODResources *)
                ((longlong)&pFVar49->_padding_ + (longlong)local_310[0] * 4);
      local_328._0_8_ = (float *)(local_328._0_8_ + (longlong)(int)local_328._s_0.Z * 4);
      local_298.Z.Register = local_298.Z.Register + local_298.Z.AdvanceOffset;
      local_298.Y.Register = local_298.Y.Register + local_298.Y.AdvanceOffset;
      local_208.X.Register = local_208.X.Register + local_208.X.AdvanceOffset;
      local_208.Y.Register = local_208.Y.Register + local_208.Y.AdvanceOffset;
      local_268.X.Register = local_268.X.Register + local_268.X.AdvanceOffset;
      local_208.Z.Register = local_208.Z.Register + local_208.Z.AdvanceOffset;
      local_418 = local_418 + local_238.Z.AdvanceOffset;
      local_410 = local_410 + local_238.Y.AdvanceOffset;
      local_408 = local_408 + local_238.X.AdvanceOffset;
    } while (iVar55 < param_1->NumInstances);
  }
LAB_148f7008c:
  if (local_3c8 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_3c8->_padding_;
    LOCK();
    lVar70 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar70 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_3c8->_padding_)(local_3c8,1);
    }
  }
  return;
}

// VMGetTriangleInterpolated<FNDITransformHandler> @ 148f700f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleInterpolated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  FStaticMeshVertexBuffer *this_00;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  FStaticMeshLODResources *pFVar6;
  FIndexArrayView *pFVar7;
  ulonglong uVar8;
  TVector4<float> *pTVar9;
  TVector<float> *pTVar10;
  ulonglong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  FStaticMeshLODResources *pFVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_578 [32];
  uint local_558;
  uint local_554;
  float local_550;
  float local_548;
  float fStack_544;
  undefined4 local_540;
  undefined1 local_538 [8];
  float fStack_530;
  float fStack_52c;
  float local_528;
  float local_520;
  float fStack_51c;
  undefined4 local_518;
  float local_510;
  int local_50c;
  float *local_508;
  float *local_500;
  float *local_4f8;
  TVector<float>_u_0 local_4f0;
  TVector<float>_u_0 local_4e0;
  TVector<float>_u_0 local_4d0;
  TVector<float>_u_0 local_4c0;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  FStaticMeshVertexBuffer *local_4a0;
  FStaticMeshLODResources *local_498;
  longlong local_490;
  longlong local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  float *local_458;
  float *local_450;
  float *local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  float *local_428;
  FVectorVMExternalFunctionContext *local_420;
  longlong local_418;
  longlong local_410;
  TVector4<float>_u_0 local_408;
  int local_3f8;
  undefined4 uStack_3f4;
  int local_3f0;
  float *local_3e8;
  int local_3e0;
  float *local_3d8;
  float *local_3d0;
  float *local_3c8;
  float *local_3c0;
  float *local_3b8;
  float *local_3b0;
  float *local_3a8;
  float *local_3a0;
  float *local_398;
  float *local_390;
  float *local_388;
  float *local_380;
  float *local_378;
  float *local_370;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_368;
  FStaticMeshLODResources *local_358;
  FColorVertexBuffer *local_350;
  FNDITransformHandler local_348 [16];
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  FNDIOutputParam<UE::Math::TVector<float>_> local_328;
  FNDIOutputParam<UE::Math::TVector<float>_> local_2f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_2c8;
  longlong local_298;
  undefined1 local_290 [12];
  char cStack_284;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
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
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  TVector<float> local_1f8;
  TVector<float> local_1ec;
  FIndexArrayView local_1e0;
  FIndexArrayView local_1d0;
  TVector4<float> local_1b8;
  TVector4<float> local_1a8;
  TVector4<float> local_198;
  TVector4<float> local_188;
  TVector4<float> local_178;
  TMatrix<float> local_168;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_578;
  local_420 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_368,param_1);
  iVar30 = 0;
  local_358 = (FStaticMeshLODResources *)0x0;
  pFVar6 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_368.Ptr,&local_350);
  local_498 = local_358;
  pFVar29 = local_358;
  if (local_358 != pFVar6) {
    if (pFVar6 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
      UNLOCK();
    }
    pFVar29 = pFVar6;
    local_498 = pFVar6;
    if (local_358 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_358->_padding_;
      LOCK();
      lVar24 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar24 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_358->_padding_)(local_358,1);
      }
    }
  }
  local_3f8 = 0;
  local_3d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_3f8);
  lVar24 = (longlong)local_3f8;
  local_3d8 = local_3d8 + local_3f8 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_128,param_1);
  local_3f8 = 0;
  local_3d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_3f8);
  lVar25 = (longlong)local_3f8;
  local_3d0 = local_3d0 + local_3f8 * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_408._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_328,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_2f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_2c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_168,param_1);
  if (pFVar29 == (FStaticMeshLODResources *)0x0) {
    local_538 = (undefined1  [8])0x0;
    pFVar7 = (FIndexArrayView *)local_538;
    fStack_530 = 0.0;
    fStack_52c = (float)((uint)fStack_52c & 0xffffff00);
  }
  else {
    pFVar7 = FRawStaticIndexBuffer::GetArrayView(&pFVar29->IndexBuffer,&local_1e0);
  }
  local_290._0_8_ = pFVar7->UntypedIndexData;
  local_290._8_4_ = pFVar7->NumIndices;
  cStack_284 = pFVar7->b32Bit;
  unique0x100026fc = *(undefined3 *)&pFVar7->field_0xd;
  if (pFVar29 != (FStaticMeshLODResources *)0x0) {
    pFVar7 = FRawStaticIndexBuffer::GetArrayView(&pFVar29->IndexBuffer,&local_1d0);
    iVar2 = pFVar7->NumIndices;
    local_4b0 = (float)((int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >>
                             0x1f) + -1 + iVar2 / 3 + (iVar2 >> 0x1f));
    if (((((-1 < (int)local_4b0) && (pFVar29 != (FStaticMeshLODResources *)0x0)) &&
         ((pFVar29->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
        ((bVar5 = FPositionVertexBuffer::GetAllowCPUAccess
                            (&(pFVar29->VertexBuffers).PositionVertexBuffer), bVar5 &&
         (0 < (int)(pFVar29->VertexBuffers).PositionVertexBuffer.NumVertices)))) &&
       ((local_4a0 = &(pFVar29->VertexBuffers).StaticMeshVertexBuffer,
        (pFVar29->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0 &&
        ((bVar5 = FStaticMeshVertexBuffer::GetAllowCPUAccess(local_4a0), uVar3 = local_290._0_8_,
         this_00 = local_4a0, bVar5 &&
         (0 < (int)(pFVar29->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))))) {
      local_50c = 0;
      if (0 < param_1->NumInstances) {
        local_280 = (longlong)(int)local_118 << 2;
        local_298 = lVar25 << 2;
        local_278 = (longlong)(int)local_408._s_0.Z << 2;
        local_260 = (longlong)local_3f0 << 2;
        local_268 = (longlong)local_3e0 << 2;
        cVar4 = cStack_284;
        local_458 = (float *)CONCAT44(fStack_f4,local_f8);
        local_450 = (float *)CONCAT44(fStack_10c,fStack_110);
        local_448 = (float *)CONCAT44(local_128._4_4_,local_128._0_4_);
        local_270 = (longlong)local_328.X.AdvanceOffset << 2;
        local_428 = (float *)((longlong)local_328.Y.AdvanceOffset << 2);
        local_420 = (FVectorVMExternalFunctionContext *)((longlong)local_328.Z.AdvanceOffset << 2);
        local_418 = (longlong)local_2f8.X.AdvanceOffset << 2;
        local_410 = (longlong)local_2f8.Y.AdvanceOffset << 2;
        local_490 = (longlong)local_2f8.Z.AdvanceOffset << 2;
        local_488 = (longlong)local_2c8.X.AdvanceOffset << 2;
        local_430 = (longlong)local_2c8.Y.AdvanceOffset << 2;
        local_478 = (longlong)local_2c8.Z.AdvanceOffset << 2;
        local_470 = (longlong)(int)local_168.M[0][2] << 2;
        local_468 = (longlong)(int)local_168.M[1][2] << 2;
        local_440 = lVar24 << 2;
        local_438 = (longlong)local_e8 << 2;
        local_480 = (longlong)(int)fStack_100 << 2;
        local_460 = (longlong)(int)local_168.M[2][2] << 2;
        local_3b8 = local_3e8;
        local_3c8 = (float *)local_408._0_8_;
        local_3a0 = local_328.Z.Register;
        local_3a8 = local_328.Y.Register;
        fStack_32c = 1.0;
        fStack_52c = 1.0;
        local_3b0 = local_328.X.Register;
        local_388 = local_2f8.Z.Register;
        local_390 = local_2f8.Y.Register;
        local_398 = local_2f8.X.Register;
        local_370 = local_2c8.Z.Register;
        local_378 = local_2c8.Y.Register;
        local_380 = local_2c8.X.Register;
        local_508 = (float *)CONCAT44(local_168.M[0][1],local_168.M[0][0]);
        local_500 = (float *)CONCAT44(local_168.M[1][1],local_168.M[1][0]);
        local_4f8 = (float *)CONCAT44(local_168.M[2][1],local_168.M[2][0]);
        local_3c0 = (float *)CONCAT44(uStack_3f4,local_3f8);
        do {
          fVar43 = 0.0;
          fVar40 = *local_458;
          fVar41 = *local_450;
          fVar44 = *local_448;
          fVar45 = local_4b0;
          if ((int)*local_3d8 < (int)local_4b0) {
            fVar45 = *local_3d8;
          }
          local_458 = (float *)(local_438 + (longlong)local_458);
          local_450 = (float *)(local_480 + (longlong)local_450);
          local_528 = *local_3d0;
          local_448 = (float *)(local_280 + (longlong)local_448);
          local_3d0 = (float *)(local_298 + (longlong)local_3d0);
          fVar46 = 0.0;
          if (0 < (int)fVar45) {
            fVar46 = fVar45;
          }
          lVar24 = (longlong)((int)fVar46 * 3);
          if (cVar4 == '\0') {
            uVar26 = (uint)*(ushort *)(uVar3 + 4 + lVar24 * 2);
            uVar28 = (uint)*(ushort *)(uVar3 + 2 + lVar24 * 2);
            uVar22 = (uint)*(ushort *)(uVar3 + lVar24 * 2);
          }
          else {
            uVar26 = *(uint *)(uVar3 + 8 + lVar24 * 4);
            uVar28 = *(uint *)(uVar3 + 4 + lVar24 * 4);
            uVar22 = *(uint *)(uVar3 + lVar24 * 4);
          }
          lVar25 = *(longlong *)&this_00[1].TangentsVertexBuffer.field_0x18;
          iVar30 = *(int *)&this_00[1].TangentsVertexBuffer.field_0x20;
          uVar27 = (ulonglong)(iVar30 * uVar22);
          uVar8 = (ulonglong)(iVar30 * uVar28);
          uVar11 = (ulonglong)(iVar30 * uVar26);
          local_338 = fVar44 * *(float *)(uVar27 + lVar25) + fVar41 * *(float *)(uVar8 + lVar25) +
                      fVar40 * *(float *)(uVar11 + lVar25);
          fStack_334 = fVar44 * *(float *)(uVar27 + 4 + lVar25) +
                       fVar41 * *(float *)(uVar8 + 4 + lVar25) +
                       fVar40 * *(float *)(uVar11 + 4 + lVar25);
          fStack_530 = fVar44 * *(float *)(uVar27 + 8 + lVar25) +
                       fVar41 * *(float *)(uVar8 + 8 + lVar25) +
                       fVar40 * *(float *)(uVar11 + 8 + lVar25);
          fStack_224 = (float)((local_368.Ptr)->Transform).M[1][1] * fStack_334 +
                       (float)((local_368.Ptr)->Transform).M[0][1] * local_338 +
                       (float)((local_368.Ptr)->Transform).M[2][1] * fStack_530 +
                       (float)((local_368.Ptr)->Transform).M[3][1] * fStack_32c;
          fStack_244 = (float)((local_368.Ptr)->Transform).M[1][2] * fStack_334 +
                       (float)((local_368.Ptr)->Transform).M[0][2] * local_338 +
                       (float)((local_368.Ptr)->Transform).M[2][2] * fStack_530 +
                       (float)((local_368.Ptr)->Transform).M[3][2] * fStack_32c;
          fStack_21c = (float)((local_368.Ptr)->Transform).M[1][3] * fStack_334 +
                       (float)((local_368.Ptr)->Transform).M[0][3] * local_338 +
                       (float)((local_368.Ptr)->Transform).M[2][3] * fStack_530 +
                       (float)((local_368.Ptr)->Transform).M[3][3] * fStack_32c;
          local_538._4_4_ = fStack_334;
          local_538._0_4_ = local_338;
          local_218 = (float)((local_368.Ptr)->PrevTransform).M[0][0] * local_338 +
                      (float)((local_368.Ptr)->PrevTransform).M[1][0] * fStack_334 +
                      (float)((local_368.Ptr)->PrevTransform).M[2][0] * fStack_530 +
                      (float)((local_368.Ptr)->PrevTransform).M[3][0] * fStack_52c;
          local_258 = (float)((local_368.Ptr)->PrevTransform).M[0][1] * local_338 +
                      (float)((local_368.Ptr)->PrevTransform).M[1][1] * fStack_334 +
                      (float)((local_368.Ptr)->PrevTransform).M[2][1] * fStack_530 +
                      (float)((local_368.Ptr)->PrevTransform).M[3][1] * fStack_52c;
          local_238 = (float)((local_368.Ptr)->PrevTransform).M[0][2] * local_338 +
                      (float)((local_368.Ptr)->PrevTransform).M[1][2] * fStack_334 +
                      (float)((local_368.Ptr)->PrevTransform).M[2][2] * fStack_530 +
                      (float)((local_368.Ptr)->PrevTransform).M[3][2] * fStack_52c;
          fStack_20c = (float)((local_368.Ptr)->PrevTransform).M[0][3] * local_338 +
                       (float)((local_368.Ptr)->PrevTransform).M[1][3] * fStack_334 +
                       (float)((local_368.Ptr)->PrevTransform).M[2][3] * fStack_530 +
                       (float)((local_368.Ptr)->PrevTransform).M[3][3] * fStack_52c;
          local_228 = ((float)((local_368.Ptr)->Transform).M[1][0] * fStack_334 +
                       (float)((local_368.Ptr)->Transform).M[0][0] * local_338 +
                       (float)((local_368.Ptr)->Transform).M[2][0] * fStack_530 +
                      (float)((local_368.Ptr)->Transform).M[3][0] * fStack_32c) - local_218;
          local_248 = fStack_244 - local_238;
          local_208 = fStack_224 - local_258;
          if (0.0 < (local_368.Ptr)->DeltaSeconds) {
            fVar43 = __real_3f800000 / (local_368.Ptr)->DeltaSeconds;
          }
          fVar45 = fVar43 * local_228;
          fVar46 = fVar43 * local_208;
          fVar43 = fVar43 * local_248;
          if (cVar4 == '\0') {
            local_554 = (uint)*(ushort *)(uVar3 + 4 + lVar24 * 2);
            local_558 = (uint)*(ushort *)(uVar3 + 2 + lVar24 * 2);
            uVar26 = (uint)*(ushort *)(uVar3 + lVar24 * 2);
          }
          else {
            local_554 = *(uint *)(uVar3 + 8 + lVar24 * 4);
            local_558 = *(uint *)(uVar3 + 4 + lVar24 * 4);
            uVar26 = *(uint *)(uVar3 + lVar24 * 4);
          }
          local_550 = fVar41;
          local_510 = fVar44;
          local_4ac = fVar40;
          local_3d8 = (float *)(local_440 + (longlong)local_3d8);
          fStack_330 = fStack_530;
          fStack_254 = local_258;
          fStack_250 = local_258;
          fStack_24c = local_258;
          fStack_240 = fStack_244;
          fStack_23c = fStack_244;
          fStack_234 = local_238;
          fStack_230 = local_238;
          fStack_22c = local_238;
          fStack_220 = fStack_244;
          fStack_214 = local_258;
          fStack_210 = local_238;
          fStack_204 = fStack_224;
          fStack_200 = fStack_224;
          fStack_1fc = fStack_224;
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentX(this_00,&local_1b8,uVar26);
          fVar31 = (pTVar9->field0_0x0)._s_0.Z;
          fVar32 = (pTVar9->field0_0x0)._s_0.Y;
          fVar33 = (pTVar9->field0_0x0)._s_0.X;
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentX(this_00,&local_178,local_558);
          fVar36 = (pTVar9->field0_0x0)._s_0.X;
          fVar39 = (pTVar9->field0_0x0)._s_0.Y;
          fVar34 = (pTVar9->field0_0x0)._s_0.Z;
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentX(this_00,&local_1a8,local_554);
          local_4e0._s_0.Y =
               fVar40 * (pTVar9->field0_0x0)._s_0.Y + fVar41 * fVar39 + fVar44 * fVar32;
          local_4e0._s_0.Z =
               fVar40 * (pTVar9->field0_0x0)._s_0.Z + fVar41 * fVar34 + fVar44 * fVar31;
          local_4e0._s_0.X =
               fVar40 * (pTVar9->field0_0x0)._s_0.X + fVar41 * fVar36 + fVar44 * fVar33;
          local_168.M[0][0] = (float)((local_368.Ptr)->PrevTransform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->PrevTransform).M[0][1];
          local_168.M[0][2] = (float)((local_368.Ptr)->PrevTransform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->PrevTransform).M[0][3];
          local_168.M[1][0] = (float)((local_368.Ptr)->PrevTransform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->PrevTransform).M[1][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->PrevTransform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->PrevTransform).M[1][3];
          local_168.M[2][0] = (float)((local_368.Ptr)->PrevTransform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->PrevTransform).M[2][1];
          local_168.M[2][2] = (float)((local_368.Ptr)->PrevTransform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->PrevTransform).M[2][3];
          local_168.M[3][0] = (float)((local_368.Ptr)->PrevTransform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->PrevTransform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->PrevTransform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->PrevTransform).M[3][3];
          local_4c0._s_0.X = local_4e0._s_0.X;
          local_4c0._s_0.Y = local_4e0._s_0.Y;
          local_4c0._s_0.Z = local_4e0._s_0.Z;
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_4c0._s_0,&local_168);
          local_168.M[0][2] = (float)((local_368.Ptr)->Transform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->Transform).M[0][3];
          local_168.M[0][0] = (float)((local_368.Ptr)->Transform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->Transform).M[0][1];
          local_168.M[1][0] = (float)((local_368.Ptr)->Transform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->Transform).M[1][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->Transform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->Transform).M[1][3];
          local_168.M[2][2] = (float)((local_368.Ptr)->Transform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->Transform).M[2][3];
          local_168.M[2][0] = (float)((local_368.Ptr)->Transform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->Transform).M[2][1];
          local_168.M[3][0] = (float)((local_368.Ptr)->Transform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->Transform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->Transform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->Transform).M[3][3];
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_4e0._s_0,&local_168);
          local_4a8 = (local_4e0._s_0.X - local_4c0._s_0.X) * local_528 + local_4c0._s_0.X;
          local_4a4 = (local_4e0._s_0.Y - local_4c0._s_0.Y) * local_528 + local_4c0._s_0.Y;
          local_4a0 = (FStaticMeshVertexBuffer *)
                      CONCAT44(local_4a0._4_4_,
                               (local_4e0._s_0.Z - local_4c0._s_0.Z) * local_528 + local_4c0._s_0.Z)
          ;
          if (cVar4 == '\0') {
            local_558 = (uint)*(ushort *)(uVar3 + 4 + lVar24 * 2);
            local_554 = (uint)*(ushort *)(uVar3 + 2 + lVar24 * 2);
            uVar26 = (uint)*(ushort *)(uVar3 + lVar24 * 2);
          }
          else {
            local_558 = *(uint *)(uVar3 + 8 + lVar24 * 4);
            local_554 = *(uint *)(uVar3 + 4 + lVar24 * 4);
            uVar26 = *(uint *)(uVar3 + lVar24 * 4);
          }
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentY(this_00,&local_1f8,uVar26);
          fVar41 = (pTVar10->field0_0x0)._s_0.Z;
          fVar39 = local_510 * (pTVar10->field0_0x0)._s_0.Y;
          fVar33 = local_510 * (pTVar10->field0_0x0)._s_0.X;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentY(this_00,&local_1ec,local_554);
          fVar36 = local_550 * (pTVar10->field0_0x0)._s_0.Z;
          fVar32 = local_550 * (pTVar10->field0_0x0)._s_0.Y;
          fVar31 = local_550 * (pTVar10->field0_0x0)._s_0.X;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentY
                              (this_00,(TVector<float> *)local_290,local_558);
          local_4f0._s_0.Y = fVar40 * (pTVar10->field0_0x0)._s_0.Y + fVar39 + fVar32;
          local_4f0._s_0.Z = fVar40 * (pTVar10->field0_0x0)._s_0.Z + fVar44 * fVar41 + fVar36;
          local_4f0._s_0.X = fVar40 * (pTVar10->field0_0x0)._s_0.X + fVar31 + fVar33;
          local_168.M[0][0] = (float)((local_368.Ptr)->PrevTransform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->PrevTransform).M[0][1];
          local_168.M[0][2] = (float)((local_368.Ptr)->PrevTransform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->PrevTransform).M[0][3];
          local_168.M[1][0] = (float)((local_368.Ptr)->PrevTransform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->PrevTransform).M[1][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->PrevTransform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->PrevTransform).M[1][3];
          local_168.M[2][0] = (float)((local_368.Ptr)->PrevTransform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->PrevTransform).M[2][1];
          local_168.M[2][2] = (float)((local_368.Ptr)->PrevTransform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->PrevTransform).M[2][3];
          local_168.M[3][0] = (float)((local_368.Ptr)->PrevTransform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->PrevTransform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->PrevTransform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->PrevTransform).M[3][3];
          local_4d0._s_0.X = local_4f0._s_0.X;
          local_4d0._s_0.Y = local_4f0._s_0.Y;
          local_4d0._s_0.Z = local_4f0._s_0.Z;
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_4f0._s_0,&local_168);
          local_168.M[0][2] = (float)((local_368.Ptr)->Transform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->Transform).M[0][3];
          local_168.M[0][0] = (float)((local_368.Ptr)->Transform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->Transform).M[0][1];
          local_168.M[1][0] = (float)((local_368.Ptr)->Transform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->Transform).M[1][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->Transform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->Transform).M[1][3];
          local_168.M[2][2] = (float)((local_368.Ptr)->Transform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->Transform).M[2][3];
          local_168.M[2][0] = (float)((local_368.Ptr)->Transform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->Transform).M[2][1];
          local_168.M[3][0] = (float)((local_368.Ptr)->Transform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->Transform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->Transform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->Transform).M[3][3];
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_4d0._s_0,&local_168);
          fVar40 = (local_4d0._s_0.Z - local_4f0._s_0.Z) * local_528 + local_4f0._s_0.Z;
          fVar41 = (local_4d0._s_0.Y - local_4f0._s_0.Y) * local_528 + local_4f0._s_0.Y;
          fVar44 = (local_4d0._s_0.X - local_4f0._s_0.X) * local_528 + local_4f0._s_0.X;
          if (cVar4 == '\0') {
            local_558 = (uint)*(ushort *)(uVar3 + 4 + lVar24 * 2);
            local_554 = (uint)*(ushort *)(uVar3 + 2 + lVar24 * 2);
            uVar26 = (uint)*(ushort *)(uVar3 + lVar24 * 2);
          }
          else {
            local_558 = *(uint *)(uVar3 + 8 + lVar24 * 4);
            local_554 = *(uint *)(uVar3 + 4 + lVar24 * 4);
            uVar26 = *(uint *)(uVar3 + lVar24 * 4);
          }
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentZ(this_00,&local_198,uVar26);
          fVar39 = local_510 * (pTVar9->field0_0x0)._s_0.Z;
          fVar31 = local_510 * (pTVar9->field0_0x0)._s_0.Y;
          fVar33 = local_510 * (pTVar9->field0_0x0)._s_0.X;
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentZ(this_00,&local_188,local_554);
          fVar32 = local_550 * (pTVar9->field0_0x0)._s_0.X;
          fVar36 = local_550 * (pTVar9->field0_0x0)._s_0.Y;
          local_550 = local_550 * (pTVar9->field0_0x0)._s_0.Z + fVar39;
          pTVar9 = FStaticMeshVertexBuffer::VertexTangentZ
                             (this_00,(TVector4<float> *)&local_408._s_0,local_558);
          local_520 = local_4ac * (pTVar9->field0_0x0)._s_0.X + fVar32 + fVar33;
          fStack_51c = local_4ac * (pTVar9->field0_0x0)._s_0.Y + fVar36 + fVar31;
          local_540 = local_4ac * (pTVar9->field0_0x0)._s_0.Z + local_550;
          fStack_544 = fStack_51c;
          local_548 = local_520;
          local_168.M[0][0] = (float)((local_368.Ptr)->PrevTransform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->PrevTransform).M[0][1];
          local_168.M[0][2] = (float)((local_368.Ptr)->PrevTransform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->PrevTransform).M[0][3];
          local_168.M[1][0] = (float)((local_368.Ptr)->PrevTransform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->PrevTransform).M[1][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->PrevTransform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->PrevTransform).M[1][3];
          local_168.M[2][0] = (float)((local_368.Ptr)->PrevTransform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->PrevTransform).M[2][1];
          local_168.M[2][2] = (float)((local_368.Ptr)->PrevTransform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->PrevTransform).M[2][3];
          local_168.M[3][0] = (float)((local_368.Ptr)->PrevTransform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->PrevTransform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->PrevTransform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->PrevTransform).M[3][3];
          local_518 = local_540;
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_548,&local_168);
          local_168.M[0][2] = (float)((local_368.Ptr)->Transform).M[0][2];
          local_168.M[0][3] = (float)((local_368.Ptr)->Transform).M[0][3];
          local_168.M[0][0] = (float)((local_368.Ptr)->Transform).M[0][0];
          local_168.M[0][1] = (float)((local_368.Ptr)->Transform).M[0][1];
          local_168.M[1][2] = (float)((local_368.Ptr)->Transform).M[1][2];
          local_168.M[1][3] = (float)((local_368.Ptr)->Transform).M[1][3];
          local_168.M[1][0] = (float)((local_368.Ptr)->Transform).M[1][0];
          local_168.M[1][1] = (float)((local_368.Ptr)->Transform).M[1][1];
          local_168.M[2][0] = (float)((local_368.Ptr)->Transform).M[2][0];
          local_168.M[2][1] = (float)((local_368.Ptr)->Transform).M[2][1];
          local_168.M[2][2] = (float)((local_368.Ptr)->Transform).M[2][2];
          local_168.M[2][3] = (float)((local_368.Ptr)->Transform).M[2][3];
          local_168.M[3][0] = (float)((local_368.Ptr)->Transform).M[3][0];
          local_168.M[3][1] = (float)((local_368.Ptr)->Transform).M[3][1];
          local_168.M[3][2] = (float)((local_368.Ptr)->Transform).M[3][2];
          local_168.M[3][3] = (float)((local_368.Ptr)->Transform).M[3][3];
          FNDITransformHandler::TransformUnitVector
                    (local_348,(TVector<float> *)&local_520,&local_168);
          pfVar12 = (float *)(local_278 + (longlong)local_3c8);
          *local_3c8 = local_228 * local_528 + local_218;
          pfVar13 = (float *)(local_260 + (longlong)local_3c0);
          *local_3c0 = local_208 * local_528 + local_258;
          pfVar14 = (float *)(local_268 + (longlong)local_3b8);
          *local_3b8 = local_248 * local_528 + local_238;
          pfVar15 = (float *)(local_270 + (longlong)local_3b0);
          *local_3b0 = fVar45;
          pfVar16 = (float *)((longlong)local_428 + (longlong)local_3a8);
          *local_3a8 = fVar46;
          pfVar17 = (float *)((longlong)&local_420->RegisterData + (longlong)local_3a0);
          *local_3a0 = fVar43;
          pfVar18 = (float *)(local_418 + (longlong)local_398);
          *local_398 = (local_520 - local_548) * local_528 + local_548;
          *local_390 = (fStack_51c - fStack_544) * local_528 + fStack_544;
          *local_388 = ((float)local_518 - (float)local_540) * local_528 + (float)local_540;
          *local_380 = fVar44;
          *local_378 = fVar41;
          *local_370 = fVar40;
          pfVar19 = (float *)(local_470 + (longlong)local_508);
          *local_508 = local_4a8;
          pfVar20 = (float *)(local_468 + (longlong)local_500);
          *local_500 = local_4a4;
          pfVar21 = (float *)(local_460 + (longlong)local_4f8);
          *local_4f8 = local_4a0._0_4_;
          local_50c = local_50c + 1;
          pFVar29 = local_498;
          local_508 = pfVar19;
          local_500 = pfVar20;
          local_4f8 = pfVar21;
          local_3c8 = pfVar12;
          local_3c0 = pfVar13;
          local_3b8 = pfVar14;
          local_3b0 = pfVar15;
          local_3a8 = pfVar16;
          local_3a0 = pfVar17;
          local_398 = pfVar18;
          local_390 = (float *)(local_410 + (longlong)local_390);
          local_388 = (float *)(local_490 + (longlong)local_388);
          local_380 = (float *)(local_488 + (longlong)local_380);
          local_378 = (float *)(local_430 + (longlong)local_378);
          local_370 = (float *)(local_478 + (longlong)local_370);
        } while (local_50c < param_1->NumInstances);
      }
      goto LAB_148f7181e;
    }
  }
  _local_548 = 0x3f800000;
  local_540 = 0.0;
  local_518 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar40 = (float)((local_368.Ptr)->TransformInverseTransposed).M[0][2];
  fStack_11c = (float)((local_368.Ptr)->TransformInverseTransposed).M[0][3];
  _local_520 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                        UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  fVar37 = (float)((local_368.Ptr)->TransformInverseTransposed).M[0][0];
  fVar38 = (float)((local_368.Ptr)->TransformInverseTransposed).M[0][1];
  fStack_530 = (float)((local_368.Ptr)->Transform).M[0][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
               (float)((local_368.Ptr)->Transform).M[1][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_368.Ptr)->Transform).M[2][2] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_368.Ptr)->Transform).M[3][2] * 1.0;
  fStack_52c = (float)((local_368.Ptr)->Transform).M[0][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
               (float)((local_368.Ptr)->Transform).M[1][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
               (float)((local_368.Ptr)->Transform).M[2][3] *
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
               (float)((local_368.Ptr)->Transform).M[3][3] * 1.0;
  fVar41 = (float)((local_368.Ptr)->TransformInverseTransposed).M[1][2];
  fStack_10c = (float)((local_368.Ptr)->TransformInverseTransposed).M[1][3];
  fVar46 = (float)((local_368.Ptr)->TransformInverseTransposed).M[1][0];
  fVar32 = (float)((local_368.Ptr)->TransformInverseTransposed).M[1][1];
  fVar44 = (float)((local_368.Ptr)->TransformInverseTransposed).M[2][2];
  fStack_fc = (float)((local_368.Ptr)->TransformInverseTransposed).M[2][3];
  fVar36 = (float)((local_368.Ptr)->TransformInverseTransposed).M[2][0];
  fVar39 = (float)((local_368.Ptr)->TransformInverseTransposed).M[2][1];
  fVar34 = (float)((local_368.Ptr)->TransformInverseTransposed).M[3][0];
  fVar35 = (float)((local_368.Ptr)->TransformInverseTransposed).M[3][1];
  fVar45 = (float)((local_368.Ptr)->TransformInverseTransposed).M[3][2];
  fStack_ec = (float)((local_368.Ptr)->TransformInverseTransposed).M[3][3];
  local_538._4_4_ =
       (float)((local_368.Ptr)->Transform).M[0][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
       (float)((local_368.Ptr)->Transform).M[1][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_368.Ptr)->Transform).M[2][1] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_368.Ptr)->Transform).M[3][1] * 1.0;
  local_538._0_4_ =
       (float)((local_368.Ptr)->Transform).M[0][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
       (float)((local_368.Ptr)->Transform).M[1][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
       (float)((local_368.Ptr)->Transform).M[2][0] *
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
       (float)((local_368.Ptr)->Transform).M[3][0] * 1.0;
  local_128._0_4_ = fVar37;
  local_128._4_4_ = fVar38;
  fStack_120 = fVar40;
  local_118 = fVar46;
  fStack_114 = fVar32;
  fStack_110 = fVar41;
  local_108 = fVar36;
  fStack_104 = fVar39;
  fStack_100 = fVar44;
  local_f8 = fVar34;
  fStack_f4 = fVar35;
  fStack_f0 = fVar45;
  FNDITransformHandler::TransformUnitVector
            (local_348,(TVector<float> *)&local_548,(TMatrix<float> *)local_128);
  fVar43 = _UNK_150689504 * fVar46 + ___xmm_00000000000000003f80000000000000 * fVar37 +
           _UNK_150689508 * fVar36 + _UNK_15068950c * fVar34;
  fVar31 = _UNK_150689504 * fVar32 + ___xmm_00000000000000003f80000000000000 * fVar38 +
           _UNK_150689508 * fVar39 + _UNK_15068950c * fVar35;
  fVar33 = _UNK_150689504 * fVar41 + ___xmm_00000000000000003f80000000000000 * fVar40 +
           _UNK_150689508 * fVar44 + _UNK_15068950c * fVar45;
  fVar42 = __real_3f800000 / SQRT(fVar31 * fVar31 + fVar43 * fVar43 + fVar33 * fVar33);
  fVar46 = _UNK_150689534 * fVar46 + ___xmm_000000003f8000000000000000000000 * fVar37 +
           _UNK_150689538 * fVar36 + _UNK_15068953c * fVar34;
  fVar32 = _UNK_150689534 * fVar32 + ___xmm_000000003f8000000000000000000000 * fVar38 +
           _UNK_150689538 * fVar39 + _UNK_15068953c * fVar35;
  fVar40 = _UNK_150689534 * fVar41 + ___xmm_000000003f8000000000000000000000 * fVar40 +
           _UNK_150689538 * fVar44 + _UNK_15068953c * fVar45;
  fVar41 = __real_3f800000 / SQRT(fVar32 * fVar32 + fVar46 * fVar46 + fVar40 * fVar40);
  if (0 < param_1->NumInstances) {
    local_480 = (longlong)(int)local_408._s_0.Z * 4;
    local_438 = (longlong)local_3f0 * 4;
    local_440 = (longlong)local_3e0 * 4;
    local_448 = (float *)((longlong)local_328.X.AdvanceOffset * 4);
    local_450 = (float *)((longlong)local_328.Y.AdvanceOffset * 4);
    local_458 = (float *)((longlong)local_328.Z.AdvanceOffset * 4);
    local_460 = (longlong)local_2f8.X.AdvanceOffset * 4;
    local_468 = (longlong)local_2f8.Y.AdvanceOffset * 4;
    local_470 = (longlong)local_2f8.Z.AdvanceOffset * 4;
    local_478 = (longlong)local_2c8.X.AdvanceOffset * 4;
    local_430 = (longlong)local_2c8.Y.AdvanceOffset * 4;
    local_488 = (longlong)local_2c8.Z.AdvanceOffset * 4;
    local_490 = (longlong)(int)local_168.M[0][2] * 4;
    local_410 = (longlong)(int)local_168.M[1][2] * 4;
    local_418 = (longlong)(int)local_168.M[2][2] * 4;
    puVar23 = (undefined4 *)CONCAT44(uStack_3f4,local_3f8);
    local_508 = (float *)CONCAT44(local_168.M[2][1],local_168.M[2][0]);
    local_500 = (float *)CONCAT44(local_168.M[1][1],local_168.M[1][0]);
    local_4f8 = (float *)CONCAT44(local_168.M[0][1],local_168.M[0][0]);
    do {
      iVar30 = iVar30 + 1;
      local_428 = (float *)(local_408._0_8_ + (longlong)(int)local_408._s_0.Z * 4);
      *(undefined4 *)local_408._0_8_ = local_538._0_4_;
      *puVar23 = local_538._4_4_;
      *local_3e8 = fStack_530;
      *local_328.X.Register = local_520;
      *local_328.Y.Register = fStack_51c;
      *local_328.Z.Register = (float)local_518;
      *local_2f8.X.Register = fVar41 * fVar46;
      *local_2f8.Y.Register = fVar41 * fVar32;
      *local_2f8.Z.Register = fVar41 * fVar40;
      *local_2c8.X.Register = fVar42 * fVar43;
      *local_2c8.Y.Register = fVar42 * fVar31;
      *local_2c8.Z.Register = fVar42 * fVar33;
      pfVar12 = local_4f8 + (int)local_168.M[0][2];
      *local_4f8 = local_548;
      pfVar13 = local_500 + (int)local_168.M[1][2];
      *local_500 = fStack_544;
      pfVar14 = local_508 + (int)local_168.M[2][2];
      *local_508 = (float)local_540;
      local_3e8 = local_3e8 + local_3e0;
      puVar23 = puVar23 + local_3f0;
      local_2f8.Z.Register = local_2f8.Z.Register + local_2f8.Z.AdvanceOffset;
      local_2f8.X.Register = local_2f8.X.Register + local_2f8.X.AdvanceOffset;
      local_2f8.Y.Register = local_2f8.Y.Register + local_2f8.Y.AdvanceOffset;
      local_408._0_8_ = local_428;
      local_328.Z.Register = (float *)((longlong)local_458 + (longlong)local_328.Z.Register);
      local_328.Y.Register = (float *)((longlong)local_450 + (longlong)local_328.Y.Register);
      local_328.X.Register = (float *)((longlong)local_448 + (longlong)local_328.X.Register);
      local_2c8.Y.Register = local_2c8.Y.Register + local_2c8.Y.AdvanceOffset;
      local_2c8.X.Register = local_2c8.X.Register + local_2c8.X.AdvanceOffset;
      pFVar29 = local_498;
      local_2c8.Z.Register = local_2c8.Z.Register + local_2c8.Z.AdvanceOffset;
      local_508 = pfVar14;
      local_500 = pfVar13;
      local_4f8 = pfVar12;
    } while (iVar30 < local_420->NumInstances);
  }
LAB_148f7181e:
  if (pFVar29 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar29->_padding_;
    LOCK();
    lVar24 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar24 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar29->_padding_)(pFVar29,1);
    }
  }
  return;
}

// VMGetTriangleNormal_Deprecated<FNDITransformHandler> @ 148f718e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleNormal_Deprecated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FStaticMeshVertexDataInterface *pFVar6;
  float *pfVar7;
  char cVar8;
  FStaticMeshLODResources *pFVar9;
  float *pfVar10;
  FIndexArrayView *pFVar11;
  TVector4<float> *pTVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  FStaticMeshLODResources *pFVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_228;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  FStaticMeshVertexBuffer *local_208;
  float *local_200;
  float *local_1f8;
  float *local_1f0;
  FStaticMeshLODResources *local_1e8;
  TVector4<float>_u_0 local_1d8;
  int local_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  float *local_1b8;
  int local_1b0;
  float *local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  float *local_178;
  float *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_150;
  FStaticMeshLODResources *local_140;
  FColorVertexBuffer *local_138 [2];
  FNDIInputParam<UE::Math::TVector<float>_> local_128;
  FIndexArrayView local_d8;
  FIndexArrayView local_c8;
  TVector4<float> local_b8;
  TVector4<float> local_a8 [8];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_150,param_1);
  iVar19 = 0;
  local_140 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_150.Ptr,local_138);
  local_1e8 = local_140;
  pFVar18 = local_140;
  if (local_140 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar18 = pFVar9;
    local_1e8 = pFVar9;
    if (local_140 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_140->_padding_;
      LOCK();
      lVar22 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar22 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_140->_padding_)(local_140,1);
      }
    }
  }
  local_1c8 = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_1c8);
  lVar22 = (longlong)local_1c8;
  iVar13 = local_1c8 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_128,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_1d8._s_0,param_1);
  if (pFVar18 == (FStaticMeshLODResources *)0x0) {
    local_218 = (undefined1  [8])0x0;
    pFVar11 = (FIndexArrayView *)local_218;
    fStack_210 = 0.0;
    fStack_20c = (float)((uint)fStack_20c & 0xffffff00);
  }
  else {
    pFVar11 = FRawStaticIndexBuffer::GetArrayView(&pFVar18->IndexBuffer,&local_d8);
  }
  local_1a8 = pFVar11->UntypedIndexData;
  uStack_1a0._0_4_ = pFVar11->NumIndices;
  uStack_1a0._4_1_ = pFVar11->b32Bit;
  uStack_1a0._5_3_ = *(undefined3 *)&pFVar11->field_0xd;
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    pFVar11 = FRawStaticIndexBuffer::GetArrayView(&pFVar18->IndexBuffer,&local_c8);
    fVar23 = (float)(pFVar11->NumIndices / 3 + -1);
    if (((-1 < (int)fVar23) && (pFVar18 != (FStaticMeshLODResources *)0x0)) &&
       ((pFVar18->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) {
      local_208 = &(pFVar18->VertexBuffers).StaticMeshVertexBuffer;
      pFVar6 = (pFVar18->VertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if (((pFVar6 != (FStaticMeshVertexDataInterface *)0x0) &&
          ((pFVar18->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
           (FStaticMeshVertexDataInterface *)0x0)) &&
         ((cVar8 = (**(code **)((longlong)*pFVar6 + 0x58))(), cVar8 != '\0' &&
          ((cVar8 = (**(code **)((longlong)
                                 *(pFVar18->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                                0x58))(), pfVar7 = local_1a8, fVar28 = __real_3f800000,
           cVar8 != '\0' && (0 < (int)(pFVar18->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))
          ))) {
        local_228 = 0;
        if (0 < param_1->NumInstances) {
          cVar8 = uStack_1a0._4_1_;
          local_198 = (longlong)local_128.X.AdvanceOffset << 2;
          local_190 = (longlong)(int)local_1d8._s_0.Z << 2;
          local_188 = (longlong)local_1c0 << 2;
          local_168 = lVar22 << 2;
          local_160 = (longlong)local_128.Z.AdvanceOffset << 2;
          local_158 = (longlong)local_128.Y.AdvanceOffset << 2;
          local_180 = (longlong)local_1b0 << 2;
          local_1f0 = local_1b8;
          local_200 = (float *)local_1d8._0_8_;
          fStack_20c = 0.0;
          pfVar10 = pfVar10 + iVar13;
          local_1f8 = (float *)CONCAT44(uStack_1c4,local_1c8);
          do {
            fVar24 = *local_128.Z.InputPtr;
            fVar25 = *local_128.Y.InputPtr;
            pfVar17 = (float *)((longlong)pfVar10 + local_168);
            fVar26 = *local_128.X.InputPtr;
            local_178 = (float *)(local_160 + (longlong)local_128.Z.InputPtr);
            local_170 = (float *)(local_158 + (longlong)local_128.Y.InputPtr);
            fVar27 = fVar23;
            if ((int)*pfVar10 < (int)fVar23) {
              fVar27 = *pfVar10;
            }
            local_1a8 = (float *)(local_198 + (longlong)local_128.X.InputPtr);
            fVar21 = 0.0;
            if (0 < (int)fVar27) {
              fVar21 = fVar27;
            }
            lVar22 = (longlong)((int)fVar21 * 3);
            if (cVar8 == '\0') {
              fVar27 = (float)(uint)*(ushort *)((longlong)pfVar7 + lVar22 * 2 + 4);
              fVar21 = (float)(uint)*(ushort *)((longlong)pfVar7 + lVar22 * 2 + 2);
              fVar20 = (float)(uint)*(ushort *)((longlong)pfVar7 + lVar22 * 2);
            }
            else {
              fVar27 = pfVar7[lVar22 + 2];
              fVar21 = pfVar7[lVar22 + 1];
              fVar20 = pfVar7[lVar22];
            }
            pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ(local_208,&local_b8,(uint)fVar20);
            fVar20 = (pTVar12->field0_0x0)._s_0.Z;
            fVar2 = (pTVar12->field0_0x0)._s_0.Y;
            fVar3 = (pTVar12->field0_0x0)._s_0.X;
            pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ(local_208,local_a8,(uint)fVar21);
            fVar21 = (pTVar12->field0_0x0)._s_0.X;
            fVar4 = (pTVar12->field0_0x0)._s_0.Y;
            fVar5 = (pTVar12->field0_0x0)._s_0.Z;
            pTVar12 = FStaticMeshVertexBuffer::VertexTangentZ
                                (local_208,(TVector4<float> *)&local_1d8._s_0,(uint)fVar27);
            local_218._4_4_ =
                 fVar24 * (pTVar12->field0_0x0)._s_0.Y + fVar25 * fVar4 + fVar26 * fVar2;
            local_218._0_4_ =
                 fVar24 * (pTVar12->field0_0x0)._s_0.X + fVar25 * fVar21 + fVar26 * fVar3;
            fStack_210 = fVar24 * (pTVar12->field0_0x0)._s_0.Z + fVar25 * fVar5 + fVar26 * fVar20;
            fVar25 = (float)((local_150.Ptr)->Transform).M[3][0] * fStack_20c +
                     (float)((local_150.Ptr)->Transform).M[2][0] * fStack_210 +
                     (float)((local_150.Ptr)->Transform).M[1][0] * (float)local_218._4_4_ +
                     (float)((local_150.Ptr)->Transform).M[0][0] * (float)local_218._0_4_;
            fVar26 = (float)((local_150.Ptr)->Transform).M[3][1] * fStack_20c +
                     (float)((local_150.Ptr)->Transform).M[2][1] * fStack_210 +
                     (float)((local_150.Ptr)->Transform).M[1][1] * (float)local_218._4_4_ +
                     (float)((local_150.Ptr)->Transform).M[0][1] * (float)local_218._0_4_;
            fVar27 = (float)((local_150.Ptr)->Transform).M[3][2] * fStack_20c +
                     (float)((local_150.Ptr)->Transform).M[2][2] * fStack_210 +
                     (float)((local_150.Ptr)->Transform).M[1][2] * (float)local_218._4_4_ +
                     (float)((local_150.Ptr)->Transform).M[0][2] * (float)local_218._0_4_;
            pfVar14 = (float *)(local_190 + (longlong)local_200);
            fVar24 = fVar28 / SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27);
            *local_200 = fVar24 * fVar25;
            pfVar15 = (float *)(local_188 + (longlong)local_1f8);
            *local_1f8 = fVar24 * fVar26;
            pfVar16 = (float *)(local_180 + (longlong)local_1f0);
            *local_1f0 = fVar24 * fVar27;
            local_228 = local_228 + 1;
            pFVar18 = local_1e8;
            pfVar10 = pfVar17;
            local_128.Z.InputPtr = local_178;
            local_128.Y.InputPtr = local_170;
            local_128.X.InputPtr = local_1a8;
            local_200 = pfVar14;
            local_1f8 = pfVar15;
            local_1f0 = pfVar16;
          } while (local_228 < param_1->NumInstances);
        }
        goto LAB_148f71f96;
      }
    }
  }
  fVar28 = (float)((local_150.Ptr)->TransformInverseTransposed).M[2][0] * _UNK_150689538 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[1][0] * _UNK_150689534 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[0][0] *
           ___xmm_000000003f8000000000000000000000 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[3][0] * _UNK_15068953c;
  fVar24 = (float)((local_150.Ptr)->TransformInverseTransposed).M[2][1] * _UNK_150689538 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[1][1] * _UNK_150689534 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[0][1] *
           ___xmm_000000003f8000000000000000000000 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[3][1] * _UNK_15068953c;
  fVar25 = (float)((local_150.Ptr)->TransformInverseTransposed).M[2][2] * _UNK_150689538 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[1][2] * _UNK_150689534 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[0][2] *
           ___xmm_000000003f8000000000000000000000 +
           (float)((local_150.Ptr)->TransformInverseTransposed).M[3][2] * _UNK_15068953c;
  fVar23 = __real_3f800000 / SQRT(fVar24 * fVar24 + fVar28 * fVar28 + fVar25 * fVar25);
  if (0 < param_1->NumInstances) {
    pfVar10 = (float *)CONCAT44(uStack_1c4,local_1c8);
    do {
      iVar19 = iVar19 + 1;
      *(float *)local_1d8._0_8_ = fVar23 * fVar28;
      *pfVar10 = fVar23 * fVar24;
      *local_1b8 = fVar23 * fVar25;
      local_1b8 = local_1b8 + local_1b0;
      pfVar10 = pfVar10 + local_1c0;
      local_1d8._0_8_ = (float *)(local_1d8._0_8_ + (longlong)(int)local_1d8._s_0.Z * 4);
    } while (iVar19 < param_1->NumInstances);
  }
LAB_148f71f96:
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar18->_padding_;
    LOCK();
    lVar22 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar22 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar18->_padding_)(pFVar18,1);
    }
  }
  return;
}

// VMGetTriangleNormal_Deprecated<FNDITransformHandlerNoop> @ 148f72000

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleNormal_Deprecated<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FStaticMeshVertexDataInterface *pFVar10;
  float *pfVar11;
  char cVar12;
  FStaticMeshLODResources *pFVar13;
  float *pfVar14;
  FIndexArrayView *pFVar15;
  TVector4<float> *pTVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  FStaticMeshLODResources *pFVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_1d8;
  TVector4<float>_u_0 local_1c8;
  FStaticMeshLODResources *local_1b8;
  int local_1b0 [2];
  float *local_1a8;
  int local_1a0;
  float *local_198;
  FStaticMeshLODResources *local_190;
  float *local_188;
  FIndexArrayView local_180;
  float *local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  longlong local_128;
  longlong local_120;
  FNDIInputParam<UE::Math::TVector<float>_> local_118;
  FIndexArrayView local_c8;
  FIndexArrayView local_b8;
  TVector4<float> local_a8;
  TVector4<float> local_98 [7];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_1c8._s_0,
             param_1);
  iVar18 = 0;
  local_1b8 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      ((FInstanceData_GameThread *)CONCAT44(local_1c8._s_0.W,local_1c8._s_0.Z),
                       (FColorVertexBuffer **)local_1b0);
  pFVar21 = local_1b8;
  if (local_1b8 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar21 = pFVar13;
    if (local_1b8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_1b8->_padding_;
      LOCK();
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_1b8->_padding_)(local_1b8,1);
      }
    }
  }
  local_1b8 = (FStaticMeshLODResources *)((ulonglong)local_1b8 & 0xffffffff00000000);
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_1b8);
  lVar20 = (longlong)(int)local_1b8;
  iVar17 = (int)local_1b8 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_118,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_1c8._s_0,param_1);
  if (pFVar21 == (FStaticMeshLODResources *)0x0) {
    local_180.UntypedIndexData = (void *)0x0;
    pFVar15 = &local_180;
    local_180.NumIndices = 0;
    local_180.b32Bit = false;
  }
  else {
    pFVar15 = FRawStaticIndexBuffer::GetArrayView(&pFVar21->IndexBuffer,&local_c8);
  }
  local_170 = pFVar15->UntypedIndexData;
  uStack_168._0_4_ = pFVar15->NumIndices;
  uStack_168._4_1_ = pFVar15->b32Bit;
  uStack_168._5_3_ = *(undefined3 *)&pFVar15->field_0xd;
  if (pFVar21 != (FStaticMeshLODResources *)0x0) {
    pFVar15 = FRawStaticIndexBuffer::GetArrayView(&pFVar21->IndexBuffer,&local_b8);
    fVar24 = (float)(pFVar15->NumIndices / 3 + -1);
    if (((((-1 < (int)fVar24) && (pFVar21 != (FStaticMeshLODResources *)0x0)) &&
         ((pFVar21->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) &&
        ((pFVar10 = (pFVar21->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
         pFVar10 != (FStaticMeshVertexDataInterface *)0x0 &&
         ((pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
          (FStaticMeshVertexDataInterface *)0x0)))) &&
       ((cVar12 = (**(code **)((longlong)*pFVar10 + 0x58))(), cVar12 != '\0' &&
        ((cVar12 = (**(code **)((longlong)
                                *(pFVar21->VertexBuffers).StaticMeshVertexBuffer.TexcoordData + 0x58
                               ))(), pfVar11 = local_170, cVar12 != '\0' &&
         (0 < (int)(pFVar21->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))))) {
      local_1d8 = 0;
      if (0 < param_1->NumInstances) {
        cVar12 = uStack_168._4_1_;
        local_160 = (longlong)local_118.X.AdvanceOffset << 2;
        local_158 = (longlong)(int)local_1c8._s_0.Z << 2;
        local_150 = (longlong)local_1b0[0] << 2;
        local_128 = lVar20 << 2;
        local_120 = (longlong)local_118.Z.AdvanceOffset << 2;
        local_180.UntypedIndexData = (void *)((longlong)local_118.Y.AdvanceOffset << 2);
        local_148 = (longlong)local_1a0 << 2;
        local_188 = local_1a8;
        local_190 = local_1b8;
        local_198 = (float *)local_1c8._0_8_;
        local_170 = pfVar14 + iVar17;
        do {
          fVar2 = *local_118.Z.InputPtr;
          fVar3 = *local_118.Y.InputPtr;
          fVar23 = fVar24;
          if ((int)*local_170 < (int)fVar24) {
            fVar23 = *local_170;
          }
          fVar4 = *local_118.X.InputPtr;
          local_140 = (float *)(local_120 + (longlong)local_118.Z.InputPtr);
          local_138 = (float *)((longlong)local_180.UntypedIndexData +
                               (longlong)local_118.Y.InputPtr);
          local_130 = (float *)(local_160 + (longlong)local_118.X.InputPtr);
          fVar25 = 0.0;
          if (0 < (int)fVar23) {
            fVar25 = fVar23;
          }
          lVar20 = (longlong)((int)fVar25 * 3);
          if (cVar12 == '\0') {
            fVar23 = (float)(uint)*(ushort *)((longlong)pfVar11 + lVar20 * 2 + 4);
            fVar25 = (float)(uint)*(ushort *)((longlong)pfVar11 + lVar20 * 2 + 2);
            fVar22 = (float)(uint)*(ushort *)((longlong)pfVar11 + lVar20 * 2);
          }
          else {
            fVar23 = pfVar11[lVar20 + 2];
            fVar25 = pfVar11[lVar20 + 1];
            fVar22 = pfVar11[lVar20];
          }
          local_170 = (float *)(local_128 + (longlong)local_170);
          pTVar16 = FStaticMeshVertexBuffer::VertexTangentZ
                              (&(pFVar21->VertexBuffers).StaticMeshVertexBuffer,&local_a8,
                               (uint)fVar22);
          fVar22 = (pTVar16->field0_0x0)._s_0.Z;
          fVar5 = (pTVar16->field0_0x0)._s_0.Y;
          fVar6 = (pTVar16->field0_0x0)._s_0.X;
          pTVar16 = FStaticMeshVertexBuffer::VertexTangentZ
                              (&(pFVar21->VertexBuffers).StaticMeshVertexBuffer,local_98,
                               (uint)fVar25);
          fVar25 = (pTVar16->field0_0x0)._s_0.X;
          fVar7 = (pTVar16->field0_0x0)._s_0.Y;
          fVar8 = (pTVar16->field0_0x0)._s_0.Z;
          pTVar16 = FStaticMeshVertexBuffer::VertexTangentZ
                              (&(pFVar21->VertexBuffers).StaticMeshVertexBuffer,
                               (TVector4<float> *)&local_1c8._s_0,(uint)fVar23);
          fVar23 = (pTVar16->field0_0x0)._s_0.Y;
          fVar9 = (pTVar16->field0_0x0)._s_0.Z;
          pfVar19 = (float *)(local_158 + (longlong)local_198);
          *local_198 = fVar2 * (pTVar16->field0_0x0)._s_0.X + fVar3 * fVar25 + fVar4 * fVar6;
          pFVar13 = (FStaticMeshLODResources *)((longlong)&local_190->_padding_ + local_150);
          *(float *)&local_190->_padding_ = fVar2 * fVar23 + fVar3 * fVar7 + fVar4 * fVar5;
          pfVar14 = (float *)(local_148 + (longlong)local_188);
          *local_188 = fVar2 * fVar9 + fVar3 * fVar8 + fVar4 * fVar22;
          local_1d8 = local_1d8 + 1;
          local_118.Z.InputPtr = local_140;
          local_118.Y.InputPtr = local_138;
          local_118.X.InputPtr = local_130;
          local_198 = pfVar19;
          local_190 = pFVar13;
          local_188 = pfVar14;
        } while (local_1d8 < param_1->NumInstances);
      }
      goto LAB_148f72495;
    }
  }
  if (0 < param_1->NumInstances) {
    pFVar13 = local_1b8;
    do {
      iVar18 = iVar18 + 1;
      *(float *)local_1c8._0_8_ = 0.0;
      *(undefined4 *)&pFVar13->_padding_ = 0;
      *local_1a8 = 1.0;
      local_1a8 = local_1a8 + local_1a0;
      pFVar13 = (FStaticMeshLODResources *)
                ((longlong)&pFVar13->_padding_ + (longlong)local_1b0[0] * 4);
      local_1c8._0_8_ = (float *)(local_1c8._0_8_ + (longlong)(int)local_1c8._s_0.Z * 4);
    } while (iVar18 < param_1->NumInstances);
  }
LAB_148f72495:
  if (pFVar21 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar21->_padding_;
    LOCK();
    lVar20 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  return;
}

// VMGetTriangleTangentBasis_Deprecated<FNDITransformHandler> @ 148f72500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleTangentBasis_Deprecated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshVertexBuffer *this_00;
  FVectorVMExternalFunctionContext *pFVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  FStaticMeshLODResources *pFVar7;
  float *pfVar8;
  FIndexArrayView *pFVar9;
  TVector4<float> *pTVar10;
  TVector<float> *pTVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  float fVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  FStaticMeshLODResources *pFVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_428 [32];
  uint local_408;
  uint local_404;
  FStaticMeshVertexBuffer *local_400;
  int local_3f8;
  TVector<float>_u_0 local_3e8;
  TVector<float>_u_0 local_3d8;
  TVector<float>_u_0 local_3c8;
  undefined1 local_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  FVectorVMExternalFunctionContext *local_3a8;
  float local_3a0;
  FStaticMeshLODResources *local_398;
  longlong local_390;
  float *local_388;
  float *local_380;
  float *local_378;
  float *local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  float *local_350;
  float *local_348;
  float *local_340;
  float *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float *local_310;
  TVector4<float>_u_0 local_308;
  int local_2f8;
  undefined4 uStack_2f4;
  int local_2f0;
  float *local_2e8;
  int local_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_2b8;
  FStaticMeshLODResources *local_2a8;
  FColorVertexBuffer *local_2a0;
  FNDITransformHandler local_298 [8];
  FNDIOutputParam<UE::Math::TVector<float>_> local_290;
  FNDIOutputParam<UE::Math::TVector<float>_> local_260;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218 [16];
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined1 local_1f0 [12];
  char cStack_1e4;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  TVector<float> local_1b8;
  TVector<float> local_1ac;
  FIndexArrayView local_1a0;
  FIndexArrayView local_190;
  TVector4<float> local_178;
  TVector4<float> local_168;
  TVector4<float> local_158;
  TVector4<float> local_148;
  TVector4<float> local_138;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_428;
  local_3a8 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_2b8,param_1);
  iVar25 = 0;
  local_2a8 = (FStaticMeshLODResources *)0x0;
  pFVar7 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_2b8.Ptr,&local_2a0);
  local_398 = local_2a8;
  pFVar26 = local_2a8;
  if (local_2a8 != pFVar7) {
    if (pFVar7 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    pFVar26 = pFVar7;
    local_398 = pFVar7;
    if (local_2a8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_2a8->_padding_;
      LOCK();
      lVar21 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar21 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_2a8->_padding_)(local_2a8,1);
      }
    }
  }
  local_2f8 = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_2f8);
  lVar21 = (longlong)local_2f8;
  iVar12 = local_2f8 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            ((FNDIInputParam<UE::Math::TVector<float>_> *)local_128,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_308._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_290,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_260,param_1);
  if (pFVar26 == (FStaticMeshLODResources *)0x0) {
    local_3b8 = (undefined1  [8])0x0;
    pFVar9 = (FIndexArrayView *)local_3b8;
    fStack_3b0 = 0.0;
    fStack_3ac = (float)((uint)fStack_3ac & 0xffffff00);
  }
  else {
    pFVar9 = FRawStaticIndexBuffer::GetArrayView(&pFVar26->IndexBuffer,&local_1a0);
  }
  local_1f0._0_8_ = pFVar9->UntypedIndexData;
  local_1f0._8_4_ = pFVar9->NumIndices;
  cStack_1e4 = pFVar9->b32Bit;
  unique0x100013e7 = *(undefined3 *)&pFVar9->field_0xd;
  if (pFVar26 != (FStaticMeshLODResources *)0x0) {
    pFVar9 = FRawStaticIndexBuffer::GetArrayView(&pFVar26->IndexBuffer,&local_190);
    fVar22 = (float)(pFVar9->NumIndices / 3 + -1);
    local_3a0 = fVar22;
    if ((((-1 < (int)fVar22) && (pFVar26 != (FStaticMeshLODResources *)0x0)) &&
        (local_400 = &(pFVar26->VertexBuffers).StaticMeshVertexBuffer,
        (pFVar26->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) &&
       ((bVar6 = FStaticMeshVertexBuffer::GetAllowCPUAccess(local_400), uVar4 = local_1f0._0_8_,
        pFVar3 = local_3a8, bVar6 &&
        (0 < (int)(pFVar26->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))) {
      local_3f8 = 0;
      if (0 < param_1->NumInstances) {
        cVar5 = cStack_1e4;
        local_380 = (float *)CONCAT44(fStack_f4,local_f8);
        local_378 = (float *)CONCAT44(fStack_10c,fStack_110);
        local_370 = (float *)CONCAT44(local_128._4_4_,local_128._0_4_);
        local_228 = (longlong)(int)local_118 << 2;
        local_220 = (longlong)local_260.X.AdvanceOffset << 2;
        local_208 = (longlong)local_260.Y.AdvanceOffset << 2;
        local_200 = (longlong)local_260.Z.AdvanceOffset << 2;
        local_1f8 = (longlong)local_290.X.AdvanceOffset << 2;
        local_230 = (longlong)local_290.Y.AdvanceOffset << 2;
        local_3e8._0_8_ = (longlong)local_290.Z.AdvanceOffset << 2;
        local_3d8._s_0.X = (float)((longlong)(int)local_308._s_0.Z << 2);
        local_3d8._s_0.Y = (float)((ulonglong)((longlong)(int)local_308._s_0.Z << 2) >> 0x20);
        local_3c8._0_8_ = (longlong)local_2f0 << 2;
        local_368 = lVar21 << 2;
        local_360 = (longlong)local_e8 << 2;
        local_358 = (longlong)(int)fStack_100 << 2;
        local_390 = (longlong)local_2e0 << 2;
        local_310 = local_2e8;
        local_320 = (float *)local_308._0_8_;
        local_328 = local_290.Z.Register;
        local_330 = local_290.Y.Register;
        local_338 = local_290.X.Register;
        local_340 = local_260.Z.Register;
        local_348 = local_260.Y.Register;
        local_350 = local_260.X.Register;
        fStack_2cc = 0.0;
        local_218 = ZEXT416((uint)__real_3f800000);
        fStack_2bc = 0.0;
        fStack_3ac = 0.0;
        local_388 = pfVar8 + iVar12;
        fVar29 = __real_3f800000;
        local_318 = (float *)CONCAT44(uStack_2f4,local_2f8);
        do {
          fVar30 = *local_370;
          fVar31 = *local_380;
          if ((int)*local_388 < (int)fVar22) {
            fVar22 = *local_388;
          }
          fVar33 = *local_378;
          local_380 = (float *)((longlong)local_380 + local_360);
          local_378 = (float *)((longlong)local_378 + local_358);
          local_370 = (float *)(local_228 + (longlong)local_370);
          local_3a8 = (FVectorVMExternalFunctionContext *)CONCAT44(local_3a8._4_4_,fVar30);
          fVar41 = 0.0;
          if (0 < (int)fVar22) {
            fVar41 = fVar22;
          }
          lVar23 = (longlong)((int)fVar41 * 3);
          lVar21 = lVar23 * 2 + 4;
          lVar2 = lVar23 * 4 + 8;
          if (cVar5 == '\0') {
            local_404 = (uint)*(ushort *)(lVar21 + uVar4);
            local_408 = (uint)*(ushort *)(uVar4 + 2 + lVar23 * 2);
            uVar28 = (uint)*(ushort *)(uVar4 + lVar23 * 2);
          }
          else {
            local_404 = *(uint *)(lVar2 + uVar4);
            local_408 = *(uint *)(uVar4 + 4 + lVar23 * 4);
            uVar28 = *(uint *)(uVar4 + lVar23 * 4);
          }
          local_388 = (float *)(local_368 + (longlong)local_388);
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentX(local_400,&local_178,uVar28);
          fVar22 = (pTVar10->field0_0x0)._s_0.Z;
          fVar41 = (pTVar10->field0_0x0)._s_0.Y;
          fVar42 = (pTVar10->field0_0x0)._s_0.X;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentX(local_400,&local_168,local_408);
          fVar43 = (pTVar10->field0_0x0)._s_0.X;
          fVar34 = (pTVar10->field0_0x0)._s_0.Y;
          fVar35 = (pTVar10->field0_0x0)._s_0.Z;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentX(local_400,&local_158,local_404);
          local_2d8 = fVar31 * (pTVar10->field0_0x0)._s_0.X + fVar33 * fVar43 + fVar30 * fVar42;
          fStack_2d0 = fVar31 * (pTVar10->field0_0x0)._s_0.Z + fVar33 * fVar35 + fVar30 * fVar22;
          fStack_2d4 = fVar31 * (pTVar10->field0_0x0)._s_0.Y + fVar33 * fVar34 + fVar30 * fVar41;
          fVar22 = (float)((local_2b8.Ptr)->Transform).M[0][0] * local_2d8 +
                   (float)((local_2b8.Ptr)->Transform).M[1][0] * fStack_2d4 +
                   (float)((local_2b8.Ptr)->Transform).M[2][0] * fStack_2d0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][0] * fStack_2cc;
          fStack_1d4 = (float)((local_2b8.Ptr)->Transform).M[0][1] * local_2d8 +
                       (float)((local_2b8.Ptr)->Transform).M[1][1] * fStack_2d4 +
                       (float)((local_2b8.Ptr)->Transform).M[2][1] * fStack_2d0 +
                       (float)((local_2b8.Ptr)->Transform).M[3][1] * fStack_2cc;
          fStack_1c4 = (float)((local_2b8.Ptr)->Transform).M[0][2] * local_2d8 +
                       (float)((local_2b8.Ptr)->Transform).M[1][2] * fStack_2d4 +
                       (float)((local_2b8.Ptr)->Transform).M[2][2] * fStack_2d0 +
                       (float)((local_2b8.Ptr)->Transform).M[3][2] * fStack_2cc;
          fVar29 = fVar29 / SQRT(fStack_1d4 * fStack_1d4 + fVar22 * fVar22 + fStack_1c4 * fStack_1c4
                                );
          local_1d8 = fStack_1d4 * fVar29;
          local_1c8 = fStack_1c4 * fVar29;
          if (cVar5 == '\0') {
            local_408 = (uint)*(ushort *)(lVar21 + uVar4);
            local_404 = (uint)*(ushort *)(uVar4 + 2 + lVar23 * 2);
            uVar28 = (uint)*(ushort *)(uVar4 + lVar23 * 2);
          }
          else {
            local_408 = *(uint *)(uVar4 + lVar2);
            local_404 = *(uint *)(uVar4 + 4 + lVar23 * 4);
            uVar28 = *(uint *)(uVar4 + lVar23 * 4);
          }
          fStack_1d0 = fStack_1d4;
          fStack_1cc = fStack_1d4;
          fStack_1c0 = fStack_1c4;
          fStack_1bc = fStack_1c4;
          pTVar11 = FStaticMeshVertexBuffer::VertexTangentY(local_400,&local_1ac,uVar28);
          fVar41 = (pTVar11->field0_0x0)._s_0.Z;
          fVar42 = (pTVar11->field0_0x0)._s_0.Y;
          fVar43 = (pTVar11->field0_0x0)._s_0.X;
          pTVar11 = FStaticMeshVertexBuffer::VertexTangentY(local_400,&local_1b8,local_404);
          fVar34 = (pTVar11->field0_0x0)._s_0.Z;
          fVar35 = (pTVar11->field0_0x0)._s_0.Y;
          fVar37 = (pTVar11->field0_0x0)._s_0.X;
          pTVar11 = FStaticMeshVertexBuffer::VertexTangentY
                              (local_400,(TVector<float> *)local_1f0,local_408);
          this_00 = local_400;
          fStack_2c0 = fVar31 * (pTVar11->field0_0x0)._s_0.Z + fVar33 * fVar34 + fVar30 * fVar41;
          local_2c8 = fVar31 * (pTVar11->field0_0x0)._s_0.X + fVar33 * fVar37 + fVar30 * fVar43;
          fStack_2c4 = fVar31 * (pTVar11->field0_0x0)._s_0.Y + fVar33 * fVar35 + fVar30 * fVar42;
          fVar41 = (float)((local_2b8.Ptr)->Transform).M[1][0] * fStack_2c4 +
                   (float)((local_2b8.Ptr)->Transform).M[0][0] * local_2c8 +
                   (float)((local_2b8.Ptr)->Transform).M[2][0] * fStack_2c0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][0] * fStack_2bc;
          fVar42 = (float)((local_2b8.Ptr)->Transform).M[1][1] * fStack_2c4 +
                   (float)((local_2b8.Ptr)->Transform).M[0][1] * local_2c8 +
                   (float)((local_2b8.Ptr)->Transform).M[2][1] * fStack_2c0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][1] * fStack_2bc;
          fVar43 = (float)((local_2b8.Ptr)->Transform).M[1][2] * fStack_2c4 +
                   (float)((local_2b8.Ptr)->Transform).M[0][2] * local_2c8 +
                   (float)((local_2b8.Ptr)->Transform).M[2][2] * fStack_2c0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][2] * fStack_2bc;
          fVar30 = (float)local_218._0_4_ /
                   SQRT(fVar42 * fVar42 + fVar41 * fVar41 + fVar43 * fVar43);
          if (cVar5 == '\0') {
            uVar28 = (uint)*(ushort *)(uVar4 + lVar21);
            uVar27 = (uint)*(ushort *)(uVar4 + 2 + lVar23 * 2);
            uVar24 = (uint)*(ushort *)(uVar4 + lVar23 * 2);
          }
          else {
            uVar28 = *(uint *)(uVar4 + lVar2);
            uVar27 = *(uint *)(uVar4 + 4 + lVar23 * 4);
            uVar24 = *(uint *)(uVar4 + lVar23 * 4);
          }
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentZ(local_400,&local_148,uVar24);
          fVar36 = local_3a8._0_4_ * (pTVar10->field0_0x0)._s_0.Z;
          fVar32 = local_3a8._0_4_ * (pTVar10->field0_0x0)._s_0.Y;
          fVar38 = local_3a8._0_4_ * (pTVar10->field0_0x0)._s_0.X;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentZ(this_00,&local_138,uVar27);
          fVar34 = (pTVar10->field0_0x0)._s_0.X;
          fVar35 = (pTVar10->field0_0x0)._s_0.Y;
          fVar37 = (pTVar10->field0_0x0)._s_0.Z;
          pTVar10 = FStaticMeshVertexBuffer::VertexTangentZ
                              (this_00,(TVector4<float> *)&local_308._s_0,uVar28);
          local_3b8._0_4_ = fVar31 * (pTVar10->field0_0x0)._s_0.X + fVar33 * fVar34 + fVar38;
          local_3b8._4_4_ = fVar31 * (pTVar10->field0_0x0)._s_0.Y + fVar33 * fVar35 + fVar32;
          fStack_3b0 = fVar31 * (pTVar10->field0_0x0)._s_0.Z + fVar33 * fVar37 + fVar36;
          fVar33 = (float)((local_2b8.Ptr)->Transform).M[1][0] * (float)local_3b8._4_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[0][0] * (float)local_3b8._0_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[2][0] * fStack_3b0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][0] * fStack_3ac;
          fVar34 = (float)((local_2b8.Ptr)->Transform).M[1][1] * (float)local_3b8._4_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[0][1] * (float)local_3b8._0_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[2][1] * fStack_3b0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][1] * fStack_3ac;
          fVar35 = (float)((local_2b8.Ptr)->Transform).M[1][2] * (float)local_3b8._4_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[0][2] * (float)local_3b8._0_4_ +
                   (float)((local_2b8.Ptr)->Transform).M[2][2] * fStack_3b0 +
                   (float)((local_2b8.Ptr)->Transform).M[3][2] * fStack_3ac;
          pfVar8 = (float *)(local_220 + (longlong)local_350);
          fVar31 = (float)local_218._0_4_ /
                   SQRT(fVar34 * fVar34 + fVar33 * fVar33 + fVar35 * fVar35);
          *local_350 = fVar33 * fVar31;
          pfVar13 = (float *)(local_208 + (longlong)local_348);
          *local_348 = fVar34 * fVar31;
          pfVar14 = (float *)(local_200 + (longlong)local_340);
          *local_340 = fVar35 * fVar31;
          pfVar15 = (float *)(local_1f8 + (longlong)local_338);
          *local_338 = fVar41 * fVar30;
          pfVar16 = (float *)(local_230 + (longlong)local_330);
          *local_330 = fVar42 * fVar30;
          pfVar17 = (float *)(local_3e8._0_8_ + (longlong)local_328);
          *local_328 = fVar43 * fVar30;
          pfVar18 = (float *)(CONCAT44(local_3d8._s_0.Y,local_3d8._s_0.X) + (longlong)local_320);
          *local_320 = fVar22 * fVar29;
          pfVar19 = (float *)(local_3c8._0_8_ + (longlong)local_318);
          *local_318 = local_1d8;
          pfVar20 = (float *)(local_390 + (longlong)local_310);
          *local_310 = local_1c8;
          local_3f8 = local_3f8 + 1;
          pFVar26 = local_398;
          fVar29 = (float)local_218._0_4_;
          fVar22 = local_3a0;
          local_350 = pfVar8;
          local_348 = pfVar13;
          local_340 = pfVar14;
          local_338 = pfVar15;
          local_330 = pfVar16;
          local_328 = pfVar17;
          local_320 = pfVar18;
          local_318 = pfVar19;
          local_310 = pfVar20;
        } while (local_3f8 < pFVar3->NumInstances);
      }
      goto LAB_148f73299;
    }
  }
  local_3c8._0_8_ = 0x3f800000;
  local_3c8._s_0.Z = 0.0;
  fVar22 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[0][2];
  fVar33 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[0][3];
  fVar39 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[0][0];
  fVar40 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[0][1];
  fVar29 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[1][2];
  fVar41 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[1][3];
  fVar36 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[1][0];
  fVar38 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[1][1];
  fVar30 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[2][2];
  fVar42 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[2][3];
  fVar37 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[2][0];
  fVar32 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[2][1];
  fVar34 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[3][0];
  fVar35 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[3][1];
  fVar31 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[3][2];
  fVar43 = (float)((local_2b8.Ptr)->TransformInverseTransposed).M[3][3];
  local_128._0_4_ = fVar39;
  local_128._4_4_ = fVar40;
  fStack_120 = fVar22;
  fStack_11c = fVar33;
  local_118 = fVar36;
  fStack_114 = fVar38;
  fStack_110 = fVar29;
  fStack_10c = fVar41;
  local_108 = fVar37;
  fStack_104 = fVar32;
  fStack_100 = fVar30;
  fStack_fc = fVar42;
  local_f8 = fVar34;
  fStack_f4 = fVar35;
  fStack_f0 = fVar31;
  fStack_ec = fVar43;
  FNDITransformHandler::TransformUnitVector
            (local_298,(TVector<float> *)&local_3c8._s_0,(TMatrix<float> *)local_128);
  local_3d8._s_0.X = 0.0;
  local_3d8._s_0.Y = 1.0;
  local_3d8._s_0.Z = 0.0;
  local_128._0_4_ = fVar39;
  local_128._4_4_ = fVar40;
  fStack_120 = fVar22;
  fStack_11c = fVar33;
  local_118 = fVar36;
  fStack_114 = fVar38;
  fStack_110 = fVar29;
  fStack_10c = fVar41;
  local_108 = fVar37;
  fStack_104 = fVar32;
  fStack_100 = fVar30;
  fStack_fc = fVar42;
  local_f8 = fVar34;
  fStack_f4 = fVar35;
  fStack_f0 = fVar31;
  fStack_ec = fVar43;
  FNDITransformHandler::TransformUnitVector
            (local_298,(TVector<float> *)&local_3d8._s_0,(TMatrix<float> *)local_128);
  local_3e8._0_8_ = 0;
  local_3e8._s_0.Z = 1.0;
  local_128._0_4_ = fVar39;
  local_128._4_4_ = fVar40;
  fStack_120 = fVar22;
  fStack_11c = fVar33;
  local_118 = fVar36;
  fStack_114 = fVar38;
  fStack_110 = fVar29;
  fStack_10c = fVar41;
  local_108 = fVar37;
  fStack_104 = fVar32;
  fStack_100 = fVar30;
  fStack_fc = fVar42;
  local_f8 = fVar34;
  fStack_f4 = fVar35;
  fStack_f0 = fVar31;
  fStack_ec = fVar43;
  FNDITransformHandler::TransformUnitVector
            (local_298,(TVector<float> *)&local_3e8._s_0,(TMatrix<float> *)local_128);
  if (0 < param_1->NumInstances) {
    local_358 = (longlong)local_260.Y.AdvanceOffset * 4;
    local_360 = (longlong)local_260.Z.AdvanceOffset * 4;
    local_368 = (longlong)local_290.X.AdvanceOffset * 4;
    local_370 = (float *)((longlong)local_290.Y.AdvanceOffset * 4);
    local_378 = (float *)((longlong)local_290.Z.AdvanceOffset * 4);
    local_380 = (float *)((longlong)(int)local_308._s_0.Z * 4);
    local_388 = (float *)((longlong)local_2f0 * 4);
    local_390 = (longlong)local_2e0 * 4;
    pfVar8 = (float *)CONCAT44(uStack_2f4,local_2f8);
    do {
      iVar25 = iVar25 + 1;
      *local_260.X.Register = local_3e8._s_0.X;
      *local_260.Y.Register = local_3e8._s_0.Y;
      *local_260.Z.Register = local_3e8._s_0.Z;
      *local_290.X.Register = local_3d8._s_0.X;
      *local_290.Y.Register = local_3d8._s_0.Y;
      *local_290.Z.Register = local_3d8._s_0.Z;
      *(float *)local_308._0_8_ = local_3c8._s_0.X;
      *pfVar8 = local_3c8._s_0.Y;
      *local_2e8 = local_3c8._s_0.Z;
      local_2e8 = local_2e8 + local_2e0;
      pfVar8 = (float *)((longlong)local_388 + (longlong)pfVar8);
      local_260.Z.Register = local_260.Z.Register + local_260.Z.AdvanceOffset;
      local_260.X.Register = local_260.X.Register + local_260.X.AdvanceOffset;
      local_260.Y.Register = local_260.Y.Register + local_260.Y.AdvanceOffset;
      local_308._0_8_ = (float *)((longlong)local_380 + local_308._0_8_);
      local_290.Z.Register = (float *)((longlong)local_378 + (longlong)local_290.Z.Register);
      local_290.Y.Register = (float *)((longlong)local_370 + (longlong)local_290.Y.Register);
      local_290.X.Register = local_290.X.Register + local_290.X.AdvanceOffset;
      pFVar26 = local_398;
    } while (iVar25 < param_1->NumInstances);
  }
LAB_148f73299:
  if (pFVar26 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar26->_padding_;
    LOCK();
    lVar21 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar21 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar26->_padding_)(pFVar26,1);
    }
  }
  return;
}

// VMGetTriangleTangentBasis_Deprecated<FNDITransformHandlerNoop> @ 148f73330

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleTangentBasis_Deprecated<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  FStaticMeshVertexBuffers *this_00;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  FStaticMeshVertexDataInterface *pFVar31;
  undefined8 uVar32;
  bool bVar33;
  char cVar34;
  float fVar35;
  FStaticMeshLODResources *pFVar36;
  float *pfVar37;
  FIndexArrayView *pFVar38;
  TVector4<float> *pTVar39;
  TVector<float> *pTVar40;
  int iVar41;
  float *pfVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  float fVar48;
  longlong lVar49;
  longlong lVar50;
  uint uVar51;
  float *pfVar52;
  float *pfVar53;
  float *pfVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  int local_364;
  FStaticMeshLODResources *local_330;
  undefined1 local_2f0 [12];
  bool bStack_2e4;
  uint3 uStack_2e3;
  TVector4<float>_u_0 local_2d8;
  FStaticMeshLODResources *local_2c8;
  int local_2c0 [2];
  float *local_2b8;
  int local_2b0;
  float *local_2a8;
  float *local_2a0;
  float *local_298;
  float *local_290;
  FStaticMeshLODResources *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  FNDIOutputParam<UE::Math::TVector<float>_> local_260;
  FNDIOutputParam<UE::Math::TVector<float>_> local_230;
  float *local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  FNDIInputParam<UE::Math::TVector<float>_> local_1a8;
  TVector<float> local_158;
  TVector<float> local_14c;
  FIndexArrayView local_140;
  FIndexArrayView local_130;
  TVector4<float> local_118;
  TVector4<float> local_108;
  TVector4<float> local_f8;
  TVector4<float> local_e8;
  TVector4<float> local_d8 [11];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_2d8._s_0,
             param_1);
  local_2c8 = (FStaticMeshLODResources *)0x0;
  pFVar36 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      ((FInstanceData_GameThread *)CONCAT44(local_2d8._s_0.W,local_2d8._s_0.Z),
                       (FColorVertexBuffer **)local_2c0);
  local_330 = local_2c8;
  if (local_2c8 != pFVar36) {
    if (pFVar36 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar36->_padding_ = (int)pFVar36->_padding_ + 1;
      UNLOCK();
    }
    local_330 = pFVar36;
    if (local_2c8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_2c8->_padding_;
      LOCK();
      lVar49 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar49 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_2c8->_padding_)(local_2c8,1);
      }
    }
  }
  local_2c8 = (FStaticMeshLODResources *)((ulonglong)local_2c8 & 0xffffffff00000000);
  pfVar37 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_2c8);
  lVar49 = (longlong)(int)local_2c8;
  iVar41 = (int)local_2c8 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1a8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_2d8._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_260,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_230,param_1);
  if (local_330 == (FStaticMeshLODResources *)0x0) {
    local_2f0._0_8_ = (void *)0x0;
    stack0xfffffffffffffd18 = (ulonglong)uStack_2e3 << 0x28;
    pFVar38 = (FIndexArrayView *)local_2f0;
  }
  else {
    pFVar38 = FRawStaticIndexBuffer::GetArrayView(&local_330->IndexBuffer,&local_140);
  }
  local_2f0._0_8_ = pFVar38->UntypedIndexData;
  local_2f0._8_4_ = pFVar38->NumIndices;
  bStack_2e4 = pFVar38->b32Bit;
  uStack_2e3 = *(uint3 *)&pFVar38->field_0xd;
  if (local_330 != (FStaticMeshLODResources *)0x0) {
    pFVar38 = FRawStaticIndexBuffer::GetArrayView(&local_330->IndexBuffer,&local_130);
    fVar55 = (float)(pFVar38->NumIndices / 3 + -1);
    if (((-1 < (int)fVar55) && (local_330 != (FStaticMeshLODResources *)0x0)) &&
       ((local_330->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) {
      this_00 = &local_330->VertexBuffers;
      pFVar31 = (local_330->VertexBuffers).StaticMeshVertexBuffer.TangentsData;
      if (((pFVar31 != (FStaticMeshVertexDataInterface *)0x0) &&
          ((local_330->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
           (FStaticMeshVertexDataInterface *)0x0)) &&
         ((cVar34 = (**(code **)((longlong)*pFVar31 + 0x58))(), cVar34 != '\0' &&
          ((cVar34 = (**(code **)((longlong)
                                  *(local_330->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                                 0x58))(), uVar32 = local_2f0._0_8_, cVar34 != '\0' &&
           (0 < (int)(local_330->VertexBuffers).StaticMeshVertexBuffer.NumVertices)))))) {
        local_364 = 0;
        if (0 < param_1->NumInstances) {
          bVar33 = bStack_2e4;
          local_1d8 = (longlong)local_230.X.AdvanceOffset << 2;
          local_1e0 = (longlong)local_230.Y.AdvanceOffset << 2;
          local_1e8 = (longlong)local_230.Z.AdvanceOffset << 2;
          local_1f0 = (longlong)local_260.X.AdvanceOffset << 2;
          local_1f8 = (longlong)local_260.Y.AdvanceOffset << 2;
          local_1d0 = (longlong)local_260.Z.AdvanceOffset << 2;
          local_1c8 = (longlong)(int)local_2d8._s_0.Z << 2;
          local_1c0 = (longlong)local_2c0[0] << 2;
          local_1b8 = (longlong)local_2b0 << 2;
          local_290 = local_2b8;
          local_288 = local_2c8;
          local_298 = (float *)local_2d8._0_8_;
          local_2a0 = local_260.Z.Register;
          local_2a8 = local_260.Y.Register;
          local_268 = local_260.X.Register;
          local_270 = local_230.Z.Register;
          local_278 = local_230.Y.Register;
          local_280 = local_230.X.Register;
          pfVar52 = local_1a8.Z.InputPtr;
          pfVar53 = local_1a8.Y.InputPtr;
          pfVar54 = local_1a8.X.InputPtr;
          local_200 = pfVar37 + iVar41;
          do {
            fVar4 = *pfVar52;
            fVar5 = *pfVar53;
            fVar48 = fVar55;
            if ((int)*local_200 < (int)fVar55) {
              fVar48 = *local_200;
            }
            fVar6 = *pfVar54;
            pfVar52 = pfVar52 + local_1a8.Z.AdvanceOffset;
            fVar35 = 0.0;
            if (0 < (int)fVar48) {
              fVar35 = fVar48;
            }
            pfVar53 = pfVar53 + local_1a8.Y.AdvanceOffset;
            pfVar54 = pfVar54 + local_1a8.X.AdvanceOffset;
            lVar50 = (longlong)((int)fVar35 * 3);
            lVar2 = lVar50 * 2 + 4;
            lVar3 = lVar50 * 4 + 8;
            if (bVar33 == false) {
              uVar57 = (uint)*(ushort *)(lVar2 + uVar32);
              uVar56 = (uint)*(ushort *)(uVar32 + 2 + lVar50 * 2);
              uVar51 = (uint)*(ushort *)(uVar32 + lVar50 * 2);
            }
            else {
              uVar57 = *(uint *)(uVar32 + lVar3);
              uVar56 = *(uint *)(uVar32 + 4 + lVar50 * 4);
              uVar51 = *(uint *)(uVar32 + lVar50 * 4);
            }
            local_200 = local_200 + lVar49;
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,&local_118,uVar51);
            fVar48 = (pTVar39->field0_0x0)._s_0.Z;
            fVar35 = (pTVar39->field0_0x0)._s_0.Y;
            fVar7 = (pTVar39->field0_0x0)._s_0.X;
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,&local_108,uVar56);
            fVar8 = (pTVar39->field0_0x0)._s_0.X;
            fVar9 = (pTVar39->field0_0x0)._s_0.Y;
            fVar10 = (pTVar39->field0_0x0)._s_0.Z;
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentX
                                (&this_00->StaticMeshVertexBuffer,local_d8,uVar57);
            fVar11 = (pTVar39->field0_0x0)._s_0.X;
            fVar12 = (pTVar39->field0_0x0)._s_0.Y;
            fVar13 = (pTVar39->field0_0x0)._s_0.Z;
            if (bVar33 == false) {
              uVar57 = (uint)*(ushort *)(uVar32 + lVar2);
              uVar56 = (uint)*(ushort *)(uVar32 + 2 + lVar50 * 2);
              uVar51 = (uint)*(ushort *)(uVar32 + lVar50 * 2);
            }
            else {
              uVar57 = *(uint *)(lVar3 + uVar32);
              uVar56 = *(uint *)(uVar32 + 4 + lVar50 * 4);
              uVar51 = *(uint *)(uVar32 + lVar50 * 4);
            }
            pTVar40 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,&local_158,uVar51);
            fVar14 = (pTVar40->field0_0x0)._s_0.Z;
            fVar15 = (pTVar40->field0_0x0)._s_0.Y;
            fVar16 = (pTVar40->field0_0x0)._s_0.X;
            pTVar40 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,&local_14c,uVar56);
            fVar17 = (pTVar40->field0_0x0)._s_0.Z;
            fVar18 = (pTVar40->field0_0x0)._s_0.Y;
            fVar19 = (pTVar40->field0_0x0)._s_0.X;
            pTVar40 = FStaticMeshVertexBuffer::VertexTangentY
                                (&this_00->StaticMeshVertexBuffer,(TVector<float> *)local_2f0,uVar57
                                );
            fVar20 = (pTVar40->field0_0x0)._s_0.Z;
            fVar21 = (pTVar40->field0_0x0)._s_0.Y;
            fVar22 = (pTVar40->field0_0x0)._s_0.X;
            if (bVar33 == false) {
              uVar57 = (uint)*(ushort *)(lVar2 + uVar32);
              uVar56 = (uint)*(ushort *)(uVar32 + 2 + lVar50 * 2);
              uVar51 = (uint)*(ushort *)(uVar32 + lVar50 * 2);
            }
            else {
              uVar57 = *(uint *)(lVar3 + uVar32);
              uVar56 = *(uint *)(uVar32 + 4 + lVar50 * 4);
              uVar51 = *(uint *)(uVar32 + lVar50 * 4);
            }
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,&local_f8,uVar51);
            fVar23 = (pTVar39->field0_0x0)._s_0.Z;
            fVar24 = (pTVar39->field0_0x0)._s_0.Y;
            fVar25 = (pTVar39->field0_0x0)._s_0.X;
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,&local_e8,uVar56);
            fVar26 = (pTVar39->field0_0x0)._s_0.X;
            fVar27 = (pTVar39->field0_0x0)._s_0.Y;
            fVar28 = (pTVar39->field0_0x0)._s_0.Z;
            pTVar39 = FStaticMeshVertexBuffer::VertexTangentZ
                                (&this_00->StaticMeshVertexBuffer,(TVector4<float> *)&local_2d8._s_0
                                 ,uVar57);
            fVar29 = (pTVar39->field0_0x0)._s_0.Z;
            fVar30 = (pTVar39->field0_0x0)._s_0.Y;
            *local_280 = fVar4 * (pTVar39->field0_0x0)._s_0.X + fVar5 * fVar26 + fVar6 * fVar25;
            local_280 = (float *)(local_1d8 + (longlong)local_280);
            pfVar37 = (float *)(local_1e0 + (longlong)local_278);
            *local_278 = fVar4 * fVar30 + fVar5 * fVar27 + fVar6 * fVar24;
            pfVar42 = (float *)(local_1e8 + (longlong)local_270);
            *local_270 = fVar4 * fVar29 + fVar5 * fVar28 + fVar6 * fVar23;
            pfVar43 = (float *)(local_1f0 + (longlong)local_268);
            *local_268 = fVar5 * fVar19 + fVar6 * fVar16 + fVar4 * fVar22;
            pfVar44 = (float *)(local_1f8 + (longlong)local_2a8);
            *local_2a8 = fVar5 * fVar18 + fVar6 * fVar15 + fVar4 * fVar21;
            pfVar45 = (float *)(local_1d0 + (longlong)local_2a0);
            *local_2a0 = fVar5 * fVar17 + fVar6 * fVar14 + fVar4 * fVar20;
            pfVar46 = (float *)(local_1c8 + (longlong)local_298);
            *local_298 = fVar4 * fVar11 + fVar5 * fVar8 + fVar6 * fVar7;
            pFVar36 = (FStaticMeshLODResources *)((longlong)&local_288->_padding_ + local_1c0);
            *(float *)&local_288->_padding_ = fVar4 * fVar12 + fVar5 * fVar9 + fVar6 * fVar35;
            pfVar47 = (float *)(local_1b8 + (longlong)local_290);
            *local_290 = fVar4 * fVar13 + fVar5 * fVar10 + fVar6 * fVar48;
            local_364 = local_364 + 1;
            local_2a8 = pfVar44;
            local_2a0 = pfVar45;
            local_298 = pfVar46;
            local_290 = pfVar47;
            local_288 = pFVar36;
            local_278 = pfVar37;
            local_270 = pfVar42;
            local_268 = pfVar43;
          } while (local_364 < param_1->NumInstances);
        }
        goto LAB_148f73c82;
      }
    }
  }
  iVar41 = 0;
  if (0 < param_1->NumInstances) {
    pFVar36 = local_2c8;
    do {
      iVar41 = iVar41 + 1;
      *local_230.X.Register = 0.0;
      *local_230.Y.Register = 0.0;
      *local_230.Z.Register = 1.0;
      *local_260.X.Register = 0.0;
      *local_260.Y.Register = 1.0;
      *local_260.Z.Register = 0.0;
      *(float *)local_2d8._0_8_ = 1.0;
      *(undefined4 *)&pFVar36->_padding_ = 0;
      *local_2b8 = 0.0;
      local_2b8 = local_2b8 + local_2b0;
      local_260.X.Register = local_260.X.Register + local_260.X.AdvanceOffset;
      local_230.Y.Register = local_230.Y.Register + local_230.Y.AdvanceOffset;
      local_230.Z.Register = local_230.Z.Register + local_230.Z.AdvanceOffset;
      pFVar36 = (FStaticMeshLODResources *)
                ((longlong)&pFVar36->_padding_ + (longlong)local_2c0[0] * 4);
      local_2d8._0_8_ = (float *)(local_2d8._0_8_ + (longlong)(int)local_2d8._s_0.Z * 4);
      local_260.Z.Register = local_260.Z.Register + local_260.Z.AdvanceOffset;
      local_260.Y.Register = local_260.Y.Register + local_260.Y.AdvanceOffset;
      local_230.X.Register = local_230.X.Register + local_230.X.AdvanceOffset;
    } while (iVar41 < param_1->NumInstances);
  }
LAB_148f73c82:
  if (local_330 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_330->_padding_;
    LOCK();
    lVar49 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar49 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_330->_padding_)(local_330,1);
    }
  }
  return;
}

// VMGetUnfilteredSocketTransform<FNDITransformHandler> @ 148f73ce0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSocketTransform<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  longlong lVar41;
  FStaticMeshLODResources *this_00;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  FStaticMeshLODResources *pFVar47;
  float *pfVar48;
  float *pfVar49;
  float *pfVar50;
  uint uVar51;
  ulonglong uVar53;
  float *pfVar54;
  FStaticMeshLODResources *pFVar55;
  int iVar56;
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  float *pfVar60;
  float *pfVar61;
  float *pfVar62;
  float *pfVar63;
  float fVar64;
  float *pfVar65;
  bool bVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float *local_2e8;
  undefined1 local_2d8 [16];
  int local_2c8;
  longlong local_2c0;
  float local_2b8;
  longlong local_2b0;
  float local_2a8;
  longlong local_2a0;
  float local_298;
  FVectorVMExternalFunctionContext *local_290;
  float local_288;
  undefined1 local_278 [12];
  undefined4 uStack_26c;
  undefined1 local_268 [12];
  undefined4 uStack_25c;
  longlong local_258;
  float fStack_250;
  undefined4 uStack_24c;
  longlong local_248;
  float fStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  float fStack_230;
  undefined4 uStack_22c;
  longlong local_228;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  FNDIOutputParam<UE::Math::TVector<float>_> local_208;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1d8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1a8;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_178;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_128;
  FStaticMeshLODResources *local_118;
  FColorVertexBuffer *local_110 [2];
  longlong local_100;
  longlong local_f8;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  float fVar52;
  
  local_290 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_128,param_1);
  iVar56 = 0;
  local_118 = (FStaticMeshLODResources *)0x0;
  pFVar47 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_128.Ptr,local_110);
  this_00 = local_118;
  pFVar55 = local_118;
  if (local_118 != pFVar47) {
    if (pFVar47 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar47->_padding_ = (int)pFVar47->_padding_ + 1;
      UNLOCK();
    }
    bVar66 = local_118 != (FStaticMeshLODResources *)0x0;
    pFVar55 = pFVar47;
    local_118 = pFVar47;
    if (bVar66) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>
            ((FExternalFuncInputHandler<int> *)local_2d8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_208,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_178,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1d8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1a8,param_1);
  uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar42 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar7 = __real_3f800000;
  uVar4 = (local_128.Ptr)->NumFilteredSockets;
  fVar64 = (float)(~uVar4 + ((local_128.Ptr)->FilteredAndUnfilteredSockets).ArrayNum);
  if ((int)fVar64 < 0) {
    local_268._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_268._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    local_268._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_25c = 0x3f800000;
    fVar73 = (float)((local_128.Ptr)->Transform).M[1][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar75 = (float)((local_128.Ptr)->Transform).M[1][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar76 = (float)((local_128.Ptr)->Transform).M[1][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar74 = (float)((local_128.Ptr)->Transform).M[0][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar79 = (float)((local_128.Ptr)->Transform).M[0][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar68 = (float)((local_128.Ptr)->Transform).M[0][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    dVar13 = ((local_128.Ptr)->Transform).M[3][2];
    fVar78 = (float)((local_128.Ptr)->Transform).M[2][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar77 = (float)((local_128.Ptr)->Transform).M[2][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar69 = (float)((local_128.Ptr)->Transform).M[2][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    dVar14 = ((local_128.Ptr)->Transform).M[3][0];
    dVar15 = ((local_128.Ptr)->Transform).M[3][1];
    fVar67 = ((local_128.Ptr)->Rotation).X;
    fVar70 = ((local_128.Ptr)->Rotation).Y;
    fVar71 = ((local_128.Ptr)->Rotation).Z;
    fVar72 = ((local_128.Ptr)->Rotation).W;
    fVar7 = UE::Math::TQuat<float>::Identity.X;
    fVar64 = UE::Math::TQuat<float>::Identity.Y;
    fVar8 = UE::Math::TQuat<float>::Identity.Z;
    fVar52 = UE::Math::TQuat<float>::Identity.W;
    local_138 = fVar52 * fVar67 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                fVar72 * fVar7 +
                fVar8 * fVar70 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                fVar64 * fVar71 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fStack_134 = fVar8 * fVar67 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                 fVar72 * fVar64 +
                 fVar52 * fVar70 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                 fVar7 * fVar71 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fStack_130 = fVar64 * fVar67 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                 fVar72 * fVar8 +
                 fVar7 * fVar70 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                 fVar52 * fVar71 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fStack_12c = fVar7 * fVar67 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                 fVar72 * fVar52 +
                 fVar64 * fVar70 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                 fVar8 * fVar71 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_2d8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_278._4_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    local_278._0_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    local_278._8_4_ = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    uStack_26c = 0;
    local_218 = (float)((local_128.Ptr)->TransformInverseTransposed).M[1][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                (float)((local_128.Ptr)->TransformInverseTransposed).M[0][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                (float)((local_128.Ptr)->TransformInverseTransposed).M[2][0] *
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                (float)((local_128.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    fStack_214 = (float)((local_128.Ptr)->TransformInverseTransposed).M[1][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[0][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[2][1] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    fStack_210 = (float)((local_128.Ptr)->TransformInverseTransposed).M[1][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[0][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[2][2] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    fStack_20c = (float)((local_128.Ptr)->TransformInverseTransposed).M[1][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[0][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[2][3] *
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                 (float)((local_128.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    local_2d8._0_8_ =
         (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    if (0 < param_1->NumInstances) {
      local_100 = (longlong)local_208.X.AdvanceOffset * 4;
      local_f8 = (longlong)local_208.Y.AdvanceOffset * 4;
      local_e8 = (longlong)local_208.Z.AdvanceOffset * 4;
      local_d8 = (longlong)local_178.X.AdvanceOffset * 4;
      local_278._0_8_ = (longlong)local_178.Y.AdvanceOffset * 4;
      local_268._0_8_ = (longlong)local_178.Z.AdvanceOffset * 4;
      local_258 = (longlong)local_178.W.AdvanceOffset * 4;
      local_248 = (longlong)local_1d8.X.AdvanceOffset * 4;
      local_238 = (longlong)local_1d8.Y.AdvanceOffset * 4;
      local_228 = (longlong)local_1d8.Z.AdvanceOffset * 4;
      local_2c0 = (longlong)local_1a8.X.AdvanceOffset * 4;
      local_2b0 = (longlong)local_1a8.Y.AdvanceOffset * 4;
      local_2a0 = (longlong)local_1a8.Z.AdvanceOffset * 4;
      local_2d8._0_8_ = local_1a8.Y.Register;
      local_2e8 = local_1a8.X.Register;
      pfVar48 = local_208.Z.Register;
      pfVar49 = local_208.Y.Register;
      pfVar50 = local_178.X.Register;
      pfVar54 = local_1a8.Z.Register;
      pfVar57 = local_208.X.Register;
      pfVar58 = local_178.W.Register;
      pfVar59 = local_178.Z.Register;
      pfVar60 = local_178.Y.Register;
      pfVar62 = local_1d8.X.Register;
      pfVar63 = local_1d8.Z.Register;
      pfVar65 = local_1d8.Y.Register;
      do {
        iVar56 = iVar56 + 1;
        *pfVar57 = fVar73 + fVar74 + fVar78 + (float)dVar14 * 1.0;
        *pfVar49 = fVar75 + fVar79 + fVar77 + (float)dVar15 * 1.0;
        *pfVar48 = fVar76 + fVar68 + fVar69 + (float)dVar13 * 1.0;
        *pfVar50 = local_138;
        *pfVar60 = fStack_134;
        *pfVar59 = fStack_130;
        *pfVar58 = fStack_12c;
        *pfVar62 = local_218;
        *pfVar65 = fStack_214;
        *pfVar63 = fStack_210;
        *local_2e8 = (float)uVar42;
        pfVar61 = (float *)(local_2d8._0_8_ + (longlong)local_1a8.Y.AdvanceOffset * 4);
        *(undefined4 *)local_2d8._0_8_ = uVar43;
        *pfVar54 = (float)uVar44;
        pfVar48 = pfVar48 + local_208.Z.AdvanceOffset;
        pfVar49 = pfVar49 + local_208.Y.AdvanceOffset;
        pfVar50 = pfVar50 + local_178.X.AdvanceOffset;
        pfVar54 = pfVar54 + local_1a8.Z.AdvanceOffset;
        pFVar55 = local_118;
        pfVar57 = pfVar57 + local_208.X.AdvanceOffset;
        pfVar58 = pfVar58 + local_178.W.AdvanceOffset;
        pfVar59 = pfVar59 + local_178.Z.AdvanceOffset;
        pfVar60 = pfVar60 + local_178.Y.AdvanceOffset;
        pfVar62 = pfVar62 + local_1d8.X.AdvanceOffset;
        pfVar63 = pfVar63 + local_1d8.Z.AdvanceOffset;
        pfVar65 = pfVar65 + local_1d8.Y.AdvanceOffset;
        local_2e8 = local_2e8 + local_1a8.X.AdvanceOffset;
        local_2d8._0_8_ = pfVar61;
      } while (iVar56 < local_290->NumInstances);
    }
  }
  else {
    iVar56 = 0;
    uVar42 = uStack_24c;
    uVar43 = uStack_23c;
    uVar44 = uStack_22c;
    uVar45 = uStack_21c;
    if (0 < param_1->NumInstances) {
      do {
        uStack_21c = uVar45;
        uStack_22c = uVar44;
        uStack_23c = uVar43;
        uStack_24c = uVar42;
        pfVar48 = (float *)(local_2d8._0_8_ + (longlong)local_2c8 * 4);
        fVar8 = fVar64;
        if ((int)*(float *)local_2d8._0_8_ < (int)fVar64) {
          fVar8 = *(float *)local_2d8._0_8_;
        }
        fVar52 = 0.0;
        if (0 < (int)fVar8) {
          fVar52 = fVar8;
        }
        uVar51 = (int)fVar52 + uVar4;
        uVar46 = 0;
        if ((int)uVar51 < ((local_128.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar46 = ~uVar51 >> 0x1f;
        }
        local_2d8._0_8_ = pfVar48;
        if ((uVar46 == 0) &&
           (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar66)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(ushort *)
                 (((local_128.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
                 (longlong)(int)uVar51 * 2);
        uVar53 = (ulonglong)uVar3;
        if ((((local_128.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar3) &&
           (bVar66 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar66)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = ((local_128.Ptr)->CachedSockets).AllocatorInstance.Data;
        fVar67 = (float)((local_128.Ptr)->Transform).M[0][2];
        pFVar2 = pFVar5 + uVar53 * 0x30 + 0x10;
        fVar8 = *(float *)pFVar2;
        fVar52 = *(float *)(pFVar2 + 4);
        local_248 = *(longlong *)pFVar2;
        local_238 = *(longlong *)pFVar2;
        local_228 = *(longlong *)pFVar2;
        local_2b0 = *(longlong *)pFVar2;
        local_2a0 = *(longlong *)pFVar2;
        local_290 = *(FVectorVMExternalFunctionContext **)pFVar2;
        local_2a8 = *(float *)(pFVar2 + 8);
        fVar78 = (float)((local_128.Ptr)->Transform).M[0][0];
        fVar79 = (float)((local_128.Ptr)->Transform).M[0][1];
        local_218 = (float)((local_128.Ptr)->Transform).M[1][0];
        fStack_214 = (float)((local_128.Ptr)->Transform).M[1][1];
        fStack_210 = (float)((local_128.Ptr)->Transform).M[1][2];
        fStack_20c = (float)((local_128.Ptr)->Transform).M[1][3];
        fVar70 = (float)((local_128.Ptr)->Transform).M[2][0];
        fVar71 = (float)((local_128.Ptr)->Transform).M[2][1];
        fStack_d0 = (float)((local_128.Ptr)->Transform).M[2][2];
        fStack_cc = (float)((local_128.Ptr)->Transform).M[2][3];
        fVar72 = (float)((local_128.Ptr)->Transform).M[3][0];
        fVar74 = (float)((local_128.Ptr)->Transform).M[3][1];
        fStack_e0 = (float)((local_128.Ptr)->Transform).M[3][2];
        fStack_dc = (float)((local_128.Ptr)->Transform).M[3][3];
        local_e8 = CONCAT44(fVar74,fVar72);
        uStack_21c = 0x3f800000;
        dVar13 = ((local_128.Ptr)->PrevTransform).M[1][0];
        dVar14 = ((local_128.Ptr)->PrevTransform).M[1][1];
        local_d8 = CONCAT44(fVar71,fVar70);
        dVar15 = ((local_128.Ptr)->PrevTransform).M[1][2];
        dVar16 = ((local_128.Ptr)->PrevTransform).M[0][2];
        dVar17 = ((local_128.Ptr)->PrevTransform).M[0][0];
        dVar18 = ((local_128.Ptr)->PrevTransform).M[0][1];
        uStack_22c = 0x3f800000;
        dVar19 = ((local_128.Ptr)->PrevTransform).M[2][2];
        dVar20 = ((local_128.Ptr)->PrevTransform).M[2][0];
        dVar21 = ((local_128.Ptr)->PrevTransform).M[2][1];
        dVar22 = ((local_128.Ptr)->PrevTransform).M[3][2];
        dVar23 = ((local_128.Ptr)->PrevTransform).M[3][0];
        dVar24 = ((local_128.Ptr)->PrevTransform).M[3][1];
        if ((local_128.Ptr)->DeltaSeconds <= 0.0) {
          fVar77 = 0.0;
        }
        else {
          fVar77 = fVar7 / (local_128.Ptr)->DeltaSeconds;
        }
        pfVar48 = local_208.X.Register + local_208.X.AdvanceOffset;
        uStack_23c = 0x3f800000;
        *local_208.X.Register =
             fVar52 * local_218 + fVar8 * fVar78 + local_2a8 * fVar70 + fVar72 * 1.0;
        *local_208.Y.Register =
             fVar52 * fStack_214 + fVar8 * fVar79 + local_2a8 * fVar71 + fVar74 * 1.0;
        local_208.Y.Register = local_208.Y.Register + local_208.Y.AdvanceOffset;
        *local_208.Z.Register =
             fVar52 * fStack_210 + fVar8 * fVar67 + local_2a8 * fStack_d0 + fStack_e0 * 1.0;
        fVar25 = ((local_128.Ptr)->Rotation).X;
        fVar26 = ((local_128.Ptr)->Rotation).Y;
        fVar27 = ((local_128.Ptr)->Rotation).Z;
        fVar28 = ((local_128.Ptr)->Rotation).W;
        local_208.Z.Register = local_208.Z.Register + local_208.Z.AdvanceOffset;
        pFVar2 = pFVar5 + uVar53 * 0x30;
        fVar29 = *(float *)pFVar2;
        fVar30 = *(float *)(pFVar2 + 4);
        fVar31 = *(float *)(pFVar2 + 8);
        fVar32 = *(float *)(pFVar2 + 0xc);
        pfVar49 = local_178.X.Register + local_178.X.AdvanceOffset;
        fVar68 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
        fVar75 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
        fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
        fVar69 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
        fVar76 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
        fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
        fVar73 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        *local_178.X.Register =
             fVar32 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
             fVar28 * fVar29 +
             fVar31 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
             fVar30 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        pfVar50 = local_178.Y.Register + local_178.Y.AdvanceOffset;
        *local_178.Y.Register =
             fVar31 * fVar25 * fVar68 + fVar28 * fVar30 + fVar32 * fVar26 * fVar69 +
             fVar29 * fVar27 * fVar73;
        *local_178.Z.Register =
             fVar30 * fVar25 * fVar75 + fVar28 * fVar31 + fVar29 * fVar26 * fVar76 +
             fVar32 * fVar27 * fVar9;
        local_178.Z.Register = local_178.Z.Register + local_178.Z.AdvanceOffset;
        *local_178.W.Register =
             fVar29 * fVar25 * fVar10 + fVar28 * fVar32 + fVar30 * fVar26 * fVar11 +
             fVar31 * fVar27 * fVar12;
        pFVar5 = pFVar5 + uVar53 * 0x30 + 0x20;
        fVar68 = *(float *)pFVar5;
        fVar69 = *(float *)(pFVar5 + 4);
        local_258 = *(longlong *)pFVar5;
        local_2c0 = *(longlong *)pFVar5;
        local_2b8 = *(float *)(pFVar5 + 8);
        dVar33 = ((local_128.Ptr)->TransformInverseTransposed).M[0][2];
        local_178.W.Register = local_178.W.Register + local_178.W.AdvanceOffset;
        dVar34 = ((local_128.Ptr)->TransformInverseTransposed).M[0][1];
        pfVar54 = local_1d8.X.Register + local_1d8.X.AdvanceOffset;
        dVar35 = ((local_128.Ptr)->TransformInverseTransposed).M[1][2];
        dVar36 = ((local_128.Ptr)->TransformInverseTransposed).M[2][2];
        uStack_24c = 0;
        dVar37 = ((local_128.Ptr)->TransformInverseTransposed).M[1][1];
        dVar38 = ((local_128.Ptr)->TransformInverseTransposed).M[2][1];
        dVar39 = ((local_128.Ptr)->TransformInverseTransposed).M[3][2];
        dVar40 = ((local_128.Ptr)->TransformInverseTransposed).M[3][1];
        *local_1d8.X.Register =
             (float)((local_128.Ptr)->TransformInverseTransposed).M[0][0] * fVar68 +
             (float)((local_128.Ptr)->TransformInverseTransposed).M[1][0] * fVar69 +
             (float)((local_128.Ptr)->TransformInverseTransposed).M[2][0] * local_2b8 +
             (float)((local_128.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
        pfVar57 = local_1d8.Y.Register + local_1d8.Y.AdvanceOffset;
        *local_1d8.Y.Register =
             (float)dVar34 * fVar68 + (float)dVar37 * fVar69 + (float)dVar38 * local_2b8 +
             (float)dVar40 * 0.0;
        *local_1d8.Z.Register =
             (float)dVar33 * fVar68 + (float)dVar35 * fVar69 + (float)dVar36 * local_2b8 +
             (float)dVar39 * 0.0;
        local_1d8.Z.Register = local_1d8.Z.Register + local_1d8.Z.AdvanceOffset;
        iVar56 = iVar56 + 1;
        pfVar58 = local_1a8.X.Register + local_1a8.X.AdvanceOffset;
        *local_1a8.X.Register =
             ((fVar52 * local_218 + fVar8 * fVar78 + local_2a8 * fVar70 + fVar72 * 1.0) -
             ((float)dVar13 * fVar52 + (float)dVar17 * fVar8 + (float)dVar20 * local_2a8 +
             (float)dVar23 * 1.0)) * fVar77;
        pfVar59 = local_1a8.Y.Register + local_1a8.Y.AdvanceOffset;
        *local_1a8.Y.Register =
             ((fVar52 * fStack_214 + fVar8 * fVar79 + local_2a8 * fVar71 + fVar74 * 1.0) -
             ((float)dVar14 * fVar52 + (float)dVar18 * fVar8 + (float)dVar21 * local_2a8 +
             (float)dVar24 * 1.0)) * fVar77;
        *local_1a8.Z.Register =
             ((fVar52 * fStack_210 + fVar8 * fVar67 + local_2a8 * fStack_d0 + fStack_e0 * 1.0) -
             ((float)dVar15 * fVar52 + (float)dVar16 * fVar8 + (float)dVar19 * local_2a8 +
             (float)dVar22 * 1.0)) * fVar77;
        local_1a8.Z.Register = local_1a8.Z.Register + local_1a8.Z.AdvanceOffset;
        pFVar55 = local_118;
        local_298 = local_2a8;
        local_288 = local_2a8;
        fStack_250 = local_2b8;
        uVar42 = 0;
        fStack_240 = local_2a8;
        uVar43 = 0x3f800000;
        fStack_230 = local_2a8;
        uVar44 = 0x3f800000;
        fStack_220 = local_2a8;
        uVar45 = 0x3f800000;
        local_208.X.Register = pfVar48;
        local_1d8.X.Register = pfVar54;
        local_1d8.Y.Register = pfVar57;
        local_1a8.X.Register = pfVar58;
        local_1a8.Y.Register = pfVar59;
        local_178.X.Register = pfVar49;
        local_178.Y.Register = pfVar50;
      } while (iVar56 < param_1->NumInstances);
    }
  }
  if (pFVar55 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar55->_padding_;
    LOCK();
    lVar41 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar41 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar55->_padding_)(pFVar55,1);
    }
  }
  return;
}

// VMGetUnfilteredSocketTransform<FNDITransformHandlerNoop> @ 148f749b0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSocketTransform<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  ushort uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FStaticMeshLODResources *pFVar15;
  FStaticMeshLODResources *pFVar16;
  bool bVar17;
  uint uVar18;
  FStaticMeshLODResources *pFVar19;
  longlong lVar20;
  float *pfVar21;
  uint uVar22;
  ulonglong uVar24;
  FStaticMeshLODResources *pFVar25;
  int iVar26;
  float fVar27;
  float *pfVar28;
  float fVar29;
  float local_258;
  float fStack_254;
  float *local_248;
  float *local_240;
  undefined8 local_230;
  int local_220 [2];
  longlong local_218;
  float local_210;
  longlong local_208;
  float local_200;
  longlong local_1f8;
  float local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  longlong local_1a0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_108;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_c8;
  FStaticMeshLODResources *local_b8;
  FColorVertexBuffer *local_b0 [17];
  float fVar23;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_c8,param_1);
  iVar26 = 0;
  local_b8 = (FStaticMeshLODResources *)0x0;
  pFVar19 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_c8.Ptr,local_b0);
  pFVar15 = local_b8;
  pFVar25 = local_b8;
  pFVar16 = local_b8;
  if (local_b8 != pFVar19) {
    if (pFVar19 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
      UNLOCK();
    }
    pFVar25 = pFVar19;
    pFVar16 = pFVar19;
    if (local_b8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_b8->_padding_;
      LOCK();
      lVar20 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_b8->_padding_;
        local_b8 = pFVar19;
        (**(code **)*plVar1)(pFVar15,1);
        pFVar16 = local_b8;
      }
    }
  }
  local_b8 = pFVar16;
  local_220[0] = 0;
  local_230 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_220);
  local_230 = local_230 + local_220[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  fVar9 = UE::Math::TQuat<float>::Identity.W;
  fVar29 = UE::Math::TQuat<float>::Identity.Z;
  fVar23 = UE::Math::TQuat<float>::Identity.Y;
  fVar8 = UE::Math::TQuat<float>::Identity.X;
  uVar14 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar12 = __real_3f800000;
  uVar5 = (local_c8.Ptr)->NumFilteredSockets;
  fVar27 = (float)(~uVar5 + ((local_c8.Ptr)->FilteredAndUnfilteredSockets).ArrayNum);
  if ((int)fVar27 < 0) {
    if (0 < param_1->NumInstances) {
      fStack_254 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
      ;
      local_258 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_1a0 = (longlong)local_168.Z.AdvanceOffset * 4;
      local_1c8 = local_108.W.Register;
      local_1d0 = local_108.Z.Register;
      local_218 = (longlong)local_138.X.AdvanceOffset * 4;
      local_1d8 = local_108.Y.Register;
      local_1e0 = local_108.X.Register;
      local_208 = (longlong)local_138.Y.AdvanceOffset * 4;
      local_1b0 = local_168.Z.Register;
      local_230._4_4_ =
           (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
      fVar27 = local_230._4_4_;
      local_1b8 = local_168.Y.Register;
      local_1f8 = (longlong)local_138.Z.AdvanceOffset * 4;
      local_230._0_4_ = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
      fVar12 = (float)local_230;
      local_1c0 = local_168.X.Register;
      local_230 = local_138.Z.Register;
      local_1e8 = local_198.Z.Register;
      local_240 = local_138.Y.Register;
      local_248 = local_198.Y.Register;
      local_1a8 = local_138.X.Register;
      pfVar21 = local_198.X.Register;
      do {
        *pfVar21 = local_258;
        pfVar21 = pfVar21 + local_198.X.AdvanceOffset;
        iVar26 = iVar26 + 1;
        *local_248 = fStack_254;
        local_248 = local_248 + local_198.Y.AdvanceOffset;
        *local_1e8 = (float)uVar13;
        local_1e8 = local_1e8 + local_198.Z.AdvanceOffset;
        *local_1e0 = fVar8;
        local_1e0 = local_1e0 + local_108.X.AdvanceOffset;
        *local_1d8 = fVar23;
        local_1d8 = local_1d8 + local_108.Y.AdvanceOffset;
        *local_1d0 = fVar29;
        local_1d0 = local_1d0 + local_108.Z.AdvanceOffset;
        *local_1c8 = fVar9;
        local_1c8 = local_1c8 + local_108.W.AdvanceOffset;
        *local_1c0 = fVar12;
        local_1c0 = local_1c0 + local_168.X.AdvanceOffset;
        *local_1b8 = fVar27;
        local_1b8 = local_1b8 + local_168.Y.AdvanceOffset;
        pfVar2 = local_1b0 + local_168.Z.AdvanceOffset;
        *local_1b0 = (float)uVar14;
        pfVar28 = local_1a8 + local_138.X.AdvanceOffset;
        *local_1a8 = local_258;
        *local_240 = fStack_254;
        *local_230 = (float)uVar13;
        pFVar25 = local_b8;
        local_240 = local_240 + local_138.Y.AdvanceOffset;
        local_230 = local_230 + local_138.Z.AdvanceOffset;
        local_1b0 = pfVar2;
        local_1a8 = pfVar28;
      } while (iVar26 < param_1->NumInstances);
    }
  }
  else {
    iVar26 = 0;
    if (0 < param_1->NumInstances) {
      do {
        lVar20 = (longlong)local_220[0];
        fVar8 = fVar27;
        if ((int)*local_230 < (int)fVar27) {
          fVar8 = *local_230;
        }
        fVar23 = 0.0;
        if (0 < (int)fVar8) {
          fVar23 = fVar8;
        }
        uVar22 = (int)fVar23 + uVar5;
        uVar18 = 0;
        if ((int)uVar22 < ((local_c8.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar18 = ~uVar22 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar4 = *(ushort *)
                 (((local_c8.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
                 (longlong)(int)uVar22 * 2);
        uVar24 = (ulonglong)uVar4;
        if ((((local_c8.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar4) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = ((local_c8.Ptr)->CachedSockets).AllocatorInstance.Data;
        pFVar3 = pFVar6 + uVar24 * 0x30 + 0x10;
        fVar8 = *(float *)pFVar3;
        fVar23 = *(float *)(pFVar3 + 4);
        local_208 = *(longlong *)pFVar3;
        local_1f8 = *(longlong *)pFVar3;
        local_200 = *(float *)(pFVar3 + 8);
        if ((local_c8.Ptr)->DeltaSeconds <= 0.0) {
          fVar29 = 0.0;
        }
        else {
          fVar29 = fVar12 / (local_c8.Ptr)->DeltaSeconds;
        }
        *local_198.X.Register = fVar8;
        local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
        *local_198.Y.Register = fVar23;
        local_198.Y.Register = local_198.Y.Register + local_198.Y.AdvanceOffset;
        *local_198.Z.Register = local_200;
        local_198.Z.Register = local_198.Z.Register + local_198.Z.AdvanceOffset;
        pFVar3 = pFVar6 + uVar24 * 0x30;
        fVar9 = *(float *)(pFVar3 + 4);
        fVar10 = *(float *)(pFVar3 + 8);
        fVar11 = *(float *)(pFVar3 + 0xc);
        *local_108.X.Register = *(float *)pFVar3;
        local_108.X.Register = local_108.X.Register + local_108.X.AdvanceOffset;
        *local_108.Y.Register = fVar9;
        local_108.Y.Register = local_108.Y.Register + local_108.Y.AdvanceOffset;
        *local_108.Z.Register = fVar10;
        local_108.Z.Register = local_108.Z.Register + local_108.Z.AdvanceOffset;
        *local_108.W.Register = fVar11;
        pFVar6 = pFVar6 + uVar24 * 0x30 + 0x20;
        fVar9 = *(float *)(pFVar6 + 4);
        local_218 = *(longlong *)pFVar6;
        local_210 = *(float *)(pFVar6 + 8);
        local_108.W.Register = local_108.W.Register + local_108.W.AdvanceOffset;
        pfVar21 = local_168.X.Register + local_168.X.AdvanceOffset;
        *local_168.X.Register = *(float *)pFVar6;
        *local_168.Y.Register = fVar9;
        local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
        *local_168.Z.Register = local_210;
        local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
        *local_138.X.Register = (fVar8 - fVar8) * fVar29;
        local_138.X.Register = local_138.X.Register + local_138.X.AdvanceOffset;
        *local_138.Y.Register = (fVar23 - fVar23) * fVar29;
        local_138.Y.Register = local_138.Y.Register + local_138.Y.AdvanceOffset;
        pfVar2 = local_138.Z.Register + local_138.Z.AdvanceOffset;
        iVar26 = iVar26 + 1;
        *local_138.Z.Register = 0.0;
        pFVar25 = local_b8;
        local_230 = local_230 + lVar20;
        local_1f0 = local_200;
        local_168.X.Register = pfVar21;
        local_138.Z.Register = pfVar2;
      } while (iVar26 < param_1->NumInstances);
    }
  }
  if (pFVar25 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar25->_padding_;
    LOCK();
    lVar20 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar20 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar25->_padding_)(pFVar25,1);
    }
  }
  return;
}

// VMGetUnfilteredSocketTransformInterpolated<FNDITransformHandler> @ 148f75100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSocketTransformInterpolated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  longlong lVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  FStaticMeshLODResources *this_00;
  uint uVar38;
  FStaticMeshLODResources *pFVar39;
  TQuat<float> *pTVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  uint uVar44;
  ulonglong uVar46;
  float *pfVar47;
  FStaticMeshLODResources *pFVar48;
  float *pfVar49;
  float *pfVar50;
  float *pfVar51;
  float *pfVar52;
  float *pfVar53;
  int iVar54;
  float *pfVar55;
  int iVar56;
  float *pfVar57;
  bool bVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float *local_308;
  float *local_2f8;
  TQuat<float> local_238;
  FNDIOutputParam<UE::Math::TVector<float>_> local_228;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_198;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_148;
  FStaticMeshLODResources *local_138;
  FColorVertexBuffer *local_130 [2];
  longlong local_120;
  TQuat<float> local_118;
  TQuat<float> local_108;
  FExternalFuncInputHandler<int> local_f8;
  FExternalFuncInputHandler<float> local_e0 [7];
  int iVar45;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_148,param_1);
  iVar54 = 0;
  local_138 = (FStaticMeshLODResources *)0x0;
  pFVar39 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_148.Ptr,local_130);
  this_00 = local_138;
  pFVar48 = local_138;
  if (local_138 != pFVar39) {
    if (pFVar39 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar39->_padding_ = (int)pFVar39->_padding_ + 1;
      UNLOCK();
    }
    bVar58 = local_138 != (FStaticMeshLODResources *)0x0;
    pFVar48 = pFVar39;
    local_138 = pFVar39;
    if (bVar58) {
      FRefCountBase::Release((FRefCountBase *)this_00);
    }
  }
  VectorVM::FExternalFuncInputHandler<int>::FExternalFuncInputHandler<int>(&local_f8,param_1);
  VectorVM::FExternalFuncInputHandler<float>::FExternalFuncInputHandler<float>(local_e0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_228,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_198,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  uVar37 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar36 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar35 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar14 = __real_3f800000;
  uVar6 = (local_148.Ptr)->NumFilteredSockets;
  iVar56 = ~uVar6 + ((local_148.Ptr)->FilteredAndUnfilteredSockets).ArrayNum;
  if (iVar56 < 0) {
    fVar66 = (float)((local_148.Ptr)->Transform).M[1][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar67 = (float)((local_148.Ptr)->Transform).M[1][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar68 = (float)((local_148.Ptr)->Transform).M[1][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    fVar64 = (float)((local_148.Ptr)->Transform).M[0][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar61 = (float)((local_148.Ptr)->Transform).M[0][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    fVar63 = (float)((local_148.Ptr)->Transform).M[0][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    dVar22 = ((local_148.Ptr)->Transform).M[3][2];
    fVar60 = (float)((local_148.Ptr)->Transform).M[2][0] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar62 = (float)((local_148.Ptr)->Transform).M[2][1] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar65 = (float)((local_148.Ptr)->Transform).M[2][2] *
             UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    dVar23 = ((local_148.Ptr)->Transform).M[3][0];
    dVar24 = ((local_148.Ptr)->Transform).M[3][1];
    fVar14 = UE::Math::TQuat<float>::Identity.X;
    fVar4 = UE::Math::TQuat<float>::Identity.Y;
    fVar15 = UE::Math::TQuat<float>::Identity.Z;
    fVar16 = UE::Math::TQuat<float>::Identity.W;
    fVar18 = ((local_148.Ptr)->Rotation).X;
    fVar19 = ((local_148.Ptr)->Rotation).Y;
    fVar20 = ((local_148.Ptr)->Rotation).Z;
    fVar21 = ((local_148.Ptr)->Rotation).W;
    local_158 = fVar18 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                fVar21 * fVar14 +
                fVar19 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                fVar20 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
    fStack_154 = fVar18 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                 fVar21 * fVar4 +
                 fVar19 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                 fVar20 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
    fStack_150 = fVar18 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                 fVar21 * fVar15 +
                 fVar19 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                 fVar20 * fVar16 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
    fStack_14c = fVar18 * fVar14 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                 fVar21 * fVar16 +
                 fVar19 * fVar4 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                 fVar20 * fVar15 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
    local_238.X = (float)((local_148.Ptr)->TransformInverseTransposed).M[0][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[1][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[2][0] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[3][0] * 0.0;
    local_238.Y = (float)((local_148.Ptr)->TransformInverseTransposed).M[0][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[1][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[2][1] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[3][1] * 0.0;
    local_238.Z = (float)((local_148.Ptr)->TransformInverseTransposed).M[0][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[1][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[2][2] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[3][2] * 0.0;
    local_238.W = (float)((local_148.Ptr)->TransformInverseTransposed).M[0][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[1][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[2][3] *
                  UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                  (float)((local_148.Ptr)->TransformInverseTransposed).M[3][3] * 0.0;
    if (0 < param_1->NumInstances) {
      local_120 = (longlong)local_228.Y.AdvanceOffset * 4;
      local_108._0_8_ = (longlong)local_228.Z.AdvanceOffset * 4;
      local_118._0_8_ = (longlong)local_198.X.AdvanceOffset * 4;
      local_2f8 = local_1c8.Y.Register;
      local_308 = local_1c8.X.Register;
      pfVar41 = local_228.Z.Register;
      pfVar42 = local_228.Y.Register;
      pfVar43 = local_198.X.Register;
      pfVar47 = local_1c8.Z.Register;
      pfVar49 = local_228.X.Register;
      pfVar50 = local_198.W.Register;
      pfVar51 = local_198.Z.Register;
      pfVar52 = local_198.Y.Register;
      pfVar53 = local_1f8.Y.Register;
      pfVar55 = local_1f8.X.Register;
      pfVar57 = local_1f8.Z.Register;
      do {
        iVar54 = iVar54 + 1;
        *pfVar49 = fVar66 + fVar64 + fVar60 + (float)dVar23 * 1.0;
        *pfVar42 = fVar67 + fVar61 + fVar62 + (float)dVar24 * 1.0;
        *pfVar41 = fVar68 + fVar63 + fVar65 + (float)dVar22 * 1.0;
        *pfVar43 = local_158;
        *pfVar52 = fStack_154;
        *pfVar51 = fStack_150;
        *pfVar50 = fStack_14c;
        *pfVar55 = local_238.X;
        *pfVar53 = local_238.Y;
        *pfVar57 = local_238.Z;
        *local_308 = (float)uVar35;
        *local_2f8 = (float)uVar36;
        *pfVar47 = (float)uVar37;
        pfVar41 = pfVar41 + local_228.Z.AdvanceOffset;
        pfVar42 = pfVar42 + local_228.Y.AdvanceOffset;
        pfVar43 = pfVar43 + local_198.X.AdvanceOffset;
        pfVar47 = pfVar47 + local_1c8.Z.AdvanceOffset;
        pFVar48 = local_138;
        pfVar49 = pfVar49 + local_228.X.AdvanceOffset;
        pfVar50 = pfVar50 + local_198.W.AdvanceOffset;
        pfVar51 = pfVar51 + local_198.Z.AdvanceOffset;
        pfVar52 = pfVar52 + local_198.Y.AdvanceOffset;
        pfVar53 = pfVar53 + local_1f8.Y.AdvanceOffset;
        pfVar55 = pfVar55 + local_1f8.X.AdvanceOffset;
        pfVar57 = pfVar57 + local_1f8.Z.AdvanceOffset;
        local_308 = local_308 + local_1c8.X.AdvanceOffset;
        local_2f8 = local_2f8 + local_1c8.Y.AdvanceOffset;
      } while (iVar54 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      piVar2 = local_f8.InputPtr + local_f8.AdvanceOffset;
      iVar17 = iVar56;
      if (*local_f8.InputPtr < iVar56) {
        iVar17 = *local_f8.InputPtr;
      }
      iVar45 = 0;
      if (0 < iVar17) {
        iVar45 = iVar17;
      }
      uVar44 = iVar45 + uVar6;
      uVar38 = 0;
      if ((int)uVar44 < ((local_148.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
        uVar38 = ~uVar44 >> 0x1f;
      }
      local_f8.InputPtr = piVar2;
      if ((uVar38 == 0) &&
         (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar58)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar4 = *local_e0[0].InputPtr;
      uVar5 = *(ushort *)
               (((local_148.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
               (longlong)(int)uVar44 * 2);
      uVar46 = (ulonglong)uVar5;
      local_e0[0].InputPtr = local_e0[0].InputPtr + local_e0[0].AdvanceOffset;
      if ((((local_148.Ptr)->CachedSockets).ArrayNum <= (int)(uint)uVar5) &&
         (bVar58 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar58)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = ((local_148.Ptr)->CachedSockets).AllocatorInstance.Data;
      pFVar3 = pFVar7 + uVar46 * 0x30 + 0x10;
      fVar15 = *(float *)pFVar3;
      fVar16 = *(float *)(pFVar3 + 4);
      fVar18 = *(float *)(pFVar3 + 8);
      fVar69 = (float)((local_148.Ptr)->PrevTransform).M[1][0] * fVar16 +
               (float)((local_148.Ptr)->PrevTransform).M[0][0] * fVar15 +
               (float)((local_148.Ptr)->PrevTransform).M[2][0] * fVar18 +
               (float)((local_148.Ptr)->PrevTransform).M[3][0] * 1.0;
      fVar70 = (float)((local_148.Ptr)->PrevTransform).M[1][1] * fVar16 +
               (float)((local_148.Ptr)->PrevTransform).M[0][1] * fVar15 +
               (float)((local_148.Ptr)->PrevTransform).M[2][1] * fVar18 +
               (float)((local_148.Ptr)->PrevTransform).M[3][1] * 1.0;
      fVar71 = (float)((local_148.Ptr)->PrevTransform).M[1][2] * fVar16 +
               (float)((local_148.Ptr)->PrevTransform).M[0][2] * fVar15 +
               (float)((local_148.Ptr)->PrevTransform).M[2][2] * fVar18 +
               (float)((local_148.Ptr)->PrevTransform).M[3][2] * 1.0;
      pFVar3 = pFVar7 + uVar46 * 0x30;
      fVar19 = *(float *)pFVar3;
      fVar20 = *(float *)(pFVar3 + 4);
      fVar21 = *(float *)(pFVar3 + 8);
      fVar64 = *(float *)(pFVar3 + 0xc);
      fVar60 = ((local_148.Ptr)->PrevRotation).X;
      fVar61 = ((local_148.Ptr)->PrevRotation).Y;
      fVar62 = ((local_148.Ptr)->PrevRotation).Z;
      fVar63 = ((local_148.Ptr)->PrevRotation).W;
      local_118.Z = fVar60 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar63 * fVar21 +
                    fVar61 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar62 * fVar64 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_118.W = fVar60 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar63 * fVar64 +
                    fVar61 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar62 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      local_118.Y = fVar60 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar63 * fVar20 +
                    fVar61 * fVar64 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar62 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_118.X = fVar60 * fVar64 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar63 * fVar19 +
                    fVar61 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar62 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar19 = ((local_148.Ptr)->Rotation).X;
      fVar20 = ((local_148.Ptr)->Rotation).Y;
      fVar21 = ((local_148.Ptr)->Rotation).Z;
      fVar64 = ((local_148.Ptr)->Rotation).W;
      pFVar3 = pFVar7 + uVar46 * 0x30;
      fVar60 = *(float *)pFVar3;
      fVar61 = *(float *)(pFVar3 + 4);
      fVar62 = *(float *)(pFVar3 + 8);
      fVar63 = *(float *)(pFVar3 + 0xc);
      local_238.X = fVar63 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                    fVar64 * fVar60 +
                    fVar62 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                    fVar61 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      local_238.Y = fVar62 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                    fVar64 * fVar61 +
                    fVar63 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                    fVar60 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      local_238.Z = fVar61 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                    fVar64 * fVar62 +
                    fVar60 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                    fVar63 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      local_238.W = fVar60 * fVar19 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                    fVar64 * fVar63 +
                    fVar61 * fVar20 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                    fVar62 * fVar21 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      pFVar7 = pFVar7 + uVar46 * 0x30 + 0x20;
      fVar19 = *(float *)pFVar7;
      fVar20 = *(float *)(pFVar7 + 4);
      fVar21 = *(float *)(pFVar7 + 8);
      dVar22 = ((local_148.Ptr)->TransformInverseTransposed).M[1][0];
      dVar23 = ((local_148.Ptr)->TransformInverseTransposed).M[1][1];
      dVar24 = ((local_148.Ptr)->TransformInverseTransposed).M[1][2];
      dVar25 = ((local_148.Ptr)->TransformInverseTransposed).M[0][2];
      fVar66 = (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[0][0] * fVar19 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[1][0] * fVar20 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[2][0] * fVar21 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[3][0] * 0.0;
      fVar67 = (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[0][1] * fVar19 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[1][1] * fVar20 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[2][1] * fVar21 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[3][1] * 0.0;
      fVar68 = (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[0][2] * fVar19 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[1][2] * fVar20 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[2][2] * fVar21 +
               (float)((local_148.Ptr)->PrevTransformInverseTransposed).M[3][2] * 0.0;
      dVar26 = ((local_148.Ptr)->TransformInverseTransposed).M[2][2];
      dVar27 = ((local_148.Ptr)->TransformInverseTransposed).M[0][0];
      dVar28 = ((local_148.Ptr)->TransformInverseTransposed).M[0][1];
      dVar29 = ((local_148.Ptr)->TransformInverseTransposed).M[2][0];
      dVar30 = ((local_148.Ptr)->TransformInverseTransposed).M[2][1];
      dVar31 = ((local_148.Ptr)->TransformInverseTransposed).M[3][2];
      dVar32 = ((local_148.Ptr)->TransformInverseTransposed).M[3][0];
      dVar33 = ((local_148.Ptr)->TransformInverseTransposed).M[3][1];
      fVar72 = ((float)((local_148.Ptr)->Transform).M[1][0] * fVar16 +
                (float)((local_148.Ptr)->Transform).M[0][0] * fVar15 +
                (float)((local_148.Ptr)->Transform).M[2][0] * fVar18 +
               (float)((local_148.Ptr)->Transform).M[3][0] * 1.0) - fVar69;
      fVar65 = ((float)((local_148.Ptr)->Transform).M[1][2] * fVar16 +
                (float)((local_148.Ptr)->Transform).M[0][2] * fVar15 +
                (float)((local_148.Ptr)->Transform).M[2][2] * fVar18 +
               (float)((local_148.Ptr)->Transform).M[3][2] * 1.0) - fVar71;
      fVar73 = ((float)((local_148.Ptr)->Transform).M[1][1] * fVar16 +
                (float)((local_148.Ptr)->Transform).M[0][1] * fVar15 +
                (float)((local_148.Ptr)->Transform).M[2][1] * fVar18 +
               (float)((local_148.Ptr)->Transform).M[3][1] * 1.0) - fVar70;
      pTVar40 = UE::Math::TQuat<float>::Slerp_NotNormalized(&local_108,&local_118,&local_238,fVar4);
      fVar15 = pTVar40->X;
      fVar16 = pTVar40->Y;
      fVar18 = pTVar40->Z;
      fVar64 = pTVar40->W;
      fVar60 = fVar16 * fVar16 + fVar15 * fVar15;
      fVar61 = fVar15 * fVar15 + fVar16 * fVar16;
      fVar62 = fVar64 * fVar64 + fVar18 * fVar18;
      fVar63 = fVar18 * fVar18 + fVar64 * fVar64;
      auVar59._0_4_ = fVar62 + fVar60;
      auVar59._4_4_ = fVar63 + fVar61;
      auVar59._8_4_ = fVar60 + fVar62;
      auVar59._12_4_ = fVar61 + fVar63;
      bVar58 = ___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar59._0_4_;
      bVar11 = _UNK_1506895d4 <= auVar59._4_4_;
      bVar12 = _UNK_1506895d8 <= auVar59._8_4_;
      bVar13 = _UNK_1506895dc <= auVar59._12_4_;
      auVar59 = sqrtps(auVar59,auVar59);
      auVar59 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar59);
      uVar38 = GlobalVectorConstants::Float0001.m128_u32[0];
      uVar44 = GlobalVectorConstants::Float0001.m128_u32[1];
      uVar9 = GlobalVectorConstants::Float0001.m128_u32[2];
      uVar10 = GlobalVectorConstants::Float0001.m128_u32[3];
      if ((local_148.Ptr)->DeltaSeconds <= 0.0) {
        fVar60 = 0.0;
      }
      else {
        fVar60 = fVar14 / (local_148.Ptr)->DeltaSeconds;
      }
      iVar54 = iVar54 + 1;
      *local_228.X.Register = fVar72 * fVar4 + fVar69;
      local_228.X.Register = local_228.X.Register + local_228.X.AdvanceOffset;
      *local_228.Y.Register = fVar73 * fVar4 + fVar70;
      local_228.Y.Register = local_228.Y.Register + local_228.Y.AdvanceOffset;
      *local_228.Z.Register = fVar65 * fVar4 + fVar71;
      local_228.Z.Register = local_228.Z.Register + local_228.Z.AdvanceOffset;
      *local_198.X.Register =
           (float)((uint)(auVar59._0_4_ * fVar15) & -(uint)bVar58 | ~-(uint)bVar58 & uVar38);
      local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
      *local_198.Y.Register =
           (float)((uint)(auVar59._4_4_ * fVar16) & -(uint)bVar11 | ~-(uint)bVar11 & uVar44);
      local_198.Y.Register = local_198.Y.Register + local_198.Y.AdvanceOffset;
      *local_198.Z.Register =
           (float)((uint)(auVar59._8_4_ * fVar18) & -(uint)bVar12 | ~-(uint)bVar12 & uVar9);
      local_198.Z.Register = local_198.Z.Register + local_198.Z.AdvanceOffset;
      *local_198.W.Register =
           (float)((uint)(auVar59._12_4_ * fVar64) & -(uint)bVar13 | ~-(uint)bVar13 & uVar10);
      local_198.W.Register = local_198.W.Register + local_198.W.AdvanceOffset;
      *local_1f8.X.Register =
           (((float)dVar22 * fVar20 + (float)dVar27 * fVar19 + (float)dVar29 * fVar21 +
            (float)dVar32 * 0.0) - fVar66) * fVar4 + fVar66;
      local_1f8.X.Register = local_1f8.X.Register + local_1f8.X.AdvanceOffset;
      *local_1f8.Y.Register =
           (((float)dVar23 * fVar20 + (float)dVar28 * fVar19 + (float)dVar30 * fVar21 +
            (float)dVar33 * 0.0) - fVar67) * fVar4 + fVar67;
      local_1f8.Y.Register = local_1f8.Y.Register + local_1f8.Y.AdvanceOffset;
      *local_1f8.Z.Register =
           (((float)dVar24 * fVar20 + (float)dVar25 * fVar19 + (float)dVar26 * fVar21 +
            (float)dVar31 * 0.0) - fVar68) * fVar4 + fVar68;
      local_1f8.Z.Register = local_1f8.Z.Register + local_1f8.Z.AdvanceOffset;
      *local_1c8.X.Register = fVar60 * fVar72;
      local_1c8.X.Register = local_1c8.X.Register + local_1c8.X.AdvanceOffset;
      pfVar41 = local_1c8.Y.Register + local_1c8.Y.AdvanceOffset;
      *local_1c8.Y.Register = fVar60 * fVar73;
      *local_1c8.Z.Register = fVar60 * fVar65;
      local_1c8.Z.Register = local_1c8.Z.Register + local_1c8.Z.AdvanceOffset;
      pFVar48 = local_138;
      local_1c8.Y.Register = pfVar41;
    } while (iVar54 < param_1->NumInstances);
  }
  if (pFVar48 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar48->_padding_;
    LOCK();
    lVar34 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar34 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar48->_padding_)(pFVar48,1);
    }
  }
  return;
}

// VMGetVertex<FNDITransformHandler> @ 148f75fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertex<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FStaticMeshLODResources *pFVar11;
  longlong lVar12;
  TVector4<float> *pTVar13;
  TVector<float> *pTVar14;
  ulonglong uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  int iVar29;
  FVectorVMExternalFunctionContext *pFVar30;
  FStaticMeshLODResources *pFVar31;
  undefined4 *puVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_3c8 [32];
  TVector<float>_u_0 local_3a8;
  TVector<float>_u_0 local_398;
  undefined8 local_388;
  float local_380;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  int local_368;
  float *local_360;
  TVector<float>_u_0 local_358;
  float local_34c;
  undefined4 local_348;
  float fStack_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 uStack_334;
  int local_330;
  FVectorVMExternalFunctionContext *local_328;
  FStaticMeshVertexBuffer *local_320;
  FStaticMeshLODResources *local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  TVector4<float>_u_0 local_238;
  int local_228;
  undefined4 uStack_224;
  int local_220;
  float *local_218;
  int local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_198;
  FStaticMeshLODResources *local_188;
  FColorVertexBuffer *local_180;
  FNDITransformHandler local_178 [8];
  TVector<float> local_170 [2];
  TVector4<float> local_158;
  undefined1 local_148 [24];
  float fStack_130;
  float *local_128;
  float fStack_120;
  float local_118 [2];
  float afStack_110 [2];
  TMatrix<float> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_328 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_198,param_1);
  iVar29 = 0;
  local_188 = (FStaticMeshLODResources *)0x0;
  pFVar11 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_198.Ptr,&local_180);
  local_318 = local_188;
  pFVar31 = local_188;
  if (local_188 != pFVar11) {
    if (pFVar11 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
      UNLOCK();
    }
    pFVar31 = pFVar11;
    local_318 = pFVar11;
    if (local_188 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_188->_padding_;
      LOCK();
      lVar33 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar33 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_188->_padding_)(local_188,1);
      }
    }
  }
  uVar28 = 0;
  local_228 = 0;
  local_248 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_228);
  lVar33 = (longlong)local_228;
  local_248 = local_248 + local_228 * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_358._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_238._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)local_148,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  uVar10 = uVar28;
  if (((pFVar31 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar31->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar8 = FPositionVertexBuffer::GetAllowCPUAccess
                        (&(pFVar31->VertexBuffers).PositionVertexBuffer), bVar8)) {
    uVar10 = (pFVar31->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  fVar34 = (float)(uVar10 - 1);
  if ((((pFVar31 != (FStaticMeshLODResources *)0x0) &&
       ((pFVar31->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) &&
      ((pFVar3 = (pFVar31->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 != (FStaticMeshVertexDataInterface *)0x0 &&
       (((pFVar31->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
         (FStaticMeshVertexDataInterface *)0x0 &&
        (cVar9 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar9 != '\0')))))) &&
     (cVar9 = (**(code **)((longlong)*(pFVar31->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))(), cVar9 != '\0')) {
    uVar28 = (pFVar31->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  }
  if (((int)fVar34 < 0) || (fVar34 != (float)(uVar28 - 1))) {
    local_380 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_388 = (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    fVar34 = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][2];
    fVar38 = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][3];
    fVar48 = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][0];
    fVar49 = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][1];
    fVar46 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][0];
    fVar47 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][1];
    fVar51 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][2];
    fVar39 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][3];
    fVar44 = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][0];
    fVar45 = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][1];
    fVar36 = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][2];
    fVar40 = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][3];
    fVar42 = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][0];
    fVar43 = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][1];
    fVar35 = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][2];
    fVar41 = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][3];
    local_378 = (float)((local_198.Ptr)->Transform).M[1][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                (float)((local_198.Ptr)->Transform).M[0][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                (float)((local_198.Ptr)->Transform).M[2][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                (float)((local_198.Ptr)->Transform).M[3][0] * 1.0;
    fStack_374 = (float)((local_198.Ptr)->Transform).M[1][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_198.Ptr)->Transform).M[0][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_198.Ptr)->Transform).M[2][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_198.Ptr)->Transform).M[3][1] * 1.0;
    fStack_370 = (float)((local_198.Ptr)->Transform).M[1][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_198.Ptr)->Transform).M[0][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_198.Ptr)->Transform).M[2][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_198.Ptr)->Transform).M[3][2] * 1.0;
    fStack_36c = (float)((local_198.Ptr)->Transform).M[1][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_198.Ptr)->Transform).M[0][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_198.Ptr)->Transform).M[2][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_198.Ptr)->Transform).M[3][3] * 1.0;
    local_398._s_0.X = 0.0;
    local_398._s_0.Y = 1.0;
    local_398._s_0.Z = 0.0;
    fVar50 = _UNK_1506894f4 * fVar46 + ___xmm_0000000000000000000000003f800000 * fVar48 +
             _UNK_1506894f8 * fVar44 + _UNK_1506894fc * fVar42;
    fVar52 = _UNK_1506894f4 * fVar47 + ___xmm_0000000000000000000000003f800000 * fVar49 +
             _UNK_1506894f8 * fVar45 + _UNK_1506894fc * fVar43;
    fVar53 = _UNK_1506894f4 * fVar51 + ___xmm_0000000000000000000000003f800000 * fVar34 +
             _UNK_1506894f8 * fVar36 + _UNK_1506894fc * fVar35;
    fVar37 = __real_3f800000 / SQRT(fVar52 * fVar52 + fVar50 * fVar50 + fVar53 * fVar53);
    local_108.M[0][0] = fVar48;
    local_108.M[0][1] = fVar49;
    local_108.M[0][2] = fVar34;
    local_108.M[0][3] = fVar38;
    local_108.M[1][0] = fVar46;
    local_108.M[1][1] = fVar47;
    local_108.M[1][2] = fVar51;
    local_108.M[1][3] = fVar39;
    local_108.M[2][0] = fVar44;
    local_108.M[2][1] = fVar45;
    local_108.M[2][2] = fVar36;
    local_108.M[2][3] = fVar40;
    local_108.M[3][0] = fVar42;
    local_108.M[3][1] = fVar43;
    local_108.M[3][2] = fVar35;
    local_108.M[3][3] = fVar41;
    FNDITransformHandler::TransformUnitVector
              (local_178,(TVector<float> *)&local_398._s_0,&local_108);
    local_3a8._0_8_ = (float *)0x0;
    local_3a8._s_0.Z = 1.0;
    local_108.M[0][0] = fVar48;
    local_108.M[0][1] = fVar49;
    local_108.M[0][2] = fVar34;
    local_108.M[0][3] = fVar38;
    local_108.M[1][0] = fVar46;
    local_108.M[1][1] = fVar47;
    local_108.M[1][2] = fVar51;
    local_108.M[1][3] = fVar39;
    local_108.M[2][0] = fVar44;
    local_108.M[2][1] = fVar45;
    local_108.M[2][2] = fVar36;
    local_108.M[2][3] = fVar40;
    local_108.M[3][0] = fVar42;
    local_108.M[3][1] = fVar43;
    local_108.M[3][2] = fVar35;
    local_108.M[3][3] = fVar41;
    FNDITransformHandler::TransformUnitVector
              (local_178,(TVector<float> *)&local_3a8._s_0,&local_108);
    pfVar2 = (float *)CONCAT44(local_398._s_0.Y,local_398._s_0.X);
    if (0 < param_1->NumInstances) {
      local_298 = (longlong)(int)local_358._s_0.Z * 4;
      local_2a0 = (longlong)(int)local_340 * 4;
      uVar7 = local_388._4_4_;
      fVar34 = (float)local_388;
      uVar6 = local_3a8._s_0.Y;
      uVar5 = local_3a8._s_0.X;
      local_2a8 = (longlong)local_330 * 4;
      local_2b0 = (longlong)(int)local_238._s_0.Z * 4;
      local_2b8 = (longlong)local_220 * 4;
      local_2c0 = (longlong)local_210 * 4;
      local_2c8 = (longlong)local_1f8.X.AdvanceOffset * 4;
      local_2d0 = (longlong)local_1f8.Y.AdvanceOffset * 4;
      local_2d8 = (longlong)local_1f8.Z.AdvanceOffset * 4;
      local_2e0 = (longlong)(int)local_148._8_4_ * 4;
      local_2e8 = (longlong)(int)fStack_130 * 4;
      local_300 = (longlong)(int)fStack_120 * 4;
      local_308 = (longlong)local_1c8.X.AdvanceOffset * 4;
      local_310 = (longlong)local_1c8.Y.AdvanceOffset * 4;
      local_2f8 = (longlong)local_1c8.Z.AdvanceOffset * 4;
      local_360 = local_1c8.Z.Register;
      local_388 = local_1c8.Y.Register;
      local_3a8._0_8_ = local_1c8.X.Register;
      pfVar16 = (float *)CONCAT44(uStack_334,local_338);
      pfVar17 = (float *)CONCAT44(fStack_344,local_348);
      pFVar30 = (FVectorVMExternalFunctionContext *)local_148._16_8_;
      pfVar18 = (float *)CONCAT44(local_358._s_0.Y,local_358._s_0.X);
      puVar32 = (undefined4 *)CONCAT44(uStack_224,local_228);
      pfVar19 = local_128;
      pfVar2 = (float *)local_148._0_8_;
      do {
        iVar29 = iVar29 + 1;
        *pfVar18 = local_378;
        *pfVar17 = fStack_374;
        *pfVar16 = fStack_370;
        *(float *)local_238._0_8_ = fVar34;
        *puVar32 = uVar7;
        *local_218 = local_380;
        *local_1f8.X.Register = (float)uVar5;
        *local_1f8.Y.Register = (float)uVar6;
        *local_1f8.Z.Register = local_3a8._s_0.Z;
        *pfVar2 = local_398._s_0.X;
        *(float *)&pFVar30->RegisterData = local_398._s_0.Y;
        *pfVar19 = local_398._s_0.Z;
        pfVar20 = (float *)(local_308 + local_3a8._0_8_);
        *(float *)local_3a8._0_8_ = fVar50 * fVar37;
        pfVar21 = local_388 + local_1c8.Y.AdvanceOffset;
        *local_388 = fVar52 * fVar37;
        pfVar22 = local_360 + local_1c8.Z.AdvanceOffset;
        *local_360 = fVar53 * fVar37;
        pfVar16 = pfVar16 + local_330;
        pfVar17 = pfVar17 + (int)local_340;
        local_1f8.Z.Register = local_1f8.Z.Register + local_1f8.Z.AdvanceOffset;
        pFVar31 = local_318;
        pFVar30 = (FVectorVMExternalFunctionContext *)((longlong)&pFVar30->RegisterData + local_2e8)
        ;
        pfVar18 = pfVar18 + (int)local_358._s_0.Z;
        local_218 = local_218 + local_210;
        puVar32 = puVar32 + local_220;
        local_238._0_8_ = (float *)(local_238._0_8_ + (longlong)(int)local_238._s_0.Z * 4);
        local_1f8.X.Register = local_1f8.X.Register + local_1f8.X.AdvanceOffset;
        pfVar19 = pfVar19 + (int)fStack_120;
        local_1f8.Y.Register = local_1f8.Y.Register + local_1f8.Y.AdvanceOffset;
        local_3a8._0_8_ = pfVar20;
        local_388 = pfVar21;
        local_360 = pfVar22;
        pfVar2 = pfVar2 + (int)local_148._8_4_;
      } while (iVar29 < local_328->NumInstances);
    }
  }
  else {
    if ((local_198.Ptr)->DeltaSeconds <= 0.0) {
      fVar51 = 0.0;
    }
    else {
      fVar51 = __real_3f800000 / (local_198.Ptr)->DeltaSeconds;
    }
    local_368 = 0;
    pfVar2 = (float *)CONCAT44(local_398._s_0.Y,local_398._s_0.X);
    if (0 < param_1->NumInstances) {
      lVar12 = (longlong)(int)local_358._s_0.Z;
      local_320 = &(pFVar31->VertexBuffers).StaticMeshVertexBuffer;
      local_2f8 = lVar12 * 4;
      local_310 = (longlong)(int)local_340 << 2;
      local_308 = (longlong)local_330 << 2;
      local_300 = (longlong)(int)local_238._s_0.Z << 2;
      local_2e8 = (longlong)local_220 << 2;
      local_2e0 = (longlong)local_210 << 2;
      local_2d8 = (longlong)local_1f8.X.AdvanceOffset << 2;
      local_2d0 = (longlong)local_1f8.Y.AdvanceOffset << 2;
      local_2c8 = (longlong)local_1f8.Z.AdvanceOffset << 2;
      local_2c0 = (longlong)(int)local_148._8_4_ << 2;
      local_2b8 = (longlong)(int)fStack_130 << 2;
      local_2b0 = (longlong)(int)fStack_120 << 2;
      local_2a8 = (longlong)local_1c8.X.AdvanceOffset << 2;
      local_2a0 = (longlong)local_1c8.Y.AdvanceOffset << 2;
      local_298 = (longlong)local_1c8.Z.AdvanceOffset << 2;
      local_278 = local_218;
      local_288 = (float *)local_238._0_8_;
      local_260 = local_1f8.Z.Register;
      local_268 = local_1f8.Y.Register;
      local_270 = local_1f8.X.Register;
      local_360 = local_128;
      local_328 = (FVectorVMExternalFunctionContext *)local_148._16_8_;
      local_258 = (float *)local_148._0_8_;
      local_3a8._0_8_ = local_1c8.Y.Register;
      local_388 = local_1c8.X.Register;
      fStack_1fc = 1.0;
      fStack_36c = 1.0;
      local_290 = (float *)CONCAT44(uStack_334,local_338);
      local_280 = (float *)CONCAT44(uStack_224,local_228);
      local_250 = (float *)CONCAT44(fStack_344,local_348);
      local_240 = (float *)CONCAT44(local_358._s_0.Y,local_358._s_0.X);
      do {
        fVar36 = fVar34;
        if ((int)*local_248 < (int)fVar34) {
          fVar36 = *local_248;
        }
        fVar35 = 0.0;
        if (0 < (int)fVar36) {
          fVar35 = fVar36;
        }
        lVar4 = *(longlong *)&local_320[1].TangentsVertexBuffer.field_0x18;
        uVar15 = (ulonglong)
                 (uint)((int)fVar35 * *(int *)&local_320[1].TangentsVertexBuffer.field_0x20);
        pfVar2 = (float *)(uVar15 + lVar4);
        local_378 = *pfVar2;
        fStack_374 = pfVar2[1];
        fStack_370 = *(float *)(uVar15 + 8 + lVar4);
        fVar48 = (float)((local_198.Ptr)->Transform).M[1][0] * fStack_374 +
                 (float)((local_198.Ptr)->Transform).M[0][0] * local_378 +
                 (float)((local_198.Ptr)->Transform).M[2][0] * fStack_370 +
                 (float)((local_198.Ptr)->Transform).M[3][0] * fStack_1fc;
        fVar49 = (float)((local_198.Ptr)->Transform).M[1][1] * fStack_374 +
                 (float)((local_198.Ptr)->Transform).M[0][1] * local_378 +
                 (float)((local_198.Ptr)->Transform).M[2][1] * fStack_370 +
                 (float)((local_198.Ptr)->Transform).M[3][1] * fStack_1fc;
        fVar50 = (float)((local_198.Ptr)->Transform).M[1][2] * fStack_374 +
                 (float)((local_198.Ptr)->Transform).M[0][2] * local_378 +
                 (float)((local_198.Ptr)->Transform).M[2][2] * fStack_370 +
                 (float)((local_198.Ptr)->Transform).M[3][2] * fStack_1fc;
        fVar45 = (float)((local_198.Ptr)->PrevTransform).M[1][0] * fStack_374;
        fVar46 = (float)((local_198.Ptr)->PrevTransform).M[1][1] * fStack_374;
        fVar47 = (float)((local_198.Ptr)->PrevTransform).M[1][2] * fStack_374;
        fVar36 = (float)((local_198.Ptr)->PrevTransform).M[0][0] * local_378;
        fVar39 = (float)((local_198.Ptr)->PrevTransform).M[0][1] * local_378;
        fVar42 = (float)((local_198.Ptr)->PrevTransform).M[0][2] * local_378;
        fVar37 = (float)((local_198.Ptr)->PrevTransform).M[2][0] * fStack_370;
        fVar40 = (float)((local_198.Ptr)->PrevTransform).M[2][1] * fStack_370;
        fVar43 = (float)((local_198.Ptr)->PrevTransform).M[2][2] * fStack_370;
        fVar38 = (float)((local_198.Ptr)->PrevTransform).M[3][0] * fStack_36c;
        fVar41 = (float)((local_198.Ptr)->PrevTransform).M[3][1] * fStack_36c;
        fVar44 = (float)((local_198.Ptr)->PrevTransform).M[3][2] * fStack_36c;
        local_248 = local_248 + lVar33;
        local_208 = local_378;
        fStack_204 = fStack_374;
        fStack_200 = fStack_370;
        local_398._0_8_ = local_1c8.Z.Register;
        pTVar13 = FStaticMeshVertexBuffer::VertexTangentX(local_320,&local_158,(uint)fVar35);
        local_358._s_0.X = (pTVar13->field0_0x0)._s_0.X;
        local_358._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
        local_358._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
        pTVar14 = FStaticMeshVertexBuffer::VertexTangentY(local_320,local_170,(uint)fVar35);
        fStack_344 = (pTVar14->field0_0x0)._s_0.Z;
        local_34c = (float)*(undefined8 *)&pTVar14->field0_0x0;
        local_348 = (undefined4)((ulonglong)*(undefined8 *)&pTVar14->field0_0x0 >> 0x20);
        pTVar13 = FStaticMeshVertexBuffer::VertexTangentZ
                            (local_320,(TVector4<float> *)&local_238._s_0,(uint)fVar35);
        local_340 = (pTVar13->field0_0x0)._s_0.X;
        local_33c = (pTVar13->field0_0x0)._s_0.Y;
        local_338 = (pTVar13->field0_0x0)._s_0.Z;
        local_148._0_8_ =
             CONCAT44((float)((local_198.Ptr)->TransformInverseTransposed).M[0][1],
                      (float)((local_198.Ptr)->TransformInverseTransposed).M[0][0]);
        local_148._12_4_ = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][3];
        local_148._8_4_ = (float)((local_198.Ptr)->TransformInverseTransposed).M[0][2];
        local_148._16_8_ =
             CONCAT44((float)((local_198.Ptr)->TransformInverseTransposed).M[1][1],
                      (float)((local_198.Ptr)->TransformInverseTransposed).M[1][0]);
        unique0x10000237 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][3];
        fStack_130 = (float)((local_198.Ptr)->TransformInverseTransposed).M[1][2];
        local_128 = (float *)CONCAT44((float)((local_198.Ptr)->TransformInverseTransposed).M[2][1],
                                      (float)((local_198.Ptr)->TransformInverseTransposed).M[2][0]);
        unique0x1000023f = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][3];
        fStack_120 = (float)((local_198.Ptr)->TransformInverseTransposed).M[2][2];
        local_118[0] = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][0];
        local_118[1] = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][1];
        afStack_110[1] = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][3];
        afStack_110[0] = (float)((local_198.Ptr)->TransformInverseTransposed).M[3][2];
        NDIStaticMeshLocal::FNDITangentBasis::TransformAndEnsureValid<FNDITransformHandler>
                  ((FNDITangentBasis *)&local_358._s_0,local_178,(TMatrix<float> *)local_148);
        pfVar2 = local_240 + lVar12;
        *local_240 = fVar48;
        pfVar16 = (float *)(local_310 + (longlong)local_250);
        *local_250 = fVar49;
        pfVar17 = (float *)(local_308 + (longlong)local_290);
        *local_290 = fVar50;
        pfVar18 = (float *)(local_300 + (longlong)local_288);
        *local_288 = (fVar48 - (fVar45 + fVar36 + fVar37 + fVar38)) * fVar51;
        pfVar19 = (float *)(local_2e8 + (longlong)local_280);
        *local_280 = (fVar49 - (fVar46 + fVar39 + fVar40 + fVar41)) * fVar51;
        pfVar20 = (float *)(local_2e0 + (longlong)local_278);
        *local_278 = (fVar50 - (fVar47 + fVar42 + fVar43 + fVar44)) * fVar51;
        pfVar21 = (float *)(local_2d8 + (longlong)local_270);
        *local_270 = local_340;
        pfVar22 = (float *)(local_2d0 + (longlong)local_268);
        *local_268 = local_33c;
        pfVar23 = (float *)(local_2c8 + (longlong)local_260);
        *local_260 = local_338;
        pfVar24 = (float *)(local_2c0 + (longlong)local_258);
        *local_258 = local_34c;
        pFVar30 = (FVectorVMExternalFunctionContext *)
                  ((longlong)&local_328->RegisterData + local_2b8);
        *(undefined4 *)&local_328->RegisterData = local_348;
        pfVar25 = (float *)(local_2b0 + (longlong)local_360);
        *local_360 = fStack_344;
        pfVar26 = (float *)(local_2a8 + (longlong)local_388);
        *local_388 = local_358._s_0.X;
        pfVar27 = (float *)(local_2a0 + local_3a8._0_8_);
        *(float *)local_3a8._0_8_ = local_358._s_0.Y;
        local_1c8.Z.Register = (float *)(local_298 + local_398._0_8_);
        *(float *)local_398._0_8_ = local_358._s_0.Z;
        local_368 = local_368 + 1;
        pFVar31 = local_318;
        local_3a8._0_8_ = pfVar27;
        local_388 = pfVar26;
        local_360 = pfVar25;
        local_328 = pFVar30;
        local_290 = pfVar17;
        local_288 = pfVar18;
        local_280 = pfVar19;
        local_278 = pfVar20;
        local_270 = pfVar21;
        local_268 = pfVar22;
        local_260 = pfVar23;
        local_258 = pfVar24;
        local_250 = pfVar16;
        local_240 = pfVar2;
        pfVar2 = local_1c8.Z.Register;
      } while (local_368 < param_1->NumInstances);
    }
  }
  if (pFVar31 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar31->_padding_;
    LOCK();
    lVar33 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar33 == 1) && (plVar1 != (longlong *)0x0)) {
      local_398._0_8_ = pfVar2;
      (**(code **)pFVar31->_padding_)(pFVar31,1);
    }
  }
  return;
}

// VMGetVertex<FNDITransformHandlerNoop> @ 148f76e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertex<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  longlong *plVar2;
  FStaticMeshVertexBuffers *this_00;
  undefined8 uVar3;
  float fVar4;
  FStaticMeshVertexDataInterface *pFVar5;
  uchar *puVar6;
  FStaticMeshLODResources *pFVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  float fVar17;
  FStaticMeshLODResources *pFVar18;
  float *pfVar19;
  TVector4<float> *pTVar20;
  TVector<float> *pTVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_358;
  float *local_348;
  float *local_340;
  float *local_338;
  FStaticMeshLODResources *local_310;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  TVector4<float>_u_0 local_228;
  int local_218;
  undefined4 uStack_214;
  int local_210;
  float *local_208;
  int local_200;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_168;
  undefined8 local_138;
  undefined1 local_128 [16];
  float local_118;
  undefined4 uStack_114;
  FColorVertexBuffer *local_110 [5];
  TVector<float> local_e8;
  TVector4<float> local_d8 [11];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)local_128,param_1);
  iVar26 = 0;
  local_118 = 0.0;
  uStack_114 = 0;
  pFVar18 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      ((FInstanceData_GameThread *)CONCAT44(local_128._12_4_,local_128._8_4_),
                       local_110);
  pFVar7 = (FStaticMeshLODResources *)CONCAT44(uStack_114,local_118);
  local_310 = pFVar7;
  if (pFVar7 != pFVar18) {
    if (pFVar18 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
      UNLOCK();
    }
    local_310 = pFVar18;
    if (pFVar7 != (FStaticMeshLODResources *)0x0) {
      plVar2 = &pFVar7->_padding_;
      LOCK();
      lVar24 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  uVar25 = 0;
  local_218 = 0;
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_218);
  lVar24 = (longlong)local_218;
  iVar22 = local_218 * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_228._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  uVar16 = uVar25;
  if (((local_310 != (FStaticMeshLODResources *)0x0) &&
      ((local_310->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar14 = FPositionVertexBuffer::GetAllowCPUAccess
                         (&(local_310->VertexBuffers).PositionVertexBuffer), bVar14)) {
    uVar16 = (local_310->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  fVar1 = (float)(uVar16 - 1);
  if ((((local_310 != (FStaticMeshLODResources *)0x0) &&
       ((local_310->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) &&
      ((pFVar5 = (local_310->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar5 != (FStaticMeshVertexDataInterface *)0x0 &&
       (((local_310->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
         (FStaticMeshVertexDataInterface *)0x0 &&
        (cVar15 = (**(code **)((longlong)*pFVar5 + 0x58))(), cVar15 != '\0')))))) &&
     (cVar15 = (**(code **)((longlong)
                            *(local_310->VertexBuffers).StaticMeshVertexBuffer.TexcoordData + 0x58))
                         (), cVar15 != '\0')) {
    uVar25 = (local_310->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  }
  uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar12 = _UNK_1506894fc;
  fVar11 = _UNK_1506894f8;
  fVar10 = _UNK_1506894f4;
  fVar9 = ___xmm_0000000000000000000000003f800000;
  fVar8 = __real_3f800000;
  if (((int)fVar1 < 0) || (fVar1 != (float)(uVar25 - 1))) {
    if (0 < param_1->NumInstances) {
      local_358._4_4_ =
           (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      fVar8 = local_358._4_4_;
      local_358._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar1 = (float)local_358;
      local_358 = local_168.X.Register;
      local_348 = local_198.Z.Register;
      local_340 = local_198.Y.Register;
      local_338 = local_198.X.Register;
      pfVar19 = (float *)CONCAT44(uStack_214,local_218);
      do {
        iVar26 = iVar26 + 1;
        *(float *)local_228._0_8_ = fVar1;
        *pfVar19 = fVar8;
        *local_208 = (float)uVar13;
        *local_1f8.X.Register = fVar1;
        *local_1f8.Y.Register = fVar8;
        *local_1f8.Z.Register = (float)uVar13;
        *local_1c8.X.Register = 0.0;
        *local_1c8.Y.Register = 0.0;
        *local_1c8.Z.Register = 1.0;
        *local_358 = 0.0;
        *local_168.Y.Register = 1.0;
        *local_168.Z.Register = 0.0;
        *local_338 = 1.0;
        *local_340 = 0.0;
        *local_348 = 0.0;
        local_208 = local_208 + local_200;
        local_1f8.X.Register = local_1f8.X.Register + local_1f8.X.AdvanceOffset;
        local_1c8.Y.Register = local_1c8.Y.Register + local_1c8.Y.AdvanceOffset;
        local_1c8.Z.Register = local_1c8.Z.Register + local_1c8.Z.AdvanceOffset;
        pfVar19 = pfVar19 + local_210;
        local_228._0_8_ = (float *)(local_228._0_8_ + (longlong)(int)local_228._s_0.Z * 4);
        local_1f8.Z.Register = local_1f8.Z.Register + local_1f8.Z.AdvanceOffset;
        local_1f8.Y.Register = local_1f8.Y.Register + local_1f8.Y.AdvanceOffset;
        local_1c8.X.Register = local_1c8.X.Register + local_1c8.X.AdvanceOffset;
        local_168.Z.Register = local_168.Z.Register + local_168.Z.AdvanceOffset;
        local_168.Y.Register = local_168.Y.Register + local_168.Y.AdvanceOffset;
        local_358 = local_358 + local_168.X.AdvanceOffset;
        local_348 = local_348 + local_198.Z.AdvanceOffset;
        local_340 = local_340 + local_198.Y.AdvanceOffset;
        local_338 = local_338 + local_198.X.AdvanceOffset;
      } while (iVar26 < param_1->NumInstances);
    }
  }
  else {
    fVar36 = 0.0;
    fVar17 = *(float *)(CONCAT44(local_128._12_4_,local_128._8_4_) + 0x2f0);
    if (0.0 < fVar17) {
      fVar36 = __real_3f800000 / fVar17;
    }
    if (0 < param_1->NumInstances) {
      this_00 = &local_310->VertexBuffers;
      local_288 = local_208;
      local_230 = (float *)local_228._0_8_;
      local_270 = local_1f8.Z.Register;
      local_278 = local_1f8.Y.Register;
      local_280 = local_1f8.X.Register;
      local_258 = local_1c8.Z.Register;
      local_260 = local_1c8.Y.Register;
      local_268 = local_1c8.X.Register;
      local_240 = local_168.Z.Register;
      local_248 = local_168.Y.Register;
      local_250 = local_168.X.Register;
      local_338 = local_198.Z.Register;
      local_340 = local_198.Y.Register;
      local_348 = local_198.X.Register;
      pfVar19 = pfVar19 + iVar22;
      local_238 = (float *)CONCAT44(uStack_214,local_218);
      do {
        fVar17 = fVar1;
        if ((int)*pfVar19 < (int)fVar1) {
          fVar17 = *pfVar19;
        }
        fVar30 = 0.0;
        if (0 < (int)fVar17) {
          fVar30 = fVar17;
        }
        puVar6 = (local_310->VertexBuffers).PositionVertexBuffer.Data;
        uVar23 = (ulonglong)((int)fVar30 * (local_310->VertexBuffers).PositionVertexBuffer.Stride);
        fVar17 = *(float *)(puVar6 + uVar23 + 8);
        local_138 = *(undefined8 *)(puVar6 + uVar23);
        fVar4 = *(float *)(puVar6 + uVar23 + 8);
        fVar27 = (float)local_138;
        fVar28 = (float)((ulonglong)local_138 >> 0x20);
        pTVar20 = FStaticMeshVertexBuffer::VertexTangentX
                            (&this_00->StaticMeshVertexBuffer,local_d8,(uint)fVar30);
        fVar39 = (pTVar20->field0_0x0)._s_0.X;
        fVar35 = (pTVar20->field0_0x0)._s_0.Y;
        fVar34 = (pTVar20->field0_0x0)._s_0.Z;
        pTVar21 = FStaticMeshVertexBuffer::VertexTangentY
                            (&this_00->StaticMeshVertexBuffer,&local_e8,(uint)fVar30);
        uVar3 = *(undefined8 *)&pTVar21->field0_0x0;
        fVar32 = (float)((ulonglong)uVar3 >> 0x20);
        fVar29 = (pTVar21->field0_0x0)._s_0.Z;
        pTVar20 = FStaticMeshVertexBuffer::VertexTangentZ
                            (&this_00->StaticMeshVertexBuffer,(TVector4<float> *)&local_228._s_0,
                             (uint)fVar30);
        local_128._12_4_ = (undefined4)uVar3;
        fVar30 = (float)local_128._12_4_;
        fVar31 = (pTVar20->field0_0x0)._s_0.Y;
        fVar33 = (pTVar20->field0_0x0)._s_0.X;
        fVar37 = fVar32;
        fVar38 = (pTVar20->field0_0x0)._s_0.Z;
        if (fVar32 * fVar32 + (float)local_128._12_4_ * (float)local_128._12_4_ + fVar29 * fVar29 <=
            __real_3a83126f) {
          fVar30 = fVar12;
          fVar31 = fVar12;
          fVar33 = fVar11;
          fVar34 = fVar11;
          fVar35 = fVar10;
          fVar37 = fVar9;
          fVar38 = fVar8;
          fVar39 = fVar9;
          fVar29 = fVar10;
        }
        iVar26 = iVar26 + 1;
        *local_230 = (float)local_138;
        local_230 = local_230 + (int)local_228._s_0.Z;
        *local_238 = fVar28;
        *local_288 = fVar4;
        *local_280 = (fVar27 - fVar27) * fVar36;
        *local_278 = (fVar28 - fVar28) * fVar36;
        *local_270 = (fVar4 - fVar17) * fVar36;
        *local_268 = fVar33;
        *local_260 = fVar31;
        *local_258 = fVar38;
        *local_250 = fVar30;
        *local_248 = fVar37;
        *local_240 = fVar29;
        *local_348 = fVar39;
        *local_340 = fVar35;
        *local_338 = fVar34;
        pfVar19 = pfVar19 + lVar24;
        local_348 = local_348 + local_198.X.AdvanceOffset;
        local_340 = local_340 + local_198.Y.AdvanceOffset;
        local_338 = local_338 + local_198.Z.AdvanceOffset;
        local_288 = local_288 + local_200;
        local_280 = local_280 + local_1f8.X.AdvanceOffset;
        local_278 = local_278 + local_1f8.Y.AdvanceOffset;
        local_270 = local_270 + local_1f8.Z.AdvanceOffset;
        local_268 = local_268 + local_1c8.X.AdvanceOffset;
        local_260 = local_260 + local_1c8.Y.AdvanceOffset;
        local_258 = local_258 + local_1c8.Z.AdvanceOffset;
        local_250 = local_250 + local_168.X.AdvanceOffset;
        local_248 = local_248 + local_168.Y.AdvanceOffset;
        local_240 = local_240 + local_168.Z.AdvanceOffset;
        local_238 = local_238 + local_210;
        local_118 = fVar32;
      } while (iVar26 < param_1->NumInstances);
    }
  }
  if (local_310 != (FStaticMeshLODResources *)0x0) {
    plVar2 = &local_310->_padding_;
    LOCK();
    lVar24 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)local_310->_padding_)(local_310,1);
    }
  }
  return;
}

// VMGetVertexInterpolated<FNDITransformHandler> @ 148f77840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexInterpolated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FStaticMeshLODResources *pFVar14;
  longlong lVar15;
  TVector4<float> *pTVar16;
  TVector<float> *pTVar17;
  ulonglong uVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  undefined8 uVar33;
  FStaticMeshLODResources *pFVar34;
  uint uVar35;
  int iVar36;
  undefined8 uVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  longlong lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auStack_408 [32];
  TVector<float>_u_0 local_3e8;
  TVector<float>_u_0 local_3d8;
  TVector<float>_u_0 local_3c8;
  undefined8 local_3b8;
  float local_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  int local_398;
  TVector<float>_u_0 local_390;
  float fStack_384;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370;
  undefined4 uStack_36c;
  int local_368;
  TVector<float>_u_0 local_360;
  TVector<float>_u_0 TStack_354;
  TVector<float>_u_0 TStack_348;
  undefined4 uStack_33c;
  int local_338;
  FStaticMeshVertexBuffer *local_330;
  FStaticMeshLODResources *local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  FVectorVMExternalFunctionContext *local_2c8;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  TVector4<float> local_228;
  int local_218 [4];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_208;
  FStaticMeshLODResources *local_1f8;
  FColorVertexBuffer *local_1f0;
  FNDITransformHandler local_1e8 [16];
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_198;
  TVector<float> local_168;
  TVector4<float> local_158;
  TMatrix<float> local_148;
  TMatrix<float> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_2c8 = param_1;
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_208,param_1);
  iVar36 = 0;
  local_1f8 = (FStaticMeshLODResources *)0x0;
  pFVar14 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_208.Ptr,&local_1f0);
  local_328 = local_1f8;
  pFVar34 = local_1f8;
  if (local_1f8 != pFVar14) {
    if (pFVar14 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    pFVar34 = pFVar14;
    local_328 = pFVar14;
    if (local_1f8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_1f8->_padding_;
      LOCK();
      lVar40 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar40 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_1f8->_padding_)(local_1f8,1);
      }
    }
  }
  uVar35 = 0;
  local_218[0] = 0;
  local_288 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_218);
  iVar10 = local_218[0];
  lVar40 = (longlong)local_218[0];
  local_218[0] = 0;
  local_288 = local_288 + iVar10 * param_1->PerInstanceFnInstanceIdx;
  local_290 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_218);
  local_290 = local_290 + local_218[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_360._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_390._s_0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c8,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_148,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  uVar13 = uVar35;
  if (((pFVar34 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar34->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar11 = FPositionVertexBuffer::GetAllowCPUAccess
                         (&(pFVar34->VertexBuffers).PositionVertexBuffer), bVar11)) {
    uVar13 = (pFVar34->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  fVar41 = (float)(uVar13 - 1);
  if ((((pFVar34 != (FStaticMeshLODResources *)0x0) &&
       ((pFVar34->VertexBuffers).StaticMeshVertexBuffer.TangentsDataPtr != (uchar *)0x0)) &&
      ((pFVar2 = (pFVar34->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar2 != (FStaticMeshVertexDataInterface *)0x0 &&
       (((pFVar34->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
         (FStaticMeshVertexDataInterface *)0x0 &&
        (cVar12 = (**(code **)((longlong)*pFVar2 + 0x58))(), cVar12 != '\0')))))) &&
     (cVar12 = (**(code **)((longlong)*(pFVar34->VertexBuffers).StaticMeshVertexBuffer.TexcoordData
                           + 0x58))(), cVar12 != '\0')) {
    uVar35 = (pFVar34->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  }
  if (((int)fVar41 < 0) || (fVar41 != (float)(uVar35 - 1))) {
    local_3c8._0_8_ = &DAT_3f800000;
    local_3c8._s_0.Z = 0.0;
    local_3b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    fVar41 = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][2];
    fVar43 = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][3];
    local_3b8 = (float *)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    fVar49 = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][0];
    fVar50 = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][1];
    local_3a8 = (float)((local_208.Ptr)->Transform).M[1][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                (float)((local_208.Ptr)->Transform).M[0][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                (float)((local_208.Ptr)->Transform).M[2][0] *
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                (float)((local_208.Ptr)->Transform).M[3][0] * 1.0;
    fStack_3a4 = (float)((local_208.Ptr)->Transform).M[1][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_208.Ptr)->Transform).M[0][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_208.Ptr)->Transform).M[2][1] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_208.Ptr)->Transform).M[3][1] * 1.0;
    fStack_3a0 = (float)((local_208.Ptr)->Transform).M[1][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_208.Ptr)->Transform).M[0][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_208.Ptr)->Transform).M[2][2] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_208.Ptr)->Transform).M[3][2] * 1.0;
    fStack_39c = (float)((local_208.Ptr)->Transform).M[1][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y +
                 (float)((local_208.Ptr)->Transform).M[0][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X +
                 (float)((local_208.Ptr)->Transform).M[2][3] *
                 UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z +
                 (float)((local_208.Ptr)->Transform).M[3][3] * 1.0;
    fVar56 = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][2];
    fVar51 = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][3];
    fVar46 = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][0];
    fVar47 = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][1];
    fVar42 = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][2];
    fVar52 = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][3];
    fVar44 = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][0];
    fVar45 = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][1];
    fVar54 = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][0];
    fVar55 = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][1];
    fVar48 = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][2];
    fVar53 = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][3];
    local_108.M[0][0] = fVar49;
    local_108.M[0][1] = fVar50;
    local_108.M[0][2] = fVar41;
    local_108.M[0][3] = fVar43;
    local_108.M[1][0] = fVar46;
    local_108.M[1][1] = fVar47;
    local_108.M[1][2] = fVar56;
    local_108.M[1][3] = fVar51;
    local_108.M[2][0] = fVar44;
    local_108.M[2][1] = fVar45;
    local_108.M[2][2] = fVar42;
    local_108.M[2][3] = fVar52;
    local_108.M[3][0] = fVar54;
    local_108.M[3][1] = fVar55;
    local_108.M[3][2] = fVar48;
    local_108.M[3][3] = fVar53;
    FNDITransformHandler::TransformUnitVector
              (local_1e8,(TVector<float> *)&local_3c8._s_0,&local_108);
    local_3d8._s_0.X = 0.0;
    local_3d8._s_0.Y = 1.0;
    local_3d8._s_0.Z = 0.0;
    local_108.M[0][0] = fVar49;
    local_108.M[0][1] = fVar50;
    local_108.M[0][2] = fVar41;
    local_108.M[0][3] = fVar43;
    local_108.M[1][0] = fVar46;
    local_108.M[1][1] = fVar47;
    local_108.M[1][2] = fVar56;
    local_108.M[1][3] = fVar51;
    local_108.M[2][0] = fVar44;
    local_108.M[2][1] = fVar45;
    local_108.M[2][2] = fVar42;
    local_108.M[2][3] = fVar52;
    local_108.M[3][0] = fVar54;
    local_108.M[3][1] = fVar55;
    local_108.M[3][2] = fVar48;
    local_108.M[3][3] = fVar53;
    FNDITransformHandler::TransformUnitVector
              (local_1e8,(TVector<float> *)&local_3d8._s_0,&local_108);
    local_3e8._0_8_ = (float *)0x0;
    local_3e8._s_0.Z = 1.0;
    local_108.M[0][0] = fVar49;
    local_108.M[0][1] = fVar50;
    local_108.M[0][2] = fVar41;
    local_108.M[0][3] = fVar43;
    local_108.M[1][0] = fVar46;
    local_108.M[1][1] = fVar47;
    local_108.M[1][2] = fVar56;
    local_108.M[1][3] = fVar51;
    local_108.M[2][0] = fVar44;
    local_108.M[2][1] = fVar45;
    local_108.M[2][2] = fVar42;
    local_108.M[2][3] = fVar52;
    local_108.M[3][0] = fVar54;
    local_108.M[3][1] = fVar55;
    local_108.M[3][2] = fVar48;
    local_108.M[3][3] = fVar53;
    FNDITransformHandler::TransformUnitVector
              (local_1e8,(TVector<float> *)&local_3e8._s_0,&local_108);
    pfVar19 = (float *)CONCAT44(local_3d8._s_0.Y,local_3d8._s_0.X);
    if (0 < param_1->NumInstances) {
      local_2a0 = (longlong)(int)local_360._s_0.Z * 4;
      local_2d8 = (longlong)(int)TStack_348._s_0.X * 4;
      uVar7 = local_3c8._s_0.Y;
      uVar6 = local_3c8._s_0.X;
      uVar9 = local_3b8._4_4_;
      uVar8 = (undefined4)local_3b8;
      uVar5 = local_3e8._s_0.Y;
      uVar4 = local_3e8._s_0.X;
      local_2e0 = (longlong)local_338 * 4;
      local_2e8 = (longlong)(int)local_390._s_0.Z * 4;
      local_2f0 = (longlong)(int)fStack_378 * 4;
      local_2f8 = (longlong)local_368 * 4;
      local_300 = (longlong)local_1c8.X.AdvanceOffset * 4;
      local_310 = (longlong)local_1c8.Y.AdvanceOffset * 4;
      local_318 = (longlong)local_1c8.Z.AdvanceOffset * 4;
      local_320 = (longlong)(int)local_148.M[0][2] * 4;
      local_298 = (longlong)(int)local_148.M[1][2] * 4;
      local_308 = (longlong)(int)local_148.M[2][2] * 4;
      local_2a8 = (longlong)local_198.X.AdvanceOffset * 4;
      local_2b0 = (longlong)local_198.Y.AdvanceOffset * 4;
      local_2b8 = (longlong)local_198.Z.AdvanceOffset * 4;
      local_3b8 = local_198.Z.Register;
      local_3e8._0_8_ = local_198.Y.Register;
      pfVar20 = (float *)CONCAT44(uStack_33c,TStack_348._s_0.Z);
      uVar33 = TStack_354._4_8_;
      pfVar21 = (float *)CONCAT44(local_148.M[1][1],local_148.M[1][0]);
      uVar37 = local_360._0_8_;
      pfVar22 = (float *)CONCAT44(uStack_36c,local_370);
      puVar38 = (undefined4 *)CONCAT44(fStack_37c,local_380);
      puVar39 = (undefined4 *)CONCAT44(local_390._s_0.Y,local_390._s_0.X);
      pfVar23 = (float *)CONCAT44(local_148.M[2][1],local_148.M[2][0]);
      local_3c8._0_8_ = (float *)CONCAT44(local_148.M[0][1],local_148.M[0][0]);
      do {
        iVar36 = iVar36 + 1;
        *(float *)uVar37 = local_3a8;
        *(float *)uVar33 = fStack_3a4;
        *pfVar20 = fStack_3a0;
        *puVar39 = uVar8;
        *puVar38 = uVar9;
        *pfVar22 = local_3b0;
        *local_1c8.X.Register = (float)uVar4;
        *local_1c8.Y.Register = (float)uVar5;
        *local_1c8.Z.Register = local_3e8._s_0.Z;
        pfVar19 = (float *)(local_320 + local_3c8._0_8_);
        *(float *)local_3c8._0_8_ = local_3d8._s_0.X;
        *pfVar21 = local_3d8._s_0.Y;
        *pfVar23 = local_3d8._s_0.Z;
        *local_198.X.Register = (float)uVar6;
        pfVar24 = (float *)(local_2b0 + local_3e8._0_8_);
        *(undefined4 *)local_3e8._0_8_ = uVar7;
        pfVar25 = local_3b8 + local_198.Z.AdvanceOffset;
        *local_3b8 = local_3c8._s_0.Z;
        pfVar20 = pfVar20 + local_338;
        uVar33 = (float *)(uVar33 + (longlong)(int)TStack_348._s_0.X * 4);
        local_1c8.Z.Register = local_1c8.Z.Register + local_1c8.Z.AdvanceOffset;
        pfVar21 = pfVar21 + (int)local_148.M[1][2];
        pFVar34 = local_328;
        uVar37 = (float *)(uVar37 + (longlong)(int)local_360._s_0.Z * 4);
        pfVar22 = pfVar22 + local_368;
        puVar38 = puVar38 + (int)fStack_378;
        puVar39 = puVar39 + (int)local_390._s_0.Z;
        local_1c8.X.Register = local_1c8.X.Register + local_1c8.X.AdvanceOffset;
        pfVar23 = pfVar23 + (int)local_148.M[2][2];
        local_1c8.Y.Register = local_1c8.Y.Register + local_1c8.Y.AdvanceOffset;
        local_3e8._0_8_ = pfVar24;
        local_3c8._0_8_ = pfVar19;
        local_3b8 = pfVar25;
        pfVar19 = local_198.X.Register + local_198.X.AdvanceOffset;
        local_198.X.Register = local_198.X.Register + local_198.X.AdvanceOffset;
      } while (iVar36 < local_2c8->NumInstances);
    }
  }
  else {
    if ((local_208.Ptr)->DeltaSeconds <= 0.0) {
      fVar56 = 0.0;
    }
    else {
      fVar56 = __real_3f800000 / (local_208.Ptr)->DeltaSeconds;
    }
    local_398 = 0;
    pfVar19 = (float *)CONCAT44(local_3d8._s_0.Y,local_3d8._s_0.X);
    if (0 < param_1->NumInstances) {
      lVar15 = (longlong)local_218[0];
      local_330 = &(pFVar34->VertexBuffers).StaticMeshVertexBuffer;
      local_2b8 = (longlong)(int)local_360._s_0.Z << 2;
      local_2b0 = (longlong)(int)TStack_348._s_0.X << 2;
      local_2a8 = (longlong)local_338 << 2;
      local_308 = (longlong)(int)local_390._s_0.Z << 2;
      local_298 = (longlong)(int)fStack_378 << 2;
      local_320 = (longlong)local_368 << 2;
      local_318 = (longlong)local_1c8.X.AdvanceOffset << 2;
      local_310 = (longlong)local_1c8.Y.AdvanceOffset << 2;
      local_300 = (longlong)local_1c8.Z.AdvanceOffset << 2;
      local_2f8 = (longlong)(int)local_148.M[0][2] << 2;
      local_2f0 = (longlong)(int)local_148.M[1][2] << 2;
      local_2e8 = (longlong)(int)local_148.M[2][2] << 2;
      local_2e0 = (longlong)local_198.X.AdvanceOffset << 2;
      local_2d8 = (longlong)local_198.Y.AdvanceOffset << 2;
      local_2a0 = (longlong)local_198.Z.AdvanceOffset << 2;
      local_238 = (float *)TStack_354._4_8_;
      local_280 = (float *)local_360._0_8_;
      local_230 = local_1c8.Z.Register;
      local_250 = local_1c8.Y.Register;
      local_258 = local_1c8.X.Register;
      local_3c8._0_8_ = local_198.Z.Register;
      fStack_1cc = 1.0;
      fStack_39c = 1.0;
      local_3e8._0_8_ = local_198.X.Register;
      local_3b8 = (float *)CONCAT44(local_148.M[2][1],local_148.M[2][0]);
      local_2c8 = (FVectorVMExternalFunctionContext *)(lVar15 * 4);
      local_278 = (float *)CONCAT44(uStack_33c,TStack_348._s_0.Z);
      local_270 = (float *)CONCAT44(local_390._s_0.Y,local_390._s_0.X);
      local_268 = (float *)CONCAT44(fStack_37c,local_380);
      local_260 = (float *)CONCAT44(uStack_36c,local_370);
      local_248 = (float *)CONCAT44(local_148.M[1][1],local_148.M[1][0]);
      local_240 = (float *)CONCAT44(local_148.M[0][1],local_148.M[0][0]);
      do {
        fVar42 = *local_290;
        local_290 = (float *)((longlong)
                              &((FVectorVMExternalFunctionContext *)(lVar15 * 4))->RegisterData +
                             (longlong)local_290);
        fVar48 = fVar41;
        if ((int)*local_288 < (int)fVar41) {
          fVar48 = *local_288;
        }
        fVar43 = 0.0;
        if (0 < (int)fVar48) {
          fVar43 = fVar48;
        }
        lVar3 = *(longlong *)&local_330[1].TangentsVertexBuffer.field_0x18;
        uVar18 = (ulonglong)
                 (uint)((int)fVar43 * *(int *)&local_330[1].TangentsVertexBuffer.field_0x20);
        pfVar19 = (float *)(uVar18 + lVar3);
        local_3a8 = *pfVar19;
        fStack_3a4 = pfVar19[1];
        fStack_3a0 = *(float *)(uVar18 + 8 + lVar3);
        fVar52 = (float)((local_208.Ptr)->PrevTransform).M[0][0] * local_3a8 +
                 (float)((local_208.Ptr)->PrevTransform).M[1][0] * fStack_3a4 +
                 (float)((local_208.Ptr)->PrevTransform).M[2][0] * fStack_3a0 +
                 (float)((local_208.Ptr)->PrevTransform).M[3][0] * fStack_39c;
        fVar53 = (float)((local_208.Ptr)->PrevTransform).M[0][1] * local_3a8 +
                 (float)((local_208.Ptr)->PrevTransform).M[1][1] * fStack_3a4 +
                 (float)((local_208.Ptr)->PrevTransform).M[2][1] * fStack_3a0 +
                 (float)((local_208.Ptr)->PrevTransform).M[3][1] * fStack_39c;
        fVar54 = (float)((local_208.Ptr)->PrevTransform).M[0][2] * local_3a8 +
                 (float)((local_208.Ptr)->PrevTransform).M[1][2] * fStack_3a4 +
                 (float)((local_208.Ptr)->PrevTransform).M[2][2] * fStack_3a0 +
                 (float)((local_208.Ptr)->PrevTransform).M[3][2] * fStack_39c;
        fVar55 = ((float)((local_208.Ptr)->Transform).M[0][0] * local_3a8 +
                  (float)((local_208.Ptr)->Transform).M[1][0] * fStack_3a4 +
                  (float)((local_208.Ptr)->Transform).M[2][0] * fStack_3a0 +
                 (float)((local_208.Ptr)->Transform).M[3][0] * fStack_1cc) - fVar52;
        fVar51 = ((float)((local_208.Ptr)->Transform).M[0][2] * local_3a8 +
                  (float)((local_208.Ptr)->Transform).M[1][2] * fStack_3a4 +
                  (float)((local_208.Ptr)->Transform).M[2][2] * fStack_3a0 +
                 (float)((local_208.Ptr)->Transform).M[3][2] * fStack_1cc) - fVar54;
        fVar48 = ((float)((local_208.Ptr)->Transform).M[0][1] * local_3a8 +
                  (float)((local_208.Ptr)->Transform).M[1][1] * fStack_3a4 +
                  (float)((local_208.Ptr)->Transform).M[2][1] * fStack_3a0 +
                 (float)((local_208.Ptr)->Transform).M[3][1] * fStack_1cc) - fVar53;
        local_288 = local_288 + lVar40;
        local_1d8 = local_3a8;
        fStack_1d4 = fStack_3a4;
        fStack_1d0 = fStack_3a0;
        local_3d8._0_8_ = local_198.Y.Register;
        pTVar16 = FStaticMeshVertexBuffer::VertexTangentX(local_330,&local_158,(uint)fVar43);
        local_390._s_0.X = (pTVar16->field0_0x0)._s_0.X;
        local_390._s_0.Y = (pTVar16->field0_0x0)._s_0.Y;
        local_390._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
        pTVar17 = FStaticMeshVertexBuffer::VertexTangentY(local_330,&local_168,(uint)fVar43);
        fStack_37c = (pTVar17->field0_0x0)._s_0.Z;
        fStack_384 = (float)*(undefined8 *)&pTVar17->field0_0x0;
        local_380 = (float)((ulonglong)*(undefined8 *)&pTVar17->field0_0x0 >> 0x20);
        pTVar16 = FStaticMeshVertexBuffer::VertexTangentZ(local_330,&local_228,(uint)fVar43);
        fStack_378 = (pTVar16->field0_0x0)._s_0.X;
        fStack_374 = (pTVar16->field0_0x0)._s_0.Y;
        local_370 = (pTVar16->field0_0x0)._s_0.Z;
        local_148.M[0][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][2];
        local_148.M[0][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][3];
        local_148.M[0][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][0];
        local_148.M[0][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][1];
        local_148.M[1][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][2];
        local_148.M[1][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][3];
        local_148.M[1][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][0];
        local_148.M[1][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][1];
        local_148.M[2][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][0];
        local_148.M[2][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][1];
        local_148.M[2][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][2];
        local_148.M[2][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][3];
        local_148.M[3][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][0];
        local_148.M[3][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][1];
        local_148.M[3][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][2];
        local_148.M[3][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][3];
        NDIStaticMeshLocal::FNDITangentBasis::TransformAndEnsureValid<FNDITransformHandler>
                  ((FNDITangentBasis *)&local_390._s_0,local_1e8,&local_148);
        TStack_354._4_8_ = CONCAT44(fStack_37c,local_380);
        TStack_348._0_8_ = CONCAT44(fStack_374,fStack_378);
        local_360._0_8_ = CONCAT44(local_390._s_0.Y,local_390._s_0.X);
        unique0x10001bf6 = CONCAT44(fStack_384,local_390._s_0.Z);
        TStack_348._s_0.Z = local_370;
        local_148.M[0][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][2];
        local_148.M[0][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][3];
        local_148.M[0][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][0];
        local_148.M[0][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[0][1];
        local_148.M[1][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][0];
        local_148.M[1][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][1];
        local_148.M[1][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][2];
        local_148.M[1][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[1][3];
        local_148.M[2][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][0];
        local_148.M[2][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][1];
        local_148.M[2][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][2];
        local_148.M[2][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[2][3];
        local_148.M[3][0] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][0];
        local_148.M[3][1] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][1];
        local_148.M[3][2] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][2];
        local_148.M[3][3] = (float)((local_208.Ptr)->TransformInverseTransposed).M[3][3];
        NDIStaticMeshLocal::FNDITangentBasis::TransformAndEnsureValid<FNDITransformHandler>
                  ((FNDITangentBasis *)&local_390._s_0,local_1e8,&local_148);
        local_148.M[0][2] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[0][2];
        local_148.M[0][3] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[0][3];
        local_148.M[0][0] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[0][0];
        local_148.M[0][1] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[0][1];
        local_148.M[1][0] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[1][0];
        local_148.M[1][1] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[1][1];
        local_148.M[1][2] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[1][2];
        local_148.M[1][3] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[1][3];
        local_148.M[2][0] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[2][0];
        local_148.M[2][1] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[2][1];
        local_148.M[2][2] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[2][2];
        local_148.M[2][3] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[2][3];
        local_148.M[3][0] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[3][0];
        local_148.M[3][1] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[3][1];
        local_148.M[3][2] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[3][2];
        local_148.M[3][3] = (float)((local_208.Ptr)->PrevTransformInverseTransposed).M[3][3];
        NDIStaticMeshLocal::FNDITangentBasis::TransformAndEnsureValid<FNDITransformHandler>
                  ((FNDITangentBasis *)&local_360._s_0,local_1e8,&local_148);
        pfVar19 = (float *)(local_2b8 + (longlong)local_280);
        *local_280 = fVar55 * fVar42 + fVar52;
        pfVar20 = (float *)(local_2b0 + (longlong)local_238);
        *local_238 = fVar48 * fVar42 + fVar53;
        pfVar21 = (float *)(local_2a8 + (longlong)local_278);
        *local_278 = fVar51 * fVar42 + fVar54;
        pfVar22 = (float *)(local_308 + (longlong)local_270);
        *local_270 = fVar55 * fVar56;
        pfVar23 = (float *)(local_298 + (longlong)local_268);
        *local_268 = fVar48 * fVar56;
        pfVar24 = (float *)(local_320 + (longlong)local_260);
        *local_260 = fVar51 * fVar56;
        pfVar25 = (float *)(local_318 + (longlong)local_258);
        *local_258 = (fStack_378 - TStack_348._s_0.X) * fVar42 + TStack_348._s_0.X;
        pfVar26 = (float *)(local_310 + (longlong)local_250);
        *local_250 = (fStack_374 - TStack_348._s_0.Y) * fVar42 + TStack_348._s_0.Y;
        pfVar27 = (float *)(local_300 + (longlong)local_230);
        *local_230 = (local_370 - TStack_348._s_0.Z) * fVar42 + TStack_348._s_0.Z;
        pfVar28 = (float *)(local_2f8 + (longlong)local_240);
        *local_240 = (fStack_384 - TStack_354._s_0.X) * fVar42 + TStack_354._s_0.X;
        pfVar29 = (float *)(local_2f0 + (longlong)local_248);
        *local_248 = (local_380 - TStack_354._s_0.Y) * fVar42 + TStack_354._s_0.Y;
        pfVar30 = (float *)(local_2e8 + (longlong)local_3b8);
        *local_3b8 = (fStack_37c - TStack_354._s_0.Z) * fVar42 + TStack_354._s_0.Z;
        pfVar31 = (float *)(local_2e0 + local_3e8._0_8_);
        *(float *)local_3e8._0_8_ =
             (local_390._s_0.X - local_360._s_0.X) * fVar42 + local_360._s_0.X;
        local_198.Y.Register = (float *)(local_2d8 + local_3d8._0_8_);
        *(float *)local_3d8._0_8_ =
             (local_390._s_0.Y - local_360._s_0.Y) * fVar42 + local_360._s_0.Y;
        pfVar32 = (float *)(local_2a0 + local_3c8._0_8_);
        *(float *)local_3c8._0_8_ =
             (local_390._s_0.Z - local_360._s_0.Z) * fVar42 + local_360._s_0.Z;
        local_398 = local_398 + 1;
        pFVar34 = local_328;
        local_3e8._0_8_ = pfVar31;
        local_3c8._0_8_ = pfVar32;
        local_3b8 = pfVar30;
        local_280 = pfVar19;
        local_278 = pfVar21;
        local_270 = pfVar22;
        local_268 = pfVar23;
        local_260 = pfVar24;
        local_258 = pfVar25;
        local_250 = pfVar26;
        local_248 = pfVar29;
        local_240 = pfVar28;
        local_238 = pfVar20;
        local_230 = pfVar27;
        pfVar19 = local_198.Y.Register;
      } while (local_398 < param_1->NumInstances);
    }
  }
  if (pFVar34 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar34->_padding_;
    LOCK();
    lVar40 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar40 == 1) && (plVar1 != (longlong *)0x0)) {
      local_3d8._0_8_ = pfVar19;
      (**(code **)pFVar34->_padding_)(pFVar34,1);
    }
  }
  return;
}

// VMGetVertexPosition_Deprecated<FNDITransformHandler> @ 148f788f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexPosition_Deprecated<FNDITransformHandler>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  uchar *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  FStaticMeshLODResources *pFVar13;
  ulonglong uVar14;
  FStaticMeshLODResources *pFVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_d8 [4];
  float *local_c8;
  float *local_c0;
  float *local_b8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_b0;
  float *local_80;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_70;
  FStaticMeshLODResources *local_60;
  FColorVertexBuffer *local_58 [6];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_70,param_1);
  iVar17 = 0;
  local_60 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_70.Ptr,local_58);
  pFVar15 = local_60;
  if (local_60 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar15 = pFVar13;
    if (local_60 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_60->_padding_;
      LOCK();
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_60->_padding_)(local_60,1);
      }
    }
  }
  local_d8[0] = 0;
  local_80 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  lVar19 = (longlong)local_d8[0];
  local_80 = local_80 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_b0,param_1);
  if (((pFVar15 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar15->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar12 = FPositionVertexBuffer::GetAllowCPUAccess
                         (&(pFVar15->VertexBuffers).PositionVertexBuffer), bVar12)) {
    fVar16 = (float)((pFVar15->VertexBuffers).PositionVertexBuffer.NumVertices - 1);
    if (-1 < (int)fVar16) {
      if (0 < param_1->NumInstances) {
        local_b8 = local_b0.Z.Register;
        local_c0 = local_b0.Y.Register;
        local_c8 = local_b0.X.Register;
        pfVar18 = local_80;
        do {
          dVar4 = ((local_70.Ptr)->Transform).M[0][2];
          dVar5 = ((local_70.Ptr)->Transform).M[0][1];
          fVar20 = fVar16;
          if ((int)*pfVar18 < (int)fVar16) {
            fVar20 = *pfVar18;
          }
          puVar3 = (pFVar15->VertexBuffers).PositionVertexBuffer.Data;
          fVar21 = 0.0;
          if (0 < (int)fVar20) {
            fVar21 = fVar20;
          }
          iVar17 = iVar17 + 1;
          uVar14 = (ulonglong)((int)fVar21 * (pFVar15->VertexBuffers).PositionVertexBuffer.Stride);
          dVar6 = ((local_70.Ptr)->Transform).M[1][2];
          pfVar2 = (float *)(puVar3 + uVar14);
          fVar21 = *pfVar2;
          fVar22 = pfVar2[1];
          fVar20 = *(float *)(puVar3 + uVar14 + 8);
          pfVar2 = local_c8 + local_b0.X.AdvanceOffset;
          dVar7 = ((local_70.Ptr)->Transform).M[2][2];
          dVar8 = ((local_70.Ptr)->Transform).M[1][1];
          dVar9 = ((local_70.Ptr)->Transform).M[2][1];
          dVar10 = ((local_70.Ptr)->Transform).M[3][2];
          dVar11 = ((local_70.Ptr)->Transform).M[3][1];
          *local_c8 = (float)((local_70.Ptr)->Transform).M[3][0] * 1.0 +
                      (float)((local_70.Ptr)->Transform).M[2][0] * fVar20 +
                      (float)((local_70.Ptr)->Transform).M[1][0] * fVar22 +
                      (float)((local_70.Ptr)->Transform).M[0][0] * fVar21;
          *local_c0 = (float)dVar11 * 1.0 +
                      (float)dVar9 * fVar20 + (float)dVar8 * fVar22 + (float)dVar5 * fVar21;
          local_c0 = local_c0 + local_b0.Y.AdvanceOffset;
          *local_b8 = (float)dVar10 * 1.0 +
                      (float)dVar7 * fVar20 + (float)dVar6 * fVar22 + (float)dVar4 * fVar21;
          local_b8 = local_b8 + local_b0.Z.AdvanceOffset;
          pfVar18 = pfVar18 + lVar19;
          local_c8 = pfVar2;
        } while (iVar17 < param_1->NumInstances);
      }
      goto LAB_148f78b8b;
    }
  }
  fVar25 = (float)((local_70.Ptr)->Transform).M[0][0] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar26 = (float)((local_70.Ptr)->Transform).M[0][1] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar27 = (float)((local_70.Ptr)->Transform).M[0][2] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  fVar16 = (float)((local_70.Ptr)->Transform).M[1][0] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  fVar20 = (float)((local_70.Ptr)->Transform).M[1][1] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  fVar21 = (float)((local_70.Ptr)->Transform).M[1][2] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = ((local_70.Ptr)->Transform).M[3][2];
  fVar22 = (float)((local_70.Ptr)->Transform).M[2][0] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar23 = (float)((local_70.Ptr)->Transform).M[2][1] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar24 = (float)((local_70.Ptr)->Transform).M[2][2] *
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = ((local_70.Ptr)->Transform).M[3][0];
  dVar6 = ((local_70.Ptr)->Transform).M[3][1];
  if (0 < param_1->NumInstances) {
    do {
      iVar17 = iVar17 + 1;
      *local_b0.X.Register = (float)dVar5 * 1.0 + fVar22 + fVar16 + fVar25;
      *local_b0.Y.Register = (float)dVar6 * 1.0 + fVar23 + fVar20 + fVar26;
      *local_b0.Z.Register = (float)dVar4 * 1.0 + fVar24 + fVar21 + fVar27;
      local_b0.Z.Register = local_b0.Z.Register + local_b0.Z.AdvanceOffset;
      local_b0.Y.Register = local_b0.Y.Register + local_b0.Y.AdvanceOffset;
      local_b0.X.Register = local_b0.X.Register + local_b0.X.AdvanceOffset;
    } while (iVar17 < param_1->NumInstances);
  }
LAB_148f78b8b:
  if (pFVar15 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar15->_padding_;
    LOCK();
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar19 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar15->_padding_)(pFVar15,1);
    }
  }
  return;
}

// VMGetVertexPosition_Deprecated<FNDITransformHandlerNoop> @ 148f78d30

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexPosition_Deprecated<FNDITransformHandlerNoop>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  uchar *puVar5;
  undefined4 uVar6;
  bool bVar7;
  FStaticMeshLODResources *pFVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  FStaticMeshLODResources *pFVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  undefined8 local_78;
  undefined1 local_68 [32];
  float *local_48;
  int local_40;
  float *local_38;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)local_68,param_1);
  iVar14 = 0;
  local_68._16_8_ = (FStaticMeshLODResources *)0x0;
  pFVar8 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     ((FInstanceData_GameThread *)CONCAT44(local_68._12_4_,local_68._8_4_),
                      (FColorVertexBuffer **)(local_68 + 0x18));
  pFVar12 = (FStaticMeshLODResources *)local_68._16_8_;
  if ((FStaticMeshLODResources *)local_68._16_8_ != pFVar8) {
    if (pFVar8 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
    }
    pFVar12 = pFVar8;
    if ((FStaticMeshLODResources *)local_68._16_8_ != (FStaticMeshLODResources *)0x0) {
      plVar1 = (longlong *)(local_68._16_8_ + 8);
      LOCK();
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)*(longlong *)local_68._16_8_)(local_68._16_8_,1);
      }
    }
  }
  local_68._16_8_ = local_68._16_8_ & 0xffffffff00000000;
  local_38 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_68 + 0x10));
  lVar15 = (longlong)(int)local_68._16_4_;
  local_38 = local_38 + local_68._16_4_ * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)local_68,param_1);
  if (((pFVar12 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar12->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar7 = FPositionVertexBuffer::GetAllowCPUAccess
                        (&(pFVar12->VertexBuffers).PositionVertexBuffer), bVar7)) {
    fVar13 = (float)((pFVar12->VertexBuffers).PositionVertexBuffer.NumVertices - 1);
    if (-1 < (int)fVar13) {
      if (0 < param_1->NumInstances) {
        local_78 = (float *)local_68._0_8_;
        pfVar11 = (float *)local_68._16_8_;
        do {
          pfVar2 = local_38 + lVar15;
          fVar4 = fVar13;
          if ((int)*local_38 < (int)fVar13) {
            fVar4 = *local_38;
          }
          puVar5 = (pFVar12->VertexBuffers).PositionVertexBuffer.Data;
          fVar9 = 0.0;
          if (0 < (int)fVar4) {
            fVar9 = fVar4;
          }
          iVar14 = iVar14 + 1;
          uVar10 = (ulonglong)((int)fVar9 * (pFVar12->VertexBuffers).PositionVertexBuffer.Stride);
          uVar3 = *(undefined8 *)(puVar5 + uVar10);
          fVar4 = *(float *)(puVar5 + uVar10 + 8);
          *local_78 = (float)uVar3;
          local_78 = local_78 + (int)local_68._8_4_;
          *pfVar11 = (float)((ulonglong)uVar3 >> 0x20);
          *local_48 = fVar4;
          local_48 = local_48 + local_40;
          pfVar11 = pfVar11 + (int)local_68._24_4_;
          local_38 = pfVar2;
        } while (iVar14 < param_1->NumInstances);
      }
      goto LAB_148f78ed7;
    }
  }
  uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    local_78._4_4_ =
         (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_78._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    pfVar11 = (float *)local_68._16_8_;
    do {
      iVar14 = iVar14 + 1;
      *(float *)local_68._0_8_ = (float)local_78;
      *pfVar11 = local_78._4_4_;
      *local_48 = (float)uVar6;
      local_48 = local_48 + local_40;
      pfVar11 = pfVar11 + (int)local_68._24_4_;
      local_68._0_8_ = (float *)(local_68._0_8_ + (longlong)(int)local_68._8_4_ * 4);
    } while (iVar14 < param_1->NumInstances);
  }
LAB_148f78ed7:
  if (pFVar12 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar12->_padding_;
    LOCK();
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar12->_padding_)(pFVar12,1);
    }
  }
  return;
}

// VMRandomFilteredSection<TNDIRandomHelper<FNDIRandomInfoPolicy>_> @ 148f78fa0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomFilteredSection<TNDIRandomHelper<FNDIRandomInfoPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  FStaticMeshLODResources *pFVar8;
  FStaticMeshLODResources *pFVar9;
  bool bVar10;
  FStaticMeshLODResources *pFVar11;
  TVector<float> *pTVar12;
  uint uVar13;
  FStaticMeshLODResources *pFVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float *local_148;
  int local_140 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_138;
  FStaticMeshLODResources *local_128;
  FColorVertexBuffer *local_120 [3];
  FNDIRandomInfoPolicy local_108;
  TVector<float> local_98;
  TVector<float> local_8c;
  TVector<float> local_80 [6];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_138,param_1);
  iVar16 = 0;
  local_128 = (FStaticMeshLODResources *)0x0;
  pFVar11 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_138.Ptr,local_120);
  pFVar8 = local_128;
  pFVar14 = local_128;
  pFVar9 = local_128;
  if (local_128 != pFVar11) {
    if (pFVar11 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
      UNLOCK();
    }
    pFVar14 = pFVar11;
    pFVar9 = pFVar11;
    if (local_128 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_128->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_128->_padding_;
        local_128 = pFVar11;
        (**(code **)*plVar1)(pFVar8,1);
        pFVar9 = local_128;
      }
    }
  }
  local_128 = pFVar9;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_108,param_1);
  local_140[0] = 0;
  local_148 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  iVar2 = (local_138.Ptr)->NumFilteredSections;
  pFVar3 = ((local_138.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
  local_148 = local_148 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
  if ((iVar2 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar7 = __real_3f800000;
  if (iVar2 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar16 = iVar16 + 1;
        *local_148 = 0.0;
        local_148 = local_148 + local_140[0];
      } while (iVar16 < param_1->NumInstances);
    }
  }
  else if ((pFVar14 == (FStaticMeshLODResources *)0x0) ||
          ((local_138.Ptr)->bIsCpuUniformlyDistributedSampling == 0)) {
    if (0 < param_1->NumInstances) {
      do {
        local_108.RandInfo.Seed1 = *local_108.RandParam.Seed1Param.InputPtr;
        local_108.RandInfo.Seed2 = *local_108.RandParam.Seed2Param.InputPtr;
        local_108.RandInfo.Seed3 = *local_108.RandParam.Seed3Param.InputPtr;
        if (local_108.RandInfo.Seed3 == -1) {
          uVar15 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar15;
          fVar18 = (float)(uVar15 >> 9 | 0x3f800000) - fVar7;
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_108,local_80,iVar16);
          fVar18 = (pTVar12->field0_0x0)._s_0.X;
        }
        uVar13 = (uint)((float)iVar2 * fVar18);
        uVar15 = 0;
        if ((int)uVar13 < iVar2) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar16 = iVar16 + 1;
        *local_148 = *(float *)(pFVar3 + (longlong)(int)uVar13 * 4);
        pFVar14 = local_128;
        local_148 = local_148 + local_140[0];
      } while (iVar16 < param_1->NumInstances);
    }
  }
  else {
    iVar16 = (local_138.Ptr)->NumFilteredSections;
    pFVar4 = ((local_138.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
    if ((iVar16 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar7 = __real_3f800000;
    iVar17 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_108.RandInfo.Seed1 = *local_108.RandParam.Seed1Param.InputPtr;
        local_108.RandInfo.Seed2 = *local_108.RandParam.Seed2Param.InputPtr;
        local_108.RandInfo.Seed3 = *local_108.RandParam.Seed3Param.InputPtr;
        if (local_108.RandInfo.Seed3 == -1) {
          uVar15 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar15;
          fVar18 = (float)(uVar15 >> 9 | 0x3f800000) - fVar7;
          uVar15 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar15;
          fVar19 = (float)(uVar15 >> 9 | 0x3f800000) - fVar7;
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_108,&local_98,iVar17);
          fVar18 = (pTVar12->field0_0x0)._s_0.X;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_108,&local_8c,iVar17);
          fVar19 = (pTVar12->field0_0x0)._s_0.X;
        }
        uVar15 = (uint)((float)iVar16 * fVar18);
        uVar13 = 0;
        if ((int)uVar15 < iVar16) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(float *)(pFVar4 + (longlong)(int)uVar15 * 0x10 + 8) <= fVar19) {
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = *(uint *)(pFVar4 + (longlong)(int)uVar15 * 0x10 + 0xc);
        }
        uVar13 = 0;
        if ((int)uVar15 < iVar2) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = *(uint *)(pFVar3 + (longlong)(int)uVar15 * 4);
        uVar13 = 0;
        if ((int)uVar15 < iVar2) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = iVar17 + 1;
        *local_148 = *(float *)(pFVar3 + (longlong)(int)uVar15 * 4);
        pFVar14 = local_128;
        local_148 = local_148 + local_140[0];
      } while (iVar17 < param_1->NumInstances);
    }
  }
  if (pFVar14 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar14->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar14->_padding_)(pFVar14,1);
    }
  }
  return;
}

// VMRandomFilteredSection<TNDIRandomHelper<FNDIRandomStreamPolicy>_> @ 148f79570

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomFilteredSection<TNDIRandomHelper<FNDIRandomStreamPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  FStaticMeshLODResources *pFVar9;
  FStaticMeshLODResources *pFVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FStaticMeshLODResources *pFVar14;
  uint uVar15;
  FStaticMeshLODResources *pFVar16;
  int iVar17;
  float *local_a8;
  int local_a0 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_98;
  FStaticMeshLODResources *local_88;
  FColorVertexBuffer *local_80 [9];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_98,param_1);
  iVar17 = 0;
  local_88 = (FStaticMeshLODResources *)0x0;
  pFVar14 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_98.Ptr,local_80);
  pFVar9 = local_88;
  pFVar16 = local_88;
  pFVar10 = local_88;
  if (local_88 != pFVar14) {
    if (pFVar14 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
      UNLOCK();
    }
    pFVar16 = pFVar14;
    pFVar10 = pFVar14;
    if (local_88 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_88->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_88->_padding_;
        local_88 = pFVar14;
        (**(code **)*plVar1)(pFVar9,1);
        pFVar10 = local_88;
      }
    }
  }
  local_88 = pFVar10;
  local_a0[0] = 0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar2 = (local_98.Ptr)->NumFilteredSections;
  pFVar4 = ((local_98.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
  local_a8 = local_a8 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar8 = __real_3f800000;
  if (iVar2 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar17 = iVar17 + 1;
        *local_a8 = 0.0;
        local_a8 = local_a8 + local_a0[0];
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else if ((pFVar16 == (FStaticMeshLODResources *)0x0) ||
          ((local_98.Ptr)->bIsCpuUniformlyDistributedSampling == 0)) {
    if (0 < param_1->NumInstances) {
      do {
        uVar12 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
        param_1->RandStream->Seed = uVar12;
        uVar15 = (uint)(((float)(uVar12 >> 9 | 0x3f800000) - fVar8) * (float)iVar2);
        uVar12 = 0;
        if ((int)uVar15 < iVar2) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar17 = iVar17 + 1;
        *local_a8 = *(float *)(pFVar4 + (longlong)(int)uVar15 * 4);
        pFVar16 = local_88;
        local_a8 = local_a8 + local_a0[0];
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else {
    iVar3 = (local_98.Ptr)->NumFilteredSections;
    pFVar5 = ((local_98.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar8 = __real_3f800000;
    if (0 < param_1->NumInstances) {
      do {
        uVar12 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
        param_1->RandStream->Seed = uVar12;
        uVar13 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
        param_1->RandStream->Seed = uVar13;
        uVar12 = (uint)(((float)(uVar12 >> 9 | 0x3f800000) - fVar8) * (float)iVar3);
        uVar15 = 0;
        if ((int)uVar12 < iVar3) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(float *)(pFVar5 + (longlong)(int)uVar12 * 0x10 + 8) <=
            (float)(uVar13 >> 9 | 0x3f800000) - fVar8) {
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = *(uint *)(pFVar5 + (longlong)(int)uVar12 * 0x10 + 0xc);
        }
        uVar15 = 0;
        if ((int)uVar12 < iVar2) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = *(uint *)(pFVar4 + (longlong)(int)uVar12 * 4);
        uVar15 = 0;
        if ((int)uVar12 < iVar2) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar17 = iVar17 + 1;
        *local_a8 = *(float *)(pFVar4 + (longlong)(int)uVar12 * 4);
        pFVar16 = local_88;
        local_a8 = local_a8 + local_a0[0];
      } while (iVar17 < param_1->NumInstances);
    }
  }
  if (pFVar16 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar16->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
  }
  return;
}

// VMRandomSection<TNDIRandomHelper<FNDIRandomInfoPolicy>_> @ 148f79a20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomSection<TNDIRandomHelper<FNDIRandomInfoPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  FStaticMeshLODResources *pFVar5;
  float *pfVar6;
  TVector<float> *pTVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  FStaticMeshLODResources *local_res10;
  undefined1 local_118 [16];
  FNDIRandomInfoPolicy local_108;
  longlong local_98;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_90;
  FStaticMeshLODResources *local_80;
  FColorVertexBuffer *local_78 [2];
  TVector<float> local_68 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_90,param_1);
  iVar11 = 0;
  local_80 = (FStaticMeshLODResources *)0x0;
  pFVar5 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_90.Ptr,local_78);
  local_res10 = local_80;
  if (local_80 != pFVar5) {
    if (pFVar5 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    local_res10 = pFVar5;
    if (local_80 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_80->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_80->_padding_)(local_80,1);
      }
    }
  }
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_108,param_1);
  local_118._8_4_ = 0.0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<float> *)local_118)->field0_0x0)._s_0.Z);
  fVar2 = __real_3f800000;
  lVar9 = (longlong)(int)local_118._8_4_;
  if (local_res10 == (FStaticMeshLODResources *)0x0) {
LAB_148f79c5a:
    iVar8 = 1;
  }
  else {
    if ((local_90.Ptr)->bIsCpuUniformlyDistributedSampling != 0) {
      if (0 < param_1->NumInstances) {
        local_98 = (longlong)local_108.RandParam.Seed1Param.AdvanceOffset << 2;
        piVar10 = local_108.RandParam.Seed3Param.InputPtr;
        piVar12 = local_108.RandParam.Seed2Param.InputPtr;
        piVar13 = local_108.RandParam.Seed1Param.InputPtr;
        pfVar6 = pfVar6 + local_118._8_4_ * param_1->PerInstanceFnInstanceIdx;
        do {
          local_108.RandInfo.Seed1 = *piVar13;
          piVar13 = (int *)((longlong)piVar13 + local_98);
          local_108.RandInfo.Seed2 = *piVar12;
          piVar12 = piVar12 + local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandInfo.Seed3 = *piVar10;
          piVar10 = piVar10 + local_108.RandParam.Seed3Param.AdvanceOffset;
          local_108.RandParam.Seed1Param.InputPtr = piVar13;
          local_108.RandParam.Seed2Param.InputPtr = piVar12;
          local_108.RandParam.Seed3Param.InputPtr = piVar10;
          if (local_108.RandInfo.Seed3 == -1) {
            uVar3 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_108.Context)->RandStream->Seed = uVar3;
            fVar4 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
            uVar3 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_108.Context)->RandStream->Seed = uVar3;
            fVar14 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
          }
          else {
            pTVar7 = FNDIRandomInfoPolicy::Rand3(&local_108,local_68,iVar11);
            fVar4 = (pTVar7->field0_0x0)._s_0.X;
            pTVar7 = FNDIRandomInfoPolicy::Rand3(&local_108,(TVector<float> *)local_118,iVar11);
            fVar14 = (pTVar7->field0_0x0)._s_0.X;
          }
          fVar4 = (float)FWeightedRandomSampler::GetEntryIndex
                                   ((FWeightedRandomSampler *)&local_res10->AreaWeightedSampler,
                                    fVar14,fVar4);
          iVar11 = iVar11 + 1;
          *pfVar6 = fVar4;
          pfVar6 = pfVar6 + lVar9;
        } while (iVar11 < param_1->NumInstances);
      }
      goto LAB_148f79d62;
    }
    if (local_res10 == (FStaticMeshLODResources *)0x0) goto LAB_148f79c5a;
    iVar8 = *(int *)&(local_res10->Sections).field_0x28;
  }
  if (0 < param_1->NumInstances) {
    piVar10 = local_108.RandParam.Seed3Param.InputPtr;
    piVar12 = local_108.RandParam.Seed2Param.InputPtr;
    piVar13 = local_108.RandParam.Seed1Param.InputPtr;
    pfVar6 = pfVar6 + local_118._8_4_ * param_1->PerInstanceFnInstanceIdx;
    do {
      local_108.RandInfo.Seed1 = *piVar13;
      piVar13 = piVar13 + local_108.RandParam.Seed1Param.AdvanceOffset;
      local_108.RandInfo.Seed2 = *piVar12;
      piVar12 = piVar12 + local_108.RandParam.Seed2Param.AdvanceOffset;
      local_108.RandInfo.Seed3 = *piVar10;
      piVar10 = piVar10 + local_108.RandParam.Seed3Param.AdvanceOffset;
      local_108.RandParam.Seed1Param.InputPtr = piVar13;
      local_108.RandParam.Seed2Param.InputPtr = piVar12;
      local_108.RandParam.Seed3Param.InputPtr = piVar10;
      if (local_108.RandInfo.Seed3 == -1) {
        uVar3 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_108.Context)->RandStream->Seed = uVar3;
        fVar4 = (float)(uVar3 >> 9 | 0x3f800000) - fVar2;
      }
      else {
        pTVar7 = FNDIRandomInfoPolicy::Rand3(&local_108,(TVector<float> *)local_118,iVar11);
        fVar4 = (pTVar7->field0_0x0)._s_0.X;
      }
      iVar11 = iVar11 + 1;
      *pfVar6 = (float)(int)(fVar4 * (float)iVar8);
      pfVar6 = pfVar6 + lVar9;
    } while (iVar11 < param_1->NumInstances);
  }
LAB_148f79d62:
  if (local_res10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_res10->_padding_;
    LOCK();
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
  }
  return;
}

// VMRandomSectionTriangle<TNDIRandomHelper<FNDIRandomInfoPolicy>_> @ 148f79dd0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomSectionTriangle<TNDIRandomHelper<FNDIRandomInfoPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FStaticMeshSectionArray *pFVar2;
  code *pcVar3;
  float fVar4;
  FStaticMeshLODResources *pFVar5;
  FStaticMeshLODResources *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FStaticMeshLODResources *pFVar10;
  ForAnyElementType FVar11;
  TVector<float> *pTVar12;
  FStaticMeshSectionArray *pFVar13;
  FStaticMeshSectionArray *pFVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  FStaticMeshLODResources *pFVar18;
  longlong *plVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  longlong lVar23;
  float *pfVar24;
  int *piVar25;
  float fVar26;
  int *piVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float *local_1b8;
  int local_1b0 [2];
  undefined8 local_1a8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1a0;
  FNDIRandomInfoPolicy local_168;
  longlong local_f8;
  float *local_f0;
  float *local_e8;
  int local_e0 [2];
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_b8;
  FStaticMeshLODResources *local_a8;
  FColorVertexBuffer *local_a0 [2];
  TVector<float>_u_0 local_90;
  TVector<float>_u_0 local_80;
  TVector<float> local_70;
  TVector<float> local_64 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_b8,param_1);
  local_a8 = (FStaticMeshLODResources *)0x0;
  pFVar10 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_b8.Ptr,local_a0);
  pFVar5 = local_a8;
  pFVar18 = local_a8;
  pFVar6 = local_a8;
  if (local_a8 != pFVar10) {
    if (pFVar10 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar18 = pFVar10;
    pFVar6 = pFVar10;
    if (local_a8 != (FStaticMeshLODResources *)0x0) {
      plVar19 = &local_a8->_padding_;
      LOCK();
      lVar23 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if (((int)lVar23 == 1) && (plVar19 != (longlong *)0x0)) {
        plVar19 = &local_a8->_padding_;
        local_a8 = pFVar10;
        (**(code **)*plVar19)(pFVar5,1);
        pFVar6 = local_a8;
      }
    }
  }
  local_a8 = pFVar6;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_168,param_1);
  local_e0[0] = 0;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_1b0[0] = 0;
  local_f0 = local_f0 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_e8 = local_f0;
  local_1b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  local_1b8 = local_1b8 + local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1a0,param_1);
  fVar4 = __real_3f800000;
  if (pFVar18 == (FStaticMeshLODResources *)0x0) {
    fVar20 = 0.0;
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
  }
  else {
    fVar20 = (float)(*(int *)&(pFVar18->Sections).field_0x28 + -1);
    local_1a8 = CONCAT44(local_1a8._4_4_,fVar20);
    if ((int)fVar20 < 0) {
      iVar15 = 0;
      if (0 < param_1->NumInstances) {
        lVar23 = (longlong)local_1b0[0];
        local_f8 = (longlong)local_1a0.X.AdvanceOffset << 2;
        local_1a8 = (longlong)local_1a0.Y.AdvanceOffset << 2;
        local_d8._0_8_ = (longlong)local_168.RandParam.Seed2Param.AdvanceOffset << 2;
        local_c8._0_8_ = (longlong)local_168.RandParam.Seed3Param.AdvanceOffset << 2;
        local_90._0_8_ = (longlong)local_1a0.Z.AdvanceOffset << 2;
        piVar16 = local_168.RandParam.Seed3Param.InputPtr;
        pfVar21 = local_1a0.X.Register;
        pfVar22 = local_1a0.Z.Register;
        pfVar24 = local_1a0.Y.Register;
        piVar25 = local_168.RandParam.Seed2Param.InputPtr;
        piVar27 = local_168.RandParam.Seed1Param.InputPtr;
        do {
          local_168.RandInfo.Seed1 = *piVar27;
          piVar27 = piVar27 + local_168.RandParam.Seed1Param.AdvanceOffset;
          local_168.RandInfo.Seed2 = *piVar25;
          piVar25 = (int *)((longlong)piVar25 + local_d8._0_8_);
          piVar17 = (int *)((longlong)piVar16 + local_c8._0_8_);
          local_168.RandInfo.Seed3 = *piVar16;
          *local_1b8 = 0.0;
          local_168.RandParam.Seed1Param.InputPtr = piVar27;
          local_168.RandParam.Seed2Param.InputPtr = piVar25;
          local_168.RandParam.Seed3Param.InputPtr = piVar17;
          if (local_168.RandInfo.Seed3 == -1) {
            uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_168.Context)->RandStream->Seed = uVar9;
            uVar30 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
            uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_168.Context)->RandStream->Seed = uVar9;
            uVar28 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
          }
          else {
            FNDIRandomInfoPolicy::Rand3(&local_168,(TVector<float> *)&local_80._s_0,iVar15);
            uVar28 = local_80._s_0.X;
            uVar30 = local_80._s_0.Y;
          }
          fVar20 = SQRT((float)uVar28);
          iVar15 = iVar15 + 1;
          *pfVar21 = fVar4 - fVar20;
          *pfVar24 = (fVar4 - (float)uVar30) * fVar20;
          *pfVar22 = (float)uVar30 * fVar20;
          piVar16 = piVar17;
          pFVar18 = local_a8;
          pfVar21 = (float *)(local_f8 + (longlong)pfVar21);
          pfVar22 = (float *)(local_90._0_8_ + (longlong)pfVar22);
          pfVar24 = (float *)(local_1a8 + (longlong)pfVar24);
          local_1b8 = local_1b8 + lVar23;
        } while (iVar15 < param_1->NumInstances);
      }
      goto LAB_148f7a736;
    }
    if ((local_b8.Ptr)->bIsCpuUniformlyDistributedSampling != 0) {
      iVar15 = 0;
      if (0 < param_1->NumInstances) {
        do {
          piVar16 = local_168.RandParam.Seed1Param.InputPtr +
                    local_168.RandParam.Seed1Param.AdvanceOffset;
          local_168.RandInfo.Seed1 = *local_168.RandParam.Seed1Param.InputPtr;
          piVar25 = local_168.RandParam.Seed2Param.InputPtr +
                    local_168.RandParam.Seed2Param.AdvanceOffset;
          local_168.RandInfo.Seed2 = *local_168.RandParam.Seed2Param.InputPtr;
          iVar1 = *local_168.RandParam.Seed3Param.InputPtr;
          local_168.RandParam.Seed3Param.InputPtr =
               local_168.RandParam.Seed3Param.InputPtr +
               local_168.RandParam.Seed3Param.AdvanceOffset;
          pfVar21 = local_f0 + local_e0[0];
          if ((int)*local_f0 < (int)fVar20) {
            fVar20 = *local_f0;
          }
          fVar26 = 0.0;
          if (0 < (int)fVar20) {
            fVar26 = fVar20;
          }
          fVar20 = 0.0;
          local_168.RandParam.Seed1Param.InputPtr = piVar16;
          local_168.RandParam.Seed2Param.InputPtr = piVar25;
          local_168.RandInfo.Seed3 = iVar1;
          local_f0 = pfVar21;
          if ((-1 < (int)fVar26) &&
             (fVar20 = 0.0, (int)fVar26 < (pFVar18->AreaWeightedSectionSamplers).ArrayNum)) {
            if (((int)fVar26 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar11 = (pFVar18->AreaWeightedSectionSamplers).AllocatorInstance;
            if (((ulonglong)FVar11 & 1) != 0) {
              FVar11 = (ForAnyElementType)
                       ((longlong)
                        &(pFVar18->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                       ((longlong)FVar11 >> 0x18));
            }
            local_f8 = (longlong)(int)fVar26;
            lVar23 = local_f8 * 0x40;
            fVar20 = 0.0;
            if (*(int *)((longlong)FVar11 + 0x10U + lVar23) != 0) {
              uVar9 = 0;
              if ((int)fVar26 < (pFVar18->AreaWeightedSectionSamplers).ArrayNum) {
                uVar9 = ~(uint)fVar26 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar11 = (pFVar18->AreaWeightedSectionSamplers).AllocatorInstance;
              if (((ulonglong)FVar11 & 1) != 0) {
                FVar11 = (ForAnyElementType)
                         ((longlong)
                          &(pFVar18->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                         ((longlong)FVar11 >> 0x18));
              }
              if (iVar1 == -1) {
                uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
                (local_168.Context)->RandStream->Seed = uVar9;
                fVar20 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
                uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
                (local_168.Context)->RandStream->Seed = uVar9;
                fVar29 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
              }
              else {
                pTVar12 = FNDIRandomInfoPolicy::Rand3
                                    (&local_168,(TVector<float> *)&local_90._s_0,iVar15);
                fVar20 = (pTVar12->field0_0x0)._s_0.X;
                pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_168,&local_70,iVar15);
                fVar29 = (pTVar12->field0_0x0)._s_0.X;
              }
              iVar8 = FWeightedRandomSampler::GetEntryIndex
                                ((FWeightedRandomSampler *)((longlong)FVar11 + lVar23),fVar29,fVar20
                                );
              uVar9 = 0;
              if ((int)fVar26 < *(int *)&(pFVar18->Sections).field_0x28) {
                uVar9 = ~(uint)fVar26 >> 0x1f;
              }
              lVar23 = local_f8;
              if (uVar9 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                lVar23 = (longlong)(int)fVar26;
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pFVar2 = *(FStaticMeshSectionArray **)&(pFVar18->Sections).field_0x20;
              pFVar13 = &pFVar18->Sections;
              if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
                pFVar13 = pFVar2;
              }
              fVar20 = (float)(*(uint *)(&pFVar13->field_0x4 + lVar23 * 0x1c) / 3 + iVar8);
            }
          }
          *local_1b8 = fVar20;
          local_1b8 = local_1b8 + local_1b0[0];
          if (iVar1 == -1) {
            uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_168.Context)->RandStream->Seed = uVar9;
            uVar30 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
            uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_168.Context)->RandStream->Seed = uVar9;
            uVar28 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
          }
          else {
            FNDIRandomInfoPolicy::Rand3(&local_168,(TVector<float> *)&local_c8._s_0,iVar15);
            uVar28 = local_c8._s_0.X;
            uVar30 = local_c8._s_0.Y;
          }
          iVar15 = iVar15 + 1;
          fVar20 = SQRT((float)uVar28);
          pfVar21 = local_1a0.X.Register + local_1a0.X.AdvanceOffset;
          *local_1a0.X.Register = fVar4 - fVar20;
          pfVar22 = local_1a0.Y.Register + local_1a0.Y.AdvanceOffset;
          *local_1a0.Y.Register = (fVar4 - (float)uVar30) * fVar20;
          *local_1a0.Z.Register = (float)uVar30 * fVar20;
          local_1a0.Z.Register = local_1a0.Z.Register + local_1a0.Z.AdvanceOffset;
          local_1a0.X.Register = pfVar21;
          local_1a0.Y.Register = pfVar22;
          fVar20 = (float)local_1a8;
        } while (iVar15 < param_1->NumInstances);
      }
      goto LAB_148f7a736;
    }
  }
  iVar15 = 0;
  if (0 < param_1->NumInstances) {
    do {
      piVar16 = local_168.RandParam.Seed1Param.InputPtr +
                local_168.RandParam.Seed1Param.AdvanceOffset;
      local_168.RandInfo.Seed1 = *local_168.RandParam.Seed1Param.InputPtr;
      piVar25 = local_168.RandParam.Seed2Param.InputPtr +
                local_168.RandParam.Seed2Param.AdvanceOffset;
      local_168.RandInfo.Seed2 = *local_168.RandParam.Seed2Param.InputPtr;
      iVar1 = *local_168.RandParam.Seed3Param.InputPtr;
      local_168.RandParam.Seed3Param.InputPtr =
           local_168.RandParam.Seed3Param.InputPtr + local_168.RandParam.Seed3Param.AdvanceOffset;
      pfVar21 = local_f0 + local_e0[0];
      if ((int)*local_f0 < (int)fVar20) {
        fVar20 = *local_f0;
      }
      fVar26 = 0.0;
      if (0 < (int)fVar20) {
        fVar26 = fVar20;
      }
      uVar9 = 0;
      if ((int)fVar26 < *(int *)&(pFVar18->Sections).field_0x28) {
        uVar9 = ~(uint)fVar26 >> 0x1f;
      }
      local_168.RandParam.Seed1Param.InputPtr = piVar16;
      local_168.RandParam.Seed2Param.InputPtr = piVar25;
      local_168.RandInfo.Seed3 = iVar1;
      local_f0 = pfVar21;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FStaticMeshSectionArray **)&(pFVar18->Sections).field_0x20;
      pFVar13 = &pFVar18->Sections;
      if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
        pFVar13 = pFVar2;
      }
      if (iVar1 == -1) {
        uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_168.Context)->RandStream->Seed = uVar9;
        fVar20 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
      }
      else {
        pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_168,local_64,iVar15);
        fVar20 = (pTVar12->field0_0x0)._s_0.X;
      }
      uVar9 = 0;
      if ((int)fVar26 < *(int *)&(pFVar18->Sections).field_0x28) {
        uVar9 = ~(uint)fVar26 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FStaticMeshSectionArray **)&(pFVar18->Sections).field_0x20;
      pFVar14 = &pFVar18->Sections;
      if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
        pFVar14 = pFVar2;
      }
      lVar23 = (longlong)local_1b0[0];
      *local_1b8 = (float)((int)((float)*(uint *)(&pFVar13->field_0x8 + (longlong)(int)fVar26 * 0x1c
                                                 ) * fVar20) +
                          *(uint *)(&pFVar14->field_0x4 + (longlong)(int)fVar26 * 0x1c) / 3);
      if (iVar1 == -1) {
        uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_168.Context)->RandStream->Seed = uVar9;
        uVar30 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
        uVar9 = (local_168.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_168.Context)->RandStream->Seed = uVar9;
        uVar28 = (float)(uVar9 >> 9 | 0x3f800000) - fVar4;
      }
      else {
        FNDIRandomInfoPolicy::Rand3(&local_168,(TVector<float> *)&local_d8._s_0,iVar15);
        uVar28 = local_d8._s_0.X;
        uVar30 = local_d8._s_0.Y;
      }
      iVar15 = iVar15 + 1;
      fVar20 = SQRT((float)uVar28);
      pfVar21 = local_1a0.X.Register + local_1a0.X.AdvanceOffset;
      *local_1a0.X.Register = fVar4 - fVar20;
      pfVar22 = local_1a0.Y.Register + local_1a0.Y.AdvanceOffset;
      *local_1a0.Y.Register = (fVar4 - (float)uVar30) * fVar20;
      pfVar24 = local_1a0.Z.Register + local_1a0.Z.AdvanceOffset;
      *local_1a0.Z.Register = (float)uVar30 * fVar20;
      local_1b8 = local_1b8 + lVar23;
      local_1a0.X.Register = pfVar21;
      local_1a0.Y.Register = pfVar22;
      local_1a0.Z.Register = pfVar24;
      fVar20 = (float)local_1a8;
    } while (iVar15 < param_1->NumInstances);
  }
LAB_148f7a736:
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    plVar19 = &pFVar18->_padding_;
    LOCK();
    lVar23 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((((int)lVar23 == 1) && (plVar19 != (longlong *)0x0)) &&
       (pFVar18 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)pFVar18->_padding_)(pFVar18,1);
    }
  }
  return;
}

// VMRandomSectionTriangle<TNDIRandomHelper<FNDIRandomStreamPolicy>_> @ 148f7a7b0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomSectionTriangle<TNDIRandomHelper<FNDIRandomStreamPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  FStaticMeshSectionArray *pFVar1;
  code *pcVar2;
  float fVar3;
  FStaticMeshLODResources *pFVar4;
  FStaticMeshLODResources *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FStaticMeshLODResources *pFVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  FStaticMeshSectionArray *pFVar16;
  longlong lVar17;
  float fVar18;
  float *pfVar19;
  FStaticMeshSectionArray *pFVar20;
  float fVar21;
  int local_res10;
  float local_res18;
  float *local_d8;
  int local_d0 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_c8;
  float *local_98;
  float *local_90;
  int local_88 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_80;
  FStaticMeshLODResources *local_70;
  FColorVertexBuffer *local_68 [6];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_80,param_1);
  local_70 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_80.Ptr,local_68);
  pFVar4 = local_70;
  pFVar12 = local_70;
  pFVar5 = local_70;
  if (local_70 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar12 = pFVar9;
    pFVar5 = pFVar9;
    if (local_70 != (FStaticMeshLODResources *)0x0) {
      plVar13 = &local_70->_padding_;
      LOCK();
      lVar17 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if (((int)lVar17 == 1) && (plVar13 != (longlong *)0x0)) {
        plVar13 = &local_70->_padding_;
        local_70 = pFVar9;
        (**(code **)*plVar13)(pFVar4,1);
        pFVar5 = local_70;
      }
    }
  }
  local_70 = pFVar5;
  local_88[0] = 0;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_d0[0] = 0;
  local_98 = local_98 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = local_98;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  local_d8 = local_d8 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_c8,param_1);
  fVar3 = __real_3f800000;
  if (pFVar12 == (FStaticMeshLODResources *)0x0) {
    local_res18 = 0.0;
  }
  else {
    local_res18 = (float)(*(int *)&(pFVar12->Sections).field_0x28 + -1);
    if ((int)local_res18 < 0) {
      iVar8 = 0;
      if (0 < param_1->NumInstances) {
        pfVar14 = local_c8.Y.Register;
        pfVar15 = local_c8.Z.Register;
        pfVar19 = local_c8.X.Register;
        do {
          iVar8 = iVar8 + 1;
          *local_d8 = 0.0;
          local_d8 = local_d8 + local_d0[0];
          uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar7;
          fVar18 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
          uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar7;
          fVar21 = SQRT((float)(uVar7 >> 9 | 0x3f800000) - fVar3);
          *pfVar19 = fVar3 - fVar21;
          *pfVar14 = (fVar3 - fVar18) * fVar21;
          *pfVar15 = fVar18 * fVar21;
          pfVar14 = pfVar14 + local_c8.Y.AdvanceOffset;
          pfVar15 = pfVar15 + local_c8.Z.AdvanceOffset;
          pfVar19 = pfVar19 + local_c8.X.AdvanceOffset;
        } while (iVar8 < param_1->NumInstances);
      }
      goto LAB_148f7aebe;
    }
    if ((local_80.Ptr)->bIsCpuUniformlyDistributedSampling != 0) {
      local_res10 = 0;
      if (0 < param_1->NumInstances) {
        do {
          pfVar14 = local_98 + local_88[0];
          fVar18 = local_res18;
          if ((int)*local_98 < (int)local_res18) {
            fVar18 = *local_98;
          }
          fVar21 = 0.0;
          if (0 < (int)fVar18) {
            fVar21 = fVar18;
          }
          fVar18 = 0.0;
          local_98 = pfVar14;
          if ((-1 < (int)fVar21) && ((int)fVar21 < (pFVar12->AreaWeightedSectionSamplers).ArrayNum))
          {
            if (((int)fVar21 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar10 = (pFVar12->AreaWeightedSectionSamplers).AllocatorInstance;
            if (((ulonglong)FVar10 & 1) != 0) {
              FVar10 = (ForAnyElementType)
                       ((longlong)
                        &(pFVar12->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                       ((longlong)FVar10 >> 0x18));
            }
            lVar17 = (longlong)(int)fVar21 * 0x40;
            fVar18 = 0.0;
            if (*(int *)((longlong)FVar10 + 0x10U + lVar17) != 0) {
              uVar7 = 0;
              if ((int)fVar21 < (pFVar12->AreaWeightedSectionSamplers).ArrayNum) {
                uVar7 = ~(uint)fVar21 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar10 = (pFVar12->AreaWeightedSectionSamplers).AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)
                          &(pFVar12->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              uVar11 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
              param_1->RandStream->Seed = uVar11;
              uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
              param_1->RandStream->Seed = uVar7;
              iVar8 = FWeightedRandomSampler::GetEntryIndex
                                ((FWeightedRandomSampler *)((longlong)FVar10 + lVar17),
                                 (float)(uVar7 >> 9 | 0x3f800000) - fVar3,
                                 (float)(uVar11 >> 9 | 0x3f800000) - fVar3);
              uVar7 = 0;
              if ((int)fVar21 < *(int *)&(pFVar12->Sections).field_0x28) {
                uVar7 = ~(uint)fVar21 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = *(FStaticMeshSectionArray **)&(pFVar12->Sections).field_0x20;
              pFVar16 = &pFVar12->Sections;
              if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
                pFVar16 = pFVar1;
              }
              fVar18 = (float)(*(uint *)(&pFVar16->field_0x4 + (longlong)(int)fVar21 * 0x1c) / 3 +
                              iVar8);
            }
          }
          local_res10 = local_res10 + 1;
          *local_d8 = fVar18;
          local_d8 = local_d8 + local_d0[0];
          uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar7;
          fVar18 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
          uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar7;
          pfVar14 = local_c8.X.Register + local_c8.X.AdvanceOffset;
          fVar21 = SQRT((float)(uVar7 >> 9 | 0x3f800000) - fVar3);
          *local_c8.X.Register = fVar3 - fVar21;
          pfVar15 = local_c8.Y.Register + local_c8.Y.AdvanceOffset;
          *local_c8.Y.Register = (fVar3 - fVar18) * fVar21;
          *local_c8.Z.Register = fVar18 * fVar21;
          local_c8.Z.Register = local_c8.Z.Register + local_c8.Z.AdvanceOffset;
          local_c8.X.Register = pfVar14;
          local_c8.Y.Register = pfVar15;
        } while (local_res10 < param_1->NumInstances);
      }
      goto LAB_148f7aebe;
    }
  }
  local_res10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      pfVar14 = local_98 + local_88[0];
      fVar18 = local_res18;
      if ((int)*local_98 < (int)local_res18) {
        fVar18 = *local_98;
      }
      fVar21 = 0.0;
      if (0 < (int)fVar18) {
        fVar21 = fVar18;
      }
      uVar7 = 0;
      if ((int)fVar21 < *(int *)&(pFVar12->Sections).field_0x28) {
        uVar7 = ~(uint)fVar21 >> 0x1f;
      }
      local_98 = pfVar14;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FStaticMeshSectionArray **)&(pFVar12->Sections).field_0x20;
      pFVar16 = &pFVar12->Sections;
      if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
        pFVar16 = pFVar1;
      }
      uVar11 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar11;
      uVar7 = 0;
      if ((int)fVar21 < *(int *)&(pFVar12->Sections).field_0x28) {
        uVar7 = ~(uint)fVar21 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FStaticMeshSectionArray **)&(pFVar12->Sections).field_0x20;
      pFVar20 = &pFVar12->Sections;
      if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
        pFVar20 = pFVar1;
      }
      *local_d8 = (float)((int)((float)*(uint *)(&pFVar16->field_0x8 + (longlong)(int)fVar21 * 0x1c)
                               * ((float)(uVar11 >> 9 | 0x3f800000) - fVar3)) +
                         *(uint *)(&pFVar20->field_0x4 + (longlong)(int)fVar21 * 0x1c) / 3);
      local_res10 = local_res10 + 1;
      uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar7;
      fVar18 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
      uVar7 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar7;
      pfVar14 = local_c8.X.Register + local_c8.X.AdvanceOffset;
      fVar21 = SQRT((float)(uVar7 >> 9 | 0x3f800000) - fVar3);
      *local_c8.X.Register = fVar3 - fVar21;
      pfVar15 = local_c8.Y.Register + local_c8.Y.AdvanceOffset;
      *local_c8.Y.Register = (fVar3 - fVar18) * fVar21;
      *local_c8.Z.Register = fVar18 * fVar21;
      local_c8.Z.Register = local_c8.Z.Register + local_c8.Z.AdvanceOffset;
      local_d8 = local_d8 + local_d0[0];
      local_c8.X.Register = pfVar14;
      local_c8.Y.Register = pfVar15;
    } while (local_res10 < param_1->NumInstances);
  }
LAB_148f7aebe:
  if (pFVar12 != (FStaticMeshLODResources *)0x0) {
    plVar13 = &pFVar12->_padding_;
    LOCK();
    lVar17 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((((int)lVar17 == 1) && (plVar13 != (longlong *)0x0)) &&
       (pFVar12 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)pFVar12->_padding_)(pFVar12,1);
    }
  }
  return;
}

// VMRandomTriangle<TNDIRandomHelper<FNDIRandomInfoPolicy>_> @ 148f7af30

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomTriangle<TNDIRandomHelper<FNDIRandomInfoPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  FStaticMeshSectionArray *pFVar3;
  code *pcVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  FStaticMeshLODResources *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FStaticMeshLODResources *pFVar12;
  float *pfVar13;
  TVector<float> *pTVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  FIndexArrayView *pFVar17;
  uint uVar18;
  float *pfVar19;
  FStaticMeshSectionArray *pFVar20;
  int *piVar21;
  FStaticMeshLODResources *pFVar22;
  longlong *plVar23;
  float *pfVar24;
  undefined8 uVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float *local_1c0;
  int local_1b0 [2];
  TVector<float>_u_0 local_1a8;
  FNDIRandomInfoPolicy local_198;
  FNDIOutputParam<UE::Math::TVector<float>_> local_128;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f8;
  FStaticMeshLODResources *local_e8;
  FColorVertexBuffer *local_e0 [2];
  TVector<float>_u_0 local_d0;
  TVector<float>_u_0 local_c0;
  TVector<float>_u_0 local_b0;
  TVector<float>_u_0 local_a0;
  TVector<float>_u_0 local_90;
  TVector<float> local_80;
  FIndexArrayView local_70 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f8,param_1);
  iVar27 = 0;
  local_e8 = (FStaticMeshLODResources *)0x0;
  pFVar12 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_f8.Ptr,local_e0);
  pFVar6 = local_e8;
  pFVar22 = local_e8;
  pFVar7 = local_e8;
  if (local_e8 != pFVar12) {
    if (pFVar12 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    pFVar22 = pFVar12;
    pFVar7 = pFVar12;
    if (local_e8 != (FStaticMeshLODResources *)0x0) {
      plVar23 = &local_e8->_padding_;
      LOCK();
      lVar16 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if (((int)lVar16 == 1) && (plVar23 != (longlong *)0x0)) {
        plVar23 = &local_e8->_padding_;
        local_e8 = pFVar12;
        (**(code **)*plVar23)(pFVar6,1);
        pFVar7 = local_e8;
      }
    }
  }
  local_e8 = pFVar7;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_198,param_1);
  uVar18 = 0;
  local_1b0[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  pfVar13 = pfVar13 + local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_128,param_1);
  fVar5 = __real_3f800000;
  if (pFVar22 != (FStaticMeshLODResources *)0x0) {
    if ((local_f8.Ptr)->bIsCpuUniformlyDistributedSampling != 0) {
      if (0 < param_1->NumInstances) {
        do {
          fVar32 = 0.0;
          piVar21 = local_198.RandParam.Seed1Param.InputPtr +
                    local_198.RandParam.Seed1Param.AdvanceOffset;
          local_198.RandInfo.Seed1 = *local_198.RandParam.Seed1Param.InputPtr;
          piVar26 = local_198.RandParam.Seed2Param.InputPtr +
                    local_198.RandParam.Seed2Param.AdvanceOffset;
          local_198.RandInfo.Seed2 = *local_198.RandParam.Seed2Param.InputPtr;
          iVar2 = *local_198.RandParam.Seed3Param.InputPtr;
          local_198.RandParam.Seed3Param.InputPtr =
               local_198.RandParam.Seed3Param.InputPtr +
               local_198.RandParam.Seed3Param.AdvanceOffset;
          uVar9 = uVar18;
          local_198.RandParam.Seed1Param.InputPtr = piVar21;
          local_198.RandParam.Seed2Param.InputPtr = piVar26;
          local_198.RandInfo.Seed3 = iVar2;
          if ((int)(pFVar22->AreaWeightedSampler)._padding_ == 0) {
LAB_148f7b156:
            if ((int)uVar9 < (pFVar22->AreaWeightedSectionSamplers).ArrayNum) {
              if (((int)uVar9 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar15 = (pFVar22->AreaWeightedSectionSamplers).AllocatorInstance;
              if (((ulonglong)FVar15 & 1) != 0) {
                FVar15 = (ForAnyElementType)
                         ((longlong)
                          &(pFVar22->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                         ((longlong)FVar15 >> 0x18));
              }
              if (*(int *)((longlong)FVar15 + 0x10U + (ulonglong)uVar9 * 0x40) != 0) {
                uVar10 = uVar18;
                if ((int)uVar9 < (pFVar22->AreaWeightedSectionSamplers).ArrayNum) {
                  uVar10 = ~uVar9 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FVar15 = (pFVar22->AreaWeightedSectionSamplers).AllocatorInstance;
                if (((ulonglong)FVar15 & 1) != 0) {
                  FVar15 = (ForAnyElementType)
                           ((longlong)
                            &(pFVar22->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                           ((longlong)FVar15 >> 0x18));
                }
                if (iVar2 == -1) {
                  uVar10 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
                  (local_198.Context)->RandStream->Seed = uVar10;
                  fVar32 = (float)(uVar10 >> 9 | 0x3f800000) - fVar5;
                  uVar10 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
                  (local_198.Context)->RandStream->Seed = uVar10;
                  fVar31 = (float)(uVar10 >> 9 | 0x3f800000) - fVar5;
                }
                else {
                  pTVar14 = FNDIRandomInfoPolicy::Rand3
                                      (&local_198,(TVector<float> *)&local_c0._s_0,iVar27);
                  fVar32 = (pTVar14->field0_0x0)._s_0.X;
                  pTVar14 = FNDIRandomInfoPolicy::Rand3
                                      (&local_198,(TVector<float> *)&local_d0._s_0,iVar27);
                  fVar31 = (pTVar14->field0_0x0)._s_0.X;
                }
                iVar11 = FWeightedRandomSampler::GetEntryIndex
                                   ((FWeightedRandomSampler *)
                                    ((ulonglong)uVar9 * 0x40 + (longlong)FVar15),fVar31,fVar32);
                uVar10 = uVar18;
                if ((int)uVar9 < *(int *)&(pFVar22->Sections).field_0x28) {
                  uVar10 = ~uVar9 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar3 = *(FStaticMeshSectionArray **)&(pFVar22->Sections).field_0x20;
                pFVar20 = &pFVar22->Sections;
                if (pFVar3 != (FStaticMeshSectionArray *)0x0) {
                  pFVar20 = pFVar3;
                }
                fVar32 = (float)(iVar11 + *(uint *)(&pFVar20->field_0x4 + (ulonglong)uVar9 * 0x1c) /
                                          3);
              }
            }
          }
          else {
            if (iVar2 == -1) {
              uVar9 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_198.Context)->RandStream->Seed = uVar9;
              fVar31 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
              uVar9 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_198.Context)->RandStream->Seed = uVar9;
              fVar30 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
            }
            else {
              pTVar14 = FNDIRandomInfoPolicy::Rand3
                                  (&local_198,(TVector<float> *)&local_a0._s_0,iVar27);
              fVar31 = (pTVar14->field0_0x0)._s_0.X;
              pTVar14 = FNDIRandomInfoPolicy::Rand3
                                  (&local_198,(TVector<float> *)&local_b0._s_0,iVar27);
              fVar30 = (pTVar14->field0_0x0)._s_0.X;
            }
            uVar9 = FWeightedRandomSampler::GetEntryIndex
                              ((FWeightedRandomSampler *)&pFVar22->AreaWeightedSampler,fVar30,fVar31
                              );
            if (-1 < (int)uVar9) goto LAB_148f7b156;
          }
          lVar16 = (longlong)local_1b0[0];
          *pfVar13 = fVar32;
          if (iVar2 == -1) {
            uVar9 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_198.Context)->RandStream->Seed = uVar9;
            uVar33 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
            uVar9 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
            (local_198.Context)->RandStream->Seed = uVar9;
            uVar29 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
          }
          else {
            FNDIRandomInfoPolicy::Rand3(&local_198,(TVector<float> *)&local_1a8._s_0,iVar27);
            uVar29 = local_1a8._s_0.X;
            uVar33 = local_1a8._s_0.Y;
          }
          iVar27 = iVar27 + 1;
          fVar32 = SQRT((float)uVar29);
          pfVar19 = local_128.X.Register + local_128.X.AdvanceOffset;
          *local_128.X.Register = fVar5 - fVar32;
          pfVar24 = local_128.Y.Register + local_128.Y.AdvanceOffset;
          *local_128.Y.Register = (fVar5 - (float)uVar33) * fVar32;
          pfVar1 = local_128.Z.Register + local_128.Z.AdvanceOffset;
          *local_128.Z.Register = fVar32 * (float)uVar33;
          pfVar13 = pfVar13 + lVar16;
          local_128.X.Register = pfVar19;
          local_128.Y.Register = pfVar24;
          local_128.Z.Register = pfVar1;
        } while (iVar27 < param_1->NumInstances);
      }
      goto LAB_148f7b6e2;
    }
    if (pFVar22 != (FStaticMeshLODResources *)0x0) {
      pFVar17 = FRawStaticIndexBuffer::GetArrayView(&pFVar22->IndexBuffer,local_70);
      iVar2 = pFVar17->NumIndices;
      uVar18 = iVar2 / 3 + (iVar2 >> 0x1f) +
               (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
    }
  }
  fVar5 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    lVar16 = (longlong)local_1b0[0];
    local_1a8._0_8_ = (longlong)local_198.RandParam.Seed2Param.AdvanceOffset << 2;
    uVar25 = (longlong)local_198.RandParam.Seed3Param.AdvanceOffset << 2;
    uVar9 = 1;
    if (uVar18 != 1 && -1 < (int)(uVar18 - 1)) {
      uVar9 = uVar18;
    }
    local_c0._0_8_ = (longlong)local_128.X.AdvanceOffset << 2;
    local_b0._0_8_ = (longlong)local_128.Y.AdvanceOffset << 2;
    local_a0._0_8_ = (longlong)local_128.Z.AdvanceOffset << 2;
    local_1c0 = local_128.Z.Register;
    pfVar19 = local_128.Y.Register;
    piVar21 = local_198.RandParam.Seed3Param.InputPtr;
    pfVar24 = local_128.X.Register;
    piVar26 = local_198.RandParam.Seed2Param.InputPtr;
    piVar28 = local_198.RandParam.Seed1Param.InputPtr;
    local_d0._0_8_ = uVar25;
    do {
      local_198.RandInfo.Seed1 = *piVar28;
      piVar28 = piVar28 + local_198.RandParam.Seed1Param.AdvanceOffset;
      local_198.RandInfo.Seed2 = *piVar26;
      piVar26 = (int *)((longlong)piVar26 + local_1a8._0_8_);
      local_198.RandInfo.Seed3 = *piVar21;
      piVar21 = (int *)((longlong)piVar21 + uVar25);
      local_198.RandParam.Seed1Param.InputPtr = piVar28;
      local_198.RandParam.Seed2Param.InputPtr = piVar26;
      local_198.RandParam.Seed3Param.InputPtr = piVar21;
      if (local_198.RandInfo.Seed3 == -1) {
        uVar18 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_198.Context)->RandStream->Seed = uVar18;
        *pfVar13 = (float)(int)(((float)(uVar18 >> 9 | 0x3f800000) - fVar5) * (float)(int)uVar9);
        uVar18 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_198.Context)->RandStream->Seed = uVar18;
        uVar33 = (float)(uVar18 >> 9 | 0x3f800000) - fVar5;
        uVar18 = (local_198.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_198.Context)->RandStream->Seed = uVar18;
        uVar29 = (float)(uVar18 >> 9 | 0x3f800000) - fVar5;
      }
      else {
        pTVar14 = FNDIRandomInfoPolicy::Rand3(&local_198,&local_80,iVar27);
        *pfVar13 = (float)(int)((float)(int)uVar9 * (pTVar14->field0_0x0)._s_0.X);
        FNDIRandomInfoPolicy::Rand3(&local_198,(TVector<float> *)&local_90._s_0,iVar27);
        uVar25 = local_d0._0_8_;
        uVar29 = local_90._s_0.X;
        uVar33 = local_90._s_0.Y;
      }
      pfVar13 = pfVar13 + lVar16;
      fVar32 = SQRT((float)uVar29);
      iVar27 = iVar27 + 1;
      *pfVar24 = fVar5 - fVar32;
      *pfVar19 = (fVar5 - (float)uVar33) * fVar32;
      *local_1c0 = fVar32 * (float)uVar33;
      pfVar19 = (float *)(local_b0._0_8_ + (longlong)pfVar19);
      pFVar22 = local_e8;
      pfVar24 = (float *)(local_c0._0_8_ + (longlong)pfVar24);
      local_1c0 = (float *)(local_a0._0_8_ + (longlong)local_1c0);
    } while (iVar27 < param_1->NumInstances);
  }
LAB_148f7b6e2:
  if (pFVar22 != (FStaticMeshLODResources *)0x0) {
    plVar23 = &pFVar22->_padding_;
    LOCK();
    lVar16 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((((int)lVar16 == 1) && (plVar23 != (longlong *)0x0)) &&
       (pFVar22 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)pFVar22->_padding_)(pFVar22,1);
    }
  }
  return;
}

// VMRandomTriangle<TNDIRandomHelper<FNDIRandomStreamPolicy>_> @ 148f7b760

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomTriangle<TNDIRandomHelper<FNDIRandomStreamPolicy>_>
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  FStaticMeshSectionArray *pFVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  FStaticMeshLODResources *pFVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FStaticMeshLODResources *pFVar13;
  float *pfVar14;
  ForAnyElementType FVar15;
  FIndexArrayView *pFVar16;
  float fVar17;
  FStaticMeshLODResources *pFVar18;
  longlong *plVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  FStaticMeshSectionArray *pFVar23;
  float *pfVar24;
  float fVar25;
  int local_res18;
  int local_b8 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_b0;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_80;
  FStaticMeshLODResources *local_70;
  FColorVertexBuffer *local_68 [2];
  FIndexArrayView local_58 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_80,param_1);
  iVar12 = 0;
  local_70 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_80.Ptr,local_68);
  pFVar6 = local_70;
  pFVar18 = local_70;
  pFVar7 = local_70;
  if (local_70 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar18 = pFVar13;
    pFVar7 = pFVar13;
    if (local_70 != (FStaticMeshLODResources *)0x0) {
      plVar19 = &local_70->_padding_;
      LOCK();
      lVar4 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar19 != (longlong *)0x0)) {
        plVar19 = &local_70->_padding_;
        local_70 = pFVar13;
        (**(code **)*plVar19)(pFVar6,1);
        pFVar7 = local_70;
      }
    }
  }
  local_70 = pFVar7;
  fVar17 = 0.0;
  local_b8[0] = 0;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  pfVar14 = pfVar14 + local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_b0,param_1);
  fVar5 = __real_3f800000;
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    if ((local_80.Ptr)->bIsCpuUniformlyDistributedSampling != 0) {
      local_res18 = 0;
      if (0 < param_1->NumInstances) {
        do {
          fVar25 = 0.0;
          fVar10 = fVar17;
          if ((int)(pFVar18->AreaWeightedSampler)._padding_ == 0) {
LAB_148f7b8e9:
            fVar11 = fVar25;
            if ((int)fVar10 < (pFVar18->AreaWeightedSectionSamplers).ArrayNum) {
              if (((int)fVar10 < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar15 = (pFVar18->AreaWeightedSectionSamplers).AllocatorInstance;
              if (((ulonglong)FVar15 & 1) != 0) {
                FVar15 = (ForAnyElementType)
                         ((longlong)
                          &(pFVar18->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                         ((longlong)FVar15 >> 0x18));
              }
              if (*(int *)((longlong)FVar15 + 0x10U + (ulonglong)(uint)fVar10 * 0x40) != 0) {
                if ((int)fVar10 < (pFVar18->AreaWeightedSectionSamplers).ArrayNum) {
                  fVar11 = (float)(~(uint)fVar10 >> 0x1f);
                }
                if ((fVar11 == 0.0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                FVar15 = (pFVar18->AreaWeightedSectionSamplers).AllocatorInstance;
                if (((ulonglong)FVar15 & 1) != 0) {
                  FVar15 = (ForAnyElementType)
                           ((longlong)
                            &(pFVar18->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
                           ((longlong)FVar15 >> 0x18));
                }
                uVar21 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
                param_1->RandStream->Seed = uVar21;
                uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
                param_1->RandStream->Seed = uVar9;
                iVar12 = FWeightedRandomSampler::GetEntryIndex
                                   ((FWeightedRandomSampler *)
                                    ((longlong)FVar15 + (ulonglong)(uint)fVar10 * 0x40),
                                    (float)(uVar9 >> 9 | 0x3f800000) - fVar5,
                                    (float)(uVar21 >> 9 | 0x3f800000) - fVar5);
                if ((int)fVar10 < *(int *)&(pFVar18->Sections).field_0x28) {
                  fVar25 = (float)(~(uint)fVar10 >> 0x1f);
                }
                if ((fVar25 == 0.0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar2 = *(FStaticMeshSectionArray **)&(pFVar18->Sections).field_0x20;
                pFVar23 = &pFVar18->Sections;
                if (pFVar2 != (FStaticMeshSectionArray *)0x0) {
                  pFVar23 = pFVar2;
                }
                fVar11 = (float)(*(uint *)(&pFVar23->field_0x4 + (ulonglong)(uint)fVar10 * 0x1c) / 3
                                + iVar12);
              }
            }
          }
          else {
            uVar21 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar21;
            uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
            param_1->RandStream->Seed = uVar9;
            fVar10 = (float)FWeightedRandomSampler::GetEntryIndex
                                      ((FWeightedRandomSampler *)&pFVar18->AreaWeightedSampler,
                                       (float)(uVar9 >> 9 | 0x3f800000) - fVar5,
                                       (float)(uVar21 >> 9 | 0x3f800000) - fVar5);
            fVar11 = fVar17;
            if (-1 < (int)fVar10) goto LAB_148f7b8e9;
          }
          *pfVar14 = fVar11;
          pfVar14 = pfVar14 + local_b8[0];
          uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar9;
          fVar10 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
          uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
          param_1->RandStream->Seed = uVar9;
          pfVar20 = local_b0.X.Register + local_b0.X.AdvanceOffset;
          fVar25 = SQRT((float)(uVar9 >> 9 | 0x3f800000) - fVar5);
          *local_b0.X.Register = fVar5 - fVar25;
          pfVar22 = local_b0.Y.Register + local_b0.Y.AdvanceOffset;
          *local_b0.Y.Register = (fVar5 - fVar10) * fVar25;
          pfVar24 = local_b0.Z.Register + local_b0.Z.AdvanceOffset;
          *local_b0.Z.Register = fVar10 * fVar25;
          local_res18 = local_res18 + 1;
          local_b0.X.Register = pfVar20;
          local_b0.Y.Register = pfVar22;
          local_b0.Z.Register = pfVar24;
        } while (local_res18 < param_1->NumInstances);
      }
      goto LAB_148f7bccd;
    }
    if (pFVar18 != (FStaticMeshLODResources *)0x0) {
      pFVar16 = FRawStaticIndexBuffer::GetArrayView(&pFVar18->IndexBuffer,local_58);
      iVar1 = pFVar16->NumIndices;
      fVar17 = (float)(iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      );
    }
  }
  fVar5 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    fVar10 = 1.4013e-45;
    if (fVar17 != 1.4013e-45 && -1 < (int)fVar17 + -1) {
      fVar10 = fVar17;
    }
    pfVar20 = local_b0.Y.Register;
    pfVar22 = local_b0.Z.Register;
    pfVar24 = local_b0.X.Register;
    do {
      iVar12 = iVar12 + 1;
      uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar9;
      *pfVar14 = (float)(int)(((float)(uVar9 >> 9 | 0x3f800000) - fVar5) * (float)(int)fVar10);
      uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar9;
      fVar17 = (float)(uVar9 >> 9 | 0x3f800000) - fVar5;
      uVar9 = param_1->RandStream->Seed * 0xbb38435 + 0x3619636b;
      param_1->RandStream->Seed = uVar9;
      fVar25 = SQRT((float)(uVar9 >> 9 | 0x3f800000) - fVar5);
      *pfVar24 = fVar5 - fVar25;
      *pfVar20 = (fVar5 - fVar17) * fVar25;
      *pfVar22 = fVar17 * fVar25;
      pfVar20 = pfVar20 + local_b0.Y.AdvanceOffset;
      pfVar22 = pfVar22 + local_b0.Z.AdvanceOffset;
      pfVar14 = pfVar14 + local_b8[0];
      pfVar24 = pfVar24 + local_b0.X.AdvanceOffset;
    } while (iVar12 < param_1->NumInstances);
  }
LAB_148f7bccd:
  if (pFVar18 != (FStaticMeshLODResources *)0x0) {
    plVar19 = &pFVar18->_padding_;
    LOCK();
    lVar4 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((((int)lVar4 == 1) && (plVar19 != (longlong *)0x0)) &&
       (pFVar18 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)pFVar18->_padding_)(pFVar18,1);
    }
  }
  return;
}

// UNiagaraDataInterfaceStaticMesh @ 148f80d80

UNiagaraDataInterfaceStaticMesh * __thiscall
UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh
          (UNiagaraDataInterfaceStaticMesh *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = Default;
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceStaticMesh__6B_;
  (this->DefaultMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SectionFilter).AllowedMaterialSlots.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SectionFilter).AllowedMaterialSlots.ArrayNum = 0;
  (this->SectionFilter).AllowedMaterialSlots.ArrayMax = 0;
  this->bCaptureTransformsPerFrame = true;
  this->bUsePhysicsBodyVelocity = false;
  this->bAllowSamplingFromStreamingLODs = false;
  this->LODIndex = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->LODIndexUserParameter);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MeshParameterBinding);
  this->InstanceIndex = -1;
  (this->FilteredSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredSockets).ArrayNum = 0;
  (this->FilteredSockets).ArrayMax = 0;
  this->ChangeId = 0;
  return this;
}

// UNiagaraDataInterfaceStaticMesh @ 148f80e40

UNiagaraDataInterfaceStaticMesh * __thiscall
UNiagaraDataInterfaceStaticMesh::UNiagaraDataInterfaceStaticMesh
          (UNiagaraDataInterfaceStaticMesh *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->SourceMode = Default;
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceStaticMesh__6B_;
  (this->DefaultMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SectionFilter).AllowedMaterialSlots.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SectionFilter).AllowedMaterialSlots.ArrayNum = 0;
  (this->SectionFilter).AllowedMaterialSlots.ArrayMax = 0;
  this->bCaptureTransformsPerFrame = true;
  this->bUsePhysicsBodyVelocity = false;
  this->bAllowSamplingFromStreamingLODs = false;
  this->LODIndex = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->LODIndexUserParameter);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MeshParameterBinding);
  (this->FilteredSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->InstanceIndex = -1;
  (this->FilteredSockets).ArrayNum = 0;
  (this->FilteredSockets).ArrayMax = 0;
  this->ChangeId = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FRenderProxy_NDIStaticMeshLocal__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar1 = FNiagaraTypeDefinitionHandle::Register(local_res8,&FNiagaraTypeDefinition::IntDef);
  *(int *)&(this->LODIndexUserParameter).Parameter._padding_ = iVar1;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->MeshParameterBinding).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceStaticMesh @ 148f82110

void __thiscall
UNiagaraDataInterfaceStaticMesh::~UNiagaraDataInterfaceStaticMesh
          (UNiagaraDataInterfaceStaticMesh *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceStaticMesh__6B_;
  pFVar1 = (this->FilteredSockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshParameterBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LODIndexUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SectionFilter).AllowedMaterialSlots.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148f82690

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l45::<lambda_10>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  FIndexArrayView *pFVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  int local_50 [2];
  FIndexArrayView local_48;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar9 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar10 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar10 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  fVar8 = 0.0;
  local_50[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar7 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    pFVar6 = FRawStaticIndexBuffer::GetArrayView(&pFVar10->IndexBuffer,&local_48);
    iVar2 = pFVar6->NumIndices;
    fVar8 = (float)(iVar2 / 3 + (iVar2 >> 0x1f) +
                   (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f));
  }
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar5 = fVar8;
      pfVar5 = pfVar5 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar10->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// operator() @ 148f82860

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l57::<lambda_13>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = (float)(local_38.Ptr)->NumFilteredTriangles;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// operator() @ 148f82a10

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l73::<lambda_17>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = (float)(local_38.Ptr)->NumUnfilteredTriangles;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// operator() @ 148f84b00

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l113::<lambda_26>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = ((local_18.Ptr)->CachedSockets).ArrayNum;
  iVar2 = (local_18.Ptr)->NumFilteredSockets;
  if (0 < param_1->NumInstances) {
    do {
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)(iVar1 - iVar2);
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148f84cb0

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l13::<lambda_3>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar8 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar9 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar9 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  fVar7 = 0.0;
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar6 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if (((pFVar9 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar9->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar3 = FPositionVertexBuffer::GetAllowCPUAccess
                        (&(pFVar9->VertexBuffers).PositionVertexBuffer), bVar3)) {
    fVar7 = (float)(pFVar9->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar6;
    do {
      iVar8 = iVar8 + 1;
      *pfVar5 = fVar7;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar8 < param_1->NumInstances);
  }
  if (pFVar9 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar9->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
}

// operator() @ 148f84de0

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l197::<lambda_42>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = *(float *)&(pFVar6->Sections).field_0x28;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// operator() @ 148f84ef0

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l201::<lambda_43>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  FStaticMeshLODResources *pFVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar6 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar7 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar7 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar2 = (float)(local_38.Ptr)->NumFilteredSections;
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar2;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  if (pFVar7 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar7->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return;
}

// operator() @ 148f85000

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l205::<lambda_44>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  FStaticMeshLODResources *pFVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar6 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar7 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar7 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar2 = (float)(local_38.Ptr)->NumUnfilteredSections;
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar2;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  if (pFVar7 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar7->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return;
}

// operator() @ 148f85110

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l221::<lambda_48>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)((~(local_18.Ptr)->bMeshValid & 1) - 1);
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148f851a0

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l245::<lambda_51>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_48;
  FNDIOutputParam<UE::Math::TVector<float>_> local_38;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_48,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_38,param_1);
  iVar3 = 0;
  if (0 < param_1->NumInstances) {
    do {
      dVar1 = ((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.Y;
      dVar2 = ((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.Z;
      iVar3 = iVar3 + 1;
      *local_38.X.Register = (float)((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.X;
      *local_38.Y.Register = (float)dVar1;
      *local_38.Z.Register = (float)dVar2;
      local_38.X.Register = local_38.X.Register + local_38.X.AdvanceOffset;
      local_38.Y.Register = local_38.Y.Register + local_38.Y.AdvanceOffset;
      local_38.Z.Register = local_38.Z.Register + local_38.Z.AdvanceOffset;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148f85270

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l253::<lambda_53>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38 [2];
  int local_18 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(local_38,param_1);
  iVar4 = 0;
  local_18[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  bVar2 = false;
  pfVar3 = pfVar3 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    fVar5 = (float)(local_38[0].Ptr)->InstanceIndex;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + local_18[0];
      (local_38[0].Ptr)->InstanceIndex = (int)fVar1;
      iVar4 = iVar4 + 1;
      bVar2 = (bool)(bVar2 | fVar5 != fVar1);
      fVar5 = fVar1;
    } while (iVar4 < param_1->NumInstances);
    if (bVar2) {
      NDIStaticMeshLocal::FInstanceData_GameThread::UpdateTransformsInstanceIndexChanged
                (local_38[0].Ptr);
    }
  }
  return;
}

// operator() @ 148f85310

void __thiscall
`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::__l265::<lambda_56>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  ulonglong uVar8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  float *local_28;
  float *local_20;
  int local_18 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  local_18[0] = 0;
  local_20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  iVar5 = local_18[0];
  local_20 = local_20 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = param_1->NumInstances;
  if (0 < iVar1) {
    pfVar7 = local_20 + local_18[0];
    fVar2 = *local_20;
    if (1 < iVar1) {
      uVar8 = (ulonglong)(iVar1 - 1);
      do {
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + iVar5;
        if ((fVar3 != fVar2) &&
           (local_28 = pfVar7,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("InUvSet.GetAndAdvance() == UvMappingIndexSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceStaticMesh.cpp"
                              ,0x141f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (local_38.Ptr)->UvMappingIndexSet = (int)fVar2;
  }
  return;
}

// BindSourceDelegates @ 148f8d710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceStaticMesh::BindSourceDelegates(UNiagaraDataInterfaceStaticMesh *this)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  char *pcVar4;
  UObject *this_00;
  char *pcVar5;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pAVar3 = TSoftObjectPtr<AActor>::Get(&this->SoftSourceActor);
  if (pAVar3 == (AActor *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->SourceComponent).WeakPtr);
    if (((bVar2) && (2 < (byte)LogNiagara._0_1_)) &&
       (UObjectBaseUtility::bGarbageEliminationEnabled == false)) {
      this_00 = FWeakObjectPtr::Get(&(this->SourceComponent).WeakPtr);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  pcVar4 = strstr("&UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay","::");
  if (pcVar4 == (char *)0x0) {
LAB_148f8d78b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_148f8d78b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_148f8d7be;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_148f8d7be:
  ::FName::FName(&local_res8,pcVar5);
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  ::__Internal_AddDynamic<UNiagaraDataInterfaceStaticMesh>
            ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
              *)&pAVar3->OnEndPlay,this,(pmf_9551fb32)0x148fc60b0,local_res8);
  return;
}

// BuildShaderParameters @ 148f8faa0

void __thiscall
UNiagaraDataInterfaceStaticMesh::BuildShaderParameters
          (UNiagaraDataInterfaceStaticMesh *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIStaticMeshLocal::FShaderParameters>::GetStructMetadata
                     ();
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
  *(wchar_t **)pFVar6 = pwVar7;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x230;
  pFVar5 = UE::FXRenderingUtils::DistanceFields::GetObjectBufferParametersMetadata();
  FNiagaraShaderParametersBuilder::AddIncludedStruct(param_1,pFVar5);
  pFVar5 = UE::FXRenderingUtils::DistanceFields::GetAtlasParametersMetadata();
  FNiagaraShaderParametersBuilder::AddIncludedStruct(param_1,pFVar5);
  return;
}

// CanBeInCluster @ 148f912e0

bool __thiscall
UNiagaraDataInterfaceStaticMesh::CanBeInCluster(UNiagaraDataInterfaceStaticMesh *this)

{
  return false;
}

// CanExecuteOnTarget @ 148f91300

bool __thiscall
UNiagaraDataInterfaceStaticMesh::CanExecuteOnTarget
          (UNiagaraDataInterfaceStaticMesh *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148f92410

bool __thiscall
UNiagaraDataInterfaceStaticMesh::CopyToInternal
          (UNiagaraDataInterfaceStaticMesh *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UStaticMesh *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      UnbindSourceDelegates((UNiagaraDataInterfaceStaticMesh *)param_1);
      *(ENDIStaticMesh_SourceMode *)&param_1[1]._padding_ = this->SourceMode;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->DefaultMesh).field0_0x0.DebugPtr, pUVar2 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_1[1]._padding_ = (longlong)(this->DefaultMesh).field0_0x0;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1]._padding_,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftSourceActor);
      param_1[2]._padding_ = (longlong)(this->SourceComponent).WeakPtr;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2]._padding_,
                 &(this->SectionFilter).AllowedMaterialSlots);
      *(bool *)&param_1[2]._padding_ = this->bCaptureTransformsPerFrame;
      *(bool *)((longlong)&param_1[2]._padding_ + 1) = this->bUsePhysicsBodyVelocity;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[3].field_0x30,
                 &this->FilteredSockets);
      *(bool *)((longlong)&param_1[2]._padding_ + 2) = this->bAllowSamplingFromStreamingLODs;
      *(int *)((longlong)&param_1[2]._padding_ + 4) = this->LODIndex;
      param_1[2]._padding_ = (this->LODIndexUserParameter).Parameter._padding_;
      *(int *)&param_1[2].Proxy.Ptr = (int)(this->LODIndexUserParameter).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[2].field_0x30,
                 &(this->LODIndexUserParameter).Parameter.VarData);
      param_1[3]._padding_ = (this->MeshParameterBinding).Parameter._padding_;
      *(int *)&param_1[3]._padding_ = (int)(this->MeshParameterBinding).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[3]._padding_,
                 &(this->MeshParameterBinding).Parameter.VarData);
      *(int *)&param_1[3].Proxy.Ptr = this->InstanceIndex;
      BindSourceDelegates((UNiagaraDataInterfaceStaticMesh *)param_1);
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceStaticMesh>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar6);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceStaticMesh>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// DestroyPerInstanceData @ 148fa8790

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
UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData
          (UNiagaraDataInterfaceStaticMesh *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(void **)((longlong)param_1 + 0x3f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3f8));
  }
  if (*(void **)((longlong)param_1 + 0x3e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3e0));
  }
  if (*(void **)((longlong)param_1 + 0x3c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3c8));
  }
  if (*(void **)((longlong)param_1 + 0x390) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x390));
  }
  if (*(void **)((longlong)param_1 + 0x350) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x350));
  }
  if (*(void **)((longlong)param_1 + 0x340) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x340));
  }
  if (*(void **)((longlong)param_1 + 0x240) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x240));
  }
  FMeshUvMappingHandleBase::~FMeshUvMappingHandleBase
            ((FMeshUvMappingHandleBase *)((longlong)param_1 + 0x18));
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
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
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData_::__l5::TSTR_RemoveInstanceData1892>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      lStack_40 = lStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceStaticMesh::DestroyPerInstanceData'::__l5::TSTR_RemoveInstanceData1892>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
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
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// DrawDebugHud @ 148fa9150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceStaticMesh::DrawDebugHud
          (UNiagaraDataInterfaceStaticMesh *this,FNDIDrawDebugHudContext *param_1)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UNiagaraDataInterfaceStaticMesh *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  FWeakObjectPtr *this_00;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  pFVar3 = param_1->SystemInstance;
  this_00 = (FWeakObjectPtr *)(pFVar3->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)
           ((longlong)this_00 + (longlong)(pFVar3->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc)
  ;
  while( true ) {
    if (this_00 == pFVar1) {
      return;
    }
    pUVar7 = (UNiagaraDataInterfaceStaticMesh *)FWeakObjectPtr::Get(this_00);
    if (pUVar7 == this) break;
    this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
  }
  if (this_00 == (FWeakObjectPtr *)0x0) {
    return;
  }
  uVar2 = this_00[1].ObjectIndex;
  uVar6 = 0;
  if ((int)uVar2 < (pFVar3->DataInterfaceInstanceData).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = (pFVar3->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar2;
  if (pFVar10 == (FScriptContainerElement *)0x0) {
    return;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar10 + 8));
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar10 + 0x10));
  if (pUVar8 == (UObject *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
    local_res8.Number = *(uint *)&pUVar8->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
  }
  if (pUVar9 == (UObject *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res10.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
    local_res10.Number = *(uint *)&pUVar9->field_0x1c;
    ::FName::ToString(&local_res10,&local_38);
  }
  ::FString::AppendfImpl(&param_1->OutputString,L"StaticMesh(%s) StaticMeshComp(%s)");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return;
}

// Equals @ 148fa95f0

bool __thiscall
UNiagaraDataInterfaceStaticMesh::Equals
          (UNiagaraDataInterfaceStaticMesh *this,UNiagaraDataInterface *param_1)

{
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar1 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar1) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceStaticMesh_const_>(&local_28);
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
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceStaticMesh_const_>(&local_28);
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
    if (((((ENDIStaticMesh_SourceMode)param_1[1]._padding_ == this->SourceMode) &&
         ((UStaticMesh *)param_1[1]._padding_ == (this->DefaultMesh).field0_0x0.DebugPtr)) &&
        (bVar1 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)&param_1[1]._padding_,
                            (FSoftObjectPath *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8),
        bVar1)) &&
       (bVar1 = TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr>::
                UEOpEquals<UStaticMeshComponent,bool>
                          ((TWeakObjectPtr<UStaticMeshComponent,FWeakObjectPtr> *)(param_1 + 2),
                           &this->SourceComponent), bVar1)) {
      iVar2 = (int)param_1[2]._padding_;
      if (iVar2 == (this->SectionFilter).AllowedMaterialSlots.ArrayNum) {
        if ((iVar2 != 0) &&
           (iVar2 = memcmp((void *)param_1[2]._padding_,
                           (this->SectionFilter).AllowedMaterialSlots.AllocatorInstance.Data,
                           (longlong)iVar2 << 2), iVar2 != 0)) {
          return false;
        }
        if ((((((bool)(char)param_1[2]._padding_ == this->bCaptureTransformsPerFrame) &&
              ((bool)*(char *)((longlong)&param_1[2]._padding_ + 1) == this->bUsePhysicsBodyVelocity
              )) && (((bool)*(char *)((longlong)&param_1[2]._padding_ + 2) ==
                      this->bAllowSamplingFromStreamingLODs &&
                     (((*(int *)((longlong)&param_1[2]._padding_ + 4) == this->LODIndex &&
                       ((this->LODIndexUserParameter).Parameter._padding_ == param_1[2]._padding_))
                      && ((int)(this->LODIndexUserParameter).Parameter._padding_ ==
                          *(int *)&param_1[2].Proxy.Ptr)))))) &&
            (((this->MeshParameterBinding).Parameter._padding_ == param_1[3]._padding_ &&
             ((int)(this->MeshParameterBinding).Parameter._padding_ == (int)param_1[3]._padding_))))
           && ((*(int *)&param_1[3].Proxy.Ptr == this->InstanceIndex &&
               ((iVar2 = (int)param_1[4]._padding_, iVar2 == (this->FilteredSockets).ArrayNum &&
                (bVar1 = CompareItems<FName,int>
                                   (*(FName **)&param_1[3].field_0x30,
                                    (FName *)(this->FilteredSockets).AllocatorInstance.Data,iVar2),
                bVar1)))))) {
          return true;
        }
      }
    }
  }
  return false;
}

// FunctionNeedsCpuAccess @ 148faff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl UNiagaraDataInterfaceStaticMesh::FunctionNeedsCpuAccess(FName param_1)

{
  uint uVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  undefined1 auStack_118 [32];
  initializer_list<FName> local_f8;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_e8 = NDIStaticMeshLocal::IsValidName;
    local_e0 = NDIStaticMeshLocal::GetPreSkinnedLocalBoundsName;
    local_d8 = NDIStaticMeshLocal::GetMeshBoundsName;
    local_d0 = NDIStaticMeshLocal::GetMeshBoundsWSName;
    local_c8 = NDIStaticMeshLocal::GetLocalToWorldName;
    local_c0 = NDIStaticMeshLocal::GetLocalToWorldInverseTransposedName;
    local_b8 = NDIStaticMeshLocal::GetWorldVelocityName;
    local_b0 = NDIStaticMeshLocal::SetInstanceIndexName;
    local_a8 = NDIStaticMeshLocal::GetSocketCountName;
    local_a0 = NDIStaticMeshLocal::GetFilteredSocketCountName;
    local_98 = NDIStaticMeshLocal::GetUnfilteredSocketCountName;
    local_90 = NDIStaticMeshLocal::RandomSocketName;
    local_88 = NDIStaticMeshLocal::RandomFilteredSocketName;
    local_80 = NDIStaticMeshLocal::RandomUnfilteredSocketName;
    local_78 = NDIStaticMeshLocal::GetSocketTransformName;
    local_70 = NDIStaticMeshLocal::GetSocketTransformWSName;
    local_68 = NDIStaticMeshLocal::GetSocketTransformWSInterpolatedName;
    local_60 = NDIStaticMeshLocal::GetFilteredSocketTransformName;
    local_58 = NDIStaticMeshLocal::GetFilteredSocketTransformWSName;
    local_50 = NDIStaticMeshLocal::GetFilteredSocketTransformWSInterpolatedName;
    local_48 = NDIStaticMeshLocal::GetUnfilteredSocketTransformName;
    local_40 = NDIStaticMeshLocal::GetUnfilteredSocketTransformWSName;
    local_38 = NDIStaticMeshLocal::GetUnfilteredSocketTransformWSInterpolatedName;
    local_30 = NDIStaticMeshLocal::GetFilteredSocketName;
    local_28 = NDIStaticMeshLocal::GetUnfilteredSocketName;
    local_f8._First = &local_e8;
    local_f8._Last = &local_20;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&SafeFunctions,&local_f8);
    atexit(`UNiagaraDataInterfaceStaticMesh::FunctionNeedsCpuAccess'::__l2::
           _dynamic_atexit_destructor_for__SafeFunctions__);
    _Init_thread_footer(&::_TSS0);
  }
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (SafeFunctions.Elements._8_4_ != SafeFunctions.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x15526f848;
    if (SafeFunctions.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = SafeFunctions.Hash.SecondaryData;
    }
    for (iVar2 = *(int *)((longlong)FVar3 +
                         (ulonglong)(SafeFunctions.HashSize - 1U & param_1.Number + uVar1) * 4);
        iVar2 != -1; iVar2 = *(int *)(SafeFunctions.Elements._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
      if (*(FName *)(SafeFunctions.Elements._0_8_ + (longlong)iVar2 * 0x10) == param_1)
      goto LAB_148fb001a;
    }
  }
  iVar2 = -1;
LAB_148fb001a:
  return iVar2 == -1;
}

// GetPrivateStaticClass @ 148fb6a80

UClass * __cdecl UNiagaraDataInterfaceStaticMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceStaticMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceStaticMesh,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceStaticMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceStaticMesh>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.InnerSingleton;
}

// GetVMExternalFunction @ 148fbbc90

void __thiscall
UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction
          (UNiagaraDataInterfaceStaticMesh *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar5;
  <lambda_26> local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIStaticMeshLocal::IsValidVertexName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::RandomVertexName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`9'::<lambda_2>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexCountName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`13'::<lambda_3>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`17'::<lambda_4>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexWSName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`21'::<lambda_5>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexWSInterpolatedName) {
    pTVar4 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                       ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                         *)local_58,this,(pmf_02cadf7e)0x148f77840);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexColorName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`29'::<lambda_6>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetVertexUVName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`33'::<lambda_7>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::IsValidTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`37'::<lambda_8>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::RandomTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`41'::<lambda_9>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetTriangleCountName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`45'::<lambda_10>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::IsValidFilteredTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`49'::<lambda_11>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::RandomFilteredTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`53'::<lambda_12>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetFilteredTriangleCountName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`57'::<lambda_13>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetFilteredTriangleAtName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`61'::<lambda_14>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::IsValidUnfilteredTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`65'::<lambda_15>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::RandomUnfilteredTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`69'::<lambda_16>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredTriangleCountName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`73'::<lambda_17>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredTriangleAtName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`77'::<lambda_18>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetTriangleName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`81'::<lambda_19>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else if (FVar1 == NDIStaticMeshLocal::GetTriangleWSName) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`85'::<lambda_20>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  else {
    if (FVar1 == NDIStaticMeshLocal::GetTriangleWSInterpolatedName) {
      pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
               TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                         ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                           *)&local_40,this,(pmf_02cadf7e)0x148f700f0);
    }
    else {
      if (FVar1 == NDIStaticMeshLocal::GetTriangleColorName) {
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar3 = FDelegateHandle::GenerateNewID();
          puVar2[2] = uVar3;
          *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`93'::<lambda_21>_>
                     ::_vftable_;
          puVar2[3] = this;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
        return;
      }
      if (FVar1 == NDIStaticMeshLocal::GetTriangleUVName) {
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar3 = FDelegateHandle::GenerateNewID();
          puVar2[2] = uVar3;
          *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`97'::<lambda_22>_>
                     ::_vftable_;
          puVar2[3] = this;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
        return;
      }
      if (FVar1 == NDIStaticMeshLocal::GetTriangleIndicesName) {
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar3 = FDelegateHandle::GenerateNewID();
          puVar2[2] = uVar3;
          *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`101'::<lambda_23>_>
                     ::_vftable_;
          puVar2[3] = this;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
        return;
      }
      if (FVar1 == NDIStaticMeshLocal::GetSocketCountName) {
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar3 = FDelegateHandle::GenerateNewID();
          puVar2[2] = uVar3;
          *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`105'::<lambda_24>_>
                     ::_vftable_;
          puVar2[3] = this;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
        return;
      }
      if (FVar1 == NDIStaticMeshLocal::GetFilteredSocketCountName) {
        local_58 = (undefined1  [8])0x0;
        local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_50.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        local_28 = &local_50;
        puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar3 = FDelegateHandle::GenerateNewID();
          puVar2[2] = uVar3;
          *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction'::`109'::<lambda_25>_>
                     ::_vftable_;
          puVar2[3] = this;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                   (FWriteAccessScope *)&local_40);
        if ((local_50.DelegateSize != 0) &&
           (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_50,0,0,0x10);
          local_50.DelegateSize = 0;
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_50.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_58);
        return;
      }
      if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSocketCountName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l113::<lambda_26>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomSocketName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd8910);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomFilteredSocketName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd7b80);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomUnfilteredSocketName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd9100);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSocketTransformName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_[::B]::<lambda_27>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_27> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSocketTransformWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_[::F]::<lambda_28>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_28> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSocketTransformWSInterpolatedName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_[::J]::<lambda_29>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_29> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSocketTransformName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_[::N]::<lambda_30>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_30> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSocketTransformWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l145::<lambda_31>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_31> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSocketTransformWSInterpolatedName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l149::<lambda_32>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_32> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSocketTransformName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l153::<lambda_33>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_33> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSocketTransformWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l157::<lambda_34>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_34> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSocketTransformWSInterpolatedName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l161::<lambda_35>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_35> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSocketName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd3140);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSocketName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd6500);
      }
      else if (FVar1 == NDIStaticMeshLocal::IsValidSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l173::<lambda_36>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_36> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSectionTriangleCountName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l177::<lambda_37>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_37> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomSectionTriangleName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l181::<lambda_38>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_38> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSectionTriangleAtName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l185::<lambda_39>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_39> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSectionAtName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l189::<lambda_40>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_40> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSectionAtName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l193::<lambda_41>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_41> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetSectionCountName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l197::<lambda_42>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_42> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetFilteredSectionCountName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l201::<lambda_43>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_43> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetUnfilteredSectionCountName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l205::<lambda_44>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_44> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l209::<lambda_45>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_45> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomFilteredSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l213::<lambda_46>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_46> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::RandomUnfilteredSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l217::<lambda_47>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_47> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::IsValidName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l221::<lambda_48>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_48> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetPreSkinnedLocalBoundsName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148fd3f10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetMeshBoundsName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148f46850);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetMeshBoundsWSName) {
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UNiagaraDataInterfaceStaticMesh>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,this,(pmf_02cadf7e)0x148f47040);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetLocalToWorldName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l237::<lambda_49>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_49> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetLocalToWorldInverseTransposedName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l241::<lambda_50>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_50> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetWorldVelocityName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l245::<lambda_51>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_51> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetInstanceIndexName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l249::<lambda_52>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_52> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::SetInstanceIndexName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l253::<lambda_53>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_53> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetTriangleCoordAtUVName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l257::<lambda_54>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_54> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::GetTriangleCoordInAabbName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l261::<lambda_55>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_55> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::BuildUvMappingName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l265::<lambda_56>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_56> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriColorName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l269::<lambda_57>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_57> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriUVName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l273::<lambda_58>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_58> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_RandomSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l277::<lambda_59>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_59> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_RandomTriCoordName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l281::<lambda_60>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_60> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_RandomTriCoordOnSectionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l285::<lambda_61>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_61> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetVertexPositionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l289::<lambda_62>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_62> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetVertexPositionWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l293::<lambda_63>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_63> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriPositionName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l297::<lambda_64>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_64> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriPositionWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l301::<lambda_65>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_65> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriTangentsName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l305::<lambda_66>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_66> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriTangentsWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l309::<lambda_67>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_67> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriNormalName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l313::<lambda_68>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_68> *)&local_res10);
      }
      else if (FVar1 == NDIStaticMeshLocal::Deprecated_GetTriNormalWSName) {
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l317::<lambda_69>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_69> *)&local_res10);
      }
      else {
        if (FVar1 != NDIStaticMeshLocal::Deprecated_GetTriPositionAndVelocityWSName) {
          return;
        }
        local_res10.__this = this;
        pTVar5 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                 ::
                 CreateLambda<_UNiagaraDataInterfaceStaticMesh::GetVMExternalFunction_::__l321::<lambda_70>_>
                           ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                             *)&local_40,(<lambda_70> *)&local_res10);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,pTVar5);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
  }
  return;
}

// HasPreSimulateTick @ 148fbedb0

bool __thiscall
UNiagaraDataInterfaceStaticMesh::HasPreSimulateTick(UNiagaraDataInterfaceStaticMesh *this)

{
  return true;
}

// InitPerInstanceData @ 148fc2680

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
UNiagaraDataInterfaceStaticMesh::InitPerInstanceData
          (UNiagaraDataInterfaceStaticMesh *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FStaticMeshLODResources *pFVar6;
  FStaticMeshSectionArray *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  FGpuInitializeData *pFVar16;
  FGpuInitializeData *pFVar17;
  FRenderProxy *pFVar18;
  FStaticMeshLODResources *pFVar19;
  UObject *pUVar20;
  TArrayView<float_const_,int> *this_00;
  float *pfVar21;
  TArrayView<int_const_,int> *this_01;
  uint *puVar22;
  undefined2 *puVar23;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined ***pppuVar28;
  FGpuInitializeData *pFVar29;
  FStaticMeshSectionArray *pFVar30;
  undefined2 *puVar31;
  undefined2 *puVar32;
  uint uVar33;
  undefined4 *puVar34;
  undefined2 *puVar35;
  int *piVar36;
  undefined4 *puVar37;
  float fVar38;
  undefined1 auStackY_198 [32];
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144 [2];
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  uint local_13c;
  longlong local_138;
  FGpuInitializeData *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  void *local_108;
  TArrayView<float_const_,int> local_100;
  TArrayView<int_const_,int> local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FGpuInitializeData *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FGpuInitializeData *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  *(undefined4 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  local_108 = param_1;
  memset((void *)((longlong)param_1 + 0x30),0,0x3e0);
  pFVar29 = (FGpuInitializeData *)0x0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(double (*) [2])((longlong)param_1 + 0x250) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x260) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x270) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x280) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x290) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x2a0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x2b0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = uVar11;
  *(double *)((longlong)param_1 + 0x2c0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  *(float *)((longlong)param_1 + 0x2fc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x300) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  *(float *)((longlong)param_1 + 0x308) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined4 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  iVar14 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x388),
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x388) = iVar14;
  *(undefined8 *)((longlong)param_1 + 0x390) = 0;
  *(undefined8 *)((longlong)param_1 + 0x398) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
  iVar14 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x3c0),
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x3c0) = iVar14;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e0) = 0;
  *(undefined8 *)((longlong)param_1 + 1000) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x400) = 0;
  *(undefined4 *)((longlong)param_1 + 0x408) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x40c) = 0;
  local_13e = NDIStaticMeshLocal::FInstanceData_GameThread::Init(param_1,this,param_2);
  if (((bool)local_13e) && (((uint)this->_padding_ >> 2 & 1) != 0)) {
    pFVar16 = ::operator_new(0xd8);
    pFVar17 = pFVar29;
    if (pFVar16 != (FGpuInitializeData *)0x0) {
      memset(pFVar16,0,0xd8);
      pFVar17 = NDIStaticMeshLocal::FGpuInitializeData::FGpuInitializeData(pFVar16);
    }
    local_130 = pFVar17;
    pFVar18 = UNiagaraDataInterface::GetProxyAs<NDIStaticMeshLocal::FRenderProxy>
                        ((UNiagaraDataInterface *)this);
    pFVar17->RenderProxy = pFVar18;
    pFVar17->SystemInstanceID = param_2->ID;
    pFVar19 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                        (param_1,&pFVar17->OverrideColorBuffer);
    pFVar6 = (pFVar17->LODResource).Reference;
    if (pFVar6 != pFVar19) {
      (pFVar17->LODResource).Reference = pFVar19;
      if (pFVar19 != (FStaticMeshLODResources *)0x0) {
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar6 != (FStaticMeshLODResources *)0x0) {
        FRefCountBase::Release((FRefCountBase *)pFVar6);
      }
    }
    if ((pFVar17->LODResource).Reference != (FStaticMeshLODResources *)0x0) {
      uVar2 = *(undefined4 *)((longlong)&param_2->System->_padding_ + 4);
      (pFVar17->SystemFName).ComparisonIndex =
           (FNameEntryId)*(undefined4 *)&param_2->System->_padding_;
      (pFVar17->SystemFName).Number = uVar2;
      pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x10));
      if (pUVar20 != (UObject *)0x0) {
        uVar2 = *(undefined4 *)&pUVar20->field_0x1c;
        (pFVar17->StaticMeshFName).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar20->field_0x18;
        (pFVar17->StaticMeshFName).Number = uVar2;
      }
      pFVar17->NumFilteredTriangles = *(int *)((longlong)param_1 + 0x334);
      pFVar17->NumUnfilteredTriangles = *(int *)((longlong)param_1 + 0x338);
      uVar25 = *(uint *)((longlong)param_1 + 0x328) >> 6;
      pFVar17->bGpuUniformDistribution = (bool)((byte)uVar25 & 1);
      pFVar6 = (pFVar17->LODResource).Reference;
      iVar14 = *(int *)&(pFVar6->Sections).field_0x28;
      pFVar17->NumSections = iVar14;
      fVar10 = __real_3f800000;
      if (0 < iVar14) {
        local_138 = 0;
        plVar1 = &(pFVar17->SectionInfos)._padding_;
        pFVar16 = (FGpuInitializeData *)&pFVar6->AreaWeightedSampler;
        if ((uVar25 & 1) == 0) {
          pFVar16 = pFVar29;
        }
        do {
          pFVar6 = (pFVar17->LODResource).Reference;
          uVar33 = (uint)pFVar29;
          uVar25 = 0;
          if ((int)uVar33 < *(int *)&(pFVar6->Sections).field_0x28) {
            uVar25 = ~uVar33 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          pFVar7 = *(FStaticMeshSectionArray **)&(pFVar6->Sections).field_0x20;
          pFVar30 = &pFVar6->Sections;
          if (pFVar7 != (FStaticMeshSectionArray *)0x0) {
            pFVar30 = pFVar7;
          }
          fVar38 = fVar10;
          uVar25 = uVar33;
          if (pFVar16 != (FGpuInitializeData *)0x0) {
            this_00 = FWeightedRandomSampler::GetProb((FWeightedRandomSampler *)pFVar16,&local_100);
            pfVar21 = TArrayView<float_const_,int>::operator[](this_00,uVar33);
            fVar38 = *pfVar21;
            this_01 = FWeightedRandomSampler::GetAlias((FWeightedRandomSampler *)pFVar16,&local_f0);
            puVar22 = (uint *)TArrayView<int_const_,int>::operator[](this_01,uVar33);
            uVar25 = *puVar22;
          }
          local_13c = uVar25;
          piVar36 = (int *)((longlong)&(pFVar17->SectionInfos)._padding_ + 4);
          iVar14 = (int)(pFVar17->SectionInfos)._padding_;
          uVar25 = *(uint *)(&pFVar30->field_0x4 + local_138);
          if (iVar14 == *piVar36) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)plVar1,piVar36);
          }
          param_1 = local_108;
          *(int *)&(pFVar17->SectionInfos)._padding_ = iVar14 + 1;
          uVar27 = *plVar1;
          if ((uVar27 & 1) != 0) {
            uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
          }
          puVar34 = (undefined4 *)(&pFVar30->field_0x8 + local_138);
          pFVar29 = (FGpuInitializeData *)(ulonglong)(uVar33 + 1);
          local_138 = local_138 + 0x1c;
          lVar26 = (longlong)iVar14;
          *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = *puVar34;
          *(uint *)(uVar27 + 0xc + lVar26 * 0x10) = local_13c;
          *(float *)(uVar27 + 8 + lVar26 * 0x10) = fVar38;
          *(uint *)(uVar27 + lVar26 * 0x10) = uVar25 / 3;
        } while ((int)(uVar33 + 1) < pFVar17->NumSections);
        pFVar17->NumFilteredSections = *(int *)((longlong)local_108 + 0x32c);
        iVar14 = *(int *)((longlong)local_108 + 0x32c);
        puVar34 = *(undefined4 **)((longlong)local_108 + 0x350);
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        puVar37 = puVar34 + (longlong)iVar14 * 4;
        if (puVar34 != puVar37) {
          plVar1 = &(pFVar17->SectionInfos)._padding_;
          do {
            iVar14 = (int)(pFVar17->SectionInfos)._padding_;
            if (iVar14 == *(int *)((longlong)&(pFVar17->SectionInfos)._padding_ + 4)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                 (0x410,(ForAnyElementType *)plVar1,
                                  (int *)((longlong)&(pFVar17->SectionInfos)._padding_ + 4));
            }
            *(int *)&(pFVar17->SectionInfos)._padding_ = iVar14 + 1;
            uVar27 = *plVar1;
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
            }
            uVar2 = puVar34[3];
            uVar3 = puVar34[2];
            uVar4 = puVar34[1];
            lVar26 = (longlong)iVar14;
            uVar5 = *puVar34;
            puVar34 = puVar34 + 4;
            *(undefined4 *)(uVar27 + lVar26 * 0x10) = uVar5;
            *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = uVar4;
            *(undefined4 *)(uVar27 + 8 + lVar26 * 0x10) = uVar3;
            *(undefined4 *)(uVar27 + 0xc + lVar26 * 0x10) = uVar2;
          } while (puVar34 != puVar37);
        }
        iVar14 = *(int *)((longlong)param_1 + 0x32c);
        puVar31 = *(undefined2 **)((longlong)param_1 + 0x340);
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        puVar32 = puVar31 + (longlong)iVar14 * 2;
        if (puVar31 != puVar32) {
          plVar1 = &(pFVar17->FilteredAndUnfilteredSections)._padding_;
          do {
            local_148 = *puVar31;
            puVar23 = (undefined2 *)*plVar1;
            puVar35 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
            if (((ulonglong)puVar23 & 1) == 0) {
              puVar35 = puVar23;
            }
            if (puVar35 <= &local_148) {
              if (((ulonglong)puVar23 & 1) != 0) {
                puVar23 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
              }
              if ((&local_148 <
                   puVar23 + *(int *)((longlong)&(pFVar17->FilteredAndUnfilteredSections)._padding_
                                     + 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
            }
            iVar14 = (int)(pFVar17->FilteredAndUnfilteredSections)._padding_;
            if (iVar14 == *(int *)((longlong)&(pFVar17->FilteredAndUnfilteredSections)._padding_ + 4
                                  )) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                 (0x202,(ForAnyElementType *)plVar1,
                                  (int *)((longlong)
                                          &(pFVar17->FilteredAndUnfilteredSections)._padding_ + 4));
            }
            *(int *)&(pFVar17->FilteredAndUnfilteredSections)._padding_ = iVar14 + 1;
            uVar27 = *plVar1;
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
            }
            puVar31 = puVar31 + 2;
            *(undefined2 *)(uVar27 + (longlong)iVar14 * 2) = local_148;
          } while (puVar31 != puVar32);
        }
        pFVar17->NumUnfilteredSections = *(int *)((longlong)param_1 + 0x330);
        iVar14 = *(int *)((longlong)param_1 + 0x330);
        puVar34 = (undefined4 *)
                  ((longlong)*(int *)((longlong)param_1 + 0x32c) * 0x10 +
                  *(longlong *)((longlong)param_1 + 0x350));
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        puVar37 = puVar34 + (longlong)iVar14 * 4;
        if (puVar34 != puVar37) {
          plVar1 = &(pFVar17->SectionInfos)._padding_;
          do {
            iVar14 = (int)(pFVar17->SectionInfos)._padding_;
            if (iVar14 == *(int *)((longlong)&(pFVar17->SectionInfos)._padding_ + 4)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                 (0x410,(ForAnyElementType *)plVar1,
                                  (int *)((longlong)&(pFVar17->SectionInfos)._padding_ + 4));
            }
            *(int *)&(pFVar17->SectionInfos)._padding_ = iVar14 + 1;
            uVar27 = *plVar1;
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
            }
            uVar2 = puVar34[3];
            uVar3 = puVar34[2];
            uVar4 = puVar34[1];
            lVar26 = (longlong)iVar14;
            uVar5 = *puVar34;
            puVar34 = puVar34 + 4;
            *(undefined4 *)(uVar27 + lVar26 * 0x10) = uVar5;
            *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = uVar4;
            *(undefined4 *)(uVar27 + 8 + lVar26 * 0x10) = uVar3;
            *(undefined4 *)(uVar27 + 0xc + lVar26 * 0x10) = uVar2;
          } while (puVar34 != puVar37);
        }
        iVar14 = *(int *)((longlong)param_1 + 0x330);
        puVar31 = (undefined2 *)
                  (*(longlong *)((longlong)param_1 + 0x340) +
                  (longlong)*(int *)((longlong)param_1 + 0x32c) * 4);
        if ((iVar14 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        puVar32 = puVar31 + (longlong)iVar14 * 2;
        if (puVar31 != puVar32) {
          plVar1 = &(pFVar17->FilteredAndUnfilteredSections)._padding_;
          do {
            local_146 = *puVar31;
            puVar23 = (undefined2 *)*plVar1;
            puVar35 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
            if (((ulonglong)puVar23 & 1) == 0) {
              puVar35 = puVar23;
            }
            if (puVar35 <= &local_146) {
              if (((ulonglong)puVar23 & 1) != 0) {
                puVar23 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
              }
              if ((&local_146 <
                   puVar23 + *(int *)((longlong)&(pFVar17->FilteredAndUnfilteredSections)._padding_
                                     + 4)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
            }
            iVar14 = (int)(pFVar17->FilteredAndUnfilteredSections)._padding_;
            if (iVar14 == *(int *)((longlong)&(pFVar17->FilteredAndUnfilteredSections)._padding_ + 4
                                  )) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                 (0x202,(ForAnyElementType *)plVar1,
                                  (int *)((longlong)
                                          &(pFVar17->FilteredAndUnfilteredSections)._padding_ + 4));
            }
            *(int *)&(pFVar17->FilteredAndUnfilteredSections)._padding_ = iVar14 + 1;
            uVar27 = *plVar1;
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
            }
            puVar31 = puVar31 + 2;
            *(undefined2 *)(uVar27 + (longlong)iVar14 * 2) = local_146;
          } while (puVar31 != puVar32);
        }
      }
    }
    iVar14 = *(int *)((longlong)param_1 + 1000);
    pFVar17->NumSockets = iVar14;
    pFVar29 = pFVar17;
    if (0 < iVar14) {
      iVar15 = *(int *)((longlong)param_1 + 0x3f0);
      plVar1 = &(pFVar17->SocketTransforms)._padding_;
      pFVar17->NumFilteredSockets = iVar15;
      pFVar17->NumUnfilteredSockets = iVar14 - *(int *)((longlong)param_1 + 0x3f0);
      uVar25 = iVar15 * 3;
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      piVar36 = (int *)((longlong)&(pFVar17->SocketTransforms)._padding_ + 4);
      if (*(int *)((longlong)&(pFVar17->SocketTransforms)._padding_ + 4) < (int)uVar25) {
        UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x10,0x10,uVar25,(ForAnyElementType *)plVar1,
                   (int)(pFVar17->SocketTransforms)._padding_,piVar36);
      }
      iVar14 = *(int *)((longlong)param_1 + 1000);
      puVar34 = *(undefined4 **)((longlong)param_1 + 0x3e0);
      puVar37 = puVar34 + (longlong)iVar14 * 0xc;
      while( true ) {
        if (*(int *)((longlong)param_1 + 1000) != iVar14) {
          local_140 = 0;
          `TCheckedPointerIterator<UE::Math::TTransform<float>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_140);
        }
        pFVar29 = local_130;
        if (puVar34 == puVar37) break;
        local_120 = puVar34[4];
        uStack_11c = puVar34[5];
        uVar2 = puVar34[6];
        iVar15 = (int)(pFVar17->SocketTransforms)._padding_;
        uVar3 = *puVar34;
        uVar4 = puVar34[1];
        uVar5 = puVar34[2];
        uVar9 = puVar34[3];
        local_118 = uVar2;
        if (iVar15 == *piVar36) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x1010,(ForAnyElementType *)plVar1,piVar36);
        }
        *(int *)&(pFVar17->SocketTransforms)._padding_ = iVar15 + 1;
        uVar27 = *plVar1;
        if ((uVar27 & 1) != 0) {
          uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
        }
        lVar26 = (longlong)iVar15;
        *(undefined4 *)(uVar27 + lVar26 * 0x10) = local_120;
        *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = uStack_11c;
        *(undefined4 *)(uVar27 + 8 + lVar26 * 0x10) = uVar2;
        *(undefined4 *)(uVar27 + 0xc + lVar26 * 0x10) = 0;
        iVar15 = (int)(pFVar17->SocketTransforms)._padding_;
        if (iVar15 == *piVar36) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x1010,(ForAnyElementType *)plVar1,piVar36);
        }
        *(int *)&(pFVar17->SocketTransforms)._padding_ = iVar15 + 1;
        uVar27 = *plVar1;
        if ((uVar27 & 1) != 0) {
          uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
        }
        lVar26 = (longlong)iVar15;
        *(undefined4 *)(uVar27 + lVar26 * 0x10) = uVar3;
        *(undefined4 *)(uVar27 + 0xc + lVar26 * 0x10) = uVar9;
        *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = uVar4;
        *(undefined4 *)(uVar27 + 8 + lVar26 * 0x10) = uVar5;
        local_114 = puVar34[8];
        uStack_110 = puVar34[9];
        uVar2 = puVar34[10];
        iVar15 = (int)(pFVar17->SocketTransforms)._padding_;
        local_10c = uVar2;
        if (iVar15 == *piVar36) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                             (0x1010,(ForAnyElementType *)plVar1,piVar36);
        }
        *(int *)&(pFVar17->SocketTransforms)._padding_ = iVar15 + 1;
        uVar27 = *plVar1;
        if ((uVar27 & 1) != 0) {
          uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
        }
        lVar26 = (longlong)iVar15;
        puVar34 = puVar34 + 0xc;
        *(undefined4 *)(uVar27 + lVar26 * 0x10) = local_114;
        *(undefined4 *)(uVar27 + 4 + lVar26 * 0x10) = uStack_110;
        *(undefined4 *)(uVar27 + 8 + lVar26 * 0x10) = uVar2;
        *(undefined4 *)(uVar27 + 0xc + lVar26 * 0x10) = 0;
      }
      if (0 < *(int *)((longlong)param_1 + 0x3f0)) {
        uVar25 = *(uint *)((longlong)param_1 + 0x400);
        plVar1 = &(local_130->FilteredAndUnfilteredSockets)._padding_;
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
        piVar36 = (int *)((longlong)&(local_130->FilteredAndUnfilteredSockets)._padding_ + 4);
        if (*(int *)((longlong)&(local_130->FilteredAndUnfilteredSockets)._padding_ + 4) <
            (int)uVar25) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,uVar25,(ForAnyElementType *)plVar1,
                     (int)(local_130->FilteredAndUnfilteredSockets)._padding_,piVar36);
        }
        puVar32 = *(undefined2 **)((longlong)param_1 + 0x3f8);
        iVar14 = *(int *)((longlong)param_1 + 0x400);
        puVar31 = puVar32 + iVar14;
        while( true ) {
          if (*(int *)((longlong)param_1 + 0x400) != iVar14) {
            local_13f = 0;
            `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_13f);
          }
          if (puVar32 == puVar31) break;
          local_144[0] = *puVar32;
          puVar23 = (undefined2 *)*plVar1;
          puVar35 = puVar23;
          if (((ulonglong)puVar23 & 1) != 0) {
            puVar35 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
          }
          if (puVar35 <= local_144) {
            if (((ulonglong)puVar23 & 1) != 0) {
              puVar23 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar23 >> 0x18));
            }
            if ((local_144 < puVar23 + *piVar36) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
          }
          iVar15 = (int)(pFVar29->FilteredAndUnfilteredSockets)._padding_;
          if (iVar15 == *piVar36) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                               (0x202,(ForAnyElementType *)plVar1,piVar36);
          }
          *(int *)&(pFVar29->FilteredAndUnfilteredSockets)._padding_ = iVar15 + 1;
          uVar27 = *plVar1;
          if ((uVar27 & 1) != 0) {
            uVar27 = (longlong)plVar1 + ((longlong)uVar27 >> 0x18);
          }
          puVar32 = puVar32 + 1;
          *(undefined2 *)(uVar27 + (longlong)iVar15 * 2) = local_144[0];
        }
      }
    }
    local_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_128 = 0;
    pFStack_c0 = pFVar29;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceStaticMesh::InitPerInstanceData_::__l5::TSTR_InitInstanceData1870>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_a8._0_8_ = local_d8[0];
      local_80 = local_b0;
      local_98 = local_c8;
      pFStack_90 = pFStack_c0;
      local_88 = local_b8;
      local_d8[0] = (code *)0x0;
      local_78 = 2;
      pFVar24 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceStaticMesh::InitPerInstanceData'::__l5::TSTR_InitInstanceData1870>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_a8,pFVar24);
      uVar27 = (ulonglong)local_78;
      if ((2 < uVar27) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          pppuVar28 = (undefined ***)(local_a8 + 0x10);
          if (local_80 != (undefined ***)0x0) {
            pppuVar28 = local_80;
          }
          (*(code *)(*pppuVar28)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27])(local_a8);
      }
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar28 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar28 = local_b0;
      }
      (*(code *)(*pppuVar28)[2])();
    }
    TDefaultDelete<NDIStaticMeshLocal::FGpuInitializeData>::operator()
              ((TDefaultDelete<NDIStaticMeshLocal::FGpuInitializeData> *)&local_128,
               (FGpuInitializeData *)0x0);
  }
  return (bool)local_13e;
}

// OnSourceEndPlay @ 148fc60b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay
          (UNiagaraDataInterfaceStaticMesh *this,AActor *param_1,Type param_2)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  
  this->ChangeId = this->ChangeId + 1;
  UnbindSourceDelegates(this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  FSoftObjectPtr::operator=(&(this->SoftSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  (this->SourceComponent).WeakPtr = local_res8;
  return;
}

// PerInstanceDataSize @ 148fc63f0

int __thiscall
UNiagaraDataInterfaceStaticMesh::PerInstanceDataSize(UNiagaraDataInterfaceStaticMesh *this)

{
  return 0x410;
}

// PerInstanceTick @ 148fc6490

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
UNiagaraDataInterfaceStaticMesh::PerInstanceTick
          (UNiagaraDataInterfaceStaticMesh *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  bool bVar1;
  
  bVar1 = NDIStaticMeshLocal::FInstanceData_GameThread::Tick(param_1,this,param_2,param_3);
  return bVar1;
}

// PostInitProperties @ 148fc72b0

void __thiscall
UNiagaraDataInterfaceStaticMesh::PostInitProperties(UNiagaraDataInterfaceStaticMesh *this)

{
  bool bVar1;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10 [3];
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
    local_res8.DebugPtr = (UObject *)FMeshTriCoordinate::StaticStruct();
    local_28.DebugPtr = local_res8.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UScriptStruct *)local_res8.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable(local_res8.DebugPtr);
    }
    local_1e = 0;
    local_20 = 2;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    bVar1 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                      ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
    if (!bVar1) {
      local_res10[0] = &local_res8;
      `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(local_res10);
    }
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 148fc74b0

void __thiscall UNiagaraDataInterfaceStaticMesh::PostLoad(UNiagaraDataInterfaceStaticMesh *this)

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
    if (*(UNiagaraDataInterfaceStaticMesh **)FVar5 == this) {
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

// ProvidePerInstanceDataForRenderThread @ 148fc7a50

void __thiscall
UNiagaraDataInterfaceStaticMesh::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceStaticMesh *this,void *param_1,void *param_2,ulong64 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  UObject *pUVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined1 local_28 [32];
  
  dVar3 = *(double *)((longlong)param_2 + 0x70);
  dVar4 = *(double *)((longlong)param_2 + 0x78);
  uVar19 = 0;
  dVar5 = *(double *)((longlong)param_2 + 0x60);
  dVar6 = *(double *)((longlong)param_2 + 0x68);
  dVar7 = *(double *)((longlong)param_2 + 0x80);
  dVar8 = *(double *)((longlong)param_2 + 0x88);
  dVar9 = *(double *)((longlong)param_2 + 0x90);
  dVar10 = *(double *)((longlong)param_2 + 0x98);
  dVar11 = *(double *)((longlong)param_2 + 0xa0);
  dVar12 = *(double *)((longlong)param_2 + 0xa8);
  dVar13 = *(double *)((longlong)param_2 + 0x48);
  dVar14 = *(double *)((longlong)param_2 + 0xb0);
  dVar15 = *(double *)((longlong)param_2 + 0xb8);
  dVar16 = *(double *)((longlong)param_2 + 0x50);
  dVar17 = *(double *)((longlong)param_2 + 0x58);
  *(float *)param_1 = (float)*(double *)((longlong)param_2 + 0x40);
  *(float *)((longlong)param_1 + 4) = (float)dVar13;
  *(float *)((longlong)param_1 + 8) = (float)dVar16;
  *(float *)((longlong)param_1 + 0xc) = (float)dVar17;
  *(float *)((longlong)param_1 + 0x10) = (float)dVar5;
  *(float *)((longlong)param_1 + 0x14) = (float)dVar6;
  *(float *)((longlong)param_1 + 0x18) = (float)dVar3;
  *(float *)((longlong)param_1 + 0x1c) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x20) = (float)dVar7;
  *(float *)((longlong)param_1 + 0x24) = (float)dVar8;
  *(float *)((longlong)param_1 + 0x28) = (float)dVar9;
  *(float *)((longlong)param_1 + 0x2c) = (float)dVar10;
  *(float *)((longlong)param_1 + 0x30) = (float)dVar11;
  *(float *)((longlong)param_1 + 0x34) = (float)dVar12;
  *(float *)((longlong)param_1 + 0x38) = (float)dVar14;
  *(float *)((longlong)param_1 + 0x3c) = (float)dVar15;
  dVar3 = *(double *)((longlong)param_2 + 0x170);
  dVar4 = *(double *)((longlong)param_2 + 0x178);
  dVar5 = *(double *)((longlong)param_2 + 0x160);
  dVar6 = *(double *)((longlong)param_2 + 0x168);
  dVar7 = *(double *)((longlong)param_2 + 400);
  dVar8 = *(double *)((longlong)param_2 + 0x198);
  dVar9 = *(double *)((longlong)param_2 + 0x180);
  dVar10 = *(double *)((longlong)param_2 + 0x188);
  dVar11 = *(double *)((longlong)param_2 + 0x1a0);
  dVar12 = *(double *)((longlong)param_2 + 0x1a8);
  dVar13 = *(double *)((longlong)param_2 + 0x1b0);
  dVar14 = *(double *)((longlong)param_2 + 0x1b8);
  dVar15 = *(double *)((longlong)param_2 + 0x148);
  dVar16 = *(double *)((longlong)param_2 + 0x150);
  dVar17 = *(double *)((longlong)param_2 + 0x158);
  *(float *)((longlong)param_1 + 0x40) = (float)*(double *)((longlong)param_2 + 0x140);
  *(float *)((longlong)param_1 + 0x44) = (float)dVar15;
  *(float *)((longlong)param_1 + 0x48) = (float)dVar16;
  *(float *)((longlong)param_1 + 0x4c) = (float)dVar17;
  *(float *)((longlong)param_1 + 0x50) = (float)dVar5;
  *(float *)((longlong)param_1 + 0x54) = (float)dVar6;
  *(float *)((longlong)param_1 + 0x58) = (float)dVar3;
  *(float *)((longlong)param_1 + 0x5c) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x60) = (float)dVar9;
  *(float *)((longlong)param_1 + 100) = (float)dVar10;
  *(float *)((longlong)param_1 + 0x68) = (float)dVar7;
  *(float *)((longlong)param_1 + 0x6c) = (float)dVar8;
  *(float *)((longlong)param_1 + 0x70) = (float)dVar11;
  *(float *)((longlong)param_1 + 0x74) = (float)dVar12;
  *(float *)((longlong)param_1 + 0x78) = (float)dVar13;
  *(float *)((longlong)param_1 + 0x7c) = (float)dVar14;
  uVar18 = *(undefined8 *)((longlong)param_2 + 0x2d8);
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x2d0);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar18;
  uVar18 = *(undefined8 *)((longlong)param_2 + 0x2e8);
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x2e0);
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar18;
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0x2f0);
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_2 + 0x2f4);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0x300);
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0x308);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0x38);
  uVar22 = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  if (*(longlong *)((longlong)param_2 + 0x20) != 0) {
    uVar19 = *(undefined8 *)(*(longlong *)((longlong)param_2 + 0x20) + 0x38);
  }
  *(undefined8 *)((longlong)param_1 + 0xd0) = uVar19;
  if (*(longlong *)((longlong)param_2 + 0x20) != 0) {
    uVar22 = *(undefined4 *)(*(longlong *)((longlong)param_2 + 0x20) + 0xc);
  }
  *(undefined4 *)((longlong)param_1 + 0xd8) = uVar22;
  plVar1 = *(longlong **)param_2;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_2 + 8));
  puVar21 = (undefined4 *)(*pcVar2)(plVar1,local_28,pUVar20);
  *(undefined4 *)((longlong)param_1 + 200) = *puVar21;
  return;
}

// RequiresEarlyViewData @ 148fcb280

bool __thiscall
UNiagaraDataInterfaceStaticMesh::RequiresEarlyViewData(UNiagaraDataInterfaceStaticMesh *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x1;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x1;
}

// ResolveStaticMesh @ 148fcb520

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

UStaticMesh * __thiscall
UNiagaraDataInterfaceStaticMesh::ResolveStaticMesh
          (UNiagaraDataInterfaceStaticMesh *this,UObject **param_1,FNiagaraSystemInstance *param_2,
          UObject *param_3)

{
  ENDIStaticMesh_SourceMode EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UObject *pUVar7;
  AActor *pAVar8;
  INiagaraSceneComponentUtils *pIVar9;
  UStaticMesh *pUVar10;
  UStaticMesh *local_res8;
  
  EVar1 = this->SourceMode;
  if ((EVar1 == Default) || (EVar1 == Source)) {
    bVar6 = true;
    if (EVar1 != Default) goto LAB_148fcb562;
LAB_148fcb56b:
    bVar3 = true;
    if (EVar1 != Default) goto LAB_148fcb572;
LAB_148fcb57b:
    bVar4 = true;
    if (EVar1 != Default) goto LAB_148fcb582;
LAB_148fcb58b:
    bVar5 = true;
  }
  else {
    bVar6 = false;
LAB_148fcb562:
    if (EVar1 == MeshParameterBinding) goto LAB_148fcb56b;
    bVar3 = false;
LAB_148fcb572:
    if (EVar1 == AttachParent) goto LAB_148fcb57b;
    bVar4 = false;
LAB_148fcb582:
    if (EVar1 == DefaultMeshOnly) goto LAB_148fcb58b;
    bVar5 = false;
  }
  local_res8 = (UStaticMesh *)0x0;
  if (bVar6) {
    bVar6 = FWeakObjectPtr::IsValid(&(this->SourceComponent).WeakPtr);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get(&(this->SourceComponent).WeakPtr);
      *param_1 = pUVar7;
      pUVar7 = FWeakObjectPtr::Get(&(this->SourceComponent).WeakPtr);
      pUVar10 = *(UStaticMesh **)(pUVar7 + 0x24);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      goto LAB_148fcb6a2;
    }
    pAVar8 = TSoftObjectPtr<AActor>::Get(&this->SoftSourceActor);
    if (pAVar8 != (AActor *)0x0) {
      pIVar9 = FNiagaraSystemInstance::GetSceneComponentUtils(param_2);
      pcVar2 = *(code **)((longlong)*pIVar9 + 8);
      pAVar8 = TSoftObjectPtr<AActor>::Get(&this->SoftSourceActor);
      (*pcVar2)(pIVar9,pAVar8,0,param_1,&local_res8);
      pUVar10 = local_res8;
      goto LAB_148fcb6a2;
    }
  }
  pIVar9 = FNiagaraSystemInstance::GetSceneComponentUtils(param_2);
  if ((bVar3) && (param_3 != (UObject *)0x0)) {
    (**(code **)((longlong)*pIVar9 + 8))(pIVar9,param_3,1,param_1,&local_res8);
  }
  pUVar10 = local_res8;
  if ((((bVar4) && (param_2 != (FNiagaraSystemInstance *)0x0)) && (*param_1 == (UObject *)0x0)) &&
     (local_res8 == (UStaticMesh *)0x0)) {
    (**(code **)((longlong)*pIVar9 + 0x10))(pIVar9,1,param_1,&local_res8);
    pUVar10 = local_res8;
  }
LAB_148fcb6a2:
  if (((bVar5) && (*param_1 == (UObject *)0x0)) && (pUVar10 == (UStaticMesh *)0x0)) {
    return (this->DefaultMesh).field0_0x0.DebugPtr;
  }
  return pUVar10;
}

// SetDefaultMeshFromBlueprints @ 148fcba50

void __thiscall
UNiagaraDataInterfaceStaticMesh::SetDefaultMeshFromBlueprints
          (UNiagaraDataInterfaceStaticMesh *this,UStaticMesh *param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->ChangeId = this->ChangeId + 1;
  UnbindSourceDelegates(this);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->SourceComponent).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  FSoftObjectPtr::operator=(&(this->SoftSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->DefaultMesh).field0_0x0.DebugPtr = param_1;
  return;
}

// SetNiagaraStaticMeshDIInstanceIndex @ 148fcbae0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceStaticMesh::SetNiagaraStaticMeshDIInstanceIndex
          (UNiagaraComponent *param_1,FName param_2,int param_3)

{
  UClass *pUVar1;
  UNiagaraDataInterface *pUVar2;
  
  pUVar1 = StaticClass();
  pUVar2 = UNiagaraFunctionLibrary::GetDataInterface(pUVar1,param_1,param_2);
  if ((pUVar2 != (UNiagaraDataInterface *)0x0) && (*(int *)&pUVar2[3].Proxy.Ptr != param_3)) {
    *(int *)&pUVar2[4]._padding_ = (int)pUVar2[4]._padding_ + 1;
    *(int *)&pUVar2[3].Proxy.Ptr = param_3;
  }
  return;
}

// SetShaderParameters @ 148fcc610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfaceStaticMesh::SetShaderParameters
          (UNiagaraDataInterfaceStaticMesh *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  float *pfVar1;
  uchar *puVar2;
  float fVar3;
  float fVar4;
  FNiagaraDataInterfaceProxy *pFVar5;
  uchar *puVar6;
  undefined4 uVar9;
  longlong *plVar7;
  FRHIBuffer *pFVar8;
  code *pcVar10;
  FSceneView *pFVar11;
  undefined8 uVar12;
  bool bVar13;
  ushort uVar14;
  ulong64 uVar15;
  FInstanceData_RenderThread *pFVar16;
  FShaderParametersMetadata *pFVar17;
  FRHIShaderResourceView *pFVar18;
  FRHIShaderResourceView *pFVar19;
  TMatrix<float> *pTVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  FSceneView *pFVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_258 [32];
  bool local_238;
  uchar *local_230;
  uchar *local_228;
  FShaderParametersMetadata *local_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  TMatrix<float> local_178;
  TMatrix<float> local_138;
  undefined8 local_f8;
  float fStack_ec;
  float fStack_e8;
  undefined1 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_258;
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar5 = param_1->DataInterfaceProxy;
  uVar15 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar16 = TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
            ::FindChecked((TMapBase<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread,0>_>
                           *)(pFVar5 + 1),uVar15);
  uVar24 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar17 = TShaderParameterStructTypeInfo<NDIStaticMeshLocal::FShaderParameters>::GetStructMetadata
                      ();
  puVar6 = param_1->BaseParameters;
  pFVar26 = (FSceneView *)0x0;
  param_1->ParametersOffset = pFVar17->Size + uVar24;
  uVar25 = 0;
  if (pFVar16->bIsValid == false) {
    *(undefined8 *)(puVar6 + uVar24) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(puVar6 + (ulonglong)uVar24 + 8) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    puVar2 = puVar6 + (ulonglong)uVar24 + 0xc;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    puVar2 = puVar6 + (ulonglong)uVar24 + 0x14;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    pFVar19 = FNiagaraRenderer::GetDummyUIntBuffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x18) = pFVar19;
    pFVar19 = FNiagaraRenderer::GetDummyFloatBuffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x20) = pFVar19;
    pFVar19 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x28) = pFVar19;
    pFVar19 = FNiagaraRenderer::GetDummyFloat2Buffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x30) = pFVar19;
    pFVar19 = FNiagaraRenderer::GetDummyWhiteColorBuffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x38) = pFVar19;
    puVar2 = puVar6 + (ulonglong)uVar24 + 0x40;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
  }
  else {
    pFVar19 = (pFVar16->MeshColorBufferSRV).Reference;
    *(undefined8 *)(puVar6 + uVar24) = *(undefined8 *)&(pFVar16->NumTriangles).field0_0x0;
    *(int *)(puVar6 + (ulonglong)uVar24 + 8) = (pFVar16->NumTriangles).field0_0x0._s_0.Z;
    *(int *)(puVar6 + (ulonglong)uVar24 + 0xc) = pFVar16->NumVertices;
    *(int *)(puVar6 + (ulonglong)uVar24 + 0x10) = pFVar16->NumUVs;
    *(uint *)(puVar6 + (ulonglong)uVar24 + 0x14) = (uint)(pFVar19 != (FRHIShaderResourceView *)0x0);
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x18) =
         (pFVar16->MeshIndexBufferSRV).Reference;
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x20) =
         (pFVar16->MeshPositionBufferSRV).Reference;
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x28) =
         (pFVar16->MeshTangentBufferSRV).Reference;
    pFVar18 = (pFVar16->MeshUVBufferSRV).Reference;
    if (pFVar18 == (FRHIShaderResourceView *)0x0) {
      pFVar18 = FNiagaraRenderer::GetDummyFloat2Buffer();
    }
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x30) = pFVar18;
    if (pFVar19 == (FRHIShaderResourceView *)0x0) {
      pFVar19 = FNiagaraRenderer::GetDummyWhiteColorBuffer();
    }
    else {
      pFVar19 = (pFVar16->MeshColorBufferSRV).Reference;
    }
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x38) = pFVar19;
    *(uint *)(puVar6 + (ulonglong)uVar24 + 0x40) = (uint)(pFVar16->bGpuUniformDistribution != false)
    ;
    if (pFVar16->bGpuUniformDistribution != false) {
      pFVar19 = (pFVar16->MeshUniformSamplingTriangleSRV).Reference;
      goto LAB_148fcc807;
    }
  }
  pFVar19 = FNiagaraRenderer::GetDummyUInt2Buffer();
LAB_148fcc807:
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x48) = pFVar19;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x50) =
       *(undefined8 *)&(pFVar16->SectionCounts).field0_0x0;
  *(int *)(puVar6 + (ulonglong)uVar24 + 0x58) = (pFVar16->SectionCounts).field0_0x0._s_0.Z;
  pFVar19 = (pFVar16->SectionInfos).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyUInt4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x60) = pFVar19;
  pFVar19 = (pFVar16->FilteredAndUnfilteredSections).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyUIntBuffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x68) = pFVar19;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x70) =
       *(undefined8 *)&(pFVar16->SocketCounts).field0_0x0;
  *(int *)(puVar6 + (ulonglong)uVar24 + 0x78) = (pFVar16->SocketCounts).field0_0x0._s_0.Z;
  pFVar19 = (pFVar16->SocketTransforms).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x80) = pFVar19;
  pFVar19 = (pFVar16->FilteredAndUnfilteredSockets).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyUIntBuffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x88) = pFVar19;
  pFVar19 = (pFVar16->SectionInfos).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyUInt4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x60) = pFVar19;
  pFVar19 = (pFVar16->SocketTransforms).SRV.Reference;
  if (pFVar19 == (FRHIShaderResourceView *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyFloat4Buffer();
  }
  *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x80) = pFVar19;
  fVar27 = 0.0;
  if (0.0 < pFVar16->DeltaSeconds) {
    fVar27 = __real_3f800000 / pFVar16->DeltaSeconds;
  }
  local_230 = (uchar *)CONCAT44(local_230._4_4_,
                                (pFVar16->Transform).M[3][0] - (pFVar16->PrevTransform).M[3][0]);
  local_228 = (uchar *)CONCAT44(local_228._4_4_,
                                (pFVar16->Transform).M[3][1] - (pFVar16->PrevTransform).M[3][1]);
  fVar38 = (pFVar16->Transform).M[3][2];
  fVar36 = (pFVar16->PrevTransform).M[3][2];
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x90) = fVar27;
  local_220 = (FShaderParametersMetadata *)CONCAT44(local_220._4_4_,fVar38 - fVar36);
  uVar12 = *(undefined8 *)((pFVar16->Transform).M[0] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xa0) = *(undefined8 *)(pFVar16->Transform).M[0];
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xa0 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->Transform).M[1] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xb0) = *(undefined8 *)(pFVar16->Transform).M[1];
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xb0 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->Transform).M[2] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xc0) = *(undefined8 *)(pFVar16->Transform).M[2];
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xc0 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->Transform).M[3] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xd0) = *(undefined8 *)(pFVar16->Transform).M[3];
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0xd0 + 8) = uVar12;
  pTVar20 = UE::Math::TMatrix<float>::Inverse(&pFVar16->Transform,&local_178);
  fVar27 = pTVar20->M[1][0];
  fVar38 = pTVar20->M[2][0];
  fVar36 = pTVar20->M[0][1];
  fVar35 = pTVar20->M[0][2];
  fVar29 = pTVar20->M[1][1];
  fVar34 = pTVar20->M[0][3];
  fVar28 = pTVar20->M[1][2];
  fVar30 = pTVar20->M[1][3];
  fVar31 = pTVar20->M[2][1];
  fVar32 = pTVar20->M[2][2];
  fVar33 = pTVar20->M[2][3];
  fVar37 = pTVar20->M[3][0];
  fVar39 = pTVar20->M[3][1];
  fVar3 = pTVar20->M[3][2];
  fVar4 = pTVar20->M[3][3];
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0xe0);
  *pfVar1 = pTVar20->M[0][0];
  pfVar1[1] = fVar27;
  pfVar1[2] = fVar38;
  pfVar1[3] = fVar37;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0xf0);
  *pfVar1 = fVar36;
  pfVar1[1] = fVar29;
  pfVar1[2] = fVar31;
  pfVar1[3] = fVar39;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0x100);
  *pfVar1 = fVar35;
  pfVar1[1] = fVar28;
  pfVar1[2] = fVar32;
  pfVar1[3] = fVar3;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0x110);
  *pfVar1 = fVar34;
  pfVar1[1] = fVar30;
  pfVar1[2] = fVar33;
  pfVar1[3] = fVar4;
  uVar12 = *(undefined8 *)&(pFVar16->Rotation).Z;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x120) = *(undefined8 *)&pFVar16->Rotation;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x120 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->PrevTransform).M[0] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x130) = *(undefined8 *)(pFVar16->PrevTransform).M[0]
  ;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x130 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->PrevTransform).M[1] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x140) = *(undefined8 *)(pFVar16->PrevTransform).M[1]
  ;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x140 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->PrevTransform).M[2] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x150) = *(undefined8 *)(pFVar16->PrevTransform).M[2]
  ;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x150 + 8) = uVar12;
  uVar12 = *(undefined8 *)((pFVar16->PrevTransform).M[3] + 2);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x160) = *(undefined8 *)(pFVar16->PrevTransform).M[3]
  ;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x160 + 8) = uVar12;
  pTVar20 = UE::Math::TMatrix<float>::Inverse(&pFVar16->PrevTransform,&local_138);
  fVar27 = pTVar20->M[1][0];
  fVar38 = pTVar20->M[1][3];
  fVar36 = pTVar20->M[2][0];
  fVar35 = pTVar20->M[2][3];
  fVar29 = pTVar20->M[3][0];
  fVar34 = pTVar20->M[3][2];
  fVar28 = pTVar20->M[3][3];
  fVar30 = pTVar20->M[0][1];
  fVar31 = pTVar20->M[0][2];
  fVar32 = pTVar20->M[1][1];
  fVar33 = pTVar20->M[0][3];
  fVar37 = pTVar20->M[1][2];
  fVar39 = pTVar20->M[2][1];
  fVar3 = pTVar20->M[2][2];
  fVar4 = pTVar20->M[3][1];
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0x170);
  *pfVar1 = pTVar20->M[0][0];
  pfVar1[1] = fVar27;
  pfVar1[2] = fVar36;
  pfVar1[3] = fVar29;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0x180);
  *pfVar1 = fVar30;
  pfVar1[1] = fVar32;
  pfVar1[2] = fVar39;
  pfVar1[3] = fVar4;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 400);
  *pfVar1 = fVar31;
  pfVar1[1] = fVar37;
  pfVar1[2] = fVar3;
  pfVar1[3] = fVar34;
  pfVar1 = (float *)(puVar6 + (ulonglong)uVar24 + 0x1a0);
  *pfVar1 = fVar33;
  pfVar1[1] = fVar38;
  pfVar1[2] = fVar35;
  pfVar1[3] = fVar28;
  uVar12 = *(undefined8 *)&(pFVar16->PrevRotation).Z;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x1b0) = *(undefined8 *)&pFVar16->PrevRotation;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x1b0 + 8) = uVar12;
  *(ulonglong *)(puVar6 + (ulonglong)uVar24 + 0x1c0) = CONCAT44(local_228._0_4_,local_230._0_4_);
  *(undefined4 *)(puVar6 + (ulonglong)uVar24 + 0x1c8) = local_220._0_4_;
  pFVar11 = (param_1->ComputeDispatchInterface->SimulationSceneViews).FirstElementPtr;
  uVar9 = (param_1->ComputeDispatchInterface->SimulationSceneViews).NumElements;
  if (((int)uVar9 < 1) || (pFVar26 = pFVar11, pFVar11 == (FSceneView *)0x0)) {
    local_238 = false;
  }
  else {
    local_238 = UE::FXRenderingUtils::DistanceFields::HasDataToBind(pFVar11);
  }
  bVar13 = FNiagaraDataInterfaceSetShaderParametersContext::IsParameterBound
                     (param_1,puVar6 + (ulonglong)uVar24 + 0x1cc);
  if (bVar13) {
    uVar23 = 0xffffffff;
    if ((((local_238 != false) && ((pFVar16->DistanceFieldPrimitiveId).PrimIDValue != 0)) &&
        (plVar7 = (longlong *)param_1->ComputeDispatchInterface->_padding_,
        plVar7 != (longlong *)0x0)) &&
       ((lVar21 = (**(code **)(*plVar7 + 0xd8))
                            (plVar7,(pFVar16->DistanceFieldPrimitiveId).PrimIDValue), lVar21 != 0 &&
        (0 < *(int *)(lVar21 + 0x118))))) {
      puVar22 = *(undefined4 **)(lVar21 + 0x110);
      if (*(undefined4 **)(lVar21 + 0x110) == (undefined4 *)0x0) {
        puVar22 = (undefined4 *)(lVar21 + 0x108);
      }
      uVar23 = *puVar22;
    }
    *(undefined4 *)(puVar6 + (ulonglong)uVar24 + 0x1cc) = uVar23;
  }
  pFVar17 = UE::FXRenderingUtils::DistanceFields::GetObjectBufferParametersMetadata();
  local_220 = UE::FXRenderingUtils::DistanceFields::GetAtlasParametersMetadata();
  uVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
                     (param_1,pFVar17);
  local_230 = param_1->BaseParameters + uVar14;
  uVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
                     (param_1,local_220);
  local_228 = param_1->BaseParameters + uVar14;
  bVar13 = FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
                     (param_1,local_230,pFVar17->Size);
  puVar2 = local_228;
  if ((bVar13) ||
     (bVar13 = FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
                         (param_1,local_228,local_220->Size), bVar13)) {
    UE::FXRenderingUtils::DistanceFields::SetupObjectBufferParameters
              (param_1->GraphBuilder,local_230,pFVar26);
    UE::FXRenderingUtils::DistanceFields::SetupAtlasParameters(param_1->GraphBuilder,puVar2,pFVar26)
    ;
  }
  fVar27 = (pFVar16->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.X;
  fVar38 = (pFVar16->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Y;
  fVar36 = (pFVar16->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.X;
  fVar35 = (pFVar16->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Y;
  fVar30 = fVar27 - fVar36;
  fVar29 = (pFVar16->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  fVar28 = fVar38 - fVar35;
  fVar34 = (pFVar16->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  fVar36 = fVar36 + fVar27;
  local_e0 = 1;
  fVar27 = fVar29 - fVar34;
  fVar34 = fVar34 + fVar29;
  fVar35 = fVar35 + fVar38;
  fVar37 = (fVar36 - fVar30) * ___xmm_3f0000003f0000003f0000003f000000;
  fVar38 = (fVar35 - fVar28) * _UNK_150689624;
  fVar39 = (fVar34 - fVar27) * _UNK_150689628;
  fVar29 = (fVar36 + fVar30) * ___xmm_3f0000003f0000003f0000003f000000;
  fVar35 = (fVar35 + fVar28) * _UNK_150689624;
  fVar34 = (fVar34 + fVar27) * _UNK_150689628;
  fVar31 = (float)((uint)(fVar38 * (pFVar16->Transform).M[1][0]) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar32 = (float)((uint)(fVar38 * (pFVar16->Transform).M[1][1]) & _UNK_15061cc74);
  fVar33 = (float)((uint)(fVar38 * (pFVar16->Transform).M[1][2]) & _UNK_15061cc78);
  fVar27 = (float)((uint)(fVar37 * (pFVar16->Transform).M[0][0]) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar38 = (float)((uint)(fVar37 * (pFVar16->Transform).M[0][1]) & _UNK_15061cc74);
  fVar36 = (float)((uint)(fVar37 * (pFVar16->Transform).M[0][2]) & _UNK_15061cc78);
  fVar28 = fVar35 * (pFVar16->Transform).M[1][0] + fVar29 * (pFVar16->Transform).M[0][0] +
           fVar34 * (pFVar16->Transform).M[2][0] + (pFVar16->Transform).M[3][0];
  fVar30 = fVar35 * (pFVar16->Transform).M[1][1] + fVar29 * (pFVar16->Transform).M[0][1] +
           fVar34 * (pFVar16->Transform).M[2][1] + (pFVar16->Transform).M[3][1];
  fVar35 = fVar35 * (pFVar16->Transform).M[1][2] + fVar29 * (pFVar16->Transform).M[0][2] +
           fVar34 * (pFVar16->Transform).M[2][2] + (pFVar16->Transform).M[3][2];
  fStack_20c = (float)((uint)(fVar39 * (pFVar16->Transform).M[2][0]) &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
  fStack_e8 = (float)((uint)(fVar39 * (pFVar16->Transform).M[2][1]) & _UNK_15061cc74);
  fVar29 = (float)((uint)(fVar39 * (pFVar16->Transform).M[2][2]) & _UNK_15061cc78);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x1d0) =
       *(undefined8 *)&(pFVar16->PreSkinnedLocalBoundsCenter).field0_0x0;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x1d8) =
       (pFVar16->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  fStack_20c = fVar31 + fVar27 + fStack_20c;
  fStack_e8 = fVar32 + fVar38 + fStack_e8;
  fVar29 = fVar33 + fVar36 + fVar29;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x1e0) =
       *(undefined8 *)&(pFVar16->PreSkinnedLocalBoundsExtents).field0_0x0;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x1e8) =
       (pFVar16->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  fVar27 = __real_3f000000;
  local_218 = fVar28 - fStack_20c;
  fStack_214 = fVar30 - fStack_e8;
  local_f8 = CONCAT44(fStack_214,local_218);
  fStack_210 = fVar35 - fVar29;
  fStack_20c = fStack_20c + fVar28;
  fStack_e8 = fStack_e8 + fVar30;
  fVar29 = fVar29 + fVar35;
  local_208 = CONCAT44(fVar29,fStack_e8);
  fVar38 = (fStack_214 + fStack_e8) * __real_3f000000;
  fVar36 = (fVar29 + fStack_210) * __real_3f000000;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x1f0) = (local_218 + fStack_20c) * __real_3f000000;
  *(float *)(puVar6 + (ulonglong)uVar24 + 500) = fVar38;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x1f8) = fVar36;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x200) = (fStack_20c - local_218) * fVar27;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x204) = (fStack_e8 - fStack_214) * fVar27;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x208) = (fVar29 - fStack_210) * fVar27;
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 0x210) =
       *(undefined8 *)&(pFVar16->OwnerToMeshVector).field0_0x0;
  *(float *)(puVar6 + (ulonglong)uVar24 + 0x218) = (pFVar16->OwnerToMeshVector).field0_0x0._s_0.Z;
  fStack_ec = fStack_20c;
  if (pFVar16->UvMappingBuffer == (FMeshUvMappingBufferProxy *)0x0) {
    pFVar19 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x220) = pFVar19;
    puVar6 = puVar6 + (ulonglong)uVar24 + 0x228;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
  }
  else {
    pFVar19 = (pFVar16->UvMappingBuffer->UvMappingSrv).Reference;
    if (pFVar19 == (FRHIShaderResourceView *)0x0) {
      puVar2 = puVar6 + (ulonglong)uVar24 + 0x220;
      puVar2[0] = '\0';
      puVar2[1] = '\0';
      puVar2[2] = '\0';
      puVar2[3] = '\0';
      puVar2[4] = '\0';
      puVar2[5] = '\0';
      puVar2[6] = '\0';
      puVar2[7] = '\0';
    }
    else {
      FRHIResource::AddRef((FRHIResource *)pFVar19);
      *(FRHIShaderResourceView **)(puVar6 + (ulonglong)uVar24 + 0x220) = pFVar19;
      FRHIResource::Release((FRHIResource *)pFVar19);
    }
    pFVar8 = (pFVar16->UvMappingBuffer->UvMappingBuffer).Reference;
    if (pFVar8 != (FRHIBuffer *)0x0) {
      uVar25 = (pFVar8->Desc).Size;
    }
    *(uint *)(puVar6 + (ulonglong)uVar24 + 0x228) = uVar25;
    *(uint *)(puVar6 + (ulonglong)uVar24 + 0x22c) = pFVar16->UvMappingSet;
  }
  return;
}

// SetSourceComponentFromBlueprints @ 148fcda40

void __thiscall
UNiagaraDataInterfaceStaticMesh::SetSourceComponentFromBlueprints
          (UNiagaraDataInterfaceStaticMesh *this,UStaticMeshComponent *param_1)

{
  UStaticMeshComponent *local_res8;
  
  this->ChangeId = this->ChangeId + 1;
  UnbindSourceDelegates(this);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (UStaticMeshComponent *)0x0)) {
    FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_res8);
    if (param_1 == (UStaticMeshComponent *)0x0) {
      local_res8 = (UStaticMeshComponent *)0x0;
    }
    else {
      local_res8 = (UStaticMeshComponent *)param_1->_padding_;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_res8);
    local_res8 = (UStaticMeshComponent *)param_1->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FSoftObjectPtr::operator=(&(this->SoftSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  BindSourceDelegates(this);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceStaticMesh @ 148fcdd10

void __cdecl
UNiagaraDataInterfaceStaticMesh::StaticRegisterNativesUNiagaraDataInterfaceStaticMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindSourceDelegates @ 148fcfb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceStaticMesh::UnbindSourceDelegates(UNiagaraDataInterfaceStaticMesh *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FActorEndPlaySignature FVar4;
  AActor *this_00;
  
  this_00 = TSoftObjectPtr<AActor>::Get(&this->SoftSourceActor);
  if ((this_00 != (AActor *)0x0) && (this_00->OnEndPlay != (FActorEndPlaySignature)0x0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnEndPlay");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this_00,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar4 = (FActorEndPlaySignature)
            FSparseDelegateStorage::RemoveAll((UObject *)this_00,FVar2,(UObject *)this);
    this_00->OnEndPlay = FVar4;
  }
  return;
}

// VMBuildUvMapping @ 148fd2220

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMBuildUvMapping
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  float *pfVar7;
  ulonglong uVar8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  float *local_28;
  float *local_20;
  int local_18 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  local_18[0] = 0;
  local_20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  iVar5 = local_18[0];
  local_20 = local_20 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = param_1->NumInstances;
  if (0 < iVar1) {
    pfVar7 = local_20 + local_18[0];
    fVar2 = *local_20;
    if (1 < iVar1) {
      uVar8 = (ulonglong)(iVar1 - 1);
      do {
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + iVar5;
        if ((fVar3 != fVar2) &&
           (local_28 = pfVar7,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("InUvSet.GetAndAdvance() == UvMappingIndexSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceStaticMesh.cpp"
                              ,0x141f,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (local_38.Ptr)->UvMappingIndexSet = (int)fVar2;
  }
  return;
}

// VMGetFilteredSectionAt @ 148fd2de0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSectionAt
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  FStaticMeshLODResources *pFVar8;
  FStaticMeshLODResources *pFVar9;
  bool bVar10;
  uint uVar11;
  FStaticMeshLODResources *pFVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  FStaticMeshLODResources *pFVar16;
  int iVar17;
  int local_70 [2];
  float *local_68;
  float *local_60;
  int local_58 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_50;
  FStaticMeshLODResources *local_40;
  FColorVertexBuffer *local_38 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_50,param_1);
  iVar17 = 0;
  local_40 = (FStaticMeshLODResources *)0x0;
  pFVar12 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_50.Ptr,local_38);
  pFVar8 = local_40;
  pFVar16 = local_40;
  pFVar9 = local_40;
  if (local_40 != pFVar12) {
    if (pFVar12 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    pFVar16 = pFVar12;
    pFVar9 = pFVar12;
    if (local_40 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_40->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_40->_padding_;
        local_40 = pFVar12;
        (**(code **)*plVar1)(pFVar8,1);
        pFVar9 = local_40;
      }
    }
  }
  local_40 = pFVar9;
  local_58[0] = 0;
  local_68 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  local_70[0] = 0;
  local_68 = local_68 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = local_68;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar7 = local_70[0];
  pfVar13 = pfVar13 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  iVar3 = (local_50.Ptr)->NumFilteredSections;
  pFVar4 = ((local_50.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar3 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar17 = iVar17 + 1;
        *pfVar13 = 0.0;
        pfVar13 = pfVar13 + iVar7;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      pfVar2 = local_68 + local_58[0];
      fVar14 = (float)(iVar3 + -1);
      if ((int)*local_68 < iVar3 + -1) {
        fVar14 = *local_68;
      }
      fVar15 = 0.0;
      if (0 < (int)fVar14) {
        fVar15 = fVar14;
      }
      uVar11 = 0;
      if ((int)fVar15 < iVar3) {
        uVar11 = ~(uint)fVar15 >> 0x1f;
      }
      local_68 = pfVar2;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = iVar17 + 1;
      *pfVar13 = *(float *)(pFVar4 + (longlong)(int)fVar15 * 4);
      pfVar13 = pfVar13 + iVar7;
      pFVar16 = local_40;
    } while (iVar17 < param_1->NumInstances);
  }
  if (pFVar16 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar16->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
  }
  return;
}

// VMGetFilteredSectionCount @ 148fd3030

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSectionCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  FStaticMeshLODResources *pFVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar6 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar7 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar7 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar2 = (float)(local_38.Ptr)->NumFilteredSections;
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar2;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  if (pFVar7 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar7->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return;
}

// VMGetFilteredSocket @ 148fd3140

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSocket
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int local_60 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_58;
  float *local_48;
  float *local_40;
  int local_38 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_58,param_1);
  local_38[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar4 = local_38[0];
  local_60[0] = 0;
  pfVar7 = pfVar7 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_40 = pfVar7;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar3 = local_60[0];
  iVar11 = 0;
  fVar12 = (float)((local_58.Ptr)->NumFilteredSockets + -1);
  pfVar8 = pfVar8 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar9 = fVar12;
      if ((int)*pfVar7 < (int)fVar12) {
        fVar9 = *pfVar7;
      }
      fVar10 = 0.0;
      if (0 < (int)fVar9) {
        fVar10 = fVar9;
      }
      if ((int)fVar12 < 0) {
        fVar9 = -NAN;
      }
      else {
        pTVar1 = &(local_58.Ptr)->FilteredAndUnfilteredSockets;
        uVar6 = 0;
        if ((int)fVar10 < ((local_58.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar6 = ~(uint)fVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (local_48 = pfVar7 + iVar4,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar9 = (float)(uint)*(ushort *)
                              ((pTVar1->AllocatorInstance).Data + (longlong)(int)fVar10 * 2);
      }
      *pfVar8 = fVar9;
      iVar11 = iVar11 + 1;
      pfVar8 = pfVar8 + iVar3;
      pfVar7 = pfVar7 + iVar4;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// VMGetFilteredSocketCount @ 148fd32d0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredSocketCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->NumFilteredSockets;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetFilteredTriangleAt @ 148fd3350

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredTriangleAt
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  FStaticMeshLODResources *pFVar11;
  bool bVar12;
  FStaticMeshLODResources *pFVar13;
  float *pfVar14;
  float *pfVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  FStaticMeshLODResources *pFVar21;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_60;
  FStaticMeshLODResources *local_50;
  FColorVertexBuffer *local_48 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_60,param_1);
  iVar18 = 0;
  local_50 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_60.Ptr,local_48);
  pFVar10 = local_50;
  pFVar21 = local_50;
  pFVar11 = local_50;
  if (local_50 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar21 = pFVar13;
    pFVar11 = pFVar13;
    if (local_50 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_50->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_50->_padding_;
        local_50 = pFVar13;
        (**(code **)*plVar1)(pFVar10,1);
        pFVar11 = local_50;
      }
    }
  }
  local_50 = pFVar11;
  local_68[0] = 0;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar9 = local_68[0];
  local_80[0] = 0;
  pfVar14 = pfVar14 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar14;
  local_70 = pfVar14;
  pfVar15 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar8 = local_80[0];
  pfVar15 = pfVar15 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  if ((pFVar21 == (FStaticMeshLODResources *)0x0) ||
     (fVar20 = (float)((local_60.Ptr)->NumFilteredTriangles + -1), (int)fVar20 < 1)) {
    if (0 < param_1->NumInstances) {
      do {
        iVar18 = iVar18 + 1;
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + local_80[0];
      } while (iVar18 < param_1->NumInstances);
    }
  }
  else {
    iVar18 = (local_60.Ptr)->NumFilteredSections;
    pFVar3 = ((local_60.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar19 = 0;
    if (0 < param_1->NumInstances) {
      do {
        fVar17 = *pfVar14;
        pfVar14 = pfVar14 + iVar9;
        fVar5 = fVar20;
        if ((int)fVar17 < (int)fVar20) {
          fVar5 = fVar17;
        }
        fVar17 = 0.0;
        if (0 < (int)fVar5) {
          fVar17 = fVar5;
        }
        iVar6 = 0;
        for (pFVar16 = pFVar3; pFVar16 != pFVar3 + (longlong)iVar18 * 0x10; pFVar16 = pFVar16 + 0x10
            ) {
          pFVar2 = pFVar16 + 4;
          if ((iVar6 <= (int)fVar17) && ((int)fVar17 < *(int *)pFVar2 + iVar6)) {
            fVar17 = (float)((*(int *)pFVar16 - iVar6) + (int)fVar17);
            goto LAB_148fd3541;
          }
          iVar6 = *(int *)pFVar2 + iVar6;
        }
        fVar17 = 0.0;
LAB_148fd3541:
        iVar19 = iVar19 + 1;
        *pfVar15 = fVar17;
        pfVar15 = pfVar15 + iVar8;
        pFVar21 = local_50;
      } while (iVar19 < param_1->NumInstances);
    }
  }
  if (pFVar21 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar21->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  return;
}

// VMGetFilteredTriangleCount @ 148fd35f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetFilteredTriangleCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = (float)(local_38.Ptr)->NumFilteredTriangles;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// VMGetInstanceIndex @ 148fd3700

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetInstanceIndex
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->InstanceIndex;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetLocalToWorld @ 148fd3780

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetLocalToWorld
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  FNDIOutputParam<UE::Math::TMatrix<float>_> local_148;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_48 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(local_48,param_1);
  FNDIOutputParam<UE::Math::TMatrix<float>_>::FNDIOutputParam<UE::Math::TMatrix<float>_>
            (&local_148,param_1);
  local_1f8 = 0;
  if (0 < param_1->NumInstances) {
    local_178 = local_148.Out15.Register;
    local_180 = local_148.Out14.Register;
    local_188 = local_148.Out13.Register;
    local_190 = local_148.Out12.Register;
    local_198 = local_148.Out11.Register;
    local_1a0 = local_148.Out10.Register;
    local_1a8 = local_148.Out09.Register;
    local_1b0 = local_148.Out08.Register;
    local_1b8 = local_148.Out07.Register;
    local_1c0 = local_148.Out06.Register;
    local_1c8 = local_148.Out05.Register;
    local_1d0 = local_148.Out04.Register;
    local_1d8 = local_148.Out03.Register;
    local_1e0 = local_148.Out02.Register;
    local_1e8 = local_148.Out01.Register;
    local_1f0 = local_148.Out00.Register;
    do {
      dVar1 = ((local_48[0].Ptr)->Transform).M[0][2];
      dVar2 = ((local_48[0].Ptr)->Transform).M[0][3];
      dVar3 = ((local_48[0].Ptr)->Transform).M[0][1];
      dVar4 = ((local_48[0].Ptr)->Transform).M[1][2];
      dVar5 = ((local_48[0].Ptr)->Transform).M[1][3];
      dVar6 = ((local_48[0].Ptr)->Transform).M[1][0];
      dVar7 = ((local_48[0].Ptr)->Transform).M[1][1];
      dVar8 = ((local_48[0].Ptr)->Transform).M[2][0];
      dVar9 = ((local_48[0].Ptr)->Transform).M[2][1];
      dVar10 = ((local_48[0].Ptr)->Transform).M[2][2];
      dVar11 = ((local_48[0].Ptr)->Transform).M[2][3];
      dVar12 = ((local_48[0].Ptr)->Transform).M[3][0];
      dVar13 = ((local_48[0].Ptr)->Transform).M[3][1];
      dVar14 = ((local_48[0].Ptr)->Transform).M[3][2];
      dVar15 = ((local_48[0].Ptr)->Transform).M[3][3];
      *local_1f0 = (float)((local_48[0].Ptr)->Transform).M[0][0];
      *local_1e8 = (float)dVar3;
      local_1e8 = local_1e8 + local_148.Out01.AdvanceOffset;
      *local_1e0 = (float)dVar1;
      local_1e0 = local_1e0 + local_148.Out02.AdvanceOffset;
      *local_1d8 = (float)dVar2;
      local_1d8 = local_1d8 + local_148.Out03.AdvanceOffset;
      *local_1d0 = (float)dVar6;
      local_1d0 = local_1d0 + local_148.Out04.AdvanceOffset;
      *local_1c8 = (float)dVar7;
      local_1c8 = local_1c8 + local_148.Out05.AdvanceOffset;
      *local_1c0 = (float)dVar4;
      local_1c0 = local_1c0 + local_148.Out06.AdvanceOffset;
      *local_1b8 = (float)dVar5;
      local_1b8 = local_1b8 + local_148.Out07.AdvanceOffset;
      *local_1b0 = (float)dVar8;
      local_1b0 = local_1b0 + local_148.Out08.AdvanceOffset;
      *local_1a8 = (float)dVar9;
      local_1a8 = local_1a8 + local_148.Out09.AdvanceOffset;
      *local_1a0 = (float)dVar10;
      *local_198 = (float)dVar11;
      *local_190 = (float)dVar12;
      *local_188 = (float)dVar13;
      *local_180 = (float)dVar14;
      *local_178 = (float)dVar15;
      local_1f8 = local_1f8 + 1;
      local_1f0 = local_1f0 + local_148.Out00.AdvanceOffset;
      local_1a0 = local_1a0 + local_148.Out10.AdvanceOffset;
      local_198 = local_198 + local_148.Out11.AdvanceOffset;
      local_190 = local_190 + local_148.Out12.AdvanceOffset;
      local_188 = local_188 + local_148.Out13.AdvanceOffset;
      local_180 = local_180 + local_148.Out14.AdvanceOffset;
      local_178 = local_178 + local_148.Out15.AdvanceOffset;
    } while (local_1f8 < param_1->NumInstances);
  }
  return;
}

// VMGetLocalToWorldInverseTransposed @ 148fd3b40

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetLocalToWorldInverseTransposed
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int local_1f8;
  float *local_1f0;
  float *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  FNDIOutputParam<UE::Math::TMatrix<float>_> local_148;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_48 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(local_48,param_1);
  FNDIOutputParam<UE::Math::TMatrix<float>_>::FNDIOutputParam<UE::Math::TMatrix<float>_>
            (&local_148,param_1);
  local_1f8 = 0;
  if (0 < param_1->NumInstances) {
    local_178 = local_148.Out15.Register;
    local_180 = local_148.Out14.Register;
    local_188 = local_148.Out13.Register;
    local_190 = local_148.Out12.Register;
    local_198 = local_148.Out11.Register;
    local_1a0 = local_148.Out10.Register;
    local_1a8 = local_148.Out09.Register;
    local_1b0 = local_148.Out08.Register;
    local_1b8 = local_148.Out07.Register;
    local_1c0 = local_148.Out06.Register;
    local_1c8 = local_148.Out05.Register;
    local_1d0 = local_148.Out04.Register;
    local_1d8 = local_148.Out03.Register;
    local_1e0 = local_148.Out02.Register;
    local_1e8 = local_148.Out01.Register;
    local_1f0 = local_148.Out00.Register;
    do {
      dVar1 = ((local_48[0].Ptr)->TransformInverseTransposed).M[0][2];
      dVar2 = ((local_48[0].Ptr)->TransformInverseTransposed).M[0][3];
      dVar3 = ((local_48[0].Ptr)->TransformInverseTransposed).M[0][1];
      dVar4 = ((local_48[0].Ptr)->TransformInverseTransposed).M[1][2];
      dVar5 = ((local_48[0].Ptr)->TransformInverseTransposed).M[1][3];
      dVar6 = ((local_48[0].Ptr)->TransformInverseTransposed).M[1][0];
      dVar7 = ((local_48[0].Ptr)->TransformInverseTransposed).M[1][1];
      dVar8 = ((local_48[0].Ptr)->TransformInverseTransposed).M[2][0];
      dVar9 = ((local_48[0].Ptr)->TransformInverseTransposed).M[2][1];
      dVar10 = ((local_48[0].Ptr)->TransformInverseTransposed).M[2][2];
      dVar11 = ((local_48[0].Ptr)->TransformInverseTransposed).M[2][3];
      dVar12 = ((local_48[0].Ptr)->TransformInverseTransposed).M[3][0];
      dVar13 = ((local_48[0].Ptr)->TransformInverseTransposed).M[3][1];
      dVar14 = ((local_48[0].Ptr)->TransformInverseTransposed).M[3][2];
      dVar15 = ((local_48[0].Ptr)->TransformInverseTransposed).M[3][3];
      *local_1f0 = (float)((local_48[0].Ptr)->TransformInverseTransposed).M[0][0];
      *local_1e8 = (float)dVar3;
      local_1e8 = local_1e8 + local_148.Out01.AdvanceOffset;
      *local_1e0 = (float)dVar1;
      local_1e0 = local_1e0 + local_148.Out02.AdvanceOffset;
      *local_1d8 = (float)dVar2;
      local_1d8 = local_1d8 + local_148.Out03.AdvanceOffset;
      *local_1d0 = (float)dVar6;
      local_1d0 = local_1d0 + local_148.Out04.AdvanceOffset;
      *local_1c8 = (float)dVar7;
      local_1c8 = local_1c8 + local_148.Out05.AdvanceOffset;
      *local_1c0 = (float)dVar4;
      local_1c0 = local_1c0 + local_148.Out06.AdvanceOffset;
      *local_1b8 = (float)dVar5;
      local_1b8 = local_1b8 + local_148.Out07.AdvanceOffset;
      *local_1b0 = (float)dVar8;
      local_1b0 = local_1b0 + local_148.Out08.AdvanceOffset;
      *local_1a8 = (float)dVar9;
      local_1a8 = local_1a8 + local_148.Out09.AdvanceOffset;
      *local_1a0 = (float)dVar10;
      *local_198 = (float)dVar11;
      *local_190 = (float)dVar12;
      *local_188 = (float)dVar13;
      *local_180 = (float)dVar14;
      *local_178 = (float)dVar15;
      local_1f8 = local_1f8 + 1;
      local_1f0 = local_1f0 + local_148.Out00.AdvanceOffset;
      local_1a0 = local_1a0 + local_148.Out10.AdvanceOffset;
      local_198 = local_198 + local_148.Out11.AdvanceOffset;
      local_190 = local_190 + local_148.Out12.AdvanceOffset;
      local_188 = local_188 + local_148.Out13.AdvanceOffset;
      local_180 = local_180 + local_148.Out14.AdvanceOffset;
      local_178 = local_178 + local_148.Out15.AdvanceOffset;
    } while (local_1f8 < param_1->NumInstances);
  }
  return;
}

// VMGetPreSkinnedLocalBounds @ 148fd3f10

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetPreSkinnedLocalBounds
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  FStaticMeshLODResources *pFVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float local_288;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  float *local_238;
  float *local_230;
  float *local_228;
  FStaticMeshLODResources *local_218;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_1e8;
  FStaticMeshLODResources *local_1d8;
  FColorVertexBuffer *local_1d0 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_190;
  FNDIOutputParam<UE::Math::TVector<float>_> local_160;
  FNDIOutputParam<UE::Math::TVector<float>_> local_130;
  FNDIOutputParam<UE::Math::TVector<float>_> local_100 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_1e8,param_1);
  iVar9 = 0;
  local_1d8 = (FStaticMeshLODResources *)0x0;
  pFVar8 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_1e8.Ptr,local_1d0);
  local_218 = local_1d8;
  if (local_1d8 != pFVar8) {
    if (pFVar8 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      UNLOCK();
    }
    local_218 = pFVar8;
    if (local_1d8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_1d8->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_1d8->_padding_)(local_1d8,1);
      }
    }
  }
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_190,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_160,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_130,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (local_100,param_1);
  uVar4 = *(undefined8 *)&((local_1e8.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0;
  fVar10 = (float)((ulonglong)uVar4 >> 0x20);
  fVar2 = ((local_1e8.Ptr)->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  uVar5 = *(undefined8 *)&((local_1e8.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0;
  fVar11 = (float)((ulonglong)uVar5 >> 0x20);
  local_288 = (float)uVar4;
  fVar7 = local_288;
  local_288 = (float)uVar5;
  fVar13 = fVar10 * __real_40000000;
  fVar12 = fVar2 * __real_40000000;
  fVar14 = fVar7 * __real_40000000;
  fVar3 = ((local_1e8.Ptr)->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    local_270 = local_190.Z.Register;
    local_278 = local_190.Y.Register;
    local_res20 = local_190.X.Register;
    local_258 = local_160.Z.Register;
    local_260 = local_160.Y.Register;
    local_268 = local_160.X.Register;
    local_240 = local_130.Z.Register;
    local_248 = local_130.Y.Register;
    local_250 = local_130.X.Register;
    local_228 = local_100[0].Z.Register;
    local_res18 = local_1c0.Z.Register;
    local_230 = local_100[0].Y.Register;
    local_res10 = local_1c0.Y.Register;
    local_238 = local_100[0].X.Register;
    do {
      *local_1c0.X.Register = local_288;
      local_1c0.X.Register = local_1c0.X.Register + local_1c0.X.AdvanceOffset;
      iVar9 = iVar9 + 1;
      *local_res10 = fVar11;
      local_res10 = local_res10 + local_1c0.Y.AdvanceOffset;
      *local_res18 = fVar3;
      local_res18 = local_res18 + local_1c0.Z.AdvanceOffset;
      *local_res20 = local_288 - fVar7;
      local_res20 = local_res20 + local_190.X.AdvanceOffset;
      *local_278 = fVar11 - fVar10;
      local_278 = local_278 + local_190.Y.AdvanceOffset;
      *local_270 = fVar3 - fVar2;
      local_270 = local_270 + local_190.Z.AdvanceOffset;
      *local_268 = local_288 + fVar7;
      local_268 = local_268 + local_160.X.AdvanceOffset;
      *local_260 = fVar11 + fVar10;
      local_260 = local_260 + local_160.Y.AdvanceOffset;
      *local_258 = fVar3 + fVar2;
      local_258 = local_258 + local_160.Z.AdvanceOffset;
      *local_250 = fVar14;
      *local_248 = fVar13;
      *local_240 = fVar12;
      *local_238 = fVar7;
      *local_230 = fVar10;
      *local_228 = fVar2;
      local_250 = local_250 + local_130.X.AdvanceOffset;
      local_248 = local_248 + local_130.Y.AdvanceOffset;
      local_240 = local_240 + local_130.Z.AdvanceOffset;
      local_238 = local_238 + local_100[0].X.AdvanceOffset;
      local_230 = local_230 + local_100[0].Y.AdvanceOffset;
      local_228 = local_228 + local_100[0].Z.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  if (local_218 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_218->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_218->_padding_)(local_218,1);
    }
  }
  return;
}

// VMGetSectionCount @ 148fd43f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSectionCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = *(float *)&(pFVar6->Sections).field_0x28;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// VMGetSectionTriangleAt @ 148fd4500

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSectionTriangleAt
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  FStaticMeshSectionArray *pFVar4;
  code *pcVar5;
  longlong lVar6;
  FStaticMeshLODResources *pFVar7;
  FStaticMeshLODResources *pFVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  FStaticMeshLODResources *pFVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  FStaticMeshLODResources *pFVar16;
  FStaticMeshSectionArray *pFVar17;
  float fVar18;
  int local_res10;
  int local_res18;
  int local_a0 [2];
  float *local_98;
  float *local_90;
  int local_88 [2];
  float *local_80;
  float *local_78;
  int local_70 [2];
  longlong local_68;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_60;
  FStaticMeshLODResources *local_50;
  FColorVertexBuffer *local_48 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_60,param_1);
  iVar14 = 0;
  local_50 = (FStaticMeshLODResources *)0x0;
  pFVar12 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_60.Ptr,local_48);
  pFVar7 = local_50;
  pFVar16 = local_50;
  pFVar8 = local_50;
  if (local_50 != pFVar12) {
    if (pFVar12 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    pFVar16 = pFVar12;
    pFVar8 = pFVar12;
    if (local_50 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_50->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_50->_padding_;
        local_50 = pFVar12;
        (**(code **)*plVar1)(pFVar7,1);
        pFVar8 = local_50;
      }
    }
  }
  local_50 = pFVar8;
  local_88[0] = 0;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_70[0] = 0;
  local_98 = local_98 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = local_98;
  local_80 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  local_a0[0] = 0;
  local_80 = local_80 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = local_80;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  pfVar13 = pfVar13 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  if (pFVar16 == (FStaticMeshLODResources *)0x0) {
    local_res18 = 0;
  }
  else {
    local_res18 = *(int *)&(pFVar16->Sections).field_0x28;
    if (local_res18 < 0) {
      if (0 < param_1->NumInstances) {
        do {
          iVar14 = iVar14 + 1;
          *pfVar13 = 0.0;
          pfVar13 = pfVar13 + local_a0[0];
        } while (iVar14 < param_1->NumInstances);
      }
      goto LAB_148fd47d3;
    }
  }
  local_res10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar11 = *local_98;
      local_98 = local_98 + local_88[0];
      pfVar2 = local_80 + local_70[0];
      fVar3 = *local_80;
      fVar18 = 0.0;
      local_80 = pfVar2;
      if (((int)fVar11 < 0) || (local_res18 <= (int)fVar11)) {
        uVar15 = 0;
      }
      else {
        if ((int)fVar11 < *(int *)&(pFVar16->Sections).field_0x28) {
          fVar18 = (float)(~(uint)fVar11 >> 0x1f);
        }
        if ((fVar18 == 0.0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = *(FStaticMeshSectionArray **)&(pFVar16->Sections).field_0x20;
        pFVar17 = &pFVar16->Sections;
        if (pFVar4 != (FStaticMeshSectionArray *)0x0) {
          pFVar17 = pFVar4;
        }
        local_68 = (longlong)(int)fVar11 * 0x1c;
        fVar18 = (float)(*(int *)(&pFVar17->field_0x8 + local_68) + -1);
        fVar10 = 0.0;
        if ((int)fVar11 < *(int *)&(pFVar16->Sections).field_0x28) {
          fVar10 = (float)(~(uint)fVar11 >> 0x1f);
        }
        if ((fVar10 == 0.0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = *(FStaticMeshSectionArray **)&(pFVar16->Sections).field_0x20;
        pFVar17 = &pFVar16->Sections;
        if (pFVar4 != (FStaticMeshSectionArray *)0x0) {
          pFVar17 = pFVar4;
        }
        uVar15 = *(uint *)(&pFVar17->field_0x4 + local_68) / 3;
      }
      if ((int)fVar3 < (int)fVar18) {
        fVar18 = fVar3;
      }
      fVar11 = 0.0;
      if (0 < (int)fVar18) {
        fVar11 = fVar18;
      }
      local_res10 = local_res10 + 1;
      *pfVar13 = (float)((int)fVar11 + uVar15);
      pfVar13 = pfVar13 + local_a0[0];
    } while (local_res10 < param_1->NumInstances);
  }
LAB_148fd47d3:
  if (pFVar16 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar16->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
  }
  return;
}

// VMGetSectionTriangleCount @ 148fd4820

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSectionTriangleCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  FStaticMeshSectionArray *pFVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  FStaticMeshLODResources *pFVar5;
  FStaticMeshLODResources *pFVar6;
  bool bVar7;
  uint uVar8;
  FStaticMeshLODResources *pFVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  FStaticMeshLODResources *pFVar15;
  longlong *plVar16;
  FStaticMeshSectionArray *pFVar17;
  int iVar18;
  int local_70 [2];
  float *local_68;
  float *local_60;
  int local_58 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_50;
  FStaticMeshLODResources *local_40;
  FColorVertexBuffer *local_38 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_50,param_1);
  local_40 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_50.Ptr,local_38);
  pFVar5 = local_40;
  pFVar15 = local_40;
  pFVar6 = local_40;
  if (local_40 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar15 = pFVar9;
    pFVar6 = pFVar9;
    if (local_40 != (FStaticMeshLODResources *)0x0) {
      plVar16 = &local_40->_padding_;
      LOCK();
      lVar3 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar16 != (longlong *)0x0)) {
        plVar16 = &local_40->_padding_;
        local_40 = pFVar9;
        (**(code **)*plVar16)(pFVar5,1);
        pFVar6 = local_40;
      }
    }
  }
  local_40 = pFVar6;
  local_58[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar14 = local_58[0];
  local_70[0] = 0;
  pfVar10 = pfVar10 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = pfVar10;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar4 = local_70[0];
  pfVar11 = pfVar11 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (pFVar15 == (FStaticMeshLODResources *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)&(pFVar15->Sections).field_0x28;
  }
  iVar18 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar13 = *pfVar10;
      pfVar10 = pfVar10 + iVar14;
      local_68 = pfVar10;
      if (((int)fVar13 < 0) || (iVar12 <= (int)fVar13)) {
        fVar13 = 0.0;
      }
      else {
        uVar8 = 0;
        if ((int)fVar13 < *(int *)&(pFVar15->Sections).field_0x28) {
          uVar8 = ~(uint)fVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FStaticMeshSectionArray **)&(pFVar15->Sections).field_0x20;
        pFVar17 = &pFVar15->Sections;
        if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
          pFVar17 = pFVar1;
        }
        fVar13 = *(float *)(&pFVar17->field_0x8 + (longlong)(int)fVar13 * 0x1c);
      }
      *pfVar11 = fVar13;
      iVar18 = iVar18 + 1;
      pfVar11 = pfVar11 + iVar4;
      iVar14 = local_58[0];
    } while (iVar18 < param_1->NumInstances);
  }
  if (pFVar15 != (FStaticMeshLODResources *)0x0) {
    plVar16 = &pFVar15->_padding_;
    LOCK();
    lVar3 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((((int)lVar3 == 1) && (plVar16 != (longlong *)0x0)) &&
       (pFVar15 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)pFVar15->_padding_)(pFVar15,1);
    }
  }
  return;
}

// VMGetSocketCount @ 148fd4a40

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetSocketCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)((local_18.Ptr)->CachedSockets).ArrayNum;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetTriangleColor @ 148fd4ac0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleColor
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float *pfVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  FStaticMeshLODResources *pFVar19;
  float *pfVar20;
  FIndexArrayView *pFVar21;
  int iVar22;
  float fVar23;
  FStaticMeshLODResources *pFVar24;
  float fVar25;
  ulonglong uVar26;
  float fVar27;
  ulonglong uVar28;
  uchar *puVar29;
  float fVar30;
  longlong lVar31;
  int iVar32;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_1c8;
  float *local_1c0;
  FIndexArrayView local_1b8;
  float *local_1a8;
  undefined8 uStack_1a0;
  FNDIOutputParam<FLinearColor> local_198;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  float *local_120;
  float *local_118;
  FIndexArrayView local_110;
  int local_100 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f8;
  FStaticMeshLODResources *local_e8;
  FColorVertexBuffer *local_e0 [3];
  FNDIInputParam<UE::Math::TVector<float>_> local_c8;
  FIndexArrayView local_78 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f8,param_1);
  iVar32 = 0;
  local_e8 = (FStaticMeshLODResources *)0x0;
  pFVar19 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_f8.Ptr,local_e0);
  pFVar24 = local_e8;
  if (local_e8 != pFVar19) {
    if (pFVar19 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
      UNLOCK();
    }
    pFVar24 = pFVar19;
    if (local_e8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_e8->_padding_;
      LOCK();
      lVar31 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar31 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_e8->_padding_)(local_e8,1);
      }
    }
  }
  local_100[0] = 0;
  pfVar20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_100);
  lVar31 = (longlong)local_100[0];
  iVar22 = local_100[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_c8,param_1);
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_198,param_1);
  if (pFVar24 == (FStaticMeshLODResources *)0x0) {
    local_1b8.UntypedIndexData = (void *)0x0;
    pFVar21 = &local_1b8;
    local_1b8.NumIndices = 0;
    local_1b8.b32Bit = false;
  }
  else {
    pFVar21 = FRawStaticIndexBuffer::GetArrayView(&pFVar24->IndexBuffer,local_78);
  }
  local_1a8 = pFVar21->UntypedIndexData;
  uStack_1a0._0_4_ = pFVar21->NumIndices;
  uStack_1a0._4_1_ = pFVar21->b32Bit;
  uStack_1a0._5_3_ = *(undefined3 *)&pFVar21->field_0xd;
  if (pFVar24 != (FStaticMeshLODResources *)0x0) {
    pFVar21 = FRawStaticIndexBuffer::GetArrayView(&pFVar24->IndexBuffer,&local_110);
    fVar30 = (float)(pFVar21->NumIndices / 3 + -1);
    if (-1 < (int)fVar30) {
      if (local_e0[0] == (FColorVertexBuffer *)0x0) {
        if (((pFVar24 != (FStaticMeshLODResources *)0x0) &&
            ((pFVar24->VertexBuffers).ColorVertexBuffer.Data != (uchar *)0x0)) &&
           (bVar16 = FColorVertexBuffer::GetAllowCPUAccess
                               (&(pFVar24->VertexBuffers).ColorVertexBuffer), bVar16)) {
          uVar17 = (pFVar24->VertexBuffers).ColorVertexBuffer.NumVertices;
          goto LAB_148fd4c49;
        }
      }
      else {
        bVar16 = FColorVertexBuffer::GetAllowCPUAccess(local_e0[0]);
        if (bVar16) {
          uVar17 = local_e0[0]->NumVertices;
LAB_148fd4c49:
          fVar14 = __real_3b808081;
          if (0 < (int)uVar17) {
            pfVar15 = local_1a8;
            if (0 < param_1->NumInstances) {
              local_158 = (longlong)local_c8.Z.AdvanceOffset * 4;
              local_150 = (longlong)local_c8.Y.AdvanceOffset * 4;
              local_148 = (longlong)local_c8.X.AdvanceOffset * 4;
              local_140 = (longlong)local_198.R.AdvanceOffset * 4;
              local_138 = (longlong)local_198.G.AdvanceOffset * 4;
              local_130 = (longlong)local_198.B.AdvanceOffset * 4;
              local_1b8.UntypedIndexData = (void *)(lVar31 * 4);
              local_128 = (longlong)local_198.A.AdvanceOffset * 4;
              local_1c0 = local_198.A.Register;
              local_1c8 = local_198.B.Register;
              local_res20 = local_198.G.Register;
              local_res18 = local_198.R.Register;
              local_res10 = pfVar20 + iVar22;
              do {
                fVar2 = *local_c8.Z.InputPtr;
                fVar3 = *local_c8.Y.InputPtr;
                fVar4 = *local_c8.X.InputPtr;
                fVar27 = fVar30;
                if ((int)*local_res10 < (int)fVar30) {
                  fVar27 = *local_res10;
                }
                local_c8.Z.InputPtr = local_c8.Z.InputPtr + local_c8.Z.AdvanceOffset;
                local_c8.Y.InputPtr = local_c8.Y.InputPtr + local_c8.Y.AdvanceOffset;
                local_c8.X.InputPtr = local_c8.X.InputPtr + local_c8.X.AdvanceOffset;
                fVar25 = 0.0;
                if (0 < (int)fVar27) {
                  fVar25 = fVar27;
                }
                lVar31 = (longlong)((int)fVar25 * 3);
                if (uStack_1a0._4_1_ == '\0') {
                  fVar27 = (float)(uint)*(ushort *)((longlong)local_1a8 + lVar31 * 2 + 4);
                  fVar25 = (float)(uint)*(ushort *)((longlong)local_1a8 + lVar31 * 2 + 2);
                  fVar23 = (float)(uint)*(ushort *)((longlong)local_1a8 + lVar31 * 2);
                }
                else {
                  fVar27 = local_1a8[lVar31 + 2];
                  fVar25 = local_1a8[lVar31 + 1];
                  fVar23 = local_1a8[lVar31];
                }
                if (local_e0[0] == (FColorVertexBuffer *)0x0) {
                  puVar29 = (pFVar24->VertexBuffers).ColorVertexBuffer.Data;
                  uVar17 = (pFVar24->VertexBuffers).ColorVertexBuffer.Stride;
                }
                else {
                  puVar29 = local_e0[0]->Data;
                  uVar17 = local_e0[0]->Stride;
                }
                uVar26 = (ulonglong)((int)fVar25 * uVar17);
                uVar18 = uVar17 * (int)fVar23;
                iVar32 = iVar32 + 1;
                uVar28 = (ulonglong)((int)fVar27 * uVar17);
                fVar27 = FLinearColor::sRGBToLinearTable[puVar29[(ulonglong)uVar18 + 1]];
                fVar25 = FLinearColor::sRGBToLinearTable[puVar29[uVar26 + 1]];
                fVar23 = FLinearColor::sRGBToLinearTable[puVar29[uVar28 + 1]];
                fVar5 = FLinearColor::sRGBToLinearTable[puVar29[uVar26]];
                fVar6 = FLinearColor::sRGBToLinearTable[puVar29[uVar18]];
                fVar7 = FLinearColor::sRGBToLinearTable[puVar29[uVar28]];
                bVar8 = puVar29[(ulonglong)uVar18 + 3];
                bVar9 = puVar29[uVar26 + 3];
                bVar10 = puVar29[uVar28 + 3];
                *local_res18 = fVar4 * FLinearColor::sRGBToLinearTable
                                       [puVar29[(ulonglong)uVar18 + 2]] +
                               fVar3 * FLinearColor::sRGBToLinearTable[puVar29[uVar26 + 2]] +
                               fVar2 * FLinearColor::sRGBToLinearTable[puVar29[uVar28 + 2]];
                *local_res20 = fVar4 * fVar27 + fVar3 * fVar25 + fVar2 * fVar23;
                *local_1c8 = fVar3 * fVar5 + fVar4 * fVar6 + fVar2 * fVar7;
                *local_1c0 = (float)bVar8 * fVar14 * fVar4 + (float)bVar9 * fVar14 * fVar3 +
                             (float)bVar10 * fVar14 * fVar2;
                local_res10 = (float *)((longlong)local_1b8.UntypedIndexData + (longlong)local_res10
                                       );
                local_res18 = local_res18 + local_198.R.AdvanceOffset;
                local_res20 = local_res20 + local_198.G.AdvanceOffset;
                local_1c8 = local_1c8 + local_198.B.AdvanceOffset;
                local_1c0 = local_1c0 + local_198.A.AdvanceOffset;
                pfVar15 = local_c8.X.InputPtr;
                local_120 = local_c8.Z.InputPtr;
                local_118 = local_c8.Y.InputPtr;
              } while (iVar32 < param_1->NumInstances);
            }
            goto LAB_148fd4ff8;
          }
        }
      }
    }
  }
  pfVar15 = local_1a8;
  if (0 < param_1->NumInstances) {
    do {
      uVar13 = FLinearColor::White.field0_0x0._s_0.A;
      uVar12 = FLinearColor::White.field0_0x0._s_0.B;
      uVar11 = FLinearColor::White.field0_0x0._s_0.G;
      iVar32 = iVar32 + 1;
      *local_198.R.Register = FLinearColor::White.field0_0x0._s_0.R;
      *local_198.G.Register = (float)uVar11;
      *local_198.B.Register = (float)uVar12;
      *local_198.A.Register = (float)uVar13;
      local_198.A.Register = local_198.A.Register + local_198.A.AdvanceOffset;
      local_198.B.Register = local_198.B.Register + local_198.B.AdvanceOffset;
      local_198.G.Register = local_198.G.Register + local_198.G.AdvanceOffset;
      local_198.R.Register = local_198.R.Register + local_198.R.AdvanceOffset;
    } while (iVar32 < param_1->NumInstances);
  }
LAB_148fd4ff8:
  local_1a8 = pfVar15;
  if (pFVar24 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar24->_padding_;
    LOCK();
    lVar31 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar31 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar24->_padding_)(pFVar24,1);
    }
  }
  return;
}

// VMGetTriangleCoordAtUV @ 148fd5060

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleCoordAtUV
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *local_res18;
  float *local_res20;
  int local_120 [2];
  undefined1 local_118 [24];
  float *local_100;
  TVector2<double>_u_0 local_f8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_e8;
  FStaticMeshUvMapping *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  float *local_70;
  int local_60 [6];
  int local_48 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_f8._s_0,param_1
            );
  iVar11 = 0;
  local_118._16_4_ = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_118)->_s_0).Z);
  lVar13 = (longlong)(int)local_118._16_4_;
  local_60[0] = 0;
  iVar8 = local_118._16_4_ * param_1->PerInstanceFnInstanceIdx;
  local_70 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  local_48[0] = 0;
  local_70 = local_70 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar15 = (longlong)local_48[0];
  local_118._16_4_ = 0;
  iVar9 = local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister
                        (param_1,(int *)&(((TVector<double>_u_0 *)local_118)->_s_0).Z);
  local_120[0] = 0;
  local_100 = local_100 + local_118._16_4_ * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  lVar17 = (longlong)local_120[0];
  iVar10 = local_120[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_e8,param_1);
  local_120[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_120);
  local_b8 = *(FStaticMeshUvMapping **)((longlong)local_f8._s_0.Y + 0x20);
  if (local_b8 == (FStaticMeshUvMapping *)0x0) {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      pfVar4 = pfVar7 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
      pfVar5 = pfVar6 + iVar10;
      do {
        iVar8 = iVar8 + 1;
        *pfVar5 = -NAN;
        uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        *local_e8.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        *local_e8.Y.Register = (float)uVar1;
        *local_e8.Z.Register = (float)uVar2;
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + local_120[0];
        pfVar5 = pfVar5 + lVar17;
        local_e8.Z.Register = local_e8.Z.Register + local_e8.Z.AdvanceOffset;
        local_e8.Y.Register = local_e8.Y.Register + local_e8.Y.AdvanceOffset;
        local_e8.X.Register = local_e8.X.Register + local_e8.X.AdvanceOffset;
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    local_a0 = lVar17 << 2;
    local_98 = (longlong)local_e8.X.AdvanceOffset << 2;
    local_90 = (longlong)local_e8.Y.AdvanceOffset << 2;
    local_88 = (longlong)local_e8.Z.AdvanceOffset << 2;
    local_78 = lVar13 << 2;
    lVar13 = (longlong)local_60[0] << 2;
    lVar17 = (longlong)(int)local_118._16_4_ << 2;
    local_80 = (longlong)local_120[0] << 2;
    pfVar7 = pfVar7 + local_120[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar6 = pfVar6 + iVar10;
    pfVar12 = local_70;
    pfVar14 = local_e8.Y.Register;
    pfVar16 = local_e8.X.Register;
    pfVar18 = local_e8.Z.Register;
    local_res18 = pfVar4 + iVar8;
    local_res20 = pfVar5 + iVar9;
    local_b0 = lVar13;
    local_a8 = lVar17;
    do {
      fVar21 = 0.0;
      fVar3 = *pfVar12;
      pfVar5 = (float *)(local_78 + (longlong)local_res18);
      pfVar12 = (float *)((longlong)pfVar12 + lVar13);
      local_f8._s_0.X = (double)fVar3;
      fVar3 = -NAN;
      fVar19 = 0.0;
      local_f8._s_0.Y = (double)*local_res20;
      fVar20 = 0.0;
      pfVar4 = (float *)((longlong)local_100 + lVar17);
      if (*local_res18 != 0.0) {
        fVar3 = *local_100;
        local_100 = (float *)((longlong)local_100 + lVar17);
        fVar3 = (float)FStaticMeshUvMapping::FindFirstTriangle
                                 (local_b8,(TVector2<double> *)&local_f8._s_0,fVar3,
                                  (TVector<double> *)&((TVector<double>_u_0 *)local_118)->_s_0);
        fVar19 = (float)(double)CONCAT44(local_118._20_4_,local_118._16_4_);
        fVar20 = (float)(double)local_118._8_8_;
        fVar21 = (float)(double)local_118._0_8_;
        lVar13 = local_b0;
        lVar17 = local_a8;
        pfVar4 = local_100;
      }
      local_100 = pfVar4;
      *pfVar6 = fVar3;
      *pfVar16 = fVar21;
      *pfVar14 = fVar20;
      *pfVar18 = fVar19;
      iVar11 = iVar11 + 1;
      *pfVar7 = (float)-(uint)(fVar3 != -NAN);
      pfVar7 = (float *)(local_80 + (longlong)pfVar7);
      pfVar6 = (float *)(local_a0 + (longlong)pfVar6);
      pfVar14 = (float *)(local_90 + (longlong)pfVar14);
      pfVar16 = (float *)(local_98 + (longlong)pfVar16);
      pfVar18 = (float *)(local_88 + (longlong)pfVar18);
      local_res18 = pfVar5;
      local_res20 = local_res20 + lVar15;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// VMGetTriangleCoordInAabb @ 148fd53f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleCoordInAabb
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  int local_140 [2];
  TVector2<double>_u_0 local_138;
  float *local_128;
  double local_120;
  undefined1 local_118;
  undefined7 uStack_117;
  int local_110;
  float *local_108;
  float *local_100;
  undefined1 local_f8 [40];
  int local_d0 [2];
  longlong local_c8;
  FStaticMeshUvMapping *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_80;
  float *local_70;
  int local_60 [6];
  int local_48 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_80,param_1);
  iVar12 = 0;
  local_f8._16_4_ = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<double>_u_0 *)local_f8)->_s_0).Z);
  lVar14 = (longlong)(int)local_f8._16_4_;
  local_60[0] = 0;
  iVar8 = local_f8._16_4_ * param_1->PerInstanceFnInstanceIdx;
  local_70 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  local_48[0] = 0;
  local_70 = local_70 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  lVar17 = (longlong)local_48[0];
  local_f8._16_4_ = 0;
  iVar9 = local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_f8._0_8_ =
       FVectorVMExternalFunctionContext::GetNextRegister
                 (param_1,(int *)&(((TVector<double>_u_0 *)local_f8)->_s_0).Z);
  local_d0[0] = 0;
  local_f8._0_8_ =
       local_f8._0_8_ + (longlong)(local_f8._16_4_ * param_1->PerInstanceFnInstanceIdx) * 4;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  local_140[0] = 0;
  local_108 = local_108 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  lVar19 = (longlong)local_140[0];
  iVar10 = local_140[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            ((FNDIOutputParam<UE::Math::TVector<float>_> *)&local_138._s_0,param_1);
  local_140[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  local_c0 = *(FStaticMeshUvMapping **)&((local_80.Ptr)->UvMapping).field_0x8;
  if (local_c0 == (FStaticMeshUvMapping *)0x0) {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      pfVar4 = pfVar7 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
      pfVar5 = pfVar6 + iVar10;
      pfVar6 = (float *)CONCAT71(uStack_117,local_118);
      do {
        iVar8 = iVar8 + 1;
        *pfVar5 = -NAN;
        uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        *(float *)local_138._s_0.X = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        *local_128 = (float)uVar1;
        *pfVar6 = (float)uVar2;
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + local_140[0];
        pfVar5 = pfVar5 + lVar19;
        pfVar6 = pfVar6 + local_110;
        local_128 = local_128 + local_120._0_4_;
        local_138._s_0.X =
             (double)(float *)((longlong)local_138._s_0.X + (longlong)(int)local_138._8_4_ * 4);
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    lVar13 = (longlong)local_d0[0];
    local_c8 = (longlong)(int)local_f8._16_4_ << 2;
    local_b8 = lVar19 << 2;
    local_b0 = (longlong)(int)local_138._8_4_ << 2;
    local_a8 = (longlong)local_120._0_4_ << 2;
    local_a0 = (longlong)local_110 << 2;
    local_90 = lVar14 << 2;
    local_88 = lVar17 << 2;
    local_80._0_8_ = (longlong)local_60[0] << 2;
    local_98 = (longlong)local_140[0] << 2;
    local_res10 = (float *)local_138._s_0.X;
    pfVar7 = pfVar7 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar6 = pfVar6 + iVar10;
    pfVar15 = (float *)local_f8._0_8_;
    pfVar18 = (float *)CONCAT71(uStack_117,local_118);
    pfVar20 = local_70;
    local_res18 = pfVar4 + iVar8;
    local_res20 = pfVar5 + iVar9;
    do {
      pfVar5 = (float *)(local_90 + (longlong)local_res18);
      pfVar21 = (float *)((longlong)pfVar20 + local_80._0_8_);
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      pfVar11 = (float *)(local_88 + (longlong)local_res20);
      fVar3 = -NAN;
      pfVar16 = (float *)(local_c8 + (longlong)pfVar15);
      local_100 = local_128;
      pfVar4 = local_108 + lVar13;
      if (*local_res18 != 0.0) {
        local_138._s_0.X = (double)*pfVar20;
        local_118 = 1;
        local_138._s_0.Y = (double)*local_res20;
        local_120 = (double)*local_108;
        local_128 = (float *)(double)*pfVar15;
        local_108 = local_108 + lVar13;
        fVar3 = (float)FStaticMeshUvMapping::FindFirstTriangle
                                 (local_c0,(TBox2<double> *)&local_138._s_0,
                                  (TVector<double> *)&((TVector<double>_u_0 *)local_f8)->_s_0);
        fVar22 = (float)(double)CONCAT44(local_f8._20_4_,local_f8._16_4_);
        fVar23 = (float)(double)local_f8._8_8_;
        fVar24 = (float)(double)local_f8._0_8_;
        pfVar4 = local_108;
      }
      local_108 = pfVar4;
      *pfVar6 = fVar3;
      *local_res10 = fVar24;
      local_128 = (float *)(local_a8 + (longlong)local_100);
      *local_100 = fVar23;
      *pfVar18 = fVar22;
      iVar12 = iVar12 + 1;
      *pfVar7 = (float)-(uint)(fVar3 != -NAN);
      pfVar7 = (float *)(local_98 + (longlong)pfVar7);
      pfVar6 = (float *)(local_b8 + (longlong)pfVar6);
      pfVar15 = pfVar16;
      pfVar18 = (float *)(local_a0 + (longlong)pfVar18);
      pfVar20 = pfVar21;
      local_res10 = (float *)(local_b0 + (longlong)local_res10);
      local_res18 = pfVar5;
      local_res20 = pfVar11;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// VMGetTriangleCount @ 148fd57f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  FIndexArrayView *pFVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  int local_50 [2];
  FIndexArrayView local_48;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar9 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar10 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar10 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  fVar8 = 0.0;
  local_50[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar7 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    pFVar6 = FRawStaticIndexBuffer::GetArrayView(&pFVar10->IndexBuffer,&local_48);
    iVar2 = pFVar6->NumIndices;
    fVar8 = (float)(iVar2 / 3 + (iVar2 >> 0x1f) +
                   (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f));
  }
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar5 = fVar8;
      pfVar5 = pfVar5 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar10->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// VMGetTriangleIndices @ 148fd5930

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleIndices
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  FIndexArrayView *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  longlong lVar18;
  float *local_res10;
  FStaticMeshLODResources *local_res18;
  int local_c0 [2];
  FIndexArrayView local_b8;
  int local_a0 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_98;
  FStaticMeshLODResources *local_88;
  FColorVertexBuffer *local_80 [2];
  void *local_70;
  undefined8 uStack_68;
  FIndexArrayView local_60;
  FIndexArrayView local_50;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_98,param_1);
  local_88 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_98.Ptr,local_80);
  local_res18 = local_88;
  if (local_88 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    local_res18 = pFVar4;
    if (local_88 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_88->_padding_;
      LOCK();
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar18 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_88->_padding_)(local_88,1);
      }
    }
  }
  local_88 = (FStaticMeshLODResources *)((ulonglong)local_88 & 0xffffffff00000000);
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_88);
  iVar10 = (int)local_88 * param_1->PerInstanceFnInstanceIdx;
  local_c0[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  lVar18 = (longlong)local_c0[0];
  local_a0[0] = 0;
  iVar11 = local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar16 = local_a0[0];
  local_c0[0] = 0;
  iVar12 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  iVar13 = local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_res18 == (FStaticMeshLODResources *)0x0) {
    local_b8.UntypedIndexData = (void *)0x0;
    local_b8.NumIndices = 0;
    local_b8.b32Bit = false;
    pFVar9 = &local_b8;
  }
  else {
    pFVar9 = FRawStaticIndexBuffer::GetArrayView(&local_res18->IndexBuffer,&local_60);
  }
  local_70 = pFVar9->UntypedIndexData;
  uStack_68._0_4_ = pFVar9->NumIndices;
  uStack_68._4_1_ = pFVar9->b32Bit;
  uStack_68._5_3_ = *(undefined3 *)&pFVar9->field_0xd;
  if (local_res18 == (FStaticMeshLODResources *)0x0) {
    iVar3 = param_1->NumInstances;
  }
  else {
    pFVar9 = FRawStaticIndexBuffer::GetArrayView(&local_res18->IndexBuffer,&local_50);
    iVar3 = param_1->NumInstances;
    fVar17 = (float)(pFVar9->NumIndices / 3 + -1);
    iVar16 = local_a0[0];
    if (-1 < (int)fVar17) {
      iVar16 = 0;
      if (0 < iVar3) {
        local_b8.UntypedIndexData = (void *)((longlong)(int)local_88 * 4);
        pfVar8 = pfVar8 + iVar13;
        pfVar7 = pfVar7 + iVar12;
        pfVar6 = pfVar6 + iVar11;
        local_res10 = pfVar5 + iVar10;
        do {
          fVar14 = fVar17;
          if ((int)*local_res10 < (int)fVar17) {
            fVar14 = *local_res10;
          }
          fVar2 = 0.0;
          if (0 < (int)fVar14) {
            fVar2 = fVar14;
          }
          lVar15 = (longlong)((int)fVar2 * 3);
          if (uStack_68._4_1_ == '\0') {
            fVar14 = (float)(uint)*(ushort *)((longlong)local_70 + lVar15 * 2);
          }
          else {
            fVar14 = *(float *)((longlong)local_70 + lVar15 * 4);
          }
          *pfVar6 = fVar14;
          if (uStack_68._4_1_ == '\0') {
            fVar14 = (float)(uint)*(ushort *)((longlong)local_70 + lVar15 * 2 + 2);
          }
          else {
            fVar14 = *(float *)((longlong)local_70 + lVar15 * 4 + 4);
          }
          *pfVar7 = fVar14;
          if (uStack_68._4_1_ == '\0') {
            fVar14 = (float)(uint)*(ushort *)((longlong)local_70 + lVar15 * 2 + 4);
          }
          else {
            fVar14 = *(float *)((longlong)local_70 + lVar15 * 4 + 8);
          }
          iVar16 = iVar16 + 1;
          *pfVar8 = fVar14;
          pfVar8 = pfVar8 + local_c0[0];
          pfVar7 = pfVar7 + local_a0[0];
          pfVar6 = pfVar6 + lVar18;
          local_res10 = (float *)((longlong)local_b8.UntypedIndexData + (longlong)local_res10);
        } while (iVar16 < param_1->NumInstances);
      }
      goto LAB_148fd5ba3;
    }
  }
  iVar10 = 0;
  if (0 < iVar3) {
    pfVar5 = pfVar8 + iVar13;
    pfVar7 = pfVar7 + iVar12;
    pfVar6 = pfVar6 + iVar11;
    do {
      iVar10 = iVar10 + 1;
      *pfVar6 = 0.0;
      *pfVar7 = 0.0;
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + local_c0[0];
      pfVar7 = pfVar7 + iVar16;
      pfVar6 = pfVar6 + lVar18;
    } while (iVar10 < param_1->NumInstances);
  }
LAB_148fd5ba3:
  if (local_res18 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_res18->_padding_;
    LOCK();
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar18 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_res18->_padding_)(local_res18,1);
    }
  }
  return;
}

// VMGetTriangleUV @ 148fd5bf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetTriangleUV
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FStaticMeshVertexBuffers *this_00;
  int iVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  longlong lVar4;
  TVector2<float> TVar5;
  char cVar6;
  float fVar7;
  uint uVar8;
  FStaticMeshLODResources *pFVar9;
  float *pfVar10;
  FIndexArrayView *pFVar11;
  float fVar12;
  longlong lVar13;
  FStaticMeshLODResources *pFVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res10;
  float fStackX_14;
  int local_res18;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float *local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  FStaticMeshLODResources *local_1a8;
  FColorVertexBuffer *local_1a0 [2];
  float *local_190;
  float *local_188;
  float *local_180;
  float *local_178;
  float *local_170;
  float *local_168;
  FStaticMeshLODResources *local_160;
  FIndexArrayView local_158;
  FIndexArrayView local_148;
  int local_138 [2];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FNDIInputParam<UE::Math::TVector<float>_> local_e8;
  FIndexArrayView local_98 [6];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_1b8,param_1);
  iVar16 = 0;
  fVar15 = 0.0;
  local_1a8 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     ((FInstanceData_GameThread *)CONCAT44(uStack_1ac,local_1b0),local_1a0);
  local_160 = local_1a8;
  pFVar14 = local_1a8;
  if (local_1a8 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar14 = pFVar9;
    local_160 = pFVar9;
    if (local_1a8 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_1a8->_padding_;
      LOCK();
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_1a8->_padding_)(local_1a8,1);
      }
    }
  }
  local_138[0] = 0;
  local_190 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  lVar13 = (longlong)local_138[0];
  local_190 = local_190 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_e8,param_1);
  local_138[0] = 0;
  local_178 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  lVar21 = (longlong)local_138[0];
  local_1b0 = 0;
  local_178 = local_178 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_1b0);
  local_1a0[0]._0_4_ = 0;
  local_1b8 = local_1b8 + local_1b0 * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_1a0);
  lVar20 = (longlong)(int)local_1a0[0];
  pfVar10 = pfVar10 + (int)local_1a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_168 = pfVar10;
  if (pFVar14 == (FStaticMeshLODResources *)0x0) {
    local_158.UntypedIndexData = (float *)0x0;
    pFVar11 = &local_158;
    local_158.NumIndices = 0;
    local_158.b32Bit = false;
  }
  else {
    pFVar11 = FRawStaticIndexBuffer::GetArrayView(&pFVar14->IndexBuffer,local_98);
  }
  local_100 = *(undefined4 *)&pFVar11->UntypedIndexData;
  uStack_fc = *(undefined4 *)((longlong)&pFVar11->UntypedIndexData + 4);
  iStack_f8 = pFVar11->NumIndices;
  uStack_f4 = *(undefined4 *)&pFVar11->b32Bit;
  fVar12 = fVar15;
  if (pFVar14 != (FStaticMeshLODResources *)0x0) {
    pFVar11 = FRawStaticIndexBuffer::GetArrayView(&pFVar14->IndexBuffer,&local_148);
    iVar2 = pFVar11->NumIndices;
    fVar12 = (float)(iVar2 / 3 + (iVar2 >> 0x1f) +
                    (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f));
  }
  fVar12 = (float)((int)fVar12 - 1);
  fVar7 = fVar15;
  if (((((pFVar14 != (FStaticMeshLODResources *)0x0) &&
        ((pFVar14->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0)) &&
       (pFVar3 = (pFVar14->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar3 != (FStaticMeshVertexDataInterface *)0x0)) &&
      (((pFVar14->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
        (FStaticMeshVertexDataInterface *)0x0 &&
       (cVar6 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar6 != '\0')))) &&
     (cVar6 = (**(code **)((longlong)*(pFVar14->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))(), cVar6 != '\0')) {
    fVar7 = (float)(pFVar14->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  }
  pFVar9 = pFVar14;
  if (((int)fVar12 < 0) || ((int)((int)fVar7 - 1U) < 0)) {
    if (0 < param_1->NumInstances) {
      pfVar19 = local_1b8;
      do {
        TVar5.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar16 = iVar16 + 1;
        local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        *pfVar19 = local_res10;
        fStackX_14 = TVar5.field0_0x0._4_4_;
        *pfVar10 = fStackX_14;
        pfVar19 = pfVar19 + local_1b0;
        pfVar10 = pfVar10 + lVar20;
      } while (iVar16 < param_1->NumInstances);
    }
  }
  else {
    local_res18 = 0;
    if (0 < param_1->NumInstances) {
      this_00 = &pFVar14->VertexBuffers;
      local_130 = (longlong)local_e8.X.AdvanceOffset << 2;
      lVar4 = CONCAT44(uStack_fc,local_100);
      local_128 = lVar21 << 2;
      lVar21 = (longlong)local_1b0;
      local_118 = lVar13 << 2;
      local_110 = (longlong)local_e8.Z.AdvanceOffset << 2;
      local_108 = (longlong)local_e8.Y.AdvanceOffset << 2;
      local_120 = lVar20 << 2;
      local_188 = local_e8.Y.InputPtr;
      local_180 = local_e8.X.InputPtr;
      local_170 = local_1b8;
      do {
        fVar7 = *local_e8.Z.InputPtr;
        local_158.UntypedIndexData = (void *)((longlong)local_e8.Z.InputPtr + local_110);
        fVar25 = fVar12;
        if ((int)*local_190 < (int)fVar12) {
          fVar25 = *local_190;
        }
        fVar24 = *local_188;
        local_188 = (float *)((longlong)local_188 + local_108);
        fVar23 = *local_180;
        local_178 = (float *)(local_128 + (longlong)local_178);
        fVar22 = fVar15;
        if (0 < (int)fVar25) {
          fVar22 = fVar25;
        }
        lVar13 = (longlong)((int)fVar22 * 3);
        if ((char)uStack_f4 == '\0') {
          uVar8 = (uint)*(ushort *)(lVar4 + 4 + lVar13 * 2);
          uVar18 = (uint)*(ushort *)(lVar4 + 2 + lVar13 * 2);
          uVar17 = (uint)*(ushort *)(lVar4 + lVar13 * 2);
        }
        else {
          uVar8 = *(uint *)(lVar4 + 8 + lVar13 * 4);
          uVar18 = *(uint *)(lVar4 + 4 + lVar13 * 4);
          uVar17 = *(uint *)(lVar4 + lVar13 * 4);
        }
        if ((pFVar14->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          local_190 = (float *)(local_118 + (longlong)local_190);
          local_180 = (float *)(local_130 + (longlong)local_180);
          FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1d4,uVar17);
        }
        else {
          local_190 = (float *)(local_118 + (longlong)local_190);
          local_180 = (float *)(local_130 + (longlong)local_180);
          FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1d4,uVar17);
        }
        fVar25 = local_1d0 * fVar23;
        fVar23 = local_1d4 * fVar23;
        if ((pFVar14->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1cc,uVar18);
        }
        else {
          FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1cc,uVar18);
        }
        fVar22 = local_1cc * fVar24;
        fVar24 = local_1c8 * fVar24;
        if ((pFVar14->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1c4,uVar8);
        }
        else {
          FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                    (&this_00->StaticMeshVertexBuffer,(uint)&local_1c4,uVar8);
        }
        local_res18 = local_res18 + 1;
        pfVar10 = local_170 + lVar21;
        *local_170 = local_1c4 * fVar7 + fVar22 + fVar23;
        pfVar19 = (float *)(local_120 + (longlong)local_168);
        *local_168 = local_1c0 * fVar7 + fVar24 + fVar25;
        pFVar9 = local_160;
        local_e8.Z.InputPtr = local_158.UntypedIndexData;
        local_170 = pfVar10;
        local_168 = pfVar19;
      } while (local_res18 < param_1->NumInstances);
    }
  }
  if (pFVar9 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar9->_padding_;
    LOCK();
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
}

// VMGetUnfilteredSectionAt @ 148fd6190

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSectionAt
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  FStaticMeshLODResources *pFVar10;
  bool bVar11;
  uint uVar12;
  FStaticMeshLODResources *pFVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  FStaticMeshLODResources *pFVar17;
  int iVar18;
  int local_70 [2];
  float *local_68;
  float *local_60;
  int local_58 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_50;
  FStaticMeshLODResources *local_40;
  FColorVertexBuffer *local_38 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_50,param_1);
  iVar18 = 0;
  local_40 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_50.Ptr,local_38);
  pFVar9 = local_40;
  pFVar17 = local_40;
  pFVar10 = local_40;
  if (local_40 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar17 = pFVar13;
    pFVar10 = pFVar13;
    if (local_40 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_40->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_40->_padding_;
        local_40 = pFVar13;
        (**(code **)*plVar1)(pFVar9,1);
        pFVar10 = local_40;
      }
    }
  }
  local_40 = pFVar10;
  local_58[0] = 0;
  local_68 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  local_70[0] = 0;
  local_68 = local_68 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = local_68;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar8 = local_70[0];
  pfVar14 = pfVar14 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  iVar3 = (local_50.Ptr)->NumUnfilteredSections;
  iVar4 = (local_50.Ptr)->NumFilteredSections;
  pFVar5 = ((local_50.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iVar3 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar18 = iVar18 + 1;
        *pfVar14 = 0.0;
        pfVar14 = pfVar14 + iVar8;
      } while (iVar18 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    do {
      pfVar2 = local_68 + local_58[0];
      fVar15 = (float)(iVar3 + -1);
      if ((int)*local_68 < iVar3 + -1) {
        fVar15 = *local_68;
      }
      fVar16 = 0.0;
      if (0 < (int)fVar15) {
        fVar16 = fVar15;
      }
      uVar12 = 0;
      if ((int)fVar16 < iVar3) {
        uVar12 = ~(uint)fVar16 >> 0x1f;
      }
      local_68 = pfVar2;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar18 = iVar18 + 1;
      *pfVar14 = *(float *)(pFVar5 + (longlong)(int)fVar16 * 4 + (longlong)iVar4 * 4);
      pfVar14 = pfVar14 + iVar8;
      pFVar17 = local_40;
    } while (iVar18 < param_1->NumInstances);
  }
  if (pFVar17 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar17->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar17->_padding_)(pFVar17,1);
    }
  }
  return;
}

// VMGetUnfilteredSectionCount @ 148fd63f0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSectionCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  FStaticMeshLODResources *pFVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar6 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar7 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar7 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar2 = (float)(local_38.Ptr)->NumUnfilteredSections;
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar5 = fVar2;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  if (pFVar7 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar7->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return;
}

// VMGetUnfilteredSocket @ 148fd6500

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSocket
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  float fVar13;
  int local_70 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_68;
  float *local_58;
  float *local_50;
  int local_48 [4];
  float fVar11;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_68,param_1);
  local_48[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar9 = local_48[0];
  local_70[0] = 0;
  pfVar6 = pfVar6 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_50 = pfVar6;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar3 = local_70[0];
  iVar12 = 0;
  uVar1 = (local_68.Ptr)->NumFilteredSockets;
  fVar13 = (float)(~uVar1 + ((local_68.Ptr)->FilteredAndUnfilteredSockets).ArrayNum);
  pfVar7 = pfVar7 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar8 = fVar13;
      if ((int)*pfVar6 < (int)fVar13) {
        fVar8 = *pfVar6;
      }
      fVar11 = 0.0;
      if (0 < (int)fVar8) {
        fVar11 = fVar8;
      }
      uVar10 = (int)fVar11 + uVar1;
      if ((int)fVar13 < 0) {
        fVar8 = -NAN;
      }
      else {
        uVar5 = 0;
        if ((int)uVar10 < ((local_68.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (local_58 = pfVar6 + iVar9,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar8 = (float)(uint)*(ushort *)
                              (((local_68.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.Data
                              + (longlong)(int)uVar10 * 2);
      }
      *pfVar7 = fVar8;
      iVar12 = iVar12 + 1;
      pfVar7 = pfVar7 + iVar3;
      pfVar6 = pfVar6 + iVar9;
      iVar9 = local_48[0];
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// VMGetUnfilteredSocketCount @ 148fd66a0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredSocketCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  iVar1 = ((local_18.Ptr)->CachedSockets).ArrayNum;
  iVar2 = (local_18.Ptr)->NumFilteredSockets;
  if (0 < param_1->NumInstances) {
    do {
      iVar4 = iVar4 + 1;
      *pfVar3 = (float)(iVar1 - iVar2);
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMGetUnfilteredTriangleAt @ 148fd6730

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredTriangleAt
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  FStaticMeshLODResources *pFVar10;
  bool bVar11;
  FStaticMeshLODResources *pFVar12;
  float *pfVar13;
  float *pfVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  float fVar20;
  FStaticMeshLODResources *pFVar21;
  int local_70 [2];
  float *local_68;
  float *local_60;
  int local_58 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_50;
  FStaticMeshLODResources *local_40;
  FColorVertexBuffer *local_38 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_50,param_1);
  iVar17 = 0;
  local_40 = (FStaticMeshLODResources *)0x0;
  pFVar12 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_50.Ptr,local_38);
  pFVar9 = local_40;
  pFVar21 = local_40;
  pFVar10 = local_40;
  if (local_40 != pFVar12) {
    if (pFVar12 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
      UNLOCK();
    }
    pFVar21 = pFVar12;
    pFVar10 = pFVar12;
    if (local_40 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_40->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_40->_padding_;
        local_40 = pFVar12;
        (**(code **)*plVar1)(pFVar9,1);
        pFVar10 = local_40;
      }
    }
  }
  local_40 = pFVar10;
  local_58[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar8 = local_58[0];
  local_70[0] = 0;
  pfVar13 = pfVar13 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_68 = pfVar13;
  local_60 = pfVar13;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar7 = local_70[0];
  pfVar14 = pfVar14 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if ((pFVar21 == (FStaticMeshLODResources *)0x0) ||
     (fVar20 = (float)((local_50.Ptr)->NumUnfilteredTriangles + -1), (int)fVar20 < 1)) {
    if (0 < param_1->NumInstances) {
      do {
        iVar17 = iVar17 + 1;
        *pfVar14 = 0.0;
        pfVar14 = pfVar14 + local_70[0];
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else {
    iVar17 = (local_50.Ptr)->NumUnfilteredSections;
    pFVar19 = ((local_50.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data +
              (longlong)(local_50.Ptr)->NumFilteredSections * 0x10;
    if ((iVar17 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar18 = 0;
    if (0 < param_1->NumInstances) {
      do {
        fVar16 = *pfVar13;
        pfVar13 = pfVar13 + iVar8;
        fVar4 = fVar20;
        if ((int)fVar16 < (int)fVar20) {
          fVar4 = fVar16;
        }
        fVar16 = 0.0;
        if (0 < (int)fVar4) {
          fVar16 = fVar4;
        }
        iVar5 = 0;
        for (pFVar15 = pFVar19; pFVar15 != pFVar19 + (longlong)iVar17 * 0x10;
            pFVar15 = pFVar15 + 0x10) {
          pFVar2 = pFVar15 + 4;
          if ((iVar5 <= (int)fVar16) && ((int)fVar16 < *(int *)pFVar2 + iVar5)) {
            fVar16 = (float)((*(int *)pFVar15 - iVar5) + (int)fVar16);
            goto LAB_148fd6911;
          }
          iVar5 = *(int *)pFVar2 + iVar5;
        }
        fVar16 = 0.0;
LAB_148fd6911:
        iVar18 = iVar18 + 1;
        *pfVar14 = fVar16;
        pfVar14 = pfVar14 + iVar7;
        pFVar21 = local_40;
      } while (iVar18 < param_1->NumInstances);
    }
  }
  if (pFVar21 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar21->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  return;
}

// VMGetUnfilteredTriangleCount @ 148fd69c0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetUnfilteredTriangleCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float fVar5;
  FStaticMeshLODResources *pFVar6;
  float fVar7;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  fVar5 = 0.0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar6 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  fVar7 = fVar5;
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    fVar7 = (float)(local_38.Ptr)->NumUnfilteredTriangles;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar5 = (float)((int)fVar5 + 1);
      *pfVar4 = fVar7;
      pfVar4 = pfVar4 + local_40[0];
    } while ((int)fVar5 < param_1->NumInstances);
  }
  if (pFVar6 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  return;
}

// VMGetVertexColor @ 148fd6ad0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexColor
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  float *pfVar11;
  float fVar12;
  byte *pbVar13;
  FStaticMeshLODResources *pFVar14;
  int iVar15;
  float fVar16;
  longlong lVar17;
  int local_res10;
  float *local_res18;
  float *local_res20;
  float *local_d8;
  float *local_d0;
  FNDIOutputParam<FLinearColor> local_c8;
  longlong local_88;
  longlong local_80;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_78;
  FStaticMeshLODResources *local_68;
  FColorVertexBuffer *local_60 [4];
  int local_40 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_78,param_1);
  iVar15 = 0;
  local_68 = (FStaticMeshLODResources *)0x0;
  pFVar10 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_78.Ptr,local_60);
  pFVar14 = local_68;
  if (local_68 != pFVar10) {
    if (pFVar10 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar14 = pFVar10;
    if (local_68 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_68->_padding_;
      LOCK();
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar17 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_68->_padding_)(local_68,1);
      }
    }
  }
  local_40[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  lVar17 = (longlong)local_40[0];
  pfVar11 = pfVar11 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_c8,param_1);
  if (local_60[0] == (FColorVertexBuffer *)0x0) {
    if (((pFVar14 != (FStaticMeshLODResources *)0x0) &&
        ((pFVar14->VertexBuffers).ColorVertexBuffer.Data != (uchar *)0x0)) &&
       (bVar8 = FColorVertexBuffer::GetAllowCPUAccess(&(pFVar14->VertexBuffers).ColorVertexBuffer),
       bVar8)) {
      fVar16 = (float)(pFVar14->VertexBuffers).ColorVertexBuffer.NumVertices;
      goto LAB_148fd6bcc;
    }
    iVar9 = param_1->NumInstances;
  }
  else {
    bVar8 = FColorVertexBuffer::GetAllowCPUAccess(local_60[0]);
    fVar16 = 0.0;
    if (bVar8) {
      fVar16 = (float)local_60[0]->NumVertices;
    }
LAB_148fd6bcc:
    fVar7 = __real_3b808081;
    fVar16 = (float)((int)fVar16 - 1);
    iVar9 = param_1->NumInstances;
    if (-1 < (int)fVar16) {
      local_res10 = 0;
      if (0 < iVar9) {
        local_88 = (longlong)local_c8.B.AdvanceOffset * 4;
        local_80 = (longlong)local_c8.A.AdvanceOffset * 4;
        local_d0 = local_c8.A.Register;
        local_d8 = local_c8.B.Register;
        local_res20 = local_c8.G.Register;
        local_res18 = local_c8.R.Register;
        do {
          fVar12 = *pfVar11;
          pfVar11 = pfVar11 + lVar17;
          fVar2 = fVar16;
          if ((int)fVar12 < (int)fVar16) {
            fVar2 = fVar12;
          }
          fVar12 = 0.0;
          if (0 < (int)fVar2) {
            fVar12 = fVar2;
          }
          if (local_60[0] == (FColorVertexBuffer *)0x0) {
            pbVar13 = (pFVar14->VertexBuffers).ColorVertexBuffer.Data +
                      (int)fVar12 * (pFVar14->VertexBuffers).ColorVertexBuffer.Stride;
          }
          else {
            pbVar13 = local_60[0]->Data + (int)fVar12 * local_60[0]->Stride;
          }
          fVar12 = FLinearColor::sRGBToLinearTable[pbVar13[1]];
          fVar2 = FLinearColor::sRGBToLinearTable[*pbVar13];
          bVar3 = pbVar13[3];
          local_res10 = local_res10 + 1;
          *local_res18 = FLinearColor::sRGBToLinearTable[pbVar13[2]];
          *local_res20 = fVar12;
          local_res20 = local_res20 + local_c8.G.AdvanceOffset;
          *local_d8 = fVar2;
          *local_d0 = (float)bVar3 * fVar7;
          local_res18 = local_res18 + local_c8.R.AdvanceOffset;
          local_d8 = local_d8 + local_c8.B.AdvanceOffset;
          local_d0 = local_d0 + local_c8.A.AdvanceOffset;
        } while (local_res10 < param_1->NumInstances);
      }
      goto LAB_148fd6db0;
    }
  }
  if (0 < iVar9) {
    do {
      uVar6 = FLinearColor::White.field0_0x0._s_0.A;
      uVar5 = FLinearColor::White.field0_0x0._s_0.B;
      uVar4 = FLinearColor::White.field0_0x0._s_0.G;
      iVar15 = iVar15 + 1;
      *local_c8.R.Register = FLinearColor::White.field0_0x0._s_0.R;
      *local_c8.G.Register = (float)uVar4;
      *local_c8.B.Register = (float)uVar5;
      *local_c8.A.Register = (float)uVar6;
      local_c8.G.Register = local_c8.G.Register + local_c8.G.AdvanceOffset;
      local_c8.A.Register = local_c8.A.Register + local_c8.A.AdvanceOffset;
      local_c8.B.Register = local_c8.B.Register + local_c8.B.AdvanceOffset;
      local_c8.R.Register = local_c8.R.Register + local_c8.R.AdvanceOffset;
    } while (iVar15 < param_1->NumInstances);
  }
LAB_148fd6db0:
  if (pFVar14 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar14->_padding_;
    LOCK();
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar17 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar14->_padding_)(pFVar14,1);
    }
  }
  return;
}

// VMGetVertexCount @ 148fd6e00

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexCount
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  iVar8 = 0;
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar9 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar9 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  fVar7 = 0.0;
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar6 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if (((pFVar9 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar9->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar3 = FPositionVertexBuffer::GetAllowCPUAccess
                        (&(pFVar9->VertexBuffers).PositionVertexBuffer), bVar3)) {
    fVar7 = (float)(pFVar9->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar6;
    do {
      iVar8 = iVar8 + 1;
      *pfVar5 = fVar7;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar8 < param_1->NumInstances);
  }
  if (pFVar9 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar9->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  return;
}

// VMGetVertexUV @ 148fd6f30

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetVertexUV
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  TVector2<float> TVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  FStaticMeshLODResources *pFVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  float *pfVar11;
  FStaticMeshLODResources *pFVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float local_res10;
  float fStackX_14;
  undefined8 local_res20;
  float *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  FStaticMeshLODResources *local_98;
  FColorVertexBuffer *local_90 [2];
  float *local_80;
  float *local_78;
  FStaticMeshLODResources *local_70;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> *)&local_a8,param_1);
  iVar17 = 0;
  fVar13 = 0.0;
  local_98 = (FStaticMeshLODResources *)0x0;
  pFVar7 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     ((FInstanceData_GameThread *)CONCAT44(uStack_9c,local_a0),local_90);
  local_70 = local_98;
  pFVar12 = local_98;
  if (local_98 != pFVar7) {
    if (pFVar7 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    pFVar12 = pFVar7;
    local_70 = pFVar7;
    if (local_98 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_98->_padding_;
      LOCK();
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_98->_padding_)(local_98,1);
      }
    }
  }
  local_58[0] = 0;
  local_80 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar10 = local_58[0];
  lVar15 = (longlong)local_58[0];
  local_58[0] = 0;
  local_80 = local_80 + iVar10 * param_1->PerInstanceFnInstanceIdx;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  local_a0 = 0;
  local_78 = local_78 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_a0);
  local_90[0]._0_4_ = 0;
  local_a8 = local_a8 + local_a0 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_90);
  lVar16 = (longlong)(int)local_90[0];
  iVar10 = (int)local_90[0] * param_1->PerInstanceFnInstanceIdx;
  fVar5 = fVar13;
  if (((((pFVar12 != (FStaticMeshLODResources *)0x0) &&
        ((pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0)) &&
       (pFVar2 = (pFVar12->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
       pFVar2 != (FStaticMeshVertexDataInterface *)0x0)) &&
      (((pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
        (FStaticMeshVertexDataInterface *)0x0 &&
       (cVar4 = (**(code **)((longlong)*pFVar2 + 0x58))(), cVar4 != '\0')))) &&
     (cVar4 = (**(code **)((longlong)*(pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))(), cVar4 != '\0')) {
    fVar5 = (float)(pFVar12->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  }
  fVar5 = (float)((int)fVar5 - 1);
  fVar6 = fVar13;
  if (((pFVar12 != (FStaticMeshLODResources *)0x0) &&
      ((pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr != (uchar *)0x0)) &&
     ((pFVar2 = (pFVar12->VertexBuffers).StaticMeshVertexBuffer.TangentsData,
      pFVar2 != (FStaticMeshVertexDataInterface *)0x0 &&
      ((((pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
         (FStaticMeshVertexDataInterface *)0x0 &&
        (cVar4 = (**(code **)((longlong)*pFVar2 + 0x58))(), cVar4 != '\0')) &&
       (cVar4 = (**(code **)((longlong)*(pFVar12->VertexBuffers).StaticMeshVertexBuffer.TexcoordData
                            + 0x58))(), cVar4 != '\0')))))) {
    fVar6 = (float)(pFVar12->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  }
  pFVar7 = pFVar12;
  if (((int)fVar5 < 0) || ((int)((int)fVar6 - 1U) < 0)) {
    if (0 < param_1->NumInstances) {
      pfVar11 = local_a8;
      pfVar8 = pfVar8 + iVar10;
      do {
        TVar3.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        iVar17 = iVar17 + 1;
        local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
        *pfVar11 = local_res10;
        fStackX_14 = TVar3.field0_0x0._4_4_;
        *pfVar8 = fStackX_14;
        pfVar11 = pfVar11 + local_a0;
        pfVar8 = pfVar8 + lVar16;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else if (0 < param_1->NumInstances) {
    lVar9 = (longlong)local_a0;
    local_res20 = lVar9 * 4;
    local_48 = lVar15 << 2;
    local_40 = (longlong)local_58[0] << 2;
    local_50 = lVar16 << 2;
    pfVar8 = pfVar8 + iVar10;
    pfVar11 = local_a8;
    do {
      local_78 = (float *)((longlong)local_78 + local_40);
      fVar6 = fVar5;
      if ((int)*local_80 < (int)fVar5) {
        fVar6 = *local_80;
      }
      fVar14 = fVar13;
      if (0 < (int)fVar6) {
        fVar14 = fVar6;
      }
      if ((pFVar12->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
        local_80 = (float *)(local_48 + (longlong)local_80);
        FStaticMeshVertexBuffer::GetVertexUV_Typed<0>
                  (&(pFVar12->VertexBuffers).StaticMeshVertexBuffer,(uint)&local_res20,(uint)fVar14)
        ;
      }
      else {
        local_80 = (float *)(local_48 + (longlong)local_80);
        FStaticMeshVertexBuffer::GetVertexUV_Typed<1>
                  (&(pFVar12->VertexBuffers).StaticMeshVertexBuffer,(uint)&local_res20,(uint)fVar14)
        ;
      }
      iVar17 = iVar17 + 1;
      *pfVar11 = (float)local_res20;
      *pfVar8 = local_res20._4_4_;
      pFVar7 = local_70;
      pfVar8 = (float *)(local_50 + (longlong)pfVar8);
      pfVar11 = pfVar11 + lVar9;
    } while (iVar17 < param_1->NumInstances);
  }
  if (pFVar7 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar7->_padding_;
    LOCK();
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar15 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return;
}

// VMGetWorldVelocity @ 148fd7280

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMGetWorldVelocity
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_48;
  FNDIOutputParam<UE::Math::TVector<float>_> local_38;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_48,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_38,param_1);
  iVar3 = 0;
  if (0 < param_1->NumInstances) {
    do {
      dVar1 = ((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.Y;
      dVar2 = ((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.Z;
      iVar3 = iVar3 + 1;
      *local_38.X.Register = (float)((local_48.Ptr)->PhysicsVelocity).field0_0x0._s_0.X;
      *local_38.Y.Register = (float)dVar1;
      *local_38.Z.Register = (float)dVar2;
      local_38.X.Register = local_38.X.Register + local_38.X.AdvanceOffset;
      local_38.Y.Register = local_38.Y.Register + local_38.Y.AdvanceOffset;
      local_38.Z.Register = local_38.Z.Register + local_38.Z.AdvanceOffset;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// VMIsValid @ 148fd73d0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValid
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)((~(local_18.Ptr)->bMeshValid & 1) - 1);
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMIsValidFilteredTriangle @ 148fd7460

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValidFilteredTriangle
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  FStaticMeshLODResources *pFVar8;
  int iVar9;
  int local_50 [6];
  int local_38 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_30;
  FStaticMeshLODResources *local_20;
  FColorVertexBuffer *local_18 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_30,param_1);
  local_20 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_30.Ptr,local_18);
  pFVar8 = local_20;
  if (local_20 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar8 = pFVar3;
    if (local_20 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_20->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_20->_padding_)(local_20,1);
      }
    }
  }
  local_38[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_50[0] = 0;
  pfVar4 = pfVar4 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  if (pFVar8 == (FStaticMeshLODResources *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (local_30.Ptr)->NumFilteredTriangles;
  }
  iVar7 = 0;
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      fVar6 = *pfVar4;
      pfVar4 = pfVar4 + local_38[0];
      if (((int)fVar6 < 0) || (iVar9 <= (int)fVar6)) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = -NAN;
      }
      iVar7 = iVar7 + 1;
      *pfVar5 = fVar6;
      pfVar5 = pfVar5 + local_50[0];
    } while (iVar7 < param_1->NumInstances);
  }
  if (pFVar8 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return;
}

// VMIsValidSection @ 148fd75c0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValidSection
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  FStaticMeshLODResources *pFVar8;
  int iVar9;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar8 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar8 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_28 = (FStaticMeshLODResources *)((ulonglong)local_28 & 0xffffffff00000000);
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_28);
  local_40[0] = 0;
  pfVar4 = pfVar4 + (int)local_28 * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  if (pFVar8 == (FStaticMeshLODResources *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)&(pFVar8->Sections).field_0x28;
  }
  iVar7 = 0;
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      fVar6 = *pfVar4;
      pfVar4 = pfVar4 + (int)local_28;
      if (((int)fVar6 < 0) || (iVar9 <= (int)fVar6)) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = -NAN;
      }
      iVar7 = iVar7 + 1;
      *pfVar5 = fVar6;
      pfVar5 = pfVar5 + local_40[0];
    } while (iVar7 < param_1->NumInstances);
  }
  if (pFVar8 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return;
}

// VMIsValidTriangle @ 148fd7720

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValidTriangle
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float *pfVar5;
  FIndexArrayView *pFVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  int iVar11;
  int local_50 [2];
  FIndexArrayView local_48;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar10 = local_28;
  if (local_28 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar10 = pFVar3;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_28 = (FStaticMeshLODResources *)((ulonglong)local_28 & 0xffffffff00000000);
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_28);
  local_50[0] = 0;
  pfVar4 = pfVar4 + (int)local_28 * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar7 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if (pFVar10 == (FStaticMeshLODResources *)0x0) {
    iVar11 = 0;
  }
  else {
    pFVar6 = FRawStaticIndexBuffer::GetArrayView(&pFVar10->IndexBuffer,&local_48);
    iVar11 = pFVar6->NumIndices / 3;
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + iVar7;
    do {
      fVar8 = *pfVar4;
      pfVar4 = pfVar4 + (int)local_28;
      if (((int)fVar8 < 0) || (iVar11 <= (int)fVar8)) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = -NAN;
      }
      iVar9 = iVar9 + 1;
      *pfVar5 = fVar8;
      pfVar5 = pfVar5 + local_50[0];
    } while (iVar9 < param_1->NumInstances);
  }
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar10->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// VMIsValidUnfilteredTriangle @ 148fd78a0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValidUnfilteredTriangle
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FStaticMeshLODResources *pFVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  FStaticMeshLODResources *pFVar8;
  int iVar9;
  int local_50 [6];
  int local_38 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_30;
  FStaticMeshLODResources *local_20;
  FColorVertexBuffer *local_18 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_30,param_1);
  local_20 = (FStaticMeshLODResources *)0x0;
  pFVar3 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_30.Ptr,local_18);
  pFVar8 = local_20;
  if (local_20 != pFVar3) {
    if (pFVar3 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
      UNLOCK();
    }
    pFVar8 = pFVar3;
    if (local_20 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_20->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_20->_padding_)(local_20,1);
      }
    }
  }
  local_38[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_50[0] = 0;
  pfVar4 = pfVar4 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  if (pFVar8 == (FStaticMeshLODResources *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (local_30.Ptr)->NumUnfilteredTriangles;
  }
  iVar7 = 0;
  if (0 < param_1->NumInstances) {
    pfVar5 = pfVar5 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      fVar6 = *pfVar4;
      pfVar4 = pfVar4 + local_38[0];
      if (((int)fVar6 < 0) || (iVar9 <= (int)fVar6)) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = -NAN;
      }
      iVar7 = iVar7 + 1;
      *pfVar5 = fVar6;
      pfVar5 = pfVar5 + local_50[0];
    } while (iVar7 < param_1->NumInstances);
  }
  if (pFVar8 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar8->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return;
}

// VMIsValidVertex @ 148fd7a00

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMIsValidVertex
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  FStaticMeshLODResources *pFVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  uint uVar11;
  int local_40 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38;
  FStaticMeshLODResources *local_28;
  FColorVertexBuffer *local_20 [3];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_38,param_1);
  local_28 = (FStaticMeshLODResources *)0x0;
  pFVar4 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_38.Ptr,local_20);
  pFVar10 = local_28;
  if (local_28 != pFVar4) {
    if (pFVar4 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
      UNLOCK();
    }
    pFVar10 = pFVar4;
    if (local_28 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_28->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_28->_padding_)(local_28,1);
      }
    }
  }
  local_28 = (FStaticMeshLODResources *)((ulonglong)local_28 & 0xffffffff00000000);
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_28);
  local_40[0] = 0;
  pfVar5 = pfVar5 + (int)local_28 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if ((pFVar10 != (FStaticMeshLODResources *)0x0) &&
     ((pFVar10->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) {
    bVar3 = FPositionVertexBuffer::GetAllowCPUAccess(&(pFVar10->VertexBuffers).PositionVertexBuffer)
    ;
    if (bVar3) {
      uVar11 = (pFVar10->VertexBuffers).PositionVertexBuffer.NumVertices;
      goto LAB_148fd7af0;
    }
  }
  uVar11 = 0;
LAB_148fd7af0:
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar7;
    do {
      fVar8 = *pfVar5;
      pfVar5 = pfVar5 + (int)local_28;
      if (((int)fVar8 < 0) || ((int)uVar11 <= (int)fVar8)) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = -NAN;
      }
      iVar9 = iVar9 + 1;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  if (pFVar10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar10->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  return;
}

// VMRandomFilteredSocket @ 148fd7b80

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomFilteredSocket
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  FInstanceData_GameThread *pFVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  TVector<float> *pTVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  int local_e0 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_d8;
  FNDIRandomInfoPolicy local_c8;
  TVector<float> local_58 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_d8,param_1);
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_c8,param_1);
  iVar10 = 0;
  local_e0[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar4 = local_e0[0];
  fVar3 = __real_3f800000;
  iVar1 = (local_d8.Ptr)->NumFilteredSockets;
  pfVar8 = pfVar8 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  if (iVar1 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar10 = iVar10 + 1;
        *pfVar8 = -NAN;
        pfVar8 = pfVar8 + local_e0[0];
      } while (iVar10 < param_1->NumInstances);
    }
  }
  else {
    iVar10 = 0;
    if (0 < param_1->NumInstances) {
      do {
        pFVar5 = local_d8.Ptr;
        local_c8.RandInfo.Seed1 = *local_c8.RandParam.Seed1Param.InputPtr;
        local_c8.RandInfo.Seed2 = *local_c8.RandParam.Seed2Param.InputPtr;
        local_c8.RandInfo.Seed3 = *local_c8.RandParam.Seed3Param.InputPtr;
        if (local_c8.RandInfo.Seed3 == -1) {
          uVar7 = (local_c8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_c8.Context)->RandStream->Seed = uVar7;
          fVar12 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
          local_c8.RandParam.Seed1Param.InputPtr =
               local_c8.RandParam.Seed1Param.InputPtr + local_c8.RandParam.Seed1Param.AdvanceOffset;
          local_c8.RandParam.Seed2Param.InputPtr =
               local_c8.RandParam.Seed2Param.InputPtr + local_c8.RandParam.Seed2Param.AdvanceOffset;
          local_c8.RandParam.Seed3Param.InputPtr =
               local_c8.RandParam.Seed3Param.InputPtr + local_c8.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_c8.RandParam.Seed1Param.InputPtr =
               local_c8.RandParam.Seed1Param.InputPtr + local_c8.RandParam.Seed1Param.AdvanceOffset;
          local_c8.RandParam.Seed2Param.InputPtr =
               local_c8.RandParam.Seed2Param.InputPtr + local_c8.RandParam.Seed2Param.AdvanceOffset;
          local_c8.RandParam.Seed3Param.InputPtr =
               local_c8.RandParam.Seed3Param.InputPtr + local_c8.RandParam.Seed3Param.AdvanceOffset;
          pTVar9 = FNDIRandomInfoPolicy::Rand3(&local_c8,local_58,iVar10);
          fVar12 = (pTVar9->field0_0x0)._s_0.X;
        }
        uVar11 = (uint)((float)iVar1 * fVar12);
        uVar7 = 0;
        if ((int)uVar11 < (pFVar5->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = iVar10 + 1;
        *pfVar8 = (float)(uint)*(ushort *)
                                ((pFVar5->FilteredAndUnfilteredSockets).AllocatorInstance.Data +
                                (longlong)(int)uVar11 * 2);
        pfVar8 = pfVar8 + iVar4;
      } while (iVar10 < param_1->NumInstances);
    }
  }
  return;
}

// VMRandomFilteredTriangle @ 148fd7db0

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomFilteredTriangle
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  FStaticMeshLODResources *pFVar4;
  FStaticMeshLODResources *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FStaticMeshLODResources *pFVar9;
  float *pfVar10;
  TVector<float> *pTVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *pTVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  FScriptContainerElement *pFVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  FScriptContainerElement *local_1d0;
  int local_1c8 [2];
  ulonglong local_1c0;
  FNDIRandomInfoPolicy local_1b8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_148;
  longlong local_118;
  FScriptContainerElement *local_110;
  TVector<float>_u_0 local_108;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f8;
  FStaticMeshLODResources *local_e8;
  FColorVertexBuffer *local_e0 [2];
  TVector<float>_u_0 local_d0;
  TVector<float>_u_0 local_c0;
  TVector<float> local_b0;
  TVector<float> local_a4;
  TVector<float> local_98;
  TVector<float> local_8c;
  TVector<float> local_80;
  TVector<float> local_74 [5];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f8,param_1);
  local_e8 = (FStaticMeshLODResources *)0x0;
  pFVar9 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_f8.Ptr,local_e0);
  pFVar4 = local_e8;
  pFVar5 = local_e8;
  if (local_e8 != pFVar9) {
    if (pFVar9 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar5 = pFVar9;
    if (local_e8 != (FStaticMeshLODResources *)0x0) {
      plVar14 = &local_e8->_padding_;
      LOCK();
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if (((int)lVar13 == 1) && (plVar14 != (longlong *)0x0)) {
        plVar14 = &local_e8->_padding_;
        local_e8 = pFVar9;
        (**(code **)*plVar14)(pFVar4,1);
        pFVar5 = local_e8;
      }
    }
  }
  local_e8 = pFVar5;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_1b8,param_1);
  local_1c8[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1c8);
  local_1d0 = (FScriptContainerElement *)
              (pfVar10 + local_1c8[0] * param_1->PerInstanceFnInstanceIdx);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_148,param_1);
  fVar3 = __real_3f800000;
  iVar16 = (local_f8.Ptr)->NumFilteredSections;
  pFVar22 = ((local_f8.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
  if (iVar16 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar16 == 0) {
    iVar16 = 0;
    if (0 < param_1->NumInstances) {
      local_118 = (longlong)local_148.X.AdvanceOffset << 2;
      local_1c0 = (longlong)local_148.Y.AdvanceOffset << 2;
      pFVar22 = (FScriptContainerElement *)((longlong)local_1c8[0] << 2);
      local_108._0_8_ = (longlong)local_148.Z.AdvanceOffset << 2;
      piVar18 = local_1b8.RandParam.Seed2Param.InputPtr;
      piVar21 = local_1b8.RandParam.Seed3Param.InputPtr;
      pfVar10 = local_148.Z.Register;
      pfVar23 = local_148.Y.Register;
      pfVar24 = local_148.X.Register;
      piVar25 = local_1b8.RandParam.Seed1Param.InputPtr;
      local_110 = pFVar22;
      do {
        local_1b8.RandInfo.Seed1 = *piVar25;
        piVar25 = piVar25 + local_1b8.RandParam.Seed1Param.AdvanceOffset;
        local_1b8.RandInfo.Seed3 = *piVar21;
        piVar21 = piVar21 + local_1b8.RandParam.Seed3Param.AdvanceOffset;
        local_1b8.RandInfo.Seed2 = *piVar18;
        piVar18 = piVar18 + local_1b8.RandParam.Seed2Param.AdvanceOffset;
        pFVar1 = pFVar22 + (longlong)local_1d0;
        *(float *)local_1d0 = 0.0;
        local_1b8.RandParam.Seed1Param.InputPtr = piVar25;
        local_1b8.RandParam.Seed2Param.InputPtr = piVar18;
        local_1b8.RandParam.Seed3Param.InputPtr = piVar21;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar29 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar26 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_c0._s_0,iVar16);
          pFVar22 = local_110;
          uVar26 = local_c0._s_0.X;
          uVar29 = local_c0._s_0.Y;
        }
        iVar16 = iVar16 + 1;
        fVar28 = SQRT((float)uVar26);
        *pfVar24 = fVar3 - fVar28;
        *pfVar23 = (fVar3 - (float)uVar29) * fVar28;
        *pfVar10 = fVar28 * (float)uVar29;
        pfVar10 = (float *)(local_108._0_8_ + (longlong)pfVar10);
        pfVar23 = (float *)(local_1c0 + (longlong)pfVar23);
        pfVar24 = (float *)(local_118 + (longlong)pfVar24);
        local_1d0 = pFVar1;
      } while (iVar16 < param_1->NumInstances);
    }
    goto LAB_148fd842c;
  }
  fVar3 = __real_3f800000;
  if ((local_e8 == (FStaticMeshLODResources *)0x0) ||
     ((local_f8.Ptr)->bIsCpuUniformlyDistributedSampling == 0)) {
    iVar8 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_1b8.RandInfo.Seed1 = *local_1b8.RandParam.Seed1Param.InputPtr;
        local_1b8.RandInfo.Seed2 = *local_1b8.RandParam.Seed2Param.InputPtr;
        iVar19 = *local_1b8.RandParam.Seed3Param.InputPtr;
        local_1b8.RandParam.Seed3Param.InputPtr =
             local_1b8.RandParam.Seed3Param.InputPtr + local_1b8.RandParam.Seed3Param.AdvanceOffset;
        local_1b8.RandInfo.Seed3 = iVar19;
        if (iVar19 == -1) {
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          fVar28 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
        }
        else {
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_80,iVar8);
          fVar28 = (pTVar11->field0_0x0)._s_0.X;
        }
        uVar20 = (uint)((float)iVar16 * fVar28);
        uVar15 = 0;
        if ((int)uVar20 < iVar16) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (iVar19 == -1) {
          uVar7 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar7;
          fVar28 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
        }
        else {
          pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,local_74,iVar8);
          fVar28 = (pTVar11->field0_0x0)._s_0.X;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar13 = (longlong)local_1c8[0];
        *(int *)local_1d0 =
             (int)((float)*(uint *)(pFVar22 + (longlong)(int)uVar20 * 0x10 + 4) * fVar28) +
             *(int *)(pFVar22 + (longlong)(int)uVar20 * 0x10);
        if (iVar19 == -1) {
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar29 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar26 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_d0._s_0,iVar8);
          uVar26 = local_d0._s_0.X;
          uVar29 = local_d0._s_0.Y;
        }
        iVar8 = iVar8 + 1;
        fVar28 = SQRT((float)uVar26);
        pfVar10 = local_148.X.Register + local_148.X.AdvanceOffset;
        *local_148.X.Register = fVar3 - fVar28;
        pfVar23 = local_148.Y.Register + local_148.Y.AdvanceOffset;
        *local_148.Y.Register = (fVar3 - (float)uVar29) * fVar28;
        pfVar24 = local_148.Z.Register + local_148.Z.AdvanceOffset;
        *local_148.Z.Register = fVar28 * (float)uVar29;
        local_1d0 = local_1d0 + lVar13 * 4;
        local_148.X.Register = pfVar10;
        local_148.Y.Register = pfVar23;
        local_148.Z.Register = pfVar24;
      } while (iVar8 < param_1->NumInstances);
    }
  }
  else {
    iVar8 = (local_f8.Ptr)->NumFilteredSections;
    local_110 = ((local_f8.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
    local_118 = CONCAT44(local_118._4_4_,iVar8);
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = __real_3f800000;
    iVar19 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_1c0 = local_1c0 & 0xffffffff00000000;
        local_1b8.RandInfo.Seed1 = *local_1b8.RandParam.Seed1Param.InputPtr;
        local_1b8.RandInfo.Seed2 = *local_1b8.RandParam.Seed2Param.InputPtr;
        local_1b8.RandInfo.Seed3 = *local_1b8.RandParam.Seed3Param.InputPtr;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          fVar28 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          fVar27 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          local_1b8.RandParam.Seed3Param.InputPtr =
               local_1b8.RandParam.Seed3Param.InputPtr +
               local_1b8.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          local_1b8.RandParam.Seed3Param.InputPtr =
               local_1b8.RandParam.Seed3Param.InputPtr +
               local_1b8.RandParam.Seed3Param.AdvanceOffset;
          pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_b0,iVar19);
          fVar28 = (pTVar11->field0_0x0)._s_0.X;
          pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_a4,iVar19);
          fVar27 = (pTVar11->field0_0x0)._s_0.X;
        }
        uVar15 = (uint)((float)iVar16 * fVar28);
        uVar20 = 0;
        if ((int)uVar15 < iVar16) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(float *)(pFVar22 + (longlong)(int)uVar15 * 0x10 + 8) <= fVar27) {
          if ((uVar20 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar15 = *(uint *)(pFVar22 + (longlong)(int)uVar15 * 0x10 + 0xc);
        }
        uVar20 = 0;
        if ((int)uVar15 < iVar8) {
          uVar20 = ~uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar17 = &local_e8->AreaWeightedSectionSamplers;
        uVar20 = *(uint *)(local_110 + (longlong)(int)uVar15 * 4);
        if ((-1 < (int)uVar20) && ((int)uVar20 < (local_e8->AreaWeightedSectionSamplers).ArrayNum))
        {
          if (((int)uVar20 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar12 = pTVar17->AllocatorInstance;
          if (((ulonglong)FVar12 & 1) != 0) {
            FVar12 = (ForAnyElementType)
                     ((longlong)&(pTVar17->AllocatorInstance).field_0x0 + ((longlong)FVar12 >> 0x18)
                     );
          }
          if (*(int *)((longlong)FVar12 + 0x10U + (longlong)(int)uVar20 * 0x40) != 0) {
            pTVar17 = &local_e8->AreaWeightedSectionSamplers;
            uVar7 = 0;
            if ((int)uVar20 < (local_e8->AreaWeightedSectionSamplers).ArrayNum) {
              uVar7 = ~uVar20 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar12 = pTVar17->AllocatorInstance;
            if (((ulonglong)FVar12 & 1) != 0) {
              FVar12 = (ForAnyElementType)
                       ((longlong)&(pTVar17->AllocatorInstance).field_0x0 +
                       ((longlong)FVar12 >> 0x18));
            }
            if (local_1b8.RandInfo.Seed3 == -1) {
              uVar7 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_1b8.Context)->RandStream->Seed = uVar7;
              fVar28 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
              uVar7 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_1b8.Context)->RandStream->Seed = uVar7;
              fVar27 = (float)(uVar7 >> 9 | 0x3f800000) - fVar3;
            }
            else {
              pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_98,iVar19);
              fVar28 = (pTVar11->field0_0x0)._s_0.X;
              pTVar11 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_8c,iVar19);
              fVar27 = (pTVar11->field0_0x0)._s_0.X;
            }
            iVar8 = FWeightedRandomSampler::GetEntryIndex
                              ((FWeightedRandomSampler *)
                               ((longlong)FVar12 + (longlong)(int)uVar20 * 0x40),fVar27,fVar28);
            uVar20 = 0;
            if ((int)uVar15 < iVar16) {
              uVar20 = ~uVar15 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_1c0 = CONCAT44(local_1c0._4_4_,
                                 *(int *)(pFVar22 + (longlong)(int)uVar15 * 0x10) + iVar8);
          }
        }
        lVar13 = (longlong)local_1c8[0];
        *(float *)local_1d0 = (float)local_1c0;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar29 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
          uVar15 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar15;
          uVar26 = (float)(uVar15 >> 9 | 0x3f800000) - fVar3;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_108._s_0,iVar19);
          uVar26 = local_108._s_0.X;
          uVar29 = local_108._s_0.Y;
        }
        iVar19 = iVar19 + 1;
        fVar28 = SQRT((float)uVar26);
        pfVar10 = local_148.X.Register + local_148.X.AdvanceOffset;
        *local_148.X.Register = fVar3 - fVar28;
        pfVar23 = local_148.Y.Register + local_148.Y.AdvanceOffset;
        *local_148.Y.Register = (fVar3 - (float)uVar29) * fVar28;
        pfVar24 = local_148.Z.Register + local_148.Z.AdvanceOffset;
        *local_148.Z.Register = fVar28 * (float)uVar29;
        iVar8 = (int)local_118;
        local_1d0 = local_1d0 + lVar13 * 4;
        local_148.X.Register = pfVar10;
        local_148.Y.Register = pfVar23;
        local_148.Z.Register = pfVar24;
      } while (iVar19 < param_1->NumInstances);
    }
  }
LAB_148fd842c:
  if (local_e8 != (FStaticMeshLODResources *)0x0) {
    plVar14 = &local_e8->_padding_;
    LOCK();
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((((int)lVar13 == 1) && (plVar14 != (longlong *)0x0)) &&
       (local_e8 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)local_e8->_padding_)(local_e8,1);
    }
  }
  return;
}

// VMRandomSocket @ 148fd8910

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomSocket
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  TVector<float> *pTVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 local_d8 [16];
  FNDIRandomInfoPolicy local_c8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_58 [2];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(local_58,param_1);
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_c8,param_1);
  iVar8 = 0;
  local_d8._8_4_ = 0.0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<float> *)local_d8)->field0_0x0)._s_0.Z);
  fVar2 = __real_3f800000;
  lVar7 = (longlong)(int)local_d8._8_4_;
  iVar1 = ((local_58[0].Ptr)->CachedSockets).ArrayNum;
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_d8._8_4_ * param_1->PerInstanceFnInstanceIdx;
    piVar9 = local_c8.RandParam.Seed2Param.InputPtr;
    piVar10 = local_c8.RandParam.Seed1Param.InputPtr;
    piVar11 = local_c8.RandParam.Seed3Param.InputPtr;
    do {
      local_c8.RandInfo.Seed1 = *piVar10;
      piVar10 = piVar10 + local_c8.RandParam.Seed1Param.AdvanceOffset;
      local_c8.RandInfo.Seed3 = *piVar11;
      piVar11 = piVar11 + local_c8.RandParam.Seed3Param.AdvanceOffset;
      local_c8.RandInfo.Seed2 = *piVar9;
      piVar9 = piVar9 + local_c8.RandParam.Seed2Param.AdvanceOffset;
      if (iVar1 + -1 < 0) {
        fVar6 = -NAN;
      }
      else if (local_c8.RandInfo.Seed3 == -1) {
        uVar3 = (local_c8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_c8.Context)->RandStream->Seed = uVar3;
        fVar6 = (float)(int)((float)iVar1 * ((float)(uVar3 >> 9 | 0x3f800000) - fVar2));
      }
      else {
        local_c8.RandParam.Seed1Param.InputPtr = piVar10;
        local_c8.RandParam.Seed2Param.InputPtr = piVar9;
        local_c8.RandParam.Seed3Param.InputPtr = piVar11;
        pTVar5 = FNDIRandomInfoPolicy::Rand3(&local_c8,(TVector<float> *)local_d8,iVar8);
        fVar6 = (float)(int)((float)iVar1 * (pTVar5->field0_0x0)._s_0.X);
      }
      iVar8 = iVar8 + 1;
      *pfVar4 = fVar6;
      pfVar4 = pfVar4 + lVar7;
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// VMRandomUnfilteredSection @ 148fd8b10

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomUnfilteredSection
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  float fVar9;
  FStaticMeshLODResources *pFVar10;
  FStaticMeshLODResources *pFVar11;
  bool bVar12;
  FStaticMeshLODResources *pFVar13;
  TVector<float> *pTVar14;
  uint uVar15;
  FStaticMeshLODResources *pFVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float *local_148;
  int local_140 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_138;
  FStaticMeshLODResources *local_128;
  FColorVertexBuffer *local_120 [3];
  FNDIRandomInfoPolicy local_108;
  TVector<float> local_98;
  TVector<float> local_8c;
  TVector<float> local_80 [6];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_138,param_1);
  iVar18 = 0;
  local_128 = (FStaticMeshLODResources *)0x0;
  pFVar13 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_138.Ptr,local_120);
  pFVar10 = local_128;
  pFVar16 = local_128;
  pFVar11 = local_128;
  if (local_128 != pFVar13) {
    if (pFVar13 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
      UNLOCK();
    }
    pFVar16 = pFVar13;
    pFVar11 = pFVar13;
    if (local_128 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_128->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        plVar1 = &local_128->_padding_;
        local_128 = pFVar13;
        (**(code **)*plVar1)(pFVar10,1);
        pFVar11 = local_128;
      }
    }
  }
  local_128 = pFVar11;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_108,param_1);
  local_140[0] = 0;
  local_148 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  iVar2 = (local_138.Ptr)->NumUnfilteredSections;
  local_148 = local_148 + local_140[0] * param_1->PerInstanceFnInstanceIdx;
  iVar3 = (local_138.Ptr)->NumFilteredSections;
  pFVar5 = ((local_138.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar9 = __real_3f800000;
  if (iVar2 + -1 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar18 = iVar18 + 1;
        *local_148 = 0.0;
        local_148 = local_148 + local_140[0];
      } while (iVar18 < param_1->NumInstances);
    }
  }
  else if ((pFVar16 == (FStaticMeshLODResources *)0x0) ||
          ((local_138.Ptr)->bIsCpuUniformlyDistributedSampling == 0)) {
    if (0 < param_1->NumInstances) {
      do {
        local_108.RandInfo.Seed1 = *local_108.RandParam.Seed1Param.InputPtr;
        local_108.RandInfo.Seed2 = *local_108.RandParam.Seed2Param.InputPtr;
        local_108.RandInfo.Seed3 = *local_108.RandParam.Seed3Param.InputPtr;
        if (local_108.RandInfo.Seed3 == -1) {
          uVar17 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar17;
          fVar20 = (float)(uVar17 >> 9 | 0x3f800000) - fVar9;
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
          pTVar14 = FNDIRandomInfoPolicy::Rand3(&local_108,local_80,iVar18);
          fVar20 = (pTVar14->field0_0x0)._s_0.X;
        }
        uVar15 = (uint)((float)iVar2 * fVar20);
        uVar17 = 0;
        if ((int)uVar15 < iVar2) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar18 = iVar18 + 1;
        *local_148 = *(float *)(pFVar5 + (longlong)(int)uVar15 * 4 + (longlong)iVar3 * 4);
        pFVar16 = local_128;
        local_148 = local_148 + local_140[0];
      } while (iVar18 < param_1->NumInstances);
    }
  }
  else {
    iVar18 = (local_138.Ptr)->NumUnfilteredSections;
    iVar4 = (local_138.Ptr)->NumFilteredSections;
    pFVar6 = ((local_138.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar9 = __real_3f800000;
    iVar19 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_108.RandInfo.Seed1 = *local_108.RandParam.Seed1Param.InputPtr;
        local_108.RandInfo.Seed2 = *local_108.RandParam.Seed2Param.InputPtr;
        local_108.RandInfo.Seed3 = *local_108.RandParam.Seed3Param.InputPtr;
        if (local_108.RandInfo.Seed3 == -1) {
          uVar17 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar17;
          fVar20 = (float)(uVar17 >> 9 | 0x3f800000) - fVar9;
          uVar17 = (local_108.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_108.Context)->RandStream->Seed = uVar17;
          fVar21 = (float)(uVar17 >> 9 | 0x3f800000) - fVar9;
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_108.RandParam.Seed1Param.InputPtr =
               local_108.RandParam.Seed1Param.InputPtr +
               local_108.RandParam.Seed1Param.AdvanceOffset;
          local_108.RandParam.Seed2Param.InputPtr =
               local_108.RandParam.Seed2Param.InputPtr +
               local_108.RandParam.Seed2Param.AdvanceOffset;
          local_108.RandParam.Seed3Param.InputPtr =
               local_108.RandParam.Seed3Param.InputPtr +
               local_108.RandParam.Seed3Param.AdvanceOffset;
          pTVar14 = FNDIRandomInfoPolicy::Rand3(&local_108,&local_98,iVar19);
          fVar20 = (pTVar14->field0_0x0)._s_0.X;
          pTVar14 = FNDIRandomInfoPolicy::Rand3(&local_108,&local_8c,iVar19);
          fVar21 = (pTVar14->field0_0x0)._s_0.X;
        }
        uVar17 = (uint)((float)iVar18 * fVar20);
        uVar15 = 0;
        if ((int)uVar17 < iVar18) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)(pFVar6 + (longlong)(int)uVar17 * 0x10 + (longlong)iVar4 * 0x10 + 8) <= fVar21
           ) {
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = *(uint *)(pFVar6 + (longlong)(int)uVar17 * 0x10 + (longlong)iVar4 * 0x10 + 0xc);
        }
        uVar15 = 0;
        if ((int)uVar17 < iVar2) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar17 = *(uint *)(pFVar5 + (longlong)(int)uVar17 * 4 + (longlong)iVar3 * 4);
        uVar15 = 0;
        if ((int)uVar17 < iVar2) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = iVar19 + 1;
        *local_148 = *(float *)(pFVar5 + (longlong)(int)uVar17 * 4 + (longlong)iVar3 * 4);
        pFVar16 = local_128;
        local_148 = local_148 + local_140[0];
      } while (iVar19 < param_1->NumInstances);
    }
  }
  if (pFVar16 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar16->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
  }
  return;
}

// VMRandomUnfilteredSocket @ 148fd9100

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomUnfilteredSocket
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  TVector<float> *pTVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  int local_e0 [2];
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_d8;
  FNDIRandomInfoPolicy local_c8;
  TVector<float> local_58 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_d8,param_1);
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_c8,param_1);
  iVar9 = 0;
  local_e0[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar3 = local_e0[0];
  fVar2 = __real_3f800000;
  iVar8 = ~(local_d8.Ptr)->NumFilteredSockets +
          ((local_d8.Ptr)->FilteredAndUnfilteredSockets).ArrayNum;
  pfVar6 = pfVar6 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  if (iVar8 < 0) {
    if (0 < param_1->NumInstances) {
      do {
        iVar9 = iVar9 + 1;
        *pfVar6 = -NAN;
        pfVar6 = pfVar6 + local_e0[0];
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else {
    iVar9 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_c8.RandInfo.Seed1 = *local_c8.RandParam.Seed1Param.InputPtr;
        local_c8.RandInfo.Seed2 = *local_c8.RandParam.Seed2Param.InputPtr;
        local_c8.RandInfo.Seed3 = *local_c8.RandParam.Seed3Param.InputPtr;
        if (local_c8.RandInfo.Seed3 == -1) {
          uVar5 = (local_c8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_c8.Context)->RandStream->Seed = uVar5;
          fVar11 = (float)(uVar5 >> 9 | 0x3f800000) - fVar2;
          local_c8.RandParam.Seed1Param.InputPtr =
               local_c8.RandParam.Seed1Param.InputPtr + local_c8.RandParam.Seed1Param.AdvanceOffset;
          local_c8.RandParam.Seed2Param.InputPtr =
               local_c8.RandParam.Seed2Param.InputPtr + local_c8.RandParam.Seed2Param.AdvanceOffset;
          local_c8.RandParam.Seed3Param.InputPtr =
               local_c8.RandParam.Seed3Param.InputPtr + local_c8.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_c8.RandParam.Seed1Param.InputPtr =
               local_c8.RandParam.Seed1Param.InputPtr + local_c8.RandParam.Seed1Param.AdvanceOffset;
          local_c8.RandParam.Seed2Param.InputPtr =
               local_c8.RandParam.Seed2Param.InputPtr + local_c8.RandParam.Seed2Param.AdvanceOffset;
          local_c8.RandParam.Seed3Param.InputPtr =
               local_c8.RandParam.Seed3Param.InputPtr + local_c8.RandParam.Seed3Param.AdvanceOffset;
          pTVar7 = FNDIRandomInfoPolicy::Rand3(&local_c8,local_58,iVar9);
          fVar11 = (pTVar7->field0_0x0)._s_0.X;
        }
        uVar10 = (int)((float)(iVar8 + 1) * fVar11) + (local_d8.Ptr)->NumFilteredSockets;
        uVar5 = 0;
        if ((int)uVar10 < ((local_d8.Ptr)->FilteredAndUnfilteredSockets).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar9 = iVar9 + 1;
        *pfVar6 = (float)(uint)*(ushort *)
                                (((local_d8.Ptr)->FilteredAndUnfilteredSockets).AllocatorInstance.
                                 Data + (longlong)(int)uVar10 * 2);
        pfVar6 = pfVar6 + iVar3;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  return;
}

// VMRandomUnfilteredTriangle @ 148fd9350

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomUnfilteredTriangle
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  FStaticMeshLODResources *pFVar5;
  FStaticMeshLODResources *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FStaticMeshLODResources *pFVar10;
  float *pfVar11;
  TVector<float> *pTVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *pTVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  FScriptContainerElement *pFVar23;
  float *pfVar24;
  float *pfVar25;
  int *piVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  FScriptContainerElement *local_1d0;
  int local_1c8 [2];
  ulonglong local_1c0;
  FNDIRandomInfoPolicy local_1b8;
  FNDIOutputParam<UE::Math::TVector<float>_> local_148;
  longlong local_118;
  FScriptContainerElement *local_110;
  TVector<float>_u_0 local_108;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_f8;
  FStaticMeshLODResources *local_e8;
  FColorVertexBuffer *local_e0 [2];
  TVector<float>_u_0 local_d0;
  TVector<float>_u_0 local_c0;
  TVector<float> local_b0;
  TVector<float> local_a4;
  TVector<float> local_98;
  TVector<float> local_8c;
  TVector<float> local_80;
  TVector<float> local_74 [5];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_f8,param_1);
  local_e8 = (FStaticMeshLODResources *)0x0;
  pFVar10 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                      (local_f8.Ptr,local_e0);
  pFVar5 = local_e8;
  pFVar6 = local_e8;
  if (local_e8 != pFVar10) {
    if (pFVar10 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar6 = pFVar10;
    if (local_e8 != (FStaticMeshLODResources *)0x0) {
      plVar15 = &local_e8->_padding_;
      LOCK();
      lVar14 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if (((int)lVar14 == 1) && (plVar15 != (longlong *)0x0)) {
        plVar15 = &local_e8->_padding_;
        local_e8 = pFVar10;
        (**(code **)*plVar15)(pFVar5,1);
        pFVar6 = local_e8;
      }
    }
  }
  local_e8 = pFVar6;
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_1b8,param_1);
  local_1c8[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1c8);
  local_1d0 = (FScriptContainerElement *)
              (pfVar11 + local_1c8[0] * param_1->PerInstanceFnInstanceIdx);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_148,param_1);
  fVar4 = __real_3f800000;
  iVar17 = (local_f8.Ptr)->NumUnfilteredSections;
  iVar2 = (local_f8.Ptr)->NumFilteredSections;
  pFVar23 = ((local_f8.Ptr)->FilteredAndUnfilteredSectionInfos).AllocatorInstance.Data;
  if (iVar17 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar17 == 0) {
    iVar17 = 0;
    if (0 < param_1->NumInstances) {
      local_118 = (longlong)local_148.X.AdvanceOffset << 2;
      local_1c0 = (longlong)local_148.Y.AdvanceOffset << 2;
      pFVar23 = (FScriptContainerElement *)((longlong)local_1c8[0] << 2);
      local_108._0_8_ = (longlong)local_148.Z.AdvanceOffset << 2;
      piVar19 = local_1b8.RandParam.Seed2Param.InputPtr;
      piVar22 = local_1b8.RandParam.Seed3Param.InputPtr;
      pfVar11 = local_148.Z.Register;
      pfVar24 = local_148.Y.Register;
      pfVar25 = local_148.X.Register;
      piVar26 = local_1b8.RandParam.Seed1Param.InputPtr;
      local_110 = pFVar23;
      do {
        local_1b8.RandInfo.Seed1 = *piVar26;
        piVar26 = piVar26 + local_1b8.RandParam.Seed1Param.AdvanceOffset;
        local_1b8.RandInfo.Seed3 = *piVar22;
        piVar22 = piVar22 + local_1b8.RandParam.Seed3Param.AdvanceOffset;
        local_1b8.RandInfo.Seed2 = *piVar19;
        piVar19 = piVar19 + local_1b8.RandParam.Seed2Param.AdvanceOffset;
        pFVar1 = pFVar23 + (longlong)local_1d0;
        *(float *)local_1d0 = 0.0;
        local_1b8.RandParam.Seed1Param.InputPtr = piVar26;
        local_1b8.RandParam.Seed2Param.InputPtr = piVar19;
        local_1b8.RandParam.Seed3Param.InputPtr = piVar22;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar30 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar27 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_c0._s_0,iVar17);
          pFVar23 = local_110;
          uVar27 = local_c0._s_0.X;
          uVar30 = local_c0._s_0.Y;
        }
        iVar17 = iVar17 + 1;
        fVar29 = SQRT((float)uVar27);
        *pfVar25 = fVar4 - fVar29;
        *pfVar24 = (fVar4 - (float)uVar30) * fVar29;
        *pfVar11 = fVar29 * (float)uVar30;
        pfVar11 = (float *)(local_108._0_8_ + (longlong)pfVar11);
        pfVar24 = (float *)(local_1c0 + (longlong)pfVar24);
        pfVar25 = (float *)(local_118 + (longlong)pfVar25);
        local_1d0 = pFVar1;
      } while (iVar17 < param_1->NumInstances);
    }
    goto LAB_148fd99e2;
  }
  fVar4 = __real_3f800000;
  if ((local_e8 == (FStaticMeshLODResources *)0x0) ||
     ((local_f8.Ptr)->bIsCpuUniformlyDistributedSampling == 0)) {
    iVar9 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_1b8.RandInfo.Seed1 = *local_1b8.RandParam.Seed1Param.InputPtr;
        local_1b8.RandInfo.Seed2 = *local_1b8.RandParam.Seed2Param.InputPtr;
        iVar20 = *local_1b8.RandParam.Seed3Param.InputPtr;
        local_1b8.RandParam.Seed3Param.InputPtr =
             local_1b8.RandParam.Seed3Param.InputPtr + local_1b8.RandParam.Seed3Param.AdvanceOffset;
        local_1b8.RandInfo.Seed3 = iVar20;
        if (iVar20 == -1) {
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          fVar29 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
        }
        else {
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_80,iVar9);
          fVar29 = (pTVar12->field0_0x0)._s_0.X;
        }
        uVar21 = (uint)((float)iVar17 * fVar29);
        uVar16 = 0;
        if ((int)uVar21 < iVar17) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar20 == -1) {
          uVar8 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar8;
          fVar29 = (float)(uVar8 >> 9 | 0x3f800000) - fVar4;
        }
        else {
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,local_74,iVar9);
          fVar29 = (pTVar12->field0_0x0)._s_0.X;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar14 = (longlong)local_1c8[0];
        *(int *)local_1d0 =
             (int)((float)*(uint *)(pFVar23 +
                                   (longlong)(int)uVar21 * 0x10 + 4 + (longlong)iVar2 * 0x10) *
                  fVar29) +
             *(int *)(pFVar23 + (longlong)(int)uVar21 * 0x10 + (longlong)iVar2 * 0x10);
        if (iVar20 == -1) {
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar30 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar27 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_d0._s_0,iVar9);
          uVar27 = local_d0._s_0.X;
          uVar30 = local_d0._s_0.Y;
        }
        iVar9 = iVar9 + 1;
        fVar29 = SQRT((float)uVar27);
        pfVar11 = local_148.X.Register + local_148.X.AdvanceOffset;
        *local_148.X.Register = fVar4 - fVar29;
        pfVar24 = local_148.Y.Register + local_148.Y.AdvanceOffset;
        *local_148.Y.Register = (fVar4 - (float)uVar30) * fVar29;
        pfVar25 = local_148.Z.Register + local_148.Z.AdvanceOffset;
        *local_148.Z.Register = fVar29 * (float)uVar30;
        local_1d0 = local_1d0 + lVar14 * 4;
        local_148.X.Register = pfVar11;
        local_148.Y.Register = pfVar24;
        local_148.Z.Register = pfVar25;
      } while (iVar9 < param_1->NumInstances);
    }
  }
  else {
    iVar9 = (local_f8.Ptr)->NumUnfilteredSections;
    local_118 = CONCAT44(local_118._4_4_,iVar9);
    local_110 = ((local_f8.Ptr)->FilteredAndUnfilteredSections).AllocatorInstance.Data +
                (longlong)(local_f8.Ptr)->NumFilteredSections * 4;
    if ((iVar9 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar4 = __real_3f800000;
    iVar20 = 0;
    if (0 < param_1->NumInstances) {
      do {
        local_1c0 = local_1c0 & 0xffffffff00000000;
        local_1b8.RandInfo.Seed1 = *local_1b8.RandParam.Seed1Param.InputPtr;
        local_1b8.RandInfo.Seed2 = *local_1b8.RandParam.Seed2Param.InputPtr;
        local_1b8.RandInfo.Seed3 = *local_1b8.RandParam.Seed3Param.InputPtr;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          fVar29 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          fVar28 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          local_1b8.RandParam.Seed3Param.InputPtr =
               local_1b8.RandParam.Seed3Param.InputPtr +
               local_1b8.RandParam.Seed3Param.AdvanceOffset;
        }
        else {
          local_1b8.RandParam.Seed1Param.InputPtr =
               local_1b8.RandParam.Seed1Param.InputPtr +
               local_1b8.RandParam.Seed1Param.AdvanceOffset;
          local_1b8.RandParam.Seed2Param.InputPtr =
               local_1b8.RandParam.Seed2Param.InputPtr +
               local_1b8.RandParam.Seed2Param.AdvanceOffset;
          local_1b8.RandParam.Seed3Param.InputPtr =
               local_1b8.RandParam.Seed3Param.InputPtr +
               local_1b8.RandParam.Seed3Param.AdvanceOffset;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_b0,iVar20);
          fVar29 = (pTVar12->field0_0x0)._s_0.X;
          pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_a4,iVar20);
          fVar28 = (pTVar12->field0_0x0)._s_0.X;
        }
        uVar16 = (uint)((float)iVar17 * fVar29);
        uVar21 = 0;
        if ((int)uVar16 < iVar17) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(float *)(pFVar23 + (longlong)(int)uVar16 * 0x10 + (longlong)iVar2 * 0x10 + 8) <=
            fVar28) {
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar16 = *(uint *)(pFVar23 + (longlong)(int)uVar16 * 0x10 + (longlong)iVar2 * 0x10 + 0xc);
        }
        uVar21 = 0;
        if ((int)uVar16 < iVar9) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar18 = &local_e8->AreaWeightedSectionSamplers;
        uVar21 = *(uint *)(local_110 + (longlong)(int)uVar16 * 4);
        if ((-1 < (int)uVar21) && ((int)uVar21 < (local_e8->AreaWeightedSectionSamplers).ArrayNum))
        {
          if (((int)uVar21 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar13 = pTVar18->AllocatorInstance;
          if (((ulonglong)FVar13 & 1) != 0) {
            FVar13 = (ForAnyElementType)
                     ((longlong)&(pTVar18->AllocatorInstance).field_0x0 + ((longlong)FVar13 >> 0x18)
                     );
          }
          if (*(int *)((longlong)FVar13 + 0x10U + (longlong)(int)uVar21 * 0x40) != 0) {
            pTVar18 = &local_e8->AreaWeightedSectionSamplers;
            uVar8 = 0;
            if ((int)uVar21 < (local_e8->AreaWeightedSectionSamplers).ArrayNum) {
              uVar8 = ~uVar21 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar13 = pTVar18->AllocatorInstance;
            if (((ulonglong)FVar13 & 1) != 0) {
              FVar13 = (ForAnyElementType)
                       ((longlong)&(pTVar18->AllocatorInstance).field_0x0 +
                       ((longlong)FVar13 >> 0x18));
            }
            if (local_1b8.RandInfo.Seed3 == -1) {
              uVar8 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_1b8.Context)->RandStream->Seed = uVar8;
              fVar29 = (float)(uVar8 >> 9 | 0x3f800000) - fVar4;
              uVar8 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
              (local_1b8.Context)->RandStream->Seed = uVar8;
              fVar28 = (float)(uVar8 >> 9 | 0x3f800000) - fVar4;
            }
            else {
              pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_98,iVar20);
              fVar29 = (pTVar12->field0_0x0)._s_0.X;
              pTVar12 = FNDIRandomInfoPolicy::Rand3(&local_1b8,&local_8c,iVar20);
              fVar28 = (pTVar12->field0_0x0)._s_0.X;
            }
            iVar9 = FWeightedRandomSampler::GetEntryIndex
                              ((FWeightedRandomSampler *)
                               ((longlong)FVar13 + (longlong)(int)uVar21 * 0x40),fVar28,fVar29);
            uVar21 = 0;
            if ((int)uVar16 < iVar17) {
              uVar21 = ~uVar16 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_1c0 = CONCAT44(local_1c0._4_4_,
                                 *(int *)(pFVar23 +
                                         (longlong)(int)uVar16 * 0x10 + (longlong)iVar2 * 0x10) +
                                 iVar9);
          }
        }
        lVar14 = (longlong)local_1c8[0];
        *(float *)local_1d0 = (float)local_1c0;
        if (local_1b8.RandInfo.Seed3 == -1) {
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar30 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
          uVar16 = (local_1b8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
          (local_1b8.Context)->RandStream->Seed = uVar16;
          uVar27 = (float)(uVar16 >> 9 | 0x3f800000) - fVar4;
        }
        else {
          FNDIRandomInfoPolicy::Rand3(&local_1b8,(TVector<float> *)&local_108._s_0,iVar20);
          uVar27 = local_108._s_0.X;
          uVar30 = local_108._s_0.Y;
        }
        iVar20 = iVar20 + 1;
        fVar29 = SQRT((float)uVar27);
        pfVar11 = local_148.X.Register + local_148.X.AdvanceOffset;
        *local_148.X.Register = fVar4 - fVar29;
        pfVar24 = local_148.Y.Register + local_148.Y.AdvanceOffset;
        *local_148.Y.Register = (fVar4 - (float)uVar30) * fVar29;
        pfVar25 = local_148.Z.Register + local_148.Z.AdvanceOffset;
        *local_148.Z.Register = fVar29 * (float)uVar30;
        iVar9 = (int)local_118;
        local_1d0 = local_1d0 + lVar14 * 4;
        local_148.X.Register = pfVar11;
        local_148.Y.Register = pfVar24;
        local_148.Z.Register = pfVar25;
      } while (iVar20 < param_1->NumInstances);
    }
  }
LAB_148fd99e2:
  if (local_e8 != (FStaticMeshLODResources *)0x0) {
    plVar15 = &local_e8->_padding_;
    LOCK();
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((((int)lVar14 == 1) && (plVar15 != (longlong *)0x0)) &&
       (local_e8 != (FStaticMeshLODResources *)0x0)) {
      (**(code **)local_e8->_padding_)(local_e8,1);
    }
  }
  return;
}

// VMRandomVertex @ 148fd9ed0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMRandomVertex
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FStaticMeshLODResources *pFVar6;
  float *pfVar7;
  TVector<float> *pTVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  float fVar15;
  FStaticMeshLODResources *local_res10;
  undefined1 local_108 [16];
  FNDIRandomInfoPolicy local_f8;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_88;
  FStaticMeshLODResources *local_78;
  FColorVertexBuffer *local_70 [7];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(&local_88,param_1);
  iVar10 = 0;
  local_78 = (FStaticMeshLODResources *)0x0;
  pFVar6 = NDIStaticMeshLocal::FInstanceData_GameThread::GetCurrentLODWithVertexColorOverrides
                     (local_88.Ptr,local_70);
  local_res10 = local_78;
  if (local_78 != pFVar6) {
    if (pFVar6 != (FStaticMeshLODResources *)0x0) {
      LOCK();
      *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
      UNLOCK();
    }
    local_res10 = pFVar6;
    if (local_78 != (FStaticMeshLODResources *)0x0) {
      plVar1 = &local_78->_padding_;
      LOCK();
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)local_78->_padding_)(local_78,1);
      }
    }
  }
  TNDIRandomHelper<FNDIRandomInfoPolicy>::TNDIRandomHelper<FNDIRandomInfoPolicy>
            ((TNDIRandomHelper<FNDIRandomInfoPolicy> *)&local_f8,param_1);
  uVar5 = 0;
  local_108._8_4_ = 0.0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister
                     (param_1,(int *)&(((TVector<float> *)local_108)->field0_0x0)._s_0.Z);
  lVar13 = (longlong)(int)local_108._8_4_;
  iVar9 = local_108._8_4_ * param_1->PerInstanceFnInstanceIdx;
  if (((local_res10 != (FStaticMeshLODResources *)0x0) &&
      ((local_res10->VertexBuffers).PositionVertexBuffer.Data != (uchar *)0x0)) &&
     (bVar3 = FPositionVertexBuffer::GetAllowCPUAccess
                        (&(local_res10->VertexBuffers).PositionVertexBuffer), bVar3)) {
    uVar5 = (local_res10->VertexBuffers).PositionVertexBuffer.NumVertices;
  }
  fVar2 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    uVar4 = 1;
    if (uVar5 != 1 && -1 < (int)(uVar5 - 1)) {
      uVar4 = uVar5;
    }
    pfVar7 = pfVar7 + iVar9;
    piVar11 = local_f8.RandParam.Seed2Param.InputPtr;
    piVar12 = local_f8.RandParam.Seed1Param.InputPtr;
    piVar14 = local_f8.RandParam.Seed3Param.InputPtr;
    do {
      local_f8.RandInfo.Seed1 = *piVar12;
      piVar12 = piVar12 + local_f8.RandParam.Seed1Param.AdvanceOffset;
      local_f8.RandInfo.Seed2 = *piVar11;
      piVar11 = piVar11 + local_f8.RandParam.Seed2Param.AdvanceOffset;
      local_f8.RandInfo.Seed3 = *piVar14;
      piVar14 = piVar14 + local_f8.RandParam.Seed3Param.AdvanceOffset;
      local_f8.RandParam.Seed1Param.InputPtr = piVar12;
      local_f8.RandParam.Seed2Param.InputPtr = piVar11;
      local_f8.RandParam.Seed3Param.InputPtr = piVar14;
      if (local_f8.RandInfo.Seed3 == -1) {
        uVar5 = (local_f8.Context)->RandStream->Seed * 0xbb38435 + 0x3619636b;
        (local_f8.Context)->RandStream->Seed = uVar5;
        fVar15 = (float)(uVar5 >> 9 | 0x3f800000) - fVar2;
      }
      else {
        pTVar8 = FNDIRandomInfoPolicy::Rand3(&local_f8,(TVector<float> *)local_108,iVar10);
        fVar15 = (pTVar8->field0_0x0)._s_0.X;
      }
      iVar10 = iVar10 + 1;
      *pfVar7 = (float)(int)((float)(int)uVar4 * fVar15);
      pfVar7 = pfVar7 + lVar13;
    } while (iVar10 < param_1->NumInstances);
  }
  if (local_res10 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &local_res10->_padding_;
    LOCK();
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)local_res10->_padding_)(local_res10,1);
    }
  }
  return;
}

// VMSetInstanceIndex @ 148fda160

void __thiscall
UNiagaraDataInterfaceStaticMesh::VMSetInstanceIndex
          (UNiagaraDataInterfaceStaticMesh *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread> local_38 [2];
  int local_18 [4];
  
  VectorVM::FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIStaticMeshLocal::FInstanceData_GameThread>(local_38,param_1);
  iVar4 = 0;
  local_18[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  bVar2 = false;
  pfVar3 = pfVar3 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    fVar5 = (float)(local_38[0].Ptr)->InstanceIndex;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + local_18[0];
      (local_38[0].Ptr)->InstanceIndex = (int)fVar1;
      iVar4 = iVar4 + 1;
      bVar2 = (bool)(bVar2 | fVar5 != fVar1);
      fVar5 = fVar1;
    } while (iVar4 < param_1->NumInstances);
    if (bVar2) {
      NDIStaticMeshLocal::FInstanceData_GameThread::UpdateTransformsInstanceIndexChanged
                (local_38[0].Ptr);
    }
  }
  return;
}

// execOnSourceEndPlay @ 148fdb090

void __cdecl
UNiagaraDataInterfaceStaticMesh::execOnSourceEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[5].field_0x20 = *(int *)&param_1[5].field_0x20 + 1;
  UnbindSourceDelegates((UNiagaraDataInterfaceStaticMesh *)param_1);
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[1].field_0x20,(FObjectPtr)local_res10);
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_28[0] = 0;
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)local_28);
  *(int *)&param_1[2].field_0x20 = local_res10[0].ObjectIndex;
  *(int *)&param_1[2].field_0x24 = local_res10[0].ObjectSerialNumber;
  return;
}

// execSetNiagaraStaticMeshDIInstanceIndex @ 148fdb2a0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceStaticMesh::execSetNiagaraStaticMeshDIInstanceIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FName FVar3;
  UNiagaraComponent *pUVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  int local_res10 [2];
  FName local_res20;
  UNiagaraComponent *local_18 [2];
  
  local_18[0] = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_18[0];
  FVar3 = local_res20;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,pUVar4,FVar3);
  if ((pUVar6 != (UNiagaraDataInterface *)0x0) && (*(int *)&pUVar6[3].Proxy.Ptr != iVar2)) {
    *(int *)&pUVar6[4]._padding_ = (int)pUVar6[4]._padding_ + 1;
    *(int *)&pUVar6[3].Proxy.Ptr = iVar2;
  }
  return;
}

