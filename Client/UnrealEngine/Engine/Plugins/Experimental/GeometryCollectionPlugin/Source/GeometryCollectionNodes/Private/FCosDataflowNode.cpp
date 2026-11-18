// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e87f6e0

UScriptStruct * __cdecl FCosDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCosDataflowNode,(UObject *)pUVar1,
                         L"CosDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton;
}

// GetType @ 14e87f720

FName __thiscall FCosDataflowNode::GetType(FCosDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCosDataflowNode");
  return in_RDX;
}

// IsA @ 14e87f750

bool __thiscall FCosDataflowNode::IsA(FCosDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCosDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87f7b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87f7b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87f7d6;
      }
    }
  }
  bVar5 = true;
LAB_14e87f7d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87f810

FStructOnScope * __thiscall FCosDataflowNode::NewStructOnScope(FCosDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCosDataflowNode,(UObject *)pUVar2,
                           L"CosDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87f890

void __thiscall FCosDataflowNode::SerializeInternal(FCosDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCosDataflowNode,(UObject *)pUVar1,
                         L"CosDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87f90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87f920

FName __thiscall FCosDataflowNode::GetDisplayName(FCosDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Cos");
  return in_RDX;
}

// GetCategory @ 14e87f950

FName __thiscall FCosDataflowNode::GetCategory(FCosDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trigonometry");
  return in_RDX;
}

// GetTags @ 14e87f990

FString * __thiscall
FCosDataflowNode::GetTags(FCosDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87f9c0

UScriptStruct * __thiscall FCosDataflowNode::TypedScriptStruct(FCosDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCosDataflowNode,(UObject *)pUVar1,
                         L"CosDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCosDataflowNode.OuterSingleton;
}

// Evaluate @ 14e87fa10

void __thiscall
FCosDataflowNode::Evaluate(FCosDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

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
    local_res8[0] = cosf(*pfVar2);
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

