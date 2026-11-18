// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f7cf0

UScriptStruct * __cdecl FDataflowMathRoundNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode,(UObject *)pUVar1,
                         L"DataflowMathRoundNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton;
}

// GetType @ 1443f7d30

FName __thiscall FDataflowMathRoundNode::GetType(FDataflowMathRoundNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathRoundNode");
  return in_RDX;
}

// IsA @ 1443f7d60

bool __thiscall FDataflowMathRoundNode::IsA(FDataflowMathRoundNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathRoundNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f7dc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f7dc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f7de6;
      }
    }
  }
  bVar5 = true;
LAB_1443f7de6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f7e20

FStructOnScope * __thiscall FDataflowMathRoundNode::NewStructOnScope(FDataflowMathRoundNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode,(UObject *)pUVar2,
                           L"DataflowMathRoundNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f7ea0

void __thiscall
FDataflowMathRoundNode::SerializeInternal(FDataflowMathRoundNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode,(UObject *)pUVar1,
                         L"DataflowMathRoundNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f7f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f7f30

FName __thiscall FDataflowMathRoundNode::GetDisplayName(FDataflowMathRoundNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Round");
  return in_RDX;
}

// GetCategory @ 1443f7f60

FName __thiscall FDataflowMathRoundNode::GetCategory(FDataflowMathRoundNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f7f90

FString * __thiscall
FDataflowMathRoundNode::GetTags(FDataflowMathRoundNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Round Mid 0.5");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f7fc0

UScriptStruct * __thiscall FDataflowMathRoundNode::TypedScriptStruct(FDataflowMathRoundNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRoundNode,(UObject *)pUVar1,
                         L"DataflowMathRoundNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathRoundNode.OuterSingleton;
}

// ComputeResult @ 1443f8000

double __thiscall
FDataflowMathRoundNode::ComputeResult(FDataflowMathRoundNode *this,FContext *param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + __real_3fe0000000000000;
  auVar1 = roundpd(auVar1,auVar1,1);
  return auVar1._0_8_;
}

// FDataflowMathRoundNode @ 14442e160

FDataflowMathRoundNode * __thiscall
FDataflowMathRoundNode::FDataflowMathRoundNode
          (FDataflowMathRoundNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathRoundNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

