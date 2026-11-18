// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e896e20

UScriptStruct * __cdecl FExpandVectorDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandVectorDataflowNode,(UObject *)pUVar1,
                         L"ExpandVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton;
}

// GetType @ 14e896ef0

FName __thiscall FExpandVectorDataflowNode::GetType(FExpandVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FExpandVectorDataflowNode");
  return in_RDX;
}

// IsA @ 14e896f20

bool __thiscall FExpandVectorDataflowNode::IsA(FExpandVectorDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FExpandVectorDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e896f88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e896f88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e896fa6;
      }
    }
  }
  bVar5 = true;
LAB_14e896fa6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e896fe0

FStructOnScope * __thiscall
FExpandVectorDataflowNode::NewStructOnScope(FExpandVectorDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FExpandVectorDataflowNode,(UObject *)pUVar2,
                           L"ExpandVectorDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e897070

void __thiscall
FExpandVectorDataflowNode::SerializeInternal(FExpandVectorDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandVectorDataflowNode,(UObject *)pUVar1,
                         L"ExpandVectorDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8970ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e897100

FName __thiscall FExpandVectorDataflowNode::GetDisplayName(FExpandVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakVector");
  return in_RDX;
}

// GetCategory @ 14e897130

FName __thiscall FExpandVectorDataflowNode::GetCategory(FExpandVectorDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Vector");
  return in_RDX;
}

// GetTags @ 14e897160

FString * __thiscall
FExpandVectorDataflowNode::GetTags(FExpandVectorDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Expand X Y Z");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e897190

UScriptStruct * __thiscall
FExpandVectorDataflowNode::TypedScriptStruct(FExpandVectorDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandVectorDataflowNode,(UObject *)pUVar1,
                         L"ExpandVectorDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandVectorDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8971f0

void __thiscall
FExpandVectorDataflowNode::Evaluate
          (FExpandVectorDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  void *pvVar1;
  TVector<double> *pTVar2;
  undefined4 *puVar3;
  FDataflowInput *this_00;
  TVector<double> *pTVar4;
  undefined1 *puVar5;
  float *pfVar6;
  float local_res8 [2];
  FConnectionReference local_38 [2];
  
  local_38[0].Reference = &this->Vector;
  local_38[0].Index = -1;
  local_38[0].ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,local_38);
  pTVar4 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                     (this_00,param_1,local_38[0].Reference);
  pfVar6 = &this->X;
  local_38[0].ContainerReference = (void *)(pTVar4->field0_0x0)._s_0.Z;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  pTVar2 = pTVar4;
  puVar3 = (undefined4 *)((longlong)&pTVar4->field0_0x0 + 4);
  if ((float *)puVar5 != pfVar6) {
    pfVar6 = &this->Y;
    puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    pTVar2 = (TVector<double> *)((longlong)&pTVar4->field0_0x0 + 8);
    puVar3 = (undefined4 *)((longlong)&pTVar4->field0_0x0 + 0xc);
    if ((float *)puVar5 != pfVar6) {
      pfVar6 = &this->Z;
      puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      pvVar1 = local_38[0].ContainerReference;
      if ((float *)puVar5 != pfVar6) {
        return;
      }
      goto LAB_14e8972ad;
    }
  }
  pvVar1 = (void *)CONCAT44(*puVar3,*(undefined4 *)&pTVar2->field0_0x0);
LAB_14e8972ad:
  local_res8[0] = (float)(double)pvVar1;
  FDataflowNode::SetValue<float,float>((FDataflowNode *)this,param_1,local_res8,pfVar6);
  return;
}

// FExpandVectorDataflowNode @ 14e91c640

FExpandVectorDataflowNode * __thiscall
FExpandVectorDataflowNode::FExpandVectorDataflowNode
          (FExpandVectorDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FExpandVectorDataflowNode__6B_;
  local_58.Reference = &this->Vector;
  this->X = 0.0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->Vector).field0_0x0._s_0.Y = 0.0;
  (this->Vector).field0_0x0._s_0.Z = 0.0;
  this->Y = 0.0;
  this->Z = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->X;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Y;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Z;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

