// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e871e20

UScriptStruct * __cdecl FGetFromMaterialInterfaceArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"GetFromMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e871e70

FName __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::GetType
          (FGetFromMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetFromMaterialInterfaceArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e871ea0

bool __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::IsA
          (FGetFromMaterialInterfaceArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetFromMaterialInterfaceArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e871f08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e871f08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e871f26;
      }
    }
  }
  bVar5 = true;
LAB_14e871f26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e871f60

FStructOnScope * __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::NewStructOnScope
          (FGetFromMaterialInterfaceArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode,
                           (UObject *)pUVar2,L"GetFromMaterialInterfaceArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8720e0

void __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::SerializeInternal
          (FGetFromMaterialInterfaceArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"GetFromMaterialInterfaceArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87215d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e872170

FName __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::GetDisplayName
          (FGetFromMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetFromMaterialsArray");
  return in_RDX;
}

// GetCategory @ 14e8721b0

FName __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::GetCategory
          (FGetFromMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e8721e0

FString * __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::GetTags
          (FGetFromMaterialInterfaceArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e872220

UScriptStruct * __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::TypedScriptStruct
          (FGetFromMaterialInterfaceArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"GetFromMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetFromMaterialInterfaceArrayDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e872450

void __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::Evaluate
          (FGetFromMaterialInterfaceArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  undefined1 *puVar10;
  FDataflowInput *pFVar11;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar12;
  int *piVar13;
  FDataflowOutput *this_00;
  FTimestamp FVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  UObject *pUVar17;
  FGuid *local_res8;
  undefined8 *local_res18;
  FProperty *local_res20;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FConnectionReference local_70;
  FGuid local_50;
  
  pTVar12 = &this->MaterialArray;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar10 == pTVar12) {
    local_b8.ContainerReference = (void *)0x0;
    local_b8.Index = -1;
    local_b8.Reference = pTVar12;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b8);
    if (pFVar11->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::
      SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,local_b8.Reference,pTVar12);
      return;
    }
    local_88.Index = -1;
    local_88.ContainerReference = (void *)0x0;
    local_88.Reference = pTVar12;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_b8,&local_88);
    return;
  }
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UMaterialInterface> *)puVar10 == &this->Material) {
    pTVar12 = FDataflowNode::
              GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,pTVar12);
    local_a0.Reference = &this->Index;
    local_a0.Index = -1;
    local_a0.ContainerReference = (void *)0x0;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a0);
    piVar13 = FDataflowInput::GetValue<int>(pFVar11,param_1,local_a0.Reference);
    iVar2 = *piVar13;
    pUVar17 = (UObject *)0x0;
    if ((-1 < iVar2) && (pUVar17 = (UObject *)0x0, iVar2 < pTVar12->ArrayNum)) {
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (pTVar12->AllocatorInstance).Data + (longlong)iVar2 * 8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar17 = *(UObject **)pFVar1, pUVar17 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar17);
      }
      pUVar17 = *(UObject **)pFVar1;
    }
    local_70.Index = -1;
    local_70.ContainerReference = (void *)0x0;
    local_70.Reference = &this->Material;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_70);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_&,TObjectPtr<UMaterialInterface>_>'::
      __l7::<lambda_1>::operator()(&local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar14 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      local_res8 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_50);
      local_res20 = (FProperty *)this_00->_padding_;
      uVar15 = CityHash64((char *)&this_00->_padding_,0x10);
      local_res18 = (undefined8 *)0x0;
      puVar16 = ::operator_new(0x50);
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        uVar5 = *(undefined8 *)local_res8;
        uVar6 = *(undefined8 *)&local_res8->C;
        puVar16[6] = *(undefined8 *)FVar14.Value;
        *puVar16 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar16[4] = local_res20;
        *(undefined4 *)(puVar16 + 1) = 3;
        *(undefined8 *)((longlong)puVar16 + 0xc) = uVar5;
        *(undefined8 *)((longlong)puVar16 + 0x14) = uVar6;
        *(uint *)(puVar16 + 5) = uVar9;
        puVar16[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar16 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar16 + 7));
        *puVar16 = &UE::Dataflow::
                    TContextCacheElementUObject<TObjectPtr<UMaterialInterface>&___ptr64>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar16[7] = &UE::Dataflow::
                      TContextCacheElementUObject<TObjectPtr<UMaterialInterface>&___ptr64>::
                      _vftable__for__FGCObject__;
        puVar16[9] = pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
      }
      puVar7 = local_res18;
      if (local_res18 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_res18;
        local_res18 = puVar16;
        (*(code *)*puVar3)(puVar7,1);
        puVar16 = local_res18;
      }
      local_res18 = puVar16;
      if (local_res18 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar15,local_res20,local_res8,uVar9,(FTimestamp *)FVar14.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar15 & 0xffffffff,&local_res18);
      }
      if (local_res18 != (undefined8 *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
    }
  }
  return;
}

// FGetFromMaterialInterfaceArrayDataflowNode @ 14e920850

FGetFromMaterialInterfaceArrayDataflowNode * __thiscall
FGetFromMaterialInterfaceArrayDataflowNode::FGetFromMaterialInterfaceArrayDataflowNode
          (FGetFromMaterialInterfaceArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  FDataflowOutput *pFVar2;
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
  this->_padding_ = (longlong)&___7FGetFromMaterialInterfaceArrayDataflowNode__6B_;
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
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Material;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  return this;
}

