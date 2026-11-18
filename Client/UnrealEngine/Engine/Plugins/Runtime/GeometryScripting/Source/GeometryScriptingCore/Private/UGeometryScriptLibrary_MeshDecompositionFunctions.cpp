// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 34

// StaticClass @ 14cd96a50

UClass * __cdecl UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshDecompositionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.
                InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshDecompositionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshDecompositionFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.InnerSingleton
  ;
}

// UGeometryScriptLibrary_MeshDecompositionFunctions @ 14cda6000

UGeometryScriptLibrary_MeshDecompositionFunctions * __thiscall
UGeometryScriptLibrary_MeshDecompositionFunctions::UGeometryScriptLibrary_MeshDecompositionFunctions
          (UGeometryScriptLibrary_MeshDecompositionFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDecompositionFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshDecompositionFunctions @ 14cda6030

UGeometryScriptLibrary_MeshDecompositionFunctions * __thiscall
UGeometryScriptLibrary_MeshDecompositionFunctions::UGeometryScriptLibrary_MeshDecompositionFunctions
          (UGeometryScriptLibrary_MeshDecompositionFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDecompositionFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshDecompositionFunctions @ 14cda6ae0

void __thiscall
UGeometryScriptLibrary_MeshDecompositionFunctions::
~UGeometryScriptLibrary_MeshDecompositionFunctions
          (UGeometryScriptLibrary_MeshDecompositionFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDecompositionFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdb3ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar7;
  undefined1 auStackY_3a8 [32];
  FDynamicMeshEditResult local_378;
  FDynamicMeshEditor local_308;
  TArrayView<int_const_,int> local_300;
  FMeshIndexMappings local_2e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(*(FDynamicMesh3 **)this);
    pFVar2 = (param_1->AttributeSet).Ptr;
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    if (*(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208) != (FDynamicMeshAttributeSet *)0x0
       ) {
      this_00 = *(FDynamicMeshAttributeSet **)(*(longlong *)this + 0x208);
    }
    pFVar7 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar7 = pFVar2;
    }
    UE::Geometry::FDynamicMeshAttributeSet::EnableMatchingAttributes(this_00,pFVar7,true,false);
  }
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2e8);
  local_308.Mesh = *(FDynamicMesh3 **)this;
  lVar3 = *(longlong *)((longlong)this + 8);
  local_378.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewVertices.ArrayNum = 0;
  local_378.NewVertices.ArrayMax = 0;
  local_378.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewTriangles.ArrayNum = 0;
  local_378.NewTriangles.ArrayMax = 0;
  local_378.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewQuads.ArrayNum = 0;
  local_378.NewQuads.ArrayMax = 0;
  local_378.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewPolygons.ArrayNum = 0;
  local_378.NewPolygons.ArrayMax = 0;
  local_378.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewGroups.ArrayNum = 0;
  local_378.NewGroups.ArrayMax = 0;
  local_378.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewNormalOverlayElements.ArrayNum = 0;
  local_378.NewNormalOverlayElements.ArrayMax = 0;
  local_378.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.NewColorOverlayElements.ArrayNum = 0;
  local_378.NewColorOverlayElements.ArrayMax = 0;
  if (*(longlong *)(lVar3 + 8) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(lVar3 + 8);
  local_300.DataPtr = (int *)*puVar4;
  iVar1 = *(int *)(puVar4 + 1);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_300.ArrayNum = iVar1;
  UE::Geometry::FDynamicMeshEditor::AppendTriangles
            (&local_308,param_1,&local_300,&local_2e8,&local_378,true);
  if (local_378.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_378.NewNormalOverlayElements.AllocatorInstance.Data,
             local_378.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_378.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_378.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_378.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_378.NewPolygons.AllocatorInstance.Data
             ,local_378.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_378.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_378.NewPolygons.AllocatorInstance.Data);
  }
  if (local_378.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.NewQuads.AllocatorInstance.Data);
  }
  if (local_378.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.NewTriangles.AllocatorInstance.Data);
  }
  if (local_378.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.NewVertices.AllocatorInstance.Data);
  }
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2e8);
  return;
}

