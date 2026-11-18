// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e893fb0

UScriptStruct * __cdecl FExpandBoundingBoxDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"ExpandBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton;
}

// GetType @ 14e894190

FName __thiscall FExpandBoundingBoxDataflowNode::GetType(FExpandBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FExpandBoundingBoxDataflowNode");
  return in_RDX;
}

// IsA @ 14e8941c0

bool __thiscall
FExpandBoundingBoxDataflowNode::IsA(FExpandBoundingBoxDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FExpandBoundingBoxDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e894228;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e894228:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e894246;
      }
    }
  }
  bVar5 = true;
LAB_14e894246:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e894280

FStructOnScope * __thiscall
FExpandBoundingBoxDataflowNode::NewStructOnScope(FExpandBoundingBoxDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingBoxDataflowNode,
                           (UObject *)pUVar2,L"ExpandBoundingBoxDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e894340

void __thiscall
FExpandBoundingBoxDataflowNode::SerializeInternal
          (FExpandBoundingBoxDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"ExpandBoundingBoxDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8943bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8943d0

FName __thiscall
FExpandBoundingBoxDataflowNode::GetDisplayName(FExpandBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakBox");
  return in_RDX;
}

// GetCategory @ 14e894440

FName __thiscall FExpandBoundingBoxDataflowNode::GetCategory(FExpandBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Box");
  return in_RDX;
}

// GetTags @ 14e894470

FString * __thiscall
FExpandBoundingBoxDataflowNode::GetTags
          (FExpandBoundingBoxDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Bounds Bounding Expand Min Max Center Half Extents Volume");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8944b0

UScriptStruct * __thiscall
FExpandBoundingBoxDataflowNode::TypedScriptStruct(FExpandBoundingBoxDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"ExpandBoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandBoundingBoxDataflowNode.OuterSingleton;
}

// Evaluate @ 14e894700

void __thiscall
FExpandBoundingBoxDataflowNode::Evaluate
          (FExpandBoundingBoxDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TBox<double> *pTVar7;
  undefined1 *puVar8;
  TVector<double> *pTVar9;
  float local_a8 [2];
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 TStack_70;
  undefined8 local_58;
  
  pTVar7 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                     ((FDataflowNode *)this,param_1,&this->BoundingBox);
  dVar1 = (pTVar7->Min).field0_0x0._s_0.X;
  dVar2 = (pTVar7->Min).field0_0x0._s_0.Y;
  dVar3 = (pTVar7->Min).field0_0x0._s_0.Z;
  dVar4 = (pTVar7->Max).field0_0x0._s_0.X;
  dVar5 = (pTVar7->Max).field0_0x0._s_0.Y;
  dVar6 = (pTVar7->Max).field0_0x0._s_0.Z;
  local_58._0_1_ = pTVar7->IsValid;
  local_58._1_1_ = pTVar7->Pad[0];
  local_58._2_1_ = pTVar7->Pad[1];
  local_58._3_1_ = pTVar7->Pad[2];
  local_58._4_1_ = pTVar7->Pad[3];
  local_58._5_1_ = pTVar7->Pad[4];
  local_58._6_1_ = pTVar7->Pad[5];
  local_58._7_1_ = pTVar7->Pad[6];
  local_88._s_0.X = dVar1;
  local_88._s_0.Y = dVar2;
  local_88._s_0.Z = dVar3;
  TStack_70._s_0.X = dVar4;
  TStack_70._s_0.Y = dVar5;
  TStack_70._s_0.Z = dVar6;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar8 == &this->Min) {
    FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,(TVector<double> *)&local_88._s_0,&this->Min);
  }
  else {
    puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TVector<double> *)puVar8 == &this->Max) {
      FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>
                ((FDataflowNode *)this,param_1,(TVector<double> *)&TStack_70._s_0,&this->Max);
    }
    else {
      pTVar9 = &this->Center;
      puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((TVector<double> *)puVar8 == pTVar9) {
        local_a0._s_0.Y = (dVar2 + dVar5) * __real_3fe0000000000000;
        local_a0._s_0.Z = (dVar3 + dVar6) * __real_3fe0000000000000;
        local_a0._s_0.X = (dVar1 + dVar4) * __real_3fe0000000000000;
      }
      else {
        pTVar9 = &this->HalfExtents;
        puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((TVector<double> *)puVar8 != pTVar9) {
          puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
          if ((float *)puVar8 != &this->Volume) {
            return;
          }
          local_a8[0] = (float)((dVar5 - dVar2) * (dVar4 - dVar1) * (dVar6 - dVar3));
          FDataflowNode::SetValue<float,float>((FDataflowNode *)this,param_1,local_a8,&this->Volume)
          ;
          return;
        }
        local_a0._s_0.X = (dVar4 - dVar1) * __real_3fe0000000000000;
        local_a0._s_0.Y = (dVar5 - dVar2) * __real_3fe0000000000000;
        local_a0._s_0.Z = (dVar6 - dVar3) * __real_3fe0000000000000;
      }
      FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
                ((FDataflowNode *)this,param_1,(TVector<double> *)&local_a0._s_0,pTVar9);
    }
  }
  return;
}

// FExpandBoundingBoxDataflowNode @ 14e91c180

FExpandBoundingBoxDataflowNode * __thiscall
FExpandBoundingBoxDataflowNode::FExpandBoundingBoxDataflowNode
          (FExpandBoundingBoxDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FExpandBoundingBoxDataflowNode__6B_;
  local_68.Reference = &this->BoundingBox;
  (((TBox<double> *)local_68.Reference)->Min).field0_0x0._s_0.X = 0.0;
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
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Min).field0_0x0._s_0.Z = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.Z = 0.0;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->HalfExtents).field0_0x0._s_0.X = 0.0;
  (this->HalfExtents).field0_0x0._s_0.Y = 0.0;
  (this->HalfExtents).field0_0x0._s_0.Z = 0.0;
  this->Volume = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Min;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Max;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Center;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->HalfExtents;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Volume;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FExpandBoundingBoxDataflowNode @ 14e91c3e0

FExpandBoundingBoxDataflowNode * __thiscall
FExpandBoundingBoxDataflowNode::FExpandBoundingBoxDataflowNode(FExpandBoundingBoxDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FExpandBoundingBoxDataflowNode__6B_;
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
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Min).field0_0x0._s_0.Z = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.Z = 0.0;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  (this->HalfExtents).field0_0x0._s_0.X = 0.0;
  (this->HalfExtents).field0_0x0._s_0.Y = 0.0;
  (this->HalfExtents).field0_0x0._s_0.Z = 0.0;
  this->Volume = 0.0;
  return this;
}

