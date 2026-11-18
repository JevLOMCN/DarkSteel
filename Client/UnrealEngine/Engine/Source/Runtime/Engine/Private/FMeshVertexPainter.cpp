// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// PaintVerticesLerpAlongAxis @ 147fe4fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FMeshVertexPainter::PaintVerticesLerpAlongAxis
          (UStaticMeshComponent *param_1,FLinearColor *param_2,FLinearColor *param_3,
          EVertexPaintAxis param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FStaticMeshRenderData *pFVar13;
  FColorVertexBuffer *this;
  FColorVertexBuffer *this_00;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  UStaticMesh *this_01;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  uint local_1a0;
  ForAnyElementType local_198;
  uint local_190 [4];
  FScriptContainerElement *local_180;
  FLinearColor_u_0 local_178;
  FName local_168;
  UStaticMesh *local_160;
  FScriptContainerElement *local_158;
  FString local_150;
  double local_140 [4];
  double local_120;
  double local_118;
  undefined1 local_110;
  TVector<double>_u_0 local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  
  if (param_1 == (UStaticMeshComponent *)0x0) {
    return;
  }
  this_01 = (param_1->StaticMesh).field0_0x0.DebugPtr;
  local_160 = this_01;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (this_01 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_01 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
      goto LAB_147fe5063;
    }
  }
  if (this_01 == (UStaticMesh *)0x0) {
    return;
  }
