// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticStruct @ 14e10ea10

UScriptStruct * __cdecl FOptimusNodeAction_AddRemovePin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeAction_AddRemovePin.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeAction_AddRemovePin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin,(UObject *)pUVar1
                         ,L"OptimusNodeAction_AddRemovePin");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeAction_AddRemovePin.OuterSingleton;
}

// FOptimusNodeAction_AddRemovePin @ 14e1523d0

FOptimusNodeAction_AddRemovePin * __thiscall
FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
          (FOptimusNodeAction_AddRemovePin *this,UOptimusNode *param_1,FName param_2,
          EOptimusNodePinDirection param_3,FOptimusDataDomain *param_4,FOptimusDataTypeRef *param_5,
          UOptimusNodePin *param_6,UOptimusNodePin *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  UOptimusNode *pUVar6;
  UClass *pUVar7;
  FOptimusNodeAction_AddRemovePin *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  UOptimusNodePin *pUVar12;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  pFVar10 = &this->NodePath;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_AddRemovePin__6B_;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  this->Direction = Unknown;
  this->bIsGroupingPin = false;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  pFVar11 = &this->BeforePinPath;
  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeforePinPath).Data.ArrayNum = 0;
  (this->BeforePinPath).Data.ArrayMax = 0;
  (this->ParentPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPinPath).Data.ArrayNum = 0;
  (this->ParentPinPath).Data.ArrayMax = 0;
  (this->PinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  this->bExpanded = false;
  if (param_1 == (UOptimusNode *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643787978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x136,"InNode");
    if (bVar5) goto code_r0x00014e1525ea;
    goto LAB_14e15275c;
  }
  if (param_6 != (UOptimusNodePin *)0x0) {
    pUVar6 = UOptimusNodePin::GetOwningNode(param_6);
    if (pUVar6 != param_1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1440688917643787977>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                         ,0x137,"!InBeforePin || InBeforePin->GetOwningNode() == InNode");
      if (bVar5) goto code_r0x00014e1525ea;
      goto LAB_14e15275c;
    }
    pUVar12 = (UOptimusNodePin *)param_6->_padding_;
    if (pUVar12 == (UOptimusNodePin *)0x0) {
LAB_14e15252e:
      pUVar12 = (UOptimusNodePin *)0x0;
    }
    else {
      pUVar7 = UOptimusNodePin::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) goto LAB_14e15252e;
    }
    if (pUVar12 != param_7) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1440688917643787976>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                         ,0x138,"!InBeforePin || InBeforePin->GetParentPin() == InParentPin");
      if (bVar5) goto code_r0x00014e1525ea;
      goto LAB_14e15275c;
    }
  }
  if (param_7 != (UOptimusNodePin *)0x0) {
    pUVar6 = UOptimusNodePin::GetOwningNode(param_7);
    if (pUVar6 != param_1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1440688917643787975>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                         ,0x139,"!InParentPin || InParentPin->GetOwningNode() == InNode");
      if (bVar5) {
code_r0x00014e1525ea:
        pcVar4 = (code *)swi(3);
        pFVar8 = (FOptimusNodeAction_AddRemovePin *)(*pcVar4)();
        return pFVar8;
      }
      goto LAB_14e15275c;
    }
    if (param_7->bIsGroupingPin == false) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1440688917643787974>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                         ,0x13a,"!InParentPin || InParentPin->IsGroupingPin()");
      if (bVar5) goto code_r0x00014e1525ea;
      goto LAB_14e15275c;
    }
  }
  pFVar9 = UOptimusNode::GetNodePath(param_1,&local_68);
  if (pFVar10 != pFVar9) {
    pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar10->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this->PinName = param_2;
  this->Direction = param_3;
  (this->DataDomain).Type = param_4->Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).DimensionNames,&param_4->DimensionNames);
  (this->DataDomain).Multiplier = param_4->Multiplier;
  ::FString::operator=(&(this->DataDomain).Expression,&param_4->Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).LevelNames_DEPRECATED,&param_4->LevelNames_DEPRECATED);
  this->DataType = param_5->TypeName;
  this->bExpanded = false;
  if (param_6 != (UOptimusNodePin *)0x0) {
    pFVar10 = UOptimusNodePin::GetPinPath(param_6,&local_58);
    if (pFVar11 != pFVar10) {
      pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar11->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->BeforePinPath).Data.ArrayNum = (pFVar10->Data).ArrayNum;
      (this->BeforePinPath).Data.ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (param_7 != (UOptimusNodePin *)0x0) {
    pFVar11 = UOptimusNodePin::GetPinPath(param_7,&local_48);
    pFVar10 = &this->ParentPinPath;
    if (pFVar10 != pFVar11) {
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar10->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ParentPinPath).Data.ArrayNum = (pFVar11->Data).ArrayNum;
      (this->ParentPinPath).Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_14e15275c:
  pvVar3 = *(void **)&(param_5->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return this;
}

// FOptimusNodeAction_AddRemovePin @ 14e1527b0

FOptimusNodeAction_AddRemovePin * __thiscall
FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
          (FOptimusNodeAction_AddRemovePin *this,UOptimusNode *param_1,FName param_2,
          EOptimusNodePinDirection param_3,UOptimusNodePin *param_4)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UOptimusNode *pUVar5;
  FOptimusNodeAction_AddRemovePin *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FString local_48;
  FString local_38;
  
  pFVar8 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_AddRemovePin__6B_;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  this->Direction = Unknown;
  this->bIsGroupingPin = false;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  pFVar1 = &this->BeforePinPath;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeforePinPath).Data.ArrayNum = 0;
  (this->BeforePinPath).Data.ArrayMax = 0;
  (this->ParentPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPinPath).Data.ArrayNum = 0;
  (this->ParentPinPath).Data.ArrayMax = 0;
  (this->PinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  this->bExpanded = false;
  if (param_1 == (UOptimusNode *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643787945>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x157,"InNode");
    if (bVar4) {
code_r0x00014e1528bf:
      pcVar3 = (code *)swi(3);
      pFVar6 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
      return pFVar6;
    }
  }
  else if ((param_4 == (UOptimusNodePin *)0x0) ||
          (pUVar5 = UOptimusNodePin::GetOwningNode(param_4), pUVar5 == param_1)) {
    pFVar7 = UOptimusNode::GetNodePath(param_1,&local_48);
    if (pFVar8 != pFVar7) {
      pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar8->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NodePath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->NodePath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    this->PinName = param_2;
    this->Direction = param_3;
    this->bIsGroupingPin = true;
    this->bExpanded = false;
    if (param_4 != (UOptimusNodePin *)0x0) {
      pFVar8 = UOptimusNodePin::GetPinPath(param_4,&local_38);
      if (pFVar1 != pFVar8) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->BeforePinPath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
        (this->BeforePinPath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643787944>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x158,"!InBeforePin || InBeforePin->GetOwningNode() == InNode");
    if (bVar4) goto code_r0x00014e1528bf;
  }
  return this;
}

// FOptimusNodeAction_AddRemovePin @ 14e1529a0

FOptimusNodeAction_AddRemovePin * __thiscall
FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
          (FOptimusNodeAction_AddRemovePin *this,UOptimusNodePin *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  UOptimusNode *pUVar7;
  FString *pFVar8;
  FString *pFVar9;
  FName FVar10;
  UClass *pUVar11;
  FString *pFVar12;
  FOptimusNodeAction_AddRemovePin *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<FSetElementId> FVar17;
  UOptimusNodePin *pUVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar9 = &this->NodePath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_AddRemovePin__6B_;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  this->Direction = Unknown;
  this->bIsGroupingPin = false;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  pFVar12 = &this->PinPath;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  (this->BeforePinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeforePinPath).Data.ArrayNum = 0;
  (this->BeforePinPath).Data.ArrayMax = 0;
  (this->ParentPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPinPath).Data.ArrayNum = 0;
  (this->ParentPinPath).Data.ArrayMax = 0;
  this->bExpanded = false;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643787924>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x16c,"InPin");
    if (!bVar5) {
      return this;
    }
    goto code_r0x00014e152ddc;
  }
  pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
  pFVar8 = UOptimusNode::GetNodePath(pUVar7,&local_68);
  if (pFVar9 != pFVar8) {
    pFVar20 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pFVar9->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar9 = UOptimusNodePin::GetPinPath(param_1,&local_58);
  if (pFVar12 != pFVar9) {
    pFVar20 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pFVar12->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PinPath).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->PinPath).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->PinName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->PinName).Number = uVar4;
  this->Direction = param_1->Direction;
  bVar5 = param_1->bIsGroupingPin;
  this->bIsGroupingPin = bVar5;
  if (bVar5 == false) {
    (this->DataDomain).Type = (param_1->DataDomain).Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->DataDomain).DimensionNames,&(param_1->DataDomain).DimensionNames);
    (this->DataDomain).Multiplier = (param_1->DataDomain).Multiplier;
    ::FString::operator=(&(this->DataDomain).Expression,&(param_1->DataDomain).Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&(this->DataDomain).LevelNames_DEPRECATED,
               &(param_1->DataDomain).LevelNames_DEPRECATED);
    FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_78);
    if ((local_78.Object == (FOptimusDataType *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
      return pFVar13;
    }
    this->DataType = (local_78.Object)->TypeName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
  FVar10 = UOptimusNodePin::GetUniqueName(param_1);
  lVar1 = *(longlong *)FVar10;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(pUVar7->ExpandedPins).Elements.field_0x8 !=
      *(int *)&(pUVar7->ExpandedPins).Elements.field_0x34) {
    FVar17 = (pUVar7->ExpandedPins).Hash.SecondaryData;
    if (FVar17 == (ForElementType<FSetElementId>)0x0) {
      FVar17 = (ForElementType<FSetElementId>)&(pUVar7->ExpandedPins).Hash;
    }
    iVar14 = *(int *)((longlong)FVar17 +
                     (ulonglong)
                     ((pUVar7->ExpandedPins).HashSize - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar6
                     ) * 4);
    if (iVar14 != -1) {
      lVar2 = *(longlong *)&(pUVar7->ExpandedPins).Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar14 * 0x10) == lVar1) goto LAB_14e152c2a;
        iVar14 = *(int *)(lVar2 + 8 + (longlong)iVar14 * 0x10);
      } while (iVar14 != -1);
    }
  }
  iVar14 = -1;
