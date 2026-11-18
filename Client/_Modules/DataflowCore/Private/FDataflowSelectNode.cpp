// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 18

// StaticStruct @ 1443f2150

UScriptStruct * __cdecl FDataflowSelectNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode,(UObject *)pUVar1,
                         L"DataflowSelectNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton;
}

// GetType @ 1443f2210

FName __thiscall FDataflowSelectNode::GetType(FDataflowSelectNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowSelectNode");
  return in_RDX;
}

// IsA @ 1443f2240

bool __thiscall FDataflowSelectNode::IsA(FDataflowSelectNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowSelectNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f22a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f22a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f22c6;
      }
    }
  }
  bVar5 = true;
LAB_1443f22c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f2300

FStructOnScope * __thiscall FDataflowSelectNode::NewStructOnScope(FDataflowSelectNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode,(UObject *)pUVar2,
                           L"DataflowSelectNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f2380

void __thiscall FDataflowSelectNode::SerializeInternal(FDataflowSelectNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode,(UObject *)pUVar1,
                         L"DataflowSelectNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f23fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f2420

FName __thiscall FDataflowSelectNode::GetDisplayName(FDataflowSelectNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Select");
  return in_RDX;
}

// GetCategory @ 1443f2450

FName __thiscall FDataflowSelectNode::GetCategory(FDataflowSelectNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FlowControl");
  return in_RDX;
}

// GetTags @ 1443f2480

FString * __thiscall
FDataflowSelectNode::GetTags(FDataflowSelectNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f24b0

UScriptStruct * __thiscall FDataflowSelectNode::TypedScriptStruct(FDataflowSelectNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectNode,(UObject *)pUVar1,
                         L"DataflowSelectNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSelectNode.OuterSingleton;
}

// Evaluate @ 1443f24f0

void __thiscall
FDataflowSelectNode::Evaluate(FDataflowSelectNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  uint *puVar6;
  FDataflowOutput *this_00;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FConnectionReference local_38;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowAnyType *)puVar4 == &this->Result) {
    local_50.Index = -1;
    local_50.ContainerReference = (void *)0x0;
    local_50.Reference = &this->SelectedIndex;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
    puVar6 = (uint *)FDataflowInput::GetValue<int>(pFVar5,param_1,&this->SelectedIndex);
    local_68.Index = *puVar6;
    if ((-1 < local_68.Index) && (local_68.Index < (this->Inputs).ArrayNum)) {
      uVar3 = 0;
      if (local_68.Index < (this->Inputs).ArrayNum) {
        uVar3 = (uint)~local_68.Index >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_68.Reference = (this->Inputs).AllocatorInstance.Data + local_68.Index;
      local_68.ContainerReference = &this->Inputs;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
      if (pFVar5->Connection == (FDataflowOutput *)0x0) {
        FDataflowOutput::SetNullValue(param_2,param_1);
      }
      else {
        local_38.Index = -1;
        local_38.ContainerReference = (void *)0x0;
        local_38.Reference = &this->Result;
        this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_38);
        if ((this_00 != (FDataflowOutput *)0x0) &&
           (pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68),
           pFVar5 != (FDataflowInput *)0x0)) {
          FDataflowOutput::ForwardInput(this_00,pFVar5,param_1);
        }
      }
    }
  }
  return;
}

