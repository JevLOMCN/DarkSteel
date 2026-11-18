// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c966df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UE::Geometry::FMirrorOp::CalculateResult(FMirrorOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  FDynamicMesh3 *this_00;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStackY_1f8 [32];
  FMeshMirror local_1c8;
  undefined **local_168;
  FDynamicMesh3 *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  longlong local_128;
  longlong local_118 [3];
  longlong *local_100;
  bool local_f8;
  bool local_f7;
  float local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  undefined2 local_d0;
  bool local_ce;
  float local_cc;
  bool local_c8;
  float local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar6 = plVar7;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  this_00 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDynamicMesh3::Copy(this_00,(this->OriginalMesh).Object,true,true,true,true);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar7 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar6 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar6 = plVar7;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    bVar4 = (bool)(*pcVar1)(uVar5);
    param_1->WasCancelled = bVar4;
    if (bVar4 != false) {
      return;
    }
  }
  if (this->bCropFirst != false) {
    local_158._s_0.X = (this->LocalPlaneOrigin).field0_0x0._s_0.X;
    local_158._s_0.Y = (this->LocalPlaneOrigin).field0_0x0._s_0.Y;
    local_160 = (FDynamicMesh3 *)this->_padding_;
    local_158._s_0.Z = (this->LocalPlaneOrigin).field0_0x0._s_0.Z;
    local_140._s_0.X = (this->LocalPlaneNormal).field0_0x0._s_0.X;
    local_140._s_0.Y = (this->LocalPlaneNormal).field0_0x0._s_0.Y;
    local_f8 = this->bSimplifyAlongNewEdges;
    local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
    local_e0 = ___xmm_3fd00000000000003fb999999999999a;
    dStack_d8 = _UNK_150b37c98;
    local_128 = 0;
    local_140._s_0.Z = (this->LocalPlaneNormal).field0_0x0._s_0.Z;
    local_70.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_70.MaxBits = _UNK_150631d94;
    uStack_50 = _UNK_150631d98;
    local_e8 = this->PlaneTolerance;
    local_f0 = __real_3e45798ee2308c3a;
    local_100 = (longlong *)0x0;
    local_f7 = true;
    local_f4 = 1.0;
    local_d0._0_1_ = true;
    local_d0._1_1_ = true;
    local_ce = true;
    local_cc = 1e-06;
    local_c8 = true;
    local_c4 = 0.01;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98._0_4_ = 0;
    local_98._4_4_ = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    FMeshPlaneCut::Cut((FMeshPlaneCut *)&local_168);
    if ((param_1 != (FProgressCancel *)0x0) && (bVar4 = FProgressCancel::Cancelled(param_1), bVar4))
    {
      local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
      local_38 = 0;
      if (local_40 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_40);
      }
      uVar2 = local_78 >> 0x20;
      local_78 = local_78 & 0xffffffff00000000;
      if ((int)uVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
      }
      iVar3 = local_70.MaxBits;
      uStack_50 = 0xffffffff;
      local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
      if (0x80 < (uint)iVar3) {
        local_70.NumBits = 0;
        local_70.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
      }
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
      }
      if (local_80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>
                ((FCutResultRegion *)local_a0.Data,(int)local_98);
      if ((FCutResultRegion *)local_a0.Data != (FCutResultRegion *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data,(int)local_a8);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      DestructItems<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int>
                ((FOpenBoundary *)local_c0.Data,(int)local_b8);
      if ((FOpenBoundary *)local_c0.Data != (FOpenBoundary *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      if (local_128 == 0) {
        return;
      }
      plVar7 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar7 = local_100;
      }
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    uVar2 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>
              ((FCutResultRegion *)local_a0.Data,(int)local_98);
    if ((FCutResultRegion *)local_a0.Data != (FCutResultRegion *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data,(int)local_a8);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    DestructItems<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int>
              ((FOpenBoundary *)local_c0.Data,(int)local_b8);
    if ((FOpenBoundary *)local_c0.Data != (FOpenBoundary *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    if (local_128 != 0) {
      plVar7 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar7 = local_100;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_1c8.PlaneOrigin.field0_0x0._s_0.X = (this->LocalPlaneOrigin).field0_0x0._s_0.X;
  local_1c8.PlaneOrigin.field0_0x0._s_0.Y = (this->LocalPlaneOrigin).field0_0x0._s_0.Y;
  local_1c8._padding_ = (longlong)&___7FMeshMirror_Geometry_UE__6B_;
  local_1c8.PlaneOrigin.field0_0x0._s_0.Z = (this->LocalPlaneOrigin).field0_0x0._s_0.Z;
  local_1c8.Mesh = (FDynamicMesh3 *)this->_padding_;
  local_1c8.bWeldAlongPlane = this->bWeldAlongPlane;
  local_1c8.WeldNormalMode = this->WeldNormalMode;
  local_1c8.PlaneNormal.field0_0x0._s_0.X = (this->LocalPlaneNormal).field0_0x0._s_0.X;
  local_1c8.PlaneNormal.field0_0x0._s_0.Y = (this->LocalPlaneNormal).field0_0x0._s_0.Y;
  local_1c8.bAllowBowtieVertexCreation = this->bAllowBowtieVertexCreation;
  local_1c8.PlaneNormal.field0_0x0._s_0.Z = (this->LocalPlaneNormal).field0_0x0._s_0.Z;
  local_1c8.PlaneTolerance = this->PlaneTolerance;
  if (this->bAppendToOriginal == false) {
    FMeshMirror::Mirror(&local_1c8,param_1);
  }
  else {
    FMeshMirror::MirrorAndAppend(&local_1c8,param_1);
  }
  return;
}

// SetTransform @ 14c985860

void __thiscall
UE::Geometry::FMirrorOp::SetTransform(FMirrorOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