LAB_147fe5063:
  if (this_01->bAllowCPUAccess == '\0') {
    if (1 < (byte)LogStaticMesh._0_1_) {
      local_168 = (FName)this_01->_padding_;
      ::FName::ToString(&local_168,&local_150);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    UStaticMesh::GetBounds(this_01,(TBoxSphereBounds<double,double> *)&local_108._s_0);
    local_110 = 1;
    local_140[0] = local_108._s_0.X - local_f0;
    local_140[1] = local_108._s_0.Y - local_e8;
    local_140[3] = local_108._s_0.X + local_f0;
    local_120 = local_108._s_0.Y + local_e8;
    local_140[2] = local_108._s_0.Z - local_e0;
    local_118 = local_108._s_0.Z + local_e0;
    if (param_4 < (Z|Y)) {
      dVar1 = local_140[param_4];
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar1 = local_140[param_4];
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    dVar2 = local_140[(ulonglong)param_4 + 3];
    uVar11 = UStaticMesh::GetNumLODs(this_01);
    UStaticMeshComponent::SetLODDataCount(param_1,uVar11,uVar11);
    fVar7 = __real_437f0000;
    fVar6 = __real_3f000000;
    fVar5 = __real_3f800000;
    local_190[2] = (param_1->LODData).ArrayNum;
    uVar15 = (ulonglong)(int)local_190[2];
    uVar11 = 0;
    pFVar18 = (param_1->LODData).AllocatorInstance.Data;
    local_158 = pFVar18 + uVar15 * 0x50;
    local_1a0 = 0;
    while( true ) {
      pFVar9 = local_158;
      local_180 = pFVar18;
      if ((param_1->LODData).ArrayNum != (int)uVar15) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a8);
      }
      if (pFVar18 == pFVar9) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,uVar11);
      if ((*(longlong *)(pFVar18 + 0x40) != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("LODInfo.OverrideVertexColors == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                              ,0x56,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = UStaticMesh::GetRenderData(this_01);
      uVar14 = 0;
      if ((int)uVar11 < (pFVar13->LODResources).Array.ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = 0;
      lVar3 = *(longlong *)
               ((pFVar13->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
      uVar14 = *(uint *)(lVar3 + 0x1cc);
      local_198.Data = (FScriptContainerElement *)0x0;
      local_190[0] = 0;
      local_190[1] = 0;
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar14,&local_198,(int *)local_190,(int *)(local_190 + 1));
      memset(local_198.Data + (longlong)iVar12 * 4,0,(longlong)(int)uVar14 << 2);
      if (uVar14 != 0) {
        do {
          iVar12 = *(int *)(lVar3 + 0x1c8);
          lVar16 = *(longlong *)(lVar3 + 0x1c0);
          if ((Z < param_4) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7ab,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          fVar20 = (*(float *)((ulonglong)(uVar17 * iVar12) + lVar16 + (ulonglong)param_4 * 4) -
                   (float)dVar1) * (fVar5 / ((float)dVar2 - (float)dVar1));
          local_178._s_0.R =
               ((param_3->field0_0x0)._s_0.R - (param_2->field0_0x0)._s_0.R) * fVar20 +
               (param_2->field0_0x0)._s_0.R;
          local_178._s_0.G =
               ((param_3->field0_0x0)._s_0.G - (param_2->field0_0x0)._s_0.G) * fVar20 +
               (param_2->field0_0x0)._s_0.G;
          local_178._s_0.B =
               ((param_3->field0_0x0)._s_0.B - (param_2->field0_0x0)._s_0.B) * fVar20 +
               (param_2->field0_0x0)._s_0.B;
          local_178._s_0.A =
               ((param_3->field0_0x0)._s_0.A - (param_2->field0_0x0)._s_0.A) * fVar20 +
               (param_2->field0_0x0)._s_0.A;
          if (param_5) {
            FLinearColor::ToFColorSRGB((FLinearColor *)&local_178._s_0);
          }
          else {
            fVar20 = local_178._s_0.B;
            if (local_178._s_0.B <= 0.0) {
              fVar20 = 0.0;
            }
            fVar21 = local_178._s_0.G;
            if (local_178._s_0.G <= 0.0) {
              fVar21 = 0.0;
            }
            fVar22 = local_178._s_0.R;
            if (local_178._s_0.R <= 0.0) {
              fVar22 = 0.0;
            }
            fVar19 = local_178._s_0.A;
            if (local_178._s_0.A <= 0.0) {
              fVar19 = 0.0;
            }
            if (fVar5 <= fVar20) {
              fVar20 = fVar5;
            }
            if (fVar5 <= fVar21) {
              fVar21 = fVar5;
            }
            if (fVar5 <= fVar22) {
              fVar22 = fVar5;
            }
            if (fVar5 <= fVar19) {
              fVar19 = fVar5;
            }
            local_1a4 = CONCAT13((char)(int)(fVar19 * fVar7 + fVar6),
                                 CONCAT12((char)(int)(fVar22 * fVar7 + fVar6),
                                          CONCAT11((char)(int)(fVar21 * fVar7 + fVar6),
                                                   (char)(int)(fVar20 * fVar7 + fVar6))));
          }
          uVar8 = local_1a4;
          uVar11 = 0;
          if ((int)uVar17 < (int)local_190[0]) {
            uVar11 = ~uVar17 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar16 = (longlong)(int)uVar17;
          uVar17 = uVar17 + 1;
          *(undefined4 *)(local_198.Data + lVar16 * 4) = uVar8;
          this_01 = local_160;
          pFVar18 = local_180;
          uVar11 = local_1a0;
        } while (uVar17 < uVar14);
      }
      this = ::operator_new(0x50);
      this_00 = (FColorVertexBuffer *)0x0;
      if (this != (FColorVertexBuffer *)0x0) {
        this_00 = FColorVertexBuffer::FColorVertexBuffer(this);
      }
      *(FColorVertexBuffer **)(pFVar18 + 0x40) = this_00;
      FColorVertexBuffer::InitFromColorArray(this_00,(FColor *)local_198.Data,local_190[0],4,true);
      BeginInitResource(*(FRenderResource **)(pFVar18 + 0x40),(FRenderCommandPipe *)0x0);
      uVar11 = uVar11 + 1;
      local_1a0 = uVar11;
      if (local_198.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data);
      }
      pFVar18 = pFVar18 + 0x50;
      uVar15 = (ulonglong)local_190[2];
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1->bEnableVertexColorMeshPainting = '\0';
  }
  return;
}

// PaintVerticesSingleColor @ 147fe5670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FMeshVertexPainter::PaintVerticesSingleColor
          (UStaticMeshComponent *param_1,FLinearColor *param_2,bool param_3)

{
  int iVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FStaticMeshRenderData *pFVar6;
  FColorVertexBuffer *this;
  FColorVertexBuffer *this_00;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FColor local_res20 [2];
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    else if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    uVar5 = UStaticMesh::GetNumLODs(pUVar2);
    UStaticMeshComponent::SetLODDataCount(param_1,uVar5,uVar5);
    FLinearColor::ToFColor(param_2,SUB81(local_res20,0));
    iVar1 = (param_1->LODData).ArrayNum;
    uVar5 = 0;
    pFVar8 = (param_1->LODData).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((param_1->LODData).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar9) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,uVar5);
      if ((*(longlong *)(pFVar8 + 0x40) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pFVar6 = UStaticMesh::GetRenderData(pUVar2);
      uVar7 = 0;
      if ((int)uVar5 < (pFVar6->LODResources).Array.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)(*(longlong *)
                         ((pFVar6->LODResources).Array.AllocatorInstance.Data +
                         (longlong)(int)uVar5 * 8) + 0x1cc);
      this = ::operator_new(0x50);
      this_00 = (FColorVertexBuffer *)0x0;
      if (this != (FColorVertexBuffer *)0x0) {
        this_00 = FColorVertexBuffer::FColorVertexBuffer(this);
      }
      *(FColorVertexBuffer **)(pFVar8 + 0x40) = this_00;
      FColorVertexBuffer::InitFromColorArray(this_00,local_res20,uVar7,0,true);
      BeginInitResource(*(FRenderResource **)(pFVar8 + 0x40),(FRenderCommandPipe *)0x0);
      uVar5 = uVar5 + 1;
      pFVar8 = pFVar8 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1->bEnableVertexColorMeshPainting = '\0';
  }
  return;
}

// RemovePaintedVertices @ 147fed690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FMeshVertexPainter::RemovePaintedVertices(UStaticMeshComponent *param_1)

{
  int iVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar2 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    else if (pUVar2 == (UStaticMesh *)0x0) {
      return;
    }
    iVar6 = 0;
    pFVar7 = (param_1->LODData).AllocatorInstance.Data;
    iVar1 = (param_1->LODData).ArrayNum;
    pFVar5 = pFVar7 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((param_1->LODData).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshComponentLODInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar7 == pFVar5) break;
      UStaticMeshComponent::RemoveInstanceVertexColorsFromLOD(param_1,iVar6);
      if ((*(longlong *)(pFVar7 + 0x40) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LODInfo.OverrideVertexColors == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\MeshVertexPainter\\MeshVertexPainter.cpp"
                             ,0x82,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = iVar6 + 1;
      pFVar7 = pFVar7 + 0x50;
    }
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
    param_1->bEnableVertexColorMeshPainting = '\x01';
  }
  return;
}

