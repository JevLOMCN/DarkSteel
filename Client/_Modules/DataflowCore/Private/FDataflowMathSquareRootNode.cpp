// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f4c80

UScriptStruct * __cdecl FDataflowMathSquareRootNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode,(UObject *)pUVar1,
                         L"DataflowMathSquareRootNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton;
}

// GetType @ 1443f4cc0

FName __thiscall FDataflowMathSquareRootNode::GetType(FDataflowMathSquareRootNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathSquareRootNode");
  return in_RDX;
}

// IsA @ 1443f4cf0

bool __thiscall FDataflowMathSquareRootNode::IsA(FDataflowMathSquareRootNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathSquareRootNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f4d58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f4d58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f4d76;
      }
    }
  }
  bVar5 = true;
LAB_1443f4d76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f4db0

FStructOnScope * __thiscall
FDataflowMathSquareRootNode::NewStructOnScope(FDataflowMathSquareRootNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode,(UObject *)pUVar2,
                           L"DataflowMathSquareRootNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f4ee0

void __thiscall
FDataflowMathSquareRootNode::SerializeInternal(FDataflowMathSquareRootNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode,(UObject *)pUVar1,
                         L"DataflowMathSquareRootNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f4f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f4f70

FName __thiscall FDataflowMathSquareRootNode::GetDisplayName(FDataflowMathSquareRootNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SquareRoot");
  return in_RDX;
}

// GetCategory @ 1443f4fa0

FName __thiscall FDataflowMathSquareRootNode::GetCategory(FDataflowMathSquareRootNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f4fd0

FString * __thiscall
FDataflowMathSquareRootNode::GetTags
          (FDataflowMathSquareRootNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f5000

UScriptStruct * __thiscall
FDataflowMathSquareRootNode::TypedScriptStruct(FDataflowMathSquareRootNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathSquareRootNode,(UObject *)pUVar1,
                         L"DataflowMathSquareRootNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathSquareRootNode.OuterSingleton;
}

// ComputeResult @ 1443f5040

double __thiscall
FDataflowMathSquareRootNode::ComputeResult
          (FDataflowMathSquareRootNode *this,FContext *param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (0.0 <= param_2) {
    uVar1 = SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar2 = (uint)((ulonglong)param_2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// FDataflowMathSquareRootNode @ 14442e2a0

FDataflowMathSquareRootNode * __thiscall
FDataflowMathSquareRootNode::FDataflowMathSquareRootNode
          (FDataflowMathSquareRootNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathSquareRootNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

