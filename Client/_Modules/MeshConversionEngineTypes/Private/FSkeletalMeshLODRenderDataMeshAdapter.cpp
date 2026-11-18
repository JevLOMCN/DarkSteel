// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 1

// FSkeletalMeshLODRenderDataMeshAdapter @ 14ca343f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSkeletalMeshLODRenderDataMeshAdapter * __thiscall
FSkeletalMeshLODRenderDataMeshAdapter::FSkeletalMeshLODRenderDataMeshAdapter
          (FSkeletalMeshLODRenderDataMeshAdapter *this,FSkeletalMeshLODRenderData *param_1)

{
  TArray<FSkelMeshRenderSection_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FSkinWeightInfo *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FSkeletalMeshLODRenderDataMeshAdapter *pFVar14;
  ulonglong uVar15;
  FSkeletalMeshLODRenderData *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FSkinWeightVertexBuffer *this_00;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  FSkeletalMeshLODRenderData *local_a0;
  FScriptContainerElement *local_98;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *local_90;
  FSkeletalMeshLODRenderDataMeshAdapter *local_88;
  FSkinWeightVertexBuffer *local_80;
  FSkinWeightInfo local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this->Mesh = param_1;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  pTVar1 = &this->ValidSections;
  pTVar2 = &this->TriangleOffsetArray;
  (this->BuildScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BuildScale).field0_0x0._s_0.Y = (double)uVar9;
  piVar3 = &this->NumTriangles;
  piVar4 = &(this->ValidSections).ArrayMax;
  (this->BuildScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  piVar5 = &(this->TriangleOffsetArray).ArrayMax;
  (this->InvBuildScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->InvBuildScale).field0_0x0._s_0.Y = (double)uVar9;
  (this->InvBuildScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bScaleNormals = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ValidSections).ArrayNum = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TriangleOffsetArray).ArrayNum = 0;
  *piVar5 = 0;
  *piVar3 = 0;
  (this->SrcIndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SrcIndexBuffer).ArrayNum = 0;
  (this->SrcIndexBuffer).ArrayMax = 0;
  local_90 = &this->SkinWeights;
  (local_90->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SkinWeights).ArrayNum = 0;
  (this->SkinWeights).ArrayMax = 0;
  if (param_1 != (FSkeletalMeshLODRenderData *)0x0) {
    uVar19 = (param_1->RenderSections).ArrayNum + 1;
    local_a0 = param_1;
    local_88 = this;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (*piVar5 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&pTVar2->AllocatorInstance,(this->TriangleOffsetArray).ArrayNum,piVar5);
    }
    uVar19 = (local_a0->RenderSections).ArrayNum;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if (*piVar4 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar19,&pTVar1->AllocatorInstance,(this->ValidSections).ArrayNum,piVar4);
    }
    iVar13 = (local_a0->RenderSections).ArrayNum;
    pFVar18 = (local_a0->RenderSections).AllocatorInstance.Data;
    pFVar20 = pFVar18 + (longlong)iVar13 * 0x118;
    while( true ) {
      if ((local_a0->RenderSections).ArrayNum != iVar13) {
        local_a8 = 0;
        `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_a8);
      }
      pTVar10 = local_90;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (pFVar18 == pFVar20) break;
      if (((pFVar6 <= piVar3) && (piVar3 < pFVar6 + (longlong)*piVar5 * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FSkeletalMeshLODRenderDataMeshAdapter *)(*pcVar8)();
        return pFVar14;
      }
      iVar12 = (this->TriangleOffsetArray).ArrayNum;
      if (iVar12 == *piVar5) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar5);
      }
      (this->TriangleOffsetArray).ArrayNum = iVar12 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = *piVar3;
      *piVar3 = *piVar3 + *(int *)(pFVar18 + 8);
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      local_98 = pFVar18;
      if (((pFVar6 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar6 + (longlong)*piVar4 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FSkeletalMeshLODRenderDataMeshAdapter *)(*pcVar8)();
        return pFVar14;
      }
      iVar12 = (this->ValidSections).ArrayNum;
      if (iVar12 == *piVar4) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar4);
      }
      pFVar18 = pFVar18 + 0x118;
      (this->ValidSections).ArrayNum = iVar12 + 1;
      *(FScriptContainerElement **)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           local_98;
    }
    if (((pFVar6 <= piVar3) && (piVar3 < pFVar6 + (longlong)*piVar5 * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FSkeletalMeshLODRenderDataMeshAdapter *)(*pcVar8)();
      return pFVar14;
    }
    iVar13 = (this->TriangleOffsetArray).ArrayNum;
    if (iVar13 == *piVar5) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar5);
    }
    pFVar14 = local_88;
    pFVar16 = local_a0;
    (this->TriangleOffsetArray).ArrayNum = iVar13 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4) = *piVar3;
    FMultiSizeIndexContainer::GetIndexBuffer
              (&local_a0->MultiSizeIndexContainer,&local_88->SrcIndexBuffer);
    this_00 = &pFVar16->SkinWeightVertexBuffer;
    this = pFVar14;
    if (((this_00 != (FSkinWeightVertexBuffer *)0x0) &&
        ((int)(pFVar16->SkinWeightVertexBuffer).DataVertexBuffer._padding_ != -1)) &&
       ((pFVar16->SkinWeightVertexBuffer).DataVertexBuffer.NumVertices != 0)) {
      local_80 = this_00;
      if ((pFVar14->Mesh == (FSkeletalMeshLODRenderData *)0x0) ||
         (bVar11 = FPositionVertexBuffer::GetAllowCPUAccess
                             (&(pFVar14->Mesh->StaticVertexBuffers).PositionVertexBuffer), !bVar11))
      {
        uVar19 = 0;
      }
      else {
        uVar19 = (pFVar14->Mesh->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
        }
      }
      piVar3 = &pTVar10->ArrayMax;
      if (pTVar10->ArrayMax < (int)uVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,2,uVar19,&pTVar10->AllocatorInstance,pTVar10->ArrayNum,piVar3);
      }
      iVar13 = (pFVar16->RenderSections).ArrayNum;
      uVar15 = (ulonglong)iVar13;
      pFVar18 = (pFVar16->RenderSections).AllocatorInstance.Data;
      local_90 = (TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> *)
                 CONCAT44(local_90._4_4_,iVar13);
      pFVar20 = pFVar18 + uVar15 * 0x118;
      while( true ) {
        if ((pFVar16->RenderSections).ArrayNum != (int)uVar15) {
          local_a7[0] = 0;
          `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_a7);
        }
        this = local_88;
        if (pFVar18 == pFVar20) break;
        uVar19 = *(uint *)(pFVar18 + 0x10);
        iVar13 = *(int *)(pFVar18 + 0x48) + uVar19;
        for (; (int)uVar19 < iVar13; uVar19 = uVar19 + 1) {
          FSkinWeightVertexBuffer::GetVertexSkinWeights(this_00,&local_78,uVar19);
          lVar17 = 0;
          do {
            if ((int)(uint)local_78.InfluenceBones[lVar17] < *(int *)(pFVar18 + 0x40)) {
              local_78.InfluenceBones[lVar17] =
                   *(ushort *)
                    (*(longlong *)(pFVar18 + 0x38) + (ulonglong)local_78.InfluenceBones[lVar17] * 2)
              ;
            }
            else {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_7177524039680786353>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Public\\SkeletalMeshLODRenderDataMeshAdapter.h"
                                  ,0x4f,"SectionBoneIdx < Section.BoneMap.Num()");
              if (bVar11) {
                pcVar8 = (code *)swi(3);
                pFVar14 = (FSkeletalMeshLODRenderDataMeshAdapter *)(*pcVar8)();
                return pFVar14;
              }
            }
            this_00 = local_80;
            lVar17 = lVar17 + 1;
          } while (lVar17 < 0xc);
          pFVar7 = (FSkinWeightInfo *)(pTVar10->AllocatorInstance).Data;
          if (((pFVar7 <= &local_78) && (&local_78 < pFVar7 + *piVar3)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            pFVar14 = (FSkeletalMeshLODRenderDataMeshAdapter *)(*pcVar8)();
            return pFVar14;
          }
          iVar12 = pTVar10->ArrayNum;
          if (iVar12 == *piVar3) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x230,&pTVar10->AllocatorInstance,piVar3);
          }
          pTVar10->ArrayNum = iVar12 + 1;
          lVar17 = (longlong)iVar12;
          pFVar6 = (pTVar10->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30) = local_78.InfluenceBones._0_8_;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30 + 8) = local_78.InfluenceBones._8_8_;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30 + 0x10) = local_78.InfluenceBones._16_8_;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30 + 0x10 + 8) = local_78.InfluenceWeights._0_8_;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30 + 0x20) = local_78.InfluenceWeights._8_8_;
          *(undefined8 *)(pFVar6 + lVar17 * 0x30 + 0x20 + 8) = local_78.InfluenceWeights._16_8_;
          pFVar16 = local_a0;
        }
        uVar15 = (ulonglong)local_90 & 0xffffffff;
        pFVar18 = pFVar18 + 0x118;
      }
    }
  }
  return this;
}

