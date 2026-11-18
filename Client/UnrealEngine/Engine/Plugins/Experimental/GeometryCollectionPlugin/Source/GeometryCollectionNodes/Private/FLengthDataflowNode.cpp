// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e88dc60

UScriptStruct * __cdecl FLengthDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLengthDataflowNode,(UObject *)pUVar1,
                         L"LengthDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton;
}

// GetType @ 14e88dca0

FName __thiscall FLengthDataflowNode::GetType(FLengthDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FLengthDataflowNode");
  return in_RDX;
}

// IsA @ 14e88dcd0

bool __thiscall FLengthDataflowNode::IsA(FLengthDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FLengthDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88dd38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88dd38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88dd56;
      }
    }
  }
  bVar5 = true;
LAB_14e88dd56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88dd90

FStructOnScope * __thiscall FLengthDataflowNode::NewStructOnScope(FLengthDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLengthDataflowNode,(UObject *)pUVar2,
                           L"LengthDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88de10

void __thiscall FLengthDataflowNode::SerializeInternal(FLengthDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLengthDataflowNode,(UObject *)pUVar1,
                         L"LengthDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88de8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88dea0

FName __thiscall FLengthDataflowNode::GetDisplayName(FLengthDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Length");
  return in_RDX;
}

// GetCategory @ 14e88ded0

FName __thiscall FLengthDataflowNode::GetCategory(FLengthDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Vector");
  return in_RDX;
}

// GetTags @ 14e88df00

FString * __thiscall
FLengthDataflowNode::GetTags(FLengthDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88df30

UScriptStruct * __thiscall FLengthDataflowNode::TypedScriptStruct(FLengthDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLengthDataflowNode,(UObject *)pUVar1,
                         L"LengthDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FLengthDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88dfc0

void __thiscall
FLengthDataflowNode::Evaluate(FLengthDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 *puVar4;
  FDataflowInput *this_00;
  TVector<double> *pTVar5;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar4 == &this->ReturnValue) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Vector;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pTVar5 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(this_00,param_1,&this->Vector);
    dVar2 = (pTVar5->field0_0x0)._s_0.X;
    dVar3 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.Z;
    local_res8[0] = (float)SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

