// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 44

// FRemesher @ 14c7b3dc0

FRemesher * __thiscall UE::Geometry::FRemesher::FRemesher(FRemesher *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3e45798ee0000000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRemesher_Geometry_UE__6B_;
  this->MinLengthFlipThresh = 0.9;
  this->MinEdgeLength = 1.0;
  this->MaxEdgeLength = 3.0;
  this->SmoothSpeedT = 0.1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x100;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->bEnableFlips = true;
  this->bEnableCollapses = true;
  this->bEnableSplits = true;
  this->bEnableSmoothing = true;
  this->bPreventNormalFlips = false;
  this->bPreventTinyTriangles = false;
  this->FlipMetric = OptimalValence;
  this->SmoothType = Uniform;
  *(undefined8 *)&this->CustomSmoothF = 0;
  *(undefined8 *)&(this->CustomSmoothF).field_0x28 = 0;
  *(undefined8 *)&this->CustomSmoothSpeedF = 0;
  *(undefined8 *)&(this->CustomSmoothSpeedF).field_0x28 = 0;
  *(undefined8 *)&this->CustomEdgeLengthScaleF = 0;
  *(undefined8 *)&(this->CustomEdgeLengthScaleF).field_0x28 = 0;
  this->bEnableParallelProjection = true;
  this->bEnableParallelSmooth = true;
  this->bEnableSmoothInPlace = false;
  this->ModifiedEdgesLastPass = 0;
  this->bMeshIsClosed = false;
  this->MaxEdgeID = 0;
  this_00 = &this->TempPosBuffer;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->TempPosBuffer).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempPosBuffer).Blocks.ArrayNum = 0;
  (this->TempPosBuffer).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  (this->TempFlagBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempFlagBuffer).ArrayNum = 0;
  (this->TempFlagBuffer).ArrayMax = 0;
  return this;
}

// ~FRemesher @ 14c7b7710

void __thiscall UE::Geometry::FRemesher::~FRemesher(FRemesher *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FRemesher_Geometry_UE__6B_;
  pFVar1 = (this->TempFlagBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->TempPosBuffer,0);
  pFVar1 = (this->TempPosBuffer).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->CustomEdgeLengthScaleF != 0) {
    plVar2 = *(longlong **)&(this->CustomEdgeLengthScaleF).field_0x28;
    plVar3 = (longlong *)&(this->CustomEdgeLengthScaleF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CustomSmoothSpeedF != 0) {
    plVar2 = *(longlong **)&(this->CustomSmoothSpeedF).field_0x28;
    plVar3 = (longlong *)&(this->CustomSmoothSpeedF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->CustomSmoothF != 0) {
    plVar2 = *(longlong **)&(this->CustomSmoothF).field_0x28;
    plVar3 = (longlong *)&(this->CustomSmoothF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FMeshRefinerBase::~FMeshRefinerBase((FMeshRefinerBase *)this);
  return;
}

// GetNextEdge @ 14c810610

int __thiscall UE::Geometry::FRemesher::GetNextEdge(FRemesher *this,int param_1,bool *param_2)

{
  int iVar1;
  
  iVar1 = (int)(((longlong)param_1 + 0x10000000fU) % this->MaxEdgeID);
  *param_2 = iVar1 == 0;
  return iVar1;
}

// OnEdgeCollapse @ 14c81e200

void __thiscall
UE::Geometry::FRemesher::OnEdgeCollapse
          (FRemesher *this,int param_1,int param_2,int param_3,FEdgeCollapseInfo *param_4)

{
  return;
}

// OnEdgeFlip @ 14c81e360

void __thiscall
UE::Geometry::FRemesher::OnEdgeFlip(FRemesher *this,int param_1,FEdgeFlipInfo *param_2)

{
  return;
}

// OnEdgeSplit @ 14c81e7f0

void __thiscall
UE::Geometry::FRemesher::OnEdgeSplit
          (FRemesher *this,int param_1,int param_2,int param_3,FEdgeSplitInfo *param_4)

{
  return;
}

// ProfileBeginCollapse @ 14c8200a0

void __thiscall UE::Geometry::FRemesher::ProfileBeginCollapse(FRemesher *this)

{
  return;
}

// ProfileBeginFlip @ 14c8200b0

void __thiscall UE::Geometry::FRemesher::ProfileBeginFlip(FRemesher *this)

{
  return;
}

// ProfileBeginOps @ 14c8200c0

void __thiscall UE::Geometry::FRemesher::ProfileBeginOps(FRemesher *this)

{
  return;
}

// ProfileBeginPass @ 14c8200d0

void __thiscall UE::Geometry::FRemesher::ProfileBeginPass(FRemesher *this)

{
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    this->COUNT_COLLAPSES = 0;
    this->COUNT_FLIPS = 0;
    this->COUNT_SPLITS = 0;
  }
  return;
}

// ProfileBeginProject @ 14c8200f0

void __thiscall UE::Geometry::FRemesher::ProfileBeginProject(FRemesher *this)

{
  return;
}

// ProfileBeginSmooth @ 14c820100

void __thiscall UE::Geometry::FRemesher::ProfileBeginSmooth(FRemesher *this)

{
  return;
}

// ProfileBeginSplit @ 14c820110

void __thiscall UE::Geometry::FRemesher::ProfileBeginSplit(FRemesher *this)

{
  return;
}

// ProfileEndCollapse @ 14c820120

void __thiscall UE::Geometry::FRemesher::ProfileEndCollapse(FRemesher *this)

{
  return;
}

// ProfileEndFlip @ 14c820130

void __thiscall UE::Geometry::FRemesher::ProfileEndFlip(FRemesher *this)

{
  return;
}

// ProfileEndOps @ 14c820140

void __thiscall UE::Geometry::FRemesher::ProfileEndOps(FRemesher *this)

{
  return;
}

// ProfileEndPass @ 14c820150

void __thiscall UE::Geometry::FRemesher::ProfileEndPass(FRemesher *this)

{
  return;
}

// ProfileEndProject @ 14c820160

void __thiscall UE::Geometry::FRemesher::ProfileEndProject(FRemesher *this)

{
  return;
}

// ProfileEndSmooth @ 14c820170

void __thiscall UE::Geometry::FRemesher::ProfileEndSmooth(FRemesher *this)

{
  return;
}

// ProfileEndSplit @ 14c820180

void __thiscall UE::Geometry::FRemesher::ProfileEndSplit(FRemesher *this)

{
  return;
}

// StartEdges @ 14c839a40

int __thiscall UE::Geometry::FRemesher::StartEdges(FRemesher *this)

{
  this->MaxEdgeID =
       (longlong)(*(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4));
  return 0;
}

// operator() @ 14c8a4570

void __thiscall
`UE::Geometry::FRemesher::MoveVerticesParallel'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int local_res8 [2];
  char local_res10 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (-1 < param_1) {
    lVar3 = *(longlong *)(*(longlong *)this + 8);
    if (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) {
      uVar9 = (ulonglong)(param_1 & 0x1ff);
      lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + lVar2) + uVar9 * 2) - 1U)
          < 0xfffe) {
        local_res10[0] = '\0';
        local_res8[0] = param_1;
        UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
        pcVar4 = *(code **)((longlong)this + 0x10);
        plVar8 = (longlong *)((longlong)this + 0x20);
        if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
          plVar8 = *(longlong **)((longlong)this + 0x38);
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar4)(&local_48,uVar7,local_res8,local_res10);
        if (local_res10[0] != '\0') {
          lVar3 = *(longlong *)this;
          uVar6 = 0;
          if (param_1 < *(int *)(lVar3 + 0x248)) {
            uVar6 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar3 + 0x240)) = 1;
          lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + lVar2);
          puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x18);
          *puVar1 = local_48;
          puVar1[1] = uStack_40;
          *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18) = local_38;
        }
      }
    }
  }
  return;
}

// operator() @ 14c8a7be0

TVector<double> * __thiscall
`UE::Geometry::FRemesher::FullProjectionPass'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,bool *param_2)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int local_res18 [2];
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  *param_2 = false;
  lVar2 = *(longlong *)
           (((*(FMeshRefinerBase **)this)->Mesh->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  local_38 = *(double *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (bVar4) {
LAB_14c8a7d38:
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_48;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_40;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38;
  }
  else {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res18[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res18);
      if ((uVar6 & 2) != 0) goto LAB_14c8a7d38;
    }
    (**(code **)(**(longlong **)(*(longlong *)this + 0xd0) + 8))
              (*(longlong **)(*(longlong *)this + 0xd0),&local_30,&local_48,param_1);
    uVar8 = SUB84(local_48 - local_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)(local_48 - local_30) >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
          (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) ||
        (uVar8 = SUB84(dStack_40 - dStack_28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar9 = (uint)((ulonglong)(dStack_40 - dStack_28) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a)) ||
       (uVar8 = SUB84(local_38 - local_20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar9 = (uint)((ulonglong)(local_38 - local_20) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
       (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a)) {
      *param_2 = true;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_30;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_28;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20;
    }
    else {
      *param_2 = false;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_30;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_28;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_20;
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14c8a7d70

TVector<double> * __thiscall
`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1,bool *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong local_38 [2];
  undefined1 local_28 [24];
  undefined8 local_10;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  plVar2 = *(longlong **)this;
  pcVar3 = *(code **)(*plVar1 + 0x90);
  local_38[0] = *plVar2;
  local_10 = 0;
  if (local_38[0] != 0) {
    plVar4 = plVar2 + 2;
    if ((longlong *)plVar2[5] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[5];
    }
    (**(code **)*plVar4)(plVar4,local_28);
  }
  (*pcVar3)(plVar1,__return_storage_ptr__,param_1,local_38,param_2);
  return __return_storage_ptr__;
}

// operator() @ 14c8a9020

void __thiscall
`UE::Geometry::FRemesher::ApplyVertexBuffer'::__l28::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  short sVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar11 = *(int *)((longlong)this + 8) * param_1;
  if ((int)uVar11 < (param_1 + 1) * *(int *)((longlong)this + 8)) {
    lVar14 = (longlong)(int)uVar11;
    do {
      lVar4 = *(longlong *)this;
      if ((int)uVar11 < *(int *)(lVar4 + 0x248)) {
        if (((int)uVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)(lVar14 + *(longlong *)(lVar4 + 0x240)) != '\0') {
          lVar4 = *(longlong *)(*(longlong *)this + 8);
          if ((-1 < (int)uVar11) &&
             ((int)uVar11 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))) {
            uVar13 = (ulonglong)(uVar11 >> 9);
            uVar12 = (ulonglong)(uVar11 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar13 * 8) +
                                   uVar12 * 2) - 1U) < 0xfffe) {
              uVar10 = (ulonglong)((uint)lVar14 & 0x1ff);
              lVar5 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x230) + uVar13 * 8);
              sVar9 = _dclass(*(undefined8 *)(lVar5 + uVar10 * 0x18));
              if (((sVar9 < 1) &&
                  (sVar9 = _dclass(*(undefined8 *)(lVar5 + 8 + uVar10 * 0x18)), sVar9 < 1)) &&
                 (sVar9 = _dclass(*(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x18)), sVar9 < 1)) {
                puVar2 = (undefined8 *)(lVar5 + uVar10 * 0x18);
                uVar7 = puVar2[1];
                uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x18);
                lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar13 * 8);
                puVar1 = (undefined8 *)(lVar4 + uVar12 * 0x18);
                *puVar1 = *puVar2;
                puVar1[1] = uVar7;
                *(undefined8 *)(lVar4 + 0x10 + uVar12 * 0x18) = uVar3;
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar11 < (param_1 + 1) * *(int *)((longlong)this + 8));
  }
  return;
}

// operator() @ 14c8add30

void __thiscall
`UE::Geometry::FRemesher::FullProjectionPass'::__l7::<lambda_2>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double> local_20;
  
  bVar4 = UE::Geometry::FMeshRefinerBase::IsVertexPositionConstrained
                    (*(FMeshRefinerBase **)this,param_1);
  if (!bVar4) {
    lVar2 = *(longlong *)this;
    if (*(void **)(lVar2 + 0xe0) != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar2 + 0xe0));
      pcVar3 = *(code **)(lVar2 + 0xe0);
      plVar7 = (longlong *)(lVar2 + 0xf0);
      if (*(longlong **)(lVar2 + 0x108) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x108);
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      uVar6 = (*pcVar3)(uVar5,local_res8);
      if ((uVar6 & 2) != 0) {
        return;
      }
    }
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
             (ulonglong)((uint)param_1 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    plVar7 = *(longlong **)(*(longlong *)this + 0xd0);
    (**(code **)(*plVar7 + 8))(plVar7,&local_20,&local_38,param_1);
    UE::Geometry::FDynamicMesh3::SetVertex
              (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,&local_20,true);
  }
  return;
}

// operator() @ 14c8ade20

void __thiscall
`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::__l7::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  char local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48 [2];
  undefined1 local_38 [24];
  undefined8 local_20;
  
  plVar1 = *(longlong **)this;
  local_res8[0] = '\0';
  local_20 = 0;
  pcVar2 = *(code **)(*plVar1 + 0x90);
  local_48[0] = *(longlong *)((longlong)this + 0x10);
  if (local_48[0] != 0) {
    puVar5 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar5)(puVar5,local_38);
  }
  (*pcVar2)(plVar1,&local_68,param_1,local_48,local_res8);
  if (local_res8[0] != '\0') {
    lVar3 = *(longlong *)this;
    uVar6 = 0;
    if (param_1 < *(int *)(lVar3 + 0x248)) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined1 *)((longlong)param_1 + *(longlong *)(lVar3 + 0x240)) = 1;
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)this + 0x230) + (ulonglong)((uint)param_1 >> 9) * 8);
    puVar5 = (undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    *puVar5 = local_68;
    puVar5[1] = uStack_60;
    *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18) = local_58;
  }
  return;
}

