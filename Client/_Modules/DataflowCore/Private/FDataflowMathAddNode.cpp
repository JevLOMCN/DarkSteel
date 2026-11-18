// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443eaec0

UScriptStruct * __cdecl FDataflowMathAddNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode,(UObject *)pUVar1,
                         L"DataflowMathAddNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton;
}

// GetType @ 1443eaf90

FName __thiscall FDataflowMathAddNode::GetType(FDataflowMathAddNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathAddNode");
  return in_RDX;
}

// IsA @ 1443eafe0

bool __thiscall FDataflowMathAddNode::IsA(FDataflowMathAddNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathAddNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443eb048;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443eb048:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443eb066;
      }
    }
  }
  bVar5 = true;
LAB_1443eb066:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443eb0a0

FStructOnScope * __thiscall FDataflowMathAddNode::NewStructOnScope(FDataflowMathAddNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode,(UObject *)pUVar2,
                           L"DataflowMathAddNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443eb120

void __thiscall
FDataflowMathAddNode::SerializeInternal(FDataflowMathAddNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode,(UObject *)pUVar1,
                         L"DataflowMathAddNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443eb19d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443eb1b0

FName __thiscall FDataflowMathAddNode::GetDisplayName(FDataflowMathAddNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Add");
  return in_RDX;
}

// GetCategory @ 1443eb1e0

FName __thiscall FDataflowMathAddNode::GetCategory(FDataflowMathAddNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443eb210

FString * __thiscall
FDataflowMathAddNode::GetTags(FDataflowMathAddNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"+ Addition Plus");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443eb240

UScriptStruct * __thiscall FDataflowMathAddNode::TypedScriptStruct(FDataflowMathAddNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAddNode,(UObject *)pUVar1,
                         L"DataflowMathAddNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathAddNode.OuterSingleton;
}

// ComputeResult @ 1443eb280

double __thiscall
FDataflowMathAddNode::ComputeResult
          (FDataflowMathAddNode *this,FContext *param_1,double param_2,double param_3)

{
  return param_2 + param_3;
}

// FDataflowMathAddNode @ 14442ccd0

FDataflowMathAddNode * __thiscall
FDataflowMathAddNode::FDataflowMathAddNode
          (FDataflowMathAddNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  *(undefined ***)this = &___7FDataflowMathAddNode__6B_;
  FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathTwoInputsOperatorNode *)this);
  return this;
}

