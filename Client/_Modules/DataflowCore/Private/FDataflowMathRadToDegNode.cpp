// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// GetDisplayName @ 1443dc660

FName __thiscall FDataflowMathRadToDegNode::GetDisplayName(FDataflowMathRadToDegNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RadToDeg");
  return in_RDX;
}

// GetCategory @ 1443dc690

FName __thiscall FDataflowMathRadToDegNode::GetCategory(FDataflowMathRadToDegNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trig");
  return in_RDX;
}

// GetTags @ 1443dc720

FString * __thiscall
FDataflowMathRadToDegNode::GetTags(FDataflowMathRadToDegNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Trigonometry Circle Angle Degrees Radians Convert Unit"
                    );
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443dc750

UScriptStruct * __thiscall
FDataflowMathRadToDegNode::TypedScriptStruct(FDataflowMathRadToDegNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode,(UObject *)pUVar1,
                         L"DataflowMathRadToDegNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton;
}

// ComputeResult @ 1443dc7e0

double __thiscall
FDataflowMathRadToDegNode::ComputeResult
          (FDataflowMathRadToDegNode *this,FContext *param_1,double param_2)

{
  return param_2 * __real_404ca5dc1a63c1f8;
}

// StaticStruct @ 144400700

UScriptStruct * __cdecl FDataflowMathRadToDegNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode,(UObject *)pUVar1,
                         L"DataflowMathRadToDegNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton;
}

// GetType @ 144400740

FName __thiscall FDataflowMathRadToDegNode::GetType(FDataflowMathRadToDegNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathRadToDegNode");
  return in_RDX;
}

// IsA @ 1444007d0

bool __thiscall FDataflowMathRadToDegNode::IsA(FDataflowMathRadToDegNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathRadToDegNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_144400838;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_144400838:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_144400856;
      }
    }
  }
  bVar5 = true;
LAB_144400856:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 144400890

FStructOnScope * __thiscall
FDataflowMathRadToDegNode::NewStructOnScope(FDataflowMathRadToDegNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode,(UObject *)pUVar2,
                           L"DataflowMathRadToDegNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 144400910

void __thiscall
FDataflowMathRadToDegNode::SerializeInternal(FDataflowMathRadToDegNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathRadToDegNode,(UObject *)pUVar1,
                         L"DataflowMathRadToDegNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathRadToDegNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014440098d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// FDataflowMathRadToDegNode @ 14442e030

FDataflowMathRadToDegNode * __thiscall
FDataflowMathRadToDegNode::FDataflowMathRadToDegNode
          (FDataflowMathRadToDegNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  *(undefined8 *)&this->field_0x248 = 0;
  *(undefined8 *)&this->field_0x250 = 0;
  *(undefined ***)this = &___7FDataflowMathRadToDegNode__6B_;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  return this;
}

