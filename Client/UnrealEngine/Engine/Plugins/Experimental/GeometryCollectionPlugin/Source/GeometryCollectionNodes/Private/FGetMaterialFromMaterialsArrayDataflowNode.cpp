// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8a21a0

UScriptStruct * __cdecl FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton
  ;
}

// GetType @ 14e8a22f0

FName __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::GetType
          (FGetMaterialFromMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetMaterialFromMaterialsArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8a2bc0

bool __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::IsA
          (FGetMaterialFromMaterialsArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetMaterialFromMaterialsArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8a2c28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8a2c28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8a2c46;
      }
    }
  }
  bVar5 = true;
LAB_14e8a2c46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8a2c80

FStructOnScope * __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::NewStructOnScope
          (FGetMaterialFromMaterialsArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode,
                           (UObject *)pUVar2,L"GetMaterialFromMaterialsArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8a2e40

void __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::SerializeInternal
          (FGetMaterialFromMaterialsArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8a2ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8a2ed0

FName __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::GetDisplayName
          (FGetMaterialFromMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetMaterialFromMaterialsArray");
  return in_RDX;
}

// GetCategory @ 14e8a2f90

FName __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::GetCategory
          (FGetMaterialFromMaterialsArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Materials");
  return in_RDX;
}

// GetTags @ 14e8a2ff0

FString * __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::GetTags
          (FGetMaterialFromMaterialsArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8a3050

UScriptStruct * __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::TypedScriptStruct
          (FGetMaterialFromMaterialsArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode,
                         (UObject *)pUVar1,L"GetMaterialFromMaterialsArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 14e8a32b0

void __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::Evaluate
          (FGetMaterialFromMaterialsArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TObjectPtr<UMaterial> *pTVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  undefined1 *puVar12;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar13;
  FDataflowInput *this_00;
  int *piVar14;
  FDataflowOutput *this_01;
  FTimestamp FVar15;
  FGuid *pFVar16;
  ulong64 uVar17;
  undefined8 *puVar18;
  undefined1 local_res8 [8];
  undefined8 *local_res18 [2];
  FGuid local_78;
  FConnectionReference local_68;
  FConnectionReference local_50;
  
  pTVar1 = &this->Material;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UMaterial> *)puVar12 == pTVar1) {
    pTVar13 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->Materials);
    local_68.Reference = &this->MaterialIdx;
    local_68.Index = -1;
    local_68.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
    piVar14 = FDataflowInput::GetValue<int>(this_00,param_1,local_68.Reference);
    iVar2 = *piVar14;
    if (((pTVar13->ArrayNum < 1) || (iVar2 < 0)) || (pTVar13->ArrayNum <= iVar2)) {
      local_50.Index = -1;
      local_50.ContainerReference = (void *)0x0;
      local_50.Reference = pTVar1;
      this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_50);
      if (this_01 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>_>'::__l7::<lambda_1>::
        operator()(local_res8);
      }
      else if (this_01->_padding_ != 0) {
        FVar15 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
        uVar11 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
        pFVar16 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_01,&local_78);
        pFVar3 = (FProperty *)this_01->_padding_;
        uVar17 = CityHash64((char *)&this_01->_padding_,0x10);
        local_res18[0] = (undefined8 *)0x0;
        puVar18 = ::operator_new(0x50);
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)0x0;
        }
        else {
          uVar4 = *(undefined8 *)FVar15.Value;
          uVar7 = *(undefined8 *)pFVar16;
          uVar8 = *(undefined8 *)&pFVar16->C;
          *puVar18 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
          puVar18[6] = uVar4;
          *(undefined8 *)((longlong)puVar18 + 0xc) = uVar7;
          *(undefined8 *)((longlong)puVar18 + 0x14) = uVar8;
          *(undefined4 *)(puVar18 + 1) = 3;
          puVar18[4] = pFVar3;
          *(uint *)(puVar18 + 5) = uVar11;
          puVar18[7] = &___7FGCObject__6B_;
          *(undefined2 *)(puVar18 + 8) = 0;
          FGCObject::RegisterGCObject((FGCObject *)(puVar18 + 7));
          *puVar18 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UMaterial>_>::
                      _vftable__for__UE__Dataflow__FContextCacheElementBase__;
          puVar18[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UMaterial>_>::
                        _vftable__for__FGCObject__;
          puVar18[9] = 0;
        }
        puVar9 = local_res18[0];
        if (local_res18[0] != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*local_res18[0];
          local_res18[0] = puVar18;
          (*(code *)*puVar5)(puVar9,1);
          puVar18 = local_res18[0];
        }
        local_res18[0] = puVar18;
        if (local_res18[0] == (undefined8 *)0x0) {
          UE::Dataflow::FContext::SetNullData
                    (param_1,(uint)uVar17,pFVar3,pFVar16,uVar11,(FTimestamp *)FVar15.Value);
        }
        else {
          (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar17 & 0xffffffff,local_res18);
        }
        if (local_res18[0] != (undefined8 *)0x0) {
          (**(code **)*local_res18[0])(local_res18[0],1);
        }
      }
    }
    else {
      if ((iVar2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FDataflowNode::SetValue<TObjectPtr<UMaterial>_const_&,TObjectPtr<UMaterial>_>
                ((FDataflowNode *)this,param_1,
                 (TObjectPtr<UMaterial> *)((pTVar13->AllocatorInstance).Data + (longlong)iVar2 * 8),
                 pTVar1);
    }
  }
  return;
}

// FGetMaterialFromMaterialsArrayDataflowNode @ 14e920c80

FGetMaterialFromMaterialsArrayDataflowNode * __thiscall
FGetMaterialFromMaterialsArrayDataflowNode::FGetMaterialFromMaterialsArrayDataflowNode
          (FGetMaterialFromMaterialsArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetMaterialFromMaterialsArrayDataflowNode__6B_;
  local_58.Reference = &this->Materials;
  (this->Material).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (((TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)local_58.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this->MaterialIdx = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->MaterialIdx;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Material;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

