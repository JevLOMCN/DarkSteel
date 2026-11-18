// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e87fb50

UScriptStruct * __cdecl FSplitMeshIslandsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitMeshIslandsDataflowNode,(UObject *)pUVar1,
                         L"SplitMeshIslandsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton;
}

// GetType @ 14e87fc10

FName __thiscall FSplitMeshIslandsDataflowNode::GetType(FSplitMeshIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSplitMeshIslandsDataflowNode");
  return in_RDX;
}

// IsA @ 14e87fc40

bool __thiscall
FSplitMeshIslandsDataflowNode::IsA(FSplitMeshIslandsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSplitMeshIslandsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87fca8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87fca8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87fcc6;
      }
    }
  }
  bVar5 = true;
LAB_14e87fcc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87fd00

FStructOnScope * __thiscall
FSplitMeshIslandsDataflowNode::NewStructOnScope(FSplitMeshIslandsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSplitMeshIslandsDataflowNode,(UObject *)pUVar2
                           ,L"SplitMeshIslandsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87fd80

void __thiscall
FSplitMeshIslandsDataflowNode::SerializeInternal
          (FSplitMeshIslandsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitMeshIslandsDataflowNode,(UObject *)pUVar1,
                         L"SplitMeshIslandsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87fdfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87fe10

FName __thiscall FSplitMeshIslandsDataflowNode::GetDisplayName(FSplitMeshIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SplitMeshIslands");
  return in_RDX;
}

// GetCategory @ 14e87fe40

FName __thiscall FSplitMeshIslandsDataflowNode::GetCategory(FSplitMeshIslandsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e87fe70

FString * __thiscall
FSplitMeshIslandsDataflowNode::GetTags
          (FSplitMeshIslandsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87fea0

UScriptStruct * __thiscall
FSplitMeshIslandsDataflowNode::TypedScriptStruct(FSplitMeshIslandsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitMeshIslandsDataflowNode,(UObject *)pUVar1,
                         L"SplitMeshIslandsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSplitMeshIslandsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e87ff30

void __thiscall
FSplitMeshIslandsDataflowNode::Evaluate
          (FSplitMeshIslandsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  TObjectPtr<UDynamicMesh> *pTVar5;
  TObjectPtr<UDynamicMesh>_u_0 local_48;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> local_40;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *local_30;
  FSplitMeshIslandsDataflowNode *local_28;
  code *local_20;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> **local_18;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)puVar4 == &this->Meshes) {
    local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ArrayNum = 0;
    local_40.ArrayMax = 0;
    pTVar5 = FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                       ((FDataflowNode *)this,param_1,&this->Mesh);
    local_48.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar5->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
    }
    if (local_48.DebugPtr != (UDynamicMesh *)0x0) {
      if (this->SplitMethod == NoSplit) {
        if (((local_40.AllocatorInstance.Data <= &local_48) &&
            (&local_48 <
             (TObjectPtr<UDynamicMesh>_u_0 *)
             (local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = local_40.ArrayNum;
        if (local_40.ArrayNum == local_40.ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
        }
        local_40.ArrayNum = iVar3 + 1;
        ((TObjectPtr<UDynamicMesh>_u_0 *)(local_40.AllocatorInstance.Data + (longlong)iVar3 * 8))->
        DebugPtr = (UDynamicMesh *)local_48;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_48.DebugPtr != (UDynamicMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
        }
      }
      else {
        local_30 = &local_40;
        local_18 = &local_30;
        local_20 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                   ::Call;
        local_28 = this;
        UDynamicMesh::ProcessMesh
                  (local_48.DebugPtr,
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_20);
      }
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_40,&this->Meshes);
    if ((TObjectPtr<UDynamicMesh>_u_0 *)local_40.AllocatorInstance.Data !=
        (TObjectPtr<UDynamicMesh>_u_0 *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
  }
  return;
}

// FSplitMeshIslandsDataflowNode @ 14e92d0b0

FSplitMeshIslandsDataflowNode * __thiscall
FSplitMeshIslandsDataflowNode::FSplitMeshIslandsDataflowNode
          (FSplitMeshIslandsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->SplitMethod = ByMeshTopology;
  this->ConnectVerticesThreshold = 0.001;
  this->_padding_ = (longlong)&___7FSplitMeshIslandsDataflowNode__6B_;
  local_48.Reference = &this->Mesh;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_48.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Meshes;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// operator() @ 14e936660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UDynamicMesh *pUVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  TArray<UE::Geometry::FDynamicMesh3,TSizedDefaultAllocator<32>_> local_78;
  FVertexConnectedComponents *local_68;
  FDynamicMesh3 *local_60;
  code *local_58;
  FVertexConnectedComponents **local_50;
  FVertexConnectedComponents local_48;
  
  uVar9 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
            (&local_48,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
  UE::Geometry::FVertexConnectedComponents::ConnectTriangles<UE::Geometry::FDynamicMesh3>
            (&local_48,param_1);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x260) == '\x02') {
    UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
              (&local_48,param_1,(double)*(float *)(*(longlong *)((longlong)this + 8) + 0x264),2);
  }
  local_68 = &local_48;
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``FSplitMeshIslandsDataflowNode::Evaluate'::__l13::<lambda_1>::operator()'::__l2::<lambda_1>,int,int>
             ::Call;
  local_60 = param_1;
  UE::Geometry::FDynamicMeshEditor::SplitMesh
            (param_1,&local_78,(TFunctionRef<int___cdecl(int)> *)&local_58,-1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)0x0,false);
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>::SetNum
            (*(TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> **)this,
             local_78.ArrayNum,Default);
  uVar11 = 0;
  uVar10 = uVar9;
  if (0 < local_78.ArrayNum) {
    do {
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UDynamicMesh>(pUVar5);
      plVar1 = *(longlong **)this;
      uVar8 = (uint)uVar9;
      uVar12 = ~uVar8 >> 0x1f;
      uVar7 = uVar11;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar7 = uVar12;
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
      lVar2 = *plVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDynamicMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *(UDynamicMesh **)(lVar2 + uVar10 * 8) = pUVar6;
      plVar1 = *(longlong **)this;
      uVar7 = uVar11;
      if ((int)uVar8 < (int)plVar1[1]) {
        uVar7 = uVar12;
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
      pUVar6 = *(UDynamicMesh **)(*plVar1 + uVar10 * 8);
      uVar7 = uVar11;
      if ((int)uVar8 < local_78.ArrayNum) {
        uVar7 = uVar12;
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
      UDynamicMesh::SetMesh
                (pUVar6,(FDynamicMesh3 *)
                        (local_78.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x230));
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 1;
    } while ((int)(uVar8 + 1) < local_78.ArrayNum);
  }
  if (local_48.DisjointSet.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DisjointSet.Sizes.AllocatorInstance.Data);
  }
  if (local_48.DisjointSet.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DisjointSet.Parents.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDynamicMesh3,int>
            ((FDynamicMesh3 *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FDynamicMesh3 *)local_78.AllocatorInstance.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

