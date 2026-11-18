// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e8837d0

UScriptStruct * __cdecl FArcTanDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTanDataflowNode,(UObject *)pUVar1,
                         L"ArcTanDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton;
}

// GetType @ 14e883970

FName __thiscall FArcTanDataflowNode::GetType(FArcTanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FArcTanDataflowNode");
  return in_RDX;
}

// IsA @ 14e8839a0

bool __thiscall FArcTanDataflowNode::IsA(FArcTanDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FArcTanDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e883a08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e883a08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e883a26;
      }
    }
  }
  bVar5 = true;
LAB_14e883a26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e883a60

FStructOnScope * __thiscall FArcTanDataflowNode::NewStructOnScope(FArcTanDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FArcTanDataflowNode,(UObject *)pUVar2,
                           L"ArcTanDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e883ae0

void __thiscall FArcTanDataflowNode::SerializeInternal(FArcTanDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTanDataflowNode,(UObject *)pUVar1,
                         L"ArcTanDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e883b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e883b70

FName __thiscall FArcTanDataflowNode::GetDisplayName(FArcTanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ArcTan");
  return in_RDX;
}

// GetCategory @ 14e883bb0

FName __thiscall FArcTanDataflowNode::GetCategory(FArcTanDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trigonometry");
  return in_RDX;
}

// GetTags @ 14e883be0

FString * __thiscall
FArcTanDataflowNode::GetTags(FArcTanDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e883c10

UScriptStruct * __thiscall FArcTanDataflowNode::TypedScriptStruct(FArcTanDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FArcTanDataflowNode,(UObject *)pUVar1,
                         L"ArcTanDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FArcTanDataflowNode.OuterSingleton;
}

// Evaluate @ 14e883cb0

void __thiscall
FArcTanDataflowNode::Evaluate(FArcTanDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  float *pfVar2;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->ReturnValue) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Float;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar2 = FDataflowInput::GetValue<float>(this_00,param_1,&this->Float);
    local_res8[0] = atanf(*pfVar2);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