LAB_14e152c2a:
  this->bExpanded = iVar14 != -1;
  lVar1 = param_1->_padding_;
  if (lVar1 == 0) {
LAB_14e152d5a:
    pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
    iVar14 = (pUVar7->Pins).ArrayNum;
    pFVar20 = (pUVar7->Pins).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
      return pFVar13;
    }
  }
  else {
    pUVar11 = UOptimusNodePin::StaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    iVar14 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar14) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar11->_padding_)) goto LAB_14e152d5a;
    pUVar18 = (UOptimusNodePin *)param_1->_padding_;
    if (pUVar18 == (UOptimusNodePin *)0x0) {
LAB_14e152c9a:
      pUVar18 = (UOptimusNodePin *)0x0;
    }
    else {
      pUVar11 = UOptimusNodePin::StaticClass();
      iVar14 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar11->_padding_)) goto LAB_14e152c9a;
    }
    pFVar20 = (pUVar18->SubPins).AllocatorInstance.Data;
    iVar14 = (pUVar18->SubPins).ArrayNum;
    if ((iVar14 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
      return pFVar13;
    }
    pUVar18 = (UOptimusNodePin *)param_1->_padding_;
    if (pUVar18 == (UOptimusNodePin *)0x0) {
LAB_14e152d00:
      pUVar18 = (UOptimusNodePin *)0x0;
    }
    else {
      pUVar11 = UOptimusNodePin::StaticClass();
      iVar15 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar11->_padding_)) goto LAB_14e152d00;
    }
    pFVar12 = UOptimusNodePin::GetPinPath(pUVar18,&local_48);
    pFVar9 = &this->ParentPinPath;
    if (pFVar9 != pFVar12) {
      pFVar16 = (pFVar9->Data).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pFVar9->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ParentPinPath).Data.ArrayNum = (pFVar12->Data).ArrayNum;
      (this->ParentPinPath).Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  for (pFVar16 = pFVar20; pFVar16 != pFVar20 + (longlong)iVar14 * 8; pFVar16 = pFVar16 + 8) {
    if (*(UOptimusNodePin **)pFVar16 == param_1) {
      iVar15 = (int)((longlong)pFVar16 - (longlong)pFVar20 >> 3);
      if ((-1 < iVar15) && (iVar15 < iVar14)) {
        if (iVar14 + -1 <= iVar15) {
          return this;
        }
        uVar19 = iVar15 + 1;
        uVar6 = 0;
        if ((int)uVar19 < iVar14) {
          uVar6 = ~uVar19 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
          return pFVar13;
        }
        pFVar12 = UOptimusNodePin::GetPinPath
                            (*(UOptimusNodePin **)(pFVar20 + (longlong)(int)uVar19 * 8),&local_38);
        pFVar9 = &this->BeforePinPath;
        if (pFVar9 != pFVar12) {
          pFVar20 = (pFVar9->Data).AllocatorInstance.Data;
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar20);
          }
          (pFVar9->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->BeforePinPath).Data.ArrayNum = (pFVar12->Data).ArrayNum;
          (this->BeforePinPath).Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return this;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return this;
      }
      break;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1440688917643787894>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                     ,0x18a,"Pins.IsValidIndex(PinIndex)");
  if (!bVar5) {
    return this;
  }
