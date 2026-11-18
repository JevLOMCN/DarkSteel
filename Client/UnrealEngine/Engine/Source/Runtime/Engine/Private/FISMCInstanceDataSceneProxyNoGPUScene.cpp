// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// ApplyDataChanges<FReorderTableIndexRemap> @ 147d62df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::ApplyDataChanges<FReorderTableIndexRemap>
          (FISMCInstanceDataSceneProxyNoGPUScene *this,FISMInstanceUpdateChangeSet *param_1,
          FReorderTableIndexRemap *param_2,int param_3,FWriteView *param_4,
          FStaticMeshInstanceData *param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FRenderTransform *pFVar5;
  TVector<double> *pTVar6;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  FStaticMeshInstanceData *this_00;
  bool bVar19;
  uint uVar20;
  uchar *puVar21;
  undefined8 uVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  FISMInstanceUpdateChangeSet *pFVar32;
  longlong lVar33;
  float fVar34;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  FISMInstanceUpdateChangeSet *pFStack_2a8;
  char local_2a0;
  undefined8 local_29c;
  undefined1 local_290 [16];
  ulonglong local_280;
  longlong *local_278;
  FWriteView *local_270;
  FStaticMeshInstanceData *local_268;
  FReorderTableIndexRemap *local_260;
  FDeltaRange<1> local_258;
  TArray<float,TSizedDefaultAllocator<32>_> local_248;
  FISMInstanceUpdateChangeSet *local_238;
  uint uStack_230;
  uint uStack_22c;
  int local_228;
  undefined4 uStack_224;
  FConstIterator local_220;
  TVector<float>_u_0 local_1f8;
  TVector<float>_u_0 local_1e8;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  TVector4<float>_u_0 local_1b8;
  uint local_1a8;
  TMatrix<float> local_198;
  TMatrix<float> local_158;
  TMatrix<float> local_118;
  TMatrix<float> local_d8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_268 = param_5;
  local_270 = param_4;
  if ((param_1->_padding_ & 0x20000) == 0) {
    iVar30 = 0;
  }
  else {
    iVar30 = (int)param_1->_padding_;
  }
  *param_4->NumCustomDataFloats = iVar30;
  param_5->NumCustomDataFloats = *param_4->NumCustomDataFloats;
  param_5->NumInstances = param_3;
  local_260 = param_2;
  (**(code **)((longlong)*param_5->InstanceOriginData + 8))(param_5->InstanceOriginData,param_3,0);
  puVar21 = (uchar *)(**(code **)((longlong)*param_5->InstanceOriginData + 0x30))();
  param_5->InstanceOriginDataPtr = puVar21;
  (**(code **)((longlong)*param_5->InstanceLightmapData + 8))
            (param_5->InstanceLightmapData,param_5->NumInstances,0);
  puVar21 = (uchar *)(**(code **)((longlong)*param_5->InstanceLightmapData + 0x30))();
  param_5->InstanceLightmapDataPtr = puVar21;
  (**(code **)((longlong)*param_5->InstanceTransformData + 8))
            (param_5->InstanceTransformData,param_5->NumInstances,0);
  puVar21 = (uchar *)(**(code **)((longlong)*param_5->InstanceTransformData + 0x30))();
  param_5->InstanceTransformDataPtr = puVar21;
  (**(code **)((longlong)*param_5->InstanceCustomData + 8))
            (param_5->InstanceCustomData,param_5->NumCustomDataFloats * param_5->NumInstances,0);
  puVar21 = (uchar *)(**(code **)((longlong)*param_5->InstanceCustomData + 0x30))();
  param_5->InstanceCustomDataPtr = puVar21;
  pFVar5 = param_4->PrimitiveToRelativeWorld;
  lVar33 = param_1->_padding_;
  *(longlong *)&pFVar5->TransformRows[0].field0_0x0 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar5->TransformRows[0].field0_0x0 + 8) = lVar33;
  lVar33 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar5->TransformRows[1].field0_0x0 + 4) = param_1->_padding_;
  *(longlong *)&pFVar5->TransformRows[2].field0_0x0 = lVar33;
  lVar33 = param_1->_padding_;
  *(longlong *)((longlong)&pFVar5->TransformRows[2].field0_0x0 + 8) = param_1->_padding_;
  *(longlong *)((longlong)&(pFVar5->Origin).field0_0x0 + 4) = lVar33;
  pTVar6 = param_4->PrimitiveWorldSpaceOffset;
  dVar12 = (double)param_1->_padding_;
  (pTVar6->field0_0x0)._s_0.X = (double)param_1->_padding_;
  (pTVar6->field0_0x0)._s_0.Y = dVar12;
  (pTVar6->field0_0x0)._s_0.Z = (double)param_1->_padding_;
  if (((param_1->_padding_ & 0x200000) != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ChangeSet.Flags.bHasPerInstanceLocalBounds",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x282,L""), bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar7 = param_4->InstanceLocalBounds;
  plVar23 = &param_1->_padding_;
  if (pTVar7 != (TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *)plVar23) {
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)*plVar23;
    *plVar23 = 0;
    pTVar7->ArrayNum = (int)param_1->_padding_;
    pTVar7->ArrayMax = *(int *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  FISMCInstanceDataSceneProxy::GetLocalBoundsPadExtent
            ((TVector<float> *)&local_1f8._s_0,param_4->PrimitiveToRelativeWorld,
             *(float *)((longlong)&param_1->_padding_ + 4));
  pTVar7 = param_4->InstanceLocalBounds;
  iVar30 = pTVar7->ArrayNum;
  pFVar27 = (pTVar7->AllocatorInstance).Data;
  pFVar8 = pFVar27 + (longlong)iVar30 * 0x18;
  while( true ) {
    if (pTVar7->ArrayNum != iVar30) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<FRenderBounds,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b8);
    }
    if (pFVar27 == pFVar8) break;
    *(float *)pFVar27 = *(float *)pFVar27 - local_1f8._s_0.X;
    *(float *)(pFVar27 + 4) = *(float *)(pFVar27 + 4) - local_1f8._s_0.Y;
    *(float *)(pFVar27 + 8) = *(float *)(pFVar27 + 8) - local_1f8._s_0.Z;
    *(float *)(pFVar27 + 0xc) = local_1f8._s_0.X + *(float *)(pFVar27 + 0xc);
    *(float *)(pFVar27 + 0x10) = local_1f8._s_0.Y + *(float *)(pFVar27 + 0x10);
    *(float *)(pFVar27 + 0x14) = local_1f8._s_0.Z + *(float *)(pFVar27 + 0x14);
    pFVar27 = pFVar27 + 0x18;
  }
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  if ((param_1->_padding_ & 0x10000) != 0) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_248,param_3,Default);
    if ((void *)param_1->_padding_ != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable((void *)param_1->_padding_);
      pcVar11 = (code *)param_1->_padding_;
      plVar23 = &param_1->_padding_;
      if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
        plVar23 = (longlong *)param_1->_padding_;
      }
      uVar22 = (**(code **)(*plVar23 + 8))();
      (*pcVar11)(uVar22,&local_248);
    }
  }
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_4->InstanceToPrimitiveRelative,param_3,Default);
  local_258.NumItems = (int)param_1->_padding_;
  if ((((char)param_1->_padding_ == '\0') && (*(char *)((longlong)&param_1->_padding_ + 6) == '\0'))
     && (iVar30 = *(int *)((longlong)&param_1->_padding_ + 4) + (int)param_1->_padding_,
        iVar30 != local_258.NumItems)) {
    local_258.bFullUpdate = false;
    local_258.NumItems = iVar30;
  }
  else {
    local_258.bFullUpdate = true;
  }
  local_278 = &param_1->_padding_;
  local_258.Tracker = (FInstanceAttributeTracker *)param_1;
  FInstanceAttributeTracker::FDeltaRange<1>::GetIterator(&local_258,&local_220);
  fVar18 = __real_3f800000;
  do {
    if (local_220.bUseIterator == false) goto LAB_147d63163;
    iVar30 = (local_220.It.Tracker)->LastChangedIndex + 1;
    if ((local_220.It.Tracker)->MaxIndex < iVar30) {
      iVar30 = (local_220.It.Tracker)->MaxIndex;
    }
    iVar24 = local_220.It.ElementOffset + local_220.It.ElementIndex * 8;
    bVar19 = SBORROW4(iVar24,iVar30);
    iVar24 = iVar24 - iVar30;
    while( true ) {
      iVar30 = local_220.ItemIndex;
      if (bVar19 == iVar24 < 0) {
        if ((param_1->_padding_ & 0x20000) == 0) goto LAB_147d63853;
        if ((int)param_1->_padding_ == 0) {
          uVar20 = 0;
          local_2b0 = 0;
          pFStack_2a8 = (FISMInstanceUpdateChangeSet *)0x0;
        }
        else {
          uVar20 = (uint)param_1->_padding_;
          local_2b0 = CONCAT44(uVar20,(undefined4)local_2b0);
          pFStack_2a8 = param_1;
          if (((char)param_1->_padding_ == '\0') &&
             (uVar31 = (int)param_1->_padding_ + (int)*local_278, uVar31 != uVar20)) {
            iVar30 = (int)param_1->_padding_;
            if ((int)param_1->_padding_ < iVar30) {
              iVar30 = (int)param_1->_padding_;
            }
            local_2b0 = CONCAT44(uVar31,(undefined4)local_2b0) & 0xffffffffffffff00;
            uVar31 = iVar30 >> 0x1f & 7;
            uVar20 = iVar30 + uVar31;
            iVar30 = (uVar20 & 7) - uVar31;
            uVar20 = (int)uVar20 >> 3;
            local_238 = param_1;
            uStack_230 = uVar20;
            local_228 = iVar30;
            if (((int)uVar20 < 0) || (iVar24 = (int)param_1->_padding_, iVar24 <= (int)uVar20)) {
              uStack_22c = 0;
            }
            else {
              uVar31 = 0;
              if ((int)uVar20 < iVar24) {
                uVar31 = ~uVar20 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uStack_22c = *(uint *)(param_1->_padding_ + (longlong)(int)uVar20 * 4) & 0x55555555;
            }
            uStack_22c = uStack_22c >> ((char)iVar30 * '\x04' & 0x1fU);
            iVar24 = (int)param_1->_padding_;
            if (iVar24 <= (int)uVar20) goto LAB_147d63699;
            goto LAB_147d63600;
          }
        }
        local_2b0 = CONCAT71(local_2b0._1_7_,1);
        pFVar32 = (FISMInstanceUpdateChangeSet *)0x0;
        local_2a0 = '\0';
        local_29c = (ulonglong)uVar20 << 0x20;
        uVar20 = 0;
        local_290._0_12_ = ZEXT812(0);
        local_280 = local_280 & 0xffffffff00000000;
        goto LAB_147d63709;
      }
      lVar33 = (longlong)local_220.ItemIndex;
      uVar20 = local_220.ItemIndex;
      if (local_220.bUseIterator != false) {
        uVar20 = local_220.It.ElementOffset + local_220.It.ElementIndex * 8;
      }
      uVar20 = FReorderTableIndexRemap::operator[](local_260,uVar20);
      lVar28 = (longlong)(int)uVar20;
      if (uVar20 != 0xffffffff) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          fVar34 = 0.0;
        }
        else {
          uVar31 = 0;
          if ((int)uVar20 < local_248.ArrayNum) {
            uVar31 = ~uVar20 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          fVar34 = *(float *)(local_248.AllocatorInstance.Data + lVar28 * 4);
        }
        uVar31 = 0;
        if (iVar30 < (int)param_1->_padding_) {
          uVar31 = (uint)~iVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = param_1->_padding_;
        auVar2 = *(undefined1 (*) [16])(lVar9 + 0x18 + lVar33 * 0x30);
        auVar3 = *(undefined1 (*) [16])(lVar9 + lVar33 * 0x30);
        auVar4 = *(undefined1 (*) [16])(lVar9 + 0xc + lVar33 * 0x30);
        local_198.M[3]._0_8_ = *(undefined8 *)(lVar9 + 0x24 + lVar33 * 0x30);
        local_198.M[2] = (float  [4])insertps(auVar2,auVar2,8);
        local_198.M[3][3] = fVar18;
        local_198.M[3][2] = *(float *)(lVar9 + 0x2c + lVar33 * 0x30);
        local_198.M[0] = (float  [4])insertps(auVar3,auVar3,8);
        local_198.M[1] = (float  [4])insertps(auVar4,auVar4,8);
        FStaticMeshInstanceData::SetInstance
                  (local_268,uVar20,&local_198,fVar34,&UE::Math::TVector2<double>::ZeroVector,
                   &UE::Math::TVector2<double>::ZeroVector);
        uVar31 = 0;
        if (iVar30 < (int)param_1->_padding_) {
          uVar31 = (uint)~iVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = param_1->_padding_;
        auVar2 = *(undefined1 (*) [16])(lVar9 + 0x18 + lVar33 * 0x30);
        pfVar1 = (float *)(lVar9 + 0x24 + lVar33 * 0x30);
        local_d8.M[3][0] = *pfVar1;
        local_d8.M[3][1] = pfVar1[1];
        auVar3 = *(undefined1 (*) [16])(lVar9 + lVar33 * 0x30);
        auVar4 = *(undefined1 (*) [16])(lVar9 + 0xc + lVar33 * 0x30);
        local_d8.M[2] = (float  [4])insertps(auVar2,auVar2,8);
        local_d8.M[3][2] = *(float *)(lVar9 + 0x2c + lVar33 * 0x30);
        auVar2._0_8_ = param_1->_padding_;
        auVar2._8_8_ = param_1->_padding_;
        local_d8.M[0] = (float  [4])insertps(auVar3,auVar3,8);
        local_118.M[2] = (float  [4])insertps(auVar2,auVar2,8);
        local_d8.M[1] = (float  [4])insertps(auVar4,auVar4,8);
        local_118.M[3][2] = *(float *)((longlong)&param_1->_padding_ + 4);
        auVar3._0_8_ = param_1->_padding_;
        auVar3._8_8_ = param_1->_padding_;
        auVar2 = *(undefined1 (*) [16])((longlong)&param_1->_padding_ + 4);
        local_d8.M[3][3] = fVar18;
        local_118.M[3][0] = *(float *)((longlong)&param_1->_padding_ + 4);
        local_118.M[3][1] = *(float *)&param_1->_padding_;
        local_118.M[0] = (float  [4])insertps(auVar3,auVar3,8);
        local_118.M[1] = (float  [4])insertps(auVar2,auVar2,8);
        local_118.M[3][3] = fVar18;
        VectorMatrixMultiply(&local_158,&local_d8,&local_118);
        local_1e8._s_0.X = local_158.M[0][0];
        local_1e8._s_0.Y = local_158.M[0][1];
        local_1e8._s_0.Z = local_158.M[0][2];
        fStack_1dc = local_158.M[1][0];
        local_1d8 = local_158.M[1][1];
        fStack_1d4 = local_158.M[1][2];
        fStack_1d0 = local_158.M[2][0];
        fStack_1cc = local_158.M[2][1];
        local_1c8 = local_158.M[2][2];
        fStack_1c4 = local_158.M[3][0];
        fStack_1c0 = local_158.M[3][1];
        fStack_1bc = local_158.M[3][2];
        FRenderTransform::Orthogonalize((FRenderTransform *)&local_1e8._s_0);
        uVar22 = CONCAT44(local_1e8._s_0.Y,local_1e8._s_0.X);
        uVar13 = CONCAT44(fStack_1dc,local_1e8._s_0.Z);
        uVar14 = CONCAT44(fStack_1d4,local_1d8);
        uVar15 = CONCAT44(fStack_1cc,fStack_1d0);
        pTVar10 = local_270->InstanceToPrimitiveRelative;
        uVar16 = CONCAT44(fStack_1c4,local_1c8);
        uVar17 = CONCAT44(fStack_1bc,fStack_1c0);
        uVar31 = 0;
        if ((int)uVar20 < pTVar10->ArrayNum) {
          uVar31 = ~uVar20 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar8 = (pTVar10->AllocatorInstance).Data;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30) = uVar22;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30 + 8) = uVar13;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30 + 0x10) = uVar14;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30 + 0x10 + 8) = uVar15;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30 + 0x20) = uVar16;
        *(undefined8 *)(pFVar8 + lVar28 * 0x30 + 0x20 + 8) = uVar17;
      }
      local_220.ItemIndex = local_220.ItemIndex + 1;
      if (local_220.bUseIterator != false) break;
