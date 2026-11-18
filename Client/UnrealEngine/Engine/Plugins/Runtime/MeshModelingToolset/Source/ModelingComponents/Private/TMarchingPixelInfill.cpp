// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// ApplyInfill<UE::Math::TVector4<float>_> @ 14ca43570

void __thiscall
UE::Geometry::TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
ApplyInfill<UE::Math::TVector4<float>_>
          (TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this,
          TImageBuilder<UE::Math::TVector4<float>_> *param_1,
          TFunctionRef<UE::Math::TVector4<float>___cdecl(UE::Math::TVector4<float>,int)> *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TVector4<float> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res8 [2];
  TImageBuilder<UE::Math::TVector4<float>_> *local_res10;
  TFunctionRef<UE::Math::TVector4<float>___cdecl(UE::Math::TVector4<float>,int)> *local_res18;
  int local_res20;
  ulonglong local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->InfillSequence).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = 1;
  uVar8 = *(uint *)(this->InfillSequence).AllocatorInstance.Data;
  local_c0 = (ulonglong)uVar8;
  if (0 < (int)uVar8) {
    lVar12 = 1;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->InfillSequence).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar11 + 1;
      iVar2 = *(int *)((this->InfillSequence).AllocatorInstance.Data + lVar12 * 4);
      uVar9 = 0;
      if ((int)uVar8 < (this->InfillSequence).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = uVar11 + 2;
      iVar3 = *(int *)((this->InfillSequence).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      uVar8 = 0;
      if ((int)uVar9 < (this->InfillSequence).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = uVar11 + 3;
      lVar12 = lVar12 + 3;
      local_res20 = *(int *)((this->InfillSequence).AllocatorInstance.Data +
                            (longlong)(int)uVar9 * 4);
      pTVar13 = param_1;
      if (1 < iVar2) {
        uVar8 = iVar2 - 1;
        fVar15 = 0.0;
        uVar14 = (ulonglong)uVar8;
        fVar16 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (this->InfillSequence).ArrayNum) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar1 = lVar12 * 4;
          iVar2 = *(int *)((this->InfillSequence).AllocatorInstance.Data + lVar1);
          uVar9 = 0;
          if ((int)(uVar11 + 1) < (this->InfillSequence).ArrayNum) {
            uVar9 = ~(uVar11 + 1) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar13 = local_res10;
          uVar11 = uVar11 + 2;
          lVar12 = lVar12 + 2;
          pTVar10 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              (&param_1->Image,
                               (longlong)
                               *(int *)((this->InfillSequence).AllocatorInstance.Data + lVar1 + 4) *
                               (longlong)(local_res10->Dimensions).Width + (longlong)iVar2);
          fVar15 = fVar15 + (pTVar10->field0_0x0)._s_0.X;
          fVar16 = fVar16 + (pTVar10->field0_0x0)._s_0.Y;
          fVar17 = fVar17 + (pTVar10->field0_0x0)._s_0.Z;
          fVar18 = fVar18 + (pTVar10->field0_0x0)._s_0.W;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        local_res8[0] = uVar8;
        local_b8 = fVar15;
        local_b4 = fVar16;
        local_b0 = fVar17;
        local_ac = fVar18;
        (**(code **)local_res18)
                  (&local_a8,*(undefined8 *)&local_res18->field_0x8,&local_b8,local_res8);
        uVar6 = uStack_a0;
        uVar5 = local_a8;
        pTVar10 = TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                            (&param_1->Image,
                             (longlong)(pTVar13->Dimensions).Width * (longlong)local_res20 +
                             (longlong)iVar3);
        *(undefined8 *)&pTVar10->field0_0x0 = uVar5;
        *(undefined8 *)((longlong)&pTVar10->field0_0x0 + 8) = uVar6;
      }
      local_c0 = local_c0 - 1;
      param_1 = pTVar13;
    } while (local_c0 != 0);
  }
  return;
}

