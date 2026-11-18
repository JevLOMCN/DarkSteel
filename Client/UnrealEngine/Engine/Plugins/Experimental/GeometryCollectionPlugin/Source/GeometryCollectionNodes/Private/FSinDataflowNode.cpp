// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e87c1b0

UScriptStruct * __cdecl FSinDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSinDataflowNode,(UObject *)pUVar1,
                         L"SinDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton;
}

// GetType @ 14e87c340

FName __thiscall FSinDataflowNode::GetType(FSinDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSinDataflowNode");
  return in_RDX;
}

// IsA @ 14e87c370

bool __thiscall FSinDataflowNode::IsA(FSinDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSinDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87c3d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87c3d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87c3f6;
      }
    }
  }
  bVar5 = true;
LAB_14e87c3f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87c4b0

FStructOnScope * __thiscall FSinDataflowNode::NewStructOnScope(FSinDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSinDataflowNode,(UObject *)pUVar2,
                           L"SinDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87c540

void __thiscall FSinDataflowNode::SerializeInternal(FSinDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSinDataflowNode,(UObject *)pUVar1,
                         L"SinDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87c5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87c5d0

FName __thiscall FSinDataflowNode::GetDisplayName(FSinDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Sin");
  return in_RDX;
}

// GetCategory @ 14e87c600

FName __thiscall FSinDataflowNode::GetCategory(FSinDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trigonometry");
  return in_RDX;
}

// GetTags @ 14e87c630

FString * __thiscall
FSinDataflowNode::GetTags(FSinDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87c660

UScriptStruct * __thiscall FSinDataflowNode::TypedScriptStruct(FSinDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSinDataflowNode,(UObject *)pUVar1,
                         L"SinDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSinDataflowNode.OuterSingleton;
}

// Evaluate @ 14e87c930

void __thiscall
FSinDataflowNode::Evaluate(FSinDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

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
    local_res8[0] = sinf(*pfVar2);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