// operator() @ 14cdb6f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res18 [8];
  longlong local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  code *local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_98;
  FMeshConnectedComponents local_90;
  TFunction<bool___cdecl(int,int)> local_78;
  
  uVar11 = 0;
  local_90.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Components.Array.ArrayNum = 0;
  local_90.Components.Array.ArrayMax = 0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  local_90.Mesh = param_1;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_90,&local_78);
  iVar2 = local_90.Components.Array.ArrayNum;
  lVar8 = (longlong)local_90.Components.Array.ArrayNum;
  if (1 < local_90.Components.Array.ArrayNum) {
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&local_b0,
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    uVar12 = uVar11;
    local_res20 = lVar8;
    if (0 < iVar2) {
      do {
        uVar10 = (uint)uVar11;
        uVar6 = 0;
        if ((int)uVar10 < local_90.Components.Array.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined8 **)(local_90.Components.Array.AllocatorInstance.Data + uVar12 * 8);
        puVar9 = (uint *)*puVar3;
        iVar2 = *(int *)(puVar3 + 1);
        puVar1 = puVar9 + iVar2;
        while( true ) {
          if (*(int *)(puVar3 + 1) != iVar2) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (puVar9 == puVar1) break;
          uVar6 = *puVar9;
          uVar7 = 0;
          if ((int)uVar6 < local_b0.ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          puVar9 = puVar9 + 1;
          *(uint *)(local_b0.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar10;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < local_res20);
    }
    local_b8 = &local_b0;
    local_98 = &local_b8;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
               ::Call;
    UE::Geometry::FDynamicMeshEditor::SplitMesh
              (param_1,*(TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **)this,
               (TFunctionRef<int___cdecl(int)> *)&local_a0,-1,
               (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_90.Components);
  return;
}

// operator() @ 14cdb7170

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  FDynamicMeshAttributeSet *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TDynamicMeshScalarTriangleAttribute<int> *local_res10;
  TDynamicMeshScalarTriangleAttribute<int> **local_res18 [2];
  undefined4 local_28 [2];
  code *local_20;
  undefined8 **local_18;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 != (FDynamicMeshAttributeSet *)0x0) &&
     (local_res10 = (pFVar2->MaterialIDAttrib).Ptr,
     local_res10 != (TDynamicMeshScalarTriangleAttribute<int> *)0x0)) {
    local_res18[0] = &local_res10;
    local_18 = local_res18;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
               ::Call;
    UE::Geometry::FDynamicMeshEditor::SplitMesh
              (param_1,*(TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 8),(TFunctionRef<int___cdecl(int)> *)&local_20,-1,
               *(TArray<int,TSizedDefaultAllocator<32>_> **)this,true);
    return;
  }
  pFVar3 = *(ForAnyElementType **)this;
  local_res10 = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  local_28[0] = 0;
  if ((pFVar3->Data <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(undefined4 *)(pFVar3->Data + (longlong)iVar6 * 4) = local_28[0];
  return;
}

// operator() @ 14cdb72a0

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FText *pFVar3;
  FPolygroupSet *pFVar4;
  FPolygroupSet *pFVar5;
  FPolygroupSet *local_res8 [2];
  FPolygroupLayer local_res18;
  FPolygroupSet **local_res20;
  undefined1 local_28 [16];
  
  pFVar5 = (FPolygroupSet *)0x0;
  local_res8[0] = (FPolygroupSet *)0x0;
  local_res18.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res18.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res18,param_1);
  if (bVar2) {
    pFVar4 = ::operator_new(0x18);
    if (pFVar4 != (FPolygroupSet *)0x0) {
      FVar1.LayerIndex = local_res18.LayerIndex;
      FVar1.bIsDefaultLayer = local_res18.bIsDefaultLayer;
      FVar1._1_3_ = local_res18._1_3_;
      pFVar5 = UE::Geometry::FPolygroupSet::FPolygroupSet(pFVar4,param_1,FVar1);
    }
    pFVar4 = local_res8[0];
    local_res8[0] = pFVar5;
    ::operator_delete(pFVar4,0x18);
    ::operator_delete((void *)0x0,0x18);
    local_res20 = local_res8;
    local_28._8_8_ = &local_res20;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
         ::Call;
    UE::Geometry::FDynamicMeshEditor::SplitMesh
              (param_1,*(TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x10),(TFunctionRef<int___cdecl(int)> *)local_28,-1,
               *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),true);
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"SplitMeshByPolygroups_MissingGroups",
                        L"SplitMeshByPolygroups: Target Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  ::operator_delete(local_res8[0],0x18);
  return;
}

// operator() @ 14cdb73d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  FSizedDisjointSet *local_68;
  FDynamicMesh3 *local_60;
  code *local_58;
  FSizedDisjointSet **local_50;
  FSizedDisjointSet local_48;
  
  uVar11 = 0;
  iVar6 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  local_48.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Parents.ArrayNum = 0;
  local_48.Parents.ArrayMax = 0;
  local_48.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Sizes.ArrayNum = 0;
  local_48.Sizes.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48.Parents,iVar6,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_48.Sizes,iVar6,Default);
  uVar7 = uVar11;
  uVar10 = uVar11;
  if (0 < iVar6) {
    do {
      uVar8 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar8 < local_48.Parents.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)(local_48.Parents.AllocatorInstance.Data + uVar7 * 4) = uVar8;
      uVar5 = 0;
      if ((int)uVar8 < local_48.Sizes.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(local_48.Sizes.AllocatorInstance.Data + uVar7 * 4) = 1;
      uVar7 = uVar7 + 1;
      uVar10 = (ulonglong)(uVar8 + 1);
    } while ((longlong)uVar7 < (longlong)iVar6);
  }
  uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
  uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < (int)(uVar5 * 0x200 + uVar8)) {
    do {
      uVar9 = (uint)uVar11;
      if ((-1 < (int)uVar9) && ((int)uVar9 < (int)(uVar5 * 0x200 + uVar8))) {
        uVar7 = (ulonglong)(uVar9 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (uVar11 >> 9) * 8) + uVar7 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)
                   ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8);
          uVar1 = *(undefined8 *)(lVar2 + uVar7 * 0xc);
          iVar6 = *(int *)(lVar2 + 8 + uVar7 * 0xc);
          iVar12 = (int)((ulonglong)uVar1 >> 0x20);
          UE::Geometry::FSizedDisjointSet::Union(&local_48,(int)uVar1,iVar12);
          UE::Geometry::FSizedDisjointSet::Union(&local_48,iVar12,iVar6);
        }
      }
      uVar5 = (param_1->TriangleRefCounts).RefCounts.CurBlock;
      uVar11 = (ulonglong)(uVar9 + 1);
      uVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)(uVar9 + 1) < (int)(uVar5 * 0x200 + uVar8));
  }
  UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
            ((FVertexConnectedComponents *)&local_48,param_1,*(double *)((longlong)this + 8),2);
  local_68 = &local_48;
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
             ::Call;
  local_60 = param_1;
  UE::Geometry::FDynamicMeshEditor::SplitMesh
            (param_1,*(TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **)this,
             (TFunctionRef<int___cdecl(int)> *)&local_58,-1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  if (local_48.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Sizes.AllocatorInstance.Data);
  }
  if (local_48.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Parents.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdba430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh'::__l2::<lambda_2>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_3b0;
  FDynamicMeshEditResult local_398;
  FDynamicMeshEditor local_328;
  TArrayView<int_const_,int> local_320;
  undefined1 local_308 [488];
  int local_120;
  bool local_117;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3b0.ArrayNum = 0;
  local_3b0.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)this,param_1,&local_3b0,Triangle);
  plVar1 = (longlong *)((longlong)this + 0x10);
  if (**(char **)((longlong)this + 8) == '\0') {
    UE::Geometry::FDynamicMesh3::Clear((FDynamicMesh3 *)*plVar1);
    UE::Geometry::FDynamicMesh3::EnableMatchingAttributes
              ((FDynamicMesh3 *)*plVar1,param_1,false,false);
  }
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_308);
  local_328.Mesh = (FDynamicMesh3 *)*plVar1;
  local_320.ArrayNum = local_3b0.ArrayNum;
  local_398.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewVertices.ArrayNum = 0;
  local_398.NewVertices.ArrayMax = 0;
  local_398.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewTriangles.ArrayNum = 0;
  local_398.NewTriangles.ArrayMax = 0;
  local_398.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewQuads.ArrayNum = 0;
  local_398.NewQuads.ArrayMax = 0;
  local_398.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewPolygons.ArrayNum = 0;
  local_398.NewPolygons.ArrayMax = 0;
  local_398.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewGroups.ArrayNum = 0;
  local_398.NewGroups.ArrayMax = 0;
  local_398.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewNormalOverlayElements.ArrayNum = 0;
  local_398.NewNormalOverlayElements.ArrayMax = 0;
  local_398.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.NewColorOverlayElements.ArrayNum = 0;
  local_398.NewColorOverlayElements.ArrayMax = 0;
  bVar10 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  local_320.DataPtr = (int *)local_3b0.AllocatorInstance.Data;
  if ((local_3b0.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UE::Geometry::FDynamicMeshEditor::AppendTriangles
            (&local_328,param_1,&local_320,(FMeshIndexMappings *)local_308,&local_398,bVar10);
  if (**(char **)((longlong)this + 0x18) != '\0') {
    iVar8 = local_398.NewTriangles.ArrayNum;
    pFVar2 = local_398.NewTriangles.AllocatorInstance.Data +
             (longlong)local_398.NewTriangles.ArrayNum * 4;
    FVar15.Data = local_398.NewTriangles.AllocatorInstance.Data;
    while( true ) {
      if (local_398.NewTriangles.ArrayNum != iVar8) {
        local_3b8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3b8);
      }
      if (FVar15.Data == pFVar2) break;
      lVar6 = *plVar1;
      uVar4 = *(uint *)FVar15.Data;
      if (*(char *)(lVar6 + 0x1a8) == '\0') {
        uVar16 = 0xffffffff;
      }
      else {
        if ((-1 < (int)uVar4) &&
           ((int)uVar4 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
          lVar3 = (ulonglong)(uVar4 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x148) + lVar3) +
                                 (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar16 = *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x198) + lVar3) +
                              (ulonglong)(uVar4 & 0x1ff) * 4);
            goto LAB_14cdba623;
          }
        }
        uVar16 = 0;
      }
