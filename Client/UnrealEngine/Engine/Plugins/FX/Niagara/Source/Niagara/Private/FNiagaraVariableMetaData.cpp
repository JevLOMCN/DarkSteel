// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNiagaraVariableMetaData @ 149022ee0

FNiagaraVariableMetaData * __thiscall
FNiagaraVariableMetaData::FNiagaraVariableMetaData
          (FNiagaraVariableMetaData *this,FNiagaraVariableMetaData *param_1)

{
  TArray<FNiagaraEnumParameterMetaData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FWidgetNamedInputValue,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNiagaraWidgetNamedIntegerInputValue,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FWidgetSegmentValueOverride,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  ITextData *pIVar8;
  FNiagaraEnumParameterMetaData *pFVar9;
  UTexture2D *pUVar10;
  FScriptContainerElement *_Src;
  FWidgetNamedInputValue *pFVar11;
  FNiagaraWidgetNamedIntegerInputValue *pFVar12;
  FWidgetSegmentValueOverride *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 local_res8 [8];
  
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar8 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar8;
  if (pIVar8 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res8);
  }
  pTVar1 = &this->InlineParameterEnumOverrides;
  (this->Description).Flags = (param_1->Description).Flags;
  this->DisplayUnit = param_1->DisplayUnit;
  this->bAdvancedDisplay = param_1->bAdvancedDisplay;
  this->bDisplayInOverviewStack = param_1->bDisplayInOverviewStack;
  this->InlineParameterSortPriority = param_1->InlineParameterSortPriority;
  this->bOverrideColor = param_1->bOverrideColor;
  piVar2 = &(this->InlineParameterEnumOverrides).ArrayMax;
  uVar17 = *(undefined8 *)((longlong)&(param_1->InlineParameterColorOverride).field0_0x0 + 8);
  *(undefined8 *)&(this->InlineParameterColorOverride).field0_0x0 =
       *(undefined8 *)&(param_1->InlineParameterColorOverride).field0_0x0;
  *(undefined8 *)((longlong)&(this->InlineParameterColorOverride).field0_0x0 + 8) = uVar17;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->InlineParameterEnumOverrides).ArrayNum;
  pFVar9 = (FNiagaraEnumParameterMetaData *)
           (param_1->InlineParameterEnumOverrides).AllocatorInstance.Data;
  (this->InlineParameterEnumOverrides).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FNiagaraEnumParameterMetaData,FNiagaraEnumParameterMetaData,int>
              ((pTVar1->AllocatorInstance).Data,pFVar9,iVar7);
  }
  this->bEnableBoolOverride = param_1->bEnableBoolOverride;
  (this->InlineParameterBoolOverride).DisplayMode =
       (param_1->InlineParameterBoolOverride).DisplayMode;
  (this->InlineParameterBoolOverride).OverrideNameTrue =
       (param_1->InlineParameterBoolOverride).OverrideNameTrue;
  (this->InlineParameterBoolOverride).OverrideNameFalse =
       (param_1->InlineParameterBoolOverride).OverrideNameFalse;
  pUVar10 = (param_1->InlineParameterBoolOverride).IconOverrideTrue.field0_0x0.DebugPtr;
  (this->InlineParameterBoolOverride).IconOverrideTrue.field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar10 = (param_1->InlineParameterBoolOverride).IconOverrideFalse.field0_0x0.DebugPtr;
  (this->InlineParameterBoolOverride).IconOverrideFalse.field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  this->bInlineEditConditionToggle = param_1->bInlineEditConditionToggle;
  FNiagaraInputConditionMetadata::FNiagaraInputConditionMetadata
            (&this->EditCondition,&param_1->EditCondition);
  FNiagaraInputConditionMetadata::FNiagaraInputConditionMetadata
            (&this->VisibleCondition,&param_1->VisibleCondition);
  *(undefined8 *)&(this->PropertyMetaData).field_0x0 = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyMetaData).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&this->PropertyMetaData,
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->PropertyMetaData);
  pTVar3 = &this->AlternateAliases;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->AlternateAliases).ArrayMax;
  iVar7 = (param_1->AlternateAliases).ArrayNum;
  _Src = (param_1->AlternateAliases).AllocatorInstance.Data;
  (this->AlternateAliases).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar7 << 3);
  }
  pTVar4 = &(this->WidgetCustomization).InputDropdownValues;
  (this->WidgetCustomization).WidgetType = (param_1->WidgetCustomization).WidgetType;
  (this->WidgetCustomization).bHasMinValue = (param_1->WidgetCustomization).bHasMinValue;
  (this->WidgetCustomization).MinValue = (param_1->WidgetCustomization).MinValue;
  (this->WidgetCustomization).bHasMaxValue = (param_1->WidgetCustomization).bHasMaxValue;
  (this->WidgetCustomization).MaxValue = (param_1->WidgetCustomization).MaxValue;
  (this->WidgetCustomization).bHasStepWidth = (param_1->WidgetCustomization).bHasStepWidth;
  (this->WidgetCustomization).StepWidth = (param_1->WidgetCustomization).StepWidth;
  piVar2 = &(this->WidgetCustomization).InputDropdownValues.ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->WidgetCustomization).InputDropdownValues.ArrayNum;
  pFVar11 = (FWidgetNamedInputValue *)
            (param_1->WidgetCustomization).InputDropdownValues.AllocatorInstance.Data;
  (this->WidgetCustomization).InputDropdownValues.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FWidgetNamedInputValue,FWidgetNamedInputValue,int>
              ((pTVar4->AllocatorInstance).Data,pFVar11,iVar7);
  }
  pTVar5 = &(this->WidgetCustomization).EnumStyleDropdownValues;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->WidgetCustomization).EnumStyleDropdownValues.ArrayMax;
  iVar7 = (param_1->WidgetCustomization).EnumStyleDropdownValues.ArrayNum;
  pFVar12 = (FNiagaraWidgetNamedIntegerInputValue *)
            (param_1->WidgetCustomization).EnumStyleDropdownValues.AllocatorInstance.Data;
  (this->WidgetCustomization).EnumStyleDropdownValues.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FNiagaraWidgetNamedIntegerInputValue,FNiagaraWidgetNamedIntegerInputValue,int>
              ((pTVar5->AllocatorInstance).Data,pFVar12,iVar7);
  }
  pTVar6 = &(this->WidgetCustomization).SegmentValueOverrides;
  (this->WidgetCustomization).MaxSegmentsPerRow = (param_1->WidgetCustomization).MaxSegmentsPerRow;
  piVar2 = &(this->WidgetCustomization).SegmentValueOverrides.ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->WidgetCustomization).SegmentValueOverrides.ArrayNum;
  pFVar13 = (FWidgetSegmentValueOverride *)
            (param_1->WidgetCustomization).SegmentValueOverrides.AllocatorInstance.Data;
  (this->WidgetCustomization).SegmentValueOverrides.ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FWidgetSegmentValueOverride,FWidgetSegmentValueOverride,int>
              ((pTVar6->AllocatorInstance).Data,pFVar13,iVar7);
  }
  (this->WidgetCustomization).bBroadcastValueChangesOnCommitOnly =
       (param_1->WidgetCustomization).bBroadcastValueChangesOnCommitOnly;
  uVar14 = (param_1->VariableGuid).B;
  uVar15 = (param_1->VariableGuid).C;
  uVar16 = (param_1->VariableGuid).D;
  (this->VariableGuid).A = (param_1->VariableGuid).A;
  (this->VariableGuid).B = uVar14;
  (this->VariableGuid).C = uVar15;
  (this->VariableGuid).D = uVar16;
  this->bIsStaticSwitch_DEPRECATED = param_1->bIsStaticSwitch_DEPRECATED;
  this->StaticSwitchDefaultValue_DEPRECATED = param_1->StaticSwitchDefaultValue_DEPRECATED;
  (this->CategoryName_DEPRECATED).TextData.Reference = (ITextData *)0x0;
  pIVar8 = (param_1->CategoryName_DEPRECATED).TextData.Reference;
  (this->CategoryName_DEPRECATED).TextData.Reference = pIVar8;
  if (pIVar8 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_res8);
  }
  (this->CategoryName_DEPRECATED).Flags = (param_1->CategoryName_DEPRECATED).Flags;
  this->ParentAttribute_DEPRECATED = param_1->ParentAttribute_DEPRECATED;
  this->EditorSortPriority_DEPRECATED = param_1->EditorSortPriority_DEPRECATED;
  return this;
}