// ApplyToProjectVertices @ 14c8ba9b0

void __thiscall
UE::Geometry::FRemesher::ApplyToProjectVertices
          (FRemesher *this,TFunction<void___cdecl(int)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = this->_padding_;
  uVar8 = 0;
  uVar9 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14c8baa33;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[uVar8 >> 9];
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
LAB_14c8baa33:
  if (uVar7 != uVar9) {
LAB_14c8baa50:
    do {
      local_res8[0] = (int)uVar8;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_res8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
          lVar2 = *(longlong *)((uVar8 >> 9) * 8 + *(longlong *)(lVar1 + 0x28));
          if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1))
          goto LAB_14c8baa50;
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
  }
  return;
}

// ApplyToSmoothVertices @ 14c8baae0

void __thiscall
UE::Geometry::FRemesher::ApplyToSmoothVertices
          (FRemesher *this,TFunction<void___cdecl(int)> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = this->_padding_;
  uVar8 = 0;
  uVar9 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar7 = 1;
    if ((int)uVar9 < 2) goto LAB_14c8bab63;
    do {
      lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar1 + 0x28))[uVar8 >> 9];
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)uVar9);
  }
  uVar7 = (uint)uVar8;
LAB_14c8bab63:
  if (uVar7 != uVar9) {
LAB_14c8bab80:
    do {
      local_res8[0] = (int)uVar8;
      Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar3 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(uVar5,local_res8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < (int)uVar9) {
        do {
          lVar4 = (ulonglong)((uint)uVar8 & 0x1ff) * 2;
          lVar2 = *(longlong *)((uVar8 >> 9) * 8 + *(longlong *)(lVar1 + 0x28));
          if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1))
          goto LAB_14c8bab80;
          uVar7 = (uint)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)uVar9);
      }
    } while (uVar7 != uVar9);
  }
  return;
}

// ApplyVertexBuffer @ 14c8bafc0

