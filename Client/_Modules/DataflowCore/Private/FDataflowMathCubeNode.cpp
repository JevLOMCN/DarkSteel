// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f45c0

UScriptStruct * __cdecl FDataflowMathCubeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode,(UObject *)pUVar1,
                         L"DataflowMathCubeNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton;
}

// GetType @ 1443f46c0

FName __thiscall FDataflowMathCubeNode::GetType(FDataflowMathCubeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathCubeNode");
  return in_RDX;
}

// IsA @ 1443f46f0

bool __thiscall FDataflowMathCubeNode::IsA(FDataflowMathCubeNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathCubeNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f4758;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f4758:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f4776;
      }
    }
  }
  bVar5 = true;
LAB_1443f4776:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f47b0

FStructOnScope * __thiscall FDataflowMathCubeNode::NewStructOnScope(FDataflowMathCubeNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode,(UObject *)pUVar2,
                           L"DataflowMathCubeNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f4830

void __thiscall
FDataflowMathCubeNode::SerializeInternal(FDataflowMathCubeNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode,(UObject *)pUVar1,
                         L"DataflowMathCubeNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f48ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f48c0

FName __thiscall FDataflowMathCubeNode::GetDisplayName(FDataflowMathCubeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Cube");
  return in_RDX;
}

// GetCategory @ 1443f48f0

FName __thiscall FDataflowMathCubeNode::GetCategory(FDataflowMathCubeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f4920

FString * __thiscall
FDataflowMathCubeNode::GetTags(FDataflowMathCubeNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f4950

UScriptStruct * __thiscall FDataflowMathCubeNode::TypedScriptStruct(FDataflowMathCubeNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCubeNode,(UObject *)pUVar1,
                         L"DataflowMathCubeNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCubeNode.OuterSingleton;
}

// ComputeResult @ 1443f4990

double __thiscall
FDataflowMathCubeNode::ComputeResult(FDataflowMathCubeNode *this,FContext *param_1,double param_2)

{
  return param_2 * param_2 * param_2;
}

// FDataflowMathCubeNode @ 14442d1c0

FDataflowMathCubeNode * __thiscall
FDataflowMathCubeNode::FDataflowMathCubeNode
          (FDataflowMathCubeNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathCubeNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

