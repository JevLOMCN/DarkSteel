// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e899910

UScriptStruct * __cdecl FMathConstantsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathConstantsDataflowNode,(UObject *)pUVar1,
                         L"MathConstantsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton;
}

// GetType @ 14e899950

FName __thiscall FMathConstantsDataflowNode::GetType(FMathConstantsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMathConstantsDataflowNode");
  return in_RDX;
}

// IsA @ 14e899980

bool __thiscall FMathConstantsDataflowNode::IsA(FMathConstantsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMathConstantsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8999e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8999e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e899a06;
      }
    }
  }
  bVar5 = true;
LAB_14e899a06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e899a40

FStructOnScope * __thiscall
FMathConstantsDataflowNode::NewStructOnScope(FMathConstantsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMathConstantsDataflowNode,(UObject *)pUVar2,
                           L"MathConstantsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e899ac0

void __thiscall
FMathConstantsDataflowNode::SerializeInternal(FMathConstantsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathConstantsDataflowNode,(UObject *)pUVar1,
                         L"MathConstantsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e899b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e899b50

FName __thiscall FMathConstantsDataflowNode::GetDisplayName(FMathConstantsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MathConstants");
  return in_RDX;
}

// GetCategory @ 14e899b80

FName __thiscall FMathConstantsDataflowNode::GetCategory(FMathConstantsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Utilities");
  return in_RDX;
}

// GetTags @ 14e899bb0

FString * __thiscall
FMathConstantsDataflowNode::GetTags
          (FMathConstantsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e899be0

UScriptStruct * __thiscall
FMathConstantsDataflowNode::TypedScriptStruct(FMathConstantsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMathConstantsDataflowNode,(UObject *)pUVar1,
                         L"MathConstantsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMathConstantsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e899c20

void __thiscall
FMathConstantsDataflowNode::Evaluate
          (FMathConstantsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float *pfVar1;
  EMathConstantsEnum EVar2;
  undefined1 *puVar3;
  float *pfVar4;
  float local_res8 [2];
  
  pfVar1 = &this->ReturnValue;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar3 == pfVar1) {
    EVar2 = this->Constant;
    if (EVar2 == Dataflow_MathConstants_Pi) {
      pfVar4 = &TMathUtilConstants<float>::Pi;
    }
    else if (EVar2 == Dataflow_MathConstants_HalfPi) {
      pfVar4 = &TMathUtilConstants<float>::HalfPi;
    }
    else if (EVar2 == Dataflow_MathConstants_TwoPi) {
      pfVar4 = &TMathUtilConstants<float>::TwoPi;
    }
    else if (EVar2 == Dataflow_MathConstants_FourPi) {
      pfVar4 = &TMathUtilConstants<float>::FourPi;
    }
    else if (EVar2 == Dataflow_MathConstants_InvPi) {
      pfVar4 = &TMathUtilConstants<float>::InvPi;
    }
    else if (EVar2 == Dataflow_MathConstants_InvTwoPi) {
      pfVar4 = &TMathUtilConstants<float>::InvTwoPi;
    }
    else if (EVar2 == Dataflow_MathConstants_Sqrt2) {
      pfVar4 = &TMathUtilConstants<float>::Sqrt2;
    }
    else if (EVar2 == Dataflow_MathConstants_InvSqrt2) {
      pfVar4 = &TMathUtilConstants<float>::InvSqrt2;
    }
    else if (EVar2 == Dataflow_MathConstants_Sqrt3) {
      pfVar4 = &TMathUtilConstants<float>::Sqrt3;
    }
    else if (EVar2 == Dataflow_MathConstants_InvSqrt3) {
      pfVar4 = &TMathUtilConstants<float>::InvSqrt3;
    }
    else {
      if (EVar2 == Dataflow_FloatToInt_Function_E) {
        local_res8[0] = 2.7182817;
LAB_14e899d11:
        FDataflowNode::SetValue<float,float>((FDataflowNode *)this,param_1,local_res8,pfVar1);
        return;
      }
      if (EVar2 == Dataflow_FloatToInt_Function_Gamma) {
        local_res8[0] = 0.5772157;
        goto LAB_14e899d11;
      }
      if (EVar2 == Dataflow_FloatToInt_Function_GoldenRatio) {
        local_res8[0] = 1.618034;
        goto LAB_14e899d11;
      }
      if (EVar2 != Dataflow_FloatToInt_Function_ZeroTolerance) {
        return;
      }
      pfVar4 = &TMathUtilConstants<float>::ZeroTolerance;
    }
    FDataflowNode::SetValue<float_const_&,float>((FDataflowNode *)this,param_1,pfVar4,pfVar1);
  }
  return;
}