code_r0x00014e152ddc:
  pcVar3 = (code *)swi(3);
  pFVar13 = (FOptimusNodeAction_AddRemovePin *)(*pcVar3)();
  return pFVar13;
}

// FOptimusNodeAction_AddRemovePin @ 14e152ed0

FOptimusNodeAction_AddRemovePin * __thiscall
FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
          (FOptimusNodeAction_AddRemovePin *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeAction_AddRemovePin__6B_;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  this->Direction = Unknown;
  this->bIsGroupingPin = false;
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  (this->DataType).ComparisonIndex = 0;
  (this->DataType).Number = 0;
  (this->BeforePinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeforePinPath).Data.ArrayNum = 0;
  (this->BeforePinPath).Data.ArrayMax = 0;
  (this->ParentPinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentPinPath).Data.ArrayNum = 0;
  (this->ParentPinPath).Data.ArrayMax = 0;
  (this->PinPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinPath).Data.ArrayNum = 0;
  (this->PinPath).Data.ArrayMax = 0;
  this->bExpanded = false;
  return this;
}

// ~FOptimusNodeAction_AddRemovePin @ 14e1614c0

void __thiscall
FOptimusNodeAction_AddRemovePin::~FOptimusNodeAction_AddRemovePin
          (FOptimusNodeAction_AddRemovePin *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PinPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentPinPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BeforePinPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).LevelNames_DEPRECATED.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).Expression.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataDomain).DimensionNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator= @ 14e165760

