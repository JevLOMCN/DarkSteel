// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// FQueryDescription @ 142c97920

FQueryDescription * __thiscall
UE::Editor::DataStorage::FQueryDescription::FQueryDescription
          (FQueryDescription *this,FQueryDescription *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::FValueTagData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Dst_00;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar8;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> _Dst_01;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar9;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar10;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Dst_02;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> _Dst_03;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Dst_04;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar11;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar12;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Src_00;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar13;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Src_01;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> _Src_02;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src_03;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> _Src_04;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar14;
  
  FCallbackData::FCallbackData(&this->Callback,&param_1->Callback);
  (this->SelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  _Src = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->SelectionTypes).ArrayNum;
  (this->SelectionTypes).ArrayNum = iVar5;
  if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    _Src = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
           &param_1->SelectionTypes;
  }
  piVar1 = &(this->SelectionTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,iVar5,0,&(this->SelectionTypes).AllocatorInstance,iVar5,piVar1);
    _Dst = (this->SelectionTypes).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      _Dst = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
             &this->SelectionTypes;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar5 << 3);
  }
  (this->SelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  FVar13 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->SelectionAccessTypes).ArrayNum;
  (this->SelectionAccessTypes).ArrayNum = iVar5;
  if (FVar13 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar13 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
             &param_1->SelectionAccessTypes;
  }
  piVar1 = &(this->SelectionAccessTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,iVar5,0,&(this->SelectionAccessTypes).AllocatorInstance,iVar5,piVar1);
    FVar8 = (this->SelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)&this->SelectionAccessTypes
      ;
    }
    memcpy((void *)FVar8,(void *)FVar13,(longlong)iVar5);
  }
  (this->SelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0;
  FVar11 = (param_1->SelectionMetaData).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->SelectionMetaData).ArrayNum;
  (this->SelectionMetaData).ArrayNum = iVar5;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&param_1->SelectionMetaData;
  }
  piVar1 = &(this->SelectionMetaData).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
              (0xb8,8,iVar5,0,&(this->SelectionMetaData).AllocatorInstance,iVar5,piVar1);
    FVar7 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar7 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&this->SelectionMetaData;
    }
    ConstructItems<UE::Editor::DataStorage::FColumnMetaData,UE::Editor::DataStorage::FColumnMetaData,int>
              ((void *)FVar7,(FColumnMetaData *)FVar11,iVar5);
  }
  (this->ConditionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  FVar12 = (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->ConditionTypes).ArrayNum;
  (this->ConditionTypes).ArrayNum = iVar5;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
             &param_1->ConditionTypes;
  }
  piVar1 = &(this->ConditionTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,iVar5,0,&(this->ConditionTypes).AllocatorInstance,iVar5,piVar1);
    FVar9 = (this->ConditionTypes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
              &this->ConditionTypes;
    }
    memcpy((void *)FVar9,(void *)FVar12,(longlong)iVar5 * 2);
  }
  (this->ConditionOperators).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0;
  _Src_00 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->ConditionOperators).ArrayNum;
  (this->ConditionOperators).ArrayNum = iVar5;
  if (_Src_00 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    _Src_00 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
              &param_1->ConditionOperators;
  }
  piVar1 = &(this->ConditionOperators).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
              (8,4,iVar5,0,&(this->ConditionOperators).AllocatorInstance,iVar5,piVar1);
    _Dst_00 = (this->ConditionOperators).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      _Dst_00 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                &this->ConditionOperators;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar5 << 3);
  }
  (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  FVar14 = (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DynamicSelectionTypes).ArrayNum;
  (this->DynamicSelectionTypes).ArrayNum = iVar5;
  if (FVar14 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar14 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
             &param_1->DynamicSelectionTypes;
  }
  piVar1 = &(this->DynamicSelectionTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,iVar5,0,&(this->DynamicSelectionTypes).AllocatorInstance,iVar5,piVar1);
    FVar10 = (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      FVar10 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               &this->DynamicSelectionTypes;
    }
    memcpy((void *)FVar10,(void *)FVar14,(longlong)iVar5 << 4);
  }
  (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  FVar13 = (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DynamicSelectionAccessTypes).ArrayNum;
  (this->DynamicSelectionAccessTypes).ArrayNum = iVar5;
  if (FVar13 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar13 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
             &param_1->DynamicSelectionAccessTypes;
  }
  piVar1 = &(this->DynamicSelectionAccessTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,iVar5,0,&(this->DynamicSelectionAccessTypes).AllocatorInstance,iVar5,piVar1);
    FVar8 = (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
              &this->DynamicSelectionAccessTypes;
    }
    memcpy((void *)FVar8,(void *)FVar13,(longlong)iVar5);
  }
  (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0;
  _Src_04 = (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DynamicSelectionMetaData).ArrayNum;
  (this->DynamicSelectionMetaData).ArrayNum = iVar5;
  if (_Src_04 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    _Src_04 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
              &param_1->DynamicSelectionMetaData;
  }
  piVar1 = &(this->DynamicSelectionMetaData).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
              (4,4,iVar5,0,&(this->DynamicSelectionMetaData).AllocatorInstance,iVar5,piVar1);
    _Dst_01 = (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
    if (_Dst_01 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
      _Dst_01 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
                &this->DynamicSelectionMetaData;
    }
    memcpy((void *)_Dst_01,(void *)_Src_04,(longlong)iVar5 << 2);
  }
  (this->DynamicConditionOperations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  FVar12 = (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DynamicConditionOperations).ArrayNum;
  (this->DynamicConditionOperations).ArrayNum = iVar5;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
             &param_1->DynamicConditionOperations;
  }
  piVar1 = &(this->DynamicConditionOperations).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,iVar5,0,&(this->DynamicConditionOperations).AllocatorInstance,iVar5,piVar1);
    FVar9 = (this->DynamicConditionOperations).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
              &this->DynamicConditionOperations;
    }
    memcpy((void *)FVar9,(void *)FVar12,(longlong)iVar5 * 2);
  }
  (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  FVar14 = (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DynamicConditionDescriptions).ArrayNum;
  (this->DynamicConditionDescriptions).ArrayNum = iVar5;
  if (FVar14 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar14 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
             &param_1->DynamicConditionDescriptions;
  }
  piVar1 = &(this->DynamicConditionDescriptions).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 8;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,iVar5,0,&(this->DynamicConditionDescriptions).AllocatorInstance,iVar5,piVar1);
    FVar10 = (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
      FVar10 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               &this->DynamicConditionDescriptions;
    }
    memcpy((void *)FVar10,(void *)FVar14,(longlong)iVar5 << 4);
  }
  pTVar2 = &this->ValueTags;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ValueTags).ArrayMax;
  iVar5 = (param_1->ValueTags).ArrayNum;
  pFVar6 = (param_1->ValueTags).AllocatorInstance.Data;
  (this->ValueTags).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  (this->Conditions).bIsSet = false;
  bVar4 = (param_1->Conditions).bIsSet;
  (this->Conditions).bIsSet = bVar4;
  if (bVar4 != false) {
    Queries::FConditions::FConditions
              (&(this->Conditions).TypedValue,&(param_1->Conditions).TypedValue);
  }
  (this->DependencyTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0;
  _Src_01 = (param_1->DependencyTypes).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DependencyTypes).ArrayNum;
  (this->DependencyTypes).ArrayNum = iVar5;
  if (_Src_01 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    _Src_01 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
              &param_1->DependencyTypes;
  }
  piVar1 = &(this->DependencyTypes).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
              (8,4,iVar5,0,&(this->DependencyTypes).AllocatorInstance,iVar5,piVar1);
    _Dst_02 = (this->DependencyTypes).AllocatorInstance.SecondaryData;
    if (_Dst_02 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
      _Dst_02 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
                &this->DependencyTypes;
    }
    memcpy((void *)_Dst_02,(void *)_Src_01,(longlong)iVar5 << 3);
  }
  (this->DependencyFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0;
  _Src_02 = (param_1->DependencyFlags).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->DependencyFlags).ArrayNum;
  (this->DependencyFlags).ArrayNum = iVar5;
  if (_Src_02 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
    _Src_02 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
              &param_1->DependencyFlags;
  }
  piVar1 = &(this->DependencyFlags).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
              (1,1,iVar5,0,&(this->DependencyFlags).AllocatorInstance,iVar5,piVar1);
    _Dst_03 = (this->DependencyFlags).AllocatorInstance.SecondaryData;
    if (_Dst_03 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
      _Dst_03 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
                &this->DependencyFlags;
    }
    memcpy((void *)_Dst_03,(void *)_Src_02,(longlong)iVar5);
  }
  (this->CachedDependencies).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  _Src_03 = (param_1->CachedDependencies).AllocatorInstance.SecondaryData;
  iVar5 = (param_1->CachedDependencies).ArrayNum;
  (this->CachedDependencies).ArrayNum = iVar5;
  if (_Src_03 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    _Src_03 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&param_1->CachedDependencies;
  }
  piVar1 = &(this->CachedDependencies).ArrayMax;
  if (iVar5 == 0) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,iVar5,0,&(this->CachedDependencies).AllocatorInstance,iVar5,piVar1);
    _Dst_04 = (this->CachedDependencies).AllocatorInstance.SecondaryData;
    if (_Dst_04 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      _Dst_04 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&this->CachedDependencies;
    }
    memcpy((void *)_Dst_04,(void *)_Src_03,(longlong)iVar5 << 3);
  }
  pTVar3 = &this->Subqueries;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Subqueries).ArrayMax;
  iVar5 = (param_1->Subqueries).ArrayNum;
  pFVar6 = (param_1->Subqueries).AllocatorInstance.Data;
  (this->Subqueries).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  *(undefined ***)&this->MetaData = &___7FMetaDataBase_DataStorage_Editor_UE__6B_;
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
  ::
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
            ((TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&(this->MetaData).field_0x8,
             (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&(param_1->MetaData).field_0x8);
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
  ::
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
            ((TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&(this->MetaData).field_0x58,
             (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&(param_1->MetaData).field_0x58);
  *(undefined ***)&this->MetaData = &___7FMetaData_DataStorage_Editor_UE__6B_;
  this->Hierarchy = param_1->Hierarchy;
  this->Action = param_1->Action;
  this->bShouldBatchModifications = param_1->bShouldBatchModifications;
  return this;
}

// FQueryDescription @ 142c98140

FQueryDescription * __thiscall
UE::Editor::DataStorage::FQueryDescription::FQueryDescription(FQueryDescription *this)

{
  (this->Callback).BeforeGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Callback).BeforeGroups.ArrayNum = 0;
  (this->Callback).BeforeGroups.ArrayMax = 2;
  (this->Callback).AfterGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Callback).AfterGroups.ArrayNum = 0;
  (this->Callback).AfterGroups.ArrayMax = 2;
  *(undefined8 *)&(this->Callback).Function = 0;
  *(undefined8 *)&(this->Callback).Function.field_0x28 = 0;
  (this->Callback).Name.ComparisonIndex = 0;
  (this->Callback).Name.Number = 0;
  (this->Callback).Group.ComparisonIndex = 0;
  (this->Callback).Group.Number = 0;
  (this->Callback).ActivationName.ComparisonIndex = 0;
  (this->Callback).ActivationName.Number = 0;
  (this->Callback).MonitoredType = (UScriptStruct *)0x0;
  (this->Callback).Type = None;
  (this->Callback).Phase = FrameEnd;
  (this->Callback).Active = true;
  (this->Callback).ExecutionMode = Default;
  (this->SelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  (this->SelectionTypes).ArrayNum = 0;
  (this->SelectionTypes).ArrayMax = 8;
  (this->SelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  (this->SelectionAccessTypes).ArrayNum = 0;
  (this->SelectionAccessTypes).ArrayMax = 8;
  (this->SelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0;
  (this->SelectionMetaData).ArrayNum = 0;
  (this->SelectionMetaData).ArrayMax = 8;
  (this->ConditionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  (this->ConditionTypes).ArrayNum = 0;
  (this->ConditionTypes).ArrayMax = 8;
  (this->ConditionOperators).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0;
  (this->ConditionOperators).ArrayNum = 0;
  (this->ConditionOperators).ArrayMax = 8;
  (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  (this->DynamicSelectionTypes).ArrayNum = 0;
  (this->DynamicSelectionTypes).ArrayMax = 8;
  (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  (this->DynamicSelectionAccessTypes).ArrayNum = 0;
  (this->DynamicSelectionAccessTypes).ArrayMax = 8;
  (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0;
  (this->DynamicSelectionMetaData).ArrayNum = 0;
  (this->DynamicSelectionMetaData).ArrayMax = 8;
  (this->DynamicConditionOperations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  (this->DynamicConditionOperations).ArrayNum = 0;
  (this->DynamicConditionOperations).ArrayMax = 8;
  (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  (this->DynamicConditionDescriptions).ArrayNum = 0;
  (this->DynamicConditionDescriptions).ArrayMax = 8;
  (this->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).ArrayNum = 0;
  (this->ValueTags).ArrayMax = 0;
  (this->Conditions).bIsSet = false;
  (this->DependencyTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0;
  (this->DependencyTypes).ArrayNum = 0;
  (this->DependencyTypes).ArrayMax = 2;
  (this->DependencyFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0;
  (this->DependencyFlags).ArrayNum = 0;
  (this->DependencyFlags).ArrayMax = 2;
  (this->CachedDependencies).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  (this->CachedDependencies).ArrayNum = 0;
  (this->CachedDependencies).ArrayMax = 2;
  (this->Subqueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subqueries).ArrayNum = 0;
  (this->Subqueries).ArrayMax = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x10 = 0;
  *(undefined8 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x38 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x3c = 0;
  *(undefined8 *)&(this->MetaData).field_0x48 = 0;
  *(undefined4 *)&(this->MetaData).field_0x50 = 0;
  *(undefined8 *)&(this->MetaData).field_0x58 = 0;
  *(undefined8 *)&(this->MetaData).field_0x60 = 0;
  *(undefined8 *)&(this->MetaData).field_0x78 = 0;
  *(undefined4 *)&(this->MetaData).field_0x80 = 0;
  *(undefined4 *)&(this->MetaData).field_0x84 = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x88 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x8c = 0;
  *(undefined8 *)&(this->MetaData).field_0x98 = 0;
  *(undefined4 *)&(this->MetaData).field_0xa0 = 0;
  *(undefined ***)&this->MetaData = &___7FMetaData_DataStorage_Editor_UE__6B_;
  (this->Hierarchy).ComparisonIndex = 0;
  (this->Hierarchy).Number = 0;
  this->bShouldBatchModifications = false;
  return this;
}

// ~FQueryDescription @ 142c9a3c0

void __thiscall
UE::Editor::DataStorage::FQueryDescription::~FQueryDescription(FQueryDescription *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar3;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> FVar4;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar5;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar6;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar7;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar8;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar9;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar10;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar11;
  longlong *plVar12;
  ForElementType<FName> FVar13;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar14;
  longlong *plVar15;
  
  *(undefined4 *)&(this->MetaData).field_0xa0 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x98;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MetaData).field_0x58);
  *(undefined4 *)&(this->MetaData).field_0x50 = 0;
  pvVar1 = *(void **)&(this->MetaData).field_0x48;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MetaData).field_0x8);
  pFVar2 = (this->Subqueries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->CachedDependencies).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->DependencyFlags).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar5 = (this->DependencyTypes).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TOptional<UE::Editor::DataStorage::Queries::FConditions>::
  ~TOptional<UE::Editor::DataStorage::Queries::FConditions>(&this->Conditions);
  pFVar2 = (this->ValueTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar6 = (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FVar7 = (this->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar8 = (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  FVar9 = (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  FVar6 = (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FVar10 = (this->ConditionOperators).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  FVar7 = (this->ConditionTypes).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar14 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar14 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&this->SelectionMetaData;
  }
  DestructItems<UE::Editor::DataStorage::FColumnMetaData,int>
            ((FColumnMetaData *)FVar14,(this->SelectionMetaData).ArrayNum);
  FVar14 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar14 != (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FMemory::Free((void *)FVar14);
  }
  FVar9 = (this->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  FVar11 = (this->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  if (*(longlong *)&(this->Callback).Function != 0) {
    plVar12 = *(longlong **)&(this->Callback).Function.field_0x28;
    plVar15 = (longlong *)&(this->Callback).Function.field_0x10;
    if (plVar12 != (longlong *)0x0) {
      plVar15 = plVar12;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  FVar13 = (this->Callback).AfterGroups.AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar13);
  }
  FVar13 = (this->Callback).BeforeGroups.AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar13);
  }
  return;
}

// operator= @ 142c9b940

FQueryDescription * __thiscall
UE::Editor::DataStorage::FQueryDescription::operator=
          (FQueryDescription *this,FQueryDescription *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::FValueTagData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar11;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Dst;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar12;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar13;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Dst_00;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> _Dst_01;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Dst_02;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> _Dst_03;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Dst_04;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar14;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> _Src;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Src_00;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Src_01;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> _Src_02;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src_03;
  
  TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            ((TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)this,
             (TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)param_1);
  TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&(this->Callback).AfterGroups,&(param_1->Callback).AfterGroups);
  TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
  ::operator=(&(this->Callback).Function,&(param_1->Callback).Function);
  (this->Callback).Name = (param_1->Callback).Name;
  (this->Callback).Group = (param_1->Callback).Group;
  (this->Callback).ActivationName = (param_1->Callback).ActivationName;
  (this->Callback).MonitoredType = (param_1->Callback).MonitoredType;
  (this->Callback).Type = (param_1->Callback).Type;
  (this->Callback).Phase = (param_1->Callback).Phase;
  (this->Callback).Active = (param_1->Callback).Active;
  (this->Callback).ActivationCount = (param_1->Callback).ActivationCount;
  (this->Callback).ExecutionMode = (param_1->Callback).ExecutionMode;
  if (this == param_1) {
LAB_142c9ba9c:
    TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->SelectionAccessTypes,&param_1->SelectionAccessTypes);
    if (this != param_1) goto LAB_142c9bac9;
    TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->ConditionTypes,&param_1->ConditionTypes);
  }
  else {
    FVar14 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
    piVar1 = &(this->SelectionTypes).ArrayMax;
    iVar7 = (param_1->SelectionTypes).ArrayNum;
    if (FVar14 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
               &param_1->SelectionTypes;
    }
    (this->SelectionTypes).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                (8,4,iVar7,*piVar1,&(this->SelectionTypes).AllocatorInstance,iVar7,piVar1);
      _Dst = (this->SelectionTypes).AllocatorInstance.SecondaryData;
      if (iVar7 == 0) goto LAB_142c9ba9c;
      if (_Dst == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        _Dst = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
               &this->SelectionTypes;
      }
      memcpy((void *)_Dst,(void *)FVar14,(longlong)iVar7 << 3);
    }
    TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->SelectionAccessTypes,&param_1->SelectionAccessTypes);
LAB_142c9bac9:
    FVar12 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar12 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&this->SelectionMetaData;
    }
    DestructItems<UE::Editor::DataStorage::FColumnMetaData,int>
              ((FColumnMetaData *)FVar12,(this->SelectionMetaData).ArrayNum);
    FVar12 = (param_1->SelectionMetaData).AllocatorInstance.SecondaryData;
    piVar1 = &(this->SelectionMetaData).ArrayMax;
    iVar7 = (param_1->SelectionMetaData).ArrayNum;
    if (FVar12 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar12 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&param_1->SelectionMetaData
      ;
    }
    (this->SelectionMetaData).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                (0xb8,8,iVar7,*piVar1,&(this->SelectionMetaData).AllocatorInstance,iVar7,piVar1);
      FVar13 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
        FVar13 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&this->SelectionMetaData;
      }
      ConstructItems<UE::Editor::DataStorage::FColumnMetaData,UE::Editor::DataStorage::FColumnMetaData,int>
                ((void *)FVar13,(FColumnMetaData *)FVar12,iVar7);
    }
    TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::operator=(&this->ConditionTypes,&param_1->ConditionTypes);
    _Src_01 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
    piVar1 = &(this->ConditionOperators).ArrayMax;
    iVar7 = (param_1->ConditionOperators).ArrayNum;
    if (_Src_01 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      _Src_01 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                &param_1->ConditionOperators;
    }
    (this->ConditionOperators).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                (8,4,iVar7,*piVar1,&(this->ConditionOperators).AllocatorInstance,iVar7,piVar1);
      _Dst_00 = (this->ConditionOperators).AllocatorInstance.SecondaryData;
      if (iVar7 != 0) {
        if (_Dst_00 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
          _Dst_00 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                    &this->ConditionOperators;
        }
        memcpy((void *)_Dst_00,(void *)_Src_01,(longlong)iVar7 << 3);
      }
    }
  }
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&this->DynamicSelectionTypes,&param_1->DynamicSelectionTypes);
  TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&this->DynamicSelectionAccessTypes,&param_1->DynamicSelectionAccessTypes);
  if (this != param_1) {
    _Src = (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
    piVar1 = &(this->DynamicSelectionMetaData).ArrayMax;
    iVar7 = (param_1->DynamicSelectionMetaData).ArrayNum;
    if (_Src == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
      _Src = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
             &param_1->DynamicSelectionMetaData;
    }
    (this->DynamicSelectionMetaData).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
                (4,4,iVar7,*piVar1,&(this->DynamicSelectionMetaData).AllocatorInstance,iVar7,piVar1)
      ;
      _Dst_01 = (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
      if (iVar7 != 0) {
        if (_Dst_01 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
          _Dst_01 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
                    &this->DynamicSelectionMetaData;
        }
        memcpy((void *)_Dst_01,(void *)_Src,(longlong)iVar7 << 2);
      }
    }
  }
  TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&this->DynamicConditionOperations,&param_1->DynamicConditionOperations);
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&this->DynamicConditionDescriptions,&param_1->DynamicConditionDescriptions);
  pTVar2 = &this->ValueTags;
  if (pTVar2 != &param_1->ValueTags) {
    iVar7 = (param_1->ValueTags).ArrayNum;
    piVar1 = &(this->ValueTags).ArrayMax;
    pFVar8 = (param_1->ValueTags).AllocatorInstance.Data;
    (this->ValueTags).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 4);
      }
    }
  }
  if (&param_1->Conditions != &this->Conditions) {
    bVar6 = (this->Conditions).bIsSet;
    if ((param_1->Conditions).bIsSet == false) {
      if (bVar6 != false) {
        FVar9 = (this->Conditions).TypedValue.Identifiers.AllocatorInstance.SecondaryData;
        if (FVar9 != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)FVar9);
        }
        FVar10 = (this->Conditions).TypedValue.Tokens.AllocatorInstance.SecondaryData;
        if (FVar10 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
          FMemory::Free((void *)FVar10);
        }
        FVar11 = (this->Conditions).TypedValue.ColumnFlags.AllocatorInstance.SecondaryData;
        if (FVar11 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
                      0x0) {
          FMemory::Free((void *)FVar11);
        }
        FVar14 = (this->Conditions).TypedValue.Columns.AllocatorInstance.SecondaryData;
        if (FVar14 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FMemory::Free((void *)FVar14);
        }
        (this->Conditions).bIsSet = false;
      }
    }
    else {
      if (bVar6 != false) {
        FVar9 = (this->Conditions).TypedValue.Identifiers.AllocatorInstance.SecondaryData;
        if (FVar9 != (ForElementType<FName>)0x0) {
          FMemory::Free((void *)FVar9);
        }
        FVar10 = (this->Conditions).TypedValue.Tokens.AllocatorInstance.SecondaryData;
        if (FVar10 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
          FMemory::Free((void *)FVar10);
        }
        FVar11 = (this->Conditions).TypedValue.ColumnFlags.AllocatorInstance.SecondaryData;
        if (FVar11 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)
                      0x0) {
          FMemory::Free((void *)FVar11);
        }
        FVar14 = (this->Conditions).TypedValue.Columns.AllocatorInstance.SecondaryData;
        if (FVar14 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FMemory::Free((void *)FVar14);
        }
      }
      Queries::FConditions::FConditions
                (&(this->Conditions).TypedValue,&(param_1->Conditions).TypedValue);
      (this->Conditions).bIsSet = true;
    }
  }
  if (this == param_1) {
LAB_142c9bec0:
    if (this != param_1) goto LAB_142c9beda;
LAB_142c9bf5d:
    if (this == param_1) goto LAB_142c9bfea;
  }
  else {
    _Src_00 = (param_1->DependencyTypes).AllocatorInstance.SecondaryData;
    piVar1 = &(this->DependencyTypes).ArrayMax;
    iVar7 = (param_1->DependencyTypes).ArrayNum;
    if (_Src_00 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
      _Src_00 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
                &param_1->DependencyTypes;
    }
    (this->DependencyTypes).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 2;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
                (8,4,iVar7,*piVar1,&(this->DependencyTypes).AllocatorInstance,iVar7,piVar1);
      _Dst_02 = (this->DependencyTypes).AllocatorInstance.SecondaryData;
      if (iVar7 == 0) goto LAB_142c9bec0;
      if (_Dst_02 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
        _Dst_02 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
                  &this->DependencyTypes;
      }
      memcpy((void *)_Dst_02,(void *)_Src_00,(longlong)iVar7 << 3);
    }
