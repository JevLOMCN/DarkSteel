// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f85b0

UScriptStruct * __cdecl FDataflowMathFracNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode,(UObject *)pUVar1,
                         L"DataflowMathFracNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton;
}

// GetType @ 1443f85f0

FName __thiscall FDataflowMathFracNode::GetType(FDataflowMathFracNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathFracNode");
  return in_RDX;
}

// IsA @ 1443f8620

bool __thiscall FDataflowMathFracNode::IsA(FDataflowMathFracNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathFracNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f8688;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f8688:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f86a6;
      }
    }
  }
  bVar5 = true;
LAB_1443f86a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f86e0

FStructOnScope * __thiscall FDataflowMathFracNode::NewStructOnScope(FDataflowMathFracNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode,(UObject *)pUVar2,
                           L"DataflowMathFracNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f8760

void __thiscall
FDataflowMathFracNode::SerializeInternal(FDataflowMathFracNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode,(UObject *)pUVar1,
                         L"DataflowMathFracNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f87dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f8830

FName __thiscall FDataflowMathFracNode::GetDisplayName(FDataflowMathFracNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Frac");
  return in_RDX;
}

// GetCategory @ 1443f8860

FName __thiscall FDataflowMathFracNode::GetCategory(FDataflowMathFracNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f8890

FString * __thiscall
FDataflowMathFracNode::GetTags(FDataflowMathFracNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Fractional Decimal Point");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f88c0

UScriptStruct * __thiscall FDataflowMathFracNode::TypedScriptStruct(FDataflowMathFracNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathFracNode,(UObject *)pUVar1,
                         L"DataflowMathFracNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathFracNode.OuterSingleton;
}

// ComputeResult @ 1443f8900

double __thiscall
FDataflowMathFracNode::ComputeResult(FDataflowMathFracNode *this,FContext *param_1,double param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  dVar2 = param_2;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != param_2)) {
    auVar1._8_4_ = SUB84(param_2,0);
    auVar1._0_8_ = param_2;
    auVar1._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  return param_2 - dVar2;
}

// FDataflowMathFracNode @ 14442d3e0

FDataflowMathFracNode * __thiscall
FDataflowMathFracNode::FDataflowMathFracNode
          (FDataflowMathFracNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathFracNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

