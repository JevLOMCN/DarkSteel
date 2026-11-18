// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// FSlateBaseNamedArgs @ 142d626e0

/* WARNING: Type propagation algorithm not settling */

FSlateBaseNamedArgs * __thiscall
FSlateBaseNamedArgs::FSlateBaseNamedArgs(FSlateBaseNamedArgs *this,FSlateBaseNamedArgs *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<TOptional<EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  int *piVar2;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy> *this_04;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_05;
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  ITextData *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<ISlateMetaData,1> *pTVar9;
  float afVar10 [2];
  double dVar11;
  undefined1 local_res8 [8];
  
  (this->_ToolTipText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar7 = (param_1->_ToolTipText).Value.TextData.Reference;
  (this->_ToolTipText).Value.TextData.Reference = pIVar7;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res8);
  }
  pTVar1 = &(this->_ToolTipText).Getter;
  (this->_ToolTipText).Value.Flags = (param_1->_ToolTipText).Value.Flags;
  (this->_ToolTipText).bIsSet = (param_1->_ToolTipText).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->_ToolTipText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_ToolTipText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->_ToolTipText).Getter);
  (this->_ToolTip).Value.Object = (param_1->_ToolTip).Value.Object;
  pTVar8 = (param_1->_ToolTip).Value.SharedReferenceCount.ReferenceController;
  (this->_ToolTip).Value.SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &(this->_ToolTip).Getter;
  (this->_ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->_ToolTip).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_ToolTip).Getter.field_0x10 = 0;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->_ToolTip).Getter);
  (this->_Cursor).Value.bIsSet = false;
  bVar4 = (param_1->_Cursor).Value.bIsSet;
  (this->_Cursor).Value.bIsSet = bVar4;
  if (bVar4 != false) {
    (this->_Cursor).Value.TypedValue = (param_1->_Cursor).Value.TypedValue;
  }
  this_01 = &(this->_Cursor).Getter;
  (this->_Cursor).bIsSet = (param_1->_Cursor).bIsSet;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->_Cursor).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_Cursor).Getter.field_0x10 = 0;
  TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&(param_1->_Cursor).Getter);
  this_02 = &(this->_Visibility).Getter;
  (this->_Visibility).Value.Value.Value = (param_1->_Visibility).Value.Value.Value;
  (this->_Visibility).bIsSet = (param_1->_Visibility).bIsSet;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->_Visibility).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_Visibility).Getter.field_0x10 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_02,&(param_1->_Visibility).Getter);
  this_03 = &(this->_IsEnabled).Getter;
  (this->_IsEnabled).Value = (param_1->_IsEnabled).Value;
  (this->_IsEnabled).bIsSet = (param_1->_IsEnabled).bIsSet;
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)&(this->_IsEnabled).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_IsEnabled).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_03,&(param_1->_IsEnabled).Getter);
  this->_ForceVolatile = param_1->_ForceVolatile;
  this->_EnabledAttributesUpdate = param_1->_EnabledAttributesUpdate;
  this->_Clipping = param_1->_Clipping;
  this->_PixelSnappingMethod = param_1->_PixelSnappingMethod;
  this->_FlowDirectionPreference = param_1->_FlowDirectionPreference;
  fVar5 = param_1->_RenderOpacity;
  (this->_RenderTransform).Value.bIsSet = false;
  this->_RenderOpacity = fVar5;
  bVar4 = (param_1->_RenderTransform).Value.bIsSet;
  (this->_RenderTransform).Value.bIsSet = bVar4;
  if (bVar4 != false) {
    afVar10 = (param_1->_RenderTransform).Value.TypedValue.M.M[1];
    (this->_RenderTransform).Value.TypedValue.M.M[0] =
         (param_1->_RenderTransform).Value.TypedValue.M.M[0];
    (this->_RenderTransform).Value.TypedValue.M.M[1] = afVar10;
    (this->_RenderTransform).Value.TypedValue.Trans.field0_0x0 =
         (param_1->_RenderTransform).Value.TypedValue.Trans.field0_0x0;
  }
  this_04 = &(this->_RenderTransform).Getter;
  (this->_RenderTransform).bIsSet = (param_1->_RenderTransform).bIsSet;
  *(undefined8 *)this_04 = 0;
  *(undefined8 *)&(this->_RenderTransform).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_RenderTransform).Getter.field_0x10 = 0;
  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_04,&(param_1->_RenderTransform).Getter);
  dVar11 = (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.Y;
  this_05 = &(this->_RenderTransformPivot).Getter;
  (this->_RenderTransformPivot).Value.field0_0x0._s_0.X =
       (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.X;
  (this->_RenderTransformPivot).Value.field0_0x0._s_0.Y = dVar11;
  (this->_RenderTransformPivot).bIsSet = (param_1->_RenderTransformPivot).bIsSet;
  *(undefined8 *)this_05 = 0;
  *(undefined8 *)&(this->_RenderTransformPivot).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_RenderTransformPivot).Getter.field_0x10 = 0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_05,&(param_1->_RenderTransformPivot).Getter);
  this->_Tag = param_1->_Tag;
  (this->_AccessibleParams).bIsSet = false;
  bVar4 = (param_1->_AccessibleParams).bIsSet;
  (this->_AccessibleParams).bIsSet = bVar4;
  if (bVar4 != false) {
    FAccessibleWidgetData::FAccessibleWidgetData
              (&(this->_AccessibleParams).TypedValue,&(param_1->_AccessibleParams).TypedValue);
  }
  (this->_AccessibleText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar7 = (param_1->_AccessibleText).Value.TextData.Reference;
  (this->_AccessibleText).Value.TextData.Reference = pIVar7;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_res8);
  }
  pTVar1 = &(this->_AccessibleText).Getter;
  (this->_AccessibleText).Value.Flags = (param_1->_AccessibleText).Value.Flags;
  (this->_AccessibleText).bIsSet = (param_1->_AccessibleText).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->_AccessibleText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_AccessibleText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->_AccessibleText).Getter);
  pTVar3 = &this->MetaData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MetaData).ArrayMax;
  iVar6 = (param_1->MetaData).ArrayNum;
  pTVar9 = (TSharedRef<ISlateMetaData,1> *)(param_1->MetaData).AllocatorInstance.Data;
  (this->MetaData).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    ConstructItems<TSharedRef<ISlateMetaData,1>,TSharedRef<ISlateMetaData,1>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar9,iVar6);
  }
  return this;
}