LAB_14cdba623:
      if ((local_117 == false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantReverse",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0xa3,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_308._424_4_ != local_308._468_4_) {
        puVar13 = (undefined1 *)((longlong)&((FMeshIndexMappings *)local_308)->GroupMap + 0x88);
        if ((undefined1 *)local_308._480_8_ != (undefined1 *)0x0) {
          puVar13 = (undefined1 *)local_308._480_8_;
        }
        uVar5 = *(uint *)(puVar13 + (ulonglong)(local_120 - 1U & uVar16) * 4);
        while (uVar5 != 0xffffffff) {
          puVar14 = (uint *)((longlong)(int)uVar5 * 0x10 + local_308._416_8_);
          if (*puVar14 == uVar16) {
            puVar11 = puVar14 + 1;
            if (puVar14 == (uint *)0x0) {
              puVar11 = (uint *)0x0;
            }
            if (puVar11 != (uint *)0x0) {
              uVar16 = *puVar11;
              goto LAB_14cdba6b0;
            }
            break;
          }
          uVar5 = puVar14[2];
        }
      }
      uVar16 = 0xffffffff;
LAB_14cdba6b0:
      lVar6 = *plVar1;
      if (*(char *)(lVar6 + 0x1a8) != '\0') {
        *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x198) + (ulonglong)(uVar4 >> 9) * 8) +
                 (ulonglong)(uVar4 & 0x1ff) * 4) = uVar16;
        iVar12 = uVar16 + 1;
        if ((int)(uVar16 + 1) < *(int *)(lVar6 + 0x1b0)) {
          iVar12 = *(int *)(lVar6 + 0x1b0);
        }
        *(int *)(lVar6 + 0x1b0) = iVar12;
      }
      FVar15.Data = FVar15.Data + 4;
    }
  }
  if (local_398.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_398.NewNormalOverlayElements.AllocatorInstance.Data,
             local_398.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_398.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_398.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_398.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_398.NewPolygons.AllocatorInstance.Data
             ,local_398.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_398.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_398.NewPolygons.AllocatorInstance.Data);
  }
  if (local_398.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.NewQuads.AllocatorInstance.Data);
  }
  if (local_398.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.NewTriangles.AllocatorInstance.Data);
  }
  if (local_398.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.NewVertices.AllocatorInstance.Data);
  }
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_308);
  if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.AllocatorInstance.Data);
  }
  return;
}

