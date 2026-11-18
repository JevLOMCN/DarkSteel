// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f7720

UScriptStruct * __cdecl FDataflowMathCeilNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode,(UObject *)pUVar1,
                         L"DataflowMathCeilNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton;
}

// GetType @ 1443f77b0

FName __thiscall FDataflowMathCeilNode::GetType(FDataflowMathCeilNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathCeilNode");
  return in_RDX;
}

// IsA @ 1443f77e0

bool __thiscall FDataflowMathCeilNode::IsA(FDataflowMathCeilNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathCeilNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f7848;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f7848:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f7866;
      }
    }
  }
  bVar5 = true;
LAB_1443f7866:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f78a0

FStructOnScope * __thiscall FDataflowMathCeilNode::NewStructOnScope(FDataflowMathCeilNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode,(UObject *)pUVar2,
                           L"DataflowMathCeilNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f7920

void __thiscall
FDataflowMathCeilNode::SerializeInternal(FDataflowMathCeilNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode,(UObject *)pUVar1,
                         L"DataflowMathCeilNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f799d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f79b0

FName __thiscall FDataflowMathCeilNode::GetDisplayName(FDataflowMathCeilNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Ceil");
  return in_RDX;
}

// GetCategory @ 1443f79e0

FName __thiscall FDataflowMathCeilNode::GetCategory(FDataflowMathCeilNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f7a10

FString * __thiscall
FDataflowMathCeilNode::GetTags(FDataflowMathCeilNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Round Higher Integer");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f7a40

UScriptStruct * __thiscall FDataflowMathCeilNode::TypedScriptStruct(FDataflowMathCeilNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathCeilNode,(UObject *)pUVar1,
                         L"DataflowMathCeilNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathCeilNode.OuterSingleton;
}

// ComputeResult @ 1443f7a80

double __thiscall
FDataflowMathCeilNode::ComputeResult(FDataflowMathCeilNode *this,FContext *param_1,double param_2)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar1 = roundpd(in_XMM0,auVar1,2);
  return auVar1._0_8_;
}

// FDataflowMathCeilNode @ 14442ce80

FDataflowMathCeilNode * __thiscall
FDataflowMathCeilNode::FDataflowMathCeilNode
          (FDataflowMathCeilNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathCeilNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