// ComputeInfill @ 14ca80e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
ComputeInfill(TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this
             ,TImageBuilder<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *param_1,
             TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_2,
             FSampleStats param_3,
             TFunctionRef<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats___cdecl(UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats,int)>
             *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *pTVar6;
  float fVar7;
  TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *this_00;
  TImageBuilder<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *pTVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  FSampleStats FVar12;
  FSampleStats *pFVar13;
  ulonglong uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ushort uVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  short sVar25;
  longlong lVar26;
  short sVar27;
  ushort uStackX_22;
  undefined1 auStackY_1e8 [32];
  undefined8 local_198;
  undefined4 local_190;
  FIndexPriorityQueue local_188;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148 [2];
  int local_140;
  int local_13c;
  undefined8 local_138;
  TImageBuilder<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *local_128;
  int local_120;
  int local_11c;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *local_118;
  int local_110 [2];
  int local_108 [2];
  undefined4 local_100 [2];
  undefined8 local_f8;
  TMarchingPixelInfill<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *local_f0;
  TPairInitializer<UE::Geometry::FVector2i_const_&,int_const_&> local_e8;
  undefined8 *local_d8;
  uint *local_d0;
  TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar17 = 0;
  piVar18 = &(this->InfillSequence).ArrayMax;
  local_e8.Value = (int *)param_4;
  iVar11 = *piVar18;
  (this->InfillSequence).ArrayNum = 0;
  local_128 = param_1;
  local_118 = param_2;
  local_f0 = this;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar18);
    iVar11 = *piVar18;
  }
  pFVar4 = (this->InfillSequence).AllocatorInstance.Data;
  local_150 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_150) &&
      ((FScriptContainerElement *)&local_150 < pFVar4 + (longlong)iVar11 * 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = (this->InfillSequence).ArrayNum;
  if (iVar11 == *piVar18) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)this,piVar18);
  }
  (this->InfillSequence).ArrayNum = iVar11 + 1;
  *(undefined4 *)((this->InfillSequence).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_150;
  iVar11 = param_2->ArrayNum;
  if (0 < iVar11) {
    lVar26 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < iVar11) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      pFVar13 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::operator[]
                          (&param_1->Image,
                           (longlong)*(int *)(pFVar4 + lVar26 + 4) *
                           (longlong)(param_1->Dimensions).Width +
                           (longlong)*(int *)(pFVar4 + lVar26));
      uVar17 = uVar17 + 1;
      lVar26 = lVar26 + 8;
      *pFVar13 = param_3;
      iVar11 = param_2->ArrayNum;
    } while ((int)uVar17 < iVar11);
  }
  local_188.EnableDebugChecks = false;
  local_188.nodes.CurBlock = 0;
  local_188.nodes.CurBlockUsed = 0;
  local_188.nodes.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.nodes.Blocks.ArrayNum = 0;
  local_188.nodes.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
            (&local_188.nodes);
  local_188.id_to_index.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.id_to_index.ArrayNum = 0;
  local_188.id_to_index.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
            (&local_188.nodes,1,No);
  local_188.nodes.CurBlock = 0;
  local_188.nodes.CurBlockUsed = 0;
  if (local_188.nodes.Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&local_188.nodes);
  }
  local_110[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_188.id_to_index,local_110,iVar11);
  iVar11 = param_2->ArrayNum;
  local_188.num_nodes = 0;
  local_c8.Elements._0_8_ = 0;
  local_c8.Elements._8_8_ = 0;
  local_c8.Elements._32_8_ = 0;
  local_c8.Elements._40_4_ = 0;
  local_c8.Elements._44_4_ = 0x80;
  local_c8.Elements._48_4_ = 0xffffffff;
  local_c8.Elements._52_4_ = 0;
  local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.HashSize = 0;
  local_14c = 0;
  if (0 < iVar11) {
    uStackX_22 = param_3.NumInvalid;
    do {
      uVar17 = local_14c;
      iVar19 = 0;
      uVar16 = 0;
      if ((int)local_14c < iVar11) {
        uVar16 = ~local_14c >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar18 = &IndexUtil::GridOffsets8[0].field0_0x0._s_0.Y;
      local_f8 = *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar17 * 8);
      do {
        iVar11 = local_f8._4_4_ + *piVar18;
        iVar24 = ((FVector2i_u_0_s_0 *)(piVar18 + -1))->X + (int)local_f8;
        uVar22 = param_3.NumValid;
        if (((((-1 < iVar24) && (-1 < iVar11)) &&
             (iVar3 = (param_1->Dimensions).Width, iVar24 < iVar3)) &&
            (iVar11 < (param_1->Dimensions).Height)) &&
           ((pFVar13 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
                       operator[](&param_1->Image,
                                  (longlong)iVar3 * (longlong)iVar11 + (longlong)iVar24),
            pFVar13->NumValid != uVar22 || (pFVar13->NumInvalid != uStackX_22)))) {
          iVar19 = iVar19 + 1;
        }
        param_2 = local_118;
        uVar17 = local_14c;
        piVar18 = piVar18 + 2;
      } while ((longlong)piVar18 < 0x150aa2f64);
      lVar26 = (longlong)(int)local_14c;
      if (((local_188.EnableDebugChecks != false) &&
          (bVar9 = FIndexPriorityQueue::Contains(&local_188,local_14c), bVar9)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Contains(NodeID) == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                             ,0x7d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar20 = local_188.num_nodes + 1;
      uVar16 = 0;
      if ((int)uVar17 < local_188.id_to_index.ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      local_138 = (TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> *)
                  CONCAT44((float)(8 - iVar19),uVar17);
      local_188.num_nodes = uVar20;
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_188.id_to_index.AllocatorInstance.Data + lVar26 * 4) = uVar20;
      uVar17 = local_188.nodes.CurBlock * 0x200 + local_188.nodes.CurBlockUsed;
      if (local_188.num_nodes == uVar17) {
        uVar16 = local_188.nodes.CurBlock;
        uVar17 = local_188.nodes.CurBlockUsed;
        if (local_188.nodes.CurBlockUsed == 0x200) {
          if (local_188.nodes.CurBlock == local_188.nodes.Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                      (&local_188.nodes);
          }
          uVar16 = local_188.nodes.CurBlock + 1;
          local_188.nodes.CurBlockUsed = 0;
          local_188.nodes.CurBlock = uVar16;
          uVar17 = 0;
        }
LAB_14ca812a7:
        lVar26 = *(longlong *)
                  (local_188.nodes.Blocks.AllocatorInstance.Data + (longlong)(int)uVar16 * 8);
        *(TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> **)
         (lVar26 + (longlong)(int)uVar17 * 0xc) = local_138;
        *(uint *)(lVar26 + 8 + (longlong)(int)uVar17 * 0xc) = uVar20;
        local_188.nodes.CurBlockUsed = local_188.nodes.CurBlockUsed + 1;
      }
      else {
        if (uVar17 < (uint)local_188.num_nodes) {
          TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize
                    (&local_188.nodes,local_188.num_nodes);
          uVar16 = local_188.nodes.CurBlock;
          uVar17 = local_188.nodes.CurBlockUsed;
          if (local_188.nodes.CurBlockUsed == 0x200) {
            if (local_188.nodes.CurBlock == local_188.nodes.Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                        (&local_188.nodes);
            }
            local_188.nodes.CurBlock = local_188.nodes.CurBlock + 1;
            local_188.nodes.CurBlockUsed = 0;
            uVar16 = local_188.nodes.CurBlock;
            uVar17 = 0;
          }
          goto LAB_14ca812a7;
        }
        lVar26 = *(longlong *)
                  (local_188.nodes.Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_188.num_nodes >> 9) * 8);
        *(TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats> **)
         (lVar26 + (ulonglong)(local_188.num_nodes & 0x1ff) * 0xc) = local_138;
        *(uint *)(lVar26 + 8 + (ulonglong)(local_188.num_nodes & 0x1ff) * 0xc) = uVar20;
      }
      FIndexPriorityQueue::move_up
                (&local_188,
                 *(int *)(*(longlong *)
                           (local_188.nodes.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)local_188.num_nodes >> 9) * 8) + 8 +
                         (ulonglong)(local_188.num_nodes & 0x1ff) * 0xc));
      local_d8 = &local_f8;
      local_d0 = &local_14c;
      TSet<TTuple<UE::Geometry::FVector2i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector2i,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector2i_const_&,int_const_&>_>
                (&local_c8,&local_e8,(bool *)&local_d8);
      fVar7 = __real_3f800000;
      iVar11 = param_2->ArrayNum;
      local_14c = local_14c + 1;
      pTVar6 = local_f0;
    } while ((int)local_14c < iVar11);
    while (0 < local_188.num_nodes) {
      piVar18 = &(pTVar6->InfillSequence).ArrayMax;
      if (((local_188.EnableDebugChecks != false) && (local_188.num_nodes < 1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetCount() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                             ,0x92,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = *(uint *)(*(longlong *)local_188.nodes.Blocks.AllocatorInstance.Data + 0xc);
      FIndexPriorityQueue::remove_at_index(&local_188,1);
      iVar11 = 0;
      uVar16 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_148[0] = 1;
      local_198 = *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar17 * 8);
      uVar17 = (pTVar6->InfillSequence).ArrayNum;
      pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_148) &&
          ((FScriptContainerElement *)local_148 < pFVar4 + (longlong)*piVar18 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = (pTVar6->InfillSequence).ArrayNum;
      if (iVar19 == *piVar18) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pTVar6,piVar18);
      }
      (pTVar6->InfillSequence).ArrayNum = iVar19 + 1;
      *(undefined4 *)((pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)iVar19 * 4) =
           local_148[0];
      pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_198) &&
          ((FScriptContainerElement *)&local_198 < pFVar4 + (longlong)*piVar18 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = (pTVar6->InfillSequence).ArrayNum;
      if (iVar19 == *piVar18) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pTVar6,piVar18);
      }
      (pTVar6->InfillSequence).ArrayNum = iVar19 + 1;
      *(int *)((pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)iVar19 * 4) =
           (int)local_198;
      pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)((longlong)&local_198 + 4U)) &&
          ((FScriptContainerElement *)((longlong)&local_198 + 4U) < pFVar4 + (longlong)*piVar18 * 4)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = (pTVar6->InfillSequence).ArrayNum;
      if (iVar19 == *piVar18) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pTVar6,piVar18);
      }
      (pTVar6->InfillSequence).ArrayNum = iVar19 + 1;
      *(int *)((pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)iVar19 * 4) =
           local_198._4_4_;
      if (((pTVar6->InfillSequence).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
      local_190 = 0;
      sVar27 = 0;
      local_190._2_2_ = 0;
      piVar18 = &IndexUtil::GridOffsets8[0].field0_0x0._s_0.Y;
      *(int *)pFVar4 = *(int *)pFVar4 + 1;
      sVar25 = local_190._2_2_;
      do {
        local_140 = ((FVector2i_u_0_s_0 *)(piVar18 + -1))->X + (int)local_198;
        local_13c = *piVar18 + local_198._4_4_;
        if ((((local_140 < 0) || (local_13c < 0)) ||
            (iVar19 = (local_128->Dimensions).Width, iVar19 <= local_140)) ||
           ((local_128->Dimensions).Height <= local_13c)) {
          local_138 = &local_128->Image;
        }
        else {
          local_138 = &local_128->Image;
          pFVar13 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
                    operator[](local_138,
                               (longlong)iVar19 * (longlong)local_13c + (longlong)local_140);
          uVar15 = (*pFVar13).NumValid;
          uVar10 = (*pFVar13).NumInvalid;
          if ((uVar15 != uVar22) || (uVar10 != uStackX_22)) {
            sVar27 = sVar27 + uVar15;
            sVar25 = sVar25 + uVar10;
            pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
            iVar11 = iVar11 + 1;
            if ((pFVar4 <= (FScriptContainerElement *)&local_140) &&
               (((FScriptContainerElement *)&local_140 <
                 pFVar4 + (longlong)(pTVar6->InfillSequence).ArrayMax * 4 &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar19 = (pTVar6->InfillSequence).ArrayNum;
            if (iVar19 == (pTVar6->InfillSequence).ArrayMax) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pTVar6,
                                  &(pTVar6->InfillSequence).ArrayMax);
            }
            (pTVar6->InfillSequence).ArrayNum = iVar19 + 1;
            *(int *)((pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)iVar19 * 4) =
                 local_140;
            pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_13c) &&
                ((FScriptContainerElement *)&local_13c <
                 pFVar4 + (longlong)(pTVar6->InfillSequence).ArrayMax * 4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar19 = (pTVar6->InfillSequence).ArrayNum;
            if (iVar19 == (pTVar6->InfillSequence).ArrayMax) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pTVar6,
                                  &(pTVar6->InfillSequence).ArrayMax);
            }
            (pTVar6->InfillSequence).ArrayNum = iVar19 + 1;
            *(int *)((pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)iVar19 * 4) =
                 local_13c;
            uVar16 = 0;
            if ((int)uVar17 < (pTVar6->InfillSequence).ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar6->InfillSequence).AllocatorInstance.Data + (longlong)(int)uVar17 * 4;
            *(int *)pFVar4 = *(int *)pFVar4 + 1;
          }
        }
        piVar18 = piVar18 + 2;
      } while ((longlong)piVar18 < 0x150aa2f64);
      local_190 = CONCAT22(sVar25,sVar27);
      param_2 = local_118;
      if (0 < iVar11) {
        local_100[0] = local_190;
        local_108[0] = iVar11;
        FVar12 = (FSampleStats)
                 (**(code **)local_e8.Value)
                           (*(undefined8 *)((longlong)local_e8.Value + 8),local_100,local_108);
        pTVar8 = local_128;
        this_00 = local_138;
        pFVar13 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
                  operator[](local_138,
                             (longlong)(local_128->Dimensions).Width * (longlong)local_198._4_4_ +
                             (longlong)(int)local_198);
        piVar18 = &IndexUtil::GridOffsets8[0].field0_0x0._s_0.Y;
        *pFVar13 = FVar12;
        do {
          local_120 = ((FVector2i_u_0_s_0 *)(piVar18 + -1))->X + (int)local_198;
          local_11c = local_198._4_4_ + *piVar18;
          if (((-1 < local_120) && (-1 < local_11c)) &&
             ((iVar11 = (pTVar8->Dimensions).Width, local_120 < iVar11 &&
              (((local_11c < (pTVar8->Dimensions).Height &&
                (pFVar13 = TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>::
                           operator[](this_00,(longlong)local_11c * (longlong)iVar11 +
                                              (longlong)local_120), pFVar13->NumValid == uVar22)) &&
               (pFVar13->NumInvalid == uStackX_22)))))) {
            uVar17 = FCrc::MemCrc_DEPRECATED(&local_120,8,0);
            if (local_c8.Elements._8_4_ != local_c8.Elements._52_4_) {
              FVar23 = (ForElementType<FSetElementId>)&local_c8.Hash;
              if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar23 = local_c8.Hash.SecondaryData;
              }
              iVar11 = *(int *)((longlong)FVar23 + (ulonglong)(local_c8.HashSize - 1U & uVar17) * 4)
              ;
              while (iVar11 != -1) {
                lVar26 = local_c8.Elements._0_8_ + (longlong)iVar11 * 0x14;
                if ((*(int *)(local_c8.Elements._0_8_ + (longlong)iVar11 * 0x14) == local_120) &&
                   (*(int *)(lVar26 + 4) == local_11c)) {
                  if (iVar11 != -1) {
                    puVar21 = (uint *)(lVar26 + 8);
                    if (lVar26 == 0) {
                      puVar21 = (uint *)0x0;
                    }
                    if (puVar21 != (uint *)0x0) {
                      uVar17 = *puVar21;
                      if ((int)uVar17 <= local_188.id_to_index.ArrayNum + 1) {
                        uVar16 = 0;
                        if ((int)uVar17 < local_188.id_to_index.ArrayNum) {
                          uVar16 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar16 == 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        uVar17 = *(uint *)(local_188.id_to_index.AllocatorInstance.Data +
                                          (longlong)(int)uVar17 * 4);
                        if (((0 < (int)uVar17) && ((int)uVar17 <= local_188.num_nodes)) &&
                           (0 < *(int *)(*(longlong *)
                                          (local_188.nodes.Blocks.AllocatorInstance.Data +
                                          (ulonglong)(uVar17 >> 9) * 8) + 8 +
                                        (ulonglong)(uVar17 & 0x1ff) * 0xc))) {
                          uVar17 = *puVar21;
                          if (((local_188.EnableDebugChecks != false) &&
                              (bVar9 = FIndexPriorityQueue::Contains(&local_188,uVar17), !bVar9)) &&
                             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Contains(id) == true",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                                 ,0xc5,L""), bVar9)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uVar16 = 0;
                          if ((int)uVar17 < local_188.id_to_index.ArrayNum) {
                            uVar16 = ~uVar17 >> 0x1f;
                          }
                          if ((uVar16 == 0) &&
                             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar9)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uVar16 = *puVar21;
                          fVar2 = *(float *)(*(longlong *)
                                              (local_188.nodes.Blocks.AllocatorInstance.Data +
                                              (ulonglong)
                                              (*(uint *)(local_188.id_to_index.AllocatorInstance.
                                                         Data + (longlong)(int)uVar17 * 4) >> 9) * 8
                                              ) + 4 + (ulonglong)
                                                      (*(uint *)(local_188.id_to_index.
                                                                 AllocatorInstance.Data +
                                                                (longlong)(int)uVar17 * 4) & 0x1ff)
                                                      * 0xc);
                          if (((local_188.EnableDebugChecks != false) &&
                              (bVar9 = FIndexPriorityQueue::Contains(&local_188,uVar16), !bVar9)) &&
                             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Contains(NodeID) == true",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                                                 ,0xb0,L""), bVar9)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uVar17 = 0;
                          if ((int)uVar16 < local_188.id_to_index.ArrayNum) {
                            uVar17 = ~uVar16 >> 0x1f;
                          }
                          if ((uVar17 == 0) &&
                             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar9)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          uVar17 = *(uint *)(local_188.id_to_index.AllocatorInstance.Data +
                                            (longlong)(int)uVar16 * 4);
                          uVar14 = (ulonglong)(uVar17 & 0x1ff);
                          lVar26 = *(longlong *)
                                    (local_188.nodes.Blocks.AllocatorInstance.Data +
                                    (ulonglong)(uVar17 >> 9) * 8);
                          local_138 = (TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>
                                       *)CONCAT44(fVar2 - fVar7,
                                                  (int)*(undefined8 *)(lVar26 + uVar14 * 0xc));
                          *(TDenseGrid2<UE::Geometry::FRenderCaptureOcclusionHandler::FSampleStats>
                            **)(lVar26 + uVar14 * 0xc) = local_138;
                          *(undefined4 *)(lVar26 + 8 + uVar14 * 0xc) =
                               *(undefined4 *)(lVar26 + 8 + uVar14 * 0xc);
                          uVar16 = (int)uVar17 / 2;
                          if (((int)uVar16 < 1) ||
                             (fVar2 = *(float *)(*(longlong *)
                                                  (local_188.nodes.Blocks.AllocatorInstance.Data +
                                                  (ulonglong)(uVar16 >> 9) * 8) + 4 +
                                                (ulonglong)(uVar16 & 0x1ff) * 0xc),
                             pfVar1 = (float *)(*(longlong *)
                                                 (local_188.nodes.Blocks.AllocatorInstance.Data +
                                                 (ulonglong)(uVar17 >> 9) * 8) + 4 + uVar14 * 0xc),
                             fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
                            FIndexPriorityQueue::move_down(&local_188,uVar17);
                          }
                          else {
                            FIndexPriorityQueue::move_up(&local_188,uVar17);
                          }
                        }
                      }
                    }
                  }
                  break;
                }
                iVar11 = *(int *)(lVar26 + 0xc);
              }
            }
          }
          piVar18 = piVar18 + 2;
          param_2 = local_118;
          pTVar6 = local_f0;
        } while ((longlong)piVar18 < 0x150aa2f64);
      }
    }
  }
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  if (local_188.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.id_to_index.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
  ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_188.nodes);
  return;
}

