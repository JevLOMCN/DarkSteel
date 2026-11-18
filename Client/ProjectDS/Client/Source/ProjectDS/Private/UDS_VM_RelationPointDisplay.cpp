// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// SetEventMouseEnter_WrapperImpl @ 14b6d3640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RelationPointDisplay::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this;
  FGeometry *pFVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_188;
  float fStack_184;
  undefined1 auStack_178 [8];
  FDelegateAllocation FStack_170;
  FDeprecateSlateVector2D FStack_160;
  void *apvStack_158 [2];
  code *pcStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector2<double>_u_0 TStack_138;
  FDestructionSentinel FStack_128;
  FDestructionSentinel FStack_110;
  FDelegateAllocation *pFStack_f8;
  TVector2<double>_u_0 TStack_f0;
  TVector2<double> TStack_e0;
  FDeprecateSlateVector2D FStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> aTStack_98 [4];
  
  this = UDS_WindowManager::GetInst();
  if ((this != (UDS_WindowManager *)0x0) && (*(UWidget **)param_2 != (UWidget *)0x0)) {
    pFVar3 = UWidget::GetCachedGeometry(*(UWidget **)param_2);
    fStack_b0 = (pFVar3->AccumulatedRenderTransform).M.M[0][1];
    fStack_ac = (pFVar3->AccumulatedRenderTransform).M.M[1][0];
    fStack_a8 = (pFVar3->AccumulatedRenderTransform).M.M[1][1];
    fStack_a4 = (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    uStack_a0 = *(undefined8 *)
                 ((longlong)&(pFVar3->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    fVar12 = (float)uStack_a0;
    FStack_160 = pFVar3->Size;
    uStack_c8 = *(undefined8 *)&pFVar3->Scale;
    fStack_c0 = (pFVar3->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_bc = (pFVar3->Position).field0_0x0._s_0.X;
    fStack_b8 = (pFVar3->Position).field0_0x0._s_0.Y;
    fStack_b4 = (pFVar3->AccumulatedRenderTransform).M.M[0][0];
    fStack_188 = FStack_160._0_4_;
    fStack_184 = FStack_160._4_4_;
    fVar10 = fStack_188 * __real_3f000000 * fStack_b0;
    fVar8 = fStack_184 * __real_3f000000;
    fVar9 = fStack_184 * __real_3f000000 * fStack_ac + fStack_188 * __real_3f000000 * fStack_b4 +
            fStack_a4;
    fVar11 = fStack_184 * __real_3f000000 * fStack_a8;
    fStack_188 = fStack_188 * __real_3f000000;
    FStack_d0 = FStack_160;
    pUVar4 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (pUVar4 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9003615061582806985>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_RelationPointDisplay.cpp"
                         ,0x37,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      TStack_138._s_0.X = (double)fVar9;
      TStack_138._s_0.Y = (double)(fVar11 + fVar10 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar4,(TVector2<double> *)&TStack_138._s_0,&TStack_e0,
                 (TVector2<double> *)&TStack_f0._s_0);
      pcStack_148 = OnOpenPointSlotTooltipCallback;
      uStack_13c = TStack_e0.field0_0x0._12_4_;
      uStack_140 = 0;
      auStack_178 = (undefined1  [8])0x0;
      FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_178,
                 (FWriteAccessScope *)&FStack_110);
      pFStack_f8 = &FStack_170;
      puVar5 = UE::Core::Private::DelegateAllocate(0x48,&FStack_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar5[1] = TStack_f0._s_0.X;
        puVar5[2] = TStack_f0._s_0.Y;
        puVar5[3] = (double)fStack_188;
        puVar5[4] = (double)fVar8;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RelationPointDisplay____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar5[6] = 0;
        apvStack_158[0] = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 6),(FObjectPtr)apvStack_158);
        puVar5[7] = pcStack_148;
        puVar5[8] = CONCAT44(uStack_13c,uStack_140);
      }
      if (FStack_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_110.Accessor,&FStack_110);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (aTStack_98,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_178);
      UDS_WindowManager::OpenWindow(this,PointSlotTooltip,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_178,
                 (FWriteAccessScope *)&FStack_128);
      if ((FStack_170.DelegateSize != 0) &&
         (FStack_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_170.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_170,0,0,0x10);
        FStack_170.DelegateSize = 0;
      }
      if (FStack_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_128.Accessor,&FStack_128);
      }
      if (FStack_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_178);
    }
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b6d3650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_RelationPointDisplay::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,PointSlotTooltip,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b6d3660

UClass * __cdecl UDS_VM_RelationPointDisplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RelationPointDisplay",
               &Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_RelationPointDisplay,0x400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RelationPointDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_RelationPointDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton;
}

