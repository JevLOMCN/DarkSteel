// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8cddf0

UScriptStruct * __cdecl FMeshCutterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCutterDataflowNode,(UObject *)pUVar1,
                         L"MeshCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton;
}

// GetType @ 14e8cde70

FName __thiscall FMeshCutterDataflowNode::GetType(FMeshCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMeshCutterDataflowNode");
  return in_RDX;
}

// IsA @ 14e8cdf60

bool __thiscall FMeshCutterDataflowNode::IsA(FMeshCutterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMeshCutterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8cdfc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8cdfc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8cdfe6;
      }
    }
  }
  bVar5 = true;
LAB_14e8cdfe6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ce140

FStructOnScope * __thiscall FMeshCutterDataflowNode::NewStructOnScope(FMeshCutterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMeshCutterDataflowNode,(UObject *)pUVar2,
                           L"MeshCutterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ce250

void __thiscall
FMeshCutterDataflowNode::SerializeInternal(FMeshCutterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCutterDataflowNode,(UObject *)pUVar1,
                         L"MeshCutterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ce2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ce310

FName __thiscall FMeshCutterDataflowNode::GetDisplayName(FMeshCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MeshCutter");
  return in_RDX;
}

// GetCategory @ 14e8ce370

FName __thiscall FMeshCutterDataflowNode::GetCategory(FMeshCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8ce3d0

FString * __thiscall
FMeshCutterDataflowNode::GetTags(FMeshCutterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ce570

UScriptStruct * __thiscall FMeshCutterDataflowNode::TypedScriptStruct(FMeshCutterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshCutterDataflowNode,(UObject *)pUVar1,
                         L"MeshCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMeshCutterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8cf0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshCutterDataflowNode::Evaluate
          (FMeshCutterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  UObject *pUVar12;
  code *pcVar13;
  FName FVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  FDataflowTransformSelection *pFVar20;
  FDataflowInput *pFVar21;
  FManagedArrayCollection *pFVar22;
  TBox<double> *pTVar23;
  FManagedArrayCollection *pFVar24;
  TObjectPtr<UStaticMesh>_u_0 *pTVar25;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar26;
  int *piVar27;
  float *pfVar28;
  TTransform<double> *pTVar29;
  FName *pFVar30;
  TManagedArray<int> *pTVar31;
  uint uVar32;
  ForElementType<unsigned_int> _Dst;
  longlong lVar33;
  ForElementType<unsigned_int> FVar34;
  void *_Src;
  int iVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  ulonglong uVar38;
  undefined1 auStackY_c08 [32];
  undefined1 local_b88;
  undefined1 local_b87;
  EMeshCutterPerCutMeshSelection local_b86;
  ForAnyElementType local_b80;
  undefined8 local_b78;
  longlong local_b70;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_b68;
  int local_b58;
  FContext *local_b50;
  FConnectionReference local_b48;
  FConnectionReference local_b30;
  FConnectionReference local_b18;
  FConnectionReference local_b00;
  FConnectionReference local_ae8;
  FConnectionReference local_ad0;
  FConnectionReference local_ab8;
  FConnectionReference local_aa0;
  FConnectionReference local_a88;
  FConnectionReference local_a70;
  FConnectionReference local_a58;
  FConnectionReference local_a40;
  FConnectionReference local_a28;
  FConnectionReference local_a10;
  FConnectionReference local_9f8;
  FConnectionReference local_9e0;
  FConnectionReference local_9c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_9b0;
  FScriptContainerElement *local_998;
  int iStack_990;
  undefined4 uStack_98c;
  FConnectionReference local_988;
  FConnectionReference local_970;
  FConnectionReference local_958;
  FName local_940;
  FName local_938 [2];
  TArrayView<UE::Geometry::FDynamicMesh3_const_*,int> local_928;
  FBoundsFacade local_918;
  FDynamicMesh3 local_7b8;
  FCollectionTransformSelectionFacade local_588;
  FDataflowSelection local_318;
  FDataflowSelection local_2f0;
  FDataflowSelection local_2c8;
  FDataflowSelection local_2a0;
  TVector<double>_u_0 local_278;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  FName local_240;
  void *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  TVector<double>_u_0 local_1b8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  FManagedArrayCollection local_178;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_c08;
  pFVar24 = &this->Collection;
  local_b50 = param_1;
  puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FManagedArrayCollection *)puVar19 != pFVar24) &&
      (puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar19 != &this->TransformSelection)) &&
     (puVar19 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar19 != &this->NewGeometryTransformSelection)) {
    return;
  }
  pFVar20 = FDataflowNode::GetValue<FDataflowTransformSelection>
                      ((FDataflowNode *)this,param_1,&this->TransformSelection);
  iVar35 = 0;
  local_318.GroupName.ComparisonIndex.Value = *(uint *)&pFVar20->field_0x0;
  local_318.GroupName.Number = *(uint *)&pFVar20->field_0x4;
  local_318.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_318.SelectionArray.MaxBits = 0;
  local_318.SelectionArray.NumBits = 0;
  uVar32 = *(int *)&pFVar20->field_0x20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar32) {
    local_318.SelectionArray.MaxBits = 0x80;
    if (0x80 < (int)uVar32) {
      local_318.SelectionArray.MaxBits = uVar32;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_318.SelectionArray,0);
  }
  local_318.SelectionArray.NumBits = *(int *)&pFVar20->field_0x20;
  if (local_318.SelectionArray.NumBits != 0) {
    _Src = &pFVar20->field_0x8;
    if (*(void **)&pFVar20->field_0x18 != (void *)0x0) {
      _Src = *(void **)&pFVar20->field_0x18;
    }
    FVar34 = (ForElementType<unsigned_int>)&local_318.SelectionArray;
    if (local_318.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_318.SelectionArray.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar34,_Src,(ulonglong)(local_318.SelectionArray.NumBits + 0x1fU >> 5) << 2);
  }
  local_988.Index = -1;
  local_988.ContainerReference = (void *)0x0;
  local_988.Reference = &this->TransformSelection;
  pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_988);
  if (pFVar21->Connection == (FDataflowOutput *)0x0) {
    pFVar22 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar24);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_588,pFVar22);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
              (&local_588,&local_9b0);
    local_2f0.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_2f0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_2f0.SelectionArray.NumBits = 0;
    local_2f0.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_2f0,pFVar22,false);
    FDataflowSelection::SetFromArray(&local_2f0,&local_9b0);
    local_318.GroupName = local_2f0.GroupName;
    local_318.SelectionArray.NumBits = 0;
    uVar32 = local_2f0.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
    if ((local_318.SelectionArray.MaxBits < (int)uVar32) ||
       (0x80 < local_318.SelectionArray.MaxBits)) {
      local_318.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar32) {
        local_318.SelectionArray.MaxBits = uVar32;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_318.SelectionArray,0);
    }
    local_318.SelectionArray.NumBits = local_2f0.SelectionArray.NumBits;
    if (local_2f0.SelectionArray.NumBits != 0) {
      FVar34 = (ForElementType<unsigned_int>)&local_2f0.SelectionArray;
      if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_2f0.SelectionArray.AllocatorInstance.SecondaryData;
      }
      _Dst = (ForElementType<unsigned_int>)&local_318.SelectionArray;
      if (local_318.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        _Dst = local_318.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)FVar34,
             (ulonglong)(local_2f0.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_2f0.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2f0.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_9b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b0.AllocatorInstance.Data);
    }
  }
  pTVar23 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                      ((FDataflowNode *)this,param_1,&this->BoundingBox);
  local_970.Index = -1;
  local_970.ContainerReference = (void *)0x0;
  local_278._s_0.X = (pTVar23->Min).field0_0x0._s_0.X;
  local_278._s_0.Y = (pTVar23->Min).field0_0x0._s_0.Y;
  local_278._s_0.Z = (pTVar23->Min).field0_0x0._s_0.Z;
  dStack_260 = (pTVar23->Max).field0_0x0._s_0.X;
  local_258 = (pTVar23->Max).field0_0x0._s_0.Y;
  dStack_250 = (pTVar23->Max).field0_0x0._s_0.Z;
  local_248._0_1_ = pTVar23->IsValid;
  local_248._1_1_ = pTVar23->Pad[0];
  local_248._2_1_ = pTVar23->Pad[1];
  local_248._3_1_ = pTVar23->Pad[2];
  local_248._4_1_ = pTVar23->Pad[3];
  local_248._5_1_ = pTVar23->Pad[4];
  local_248._6_1_ = pTVar23->Pad[5];
  local_248._7_1_ = pTVar23->Pad[6];
  local_970.Reference = &this->BoundingBox;
  pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_970);
  if (pFVar21->Connection == (FDataflowOutput *)0x0) {
    pFVar22 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar24);
    GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_918,pFVar22);
    GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
              (&local_918,(TBox<double> *)&local_1b8._s_0);
    local_278._s_0.X = local_1b8._s_0.X;
    local_278._s_0.Y = local_1b8._s_0.Y;
    local_278._s_0.Z = local_1b8._s_0.Z;
    dStack_260 = dStack_1a0;
    local_258 = local_198;
    dStack_250 = dStack_190;
    local_248 = local_188;
  }
  bVar15 = FDataflowSelection::AnySelected(&local_318);
  if (bVar15) {
    pFVar24 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar24);
    FManagedArrayCollection::FManagedArrayCollection(&local_178,pFVar24);
    UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_7b8);
    local_ab8.Reference = &this->CuttingStaticMesh;
    local_b80.Data = (FScriptContainerElement *)0x0;
    local_b78 = 0;
    local_ab8.Index = -1;
    local_ab8.ContainerReference = (void *)0x0;
    pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_ab8);
    pTVar25 = &FDataflowInput::GetValue<TObjectPtr<UStaticMesh>_>
                         (pFVar21,param_1,local_ab8.Reference)->field0_0x0;
    if (pTVar25->DebugPtr != (UStaticMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar25->DebugPtr);
      }
      local_b88 = 0;
      `FMeshCutterDataflowNode::Evaluate'::__l17::<lambda_1>::operator()(&local_b88);
    }
    local_aa0.Reference = &this->CuttingDynamicMeshes;
    local_aa0.Index = -1;
    local_aa0.ContainerReference = (void *)0x0;
    pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_aa0);
    pTVar26 = FDataflowInput::
              GetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
                        (pFVar21,param_1,local_aa0.Reference);
    pFVar37 = (pTVar26->AllocatorInstance).Data;
    iVar18 = pTVar26->ArrayNum;
    pFVar1 = pFVar37 + (longlong)iVar18 * 8;
    while( true ) {
      if (pTVar26->ArrayNum != iVar18) {
        local_b87 = 0;
        `TCheckedPointerIterator<TObjectPtr<UDynamicMesh>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_b87);
      }
      param_1 = local_b50;
      if (pFVar37 == pFVar1) break;
      pUVar12 = *(UObject **)pFVar37;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 != (UObject *)0x0) goto LAB_14e8cf554;
      }
      else if (pUVar12 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar12);