// ~FNiagaraVariableMetaData @ 1490262f0

void __thiscall FNiagaraVariableMetaData::~FNiagaraVariableMetaData(FNiagaraVariableMetaData *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pIVar1 = (this->CategoryName_DEPRECATED).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  FNiagaraInputParameterCustomization::~FNiagaraInputParameterCustomization
            (&this->WidgetCustomization);
  pFVar2 = (this->AlternateAliases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PropertyMetaData).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PropertyMetaData).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyMetaData);
  DestructItems<FString,int>
            ((FString *)(this->VisibleCondition).TargetValues.AllocatorInstance.Data,
             (this->VisibleCondition).TargetValues.ArrayNum);
  pFVar2 = (this->VisibleCondition).TargetValues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->EditCondition).TargetValues.AllocatorInstance.Data,
             (this->EditCondition).TargetValues.ArrayNum);
  pFVar2 = (this->EditCondition).TargetValues.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InlineParameterEnumOverrides).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar1 = (this->Description).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// StaticStruct @ 149412c60

UScriptStruct * __cdecl FNiagaraVariableMetaData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData,(UObject *)pUVar1,
                         L"NiagaraVariableMetaData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton;
}

// FNiagaraVariableMetaData @ 149427ad0

FNiagaraVariableMetaData * __thiscall
FNiagaraVariableMetaData::FNiagaraVariableMetaData(FNiagaraVariableMetaData *this)

