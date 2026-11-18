// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 18

// StaticStruct @ 14e8768f0

UScriptStruct * __cdecl FAddToMaterialInterfaceArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"AddToMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e876980

FName __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetType(FAddToMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddToMaterialInterfaceArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e876a50

bool __thiscall
FAddToMaterialInterfaceArrayDataflowNode::IsA
          (FAddToMaterialInterfaceArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddToMaterialInterfaceArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e876ab8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e876ab8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e876ad6;
      }
    }
  }
  bVar5 = true;
LAB_14e876ad6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e876b10

FStructOnScope * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::NewStructOnScope
          (FAddToMaterialInterfaceArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode,
                           (UObject *)pUVar2,L"AddToMaterialInterfaceArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e876b90

void __thiscall
FAddToMaterialInterfaceArrayDataflowNode::SerializeInternal
          (FAddToMaterialInterfaceArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"AddToMaterialInterfaceArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e876c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e876c20

FName __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetDisplayName
          (FAddToMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddToMaterialArray");
  return in_RDX;
}

// GetCategory @ 14e876c50

FName __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetCategory
          (FAddToMaterialInterfaceArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e876cc0

FString * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetTags
          (FAddToMaterialInterfaceArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e876cf0

UScriptStruct * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::TypedScriptStruct
          (FAddToMaterialInterfaceArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode,
                         (UObject *)pUVar1,L"AddToMaterialInterfaceArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddToMaterialInterfaceArrayDataflowNode.OuterSingleton;
}

// AddPins @ 14e876d40

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::AddPins
          (FAddToMaterialInterfaceArrayDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
  FName local_res8;
  FName local_res10;
  initializer_list<UE::Dataflow::FPin> local_58;
  FPin local_48;
  FScriptContainerElement *local_30;
  uint local_28;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *local_20;
  
  pTVar2 = &this->MaterialsToAdd;
  local_28 = (this->MaterialsToAdd).ArrayNum;
  piVar1 = &(this->MaterialsToAdd).ArrayMax;
  if (local_28 == *piVar1) {
    local_28 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MaterialsToAdd).ArrayNum = local_28 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)local_28 * 8) = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  uVar7 = 0;
  if ((int)local_28 < (this->MaterialsToAdd).ArrayNum) {
    uVar7 = ~local_28 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  local_30 = (pTVar2->AllocatorInstance).Data + (longlong)(int)local_28 * 8;
  local_20 = pTVar2;
  pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,(FConnectionReference *)&local_30,&local_res10,
                      &local_res8);
  local_48.Direction = INPUT;
  local_48.bHidden = false;
  local_48.Type = (FName)pFVar6->_padding_;
  local_48.Name = (FName)pFVar6->_padding_;
  local_58._First = &local_48;
  local_58._Last = (FPin *)&local_30;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>::
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// CanAddPin @ 14e876e80

bool __thiscall
FAddToMaterialInterfaceArrayDataflowNode::CanAddPin(FAddToMaterialInterfaceArrayDataflowNode *this)

{
  return true;
}

// CanRemovePin @ 14e876e90

bool __thiscall
FAddToMaterialInterfaceArrayDataflowNode::CanRemovePin
          (FAddToMaterialInterfaceArrayDataflowNode *this)

{
  return 0 < (this->MaterialsToAdd).ArrayNum;
}

// GetPinsToRemove @ 14e876eb0

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetPinsToRemove
          (FAddToMaterialInterfaceArrayDataflowNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
  initializer_list<UE::Dataflow::FPin> local_48;
  FPin local_38;
  FScriptContainerElement *local_20;
  uint local_18;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *local_10;
  
  iVar1 = (this->MaterialsToAdd).ArrayNum;
  uVar7 = iVar1 - 1;
  if (((int)uVar7 < 0) || (iVar1 <= (int)uVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialsToAdd.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar7 < (this->MaterialsToAdd).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_20 = (this->MaterialsToAdd).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
  local_18 = uVar7;
  local_10 = &this->MaterialsToAdd;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_20);
  if (pFVar6 == (FDataflowInput *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    local_38.Type = (FName)pFVar6->_padding_;
    local_38.Name = (FName)pFVar6->_padding_;
    local_48._First = &local_38;
    local_48._Last = (FPin *)&local_20;
    local_38.Direction = INPUT;
    local_38.bHidden = false;
    TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>::
    TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_48);
  }
  return __return_storage_ptr__;
}

// OnPinRemoved @ 14e876ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAddToMaterialInterfaceArrayDataflowNode::OnPinRemoved
          (FAddToMaterialInterfaceArrayDataflowNode *this,FPin *param_1)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  uint uVar6;
  FConnectionReference local_28;
  
  this_00 = &this->MaterialsToAdd;
  iVar1 = (this->MaterialsToAdd).ArrayNum;
  uVar6 = iVar1 - 1;
  if (((int)uVar6 < 0) || (iVar1 <= (int)uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialsToAdd.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                       ,0xdf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if ((int)uVar6 < (this->MaterialsToAdd).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  local_28.Reference = (this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
  local_28.Index = uVar6;
  local_28.ContainerReference = this_00;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  if (pFVar5 == (FDataflowInput *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Name) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetName() == Pin.Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Type) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetType() == Pin.Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                       ,0xe4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar6,Default);
  return;
}

// PostSerialize @ 14e877170

void __thiscall
FAddToMaterialInterfaceArrayDataflowNode::PostSerialize
          (FAddToMaterialInterfaceArrayDataflowNode *this,FArchive *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
  FName local_res10;
  FName local_res18 [2];
  FConnectionReference local_38;
  
  if ((param_1->field_0x28 & 1) != 0) {
    if (((this->MaterialsToAdd).ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaterialsToAdd.Num() >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                           ,0xef,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = 0;
    if (0 < (this->MaterialsToAdd).ArrayNum) {
      do {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        local_res18[0].ComparisonIndex.Value = 0;
        local_res18[0].Number = 0;
        uVar4 = 0;
        if ((int)uVar7 < (this->MaterialsToAdd).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_38.Reference =
             (this->MaterialsToAdd).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        local_38.Index = uVar7;
        local_38.ContainerReference = &this->MaterialsToAdd;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
        if (pFVar6 == (FDataflowInput *)0x0) {
          FDataflowNode::RegisterInputArrayConnectionInternal
                    ((FDataflowNode *)this,&local_38,local_res18,&local_res10);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->MaterialsToAdd).ArrayNum);
    }
    iVar1 = (this->MaterialsToAdd).ArrayNum;
    iVar5 = FDataflowNode::GetNumInputs((FDataflowNode *)this);
    if ((iVar1 + 1 != iVar5) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6627306061541933320>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionMaterialInterfaceNodes.cpp"
                           ,0x108,"MaterialsToAdd.Num() + NumOtherInputs == GetNumInputs()"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Evaluate @ 14e8772f0

void __thiscall
FAddToMaterialInterfaceArrayDataflowNode::Evaluate
          (FAddToMaterialInterfaceArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  int iVar1;
  FDataflowOutput *this_00;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  FDataflowInput *this_01;
  FScriptContainerElement *pFVar8;
  FTimestamp FVar9;
  FGuid *pFVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  TObjectPtr<UMaterialInterface>_u_0 local_88;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_80;
  FGuid local_70;
  FConnectionReference local_60;
  
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar6 ==
      &this->MaterialArray) {
    pTVar7 = FDataflowNode::
             GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->MaterialArray);
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar7->ArrayNum;
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    local_80.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_80.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_80.AllocatorInstance,iVar1,&local_80.ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                (local_80.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar8,iVar1);
    }
    uVar14 = 0;
    if (0 < (this->MaterialsToAdd).ArrayNum) {
      do {
        uVar5 = 0;
        if ((int)uVar14 < (this->MaterialsToAdd).ArrayNum) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_60.Reference =
             (this->MaterialsToAdd).AllocatorInstance.Data + (longlong)(int)uVar14 * 8;
        local_60.Index = uVar14;
        local_60.ContainerReference = &this->MaterialsToAdd;
        this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
        pFVar8 = local_60.Reference;
        this_00 = this_01->Connection;
        if (this_00 != (FDataflowOutput *)0x0) {
          bVar4 = FDataflowOutput::HasFrozenValue(this_00);
          if (bVar4) {
            pFVar8 = (FScriptContainerElement *)
                     FDataflowOutput::GetFrozenPropertyValue(this_00,(uchar *)pFVar8);
          }
          else {
            bVar4 = FDataflowOutput::Evaluate(this_00,param_1);
            if (!bVar4) {
              FVar9 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
              uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
              pFVar10 = FDataflowConnection::GetOwningNodeGuid
                                  ((FDataflowConnection *)this_01,&local_70);
              pFVar2 = (FProperty *)this_01->_padding_;
              uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
              UE::Dataflow::FContext::SetData<TObjectPtr<UMaterialInterface>_const_&>
                        (param_1,(uint)uVar11,pFVar2,(TObjectPtr<UMaterialInterface> *)pFVar8,
                         pFVar10,uVar5,(FTimestamp *)FVar9.Value);
            }
            uVar11 = UE::Dataflow::FTimestamp::Invalid;
            uVar12 = CityHash64((char *)&this_00->_padding_,0x10);
            bVar4 = UE::Dataflow::FContext::HasData(param_1,(uint)uVar12,(FTimestamp)uVar11);
            if (bVar4) {
              pFVar2 = (FProperty *)this_01->_padding_;
              uVar11 = CityHash64((char *)&this_00->_padding_,0x10);
              puVar13 = (undefined8 *)
                        (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar11 & 0xffffffff);
              if (puVar13 != (undefined8 *)0x0) {
                pFVar8 = (FScriptContainerElement *)
                         UE::Dataflow::FContextCacheElementBase::
                         GetTypedData<TObjectPtr<UMaterialInterface>_>
                                   ((FContextCacheElementBase *)*puVar13,
                                    (IContextCacheStore *)param_1,pFVar2,
                                    (TObjectPtr<UMaterialInterface> *)pFVar8);
              }
            }
          }
        }
        local_88.ObjectPtr.field0_0x0 =
             (FObjectPtr)((TObjectPtr<UMaterialInterface>_u_0 *)&pFVar8->field_0x0)->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_88.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_88.DebugPtr);
        }
        if (((local_80.AllocatorInstance.Data <= &local_88) &&
            (&local_88 <
             (TObjectPtr<UMaterialInterface>_u_0 *)
             (local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_80.ArrayNum == local_80.ArrayMax) {
          local_80.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
        }
        iVar1 = local_80.ArrayNum + 1;
        ((TObjectPtr<UMaterialInterface>_u_0 *)
        (local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 8))->DebugPtr =
             (UMaterialInterface *)local_88;
        local_80.ArrayNum = iVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_88.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_88.DebugPtr);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (this->MaterialsToAdd).ArrayNum);
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_80,&this->MaterialArray);
    if ((TObjectPtr<UMaterialInterface>_u_0 *)local_80.AllocatorInstance.Data !=
        (TObjectPtr<UMaterialInterface>_u_0 *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  return;
}

// FAddToMaterialInterfaceArrayDataflowNode @ 14e910320

FAddToMaterialInterfaceArrayDataflowNode * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::FAddToMaterialInterfaceArrayDataflowNode
          (FAddToMaterialInterfaceArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FDataflowOutput *this_00;
  FAddToMaterialInterfaceArrayDataflowNode *pFVar6;
  FDataflowInput *pFVar7;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_c8;
  ForAnyElementType local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  FConnectionReference local_98;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FGuid local_38;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  local_80.Index = -1;
  pTVar1 = &this->MaterialArray;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FAddToMaterialInterfaceArrayDataflowNode__6B_;
  pTVar2 = &this->MaterialsToAdd;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialsToAdd).ArrayNum = 0;
  (this->MaterialsToAdd).ArrayMax = 0;
  local_80.ContainerReference = (void *)0x0;
  local_80.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_80,&local_res8);
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_98.Index = -1;
  local_98.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_98.Reference = pTVar1;
  local_68.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_68,&local_res18);
  if (local_98.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_98);
  }
  local_50.Index = (this->MaterialsToAdd).ArrayNum;
  if (local_50.Index == (this->MaterialsToAdd).ArrayMax) {
    local_50.Index =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&pTVar2->AllocatorInstance,&(this->MaterialsToAdd).ArrayMax);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  (this->MaterialsToAdd).ArrayNum = local_50.Index + 1;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)local_50.Index * 8) = 0;
  uVar5 = 0;
  if (local_50.Index < (this->MaterialsToAdd).ArrayNum) {
    uVar5 = (uint)~local_50.Index >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAddToMaterialInterfaceArrayDataflowNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_50.Reference = (pTVar2->AllocatorInstance).Data + (longlong)local_50.Index * 8;
  local_50.ContainerReference = pTVar2;
  pFVar7 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_c8,&local_res20);
  local_b0 = CONCAT31(local_b0._1_3_,1);
  uStack_9c = uStack_9c & 0xffffff00;
  uStack_a4 = (undefined4)pFVar7->_padding_;
  uStack_a0 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  uStack_ac = (undefined4)pFVar7->_padding_;
  uStack_a8 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,1,0,&local_c0,1,&local_b4);
  *(ulonglong *)local_c0.Data = CONCAT44(uStack_ac,local_b0);
  *(ulonglong *)(local_c0.Data + 8) = CONCAT44(uStack_a4,uStack_a8);
  *(ulonglong *)(local_c0.Data + 0x10) = CONCAT44(uStack_9c,uStack_a0);
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return this;
}

// GetConnectionReference @ 14e952930

TConnectionReference<TObjectPtr<UMaterialInterface>_> * __thiscall
FAddToMaterialInterfaceArrayDataflowNode::GetConnectionReference
          (FAddToMaterialInterfaceArrayDataflowNode *this,
          TConnectionReference<TObjectPtr<UMaterialInterface>_> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TConnectionReference<TObjectPtr<UMaterialInterface>_> *pTVar5;
  
  uVar4 = 0;
  if (param_1 < (this->MaterialsToAdd).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TConnectionReference<TObjectPtr<UMaterialInterface>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (this->MaterialsToAdd).AllocatorInstance.Data;
  *(TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> **)
   &__return_storage_ptr__->field_0x10 = &this->MaterialsToAdd;
  *(int *)&__return_storage_ptr__->field_0x8 = param_1;
  *(FScriptContainerElement **)__return_storage_ptr__ = pFVar1 + (longlong)param_1 * 8;
  return __return_storage_ptr__;
}