LAB_147d63163:
      bVar19 = SBORROW4(local_220.ItemIndex,local_220.MaxNum);
      iVar24 = local_220.ItemIndex - local_220.MaxNum;
    }
    local_220.It.CurrentElement = local_220.It.CurrentElement & 0xfffffffc;
    FInstanceAttributeTracker::FAnyValidIterator<3>::AdvanceUntilAny(&local_220.It);
  } while( true );
LAB_147d63600:
  if (uStack_22c == 0) {
    uVar20 = uVar20 + 1;
    iVar30 = 0;
    local_228 = 0;
    uStack_230 = uVar20;
    if (iVar24 <= (int)uVar20) {
      uStack_22c = 0;
      goto LAB_147d63699;
    }
    if (((int)uVar20 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar24 = (int)param_1->_padding_;
    uStack_22c = *(uint *)(param_1->_padding_ + (longlong)(int)uVar20 * 4) & 0x55555555;
    if (iVar24 <= (int)uVar20) goto LAB_147d63699;
    goto LAB_147d63600;
  }
  local_1a8 = 0;
  if (uStack_22c != 0) {
    for (; (uStack_22c >> local_1a8 & 1) == 0; local_1a8 = local_1a8 + 1) {
    }
  }
  uVar20 = 0x20;
  if (uStack_22c != 0) {
    uVar20 = local_1a8;
  }
  uStack_22c = uStack_22c >> ((char)(uVar20 >> 2) * '\x04' & 0x1fU);
  local_228 = iVar30 + (uVar20 >> 2);
LAB_147d63699:
  local_290._8_4_ = uStack_230;
  local_290._0_8_ = local_238;
  local_290._12_4_ = uStack_22c;
  local_2a0 = '\x01';
  local_280 = CONCAT44(uStack_224,local_228);
  local_29c = 0;
  pFVar32 = local_238;
  uVar20 = uStack_230;
LAB_147d63709:
  iVar30 = 0;
LAB_147d63710:
  cVar29 = local_2a0;
  if (local_2a0 == '\0') goto LAB_147d63730;
  iVar24 = *(int *)((longlong)&pFVar32->_padding_ + 4) + 1;
  if ((int)pFVar32->_padding_ < iVar24) {
    iVar24 = (int)pFVar32->_padding_;
  }
  iVar25 = (int)local_280 + uVar20 * 8;
  bVar19 = SBORROW4(iVar25,iVar24);
  iVar25 = iVar25 - iVar24;
  do {
    if (bVar19 == iVar25 < 0) {
LAB_147d63853:
      this_00 = local_268;
      if ((param_1->_padding_ & 0x100000) != 0) {
        iVar30 = (int)param_1->_padding_;
        uVar20 = 0;
        if (0 < iVar30) {
          lVar33 = 0;
          do {
            iVar24 = FReorderTableIndexRemap::operator[](local_260,uVar20);
            if (iVar24 != -1) {
              uVar31 = 0;
              if ((int)uVar20 < (int)param_1->_padding_) {
                uVar31 = ~uVar20 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pfVar1 = (float *)(param_1->_padding_ + lVar33);
              local_1b8._s_0.X = *pfVar1;
              local_1b8._s_0.Y = pfVar1[1];
              local_1b8._s_0.Z = pfVar1[2];
              local_1b8._s_0.W = pfVar1[3];
              FStaticMeshInstanceData::SetInstanceLightMapDataInternal
                        (this_00,iVar24,(TVector4<float> *)&local_1b8._s_0);
            }
            uVar20 = uVar20 + 1;
            lVar33 = lVar33 + 0x10;
          } while ((int)uVar20 < iVar30);
        }
      }
      if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
      }
      return;
    }
    iVar24 = iVar30;
    if (cVar29 != '\0') {
      iVar24 = (int)local_280 + uVar20 * 8;
    }
    iVar24 = FReorderTableIndexRemap::operator[](local_260,iVar24);
    if (iVar24 != -1) {
      iVar26 = 0;
      iVar25 = *local_270->NumCustomDataFloats;
      if (0 < iVar25) {
        do {
          uVar31 = iVar25 * iVar30 + iVar26;
          uVar20 = 0;
          if ((int)uVar31 < (int)param_1->_padding_) {
            uVar20 = ~uVar31 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FStaticMeshInstanceData::SetInstanceCustomDataInternal
                    (local_268,iVar24,iVar26,
                     *(float *)(param_1->_padding_ + (longlong)(int)uVar31 * 4));
          iVar26 = iVar26 + 1;
          iVar25 = *local_270->NumCustomDataFloats;
        } while (iVar26 < iVar25);
        uVar20 = local_290._8_4_;
        iVar30 = (int)local_29c;
        cVar29 = local_2a0;
      }
    }
    iVar30 = iVar30 + 1;
    local_29c = CONCAT44(local_29c._4_4_,iVar30);
    if (cVar29 != '\0') break;
LAB_147d63730:
    bVar19 = SBORROW4(iVar30,local_29c._4_4_);
    iVar25 = iVar30 - local_29c._4_4_;
  } while( true );
  local_290._12_4_ = local_290._12_4_ & 0xfffffffa;
  FInstanceAttributeTracker::FAnyValidIterator<5>::AdvanceUntilAny
            ((FAnyValidIterator<5> *)local_290);
  pFVar32 = (FISMInstanceUpdateChangeSet *)local_290._0_8_;
  uVar20 = local_290._8_4_;
  iVar30 = (int)local_29c;
  goto LAB_147d63710;
}

// FISMCInstanceDataSceneProxyNoGPUScene @ 147d77ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FISMCInstanceDataSceneProxyNoGPUScene * __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::FISMCInstanceDataSceneProxyNoGPUScene
          (FISMCInstanceDataSceneProxyNoGPUScene *this,FStaticShaderPlatform param_1,Type param_2,
          bool param_3)

{
  FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
            ((FISMCInstanceDataSceneProxy *)this,param_1,param_2);
  *(bool *)&this->_padding_ = param_3;
  this->_padding_ = (longlong)&___7FISMCInstanceDataSceneProxyNoGPUScene__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->LegacyInstanceBuffer).Ptr = (FStaticMeshInstanceBuffer *)0x0;
  return this;
}

// ~FISMCInstanceDataSceneProxyNoGPUScene @ 147d7b270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::~FISMCInstanceDataSceneProxyNoGPUScene
          (FISMCInstanceDataSceneProxyNoGPUScene *this)

{
  FStaticMeshInstanceBuffer *pFVar1;
  FStaticMeshInstanceData *this_00;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FStaticMeshInstanceBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FStaticMeshInstanceBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->_padding_ = (longlong)&___7FISMCInstanceDataSceneProxyNoGPUScene__6B_;
  pFVar1 = (this->LegacyInstanceBuffer).Ptr;
  if (pFVar1 != (FStaticMeshInstanceBuffer *)0x0) {
    (this->LegacyInstanceBuffer).Ptr = (FStaticMeshInstanceBuffer *)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    pFStack_70 = pFVar1;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer_::__l5::TSTR_FReleasePerInstanceRenderData906>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::__l5::TSTR_FReleasePerInstanceRenderData906>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
  pFVar1 = (this->LegacyInstanceBuffer).Ptr;
  if (pFVar1 != (FStaticMeshInstanceBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this_00 = (FStaticMeshInstanceData *)this->_padding_;
  if (this_00 != (FStaticMeshInstanceData *)0x0) {
    FStaticMeshInstanceData::~FStaticMeshInstanceData(this_00);
    ::operator_delete(this_00,0x50);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FISMCInstanceDataSceneProxy::~FISMCInstanceDataSceneProxy((FISMCInstanceDataSceneProxy *)this);
  return;
}

// Build @ 147d88f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::Build
          (FISMCInstanceDataSceneProxyNoGPUScene *this,FISMInstanceUpdateChangeSet *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  TUniquePtr<FStaticMeshInstanceBuffer,TDefaultDelete<FStaticMeshInstanceBuffer>_> *pTVar3;
  int *piVar4;
  uint *puVar5;
  uchar *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FStaticMeshInstanceBuffer *pFVar13;
  FStaticMeshInstanceBuffer *pFVar14;
  undefined8 *puVar15;
  uint uVar16;
  FAccessTag FVar17;
  int *piVar18;
  ForElementType<unsigned_int> FVar19;
  int iVar20;
  FStaticMeshInstanceBuffer *pFVar21;
  int iVar22;
  FStaticMeshInstanceBuffer *pFVar23;
  undefined1 auStackY_228 [32];
  undefined1 local_1f8 [4];
  uint local_1f4;
  FIdentityIndexRemap local_1f0 [4];
  uint local_1ec;
  uint local_1e8;
  FAccessTag local_1e0;
  FStaticMeshInstanceData local_1d8;
  FISMCInstanceDataSceneProxyNoGPUScene *local_188;
  int local_180;
  int local_17c;
  FReorderTableIndexRemap local_178;
  longlong local_168 [2];
  TVector4<float>_u_0 local_158;
  TVector4<float>_u_0 local_148;
  FWriteView local_138;
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  TVector4<float>_u_0 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_188 = this;
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  if (((char)param_1->_padding_ == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChangeSet.IsFullUpdate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x32a,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((char)this->_padding_ == '\0') && ((param_1->LegacyInstanceReorderTable).ArrayNum != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bLegacyReordered || ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x332,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UpdateIdMapping<FIdentityIndexRemap>
            ((FInstanceUpdateChangeSet *)param_1,local_1f0,(FInstanceIdIndexMap *)&this->_padding_);
  if ((char)this->_padding_ == '\0') {
    iVar20 = (int)this->_padding_;
    if (iVar20 == 0) {
      iVar20 = (int)this->_padding_;
    }
    if ((param_1->PostUpdateNumInstances != iVar20) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bLegacyReordered || ChangeSet.PostUpdateNumInstances == InstanceIdIndexMap.GetMaxInstanceIndex()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                            ,0x335,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar1 = &param_1->LegacyInstanceReorderTable;
  pFVar14 = (FStaticMeshInstanceBuffer *)0x0;
  plVar2 = &this->_padding_;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar2 != pTVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)(pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = (param_1->LegacyInstanceReorderTable).ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = (param_1->LegacyInstanceReorderTable).ArrayMax;
    (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
    (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  }
  uVar16 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  local_1e0.Kind = Writer;
  local_1e0.WriterTag = uVar16 >> 0x10 ^ uVar16;
  FVar17 = local_1e0;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_138,local_1e0);
  *local_138.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  local_1d8.InstanceOriginData = (FStaticMeshVertexDataInterface *)0x0;
  local_1d8.InstanceTransformData = (FStaticMeshVertexDataInterface *)0x0;
  local_1d8.InstanceLightmapData = (FStaticMeshVertexDataInterface *)0x0;
  local_1d8.InstanceCustomDataPtr = (uchar *)0x0;
  local_1d8.NumInstances = 0;
  local_1d8.NumCustomDataFloats = 0;
  local_1d8.bUseHalfFloat = true;
  local_1d8.InstanceOriginDataPtr = (uchar *)0x0;
  local_1d8.InstanceTransformDataPtr = (uchar *)0x0;
  local_1d8.InstanceLightmapDataPtr = (uchar *)0x0;
  local_1d8.InstanceCustomData = (FStaticMeshVertexDataInterface *)0x0;
  pFVar13 = ::operator_new(0x28);
  local_1d8.InstanceOriginData = (FStaticMeshVertexDataInterface *)pFVar14;
  if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = (longlong)&___7__TStaticMeshVertexData_U__TVector4_M_Math_UE____6B_;
    pFVar13->_padding_ = (longlong)&___7__TResourceArray_U__TVector4_M_Math_UE___0A___6B_;
    pFVar13->_padding_ = 0;
    *(undefined1 *)&(pFVar13->InstanceData).Object = 0;
    local_1d8.InstanceOriginData = (FStaticMeshVertexDataInterface *)pFVar13;
  }
  (**(code **)(((FStaticMeshInstanceBuffer *)local_1d8.InstanceOriginData)->_padding_ + 8))
            (local_1d8.InstanceOriginData,0,0);
  pFVar13 = ::operator_new(0x28);
  local_1d8.InstanceLightmapData = (FStaticMeshVertexDataInterface *)pFVar14;
  if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ =
         (longlong)
         &___7__TStaticMeshVertexData_UFInstanceLightMapVector_FStaticMeshInstanceData____6B_;
    pFVar13->_padding_ =
         (longlong)&___7__TResourceArray_UFInstanceLightMapVector_FStaticMeshInstanceData___0A___6B_
    ;
    pFVar13->_padding_ = 0;
    *(undefined1 *)&(pFVar13->InstanceData).Object = 0;
    local_1d8.InstanceLightmapData = (FStaticMeshVertexDataInterface *)pFVar13;
  }
  (**(code **)(((FStaticMeshInstanceBuffer *)local_1d8.InstanceLightmapData)->_padding_ + 8))
            (local_1d8.InstanceLightmapData,0,0);
  if (local_1d8.bUseHalfFloat == false) {
    pFVar13 = ::operator_new(0x28);
    local_1d8.InstanceTransformData = (FStaticMeshVertexDataInterface *)pFVar14;
    if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
      pFVar13->_padding_ = 0;
      pFVar13->_padding_ =
           (longlong)
           &___7__TStaticMeshVertexData_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData____6B_
      ;
      pFVar13->_padding_ =
           (longlong)
           &___7__TResourceArray_U__FInstanceTransformMatrix_M_FStaticMeshInstanceData___0A___6B_;
      pFVar13->_padding_ = 0;
      *(undefined1 *)&(pFVar13->InstanceData).Object = 0;
      local_1d8.InstanceTransformData = (FStaticMeshVertexDataInterface *)pFVar13;
    }
  }
  else {
    pFVar13 = ::operator_new(0x28);
    local_1d8.InstanceTransformData = (FStaticMeshVertexDataInterface *)pFVar14;
    if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
      pFVar13->_padding_ = 0;
      pFVar13->_padding_ =
           (longlong)
           &
           ___7__TStaticMeshVertexData_U__FInstanceTransformMatrix_VFFloat16___FStaticMeshInstanceData____6B_
      ;
      pFVar13->_padding_ =
           (longlong)
           &
           ___7__TResourceArray_U__FInstanceTransformMatrix_VFFloat16___FStaticMeshInstanceData___0A___6B_
      ;
      pFVar13->_padding_ = 0;
      *(undefined1 *)&(pFVar13->InstanceData).Object = 0;
      local_1d8.InstanceTransformData = (FStaticMeshVertexDataInterface *)pFVar13;
    }
  }
  (**(code **)(((FStaticMeshInstanceBuffer *)local_1d8.InstanceTransformData)->_padding_ + 8))
            (local_1d8.InstanceTransformData,0,0);
  pFVar13 = ::operator_new(0x28);
  local_1d8.InstanceCustomData = (FStaticMeshVertexDataInterface *)pFVar14;
  if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = (longlong)&___7__TStaticMeshVertexData_M__6B_;
    pFVar13->_padding_ = (longlong)&___7__TResourceArray_M_0A___6B_;
    pFVar13->_padding_ = 0;
    *(undefined1 *)&(pFVar13->InstanceData).Object = 0;
    local_1d8.InstanceCustomData = (FStaticMeshVertexDataInterface *)pFVar13;
  }
  (**(code **)(((FStaticMeshInstanceBuffer *)local_1d8.InstanceCustomData)->_padding_ + 8))
            (local_1d8.InstanceCustomData,0,0);
  local_178.MaxValidIndex = param_1->PostUpdateNumInstances;
  local_178.ReorderTable = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar2;
  ApplyDataChanges<FReorderTableIndexRemap>
            (this,param_1,&local_178,local_178.MaxValidIndex,&local_138,&local_1d8);
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar17);
  if (((char)this->_padding_ != '\0') && (param_1->PostUpdateNumInstances != (int)this->_padding_))
  {
    local_b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_b8.NumBits = 0;
    local_b8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              (&local_b8,param_1->PostUpdateNumInstances,true);
    piVar18 = (int *)*plVar2;
    iVar20 = (int)this->_padding_;
    piVar4 = piVar18 + iVar20;
    while( true ) {
      if ((int)this->_padding_ != iVar20) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f8);
      }
      if (piVar18 == piVar4) break;
      iVar22 = *piVar18;
      if (iVar22 != -1) {
        if (((iVar22 < 0) || (local_b8.NumBits <= iVar22)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar19 = (ForElementType<unsigned_int>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_b8.AllocatorInstance.SecondaryData;
        }
        iVar11 = iVar22;
        if (iVar22 < 0) {
          iVar11 = iVar22 + 0x1f;
        }
        puVar5 = (uint *)((longlong)FVar19 + (longlong)(iVar11 >> 5) * 4);
        *puVar5 = *puVar5 & ~(1 << ((byte)iVar22 & 0x1f));
      }
      piVar18 = piVar18 + 1;
    }
    local_1e0.WriterTag = 1;
    local_1e0.Kind = Reader;
    local_1e8 = 0;
    local_1ec = 0;
    pFVar13 = pFVar14;
    pFVar21 = pFVar14;
    pFVar23 = pFVar14;
    if (local_b8.NumBits != 0) {
      FVar19 = (ForElementType<unsigned_int>)&local_b8;
      if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_b8.AllocatorInstance.SecondaryData;
      }
      uVar16 = *(uint *)FVar19;
      while (uVar16 == 0) {
        local_1e8 = (int)pFVar13 + 0x20;
        pFVar13 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1e8;
        iVar20 = (int)pFVar23;
        local_1ec = iVar20 + 1;
        pFVar23 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1ec;
        if ((int)((local_b8.NumBits - 1U) + ((int)(local_b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_1ec) {
          pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)(uint)local_b8.NumBits;
          goto LAB_147d8944e;
        }
        uVar16 = *(uint *)((uchar *)((longlong)FVar19 + 4) + (longlong)iVar20 * 4);
      }
      local_1e0.Kind = Reader;
      local_1e0.WriterTag = -uVar16 & uVar16;
      uVar7 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_180 = (int)lVar8;
      uVar16 = local_180 + -1 + (int)pFVar13;
      pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)uVar16;
      if (local_b8.NumBits < (int)uVar16) {
        pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)(uint)local_b8.NumBits;
      }
    }
LAB_147d8944e:
    local_1f4 = 0xffffffff;
    FVar17 = local_1e0;
    if ((int)pFVar21 < local_b8.NumBits) {
      do {
        uVar16 = local_1f4;
        iVar20 = (int)pFVar21;
        local_158._0_8_ = 0;
        local_158._8_8_ = 0;
        FStaticMeshInstanceData::SetInstanceOriginInternal
                  (&local_1d8,iVar20,(TVector4<float> *)&local_158._s_0);
        local_98._0_8_ = 0;
        local_98._8_8_ = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if (local_1d8.bUseHalfFloat == false) {
          FStaticMeshInstanceData::SetInstanceTransformInternal<float>
                    (&local_1d8,iVar20,(TVector4<float> *)&local_98._s_0);
        }
        else {
          FStaticMeshInstanceData::SetInstanceTransformInternal<FFloat16>
                    (&local_1d8,iVar20,(TVector4<float> *)&local_98._s_0);
        }
        local_148._0_8_ = 0;
        local_148._8_8_ = 0;
        FStaticMeshInstanceData::SetInstanceLightMapDataInternal
                  (&local_1d8,iVar20,(TVector4<float> *)&local_148._s_0);
        if (0 < local_1d8.NumCustomDataFloats) {
          pFVar13 = pFVar14;
          iVar22 = 0;
          if (local_1d8.NumCustomDataFloats < 1) goto LAB_147d8959e;
          do {
            puVar6 = local_1d8.InstanceCustomDataPtr;
            pcVar9 = *(code **)(*(longlong *)&(local_1d8.InstanceCustomData)->field_0x0 + 0x28);
            iVar11 = (**(code **)(*(longlong *)&(local_1d8.InstanceCustomData)->field_0x0 + 0x20))()
            ;
            iVar12 = (*pcVar9)(local_1d8.InstanceCustomData);
            iVar22 = (int)pFVar13;
            puVar6 = puVar6 + (longlong)(local_1d8.NumCustomDataFloats * iVar20 + iVar22) * 4;
            if (local_1d8.InstanceCustomDataPtr + (uint)(iVar11 * iVar12) < puVar6 + 4) {
              bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_9111849448622782879>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                                  ,0x661,
                                  "(void*)((&ElementData[CustomDataIndex]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                                 );
              if (bVar10) {
code_r0x000147d89598:
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            else if (puVar6 < local_1d8.InstanceCustomDataPtr) {
              bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_9111849448622782878>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                                  ,0x662,
                                  "(void*)((&ElementData[CustomDataIndex]) + 0) >= (void*)(InstanceCustomDataPtr)"
                                 );
              if (bVar10) goto code_r0x000147d89598;
            }
            else {
              puVar6[0] = '\0';
              puVar6[1] = '\0';
              puVar6[2] = '\0';
              puVar6[3] = '\0';
            }
LAB_147d8959e:
            pFVar13 = (FStaticMeshInstanceBuffer *)(ulonglong)(iVar22 + 1U);
          } while ((int)(iVar22 + 1U) < local_1d8.NumCustomDataFloats);
          pFVar23 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1ec;
          pFVar13 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1e8;
          FVar17 = local_1e0;
          uVar16 = local_1f4;
        }
        local_1f4 = uVar16 & ~FVar17.WriterTag;
        FVar19 = (ForElementType<unsigned_int>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_b8.AllocatorInstance.SecondaryData;
        }
        uVar16 = local_1f4 & *(uint *)((longlong)FVar19 + (longlong)(int)pFVar23 * 4);
        while (uVar16 == 0) {
          local_1e8 = (int)pFVar13 + 0x20;
          pFVar13 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1e8;
          iVar20 = (int)pFVar23;
          local_1ec = iVar20 + 1;
          pFVar23 = (FStaticMeshInstanceBuffer *)(ulonglong)local_1ec;
          if ((int)((local_b8.NumBits - 1U) + ((int)(local_b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
              (int)local_1ec) {
            pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)(uint)local_b8.NumBits;
            goto LAB_147d89657;
          }
          uVar16 = *(uint *)((uchar *)((longlong)FVar19 + 4) + (longlong)iVar20 * 4);
          local_1f4 = 0xffffffff;
        }
        FVar17.Kind = Reader;
        FVar17.WriterTag = -uVar16 & uVar16;
        uVar7 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_17c = (int)lVar8;
        uVar16 = local_17c + -1 + (int)pFVar13;
        pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)uVar16;
        local_1e0 = FVar17;
        if (local_b8.NumBits < (int)uVar16) {
          pFVar21 = (FStaticMeshInstanceBuffer *)(ulonglong)(uint)local_b8.NumBits;
        }
LAB_147d89657:
      } while ((int)pFVar21 < local_b8.NumBits);
    }
    this = local_188;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
      this = local_188;
    }
  }
  pTVar3 = &this->LegacyInstanceBuffer;
  if (pTVar3->Ptr == (FStaticMeshInstanceBuffer *)0x0) {
    pFVar13 = ::operator_new(0xf8);
    if (pFVar13 != (FStaticMeshInstanceBuffer *)0x0) {
      pFVar14 = FStaticMeshInstanceBuffer::FStaticMeshInstanceBuffer
                          (pFVar13,*(Type *)((longlong)&this->_padding_ + 4),false);
    }
    if (pTVar3 == (TUniquePtr<FStaticMeshInstanceBuffer,TDefaultDelete<FStaticMeshInstanceBuffer>_>
                   *)local_168) {
      if (pFVar14 == (FStaticMeshInstanceBuffer *)0x0) goto LAB_147d89705;
      puVar15 = (undefined8 *)pFVar14->_padding_;
    }
    else {
      pFVar13 = pTVar3->Ptr;
      pTVar3->Ptr = pFVar14;
      if (pFVar13 == (FStaticMeshInstanceBuffer *)0x0) goto LAB_147d89705;
      puVar15 = (undefined8 *)pFVar13->_padding_;
      pFVar14 = pFVar13;
    }
    (*(code *)*puVar15)(pFVar14,1);
  }
LAB_147d89705:
  FStaticMeshInstanceBuffer::InitFromPreallocatedData((this->LegacyInstanceBuffer).Ptr,&local_1d8);
  ((this->LegacyInstanceBuffer).Ptr)->bFlushToGPUPending = true;
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  if ((FStaticMeshInstanceBuffer *)local_1d8.InstanceOriginData != (FStaticMeshInstanceBuffer *)0x0)
  {
    (*(code *)**(undefined8 **)&(local_1d8.InstanceOriginData)->field_0x0)
              (local_1d8.InstanceOriginData,1);
  }
  if ((FStaticMeshInstanceBuffer *)local_1d8.InstanceLightmapData !=
      (FStaticMeshInstanceBuffer *)0x0) {
    (*(code *)**(undefined8 **)&(local_1d8.InstanceLightmapData)->field_0x0)
              (local_1d8.InstanceLightmapData,1);
  }
  if ((FStaticMeshInstanceBuffer *)local_1d8.InstanceTransformData !=
      (FStaticMeshInstanceBuffer *)0x0) {
    (*(code *)**(undefined8 **)&(local_1d8.InstanceTransformData)->field_0x0)
              (local_1d8.InstanceTransformData,1);
  }
  if ((FStaticMeshInstanceBuffer *)local_1d8.InstanceCustomData != (FStaticMeshInstanceBuffer *)0x0)
  {
    (*(code *)**(undefined8 **)&(local_1d8.InstanceCustomData)->field_0x0)
              (local_1d8.InstanceCustomData,1);
  }
  return;
}

// BuildFromLegacyData @ 147d8a270

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::BuildFromLegacyData
          (FISMCInstanceDataSceneProxyNoGPUScene *this,
          TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *param_1,
          FRenderBounds *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  TUniquePtr<FStaticMeshInstanceBuffer,TDefaultDelete<FStaticMeshInstanceBuffer>_> *pTVar3;
  FStaticMeshInstanceData *this_00;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FAccessTag FVar6;
  FAccessTag FVar7;
  FStaticMeshInstanceBuffer *pFVar8;
  FStaticMeshInstanceBuffer *pFVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong local_b8 [2];
  FWriteView local_a8;
  
  plVar1 = &this->_padding_;
  pFVar9 = (FStaticMeshInstanceBuffer *)0x0;
  if ((TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *)plVar1 !=
      param_1) {
    this_00 = (FStaticMeshInstanceData *)*plVar1;
    *plVar1 = (longlong)param_1->Ptr;
    param_1->Ptr = (FStaticMeshInstanceData *)0x0;
    if (this_00 != (FStaticMeshInstanceData *)0x0) {
      FStaticMeshInstanceData::~FStaticMeshInstanceData(this_00);
      ::operator_delete(this_00,0x50);
    }
  }
  plVar2 = &this->_padding_;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar2 != param_3) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)(param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = param_3->ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
  }
  uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  FVar6.Kind = Writer;
  FVar6.WriterTag = uVar11;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_a8,FVar6);
  (local_a8.InstanceLocalBounds)->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,1,(local_a8.InstanceLocalBounds)->ArrayMax,
             &(local_a8.InstanceLocalBounds)->AllocatorInstance,1,
             &(local_a8.InstanceLocalBounds)->ArrayMax);
  pFVar4 = ((local_a8.InstanceLocalBounds)->AllocatorInstance).Data;
  uVar5 = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  *(undefined8 *)pFVar4 = *(undefined8 *)&(param_2->Min).field0_0x0;
  *(undefined8 *)(pFVar4 + 8) = uVar5;
  *(undefined8 *)(pFVar4 + 0x10) = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  FISMCInstanceDataSceneProxyLegacyReordered::UpdateInstancesTransforms
            ((FISMCInstanceDataSceneProxyLegacyReordered *)this,&local_a8,
             (FStaticMeshInstanceData *)*plVar1);
  FVar7.Kind = Writer;
  FVar7.WriterTag = uVar11;
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar7);
  pTVar3 = &this->LegacyInstanceBuffer;
  if (pTVar3->Ptr == (FStaticMeshInstanceBuffer *)0x0) {
    pFVar8 = ::operator_new(0xf8);
    if (pFVar8 != (FStaticMeshInstanceBuffer *)0x0) {
      pFVar9 = FStaticMeshInstanceBuffer::FStaticMeshInstanceBuffer
                         (pFVar8,*(Type *)((longlong)&this->_padding_ + 4),false);
    }
    if (pTVar3 == (TUniquePtr<FStaticMeshInstanceBuffer,TDefaultDelete<FStaticMeshInstanceBuffer>_>
                   *)local_b8) {
      if (pFVar9 == (FStaticMeshInstanceBuffer *)0x0) goto LAB_147d8a416;
      puVar10 = (undefined8 *)pFVar9->_padding_;
    }
    else {
      pFVar8 = pTVar3->Ptr;
      pTVar3->Ptr = pFVar9;
      if (pFVar8 == (FStaticMeshInstanceBuffer *)0x0) goto LAB_147d8a416;
      puVar10 = (undefined8 *)pFVar8->_padding_;
      pFVar9 = pFVar8;
    }
    (*(code *)*puVar10)(pFVar9,1);
  }
