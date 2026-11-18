// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 12

// TransferWeightsToPoint<int,float,float,float> @ 14c7a1f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FTransferBoneWeights::TransferWeightsToPoint<int,float,float,float>
          (FTransferBoneWeights *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,TVector<float> *param_3,
          TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
          *param_4,TVector<float> *param_5)

{
  ushort uVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_a8 [48];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8 = (param_5->field0_0x0)._s_0.X;
  local_d4 = (param_5->field0_0x0)._s_0.Y;
  local_e8 = &local_d8;
  local_d0 = (param_5->field0_0x0)._s_0.Z;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_6c = 0xc;
  local_c8._8_4_ = SUB84(dVar3,0);
  local_c8._0_8_ = (double)(float)*(undefined8 *)&param_3->field0_0x0;
  local_c8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_b8 = (double)(param_3->field0_0x0)._s_0.Z;
  cVar6 = (**(code **)(this->_padding_ + 0x18))(SUB84(local_b8,0),local_a8,local_c8,param_4);
  iVar5 = local_70;
  if (cVar6 == '\0') {
    bVar7 = false;
  }
  else {
    lVar12 = (longlong)local_70;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_1,local_70,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar5,Default);
    fVar4 = __real_37800080;
    uVar14 = 0;
    if (0 < iVar5) {
      lVar13 = 0;
      do {
        uVar11 = ~uVar14 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar14 < local_70) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          local_e8 = (undefined4 *)(longlong)(int)uVar14;
          local_e0 = (longlong)local_70;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        puVar10 = local_a8;
        if (local_78 != (undefined1 *)0x0) {
          puVar10 = local_78;
        }
        uVar1 = *(ushort *)(puVar10 + lVar13 * 4);
        uVar9 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          local_e8 = (undefined4 *)(longlong)(int)uVar14;
          local_e0 = (longlong)param_1->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        *(uint *)((param_1->AllocatorInstance).Data + lVar13 * 4) = (uint)uVar1;
        uVar9 = 0;
        if ((int)uVar14 < local_70) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          local_e8 = (undefined4 *)(longlong)(int)uVar14;
          local_e0 = (longlong)local_70;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        puVar10 = local_a8;
        if (local_78 != (undefined1 *)0x0) {
          puVar10 = local_78;
        }
        uVar1 = *(ushort *)(puVar10 + lVar13 * 4 + 2);
        uVar9 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar9 = uVar11;
        }
        if (uVar9 == 0) {
          local_e8 = (undefined4 *)(longlong)(int)uVar14;
          local_e0 = (longlong)param_2->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        uVar14 = uVar14 + 1;
        *(float *)((param_2->AllocatorInstance).Data + lVar13 * 4) = (float)uVar1 * fVar4;
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar12);
    }
    bVar7 = true;
  }
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  return bVar7;
}

// FTransferBoneWeights @ 14c7b4bf0

FTransferBoneWeights * __thiscall
UE::Geometry::FTransferBoneWeights::FTransferBoneWeights
          (FTransferBoneWeights *this,FDynamicMesh3 *param_1,FName *param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3)

{
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar9;
  undefined8 *puVar10;
  longlong local_18 [2];
  
  this->bUseParallel = true;
  this->TransferMethod = ClosestPointOnSurface;
  this->_padding_ = (longlong)&___7FTransferBoneWeights_Geometry_UE__6B_;
  pTVar1 = &this->InternalSourceBVH;
  pTVar9 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  this->Progress = (FProgressCancel *)0x0;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetToWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetToWorld).Translation.field0_0x0._s_0.X = (double)uVar2;
  (this->TargetToWorld).Translation.field0_0x0._s_0.Y = (double)uVar3;
  (this->TargetToWorld).Translation.field0_0x0._s_0.Z = (double)uVar4;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.X = (double)uVar5;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.Y = (double)uVar6;
  (this->TargetToWorld).Scale3D.field0_0x0._s_0.Z = (double)uVar7;
  (this->ForceInpaint).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceInpaint).ArrayNum = 0;
  (this->ForceInpaint).ArrayMax = 0;
  this->bIgnoreBoneAttributes = false;
  this->SearchRadius = -1.0;
  this->NormalThreshold = -1.0;
  this->LayeredMeshSupport = false;
  this->NumSmoothingIterations = 0;
  this->SmoothingStrength = 0.0;
  this->bUseIntrinsicLaplacian = false;
  this->MaxNumInfluences = 0xc;
  (this->ForceInpaintWeightMapName).ComparisonIndex = 0;
  (this->ForceInpaintWeightMapName).Number = 0;
  (this->TargetVerticesSubset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetVerticesSubset).ArrayNum = 0;
  (this->TargetVerticesSubset).ArrayMax = 0;
  (this->MatchedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatchedVertices).ArrayNum = 0;
  (this->MatchedVertices).ArrayMax = 0;
  this->SourceMesh = param_1;
  this->SourceProfileName = *param_2;
  pTVar1->Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->InternalSourceMeshNormals).Ptr = (FMeshNormals *)0x0;
  this->SourceBVH = param_3;
  if (param_3 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar8 = ::operator_new(0xc0);
    if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      pTVar9 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
               TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(pTVar8,this->SourceMesh,true);
    }
    if (pTVar1 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
                   *)local_18) {
      if (pTVar9 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        return this;
      }
      puVar10 = (undefined8 *)pTVar9->_padding_;
    }
    else {
      pTVar8 = pTVar1->Ptr;
      pTVar1->Ptr = pTVar9;
      if (pTVar8 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
        return this;
      }
      puVar10 = (undefined8 *)pTVar8->_padding_;
      pTVar9 = pTVar8;
    }
    (*(code *)*puVar10)(pTVar9,1);
  }
  return this;
}

// ~FTransferBoneWeights @ 14c7b7ba0

void __thiscall
UE::Geometry::FTransferBoneWeights::~FTransferBoneWeights(FTransferBoneWeights *this)

{
  FMeshNormals *pFVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar3;
  
  this->_padding_ = (longlong)&___7FTransferBoneWeights_Geometry_UE__6B_;
  pFVar1 = (this->InternalSourceMeshNormals).Ptr;
  if (pFVar1 != (FMeshNormals *)0x0) {
    pFVar2 = (pFVar1->Normals).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x18);
  }
  pTVar3 = (this->InternalSourceBVH).Ptr;
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pFVar2 = (this->MatchedVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetVerticesSubset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ForceInpaint).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14c7c6ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l36::<lambda_1>::operator()
          (void *this,int param_1)

{
  uchar *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *_Src;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar14;
  undefined1 auStackY_108 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  cVar7 = (**(code **)(**(longlong **)this + 0x20))();
  if (cVar7 == '\0') {
    uVar11 = 0;
    if (*(char *)((longlong)this + 0x28) != '\0') {
      lVar13 = *(longlong *)this;
      uVar9 = uVar11;
      if (param_1 < *(int *)(lVar13 + 0xb8)) {
        uVar9 = (uint)~param_1 >> 0x1f;
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
      param_1 = *(uint *)(*(longlong *)(lVar13 + 0xb0) + (longlong)param_1 * 4);
    }
    lVar13 = *(longlong *)((longlong)this + 8);
    if (((param_1 < 0) || (*(int *)(lVar13 + 0x20) * 0x200 + *(int *)(lVar13 + 0x24) <= param_1)) ||
       (uVar10 = (ulonglong)((uint)param_1 >> 9),
       0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar13 + 0x28) + uVar10 * 8) +
                                   (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
      bVar8 = false;
      uVar10 = (ulonglong)((uint)param_1 >> 9);
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      uVar12 = (ulonglong)(param_1 & 0x1ff);
      lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + uVar10 * 8);
      puVar2 = (undefined8 *)(lVar4 + uVar12 * 0x18);
      local_a0 = *puVar2;
      uStack_98 = puVar2[1];
      local_90 = *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18);
      if ((0.0 < *(double *)(*(longlong *)this + 0x78) ||
           *(double *)(*(longlong *)this + 0x78) == 0.0) && (*(char *)(lVar13 + 0x70) == '\0')) {
        if (**(longlong **)((longlong)this + 0x20) == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1056102092667617005>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                             ,0x113,"bHasNormals || InternalTargetMeshNormals");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar9 = uVar11;
          if (param_1 < *(int *)(**(longlong **)((longlong)this + 0x20) + 0x10)) {
            uVar9 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      local_4c = 0xc;
      cVar7 = (**(code **)(**(longlong **)this + 0x18))
                        (*(longlong **)this,local_88,&local_a0,
                         **(undefined8 **)((longlong)this + 0x10));
      iVar6 = local_50;
      if (cVar7 != '\0') {
        FVar14 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)
                   (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x20) + uVar10 * 8) +
                 uVar12 * 0x40);
        if (FVar14 != (ForElementType<UE::AnimationCore::FBoneWeight>)local_88) {
          lVar13 = (longlong)local_50;
          puVar1 = (uchar *)((longlong)FVar14 + 0x3c);
          iVar3 = *(int *)puVar1;
          *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar14 + 0x38))->
                  InlineData = local_50;
          _Src = local_88;
          if (local_58 != (undefined1 *)0x0) {
            _Src = local_58;
          }
          if ((local_50 == 0) && (iVar3 == 0)) {
            puVar1[0] = '\f';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,local_50,iVar3,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar14,
                       local_50,(int *)puVar1);
            _Dst = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar14 + 0x30);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar14 + 0x30) ==
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              _Dst = FVar14;
            }
            if (iVar6 != 0) {
              memcpy((void *)_Dst,_Src,lVar13 << 2);
            }
          }
        }
        lVar13 = *(longlong *)this;
        if (param_1 < *(int *)(lVar13 + 200)) {
          uVar11 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar13 + 0xc0)) = 1;
      }
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  return;
}

// operator() @ 14c7cea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_2>::operator()
          (void *this,int param_1)

