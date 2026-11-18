// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FIntrinsicEdgeFlipMesh @ 14c6df390

FIntrinsicEdgeFlipMesh * __thiscall
UE::Geometry::FIntrinsicEdgeFlipMesh::FIntrinsicEdgeFlipMesh
          (FIntrinsicEdgeFlipMesh *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Geometry::FIndex3i,512> *this_01;
  FNormalCoordinates *this_02;
  
  FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh((FSimpleIntrinsicEdgeFlipMesh *)this);
  this_02 = &this->NormalCoordinates;
  this_00 = &(this->NormalCoordinates).NormalCoord;
  this_02->_padding_ = 0;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).NormalCoord.Blocks.ArrayNum = 0;
  (this->NormalCoordinates).NormalCoord.Blocks.ArrayMax = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  (this->NormalCoordinates)._padding_ = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  this_01 = &(this->NormalCoordinates).RoundaboutOrder;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayNum = 0;
  (this->NormalCoordinates).RoundaboutOrder.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(this_01);
  (this->NormalCoordinates).RefVertDegree.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).RefVertDegree.ArrayNum = 0;
  (this->NormalCoordinates).RefVertDegree.ArrayMax = 0;
  (this->NormalCoordinates).EdgeOrder.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalCoordinates).EdgeOrder.ArrayNum = 0;
  (this->NormalCoordinates).EdgeOrder.ArrayMax = 0;
  FSimpleIntrinsicEdgeFlipMesh::Reset((FSimpleIntrinsicEdgeFlipMesh *)this,param_1);
  IntrinsicCorrespondenceUtils::FMeshConnection::Reset((FMeshConnection *)this_02,param_1);
  IntrinsicCorrespondenceUtils::FNormalCoordinates::RebuildNormalCoordinates(this_02,param_1);
  return this;
}

// FlipEdge @ 14c735160

EMeshResult __thiscall
UE::Geometry::FIntrinsicEdgeFlipMesh::FlipEdge
          (FIntrinsicEdgeFlipMesh *this,int param_1,FEdgeFlipInfo *param_2)

{
  longlong lVar1;
  EMeshResult EVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int local_res8;
  int local_resc;
  FIndex3i_u_0 local_38;
  FIndex3i_u_0 local_28;
  
  if ((-1 < param_1) &&
     (param_1 < (int)this->_padding_ * 0x200 + *(int *)((longlong)&this->_padding_ + 4))) {
    uVar4 = (ulonglong)(param_1 & 0x1ff);
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(this->_padding_ + lVar1) + uVar4 * 2) - 1U) < 0xfffe) {
      lVar1 = *(longlong *)(this->_padding_ + lVar1);
      if (*(int *)(lVar1 + 0xc + uVar4 * 0x10) == -1) {
        return Failed_IsBoundaryEdge;
      }
      uVar4 = *(ulonglong *)(lVar1 + 8 + uVar4 * 0x10);
      uVar3 = (ulonglong)((uint)uVar4 & 0x1ff);
      lVar1 = *(longlong *)(this->_padding_ + ((uVar4 & 0xffffffff) >> 9) * 8);
      local_28._0_8_ = *(undefined8 *)(lVar1 + uVar3 * 0xc);
      local_28._s_0.C = *(int *)(lVar1 + 8 + uVar3 * 0xc);
      uVar5 = (uint)(uVar4 >> 0x20);
      uVar3 = (ulonglong)(uVar5 & 0x1ff);
      lVar1 = *(longlong *)(this->_padding_ + (uVar4 >> 0x29) * 8);
      local_38._0_8_ = *(undefined8 *)(lVar1 + uVar3 * 0xc);
      local_38._s_0.C = *(int *)(lVar1 + 8 + uVar3 * 0xc);
      FSimpleIntrinsicEdgeFlipMesh::GetEdgeOpposingV
                ((FSimpleIntrinsicEdgeFlipMesh *)this,(int)&local_res8);
      EVar2 = FSimpleIntrinsicEdgeFlipMesh::FlipEdge
                        ((FSimpleIntrinsicEdgeFlipMesh *)this,param_1,param_2);
      if (EVar2 == Ok) {
        IntrinsicCorrespondenceUtils::FNormalCoordinates::OnFlipEdge
                  (&this->NormalCoordinates,(uint)uVar4,(FIndex3i *)&local_28._s_0,local_res8,uVar5,
                   (FIndex3i *)&local_38._s_0,local_resc,param_1);
      }
      return EVar2;
    }
  }
  return Failed_NotAnEdge;
}

// GetImplicitEdgeCrossings @ 14c73c9a0

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
* __thiscall
UE::Geometry::FIntrinsicEdgeFlipMesh::GetImplicitEdgeCrossings
          (FIntrinsicEdgeFlipMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,bool param_2)

{
  FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (__return_storage_ptr__,this,param_1,param_2);
  return __return_storage_ptr__;
}

// TraceEdge @ 14c76c200

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FIntrinsicEdgeFlipMesh::TraceEdge
          (FIntrinsicEdgeFlipMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (__return_storage_ptr__,this,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// TraceSurfaceEdge @ 14c76cbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c76cc94) */

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge
          (FIntrinsicEdgeFlipMesh *this,
          TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,double param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 auStackY_e8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  <lambda_1> local_80 [8];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_78;
  FDynamicMesh3 *local_68;
  undefined8 local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_68 = (FDynamicMesh3 *)(this->NormalCoordinates)._padding_;
  FNormalCoordSurfaceTraceImpl::TraceSurfaceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (&local_78,this,param_1,param_3);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  uVar7 = local_78.ArrayNum - 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&local_90.AllocatorInstance,0,&local_90.ArrayMax);
  }
  pFVar1 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0xc;
  FVar6.Data = local_78.AllocatorInstance.Data;
  do {
    if (FVar6.Data == pFVar1) {
      FNormalCoordSurfaceTraceImpl::
      TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_UE::Geometry::FIntrinsicEdgeFlipMesh::TraceSurfaceEdge_::__l2::<lambda_1>_>
                (__return_storage_ptr__,param_1,&local_90,local_68,this,param_2,param_3,local_80);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    local_58 = *(int *)(FVar6.Data + 8);
    local_60 = *(undefined8 *)FVar6.Data;
    if (local_58 != 0) {
      if ((local_90.AllocatorInstance.Data <= (FScriptContainerElement *)((longlong)&local_60 + 4U))
         && ((FScriptContainerElement *)((longlong)&local_60 + 4U) <
             local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 4)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar4;
        }
      }
      if (local_90.ArrayNum == local_90.ArrayMax) {
        local_90.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_90.AllocatorInstance,&local_90.ArrayMax);
      }
      lVar5 = (longlong)local_90.ArrayNum;
      local_90.ArrayNum = local_90.ArrayNum + 1;
      *(undefined4 *)(local_90.AllocatorInstance.Data + lVar5 * 4) = local_60._4_4_;
    }
    FVar6.Data = FVar6.Data + 0xc;
  } while( true );
}

