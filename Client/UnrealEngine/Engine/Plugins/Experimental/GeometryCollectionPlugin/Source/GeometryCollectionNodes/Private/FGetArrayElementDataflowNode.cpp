// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e83c8e0

UScriptStruct * __cdecl FGetArrayElementDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode,(UObject *)pUVar1,
                         L"GetArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton;
}

// GetType @ 14e83c970

FName __thiscall FGetArrayElementDataflowNode::GetType(FGetArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetArrayElementDataflowNode");
  return in_RDX;
}

// IsA @ 14e83ca10

bool __thiscall FGetArrayElementDataflowNode::IsA(FGetArrayElementDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetArrayElementDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83ca78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83ca78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83ca96;
      }
    }
  }
  bVar5 = true;
LAB_14e83ca96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83cb90

FStructOnScope * __thiscall
FGetArrayElementDataflowNode::NewStructOnScope(FGetArrayElementDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode,(UObject *)pUVar2,
                           L"GetArrayElementDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83ccf0

void __thiscall
FGetArrayElementDataflowNode::SerializeInternal
          (FGetArrayElementDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode,(UObject *)pUVar1,
                         L"GetArrayElementDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83cd6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83ce10

FName __thiscall FGetArrayElementDataflowNode::GetDisplayName(FGetArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetArrayElement");
  return in_RDX;
}

// GetCategory @ 14e83ce70

FName __thiscall FGetArrayElementDataflowNode::GetCategory(FGetArrayElementDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e83cf00

FString * __thiscall
FGetArrayElementDataflowNode::GetTags
          (FGetArrayElementDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83cf60

UScriptStruct * __thiscall
FGetArrayElementDataflowNode::TypedScriptStruct(FGetArrayElementDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode,(UObject *)pUVar1,
                         L"GetArrayElementDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetArrayElementDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83d390

void __thiscall
FGetArrayElementDataflowNode::Evaluate
          (FGetArrayElementDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TVector<double> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TVector<double>_u_0 local_28;
  
  pTVar1 = &this->Point;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar5 == pTVar1) {
    pTVar6 = FDataflowNode::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->Points);
    if (0 < pTVar6->ArrayNum) {
      iVar2 = this->Index;
      if ((-1 < iVar2) && (iVar2 < pTVar6->ArrayNum)) {
        if ((iVar2 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>
                  ((FDataflowNode *)this,param_1,
                   (TVector<double> *)((pTVar6->AllocatorInstance).Data + (longlong)iVar2 * 0x18),
                   pTVar1);
        return;
      }
    }
    local_28._s_0.Z = 0.0;
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,(TVector<double> *)&local_28._s_0,pTVar1);
  }
  return;
}

// FGetArrayElementDataflowNode @ 14e91f720

FGetArrayElementDataflowNode * __thiscall
FGetArrayElementDataflowNode::FGetArrayElementDataflowNode
          (FGetArrayElementDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FGetArrayElementDataflowNode__6B_;
  local_58.Reference = &this->Points;
  this->Index = 0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)local_58.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Point).field0_0x0._s_0.X = 0.0;
  (this->Point).field0_0x0._s_0.Y = 0.0;
  (this->Point).field0_0x0._s_0.Z = 0.0;
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
  local_38.Reference = &this->Point;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