{
  uchar *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  undefined1 *_Src;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStackY_118 [32];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [48];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  cVar7 = (**(code **)(**(longlong **)this + 0x20))();
  if (cVar7 == '\0') {
    lVar11 = *(longlong *)((longlong)this + 8);
    if (((param_1 < 0) || (*(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24) <= param_1)) ||
       (uVar10 = (ulonglong)((uint)param_1 >> 9),
       0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar11 + 0x28) + uVar10 * 8) +
                                   (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
      bVar8 = false;
      uVar10 = (ulonglong)((uint)param_1 >> 9);
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar5 = *(longlong *)this;
      iVar3 = *(int *)(lVar5 + 0xa0);
      if (iVar3 == *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24)) {
        uVar9 = 0;
        if (param_1 < iVar3) {
          uVar9 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(float *)(*(longlong *)(lVar5 + 0x98) + (longlong)param_1 * 4) != 0.0) {
          return;
        }
      }
      if ((**(longlong **)((longlong)this + 0x10) == 0) ||
         (*(float *)(*(longlong *)
                      (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x20) + uVar10 * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 4) == 0.0)) {
        lVar11 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + uVar10 * 8)
        ;
        puVar2 = (undefined8 *)(lVar11 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        local_b0 = *puVar2;
        uStack_a8 = puVar2[1];
        local_a0 = *(undefined8 *)(lVar11 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        if ((0.0 < *(double *)(*(longlong *)this + 0x78) ||
             *(double *)(*(longlong *)this + 0x78) == 0.0) &&
           (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) == '\0')) {
          if (**(longlong **)((longlong)this + 0x28) == 0) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1056102092667616893>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                               ,0x183,"bHasNormals || InternalTargetMeshNormals.IsValid()");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            uVar9 = 0;
            if (param_1 < *(int *)(**(longlong **)((longlong)this + 0x28) + 0x10)) {
              uVar9 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        local_68 = (undefined1 *)0x0;
        local_60 = 0;
        local_5c = 0xc;
        cVar7 = (**(code **)(**(longlong **)this + 0x18))
                          (*(longlong **)this,local_98,&local_b0,
                           **(undefined8 **)((longlong)this + 0x18));
        iVar3 = local_60;
        if (cVar7 != '\0') {
          _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)
                 (*(longlong *)
                   (*(longlong *)(**(longlong **)((longlong)this + 0x20) + 0x20) +
                   (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x40);
          if (_Dst != (ForElementType<UE::AnimationCore::FBoneWeight>)local_98) {
            puVar1 = (uchar *)((longlong)_Dst + 0x3c);
            lVar11 = (longlong)local_60;
            iVar4 = *(int *)puVar1;
            _Src = local_98;
            if (local_68 != (undefined1 *)0x0) {
              _Src = local_68;
            }
            *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)_Dst + 0x38))->
                    InlineData = local_60;
            if ((local_60 == 0) && (iVar4 == 0)) {
              puVar1[0] = '\f';
              puVar1[1] = '\0';
              puVar1[2] = '\0';
              puVar1[3] = '\0';
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,local_60,iVar4,(ForElementType<UE::AnimationCore::FBoneWeight> *)_Dst,
                         local_60,(int *)puVar1);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)_Dst + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                _Dst = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)_Dst + 0x30);
              }
              if (iVar3 != 0) {
                memcpy((void *)_Dst,_Src,lVar11 << 2);
              }
            }
          }
          lVar11 = *(longlong *)this;
          uVar9 = 0;
          if (param_1 < *(int *)(lVar11 + 200)) {
            uVar9 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar11 + 0xc0)) = 1;
        }
        if (local_68 != (undefined1 *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
  }
  return;
}

// operator() @ 14c7d20e0