// operator= @ 142d69160

/* WARNING: Type propagation algorithm not settling */

FSlateBaseNamedArgs * __thiscall
FSlateBaseNamedArgs::operator=(FSlateBaseNamedArgs *this,FSlateBaseNamedArgs *param_1)

{
  int *piVar1;
  TOptional<FAccessibleWidgetData> *this_00;
  TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IToolTip *pIVar5;
  TSharedRef<ISlateMetaData,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  float afVar8 [2];
  double dVar9;
  
  TAttribute<FText>::operator=(&this->_ToolTipText,&param_1->_ToolTipText);
  pTVar4 = (param_1->_ToolTip).Value.SharedReferenceCount.ReferenceController;
  pIVar5 = (param_1->_ToolTip).Value.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (this->_ToolTip).Value.SharedReferenceCount.ReferenceController;
  (this->_ToolTip).Value.Object = pIVar5;
  (this->_ToolTip).Value.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  (this->_ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->_ToolTip).Getter,&(param_1->_ToolTip).Getter);
  if (&param_1->_Cursor != &this->_Cursor) {
    if ((param_1->_Cursor).Value.bIsSet == false) {
      if ((this->_Cursor).Value.bIsSet != false) {
        (this->_Cursor).Value.bIsSet = false;
      }
    }
    else {
      (this->_Cursor).Value.TypedValue = (param_1->_Cursor).Value.TypedValue;
      (this->_Cursor).Value.bIsSet = true;
    }
  }
  (this->_Cursor).bIsSet = (param_1->_Cursor).bIsSet;
  TDelegate<TOptional<enum_EMouseCursor::Type>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->_Cursor).Getter,&(param_1->_Cursor).Getter);
  (this->_Visibility).Value.Value.Value = (param_1->_Visibility).Value.Value.Value;
  (this->_Visibility).bIsSet = (param_1->_Visibility).bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->_Visibility).Getter,&(param_1->_Visibility).Getter);
  (this->_IsEnabled).Value = (param_1->_IsEnabled).Value;
  (this->_IsEnabled).bIsSet = (param_1->_IsEnabled).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->_IsEnabled).Getter,&(param_1->_IsEnabled).Getter);
  this->_ForceVolatile = param_1->_ForceVolatile;
  this->_EnabledAttributesUpdate = param_1->_EnabledAttributesUpdate;
  this->_Clipping = param_1->_Clipping;
  this->_PixelSnappingMethod = param_1->_PixelSnappingMethod;
  this->_FlowDirectionPreference = param_1->_FlowDirectionPreference;
  this->_RenderOpacity = param_1->_RenderOpacity;
  if (&param_1->_RenderTransform != &this->_RenderTransform) {
    if ((param_1->_RenderTransform).Value.bIsSet == false) {
      if ((this->_RenderTransform).Value.bIsSet != false) {
        (this->_RenderTransform).Value.bIsSet = false;
      }
    }
    else {
      afVar8 = (param_1->_RenderTransform).Value.TypedValue.M.M[1];
      (this->_RenderTransform).Value.TypedValue.M.M[0] =
           (param_1->_RenderTransform).Value.TypedValue.M.M[0];
      (this->_RenderTransform).Value.TypedValue.M.M[1] = afVar8;
      (this->_RenderTransform).Value.TypedValue.Trans.field0_0x0 =
           (param_1->_RenderTransform).Value.TypedValue.Trans.field0_0x0;
      (this->_RenderTransform).Value.bIsSet = true;
    }
  }
  (this->_RenderTransform).bIsSet = (param_1->_RenderTransform).bIsSet;
  TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->_RenderTransform).Getter,&(param_1->_RenderTransform).Getter);
  dVar9 = (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.Y;
  (this->_RenderTransformPivot).Value.field0_0x0._s_0.X =
       (param_1->_RenderTransformPivot).Value.field0_0x0._s_0.X;
  (this->_RenderTransformPivot).Value.field0_0x0._s_0.Y = dVar9;
  (this->_RenderTransformPivot).bIsSet = (param_1->_RenderTransformPivot).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->_RenderTransformPivot).Getter,&(param_1->_RenderTransformPivot).Getter);
  this_00 = &this->_AccessibleParams;
  this->_Tag = param_1->_Tag;
  if (&param_1->_AccessibleParams != this_00) {
    if ((param_1->_AccessibleParams).bIsSet == false) {
      if ((this->_AccessibleParams).bIsSet != false) {
        FAccessibleWidgetData::~FAccessibleWidgetData(&this_00->TypedValue);
        (this->_AccessibleParams).bIsSet = false;
      }
    }
    else {
      if ((this->_AccessibleParams).bIsSet != false) {
        FAccessibleWidgetData::~FAccessibleWidgetData(&this_00->TypedValue);
      }
      FAccessibleWidgetData::FAccessibleWidgetData
                (&this_00->TypedValue,&(param_1->_AccessibleParams).TypedValue);
      (this->_AccessibleParams).bIsSet = true;
    }
  }
  TAttribute<FText>::operator=(&this->_AccessibleText,&param_1->_AccessibleText);
  pTVar2 = &this->MetaData;
  if (pTVar2 != &param_1->MetaData) {
    DestructItems<TSharedRef<ISlateMetaData,1>,int>
              ((TSharedRef<ISlateMetaData,1> *)(pTVar2->AllocatorInstance).Data,
               (this->MetaData).ArrayNum);
    iVar3 = (param_1->MetaData).ArrayNum;
    piVar1 = &(this->MetaData).ArrayMax;
    pTVar6 = (TSharedRef<ISlateMetaData,1> *)(param_1->MetaData).AllocatorInstance.Data;
    (this->MetaData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<TSharedRef<ISlateMetaData,1>,TSharedRef<ISlateMetaData,1>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar6,iVar3);
    }
  }
  return this;
}