// AddPins @ 1443f50a0

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowSelectNode::AddPins
          (FDataflowSelectNode *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar7;
  FDataflowInput *pFVar8;
  FDataflowInput *pFVar9;
  FName local_res8;
  FName local_res10;
  initializer_list<UE::Dataflow::FPin> local_88;
  FPin local_78;
  FScriptContainerElement *local_60;
  uint local_58;
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *local_50;
  FConnectionReference local_48;
  
  pTVar2 = &this->Inputs;
  uVar5 = (this->Inputs).ArrayNum;
  piVar1 = &(this->Inputs).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = uVar5 + 1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  uVar6 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_60 = (pTVar2->AllocatorInstance).Data + (int)uVar5;
  local_58 = uVar5;
  local_50 = pTVar2;
  pFVar8 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,(FConnectionReference *)&local_60,&local_res10,
                      &local_res8);
  if (pFVar8->_padding_ == 0) {
    pFVar8->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if ((int)uVar5 < 1) {
    if ((pFVar8->_padding_ & 0x30000000000) == 0x10000000000) {
      *(FName *)((longlong)&pFVar8->_padding_ + 4) = MainTypeGroup;
    }
  }
  else {
    if ((this->Inputs).ArrayNum < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    local_48.Reference = (pTVar2->AllocatorInstance).Data;
    local_48.Index = 0;
    local_48.ContainerReference = pTVar2;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    if (pFVar9 == (FDataflowInput *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Input0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                         ,0x74,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    FDataflowNode::SetConnectionConcreteType
              ((FDataflowNode *)this,(FDataflowConnection *)pFVar8,(FName)pFVar9->_padding_,
               MainTypeGroup);
  }
  local_78.Type = (FName)pFVar8->_padding_;
  local_78.Name = (FName)pFVar8->_padding_;
  local_88._First = &local_78;
  local_88._Last = (FPin *)&local_60;
  local_78.Direction = INPUT;
  local_78.bHidden = false;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>::
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CanAddPin @ 1443f52d0

bool __thiscall FDataflowSelectNode::CanAddPin(FDataflowSelectNode *this)

{
  return true;
}

// CanRemovePin @ 1443f52e0

bool __thiscall FDataflowSelectNode::CanRemovePin(FDataflowSelectNode *this)

{
  return 2 < (this->Inputs).ArrayNum;
}

// GetPinsToRemove @ 1443f5300

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowSelectNode::GetPinsToRemove
          (FDataflowSelectNode *this,
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
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *local_10;
  
  iVar1 = (this->Inputs).ArrayNum;
  uVar7 = iVar1 - 1;
  if (((int)uVar7 < 0) || (iVar1 <= (int)uVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inputs.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x81,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar7 < (this->Inputs).ArrayNum) {
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
  local_20 = (this->Inputs).AllocatorInstance.Data + (int)uVar7;
  local_18 = uVar7;
  local_10 = &this->Inputs;
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

// OnPinRemoved @ 1443f5440

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDataflowSelectNode::OnPinRemoved(FDataflowSelectNode *this,FPin *param_1)

{
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  uint uVar6;
  FConnectionReference local_28;
  
  this_00 = &this->Inputs;
  iVar1 = (this->Inputs).ArrayNum;
  uVar6 = iVar1 - 1;
  if (((int)uVar6 < 0) || (iVar1 <= (int)uVar6)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inputs.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x8c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = 0;
  if ((int)uVar6 < (this->Inputs).ArrayNum) {
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
  local_28.Reference = (this_00->AllocatorInstance).Data + (int)uVar6;
  local_28.Index = uVar6;
  local_28.ContainerReference = this_00;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  if (pFVar5 == (FDataflowInput *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x8f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Name) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetName() == Pin.Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x90,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Type) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetType() == Pin.Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x91,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar6,Default);
  return;
}

// PostSerialize @ 1443f55c0

void __thiscall FDataflowSelectNode::PostSerialize(FDataflowSelectNode *this,FArchive *param_1)

{
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  uint uVar6;
  FName local_res10;
  FName local_res18;
  FConnectionReference local_58;
  FConnectionReference local_40;
  
  if ((param_1->field_0x28 & 1) != 0) {
    if (((this->Inputs).ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inputs.Num() >= NumInitialInputs",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                           ,0x9c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = &this->Inputs;
    if (((this->Inputs).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_58.Reference = (pTVar1->AllocatorInstance).Data;
    local_58.Index = 0;
    local_58.ContainerReference = pTVar1;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
    if ((pFVar5 == (FDataflowInput *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindInput(GetConnectionReference(Index))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->Inputs).ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_58.Reference = (pTVar1->AllocatorInstance).Data + 1;
    local_58.Index = 1;
    local_58.ContainerReference = pTVar1;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
    if ((pFVar5 == (FDataflowInput *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FindInput(GetConnectionReference(Index))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                           ,0x9f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = 2;
    if (2 < (this->Inputs).ArrayNum) {
      do {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        uVar4 = 0;
        if ((int)uVar6 < (this->Inputs).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
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
        local_40.Reference = (pTVar1->AllocatorInstance).Data + (int)uVar6;
        local_40.Index = uVar6;
        local_40.ContainerReference = pTVar1;
        pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_40);
        if (pFVar5 == (FDataflowInput *)0x0) {
          pFVar5 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_40,&local_res18,&local_res10);
          if (pFVar5->_padding_ == 0) {
            pFVar5->_padding_ =
                 (longlong)
                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
                  ::__l2::Instance;
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1810835547174732029>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                               ,0xfd,"TypePolicy == nullptr");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        FDataflowNode::SetConnectionConcreteType
                  ((FDataflowNode *)this,(FDataflowConnection *)pFVar5,(FName)pFVar5->_padding_,
                   MainTypeGroup);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (this->Inputs).ArrayNum);
    }
    if (((this->Inputs).ArrayNum + 1 !=
         (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4651981779555582140>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                           ,0xbc,"Inputs.Num() + NumRequiredDataflowInputs == GetNumInputs()"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FDataflowSelectNode @ 14442ed70

FDataflowSelectNode * __thiscall
FDataflowSelectNode::FDataflowSelectNode
          (FDataflowSelectNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowOutput *pFVar4;
  FDataflowSelectNode *pFVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FGuid local_38;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> local_28;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  local_80.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowSelectNode__6B_;
  pTVar1 = &this->Inputs;
  local_80.Reference = &this->SelectedIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(int *)local_80.Reference = 0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  local_80.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_80,&local_res8);
  lVar6 = 2;
  do {
    AddPins(this,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_68.Reference = &this->Result;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res18);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowSelectNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((this->Inputs).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowSelectNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_50.Reference = (pTVar1->AllocatorInstance).Data;
  local_50.Index = 0;
  local_50.ContainerReference = pTVar1;
  pFVar4 = FDataflowOutput::SetPassthroughInput(pFVar4,&local_50);
  if ((pFVar4->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar4->_padding_ + 4) = MainTypeGroup;
  }
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRequiredDataflowInputs + NumInitialInputs == GetNumInputs()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowCoreNodes.cpp"
                       ,0x54,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowSelectNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// GetConnectionReference @ 14444b050

TConnectionReference<FDataflowAnyType> * __thiscall
FDataflowSelectNode::GetConnectionReference
          (FDataflowSelectNode *this,TConnectionReference<FDataflowAnyType> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TConnectionReference<FDataflowAnyType> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Inputs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TConnectionReference<FDataflowAnyType> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(TArray<FDataflowAnyType,TSizedDefaultAllocator<32>_> **)&__return_storage_ptr__->field_0x10 =
       &this->Inputs;
  *(FScriptContainerElement **)__return_storage_ptr__ =
       (this->Inputs).AllocatorInstance.Data + param_1;
  *(int *)&__return_storage_ptr__->field_0x8 = param_1;
  return __return_storage_ptr__;
}

