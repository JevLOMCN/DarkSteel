// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e866590

UScriptStruct * __cdecl FCollectionToMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode,(UObject *)pUVar1,
                         L"CollectionToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e866850

FName __thiscall FCollectionToMeshDataflowNode::GetType(FCollectionToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionToMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e866880

bool __thiscall
FCollectionToMeshDataflowNode::IsA(FCollectionToMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionToMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8668e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8668e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e866906;
      }
    }
  }
  bVar5 = true;
LAB_14e866906:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e866a20

FStructOnScope * __thiscall
FCollectionToMeshDataflowNode::NewStructOnScope(FCollectionToMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode,(UObject *)pUVar2
                           ,L"CollectionToMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e866b60

void __thiscall
FCollectionToMeshDataflowNode::SerializeInternal
          (FCollectionToMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode,(UObject *)pUVar1,
                         L"CollectionToMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e866bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e866c70

FName __thiscall FCollectionToMeshDataflowNode::GetDisplayName(FCollectionToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionToMesh");
  return in_RDX;
}

// GetCategory @ 14e866ca0

FName __thiscall FCollectionToMeshDataflowNode::GetCategory(FCollectionToMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e866d60

FString * __thiscall
FCollectionToMeshDataflowNode::GetTags
          (FCollectionToMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e866f60

UScriptStruct * __thiscall
FCollectionToMeshDataflowNode::TypedScriptStruct(FCollectionToMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode,(UObject *)pUVar1,
                         L"CollectionToMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8674b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionToMeshDataflowNode::Evaluate
          (FCollectionToMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 *puVar3;
  UObject *pUVar4;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  FDataflowTransformSelection *pFVar5;
  FDataflowInput *pFVar6;
  FManagedArrayCollection *pFVar7;
  uint uVar8;
  ForElementType<unsigned_int> _Dst;
  void *_Src_00;
  undefined1 auStackY_4e8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_4a8;
  FGeometryCollectionToDynamicMeshes local_498;
  TObjectPtr<UDynamicMesh>_u_0 local_488;
  TArray<int,TSizedDefaultAllocator<32>_> local_480;
  FScriptContainerElement *local_468;
  int iStack_460;
  FCollectionToMeshDataflowNode *local_458;
  FGeometryCollectionToDynamicMeshes *local_450;
  code *local_448;
  FCollectionToMeshDataflowNode **local_440;
  FConnectionReference local_438;
  TArrayView<int_const_,int> local_418;
  FCollectionHierarchyFacade local_408;
  FCollectionTransformSelectionFacade local_358;
  FDataflowSelection local_e8;
  FToMeshOptions local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar3 == &this->Mesh) {
    pUVar4 = GetTransientPackageAsObject();
    this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar4);
    local_488.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    pFVar5 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_e8.GroupName.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x0;
    local_e8.GroupName.Number = *(uint *)&pFVar5->field_0x4;
    local_e8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e8.SelectionArray.MaxBits = 0;
    local_e8.SelectionArray.NumBits = 0;
    uVar8 = *(int *)&pFVar5->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar8) {
      local_e8.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar8) {
        local_e8.SelectionArray.MaxBits = uVar8;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8.SelectionArray,0);
    }
    local_e8.SelectionArray.NumBits = *(int *)&pFVar5->field_0x20;
    if (local_e8.SelectionArray.NumBits != 0) {
      _Src_00 = &pFVar5->field_0x8;
      if (*(void **)&pFVar5->field_0x18 != (void *)0x0) {
        _Src_00 = *(void **)&pFVar5->field_0x18;
      }
      _Dst = (ForElementType<unsigned_int>)&local_e8.SelectionArray;
      if (local_e8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        _Dst = local_e8.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src_00,(ulonglong)(local_e8.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    local_438.Index = -1;
    local_438.ContainerReference = (void *)0x0;
    local_438.Reference = &this->TransformSelection;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_438);
    if (pFVar6->Connection == (FDataflowOutput *)0x0) {
      pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,&this->Collection);
      FDataflowSelection::InitializeFromCollection(&local_e8,pFVar7,true);
    }
    bVar2 = FDataflowSelection::AnySelected(&local_e8);
    if (bVar2) {
      pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,&this->Collection);
      FDataflowSelection::AsArray(&local_e8,&local_480);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_358,pFVar7);
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_408,pFVar7);
      _Src.Data = local_480.AllocatorInstance.Data;
      local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4a8.ArrayNum = local_480.ArrayNum;
      if (local_480.ArrayNum == 0) {
        local_4a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_480.ArrayNum,0,&local_4a8.AllocatorInstance,local_480.ArrayNum,
                   &local_4a8.ArrayMax);
        memcpy(local_4a8.AllocatorInstance.Data,_Src.Data,(longlong)local_480.ArrayNum << 2);
      }
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
                (&local_358,&local_4a8);
      local_b8.bWeldVertices = this->bWeldVertices;
      local_b8.Transform.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_b8.Transform.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_b8.bSaveIsolatedVertices = this->bPreserveIsolatedVertices;
      local_b8.Transform.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_b8.Transform.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_b8.Transform.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_b8.Transform.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_468 = local_4a8.AllocatorInstance.Data;
      local_498.Meshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_498.Meshes.ArrayNum = 0;
      local_498.Meshes.ArrayMax = 0;
      local_b8.bInternalFaceTagsAsPolygroups = true;
      local_b8.InvisibleFaces = Skip;
      if (local_4a8.ArrayNum < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iStack_460 = local_4a8.ArrayNum;
      local_418.DataPtr = (int *)local_468;
      bVar2 = UE::Geometry::FGeometryCollectionToDynamicMeshes::InitFromTransformSelection
                        (&local_498,pFVar7,&local_418,&local_b8);
      if ((bVar2) && (local_498.Meshes.ArrayNum != 0)) {
        local_450 = &local_498;
        local_440 = &local_458;
        local_448 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FCollectionToMeshDataflowNode::Evaluate'::__l14::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                    ::Call;
        local_458 = this;
        UDynamicMesh::EditMesh
                  (this_00.DebugPtr,
                   (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_448,
                   GeneralEdit,Unknown,false);
      }
      DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>
                ((FMeshInfo *)local_498.Meshes.AllocatorInstance.Data,local_498.Meshes.ArrayNum);
      if ((FMeshInfo *)local_498.Meshes.AllocatorInstance.Data != (FMeshInfo *)0x0) {
        FMemory::Free(local_498.Meshes.AllocatorInstance.Data);
      }
      if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.AllocatorInstance.Data);
      }
      if (local_480.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_488.ObjectPtr,
               &this->Mesh);
    if (local_e8.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_e8.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FCollectionToMeshDataflowNode @ 14e9165f0

FCollectionToMeshDataflowNode * __thiscall
FCollectionToMeshDataflowNode::FCollectionToMeshDataflowNode
          (FCollectionToMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FCollectionToMeshDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->bCenterPivot = false;
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FCollectionToMeshDataflowNode @ 14e916730

FCollectionToMeshDataflowNode * __thiscall
FCollectionToMeshDataflowNode::FCollectionToMeshDataflowNode(FCollectionToMeshDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionToMeshDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->bCenterPivot = false;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
  return this;
}

// operator() @ 14e936910

void __thiscall
`FCollectionToMeshDataflowNode::Evaluate'::__l14::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TAxisAlignedBox3<double> *pTVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  TVector<double>_u_0 local_58;
  TAxisAlignedBox3<double> local_40;
  
  plVar7 = *(longlong **)((longlong)this + 8);
  if (((int)plVar7[1] < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(param_1,*(FDynamicMesh3 **)(*plVar7 + 8));
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar5 = 1;
  if (1 < (int)plVar7[1]) {
    lVar6 = 0x70;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (int)plVar7[1]) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Geometry::FDynamicMesh3::AppendWithOffsets
                (param_1,*(FDynamicMesh3 **)(lVar6 + 8 + *plVar7),(FAppendInfo *)0x0);
      plVar7 = *(longlong **)((longlong)this + 8);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x70;
    } while ((int)uVar5 < (int)plVar7[1]);
  }
  if (*(char *)(*(longlong *)this + 0x2f8) != '\0') {
    pTVar4 = UE::Geometry::FDynamicMesh3::GetBounds(param_1,&local_40,false);
    local_58._s_0.Y =
         ((pTVar4->Max).field0_0x0._s_0.Y + (pTVar4->Min).field0_0x0._s_0.Y) *
         __real_bfe0000000000000;
    local_58._s_0.X =
         ((pTVar4->Max).field0_0x0._s_0.X + (pTVar4->Min).field0_0x0._s_0.X) *
         __real_bfe0000000000000;
    local_58._s_0.Z =
         ((pTVar4->Max).field0_0x0._s_0.Z + (pTVar4->Min).field0_0x0._s_0.Z) *
         __real_bfe0000000000000;
    MeshTransforms::Translate(param_1,(TVector<double> *)&local_58._s_0,All);
  }
  return;
}

