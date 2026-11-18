// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateBaseNamedArgs @ 142544be0

FSlateBaseNamedArgs * __thiscall FSlateBaseNamedArgs::FSlateBaseNamedArgs(FSlateBaseNamedArgs *this)

{
  TVector2<double> TVar1;
  
  FText::FText((FText *)this);
  (this->_ToolTipText).bIsSet = false;
  *(undefined8 *)&(this->_ToolTipText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipText).Getter = 0;
  *(undefined8 *)&(this->_ToolTipText).Getter.field_0x8 = 0;
  (this->_ToolTip).Value.Object = (IToolTip *)0x0;
  (this->_ToolTip).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ToolTip).bIsSet = false;
  *(undefined8 *)&(this->_ToolTip).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTip).Getter = 0;
  *(undefined8 *)&(this->_ToolTip).Getter.field_0x8 = 0;
  (this->_Cursor).Value.bIsSet = false;
  (this->_Cursor).bIsSet = false;
  *(undefined8 *)&(this->_Cursor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Cursor).Getter = 0;
  *(undefined8 *)&(this->_Cursor).Getter.field_0x8 = 0;
  (this->_Visibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->_Visibility).bIsSet = true;
  *(undefined8 *)&(this->_Visibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Visibility).Getter = 0;
  *(undefined8 *)&(this->_Visibility).Getter.field_0x8 = 0;
  (this->_IsEnabled).Value = true;
  (this->_IsEnabled).bIsSet = true;
  *(undefined8 *)&(this->_IsEnabled).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsEnabled).Getter = 0;
  *(undefined8 *)&(this->_IsEnabled).Getter.field_0x8 = 0;
  this->_ForceVolatile = false;
  this->_EnabledAttributesUpdate = true;
  this->_Clipping = Inherit;
  this->_PixelSnappingMethod = Inherit;
  this->_FlowDirectionPreference = Inherit;
  this->_RenderOpacity = 1.0;
  (this->_RenderTransform).Value.bIsSet = false;
  (this->_RenderTransform).bIsSet = false;
  *(undefined8 *)&(this->_RenderTransform).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_RenderTransform).Getter = 0;
  *(undefined8 *)&(this->_RenderTransform).Getter.field_0x8 = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->_RenderTransformPivot).bIsSet = true;
  (this->_RenderTransformPivot).Value.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->_RenderTransformPivot).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_RenderTransformPivot).Getter = 0;
  *(undefined8 *)&(this->_RenderTransformPivot).Getter.field_0x8 = 0;
  (this->_Tag).ComparisonIndex = 0;
  (this->_Tag).Number = 0;
  (this->_AccessibleParams).bIsSet = false;
  FText::FText(&(this->_AccessibleText).Value);
  (this->_AccessibleText).bIsSet = false;
  *(undefined8 *)&(this->_AccessibleText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AccessibleText).Getter = 0;
  *(undefined8 *)&(this->_AccessibleText).Getter.field_0x8 = 0;
  (this->MetaData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaData).ArrayNum = 0;
  (this->MetaData).ArrayMax = 0;
  return this;
}

// ~FSlateBaseNamedArgs @ 14254b840

void __thiscall FSlateBaseNamedArgs::~FSlateBaseNamedArgs(FSlateBaseNamedArgs *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  DestructItems<TSharedRef<ISlateMetaData,1>,int>
            ((TSharedRef<ISlateMetaData,1> *)(this->MetaData).AllocatorInstance.Data,
             (this->MetaData).ArrayNum);
  pFVar1 = (this->MetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AccessibleText).Getter);
  pvVar2 = *(void **)&(this->_AccessibleText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AccessibleText).Getter);
  pIVar3 = (this->_AccessibleText).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  if ((this->_AccessibleParams).bIsSet != false) {
    FAccessibleWidgetData::~FAccessibleWidgetData(&(this->_AccessibleParams).TypedValue);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_RenderTransformPivot).Getter);
  pvVar2 = *(void **)&(this->_RenderTransformPivot).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_RenderTransformPivot).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_RenderTransform).Getter);
  pvVar2 = *(void **)&(this->_RenderTransform).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_RenderTransform).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsEnabled).Getter);
  pvVar2 = *(void **)&(this->_IsEnabled).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsEnabled).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Visibility).Getter);
  pvVar2 = *(void **)&(this->_Visibility).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Visibility).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Cursor).Getter);
  pvVar2 = *(void **)&(this->_Cursor).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Cursor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTip).Getter);
  pvVar2 = *(void **)&(this->_ToolTip).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ToolTip).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ToolTip).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ToolTipText).Getter);
  pvVar2 = *(void **)&(this->_ToolTipText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ToolTipText).Getter);
  pIVar3 = (this->_ToolTipText).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

