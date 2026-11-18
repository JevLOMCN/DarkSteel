// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e863b80

UScriptStruct * __cdecl FMeshToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode,(UObject *)pUVar1,
                         L"MeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e863c90

FName __thiscall FMeshToCollectionDataflowNode::GetType(FMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e863cd0

bool __thiscall
FMeshToCollectionDataflowNode::IsA(FMeshToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e863d38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e863d38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e863d56;
      }
    }
  }
  bVar5 = true;
LAB_14e863d56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e863d90

FStructOnScope * __thiscall
FMeshToCollectionDataflowNode::NewStructOnScope(FMeshToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode,(UObject *)pUVar2
                           ,L"MeshToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e863ed0

void __thiscall
FMeshToCollectionDataflowNode::SerializeInternal
          (FMeshToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode,(UObject *)pUVar1,
                         L"MeshToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e863f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e864070

FName __thiscall FMeshToCollectionDataflowNode::GetDisplayName(FMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MeshToCollection");
  return in_RDX;
}

// GetCategory @ 14e8640a0

FName __thiscall FMeshToCollectionDataflowNode::GetCategory(FMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e864190

FString * __thiscall
FMeshToCollectionDataflowNode::GetTags
          (FMeshToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e864240

UScriptStruct * __thiscall
FMeshToCollectionDataflowNode::TypedScriptStruct(FMeshToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode,(UObject *)pUVar1,
                         L"MeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e864470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshToCollectionDataflowNode::Evaluate
          (FMeshToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  bool bVar3;
  TObjectPtr<UDynamicMesh> TVar4;
  int iVar5;
  undefined1 *puVar6;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar7;
  FDataflowInput *pFVar8;
  bool *pbVar9;
  FManagedArrayCollection *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  FDynamicMesh3 *pFVar13;
  undefined1 auStackY_658 [32];
  undefined1 local_628 [8];
  FToCollectionOptions local_620;
  undefined1 local_618 [16];
  void *local_608;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_5f8;
  undefined1 local_5e8 [8];
  undefined8 local_5e0;
  FVertexConnectedComponents local_5d8;
  FManagedArrayCollection local_5b8;
  FGeometryCollection local_508;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_658;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 != pFVar1) {
    return;
  }
  pTVar7 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                      ((FDataflowNode *)this,param_1,&this->Mesh)->field0_0x0;
  TVar4.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar7->DebugPtr;
  if (TVar4.field0_0x0 == (UDynamicMesh *)0x0) {
LAB_14e864792:
    pFVar10 = FManagedArrayCollection::FManagedArrayCollection(&local_5b8);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,pFVar10,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_5b8);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
  }
  pFVar13 = *(FDynamicMesh3 **)((longlong)TVar4.field0_0x0 + 0xb8);
  local_608 = (void *)0x0;
  local_618._8_4_ = 0xffffffff;
  local_618._0_8_ = &this->bSplitIslands;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_618);
  pbVar9 = FDataflowInput::GetValue<bool>(pFVar8,param_1,(bool *)local_618._0_8_);
  bVar2 = *pbVar9;
  local_618._8_4_ = 0xffffffff;
  local_618._0_8_ = &this->bAddClusterRootForSingleMesh;
  local_608 = (void *)0x0;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_618);
  pbVar9 = FDataflowInput::GetValue<bool>(pFVar8,param_1,(bool *)local_618._0_8_);
  bVar3 = *pbVar9;
  if ((pFVar13->VertexRefCounts).UsedCount < 1) goto LAB_14e864792;
  local_618 = (undefined1  [16])FLinearColor::White.field0_0x0;
  FGeometryCollection::FGeometryCollection(&local_508,(FGeometryCollectionDefaults *)local_618);
  local_620.bDefaultFaceVisible = true;
  local_620.bDefaultFaceInternal = false;
  local_620.bAllowAppendAsRoot = false;
  local_620.NewMeshParentIndex = -1;
  local_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f8.ArrayNum = 0;
  local_5f8.ArrayMax = 0;
  if (bVar2 != false) {
    UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
              (&local_5d8,
               (pFVar13->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar13->VertexRefCounts).RefCounts.CurBlockUsed);
    UE::Geometry::FVertexConnectedComponents::ConnectTriangles<UE::Geometry::FDynamicMesh3>
              (&local_5d8,pFVar13);
    if (this->bConnectIslandsByVertexOverlap != false) {
      UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
                (&local_5d8,pFVar13,(double)this->ConnectVerticesThreshold,2);
    }
    local_5e0 = local_618;
    local_618._8_8_ = pFVar13;
    local_618._0_8_ = &local_5d8;
    local_5e8 = (undefined1  [8])
                UE::Core::Private::Function::
                TFunctionRefCaller<`FMeshToCollectionDataflowNode::Evaluate'::__l14::<lambda_1>,int,int>
                ::Call;
    UE::Geometry::FDynamicMeshEditor::SplitMesh
              (pFVar13,&local_5f8,(TFunctionRef<int___cdecl(int)> *)local_5e8,-1,
               (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
    if (local_5d8.DisjointSet.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.DisjointSet.Sizes.AllocatorInstance.Data);
    }
    if (local_5d8.DisjointSet.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.DisjointSet.Parents.AllocatorInstance.Data);
    }
    if (1 < local_5f8.ArrayNum) {
      local_620.NewMeshParentIndex =
           `FMeshToCollectionDataflowNode::Evaluate'::__l11::<lambda_2>::operator()
                     (local_628,&local_508);
      iVar5 = local_5f8.ArrayNum;
      uVar11 = (ulonglong)local_5f8.ArrayNum;
      pFVar13 = (FDynamicMesh3 *)(local_5f8.AllocatorInstance.Data + uVar11 * 0x230);
      FVar12.Data = local_5f8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar11 != iVar5) {
          `TCheckedPointerIterator<UE::Geometry::FDynamicMesh3,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_628);
        }
        if ((FDynamicMesh3 *)FVar12.Data == pFVar13) break;
        UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection
                  (&local_508,(FDynamicMesh3 *)FVar12.Data,&UE::Math::TTransform<double>::Identity,
                   &local_620);
        uVar11 = local_5f8._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x230;
      }
      goto LAB_14e864712;
    }
  }
  if (bVar3 == false) {
    local_620.bAllowAppendAsRoot = true;
  }
  else {
    local_620.NewMeshParentIndex =
         `FMeshToCollectionDataflowNode::Evaluate'::__l11::<lambda_2>::operator()
                   (local_628,&local_508);
  }
  UE::Geometry::FGeometryCollectionToDynamicMeshes::AppendMeshToCollection
            (&local_508,pFVar13,&UE::Math::TTransform<double>::Identity,&local_620);
LAB_14e864712:
  FManagedArrayCollection::FManagedArrayCollection(&local_5b8);
  local_5e8 = (undefined1  [8])0x0;
  local_5e0._0_4_ = 0;
  local_5e0._4_4_ = 0;
  local_618 = ZEXT816(0);
  FManagedArrayCollection::CopyTo
            ((FManagedArrayCollection *)&local_508,&local_5b8,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)local_618,
             (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)local_5e8);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_5b8,pFVar1);
  FManagedArrayCollection::~FManagedArrayCollection(&local_5b8);
  DestructItems<UE::Geometry::FDynamicMesh3,int>
            ((FDynamicMesh3 *)local_5f8.AllocatorInstance.Data,local_5f8.ArrayNum);
  if ((FDynamicMesh3 *)local_5f8.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_5f8.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>((FMeshInfo *)0x0,0)
  ;
  FGeometryCollection::~FGeometryCollection(&local_508);
  return;
}