void __thiscall UE::Geometry::FRemesher::ApplyVertexBuffer(FRemesher *this,bool param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  short sVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  atomic<unsigned_char> *this_00;
  uint uVar15;
  longlong lVar16;
  <lambda_1> local_res10;
  FRemesher *local_58;
  undefined4 local_50;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FRemesher **local_30;
  
  plVar1 = &this->_padding_;
  if (((this->TempFlagBuffer).ArrayNum <
       *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TempFlagBuffer.Num() >= Mesh->MaxVertexID()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                          ,0x23d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((int)((this->TempPosBuffer).CurBlock * 0x200 + (this->TempPosBuffer).CurBlockUsed) <
       *(int *)(*plVar1 + 0x20) * 0x200 + *(int *)(*plVar1 + 0x24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("static_cast<int>(TempPosBuffer.Num()) >= Mesh->MaxVertexID()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                          ,0x23e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar16 = *plVar1;
  if (param_1) {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FRemesher::ApplyVertexBuffer'::__l28::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_58;
    local_48.DataPtr = (void **)0x0;
    local_48.ArrayNum = 0;
    local_50 = 1000;
    local_58 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               -((int)ROUND(__real_bf000000 -
                            (float)(*(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24)) *
                            __real_3b03126f) >> 1),1,(TFunctionRef<void___cdecl(int)> *)&local_38,
               local_res10,None,&local_48);
    lVar16 = *plVar1;
    if (*(char *)(lVar16 + 0x21c) == '\0') {
      return;
    }
    this_00 = (atomic<unsigned_char> *)(lVar16 + 0x21d);
    LOCK();
    bVar10 = *this_00 == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
  }
  else {
    uVar15 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
    uVar14 = 0;
    if ((uVar15 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar15) {
        do {
          lVar6 = (*(undefined8 **)(lVar16 + 0x28))[uVar13 >> 9];
          if ((*(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (uVar14 = uVar13, *(short *)(lVar6 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
          uVar13 = uVar13 + 1;
          uVar14 = uVar13;
        } while ((int)uVar13 < (int)uVar15);
      }
    }
joined_r0x00014c8bb0e7:
    if (uVar14 != uVar15) {
      while( true ) {
        uVar13 = 0;
        if ((int)uVar14 < (this->TempFlagBuffer).ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->TempFlagBuffer).AllocatorInstance.Data[(int)uVar14] !=
            (FScriptContainerElement)0x0) {
          lVar6 = this->_padding_;
          uVar12 = (ulonglong)(uVar14 & 0x1ff);
          lVar7 = *(longlong *)
                   ((this->TempPosBuffer).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar14 >> 9) * 8);
          sVar11 = _dclass(*(undefined8 *)(lVar7 + uVar12 * 0x18));
          if (((sVar11 < 1) &&
              (sVar11 = _dclass(*(undefined8 *)(lVar7 + 8 + uVar12 * 0x18)), sVar11 < 1)) &&
             (sVar11 = _dclass(*(undefined8 *)(lVar7 + 0x10 + uVar12 * 0x18)), sVar11 < 1)) {
            puVar3 = (undefined8 *)(lVar7 + uVar12 * 0x18);
            uVar9 = puVar3[1];
            uVar5 = *(undefined8 *)(lVar7 + 0x10 + uVar12 * 0x18);
            lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
            puVar2 = (undefined8 *)(lVar6 + uVar12 * 0x18);
            *puVar2 = *puVar3;
            puVar2[1] = uVar9;
            *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18) = uVar5;
          }
        }
        uVar14 = uVar14 + 1;
        if ((int)uVar15 <= (int)uVar14) break;
        while ((sVar11 = *(short *)(*(longlong *)
                                     (*(longlong *)(lVar16 + 0x28) + (ulonglong)(uVar14 >> 9) * 8) +
                                   (ulonglong)(uVar14 & 0x1ff) * 2), sVar11 == 0 || (sVar11 == -1)))
        {
          uVar14 = uVar14 + 1;
          if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014c8bb0e7;
        }
      }
      goto joined_r0x00014c8bb0e7;
    }
    lVar16 = this->_padding_;
    if (*(char *)(lVar16 + 0x21c) == '\0') {
      return;
    }
    this_00 = (atomic<unsigned_char> *)(lVar16 + 0x21d);
    LOCK();
    bVar10 = *this_00 == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
  }
  if (!bVar10) {
    FMutex::LockSlow((FMutex *)this_00);
  }
  *(int *)(lVar16 + 0x220) = *(int *)(lVar16 + 0x220) + 1;
  LOCK();
  aVar4 = *this_00;
  *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_00);
  }
  return;
}

// BasicRemeshPass @ 14c8c1500

void __thiscall UE::Geometry::FRemesher::BasicRemeshPass(FRemesher *this)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  char local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(int *)(this->_padding_ + 0x170) != 0) {
    if ((*(longlong *)(this->_padding_ + 0x208) != 0) && ((char)this->_padding_ == '\0')) {
      local_res10[0] = 0;
      `UE::Geometry::FRemesher::BasicRemeshPass'::__l8::<lambda_1>::operator()(local_res10);
    }
    (**(code **)(this->_padding_ + 200))(this);
    (**(code **)(this->_padding_ + 0xd8))(this);
    iVar7 = 0;
    this->ModifiedEdgesLastPass = 0;
    uVar5 = (**(code **)(this->_padding_ + 0x58))(this);
    local_res8[0] = '\0';
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId67,"Remesher_EdgesPass",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                 ,0x43);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
    }
    do {
      lVar1 = this->_padding_;
      if ((((-1 < (int)uVar5) &&
           ((int)uVar5 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)(uVar5 >> 9) * 8) +
                              (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (uVar6 = (**(code **)(this->_padding_ + 0x68))(this,uVar5), uVar6 < 3)) {
        this->ModifiedEdgesLastPass = this->ModifiedEdgesLastPass + 1;
      }
      if ((iVar7 == (iVar7 / 1000) * 1000) &&
         (cVar3 = (**(code **)(this->_padding_ + 8))(this), cVar3 != '\0')) {
        if (!bVar8) {
          return;
        }
        FCpuProfilerTrace::OutputEndEvent();
        return;
      }
      uVar5 = (**(code **)(this->_padding_ + 0x60))(this,uVar5,local_res8);
      iVar7 = iVar7 + 1;
    } while (local_res8[0] == '\0');
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    (**(code **)(this->_padding_ + 0xe0))(this);
    cVar3 = (**(code **)(this->_padding_ + 8))(this);
    if (cVar3 == '\0') {
      (**(code **)(this->_padding_ + 0xe8))(this);
      if ((this->bEnableSmoothing != false) &&
         ((0.0 < this->SmoothSpeedT || (*(longlong *)&this->CustomSmoothSpeedF != 0)))) {
        bVar8 = -1 < CpuChannel->Enabled;
        if (bVar8) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId95,"Remesher_SmoothingPass",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                     ,0x5f);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId95);
        }
        if (this->bEnableSmoothInPlace == false) {
          (**(code **)(this->_padding_ + 0x88))(this,this->bEnableParallelSmooth);
        }
        else {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                             ,99,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (**(code **)(this->_padding_ + 0x28))(this,0);
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      (**(code **)(this->_padding_ + 0xf0))(this);
      cVar3 = (**(code **)(this->_padding_ + 8))(this);
      if (cVar3 == '\0') {
        (**(code **)(this->_padding_ + 0xf8))(this);
        if ((this->_padding_ != 0) && ((char)this->_padding_ == '\x01')) {
          bVar8 = -1 < CpuChannel->Enabled;
          if (bVar8) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId117,"Remesher_ProjectionPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                       ,0x75);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId117);
          }
          (**(code **)(this->_padding_ + 0xa8))(this,this->bEnableParallelProjection);
          (**(code **)(this->_padding_ + 0x28))(this,0);
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        (**(code **)(this->_padding_ + 0x100))(this);
        (**(code **)(this->_padding_ + 0x28))(this,1);
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 == '\0') {
          (**(code **)(this->_padding_ + 0xd0))(this);
        }
      }
    }
  }
  return;
}

// ComputeSmoothedVertexPos @ 14c8cd170

TVector<double> * __thiscall
UE::Geometry::FRemesher::ComputeSmoothedVertexPos
          (FRemesher *this,TVector<double> *__return_storage_ptr__,int param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,int,double)>
          *param_2,bool *param_3)

{
  longlong lVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  double *pdVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  double dVar11;
  byte local_98;
  int local_90 [2];
  double local_88;
  double dStack_80;
  double local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  bool *local_50;
  
  local_50 = param_3;
  local_68._0_2_ = CONCAT11(1,(undefined1)local_68);
  *param_3 = false;
  local_70 = (longlong *)0x0;
  if (((char)this->_padding_ != '\0') &&
     ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4))) {
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar4 * 0x20 + this->_padding_);
        if (*piVar8 == param_1) {
          piVar5 = piVar8 + 2;
          if (piVar8 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            local_68 = *(double *)piVar5;
            uStack_60 = *(undefined8 *)(piVar5 + 2);
            local_70 = *(longlong **)(piVar5 + 2);
          }
          break;
        }
        iVar4 = piVar8[6];
      } while (iVar4 != -1);
    }
  }
  if ((char)((ulonglong)local_68 >> 8) == '\0') {
    lVar1 = *(longlong *)
             (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar7 = (double *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    dVar11 = pdVar7[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         *(double *)(lVar1 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    if (*(longlong *)param_2 != 0) {
      plVar9 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else {
    if ((void *)this->_padding_ == (void *)0x0) {
      local_98 = 0;
    }
    else {
      local_90[0] = param_1;
      Core::Private::Function::CheckCallable((void *)this->_padding_);
      pcVar2 = (code *)this->_padding_;
      plVar9 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar9 = (longlong *)this->_padding_;
      }
      uVar6 = (**(code **)(*plVar9 + 8))();
      local_98 = (*pcVar2)(uVar6,local_90);
      if ((local_98 & 1) != 0) {
        lVar1 = *(longlong *)
                 (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar7 = (double *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        dVar11 = pdVar7[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar1 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        if (*(longlong *)param_2 == 0) {
          return __return_storage_ptr__;
        }
        plVar9 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
        return __return_storage_ptr__;
      }
    }
    if (*(void **)&this->CustomSmoothSpeedF == (void *)0x0) {
      dVar11 = this->SmoothSpeedT;
    }
    else {
      lVar1 = this->_padding_;
      local_90[0] = param_1;
      Core::Private::Function::CheckCallable(*(void **)&this->CustomSmoothSpeedF);
      pcVar2 = *(code **)&this->CustomSmoothSpeedF;
      plVar9 = *(longlong **)&(this->CustomSmoothSpeedF).field_0x28;
      plVar10 = (longlong *)&(this->CustomSmoothSpeedF).field_0x10;
      if (plVar9 != (longlong *)0x0) {
        plVar10 = plVar9;
      }
      uVar6 = (**(code **)(*plVar10 + 8))();
      dVar11 = (double)(*pcVar2)(uVar6,lVar1,local_90);
    }
    if (0.0 < dVar11) {
      local_68 = this->SmoothSpeedT;
      lVar1 = this->_padding_;
      local_90[0] = param_1;
      Core::Private::Function::CheckCallable(*(void **)param_2);
      plVar9 = (longlong *)&param_2->field_0x10;
      pcVar2 = *(code **)param_2;
      plVar10 = plVar9;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar10 = *(longlong **)&param_2->field_0x28;
      }
      uVar6 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(&local_88,uVar6,lVar1,local_90,&local_68);
      sVar3 = _dclass(local_88);
      if (((sVar3 < 1) && (sVar3 = _dclass(dStack_80), sVar3 < 1)) &&
         (sVar3 = _dclass(local_78), sVar3 < 1)) {
        if (local_70 == (longlong *)0x0) {
          if ((((char)this->_padding_ == '\x02') &&
              (plVar10 = (longlong *)this->_padding_, plVar10 != (longlong *)0x0)) &&
             ((local_98 & 2) == 0)) {
            pdVar7 = (double *)(**(code **)(*plVar10 + 8))(plVar10,&local_68,&local_88,param_1);
            local_88 = *pdVar7;
            dStack_80 = pdVar7[1];
            local_78 = pdVar7[2];
          }
        }
        else {
          pdVar7 = (double *)(**(code **)(*local_70 + 8))(local_70,&local_68,&local_88,param_1);
          local_88 = *pdVar7;
          dStack_80 = pdVar7[1];
          local_78 = pdVar7[2];
        }
        *local_50 = true;
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_88;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_80;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_78;
        if (*(longlong *)param_2 != 0) {
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar9 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      else {
        lVar1 = *(longlong *)
                 (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar7 = (double *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        dVar11 = pdVar7[1];
        (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             *(double *)(lVar1 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
        if (*(longlong *)param_2 != 0) {
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar9 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else {
      lVar1 = *(longlong *)
               (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
      pdVar7 = (double *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x18);
      dVar11 = pdVar7[1];
      (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           *(double *)(lVar1 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
      if (*(longlong *)param_2 != 0) {
        plVar9 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_2->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  return __return_storage_ptr__;
}

// FullProjectionPass @ 14c8f0200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FRemesher::FullProjectionPass(FRemesher *this,bool param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FRemesher *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_30 = this;
  if (param_1) {
    local_38 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FRemesher::FullProjectionPass'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FRemesher::FullProjectionPass'::__l5::<lambda_1>,UE::Math::TVector<double>,int,bool_&>
                  ::Call;
    MoveVerticesParallel(this,(TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *)local_48);
    return;
  }
  local_38 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FRemesher::FullProjectionPass'::`7'::<lambda_2>,0,0>
              ::_vftable_;
  local_48[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FRemesher::FullProjectionPass'::__l7::<lambda_2>,void,int>
                ::Call;
  (**(code **)(this->_padding_ + 0xc0))();
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// FullSmoothPass_Buffer @ 14c8f02c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Geometry::FRemesher::FullSmoothPass_Buffer(FRemesher *this,bool param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined **local_b8;
  undefined ***local_b0;
  FRemesher *local_a8;
  undefined ***local_a0;
  FRemesher *local_98;
  undefined **local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined **local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (**(code **)(this->_padding_ + 0xa0))(this,local_58);
  if (param_1) {
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_b0 = local_58;
    local_c8._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::__l5::<lambda_1>,UE::Math::TVector<double>,int,bool_&>
         ::Call;
    local_a0 = (undefined ***)0x0;
    local_a8 = this;
    MoveVerticesParallel(this,(TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *)local_c8);
  }
  else {
    (**(code **)(this->_padding_ + 0x78))();
    local_98 = this;
    local_88 = local_58[0];
    local_60 = (longlong *)0x0;
    if (local_58[0] != (undefined **)0x0) {
      plVar3 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)*plVar3)(plVar3,local_78);
    }
    local_c8._0_8_ = (code *)0x0;
    pcVar1 = *(code **)(this->_padding_ + 0x98);
    pppuVar2 = FMemory::Malloc(0x50,0x10);
    local_a0 = pppuVar2;
    *pppuVar2 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::`7'::<lambda_2>,0,1>
                 ::_vftable_;
    pppuVar2[2] = (undefined **)local_98;
    pppuVar2[4] = local_88;
    pppuVar2[9] = (undefined **)0x0;
    if (local_88 != (undefined **)0x0) {
      plVar3 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar3 = local_60;
      }
      (**(code **)*plVar3)();
    }
    if (pppuVar2 + 2 != (undefined ***)0x0) {
      local_c8._0_8_ =
           Core::Private::Function::
           TFunctionRefCaller<`UE::Geometry::FRemesher::FullSmoothPass_Buffer'::__l7::<lambda_2>,void,int>
           ::Call;
    }
    (*pcVar1)(this,local_c8);
    if ((code *)local_c8._0_8_ != (code *)0x0) {
      pppuVar2 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar2 = local_a0;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    (**(code **)(this->_padding_ + 0x80))(this,0);
    if (local_88 != (undefined **)0x0) {
      plVar3 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar3 = local_60;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_58[0] != (undefined **)0x0) {
    plVar3 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// GetProjectedCollapsePosition @ 14c8f5420

TVector<double> * __thiscall
UE::Geometry::FRemesher::GetProjectedCollapsePosition
          (FRemesher *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  double dVar1;
  EVertexControl EVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  
  if (((char)this->_padding_ != '\0') &&
     ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4))) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + this->_padding_);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            plVar6 = *(longlong **)(piVar4 + 2);
            if (plVar6 != (longlong *)0x0) goto LAB_14c8f54f6;
            if (*(char *)((longlong)piVar4 + 1) == '\0') goto LAB_14c8f5507;
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  if ((((char)this->_padding_ == '\x02') && (this->_padding_ != 0)) &&
     ((this->_padding_ == 0 ||
      (EVar2 = Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,enum_UE::Geometry::FMeshRefinerBase::EVertexControl___cdecl(int)>
               ::operator()(&this->_padding_,param_1), (EVar2 & NoProject) == AllowAll)))) {
    plVar6 = (longlong *)this->_padding_;
LAB_14c8f54f6:
    (**(code **)(*plVar6 + 8))(plVar6,__return_storage_ptr__,param_2,param_1);
  }
  else {
LAB_14c8f5507:
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetSmoothFunction @ 14c8f7ca0

TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,int,double)> *
__thiscall
UE::Geometry::FRemesher::GetSmoothFunction
          (FRemesher *this,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Geometry::FDynamicMesh3_const_&,int,double)>
          *__return_storage_ptr__)

{
  ESmoothTypes EVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  if (*(longlong *)&this->CustomSmoothF == 0) {
    EVar1 = this->SmoothType;
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &
         ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__AEBVFDynamicMesh3_Geometry_3_HN_Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    if (EVar1 == MeanValue) {
      pcVar4 = MeanValueSmooth;
    }
    else {
      pcVar4 = CotanSmooth;
      if (EVar1 != Cotan) {
        pcVar4 = UniformSmooth;
      }
    }
    *(code **)&__return_storage_ptr__->field_0x18 = pcVar4;
    if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
      *(code **)__return_storage_ptr__ =
           Core::Private::Function::
           TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(UE::Geometry::FDynamicMesh3_const_&,int,double),UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_const_&,int,double>
           ::Call;
    }
  }
  else {
    *(longlong *)__return_storage_ptr__ = *(longlong *)&this->CustomSmoothF;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    if (*(longlong *)__return_storage_ptr__ != 0) {
      puVar2 = *(undefined8 **)&(this->CustomSmoothF).field_0x28;
      puVar3 = (undefined8 *)&(this->CustomSmoothF).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
      }
      (**(code **)*puVar3)();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// InitializeVertexBufferForPass @ 14c8ff6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FRemesher::InitializeVertexBufferForPass(FRemesher *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool local_res8 [8];
  
  iVar1 = *(int *)(this->_padding_ + 0x24);
  iVar3 = *(int *)(this->_padding_ + 0x20) * 0x200;
  iVar2 = iVar3 + iVar1;
  if ((int)((this->TempPosBuffer).CurBlock * 0x200 + (this->TempPosBuffer).CurBlockUsed) < iVar2) {
    TDynamicVector<UE::Math::TVector<double>,512>::Resize
              (&this->TempPosBuffer,iVar2 / 5 + iVar1 + iVar3);
  }
  iVar2 = *(int *)(this->_padding_ + 0x24) + *(int *)(this->_padding_ + 0x20) * 0x200;
  if ((this->TempFlagBuffer).ArrayNum < iVar2) {
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->TempFlagBuffer,iVar2 * 2,Default);
  }
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->TempFlagBuffer,local_res8,(this->TempFlagBuffer).ArrayNum);
  return;
}

// MoveVerticesParallel @ 14c90c880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRemesher::MoveVerticesParallel
          (FRemesher *this,TFunction<UE::Math::TVector<double>___cdecl(int,bool_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FRemesher **local_68;
  FRemesher *local_58 [2];
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  (**(code **)(this->_padding_ + 0x78))();
  if ((this->TempFlagBuffer).ArrayNum <
      *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TempFlagBuffer.Num() >= Mesh->MaxVertexID()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                       ,0x2e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)((this->TempPosBuffer).CurBlock * 0x200 + (this->TempPosBuffer).CurBlockUsed) <
      *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("static_cast<int>(TempPosBuffer.Num()) >= Mesh->MaxVertexID()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Remesher.cpp"
                       ,0x2e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = *(longlong *)param_1;
  local_20 = (longlong *)0x0;
  local_58[0] = this;
  if (local_48 != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,local_38);
  }
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRemesher::MoveVerticesParallel'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = local_58;
  local_80.DataPtr = (void **)0x0;
  local_80.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),1,
             (TFunctionRef<void___cdecl(int)> *)&local_70,local_88,None,&local_80);
  if (local_48 != 0) {
    plVar4 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar4 = local_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x80))(this,1);
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// Precompute @ 14c90fc80

