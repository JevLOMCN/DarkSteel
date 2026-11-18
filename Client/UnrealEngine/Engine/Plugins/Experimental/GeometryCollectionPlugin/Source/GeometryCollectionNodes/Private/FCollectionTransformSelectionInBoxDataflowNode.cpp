// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e84c600

UScriptStruct * __cdecl FCollectionTransformSelectionInBoxDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
         OuterSingleton;
}

// GetType @ 14e84c9e0

FName __thiscall
FCollectionTransformSelectionInBoxDataflowNode::GetType
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionInBoxDataflowNode");
  return in_RDX;
}

// IsA @ 14e84ca20

bool __thiscall
FCollectionTransformSelectionInBoxDataflowNode::IsA
          (FCollectionTransformSelectionInBoxDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionInBoxDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84ca88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84ca88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84caa6;
      }
    }
  }
  bVar5 = true;
LAB_14e84caa6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84cae0

FStructOnScope * __thiscall
FCollectionTransformSelectionInBoxDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode,
                           (UObject *)pUVar2,L"CollectionTransformSelectionInBoxDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84cb60

void __thiscall
FCollectionTransformSelectionInBoxDataflowNode::SerializeInternal
          (FCollectionTransformSelectionInBoxDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84cbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84cc00

FName __thiscall
FCollectionTransformSelectionInBoxDataflowNode::GetDisplayName
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectInBox");
  return in_RDX;
}

// GetCategory @ 14e84cc60

FName __thiscall
FCollectionTransformSelectionInBoxDataflowNode::GetCategory
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e84cc90

FString * __thiscall
FCollectionTransformSelectionInBoxDataflowNode::GetTags
          (FCollectionTransformSelectionInBoxDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84cd40

UScriptStruct * __thiscall
FCollectionTransformSelectionInBoxDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInBoxDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e84d1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionInBoxDataflowNode::Evaluate
          (FCollectionTransformSelectionInBoxDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  ESelectSubjectTypeEnum EVar1;
  undefined1 *puVar2;
  FManagedArrayCollection *pFVar3;
  TBox<double> *pTVar4;
  FDataflowInput *pFVar5;
  TTransform<double> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStack_348 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_318;
  FConnectionReference local_308;
  FConnectionReference local_2f0;
  FCollectionTransformSelectionFacade local_2d8;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_348;
  pFVar3 = &this->Collection;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar2 != &this->TransformSelection) {
    puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar2 != pFVar3) {
      return;
    }
    local_308.ContainerReference = (void *)0x0;
    local_308.Index = -1;
    local_308.Reference = pFVar3;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_308);
    if (pFVar5->Connection != (FDataflowOutput *)0x0) {
      local_2f0.Index = -1;
      local_2f0.ContainerReference = (void *)0x0;
      local_2f0.Reference = pFVar3;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_308,&local_2f0);
      return;
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_308.Reference,pFVar3);
    return;
  }
  pFVar3 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar3);
  pTVar4 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                     ((FDataflowNode *)this,param_1,&this->Box);
  local_2f0.Reference = &this->Transform;
  local_2f0.Index = -1;
  local_2f0.ContainerReference = (void *)0x0;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2f0);
  pTVar6 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                     (pFVar5,param_1,local_2f0.Reference);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_2d8,pFVar3);
  EVar1 = this->Type;
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0;
  if (EVar1 == Dataflow_SelectSubjectType_Vertices) {
    pTVar7 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectVerticesInBox
                       (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_308,pTVar4,
                        pTVar6,this->bAllVerticesMustContainedInBox);
  }
  else if (EVar1 == Dataflow_SelectSubjectType_BoundingBox) {
    pTVar7 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::
             SelectBoundingBoxInBox
                       (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_308,pTVar4,
                        pTVar6);
  }
  else {
    if (EVar1 != Dataflow_SelectSubjectType_Centroid) goto LAB_14e84d333;
    pTVar7 = GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectCentroidInBox
                       (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_308,pTVar4,
                        pTVar6);
  }
  if (&local_318 != pTVar7) {
    if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.AllocatorInstance.Data);
    }
    local_318.AllocatorInstance.Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_318.ArrayNum = pTVar7->ArrayNum;
    local_318.ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_308.Reference != (void *)0x0) {
    FMemory::Free(local_308.Reference);
  }
LAB_14e84d333:
  local_68.GroupName = FDataflowTransformSelection::TransformGroupName;
  local_68.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.SelectionArray.NumBits = 0;
  local_68.SelectionArray.MaxBits = 0x80;
  FDataflowSelection::InitializeFromCollection(&local_68,pFVar3,false);
  FDataflowSelection::SetFromArray(&local_68,&local_318);
  FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_68,
             &this->TransformSelection);
  if (local_68.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
  }
  if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AllocatorInstance.Data);
  }
  return;
}

// FCollectionTransformSelectionInBoxDataflowNode @ 14e9180e0

FCollectionTransformSelectionInBoxDataflowNode * __thiscall
FCollectionTransformSelectionInBoxDataflowNode::FCollectionTransformSelectionInBoxDataflowNode
          (FCollectionTransformSelectionInBoxDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionInBoxDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Box).Min.field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  pFVar1 = &this->TransformSelection;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar9;
  this->Type = Dataflow_SelectSubjectType_Centroid;
  this->bAllVerticesMustContainedInBox = true;
  uVar10 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar10;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Box;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Transform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_68);
  }
  return this;
}

// FCollectionTransformSelectionInBoxDataflowNode @ 14e9182f0

FCollectionTransformSelectionInBoxDataflowNode * __thiscall
FCollectionTransformSelectionInBoxDataflowNode::FCollectionTransformSelectionInBoxDataflowNode
          (FCollectionTransformSelectionInBoxDataflowNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionInBoxDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Box).Min.field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->Type = Dataflow_SelectSubjectType_Centroid;
  this->bAllVerticesMustContainedInBox = true;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

