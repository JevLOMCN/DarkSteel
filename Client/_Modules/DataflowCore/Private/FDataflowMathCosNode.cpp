// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443fcfd0

UScriptStruct * __cdecl FDataflowMathCosNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode,(UObject *)pUVar1,
                         L"DataflowMathCosNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton;
}

// GetType @ 1443fd010

FName __thiscall FDataflowMathCosNode::GetType(FDataflowMathCosNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathCosNode");
  return in_RDX;
}

// IsA @ 1443fd040

bool __thiscall FDataflowMathCosNode::IsA(FDataflowMathCosNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathCosNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fd0a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fd0a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fd0c6;
      }
    }
  }
  bVar5 = true;
LAB_1443fd0c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fd100

FStructOnScope * __thiscall FDataflowMathCosNode::NewStructOnScope(FDataflowMathCosNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode,(UObject *)pUVar2,
                           L"DataflowMathCosNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fd180

void __thiscall
FDataflowMathCosNode::SerializeInternal(FDataflowMathCosNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode,(UObject *)pUVar1,
                         L"DataflowMathCosNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fd1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fd210

FName __thiscall FDataflowMathCosNode::GetDisplayName(FDataflowMathCosNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Cos");
  return in_RDX;
}

// GetCategory @ 1443fd240

FName __thiscall FDataflowMathCosNode::GetCategory(FDataflowMathCosNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trig");
  return in_RDX;
}

// GetTags @ 1443fd270

FString * __thiscall
FDataflowMathCosNode::GetTags(FDataflowMathCosNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Cosine Trigonometry Circle Angle Degrees Radians");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fd2a0

UScriptStruct * __thiscall FDataflowMathCosNode::TypedScriptStruct(FDataflowMathCosNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCosNode,(UObject *)pUVar1,
                         L"DataflowMathCosNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCosNode.OuterSingleton;
}

// ComputeResult @ 1443fd2e0

double __thiscall
FDataflowMathCosNode::ComputeResult(FDataflowMathCosNode *this,FContext *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = cos(param_2);
  return dVar1;
}

// FDataflowMathCosNode @ 14442d170

FDataflowMathCosNode * __thiscall
FDataflowMathCosNode::FDataflowMathCosNode
          (FDataflowMathCosNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathCosNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