void __thiscall UE::Geometry::FRemesher::Precompute(FRemesher *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = this->_padding_;
  this->bMeshIsClosed = true;
  uVar6 = *(int *)(lVar1 + 0x1d4) + *(int *)(lVar1 + 0x1d0) * 0x200;
  uVar5 = 0;
  if ((uVar6 != 0) &&
     (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x1d8) - 1U))) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar6) {
      do {
        lVar3 = (ulonglong)(uVar4 & 0x1ff) * 2;
        lVar2 = (*(undefined8 **)(lVar1 + 0x1d8))[uVar4 >> 9];
        if ((*(short *)(lVar3 + lVar2) != 0) && (uVar5 = uVar4, *(short *)(lVar3 + lVar2) != -1))
        break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
      } while ((int)uVar4 < (int)uVar6);
    }
  }
  if (uVar5 == uVar6) {
    return;
  }
LAB_14c90fd30:
  do {
    if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) + 0xc +
                (ulonglong)(uVar5 & 0x1ff) * 0x10) == -1) {
      this->bMeshIsClosed = false;
      return;
    }
    uVar5 = uVar5 + 1;
    if ((int)uVar5 < (int)uVar6) {
      do {
        lVar2 = (ulonglong)(uVar5 >> 9) * 8;
        lVar3 = (ulonglong)(uVar5 & 0x1ff) * 2;
        if ((*(short *)(lVar3 + *(longlong *)(*(longlong *)(lVar1 + 0x1d8) + lVar2)) != 0) &&
           (*(short *)(lVar3 + *(longlong *)(lVar2 + *(longlong *)(lVar1 + 0x1d8))) != -1))
        goto LAB_14c90fd30;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar6);
    }
    if (uVar5 == uVar6) {
      return;
    }
  } while( true );
}

