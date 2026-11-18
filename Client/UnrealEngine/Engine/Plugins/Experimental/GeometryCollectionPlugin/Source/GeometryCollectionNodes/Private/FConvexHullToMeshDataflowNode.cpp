// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d4700

UScriptStruct * __cdecl FConvexHullToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode,(UObject *)pUVar1,
                         L"ConvexHullToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8d4800

FName __thiscall FConvexHullToMeshDataflowNode::GetType(FConvexHullToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvexHullToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d48d0

bool __thiscall
FConvexHullToMeshDataflowNode::IsA(FConvexHullToMeshDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FConvexHullToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d4938;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d4938:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d4956;
      }
    }
  }
  bVar5 = true;
LAB_14e8d4956:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d4990

FStructOnScope * __thiscall
FConvexHullToMeshDataflowNode::NewStructOnScope(FConvexHullToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode,(UObject *)pUVar2
                           ,L"ConvexHullToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d4a20

void __thiscall
FConvexHullToMeshDataflowNode::SerializeInternal
          (FConvexHullToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode,(UObject *)pUVar1,
                         L"ConvexHullToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d4a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d4ab0

FName __thiscall FConvexHullToMeshDataflowNode::GetDisplayName(FConvexHullToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convex Hull to Mesh");
  return in_RDX;
}

// GetCategory @ 14e8d4d20

FName __thiscall FConvexHullToMeshDataflowNode::GetCategory(FConvexHullToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Mesh");
  return in_RDX;
}

// GetTags @ 14e8d4d50

FString * __thiscall
FConvexHullToMeshDataflowNode::GetTags
          (FConvexHullToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d4d90

UScriptStruct * __thiscall
FConvexHullToMeshDataflowNode::TypedScriptStruct(FConvexHullToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvexHullToMeshDataflowNode,(UObject *)pUVar1,
                         L"ConvexHullToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvexHullToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d6bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConvexHullToMeshDataflowNode::Evaluate
          (FConvexHullToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowOutput *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *pFVar7;
  FDataflowInput *pFVar8;
  FDataflowSelection *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  UObject *pUVar11;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  FDynamicMesh3 *pFVar16;
  undefined1 local_res8 [8];
  FContext *local_res10;
  TObjectPtr<UDynamicMesh>_u_0 local_res18;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> local_348;
  UDynamicMesh *local_338;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_330;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FConnectionReference local_2f8;
  FConnectionReference local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  TArrayView<int_const_,int> local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  TArrayView<int_const_,int> local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  TArray<int,TSizedDefaultAllocator<32>_> local_278;
  FDynamicMesh3 local_268;
  
  local_res10 = param_1;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar6 == &this->Mesh) {
    pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    pFVar14 = (FScriptContainerElement *)0x0;
    local_2f8.Index = -1;
    local_2f8.ContainerReference = (void *)0x0;
    iVar13 = 0;
    local_2f8.Reference = &this->OptionalSelectionFilter;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2f8);
    pFVar1 = pFVar8->Connection;
    if (pFVar1 != (FDataflowOutput *)0x0) {
      pFVar9 = (FDataflowSelection *)
               FDataflowNode::GetValue<FDataflowTransformSelection>
                         ((FDataflowNode *)this,local_res10,&this->OptionalSelectionFilter);
      pTVar10 = FDataflowSelection::AsArray(pFVar9,&local_2c8);
      iVar13 = 0;
      if (&local_288 != pTVar10) {
        pFVar14 = (pTVar10->AllocatorInstance).Data;
        (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar13 = pTVar10->ArrayNum;
        pTVar10->ArrayNum = 0;
        pTVar10->ArrayMax = 0;
      }
      if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.AllocatorInstance.Data);
      }
    }
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
    bVar4 = this->bUseRobustHulls;
    local_318 = pFVar14;
    if ((iVar13 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2b8._12_4_ = uStack_30c;
    local_2b8.ArrayNum = iVar13;
    local_2b8.DataPtr = (int *)local_318;
    iStack_310 = iVar13;
    UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh
              (pFVar7,&local_268,pFVar1 != (FDataflowOutput *)0x0,&local_2b8,bVar4);
    pUVar11 = GetTransientPackageAsObject();
    this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar11);
    local_res18.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    UDynamicMesh::SetMesh(this_00.DebugPtr,&local_268);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,local_res10,(TObjectPtr<UDynamicMesh> *)&local_res18.ObjectPtr,
               &this->Mesh);
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
  }
  else {
    puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)puVar6 != &this->Meshes) {
      return;
    }
    pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    pFVar14 = (FScriptContainerElement *)0x0;
    local_2e0.Index = -1;
    local_2e0.ContainerReference = (void *)0x0;
    local_2e0.Reference = &this->OptionalSelectionFilter;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2e0);
    iVar13 = 0;
    pFVar1 = pFVar8->Connection;
    if (pFVar1 != (FDataflowOutput *)0x0) {
      pFVar9 = (FDataflowSelection *)
               FDataflowNode::GetValue<FDataflowTransformSelection>
                         ((FDataflowNode *)this,local_res10,&this->OptionalSelectionFilter);
      pTVar10 = FDataflowSelection::AsArray(pFVar9,&local_2a8);
      iVar13 = 0;
      if (&local_278 != pTVar10) {
        pFVar14 = (pTVar10->AllocatorInstance).Data;
        (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar13 = pTVar10->ArrayNum;
        pTVar10->ArrayNum = 0;
        pTVar10->ArrayMax = 0;
      }
      if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
    }
    bVar4 = this->bUseRobustHulls;
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    local_308 = pFVar14;
    if ((iVar13 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_298._12_4_ = uStack_2fc;
    local_298.ArrayNum = iVar13;
    local_298.DataPtr = (int *)local_308;
    iStack_300 = iVar13;
    UE::FractureEngine::Convex::GetConvexHullsAsDynamicMeshes
              (pFVar7,&local_330,pFVar1 != (FDataflowOutput *)0x0,&local_298,bVar4);
    local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.ArrayNum = 0;
    local_348.ArrayMax = 0;
    TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_348,local_330.ArrayNum,Default);
    iVar13 = local_330.ArrayNum;
    uVar12 = (ulonglong)local_330.ArrayNum;
    pFVar16 = (FDynamicMesh3 *)(local_330.AllocatorInstance.Data + uVar12 * 0x230);
    FVar15.Data = local_330.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FDynamicMesh3 *)FVar15.Data == pFVar16) break;
      pUVar11 = GetTransientPackageAsObject();
      local_338 = NewObject<UDynamicMesh>(pUVar11);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UDynamicMesh *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_338);
      }
      UDynamicMesh::SetMesh(local_338,(FDynamicMesh3 *)FVar15.Data);
      if (((local_348.AllocatorInstance.Data <= (FScriptContainerElement *)&local_338) &&
          ((FScriptContainerElement *)&local_338 <
           local_348.AllocatorInstance.Data + (longlong)local_348.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_348.ArrayNum;
      if (local_348.ArrayNum == local_348.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_348.AllocatorInstance,&local_348.ArrayMax);
      }
      local_348.ArrayNum = iVar5 + 1;
      *(UDynamicMesh **)(local_348.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_338;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_338 != (UDynamicMesh *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_338);
      }
      uVar12 = local_330._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 0x230;
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,local_res10,&local_348,&this->Meshes);
    if (local_348.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FDynamicMesh3,int>
              ((FDynamicMesh3 *)local_330.AllocatorInstance.Data,local_330.ArrayNum);
    if ((FDynamicMesh3 *)local_330.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
  }
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// FConvexHullToMeshDataflowNode @ 14e919e00

FConvexHullToMeshDataflowNode * __thiscall
FConvexHullToMeshDataflowNode::FConvexHullToMeshDataflowNode
          (FConvexHullToMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FConvexHullToMeshDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar1 = &this->OptionalSelectionFilter;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  this->bUseRobustHulls = true;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Mesh;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Meshes;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FConvexHullToMeshDataflowNode @ 14e919f80

FConvexHullToMeshDataflowNode * __thiscall
FConvexHullToMeshDataflowNode::FConvexHullToMeshDataflowNode(FConvexHullToMeshDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FConvexHullToMeshDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->OptionalSelectionFilter).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->OptionalSelectionFilter).field_0x4 = uVar1;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  this->bUseRobustHulls = true;
  return this;
}