LAB_142c9beda:
    _Src_02 = (param_1->DependencyFlags).AllocatorInstance.SecondaryData;
    piVar1 = &(this->DependencyFlags).ArrayMax;
    iVar7 = (param_1->DependencyFlags).ArrayNum;
    if (_Src_02 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
      _Src_02 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
                &param_1->DependencyFlags;
    }
    (this->DependencyFlags).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 2;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
                (1,1,iVar7,*piVar1,&(this->DependencyFlags).AllocatorInstance,iVar7,piVar1);
      _Dst_03 = (this->DependencyFlags).AllocatorInstance.SecondaryData;
      if (iVar7 == 0) goto LAB_142c9bf5d;
      if (_Dst_03 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
        _Dst_03 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
                  &this->DependencyFlags;
      }
      memcpy((void *)_Dst_03,(void *)_Src_02,(longlong)iVar7);
    }
  }
  _Src_03 = (param_1->CachedDependencies).AllocatorInstance.SecondaryData;
  piVar1 = &(this->CachedDependencies).ArrayMax;
  iVar7 = (param_1->CachedDependencies).ArrayNum;
  if (_Src_03 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    _Src_03 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&param_1->CachedDependencies;
  }
  (this->CachedDependencies).ArrayNum = iVar7;
  if ((iVar7 == 0) && (*piVar1 == 0)) {
    *piVar1 = 2;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,iVar7,*piVar1,&(this->CachedDependencies).AllocatorInstance,iVar7,piVar1);
    _Dst_04 = (this->CachedDependencies).AllocatorInstance.SecondaryData;
    if (iVar7 != 0) {
      if (_Dst_04 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        _Dst_04 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&this->CachedDependencies
        ;
      }
      memcpy((void *)_Dst_04,(void *)_Src_03,(longlong)iVar7 << 3);
    }
  }
