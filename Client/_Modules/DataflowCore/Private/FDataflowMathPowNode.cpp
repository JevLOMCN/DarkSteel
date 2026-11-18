// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f8ad0

UScriptStruct * __cdecl FDataflowMathPowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode,(UObject *)pUVar1,
                         L"DataflowMathPowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton;
}

// GetType @ 1443f8b50

FName __thiscall FDataflowMathPowNode::GetType(FDataflowMathPowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathPowNode");
  return in_RDX;
}

// IsA @ 1443f8b80

bool __thiscall FDataflowMathPowNode::IsA(FDataflowMathPowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathPowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f8be8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f8be8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f8c06;
      }
    }
  }
  bVar5 = true;
LAB_1443f8c06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f8c40

FStructOnScope * __thiscall FDataflowMathPowNode::NewStructOnScope(FDataflowMathPowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode,(UObject *)pUVar2,
                           L"DataflowMathPowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f8cc0

void __thiscall
FDataflowMathPowNode::SerializeInternal(FDataflowMathPowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode,(UObject *)pUVar1,
                         L"DataflowMathPowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f8d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f8d50

FName __thiscall FDataflowMathPowNode::GetDisplayName(FDataflowMathPowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Pow");
  return in_RDX;
}

// GetCategory @ 1443f8d80

FName __thiscall FDataflowMathPowNode::GetCategory(FDataflowMathPowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f8db0

FString * __thiscall
FDataflowMathPowNode::GetTags(FDataflowMathPowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Power Exponent");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f8de0

UScriptStruct * __thiscall FDataflowMathPowNode::TypedScriptStruct(FDataflowMathPowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathPowNode,(UObject *)pUVar1,
                         L"DataflowMathPowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathPowNode.OuterSingleton;
}

// ComputeResult @ 1443f8e70

double __thiscall
FDataflowMathPowNode::ComputeResult
          (FDataflowMathPowNode *this,FContext *param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = pow(param_2,param_3);
  return dVar1;
}

// FDataflowMathPowNode @ 14442dfd0

FDataflowMathPowNode * __thiscall
FDataflowMathPowNode::FDataflowMathPowNode
          (FDataflowMathPowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  *(undefined ***)this = &___7FDataflowMathPowNode__6B_;
  FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathTwoInputsOperatorNode *)this);
  return this;
}