// ProcessEdge @ 14c90fdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

EProcessResult __thiscall UE::Geometry::FRemesher::ProcessEdge(FRemesher *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  FDynamicMesh3 *this_00;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  EProcessResult EVar20;
  undefined8 uVar22;
  double *pdVar23;
  FMeshConstraints *pFVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  int iVar29;
  longlong *plVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  uint local_res8 [2];
  uint local_res18;
  int local_res1c;
  ulonglong local_res20;
  TVector<double>_u_0 local_1a0;
  uint local_188 [2];
  ulonglong local_180;
  ulonglong local_178;
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  uint local_150;
  uint local_14c;
  longlong local_148;
  undefined1 local_138 [4];
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong uVar21;
  
  FMeshRefinerBase::RuntimeDebugCheck((FMeshRefinerBase *)this,param_1);
  local_178 = 0;
  if (((char)this->_padding_ != '\0') &&
     ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4))) {
    plVar30 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar30 = &this->_padding_;
    }
    iVar29 = *(int *)((longlong)plVar30 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar29 != -1) {
      do {
        lVar1 = this->_padding_ + (longlong)iVar29 * 0x28;
        if (*(int *)(this->_padding_ + (longlong)iVar29 * 0x28) == param_1) {
          pdVar23 = (double *)(lVar1 + 8);
          if (lVar1 == 0) {
            pdVar23 = (double *)0x0;
          }
          if (pdVar23 != (double *)0x0) {
            local_1a0._s_0.X = *pdVar23;
            local_1a0._s_0.Y = pdVar23[1];
            local_1a0._s_0.Z = pdVar23[2];
            goto LAB_14c90fe5a;
          }
          break;
        }
        iVar29 = *(int *)(lVar1 + 0x20);
      } while (iVar29 != -1);
    }
  }
  local_1a0._16_4_ = 0xffffffff;
  local_1a0._s_0.Y = 0.0;
  local_1a0._s_0.X = (double)((ulonglong)(uint)local_1a0._4_4_ << 0x20);
