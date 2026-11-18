// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 18

// StaticStruct @ 14e898fc0

UScriptStruct * __cdecl FStringAppendDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode_v2,(UObject *)pUVar1,
                         L"StringAppendDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton;
}

// GetType @ 14e899380

FName __thiscall FStringAppendDataflowNode_v2::GetType(FStringAppendDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FStringAppendDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8993b0

bool __thiscall FStringAppendDataflowNode_v2::IsA(FStringAppendDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FStringAppendDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e899418;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e899418:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e899436;
      }
    }
  }
  bVar5 = true;
LAB_14e899436:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e899470

FStructOnScope * __thiscall
FStringAppendDataflowNode_v2::NewStructOnScope(FStringAppendDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode_v2,(UObject *)pUVar2,
                           L"StringAppendDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8994f0

void __thiscall
FStringAppendDataflowNode_v2::SerializeInternal
          (FStringAppendDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode_v2,(UObject *)pUVar1,
                         L"StringAppendDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89956d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e899580

FName __thiscall FStringAppendDataflowNode_v2::GetDisplayName(FStringAppendDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"StringAppend");
  return in_RDX;
}

// GetCategory @ 14e8995f0

FName __thiscall FStringAppendDataflowNode_v2::GetCategory(FStringAppendDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e899660

FString * __thiscall
FStringAppendDataflowNode_v2::GetTags
          (FStringAppendDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e899690

UScriptStruct * __thiscall
FStringAppendDataflowNode_v2::TypedScriptStruct(FStringAppendDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStringAppendDataflowNode_v2,(UObject *)pUVar1,
                         L"StringAppendDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FStringAppendDataflowNode_v2.OuterSingleton;
}

// AddPins @ 14e8a3ca0

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FStringAppendDataflowNode_v2::AddPins
          (FStringAppendDataflowNode_v2 *this,
          TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> *pTVar6;
  FDataflowInput *this_00;
  uint uVar7;
  FName local_res8;
  FName local_res10;
  initializer_list<UE::Dataflow::FPin> local_68;
  FPin local_58;
  FScriptContainerElement *local_40;
  uint local_38;
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *local_30;
  
  pTVar2 = &this->Inputs;
  uVar5 = (this->Inputs).ArrayNum;
  piVar1 = &(this->Inputs).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Inputs).ArrayNum = uVar5 + 1;
  DefaultConstructItems<FDataflowStringConvertibleTypes,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  uVar7 = 0;
  if ((int)uVar5 < (this->Inputs).ArrayNum) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  local_40 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
  local_38 = uVar5;
  local_30 = pTVar2;
  this_00 = FDataflowNode::RegisterInputArrayConnectionInternal
                      ((FDataflowNode *)this,(FConnectionReference *)&local_40,&local_res10,
                       &local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  local_58.Name = (FName)this_00->_padding_;
  local_58.Type = (FName)this_00->_padding_;
  local_68._First = &local_58;
  local_68._Last = (FPin *)&local_40;
  local_58.Direction = INPUT;
  local_58.bHidden = false;
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>::
  TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,&local_68);
  return __return_storage_ptr__;
}

// CanAddPin @ 14e8a3df0

bool __thiscall FStringAppendDataflowNode_v2::CanAddPin(FStringAppendDataflowNode_v2 *this)

{
  return true;
}

// CanRemovePin @ 14e8a3e00

bool __thiscall FStringAppendDataflowNode_v2::CanRemovePin(FStringAppendDataflowNode_v2 *this)

{
  return 0 < (this->Inputs).ArrayNum;
}

// GetPinsToRemove @ 14e8a3e20

TArray<UE::Dataflow::FPin,TSizedDefaultAllocator<32>_> * __thiscall
FStringAppendDataflowNode_v2::GetPinsToRemove
          (FStringAppendDataflowNode_v2 *this,
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
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *local_10;
  
  iVar1 = (this->Inputs).ArrayNum;
  uVar7 = iVar1 - 1;
  if (((int)uVar7 < 0) || (iVar1 <= (int)uVar7)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inputs.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                       ,0x178,L"");
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
  local_20 = (this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
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

// OnPinRemoved @ 14e8a3f60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStringAppendDataflowNode_v2::OnPinRemoved(FStringAppendDataflowNode_v2 *this,FPin *param_1)

{
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *this_00;
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                       ,0x183,L"");
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
  local_28.Reference = (this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
  local_28.Index = uVar6;
  local_28.ContainerReference = this_00;
  pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
  if (pFVar5 == (FDataflowInput *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                       ,0x186,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Name) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetName() == Pin.Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                       ,0x187,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((FName)pFVar5->_padding_ != param_1->Type) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input->GetType() == Pin.Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                       ,0x188,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar6,Default)
  ;
  return;
}

// PostSerialize @ 14e8a40e0

void __thiscall
FStringAppendDataflowNode_v2::PostSerialize(FStringAppendDataflowNode_v2 *this,FArchive *param_1)

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
    if (((this->Inputs).ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inputs.Num() >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                           ,0x193,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = 0;
    if (0 < (this->Inputs).ArrayNum) {
      do {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        local_res18[0].ComparisonIndex.Value = 0;
        local_res18[0].Number = 0;
        uVar4 = 0;
        if ((int)uVar7 < (this->Inputs).ArrayNum) {
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
        local_38.Reference = (this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
        local_38.Index = uVar7;
        local_38.ContainerReference = &this->Inputs;
        pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
        if (pFVar6 == (FDataflowInput *)0x0) {
          pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                             ((FDataflowNode *)this,&local_38,local_res18,&local_res10);
          FDataflowConnection::SetTypePolicy
                    ((FDataflowConnection *)pFVar6,
                     (IDataflowTypePolicy *)
                     &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
                      ::__l2::Instance);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (this->Inputs).ArrayNum);
    }
    iVar1 = (this->Inputs).ArrayNum;
    iVar5 = FDataflowNode::GetNumInputs((FDataflowNode *)this);
    if ((iVar1 != iVar5) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4342096899851943508>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionNodes.cpp"
                           ,0x1ac,"Inputs.Num() + NumOtherInputs == GetNumInputs()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Evaluate @ 14e8a4270

void __thiscall
FStringAppendDataflowNode_v2::Evaluate
          (FStringAppendDataflowNode_v2 *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  void *pvVar2;
  FDataflowOutput *this_00;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  FDataflowInput *pFVar8;
  uchar *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  uint uVar12;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *local_res8;
  undefined1 local_a8 [16];
  FString local_98;
  FString local_88;
  FString local_78;
  FConnectionReference local_68;
  <lambda_1> local_48;
  
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar7 == &this->String) {
    uVar12 = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    if (0 < (this->Inputs).ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar12 < (this->Inputs).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68.Reference = (this->Inputs).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        local_68.Index = uVar12;
        local_68.ContainerReference = &this->Inputs;
        pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
        pvVar4 = local_68.Reference;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        iVar1 = *(int *)((longlong)local_68.Reference + 8);
        pvVar2 = *(void **)local_68.Reference;
        local_a8._8_4_ = iVar1;
        if (iVar1 == 0) {
          local_a8[8] = '\0';
          local_a8[9] = '\0';
          local_a8[10] = '\0';
          local_a8[0xb] = '\0';
          local_a8[0xc] = '\0';
          local_a8[0xd] = '\0';
          local_a8[0xe] = '\0';
          local_a8[0xf] = '\0';
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,0,(ForAnyElementType *)local_a8,iVar1,(int *)(local_a8 + 0xc));
          memcpy((void *)local_a8._0_8_,pvVar2,(longlong)iVar1 * 2);
        }
        this_00 = pFVar8->Connection;
        if (this_00 == (FDataflowOutput *)0x0) {
LAB_14e8a4496:
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8._0_8_;
          local_98.Data.ArrayNum = local_a8._8_4_;
          local_98.Data.ArrayMax = local_a8._12_4_;
          local_a8[8] = '\0';
          local_a8[9] = '\0';
          local_a8[10] = '\0';
          local_a8[0xb] = '\0';
          local_a8[0xc] = '\0';
          local_a8[0xd] = '\0';
          local_a8[0xe] = '\0';
          local_a8[0xf] = '\0';
          local_a8._0_4_ = 0;
          local_a8._4_4_ = 0;
        }
        else {
          bVar5 = FDataflowOutput::HasFrozenValue(this_00);
          if (!bVar5) {
            bVar5 = FDataflowOutput::Evaluate(this_00,param_1);
            if (bVar5) {
              pcVar3 = *(code **)(param_1->_padding_ + 0x30);
              uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
              local_res8 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                            *)(*pcVar3)(param_1,uVar10);
              if ((local_res8 !=
                   (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                    *)0x0) && (local_res8->Ptr != (FContextCacheElementBase *)0x0)) {
                local_48.CacheEntry = &local_res8;
                local_48.ReturnValue = (FDataflowSelection *)local_a8;
                local_48.__this = pFVar8;
                local_48.Context = param_1;
                FDataflowStringConvertibleTypePolicy::
                VisitPolicyByType<_FDataflowInput::GetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l17::<lambda_1>_>
                          ((FName)pFVar8->_padding_,&local_48);
              }
            }
            goto LAB_14e8a4496;
          }
          puVar9 = FDataflowOutput::GetFrozenPropertyValue(this_00,pvVar4);
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = *(int *)(puVar9 + 8);
          lVar11 = (longlong)local_98.Data.ArrayNum;
          pvVar2 = *(void **)puVar9;
          if (local_98.Data.ArrayNum == 0) {
            local_98.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                       local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
            memcpy(local_98.Data.AllocatorInstance.Data,pvVar2,lVar11 * 2);
          }
          if ((FName)local_a8._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_a8._0_8_);
          }
        }
        ::FString::ConcatFF(&local_78,&local_88,&local_98);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        local_88.Data.ArrayNum = local_78.Data.ArrayNum;
        local_88.Data.ArrayMax = local_78.Data.ArrayMax;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if ((FName)local_98.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->Inputs).ArrayNum);
    }
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_88,&this->String);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FStringAppendDataflowNode_v2 @ 14e92da60

FStringAppendDataflowNode_v2 * __thiscall
FStringAppendDataflowNode_v2::FStringAppendDataflowNode_v2
          (FStringAppendDataflowNode_v2 *this,FNodeParameters *param_1,FGuid *param_2)

{
  TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDataflowOutput *this_00;
  FStringAppendDataflowNode_v2 *pFVar5;
  FDataflowInput *pFVar6;
  uint uVar7;
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
  FConnectionReference local_78;
  FConnectionReference local_60;
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  this->_padding_ = (longlong)&___7FStringAppendDataflowNode_v2__6B_;
  pTVar1 = &this->Inputs;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  ::FString::FString(&this->String,"");
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_60.Index = -1;
  local_60.ContainerReference = (void *)0x0;
  local_60.Reference = &this->String;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_60,&local_res20);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_78);
  }
  uVar4 = (this->Inputs).ArrayNum;
  if (uVar4 == (this->Inputs).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->Inputs).ArrayMax);
  }
  (this->Inputs).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FDataflowStringConvertibleTypes,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  uVar7 = 0;
  if ((int)uVar4 < (this->Inputs).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStringAppendDataflowNode_v2 *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_90.Reference = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
  local_90.Index = uVar4;
  local_90.ContainerReference = pTVar1;
  pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res18,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar6,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  uStack_9c = (undefined4)pFVar6->_padding_;
  uStack_98 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
  uStack_a4 = (undefined4)pFVar6->_padding_;
  uStack_a0 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
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
                      (0x810,&pTVar1->AllocatorInstance,&(this->Inputs).ArrayMax);
  }
  (this->Inputs).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FDataflowStringConvertibleTypes,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10,1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  uVar7 = 0;
  if ((int)uVar4 < (this->Inputs).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FStringAppendDataflowNode_v2 *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_90.Reference = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10;
  local_90.Index = uVar4;
  local_90.ContainerReference = pTVar1;
  pFVar6 = FDataflowNode::RegisterInputArrayConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res18,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar6,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  uStack_9c = (undefined4)pFVar6->_padding_;
  uStack_98 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
  uStack_a4 = (undefined4)pFVar6->_padding_;
  uStack_a0 = (undefined4)((ulonglong)pFVar6->_padding_ >> 0x20);
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

// GetConnectionReference @ 14e9529c0

TConnectionReference<FDataflowStringConvertibleTypes> * __thiscall
FStringAppendDataflowNode_v2::GetConnectionReference
          (FStringAppendDataflowNode_v2 *this,
          TConnectionReference<FDataflowStringConvertibleTypes> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TConnectionReference<FDataflowStringConvertibleTypes> *pTVar4;
  
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
      pTVar4 = (TConnectionReference<FDataflowStringConvertibleTypes> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> **)
   &__return_storage_ptr__->field_0x10 = &this->Inputs;
  *(FScriptContainerElement **)__return_storage_ptr__ =
       (this->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  *(int *)&__return_storage_ptr__->field_0x8 = param_1;
  return __return_storage_ptr__;
}

