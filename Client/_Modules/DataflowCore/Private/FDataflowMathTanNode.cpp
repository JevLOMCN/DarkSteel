// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443fd670

UScriptStruct * __cdecl FDataflowMathTanNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode,(UObject *)pUVar1,
                         L"DataflowMathTanNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton;
}

// GetType @ 1443fd710

FName __thiscall FDataflowMathTanNode::GetType(FDataflowMathTanNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathTanNode");
  return in_RDX;
}

// IsA @ 1443fd740

bool __thiscall FDataflowMathTanNode::IsA(FDataflowMathTanNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathTanNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fd7a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fd7a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fd7c6;
      }
    }
  }
  bVar5 = true;
LAB_1443fd7c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fd800

FStructOnScope * __thiscall FDataflowMathTanNode::NewStructOnScope(FDataflowMathTanNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode,(UObject *)pUVar2,
                           L"DataflowMathTanNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fd8a0

void __thiscall
FDataflowMathTanNode::SerializeInternal(FDataflowMathTanNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode,(UObject *)pUVar1,
                         L"DataflowMathTanNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fd91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fd950

FName __thiscall FDataflowMathTanNode::GetDisplayName(FDataflowMathTanNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Tan");
  return in_RDX;
}

// GetCategory @ 1443fd980

FName __thiscall FDataflowMathTanNode::GetCategory(FDataflowMathTanNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trig");
  return in_RDX;
}

// GetTags @ 1443fd9d0

FString * __thiscall
FDataflowMathTanNode::GetTags(FDataflowMathTanNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Tangent Trigonometry Circle Angle Degrees Radians");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fda00

UScriptStruct * __thiscall FDataflowMathTanNode::TypedScriptStruct(FDataflowMathTanNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTanNode,(UObject *)pUVar1,
                         L"DataflowMathTanNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathTanNode.OuterSingleton;
}

// ComputeResult @ 1443fdaa0

double __thiscall
FDataflowMathTanNode::ComputeResult(FDataflowMathTanNode *this,FContext *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = tan(param_2);
  return dVar1;
}

// FDataflowMathTanNode @ 14442e350

FDataflowMathTanNode * __thiscall
FDataflowMathTanNode::FDataflowMathTanNode
          (FDataflowMathTanNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathTanNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