// CopyMeshSelectionToMesh @ 14cdd0e90

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,FGeometryScriptMeshSelection *param_3,
          UDynamicMesh **param_4,bool param_5,bool param_6,UGeometryScriptDebug *param_7)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  FDynamicMesh3 *local_res8;
  code *local_2b8;
  FDynamicMesh3 **local_2b0;
  code *local_2a8;
  FGeometryScriptMeshSelection **local_2a0;
  FGeometryScriptMeshSelection *local_298;
  bool *local_290;
  FDynamicMesh3 *local_288;
  bool *local_280;
  FText local_278;
  FText local_268;
  FText local_258;
  FDynamicMesh3 local_248;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_278,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshSelectionToMesh_InvalidInput",
                        L"CopyMeshSelectionToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar4);
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if (param_2 == (UDynamicMesh *)0x0) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_268,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                          L"CopyMeshSelectionToMesh_InvalidInput2",
                          L"CopyMeshSelectionToMesh: StoreToSubmesh is Null");
      UE::Geometry::AppendError(param_7,InvalidInputs,pFVar4);
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((param_3->GeoSelection).Object == (FGeometrySelection *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UDynamicMesh *)(*pcVar2)();
          return pUVar5;
        }
      }
      pFVar1 = (param_3->GeoSelection).Object;
      if (*(int *)&(pFVar1->Selection).Elements.field_0x8 ==
          *(int *)&(pFVar1->Selection).Elements.field_0x34) {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_258,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                            L"CopyMeshSelectionToMesh_InvalidList",
                            L"CopyMeshSelectionToMesh: Selection is empty");
        UE::Geometry::AppendError(param_7,InvalidInputs,pFVar4);
        if (local_258.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
        }
      }
      else {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248);
        if (param_5 != false) {
          local_res8 = &local_248;
          local_2b0 = &local_res8;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh'::__l14::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                      ::Call;
          UDynamicMesh::ProcessMesh
                    (param_2,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                             &local_2b8);
        }
        local_290 = &param_5;
        local_288 = &local_248;
        local_280 = &param_6;
        local_2a0 = &local_298;
        local_2a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                    ::Call;
        local_298 = param_3;
        UDynamicMesh::ProcessMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_2a8);
        UDynamicMesh::SetMesh(param_2,&local_248);
        *param_4 = param_2;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// CopyMeshToMesh @ 14cdd10b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,UDynamicMesh **param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FDynamicMesh3 *local_res8;
  undefined1 local_248 [16];
  FDynamicMesh3 local_238;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_248,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshToMesh_InvalidFirstInput",L"CopyMeshToMesh: CopyFromMesh is Null")
    ;
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_248._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_248._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_248,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshToMesh_InvalidSecondInput",L"CopyMeshToMesh: CopyToMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_248._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_248._0_8_ + 0x10))();
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
    local_res8 = &local_238;
    local_248._8_8_ = &local_res8;
    local_248._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_248)
    ;
    UDynamicMesh::SetMesh(param_2,&local_238);
    *param_3 = param_2;
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cdd8920

UClass * __cdecl UGeometryScriptLibrary_MeshDecompositionFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshDecompositionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.
                InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshDecompositionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshDecompositionFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions.InnerSingleton
  ;
}

// GetSubMeshFromMesh @ 14cdda8f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh
          (UDynamicMesh *param_1,UDynamicMesh *param_2,FGeometryScriptIndexList *param_3,
          UDynamicMesh **param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 local_258 [16];
  FDynamicMesh3 *local_248;
  FGeometryScriptIndexList *local_240;
  FDynamicMesh3 local_238;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_258,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"GetSubMeshFromMesh_InvalidInput",L"GetSubMeshFromMesh: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pwVar4 = L"GetSubMeshFromMesh: Submesh is Null";
    pwVar3 = L"GetSubMeshFromMesh_InvalidInput2";
  }
  else if (((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) ||
          (pTVar2 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->
                              (&param_3->List), pTVar2->ArrayNum == 0)) {
    pwVar4 = L"GetSubMeshFromMesh: TriangleList is empty";
    pwVar3 = L"GetSubMeshFromMesh_InvalidList";
  }
  else {
    if ((param_3->IndexType == Triangle) || (param_3->IndexType == Any)) {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
      local_248 = &local_238;
      local_258._8_8_ = &local_248;
      local_258._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_240 = param_3;
      UDynamicMesh::ProcessMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         local_258);
      UDynamicMesh::SetMesh(param_2,&local_238);
      *param_4 = param_2;
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
      goto LAB_14cddaa4c;
    }
    pwVar4 = L"GetSubMeshFromMesh: TriangleList has incompatible index type";
    pwVar3 = L"GetSubMeshFromMesh_InvalidList2";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_258,L"UGeometryScriptLibrary_MeshDecompositionFunctions",pwVar3
                      ,pwVar4);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
  if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
  }
LAB_14cddaa4c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SortMeshesByArea @ 14cde6970

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByArea
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          EArraySortOrder param_3)

{
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByArea'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_18,param_1,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (param_1,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SortMeshesByBoundsVolume @ 14cde69f0

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByBoundsVolume
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          EArraySortOrder param_3)

{
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByBoundsVolume'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_18,param_1,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (param_1,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SortMeshesByCustomValues @ 14cde6a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByCustomValues
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,bool param_3,EArraySortOrder param_4)

