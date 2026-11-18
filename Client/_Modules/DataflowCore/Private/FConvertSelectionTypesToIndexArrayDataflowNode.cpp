// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e4cf0

UScriptStruct * __cdecl FConvertSelectionTypesToIndexArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode,
                           (UObject *)pUVar1,L"ConvertSelectionTypesToIndexArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
         OuterSingleton;
}

// GetType @ 1443e4d30

FName __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::GetType
          (FConvertSelectionTypesToIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertSelectionTypesToIndexArrayDataflowNode");
  return in_RDX;
}

// IsA @ 1443e4d60

bool __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::IsA
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertSelectionTypesToIndexArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e4dc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e4dc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e4de6;
      }
    }
  }
  bVar5 = true;
LAB_1443e4de6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e4e20

FStructOnScope * __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::NewStructOnScope
          (FConvertSelectionTypesToIndexArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode,
                           (UObject *)pUVar2,L"ConvertSelectionTypesToIndexArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e4ea0

void __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::SerializeInternal
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode,
                           (UObject *)pUVar1,L"ConvertSelectionTypesToIndexArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e4f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e4f30

FName __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::GetDisplayName
          (FConvertSelectionTypesToIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertSelectionToIndexArray");
  return in_RDX;
}

// GetCategory @ 1443e4f60

FName __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::GetCategory
          (FConvertSelectionTypesToIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e4f90

FString * __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::GetTags
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e4fc0

UScriptStruct * __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::TypedScriptStruct
          (FConvertSelectionTypesToIndexArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode,
                           (UObject *)pUVar1,L"ConvertSelectionTypesToIndexArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertSelectionTypesToIndexArrayDataflowNode.
         OuterSingleton;
}

// Evaluate @ 1443e5000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::Evaluate
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowNode *this_00;
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  FDataflowInput *this_01;
  FDataflowOutput *pFVar4;
  ulong64 uVar5;
  FProperty *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [16];
  FConnectionReference local_98;
  FTimestamp local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FDataflowSelection local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar3 == &this->Out) {
    uVar2 = 0;
    local_98.ContainerReference = (void *)0x0;
    local_98.Index = -1;
    local_98.Reference = &this->In;
    this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
    FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
              (this_01,&local_60,param_1,&(this->In).Value);
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    FDataflowSelection::AsArray(&local_60,&local_70);
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    local_98.Reference = &this->Out;
    pFVar4 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_98);
    if (pFVar4 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>'::
      __l7::<lambda_1>::operator()(local_a8);
    }
    else {
      pFVar6 = (FProperty *)pFVar4->_padding_;
      if (pFVar6 != (FProperty *)0x0) {
        this_00 = (FDataflowNode *)pFVar4->_padding_;
        if (this_00 == (FDataflowNode *)0x0) {
          local_78.Value = UE::Dataflow::FTimestamp::Invalid;
        }
        else {
          local_78.Value = (this_00->LastModifiedTimestamp).Value;
          uVar2 = FDataflowNode::GetValueHash(this_00);
          pFVar6 = (FProperty *)pFVar4->_padding_;
        }
        lVar1 = pFVar4->_padding_;
        if (lVar1 == 0) {
          uVar7 = 0;
          uVar8 = 0;
          local_98.Index = 0;
          local_98._12_4_ = 0;
        }
        else {
          uVar7 = *(undefined4 *)(lVar1 + 0x7c);
          uVar8 = *(undefined4 *)(lVar1 + 0x80);
          local_98.Index = *(int *)(lVar1 + 0x84);
          local_98._12_4_ = *(undefined4 *)(lVar1 + 0x88);
        }
        local_98.Reference = (void *)CONCAT44(uVar8,uVar7);
        uVar5 = CityHash64((char *)&pFVar4->_padding_,0x10);
        UE::Dataflow::FContext::SetData<TArray<int,TSizedDefaultAllocator<32>_>_>
                  (param_1,(uint)uVar5,pFVar6,&local_70,(FGuid *)&local_98,uVar2,&local_78);
      }
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    if (local_60.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_60.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FConvertSelectionTypesToIndexArrayDataflowNode @ 14442ad60

FConvertSelectionTypesToIndexArrayDataflowNode * __thiscall
FConvertSelectionTypesToIndexArrayDataflowNode::FConvertSelectionTypesToIndexArrayDataflowNode
          (FConvertSelectionTypesToIndexArrayDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertSelectionTypesToIndexArrayDataflowNode *pFVar4;
  FName local_res8;
  FName local_res18;
  FGuid local_48;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  local_38.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FConvertSelectionTypesToIndexArrayDataflowNode__6B_;
  local_38.Reference = &this->In;
  local_38.ContainerReference = (void *)0x0;
  (((FDataflowSelectionTypes *)local_38.Reference)->Value).GroupName.ComparisonIndex = 0;
  (((FDataflowSelectionTypes *)local_38.Reference)->Value).GroupName.Number = 0;
  (this->In).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->In).Value.SelectionArray.NumBits = 0;
  (this->In).Value.SelectionArray.MaxBits = 0x80;
  (this->Out).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Out).ArrayNum = 0;
  (this->Out).ArrayMax = 0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertSelectionTypesToIndexArrayDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_20.Index = -1;
  local_20.ContainerReference = (void *)0x0;
  local_20.Reference = &this->Out;
  FDataflowNode::RegisterOutputConnectionInternal((FDataflowNode *)this,&local_20,&local_res18);
  return this;
}

