// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// FNavLocalGridSceneProxy @ 146f928b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavLocalGridSceneProxy * __thiscall
FNavLocalGridSceneProxy::FNavLocalGridSceneProxy
          (FNavLocalGridSceneProxy *this,UPrimitiveComponent *param_1,FRepData *param_2,
          FRepAgentData *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNavLocalGridSceneProxy *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TBox<double> *pTVar12;
  TIntPoint<int>_u_0 *pTVar13;
  uint uVar14;
  longlong lVar15;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar17;
  TIntPoint<int>_u_0 local_68;
  TIntPoint<int>_u_0 local_60;
  TIntPoint<int>_u_0 local_58;
  longlong local_50;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 local_40;
  
  FDebugRenderSceneProxy::FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this,param_1);
  uVar14 = 0;
  this->_padding_ = (longlong)&___7FNavLocalGridSceneProxy__6B_;
  (this->FreeCellMeshVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeCellMeshVerts).ArrayNum = 0;
  (this->FreeCellMeshVerts).ArrayMax = 0;
  (this->FreeCellMeshIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeCellMeshIndices).ArrayNum = 0;
  (this->FreeCellMeshIndices).ArrayMax = 0;
  (this->MarkedCellMeshVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkedCellMeshVerts).ArrayNum = 0;
  (this->MarkedCellMeshVerts).ArrayMax = 0;
  (this->MarkedCellMeshIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MarkedCellMeshIndices).ArrayNum = 0;
  (this->MarkedCellMeshIndices).ArrayMax = 0;
  (this->BoundsMeshVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsMeshVerts).ArrayNum = 0;
  (this->BoundsMeshVerts).ArrayMax = 0;
  (this->BoundsMeshIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsMeshIndices).ArrayNum = 0;
  (this->BoundsMeshIndices).ArrayMax = 0;
  (this->PathMeshVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathMeshVerts).ArrayNum = 0;
  (this->PathMeshVerts).ArrayMax = 0;
  (this->PathMeshIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PathMeshIndices).ArrayNum = 0;
  (this->PathMeshIndices).ArrayMax = 0;
  iVar10 = (param_2->Grids).ArrayNum;
  if (0 < iVar10) {
    local_50 = 0;
    do {
      lVar15 = local_50;
      uVar5 = 0;
      if ((int)uVar14 < iVar10) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
        return pFVar7;
      }
      pTVar12 = (TBox<double> *)((param_2->Grids).AllocatorInstance.Data + lVar15);
      StoreGridBounds(this,pTVar12,&this->BoundsMeshVerts,&this->BoundsMeshIndices);
      iVar10 = 0;
      if (0 < *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 8)) {
        do {
          iVar6 = *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
          iVar11 = 0;
          if (0 < iVar6) {
            do {
              uVar9 = iVar6 * iVar10 + iVar11;
              uVar5 = 0;
              if ((int)uVar9 < *(int *)&pTVar12[1].Max.field0_0x0) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
                return pFVar7;
              }
              if (param_3->GridIdx == uVar14) {
                pFVar8 = (param_3->PathCells).AllocatorInstance.Data;
                pFVar1 = pFVar8 + (longlong)(param_3->PathCells).ArrayNum * 4;
                for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 4) {
                  if (*(uint *)pFVar8 == uVar9) {
                    bVar4 = true;
                    goto LAB_146f92ab0;
                  }
                }
              }
              bVar4 = false;
LAB_146f92ab0:
              fVar2 = *(float *)&pTVar12[1].Min.field0_0x0;
              if (*(char *)((longlong)(int)uVar9 + (longlong)pTVar12[1].Min.field0_0x0._s_0.Z) ==
                  '\0') {
                if (bVar4) {
                  pTVar17 = &this->PathMeshIndices;
                  pTVar13 = &local_60;
                  pTVar16 = &this->PathMeshVerts;
                  local_60._s_0.X = iVar10;
                  local_60._s_0.Y = iVar11;
                }
                else {
                  pTVar17 = &this->FreeCellMeshIndices;
                  pTVar13 = &local_58;
                  pTVar16 = &this->FreeCellMeshVerts;
                  local_58._s_0.X = iVar10;
                  local_58._s_0.Y = iVar11;
                }
                StoreGridCellLayer(this,pTVar12,(TIntPoint<int> *)&pTVar13->_s_0,fVar2,pTVar16,
                                   pTVar17);
              }
              else {
                local_68._s_0.X = iVar10;
                local_68._s_0.Y = iVar11;
                StoreGridCellFull(this,pTVar12,(TIntPoint<int> *)&local_68._s_0,fVar2,
                                  &this->MarkedCellMeshVerts,&this->MarkedCellMeshIndices);
              }
              iVar6 = *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar6);
          }
          iVar10 = iVar10 + 1;
          lVar15 = local_50;
        } while (iVar10 < *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 8));
      }
      local_50 = lVar15 + 0x58;
      uVar14 = uVar14 + 1;
      iVar10 = (param_2->Grids).ArrayNum;
    } while ((int)uVar14 < iVar10);
  }
  iVar6 = param_3->GridIdx;
  if ((-1 < iVar6) && (iVar6 < iVar10)) {
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
      return pFVar7;
    }
    iVar10 = (param_3->PathCells).ArrayNum;
    uVar14 = 1;
    pTVar12 = (TBox<double> *)((param_2->Grids).AllocatorInstance.Data + (longlong)iVar6 * 0x58);
    if (1 < iVar10) {
      lVar15 = 4;
      do {
        uVar5 = 0;
        if ((int)(uVar14 - 1) < iVar10) {
          uVar5 = -uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
          return pFVar7;
        }
        iVar10 = *(int *)((param_3->PathCells).AllocatorInstance.Data + lVar15 + -4) %
                 *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
        uVar5 = 0;
        if ((int)(uVar14 - 1) < (param_3->PathCells).ArrayNum) {
          uVar5 = -uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
          return pFVar7;
        }
        local_40._s_0.X =
             *(int *)((param_3->PathCells).AllocatorInstance.Data + lVar15 + -4) /
             *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
        uVar5 = 0;
        if ((int)uVar14 < (param_3->PathCells).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        local_40._s_0.Y = iVar10;
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
          return pFVar7;
        }
        iVar10 = *(int *)((param_3->PathCells).AllocatorInstance.Data + lVar15);
        iVar6 = *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
        uVar5 = 0;
        if ((int)uVar14 < (param_3->PathCells).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNavLocalGridSceneProxy *)(*pcVar3)();
          return pFVar7;
        }
        local_48._s_0.X =
             *(int *)((param_3->PathCells).AllocatorInstance.Data + lVar15) /
             *(int *)((longlong)&pTVar12[1].Min.field0_0x0 + 4);
        local_48._s_0.Y = iVar10 % iVar6;
        StoreGridConnector(this,pTVar12,(TIntPoint<int> *)&local_40._s_0,
                           (TIntPoint<int> *)&local_48._s_0,*(float *)&pTVar12[1].Min.field0_0x0,
                           &this->PathMeshVerts,&this->PathMeshIndices);
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 4;
        iVar10 = (param_3->PathCells).ArrayNum;
      } while ((int)uVar14 < iVar10);
    }
  }
  return this;
}

