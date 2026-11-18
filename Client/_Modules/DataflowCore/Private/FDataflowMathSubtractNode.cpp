// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443ec0f0

UScriptStruct * __cdecl FDataflowMathSubtractNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode,(UObject *)pUVar1,
                         L"DataflowMathSubtractNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton;
}

// GetType @ 1443ec180

FName __thiscall FDataflowMathSubtractNode::GetType(FDataflowMathSubtractNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathSubtractNode");
  return in_RDX;
}

// IsA @ 1443ec1b0

bool __thiscall FDataflowMathSubtractNode::IsA(FDataflowMathSubtractNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathSubtractNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ec218;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ec218:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ec236;
      }
    }
  }
  bVar5 = true;
LAB_1443ec236:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443ec270

FStructOnScope * __thiscall
FDataflowMathSubtractNode::NewStructOnScope(FDataflowMathSubtractNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode,(UObject *)pUVar2,
                           L"DataflowMathSubtractNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443ec2f0

void __thiscall
FDataflowMathSubtractNode::SerializeInternal(FDataflowMathSubtractNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode,(UObject *)pUVar1,
                         L"DataflowMathSubtractNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443ec36d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443ec380

FName __thiscall FDataflowMathSubtractNode::GetDisplayName(FDataflowMathSubtractNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Subtract");
  return in_RDX;
}

// GetCategory @ 1443ec3b0

FName __thiscall FDataflowMathSubtractNode::GetCategory(FDataflowMathSubtractNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443ec3e0

FString * __thiscall
FDataflowMathSubtractNode::GetTags(FDataflowMathSubtractNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"- Subtraction Minus");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443ec410

UScriptStruct * __thiscall
FDataflowMathSubtractNode::TypedScriptStruct(FDataflowMathSubtractNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSubtractNode,(UObject *)pUVar1,
                         L"DataflowMathSubtractNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathSubtractNode.OuterSingleton;
}

// ComputeResult @ 1443ec450

double __thiscall
FDataflowMathSubtractNode::ComputeResult
          (FDataflowMathSubtractNode *this,FContext *param_1,double param_2,double param_3)

{
  return param_2 - param_3;
}

// FDataflowMathSubtractNode @ 14442e2f0

FDataflowMathSubtractNode * __thiscall
FDataflowMathSubtractNode::FDataflowMathSubtractNode
          (FDataflowMathSubtractNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined8 *)&this->field_0x258 = 0;
  *(undefined ***)this = &___7FDataflowMathSubtractNode__6B_;
  FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathTwoInputsOperatorNode *)this);
  return this;
}