LAB_142c9bfea:
  pTVar3 = &this->Subqueries;
  if (pTVar3 != &param_1->Subqueries) {
    iVar7 = (param_1->Subqueries).ArrayNum;
    piVar1 = &(this->Subqueries).ArrayMax;
    pFVar8 = (param_1->Subqueries).AllocatorInstance.Data;
    (this->Subqueries).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar1,&pTVar3->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
      }
    }
  }
  puVar4 = &(param_1->MetaData).field_0x8;
  puVar5 = &(this->MetaData).field_0x8;
  if (puVar5 != puVar4) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MetaData).field_0x40,
               (int *)&(this->MetaData).field_0x50,
               (ForElementType<FSetElementId> *)&(param_1->MetaData).field_0x40,
               *(int *)&(param_1->MetaData).field_0x50);
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)puVar5,
                (TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)puVar4);
  }
  puVar4 = &(param_1->MetaData).field_0x58;
  puVar5 = &(this->MetaData).field_0x58;
  if (puVar5 != puVar4) {
    Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MetaData).field_0x90,
               (int *)&(this->MetaData).field_0xa0,
               (ForElementType<FSetElementId> *)&(param_1->MetaData).field_0x90,
               *(int *)&(param_1->MetaData).field_0xa0);
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)puVar5,
                (TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)puVar4);
  }
  this->Hierarchy = param_1->Hierarchy;
  this->Action = param_1->Action;
  this->bShouldBatchModifications = param_1->bShouldBatchModifications;
  return this;
}