// FMeshToCollectionDataflowNode @ 14e925d20

FMeshToCollectionDataflowNode * __thiscall
FMeshToCollectionDataflowNode::FMeshToCollectionDataflowNode
          (FMeshToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FMeshToCollectionDataflowNode__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->bConnectIslandsByVertexOverlap = false;
  this->bSplitIslands = false;
  this->bAddClusterRootForSingleMesh = false;
  this->ConnectVerticesThreshold = 0.001;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Mesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bSplitIslands;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bAddClusterRootForSingleMesh;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// operator() @ 14e936d90

int __thiscall
`FMeshToCollectionDataflowNode::Evaluate'::__l11::<lambda_2>::operator()
          (void *this,FGeometryCollection *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = FManagedArrayCollection::AddElements
                    ((FManagedArrayCollection *)param_1,1,FTransformCollection::TransformGroup);
  uVar10 = 0;
  if ((int)uVar8 < (int)param_1->_padding_) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  *(undefined4 *)(param_1->_padding_ + (longlong)(int)uVar8 * 4) = 0xffffffff;
  uVar3 = FLinearColor::White.field0_0x0._0_4_;
  uVar4 = FLinearColor::White.field0_0x0._4_4_;
  uVar5 = FLinearColor::White.field0_0x0._8_4_;
  uVar6 = FLinearColor::White.field0_0x0._12_4_;
  uVar10 = 0;
  if ((int)uVar8 < (int)param_1->_padding_) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  puVar1 = (undefined4 *)(param_1->_padding_ + (longlong)(int)uVar8 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return uVar8;
}