{
  ITextData *pIVar1;
  FText *this;
  undefined1 local_res8 [32];
  FText local_18;
  
  if (param_1->ArrayNum == param_2->ArrayNum) {
    UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
              (param_1,param_2,param_3,param_4);
    return;
  }
  this = FText::AsLocalizable_Advanced_LocText
                   (&local_18,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                    L"SortMeshesByCustomValues_InvalidInput",
                    L"SortMeshesByCustomValues: Meshes and Values array must have same number of elements"
                   );
  if (1 < (byte)LogGeometry._0_1_) {
    FText::ToString(this);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  pIVar1 = (this->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// SortMeshesByVolume @ 14cde6b30

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByVolume
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          EArraySortOrder param_3)

{
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByVolume'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_18,param_1,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (param_1,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SplitMeshByComponents @ 14cde6bb0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents
          (UDynamicMesh *param_1,TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_2,
          UDynamicMeshPool *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_28;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"SplitMeshByComponents_InvalidInput",
                        L"SplitMeshByComponents: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_res8 = &local_28;
    local_18._8_8_ = &local_res8;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
    BuildNewDynamicMeshes(param_1,param_3,&local_28,param_2);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FDynamicMesh3 *)local_28.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// SplitMeshByMaterialIDs @ 14cde6ca0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs
          (UDynamicMesh *param_1,TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,UDynamicMeshPool *param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_38;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_30;
  code *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> **local_20;
  FText local_18;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"SplitMeshByComponents_InvalidInput",
                        L"SplitMeshByComponents: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_30 = &local_48;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20 = &local_38;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_38 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_28)
    ;
    BuildNewDynamicMeshes(param_1,param_4,&local_48,param_2);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FDynamicMesh3 *)local_48.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// SplitMeshByPolygroups @ 14cde6e00

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,
          TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,UDynamicMeshPool *param_5,
          UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_58;
  code *local_48;
  undefined8 **local_40;
  FText local_38;
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  param_3->ArrayNum = 0;
  local_res10 = param_2;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"SplitMeshByPolygroups_InvalidInput",
                        L"SplitMeshByPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_28 = &local_res10;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20 = &param_6;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    local_18 = &local_58;
    local_40 = &local_28;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_10 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    BuildNewDynamicMeshes(param_1,param_5,&local_58,param_3);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if ((FDynamicMesh3 *)local_58.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return param_1;
}

// SplitMeshByVertexOverlap @ 14cde6f80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap
          (UDynamicMesh *param_1,TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *param_2,
          UDynamicMeshPool *param_3,double param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_28;
  double local_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"SplitMeshByVertexOverlap_InvalidInput",
                        L"SplitMeshByVertexOverlap: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_4 <= __real_3f1a36e2eb1c432d) {
    param_4 = __real_3f1a36e2eb1c432d;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28 = &local_38;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_20 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  BuildNewDynamicMeshes(param_1,param_3,&local_38,param_2);
  DestructItems<UE::Geometry::FDynamicMesh3,int>
            ((FDynamicMesh3 *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FDynamicMesh3 *)local_38.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions @ 14cde72a0

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshDecompositionFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshDecompositionFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyMeshSelectionToMesh @ 14cdfcc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshSelectionToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UGeometryScriptDebug *pUVar5;
  int iVar6;
  FText *pFVar7;
  uchar *puVar8;
  UDynamicMesh *this_00;
  uchar *puVar9;
  bool bVar10;
  bool bVar11;
  char local_res10 [8];
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  int local_378;
  int local_374;
  undefined2 local_370;
  ITextData *local_368;
  uint local_360;
  undefined2 local_358;
  ITextData *local_350;
  uint local_348;
  uchar local_340 [8];
  undefined8 local_338;
  UGeometryScriptDebug *local_330;
  UDynamicMesh *local_328 [2];
  FGeometrySelection *local_318;
  TReferenceControllerBase<1> *pTStack_310;
  FGeometryScriptMeshSelection local_308;
  undefined1 local_2f8 [4];
  undefined1 local_2f4 [4];
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  FDynamicMesh3 *local_2e8;
  code *local_2e0;
  FDynamicMesh3 **local_2d8;
  code *local_2d0;
  FGeometrySelection ***local_2c8;
  FGeometrySelection **local_2c0;
  char *local_2b8;
  FDynamicMesh3 *local_2b0;
  undefined1 *local_2a8;
  FText local_2a0;
  FText local_290;
  FText local_280;
  FDynamicMesh3 local_268;
  
  local_328[0] = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_328,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_328);
  }
  local_340[0] = '\0';
  local_340[1] = '\0';
  local_340[2] = '\0';
  local_340[3] = '\0';
  local_340[4] = '\0';
  local_340[5] = '\0';
  local_340[6] = '\0';
  local_340[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_340,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_340);
  }
  puVar8 = local_340;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_308);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_308,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_308);
  }
  local_338 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_338,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_338);
  }
  local_378 = 0;
  puVar9 = (uchar *)&local_338;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_378,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_378);
  }
  bVar10 = local_378 != 0;
  local_374 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_374,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_374);
  }
  bVar11 = local_374 != 0;
  local_330 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_330,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_330);
  }
  this_00 = local_328[0];
  pUVar5 = local_330;
  local_318 = local_308.GeoSelection.Object;
  pTStack_310 = local_308.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_308.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_308.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_308.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  this = *(UDynamicMesh **)puVar8;
  local_res10[0] = bVar10;
  local_res20[0] = bVar11;
  if (local_328[0] == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_2a0,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshSelectionToMesh_InvalidInput",
                        L"CopyMeshSelectionToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_368 = (pFVar7->TextData).Reference;
    local_370 = 0x200;
    if (local_368 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368 + 8))(local_368,local_2f8);
    }
    local_360 = pFVar7->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_370) &&
          ((FScriptContainerElement *)&local_370 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      *pFVar3 = local_370._0_1_;
      pFVar3[1] = local_370._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_368;
      if (local_368 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_368 + 8))(local_368,local_2f4);
      }
      *(uint *)(pFVar3 + 0x10) = local_360;
    }
    if (local_368 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_2a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
    }
  }
  else if (this == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_290,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshSelectionToMesh_InvalidInput2",
                        L"CopyMeshSelectionToMesh: StoreToSubmesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_350 = (pFVar7->TextData).Reference;
    local_358 = 0x200;
    if (local_350 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350 + 8))(local_350,local_2f0);
    }
    local_348 = pFVar7->Flags;
    if (pUVar5 != (UGeometryScriptDebug *)0x0) {
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_358) &&
          ((FScriptContainerElement *)&local_358 <
           pFVar3 + (longlong)(pUVar5->Messages).ArrayMax * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (pUVar5->Messages).ArrayNum;
      piVar1 = &(pUVar5->Messages).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar5->Messages).AllocatorInstance,piVar1);
      }
      (pUVar5->Messages).ArrayNum = iVar6 + 1;
      pFVar3 = (pUVar5->Messages).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      *pFVar3 = local_358._0_1_;
      pFVar3[1] = local_358._1_1_;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(ITextData **)(pFVar3 + 8) = local_350;
      if (local_350 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_350 + 8))(local_350,local_2ec);
      }
      *(uint *)(pFVar3 + 0x10) = local_348;
    }
    if (local_350 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350 + 0x10))();
    }
    if (local_290.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((local_308.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(local_318->Selection).Elements.field_0x8 ==
        *(int *)&(local_318->Selection).Elements.field_0x34) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_280,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                          L"CopyMeshSelectionToMesh_InvalidList",
                          L"CopyMeshSelectionToMesh: Selection is empty");
      UE::Geometry::AppendError(pUVar5,InvalidInputs,pFVar7);
      if (local_280.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
      }
    }
    else {
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
      if (local_res10[0] != '\0') {
        local_2e8 = &local_268;
        local_2d8 = &local_2e8;
        local_2e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh'::__l14::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                    ::Call;
        UDynamicMesh::ProcessMesh
                  (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                        &local_2e0);
      }
      local_2c0 = &local_318;
      local_2b8 = local_res10;
      local_2b0 = &local_268;
      local_2a8 = local_res20;
      local_2c8 = &local_2c0;
      local_2d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_const_&>
                  ::Call;
      UDynamicMesh::ProcessMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                         &local_2d0);
      UDynamicMesh::SetMesh(this,&local_268);
      *(UDynamicMesh **)puVar9 = this;
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_310);
  *local_res18 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execCopyMeshToMesh @ 14cdfd360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execCopyMeshToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UDynamicMesh *this;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  uchar *puVar8;
  UDynamicMesh *this_00;
  uchar *puVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_2f8;
  ITextData *local_2f0;
  uint local_2e8;
  undefined2 local_2e0;
  ITextData *local_2d8;
  uint local_2d0;
  uchar local_2c8 [8];
  undefined8 local_2c0;
  longlong local_2b8;
  UDynamicMesh *local_2b0;
  undefined1 local_2a8 [8];
  FDynamicMesh3 *local_2a0;
  code *local_298;
  FDynamicMesh3 **local_290;
  FText local_288;
  FText local_278;
  FDynamicMesh3 local_268;
  
  local_2b0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  local_2c8[0] = '\0';
  local_2c8[1] = '\0';
  local_2c8[2] = '\0';
  local_2c8[3] = '\0';
  local_2c8[4] = '\0';
  local_2c8[5] = '\0';
  local_2c8[6] = '\0';
  local_2c8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c8);
  }
  puVar9 = param_2->MostRecentPropertyAddress;
  local_2c0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_2c8;
  if (puVar9 != (uchar *)0x0) {
    puVar8 = puVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c0);
  }
  local_2b8 = 0;
  puVar9 = (uchar *)&local_2c0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  this_00 = local_2b0;
  lVar4 = local_2b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UDynamicMesh **)puVar8;
  if (local_2b0 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_288,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshToMesh_InvalidFirstInput",L"CopyMeshToMesh: CopyFromMesh is Null")
    ;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_2f0 = (pFVar7->TextData).Reference;
    local_2f8 = 0x200;
    if (local_2f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0 + 8))(local_2f0,local_res10);
    }
    local_2e8 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_2f8) &&
          (&local_2f8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_2f8;
      puVar1[1] = local_2f8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_2f0;
      if (local_2f0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2f0 + 8))(local_2f0,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_2e8;
    }
    if (local_2f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
  }
  else if (this == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_278,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"CopyMeshToMesh_InvalidSecondInput",L"CopyMeshToMesh: CopyToMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_2d8 = (pFVar7->TextData).Reference;
    local_2e0 = 0x200;
    if (local_2d8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8 + 8))(local_2d8,local_res20);
    }
    local_2d0 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_2e0) &&
          (&local_2e0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_2e0;
      puVar1[1] = local_2e0._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_2d8;
      if (local_2d8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2d8 + 8))(local_2d8,local_2a8);
      }
      *(uint *)(puVar1 + 0x10) = local_2d0;
    }
    if (local_2d8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8 + 0x10))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    local_2a0 = &local_268;
    local_290 = &local_2a0;
    local_298 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_298
              );
    UDynamicMesh::SetMesh(this,&local_268);
    *(UDynamicMesh **)puVar9 = this;
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar9);
  }
  return;
}

