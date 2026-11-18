// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e875600

UScriptStruct * __cdecl FCollectionSelectionSetOperationDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionSetOperationDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionSetOperationDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.
         OuterSingleton;
}

// GetType @ 14e875690

FName __thiscall
FCollectionSelectionSetOperationDataflowNode::GetType
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectionSetOperationDataflowNode");
  return in_RDX;
}

// IsA @ 14e875700

bool __thiscall
FCollectionSelectionSetOperationDataflowNode::IsA
          (FCollectionSelectionSetOperationDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectionSetOperationDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e875768;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e875768:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e875786;
      }
    }
  }
  bVar5 = true;
LAB_14e875786:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8757c0

FStructOnScope * __thiscall
FCollectionSelectionSetOperationDataflowNode::NewStructOnScope
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionSetOperationDataflowNode,
                             (UObject *)pUVar2,L"CollectionSelectionSetOperationDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e875840

void __thiscall
FCollectionSelectionSetOperationDataflowNode::SerializeInternal
          (FCollectionSelectionSetOperationDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionSetOperationDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionSetOperationDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8758bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8758d0

FName __thiscall
FCollectionSelectionSetOperationDataflowNode::GetDisplayName
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectionSetOperation");
  return in_RDX;
}

// GetCategory @ 14e875900

FName __thiscall
FCollectionSelectionSetOperationDataflowNode::GetCategory
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection");
  return in_RDX;
}

// GetTags @ 14e875930