// FQueryDescription @ 142ce2730

FQueryDescription * __thiscall
UE::Editor::DataStorage::FQueryDescription::FQueryDescription
          (FQueryDescription *this,FQueryDescription *param_1)

{
  bool bVar1;
  ForElementType<FName> FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar4;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar5;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar6;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar7;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar8;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar9;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar10;
  undefined8 uVar11;
  
  (this->Callback).BeforeGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  if ((param_1->Callback).BeforeGroups.AllocatorInstance.SecondaryData == (ForElementType<FName>)0x0
     ) {
    memmove(this,param_1,0x10);
  }
  FVar2 = (this->Callback).BeforeGroups.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Callback).BeforeGroups.AllocatorInstance.SecondaryData =
       (param_1->Callback).BeforeGroups.AllocatorInstance.SecondaryData;
  (param_1->Callback).BeforeGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Callback).BeforeGroups.ArrayNum = (param_1->Callback).BeforeGroups.ArrayNum;
  (this->Callback).BeforeGroups.ArrayMax = (param_1->Callback).BeforeGroups.ArrayMax;
  (param_1->Callback).BeforeGroups.ArrayNum = 0;
  (param_1->Callback).BeforeGroups.ArrayMax = 2;
  (this->Callback).AfterGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  if ((param_1->Callback).AfterGroups.AllocatorInstance.SecondaryData == (ForElementType<FName>)0x0)
  {
    memmove(&(this->Callback).AfterGroups,&(param_1->Callback).AfterGroups,0x10);
  }
  FVar2 = (this->Callback).AfterGroups.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Callback).AfterGroups.AllocatorInstance.SecondaryData =
       (param_1->Callback).AfterGroups.AllocatorInstance.SecondaryData;
  (param_1->Callback).AfterGroups.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->Callback).AfterGroups.ArrayNum = (param_1->Callback).AfterGroups.ArrayNum;
  (this->Callback).AfterGroups.ArrayMax = (param_1->Callback).AfterGroups.ArrayMax;
  (param_1->Callback).AfterGroups.ArrayNum = 0;
  (param_1->Callback).AfterGroups.ArrayMax = 2;
  *(undefined8 *)&(this->Callback).Function = *(undefined8 *)&(param_1->Callback).Function;
  *(undefined8 *)&(this->Callback).Function.field_0x28 =
       *(undefined8 *)&(param_1->Callback).Function.field_0x28;
  *(undefined8 *)&(param_1->Callback).Function.field_0x28 = 0;
  uVar11 = *(undefined8 *)&(param_1->Callback).Function.field_0x18;
  *(undefined8 *)&(this->Callback).Function.field_0x10 =
       *(undefined8 *)&(param_1->Callback).Function.field_0x10;
  *(undefined8 *)&(this->Callback).Function.field_0x18 = uVar11;
  *(undefined8 *)&(this->Callback).Function.field_0x20 =
       *(undefined8 *)&(param_1->Callback).Function.field_0x20;
  if (*(longlong *)&(this->Callback).Function != 0) {
    *(undefined8 *)&(param_1->Callback).Function = 0;
  }
  (this->Callback).Name = (param_1->Callback).Name;
  (this->Callback).Group = (param_1->Callback).Group;
  (this->Callback).ActivationName = (param_1->Callback).ActivationName;
  (this->Callback).MonitoredType = (param_1->Callback).MonitoredType;
  (this->Callback).Type = (param_1->Callback).Type;
  (this->Callback).Phase = (param_1->Callback).Phase;
  (this->Callback).Active = (param_1->Callback).Active;
  (this->Callback).ActivationCount = (param_1->Callback).ActivationCount;
  (this->Callback).ExecutionMode = (param_1->Callback).ExecutionMode;
  (this->SelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  if ((param_1->SelectionTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    memmove(&this->SelectionTypes,&param_1->SelectionTypes,0x40);
  }
  FVar3 = (this->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->SelectionTypes).AllocatorInstance.SecondaryData =
       (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  (param_1->SelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  (this->SelectionTypes).ArrayNum = (param_1->SelectionTypes).ArrayNum;
  (this->SelectionTypes).ArrayMax = (param_1->SelectionTypes).ArrayMax;
  (param_1->SelectionTypes).ArrayNum = 0;
  (param_1->SelectionTypes).ArrayMax = 8;
  (this->SelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  if ((param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    *(undefined8 *)(this->SelectionAccessTypes).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->SelectionAccessTypes).AllocatorInstance.InlineData;
  }
  (this->SelectionAccessTypes).AllocatorInstance.SecondaryData =
       (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  (this->SelectionAccessTypes).ArrayNum = (param_1->SelectionAccessTypes).ArrayNum;
  (this->SelectionAccessTypes).ArrayMax = (param_1->SelectionAccessTypes).ArrayMax;
  (param_1->SelectionAccessTypes).ArrayNum = 0;
  (param_1->SelectionAccessTypes).ArrayMax = 8;
  (this->SelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0;
  if ((param_1->SelectionMetaData).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    memmove(&this->SelectionMetaData,&param_1->SelectionMetaData,0x5c0);
  }
  FVar4 = (this->SelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->SelectionMetaData).AllocatorInstance.SecondaryData =
       (param_1->SelectionMetaData).AllocatorInstance.SecondaryData;
  (param_1->SelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0;
  (this->SelectionMetaData).ArrayNum = (param_1->SelectionMetaData).ArrayNum;
  (this->SelectionMetaData).ArrayMax = (param_1->SelectionMetaData).ArrayMax;
  (param_1->SelectionMetaData).ArrayNum = 0;
  (param_1->SelectionMetaData).ArrayMax = 8;
  (this->ConditionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  if ((param_1->ConditionTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    memmove(&this->ConditionTypes,&param_1->ConditionTypes,0x10);
  }
  FVar5 = (this->ConditionTypes).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->ConditionTypes).AllocatorInstance.SecondaryData =
       (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
  (param_1->ConditionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  (this->ConditionTypes).ArrayNum = (param_1->ConditionTypes).ArrayNum;
  (this->ConditionTypes).ArrayMax = (param_1->ConditionTypes).ArrayMax;
  (param_1->ConditionTypes).ArrayNum = 0;
  (param_1->ConditionTypes).ArrayMax = 8;
  (this->ConditionOperators).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0;
  if ((param_1->ConditionOperators).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    memmove(&this->ConditionOperators,&param_1->ConditionOperators,0x40);
  }
  FVar6 = (this->ConditionOperators).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->ConditionOperators).AllocatorInstance.SecondaryData =
       (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
  (param_1->ConditionOperators).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0;
  (this->ConditionOperators).ArrayNum = (param_1->ConditionOperators).ArrayNum;
  (this->ConditionOperators).ArrayMax = (param_1->ConditionOperators).ArrayMax;
  (param_1->ConditionOperators).ArrayNum = 0;
  (param_1->ConditionOperators).ArrayMax = 8;
  (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  if ((param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    memmove(&this->DynamicSelectionTypes,&param_1->DynamicSelectionTypes,0x80);
  }
  FVar7 = (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  (this->DynamicSelectionTypes).AllocatorInstance.SecondaryData =
       (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
  (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  (this->DynamicSelectionTypes).ArrayNum = (param_1->DynamicSelectionTypes).ArrayNum;
  (this->DynamicSelectionTypes).ArrayMax = (param_1->DynamicSelectionTypes).ArrayMax;
  (param_1->DynamicSelectionTypes).ArrayNum = 0;
  (param_1->DynamicSelectionTypes).ArrayMax = 8;
  (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  if ((param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    *(undefined8 *)(this->DynamicSelectionAccessTypes).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->DynamicSelectionAccessTypes).AllocatorInstance.InlineData;
  }
  (this->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData =
       (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
  (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0;
  (this->DynamicSelectionAccessTypes).ArrayNum = (param_1->DynamicSelectionAccessTypes).ArrayNum;
  (this->DynamicSelectionAccessTypes).ArrayMax = (param_1->DynamicSelectionAccessTypes).ArrayMax;
  (param_1->DynamicSelectionAccessTypes).ArrayNum = 0;
  (param_1->DynamicSelectionAccessTypes).ArrayMax = 8;
  (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0;
  if ((param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    memmove(&this->DynamicSelectionMetaData,&param_1->DynamicSelectionMetaData,0x20);
  }
  FVar8 = (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  (this->DynamicSelectionMetaData).AllocatorInstance.SecondaryData =
       (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
  (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0;
  (this->DynamicSelectionMetaData).ArrayNum = (param_1->DynamicSelectionMetaData).ArrayNum;
  (this->DynamicSelectionMetaData).ArrayMax = (param_1->DynamicSelectionMetaData).ArrayMax;
  (param_1->DynamicSelectionMetaData).ArrayNum = 0;
  (param_1->DynamicSelectionMetaData).ArrayMax = 8;
  (this->DynamicConditionOperations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  if ((param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    memmove(&this->DynamicConditionOperations,&param_1->DynamicConditionOperations,0x10);
  }
  FVar5 = (this->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->DynamicConditionOperations).AllocatorInstance.SecondaryData =
       (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0;
  (this->DynamicConditionOperations).ArrayNum = (param_1->DynamicConditionOperations).ArrayNum;
  (this->DynamicConditionOperations).ArrayMax = (param_1->DynamicConditionOperations).ArrayMax;
  (param_1->DynamicConditionOperations).ArrayNum = 0;
  (param_1->DynamicConditionOperations).ArrayMax = 8;
  (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  if ((param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    memmove(&this->DynamicConditionDescriptions,&param_1->DynamicConditionDescriptions,0x80);
  }
  FVar7 = (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  (this->DynamicConditionDescriptions).AllocatorInstance.SecondaryData =
       (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0;
  (this->DynamicConditionDescriptions).ArrayNum = (param_1->DynamicConditionDescriptions).ArrayNum;
  (this->DynamicConditionDescriptions).ArrayMax = (param_1->DynamicConditionDescriptions).ArrayMax;
  (param_1->DynamicConditionDescriptions).ArrayNum = 0;
  (param_1->DynamicConditionDescriptions).ArrayMax = 8;
  (this->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).AllocatorInstance.Data = (param_1->ValueTags).AllocatorInstance.Data;
  (param_1->ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueTags).ArrayNum = (param_1->ValueTags).ArrayNum;
  (this->ValueTags).ArrayMax = (param_1->ValueTags).ArrayMax;
  (param_1->ValueTags).ArrayNum = 0;
  (param_1->ValueTags).ArrayMax = 0;
  (this->Conditions).bIsSet = false;
  bVar1 = (param_1->Conditions).bIsSet;
  (this->Conditions).bIsSet = bVar1;
  if (bVar1 != false) {
    Queries::FConditions::FConditions
              (&(this->Conditions).TypedValue,&(param_1->Conditions).TypedValue);
  }
  (this->DependencyTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0;
  if ((param_1->DependencyTypes).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    memmove(&this->DependencyTypes,&param_1->DependencyTypes,0x10);
  }
  FVar9 = (this->DependencyTypes).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  (this->DependencyTypes).AllocatorInstance.SecondaryData =
       (param_1->DependencyTypes).AllocatorInstance.SecondaryData;
  (param_1->DependencyTypes).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0;
  (this->DependencyTypes).ArrayNum = (param_1->DependencyTypes).ArrayNum;
  (this->DependencyTypes).ArrayMax = (param_1->DependencyTypes).ArrayMax;
  (param_1->DependencyTypes).ArrayNum = 0;
  (param_1->DependencyTypes).ArrayMax = 2;
  (this->DependencyFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0;
  if ((param_1->DependencyFlags).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
    *(undefined2 *)(this->DependencyFlags).AllocatorInstance.InlineData =
         *(undefined2 *)(param_1->DependencyFlags).AllocatorInstance.InlineData;
  }
  (this->DependencyFlags).AllocatorInstance.SecondaryData =
       (param_1->DependencyFlags).AllocatorInstance.SecondaryData;
  (param_1->DependencyFlags).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0;
  (this->DependencyFlags).ArrayNum = (param_1->DependencyFlags).ArrayNum;
  (this->DependencyFlags).ArrayMax = (param_1->DependencyFlags).ArrayMax;
  (param_1->DependencyFlags).ArrayNum = 0;
  (param_1->DependencyFlags).ArrayMax = 2;
  (this->CachedDependencies).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  if ((param_1->CachedDependencies).AllocatorInstance.SecondaryData ==
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    memmove(&this->CachedDependencies,&param_1->CachedDependencies,0x10);
  }
  FVar10 = (this->CachedDependencies).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  (this->CachedDependencies).AllocatorInstance.SecondaryData =
       (param_1->CachedDependencies).AllocatorInstance.SecondaryData;
  (param_1->CachedDependencies).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  (this->CachedDependencies).ArrayNum = (param_1->CachedDependencies).ArrayNum;
  (this->CachedDependencies).ArrayMax = (param_1->CachedDependencies).ArrayMax;
  (param_1->CachedDependencies).ArrayNum = 0;
  (param_1->CachedDependencies).ArrayMax = 2;
  (this->Subqueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subqueries).AllocatorInstance.Data = (param_1->Subqueries).AllocatorInstance.Data;
  (param_1->Subqueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subqueries).ArrayNum = (param_1->Subqueries).ArrayNum;
  (this->Subqueries).ArrayMax = (param_1->Subqueries).ArrayMax;
  (param_1->Subqueries).ArrayNum = 0;
  (param_1->Subqueries).ArrayMax = 0;
  FMetaDataBase::FMetaDataBase((FMetaDataBase *)&this->MetaData,(FMetaDataBase *)&param_1->MetaData)
  ;
  *(undefined ***)&this->MetaData = &___7FMetaData_DataStorage_Editor_UE__6B_;
  this->Hierarchy = param_1->Hierarchy;
  this->Action = param_1->Action;
  this->bShouldBatchModifications = param_1->bShouldBatchModifications;
  return this;
}

