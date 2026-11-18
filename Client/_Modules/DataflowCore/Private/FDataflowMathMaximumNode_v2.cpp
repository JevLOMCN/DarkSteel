// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 18

// StaticStruct @ 1443f2c90

UScriptStruct * __cdecl FDataflowMathMaximumNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2,(UObject *)pUVar1,
                         L"DataflowMathMaximumNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton;
}

// GetType @ 1443f2cd0

FName __thiscall FDataflowMathMaximumNode_v2::GetType(FDataflowMathMaximumNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathMaximumNode_v2");
  return in_RDX;
}

// IsA @ 1443f2d40

bool __thiscall FDataflowMathMaximumNode_v2::IsA(FDataflowMathMaximumNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathMaximumNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f2da8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f2da8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f2dc6;
      }
    }
  }
  bVar5 = true;
LAB_1443f2dc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f2e00

FStructOnScope * __thiscall
FDataflowMathMaximumNode_v2::NewStructOnScope(FDataflowMathMaximumNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2,(UObject *)pUVar2,
                           L"DataflowMathMaximumNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f2e80

void __thiscall
FDataflowMathMaximumNode_v2::SerializeInternal(FDataflowMathMaximumNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2,(UObject *)pUVar1,
                         L"DataflowMathMaximumNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f2efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f2f10

FName __thiscall FDataflowMathMaximumNode_v2::GetDisplayName(FDataflowMathMaximumNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Maximum");
  return in_RDX;
}

// GetCategory @ 1443f2f40

FName __thiscall FDataflowMathMaximumNode_v2::GetCategory(FDataflowMathMaximumNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f2f70

FString * __thiscall
FDataflowMathMaximumNode_v2::GetTags
          (FDataflowMathMaximumNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Highest Larger");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f2fa0

UScriptStruct * __thiscall
FDataflowMathMaximumNode_v2::TypedScriptStruct(FDataflowMathMaximumNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathMaximumNode_v2,(UObject *)pUVar1,
                         L"DataflowMathMaximumNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathMaximumNode_v2.OuterSingleton;
}

// AddPins @ 1443f2fe0

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowMathMaximumNode_v2::AddPins
          (FDataflowMathMaximumNode_v2 *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar6;
  FDataflowInput *pFVar7;
  uint uVar8;
  FName local_res8;
  FName local_res10;
  initializer_list<UE::Dataflow::FPin> local_58;
  FPin local_48;
  FScriptContainerElement *local_30;
  uint local_28;
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *local_20;
  
  pTVar2 = &this->Inputs;
  uVar5 = (this->Inputs).ArrayNum;
  piVar1 = &(this->Inputs).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = uVar5 + 1;
  DefaultConstructItems<FDataflowNumericTypes,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 8,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  uVar8 = 0;
  if ((int)uVar5 < (this->Inputs).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_30 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 8;
  local_28 = uVar5;
  local_20 = pTVar2;
  pFVar7 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,(FConnectionReference *)&local_30,&local_res10,
                      &local_res8);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_48.Type = (FName)pFVar7->_padding_;
  local_48.Name = (FName)pFVar7->_padding_;
  local_58._First = &local_48;
  local_58._Last = (FPin *)&local_30;
  local_48.Direction = INPUT;
  local_48.bHidden = false;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>::
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_58);
  return __return_storage_ptr__;
}

// CanAddPin @ 1443f3160

bool __thiscall FDataflowMathMaximumNode_v2::CanAddPin(FDataflowMathMaximumNode_v2 *this)

{
  return true;
}

// CanRemovePin @ 1443f3170

bool __thiscall FDataflowMathMaximumNode_v2::CanRemovePin(FDataflowMathMaximumNode_v2 *this)

{
  return 0 < (this->Inputs).ArrayNum;
}

// GetPinsToRemove @ 1443f3190

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowMathMaximumNode_v2::GetPinsToRemove
          (FDataflowMathMaximumNode_v2 *this,
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
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *local_10;
  
  iVar1 = (this->Inputs).ArrayNum;
  uVar7 = iVar1 - 1;
  if (((int)uVar7 < 0) || (iVar1 <= (int)uVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inputs.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                       ,0x16d,L"");
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
  local_20 = (this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
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

// OnPinRemoved @ 1443f32d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDataflowMathMaximumNode_v2::OnPinRemoved(FDataflowMathMaximumNode_v2 *this,FPin *param_1)

{
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *this_00;
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                       ,0x178,L"");
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
  local_28.Reference = (this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 8;
  local_28.Index = uVar6;
  local_28.ContainerReference = this_00;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  if (pFVar5 == (FDataflowInput *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                       ,0x17b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Name) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetName() == Pin.Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Type) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetType() == Pin.Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                       ,0x17d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar6,Default);
  return;
}

// PostSerialize @ 1443f3450

void __thiscall
FDataflowMathMaximumNode_v2::PostSerialize(FDataflowMathMaximumNode_v2 *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  uint uVar5;
  FName local_res10;
  FName local_res18 [2];
  FConnectionReference local_48;
  
  if ((param_1->field_0x28 & 1) != 0) {
    if (((this->Inputs).ArrayNum < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inputs.Num() >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                           ,0x188,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = 0;
    if (0 < (this->Inputs).ArrayNum) {
      do {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        local_res18[0].ComparisonIndex.Value = 0;
        local_res18[0].Number = 0;
        uVar3 = 0;
        if ((int)uVar5 < (this->Inputs).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48.Reference = (this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar5 * 8;
        local_48.Index = uVar5;
        local_48.ContainerReference = &this->Inputs;
        pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
        if (pFVar4 == (FDataflowInput *)0x0) {
          pFVar4 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_48,local_res18,&local_res10);
          if (pFVar4->_padding_ == 0) {
            pFVar4->_padding_ =
                 (longlong)
                 &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
                  ::__l2::Instance;
          }
          else {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1810835547174732029>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                               ,0xfd,"TypePolicy == nullptr");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (this->Inputs).ArrayNum);
    }
    if (((this->Inputs).ArrayNum != (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4))
       && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4337095732558298719>,true,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowMathNodes.cpp"
                              ,0x1a1,"Inputs.Num() + NumOtherInputs == GetNumInputs()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Evaluate @ 1443f3670

void __thiscall
FDataflowMathMaximumNode_v2::Evaluate
          (FDataflowMathMaximumNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowOutput *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  FPropertyBagPropertyDesc *pFVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  double local_res8;
  double local_res18;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res20;
  FConnectionReference local_78;
  <lambda_1> local_58;
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar5 == &this->Result) {
    uVar10 = 0;
    local_res8 = __real_0010000000000000;
    if (0 < (this->Inputs).ArrayNum) {
      lVar11 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar10 < (this->Inputs).ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
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
        pFVar9 = (this->Inputs).AllocatorInstance.Data + lVar11;
        local_78.Reference = pFVar9;
        local_78.Index = uVar10;
        local_78.ContainerReference = &this->Inputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
        local_res18 = *(double *)pFVar9;
        this_00 = pFVar6->Connection;
        dVar12 = local_res18;
        if (this_00 != (FDataflowOutput *)0x0) {
          lVar1 = this_00->_padding_;
          if (((lVar1 == 0) || (*(char *)(lVar1 + 0x200) == '\0')) ||
             (UE::Dataflow::Private::bDisableFreezingState != false)) {
            bVar3 = FDataflowOutput::Evaluate(this_00,param_1);
            dVar12 = local_res18;
            if (bVar3) {
              pcVar2 = *(code **)(param_1->_padding_ + 0x30);
              uVar8 = CityHash64((char *)&this_00->_padding_,0x10);
              local_res20 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                             *)(*pcVar2)(param_1,uVar8);
              dVar12 = local_res18;
              if ((local_res20 !=
                   (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                    *)0x0) && (local_res20->Ptr != (FContextCacheElementBase *)0x0)) {
                local_58.CacheEntry = &local_res20;
                local_58.ReturnValue = (TRotator<double> *)&local_res18;
                local_58.__this = pFVar6;
                local_58.Context = param_1;
                TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>
                ::
                VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowNumericTypes>_::__l17::<lambda_1>_>
                          ((FName)pFVar6->_padding_,&local_58);
                dVar12 = local_res18;
              }
            }
          }
          else {
            pFVar7 = FInstancedPropertyBag::FindPropertyDescByName
                               ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this_00->_padding_);
            if (((pFVar7 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0))
               && ((((FInstancedPropertyBag *)(lVar1 + 0x1f0))->Value).ScriptStruct.field0_0x0.
                   DebugPtr != (UScriptStruct *)0x0)) {
              pFVar9 = (FScriptContainerElement *)
                       ((longlong)pFVar7->CachedProperty->Offset_Internal +
                       *(longlong *)(lVar1 + 0x1f8));
            }
            dVar12 = *(double *)pFVar9;
          }
        }
        if (dVar12 <= local_res8) {
          dVar12 = local_res8;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
        local_res8 = dVar12;
      } while ((int)uVar10 < (this->Inputs).ArrayNum);
    }
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Result);
  }
  return;
}

// FDataflowMathMaximumNode_v2 @ 14442d6a0

FDataflowMathMaximumNode_v2 * __thiscall
FDataflowMathMaximumNode_v2::FDataflowMathMaximumNode_v2
          (FDataflowMathMaximumNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowOutput *pFVar5;
  FDataflowMathMaximumNode_v2 *pFVar6;
  FDataflowInput *pFVar7;
  uint uVar8;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  FConnectionReference local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  FConnectionReference local_60;
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  local_70 = 0xffffffff;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowMathMaximumNode_v2__6B_;
  pTVar1 = &this->Inputs;
  local_60.Reference = &this->Result;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  ((FDataflowNumericTypes *)local_60.Reference)->Value = 0.0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  local_78 = 0;
  local_68 = 0;
  local_60.Index = -1;
  local_60.ContainerReference = (void *)0x0;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_60,&local_res20);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathMaximumNode_v2 *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = (this->Inputs).ArrayNum;
  if (uVar4 == (this->Inputs).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Inputs).ArrayMax);
  }
  (this->Inputs).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FDataflowNumericTypes,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  uVar8 = 0;
  if ((int)uVar4 < (this->Inputs).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathMaximumNode_v2 *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_90.Reference = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8;
  local_90.Index = uVar4;
  local_90.ContainerReference = pTVar1;
  pFVar7 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res18,&local_res8);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathMaximumNode_v2 *)(*pcVar2)();
      return pFVar6;
    }
  }
  uStack_a4 = (undefined4)pFVar7->_padding_;
  uStack_a0 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  uStack_9c = (undefined4)pFVar7->_padding_;
  uStack_98 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  local_a8 = CONCAT31(local_a8._1_3_,1);
  uStack_94 = uStack_94 & 0xffffff00;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,1,0,&local_b8,1,&local_ac);
  *(ulonglong *)local_b8.Data = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(local_b8.Data + 8) = CONCAT44(uStack_9c,uStack_a0);
  *(ulonglong *)(local_b8.Data + 0x10) = CONCAT44(uStack_94,uStack_98);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  uVar4 = (this->Inputs).ArrayNum;
  if (uVar4 == (this->Inputs).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,&(this->Inputs).ArrayMax);
  }
  (this->Inputs).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FDataflowNumericTypes,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  uVar8 = 0;
  if ((int)uVar4 < (this->Inputs).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathMaximumNode_v2 *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_90.Reference = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 8;
  local_90.Index = uVar4;
  local_90.ContainerReference = pTVar1;
  pFVar7 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res18,&local_res8);
  if (pFVar7->_padding_ == 0) {
    pFVar7->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathMaximumNode_v2 *)(*pcVar2)();
      return pFVar6;
    }
  }
  uStack_a4 = (undefined4)pFVar7->_padding_;
  uStack_a0 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  uStack_9c = (undefined4)pFVar7->_padding_;
  uStack_98 = (undefined4)((ulonglong)pFVar7->_padding_ >> 0x20);
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,1,0,&local_b8,1,&local_ac);
  *(ulonglong *)local_b8.Data = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(local_b8.Data + 8) = CONCAT44(uStack_9c,uStack_a0);
  *(ulonglong *)(local_b8.Data + 0x10) = CONCAT44(uStack_94,uStack_98);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return this;
}

// GetConnectionReference @ 14444af30

TConnectionReference<FDataflowNumericTypes> * __thiscall
FDataflowMathMaximumNode_v2::GetConnectionReference
          (FDataflowMathMaximumNode_v2 *this,
          TConnectionReference<FDataflowNumericTypes> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TConnectionReference<FDataflowNumericTypes> *pTVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Inputs).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TConnectionReference<FDataflowNumericTypes> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  *(TArray<FDataflowNumericTypes,TSizedDefaultAllocator<32>_> **)&__return_storage_ptr__->field_0x10
       = &this->Inputs;
  *(int *)&__return_storage_ptr__->field_0x8 = param_1;
  *(FScriptContainerElement **)__return_storage_ptr__ = pFVar1 + (longlong)param_1 * 8;
  return __return_storage_ptr__;
}