bool __thiscall
`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l76::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (lVar1 = *(longlong *)this, param_1 < *(int *)(lVar1 + 200))) {
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 200)) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(char *)((longlong)param_1 + *(longlong *)(lVar1 + 0xc0)) != '\0') {
      return true;
    }
  }
  return false;
}

// operator() @ 14c7d3290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_4>::operator()
          (void *this)

{
  uchar *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar8;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [16];
  ForElementType<UE::AnimationCore::FBoneWeight> local_78;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((**(longlong **)((longlong)this + 0x10) != 0) &&
     (**(longlong **)((longlong)this + 0x10) != **(longlong **)((longlong)this + 0x18))) {
    iVar4 = *(int *)((longlong)this + 8);
    puVar11 = *(uint **)this;
    puVar2 = puVar11 + iVar4;
    while( true ) {
      if (*(int *)((longlong)this + 8) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_88);
      }
      if (puVar11 == puVar2) break;
      uVar5 = *puVar11;
      lVar10 = *(longlong *)((longlong)this + 0x20);
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 < *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24))) {
        lVar3 = (ulonglong)(uVar5 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar10 + 0x28) + lVar3) +
                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
          local_78.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
          local_40 = 0;
          local_3c = 0xc;
          lVar10 = (ulonglong)(uVar5 & 0x1ff) * 0x40;
          FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                  (*(longlong *)
                    (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x20) + lVar3) + lVar10)
          ;
          if ((ForElementType<UE::AnimationCore::FBoneWeight>)&local_78 != FVar9) {
            iVar6 = *(int *)((longlong)FVar9 + 0x38);
            if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30) !=
                (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar9 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30);
            }
            local_40 = iVar6;
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                      (4,2,iVar6,0xc,&local_78,iVar6,&local_3c);
            FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar8 = local_78.SecondaryData;
            }
            if (iVar6 != 0) {
              memcpy((void *)FVar8,(void *)FVar9,(longlong)iVar6 << 2);
            }
          }
          iVar6 = local_40;
          FVar9 = (ForElementType<UE::AnimationCore::FBoneWeight>)
                  (lVar10 + *(longlong *)
                             (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x20) + lVar3))
          ;
          if (FVar9 != (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78) {
            iVar7 = *(int *)((longlong)FVar9 + 0x3c);
            *(int *)((ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x38))->
                    InlineData = local_40;
            puVar1 = (uchar *)((longlong)FVar9 + 0x3c);
            FVar8 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
              FVar8 = local_78.SecondaryData;
            }
            if ((local_40 == 0) && (iVar7 == 0)) {
              puVar1[0] = '\f';
              puVar1[1] = '\0';
              puVar1[2] = '\0';
              puVar1[3] = '\0';
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                        (4,2,local_40,iVar7,(ForElementType<UE::AnimationCore::FBoneWeight> *)FVar9,
                         local_40,(int *)puVar1);
              if (*(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30) !=
                  (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                FVar9 = *(ForElementType<UE::AnimationCore::FBoneWeight> *)((longlong)FVar9 + 0x30);
              }
              if (iVar6 != 0) {
                memcpy((void *)FVar9,(void *)FVar8,(longlong)iVar6 << 2);
              }
            }
          }
          if (local_78.SecondaryData != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
            FMemory::Free((void *)local_78.SecondaryData);
          }
        }
      }
      puVar11 = puVar11 + 1;
    }
  }
  return;
}

// Cancelled @ 14c7e7ed0

bool __thiscall UE::Geometry::FTransferBoneWeights::Cancelled(FTransferBoneWeights *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// FindClosestPointOnSourceSurface @ 14c8068c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FTransferBoneWeights::FindClosestPointOnSourceSurface
          (FTransferBoneWeights *this,TVector<double> *param_1,TTransformSRT3<double> *param_2,
          int *param_3,TVector<double> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<double> *pTVar11;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStackY_1e8 [32];
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined1 local_188 [16];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  undefined8 local_108 [2];
  longlong local_f8;
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8;
  TDistPoint3Triangle3<double> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b8._s_0.Y = (param_2->Scale3D).field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y;
  local_108[0] = __real_7fefffffffffffff;
  local_1b8._s_0.X = (param_1->field0_0x0)._s_0.X * (param_2->Scale3D).field0_0x0._s_0.X;
  local_f8 = 0;
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_1b8._s_0.Z = (param_2->Scale3D).field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z;
  pTVar11 = operator*<double>(&local_140,&param_2->Rotation,(TVector<double> *)&local_1b8._s_0);
  local_190 = (param_2->Translation).field0_0x0._s_0.Z + (pTVar11->field0_0x0)._s_0.Z;
  dStack_198 = (param_2->Translation).field0_0x0._s_0.Y + (pTVar11->field0_0x0)._s_0.Y;
  local_1a0 = (param_2->Translation).field0_0x0._s_0.X + (pTVar11->field0_0x0)._s_0.X;
  pTVar12 = this->SourceBVH;
  if (pTVar12 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar12 = (this->InternalSourceBVH).Ptr;
  }
  iVar10 = (**(code **)(pTVar12->_padding_ + 0x20))
                     (SUB84(local_1a0,0),&local_1a0,local_188,local_108);
  *param_3 = iVar10;
  if (iVar10 == -1) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1056102092667616528>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                       ,0x2f0,"NearTriID != IndexConstants::InvalidID");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    bVar8 = false;
  }
  else {
    local_178._s_0.X = local_1a0;
    local_178._s_0.Y = dStack_198;
    local_178._s_0.Z = local_190;
    TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
              (&local_b8,this->SourceMesh,iVar10,(TVector<double> *)&local_178._s_0);
    uVar13 = (ulonglong)(*param_3 & 0x1ff);
    pFVar2 = (this->SourceMesh->Vertices).Blocks.AllocatorInstance.Data;
    local_158._s_0.X = local_b8.ClosestTrianglePoint.field0_0x0._s_0.X;
    local_158._s_0.Y = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Y;
    local_158._s_0.Z = local_b8.ClosestTrianglePoint.field0_0x0._s_0.Z;
    lVar3 = *(longlong *)
             ((this->SourceMesh->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)*param_3 >> 9) * 8);
    uVar1 = *(uint *)(lVar3 + 8 + uVar13 * 0xc);
    local_1b8._s_0.X = *(double *)(lVar3 + uVar13 * 0xc);
    local_1b8._8_4_ = uVar1;
    pTVar11 = VectorUtil::BarycentricCoords<double>
                        (&local_128,(TVector<double> *)&local_158._s_0,
                         (TVector<double> *)
                         (*(longlong *)
                           (pFVar2 + (((ulonglong)local_1b8._s_0.X & 0xffffffff) >> 9) * 8) +
                         (ulonglong)(SUB84(local_1b8._s_0.X,0) & 0x1ff) * 0x18),
                         (TVector<double> *)
                         (*(longlong *)(pFVar2 + ((ulonglong)local_1b8._s_0.X >> 0x29) * 8) +
                         (ulonglong)((uint)((ulonglong)local_1b8._s_0.X >> 0x20) & 0x1ff) * 0x18),
                         (TVector<double> *)
                         (*(longlong *)(pFVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 0x18));
    bVar8 = true;
    uVar5 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
    uVar6 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
    uVar7 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
    *(undefined4 *)&param_4->field0_0x0 = *(undefined4 *)&pTVar11->field0_0x0;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar5;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 8) = uVar6;
    *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc) = uVar7;
    (param_4->field0_0x0)._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  }
  if (local_f8 != 0) {
    plVar14 = local_e8;
    if (local_d0 != (longlong *)0x0) {
      plVar14 = local_d0;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return bVar8;
}

// TransferWeightsToMesh @ 14c849e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh
          (FTransferBoneWeights *this,FDynamicMesh3 *param_1,FName *param_2)

{
  atomic<unsigned_int> *paVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> *pFVar2;
  atomic<unsigned_int> aVar3;
  ushort uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar7;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *pTVar8;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  *pTVar12;
  TBoneWeightsDataSource<unsigned_short,float> TVar13;
  code *pcVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FDynamicMesh3 *pFVar19;
  FTaskHandle FVar20;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> TVar21;
  double *pdVar22;
  int *piVar23;
  TUniquePtr<UE::Geometry::TBoneWeightsDataSource<unsigned_short,float>,TDefaultDelete<UE::Geometry::TBoneWeightsDataSource<unsigned_short,float>_>_>
  TVar24;
  TUniquePtr<UE::Geometry::TBoneWeightsDataSource<unsigned_short,float>,TDefaultDelete<UE::Geometry::TBoneWeightsDataSource<unsigned_short,float>_>_>
  TVar25;
  bool bVar26;
  undefined1 uVar27;
  char cVar28;
  int iVar29;
  uint uVar30;
  FDynamicMeshAttributeSet *pFVar31;
  FDynamicMeshAttributeSet *pFVar32;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *this_00;
  FDynamicMeshAttributeSet *pFVar33;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar34;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar35;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  FTaskBase *pFVar36;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar37;
  TBoneWeightsDataSource<unsigned_short,float> *pTVar38;
  TBoneWeightsDataSource<unsigned_short,float> *pTVar39;
  char *pcVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst_00;
  longlong lVar43;
  atomic<unsigned_char> *paVar44;
  longlong *plVar45;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var46;
  ulong64 uVar47;
  int iVar48;
  FScriptContainerElement *pFVar49;
  FTaskHandle FVar50;
  longlong lVar51;
  uint uVar52;
  uint uVar53;
  FDynamicMeshAttributeSet *pFVar54;
  int iVar55;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar56;
  longlong lVar57;
  size_t _Size;
  uint uVar58;
  FTaskBase *pFVar59;
  ulonglong uVar60;
  char cVar61;
  float fVar62;
  undefined1 auStackY_7e8 [32];
  bool local_798;
  bool local_797 [3];
  char local_794;
  scalar_sum_op<double,double> local_793 [3];
  uint local_790 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_788;
  FDynamicMeshAttributeSet *local_778;
  TArray<int,TSizedDefaultAllocator<32>_> local_770;
  undefined2 local_760 [4];
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_758;
  undefined8 local_740;
  FDynamicMesh3 *local_738;
  FTaskHandle local_730;
  FDynamicMeshAttributeSet *local_728;
  int local_720;
  longlong local_718;
  FTaskBase *local_710;
  FDynamicMeshAttributeSet *local_708;
  FDynamicMeshAttributeSet *local_700;
  FDynamicMeshAttributeSet *local_6f8;
  FBoneWeightsSettings local_6f0;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_6e0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_6d0;
  FTransferBoneWeights *local_6c8;
  FName *local_6c0;
  FTaskHandle local_6b8;
  FBoneWeightsSettings local_6b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_6a0;
  TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_> local_690;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *local_688;
  undefined1 local_680 [32];
  ForAnyElementType local_660;
  undefined8 local_658;
  FVertexLinearization local_650;
  FSmoothDynamicMeshVertexSkinWeights local_628;
  ulonglong local_5e8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_5e0;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_5d8;
  FTaskHandle local_5d0;
  FTaskBase *local_5c8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_5c0;
  TPairInitializer<FName_const_&,unsigned_short_&&> local_5b8;
  FTransferBoneWeights *local_5a8 [2];
  SparseMatrix<double,0,int> local_598;
  TArray<int,TSizedDefaultAllocator<32>_> local_548;
  FDynamicMeshAttributeSet **local_538;
  FDynamicMeshAttributeSet **local_530;
  FDynamicMesh3 *local_528;
  FScriptContainerElement *local_520;
  undefined2 *local_518;
  code *local_510;
  FTransferBoneWeights **local_508;
  code *local_500;
  FTransferBoneWeights **local_4f8;
  SparseMatrixBase<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_> local_4f0 [8];
  SparseMatrix<double,0,int> *local_4e8;
  SparseMatrix<double,0,int> local_4d8;
  FTransferBoneWeights *local_488;
  FDynamicMesh3 *local_480;
  FDynamicMeshAttributeSet **local_478;
  FDynamicMeshAttributeSet **local_470;
  FDynamicMeshAttributeSet **local_468;
  undefined1 local_460;
  FTransferBoneWeights *local_458;
  FDynamicMesh3 *local_450;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> **local_448;
  FDynamicMeshAttributeSet **local_440;
  FDynamicMeshAttributeSet **local_438;
  FDynamicMeshAttributeSet **local_430;
  SparseMatrix<double,0,int> local_428;
  CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2>_const_>
  local_3d8;
  undefined4 local_377;
  undefined2 local_373;
  undefined1 local_371;
  SparseMatrix<double,0,int> local_358;
  SparseMatrix<double,0,int> local_308;
  SparseMatrix<double,0,int> local_2b8;
  FBoneWeights local_268;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_228;
  FEigenSparseMatrixAssembler local_1e8;
  FEigenSparseMatrixAssembler local_138;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_7e8;
  local_738 = param_1;
  local_6c8 = this;
  local_6c0 = param_2;
  iVar29 = (**(code **)(this->_padding_ + 8))();
  if (iVar29 != 0) {
    return false;
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    FDynamicMesh3::EnableAttributes(param_1);
  }
  if ((this->bIgnoreBoneAttributes == false) &&
     ((((param_1->AttributeSet).Ptr)->BoneNameAttrib).Ptr ==
      (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0)) {
    return false;
  }
  pFVar54 = (FDynamicMeshAttributeSet *)0x0;
  local_728 = (FDynamicMeshAttributeSet *)0x0;
  if (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0) {
    if (((this->SourceMesh->VertexNormals).bIsSet == false) &&
       ((this->InternalSourceMeshNormals).Ptr == (FMeshNormals *)0x0)) {
      pFVar31 = ::operator_new(0x18);
      local_690.Ptr = (FMeshNormals *)pFVar54;
      if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar31->_padding_ = (longlong)this->SourceMesh;
        pFVar31->_padding_ = 0;
        pFVar31->_padding_ = 0;
        local_690.Ptr = (FMeshNormals *)pFVar31;
      }
      TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>::operator=
                (&this->InternalSourceMeshNormals,&local_690);
      TVar21.Ptr = local_690.Ptr;
      if ((FDynamicMeshAttributeSet *)local_690.Ptr != (FDynamicMeshAttributeSet *)0x0) {
        pFVar6 = ((local_690.Ptr)->Normals).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(TVar21.Ptr,0x18);
      }
      FMeshNormals::Compute_FaceAvg((this->InternalSourceMeshNormals).Ptr,true,true);
    }
    if ((param_1->VertexNormals).bIsSet == false) {
      pFVar32 = ::operator_new(0x18);
      pFVar31 = local_728;
      pFVar33 = pFVar54;
      if (pFVar32 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar32->_padding_ = 0;
        pFVar32->_padding_ = 0;
        pFVar32->_padding_ = (longlong)param_1;
        pFVar33 = pFVar32;
      }
      if (local_728 != (FDynamicMeshAttributeSet *)0x0) {
        plVar45 = &local_728->_padding_;
        local_728 = pFVar33;
        if ((void *)*plVar45 != (void *)0x0) {
          FMemory::Free((void *)*plVar45);
        }
        ::operator_delete(pFVar31,0x18);
        pFVar33 = local_728;
      }
      local_728 = pFVar33;
      FMeshNormals::Compute_FaceAvg((FMeshNormals *)local_728,true,true);
    }
  }
  pFVar31 = (param_1->AttributeSet).Ptr;
  pFVar33 = pFVar54;
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar33 = pFVar31;
  }
  local_6f8 = (FDynamicMeshAttributeSet *)
              FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar33,*param_2);
  if (local_6f8 == (FDynamicMeshAttributeSet *)0x0) {
    this_00 = ::operator_new(0x30);
    local_6f8 = pFVar54;
    if (this_00 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
      local_6f8 = (FDynamicMeshAttributeSet *)
                  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::
                  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>
                            (this_00,param_1,true);
    }
    pFVar31 = (param_1->AttributeSet).Ptr;
    pFVar33 = pFVar54;
    if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar31;
    }
    FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
              (pFVar33,*param_2,
               (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)local_6f8);
  }
  local_778 = (FDynamicMeshAttributeSet *)0x0;
  if (this->bIgnoreBoneAttributes == false) {
    pFVar31 = (this->SourceMesh->AttributeSet).Ptr;
    pFVar33 = pFVar54;
    if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar31;
    }
    pTVar7 = (pFVar33->BoneNameAttrib).Ptr;
    pFVar31 = (param_1->AttributeSet).Ptr;
    iVar29 = (pTVar7->AttribValues).ArrayNum;
    pFVar33 = pFVar54;
    if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar33 = pFVar31;
    }
    pTVar8 = (pFVar33->BoneNameAttrib).Ptr;
    if ((iVar29 != (pTVar8->AttribValues).ArrayNum) ||
       (bVar26 = CompareItems<FName,int>
                           ((FName *)(pTVar7->AttribValues).AllocatorInstance.Data,
                            (FName *)(pTVar8->AttribValues).AllocatorInstance.Data,iVar29),
       param_1 = local_738, !bVar26)) {
      pFVar32 = ::operator_new(0x50);
      pFVar31 = local_778;
      pFVar33 = pFVar54;
      if (pFVar32 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar32->_padding_ = 0;
        pFVar32->ParentMesh = (FDynamicMesh3 *)0x0;
        (pFVar32->NormalLayers).Array.ArrayNum = 0;
        (pFVar32->NormalLayers).Array.ArrayMax = 0;
        (pFVar32->MaterialIDAttrib).Ptr = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
        pFVar32->_padding_ = 0;
        pFVar32->_padding_ = 0;
        (pFVar32->UVLayers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar32->UVLayers).Array.ArrayNum = 0;
        (pFVar32->UVLayers).Array.ArrayMax = 0x80;
        *(undefined4 *)&(pFVar32->NormalLayers).Array.AllocatorInstance.Data = 0xffffffff;
        *(undefined4 *)((longlong)&(pFVar32->NormalLayers).Array.AllocatorInstance.Data + 4) = 0;
        (pFVar32->ColorLayer).Ptr =
             (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
        pFVar33 = pFVar32;
      }
      if (local_778 != (FDynamicMeshAttributeSet *)0x0) {
        *(undefined4 *)&(local_778->MaterialIDAttrib).Ptr = 0;
        pTVar9 = (local_778->ColorLayer).Ptr;
        local_778 = pFVar33;
        if (pTVar9 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
          FMemory::Free(pTVar9);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)pFVar31);
        ::operator_delete(pFVar31,0x50);
        pFVar33 = local_778;
      }
      local_778 = pFVar33;
      TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                 *)local_778,(pTVar8->AttribValues).ArrayNum);
      iVar29 = (pTVar8->AttribValues).ArrayNum;
      param_1 = local_738;
      if (0 < iVar29) {
        do {
          uVar52 = (uint)pFVar54;
          uVar30 = 0;
          if ((int)uVar52 < iVar29) {
            uVar30 = ~uVar52 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            uVar27 = (*pcVar14)();
            return (bool)uVar27;
          }
          pFVar31 = local_778;
          pFVar6 = (pTVar8->AttribValues).AllocatorInstance.Data;
          puVar10 = *(ushort **)(pFVar6 + (longlong)(int)uVar52 * 8);
          local_5b8.Value = puVar10;
          uVar30 = ::GetTypeHash((FNameEntryId)(uint)puVar10);
          iVar29 = TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FName>
                             ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                               *)pFVar31,(int)((ulonglong)puVar10 >> 0x20) + uVar30,
                              (FName *)&local_5b8.Value);
          if (iVar29 != -1) {
            bVar26 = false;
            goto LAB_14c84bc6a;
          }
          local_518 = local_760;
          local_760[0] = SUB82(pFVar54,0);
          local_520 = pFVar6 + (longlong)(int)uVar52 * 8;
          TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,unsigned_short_&&>_>
                    ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
                      *)local_778,&local_5b8,(bool *)&local_520);
          iVar29 = (pTVar8->AttribValues).ArrayNum;
          pFVar54 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar52 + 1);
          param_1 = local_738;
        } while ((int)(uVar52 + 1) < iVar29);
      }
    }
  }
  pFVar54 = (FDynamicMeshAttributeSet *)0x0;
  iVar29 = (this->TargetVerticesSubset).ArrayNum;
  cVar61 = '\0';
  iVar5 = iVar29;
  if (iVar29 == 0) {
    iVar5 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  }
  if (this->TransferMethod == ClosestPointOnSurface) {
    local_798 = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->MatchedVertices,&local_798,iVar5);
    local_478 = &local_778;
    local_470 = &local_6f8;
    iVar55 = 0;
    local_468 = &local_728;
    local_508 = &local_488;
    local_510 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l36::<lambda_1>,void,int>
                ::Call;
    local_488 = this;
    local_480 = param_1;
    local_460 = iVar29 != 0;
    ParallelFor(iVar5,(TFunctionRef<void___cdecl(int)> *)&local_510,
                (uint)(this->bUseParallel == false));
    if ((this->SearchRadius <= 0.0 && this->SearchRadius != 0.0) &&
       (this->NormalThreshold <= 0.0 && this->NormalThreshold != 0.0)) {
      iVar29 = (this->MatchedVertices).ArrayNum;
      pFVar49 = (this->MatchedVertices).AllocatorInstance.Data;
      pFVar6 = pFVar49 + iVar29;
      while( true ) {
        if ((this->MatchedVertices).ArrayNum != iVar29) {
          `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_793)
          ;
        }
        if (pFVar49 == pFVar6) break;
        if (*pFVar49 != (FScriptContainerElement)0x0) {
          iVar55 = iVar55 + 1;
        }
        pFVar49 = pFVar49 + 1;
      }
      cVar61 = iVar55 != iVar5;
    }
  }
  else {
    if (this->TransferMethod == InpaintWeights) {
      local_797[0] = false;
      TArray<bool,TSizedDefaultAllocator<32>_>::Init
                (&this->MatchedVertices,local_797,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      local_688 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0;
      pTVar34 = local_688;
      if ((this->ForceInpaintWeightMapName != (FName)0x0) &&
         ((iVar55 = (this->ForceInpaint).ArrayNum, pFVar31 = pFVar54, iVar55 == 0 ||
          (iVar55 != (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed)))) {
        while( true ) {
          iVar55 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xd8))();
          iVar48 = (int)pFVar31;
          pTVar34 = local_688;
          if (iVar55 <= iVar48) break;
          pFVar31 = (param_1->AttributeSet).Ptr;
          pFVar33 = pFVar54;
          if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar33 = pFVar31;
          }
          pTVar34 = FDynamicMeshAttributeSet::GetWeightLayer(pFVar33,iVar48);
          if ((pTVar34 != (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) &&
             ((FName)pTVar34->_padding_ == this->ForceInpaintWeightMapName)) break;
          pFVar31 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar48 + 1);
        }
      }
      local_688 = pTVar34;
      local_680._8_8_ = 0;
      local_680._0_8_ =
           &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
      local_680._16_8_ = 0;
      local_680._24_8_ = (FDynamicMesh3 *)0x0;
      local_660.Data = (FScriptContainerElement *)0x0;
      local_658._0_4_ = 0;
      local_658._4_4_ = 0;
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock
                ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(local_680 + 0x18));
      if (iVar29 != 0) {
        local_680._8_8_ = local_6f8->_padding_;
        TDynamicVector<UE::AnimationCore::FBoneWeights,512>::operator=
                  ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(local_680 + 0x18),
                   (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&local_6f8->ParentMesh);
      }
      local_708 = (FDynamicMeshAttributeSet *)local_680;
      if (iVar29 == 0) {
        local_708 = local_6f8;
      }
      local_448 = &local_688;
      local_440 = &local_778;
      local_438 = &local_708;
      local_430 = &local_728;
      local_4f8 = &local_458;
      local_500 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_2>,void,int>
                  ::Call;
      local_458 = this;
      local_450 = param_1;
      ParallelFor((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->VertexRefCounts).RefCounts.CurBlockUsed,
                  (TFunctionRef<void___cdecl(int)> *)&local_500,(uint)(this->bUseParallel == false))
      ;
      cVar61 = (**(code **)(this->_padding_ + 0x20))(this);
      if (cVar61 == '\0') {
        local_700 = (FDynamicMeshAttributeSet *)0x0;
        if (iVar29 == 0) {
          pFVar49 = (this->MatchedVertices).AllocatorInstance.Data;
          iVar29 = (this->MatchedVertices).ArrayNum;
          pFVar6 = pFVar49 + iVar29;
          while( true ) {
            if ((this->MatchedVertices).ArrayNum != iVar29) {
              local_797[1] = false;
              `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_797 + 1);
            }
            pFVar31 = local_700;
            if (pFVar49 == pFVar6) break;
            if (*pFVar49 != (FScriptContainerElement)0x0) {
              pFVar54 = (FDynamicMeshAttributeSet *)(ulonglong)((int)pFVar54 + 1);
              local_700 = pFVar54;
            }
            pFVar49 = pFVar49 + 1;
          }
        }
        else {
          pFVar49 = (this->TargetVerticesSubset).AllocatorInstance.Data;
          iVar29 = (this->TargetVerticesSubset).ArrayNum;
          local_700 = (FDynamicMeshAttributeSet *)0x0;
          pFVar6 = pFVar49 + (longlong)iVar29 * 4;
          local_5a8[0] = this;
          while( true ) {
            if ((this->TargetVerticesSubset).ArrayNum != iVar29) {
              local_797[2] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_797 + 2);
            }
            pFVar31 = pFVar54;
            if (pFVar49 == pFVar6) break;
            bVar26 = `UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l76::<lambda_3>
                     ::operator()(local_5a8,*(int *)pFVar49);
            if (bVar26) {
              pFVar54 = (FDynamicMeshAttributeSet *)((longlong)&pFVar54->_padding_ + 1);
            }
            pFVar49 = pFVar49 + 4;
          }
        }
        local_700 = pFVar31;
        iVar29 = (int)pFVar54;
        if (iVar29 == 0) goto LAB_14c84bc05;
        local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  (&local_548,(int *)(this->TargetVerticesSubset).AllocatorInstance.Data,
                   (this->TargetVerticesSubset).ArrayNum,0);
        local_538 = &local_708;
        local_530 = &local_6f8;
        local_528 = param_1;
        if (iVar29 != iVar5) {
          FVertexLinearization::FVertexLinearization<UE::Geometry::FDynamicMesh3>
                    (&local_650,param_1,false);
          pFVar31 = (param_1->AttributeSet).Ptr;
          pFVar32 = (FDynamicMeshAttributeSet *)0x0;
          pFVar33 = pFVar32;
          if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
            pFVar33 = pFVar31;
          }
          iVar5 = (((pFVar33->BoneNameAttrib).Ptr)->AttribValues).ArrayNum;
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_358);
          Eigen::SparseMatrix<double,0,int>::resize(&local_358,(longlong)iVar29,(longlong)iVar5);
          local_758._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
          local_758._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
          local_758._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          reserve(&local_758,(longlong)iVar29);
          local_788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_788.ArrayNum = 0;
          local_788.ArrayMax = 0;
          if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)pFVar54 & 0xffffffff);
          }
          if (0 < iVar29) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar29,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
          }
          fVar16 = __real_37800080;
          uVar30 = (param_1->VertexRefCounts).RefCounts.CurBlock;
          uVar52 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
          local_740 = (FTaskBase *)((ulonglong)local_740._4_4_ << 0x20);
          if (0 < (int)(uVar30 * 0x200 + uVar52)) {
            local_718 = 0;
            do {
              lVar51 = local_718;
              uVar58 = 0;
              uVar53 = (uint)pFVar32;
              if (((-1 < (int)uVar53) && ((int)uVar53 < (int)(uVar30 * 0x200 + uVar52))) &&
                 ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->VertexRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + ((ulonglong)pFVar32 >> 9) * 8) +
                                     (ulonglong)(uVar53 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                uVar30 = 0;
                if ((int)uVar53 < (this->MatchedVertices).ArrayNum) {
                  uVar30 = ~uVar53 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar14 = (code *)swi(3);
                  uVar27 = (*pcVar14)();
                  return (bool)uVar27;
                }
                if ((this->MatchedVertices).AllocatorInstance.Data[lVar51] !=
                    (FScriptContainerElement)0x0) {
                  local_268.BoneWeights.AllocatorInstance.SecondaryData =
                       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                  local_268.BoneWeights.ArrayNum = 0;
                  local_268.BoneWeights.ArrayMax = 0xc;
                  AnimationCore::FBoneWeights::operator=
                            (&local_268,
                             (FBoneWeights *)
                             ((ulonglong)(uVar53 & 0x1ff) * 0x40 +
                             *(longlong *)
                              ((((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                  *)&local_708->UVLayers)->AllocatorInstance).Data +
                              ((ulonglong)pFVar32 >> 9) * 8)));
                  uVar41 = (ulonglong)local_268.BoneWeights.ArrayNum;
                  local_720 = local_788.ArrayNum;
                  local_710 = (FTaskBase *)0x0;
                  local_5e8 = uVar41;
                  iVar29 = local_788.ArrayNum;
                  if (0 < local_268.BoneWeights.ArrayNum) {
                    while( true ) {
                      pFVar59 = local_710;
                      uVar30 = 0;
                      if ((int)uVar58 < (int)(uint)uVar41) {
                        uVar30 = ~uVar58 >> 0x1f;
                      }
                      uVar52 = (uint)uVar41;
                      if ((uVar30 == 0) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), uVar52 = local_268.BoneWeights.ArrayNum, bVar26)) {
                        pcVar14 = (code *)swi(3);
                        uVar27 = (*pcVar14)();
                        return (bool)uVar27;
                      }
                      FVar35 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_268;
                      if (local_268.BoneWeights.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FVar35 = local_268.BoneWeights.AllocatorInstance.SecondaryData;
                      }
                      uVar4 = *(ushort *)((longlong)FVar35 + (longlong)pFVar59 * 4);
                      uVar30 = 0;
                      if ((int)uVar58 < (int)uVar52) {
                        uVar30 = ~uVar58 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar26)) {
                        pcVar14 = (code *)swi(3);
                        uVar27 = (*pcVar14)();
                        return (bool)uVar27;
                      }
                      _Var46 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                )local_758._Mypair._Myval2._Mylast;
                      FVar35 = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_268;
                      if (local_268.BoneWeights.AllocatorInstance.SecondaryData !=
                          (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                        FVar35 = local_268.BoneWeights.AllocatorInstance.SecondaryData;
                      }
                      dVar15 = (double)((float)*(ushort *)
                                                ((uchar *)((longlong)FVar35 + 2) +
                                                (longlong)pFVar59 * 4) * fVar16);
                      uVar30 = (uint)uVar4;
                      if (local_758._Mypair._Myval2._Mylast == local_758._Mypair._Myval2._Myend) {
                        lVar51 = (longlong)local_758._Mypair._Myval2._Mylast -
                                 (longlong)local_758._Mypair._Myval2._Myfirst >> 4;
                        if (lVar51 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::
                          vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                          ::_Xlength();
                        }
                        uVar41 = lVar51 + 1;
                        uVar42 = (longlong)local_758._Mypair._Myval2._Myend -
                                 (longlong)local_758._Mypair._Myval2._Myfirst >> 4;
                        if (0xfffffffffffffff - (uVar42 >> 1) < uVar42) {
                          uVar60 = 0xfffffffffffffff;
                        }
                        else {
                          uVar42 = (uVar42 >> 1) + uVar42;
                          uVar60 = uVar41;
                          if (uVar41 <= uVar42) {
                            uVar60 = uVar42;
                          }
                          if (0xfffffffffffffff < uVar60) {
                    /* WARNING: Subroutine does not return */
                            std::_Throw_bad_array_new_length();
                          }
                        }
                        _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                )std::_Allocate<16,std::_Default_allocate_traits>(uVar60 * 0x10);
                        lVar51 = lVar51 * 0x10;
                        *(double *)(lVar51 + 8 + (longlong)_Dst) = dVar15;
                        ((Triplet<double,int> *)(lVar51 + (longlong)_Dst))->m_row = local_720;
                        *(uint *)(lVar51 + 4 + (longlong)_Dst) = uVar30;
                        if (_Var46 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                       )local_758._Mypair._Myval2._Mylast) {
                          _Size = (longlong)local_758._Mypair._Myval2._Mylast -
                                  (longlong)local_758._Mypair._Myval2._Myfirst;
                          _Dst_00 = _Dst;
                          _Var46 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                    )local_758._Mypair._Myval2._Myfirst;
                        }
                        else {
                          memmove((void *)_Dst,local_758._Mypair._Myval2._Myfirst,
                                  (longlong)_Var46 - (longlong)local_758._Mypair._Myval2._Myfirst);
                          _Size = (longlong)local_758._Mypair._Myval2._Mylast - (longlong)_Var46;
                          _Dst_00 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                     )(lVar51 + 0x10 + (longlong)_Dst);
                        }
                        memmove((void *)_Dst_00,(void *)_Var46,_Size);
                        if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                             )local_758._Mypair._Myval2._Myfirst !=
                            (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                             )0x0) {
                          uVar47 = (longlong)local_758._Mypair._Myval2._Myend -
                                   (longlong)local_758._Mypair._Myval2._Myfirst & 0xfffffffffffffff0
                          ;
                          _Var46 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                    )local_758._Mypair._Myval2._Myfirst;
                          if (0xfff < uVar47) {
                            _Var46 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                                       *)((longlong)local_758._Mypair._Myval2._Myfirst + -8);
                            uVar47 = uVar47 + 0x27;
                            if (0x1f < ((longlong)local_758._Mypair._Myval2._Myfirst -
                                       (longlong)_Var46) - 8U) {
                    /* WARNING: Subroutine does not return */
                              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                            }
                          }
                          ::operator_delete((void *)_Var46,uVar47);
                        }
                        local_758._Mypair._Myval2._Myend =
                             (Triplet<double,int> *)((longlong)_Dst + uVar60 * 0x10);
                        local_758._Mypair._Myval2._Mylast =
                             (Triplet<double,int> *)(uVar41 * 0x10 + (longlong)_Dst);
                        iVar29 = local_720;
                        local_758._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Dst;
                      }
                      else {
                        *(double *)((longlong)local_758._Mypair._Myval2._Mylast + 8) = dVar15;
                        (local_758._Mypair._Myval2._Mylast)->m_row = iVar29;
                        *(uint *)((longlong)local_758._Mypair._Myval2._Mylast + 4) = uVar30;
                        local_758._Mypair._Myval2._Mylast =
                             (Triplet<double,int> *)
                             ((longlong)local_758._Mypair._Myval2._Mylast + 0x10);
                      }
                      uVar58 = uVar58 + 1;
                      local_710 = (FTaskBase *)((longlong)&local_710->_padding_ + 1);
                      if ((longlong)local_5e8 <= (longlong)local_710) break;
                      uVar41 = (ulonglong)(uint)local_268.BoneWeights.ArrayNum;
                    }
                    this = local_6c8;
                    lVar51 = local_718;
                    uVar53 = (uint)local_740;
                  }
                  uVar30 = 0;
                  if ((int)uVar53 < (int)local_650._padding_) {
                    uVar30 = ~uVar53 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar26)) {
                    pcVar14 = (code *)swi(3);
                    uVar27 = (*pcVar14)();
                    return (bool)uVar27;
                  }
                  pFVar6 = (FScriptContainerElement *)
                           ((longlong)(void *)local_650._padding_ + lVar51 * 4);
                  if (((local_788.AllocatorInstance.Data <= pFVar6) &&
                      (pFVar6 < local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 4)
                      ) && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar26)) {
                    pcVar14 = (code *)swi(3);
                    uVar27 = (*pcVar14)();
                    return (bool)uVar27;
                  }
                  if (local_788.ArrayNum == local_788.ArrayMax) {
                    iVar29 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_788.AllocatorInstance,&local_788.ArrayMax);
                    local_788.ArrayNum = iVar29;
                  }
                  lVar43 = (longlong)local_788.ArrayNum;
                  local_788.ArrayNum = local_788.ArrayNum + 1;
                  *(undefined4 *)(local_788.AllocatorInstance.Data + lVar43 * 4) =
                       *(undefined4 *)pFVar6;
                  param_1 = local_738;
                  if (local_268.BoneWeights.AllocatorInstance.SecondaryData !=
                      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                    FMemory::Free((void *)local_268.BoneWeights.AllocatorInstance.SecondaryData);
                    param_1 = local_738;
                  }
                }
              }
              uVar30 = (param_1->VertexRefCounts).RefCounts.CurBlock;
              uVar53 = uVar53 + 1;
              pFVar32 = (FDynamicMeshAttributeSet *)(ulonglong)uVar53;
              uVar52 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
              local_718 = lVar51 + 1;
              local_740 = (FTaskBase *)CONCAT44(local_740._4_4_,uVar53);
            } while ((int)uVar53 < (int)(uVar30 * 0x200 + uVar52));
          }
          pFVar59 = (FTaskBase *)0x0;
          local_5e0 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_758._Mypair._Myval2._Mylast;
          local_5d8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_758._Mypair._Myval2._Myfirst;
          Eigen::internal::
          set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                    (&local_5d8,&local_5e0,&local_358,local_793[0]);
          iVar29 = (int)local_650._padding_;
          FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_138,iVar29,iVar29);
          FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_1e8,iVar29,iVar29);
          local_730.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
          FVar50.Pimpl.Reference =
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar59;
          if (this->bUseIntrinsicLaplacian == false) {
            pFVar36 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&Tasks::Private::SmallTaskAllocator);
            TVar37.Reference = pFVar59;
            if (pFVar36 != (FTaskBase *)0x0) {
              Tasks::Private::FTaskBase::FTaskBase(pFVar36,2,true);
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`96'::<lambda_7>,void,void>
                    ::_vftable_;
              Tasks::Private::FTaskBase::Init
                        (pFVar36,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(520)"
                         ,Default,None,None);
              pFVar36[1]._padding_ = (longlong)param_1;
              pFVar36[1]._padding_ = (longlong)&local_650;
              pFVar36[1]._padding_ = (longlong)&local_138;
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`96'::<lambda_7>_>
                    ::_vftable_;
              TVar37.Reference = pFVar36;
            }
            Tasks::Private::FTaskBase::TryLaunch(TVar37.Reference,0x100);
            local_6b8.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar37.Reference;
            pFVar36 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&Tasks::Private::SmallTaskAllocator);
            if (pFVar36 != (FTaskBase *)0x0) {
              Tasks::Private::FTaskBase::FTaskBase(pFVar36,2,true);
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`96'::<lambda_8>,void,void>
                    ::_vftable_;
              Tasks::Private::FTaskBase::Init
                        (pFVar36,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(527)"
                         ,Default,None,None);
              pFVar36[1]._padding_ = (longlong)param_1;
              pFVar36[1]._padding_ = (longlong)&local_650;
              pFVar36[1]._padding_ = (longlong)&local_1e8;
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`96'::<lambda_8>_>
                    ::_vftable_;
              FVar50.Pimpl.Reference =
                   (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                   (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar36;
            }
          }
          else {
            pFVar36 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&Tasks::Private::SmallTaskAllocator);
            TVar37.Reference = pFVar59;
            if (pFVar36 != (FTaskBase *)0x0) {
              Tasks::Private::FTaskBase::FTaskBase(pFVar36,2,true);
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`94'::<lambda_5>,void,void>
                    ::_vftable_;
              Tasks::Private::FTaskBase::Init
                        (pFVar36,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(501)"
                         ,Default,None,None);
              pFVar36[1]._padding_ = (longlong)param_1;
              pFVar36[1]._padding_ = (longlong)&local_650;
              pFVar36[1]._padding_ = (longlong)&local_138;
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`94'::<lambda_5>_>
                    ::_vftable_;
              TVar37.Reference = pFVar36;
            }
            Tasks::Private::FTaskBase::TryLaunch(TVar37.Reference,0x100);
            local_6b8.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar37.Reference;
            pFVar36 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&Tasks::Private::SmallTaskAllocator);
            if (pFVar36 != (FTaskBase *)0x0) {
              Tasks::Private::FTaskBase::FTaskBase(pFVar36,2,true);
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`94'::<lambda_6>,void,void>
                    ::_vftable_;
              Tasks::Private::FTaskBase::Init
                        (pFVar36,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(510)"
                         ,Default,None,None);
              pFVar36[1]._padding_ = (longlong)param_1;
              pFVar36[1]._padding_ = (longlong)&local_650;
              pFVar36[1]._padding_ = (longlong)&local_1e8;
              pFVar36->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`94'::<lambda_6>_>
                    ::_vftable_;
              FVar50.Pimpl.Reference =
                   (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                   (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar36;
            }
          }
          Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar50.Pimpl.Reference,0x100);
          FVar20.Pimpl.Reference = local_730.Pimpl.Reference;
          if (local_730.Pimpl.Reference != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned_int> *)((longlong)local_730.Pimpl.Reference + 0x30);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              puVar11 = *(undefined8 **)local_730.Pimpl.Reference;
              local_730.Pimpl.Reference = FVar50.Pimpl.Reference;
              (*(code *)*puVar11)(FVar20.Pimpl.Reference,1);
              FVar50.Pimpl.Reference = local_730.Pimpl.Reference;
            }
          }
          local_730.Pimpl.Reference = FVar50.Pimpl.Reference;
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_428);
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_2b8);
          TVar37.Reference =
               TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&Tasks::Private::SmallTaskAllocator);
          if (TVar37.Reference == (FTaskBase *)0x0) {
            local_740 = (FTaskBase *)0x0;
            TVar37.Reference = pFVar59;
          }
          else {
            local_740 = TVar37.Reference;
            Tasks::Private::FTaskBase::FTaskBase(TVar37.Reference,2,true);
            (TVar37.Reference)->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`50'::<lambda_9>,void,void>
                  ::_vftable_;
            Tasks::Private::FTaskBase::Init
                      (TVar37.Reference,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(536)"
                       ,Default,None,None);
            TVar37.Reference[1]._padding_ = (longlong)&local_428;
            TVar37.Reference[1]._padding_ = (longlong)&local_138;
            (TVar37.Reference)->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`50'::<lambda_9>_>
                  ::_vftable_;
          }
          Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                    (TVar37.Reference,&local_6b8);
          Tasks::Private::FTaskBase::TryLaunch(TVar37.Reference,0x100);
          pFVar36 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                    ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                *)&Tasks::Private::SmallTaskAllocator);
          if (pFVar36 == (FTaskBase *)0x0) {
            local_710 = (FTaskBase *)0x0;
            pFVar36 = pFVar59;
          }
          else {
            local_710 = pFVar36;
            Tasks::Private::FTaskBase::FTaskBase(pFVar36,2,true);
            pFVar36->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTaskBase<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`50'::<lambda_10>,void,void>
                  ::_vftable_;
            Tasks::Private::FTaskBase::Init
                      (pFVar36,
                       L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp(541)"
                       ,Default,None,None);
            pFVar36[1]._padding_ = (longlong)&local_2b8;
            pFVar36[1]._padding_ = (longlong)&local_1e8;
            pFVar36->_padding_ =
                 (longlong)
                 &Tasks::Private::
                  TExecutableTask<`UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::`50'::<lambda_10>_>
                  ::_vftable_;
          }
          Tasks::Private::FTaskBase::AddPrerequisites<UE::Tasks::Private::FTaskHandle,0>
                    (pFVar36,&local_730);
          Tasks::Private::FTaskBase::TryLaunch(pFVar36,0x100);
          if (TVar37.Reference != (FTaskBase *)0x0) {
            LOCK();
            (TVar37.Reference)->RefCount =
                 (atomic<unsigned_int>)((int)(TVar37.Reference)->RefCount + 1);
            UNLOCK();
          }
          if (pFVar36 != (FTaskBase *)0x0) {
            LOCK();
            pFVar36->RefCount = (atomic<unsigned_int>)((int)pFVar36->RefCount + 1);
            UNLOCK();
          }
          local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6e0.ArrayNum = 2;
          local_5d0.Pimpl.Reference =
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
               (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar37.Reference;
          local_5c8 = pFVar36;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,2,0,&local_6e0.AllocatorInstance,2,&local_6e0.ArrayMax);
          ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                    (local_6e0.AllocatorInstance.Data,&local_5d0,2);
          pTVar56 = &local_5c0;
          lVar51 = 2;
          do {
            pTVar12 = pTVar56[-1].Container;
            pTVar56 = pTVar56 + -1;
            lVar51 = lVar51 + -1;
            if (pTVar12 !=
                (TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              LOCK();
              pFVar2 = &(pTVar12->AllocatorInstance).SecondaryData;
              iVar29 = *(int *)pFVar2;
              *(int *)pFVar2 = *(int *)pFVar2 + -1;
              UNLOCK();
              if (iVar29 == 1) {
                (*(code *)**(undefined8 **)(pTVar12->AllocatorInstance).InlineData)(pTVar12,1);
              }
            }
          } while (lVar51 != 0);
          Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_6e0,(FTimespan)0x7fffffffffffffff);
          local_3d8.m_lhs.m_lhs.m_rows.m_value = local_428.m_innerSize;
          local_3d8.m_lhs.m_lhs.m_cols.m_value = local_428.m_outerSize;
          local_3d8.m_lhs.m_rhs = &local_428;
          local_3d8.m_rhs._padding_._1_4_ = local_377;
          local_3d8.m_rhs._padding_._5_2_ = local_373;
          local_3d8.m_rhs._padding_._7_1_ = local_371;
          local_3d8.m_rhs.m_lhs = &local_428;
          local_3d8.m_rhs.m_rhs = &local_2b8;
          local_3d8.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
          local_3d8._padding_._0_1_ = 0;
          local_3d8.m_lhs._padding_._0_1_ = 0;
          local_3d8.m_rhs._padding_._0_1_ = 0;
          local_4d8._padding_._0_1_ = 0;
          local_4d8.m_outerSize = 0;
          local_4d8.m_innerSize = 0;
          local_4d8.m_outerIndex = (int *)0x0;
          local_4d8.m_innerNonZeros = (int *)0x0;
          local_4d8.m_data.m_values = (double *)0x0;
          local_4d8.m_data.m_indices = (int *)0x0;
          local_4d8.m_data.m_size = 0;
          local_4d8.m_data.m_allocatedSize = 0;
          Eigen::internal::
          assign_sparse_to_sparse<Eigen::SparseMatrix<double,0,int>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2>_const_>_>
                    (&local_4d8,&local_3d8);
          Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_308);
          local_6a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_6a0._8_8_ = lVar51;
          bVar26 = FQuadraticProgramming::SolveWithFixedConstraints
                             (&local_4d8,(Matrix<double,_1,1,0,_1,1> *)0x0,&local_788,&local_358,
                              &local_308,true,__real_3f1a36e2e0000000,&local_6a0);
          cVar61 = !bVar26;
          local_794 = cVar61;
          if (!(bool)cVar61) {
            local_4f0[0].m_isRValue = false;
            local_4e8 = &local_308;
            local_598.m_innerSize = 0;
            local_598.m_outerIndex = (int *)0x0;
            local_598.m_innerNonZeros = (int *)0x0;
            local_598.m_data.m_values = (double *)0x0;
            local_598.m_data.m_indices = (int *)0x0;
            local_598.m_data.m_size = 0;
            local_598._padding_._0_1_ = 0;
            local_598.m_outerSize = 0;
            local_598.m_data.m_allocatedSize = 0;
            Eigen::SparseMatrix<double,0,int>::
            operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_>(&local_598,local_4f0);
            fVar18 = __real_477fff00;
            fVar17 = __real_3f000000;
            fVar16 = __real_3f800000;
            local_6b0.MaxWeightCount = 0xc;
            local_6b0.WeightThreshold = 1;
            local_6b0.DefaultBoneIndex = 0;
            local_6b0.bHasDefaultBoneIndex = false;
            local_6b0.bBlendZeroInfluence = true;
            local_6f0.MaxWeightCount = local_6c8->MaxNumInfluences;
            local_6b0.NormalizeType = None;
            if (local_6f0.MaxWeightCount < 1) {
              local_6f0.MaxWeightCount = 1;
            }
            local_6f0.NormalizeType = Always;
            local_6f0.WeightThreshold = 1;
            local_6f0.DefaultBoneIndex = 0;
            local_6f0.bHasDefaultBoneIndex = false;
            local_6f0.bBlendZeroInfluence = true;
            if (0 < local_598.m_outerSize) {
              lVar51 = 0;
              local_718 = 0;
              do {
                piVar23 = local_598.m_data.m_indices;
                pdVar22 = local_598.m_data.m_values;
                local_228.AllocatorInstance.SecondaryData =
                     (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
                local_228.ArrayNum = 0;
                local_228.ArrayMax = 0xc;
                lVar43 = (longlong)*(int *)((longlong)local_598.m_outerIndex + lVar51);
                if (local_598.m_innerNonZeros == (int *)0x0) {
                  lVar57 = (longlong)*(int *)((longlong)local_598.m_outerIndex + lVar51 + 4);
                }
                else {
                  lVar57 = *(int *)((longlong)local_598.m_innerNonZeros + lVar51) + lVar43;
                }
                if (lVar43 < lVar57) {
                  local_5c0.Container = &local_228;
                  do {
                    fVar62 = (float)(double)((longlong *)pdVar22)[lVar43];
                    if (fVar16 <= (float)(double)((longlong *)pdVar22)[lVar43]) {
                      fVar62 = fVar16;
                    }
                    if (fVar62 <= 0.0) {
                      fVar62 = 0.0;
                    }
                    AnimationCore::
                    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                    ::
                    AddBoneWeight<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_5c0,
                               (FBoneWeight)
                               ((int)(fVar62 * fVar18 + fVar17) << 0x10 |
                               (uint)*(ushort *)((longlong)(longlong *)piVar23 + lVar43 * 4)),
                               &local_6b0);
                    lVar43 = lVar43 + 1;
                  } while (lVar43 < lVar57);
                }
                local_6d0.Container = &local_228;
                AnimationCore::
                TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                ::NormalizeWeights(&local_6d0,Always);
                bVar26 = AnimationCore::
                         TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                         ::CullWeights(&local_6d0,&local_6f0);
                if (bVar26) {
                  AnimationCore::
                  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
                  ::NormalizeWeights(&local_6d0,Always);
                }
                uVar52 = (uint)pFVar59;
                uVar30 = 0;
                if ((int)uVar52 < local_6a0.ArrayNum) {
                  uVar30 = ~uVar52 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar14 = (code *)swi(3);
                  uVar27 = (*pcVar14)();
                  return (bool)uVar27;
                }
                uVar30 = *(uint *)(local_6a0.AllocatorInstance.Data + lVar51);
                uVar53 = 0;
                if ((int)uVar30 < (int)local_650._padding_) {
                  uVar53 = ~uVar30 >> 0x1f;
                }
                if ((uVar53 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar14 = (code *)swi(3);
                  uVar27 = (*pcVar14)();
                  return (bool)uVar27;
                }
                AnimationCore::FBoneWeights::operator=
                          ((FBoneWeights *)
                           ((ulonglong)
                            (*(uint *)(local_650._padding_ + (longlong)(int)uVar30 * 4) & 0x1ff) *
                            0x40 + *(longlong *)
                                    ((((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                                        *)&local_708->UVLayers)->AllocatorInstance).Data +
                                    (ulonglong)
                                    (*(uint *)(local_650._padding_ + (longlong)(int)uVar30 * 4) >> 9
                                    ) * 8)),(FBoneWeights *)&local_228);
                if (local_228.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
                  FMemory::Free((void *)local_228.AllocatorInstance.SecondaryData);
                }
                pFVar59 = (FTaskBase *)(ulonglong)(uVar52 + 1);
                lVar51 = lVar51 + 4;
                local_718 = (longlong)(int)(uVar52 + 1);
                pFVar36 = local_710;
                TVar37.Reference = local_740;
                cVar61 = local_794;
              } while (local_718 < local_598.m_outerSize);
            }
            `UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_4>::
            operator()(&local_548);
            this = local_6c8;
            pFVar19 = local_738;
            pTVar39 = (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
            if ((0 < local_6c8->NumSmoothingIterations) && (0.0 < local_6c8->SmoothingStrength)) {
              local_770.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_770.ArrayNum = 0;
              local_770.ArrayMax = 0;
              uVar30 = (local_738->VertexRefCounts).UsedCount - (int)local_700;
              if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
              }
              if (0 < (int)uVar30) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar30,&local_770.AllocatorInstance,0,&local_770.ArrayMax);
              }
              uVar30 = (pFVar19->VertexRefCounts).RefCounts.CurBlock;
              uVar52 = (pFVar19->VertexRefCounts).RefCounts.CurBlockUsed;
              local_790[0] = 0;
              pTVar38 = pTVar39;
              if (0 < (int)(uVar30 * 0x200 + uVar52)) {
                do {
                  uVar53 = (uint)pTVar38;
                  if (((-1 < (int)uVar53) && ((int)uVar53 < (int)(uVar30 * 0x200 + uVar52))) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           ((pFVar19->VertexRefCounts).RefCounts.Blocks.
                                            AllocatorInstance.Data + ((ulonglong)pTVar38 >> 9) * 8)
                                         + (ulonglong)(uVar53 & 0x1ff) * 2) - 1U) < 0xfffe)) {
                    uVar30 = 0;
                    if ((int)uVar53 < (this->MatchedVertices).ArrayNum) {
                      uVar30 = ~uVar53 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar26)) {
                      pcVar14 = (code *)swi(3);
                      uVar27 = (*pcVar14)();
                      return (bool)uVar27;
                    }
                    if ((this->MatchedVertices).AllocatorInstance.Data[(int)uVar53] ==
                        (FScriptContainerElement)0x0) {
                      if (((local_770.AllocatorInstance.Data <= (FScriptContainerElement *)local_790
                           ) && ((FScriptContainerElement *)local_790 <
                                 local_770.AllocatorInstance.Data + (longlong)local_770.ArrayMax * 4
                                )) &&
                         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar26)) {
                        pcVar14 = (code *)swi(3);
                        uVar27 = (*pcVar14)();
                        return (bool)uVar27;
                      }
                      if (local_770.ArrayNum == local_770.ArrayMax) {
                        iVar29 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&local_770.AllocatorInstance,&local_770.ArrayMax);
                        local_770.ArrayNum = iVar29;
                      }
                      lVar51 = (longlong)local_770.ArrayNum;
                      local_770.ArrayNum = local_770.ArrayNum + 1;
                      *(uint *)(local_770.AllocatorInstance.Data + lVar51 * 4) = local_790[0];
                    }
                  }
                  uVar30 = (pFVar19->VertexRefCounts).RefCounts.CurBlock;
                  local_790[0] = local_790[0] + 1;
                  uVar52 = (pFVar19->VertexRefCounts).RefCounts.CurBlockUsed;
                  pTVar38 = (TBoneWeightsDataSource<unsigned_short,float> *)(ulonglong)local_790[0];
                  TVar37.Reference = local_740;
                } while ((int)local_790[0] < (int)(uVar30 * 0x200 + uVar52));
              }
              local_628._padding_ = 0;
              local_628._padding_ = 0;
              local_628._padding_ =
                   (longlong)&___7FSmoothDynamicMeshVertexSkinWeights_Geometry_UE__6B_;
              local_628.SkinWeightsAttributeDataSource.Ptr =
                   (TBoneWeightsDataSource<unsigned_short,float> *)0x0;
              local_628.Attribute =
                   (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0;
              local_628._padding_._0_4_ = 0;
              local_628._padding_ = (longlong)pFVar19;
              TVar24.Ptr = (TBoneWeightsDataSource<unsigned_short,float> *)local_628._padding_;
              TVar25.Ptr = local_628.SkinWeightsAttributeDataSource.Ptr;
              if (((pFVar19 != (FDynamicMesh3 *)0x0) &&
                  (pFVar54 = (pFVar19->AttributeSet).Ptr, pFVar54 != (FDynamicMeshAttributeSet *)0x0
                  )) && (local_628.Attribute =
                              FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar54,*local_6c0),
                        TVar24.Ptr = (TBoneWeightsDataSource<unsigned_short,float> *)
                                     local_628._padding_,
                        TVar25.Ptr = local_628.SkinWeightsAttributeDataSource.Ptr,
                        (TBoneWeightsDataSource<unsigned_short,float>)local_628.Attribute !=
                        (TBoneWeightsDataSource<unsigned_short,float>)0x0)) {
                pTVar38 = ::operator_new(0x10);
                if (pTVar38 != (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
                  *pTVar38 = (TBoneWeightsDataSource<unsigned_short,float>)
                             &___7FSkinWeightsAttributeDataSource_SmoothBoneWeightsLocals__6B_;
                  pTVar38[1] = (TBoneWeightsDataSource<unsigned_short,float>)local_628.Attribute;
                  pTVar39 = pTVar38;
                }
                TVar24.Ptr = pTVar39;
                TVar25.Ptr = pTVar39;
                if (local_628.SkinWeightsAttributeDataSource.Ptr !=
                    (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
                  TVar13 = *local_628.SkinWeightsAttributeDataSource.Ptr;
                  local_628.SkinWeightsAttributeDataSource.Ptr = pTVar39;
                  (**(code **)TVar13)();
                  TVar24.Ptr = local_628.SkinWeightsAttributeDataSource.Ptr;
                  TVar25.Ptr = local_628.SkinWeightsAttributeDataSource.Ptr;
                }
              }
              local_628.SkinWeightsAttributeDataSource.Ptr = TVar25.Ptr;
              local_628._padding_ = (longlong)TVar24.Ptr;
              local_628.MaxNumInfluences = this->MaxNumInfluences;
              if ((((TBoneWeightsDataSource<unsigned_short,float>)local_628.Attribute ==
                    (TBoneWeightsDataSource<unsigned_short,float>)0x0) ||
                  (local_628.MaxNumInfluences < 1)) ||
                 (((FDynamicMesh3 *)local_628._padding_ == (FDynamicMesh3 *)0x0 ||
                  ((TBoneWeightsDataSource<unsigned_short,float> *)local_628._padding_ ==
                   (TBoneWeightsDataSource<unsigned_short,float> *)0x0)))) {
                pcVar40 = "SmoothWeights.Validate() == EOperationValidationResult::Ok";
                iVar29 = 0x265;
                paVar44 = &bGEnsureHasExecuted<_1056102092667616667>;
LAB_14c84b7d8:
                bVar26 = Assert::Private::ExecCheckImplInternal
                                   (paVar44,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                                    ,iVar29,pcVar40);
                if (bVar26) {
                  pcVar14 = (code *)swi(3);
                  uVar27 = (*pcVar14)();
                  return (bool)uVar27;
                }
              }
              else {
                bVar26 = FSmoothDynamicMeshVertexSkinWeights::SmoothWeightsAtVerticesWithinDistance
                                   (&local_628,&local_770,this->SmoothingStrength,this->SearchRadius
                                    ,this->NumSmoothingIterations);
                if (!bVar26) {
                  pcVar40 = 
                  "SmoothWeights.SmoothWeightsAtVerticesWithinDistance(VerticesToSmooth, SmoothingStrength, SearchRadius, NumSmoothingIterations)"
                  ;
                  iVar29 = 0x267;
                  paVar44 = &bGEnsureHasExecuted<_1056102092667616665>;
                  goto LAB_14c84b7d8;
                }
              }
              if (local_628.SkinWeightsAttributeDataSource.Ptr !=
                  (TBoneWeightsDataSource<unsigned_short,float> *)0x0) {
                (**(code **)*local_628.SkinWeightsAttributeDataSource.Ptr)
                          (local_628.SkinWeightsAttributeDataSource.Ptr,1);
              }
              if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_770.AllocatorInstance.Data);
              }
            }
            FMemory_Free(local_598.m_outerIndex);
            FMemory_Free(local_598.m_innerNonZeros);
            operator_delete__(local_598.m_data.m_values);
            operator_delete__(local_598.m_data.m_indices);
          }
          if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a0.AllocatorInstance.Data);
          }
          FMemory_Free(local_308.m_outerIndex);
          FMemory_Free(local_308.m_innerNonZeros);
          operator_delete__(local_308.m_data.m_values);
          operator_delete__(local_308.m_data.m_indices);
          FMemory_Free(local_4d8.m_outerIndex);
          FMemory_Free(local_4d8.m_innerNonZeros);
          operator_delete__(local_4d8.m_data.m_values);
          operator_delete__(local_4d8.m_data.m_indices);
          DestructItems<UE::Tasks::Private::FTaskHandle,int>
                    ((FTaskHandle *)local_6e0.AllocatorInstance.Data,local_6e0.ArrayNum);
          if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e0.AllocatorInstance.Data);
          }
          if (pFVar36 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &pFVar36->RefCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (**(code **)pFVar36->_padding_)(pFVar36);
            }
          }
          if (TVar37.Reference != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &(TVar37.Reference)->RefCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (**(code **)(TVar37.Reference)->_padding_)(TVar37.Reference);
            }
          }
          FMemory_Free(local_2b8.m_outerIndex);
          FMemory_Free(local_2b8.m_innerNonZeros);
          operator_delete__(local_2b8.m_data.m_values);
          operator_delete__(local_2b8.m_data.m_indices);
          FMemory_Free(local_428.m_outerIndex);
          FMemory_Free(local_428.m_innerNonZeros);
          operator_delete__(local_428.m_data.m_values);
          operator_delete__(local_428.m_data.m_indices);
          if (local_730.Pimpl.Reference != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned_int> *)((longlong)local_730.Pimpl.Reference + 0x30);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (*(code *)**(undefined8 **)local_730.Pimpl.Reference)();
            }
          }
          if (local_6b8.Pimpl.Reference != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned_int> *)((longlong)local_6b8.Pimpl.Reference + 0x30);
            aVar3 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<unsigned_int>)0x1) {
              (*(code *)**(undefined8 **)local_6b8.Pimpl.Reference)();
            }
          }
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                    (&local_1e8.EntryTriplets);
          if (local_1e8.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
            FMemory_Free((local_1e8.Matrix.Ptr)->m_outerIndex);
            FMemory_Free((local_1e8.Matrix.Ptr)->m_innerNonZeros);
            operator_delete__(((local_1e8.Matrix.Ptr)->m_data).m_values);
            operator_delete__(((local_1e8.Matrix.Ptr)->m_data).m_indices);
            ::operator_delete(local_1e8.Matrix.Ptr,0x48);
          }
          if (local_1e8._padding_ != 0) {
            plVar45 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          if (local_1e8._padding_ != 0) {
            plVar45 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          if (local_1e8._padding_ != 0) {
            plVar45 = &local_1e8._padding_;
            if ((longlong *)local_1e8._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_1e8._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
          ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
                    (&local_138.EntryTriplets);
          if (local_138.Matrix.Ptr != (SparseMatrix<double,0,int> *)0x0) {
            FMemory_Free((local_138.Matrix.Ptr)->m_outerIndex);
            FMemory_Free((local_138.Matrix.Ptr)->m_innerNonZeros);
            operator_delete__(((local_138.Matrix.Ptr)->m_data).m_values);
            operator_delete__(((local_138.Matrix.Ptr)->m_data).m_indices);
            ::operator_delete(local_138.Matrix.Ptr,0x48);
          }
          if (local_138._padding_ != 0) {
            plVar45 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          if (local_138._padding_ != 0) {
            plVar45 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          if (local_138._padding_ != 0) {
            plVar45 = &local_138._padding_;
            if ((longlong *)local_138._padding_ != (longlong *)0x0) {
              plVar45 = (longlong *)local_138._padding_;
            }
            (**(code **)(*plVar45 + 0x10))();
          }
          if (local_788.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_788.AllocatorInstance.Data);
          }
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_758._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar47 = (longlong)local_758._Mypair._Myval2._Myend -
                     (longlong)local_758._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var46 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_758._Mypair._Myval2._Myfirst;
            if (0xfff < uVar47) {
              _Var46 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_758._Mypair._Myval2._Myfirst + -8);
              uVar47 = uVar47 + 0x27;
              if (0x1f < ((longlong)local_758._Mypair._Myval2._Myfirst - (longlong)_Var46) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)_Var46,uVar47);
            local_758._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
            local_758._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
            local_758._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
          }
          FMemory_Free(local_358.m_outerIndex);
          FMemory_Free(local_358.m_innerNonZeros);
          operator_delete__(local_358.m_data.m_values);
          operator_delete__(local_358.m_data.m_indices);
          if ((TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)local_650._padding_
              != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
            FMemory::Free((void *)local_650._padding_);
          }
          if ((FScriptContainerElement *)local_650._padding_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_650._padding_);
          }
          if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_548.AllocatorInstance.Data);
          }
          TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
                    ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(local_680 + 0x18),0);
          if (local_660.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_660.Data);
          }
          goto LAB_14c84bc4e;
        }
        `UE::Geometry::FTransferBoneWeights::TransferWeightsToMesh'::__l50::<lambda_4>::operator()
                  (&local_548);
        bVar26 = true;
        if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.AllocatorInstance.Data);
        }
      }
      else {
LAB_14c84bc05:
        bVar26 = false;
      }
      TDynamicVector<UE::AnimationCore::FBoneWeights,512>::Empty
                ((TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)(local_680 + 0x18),0);
      if (local_660.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.Data);
      }
      goto LAB_14c84bc6a;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                        ,0x26e,L"");
    if (bVar26) {
      pcVar14 = (code *)swi(3);
      uVar27 = (*pcVar14)();
      return (bool)uVar27;
    }
  }
LAB_14c84bc4e:
  cVar28 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((cVar28 == '\0') && (cVar61 == '\0')) {
    bVar26 = true;
  }
  else {
    bVar26 = false;
  }
LAB_14c84bc6a:
  pFVar54 = local_778;
  if (local_778 != (FDynamicMeshAttributeSet *)0x0) {
    *(undefined4 *)&(local_778->MaterialIDAttrib).Ptr = 0;
    pTVar9 = (local_778->ColorLayer).Ptr;
    if (pTVar9 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
      FMemory::Free(pTVar9);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pFVar54);
    ::operator_delete(pFVar54,0x50);
  }
  pFVar54 = local_728;
  if (local_728 != (FDynamicMeshAttributeSet *)0x0) {
    if ((void *)local_728->_padding_ != (void *)0x0) {
      FMemory::Free((void *)local_728->_padding_);
    }
    ::operator_delete(pFVar54,0x18);
    return bVar26;
  }
  return bVar26;
}

// TransferWeightsToPoint @ 14c84bd40

bool __thiscall
UE::Geometry::FTransferBoneWeights::TransferWeightsToPoint
          (FTransferBoneWeights *this,FBoneWeights *param_1,TVector<double> *param_2,
          TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
          *param_3,TVector<float> *param_4)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FMeshNormals *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_188;
  FIndex3i_u_0 local_180;
  TVector<float>_u_0 local_170;
  uint local_160;
  undefined8 local_15c;
  float local_154;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  undefined8 local_130;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  undefined8 local_f8;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_e8;
  undefined8 local_e0;
  float local_d8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8 [5];
  
  bVar7 = FindClosestPointOnSourceSurface
                    (this,param_2,&this->TargetToWorld,(int *)&local_160,
                     (TVector<double> *)&local_d0._s_0);
  if (bVar7) {
    pFVar11 = (FDynamicMeshAttributeSet *)0x0;
    local_170._s_0.X = (float)local_d0._s_0.X;
    lVar13 = *(longlong *)
              ((this->SourceMesh->Triangles).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_160 >> 9) * 8);
    local_170._s_0.Z = (float)local_d0._s_0.Z;
    uVar1 = *(uint *)(lVar13 + 8 + (ulonglong)(local_160 & 0x1ff) * 0xc);
    local_170._s_0.Y = (float)local_d0._s_0.Y;
    local_180._0_8_ = *(undefined8 *)(lVar13 + (ulonglong)(local_160 & 0x1ff) * 0xc);
    pFVar2 = (this->SourceMesh->AttributeSet).Ptr;
    this_00 = pFVar11;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar2;
    }
    local_180._s_0.C = uVar1;
    local_e8 = FDynamicMeshAttributeSet::GetSkinWeightsAttribute(this_00,this->SourceProfileName);
    if (this->bIgnoreBoneAttributes == false) {
      pFVar2 = (this->SourceMesh->AttributeSet).Ptr;
      if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar11 = pFVar2;
      }
      pFVar11 = (FDynamicMeshAttributeSet *)&((pFVar11->BoneNameAttrib).Ptr)->AttribValues;
    }
    if ((0.0 <= this->SearchRadius) || (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0)
       ) {
      bVar7 = true;
      if (0.0 <= this->SearchRadius) {
        FDynamicMesh3::GetTriBaryPoint
                  (this->SourceMesh,(TVector<double> *)&local_b8[0]._s_0,local_160,local_d0._s_0.X,
                   local_d0._s_0.Y,local_d0._s_0.Z);
        dVar6 = (param_2->field0_0x0)._s_0.Y - (double)local_b8[0]._8_8_;
        dVar19 = (param_2->field0_0x0)._s_0.Z - (double)local_b8[0]._16_8_;
        dVar22 = (param_2->field0_0x0)._s_0.X - (double)local_b8[0]._0_8_;
        auVar20._0_8_ = dVar19 * dVar19;
        auVar20._8_8_ = 0;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar6 * dVar6 + dVar22 * dVar22 + auVar20._0_8_;
        auVar21 = sqrtpd(auVar20,auVar21);
        bVar7 = auVar21._0_8_ < this->SearchRadius || auVar21._0_8_ == this->SearchRadius;
      }
      uVar12 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
      bVar8 = true;
      if (0.0 < this->NormalThreshold || this->NormalThreshold == 0.0) {
        local_130 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_188 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        local_140 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        local_f8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        if ((this->SourceMesh->VertexNormals).bIsSet == false) {
          pFVar3 = (this->InternalSourceMeshNormals).Ptr;
          if (pFVar3 != (FMeshNormals *)0x0) {
            lVar13 = (longlong)local_180._s_0.A;
            uVar10 = 0;
            if (local_180._s_0.A < (pFVar3->Normals).ArrayNum) {
              uVar10 = (uint)~local_180._s_0.A >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
            }
            pFVar4 = (pFVar3->Normals).AllocatorInstance.Data;
            lVar14 = (longlong)local_180._s_0.B;
            local_120 = (float)*(double *)(pFVar4 + lVar13 * 0x18);
            local_188 = (float)*(double *)(pFVar4 + lVar13 * 0x18 + 0x10);
            fStack_11c = (float)*(double *)(pFVar4 + lVar13 * 0x18 + 8);
            local_118 = local_188;
            pFVar3 = (this->InternalSourceMeshNormals).Ptr;
            local_130 = CONCAT44((float)*(double *)(pFVar4 + lVar13 * 0x18 + 8),
                                 (float)*(double *)(pFVar4 + lVar13 * 0x18));
            uVar10 = 0;
            if (local_180._s_0.B < (pFVar3->Normals).ArrayNum) {
              uVar10 = (uint)~local_180._s_0.B >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
            }
            pFVar4 = (pFVar3->Normals).AllocatorInstance.Data;
            pFVar3 = (this->InternalSourceMeshNormals).Ptr;
            local_114 = (float)*(double *)(pFVar4 + lVar14 * 0x18);
            dVar6 = *(double *)(pFVar4 + lVar14 * 0x18 + 0x10);
            uVar10 = 0;
            if ((int)uVar1 < (pFVar3->Normals).ArrayNum) {
              uVar10 = ~uVar1 >> 0x1f;
            }
            fStack_110 = (float)*(double *)(pFVar4 + lVar14 * 0x18 + 8);
            local_10c = (float)dVar6;
            local_140 = CONCAT44((float)*(double *)(pFVar4 + lVar14 * 0x18 + 8),
                                 (float)*(double *)(pFVar4 + lVar14 * 0x18));
            if (uVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
            }
            lVar13 = (longlong)(int)uVar1;
            pFVar4 = (pFVar3->Normals).AllocatorInstance.Data;
            pfVar15 = &local_108;
            local_108 = (float)*(double *)(pFVar4 + lVar13 * 0x18);
            fStack_104 = (float)*(double *)(pFVar4 + lVar13 * 0x18 + 8);
            local_100 = (float)*(double *)(pFVar4 + lVar13 * 0x18 + 0x10);
            uVar16 = (float)dVar6;
            goto LAB_14c84c23f;
          }
          bVar8 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1056102092667616602>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\TransferBoneWeights.cpp"
                             ,0x2a6,"bHasSourceNormals || InternalSourceMeshNormals.IsValid()");
          uVar16 = uVar12;
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        else {
          lVar13 = *(longlong *)
                    ((this->SourceMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)local_180._s_0.A >> 9) * 8);
          local_e0 = *(undefined8 *)(lVar13 + (ulonglong)(local_180._s_0.A & 0x1ff) * 0xc);
          local_188 = *(float *)(lVar13 + 8 + (ulonglong)(local_180._s_0.A & 0x1ff) * 0xc);
          local_130 = local_e0;
          if ((this->SourceMesh->VertexNormals).bIsSet == false) {
            local_15c = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            local_154 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          }
          else {
            lVar13 = *(longlong *)
                      ((this->SourceMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)local_180._s_0.B >> 9) * 8);
            local_15c = *(undefined8 *)(lVar13 + (ulonglong)(local_180._s_0.B & 0x1ff) * 0xc);
            local_154 = *(float *)(lVar13 + 8 + (ulonglong)(local_180._s_0.B & 0x1ff) * 0xc);
          }
          local_140 = local_15c;
          if ((this->SourceMesh->VertexNormals).bIsSet == false) {
            local_150 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
            local_148 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          }
          else {
            lVar13 = *(longlong *)
                      ((this->SourceMesh->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8);
            local_150 = *(undefined8 *)(lVar13 + (ulonglong)(local_180._s_0.C & 0x1ff) * 0xc);
            local_148 = *(float *)(lVar13 + 8 + (ulonglong)(local_180._s_0.C & 0x1ff) * 0xc);
          }
          pfVar15 = (float *)&local_150;
          uVar16 = local_154;
          local_d8 = local_188;
LAB_14c84c23f:
          local_f8 = *(undefined8 *)pfVar15;
          uVar12 = pfVar15[2];
        }
        fVar24 = (float)local_140 * local_170._s_0.Y + (float)local_130 * local_170._s_0.X +
                 (float)local_f8 * local_170._s_0.Z;
        fVar25 = local_140._4_4_ * local_170._s_0.Y + local_130._4_4_ * local_170._s_0.X +
                 local_f8._4_4_ * local_170._s_0.Z;
        fVar27 = (float)uVar16 * local_170._s_0.Y + local_188 * local_170._s_0.X +
                 (float)uVar12 * local_170._s_0.Z;
        fVar17 = SQRT(fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27);
        if (fVar17 <= 0.0) {
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar17 = 0.0;
        }
        else {
          fVar17 = __real_3f800000 / fVar17;
          fVar24 = fVar17 * fVar24;
          fVar25 = fVar17 * fVar25;
          fVar17 = fVar17 * fVar27;
        }
        fVar27 = (param_4->field0_0x0)._s_0.X;
        fVar23 = (param_4->field0_0x0)._s_0.Y;
        fVar26 = (param_4->field0_0x0)._s_0.Z;
        fVar18 = SQRT(fVar23 * fVar23 + fVar27 * fVar27 + fVar26 * fVar26);
        if (fVar18 <= 0.0) {
          fVar27 = 0.0;
          fVar23 = 0.0;
          fVar26 = 0.0;
        }
        else {
          fVar18 = __real_3f800000 / fVar18;
          fVar27 = fVar27 * fVar18;
          fVar23 = fVar23 * fVar18;
          fVar26 = fVar26 * fVar18;
        }
        fVar17 = acosf(fVar23 * fVar25 + fVar27 * fVar24 + fVar26 * fVar17);
        bVar8 = (double)fVar17 <= this->NormalThreshold;
        if ((!bVar8) && (this->LayeredMeshSupport != false)) {
          bVar8 = (double)(__real_40490fdb - fVar17) <= this->NormalThreshold;
        }
      }
      if ((!bVar7) || (!bVar8)) goto LAB_14c84c439;
    }
    TransferBoneWeightsLocals::InterpolateBoneWeights
              (param_1,(FIndex3i *)&local_180._s_0,(TVector<float> *)&local_170._s_0,local_e8,
               this->MaxNumInfluences,(TArray<FName,TSizedDefaultAllocator<32>_> *)pFVar11,param_3,
               true);
    bVar7 = true;
  }
  else {
LAB_14c84c439:
    bVar7 = false;
  }
  return bVar7;
}

// Validate @ 14c851290

EOperationValidationResult __thiscall
UE::Geometry::FTransferBoneWeights::Validate(FTransferBoneWeights *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar2;
  FDynamicMeshAttributeSet *pFVar3;
  
  if ((this->SourceMesh != (FDynamicMesh3 *)0x0) &&
     (((this->SourceBVH != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0 ||
       ((this->InternalSourceBVH).Ptr != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)) &&
      (pFVar1 = (this->SourceMesh->AttributeSet).Ptr, pFVar1 != (FDynamicMeshAttributeSet *)0x0))))
  {
    pTVar2 = FDynamicMeshAttributeSet::GetSkinWeightsAttribute(pFVar1,this->SourceProfileName);
    if (pTVar2 != (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
      if (this->bIgnoreBoneAttributes == false) {
        pFVar1 = (this->SourceMesh->AttributeSet).Ptr;
        pFVar3 = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar3 = pFVar1;
        }
        return (EOperationValidationResult)
               ((pFVar3->BoneNameAttrib).Ptr ==
               (TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *)0x0);
      }
      return Ok;
    }
  }
  return Failed_UnknownReason;
}