LAB_147d8a416:
  FStaticMeshInstanceBuffer::InitFromPreallocatedData
            (pTVar3->Ptr,(FStaticMeshInstanceData *)*plVar1);
  pTVar3->Ptr->bFlushToGPUPending = true;
  return;
}

// GetLegacyInstanceBuffer @ 147da64a0

FStaticMeshInstanceBuffer * __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::GetLegacyInstanceBuffer
          (FISMCInstanceDataSceneProxyNoGPUScene *this)

{
  if ((char)this->_padding_ != '\0') {
    FInstanceDataUpdateTaskInfo::WaitForUpdateCompletion
              ((FInstanceDataUpdateTaskInfo *)&this->_padding_);
    return (this->LegacyInstanceBuffer).Ptr;
  }
  return (FStaticMeshInstanceBuffer *)0x0;
}

// ReleaseStaticMeshInstanceBuffer @ 147dbc950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer
          (FISMCInstanceDataSceneProxyNoGPUScene *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FStaticMeshInstanceBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FStaticMeshInstanceBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = (this->LegacyInstanceBuffer).Ptr;
  if (pFStack_70 != (FStaticMeshInstanceBuffer *)0x0) {
    (this->LegacyInstanceBuffer).Ptr = (FStaticMeshInstanceBuffer *)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer_::__l5::TSTR_FReleasePerInstanceRenderData906>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FISMCInstanceDataSceneProxyNoGPUScene::ReleaseStaticMeshInstanceBuffer'::__l5::TSTR_FReleasePerInstanceRenderData906>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// Update @ 147dc6910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::Update
          (FISMCInstanceDataSceneProxyNoGPUScene *this,FISMInstanceUpdateChangeSet *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  FStaticMeshInstanceBuffer *pFVar3;
  FStaticMeshInstanceData *this_00;
  FStaticMeshVertexDataInterface *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FAccessTag FVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auStackY_1a8 [32];
  uint local_178;
  FIdentityIndexRemap local_174 [4];
  int local_170;
  uint local_16c;
  int local_168;
  ulonglong local_160;
  uint local_158;
  EKind EStack_154;
  longlong *local_150;
  int local_148;
  int local_144;
  FISMCInstanceDataSceneProxyNoGPUScene *local_140;
  FISMInstanceUpdateChangeSet *local_138;
  FReorderTableIndexRemap local_130;
  TVector4<float>_u_0 local_118;
  TVector4<float>_u_0 local_108;
  FWriteView local_f8;
  TVector4<float>_u_0 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_140 = this;
  local_138 = param_1;
  if (((char)param_1->_padding_ != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x2fb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((char)this->_padding_ == '\0') && ((param_1->LegacyInstanceReorderTable).ArrayNum != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLegacyReordered || ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x2fd,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  EStack_154 = Writer;
  uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_158 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  local_158 = local_158 >> 0x10 ^ local_158;
  FVar14.Kind = Writer;
  FVar14.WriterTag = local_158;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_f8,FVar14);
  *local_f8.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  pFVar3 = (this->LegacyInstanceBuffer).Ptr;
  if (((pFVar3->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_168 = ((pFVar3->InstanceData).Object)->NumInstances;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
            (local_f8.VisibleInstances,param_1->PostUpdateNumInstances,true);
  (local_f8.Flags)->Packed = (local_f8.Flags)->Packed | 0x100;
  uVar11 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar13 = (uint)param_1->_padding_;
  if ((int)uVar13 < (int)uVar11) {
    uVar11 = uVar13;
  }
  bVar10 = (byte)uVar11 & 0x1f;
  iVar15 = (int)uVar11 >> 5;
  local_160 = (ulonglong)(uint)(1 << bVar10);
  local_178 = -1 << bVar10;
  uVar16 = uVar11 & 0xffffffe0;
  plVar17 = &param_1->_padding_;
  local_170 = iVar15;
  local_16c = uVar16;
  local_150 = plVar17;
  if ((((int)uVar11 < 0) || ((int)uVar13 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = (uint)param_1->_padding_;
  if (uVar11 != uVar13) {
    if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
      plVar17 = (longlong *)param_1->_padding_;
    }
    uVar11 = local_178 & *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4);
    while (uVar11 == 0) {
      local_16c = uVar16 + 0x20;
      local_170 = iVar15 + 1;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_170)
      goto LAB_147dc6ec6;
      uVar11 = *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4 + 4);
      local_178 = 0xffffffff;
      iVar15 = local_170;
      uVar16 = local_16c;
    }
    local_160 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_148 = (int)lVar12;
    uVar11 = local_148 + -1 + uVar16;
    if (((int)uVar11 <= (int)uVar13) && (plVar17 = &param_1->_padding_, (int)uVar11 < (int)uVar13))
    {
      do {
        uVar13 = (uint)local_160;
        if ((int)this->_padding_ != 0) {
          uVar8 = 0;
          if ((int)uVar11 < (int)this->_padding_) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = *(uint *)(this->_padding_ + (longlong)(int)uVar11 * 4);
        }
        if (((int)uVar11 < 0) || ((int)this->_padding_ <= (int)uVar11)) {
          uVar8 = 0xffffffff;
          if ((int)uVar11 < local_168) {
            uVar8 = uVar11;
          }
        }
        else {
          if (((int)uVar11 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = *(uint *)(this->_padding_ + (longlong)(int)uVar11 * 4);
          uVar8 = 0xffffffff;
          if ((int)uVar11 < local_168) {
            uVar8 = uVar11;
          }
        }
        if (uVar8 != 0xffffffff) {
          pFVar3 = (this->LegacyInstanceBuffer).Ptr;
          if (((pFVar3->InstanceData).Object == (FStaticMeshInstanceData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = (pFVar3->InstanceData).Object;
          local_118._0_8_ = 0;
          local_118._8_8_ = 0;
          FStaticMeshInstanceData::SetInstanceOriginInternal
                    (this_00,uVar8,(TVector4<float> *)&local_118._s_0);
          local_78._0_8_ = 0;
          local_78._8_8_ = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          if (this_00->bUseHalfFloat == false) {
            FStaticMeshInstanceData::SetInstanceTransformInternal<float>
                      (this_00,uVar8,(TVector4<float> *)&local_78._s_0);
          }
          else {
            FStaticMeshInstanceData::SetInstanceTransformInternal<FFloat16>
                      (this_00,uVar8,(TVector4<float> *)&local_78._s_0);
          }
          local_108._0_8_ = 0;
          local_108._8_8_ = 0;
          FStaticMeshInstanceData::SetInstanceLightMapDataInternal
                    (this_00,uVar8,(TVector4<float> *)&local_108._s_0);
          iVar19 = 0;
          plVar17 = local_150;
          if (0 < this_00->NumCustomDataFloats) {
            if (this_00->NumCustomDataFloats < 1) goto LAB_147dc6dfe;
            do {
              pFVar4 = this_00->InstanceCustomData;
              puVar5 = this_00->InstanceCustomDataPtr;
              iVar15 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
              iVar9 = (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4);
              puVar5 = puVar5 + (longlong)(int)(uVar8 * this_00->NumCustomDataFloats + iVar19) * 4;
              if (this_00->InstanceCustomDataPtr + (uint)(iVar9 * iVar15) < puVar5 + 4) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_9111849448622782879>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                                   ,0x661,
                                   "(void*)((&ElementData[CustomDataIndex]) + 1) <= (void*)(InstanceCustomDataPtr + CurrentSize)"
                                  );
                if (bVar7) {
code_r0x000147dc6df5:
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else if (puVar5 < this_00->InstanceCustomDataPtr) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_9111849448622782878>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                                   ,0x662,
                                   "(void*)((&ElementData[CustomDataIndex]) + 0) >= (void*)(InstanceCustomDataPtr)"
                                  );
                if (bVar7) goto code_r0x000147dc6df5;
              }
              else {
                puVar5[0] = '\0';
                puVar5[1] = '\0';
                puVar5[2] = '\0';
                puVar5[3] = '\0';
              }
LAB_147dc6dfe:
              iVar19 = iVar19 + 1;
            } while (iVar19 < this_00->NumCustomDataFloats);
            uVar13 = (uint)local_160;
            this = local_140;
            plVar17 = local_150;
            iVar15 = local_170;
            uVar16 = local_16c;
          }
        }
        local_178 = ~uVar13 & local_178;
        iVar19 = (int)plVar17[3];
        plVar18 = plVar17;
        if ((longlong *)plVar17[2] != (longlong *)0x0) {
          plVar18 = (longlong *)plVar17[2];
        }
        uVar13 = local_178 & *(uint *)((longlong)plVar18 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar15;
          uVar16 = uVar16 + 0x20;
          iVar15 = iVar15 + 1;
          if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147dc6eb4;
          uVar13 = *(uint *)((longlong)plVar18 + lVar12 * 4 + 4);
          local_178 = 0xffffffff;
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_144 = (int)lVar12;
        uVar11 = local_144 + -1 + uVar16;
        local_170 = iVar15;
      } while (((int)uVar11 <= iVar19) &&
              (local_160 = (ulonglong)(-uVar13 & uVar13), local_16c = uVar16, (int)uVar11 < iVar19))
      ;
LAB_147dc6eb4:
      FVar14.Kind = EStack_154;
      FVar14.WriterTag = local_158;
      param_1 = local_138;
    }
  }
LAB_147dc6ec6:
  UpdateIdMapping<FIdentityIndexRemap>
            ((FInstanceUpdateChangeSet *)param_1,local_174,(FInstanceIdIndexMap *)&this->_padding_);
  if ((char)this->_padding_ == '\0') {
    iVar15 = (int)this->_padding_;
    if (iVar15 == 0) {
      iVar15 = (int)this->_padding_;
    }
    if ((param_1->PostUpdateNumInstances != iVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bLegacyReordered || ChangeSet.PostUpdateNumInstances == InstanceIdIndexMap.GetMaxInstanceIndex()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                           ,0x319,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar1 = &param_1->LegacyInstanceReorderTable;
  plVar17 = &this->_padding_;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar17 != pTVar1) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)(pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = (param_1->LegacyInstanceReorderTable).ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = (param_1->LegacyInstanceReorderTable).ArrayMax;
    (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
    (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  }
  local_130.MaxValidIndex = param_1->PostUpdateNumInstances;
  local_130.ReorderTable = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  ApplyDataChanges<FReorderTableIndexRemap>
            (this,param_1,&local_130,local_130.MaxValidIndex,&local_f8,
             (((this->LegacyInstanceBuffer).Ptr)->InstanceData).Object);
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar14);
  ((this->LegacyInstanceBuffer).Ptr)->bFlushToGPUPending = true;
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  return;
}

// UpdatePrimitiveTransform @ 147dc7c00

void __thiscall
FISMCInstanceDataSceneProxyNoGPUScene::UpdatePrimitiveTransform
          (FISMCInstanceDataSceneProxyNoGPUScene *this,FISMInstanceUpdateChangeSet *param_1)

{
  FStaticMeshInstanceBuffer *pFVar1;
  FStaticMeshInstanceBuffer *pFVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FAccessTag local_res8;
  FWriteView local_88;
  
  pFVar1 = (this->LegacyInstanceBuffer).Ptr;
  if (pFVar1 != (FStaticMeshInstanceBuffer *)0x0) {
    if ((pFVar1->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->LegacyInstanceBuffer).Ptr;
    iVar7 = ((pFVar1->InstanceData).Object)->NumInstances;
    if ((pFVar2->InstanceData).Object == (FStaticMeshInstanceData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar7 == ((pFVar2->InstanceData).Object)->NumInstances) goto LAB_147dc7cd9;
  }
  iVar7 = FInstanceSceneDataBuffers::GetNumInstances
                    ((FInstanceSceneDataBuffers *)&this->_padding_,(FAccessTag)0x0);
  if (iVar7 != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LegacyInstanceBuffer && LegacyInstanceBuffer->GetNumInstances() == LegacyInstanceBuffer->GetNumInstances() || InstanceSceneDataBuffers.GetNumInstances() == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                       ,0x379,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_147dc7cd9:
  if ((this->LegacyInstanceBuffer).Ptr != (FStaticMeshInstanceBuffer *)0x0) {
    uVar8 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    local_res8.Kind = Writer;
    local_res8.WriterTag = uVar8 >> 0x10 ^ uVar8;
    FInstanceSceneDataBuffers::BeginWriteAccess
              ((FInstanceSceneDataBuffers *)&this->_padding_,&local_88,local_res8);
    lVar4 = param_1->_padding_;
    *(longlong *)&(local_88.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 =
         param_1->_padding_;
    *(longlong *)((longlong)&(local_88.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 + 8) =
         lVar4;
    lVar4 = param_1->_padding_;
    *(longlong *)((longlong)&(local_88.PrimitiveToRelativeWorld)->TransformRows[1].field0_0x0 + 4) =
         param_1->_padding_;
    *(longlong *)&(local_88.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 = lVar4;
    lVar4 = param_1->_padding_;
    *(longlong *)((longlong)&(local_88.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 + 8) =
         param_1->_padding_;
    *(longlong *)((longlong)&((local_88.PrimitiveToRelativeWorld)->Origin).field0_0x0 + 4) = lVar4;
    dVar5 = (double)param_1->_padding_;
    ((local_88.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.X = (double)param_1->_padding_;
    ((local_88.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Y = dVar5;
    ((local_88.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Z = (double)param_1->_padding_;
    FISMCInstanceDataSceneProxyLegacyReordered::UpdateInstancesTransforms
              ((FISMCInstanceDataSceneProxyLegacyReordered *)this,&local_88,
               (((this->LegacyInstanceBuffer).Ptr)->InstanceData).Object);
    FInstanceSceneDataBuffers::EndWriteAccess
              ((FInstanceSceneDataBuffers *)&this->_padding_,local_res8);
  }
  return;
}

