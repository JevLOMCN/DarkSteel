// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e874ce0

UScriptStruct * __cdecl FSetIntoMaterialInterfaceArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"SetIntoMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e874d60

FName __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::GetType
          (FSetIntoMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetIntoMaterialInterfaceArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e874d90

bool __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::IsA
          (FSetIntoMaterialInterfaceArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetIntoMaterialInterfaceArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e874df8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e874df8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e874e16;
      }
    }
  }
  bVar5 = true;
LAB_14e874e16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e874e50

FStructOnScope * __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::NewStructOnScope
          (FSetIntoMaterialInterfaceArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode,
                           (UObject *)pUVar2,L"SetIntoMaterialInterfaceArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e874f80

void __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::SerializeInternal
          (FSetIntoMaterialInterfaceArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"SetIntoMaterialInterfaceArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e874ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e875100

FName __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::GetDisplayName
          (FSetIntoMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetIntoMaterialsArray");
  return in_RDX;
}

// GetCategory @ 14e875130

FName __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::GetCategory
          (FSetIntoMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e875160

FString * __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::GetTags
          (FSetIntoMaterialInterfaceArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e875190

UScriptStruct * __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::TypedScriptStruct
          (FSetIntoMaterialInterfaceArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"SetIntoMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetIntoMaterialInterfaceArrayDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e8751f0

void __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::Evaluate
          (FSetIntoMaterialInterfaceArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UMaterialInterface> TVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar9;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar10;
  FDataflowInput *this_00;
  uint *puVar11;
  uint uVar12;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_58;
  FConnectionReference local_48;
  TObjectPtr<UMaterialInterface> *local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  pTVar1 = &this->MaterialArray;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar8 == pTVar1) {
    pTVar9 = FDataflowNode::
             GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,pTVar1);
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = pTVar9->ArrayNum;
    pFVar4 = (pTVar9->AllocatorInstance).Data;
    local_58.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,0,&local_58.AllocatorInstance,iVar2,&local_58.ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                (local_58.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar2);
    }
    local_30 = &this->Material;
    local_28 = 0xffffffff;
    local_20 = 0;
    pTVar10 = &FDataflowNode::GetValue<TObjectPtr<UMaterialInterface>_>
                         ((FDataflowNode *)this,param_1,
                          (TConnectionReference<TObjectPtr<UMaterialInterface>_> *)&local_30)->
               field0_0x0;
    TVar5.field0_0x0 = (TObjectPtr<UMaterialInterface>_u_0)pTVar10->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar5.field0_0x0 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar5.field0_0x0);
    }
    local_48.Reference = &this->Index;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    puVar11 = (uint *)FDataflowInput::GetValue<int>(this_00,param_1,local_48.Reference);
    uVar3 = *puVar11;
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < local_58.ArrayNum) {
        uVar12 = 0;
        if ((int)uVar3 < local_58.ArrayNum) {
          uVar12 = ~uVar3 >> 0x1f;
        }
        if (uVar12 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pTVar10 = (TObjectPtr<UMaterialInterface>_u_0 *)
                  (local_58.AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.field0_0x0 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.field0_0x0);
        }
        pTVar10->DebugPtr = (UMaterialInterface *)TVar5.field0_0x0;
      }
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_58,pTVar1);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// FSetIntoMaterialInterfaceArrayDataflowNode @ 14e92b930

FSetIntoMaterialInterfaceArrayDataflowNode * __thiscall
FSetIntoMaterialInterfaceArrayDataflowNode::FSetIntoMaterialInterfaceArrayDataflowNode
          (FSetIntoMaterialInterfaceArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->MaterialArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSetIntoMaterialInterfaceArrayDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->Index = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Material;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Index;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