{
  FText::FText(&this->Description);
  this->DisplayUnit = Unspecified;
  this->bAdvancedDisplay = false;
  (this->InlineParameterEnumOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InlineParameterEnumOverrides).ArrayNum = 0;
  (this->InlineParameterEnumOverrides).ArrayMax = 0;
  (this->InlineParameterBoolOverride).DisplayMode = DisplayAlways;
  (this->InlineParameterBoolOverride).OverrideNameTrue.ComparisonIndex = 0;
  (this->InlineParameterBoolOverride).OverrideNameTrue.Number = 0;
  (this->InlineParameterBoolOverride).OverrideNameFalse.ComparisonIndex = 0;
  (this->InlineParameterBoolOverride).OverrideNameFalse.Number = 0;
  (this->InlineParameterBoolOverride).IconOverrideTrue.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->InlineParameterBoolOverride).IconOverrideFalse.field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->EditCondition).InputName.ComparisonIndex = 0;
  (this->EditCondition).InputName.Number = 0;
  (this->EditCondition).TargetValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EditCondition).TargetValues.ArrayNum = 0;
  (this->EditCondition).TargetValues.ArrayMax = 0;
  (this->VisibleCondition).InputName.ComparisonIndex = 0;
  (this->VisibleCondition).InputName.Number = 0;
  (this->VisibleCondition).TargetValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibleCondition).TargetValues.ArrayNum = 0;
  (this->VisibleCondition).TargetValues.ArrayMax = 0;
  *(undefined8 *)&this->PropertyMetaData = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x20 = 0;
  this->InlineParameterSortPriority = 0;
  this->bOverrideColor = false;
  this->bEnableBoolOverride = false;
  this->bInlineEditConditionToggle = false;
  this->bDisplayInOverviewStack = false;
  *(undefined8 *)&(this->InlineParameterColorOverride).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->InlineParameterColorOverride).field0_0x0 + 8) = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyMetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyMetaData).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyMetaData).field_0x48 = 0;
  (this->AlternateAliases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlternateAliases).ArrayNum = 0;
  (this->AlternateAliases).ArrayMax = 0;
  (this->WidgetCustomization).WidgetType = Default;
  (this->WidgetCustomization).bHasMinValue = false;
  (this->WidgetCustomization).MinValue = 0.0;
  (this->WidgetCustomization).bHasMaxValue = false;
  (this->WidgetCustomization).MaxValue = 1.0;
  (this->WidgetCustomization).bHasStepWidth = false;
  (this->WidgetCustomization).StepWidth = 1.0;
  (this->WidgetCustomization).InputDropdownValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WidgetCustomization).InputDropdownValues.ArrayNum = 0;
  (this->WidgetCustomization).InputDropdownValues.ArrayMax = 0;
  (this->WidgetCustomization).EnumStyleDropdownValues.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WidgetCustomization).EnumStyleDropdownValues.ArrayNum = 0;
  (this->WidgetCustomization).EnumStyleDropdownValues.ArrayMax = 0;
  (this->WidgetCustomization).MaxSegmentsPerRow = 0;
  (this->WidgetCustomization).SegmentValueOverrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WidgetCustomization).SegmentValueOverrides.ArrayNum = 0;
  (this->WidgetCustomization).SegmentValueOverrides.ArrayMax = 0;
  (this->WidgetCustomization).bBroadcastValueChangesOnCommitOnly = false;
  (this->VariableGuid).A = 0;
  (this->VariableGuid).B = 0;
  (this->VariableGuid).C = 0;
  (this->VariableGuid).D = 0;
  this->bIsStaticSwitch_DEPRECATED = false;
  this->StaticSwitchDefaultValue_DEPRECATED = 0;
  FText::FText(&this->CategoryName_DEPRECATED);
  (this->ParentAttribute_DEPRECATED).ComparisonIndex = 0;
  (this->ParentAttribute_DEPRECATED).Number = 0;
  this->EditorSortPriority_DEPRECATED = 0;
  return this;
}

