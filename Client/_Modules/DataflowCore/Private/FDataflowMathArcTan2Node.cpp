// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443ffa80

UScriptStruct * __cdecl FDataflowMathArcTan2Node::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node,(UObject *)pUVar1,
                         L"DataflowMathArcTan2Node");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton;
}

// GetType @ 1443ffb00

FName __thiscall FDataflowMathArcTan2Node::GetType(FDataflowMathArcTan2Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathArcTan2Node");
  return in_RDX;
}

// IsA @ 1443ffb30

bool __thiscall FDataflowMathArcTan2Node::IsA(FDataflowMathArcTan2Node *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathArcTan2Node");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ffb98;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ffb98:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ffbb6;
      }
    }
  }
  bVar5 = true;
LAB_1443ffbb6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443ffbf0

FStructOnScope * __thiscall
FDataflowMathArcTan2Node::NewStructOnScope(FDataflowMathArcTan2Node *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node,(UObject *)pUVar2,
                           L"DataflowMathArcTan2Node");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443ffc70

void __thiscall
FDataflowMathArcTan2Node::SerializeInternal(FDataflowMathArcTan2Node *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node,(UObject *)pUVar1,
                         L"DataflowMathArcTan2Node");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443ffced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443ffd00

FName __thiscall FDataflowMathArcTan2Node::GetDisplayName(FDataflowMathArcTan2Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ArcTan2");
  return in_RDX;
}

// GetCategory @ 1443ffd30

FName __thiscall FDataflowMathArcTan2Node::GetCategory(FDataflowMathArcTan2Node *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trig");
  return in_RDX;
}

// GetTags @ 1443ffd60

FString * __thiscall
FDataflowMathArcTan2Node::GetTags(FDataflowMathArcTan2Node *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Tangent Trigonometry Circle Angle Degrees Radians");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443ffd90

UScriptStruct * __thiscall
FDataflowMathArcTan2Node::TypedScriptStruct(FDataflowMathArcTan2Node *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathArcTan2Node,(UObject *)pUVar1,
                         L"DataflowMathArcTan2Node");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathArcTan2Node.OuterSingleton;
}

// ComputeResult @ 1443ffe10

double __thiscall
FDataflowMathArcTan2Node::ComputeResult
          (FDataflowMathArcTan2Node *this,FContext *param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = FGenericPlatformMath::Atan2(param_2,param_3);
  return dVar1;
}

// FDataflowMathArcTan2Node @ 14442cdd0

FDataflowMathArcTan2Node * __thiscall
FDataflowMathArcTan2Node::FDataflowMathArcTan2Node
          (FDataflowMathArcTan2Node *this,FNodeParameters *param_1,FGuid *param_2)

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
  *(undefined ***)this = &___7FDataflowMathArcTan2Node__6B_;
  FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathTwoInputsOperatorNode *)this);
  return this;
}