LAB_14e8cf554:
        lVar33 = *(longlong *)&pUVar12[4].field_0x18;
        if (lVar33 != 0) {
          local_b70 = lVar33;
          if (((local_b80.Data <= (FScriptContainerElement *)&local_b70) &&
              ((FScriptContainerElement *)&local_b70 <
               local_b80.Data + (longlong)local_b78._4_4_ * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar17 = (int)local_b78;
          if ((int)local_b78 == local_b78._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b80,(int *)((longlong)&local_b78 + 4));
          }
          local_b78 = CONCAT44(local_b78._4_4_,iVar17 + 1);
          *(longlong *)(local_b80.Data + (longlong)iVar17 * 8) = local_b70;
        }
      }
      pFVar37 = pFVar37 + 8;
    }
    if (0 < (int)local_b78) {
      local_a88.Reference = &this->RandomSeed;
      local_a88.Index = -1;
      local_a88.ContainerReference = (void *)0x0;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a88);
      piVar27 = FDataflowInput::GetValue<int>(pFVar21,param_1,local_a88.Reference);
      local_a70.Index = -1;
      local_a70.ContainerReference = (void *)0x0;
      iVar18 = *piVar27;
      local_a70.Reference = &this->NumberToScatter;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a70);
      piVar27 = FDataflowInput::GetValue<int>(pFVar21,param_1,local_a70.Reference);
      local_a58.Index = -1;
      local_a58.ContainerReference = (void *)0x0;
      iVar17 = *piVar27;
      local_a58.Reference = &this->GridX;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a58);
      piVar27 = FDataflowInput::GetValue<int>(pFVar21,param_1,local_a58.Reference);
      local_a40.Index = -1;
      local_a40.ContainerReference = (void *)0x0;
      iVar11 = *piVar27;
      local_a40.Reference = &this->GridY;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a40);
      piVar27 = FDataflowInput::GetValue<int>(pFVar21,param_1,local_a40.Reference);
      local_a28.Index = -1;
      local_a28.ContainerReference = (void *)0x0;
      local_b50 = (FContext *)CONCAT44(local_b50._4_4_,*piVar27);
      local_a28.Reference = &this->GridZ;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a28);
      piVar27 = FDataflowInput::GetValue<int>(pFVar21,param_1,local_a28.Reference);
      local_a10.Index = -1;
      local_a10.ContainerReference = (void *)0x0;
      local_b58 = *piVar27;
      local_a10.Reference = &this->Variability;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a10);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_a10.Reference);
      fVar3 = *pfVar28;
      local_9f8.Reference = &this->MinScaleFactor;
      local_9f8.Index = -1;
      local_9f8.ContainerReference = (void *)0x0;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_9f8);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_9f8.Reference);
      local_9e0.Index = -1;
      local_9e0.ContainerReference = (void *)0x0;
      fVar4 = *pfVar28;
      local_9e0.Reference = &this->MaxScaleFactor;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_9e0);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_9e0.Reference);
      local_9c8.Index = -1;
      local_9c8.ContainerReference = (void *)0x0;
      fVar5 = *pfVar28;
      local_9c8.Reference = &this->RollRange;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_9c8);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_9c8.Reference);
      local_b30.Index = -1;
      local_b30.ContainerReference = (void *)0x0;
      fVar6 = *pfVar28;
      local_b30.Reference = &this->PitchRange;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b30);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_b30.Reference);
      local_b18.Index = -1;
      local_b18.ContainerReference = (void *)0x0;
      fVar7 = *pfVar28;
      local_b18.Reference = &this->YawRange;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b18);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_b18.Reference);
      local_b00.Index = -1;
      local_b00.ContainerReference = (void *)0x0;
      fVar8 = *pfVar28;
      local_b00.Reference = &this->Transform;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b00);
      pTVar29 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                          (pFVar21,param_1,local_b00.Reference);
      local_218 = (pTVar29->Rotation).XY.m128d_f64[0];
      dStack_210 = (pTVar29->Rotation).XY.m128d_f64[1];
      local_208 = (pTVar29->Rotation).ZW.m128d_f64[0];
      dStack_200 = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_1f8 = (pTVar29->Translation).XY.m128d_f64[0];
      dStack_1f0 = (pTVar29->Translation).XY.m128d_f64[1];
      local_1e8 = (pTVar29->Translation).ZW.m128d_f64[0];
      dStack_1e0 = (pTVar29->Translation).ZW.m128d_f64[1];
      local_1d8 = (pTVar29->Scale3D).XY.m128d_f64[0];
      dStack_1d0 = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_1c8 = (pTVar29->Scale3D).ZW.m128d_f64[0];
      dStack_1c0 = (pTVar29->Scale3D).ZW.m128d_f64[1];
      local_ae8.Reference = &this->ChanceToFracture;
      local_ae8.Index = -1;
      local_ae8.ContainerReference = (void *)0x0;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_ae8);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_ae8.Reference);
      local_ad0.Index = -1;
      local_ad0.ContainerReference = (void *)0x0;
      fVar9 = *pfVar28;
      local_ad0.Reference = &this->CollisionSampleSpacing;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_ad0);
      pfVar28 = FDataflowInput::GetValue<float>(pFVar21,param_1,local_ad0.Reference);
      fVar10 = *pfVar28;
      local_b86 = this->PerCutMeshSelection;
      local_b68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b68.ArrayNum = 0;
      local_b68.ArrayMax = 0;
      if (this->CutDistribution == SingleCut) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_b68.AllocatorInstance,&local_b68.ArrayMax);
        local_b68.ArrayNum = iVar17 + 1;
        lVar33 = (longlong)iVar17 * 0x60;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33) = local_218;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 8) = dStack_210;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x10) = local_208;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x10 + 8) = dStack_200;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x20) = local_1f8;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x20 + 8) = dStack_1f0;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x30) = local_1e8;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x30 + 8) = dStack_1e0;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x40) = local_1d8;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x40 + 8) = dStack_1d0;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x50) = local_1c8;
        *(double *)(local_b68.AllocatorInstance.Data + lVar33 + 0x50 + 8) = dStack_1c0;
      }
      else {
        FFractureEngineFracturing::GenerateMeshTransforms
                  (&local_b68,(TBox<double> *)&local_278._s_0,iVar18,this->CutDistribution,iVar17,
                   iVar11,(int)local_b50,local_b58,fVar3,fVar4,fVar5,this->bRandomOrientation,fVar6,
                   fVar7,fVar8);
      }
      iVar17 = (int)local_b78;
      bVar15 = this->SplitIslands;
      local_998 = local_b80.Data;
      if (((int)local_b78 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iStack_990 = iVar17;
      local_928._12_4_ = uStack_98c;
      local_928.ArrayNum = iVar17;
      local_928.DataPtr = (FDynamicMesh3 **)local_998;
      iVar18 = FFractureEngineFracturing::MeshArrayCutter
                         (&local_b68,&local_178,(FDataflowTransformSelection *)&local_318,&local_928
                          ,local_b86,iVar18,fVar9,bVar15,fVar10);
      FVar14 = FGeometryCollection::GeometryGroup;
      uVar38 = (ulonglong)iVar18;
      local_2a0.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_2a0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2a0.SelectionArray.NumBits = 0;
      local_2a0.SelectionArray.MaxBits = 0x80;
      local_2c8.GroupName = FDataflowTransformSelection::TransformGroupName;
      local_2c8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_2c8.SelectionArray.NumBits = 0;
      local_2c8.SelectionArray.MaxBits = 0x80;
      if (iVar18 != -1) {
        pFVar30 = ::FName::FName(&local_940,"TransformIndex");
        bVar15 = FManagedArrayCollection::HasAttribute(&local_178,*pFVar30,FVar14);
        FVar14 = FGeometryCollection::GeometryGroup;
        if (bVar15) {
          pFVar30 = ::FName::FName(local_938,"TransformIndex");
          pTVar31 = FManagedArrayCollection::GetAttribute<int>(&local_178,*pFVar30,FVar14);
          FDataflowSelection::InitializeFromCollection(&local_2a0,&local_178,false);
          FDataflowSelection::InitializeFromCollection(&local_2c8,&local_178,false);
          iVar17 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
          if (iVar18 < iVar17) {
            lVar33 = uVar38 * 4;
            do {
              uVar36 = (uint)uVar38;
              uVar32 = 0;
              if ((int)uVar36 < *(int *)&pTVar31->field_0x18) {
                uVar32 = ~uVar36 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar18 = *(int *)(*(longlong *)&pTVar31->field_0x10 + lVar33);
              if (((iVar18 < 0) || (local_2a0.SelectionArray.NumBits <= iVar18)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar15)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar34 = (ForElementType<unsigned_int>)&local_2a0.SelectionArray;
              if (local_2a0.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar34 = local_2a0.SelectionArray.AllocatorInstance.SecondaryData;
              }
              iVar17 = iVar18;
              if (iVar18 < 0) {
                iVar17 = iVar18 + 0x1f;
              }
              uVar38 = (ulonglong)(uVar36 + 1);
              lVar33 = lVar33 + 4;
              puVar2 = (uint *)((longlong)FVar34 + (longlong)(iVar17 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)iVar18 & 0x1f);
              iVar18 = (**(code **)(*(longlong *)pTVar31 + 0x60))(pTVar31);
            } while ((int)(uVar36 + 1) < iVar18);
          }
          if (0 < local_318.SelectionArray.NumBits) {
            do {
              if (((iVar35 < 0) || (local_318.SelectionArray.NumBits <= iVar35)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar15)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              FVar34 = (ForElementType<unsigned_int>)&local_318.SelectionArray;
              if (local_318.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar34 = local_318.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar32 = 1 << ((byte)iVar35 & 0x1f);
              iVar18 = iVar35;
              if (iVar35 < 0) {
                iVar18 = iVar35 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar34 + (longlong)(iVar18 >> 5) * 4) & uVar32) != 0) {
                if (((iVar35 < 0) || (local_2c8.SelectionArray.NumBits <= iVar35)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar15)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar34 = (ForElementType<unsigned_int>)&local_2c8.SelectionArray;
                if (local_2c8.SelectionArray.AllocatorInstance.SecondaryData !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar34 = local_2c8.SelectionArray.AllocatorInstance.SecondaryData;
                }
                puVar2 = (uint *)((longlong)FVar34 + (longlong)(iVar18 >> 5) * 4);
                *puVar2 = *puVar2 | uVar32;
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < local_318.SelectionArray.NumBits);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_178,&this->Collection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_2c8,
                 &this->TransformSelection);
      FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
                ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_2a0,
                 &this->NewGeometryTransformSelection);
      if (local_2c8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2c8.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_2a0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_2a0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_b68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b68.AllocatorInstance.Data);
      }
      if (local_b80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b80.Data);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_7b8);
      FManagedArrayCollection::~FManagedArrayCollection(&local_178);
      goto LAB_14e8d0014;
    }
    if (local_b80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b80.Data);
    }
    UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_7b8);
    FManagedArrayCollection::~FManagedArrayCollection(&local_178);
  }
  pFVar24 = &this->Collection;
  local_b48.Index = -1;
  local_b48.ContainerReference = (void *)0x0;
  local_b48.Reference = pFVar24;
  pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b48);
  if (pFVar21->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_b48.Reference,pFVar24);
  }
  else {
    local_958.Index = -1;
    local_958.ContainerReference = (void *)0x0;
    local_958.Reference = pFVar24;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_b48,&local_958);
  }
  FDataflowNode::SetValue<FDataflowTransformSelection_&,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_318,
             &this->TransformSelection);
  local_240 = FDataflowTransformSelection::TransformGroupName;
  local_228 = (void *)0x0;
  local_220 = 0;
  local_21c = 0x80;
  FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_240,
             &this->NewGeometryTransformSelection);
  if (local_228 != (void *)0x0) {
    FMemory::Free(local_228);
  }
