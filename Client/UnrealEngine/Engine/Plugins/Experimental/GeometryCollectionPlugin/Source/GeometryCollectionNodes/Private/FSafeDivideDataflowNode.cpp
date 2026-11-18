// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e827250

UScriptStruct * __cdecl FSafeDivideDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSafeDivideDataflowNode,(UObject *)pUVar1,
                         L"SafeDivideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton;
}

// GetType @ 14e827420

FName __thiscall FSafeDivideDataflowNode::GetType(FSafeDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSafeDivideDataflowNode");
  return in_RDX;
}

// IsA @ 14e827650

bool __thiscall FSafeDivideDataflowNode::IsA(FSafeDivideDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSafeDivideDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8276b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8276b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8276d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8276d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e827720

FStructOnScope * __thiscall FSafeDivideDataflowNode::NewStructOnScope(FSafeDivideDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSafeDivideDataflowNode,(UObject *)pUVar2,
                           L"SafeDivideDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8277e0

void __thiscall
FSafeDivideDataflowNode::SerializeInternal(FSafeDivideDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSafeDivideDataflowNode,(UObject *)pUVar1,
                         L"SafeDivideDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82785d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e827870

FName __thiscall FSafeDivideDataflowNode::GetDisplayName(FSafeDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SafeDivide");
  return in_RDX;
}

// GetCategory @ 14e8278a0

FName __thiscall FSafeDivideDataflowNode::GetCategory(FSafeDivideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Float");
  return in_RDX;
}

// GetTags @ 14e827990

FString * __thiscall
FSafeDivideDataflowNode::GetTags(FSafeDivideDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8279d0

UScriptStruct * __thiscall FSafeDivideDataflowNode::TypedScriptStruct(FSafeDivideDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSafeDivideDataflowNode,(UObject *)pUVar1,
                         L"SafeDivideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSafeDivideDataflowNode.OuterSingleton;
}

// Evaluate @ 14e827c70

void __thiscall
FSafeDivideDataflowNode::Evaluate
          (FSafeDivideDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  float *pfVar5;
  FDataflowOutput *pFVar6;
  float local_res8 [2];
  FConnectionReference local_48;
  FConnectionReference local_30;
  
  pfVar1 = &this->ReturnValue;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar3 == pfVar1) {
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = &this->FloatA;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->FloatA);
    fVar2 = *pfVar5;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = &this->FloatB;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    pfVar5 = FDataflowInput::GetValue<float>(pFVar4,param_1,&this->FloatB);
    if (*pfVar5 == 0.0) {
      ::FString::FString((FString *)&local_48,L"Division by zero error");
      local_30.Index = -1;
      local_30.ContainerReference = (void *)0x0;
      local_30.Reference = pfVar1;
      pFVar6 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_30);
      UE::Dataflow::FContext::Error(param_1,(FString *)&local_48,(FDataflowNode *)this,pFVar6);
      if (local_48.Reference != (float *)0x0) {
        FMemory::Free(local_48.Reference);
      }
    }
    else {
      local_res8[0] = fVar2 / *pfVar5;
      FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_res8,pfVar1);
    }
  }
  return;
}

// FSafeDivideDataflowNode @ 14e92ac70

FSafeDivideDataflowNode * __thiscall
FSafeDivideDataflowNode::FSafeDivideDataflowNode
          (FSafeDivideDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSafeDivideDataflowNode__6B_;
  local_58.Reference = &this->FloatA;
  this->FloatB = 0.0;
  *(float *)local_58.Reference = 0.0;
  this->ReturnValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FloatB;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->ReturnValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// operator= @ 14e934490

FSafeDivideDataflowNode * __thiscall
FSafeDivideDataflowNode::operator=(FSafeDivideDataflowNode *this,FSafeDivideDataflowNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSafeDivideDataflowNode *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSafeDivideDataflowNode *)(*pcVar1)();
    return pFVar3;
  }
  this->FloatA = param_1->FloatA;
  this->FloatB = param_1->FloatB;
  this->ReturnValue = param_1->ReturnValue;
  return this;
}