// UDS_VM_RelationPointDisplay @ 14b6d8960

UDS_VM_RelationPointDisplay * __thiscall
UDS_VM_RelationPointDisplay::UDS_VM_RelationPointDisplay
          (UDS_VM_RelationPointDisplay *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->NpcName).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RelationPointDisplay__6B_;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x4e205;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_PointText).StringTableType = StringUi;
  (this->FixedText_PointText).StringTableID = 0x4e206;
  (this->FixedText_PointText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_PointText).StringEnumTableNameID.Number = 0;
  (this->FixedText_PointText).DateTime.Ticks = 0;
  (this->FixedText_PointText).TimeSpan.Ticks = 0;
  (this->FixedText_PointText).TimeExpressionType = None;
  (this->FixedText_PointText).IsExpression = false;
  (this->FixedText_PointText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_PointText).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_PointText).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_PointText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_PointText).FormatArgs.ArrayNum = 0;
  (this->FixedText_PointText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x4e207;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  this->NpcTID = 0;
  return this;
}

// UDS_VM_RelationPointDisplay @ 14b6d8b40

UDS_VM_RelationPointDisplay * __thiscall
UDS_VM_RelationPointDisplay::UDS_VM_RelationPointDisplay
          (UDS_VM_RelationPointDisplay *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->NpcName).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RelationPointDisplay__6B_;
  (this->NpcName).StringTableID = 0;
  (this->NpcName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NpcName).StringEnumTableNameID.Number = 0;
  (this->NpcName).DateTime.Ticks = 0;
  (this->NpcName).TimeSpan.Ticks = 0;
  (this->NpcName).TimeExpressionType = None;
  (this->NpcName).IsExpression = false;
  (this->NpcName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).UniqueString.Data.ArrayNum = 0;
  (this->NpcName).UniqueString.Data.ArrayMax = 0;
  (this->NpcName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NpcName).FormatArgs.ArrayNum = 0;
  (this->NpcName).FormatArgs.ArrayMax = 0;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x4e205;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_PointText).StringTableType = StringUi;
  (this->FixedText_PointText).StringTableID = 0x4e206;
  (this->FixedText_PointText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_PointText).StringEnumTableNameID.Number = 0;
  (this->FixedText_PointText).DateTime.Ticks = 0;
  (this->FixedText_PointText).TimeSpan.Ticks = 0;
  (this->FixedText_PointText).TimeExpressionType = None;
  (this->FixedText_PointText).IsExpression = false;
  (this->FixedText_PointText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_PointText).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_PointText).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_PointText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_PointText).FormatArgs.ArrayNum = 0;
  (this->FixedText_PointText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x4e207;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  this->NpcTID = 0;
  return this;
}

// ~UDS_VM_RelationPointDisplay @ 14b6da5d0