FString * __thiscall
FCollectionSelectionSetOperationDataflowNode::GetTags
          (FCollectionSelectionSetOperationDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e875990

UScriptStruct * __thiscall
FCollectionSelectionSetOperationDataflowNode::TypedScriptStruct
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionSetOperationDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionSetOperationDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionSetOperationDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e875c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCollectionSelectionSetOperationDataflowNode::Evaluate
          (FCollectionSelectionSetOperationDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  FDataflowSelectionTypes *pFVar2;
  ESetOperationEnum EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  FDataflowInput *pFVar8;
  FDataflowOutput *pFVar9;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FConnectionReference local_180;
  FConnectionReference local_168;
  FConnectionReference local_150;
  FConnectionReference local_138;
  FConnectionReference local_120;
  FConnectionReference local_108;
  FConnectionReference local_f0;
  FDataflowOutput *local_d8;
  FContext *local_d0;
  FDataflowSelection *local_c8;
  FDataflowSelection local_b8;
  FDataflowSelection local_90;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar1 = &this->Selection;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowSelectionTypes *)puVar7 == pFVar1) {
    pFVar2 = &this->SelectionA;
    local_180.Index = -1;
    local_180.ContainerReference = (void *)0x0;
    local_180.Reference = pFVar2;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_180);
    FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
              (pFVar8,&local_68,param_1,local_180.Reference);
    local_168.Index = -1;
    local_168.ContainerReference = (void *)0x0;
    local_168.Reference = &this->SelectionB;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
    FDataflowInput::GetValueFromAnyType<FDataflowSelectionTypes>
              (pFVar8,&local_90,param_1,local_168.Reference);
    local_150.Index = -1;
    local_150.ContainerReference = (void *)0x0;
    local_150.Reference = &this->SelectionB;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
    lVar4 = pFVar8->_padding_;
    local_138.Index = -1;
    local_138.ContainerReference = (void *)0x0;
    local_138.Reference = pFVar2;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
    if (pFVar8->_padding_ != lVar4) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3808587718884063561>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionSelectionNodes.cpp"
                         ,0x6b7,
                         "FindInput(&SelectionA)->GetType() == FindInput(&SelectionB)->GetType()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_120.Index = -1;
    local_120.ContainerReference = (void *)0x0;
    local_120.Reference = pFVar2;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
    lVar4 = pFVar8->_padding_;
    local_108.Index = -1;
    local_108.ContainerReference = (void *)0x0;
    local_108.Reference = pFVar1;
    pFVar9 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_108);
    if (pFVar9->_padding_ != lVar4) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3808587718884063560>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionSelectionNodes.cpp"
                         ,0x6b8,
                         "FindOutput(&Selection)->GetType() == FindInput(&SelectionA)->GetType()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_b8.GroupName.ComparisonIndex.Value = 0;
    local_b8.GroupName.Number = 0;
    local_b8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_b8.SelectionArray.NumBits = 0;
    local_b8.SelectionArray.MaxBits = 0x80;
    if (local_68.SelectionArray.NumBits == local_90.SelectionArray.NumBits) {
      EVar3 = this->Operation;
      if (EVar3 == Dataflow_SetOperation_AND) {
        FDataflowSelection::AND(&local_68,&local_90,&local_b8);
      }
      else if (EVar3 == Dataflow_SetOperation_OR) {
        FDataflowSelection::OR(&local_68,&local_90,&local_b8);
      }
      else if (EVar3 == Dataflow_SetOperation_XOR) {
        FDataflowSelection::XOR(&local_68,&local_90,&local_b8);
      }
      else if (EVar3 == Dataflow_SetOperation_Subtract) {
        FDataflowSelection::Subtract(&local_68,&local_90,&local_b8);
      }
    }
    else if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    local_f0.Index = -1;
    local_f0.ContainerReference = (void *)0x0;
    local_f0.Reference = pFVar1;
    pFVar9 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_f0);
    if (pFVar9 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowSelectionTypes>'::__l7::<lambda_1>::operator()(local_188);
    }
    else {
      local_d8 = pFVar9;
      local_d0 = param_1;
      local_c8 = &local_b8;
      TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>
      ::
      VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>_::__l2::<lambda_1>_>
                (pFVar9->_padding_,&local_d8);
    }
    if (local_b8.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_b8.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_90.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_90.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_68.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FCollectionSelectionSetOperationDataflowNode @ 14e915e30

FCollectionSelectionSetOperationDataflowNode * __thiscall
FCollectionSelectionSetOperationDataflowNode::FCollectionSelectionSetOperationDataflowNode
          (FCollectionSelectionSetOperationDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  FDataflowSelectionTypes *pFVar2;
  FDataflowSelectionTypes *pFVar3;
  longlong lVar4;
  void *pvVar5;
  FDataflowInput *pFVar6;
  FDataflowOutput *this_00;
  ulonglong uVar7;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  uVar7 = (ulonglong)_tls_index;
  pFVar1 = &this->SelectionA;
  this->Operation = Dataflow_SetOperation_AND;
  pFVar2 = &this->SelectionB;
  pFVar3 = &this->Selection;
  this->_padding_ = (longlong)&___7FCollectionSelectionSetOperationDataflowNode__6B_;
  pvVar5 = ThreadLocalStoragePointer;
  (pFVar1->Value).GroupName.ComparisonIndex = 0;
  (pFVar1->Value).GroupName.Number = 0;
  (this->SelectionA).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SelectionA).Value.SelectionArray.NumBits = 0;
  lVar4 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
  (this->SelectionA).Value.SelectionArray.MaxBits = 0x80;
  (pFVar2->Value).GroupName.ComparisonIndex = 0;
  (pFVar2->Value).GroupName.Number = 0;
  (this->SelectionB).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SelectionB).Value.SelectionArray.NumBits = 0;
  (this->SelectionB).Value.SelectionArray.MaxBits = 0x80;
  (pFVar3->Value).GroupName.ComparisonIndex = 0;
  (pFVar3->Value).GroupName.Number = 0;
  (this->Selection).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Selection).Value.SelectionArray.NumBits = 0;
  (this->Selection).Value.SelectionArray.MaxBits = 0x80;
  if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&TypeDependencyGroup,"Main");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  pFVar6 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar6,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
              ::__l2::Instance);
  FDataflowConnection::SetTypeDependencyGroup((FDataflowConnection *)pFVar6,TypeDependencyGroup);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  pFVar6 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar6,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
              ::__l2::Instance);
  FDataflowConnection::SetTypeDependencyGroup((FDataflowConnection *)pFVar6,TypeDependencyGroup);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  local_48.Reference = pFVar3;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
              ::__l2::Instance);
  if (local_68.Reference != (FDataflowSelectionTypes *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  FDataflowConnection::SetTypeDependencyGroup((FDataflowConnection *)this_00,TypeDependencyGroup);
  return this;
}

// FCollectionSelectionSetOperationDataflowNode @ 14e916040

FCollectionSelectionSetOperationDataflowNode * __thiscall
FCollectionSelectionSetOperationDataflowNode::FCollectionSelectionSetOperationDataflowNode
          (FCollectionSelectionSetOperationDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Operation = Dataflow_SetOperation_AND;
  this->_padding_ = (longlong)&___7FCollectionSelectionSetOperationDataflowNode__6B_;
  (this->SelectionA).Value.GroupName.ComparisonIndex = 0;
  (this->SelectionA).Value.GroupName.Number = 0;
  (this->SelectionA).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SelectionA).Value.SelectionArray.NumBits = 0;
  *(undefined8 *)&(this->SelectionA).Value.SelectionArray.MaxBits = 0x80;
  (this->SelectionB).Value.GroupName.Number = 0;
  (this->SelectionB).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SelectionB).Value.SelectionArray.NumBits = 0;
  *(undefined8 *)&(this->SelectionB).Value.SelectionArray.MaxBits = 0x80;
  (this->Selection).Value.GroupName.Number = 0;
  (this->Selection).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Selection).Value.SelectionArray.NumBits = 0;
  (this->Selection).Value.SelectionArray.MaxBits = 0x80;
  return this;
}