// GetDynamicMeshElements @ 146fafe90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNavLocalGridSceneProxy::GetDynamicMeshElements
          (FNavLocalGridSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FSceneView *pFVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FNameEntryId FVar11;
  ESceneDepthPriorityGroup EVar12;
  FMaterialRenderProxy *pFVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar15;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar16;
  undefined4 extraout_var_02;
  uint uVar17;
  int iVar18;
  uint local_178;
  longlong local_168;
  FLinearColor_u_0 local_140;
  FLinearColor_u_0 local_130;
  FLinearColor_u_0 local_120;
  FLinearColor_u_0 local_110;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  FDynamicMeshBuilder local_f0;
  FDynamicMeshBuilder local_c8;
  FDynamicMeshBuilder local_a0;
  FDynamicMeshBuilder local_78;
  
  fVar8 = __real_3b808081;
  iVar18 = param_1->ArrayNum;
  uVar17 = 0;
  if (0 < iVar18) {
    local_178 = 1;
    local_168 = 0;
    do {
      if ((param_3 & local_178) != 0) {
        uVar10 = 0;
        if ((int)uVar17 < iVar18) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_168);
        if (0 < (this->FreeCellMeshVerts).ArrayNum) {
          local_140._s_0.R =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::FreeCellColor.field0_0x0._s_0.R];
          local_140._s_0.G =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::FreeCellColor.field0_0x0._s_0.G];
          local_140._s_0.B =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::FreeCellColor.field0_0x0._s_0.B];
          local_140._s_0.A =
               (float)`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::FreeCellColor.field0_0x0._3_1_ * fVar8;
          pFVar13 = (FMaterialRenderProxy *)
                    (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                0x310))();
          paVar2 = &param_4->OneFrameResources->Next;
          aVar14 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
          *(undefined8 *)((longlong)aVar14 + 8) = 0;
          *(undefined ***)aVar14 =
               &
               ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar15.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar14 + 8) = TVar15.Next;
            LOCK();
            aVar16 = *paVar2;
            bVar9 = TVar15.Next == aVar16;
            if (bVar9) {
              *paVar2 = aVar14;
              aVar16 = TVar15.Next;
            }
            UNLOCK();
            TVar15.Next = aVar16;
          } while (!bVar9);
          FVar11 = FNameEntryId::FromValidEName((EName)local_100);
          FVar4.Number = 0;
          FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
          FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                    ((FColoredMaterialRenderProxy *)((longlong)aVar14 + 0x10),pFVar13,
                     (FLinearColor *)&local_140._s_0,FVar4);
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_f0,pFVar1->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
          FDynamicMeshBuilder::AddVertices(&local_f0,&this->FreeCellMeshVerts);
          FDynamicMeshBuilder::AddTriangles(&local_f0,&this->FreeCellMeshIndices);
          EVar12 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,pFVar1);
          if (((EVar12 != (EVar12 & 0xff)) || ((int)EVar12 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDynamicMeshBuilder::GetMesh
                    (&local_f0,&UE::Math::TMatrix<double>::Identity,
                     (FMaterialRenderProxy *)((longlong)aVar14 + 0x10),(uchar)EVar12,false,false,
                     uVar17,param_4);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_f0);
        }
        if (0 < (this->MarkedCellMeshVerts).ArrayNum) {
          local_130._s_0.R =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::MarkedCellColor.field0_0x0._s_0.R];
          local_130._s_0.G =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::MarkedCellColor.field0_0x0._s_0.G];
          local_130._s_0.B =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::MarkedCellColor.field0_0x0._s_0.B];
          local_130._s_0.A =
               (float)`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::MarkedCellColor.field0_0x0._3_1_ * fVar8;
          pFVar13 = (FMaterialRenderProxy *)
                    (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                0x310))();
          paVar2 = &param_4->OneFrameResources->Next;
          aVar14 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
          *(undefined8 *)((longlong)aVar14 + 8) = 0;
          *(undefined ***)aVar14 =
               &
               ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar15.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar14 + 8) = TVar15.Next;
            LOCK();
            aVar16 = *paVar2;
            bVar9 = TVar15.Next == aVar16;
            if (bVar9) {
              *paVar2 = aVar14;
              aVar16 = TVar15.Next;
            }
            UNLOCK();
            TVar15.Next = aVar16;
          } while (!bVar9);
          FVar11 = FNameEntryId::FromValidEName((EName)local_fc);
          FVar5.Number = 0;
          FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
          FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                    ((FColoredMaterialRenderProxy *)((longlong)aVar14 + 0x10),pFVar13,
                     (FLinearColor *)&local_130._s_0,FVar5);
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_c8,pFVar1->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
          FDynamicMeshBuilder::AddVertices(&local_c8,&this->MarkedCellMeshVerts);
          FDynamicMeshBuilder::AddTriangles(&local_c8,&this->MarkedCellMeshIndices);
          EVar12 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,pFVar1);
          if (((EVar12 != (EVar12 & 0xff)) || ((int)EVar12 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDynamicMeshBuilder::GetMesh
                    (&local_c8,&UE::Math::TMatrix<double>::Identity,
                     (FMaterialRenderProxy *)((longlong)aVar14 + 0x10),(uchar)EVar12,false,false,
                     uVar17,param_4);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_c8);
        }
        if (0 < (this->BoundsMeshVerts).ArrayNum) {
          local_120._s_0.R =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::BoundsColor.field0_0x0._s_0.R];
          local_120._s_0.G =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::BoundsColor.field0_0x0._s_0.G];
          local_120._s_0.B =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::BoundsColor.field0_0x0._s_0.B];
          local_120._s_0.A =
               (float)`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::BoundsColor.field0_0x0._3_1_ * fVar8;
          pFVar13 = (FMaterialRenderProxy *)
                    (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                0x310))();
          paVar2 = &param_4->OneFrameResources->Next;
          aVar14 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
          *(undefined8 *)((longlong)aVar14 + 8) = 0;
          *(undefined ***)aVar14 =
               &
               ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar15.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar14 + 8) = TVar15.Next;
            LOCK();
            aVar16 = *paVar2;
            bVar9 = TVar15.Next == aVar16;
            if (bVar9) {
              *paVar2 = aVar14;
              aVar16 = TVar15.Next;
            }
            UNLOCK();
            TVar15.Next = aVar16;
          } while (!bVar9);
          FVar11 = FNameEntryId::FromValidEName((EName)local_f8);
          FVar6.Number = 0;
          FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar11.Value);
          FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                    ((FColoredMaterialRenderProxy *)((longlong)aVar14 + 0x10),pFVar13,
                     (FLinearColor *)&local_120._s_0,FVar6);
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_a0,pFVar1->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
          FDynamicMeshBuilder::AddVertices(&local_a0,&this->BoundsMeshVerts);
          FDynamicMeshBuilder::AddTriangles(&local_a0,&this->BoundsMeshIndices);
          EVar12 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,pFVar1);
          if (((EVar12 != (EVar12 & 0xff)) || ((int)EVar12 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDynamicMeshBuilder::GetMesh
                    (&local_a0,&UE::Math::TMatrix<double>::Identity,
                     (FMaterialRenderProxy *)((longlong)aVar14 + 0x10),(uchar)EVar12,false,false,
                     uVar17,param_4);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_a0);
        }
        if (0 < (this->PathMeshVerts).ArrayNum) {
          local_110._s_0.R =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::PathColor.field0_0x0._s_0.R];
          local_110._s_0.G =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::PathColor.field0_0x0._s_0.G];
          local_110._s_0.B =
               FLinearColor::sRGBToLinearTable
               [`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::PathColor.field0_0x0._s_0.B];
          local_110._s_0.A =
               (float)`public:_virtual_void___cdecl_FNavLocalGridSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                      ::__l2::PathColor.field0_0x0._3_1_ * fVar8;
          pFVar13 = (FMaterialRenderProxy *)
                    (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ +
                                0x310))();
          paVar2 = &param_4->OneFrameResources->Next;
          aVar14 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
          *(undefined8 *)((longlong)aVar14 + 8) = 0;
          *(undefined ***)aVar14 =
               &
               ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar15.Next = *paVar2;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar14 + 8) = TVar15.Next;
            LOCK();
            aVar16 = *paVar2;
            bVar9 = TVar15.Next == aVar16;
            if (bVar9) {
              *paVar2 = aVar14;
              aVar16 = TVar15.Next;
            }
            UNLOCK();
            TVar15.Next = aVar16;
          } while (!bVar9);
          FVar11 = FNameEntryId::FromValidEName((EName)local_f4);
          FVar7.Number = 0;
          FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar11.Value);
          FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                    ((FColoredMaterialRenderProxy *)((longlong)aVar14 + 0x10),pFVar13,
                     (FLinearColor *)&local_110._s_0,FVar7);
          FDynamicMeshBuilder::FDynamicMeshBuilder
                    (&local_78,pFVar1->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
          FDynamicMeshBuilder::AddVertices(&local_78,&this->PathMeshVerts);
          FDynamicMeshBuilder::AddTriangles(&local_78,&this->PathMeshIndices);
          EVar12 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)this,pFVar1);
          if (((EVar12 != (EVar12 & 0xff)) || ((int)EVar12 < 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDynamicMeshBuilder::GetMesh
                    (&local_78,&UE::Math::TMatrix<double>::Identity,
                     (FMaterialRenderProxy *)((longlong)aVar14 + 0x10),(uchar)EVar12,false,false,
                     uVar17,param_4);
          FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_78);
        }
      }
      iVar18 = param_1->ArrayNum;
      local_168 = local_168 + 8;
      local_178 = local_178 << 1 | (uint)((int)local_178 < 0);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar18);
  }
  return;
}

// GetMemoryFootprint @ 146fb22d0

uint __thiscall FNavLocalGridSceneProxy::GetMemoryFootprint(FNavLocalGridSceneProxy *this)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  
  iVar2 = (this->FreeCellMeshVerts).ArrayMax;
  iVar3 = (this->FreeCellMeshIndices).ArrayMax;
  iVar4 = (this->MarkedCellMeshVerts).ArrayMax;
  iVar5 = (this->MarkedCellMeshIndices).ArrayMax;
  iVar6 = (this->BoundsMeshVerts).ArrayMax;
  iVar7 = (this->BoundsMeshIndices).ArrayMax;
  iVar8 = (this->PathMeshVerts).ArrayMax;
  iVar9 = (this->PathMeshIndices).ArrayMax;
  uVar12 = FDebugRenderSceneProxy::GetAllocatedSize((FDebugRenderSceneProxy *)this);
  uVar1 = (ulonglong)uVar12 +
          (((longlong)iVar2 + (longlong)iVar4 + (longlong)iVar6 + (longlong)iVar8) * 0x16 +
           (longlong)iVar3 + (longlong)iVar9 + (longlong)iVar5 + (longlong)iVar7) * 4;
  if (uVar1 != (uVar1 & 0xffffffff)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return uVar12;
    }
  }
  return (int)uVar1 + 0x420;
}

// GetTypeHash @ 146fb5b00

ulong64 __thiscall FNavLocalGridSceneProxy::GetTypeHash(FNavLocalGridSceneProxy *this)

{
  return 0x1551c4500;
}

// GetViewRelevance @ 146fb5cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNavLocalGridSceneProxy::GetViewRelevance
          (FNavLocalGridSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | bVar2 << 7;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) >> 5 ^
                      *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5)) & 4;
  return __return_storage_ptr__;
}

// StoreGridBounds @ 146fd38c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavLocalGridSceneProxy::StoreGridBounds
          (FNavLocalGridSceneProxy *this,TBox<double> *param_1,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FDynamicMeshVertex *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  TVector<float> *pTVar19;
  FDynamicMeshVertex *pFVar20;
  longlong lVar21;
  undefined1 auStackY_11b8 [32];
  TVector<double>_u_0 local_1160;
  TVector<double>_u_0 local_1148;
  TVector<double>_u_0 local_1130;
  TVector<double>_u_0 local_1118;
  TVector<double>_u_0 local_1100;
  TVector<double>_u_0 local_10e8;
  TVector<double>_u_0 local_10d0;
  TVector<double>_u_0 local_10b8;
  TVector<double>_u_0 local_10a0;
  TVector<double>_u_0 local_1088;
  TVector<double>_u_0 local_1070;
  TVector<double>_u_0 local_1058;
  TVector<double>_u_0 local_1040;
  TVector<double>_u_0 local_1028;
  TVector<double>_u_0 local_1010;
  TVector<double>_u_0 local_ff8;
  TVector<double>_u_0 local_fe0;
  TVector<double>_u_0 local_fc8;
  TVector<double>_u_0 local_fb0;
  TVector<double>_u_0 local_f98;
  TVector<double>_u_0 local_f80;
  TVector<double>_u_0 local_f68;
  TVector<double>_u_0 local_f50;
  TVector<double>_u_0 local_f38;
  TVector<double>_u_0 local_f20;
  TVector<double>_u_0 local_f08;
  TVector<double>_u_0 local_ef0;
  TVector<double>_u_0 local_ed8;
  TVector<double>_u_0 local_ec0;
  TVector<double>_u_0 local_ea8;
  TVector<double>_u_0 local_e90;
  TVector<double>_u_0 local_e78;
  TVector<float> local_e60;
  TVector<float> local_e54;
  TVector<float> local_e48;
  TVector<float> local_e3c;
  TVector<float> local_e30;
  TVector<float> local_e24;
  TVector<float> local_e18;
  TVector<float> local_e0c;
  TVector<float> local_e00;
  TVector<float> local_df4;
  TVector<float> local_de8;
  TVector<float> local_ddc;
  TVector<float> local_dd0;
  TVector<float> local_dc4;
  TVector<float> local_db8;
  TVector<float> local_dac;
  TVector<float> local_da0;
  TVector<float> local_d94;
  TVector<float> local_d88;
  TVector<float> local_d7c;
  TVector<float> local_d70;
  TVector<float> local_d64;
  TVector<float> local_d58;
  TVector<float> local_d4c;
  TVector<float> local_d40;
  TVector<float> local_d34;
  TVector<float> local_d28;
  TVector<float> local_d1c;
  TVector<float> local_d10;
  TVector<float> local_d04;
  TVector<float> local_cf8;
  TVector<float> local_cec;
  FDynamicMeshVertex local_cd8;
  FDynamicMeshVertex local_c78;
  FDynamicMeshVertex local_c18;
  FDynamicMeshVertex local_bb8;
  FDynamicMeshVertex local_b58;
  FDynamicMeshVertex local_af8;
  FDynamicMeshVertex local_a98;
  FDynamicMeshVertex local_a38;
  FDynamicMeshVertex local_9d8;
  FDynamicMeshVertex local_978;
  FDynamicMeshVertex local_918;
  FDynamicMeshVertex local_8b8;
  FDynamicMeshVertex local_858;
  FDynamicMeshVertex local_7f8;
  FDynamicMeshVertex local_798;
  FDynamicMeshVertex local_738;
  FDynamicMeshVertex local_6d8;
  FDynamicMeshVertex local_678;
  FDynamicMeshVertex local_618;
  FDynamicMeshVertex local_5b8;
  FDynamicMeshVertex local_558;
  FDynamicMeshVertex local_4f8;
  FDynamicMeshVertex local_498;
  FDynamicMeshVertex local_438;
  FDynamicMeshVertex local_3d8;
  FDynamicMeshVertex local_378;
  FDynamicMeshVertex local_318;
  FDynamicMeshVertex local_2b8;
  FDynamicMeshVertex local_258;
  FDynamicMeshVertex local_1f8;
  FDynamicMeshVertex local_198;
  FDynamicMeshVertex local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_11b8;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  dVar3 = (param_1->Max).field0_0x0._s_0.Y;
  iVar4 = param_2->ArrayNum;
  dVar9 = (dVar1 + (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar8 = ((param_1->Min).field0_0x0._s_0.X + dVar2) * __real_3fe0000000000000;
  dVar10 = ((param_1->Min).field0_0x0._s_0.Y + dVar3) * __real_3fe0000000000000;
  dVar12 = (dVar2 - (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar3 = (dVar3 - (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar15 = (dVar1 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar14 = dVar8 - dVar12;
  dVar1 = dVar10 - dVar3;
  dVar2 = dVar9 - dVar15;
  local_1148._s_0.X = dVar14;
  local_1148._s_0.Y = dVar1;
  local_1148._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_da0,(TVector<double> *)&local_1148._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_cd8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  dVar8 = dVar8 + dVar12;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1130._s_0.X = dVar8;
  local_1130._s_0.Y = dVar1;
  local_1130._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d94,(TVector<double> *)&local_1130._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_c78,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  dVar10 = dVar10 + dVar3;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1118._s_0.X = dVar14;
  local_1118._s_0.Y = dVar10;
  local_1118._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d88,(TVector<double> *)&local_1118._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_c18,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1100._s_0.X = dVar8;
  local_1100._s_0.Y = dVar10;
  local_1100._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d7c,(TVector<double> *)&local_1100._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_bb8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  dVar9 = dVar9 + dVar15;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_10e8._s_0.X = dVar14;
  local_10e8._s_0.Y = dVar1;
  local_10e8._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d70,(TVector<double> *)&local_10e8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_b58,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_10d0._s_0.X = dVar8;
  local_10d0._s_0.Y = dVar1;
  local_10d0._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d64,(TVector<double> *)&local_10d0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_af8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_10b8._s_0.X = dVar14;
  local_10b8._s_0.Y = dVar10;
  local_10b8._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d58,(TVector<double> *)&local_10b8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_a98,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_10a0._s_0.X = dVar8;
  local_10a0._s_0.Y = dVar10;
  local_10a0._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d4c,(TVector<double> *)&local_10a0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_a38,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  dVar12 = __real_4014000000000000;
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  dVar15 = dVar14 + dVar12;
  dVar3 = dVar2 + dVar12;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1088._s_0.X = dVar15;
  local_1088._s_0.Y = dVar1;
  local_1088._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d40,(TVector<double> *)&local_1088._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_9d8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  dVar12 = dVar8 - dVar12;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1070._s_0.X = dVar12;
  local_1070._s_0.Y = dVar1;
  local_1070._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d34,(TVector<double> *)&local_1070._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_978,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  dVar11 = __real_4014000000000000;
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  dVar13 = dVar9 - dVar11;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1040._s_0.X = dVar15;
  local_1040._s_0.Y = dVar1;
  local_1040._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d28,(TVector<double> *)&local_1040._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_918,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1028._s_0.X = dVar12;
  local_1028._s_0.Y = dVar1;
  local_1028._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_dac,(TVector<double> *)&local_1028._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_8b8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  dVar1 = dVar1 + dVar11;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1010._s_0.X = dVar8;
  local_1010._s_0.Y = dVar1;
  local_1010._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d1c,(TVector<double> *)&local_1010._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_858,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  dVar11 = dVar10 - __real_4014000000000000;
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_ff8._s_0.X = dVar8;
  local_ff8._s_0.Y = dVar11;
  local_ff8._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d10,(TVector<double> *)&local_ff8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_7f8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1160._s_0.X = dVar8;
  local_1160._s_0.Y = dVar1;
  local_1160._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_d04,(TVector<double> *)&local_1160._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_798,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_1058._s_0.X = dVar8;
  local_1058._s_0.Y = dVar11;
  local_1058._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_cf8,(TVector<double> *)&local_1058._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_738,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_fe0._s_0.X = dVar15;
  local_fe0._s_0.Y = dVar1;
  local_fe0._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_cec,(TVector<double> *)&local_fe0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_6d8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_fc8._s_0.X = dVar12;
  local_fc8._s_0.Y = dVar1;
  local_fc8._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e60,(TVector<double> *)&local_fc8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_678,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_fb0._s_0.X = dVar15;
  local_fb0._s_0.Y = dVar11;
  local_fb0._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e54,(TVector<double> *)&local_fb0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_618,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f98._s_0.X = dVar12;
  local_f98._s_0.Y = dVar11;
  local_f98._s_0.Z = dVar9;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e48,(TVector<double> *)&local_f98._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_5b8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f80._s_0.X = dVar15;
  local_f80._s_0.Y = dVar10;
  local_f80._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e3c,(TVector<double> *)&local_f80._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_558,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f68._s_0.X = dVar12;
  local_f68._s_0.Y = dVar10;
  local_f68._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e30,(TVector<double> *)&local_f68._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_4f8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f50._s_0.X = dVar15;
  local_f50._s_0.Y = dVar10;
  local_f50._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e24,(TVector<double> *)&local_f50._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_498,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f38._s_0.X = dVar12;
  local_f38._s_0.Y = dVar10;
  local_f38._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e18,(TVector<double> *)&local_f38._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_438,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f20._s_0.X = dVar14;
  local_f20._s_0.Y = dVar1;
  local_f20._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e0c,(TVector<double> *)&local_f20._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_3d8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_f08._s_0.X = dVar14;
  local_f08._s_0.Y = dVar11;
  local_f08._s_0.Z = dVar3;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_e00,(TVector<double> *)&local_f08._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_378,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_ef0._s_0.X = dVar14;
  local_ef0._s_0.Y = dVar1;
  local_ef0._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_df4,(TVector<double> *)&local_ef0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_318,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_ed8._s_0.X = dVar14;
  local_ed8._s_0.Y = dVar11;
  local_ed8._s_0.Z = dVar13;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_de8,(TVector<double> *)&local_ed8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_2b8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_ec0._s_0.X = dVar15;
  local_ec0._s_0.Y = dVar1;
  local_ec0._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_ddc,(TVector<double> *)&local_ec0._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_258,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_ea8._s_0.X = dVar12;
  local_ea8._s_0.Y = dVar1;
  local_ea8._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_dd0,(TVector<double> *)&local_ea8._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_1f8,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_e90._s_0.X = dVar15;
  local_e90._s_0.Y = dVar11;
  local_e90._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_dc4,(TVector<double> *)&local_e90._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_198,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  local_e78._s_0.X = dVar12;
  local_e78._s_0.Y = dVar11;
  local_e78._s_0.Z = dVar2;
  pTVar19 = UE::LWC::NarrowWorldPositionChecked(&local_db8,(TVector<double> *)&local_e78._s_0);
  pFVar20 = FDynamicMeshVertex::FDynamicMeshVertex(&local_138,pTVar19);
  pFVar5 = (FDynamicMeshVertex *)(param_2->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar20) && (pFVar20 < pFVar5 + param_2->ArrayMax)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  uVar16 = *(undefined8 *)((longlong)&(pFVar20->Position).field0_0x0 + 8);
  lVar21 = (longlong)iVar18 * 0x58;
  pFVar6 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar6 + lVar21) = *(undefined8 *)&(pFVar20->Position).field0_0x0;
  *(undefined8 *)(pFVar6 + lVar21 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x10 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x20 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x30 + 8) = uVar16;
  uVar16 = *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40) =
       *(undefined8 *)((longlong)&pFVar20->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar6 + lVar21 + 0x40 + 8) = uVar16;
  *(undefined8 *)(pFVar6 + lVar21 + 0x50) = *(undefined8 *)&pFVar20->TangentZ;
  StoreTriIndices(this,0,1,9,iVar4,param_3);
  StoreTriIndices(this,0,9,8,iVar4,param_3);
  StoreTriIndices(this,1,5,0xb,iVar4,param_3);
  StoreTriIndices(this,1,0xb,9,iVar4,param_3);
  StoreTriIndices(this,5,4,10,iVar4,param_3);
  StoreTriIndices(this,5,10,0xb,iVar4,param_3);
  StoreTriIndices(this,4,0,8,iVar4,param_3);
  StoreTriIndices(this,4,8,10,iVar4,param_3);
  StoreTriIndices(this,1,3,0xd,iVar4,param_3);
  StoreTriIndices(this,1,0xd,0xc,iVar4,param_3);
  StoreTriIndices(this,3,7,0xf,iVar4,param_3);
  StoreTriIndices(this,3,0xf,0xd,iVar4,param_3);
  StoreTriIndices(this,7,5,0xe,iVar4,param_3);
  StoreTriIndices(this,7,0xe,0xf,iVar4,param_3);
  StoreTriIndices(this,5,1,0xc,iVar4,param_3);
  StoreTriIndices(this,5,0xc,0xe,iVar4,param_3);
  StoreTriIndices(this,4,5,0x11,iVar4,param_3);
  StoreTriIndices(this,4,0x11,0x10,iVar4,param_3);
  StoreTriIndices(this,5,7,0x13,iVar4,param_3);
  StoreTriIndices(this,5,0x13,0x11,iVar4,param_3);
  StoreTriIndices(this,7,6,0x12,iVar4,param_3);
  StoreTriIndices(this,7,0x12,0x13,iVar4,param_3);
  StoreTriIndices(this,6,4,0x10,iVar4,param_3);
  StoreTriIndices(this,6,0x10,0x12,iVar4,param_3);
  StoreTriIndices(this,3,2,0x14,iVar4,param_3);
  StoreTriIndices(this,3,0x14,0x15,iVar4,param_3);
  StoreTriIndices(this,7,3,0x15,iVar4,param_3);
  StoreTriIndices(this,7,0x15,0x17,iVar4,param_3);
  StoreTriIndices(this,6,7,0x17,iVar4,param_3);
  StoreTriIndices(this,6,0x17,0x16,iVar4,param_3);
  StoreTriIndices(this,2,6,0x16,iVar4,param_3);
  StoreTriIndices(this,2,0x16,0x14,iVar4,param_3);
  StoreTriIndices(this,2,0,0x18,iVar4,param_3);
  StoreTriIndices(this,2,0x18,0x19,iVar4,param_3);
  StoreTriIndices(this,6,2,0x19,iVar4,param_3);
  StoreTriIndices(this,6,0x19,0x1b,iVar4,param_3);
  StoreTriIndices(this,4,6,0x1b,iVar4,param_3);
  StoreTriIndices(this,4,0x1b,0x1a,iVar4,param_3);
  StoreTriIndices(this,0,4,0x1a,iVar4,param_3);
  StoreTriIndices(this,0,0x1a,0x18,iVar4,param_3);
  StoreTriIndices(this,1,0,0x1c,iVar4,param_3);
  StoreTriIndices(this,1,0x1c,0x1d,iVar4,param_3);
  StoreTriIndices(this,3,1,0x1d,iVar4,param_3);
  StoreTriIndices(this,3,0x1d,0x1f,iVar4,param_3);
  StoreTriIndices(this,2,3,0x1f,iVar4,param_3);
  StoreTriIndices(this,2,0x1f,0x1e,iVar4,param_3);
  StoreTriIndices(this,0,2,0x1e,iVar4,param_3);
  StoreTriIndices(this,0,0x1e,0x1c,iVar4,param_3);
  return;
}

// StoreGridCellFull @ 146fd6020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavLocalGridSceneProxy::StoreGridCellFull
          (FNavLocalGridSceneProxy *this,TBox<double> *param_1,TIntPoint<int> *param_2,float param_3
          ,TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  double dVar1;
  int iVar2;
  FDynamicMeshVertex *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  TVector<float> *pTVar15;
  FDynamicMeshVertex *pFVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStackY_518 [32];
  TVector<double>_u_0 local_4c8;
  TVector<double>_u_0 local_4b0;
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  TVector<float> local_408;
  TVector<float> local_3fc;
  TVector<float> local_3f0;
  TVector<float> local_3e4;
  TVector<float> local_3d8;
  TVector<float> local_3cc;
  TVector<float> local_3c0;
  TVector<float> local_3b4;
  FDynamicMeshVertex local_3a8;
  FDynamicMeshVertex local_348;
  FDynamicMeshVertex local_2e8;
  FDynamicMeshVertex local_288;
  FDynamicMeshVertex local_228;
  FDynamicMeshVertex local_1c8;
  FDynamicMeshVertex local_168;
  FDynamicMeshVertex local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  iVar2 = param_4->ArrayNum;
  dVar7 = (double)param_3;
  dVar6 = (double)((float)(param_2->field0_0x0)._s_0.X * param_3) + (param_1->Min).field0_0x0._s_0.X
  ;
  dVar18 = (double)((float)(param_2->field0_0x0)._s_0.Y * param_3) +
           (param_1->Min).field0_0x0._s_0.Y;
  dVar11 = (dVar1 + (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar8 = (dVar1 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  dVar6 = (dVar6 + dVar7 + dVar6) * __real_3fe0000000000000;
  dVar9 = dVar11 - dVar8;
  dVar1 = dVar7 * __real_3fe0000000000000 - __real_4014000000000000;
  dVar7 = (dVar18 + dVar7 + dVar18) * __real_3fe0000000000000;
  dVar10 = dVar6 - dVar1;
  dVar18 = dVar7 - dVar1;
  local_4c8._s_0.X = dVar10;
  local_4c8._s_0.Y = dVar18;
  local_4c8._s_0.Z = dVar9;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_408,(TVector<double> *)&local_4c8._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_3a8,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  dVar6 = dVar6 + dVar1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_4b0._s_0.X = dVar6;
  local_4b0._s_0.Y = dVar18;
  local_4b0._s_0.Z = dVar9;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3fc,(TVector<double> *)&local_4b0._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_348,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  dVar1 = dVar1 + dVar7;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_498._s_0.X = dVar10;
  local_498._s_0.Y = dVar1;
  local_498._s_0.Z = dVar9;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3f0,(TVector<double> *)&local_498._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_2e8,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_480._s_0.X = dVar6;
  local_480._s_0.Y = dVar1;
  local_480._s_0.Z = dVar9;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3e4,(TVector<double> *)&local_480._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_288,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  dVar8 = dVar8 + dVar11;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_468._s_0.X = dVar10;
  local_468._s_0.Y = dVar18;
  local_468._s_0.Z = dVar8;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3d8,(TVector<double> *)&local_468._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_228,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_450._s_0.X = dVar6;
  local_450._s_0.Y = dVar18;
  local_450._s_0.Z = dVar8;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3cc,(TVector<double> *)&local_450._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_1c8,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_438._s_0.X = dVar10;
  local_438._s_0.Y = dVar1;
  local_438._s_0.Z = dVar8;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3c0,(TVector<double> *)&local_438._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_168,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_420._s_0.X = dVar6;
  local_420._s_0.Y = dVar1;
  local_420._s_0.Z = dVar8;
  pTVar15 = UE::LWC::NarrowWorldPositionChecked(&local_3b4,(TVector<double> *)&local_420._s_0);
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_108,pTVar15);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_4->ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar14 = param_4->ArrayNum;
  if (iVar14 == param_4->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar14 + 1;
  uVar12 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar14 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar12;
  uVar12 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar12;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  StoreTriIndices(this,4,5,7,iVar2,param_5);
  StoreTriIndices(this,4,7,6,iVar2,param_5);
  StoreTriIndices(this,1,3,7,iVar2,param_5);
  StoreTriIndices(this,1,7,5,iVar2,param_5);
  StoreTriIndices(this,0,1,5,iVar2,param_5);
  StoreTriIndices(this,0,5,4,iVar2,param_5);
  StoreTriIndices(this,1,0,2,iVar2,param_5);
  StoreTriIndices(this,1,2,3,iVar2,param_5);
  StoreTriIndices(this,0,4,6,iVar2,param_5);
  StoreTriIndices(this,0,6,2,iVar2,param_5);
  StoreTriIndices(this,2,6,7,iVar2,param_5);
  StoreTriIndices(this,2,7,3,iVar2,param_5);
  return;
}

// StoreGridCellLayer @ 146fd6ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavLocalGridSceneProxy::StoreGridCellLayer
          (FNavLocalGridSceneProxy *this,TBox<double> *param_1,TIntPoint<int> *param_2,float param_3
          ,TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  double dVar1;
  int iVar2;
  FDynamicMeshVertex *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  TVector<float> *pTVar13;
  FDynamicMeshVertex *pFVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStackY_2e8 [32];
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<float> local_238;
  TVector<float> local_22c;
  TVector<float> local_220;
  TVector<float> local_214;
  FDynamicMeshVertex local_208;
  FDynamicMeshVertex local_1a8;
  FDynamicMeshVertex local_148;
  FDynamicMeshVertex local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  iVar2 = param_4->ArrayNum;
  dVar7 = (double)param_3;
  dVar6 = (double)((float)(param_2->field0_0x0)._s_0.X * param_3) + (param_1->Min).field0_0x0._s_0.X
  ;
  dVar16 = (double)((float)(param_2->field0_0x0)._s_0.Y * param_3) +
           (param_1->Min).field0_0x0._s_0.Y;
  dVar8 = (dVar7 + dVar6 + dVar6) * __real_3fe0000000000000;
  dVar6 = dVar7 * __real_3fe0000000000000 - __real_4014000000000000;
  dVar9 = dVar8 - dVar6;
  dVar16 = (dVar7 + dVar16 + dVar16) * __real_3fe0000000000000;
  dVar7 = dVar16 - dVar6;
  local_298._s_0.X = dVar9;
  local_298._s_0.Y = dVar7;
  local_298._s_0.Z = dVar1;
  pTVar13 = UE::LWC::NarrowWorldPositionChecked(&local_238,(TVector<double> *)&local_298._s_0);
  pFVar14 = FDynamicMeshVertex::FDynamicMeshVertex(&local_208,pTVar13);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + param_4->ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = param_4->ArrayNum;
  if (iVar12 == param_4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar12 + 1;
  dVar8 = dVar8 + dVar6;
  uVar10 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 8);
  lVar15 = (longlong)iVar12 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar15) = *(undefined8 *)&(pFVar14->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar15 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40 + 8) = uVar10;
  *(undefined8 *)(pFVar4 + lVar15 + 0x50) = *(undefined8 *)&pFVar14->TangentZ;
  local_280._s_0.X = dVar8;
  local_280._s_0.Y = dVar7;
  local_280._s_0.Z = dVar1;
  pTVar13 = UE::LWC::NarrowWorldPositionChecked(&local_22c,(TVector<double> *)&local_280._s_0);
  pFVar14 = FDynamicMeshVertex::FDynamicMeshVertex(&local_1a8,pTVar13);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + param_4->ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = param_4->ArrayNum;
  if (iVar12 == param_4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar12 + 1;
  dVar6 = dVar6 + dVar16;
  uVar10 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 8);
  lVar15 = (longlong)iVar12 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar15) = *(undefined8 *)&(pFVar14->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar15 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40 + 8) = uVar10;
  *(undefined8 *)(pFVar4 + lVar15 + 0x50) = *(undefined8 *)&pFVar14->TangentZ;
  local_268._s_0.X = dVar9;
  local_268._s_0.Y = dVar6;
  local_268._s_0.Z = dVar1;
  pTVar13 = UE::LWC::NarrowWorldPositionChecked(&local_220,(TVector<double> *)&local_268._s_0);
  pFVar14 = FDynamicMeshVertex::FDynamicMeshVertex(&local_148,pTVar13);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + param_4->ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = param_4->ArrayNum;
  if (iVar12 == param_4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar12 + 1;
  uVar10 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 8);
  lVar15 = (longlong)iVar12 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar15) = *(undefined8 *)&(pFVar14->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar15 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40 + 8) = uVar10;
  *(undefined8 *)(pFVar4 + lVar15 + 0x50) = *(undefined8 *)&pFVar14->TangentZ;
  local_250._s_0.X = dVar8;
  local_250._s_0.Y = dVar6;
  local_250._s_0.Z = dVar1;
  pTVar13 = UE::LWC::NarrowWorldPositionChecked(&local_214,(TVector<double> *)&local_250._s_0);
  pFVar14 = FDynamicMeshVertex::FDynamicMeshVertex(&local_e8,pTVar13);
  pFVar3 = (FDynamicMeshVertex *)(param_4->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar14) && (pFVar14 < pFVar3 + param_4->ArrayMax)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = param_4->ArrayNum;
  if (iVar12 == param_4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar12 + 1;
  uVar10 = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 8);
  lVar15 = (longlong)iVar12 * 0x58;
  pFVar4 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar15) = *(undefined8 *)&(pFVar14->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar15 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x10 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x20 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x30 + 8) = uVar10;
  uVar10 = *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40) =
       *(undefined8 *)((longlong)&pFVar14->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar15 + 0x40 + 8) = uVar10;
  *(undefined8 *)(pFVar4 + lVar15 + 0x50) = *(undefined8 *)&pFVar14->TangentZ;
  StoreTriIndices(this,0,1,3,iVar2,param_5);
  StoreTriIndices(this,0,3,2,iVar2,param_5);
  return;
}

// StoreGridConnector @ 146fd6ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNavLocalGridSceneProxy::StoreGridConnector
          (FNavLocalGridSceneProxy *this,TBox<double> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3,float param_4,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_5,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_6)

{
  double dVar1;
  int iVar2;
  FDynamicMeshVertex *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  FDynamicMeshVertex *pFVar16;
  longlong lVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStackY_2c8 [32];
  TVector<float>_u_0 local_278;
  TVector<float>_u_0 local_26c;
  TVector<float>_u_0 local_260;
  TVector<float>_u_0 local_254;
  double local_248;
  FDynamicMeshVertex local_238;
  FDynamicMeshVertex local_1d8;
  FDynamicMeshVertex local_178;
  FDynamicMeshVertex local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  dVar10 = (double)(((float)(param_2->field0_0x0)._s_0.X + __real_3f000000) * param_4) +
           (param_1->Min).field0_0x0._s_0.X;
  dVar11 = (double)(((float)(param_2->field0_0x0)._s_0.Y + __real_3f000000) * param_4) +
           (param_1->Min).field0_0x0._s_0.Y;
  dVar12 = (double)(((float)(param_3->field0_0x0)._s_0.X + __real_3f000000) * param_4) +
           (param_1->Min).field0_0x0._s_0.X;
  uVar7 = dVar12 - dVar10;
  dVar13 = (double)(((float)(param_3->field0_0x0)._s_0.Y + __real_3f000000) * param_4) +
           (param_1->Min).field0_0x0._s_0.Y;
  uVar18 = dVar13 - dVar11;
  dVar6 = (double)uVar18 * (double)uVar18 + (double)uVar7 * (double)uVar7;
  if (dVar6 != __real_3ff0000000000000) {
    if (dVar6 < __real_3e45798ee0000000) {
      uVar20 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar21 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      goto LAB_146fd715b;
    }
    local_248 = __real_3ff0000000000000 / SQRT(dVar6);
    uVar7 = (double)uVar7 * local_248;
    uVar18 = (double)uVar18 * local_248;
  }
  uVar20 = 0;
  uVar21 = 0;
LAB_146fd715b:
  iVar2 = param_5->ArrayNum;
  dVar9 = ((double)uVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
          (double)CONCAT44(uVar21,uVar20) * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y) *
          __real_4014000000000000;
  dVar8 = ((double)CONCAT44(uVar21,uVar20) * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          (double)uVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z) *
          __real_4014000000000000;
  dVar6 = ((double)uVar7 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
          (double)uVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X) *
          __real_4014000000000000;
  local_278._s_0.X = (float)(dVar10 - dVar9);
  local_278._s_0.Y = (float)(dVar11 - dVar8);
  fVar22 = (float)(dVar1 - dVar6);
  local_278._s_0.Z = fVar22;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_238,(TVector<float> *)&local_278._s_0);
  pFVar3 = (FDynamicMeshVertex *)(param_5->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_5->ArrayMax)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar15 = param_5->ArrayNum;
  if (iVar15 == param_5->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar15 + 1;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  fVar19 = (float)(dVar6 + dVar1);
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar7;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_26c._s_0.X = (float)(dVar9 + dVar10);
  local_26c._s_0.Y = (float)(dVar8 + dVar11);
  local_26c._s_0.Z = fVar19;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_1d8,(TVector<float> *)&local_26c._s_0);
  pFVar3 = (FDynamicMeshVertex *)(param_5->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_5->ArrayMax)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar15 = param_5->ArrayNum;
  if (iVar15 == param_5->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar15 + 1;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar7;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_260._s_0.X = (float)(dVar12 - dVar9);
  local_260._s_0.Y = (float)(dVar13 - dVar8);
  local_260._s_0.Z = fVar22;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_178,(TVector<float> *)&local_260._s_0);
  pFVar3 = (FDynamicMeshVertex *)(param_5->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_5->ArrayMax)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar15 = param_5->ArrayNum;
  if (iVar15 == param_5->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar15 + 1;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar7;
  local_254._s_0.X = (float)(dVar9 + dVar12);
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  local_254._s_0.Y = (float)(dVar8 + dVar13);
  local_254._s_0.Z = fVar19;
  pFVar16 = FDynamicMeshVertex::FDynamicMeshVertex(&local_118,(TVector<float> *)&local_254._s_0);
  pFVar3 = (FDynamicMeshVertex *)(param_5->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + param_5->ArrayMax)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar15 = param_5->ArrayNum;
  if (iVar15 == param_5->ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x458,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar15 + 1;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->Position).field0_0x0 + 8);
  lVar17 = (longlong)iVar15 * 0x58;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar17) = *(undefined8 *)&(pFVar16->Position).field0_0x0;
  *(undefined8 *)(pFVar4 + lVar17 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[1].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[0].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x10 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[3].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[2].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x20 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[5].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[4].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x30 + 8) = uVar7;
  uVar7 = *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[7].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40) =
       *(undefined8 *)((longlong)&pFVar16->TextureCoordinate[6].field0_0x0 + 4);
  *(undefined8 *)(pFVar4 + lVar17 + 0x40 + 8) = uVar7;
  *(undefined8 *)(pFVar4 + lVar17 + 0x50) = *(undefined8 *)&pFVar16->TangentZ;
  StoreTriIndices(this,0,1,3,iVar2,param_6);
  StoreTriIndices(this,0,3,2,iVar2,param_6);
  return;
}

// StoreTriIndices @ 146fd7670

void __thiscall
FNavLocalGridSceneProxy::StoreTriIndices
          (FNavLocalGridSceneProxy *this,int param_1,int param_2,int param_3,int param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10 [2];
  
  local_18 = param_1 + param_4;
  pFVar1 = (param_5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_5->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_5->ArrayNum;
  if (iVar4 == param_5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar4 + 1;
  *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_18;
  local_14 = param_2 + param_4;
  pFVar1 = (param_5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
     ((FScriptContainerElement *)&local_14 < pFVar1 + (longlong)param_5->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_5->ArrayNum;
  if (iVar4 == param_5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar4 + 1;
  *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_14;
  local_10[0] = param_3 + param_4;
  pFVar1 = (param_5->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_10) &&
     ((FScriptContainerElement *)local_10 < pFVar1 + (longlong)param_5->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_5->ArrayNum;
  if (iVar4 == param_5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
  }
  param_5->ArrayNum = iVar4 + 1;
  *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_10[0];
  return;
}