FOptimusNodeAction_AddRemovePin * __thiscall
FOptimusNodeAction_AddRemovePin::operator=
          (FOptimusNodeAction_AddRemovePin *this,FOptimusNodeAction_AddRemovePin *param_1)

{
  ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  ::FString::operator=(&this->NodePath,&param_1->NodePath);
  this->PinName = param_1->PinName;
  this->Direction = param_1->Direction;
  this->bIsGroupingPin = param_1->bIsGroupingPin;
  (this->DataDomain).Type = (param_1->DataDomain).Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).DimensionNames,&(param_1->DataDomain).DimensionNames);
  (this->DataDomain).Multiplier = (param_1->DataDomain).Multiplier;
  ::FString::operator=(&(this->DataDomain).Expression,&(param_1->DataDomain).Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DataDomain).LevelNames_DEPRECATED,&(param_1->DataDomain).LevelNames_DEPRECATED)
  ;
  this->DataType = param_1->DataType;
  ::FString::operator=(&this->BeforePinPath,&param_1->BeforePinPath);
  ::FString::operator=(&this->ParentPinPath,&param_1->ParentPinPath);
  ::FString::operator=(&this->PinPath,&param_1->PinPath);
  this->bExpanded = param_1->bExpanded;
  return this;
}

// AddPin @ 14e176ec0

