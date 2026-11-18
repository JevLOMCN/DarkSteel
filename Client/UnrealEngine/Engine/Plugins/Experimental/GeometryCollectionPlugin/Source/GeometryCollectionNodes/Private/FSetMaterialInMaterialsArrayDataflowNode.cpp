// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8a4b10

UScriptStruct * __cdecl FSetMaterialInMaterialsArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e8a4d70

FName __thiscall
FSetMaterialInMaterialsArrayDataflowNode::GetType(FSetMaterialInMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetMaterialInMaterialsArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a4de0

bool __thiscall
FSetMaterialInMaterialsArrayDataflowNode::IsA
          (FSetMaterialInMaterialsArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetMaterialInMaterialsArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a4e48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a4e48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a4e66;
      }
    }
  }
  bVar5 = true;
LAB_14e8a4e66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a4ee0

FStructOnScope * __thiscall
FSetMaterialInMaterialsArrayDataflowNode::NewStructOnScope
          (FSetMaterialInMaterialsArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode,
                           (UObject *)pUVar2,L"SetMaterialInMaterialsArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a4f80

void __thiscall
FSetMaterialInMaterialsArrayDataflowNode::SerializeInternal
          (FSetMaterialInMaterialsArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a4ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a5650

FName __thiscall
FSetMaterialInMaterialsArrayDataflowNode::GetDisplayName
          (FSetMaterialInMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetMaterialInMaterialsArray");
  return in_RDX;
}

// GetCategory @ 14e8a56c0

FName __thiscall
FSetMaterialInMaterialsArrayDataflowNode::GetCategory
          (FSetMaterialInMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Materials");
  return in_RDX;
}

// GetTags @ 14e8a56f0

FString * __thiscall
FSetMaterialInMaterialsArrayDataflowNode::GetTags
          (FSetMaterialInMaterialsArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a5720

UScriptStruct * __thiscall
FSetMaterialInMaterialsArrayDataflowNode::TypedScriptStruct
          (FSetMaterialInMaterialsArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"SetMaterialInMaterialsArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a5ac0

void __thiscall
FSetMaterialInMaterialsArrayDataflowNode::Evaluate
          (FSetMaterialInMaterialsArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar7;
  TObjectPtr<UMaterial> *pTVar8;
  FDataflowInput *this_00;
  int *piVar9;
  int iVar10;
  TObjectPtr<UMaterial>_u_0 local_48;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_40;
  FConnectionReference local_30;
  
  pTVar1 = &this->Materials;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar6 != pTVar1) {
    return;
  }
  pTVar7 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,param_1,pTVar1);
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = pTVar7->ArrayNum;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  local_40.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_40.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,&local_40.AllocatorInstance,iVar2,&local_40.ArrayMax);
    ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
              (local_40.AllocatorInstance.Data,(TObjectPtr<UMaterial> *)pFVar3,iVar2);
  }
  pTVar8 = FDataflowNode::GetValue<TObjectPtr<UMaterial>_>
                     ((FDataflowNode *)this,param_1,&this->Material);
  local_48.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar8->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48.DebugPtr != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
  local_30.Reference = &this->MaterialIdx;
  local_30.Index = -1;
  local_30.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_30);
  piVar9 = FDataflowInput::GetValue<int>(this_00,param_1,local_30.Reference);
  iVar2 = *piVar9;
  if (this->Operation == Dataflow_SetMaterialOperationType_Add) {
    if (((local_40.AllocatorInstance.Data <= &local_48) &&
        (&local_48 <
         (TObjectPtr<UMaterial>_u_0 *)
         (local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_40.ArrayNum == local_40.ArrayMax) {
      local_40.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
    }
    ((TObjectPtr<UMaterial>_u_0 *)
    (local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 8))->DebugPtr =
         (UMaterial *)local_48;
    local_40.ArrayNum = local_40.ArrayNum + 1;
  }
  else {
    if ((iVar2 < 0) || (local_40.ArrayNum <= iVar2)) goto LAB_14e8a5d5d;
    if ((local_40.AllocatorInstance.Data <= &local_48) &&
       ((&local_48 <
         (TObjectPtr<UMaterial>_u_0 *)
         (local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 8) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_40.ArrayNum == local_40.ArrayMax) {
      local_40.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_40.AllocatorInstance,&local_40.ArrayMax);
    }
    iVar10 = local_40.ArrayNum - iVar2;
    local_40.ArrayNum = local_40.ArrayNum + 1;
    memmove(local_40.AllocatorInstance.Data + (longlong)iVar2 * 8 + 8,
            local_40.AllocatorInstance.Data + (longlong)iVar2 * 8,(longlong)iVar10 << 3);
    ((TObjectPtr<UMaterial>_u_0 *)(local_40.AllocatorInstance.Data + (longlong)iVar2 * 8))->DebugPtr
         = (UMaterial *)local_48;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_48.DebugPtr != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
  }
LAB_14e8a5d5d:
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_40,pTVar1);
  if ((TObjectPtr<UMaterial>_u_0 *)local_40.AllocatorInstance.Data !=
      (TObjectPtr<UMaterial>_u_0 *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// FSetMaterialInMaterialsArrayDataflowNode @ 14e92ba60

FSetMaterialInMaterialsArrayDataflowNode * __thiscall
FSetMaterialInMaterialsArrayDataflowNode::FSetMaterialInMaterialsArrayDataflowNode
          (FSetMaterialInMaterialsArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  pTVar1 = &this->Materials;
  this->Operation = Dataflow_SetMaterialOperationType_Add;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSetMaterialInMaterialsArrayDataflowNode__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->MaterialIdx = 0;
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
  local_58.Reference = &this->MaterialIdx;
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
  if (local_58.Reference != (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

