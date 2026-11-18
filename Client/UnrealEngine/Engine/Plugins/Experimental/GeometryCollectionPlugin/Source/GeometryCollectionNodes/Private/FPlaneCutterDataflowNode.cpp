// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8bb380

UScriptStruct * __cdecl FPlaneCutterDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton;
}

// GetType @ 14e8bb6f0

FName __thiscall FPlaneCutterDataflowNode::GetType(FPlaneCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPlaneCutterDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bb720

bool __thiscall FPlaneCutterDataflowNode::IsA(FPlaneCutterDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FPlaneCutterDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bb788;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bb788:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bb7a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8bb7a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bb7e0

FStructOnScope * __thiscall
FPlaneCutterDataflowNode::NewStructOnScope(FPlaneCutterDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode,(UObject *)pUVar2,
                           L"PlaneCutterDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bb8a0

void __thiscall
FPlaneCutterDataflowNode::SerializeInternal(FPlaneCutterDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bb91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bb930

FName __thiscall FPlaneCutterDataflowNode::GetDisplayName(FPlaneCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PlaneCutter");
  return in_RDX;
}

// GetCategory @ 14e8bb960

FName __thiscall FPlaneCutterDataflowNode::GetCategory(FPlaneCutterDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Fracture");
  return in_RDX;
}

// GetTags @ 14e8bb990

FString * __thiscall
FPlaneCutterDataflowNode::GetTags(FPlaneCutterDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bb9c0

UScriptStruct * __thiscall
FPlaneCutterDataflowNode::TypedScriptStruct(FPlaneCutterDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneCutterDataflowNode,(UObject *)pUVar1,
                         L"PlaneCutterDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneCutterDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bbb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlaneCutterDataflowNode::Evaluate
          (FPlaneCutterDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 *puVar12;
  FDataflowSelection *this_00;
  FDataflowInput *pFVar13;
  FManagedArrayCollection *pFVar14;
  float *pfVar15;
  bool *pbVar16;
  int *piVar17;
  TBox<double> *pTVar18;
  FManagedArrayCollection *pFVar19;
  undefined1 auStackY_258 [32];
  FConnectionReference local_1c8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1a8;
  FDataflowSelection *local_198;
  FDataflowSelection local_190;
  FManagedArrayCollection local_168;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar14 = &this->Collection;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar12 == pFVar14) {
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_1c8.ContainerReference = (void *)0x0;
    local_1c8.Index = -1;
    local_1c8.Reference = &this->TransformSelection;
    local_198 = this_00;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
    if ((pFVar13->Connection == (FDataflowOutput *)0x0) ||
       (bVar11 = FDataflowSelection::AnySelected(this_00), !bVar11)) {
      pFVar19 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar14);
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,pFVar19,pFVar14);
    }
    else {
      pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,pFVar14);
      FManagedArrayCollection::FManagedArrayCollection(&local_168,pFVar14);
      local_1c8.Reference = &this->CollisionSampleSpacing;
      local_1a8.DataPtr = (TTransform<double> *)0x0;
      local_1a8._8_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar1 = *pfVar15;
      local_1c8.Reference = &this->AddSamplesForCollision;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pbVar16 = FDataflowInput::GetValue<bool>(pFVar13,param_1,local_1c8.Reference);
      bVar11 = *pbVar16;
      local_1c8.Reference = &this->PointSpacing;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar2 = *pfVar15;
      local_1c8.Reference = &this->OctaveNumber;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      piVar17 = FDataflowInput::GetValue<int>(pFVar13,param_1,local_1c8.Reference);
      iVar9 = *piVar17;
      local_1c8.Reference = &this->Lacunarity;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar3 = *pfVar15;
      local_1c8.Reference = &this->Persistence;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar4 = *pfVar15;
      local_1c8.Reference = &this->Frequency;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar5 = *pfVar15;
      local_1c8.Reference = &this->Amplitude;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar6 = *pfVar15;
      local_1c8.Reference = &this->Grout;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      fVar7 = *pfVar15;
      local_1c8.Reference = &this->RandomSeed;
      local_1c8.Index = -1;
      local_1c8.ContainerReference = (void *)0x0;
      pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
      pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1c8.Reference);
      iVar10 = this->NumPlanes;
      fVar8 = *pfVar15;
      pTVar18 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                          ((FDataflowNode *)this,param_1,&this->BoundingBox);
      FDataflowSelection::FDataflowSelection(&local_190,local_198);
      FFractureEngineFracturing::PlaneCutter
                (&local_168,(FDataflowTransformSelection *)&local_190,pTVar18,
                 &UE::Math::TTransform<double>::Identity,iVar10,(int)fVar8,__real_3f800000,true,
                 fVar7,fVar6,fVar5,fVar4,fVar3,iVar9,fVar2,bVar11,fVar1,&local_1a8);
      FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_168,&this->Collection);
      FManagedArrayCollection::~FManagedArrayCollection(&local_168);
    }
  }
  return;
}

