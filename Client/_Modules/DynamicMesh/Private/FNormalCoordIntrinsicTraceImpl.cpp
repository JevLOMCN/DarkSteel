// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh> @ 14c6d6780

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,FIntrinsicEdgeFlipMesh *param_1,int param_2,
                  double param_3,bool param_4)

{
  int iVar1;
  FDynamicMesh3 *this;
  code *pcVar2;
  bool bVar3;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int local_res10 [2];
  uint local_res18 [4];
  int local_c8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  int local_b0 [2];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  <lambda_2> local_98;
  undefined8 *local_90;
  uint *local_88;
  int *local_80;
  FIntrinsicEdgeFlipMesh *local_78;
  int *local_70;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_68;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  iVar5 = 0;
  if ((-1 < param_2) &&
     (param_2 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4))) {
    if ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8)
                           + (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      local_b0[0] = *(int *)(*(longlong *)
                              ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.
                               Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 4);
      if (local_b0[0] < 1) {
        local_b0[0] = 0;
      }
      local_res18[0] = param_2;
      if (0 < local_b0[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_b0[0],&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
      }
      this = (FDynamicMesh3 *)(param_1->NormalCoordinates)._padding_;
      local_res10[0] = 1;
      local_a0 = *(undefined8 *)
                  (*(longlong *)(param_1->_padding_ + (ulonglong)(local_res18[0] >> 9) * 8) + 8 +
                  (ulonglong)(local_res18[0] & 0x1ff) * 0x10);
      if (1 < local_b0[0] + 1) {
        do {
          local_90 = &local_a0;
          local_88 = local_res18;
          local_80 = local_res10;
          local_70 = local_b0;
          local_78 = param_1;
          `FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l10::
          <lambda_1>::operator()(&local_90);
          local_c8[0] = UE::Geometry::FDynamicMesh3::FindEdge(this,local_a8,local_a4);
          if (((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)local_c8) &&
              ((FScriptContainerElement *)local_c8 <
               local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar4 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar4;
          }
          if (local_c0.ArrayNum == local_c0.ArrayMax) {
            local_c0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
          }
          iVar1 = local_c0.ArrayNum + 1;
          *(int *)(local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 4) = local_c8[0];
          local_res10[0] = local_res10[0] + 1;
          local_c0.ArrayNum = iVar1;
        } while (local_res10[0] < local_b0[0] + 1);
      }
      local_98.IntrinsicMesh = param_1;
      pTVar4 = FNormalCoordSurfaceTraceImpl::
               TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicEdgeFlipMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>_::__l2::<lambda_2>_>
                         (&local_68,local_res18[0],&local_c0,this,param_1,param_3,param_4,&local_98)
      ;
      if (local_58 != pTVar4) {
        pFVar7 = (pTVar4->AllocatorInstance).Data;
        (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar6 = pTVar4->ArrayNum;
        iVar5 = pTVar4->ArrayMax;
        pTVar4->ArrayNum = 0;
        pTVar4->ArrayMax = 0;
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = pFVar7;
      __return_storage_ptr__->ArrayNum = iVar6;
      __return_storage_ptr__->ArrayMax = iVar5;
      if (local_c0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_c0.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// TraceEdge<UE::Geometry::FIntrinsicMesh> @ 14c6d6a40

TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_> *
__cdecl FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>
                  (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,FIntrinsicMesh *param_1,int param_2,double param_3,
                  bool param_4)

{
  int iVar1;
  FDynamicMesh3 *this;
  code *pcVar2;
  bool bVar3;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  *pTVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int local_res10 [2];
  uint local_res18 [4];
  int local_c8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  int local_b0 [2];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  <lambda_2> local_98;
  undefined8 *local_90;
  uint *local_88;
  int *local_80;
  FIntrinsicMesh *local_78;
  int *local_70;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_68;
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
  local_58 [2];
  
  pFVar7 = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  iVar5 = 0;
  if ((-1 < param_2) &&
     (param_2 < (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4))) {
    if ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (ulonglong)((uint)param_2 >> 9) * 8)
                           + (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      local_b0[0] = *(int *)(*(longlong *)
                              ((param_1->NormalCoordinates).NormalCoord.Blocks.AllocatorInstance.
                               Data + (ulonglong)((uint)param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 4);
      if (local_b0[0] < 1) {
        local_b0[0] = 0;
      }
      local_res18[0] = param_2;
      if (0 < local_b0[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_b0[0],&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
      }
      this = (FDynamicMesh3 *)(param_1->NormalCoordinates)._padding_;
      local_res10[0] = 1;
      local_a0 = *(undefined8 *)
                  (*(longlong *)(param_1->_padding_ + (ulonglong)(local_res18[0] >> 9) * 8) + 8 +
                  (ulonglong)(local_res18[0] & 0x1ff) * 0x10);
      if (1 < local_b0[0] + 1) {
        do {
          local_90 = &local_a0;
          local_88 = local_res18;
          local_80 = local_res10;
          local_70 = local_b0;
          local_78 = param_1;
          `FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l10::
          <lambda_1>::operator()(&local_90);
          local_c8[0] = UE::Geometry::FDynamicMesh3::FindEdge(this,local_a8,local_a4);
          if (((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)local_c8) &&
              ((FScriptContainerElement *)local_c8 <
               local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar4 = (TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FSurfacePoint,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar4;
          }
          if (local_c0.ArrayNum == local_c0.ArrayMax) {
            local_c0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
          }
          iVar1 = local_c0.ArrayNum + 1;
          *(int *)(local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 4) = local_c8[0];
          local_res10[0] = local_res10[0] + 1;
          local_c0.ArrayNum = iVar1;
        } while (local_res10[0] < local_b0[0] + 1);
      }
      local_98.IntrinsicMesh = param_1;
      pTVar4 = FNormalCoordSurfaceTraceImpl::
               TraceEdgeOverHost<UE::Geometry::FDynamicMesh3,UE::Geometry::FIntrinsicMesh,_FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>_::__l2::<lambda_2>_>
                         (&local_68,local_res18[0],&local_c0,this,param_1,param_3,param_4,&local_98)
      ;
      if (local_58 != pTVar4) {
        pFVar7 = (pTVar4->AllocatorInstance).Data;
        (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar6 = pTVar4->ArrayNum;
        iVar5 = pTVar4->ArrayMax;
        pTVar4->ArrayNum = 0;
        pTVar4->ArrayMax = 0;
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = pFVar7;
      __return_storage_ptr__->ArrayNum = iVar6;
      __return_storage_ptr__->ArrayMax = iVar5;
      if (local_c0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_c0.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// operator() @ 14c6edaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIndex2i __thiscall
`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicEdgeFlipMesh>'::__l10::<lambda_1>
::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FIndex2i FVar7;
  uint uVar8;
  ulonglong uVar9;
  FIndex2i_u_0 in_RDX;
  undefined1 auStackY_b8 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  *(undefined8 *)in_RDX = 0xffffffffffffffff;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_30 = **(undefined4 **)this;
  uStack_2c = **(undefined4 **)((longlong)this + 8);
  local_28 = **(undefined4 **)((longlong)this + 0x10);
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_68.AllocatorInstance,&local_68.ArrayMax);
  local_68.ArrayNum = iVar5 + 1;
  *(ulonglong *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0xc) =
       CONCAT44(uStack_2c,local_30);
  *(undefined4 *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0xc + 8) = local_28;
  FNormalCoordSurfaceTraceImpl::
  ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (*(FIntrinsicEdgeFlipMesh **)((longlong)this + 0x18),&local_68);
  uVar8 = 0;
  if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
    uVar8 = ~(local_68.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
  }
  uVar3 = local_68._8_8_;
  uVar8 = local_68.ArrayMax;
  uVar9 = (ulonglong)
          (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) &
          0x1ff);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) +
           (ulonglong)
           (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) >>
           9) * 8);
  local_50 = *(undefined4 *)(lVar1 + 8 + uVar9 * 0xc);
  local_58 = *(undefined8 *)(lVar1 + uVar9 * 0xc);
  *(undefined4 *)in_RDX =
       *(undefined4 *)
        ((longlong)&local_58 +
        (longlong)*(int *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -8)
        * 4);
  local_68._8_8_ = (ulonglong)(uint)local_68.ArrayMax << 0x20;
  uVar6 = 0;
  if (((longlong)uVar3 < 0) && (uVar6 = 0, uVar8 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
    uVar8 = local_68.ArrayMax;
    uVar6 = local_68.ArrayNum;
  }
  uStack_3c = **(undefined4 **)((longlong)this + 8);
  local_38 = (**(int **)((longlong)this + 0x20) - **(int **)((longlong)this + 0x10)) + 1;
  local_40 = *(undefined4 *)(*(longlong *)this + 4);
  if ((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 <
      local_68.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
    uVar8 = local_68.ArrayMax;
    uVar6 = local_68.ArrayNum;
  }
  if (uVar6 == uVar8) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = uVar6 + 1;
  *(ulonglong *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc) =
       CONCAT44(uStack_3c,local_40);
  *(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc + 8) = local_38;
  FNormalCoordSurfaceTraceImpl::
  ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicEdgeFlipMesh>
            (*(FIntrinsicEdgeFlipMesh **)((longlong)this + 0x18),&local_68);
  uVar8 = 0;
  if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
    uVar8 = ~(local_68.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
  }
  uVar9 = (ulonglong)
          (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) &
          0x1ff);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) +
           (ulonglong)
           (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) >>
           9) * 8);
  local_44 = *(undefined4 *)(lVar1 + 8 + uVar9 * 0xc);
  local_4c = *(undefined8 *)(lVar1 + uVar9 * 0xc);
  *(undefined4 *)((longlong)in_RDX + 4) =
       *(undefined4 *)
        ((longlong)&local_4c +
        (longlong)*(int *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -8)
        * 4);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return (FIndex2i)in_RDX;
}

// operator() @ 14c6ede30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIndex2i __thiscall
`FNormalCoordIntrinsicTraceImpl::TraceEdge<UE::Geometry::FIntrinsicMesh>'::__l10::<lambda_1>::
operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FIndex2i FVar7;
  uint uVar8;
  ulonglong uVar9;
  FIndex2i_u_0 in_RDX;
  undefined1 auStackY_b8 [32];
  TArray<UE::Geometry::IntrinsicCorrespondenceUtils::FNormalCoordinates::FEdgeAndCrossingIdx,TSizedDefaultAllocator<32>_>
  local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  *(undefined8 *)in_RDX = 0xffffffffffffffff;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  local_30 = **(undefined4 **)this;
  uStack_2c = **(undefined4 **)((longlong)this + 8);
  local_28 = **(undefined4 **)((longlong)this + 0x10);
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&local_68.AllocatorInstance,&local_68.ArrayMax);
  local_68.ArrayNum = iVar5 + 1;
  *(ulonglong *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0xc) =
       CONCAT44(uStack_2c,local_30);
  *(undefined4 *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0xc + 8) = local_28;
  FNormalCoordSurfaceTraceImpl::ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh>
            (*(FIntrinsicMesh **)((longlong)this + 0x18),&local_68);
  uVar8 = 0;
  if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
    uVar8 = ~(local_68.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
  }
  uVar3 = local_68._8_8_;
  uVar8 = local_68.ArrayMax;
  uVar9 = (ulonglong)
          (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) &
          0x1ff);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) +
           (ulonglong)
           (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) >>
           9) * 8);
  local_50 = *(undefined4 *)(lVar1 + 8 + uVar9 * 0xc);
  local_58 = *(undefined8 *)(lVar1 + uVar9 * 0xc);
  *(undefined4 *)in_RDX =
       *(undefined4 *)
        ((longlong)&local_58 +
        (longlong)*(int *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -8)
        * 4);
  local_68._8_8_ = (ulonglong)(uint)local_68.ArrayMax << 0x20;
  uVar6 = 0;
  if (((longlong)uVar3 < 0) && (uVar6 = 0, uVar8 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
    uVar8 = local_68.ArrayMax;
    uVar6 = local_68.ArrayNum;
  }
  uStack_3c = **(undefined4 **)((longlong)this + 8);
  local_38 = (**(int **)((longlong)this + 0x20) - **(int **)((longlong)this + 0x10)) + 1;
  local_40 = *(undefined4 *)(*(longlong *)this + 4);
  if ((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_40) &&
     ((FScriptContainerElement *)&local_40 <
      local_68.AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
    uVar8 = local_68.ArrayMax;
    uVar6 = local_68.ArrayNum;
  }
  if (uVar6 == uVar8) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = uVar6 + 1;
  *(ulonglong *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc) =
       CONCAT44(uStack_3c,local_40);
  *(int *)(local_68.AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc + 8) = local_38;
  FNormalCoordSurfaceTraceImpl::ContinueTraceSurfaceEdgeAcrossFaces<UE::Geometry::FIntrinsicMesh>
            (*(FIntrinsicMesh **)((longlong)this + 0x18),&local_68);
  uVar8 = 0;
  if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
    uVar8 = ~(local_68.ArrayNum - 1U) >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      FVar7.field0_0x0 = (FIndex2i_u_0)(*pcVar2)();
      return (FIndex2i)FVar7.field0_0x0;
    }
  }
  uVar9 = (ulonglong)
          (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) &
          0x1ff);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0xe0) +
           (ulonglong)
           (*(uint *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -0xc) >>
           9) * 8);
  local_44 = *(undefined4 *)(lVar1 + 8 + uVar9 * 0xc);
  local_4c = *(undefined8 *)(lVar1 + uVar9 * 0xc);
  *(undefined4 *)((longlong)in_RDX + 4) =
       *(undefined4 *)
        ((longlong)&local_4c +
        (longlong)*(int *)(local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0xc + -8)
        * 4);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return (FIndex2i)in_RDX;
}