// execGetSubMeshFromMesh @ 14ce08310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execGetSubMeshFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  UDynamicMesh *this;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UGeometryScriptDebug *pUVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  UDynamicMesh *this_00;
  uchar *puVar10;
  uchar *puVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_378;
  ITextData *local_370;
  uint local_368;
  undefined2 local_360;
  ITextData *local_358;
  uint local_350;
  undefined2 local_348;
  ITextData *local_340;
  uint local_338;
  uchar local_330 [8];
  undefined8 local_328;
  UGeometryScriptDebug *local_320;
  UDynamicMesh *local_318;
  byte local_310 [8];
  longlong local_308;
  TReferenceControllerBase<1> *pTStack_300;
  byte local_2f8 [8];
  longlong local_2f0;
  TReferenceControllerBase<1> *local_2e8;
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  undefined1 local_2d8 [8];
  FDynamicMesh3 *local_2d0;
  byte *local_2c8;
  code *local_2c0;
  FDynamicMesh3 **local_2b8;
  FText local_2b0;
  FText local_2a0;
  FText local_290;
  FText local_280;
  FDynamicMesh3 local_268;
  
  local_318 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_318,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_318);
  }
  local_330[0] = '\0';
  local_330[1] = '\0';
  local_330[2] = '\0';
  local_330[3] = '\0';
  local_330[4] = '\0';
  local_330[5] = '\0';
  local_330[6] = '\0';
  local_330[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_330,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_330);
  }
  local_310[0] = 0;
  puVar11 = local_330;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  local_308 = 0;
  pTStack_300 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_310,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_310);
  }
  local_328 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_328,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_328);
  }
  local_320 = (UGeometryScriptDebug *)0x0;
  puVar10 = (uchar *)&local_328;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_320,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_320);
  }
  this_00 = local_318;
  pUVar6 = local_320;
  local_2f8[0] = local_310[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2f0 = local_308;
  local_2e8 = pTStack_300;
  if (pTStack_300 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_300->SharedReferenceCount = (atomic<int>)((int)pTStack_300->SharedReferenceCount + 1);
    UNLOCK();
  }
  this = *(UDynamicMesh **)puVar11;
  if (local_318 == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_2b0,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                        L"GetSubMeshFromMesh_InvalidInput",L"GetSubMeshFromMesh: TargetMesh is Null"
                       );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_370 = (pFVar9->TextData).Reference;
    local_378 = 0x200;
    if (local_370 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_370 + 8))(local_370,local_res10);
    }
    local_368 = pFVar9->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_378) &&
          ((FScriptContainerElement *)&local_378 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      (pUVar6->Messages).ArrayNum = iVar8 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
      *pFVar4 = local_378._0_1_;
      pFVar4[1] = local_378._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_370;
      if (local_370 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_370 + 8))(local_370,local_res18);
      }
      *(uint *)(pFVar4 + 0x10) = local_368;
    }
    if (local_370 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_370 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_2b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
    }
  }
  else {
    if (this == (UDynamicMesh *)0x0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_2a0,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                          L"GetSubMeshFromMesh_InvalidInput2",L"GetSubMeshFromMesh: Submesh is Null"
                         );
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_358 = (pFVar9->TextData).Reference;
      local_360 = 0x200;
      if (local_358 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358 + 8))(local_358,local_res20);
      }
      local_350 = pFVar9->Flags;
      if (pUVar6 != (UGeometryScriptDebug *)0x0) {
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_360) &&
            ((FScriptContainerElement *)&local_360 <
             pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pUVar6->Messages).ArrayNum;
        piVar1 = &(pUVar6->Messages).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
        }
        (pUVar6->Messages).ArrayNum = iVar8 + 1;
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
        *pFVar4 = local_360._0_1_;
        pFVar4[1] = local_360._1_1_;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(ITextData **)(pFVar4 + 8) = local_358;
        if (local_358 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_358 + 8))(local_358,local_2e0);
        }
        *(uint *)(pFVar4 + 0x10) = local_350;
      }
      local_290.TextData.Reference = local_2a0.TextData.Reference;
      if (local_358 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_358 + 0x10))();
        local_290.TextData.Reference = local_2a0.TextData.Reference;
      }
    }
    else if ((local_308 == 0) || (*(int *)(local_308 + 8) == 0)) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_280,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                          L"GetSubMeshFromMesh_InvalidList",
                          L"GetSubMeshFromMesh: TriangleList is empty");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_340 = (pFVar9->TextData).Reference;
      local_348 = 0x200;
      if (local_340 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_340 + 8))(local_340,local_2dc);
      }
      local_338 = pFVar9->Flags;
      if (pUVar6 != (UGeometryScriptDebug *)0x0) {
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_348) &&
            ((FScriptContainerElement *)&local_348 <
             pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (pUVar6->Messages).ArrayNum;
        piVar1 = &(pUVar6->Messages).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
        }
        (pUVar6->Messages).ArrayNum = iVar8 + 1;
        pFVar4 = (pUVar6->Messages).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
        *pFVar4 = local_348._0_1_;
        pFVar4[1] = local_348._1_1_;
        *(undefined8 *)(pFVar4 + 8) = 0;
        *(ITextData **)(pFVar4 + 8) = local_340;
        if (local_340 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_340 + 8))(local_340,local_2d8);
        }
        *(uint *)(pFVar4 + 0x10) = local_338;
      }
      local_290.TextData.Reference = local_280.TextData.Reference;
      if (local_340 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_340 + 0x10))();
        local_290.TextData.Reference = local_280.TextData.Reference;
      }
    }
    else {
      if (local_310[0] < 2) {
        UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
        local_2d0 = &local_268;
        local_2c8 = local_2f8;
        local_2b8 = &local_2d0;
        local_2c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                    ::Call;
        UDynamicMesh::ProcessMesh
                  (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)
                           &local_2c0);
        UDynamicMesh::SetMesh(this,&local_268);
        *(UDynamicMesh **)puVar10 = this;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
        goto LAB_14ce089d3;
      }
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_290,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                          L"GetSubMeshFromMesh_InvalidList2",
                          L"GetSubMeshFromMesh: TriangleList has incompatible index type");
      UE::Geometry::AppendError(pUVar6,InvalidInputs,pFVar9);
    }
    if (local_290.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    }
  }