LAB_14c90fe5a:
  uVar13 = local_1a0._s_0.X;
  if ((SUB81(local_1a0._s_0.X,0) & 7) == 7) {
    return Ignored_EdgeIsFullyConstrained;
  }
  local_res20 = this->_padding_;
  lVar1 = *(longlong *)(*(longlong *)(local_res20 + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar33 = *(ulonglong *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar4 = *(undefined8 *)(lVar1 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar15 = (uint)uVar33;
  uVar21 = (ulonglong)(uVar15 & 0x1ff);
  uVar35 = uVar33 >> 0x20;
  local_d8 = (uVar33 & 0xffffffff) >> 9;
  local_d0 = uVar21 * 3;
  lVar1 = *(longlong *)(*(longlong *)(local_res20 + 0x10) + local_d8 * 8);
  pdVar23 = (double *)(lVar1 + uVar21 * 0x18);
  dVar39 = *pdVar23;
  dVar40 = pdVar23[1];
  dVar3 = *(double *)(lVar1 + 0x10 + uVar21 * 0x18);
  uVar34 = (uint)(uVar33 >> 0x20);
  local_180 = uVar33 >> 0x29;
  uVar21 = (ulonglong)(uVar34 & 0x1ff);
  local_148 = uVar21 * 3;
  lVar1 = *(longlong *)(*(longlong *)(local_res20 + 0x10) + local_180 * 8);
  dVar37 = *(double *)(lVar1 + 0x10 + uVar21 * 0x18);
  pdVar23 = (double *)(lVar1 + uVar21 * 0x18);
  dVar41 = *pdVar23;
  dVar10 = pdVar23[1];
  dVar8 = (dVar10 - dVar40) * (dVar10 - dVar40) + (dVar41 - dVar39) * (dVar41 - dVar39) +
          (dVar37 - dVar3) * (dVar37 - dVar3);
  dVar36 = dVar8;
  local_e8 = dVar3;
  local_e0 = uVar33;
  if (*(void **)&this->CustomEdgeLengthScaleF != (void *)0x0) {
    local_res8[0] = uVar34;
    local_res18 = uVar15;
    Core::Private::Function::CheckCallable(*(void **)&this->CustomEdgeLengthScaleF);
    pcVar5 = *(code **)&this->CustomEdgeLengthScaleF;
    plVar30 = *(longlong **)&(this->CustomEdgeLengthScaleF).field_0x28;
    plVar28 = (longlong *)&(this->CustomEdgeLengthScaleF).field_0x10;
    if (plVar30 != (longlong *)0x0) {
      plVar28 = plVar30;
    }
    uVar22 = (**(code **)(*plVar28 + 8))();
    dVar36 = (double)(*pcVar5)(uVar22,local_res20,&local_res18,local_res8);
    dVar36 = dVar36 * dVar36 * dVar8;
  }
  dVar38 = __real_3fe0000000000000;
  local_188[0] = 0xffffffff;
  if (((this->bEnableCollapses == false) || ((uVar13 & 4) != 0)) ||
     (this->MinEdgeLength * this->MinEdgeLength <= dVar36)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  uVar43 = SUB84(__real_3fe0000000000000,0);
  local_res20 = local_res20 & 0xffffffffffffff00;
  iVar31 = (int)uVar4;
  iVar29 = (int)((ulonglong)uVar4 >> 0x20);
  if (bVar14) {
    FDynamicMesh3::GetEdgeOpposingV((FDynamicMesh3 *)this->_padding_,(int)&local_res18);
    bVar14 = FMeshRefinerBase::CanCollapseEdge
                       ((FMeshRefinerBase *)this,param_1,uVar15,uVar34,local_res18,local_res1c,
                        iVar31,iVar29,(int *)local_188);
    if (bVar14) {
      uVar32 = uVar15;
      if (local_188[0] == uVar34) {
        uVar42 = 0;
        local_res8[0] = uVar34;
        local_1a0._s_0.X = dVar41;
        local_1a0._s_0.Y = dVar10;
        local_1a0._s_0.Z = dVar37;
      }
      else if (local_188[0] == uVar15) {
        uVar42 = 0;
        uVar32 = uVar34;
        local_res8[0] = uVar15;
        local_1a0._s_0.X = dVar39;
        local_1a0._s_0.Y = dVar40;
        local_1a0._s_0.Z = dVar3;
      }
      else {
        local_f8 = (dVar39 + dVar41) * dVar38;
        local_f0 = (dVar40 + dVar10) * dVar38;
        local_e8 = (dVar3 + dVar37) * dVar38;
        local_res8[0] = uVar34;
        pdVar23 = (double *)(**(code **)(this->_padding_ + 0xb8))(this,local_170,uVar35,&local_f8);
        local_1a0._s_0.X = *pdVar23;
        local_1a0._s_0.Y = pdVar23[1];
        local_1a0._s_0.Z = pdVar23[2];
        if (__real_3e45798ee2308c3a <= SQRT(dVar8)) {
          uVar42 = 0;
          lVar1 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + local_180 * 8);
          dVar3 = *(double *)(lVar1 + 0x10 + local_148 * 8);
          pdVar23 = (double *)(lVar1 + local_148 * 8);
          uStack_160 = SUB84(dVar3,0);
          uStack_15c = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar37 = *pdVar23 - local_1a0._s_0.X;
          dVar39 = pdVar23[1] - local_1a0._s_0.Y;
          dVar38 = SQRT(dVar39 * dVar39 + dVar37 * dVar37 +
                        (dVar3 - local_1a0._s_0.Z) * (dVar3 - local_1a0._s_0.Z)) *
                   (__real_3ff0000000000000 / SQRT(dVar8));
          if (dVar38 < 0.0) goto LAB_14c91025c;
        }
        uVar42 = SUB84(dVar38,0);
        if (__real_3ff0000000000000 <= dVar38) {
          uVar42 = SUB84(__real_3ff0000000000000,0);
        }
      }
LAB_14c91025c:
      if (((this->bPreventNormalFlips == false) ||
          ((bVar14 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                               ((FMeshRefinerBase *)this,uVar15,uVar34,
                                (TVector<double> *)&local_1a0._s_0,iVar31,iVar29), !bVar14 &&
           (bVar14 = FMeshRefinerBase::CheckIfCollapseCreatesFlipOrInvalid
                               ((FMeshRefinerBase *)this,uVar34,uVar15,
                                (TVector<double> *)&local_1a0._s_0,iVar31,iVar29), !bVar14)))) &&
         ((this->bPreventTinyTriangles == false ||
          ((bVar14 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                               ((FMeshRefinerBase *)this,uVar15,uVar34,
                                (TVector<double> *)&local_1a0._s_0,iVar31,iVar29), !bVar14 &&
           (bVar14 = FMeshRefinerBase::CheckIfCollapseCreatesTinyTriangle
                               ((FMeshRefinerBase *)this,uVar34,uVar15,
                                (TVector<double> *)&local_1a0._s_0,iVar31,iVar29), !bVar14)))))) {
        (**(code **)(this->_padding_ + 0x18))(this,param_1);
        uVar22 = _UNK_15060db28;
        uVar4 = ___xmm_ffffffffffffffffffffffffffffffff;
        this->COUNT_COLLAPSES = this->COUNT_COLLAPSES + 1;
        local_130 = 0xffffffff;
        uStack_12c = 0xffffffff;
        uStack_120 = (undefined4)uVar4;
        uStack_11c = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_118 = (uint)uVar22;
        uStack_114 = (uint)((ulonglong)uVar22 >> 0x20);
        uStack_110 = 0xffffffff;
        uStack_10c = 0xffffffff;
        iVar16 = (**(code **)(*(longlong *)this->_padding_ + 0x70))
                           ((longlong *)this->_padding_,local_res8[0],uVar32,uVar42,local_138);
        uVar12 = local_res8[0];
        if (iVar16 == 0) {
          FDynamicMesh3::SetVertex
                    ((FDynamicMesh3 *)this->_padding_,local_res8[0],
                     (TVector<double> *)&local_1a0._s_0,true);
          if ((char)this->_padding_ != '\0') {
            pFVar24 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                                ((TOptional<UE::Geometry::FMeshConstraints> *)&this->_padding_);
            local_res8[0] = param_1;
            if (*(int *)&(pFVar24->Edges).field_0x8 != *(int *)&(pFVar24->Edges).field_0x34) {
              TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                                 *)pFVar24,param_1,(int *)local_res8);
            }
            pFVar24 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                                ((TOptional<UE::Geometry::FMeshConstraints> *)&this->_padding_);
            local_res8[0] = uStack_118;
            if (*(int *)&(pFVar24->Edges).field_0x8 != *(int *)&(pFVar24->Edges).field_0x34) {
              TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
              ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                                 *)pFVar24,uStack_118,(int *)local_res8);
            }
            if (uStack_114 != 0xffffffff) {
              pFVar24 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                                  ((TOptional<UE::Geometry::FMeshConstraints> *)&this->_padding_);
              local_res8[0] = uStack_114;
              if (*(int *)&(pFVar24->Edges).field_0x8 != *(int *)&(pFVar24->Edges).field_0x34) {
                TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                                   *)pFVar24,uStack_114,(int *)local_res8);
              }
            }
            pFVar24 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                                ((TOptional<UE::Geometry::FMeshConstraints> *)&this->_padding_);
            TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                      *)&pFVar24->Vertices,uVar32);
          }
          (**(code **)(this->_padding_ + 0x48))(this,param_1,uVar12,uVar32,local_138);
          (**(code **)(this->_padding_ + 0x28))(this,0);
          return Ok_Collapsed;
        }
        local_res20 = CONCAT71(local_res20._1_7_,1);
      }
    }
  }
  bVar14 = false;
  if (((this->bEnableFlips == false) || ((uVar13 & 1) != 0)) || (iVar29 == -1)) goto LAB_14c910806;
  FDynamicMesh3::GetEdgeOpposingV((FDynamicMesh3 *)this->_padding_,(int)&local_150);
  if (this->FlipMetric == OptimalValence) {
    if (this->bMeshIsClosed == false) {
      bVar14 = FDynamicMesh3::IsBoundaryVertex((FDynamicMesh3 *)this->_padding_,uVar15);
      local_180 = CONCAT44(local_180._4_4_,(uint)bVar14);
    }
    else {
      local_180 = local_180 & 0xffffffff00000000;
    }
    if (this->bMeshIsClosed == false) {
      bVar14 = FDynamicMesh3::IsBoundaryVertex((FDynamicMesh3 *)this->_padding_,uVar34);
      local_178 = (ulonglong)bVar14;
      if (this->bMeshIsClosed != false) goto LAB_14c91051c;
      bVar14 = FDynamicMesh3::IsBoundaryVertex((FDynamicMesh3 *)this->_padding_,local_150);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    }
    else {
LAB_14c91051c:
      local_res8[0] = local_res8[0] & 0xffffff00;
    }
    if (this->bMeshIsClosed == false) {
      bVar14 = FDynamicMesh3::IsBoundaryVertex((FDynamicMesh3 *)this->_padding_,local_14c);
      local_res18 = CONCAT31(local_res18._1_3_,bVar14);
    }
    else {
      local_res18 = local_res18 & 0xffffff00;
    }
    this_00 = (FDynamicMesh3 *)this->_padding_;
    iVar16 = FDynamicMesh3::GetVtxEdgeCount(this_00,uVar15);
    iVar17 = FDynamicMesh3::GetVtxEdgeCount(this_00,uVar34);
    iVar18 = FDynamicMesh3::GetVtxEdgeCount(this_00,local_150);
    iVar19 = FDynamicMesh3::GetVtxEdgeCount(this_00,local_14c);
    iVar29 = 6;
    if ((int)local_180 != 0) {
      iVar29 = iVar16;
    }
    iVar16 = iVar16 - iVar29;
    iVar29 = 6;
    if ((int)local_178 != 0) {
      iVar29 = iVar17;
    }
    iVar17 = iVar17 - iVar29;
    iVar29 = 6;
    if ((char)local_res8[0] != '\0') {
      iVar29 = iVar18;
    }
    iVar18 = iVar18 - iVar29;
    iVar29 = 6;
    if ((char)local_res18 != '\0') {
      iVar29 = iVar19;
    }
    iVar19 = iVar19 - iVar29;
    iVar29 = -(iVar19 + 1);
    if (iVar29 < 0) {
      iVar29 = iVar19 + 1;
    }
    iVar25 = -(iVar18 + 1);
    if (iVar25 < 0) {
      iVar25 = iVar18 + 1;
    }
    iVar26 = -(iVar17 + -1);
    if (iVar26 < 0) {
      iVar26 = iVar17 + -1;
    }
    iVar27 = -(iVar16 + -1);
    if (iVar27 < 0) {
      iVar27 = iVar16 + -1;
    }
    iVar9 = -iVar19;
    if (-iVar19 < 0) {
      iVar9 = iVar19;
    }
    iVar19 = -iVar18;
    if (-iVar18 < 0) {
      iVar19 = iVar18;
    }
    iVar18 = -iVar17;
    if (-iVar17 < 0) {
      iVar18 = iVar17;
    }
    iVar17 = -iVar16;
    if (-iVar16 < 0) {
      iVar17 = iVar16;
    }
    bVar14 = iVar29 + iVar25 + iVar26 + iVar27 < iVar9 + iVar19 + iVar18 + iVar17;
    uVar33 = local_e0;
  }
  else {
    lVar1 = *(longlong *)(this->_padding_ + 0x10);
    lVar6 = *(longlong *)(lVar1 + local_180 * 8);
    pdVar23 = (double *)(lVar6 + local_148 * 8);
    lVar7 = *(longlong *)(lVar1 + local_d8 * 8);
    pdVar2 = (double *)(lVar7 + local_d0 * 8);
    dVar37 = *(double *)(lVar6 + 0x10 + local_148 * 8) - *(double *)(lVar7 + 0x10 + local_d0 * 8);
    dVar41 = *pdVar23 - *pdVar2;
    dVar8 = pdVar23[1] - pdVar2[1];
    lVar6 = *(longlong *)(lVar1 + (ulonglong)(local_14c >> 9) * 8);
    pdVar23 = (double *)(lVar6 + (ulonglong)(local_14c & 0x1ff) * 0x18);
    lVar1 = *(longlong *)(lVar1 + (ulonglong)(local_150 >> 9) * 8);
    pdVar2 = (double *)(lVar1 + (ulonglong)(local_150 & 0x1ff) * 0x18);
    dVar3 = *(double *)(lVar1 + 0x10 + (ulonglong)(local_150 & 0x1ff) * 0x18);
    dVar39 = *pdVar23 - *pdVar2;
    uStack_160 = SUB84(dVar3,0);
    uStack_15c = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar3 = *(double *)(lVar6 + 0x10 + (ulonglong)(local_14c & 0x1ff) * 0x18) - dVar3;
    dVar40 = pdVar23[1] - pdVar2[1];
    bVar14 = dVar40 * dVar40 + dVar39 * dVar39 + dVar3 * dVar3 <
             (dVar8 * dVar8 + dVar41 * dVar41 + dVar37 * dVar37) *
             this->MinLengthFlipThresh * this->MinLengthFlipThresh;
  }
  if (((!bVar14) ||
      ((this->bPreventNormalFlips != false &&
       (bVar14 = FMeshRefinerBase::CheckIfFlipInvertsNormals
                           ((FMeshRefinerBase *)this,(int)uVar33,uVar34,local_150,local_14c,iVar31),
       bVar14)))) ||
     ((this->bPreventTinyTriangles != false &&
      (bVar14 = FMeshRefinerBase::CheckIfFlipCreatesTinyTriangle
                          ((FMeshRefinerBase *)this,(int)uVar33,uVar34,local_150,local_14c,iVar31),
      bVar14)))) {
    bVar14 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x18))(this,param_1);
    uVar4 = _UNK_15060db28;
    local_16c = ___xmm_ffffffffffffffffffffffffffffffff;
    this->COUNT_FLIPS = this->COUNT_FLIPS + 1;
    uStack_164 = (undefined4)uVar4;
    uStack_160 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_15c = 0xffffffff;
    uStack_158 = 0xffffffff;
    iVar29 = (**(code **)(*(longlong *)this->_padding_ + 0x40))
                       ((longlong *)this->_padding_,param_1,local_170);
    if (iVar29 == 0) {
      (**(code **)(this->_padding_ + 0x50))(this,param_1,local_170);
      (**(code **)(this->_padding_ + 0x28))(this,0);
      return Ok_Flipped;
    }
    bVar14 = true;
  }