LAB_14e8d0014:
  if (local_318.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_318.SelectionArray.AllocatorInstance.SecondaryData);
  }
  return;
}

// FMeshCutterDataflowNode @ 14e9253e0

FMeshCutterDataflowNode * __thiscall
FMeshCutterDataflowNode::FMeshCutterDataflowNode
          (FMeshCutterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  TBox<double> *pTVar3;
  TTransform<double> *pTVar4;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar5;
  TObjectPtr<UStaticMesh>_u_0 *pTVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  *(undefined ***)this = &___7FMeshCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar3 = (TBox<double> *)((longlong)local_res8 + 0x2f8);
  (pTVar3->Min).field0_0x0._s_0.X = 0.0;
  pTVar4 = (TTransform<double> *)((longlong)local_res8 + 0x360);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pTVar5 = (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)
           ((longlong)local_res8 + 0x3c0);
  *(undefined8 *)((longlong)local_res8 + 0x308) = 0;
  pTVar6 = (TObjectPtr<UStaticMesh>_u_0 *)((longlong)local_res8 + 0x3d0);
  (((TVector<double> *)((longlong)local_res8 + 0x310))->field0_0x0)._s_0.X = 0.0;
  piVar7 = (int *)((longlong)local_res8 + 0x3e4);
  *(undefined8 *)((longlong)local_res8 + 0x318) = 0;
  piVar8 = (int *)((longlong)local_res8 + 1000);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  piVar9 = (int *)((longlong)local_res8 + 0x3ec);
  *(uchar *)((longlong)local_res8 + 0x328) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x329);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x32f) = '\0';
  *(FName *)((longlong)local_res8 + 0x330) = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x350) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x354) = 0x80;
  *&(pTVar4->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x370))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x380))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x390))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x3a0))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x3b0))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x3c8) = 0;
  *pTVar6 = (TObjectPtr<UStaticMesh>_u_0)0x0;
  *(bool *)((longlong)local_res8 + 0x3d8) = false;
  *(int *)((longlong)local_res8 + 0x3dc) = 0;
  *(undefined2 *)((longlong)local_res8 + 0x3e0) = 0;
  *piVar7 = 10;
  *piVar8 = 2;
  *piVar9 = 2;
  *(undefined8 *)((longlong)local_res8 + 0x3f0) = 2;
  *(float *)((longlong)local_res8 + 0x3f8) = 0.5;
  *(float *)((longlong)local_res8 + 0x3fc) = 1.5;
  *(bool *)((longlong)local_res8 + 0x400) = true;
  *(float *)((longlong)local_res8 + 0x404) = 180.0;
  *(float *)((longlong)local_res8 + 0x408) = 180.0;
  *(undefined8 *)((longlong)local_res8 + 0x40c) = 0x43340000;
  *(float *)((longlong)local_res8 + 0x414) = 1.0;
  *(undefined2 *)((longlong)local_res8 + 0x418) = 1;
  *(float *)((longlong)local_res8 + 0x41c) = 50.0;
  *(FName *)((longlong)local_res8 + 0x420) = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x438) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x440) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x444) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar9;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f4);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3fc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x404);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x408);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x40c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x410);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x414);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x41c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar2 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar2 = *pbVar2 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_78.Reference = (void *)((longlong)this_00 + 0x330);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x420);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  return (FMeshCutterDataflowNode *)this_00;
}