LAB_14ce089d3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e8);
  *(UDynamicMesh **)param_3 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)puVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)puVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_300);
  return;
}

// execSortMeshesByArea @ 14ce14b90

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSortMeshesByArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EArraySortOrder EVar2;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  EArraySortOrder local_res10 [16];
  undefined1 local_res20 [8];
  int local_58 [2];
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_50;
  code *local_40;
  undefined1 *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0] = 0;
  pTVar3 = &local_50;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  bVar4 = local_58[0] != 0;
  local_res10[0] = Ascending;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  local_38 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByArea'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_30,pTVar3,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (pTVar3,&local_30,bVar4,EVar2);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execSortMeshesByBoundsVolume @ 14ce14d20

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSortMeshesByBoundsVolume
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EArraySortOrder EVar2;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  EArraySortOrder local_res10 [16];
  undefined1 local_res20 [8];
  int local_58 [2];
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_50;
  code *local_40;
  undefined1 *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0] = 0;
  pTVar3 = &local_50;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  bVar4 = local_58[0] != 0;
  local_res10[0] = Ascending;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  local_38 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByBoundsVolume'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_30,pTVar3,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (pTVar3,&local_30,bVar4,EVar2);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execSortMeshesByCustomValues @ 14ce14eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSortMeshesByCustomValues
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  ITextData *pIVar3;
  FText *this;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  EArraySortOrder local_res10 [16];
  int local_res20 [2];
  undefined1 local_78 [8];
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_60;
  FText local_50;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  pTVar4 = &local_60;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20[0] = 0;
  pTVar5 = &local_70;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_res10[0] = Ascending;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTVar4->ArrayNum == pTVar5->ArrayNum) {
    UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
              (pTVar4,pTVar5,bVar6,local_res10[0]);
  }
  else {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                      L"SortMeshesByCustomValues_InvalidInput",
                      L"SortMeshesByCustomValues: Meshes and Values array must have same number of elements"
                     );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    pIVar3 = (this->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_78);
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

