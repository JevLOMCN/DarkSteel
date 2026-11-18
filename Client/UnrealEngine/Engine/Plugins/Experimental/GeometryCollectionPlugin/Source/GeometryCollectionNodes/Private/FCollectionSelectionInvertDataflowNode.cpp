// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8776d0

UScriptStruct * __cdecl FCollectionSelectionInvertDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionInvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton;
}

// GetType @ 14e877870

FName __thiscall
FCollectionSelectionInvertDataflowNode::GetType(FCollectionSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectionInvertDataflowNode");
  return in_RDX;
}

// IsA @ 14e8778e0

bool __thiscall
FCollectionSelectionInvertDataflowNode::IsA
          (FCollectionSelectionInvertDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectionInvertDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e877948;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e877948:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e877966;
      }
    }
  }
  bVar5 = true;
LAB_14e877966:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8779b0

FStructOnScope * __thiscall
FCollectionSelectionInvertDataflowNode::NewStructOnScope
          (FCollectionSelectionInvertDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionInvertDataflowNode,
                           (UObject *)pUVar2,L"CollectionSelectionInvertDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e877a60

void __thiscall
FCollectionSelectionInvertDataflowNode::SerializeInternal
          (FCollectionSelectionInvertDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionInvertDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e877add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e877af0

FName __thiscall
FCollectionSelectionInvertDataflowNode::GetDisplayName(FCollectionSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectionInvert");
  return in_RDX;
}

// GetCategory @ 14e877b20

FName __thiscall
FCollectionSelectionInvertDataflowNode::GetCategory(FCollectionSelectionInvertDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection");
  return in_RDX;
}

// GetTags @ 14e877b50

FString * __thiscall
FCollectionSelectionInvertDataflowNode::GetTags
          (FCollectionSelectionInvertDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e877c10

UScriptStruct * __thiscall
FCollectionSelectionInvertDataflowNode::TypedScriptStruct
          (FCollectionSelectionInvertDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionInvertDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionInvertDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionInvertDataflowNode.OuterSingleton;
}

// Evaluate @ 14e877cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSelectionInvertDataflowNode::Evaluate
          (FCollectionSelectionInvertDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  FDataflowOutput *pFVar7;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  FConnectionReference local_e0;
  FConnectionReference local_c8;
  FConnectionReference local_b0;
  FConnectionReference local_98;
  FDataflowOutput *local_78;
  FContext *local_70;
  FDataflowSelection *local_68;
  FDataflowSelection local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar1 = &this->Selection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowSelectionTypes *)puVar5 == pFVar1) {
    local_c8.ContainerReference = (void *)0x0;
    local_c8.Index = -1;
    local_c8.Reference = pFVar1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c8);
    lVar2 = pFVar6->_padding_;
    local_b0.Index = -1;
    local_b0.ContainerReference = (void *)0x0;
    local_b0.Reference = pFVar1;
    pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_b0);
    if (pFVar7->_padding_ != lVar2) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3808587718884063513>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionSelectionNodes.cpp"
                         ,0x6e7,
                         "FindOutput(&Selection)->GetType() == FindInput(&Selection)->GetType()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_e0.Index = -1;
    local_e0.ContainerReference = (void *)0x0;
    local_e0.Reference = pFVar1;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e0);
    FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
              (pFVar6,&local_58,param_1,local_e0.Reference);
    FDataflowSelection::Invert(&local_58);
    local_98.Index = -1;
    local_98.ContainerReference = (void *)0x0;
    local_98.Reference = pFVar1;
    pFVar7 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_98);
    if (pFVar7 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowSelectionTypes>'::__l7::<lambda_1>::operator()(local_e8);
    }
    else {
      local_68 = &local_58;
      local_78 = pFVar7;
      local_70 = param_1;
      TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
      ::
      VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>_::__l2::<lambda_1>_>
                (pFVar7->_padding_,&local_78);
    }
    if (local_58.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_58.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FCollectionSelectionInvertDataflowNode @ 14e915ca0

FCollectionSelectionInvertDataflowNode * __thiscall
FCollectionSelectionInvertDataflowNode::FCollectionSelectionInvertDataflowNode
          (FCollectionSelectionInvertDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  longlong lVar2;
  void *pvVar3;
  FDataflowInput *this_00;
  FDataflowOutput *this_01;
  ulonglong uVar4;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  uVar4 = (ulonglong)_tls_index;
  pFVar1 = &this->Selection;
  this->_padding_ = (longlong)&___7FCollectionSelectionInvertDataflowNode__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  (pFVar1->Value).GroupName.ComparisonIndex = 0;
  (pFVar1->Value).GroupName.Number = 0;
  (this->Selection).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Selection).Value.SelectionArray.NumBits = 0;
  lVar2 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  (this->Selection).Value.SelectionArray.MaxBits = 0x80;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&TypeDependencyGroup,"Main");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
              ::__l2::Instance);
  FDataflowConnection::SetTypeDependencyGroup((FDataflowConnection *)this_00,TypeDependencyGroup);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  local_28.Reference = pFVar1;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_01,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
              ::__l2::Instance);
  if (local_48.Reference != (FDataflowSelectionTypes *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_48);
  }
  FDataflowConnection::SetTypeDependencyGroup((FDataflowConnection *)this_01,TypeDependencyGroup);
  return this;
}