void __thiscall
UDS_VM_RelationPointDisplay::~UDS_VM_RelationPointDisplay(UDS_VM_RelationPointDisplay *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RelationPointDisplay__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Desc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Desc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_PointText).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_PointText).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_PointText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_PointText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NpcName).FormatArgs.AllocatorInstance.Data,
             (this->NpcName).FormatArgs.ArrayNum);
  pFVar1 = (this->NpcName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NpcName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dcd00

IClassDescriptor * __thiscall
UDS_VM_RelationPointDisplay::GetFieldNotificationDescriptor(UDS_VM_RelationPointDisplay *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RelationPointDisplay::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd800

UClass * __cdecl UDS_VM_RelationPointDisplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RelationPointDisplay",
               &Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton,
               StaticRegisterNativesUDS_VM_RelationPointDisplay,0x400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_RelationPointDisplay>,
               InternalVTableHelperCtorCaller<UDS_VM_RelationPointDisplay>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RelationPointDisplay.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RelationPointDisplay @ 14b6ddf10

void __cdecl UDS_VM_RelationPointDisplay::StaticRegisterNativesUDS_VM_RelationPointDisplay(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_RelationPointDisplay_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenPointSlotTooltipCallback @ 14b6df430

void __cdecl
UDS_VM_RelationPointDisplay::execOnOpenPointSlotTooltipCallback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18._s_0.X = local_38;
  local_18._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenPointSlotTooltipCallback
            ((UDS_VM_RelationPointDisplay *)param_1,local_res10,(TVector2<double> *)&local_18._s_0,
             (TVector2<double> *)&local_28._s_0);
  return;
}

// OnEventMouseEnter @ 14be2f430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RelationPointDisplay::OnEventMouseEnter
          (UDS_VM_RelationPointDisplay *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  FGeometry *pFVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_188;
  float fStack_184;
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  FDeprecateSlateVector2D local_160;
  UDS_VM_RelationPointDisplay *local_158 [2];
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector2<double>_u_0 local_138;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  TVector2<double>_u_0 local_f0;
  TVector2<double> local_e0;
  FDeprecateSlateVector2D local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_98 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (param_1->TargetWidget != (UDS_UserWidget *)0x0)) {
    pFVar3 = UWidget::GetCachedGeometry((UWidget *)param_1->TargetWidget);
    local_b0 = (pFVar3->AccumulatedRenderTransform).M.M[0][1];
    fStack_ac = (pFVar3->AccumulatedRenderTransform).M.M[1][0];
    fStack_a8 = (pFVar3->AccumulatedRenderTransform).M.M[1][1];
    fStack_a4 = (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_a0 = *(undefined8 *)((longlong)&(pFVar3->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
    ;
    fVar12 = (float)local_a0;
    local_160 = pFVar3->Size;
    uStack_c8 = *(undefined8 *)&pFVar3->Scale;
    local_c0 = (pFVar3->AbsolutePosition).field0_0x0._s_0.Y;
    fStack_bc = (pFVar3->Position).field0_0x0._s_0.X;
    fStack_b8 = (pFVar3->Position).field0_0x0._s_0.Y;
    fStack_b4 = (pFVar3->AccumulatedRenderTransform).M.M[0][0];
    local_188 = local_160._0_4_;
    fStack_184 = local_160._4_4_;
    fVar10 = local_188 * __real_3f000000 * local_b0;
    fVar8 = fStack_184 * __real_3f000000;
    fVar9 = fStack_184 * __real_3f000000 * fStack_ac + local_188 * __real_3f000000 * fStack_b4 +
            fStack_a4;
    fVar11 = fStack_184 * __real_3f000000 * fStack_a8;
    local_188 = local_188 * __real_3f000000;
    local_d0 = local_160;
    pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
    if (pUVar4 == (UObject *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9003615061582806985>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_RelationPointDisplay.cpp"
                         ,0x37,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      local_138._s_0.X = (double)fVar9;
      local_138._s_0.Y = (double)(fVar11 + fVar10 + fVar12);
      USlateBlueprintLibrary::AbsoluteToViewport
                (pUVar4,(TVector2<double> *)&local_138._s_0,&local_e0,
                 (TVector2<double> *)&local_f0._s_0);
      local_148 = OnOpenPointSlotTooltipCallback;
      uStack_13c = local_e0.field0_0x0._12_4_;
      uStack_140 = 0;
      local_178 = (undefined1  [8])0x0;
      local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_110);
      local_f8 = &local_170;
      puVar5 = UE::Core::Private::DelegateAllocate(0x48,&local_170);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U345___6B_
        ;
        puVar5[1] = local_f0._s_0.X;
        puVar5[2] = local_f0._s_0.Y;
        puVar5[3] = (double)local_188;
        puVar5[4] = (double)fVar8;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[5] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_RelationPointDisplay____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TVector2_N_Math_UE__U456___6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[6] = 0;
        local_158[0] = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 6),(FObjectPtr)local_158);
        puVar5[7] = local_148;
        puVar5[8] = CONCAT44(uStack_13c,uStack_140);
      }
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
      pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         (local_98,(TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    *)local_178);
      UDS_WindowManager::OpenWindow(this_00,PointSlotTooltip,pTVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
                 (FWriteAccessScope *)&local_128);
      if ((local_170.DelegateSize != 0) &&
         (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_170.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_170,0,0,0x10);
        local_170.DelegateSize = 0;
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      if (local_170.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_170.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
    }
  }
  return;
}

// OnEventMouseLeave @ 14be2fff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RelationPointDisplay::OnEventMouseLeave
          (UDS_VM_RelationPointDisplay *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PointSlotTooltip,local_res20,local_res18);
  }
  return;
}

// OnOpenPointSlotTooltipCallback @ 14be32450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_RelationPointDisplay::OnOpenPointSlotTooltipCallback
          (UDS_VM_RelationPointDisplay *this,UDS_UserWidget *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_RelationPoint *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FMargin *pFVar5;
  undefined1 auStackY_1f8 [32];
  FWeakObjectPtr local_1c8;
  UDS_UserWidget *local_1c0;
  TSharedPtr<FDS_ViewModelContext_RelationPoint,1> local_1b8;
  TVector2<double>_u_0 local_1a8;
  FMargin local_198;
  TVector2<double>_u_0 local_188;
  TVector2<double> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  FMargin local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_RelationPointDisplay::OnOpenPointSlotTooltipCallback",0x3b,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x52,L"InContentWidget is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_1a8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    pFVar5 = UDS_UserWidget::GetWindowFrameSlotMargin(param_1,&local_158);
    local_188._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_188._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_198.Left = pFVar5->Left;
    local_198.Top = pFVar5->Top;
    local_198.Right = pFVar5->Right;
    local_198.Bottom = pFVar5->Bottom;
    DS_Util::TransformTooltipPosition
              (&local_178,(TVector2<double> *)&local_188._s_0,&local_198,
               (TVector2<double> *)&local_1a8._s_0,None);
    UDS_UserWidget::OnSetWindowPosition(param_1,&local_178);
    MakeContext<FDS_ViewModelContext_RelationPoint>(&local_1b8);
    pFVar2 = local_1b8.Object;
    if (local_1b8.Object == (FDS_ViewModelContext_RelationPoint *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x1ca;
    pFVar2->RelationPoint = this->RelationPoint;
    local_168.Object = (FDS_ViewModelContext *)local_1b8.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_1b8.SharedReferenceCount.ReferenceController;
    pFVar2->NpcTID = this->NpcTID;
    if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1c0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1c0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1c8,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14be3e020

void __thiscall
UDS_VM_RelationPointDisplay::OnSetViewModel
          (UDS_VM_RelationPointDisplay *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  bool bVar4;
  FDS_NpcBaseTableRow *this_00;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_RelationPoint,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_RelationPoint>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_RelationPoint *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    UDS_ViewModelBase::SetVisibility
              ((UDS_ViewModelBase *)this,(local_28.Object)->IsHideDisplay == true);
    iVar1 = (local_28.Object)->NpcTID;
    this->NpcTID = iVar1;
    this_00 = FDS_NpcBaseTableRow::GetRef((longlong)iVar1,true);
    bVar4 = FDS_NpcBaseTableRow::IsValid(this_00);
    if (bVar4) {
      FDS_Text::SetTextFromStringID(&this->NpcName,&this_00->ID_NameSid);
      local_40 = FFieldNotificationClassDescriptor::NpcName.BitNumber;
      local_48 = FFieldNotificationClassDescriptor::NpcName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    iVar1 = FFieldNotificationClassDescriptor::RelationPoint.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::RelationPoint.FieldName;
    if (this->RelationPoint != (local_28.Object)->RelationPoint) {
      this->RelationPoint = (local_28.Object)->RelationPoint;
      local_30 = iVar1;
      local_38 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

