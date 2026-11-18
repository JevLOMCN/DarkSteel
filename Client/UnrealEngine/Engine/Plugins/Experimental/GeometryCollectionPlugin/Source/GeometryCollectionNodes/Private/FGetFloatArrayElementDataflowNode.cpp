// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8363f0

UScriptStruct * __cdecl FGetFloatArrayElementDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"GetFloatArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton;
}

// GetType @ 14e836640

FName __thiscall FGetFloatArrayElementDataflowNode::GetType(FGetFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetFloatArrayElementDataflowNode");
  return in_RDX;
}

// IsA @ 14e836910

bool __thiscall
FGetFloatArrayElementDataflowNode::IsA(FGetFloatArrayElementDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetFloatArrayElementDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e836978;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e836978:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e836996;
      }
    }
  }
  bVar5 = true;
LAB_14e836996:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8369d0

FStructOnScope * __thiscall
FGetFloatArrayElementDataflowNode::NewStructOnScope(FGetFloatArrayElementDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode,
                           (UObject *)pUVar2,L"GetFloatArrayElementDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e836b10

void __thiscall
FGetFloatArrayElementDataflowNode::SerializeInternal
          (FGetFloatArrayElementDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"GetFloatArrayElementDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e836b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e836d10

FName __thiscall
FGetFloatArrayElementDataflowNode::GetDisplayName(FGetFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetFloatArrayElement");
  return in_RDX;
}

// GetCategory @ 14e836d70

FName __thiscall
FGetFloatArrayElementDataflowNode::GetCategory(FGetFloatArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e836df0

FString * __thiscall
FGetFloatArrayElementDataflowNode::GetTags
          (FGetFloatArrayElementDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e836e20

UScriptStruct * __thiscall
FGetFloatArrayElementDataflowNode::TypedScriptStruct(FGetFloatArrayElementDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode,
                         (UObject *)pUVar1,L"GetFloatArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetFloatArrayElementDataflowNode.OuterSingleton;
}

// Evaluate @ 14e837080

void __thiscall
FGetFloatArrayElementDataflowNode::Evaluate
          (FGetFloatArrayElementDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  FDataflowInput *this_00;
  int *piVar6;
  float local_res8 [2];
  FConnectionReference local_38;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar4 == &this->FloatValue) {
    pTVar5 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->FloatArray);
    local_38.Reference = &this->Index;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    piVar6 = FDataflowInput::GetValue<int>(this_00,param_1,local_38.Reference);
    iVar1 = *piVar6;
    if ((iVar1 < 0) || (pTVar5->ArrayNum <= iVar1)) {
      local_res8[0] = 0.0;
    }
    else {
      if (iVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_res8[0] = *(float *)((pTVar5->AllocatorInstance).Data + (longlong)iVar1 * 4);
    }
    FDataflowNode::SetValue<float_const_&,float>
              ((FDataflowNode *)this,param_1,local_res8,&this->FloatValue);
  }
  return;
}

// FGetFloatArrayElementDataflowNode @ 14e9205f0

FGetFloatArrayElementDataflowNode * __thiscall
FGetFloatArrayElementDataflowNode::FGetFloatArrayElementDataflowNode
          (FGetFloatArrayElementDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetFloatArrayElementDataflowNode__6B_;
  local_58.Reference = &this->FloatArray;
  this->Index = 0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_58.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  this->FloatValue = 0.0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Index;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->FloatValue;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