bool __thiscall
FOptimusNodeAction_AddRemovePin::AddPin
          (FOptimusNodeAction_AddRemovePin *this,IOptimusPathResolver *param_1)

{
  FOptimusDataType *pFVar1;
  undefined4 uVar2;
  ForAnyElementType _Src;
  UOptimusNode *this_00;
  UOptimusNodePin *pUVar3;
  UOptimusNodePin *pUVar4;
  FOptimusDataTypeRegistry *this_01;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar5;
  FString *pFVar6;
  size_t _Size;
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  undefined1 local_88 [32];
  FUtf8String local_68;
  undefined1 local_58 [32];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this_00 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if (((this_00 != (UOptimusNode *)0x0) &&
      ((pUVar4 = (UOptimusNodePin *)0x0, pUVar3 = pUVar4, (this->BeforePinPath).Data.ArrayNum < 2 ||
       (pUVar3 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1),
       pUVar3 != (UOptimusNodePin *)0x0)))) &&
     (((this->ParentPinPath).Data.ArrayNum < 2 ||
      (pUVar4 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1),
      pUVar4 != (UOptimusNodePin *)0x0)))) {
    if (this->bIsGroupingPin == false) {
      this_01 = FOptimusDataTypeRegistry::Get();
      pTVar5 = FOptimusDataTypeRegistry::FindType(this_01,&local_98,this->DataType);
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_88._8_8_ = 0;
      local_88._24_8_ = 0;
      local_88._16_8_ = 0;
      FUtf8String::Reset(&local_68,0);
      local_a8.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      local_a8.Object = pTVar5->Object;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_88,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar5->SharedReferenceCount).ReferenceController);
      pTVar5 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_88,&local_a8);
      pFVar1 = pTVar5->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      _Src.Data = local_68.Data.AllocatorInstance.Data;
      if (pFVar1 == (FOptimusDataType *)0x0) {
        if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        return false;
      }
      _Size = (size_t)local_68.Data.ArrayNum;
      local_58._0_8_ = local_88._0_8_;
      local_58._8_8_ = local_88._8_8_;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = local_68.Data.ArrayNum;
      local_58._16_8_ = local_88._16_8_;
      local_58._24_8_ = local_88._24_8_;
      if (local_68.Data.ArrayNum == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_68.Data.ArrayNum,0,&local_38,local_68.Data.ArrayNum,&local_2c);
        memcpy(local_38.Data,_Src.Data,_Size);
      }
      pUVar3 = UOptimusNode::AddPinDirect
                         (this_00,this->PinName,this->Direction,&this->DataDomain,
                          (FOptimusDataTypeRef *)local_58,pUVar3,pUVar4);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      pUVar3 = UOptimusNode::AddGroupingPinDirect(this_00,this->PinName,this->Direction,pUVar3);
    }
    if (pUVar3 != (UOptimusNodePin *)0x0) {
      UOptimusNodePin::SetIsExpanded(pUVar3,this->bExpanded);
      uVar2 = *(undefined4 *)((longlong)&pUVar3->_padding_ + 4);
      (this->PinName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar3->_padding_;
      (this->PinName).Number = uVar2;
      pFVar6 = UOptimusNodePin::GetPinPath(pUVar3,(FString *)&local_a8);
      ::FString::operator=(&this->PinPath,pFVar6);
      if (local_a8.Object != (FOptimusDataType *)0x0) {
        FMemory::Free(local_a8.Object);
      }
      return true;
    }
  }
  return false;
}

// RemovePin @ 14e2151a0

bool __thiscall
FOptimusNodeAction_AddRemovePin::RemovePin
          (FOptimusNodeAction_AddRemovePin *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodePin *this_00;
  UOptimusNode *this_01;
  
  this_00 = (UOptimusNodePin *)(**(code **)((longlong)*param_1 + 0x28))(param_1,&this->PinPath);
  if (this_00 == (UOptimusNodePin *)0x0) {
    return false;
  }
  this_01 = UOptimusNodePin::GetOwningNode(this_00);
  bVar1 = UOptimusNode::RemovePinDirect(this_01,this_00);
  return bVar1;
}