// FMeshCutterDataflowNode @ 14e9259f0

FMeshCutterDataflowNode * __thiscall
FMeshCutterDataflowNode::FMeshCutterDataflowNode(FMeshCutterDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FMeshCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->CuttingDynamicMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CuttingDynamicMeshes).ArrayNum = 0;
  (this->CuttingDynamicMeshes).ArrayMax = 0;
  (this->CuttingStaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  this->bUseHiRes = false;
  this->LODLevel = 0;
  this->CutDistribution = SingleCut;
  this->PerCutMeshSelection = All;
  this->NumberToScatter = 10;
  this->GridX = 2;
  this->GridY = 2;
  this->GridZ = 2;
  this->Variability = 0.0;
  this->MinScaleFactor = 0.5;
  this->MaxScaleFactor = 1.5;
  this->bRandomOrientation = true;
  this->RollRange = 180.0;
  this->PitchRange = 180.0;
  this->YawRange = 180.0;
  this->RandomSeed = 0;
  this->ChanceToFracture = 1.0;
  this->SplitIslands = true;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->NewGeometryTransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->NewGeometryTransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->NewGeometryTransformSelection).field_0x24 = 0x80;
  return this;
}

// operator() @ 15059b4d0

bool __thiscall `FMeshCutterDataflowNode::Evaluate'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4998799095922424719>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4998799095922424719>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

