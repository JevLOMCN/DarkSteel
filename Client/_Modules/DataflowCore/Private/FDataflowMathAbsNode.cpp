// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f6960

UScriptStruct * __cdecl FDataflowMathAbsNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode,(UObject *)pUVar1,
                         L"DataflowMathAbsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton;
}

// GetType @ 1443f6a20

FName __thiscall FDataflowMathAbsNode::GetType(FDataflowMathAbsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathAbsNode");
  return in_RDX;
}

// IsA @ 1443f6a50

bool __thiscall FDataflowMathAbsNode::IsA(FDataflowMathAbsNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathAbsNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f6ab8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f6ab8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f6ad6;
      }
    }
  }
  bVar5 = true;
LAB_1443f6ad6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f6b10

FStructOnScope * __thiscall FDataflowMathAbsNode::NewStructOnScope(FDataflowMathAbsNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode,(UObject *)pUVar2,
                           L"DataflowMathAbsNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f6b90

void __thiscall
FDataflowMathAbsNode::SerializeInternal(FDataflowMathAbsNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode,(UObject *)pUVar1,
                         L"DataflowMathAbsNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f6c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f6c60

FName __thiscall FDataflowMathAbsNode::GetDisplayName(FDataflowMathAbsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Abs");
  return in_RDX;
}

// GetCategory @ 1443f6c90

FName __thiscall FDataflowMathAbsNode::GetCategory(FDataflowMathAbsNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f6cc0

FString * __thiscall
FDataflowMathAbsNode::GetTags(FDataflowMathAbsNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Absolute Positive");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f6cf0

UScriptStruct * __thiscall FDataflowMathAbsNode::TypedScriptStruct(FDataflowMathAbsNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathAbsNode,(UObject *)pUVar1,
                         L"DataflowMathAbsNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathAbsNode.OuterSingleton;
}

// ComputeResult @ 1443f6d40

double __thiscall
FDataflowMathAbsNode::ComputeResult(FDataflowMathAbsNode *this,FContext *param_1,double param_2)

{
  return (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// FDataflowMathAbsNode @ 14442cc80

FDataflowMathAbsNode * __thiscall
FDataflowMathAbsNode::FDataflowMathAbsNode
          (FDataflowMathAbsNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathAbsNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

