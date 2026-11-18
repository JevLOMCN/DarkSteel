// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e898730

UScriptStruct * __cdecl FDegreesToRadiansDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDegreesToRadiansDataflowNode,(UObject *)pUVar1,
                         L"DegreesToRadiansDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton;
}

// GetType @ 14e8987b0

FName __thiscall FDegreesToRadiansDataflowNode::GetType(FDegreesToRadiansDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDegreesToRadiansDataflowNode");
  return in_RDX;
}

// IsA @ 14e8987e0

bool __thiscall
FDegreesToRadiansDataflowNode::IsA(FDegreesToRadiansDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDegreesToRadiansDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e898848;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e898848:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e898866;
      }
    }
  }
  bVar5 = true;
LAB_14e898866:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8988a0

FStructOnScope * __thiscall
FDegreesToRadiansDataflowNode::NewStructOnScope(FDegreesToRadiansDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDegreesToRadiansDataflowNode,(UObject *)pUVar2
                           ,L"DegreesToRadiansDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e898950

void __thiscall
FDegreesToRadiansDataflowNode::SerializeInternal
          (FDegreesToRadiansDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDegreesToRadiansDataflowNode,(UObject *)pUVar1,
                         L"DegreesToRadiansDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8989cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8989f0

FName __thiscall FDegreesToRadiansDataflowNode::GetDisplayName(FDegreesToRadiansDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DegreesToRadians");
  return in_RDX;
}

// GetCategory @ 14e898a20

FName __thiscall FDegreesToRadiansDataflowNode::GetCategory(FDegreesToRadiansDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Trigonometry");
  return in_RDX;
}

// GetTags @ 14e898a50

FString * __thiscall
FDegreesToRadiansDataflowNode::GetTags
          (FDegreesToRadiansDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e898a80

UScriptStruct * __thiscall
FDegreesToRadiansDataflowNode::TypedScriptStruct(FDegreesToRadiansDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDegreesToRadiansDataflowNode,(UObject *)pUVar1,
                         L"DegreesToRadiansDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FDegreesToRadiansDataflowNode.OuterSingleton;
}

// Evaluate @ 14e898b70

void __thiscall
FDegreesToRadiansDataflowNode::Evaluate
          (FDegreesToRadiansDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  float *pfVar2;
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar1 == &this->Radians) {
    local_28.Reference = &this->Degrees;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar2 = FDataflowInput::GetValue<float>(this_00,param_1,local_28.Reference);
    local_res8[0] = *pfVar2 * __real_3c8efa35;
    FDataflowNode::SetValue<float,float>((FDataflowNode *)this,param_1,local_res8,&this->Radians);
  }
  return;
}