LAB_14c910806:
  bVar11 = false;
  if (((this->bEnableSplits != false) && ((uVar13 & 2) == 0)) &&
     (this->MaxEdgeLength * this->MaxEdgeLength < dVar36)) {
    (**(code **)(this->_padding_ + 0x18))(this,param_1);
    this->COUNT_SPLITS = this->COUNT_SPLITS + 1;
    uStack_134 = 0xffffffff;
    local_130 = 0xffffffff;
    uStack_12c = 0xffffffff;
    uStack_128 = 0xffffffff;
    local_124 = 0xffffffff;
    uStack_120 = 0xffffffff;
    uStack_114 = 0xffffffff;
    uStack_110 = 0xffffffff;
    uStack_10c = 0xffffffff;
    local_108 = 0xffffffff;
    local_104 = 0xffffffff;
    iVar29 = (**(code **)(*(longlong *)this->_padding_ + 0x30))
                       ((longlong *)this->_padding_,param_1,local_138,uVar43);
    if (iVar29 == 0) {
      (**(code **)(this->_padding_ + 0x70))(this,param_1,uVar33 & 0xffffffff,uVar35,local_138);
      (**(code **)(this->_padding_ + 0x40))(this,param_1,uVar33 & 0xffffffff,uVar35,local_138);
      (**(code **)(this->_padding_ + 0x28))(this,0);
      return Ok_Split;
    }
    bVar11 = true;
  }
  if ((bVar14) || (bVar11)) {
    EVar20 = Failed_OpNotSuccessful;
  }
  else {
    EVar20 = Failed_OpNotSuccessful;
    if ((char)local_res20 == '\0') {
      EVar20 = Ignored_EdgeIsFine;
    }
  }
  return EVar20;
}

// ProjectVertex @ 14c910cb0

void __thiscall
UE::Geometry::FRemesher::ProjectVertex(FRemesher *this,int param_1,IProjectionTarget *param_2)

{
  atomic<unsigned_char> *this_00;
  undefined4 *puVar1;
  undefined8 *puVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  ulonglong uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  uVar8 = (ulonglong)(param_1 & 0x1ff);
  lVar5 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8)
  ;
  puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
  local_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  uStack_14 = puVar1[3];
  local_10 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  (**(code **)((longlong)*param_2 + 8))(param_2,&local_38,&local_20,param_1);
  lVar5 = this->_padding_;
  sVar7 = _dclass((int)local_38);
  if (((sVar7 < 1) && (sVar7 = _dclass((int)uStack_30), sVar7 < 1)) &&
     (sVar7 = _dclass((int)local_28), sVar7 < 1)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    puVar2 = (undefined8 *)(lVar6 + uVar8 * 0x18);
    *puVar2 = local_38;
    puVar2[1] = uStack_30;
    *(undefined8 *)(lVar6 + 0x10 + uVar8 * 0x18) = local_28;
    if (*(char *)(lVar5 + 0x21c) != '\0') {
      this_00 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
      LOCK();
      FVar3.State = *this_00;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *this_00 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        FMutex::LockSlow((FMutex *)this_00);
      }
      *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
      LOCK();
      aVar4 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
  }
  return;
}

// SetTargetEdgeLength @ 14c9172c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FRemesher::SetTargetEdgeLength(FRemesher *this,double param_1)

{
  double dVar1;
  
  dVar1 = param_1 * _UNK_1528d0758;
  this->MinEdgeLength = param_1 * ___xmm_3ff547ae147ae1483fe51eb851eb851f;
  this->MaxEdgeLength = dVar1;
  return;
}

// UpdateAfterSplit @ 14c920f10