// execSortMeshesByVolume @ 14ce150d0

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSortMeshesByVolume
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EArraySortOrder EVar2;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  EArraySortOrder local_res10 [16];
  undefined1 local_res20 [8];
  int local_58 [2];
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_50;
  code *local_40;
  undefined1 *local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58[0] = 0;
  pTVar3 = &local_50;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  bVar4 = local_58[0] != 0;
  local_res10[0] = Ascending;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  local_38 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByVolume'::__l2::<lambda_1>,float,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  UE::MeshDecompositionFunctionsLocals::ValuePerMeshArrayHelper<float>
            (&local_30,pTVar3,
             (TFunctionRef<float___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_40,0.0);
  UE::MeshDecompositionFunctionsLocals::SortByValuesArrayHelper<UDynamicMesh_*,float>
            (pTVar3,&local_30,bVar4,EVar2);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execSplitMeshByComponents @ 14ce15260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMeshPool *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  UDynamicMesh *pUVar8;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_a8;
  ITextData *local_a0;
  uint local_98;
  UDynamicMeshPool *local_90;
  UDynamicMesh *local_88;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_80;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_60;
  code *local_58;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **local_50;
  FText local_48;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_90 = (UDynamicMeshPool *)0x0;
  pTVar9 = &local_70;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar8 = local_88;
  pUVar5 = local_90;
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                      L"SplitMeshByComponents_InvalidInput",
                      L"SplitMeshByComponents: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_a0 = (this->TextData).Reference;
    local_a8 = 0x200;
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 8))(local_a0,local_res10);
    }
    local_98 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_a8) &&
          (&local_a8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_a8;
      puVar1[1] = local_a8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_a0;
      if (local_a0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0 + 8))(local_a0,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_98;
    }
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 0x10))();
    }
    pUVar8 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_60 = &local_80;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50 = &local_60;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58
              );
    BuildNewDynamicMeshes(pUVar8,pUVar5,&local_80,pTVar9);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
    if ((FDynamicMesh3 *)local_80.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar8;
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// execSplitMeshByMaterialIDs @ 14ce155b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByMaterialIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMeshPool *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  ForAnyElementType *pFVar8;
  UDynamicMesh *this_00;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_c8;
  ITextData *local_c0;
  uint local_b8;
  UDynamicMeshPool *local_b0;
  UDynamicMesh *local_a8;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_a0;
  ForAnyElementType local_90;
  undefined8 local_88;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_80;
  ForAnyElementType *local_70;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_68;
  code *local_60;
  ForAnyElementType **local_58;
  FText local_50;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  pTVar9 = &local_80;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_b0 = (UDynamicMeshPool *)0x0;
  pFVar8 = &local_90;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar8 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this_00 = local_a8;
  pUVar5 = local_b0;
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar9->ArrayNum = 0;
  if (pTVar9->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
  }
  iVar7 = *(int *)((longlong)&pFVar8[1].Data + 4);
  *(undefined4 *)&pFVar8[1].Data = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
  }
  if (this_00 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_50,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                      L"SplitMeshByComponents_InvalidInput",
                      L"SplitMeshByComponents: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c0 = (this->TextData).Reference;
    local_c8 = 0x200;
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res10);
    }
    local_b8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_c8) &&
          (&local_c8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_c8;
      puVar1[1] = local_c8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_c0;
      if (local_c0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_b8;
    }
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68 = &local_a0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58 = &local_70;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = pFVar8;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60)
    ;
    BuildNewDynamicMeshes(this_00,pUVar5,&local_a0,pTVar9);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
    if ((FDynamicMesh3 *)local_a0.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  *(UDynamicMesh **)param_3 = this_00;
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// execSplitMeshByPolygroups @ 14ce159c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByPolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMeshPool *pUVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  ForAnyElementType *pFVar8;
  UDynamicMesh *this_00;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  longlong local_d0;
  UDynamicMeshPool *local_c8;
  UDynamicMesh *local_c0;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_b8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_98;
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 **local_70;
  undefined8 *local_68;
  longlong *local_60;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_58;
  ForAnyElementType *local_50;
  FText local_48;
  
  local_c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res20 = CONCAT31(local_res20._1_3_,1);
  uStackX_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  pTVar9 = &local_98;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_c8 = (UDynamicMeshPool *)0x0;
  pFVar8 = &local_a8;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar8 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  this_00 = local_c0;
  pUVar4 = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_d0;
  local_80 = CONCAT44(uStackX_24,local_res20);
  pTVar9->ArrayNum = 0;
  if (pTVar9->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
  }
  iVar7 = *(int *)((longlong)&pFVar8[1].Data + 4);
  *(undefined4 *)&pFVar8[1].Data = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar8,0,(int *)((longlong)&pFVar8[1].Data + 4));
  }
  if (this_00 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                      L"SplitMeshByPolygroups_InvalidInput",
                      L"SplitMeshByPolygroups: TargetMesh is Null");
    lVar5 = local_88;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_e0 = (this->TextData).Reference;
    local_e8 = 0x200;
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res10);
    }
    local_d8 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_e8) &&
          (&local_e8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_e8;
      puVar1[1] = local_e8._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_e0;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_d8;
    }
    if (local_e0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68 = &local_80;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60 = &local_88;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_58 = &local_b8;
    local_70 = &local_68;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_50 = pFVar8;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_78)
    ;
    BuildNewDynamicMeshes(this_00,pUVar4,&local_b8,pTVar9);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FDynamicMesh3 *)local_b8.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  *(UDynamicMesh **)param_3 = this_00;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execSplitMeshByVertexOverlap @ 14ce15e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDecompositionFunctions::execSplitMeshByVertexOverlap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMeshPool *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  UDynamicMesh *pUVar9;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_b8;
  ITextData *local_b0;
  uint local_a8;
  UDynamicMeshPool *local_a0;
  UDynamicMesh *local_98;
  double local_90;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_88;
  TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> *local_68;
  double local_60;
  code *local_58;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> **local_50;
  FText local_48;
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_a0 = (UDynamicMeshPool *)0x0;
  pTVar10 = &local_78;
  if ((TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_90 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar9 = local_98;
  pUVar5 = local_a0;
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_MeshDecompositionFunctions",
                      L"SplitMeshByVertexOverlap_InvalidInput",
                      L"SplitMeshByVertexOverlap: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b0 = (this->TextData).Reference;
    local_b8 = 0x200;
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 8))(local_b0,local_res10);
    }
    local_a8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_b8) &&
          (&local_b8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_b8._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_b8._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_b0;
      if (local_b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0 + 8))(local_b0,local_res18);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_a8;
    }
    if (local_b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0 + 0x10))();
    }
    pUVar9 = (UDynamicMesh *)0x0;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_68 = &local_88;
    local_60 = local_90;
    if (local_90 <= __real_3f1a36e2eb1c432d) {
      local_60 = __real_3f1a36e2eb1c432d;
    }
    local_50 = &local_68;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_98,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58
              );
    BuildNewDynamicMeshes(pUVar9,pUVar5,&local_88,pTVar10);
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    if ((FDynamicMesh3 *)local_88.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  *(UDynamicMesh **)param_3 = pUVar9;
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