// CopyUserEditableMetaData @ 14943f3f0

void __thiscall
FNiagaraVariableMetaData::CopyUserEditableMetaData
          (FNiagaraVariableMetaData *this,FNiagaraVariableMetaData *param_1)

{
  void *_Src;
  void *_Dst;
  FField *pFVar1;
  UPackage *pUVar2;
  longlong lVar3;
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData,(UObject *)pUVar2,
                         L"NiagaraVariableMetaData");
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    local_38.Field = (FField *)0x0;
  }
  else {
    local_38.Field =
         (FField *)
         (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton)->_padding_;
  }
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  local_38.Struct =
       (UStruct *)Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.OuterSingleton;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  local_20.bIncludeSuper = local_38.bIncludeSuper;
  local_20.bIncludeDeprecated = local_38.bIncludeDeprecated;
  local_20.InterfaceIndex = local_38.InterfaceIndex;
  local_20.bIncludeInterface = local_38.bIncludeInterface;
  local_20._23_1_ = local_38._23_1_;
  local_20.Struct = local_38.Struct;
  pFVar1 = local_38.Field;
  while (pFVar1 != (FField *)0x0) {
    if (((ulonglong)pFVar1[1].ClassPrivate & 1) != 0) {
      lVar3 = (longlong)*(int *)((longlong)&pFVar1[1].Owner.Container + 4);
      _Src = (void *)((longlong)&(param_1->Description).TextData.Reference + lVar3);
      _Dst = (void *)((longlong)&(this->Description).TextData.Reference + lVar3);
      if (_Dst != _Src) {
        local_20.Field = pFVar1;
        if (((ulonglong)pFVar1[1].ClassPrivate >> 0x1e & 1) == 0) {
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,_Src,(int)pFVar1[1]._padding_);
        }
        else {
          memcpy(_Dst,_Src,
                 (longlong)*(int *)((longlong)&pFVar1[1]._padding_ + 4) *
                 (longlong)(int)pFVar1[1]._padding_);
        }
      }
    }
    local_20.Field = pFVar1->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_20);
    pFVar1 = local_20.Field;
  }
  return;
}