void __thiscall
UE::Geometry::FRemesher::UpdateAfterSplit
          (FRemesher *this,int param_1,int param_2,int param_3,FEdgeSplitInfo *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  IProjectionTarget IVar8;
  IProjectionTarget IVar9;
  int *piVar10;
  FMeshConstraints *this_00;
  FEdgeConstraint *pFVar11;
  int *piVar12;
  longlong *plVar13;
  char cVar14;
  IProjectionTarget IVar15;
  int iVar16;
  char local_c8;
  int local_c0 [2];
  int local_b8 [2];
  FVertexConstraint local_b0;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  IProjectionTarget local_98;
  undefined1 local_90 [8];
  FEdgeConstraint local_88;
  IProjectionTarget local_70;
  IProjectionTarget IStack_68;
  IProjectionTarget local_60;
  int *local_58;
  IProjectionTarget *local_50;
  int *local_48;
  undefined2 *local_40;
  
  bVar4 = false;
  bVar6 = false;
  if ((char)this->_padding_ != '\0') {
    IVar15 = (IProjectionTarget)0x0;
    IVar9 = IVar15;
    if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
      plVar13 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar13 = &this->_padding_;
      }
      iVar16 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
      if (iVar16 != -1) {
        do {
          IVar9 = (IProjectionTarget)(this->_padding_ + (longlong)iVar16 * 0x28);
          if (*(int *)(this->_padding_ + (longlong)iVar16 * 0x28) == param_1) break;
          iVar16 = *(int *)((longlong)IVar9 + 0x20);
          IVar9 = IVar15;
        } while (iVar16 != -1);
      }
    }
    IVar8 = (IProjectionTarget)((longlong)IVar9 + 8);
    if (IVar9 == (IProjectionTarget)0x0) {
      IVar8 = IVar15;
    }
    if (IVar8 == (IProjectionTarget)0x0) {
      bVar6 = false;
    }
    else {
      if ((char)this->_padding_ == '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((char)this->_padding_ == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar13 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar13 = &this->_padding_;
        }
        iVar16 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
        if (iVar16 != -1) {
          do {
            lVar1 = this->_padding_ + (longlong)iVar16 * 0x28;
            if (*(int *)(this->_padding_ + (longlong)iVar16 * 0x28) == param_1) {
              IVar9 = (IProjectionTarget)(lVar1 + 8);
              if (lVar1 == 0) {
                IVar9 = IVar15;
              }
              if (IVar9 != (IProjectionTarget)0x0) {
                local_70 = *(IProjectionTarget *)IVar9;
                IStack_68 = *(IProjectionTarget *)((longlong)IVar9 + 8);
                local_60 = *(IProjectionTarget *)((longlong)IVar9 + 0x10);
                goto LAB_14c92107b;
              }
              break;
            }
            iVar16 = *(int *)(lVar1 + 0x20);
          } while (iVar16 != -1);
        }
      }
      local_70 = (IProjectionTarget)((ulonglong)local_70 & 0xffffffff00000000);
      IStack_68 = (IProjectionTarget)0x0;
      local_60._0_4_ = 0xffffffff;
LAB_14c92107b:
      local_c0[0] = (param_4->NewEdges).field0_0x0._s_0.A;
      local_58 = local_c0;
      local_50 = &local_70;
      TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&>_>
                ((TSet<TTuple<int,UE::Geometry::FEdgeConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FEdgeConstraint,0>,FDefaultSetAllocator>
                  *)&this->_padding_,
                 (TPairInitializer<int_const_&,UE::Geometry::FEdgeConstraint_const_&> *)local_90,
                 (bool *)&local_58);
      if (((char)this->_padding_ == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar13 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar13 = &this->_padding_;
        }
        iVar16 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & param_2) * 4);
        if (iVar16 != -1) {
          do {
            piVar12 = (int *)((longlong)iVar16 * 0x20 + this->_padding_);
            if (*piVar12 == param_2) {
              IVar9 = (IProjectionTarget)(piVar12 + 2);
              if (piVar12 == (int *)0x0) {
                IVar9 = IVar15;
              }
              if (IVar9 != (IProjectionTarget)0x0) {
                auVar2 = *(undefined1 (*) [16])IVar9;
                IVar15 = *(IProjectionTarget *)((longlong)IVar9 + 8);
                cVar14 = auVar2[0];
                iVar16 = auVar2._4_4_;
                local_c8 = auVar2[1];
                goto LAB_14c921147;
              }
              break;
            }
            iVar16 = piVar12[6];
          } while (iVar16 != -1);
        }
      }
      cVar14 = '\0';
      local_c8 = '\x01';
      iVar16 = -1;
LAB_14c921147:
      if (((char)this->_padding_ == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar13 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar13 = &this->_padding_;
        }
        iVar7 = *(int *)((longlong)plVar13 + (ulonglong)((int)this->_padding_ - 1U & param_3) * 4);
        if (iVar7 != -1) {
          do {
            piVar12 = (int *)((longlong)iVar7 * 0x20 + this->_padding_);
            if (*piVar12 == param_3) {
              piVar10 = piVar12 + 2;
              if (piVar12 == (int *)0x0) {
                piVar10 = (int *)0x0;
              }
              if (piVar10 != (int *)0x0) {
                local_88.RefineFlags._0_1_ = (undefined1)*piVar10;
                local_88.RefineFlags._1_1_ = *(char *)((longlong)piVar10 + 1);
                local_88.RefineFlags._2_1_ = *(undefined1 *)((longlong)piVar10 + 2);
                local_88.RefineFlags._3_1_ = *(undefined1 *)((longlong)piVar10 + 3);
                local_88._4_1_ = *(undefined1 *)(piVar10 + 1);
                local_88._5_1_ = *(undefined1 *)((longlong)piVar10 + 5);
                local_88._6_1_ = *(undefined1 *)((longlong)piVar10 + 6);
                local_88._7_1_ = *(undefined1 *)((longlong)piVar10 + 7);
                local_88.Target._0_1_ = (undefined1)piVar10[2];
                local_88.Target._1_1_ = *(undefined1 *)((longlong)piVar10 + 9);
                local_88.Target._2_1_ = *(undefined1 *)((longlong)piVar10 + 10);
                local_88.Target._3_1_ = *(undefined1 *)((longlong)piVar10 + 0xb);
                local_88.Target._4_1_ = (undefined1)piVar10[3];
                local_88.Target._5_1_ = *(undefined1 *)((longlong)piVar10 + 0xd);
                local_88.Target._6_1_ = *(undefined1 *)((longlong)piVar10 + 0xe);
                local_88.Target._7_1_ = *(undefined1 *)((longlong)piVar10 + 0xf);
                IVar9 = *(IProjectionTarget *)(piVar10 + 2);
                goto LAB_14c9211e0;
              }
              break;
            }
            iVar7 = piVar12[6];
          } while (iVar7 != -1);
        }
      }
      IVar9 = (IProjectionTarget)0x0;
      local_88.RefineFlags._0_1_ = NoConstraint;
      local_88.RefineFlags._1_1_ = 1;
      local_88._4_1_ = 0xff;
      local_88._5_1_ = 0xff;
      local_88._6_1_ = 0xff;
      local_88._7_1_ = 0xff;
LAB_14c9211e0:
      uVar5 = local_88.RefineFlags._1_1_;
      if ((cVar14 == '\0') || ((undefined1)local_88.RefineFlags == NoConstraint)) {
        bVar6 = false;
      }
      else {
        if ((iVar16 < 1) ||
           (iVar16 != CONCAT13(local_88._7_1_,
                               CONCAT12(local_88._6_1_,CONCAT11(local_88._5_1_,local_88._4_1_))))) {
          iVar16 = -1;
        }
        if ((local_c8 == '\0') || (local_88.RefineFlags._1_1_ == NoConstraint >> 8)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        this_00 = TOptional<UE::Geometry::FMeshConstraints>::operator->
                            ((TOptional<UE::Geometry::FMeshConstraints> *)&this->_padding_);
        local_b0.bCannotDelete = true;
        local_b0.Target = (IProjectionTarget *)0x0;
        local_b0.bCanMove = bVar6;
        local_b0.FixedSetID = iVar16;
        FMeshConstraints::SetOrUpdateVertexConstraint(this_00,param_4->NewVertex,&local_b0);
        bVar6 = true;
        bVar4 = true;
      }
      if ((IVar15 != (IProjectionTarget)0x0) || (IVar9 != (IProjectionTarget)0x0)) {
        if (((char)this->_padding_ == '\0') &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = FMeshConstraints::GetEdgeConstraint
                            ((FMeshConstraints *)&this->_padding_,&local_88,param_1);
        IVar8 = (IProjectionTarget)pFVar11->Target;
        bVar6 = bVar4;
        if ((((IVar15 == IVar8) && ((IVar15 == IVar9 || (uVar5 == NoConstraint >> 8)))) ||
            ((IVar9 == IVar8 && (local_c8 == '\0')))) && (IVar8 != (IProjectionTarget)0x0)) {
          if (((char)this->_padding_ == '\0') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_a0[0] = 0x100;
          local_9c = 0xffffffff;
          local_b8[0] = param_4->NewVertex;
          local_48 = local_b8;
          local_40 = local_a0;
          local_98 = IVar8;
          TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&>_>
                    ((TSet<TTuple<int,UE::Geometry::FVertexConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FVertexConstraint,0>,FDefaultSetAllocator>
                      *)&this->_padding_,
                     (TPairInitializer<int_const_&,UE::Geometry::FVertexConstraint_const_&> *)
                     (local_90 + 4),(bool *)&local_48);
          (**(code **)(this->_padding_ + 0xb0))(this,param_4->NewVertex,IVar8);
          bVar6 = true;
        }
      }
    }
  }
  if ((((char)this->_padding_ == '\x02') && (!bVar6)) && (this->_padding_ != 0)) {
    (**(code **)(this->_padding_ + 0xb0))(this,param_4->NewVertex);
  }
  return;
}

// operator() @ 150574960

bool __thiscall `UE::Geometry::FRemesher::BasicRemeshPass'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<17045956398678067>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<17045956398678067>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

