// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 10

// StaticStruct @ 14e850e30

UScriptStruct * __cdecl FFracDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFracDataflowNode,(UObject *)pUVar1,
                         L"FracDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton;
}

// GetType @ 14e851150

FName __thiscall FFracDataflowNode::GetType(FFracDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFracDataflowNode");
  return in_RDX;
}

// IsA @ 14e851240

bool __thiscall FFracDataflowNode::IsA(FFracDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFracDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8512a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8512a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8512c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8512c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e851330

FStructOnScope * __thiscall FFracDataflowNode::NewStructOnScope(FFracDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFracDataflowNode,(UObject *)pUVar2,
                           L"FracDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e851460

void __thiscall FFracDataflowNode::SerializeInternal(FFracDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFracDataflowNode,(UObject *)pUVar1,
                         L"FracDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8514dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8515f0

FName __thiscall FFracDataflowNode::GetDisplayName(FFracDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Frac");
  return in_RDX;
}

// GetCategory @ 14e851620

FName __thiscall FFracDataflowNode::GetCategory(FFracDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e851690

FString * __thiscall
FFracDataflowNode::GetTags(FFracDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8516c0

UScriptStruct * __thiscall FFracDataflowNode::TypedScriptStruct(FFracDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFracDataflowNode,(UObject *)pUVar1,
                         L"FracDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFracDataflowNode.OuterSingleton;
}

// Evaluate @ 14e851e00

void __thiscall
FFracDataflowNode::Evaluate(FFracDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_res8 [2];
  FConnectionReference local_28;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar2 == &this->ReturnValue) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Float;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pfVar3 = FDataflowInput::GetValue<float>(this_00,param_1,&this->Float);
    local_res8[0] = *pfVar3;
    iVar4 = (int)local_res8[0];
    fVar5 = local_res8[0];
    if ((iVar4 != -0x80000000) && ((float)iVar4 != local_res8[0])) {
      auVar6._4_4_ = local_res8[0];
      auVar6._0_4_ = local_res8[0];
      auVar6._8_8_ = 0;
      uVar1 = movmskps((int)pfVar3,auVar6);
      fVar5 = (float)(int)(iVar4 - (uVar1 & 1));
    }
    local_res8[0] = local_res8[0] - fVar5;
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->ReturnValue);
  }
  return;
}