// FPlaneCutterDataflowNode @ 14e926fa0

FPlaneCutterDataflowNode * __thiscall
FPlaneCutterDataflowNode::FPlaneCutterDataflowNode
          (FPlaneCutterDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  TBox<double> *pTVar2;
  FName *pFVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  FName this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FPlaneCutterDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  pTVar2 = (TBox<double> *)((longlong)local_res8 + 0x2f8);
  (pTVar2->Min).field0_0x0._s_0.X = 0.0;
  pFVar3 = (FName *)((longlong)local_res8 + 0x330);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  pfVar4 = (float *)((longlong)local_res8 + 0x360);
  *(undefined8 *)((longlong)local_res8 + 0x308) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x364);
  (((TVector<double> *)((longlong)local_res8 + 0x310))->field0_0x0)._s_0.X = 0.0;
  piVar6 = (int *)((longlong)local_res8 + 0x358);
  *(undefined8 *)((longlong)local_res8 + 0x318) = 0;
  pfVar7 = (float *)((longlong)local_res8 + 0x35c);
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  pfVar8 = (float *)((longlong)local_res8 + 0x368);
  *(uchar *)((longlong)local_res8 + 0x328) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x329);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x32d))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x32f) = '\0';
  *pFVar3 = FDataflowTransformSelection::TransformGroupName;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x350) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x354) = 0x80;
  *pfVar4 = 0.0;
  *pfVar5 = 0.0;
  *(bool *)((longlong)local_res8 + 0x37c) = false;
  *piVar6 = 1;
  *pfVar7 = -1.0;
  *pfVar8 = 0.1;
  *(float *)((longlong)local_res8 + 0x36c) = 0.5;
  *(float *)((longlong)local_res8 + 0x370) = 2.0;
  *(int *)((longlong)local_res8 + 0x374) = 4;
  *(float *)((longlong)local_res8 + 0x378) = 10.0;
  *(float *)((longlong)local_res8 + 0x380) = 50.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar6;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar4;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x36c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x370);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x374);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x37c);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x380);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FPlaneCutterDataflowNode *)this_00;
}

// FPlaneCutterDataflowNode @ 14e927340

FPlaneCutterDataflowNode * __thiscall
FPlaneCutterDataflowNode::FPlaneCutterDataflowNode(FPlaneCutterDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FPlaneCutterDataflowNode__6B_;
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
  this->NumPlanes = 1;
  this->RandomSeed = -1.0;
  this->Grout = 0.0;
  this->Amplitude = 0.0;
  this->Frequency = 0.1;
  this->Persistence = 0.5;
  this->Lacunarity = 2.0;
  this->OctaveNumber = 4;
  this->PointSpacing = 10.0;
  this->AddSamplesForCollision = false;
  this->CollisionSampleSpacing = 50.0;
  return this;
}

