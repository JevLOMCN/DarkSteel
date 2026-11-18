// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e837e30

UScriptStruct * __cdecl FFloatToIntDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToIntDataflowNode,(UObject *)pUVar1,
                         L"FloatToIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton;
}

// GetType @ 14e837f60

FName __thiscall FFloatToIntDataflowNode::GetType(FFloatToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatToIntDataflowNode");
  return in_RDX;
}

// IsA @ 14e837f90

bool __thiscall FFloatToIntDataflowNode::IsA(FFloatToIntDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatToIntDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e837ff8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e837ff8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e838016;
      }
    }
  }
  bVar5 = true;
LAB_14e838016:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e838130

FStructOnScope * __thiscall FFloatToIntDataflowNode::NewStructOnScope(FFloatToIntDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatToIntDataflowNode,(UObject *)pUVar2,
                           L"FloatToIntDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8381c0

void __thiscall
FFloatToIntDataflowNode::SerializeInternal(FFloatToIntDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToIntDataflowNode,(UObject *)pUVar1,
                         L"FloatToIntDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83823d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e838250

FName __thiscall FFloatToIntDataflowNode::GetDisplayName(FFloatToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatToInt");
  return in_RDX;
}

// GetCategory @ 14e838370

FName __thiscall FFloatToIntDataflowNode::GetCategory(FFloatToIntDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Conversions");
  return in_RDX;
}

// GetTags @ 14e8383e0

FString * __thiscall
FFloatToIntDataflowNode::GetTags(FFloatToIntDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e838450

UScriptStruct * __thiscall FFloatToIntDataflowNode::TypedScriptStruct(FFloatToIntDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatToIntDataflowNode,(UObject *)pUVar1,
                         L"FloatToIntDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatToIntDataflowNode.OuterSingleton;
}

// Evaluate @ 14e838600

void __thiscall
FFloatToIntDataflowNode::Evaluate
          (FFloatToIntDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  EFloatToIntFunctionEnum EVar2;
  undefined1 *puVar3;
  FDataflowInput *this_00;
  float *pfVar4;
  undefined1 auVar5 [16];
  int local_res8 [2];
  FConnectionReference local_28;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar3 == &this->Int) {
    local_28.Reference = &this->Float;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar4 = FDataflowInput::GetValue<float>(this_00,param_1,local_28.Reference);
    fVar1 = *pfVar4;
    EVar2 = this->Function;
    if (EVar2 == Dataflow_FloatToInt_Function_Floor) {
      local_res8[0] = (int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1;
    }
    else if (EVar2 == Dataflow_FloatToInt_Function_Ceil) {
      local_res8[0] = -((int)ROUND(__real_bf000000 - (fVar1 + fVar1)) >> 1);
    }
    else if (EVar2 == Dataflow_FloatToInt_Function_Round) {
      local_res8[0] = (int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1;
    }
    else {
      if (EVar2 != Dataflow_FloatToInt_Function_Truncate) {
        return;
      }
      auVar5 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),3);
      local_res8[0] = (int)auVar5._0_4_;
    }
    FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,&this->Int);
  }
  return;
}

