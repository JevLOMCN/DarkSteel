// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 37

// <lambda_1> @ 142a16c00

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_1> * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::<lambda_1>
          (void *this,FColumn *param_1,TWeakPtr<SBorder,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(FColumn **)this = param_1;
  *(SBorder **)((longlong)this + 8) = param_2->Object;
  pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// <lambda_2> @ 142a16c30

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_2> * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::<lambda_2>
          (void *this,FColumn *param_1,TWeakPtr<SBorder,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(FColumn **)this = param_1;
  *(SBorder **)((longlong)this + 8) = param_2->Object;
  pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// <lambda_3> @ 142a16c60

/* WARNING: Enum "Type": Some values do not have unique names */

<lambda_3> * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::<lambda_3>
          (void *this,FColumn *param_1,TWeakPtr<SBorder,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(FColumn **)this = param_1;
  *(SBorder **)((longlong)this + 8) = param_2->Object;
  pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x10) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~<lambda_1> @ 142a18670

void __thiscall `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142a18690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~<lambda_2> @ 142a186a0

void __thiscall `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::~<lambda_2>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142a186c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~<lambda_3> @ 142a186d0

void __thiscall `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::~<lambda_3>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142a186f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 142a19320

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a19360;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar1 = *(SWidget **)((longlong)this + 8);
    if (pSVar1 != (SWidget *)0x0) {
      FReply::FReply(&local_c8,true);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_d8.Object = pSVar1;
      local_d8.SharedReferenceCount.ReferenceController = pTVar5;
      pFVar4 = FReply::CaptureMouse(&local_c8,&local_d8);
      FReply::FReply(__return_storage_ptr__,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FReply::~FReply(&local_c8);
      goto LAB_142a1936a;
    }
  }
LAB_142a19360:
  FReply::FReply(__return_storage_ptr__,false);
LAB_142a1936a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// operator() @ 142a193f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::operator()
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FReply local_c8;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a19423;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    if ((*(SWidget **)((longlong)this + 8) != (SWidget *)0x0) &&
       (bVar6 = SWidget::HasMouseCapture(*(SWidget **)((longlong)this + 8)), bVar6)) {
      FReply::FReply(&local_c8,true);
      FVar3.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_c8.MouseCaptor.Object = (SWidget *)0x0;
      local_c8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar3.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
        }
      }
      local_c8.bUseHighPrecisionMouse = 0;
      local_c8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_c8);
      FReply::~FReply(&local_c8);
      goto LAB_142a1942d;
    }
  }
LAB_142a19423:
  FReply::FReply(__return_storage_ptr__,false);
LAB_142a1942d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// operator() @ 142a194e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::operator()
          (void *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  float *pfVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  float fVar6;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142a19520;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    if ((*(SWidget **)((longlong)this + 8) != (SWidget *)0x0) &&
       (bVar5 = SWidget::HasMouseCapture(*(SWidget **)((longlong)this + 8)), bVar5)) {
      pfVar3 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x98));
      fVar6 = *(float *)&param_2->CursorDelta + *pfVar3;
      if (fVar6 <= __real_41a00000) {
        fVar6 = __real_41a00000;
      }
      SHeaderRow::FColumn::SetWidth(*(FColumn **)this,fVar6);
      bVar5 = true;
      goto LAB_142a19522;
    }
  }
LAB_142a19520:
  bVar5 = false;
LAB_142a19522:
  FReply::FReply(__return_storage_ptr__,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// AddColumn @ 142a1aac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::AddColumn(SHeaderRow *this,FColumn *param_1)

{
  InsertColumn(this,param_1,(this->Columns).Array.ArrayNum);
  return;
}

// AddColumn @ 142a1aae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::AddColumn(SHeaderRow *this,FArguments *param_1)

{
  FColumn *this_00;
  FColumn *pFVar1;
  
  this_00 = ::operator_new(0x260);
  pFVar1 = (FColumn *)0x0;
  if (this_00 != (FColumn *)0x0) {
    pFVar1 = FColumn::FColumn(this_00,param_1);
  }
  InsertColumn(this,pFVar1,(this->Columns).Array.ArrayNum);
  return;
}

// CanToggleAllColumns @ 142a1b9e0

bool __thiscall SHeaderRow::CanToggleAllColumns(SHeaderRow *this)

{
  return true;
}

// ClearColumns @ 142a1ba80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::ClearColumns(SHeaderRow *this)

{
  int *piVar1;
  int iVar2;
  FColumn *this_00;
  TSharedRef<SWidget,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  TSharedRef<SHeaderRow,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  pFVar4 = (this->Columns).Array.AllocatorInstance.Data;
  iVar2 = (this->Columns).Array.ArrayNum;
  for (iVar5 = iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
    this_00 = *(FColumn **)pFVar4;
    if (this_00 != (FColumn *)0x0) {
      FColumn::~FColumn(this_00);
      ::operator_delete(this_00,0x260);
    }
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->Columns).Array.ArrayMax;
  (this->Columns).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->Columns,0,piVar1);
  }
  if (0 < iVar2) {
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    local_38.Object = (SHeaderRow *)pTVar3->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
    Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->ColumnsChanged,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  RegenerateWidgets(this);
  return;
}

// Construct @ 142a1cd70

void __thiscall SHeaderRow::Construct(SHeaderRow *this,FArguments *param_1)

{
  int *piVar1;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong *plVar5;
  FHeaderRowStyle *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FArguments *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [16];
  longlong *local_518;
  undefined1 local_510 [8];
  ForAnyElementType local_508;
  int local_500;
  uchar local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f0 [8];
  ForAnyElementType FStack_4e8;
  ulonglong local_4e0;
  FSlateBrush *local_4d8;
  undefined1 local_4d0;
  undefined1 local_4c8 [8];
  void *pvStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined1 local_49c;
  undefined1 local_498 [8];
  void *pvStack_490;
  undefined8 local_488;
  FDestructionSentinel local_480;
  FDestructionSentinel local_468;
  FReadAccessScope local_450;
  FReadAccessScope local_438;
  FArguments local_420;
  
  if (param_1->_Style == (FHeaderRowStyle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x224,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  (this->ScrollBarThickness).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_4f8 = (uchar)EVisibility::Collapsed.Value.Value;
  (this->ScrollBarVisibility).Value.Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  local_4f7 = 1;
  local_4f0 = (undefined1  [8])0x0;
  FStack_4e8.Data = (FScriptContainerElement *)0x0;
  local_4e0 = 0;
  (this->ScrollBarVisibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollBarVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4f0,
             (FWriteAccessScope *)&local_480);
  if (((int)local_4e0 != 0) && (FStack_4e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4e8,0,0,0x10);
    local_4e0 = local_4e0 & 0xffffffff00000000;
  }
  if (local_480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
  }
  if (FStack_4e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f0);
  this->Style = param_1->_Style;
  if (&param_1->_OnGetMaxRowSizeForColumn != &this->OnGetMaxRowSizeForColumn) {
    local_510 = (undefined1  [8])0x0;
    local_508.Data = (FScriptContainerElement *)0x0;
    local_500 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnGetMaxRowSizeForColumn,&local_438);
    if ((*(int *)&(param_1->_OnGetMaxRowSizeForColumn).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnGetMaxRowSizeForColumn).field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_510);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_438);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMaxRowSizeForColumn,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_510,
               (FWriteAccessScope *)&local_468);
    if ((local_500 != 0) && (local_508.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_508.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_508,0,0,0x10);
      local_500 = 0;
    }
    if (local_468.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
    }
    if (local_508.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_510);
  }
  this->ResizeMode = param_1->_ResizeMode;
  this->SplitterHandleSize = this->Style->SplitterHandleSize;
  if ((param_1->_SplitterHandleSize).bIsSet != false) {
    this->SplitterHandleSize = (param_1->_SplitterHandleSize).TypedValue;
  }
  this->bCanSelectGeneratedColumn = param_1->_CanSelectGeneratedColumn;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnHiddenColumnsListChanged,&param_1->_OnHiddenColumnsListChanged);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnColumnsChanged,
             &local_450);
  if ((*(int *)&(param_1->_OnColumnsChanged).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(param_1->_OnColumnsChanged).field_0x8, plVar5 != (longlong *)0x0)) {
    cVar10 = (**(code **)(*plVar5 + 0x38))();
    if (cVar10 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_450);
      TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
      ::Add((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->ColumnsChanged,
            (TDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy> *)
            (local_res8 + 8));
      goto LAB_142a1d014;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_450);
LAB_142a1d014:
  pFVar12 = SBorder::FArguments::FArguments(&local_420);
  pFVar12 = SBorder::FArguments::Padding(pFVar12,0.0);
  local_4d0 = 1;
  local_4d8 = &this->Style->BackgroundBrush;
  local_4b8 = 0;
  local_4c8 = (undefined1  [8])0x0;
  pvStack_4c0 = (void *)0x0;
  (pFVar12->_BorderImage).Value = local_4d8;
  (pFVar12->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
  if (pvStack_4c0 != (void *)0x0) {
    FMemory::Free(pvStack_4c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c8);
  pFVar6 = this->Style;
  local_4b0 = *(undefined8 *)&(pFVar6->ForegroundColor).SpecifiedColor.field0_0x0;
  uStack_4a8 = *(undefined8 *)((longlong)&(pFVar6->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  local_4a0._0_1_ = (pFVar6->ForegroundColor).ColorUseRule;
  local_4a0._1_1_ = (pFVar6->ForegroundColor).ColorTableId;
  local_4a0._2_2_ = *(undefined2 *)&(pFVar6->ForegroundColor).field_0x12;
  local_49c = 1;
  local_488 = 0;
  local_498 = (undefined1  [8])0x0;
  pvStack_490 = (void *)0x0;
  *(undefined8 *)&(pFVar12->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_4b0;
  *(undefined8 *)((longlong)&(pFVar12->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_4a8;
  (pFVar12->_ForegroundColor).Value.ColorUseRule = (undefined1)local_4a0;
  (pFVar12->_ForegroundColor).Value.ColorTableId = local_4a0._1_1_;
  *(undefined2 *)&(pFVar12->_ForegroundColor).Value.field_0x12 = local_4a0._2_2_;
  (pFVar12->_ForegroundColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
  if (pvStack_490 != (void *)0x0) {
    FMemory::Free(pvStack_490);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_498);
  SBorder::Construct((SBorder *)this,pFVar12);
  SBorder::FArguments::~FArguments(&local_420);
  pFVar14 = (param_1->Slots).AllocatorInstance.Data;
  iVar4 = (param_1->Slots).ArrayNum;
  pFVar3 = pFVar14 + (longlong)iVar4 * 8;
LAB_142a1d135:
  do {
    if ((param_1->Slots).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SHeaderRow::FColumn_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 == pFVar3) {
      RegenerateWidgets(this);
      return;
    }
    plVar5 = *(longlong **)pFVar14;
    pTVar2 = &this->Columns;
    pFVar7 = (pTVar2->Array).AllocatorInstance.Data;
    local_518 = plVar5;
    if ((pFVar7 <= (FScriptContainerElement *)&local_518) &&
       ((FScriptContainerElement *)&local_518 <
        pFVar7 + (longlong)(this->Columns).Array.ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = (this->Columns).Array.ArrayNum;
    piVar1 = &(this->Columns).Array.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)pTVar2,piVar1);
    }
    (this->Columns).Array.ArrayNum = iVar11 + 1;
    *(longlong **)((pTVar2->Array).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_518;
    pFVar13 = (param_1->_HiddenColumnsList).AllocatorInstance.Data;
    pFVar7 = pFVar13 + (longlong)(param_1->_HiddenColumnsList).ArrayNum * 8;
    if (pFVar13 != pFVar7) {
      do {
        if (*(longlong *)pFVar13 == *plVar5) {
          *(undefined1 *)(plVar5 + 0x4b) = 0;
          pFVar14 = pFVar14 + 8;
          goto LAB_142a1d135;
        }
        pFVar13 = pFVar13 + 8;
      } while (pFVar13 != pFVar7);
    }
    pFVar14 = pFVar14 + 8;
    *(undefined1 *)(plVar5 + 0x4b) = 1;
  } while( true );
}

// GetColumns @ 142a28d70

TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> * __thiscall
SHeaderRow::GetColumns(SHeaderRow *this)

{
  return &this->Columns;
}

// GetGeneratedColumnCheckedState @ 142a296a0

ECheckBoxState __thiscall SHeaderRow::GetGeneratedColumnCheckedState(SHeaderRow *this,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ECheckBoxState EVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HeaderWidgets).ArrayNum;
  pFVar6 = (this->HeaderWidgets).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HeaderWidgets).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<STableColumnHeader,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if (*(FName *)(*(longlong *)pFVar6 + 0x398) == param_1) {
      return Checked;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return Unchecked;
}

// GetHiddenColumnIds @ 142a29870

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
SHeaderRow::GetHiddenColumnIds
          (SHeaderRow *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar4 = (this->Columns).Array.ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar4,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar12 = (this->Columns).Array.AllocatorInstance.Data;
  piVar2 = &(this->Columns).Array.ArrayNum;
  iVar5 = *piVar2;
  pFVar3 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if (*piVar2 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar3) break;
    pFVar6 = *(FScriptContainerElement **)pFVar12;
    if (pFVar6[600] == (FScriptContainerElement)0x0) {
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar7 <= pFVar6) && (pFVar6 < pFVar7 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar11;
        }
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar6;
    }
    pFVar12 = pFVar12 + 8;
  }
  return __return_storage_ptr__;
}

// GetRowSizeForSlotIndex @ 142a2aae0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SHeaderRow::GetRowSizeForSlotIndex
          (SHeaderRow *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  SComboButton *this_00;
  SOverlay *this_01;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TVector2<double> *pTVar10;
  FDeprecateSlateVector2D FVar11;
  STableColumnHeader *pSVar12;
  TVector2<float>_u_0 TVar13;
  double *pdVar14;
  EVisibility EVar15;
  TSharedPtr<STableColumnHeader,1> *this_02;
  longlong *plVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float local_res8;
  float fStackX_c;
  double local_98;
  double local_90;
  double local_88 [2];
  FReadAccessScope local_78;
  FReadAccessScope local_60 [2];
  
  if ((-1 < param_1) && (param_1 < (this->Columns).Array.ArrayNum)) {
    plVar16 = (longlong *)0x0;
    uVar9 = 0;
    if (param_1 < (this->HeaderWidgets).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    this_02 = (TSharedPtr<STableColumnHeader,1> *)
              ((this->HeaderWidgets).AllocatorInstance.Data + (longlong)param_1 * 0x10);
    uVar9 = 0;
    if (param_1 < (this->Columns).Array.ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    lVar3 = *(longlong *)((this->Columns).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((this_02->Object == (STableColumnHeader *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    FVar11 = SWidget::GetDesiredSize((SWidget *)this_02->Object);
    fVar1 = *(float *)FVar11;
    fVar2 = *(float *)((longlong)FVar11 + 4);
    dVar6 = (double)fVar1;
    local_90 = (double)fVar2;
    local_98 = dVar6;
    if (*(SWidget **)(lVar3 + 0xf0) != SNullWidget::NullWidget.Object) {
      if ((this_02->Object == (STableColumnHeader *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TVector2<double> *)(*pcVar5)();
        return pTVar10;
      }
      pSVar12 = this_02->Object;
      if (((pSVar12->ComboVisibility != OnHover) ||
          ((this_00 = (pSVar12->ComboButton).Object,
           EVar15.Value.Value = EVisibility::Collapsed.Value.Value, this_00 != (SComboButton *)0x0
           && ((*(char *)((longlong)&pSVar12->_padding_ + 3) != '\0' ||
               (bVar7 = SMenuAnchor::IsOpen((SMenuAnchor *)this_00), EVar15 = EVisibility::Collapsed
               , bVar7)))))) &&
         (EVar15.Value.Value = EVisibility::Visible.Value.Value, pSVar12->ComboVisibility == Never))
      {
        EVar15.Value.Value = EVisibility::Collapsed.Value.Value;
      }
      if (EVar15.Value.Value != EVisibility::Visible.Value.Value) {
        pSVar12 = TSharedPtr<STableColumnHeader,1>::operator->(this_02);
        this_01 = (pSVar12->MenuOverlay).Object;
        TVar13 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        if (this_01 != (SOverlay *)0x0) {
          FVar11 = SWidget::GetDesiredSize((SWidget *)this_01);
          TVar13 = *(TVector2<float>_u_0 *)FVar11;
        }
        local_res8 = TVar13._s_0.X;
        fStackX_c = TVar13._s_0.Y;
        dVar6 = (double)(fVar1 + local_res8);
        local_90 = (double)(fVar2 + fStackX_c);
        local_98 = dVar6;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnGetMaxRowSizeForColumn,&local_78);
    if (((*(int *)&(this->OnGetMaxRowSizeForColumn).field_0x10 != 0) &&
        (plVar4 = *(longlong **)&(this->OnGetMaxRowSizeForColumn).field_0x8,
        plVar4 != (longlong *)0x0)) && (cVar8 = (**(code **)(*plVar4 + 0x38))(), cVar8 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnGetMaxRowSizeForColumn,local_60);
      if (*(int *)&(this->OnGetMaxRowSizeForColumn).field_0x10 != 0) {
        plVar16 = *(longlong **)&(this->OnGetMaxRowSizeForColumn).field_0x8;
      }
      (**(code **)(*plVar16 + 0x60))(plVar16,local_88,lVar3,0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_60);
      pdVar14 = &local_98;
      if (dVar6 <= local_88[0]) {
        pdVar14 = local_88;
      }
      uVar17 = *(undefined4 *)pdVar14;
      uVar18 = *(undefined4 *)((longlong)pdVar14 + 4);
      uVar19 = *(undefined4 *)(pdVar14 + 1);
      uVar20 = *(undefined4 *)((longlong)pdVar14 + 0xc);
      goto LAB_142a2ae01;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
  }
  uVar17 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uVar18 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uVar19 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
LAB_142a2ae01:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar17;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar18;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar19;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar20;
  return __return_storage_ptr__;
}

// GetSelectAllColumnsCheckState @ 142a2b040

ECheckBoxState __thiscall SHeaderRow::GetSelectAllColumnsCheckState(SHeaderRow *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  ECheckBoxState EVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar3 = *piVar1;
  bVar4 = false;
  cVar5 = '\0';
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
LAB_142a2b0a0:
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar2) {
      if (bVar4) {
        EVar6 = cVar5 + Checked;
      }
      else {
        EVar6 = Unchecked;
      }
      return EVar6;
    }
    if (*(char *)(*(longlong *)pFVar7 + 0x219) == '\0') {
      if (*(char *)(*(longlong *)pFVar7 + 600) != '\0') {
        pFVar7 = pFVar7 + 8;
        bVar4 = true;
        goto LAB_142a2b0a0;
      }
      cVar5 = '\x01';
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetToggleAllColumnsText @ 142a2b4d0

FText * __thiscall
SHeaderRow::GetToggleAllColumnsText(SHeaderRow *this,FText *__return_storage_ptr__)

{
  ECheckBoxState EVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  EVar1 = GetSelectAllColumnsCheckState(this);
  if (EVar1 == Checked) {
    pwVar4 = L"Select: None";
    pwVar3 = L"DeselectAllColumns";
  }
  else {
    if ((EVar1 & ~Undetermined) != Unchecked) {
      pFVar2 = FText::GetEmpty();
      FText::FText(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
    pwVar4 = L"Select: All";
    pwVar3 = L"SelectAllColumns";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"SHeaderRow",pwVar3,pwVar4);
  return __return_storage_ptr__;
}

// InsertColumn @ 142a2c460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::InsertColumn(SHeaderRow *this,FColumn *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedRef<SWidget,1> *pTVar5;
  uint uVar6;
  FColumn *local_res8;
  TSharedRef<SHeaderRow,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  if (param_1->ColumnId == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewColumn.ColumnId != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->Columns).Array.ArrayNum;
  if (0 < iVar1) {
    uVar6 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar6 < iVar1) {
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
    if (**(longlong **)((this->Columns).Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) ==
        0) {
      param_2 = param_2 + -1;
    }
  }
  local_res8 = param_1;
  TArray<void_*,TSizedDefaultAllocator<32>_>::Insert(&(this->Columns).Array,&local_res8,param_2);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
  local_38.Object = (SHeaderRow *)pTVar5->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->ColumnsChanged,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  RegenerateWidgets(this);
  return;
}

// InsertColumn @ 142a2c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::InsertColumn(SHeaderRow *this,FArguments *param_1,int param_2)

{
  FColumn *this_00;
  FColumn *pFVar1;
  
  this_00 = ::operator_new(0x260);
  pFVar1 = (FColumn *)0x0;
  if (this_00 != (FColumn *)0x0) {
    pFVar1 = FColumn::FColumn(this_00,param_1);
  }
  InsertColumn(this,pFVar1,param_2);
  return;
}

// IsColumnGenerated @ 142a2cc00

bool __thiscall SHeaderRow::IsColumnGenerated(SHeaderRow *this,FName *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->HeaderWidgets).ArrayNum;
  pFVar5 = (this->HeaderWidgets).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->HeaderWidgets).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<STableColumnHeader,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(FName *)(*(longlong *)pFVar5 + 0x398) == *param_1) {
      return true;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return false;
}

// IsColumnVisible @ 142a2ccb0

bool __thiscall SHeaderRow::IsColumnVisible(SHeaderRow *this,FName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    if (**(FName **)pFVar4 == *param_1) {
      return (bool)(char)(*(FName **)pFVar4)[0x4b].ComparisonIndex.Value;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// OnGenerateSelectColumnsSubMenu @ 142a2e3e0

/* WARNING: Removing unreachable block (ram,0x000142a2e53a) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SHeaderRow::OnGenerateSelectColumnsSubMenu(SHeaderRow *this,FMenuBuilder *param_1)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName FVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  TSharedRef<SWidget_const_,1> *pTVar13;
  ulong64 uVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FUIAction *pFVar16;
  FSlateIcon *pFVar17;
  FText *pFVar18;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar19;
  FName FVar20;
  SHeaderRow *pSVar21;
  undefined1 uVar22;
  undefined4 local_res18 [2];
  FName local_res20;
  FDestructionSentinel local_298;
  FDelegateAllocation *local_280;
  TSharedRef<SWidget_const_,1> local_278;
  FName local_268;
  FName local_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  ForAnyElementType FStack_240;
  ulonglong local_238;
  undefined1 local_230 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  ForAnyElementType FStack_210;
  ulonglong local_208;
  FDestructionSentinel local_200;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [8];
  ForAnyElementType FStack_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [8];
  FDelegateAllocation FStack_198;
  undefined1 local_188 [16];
  FNameEntryId local_178;
  uint uStack_174;
  TReferenceControllerBase<1> *local_168;
  TReferenceControllerBase<1> *local_160;
  FName local_158;
  FName local_150;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  FDelegateAllocation local_e0;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [48];
  
  bVar5 = false;
  bVar4 = false;
  local_res18[0] = 0;
  local_238 = 0;
  local_250[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_250[1] = false;
  local_248 = (undefined1  [8])0x0;
  FStack_240.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_130);
  local_130[0x10] = false;
  local_108 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_298);
  local_280 = &local_1e0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_1e0);
  pSVar21 = this;
  if (puVar12 != (undefined8 *)0x0) {
    uStack_254 = local_1e0.DelegateAllocator._4_4_;
    local_260 = (FName)GetSelectAllColumnsCheckState;
    uStack_258 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_278);
    pSVar21 = (SHeaderRow *)(pTVar13->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar13->Object;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
    }
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSHeaderRow___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar1;
    puVar12[4] = pSVar21;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    puVar12[5] = local_260;
    puVar12[6] = CONCAT44(uStack_254,uStack_258);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar21);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  local_148 = (undefined1  [8])0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_298);
  local_280 = &local_140;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_140);
  pSVar21 = this;
  if (puVar12 != (undefined8 *)0x0) {
    uStack_254 = local_1e0.DelegateAllocator._4_4_;
    local_260 = (FName)CanToggleAllColumns;
    uStack_258 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_278);
    pSVar21 = (SHeaderRow *)(pTVar13->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar13->Object;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSHeaderRow___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar1;
    puVar12[4] = pSVar21;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar12[5] = local_260;
    puVar12[6] = CONCAT44(uStack_254,uStack_258);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar21);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar21);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  local_1a0 = (undefined1  [8])0x0;
  FStack_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_198.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
             (FWriteAccessScope *)&local_298);
  local_280 = &FStack_198;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&FStack_198);
  pSVar21 = this;
  if (puVar12 != (undefined8 *)0x0) {
    uStack_254 = local_1e0.DelegateAllocator._4_4_;
    local_260 = (FName)ToggleAllColumns;
    uStack_258 = 0;
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_278);
    pSVar21 = (SHeaderRow *)(pTVar15->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar15->Object;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar21->_padding_ + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar12 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSHeaderRow___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar1;
    puVar12[4] = pSVar21;
    if (pSVar21 != (SHeaderRow *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar12[5] = local_260;
    puVar12[6] = CONCAT44(uStack_254,uStack_258);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar21);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar21);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  pFVar16 = FUIAction::FUIAction
                      ((FUIAction *)local_b8,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_148,
                       (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_1e8,RepeatDisabled);
  pFVar17 = FSlateIcon::FSlateIcon((FSlateIcon *)local_188);
  pFVar18 = FText::GetEmpty();
  local_230._0_8_ = (pFVar18->TextData).Reference;
  if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 8))(local_230._0_8_,local_res18);
  }
  local_230._8_4_ = pFVar18->Flags;
  local_278.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_278.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_230[0x10] = true;
  local_278.Object = (SWidget *)GetToggleAllColumnsText;
  local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_210.Data = (FScriptContainerElement *)0x0;
  local_208 = 0;
  pTVar19 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SHeaderRow>
                      ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&local_200,this,
                       (pmf_b145cd94 *)&local_278);
  FText::FText((FText *)local_1d0);
  local_1d0[0x10] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar19);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_200);
  if (local_200.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_200.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_200);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_1d0,
             (TAttribute<FText> *)local_230,pFVar17,pFVar16,local_268,ToggleButton,local_res20,
             (TAttribute<FText> *)local_130,(TAttribute<EVisibility> *)local_250);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
  if (FStack_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b8);
  if ((ITextData *)local_1d0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d0._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_218,(FWriteAccessScope *)&local_200);
  if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_210.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  if (FStack_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_210.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
  if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_200);
  if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  if ((FName)local_130._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_130._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
  if (FStack_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_240.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_248);
  FVar20 = (FName)(this->Columns).Array.AllocatorInstance.Data;
  local_200.Accessor = (FMRSWRecursiveAccessDetector *)&(this->Columns).Array.ArrayNum;
  local_178.Value = *(uint *)local_200.Accessor;
  uVar11 = local_1e0.DelegateAllocator._4_4_;
  local_260 = (FName)((longlong)FVar20 + (longlong)(int)local_178.Value * 8);
  local_200._20_4_ = uStack_174;
  local_200._16_4_ = local_178.Value;
  local_200._0_8_ = FVar20;
  local_188._0_8_ = FVar20;
  local_188._8_8_ = local_200.Accessor;
  while( true ) {
    FVar10 = local_260;
    local_268 = FVar20;
    if (*(int *)local_200.Accessor != local_200._16_4_) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18)
      ;
    }
    if (FVar20 == FVar10) break;
    local_c0 = *(undefined8 **)local_268;
    local_250[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_250[1] = false;
    local_248 = (undefined1  [8])0x0;
    FStack_240.Data = (FScriptContainerElement *)0x0;
    uVar22 = *(char *)((longlong)local_c0 + 0x219) == '\0';
    uVar2 = *local_c0;
    local_238 = 0;
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar22);
    FText::FText((FText *)local_1d0);
    local_1d0[0x10] = false;
    local_1a8 = 0;
    local_158.ComparisonIndex.Value = 0;
    local_158.Number = 0;
    local_1b8 = (undefined1  [8])0x0;
    FStack_1b0.Data = (FScriptContainerElement *)0x0;
    local_150.ComparisonIndex.Value = 0;
    local_150.Number = 0;
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_298);
    local_280 = &local_f8;
    puVar12 = UE::Core::Private::DelegateAllocate(0x38,&local_f8);
    if (puVar12 != (undefined8 *)0x0) {
      local_1a0 = (undefined1  [8])GetGeneratedColumnCheckedState;
      FStack_198.DelegateAllocator =
           (ForElementType<TAlignedBytes<16,16>_>)((ulonglong)(uint)uVar11 << 0x20);
      pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)local_148);
      pSVar1 = pTVar13->Object;
      pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar9 = true;
      bVar4 = true;
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__VFName____6B_
      ;
      puVar12[1] = uVar2;
      local_168 = pTVar3;
      local_d0 = pTVar3;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar14;
      *puVar12 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSHeaderRow___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__VFName____6B_
      ;
      puVar12[3] = pSVar1;
      puVar12[4] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(undefined1 (*) [8])(puVar12 + 5) = local_1a0;
      *(ForElementType<TAlignedBytes<16,16>_> *)(puVar12 + 6) = FStack_198.DelegateAllocator;
      uVar22 = (undefined1)local_res18[0];
    }
    if (bVar8) {
      bVar8 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168)
      ;
    }
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    }
    if (bVar4) {
      bVar4 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_140.DelegateAllocator);
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    local_e8 = (undefined1  [8])0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_298);
    local_280 = &local_e0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar14;
      *puVar12 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SHeaderRow::OnGenerateSelectColumnsSubMenu'::`6'::<lambda_1>_>
                  ::_vftable_;
      *(undefined1 *)(puVar12 + 3) = uVar22;
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    local_188._0_4_ = 0;
    local_188._4_4_ = 0;
    local_188._8_4_ = 0;
    local_188._12_4_ = 0;
    local_178.Value = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_298);
    local_280 = (FDelegateAllocation *)(local_188 + 8);
    puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_188 + 8));
    if (puVar12 != (undefined8 *)0x0) {
      local_278.Object = (SWidget *)ToggleGeneratedColumn;
      local_278.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)uVar11 << 0x20);
      pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget,1> *)local_1e8);
      pSVar1 = pTVar15->Object;
      pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = true;
      bVar7 = true;
      bVar6 = true;
      *puVar12 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFName____6B_
      ;
      puVar12[1] = uVar2;
      local_160 = pTVar3;
      local_c8 = pTVar3;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar14;
      *puVar12 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSHeaderRow___00__A6AXXZUFDefaultDelegateUserPolicy__VFName____6B_
      ;
      puVar12[3] = pSVar1;
      puVar12[4] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar12[5] = local_278.Object;
      puVar12[6] = local_278.SharedReferenceCount.ReferenceController;
    }
    if (bVar5) {
      bVar5 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160)
      ;
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    }
    if (bVar7) {
      bVar7 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1e0.DelegateAllocator);
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    pFVar16 = FUIAction::FUIAction
                        ((FUIAction *)local_b8,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_188,
                         (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8,
                         (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                         local_100,RepeatDisabled);
    pFVar17 = FSlateIcon::FSlateIcon((FSlateIcon *)local_130);
    pFVar18 = FText::GetEmpty();
    local_230._0_8_ = (pFVar18->TextData).Reference;
    if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 8))(local_230._0_8_,&local_res20);
    }
    local_230._8_4_ = pFVar18->Flags;
    local_230[0x10] = true;
    local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_210.Data = (FScriptContainerElement *)0x0;
    local_208 = 0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)(local_c0 + 1),
               (TAttribute<FText> *)local_230,pFVar17,pFVar16,local_150,ToggleButton,local_158,
               (TAttribute<FText> *)local_1d0,(TAttribute<EVisibility> *)local_250);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_218,(FWriteAccessScope *)&local_298);
    if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_210.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
      local_208 = local_208 & 0xffffffff00000000;
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    if (FStack_210.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_210.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
    if ((ITextData *)local_230._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_230._0_8_ + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
    if ((void *)local_70._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_70._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
    if ((void *)local_88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a0);
    if ((void *)local_a0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b8);
    if ((void *)local_b8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_298);
    if (((int)local_1a8 != 0) && (FStack_1b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b0,0,0,0x10);
      local_1a8 = local_1a8 & 0xffffffff00000000;
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    if (FStack_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
    if ((ITextData *)local_1d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1d0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
               (FWriteAccessScope *)&local_298);
    if (((int)local_238 != 0) && (FStack_240.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_240.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_240,0,0,0x10);
      local_238 = local_238 & 0xffffffff00000000;
    }
    if (local_298.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
    }
    if (FStack_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_240.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_248);
    FVar20 = (FName)((longlong)local_268 + 8);
  }
  return;
}

// OnMouseButtonUp @ 142a2f360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
SHeaderRow::OnMouseButtonUp
          (SHeaderRow *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  FName FVar1;
  FDeprecateSlateVector2D FVar2;
  bool bVar3;
  FWidgetPath *pFVar4;
  ISlateStyle *pIVar5;
  FSlateApplication *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ForElementType<FArrangedWidget> FVar9;
  bool bVar10;
  undefined1 auStackY_6a8 [32];
  undefined1 local_648;
  undefined1 local_647;
  ulonglong local_640;
  TVector2<float>_u_0 local_638;
  TSharedPtr<FExtender,1> local_630;
  TSharedPtr<FUICommandList_const_,1> local_620;
  FMenuBuilder local_610;
  TSharedRef<SWidget,1> local_488;
  TSharedRef<SWidget,1> local_478;
  FWidgetPath local_468;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  bVar10 = false;
  local_640 = local_640 & 0xffffffff00000000;
  if (this->bCanSelectGeneratedColumn != false) {
    local_630.Object =
         (FExtender *)(param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController
    ;
    FVar1 = (param_2->EffectingButton).KeyName;
    if ((TReferenceControllerBase<1> *)local_630.Object != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_630.Object)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_630.Object)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = true;
    if (FVar1 == EKeys::RightMouseButton.KeyName) {
      bVar3 = true;
      goto LAB_142a2f3d4;
    }
  }
  bVar3 = false;
LAB_142a2f3d4:
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_630.Object);
  }
  if (bVar3) {
    FVar2 = param_2->ScreenSpacePosition;
    bVar10 = (FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0;
    if (bVar10) {
      pFVar4 = FWidgetPath::FWidgetPath(&local_308);
    }
    else {
      pFVar4 = FWidgetPath::FWidgetPath(&local_1a8,(FWidgetPath *)param_2->_padding_);
    }
    FWidgetPath::FWidgetPath(&local_468,pFVar4);
    if (bVar10) {
      if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_308.Widgets.Array.ArrayNum);
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    if (!bVar10) {
      if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_1a8.Widgets.Array.ArrayNum);
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    local_640 = 0;
    pIVar5 = FAppStyle::Get();
    local_638 = (TVector2<float>_u_0)0x0;
    local_630.Object = (FExtender *)0x0;
    local_630.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_620.Object = (FUICommandList *)0x0;
    local_620.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FBaseMenuBuilder::FBaseMenuBuilder
              ((FBaseMenuBuilder *)&local_610,Menu,true,&local_620,false,&local_630,pIVar5,
               (FName)0x0,(FName)0x0);
    local_610.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
    local_610.CurrentSectionExtensionHook.Number = 0;
    local_610._padding_ = (longlong)&___7FMenuBuilder__6B_;
    FText::FText(&local_610.CurrentSectionHeadingText);
    local_610.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_610.CurrentSectionVisibility.bIsSet = false;
    local_610.CurrentSectionVisibility.Getter._16_8_ = 0;
    local_610.CurrentSectionVisibility.Getter._0_8_ = 0;
    local_610.CurrentSectionVisibility.Getter._8_8_ = 0;
    memset(&local_610.CurrentSectionResizeParams,0,200);
    local_610.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
    local_610.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Getter._16_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
    local_610.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
    local_610.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
    local_610.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
    local_610.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
    local_610.CurrentSectionResizeParams.bIsSet = false;
    local_610.CurrentSectionResizeParams.Getter._0_8_ = 0;
    local_610.CurrentSectionResizeParams.Getter._8_8_ = 0;
    local_610.bSectionNeedsToBeApplied = false;
    local_610.bSearchable = true;
    local_610.bRecursivelySearchable = true;
    local_610.bIsEditing = false;
    FMenuBuilder::AddSearchWidget(&local_610);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    OnGenerateSelectColumnsSubMenu(this,&local_610);
    pFVar6 = FSlateApplication::Get();
    FSlateApplication::CloseToolTip(pFVar6);
    pFVar6 = FSlateApplication::Get();
    local_647 = 0;
    local_638 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_640 = CONCAT44(local_640._4_4_,5);
    local_630.Object = (FExtender *)FVar2;
    pTVar7 = FMenuBuilder::MakeWidget
                       (&local_610,&local_478,
                        (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                         *)0x0);
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_488);
    FSlateApplication::PushMenu
              (pFVar6,(TSharedPtr<IMenu,1> *)&local_620,pTVar8,&local_468,pTVar7,
               (FDeprecateVector2DParameter *)&local_630,(FPopupTransitionEffect *)&local_640,true,
               (FDeprecateVector2DParameter *)&local_638._s_0,SUB82(&local_648,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_620.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_488.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_478.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    FMenuBuilder::~FMenuBuilder(&local_610);
    if (local_468.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_468.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar9 = (ForElementType<FArrangedWidget>)&local_468.Widgets.Array;
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar9 = local_468.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_468.Widgets.Array.ArrayNum);
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_468.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// RefreshColumns @ 142a32700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::RefreshColumns(SHeaderRow *this)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  Type TVar5;
  longlong lVar6;
  FColumn *pFVar7;
  FMargin *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  SWidget *pSVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  FSharedReferencer<1> FVar16;
  STableColumnHeader *this_00;
  SSeparator *pSVar17;
  SBorder *this_01;
  bool bVar18;
  char cVar19;
  byte bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  FArguments *pFVar24;
  FSlotArguments *pFVar25;
  TAttribute<float> *pTVar26;
  FArguments *pFVar27;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *pTVar28;
  TSharedRef<SSplitter,1> *pTVar29;
  FArguments *pFVar30;
  TAttribute<EVisibility> *pTVar31;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *pTVar32;
  TSharedRef<SSpacer,1> *pTVar33;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  bool *pbVar34;
  ISlateStyle *pIVar35;
  FText *pFVar36;
  FSlateIcon *pFVar37;
  undefined8 *puVar38;
  TSharedRef<SWidget,1> *pTVar39;
  ulong64 uVar40;
  FArguments *pFVar41;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *pTVar42;
  SSplitter *pSVar43;
  FScopedWidgetSlotArguments *pFVar44;
  TAttribute<SSplitter::ESizeRule> *pTVar45;
  FSlotArguments *pFVar46;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar47;
  FArguments *pFVar48;
  TAttribute<FOptionalSize> *pTVar49;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar50;
  TSharedRef<SBox,1> *pTVar51;
  FArguments *pFVar52;
  TAttribute<FSlateBrush_const_*> *pTVar53;
  TAttribute<TOptional<EMouseCursor::Type>_> *pTVar54;
  TAttribute<UE::Math::TVector2<double>_> *pTVar55;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_03;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  *pTVar56;
  FArguments *pFVar57;
  FSlotArguments *pFVar58;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SOverlay,1> *pTVar59;
  float *pfVar60;
  atomic<int> *paVar61;
  FArguments *pFVar62;
  FSlot *pFVar63;
  FSlot *pFVar64;
  FSlotArguments *pFVar65;
  FArguments *pFVar66;
  TSharedRef<SVerticalBox,1> *pTVar67;
  FMRSWRecursiveAccessDetector *this_05;
  FColumn *pFVar68;
  uint uVar69;
  longlong lVar70;
  TReferenceControllerBase<1> *pTVar71;
  float fVar72;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar73;
  undefined1 auStackY_3508 [32];
  undefined2 uStack_34b8;
  undefined2 uStack_34b6;
  T0RequiredArgs TStack_34b4;
  T0RequiredArgs TStack_34b3;
  T0RequiredArgs TStack_34b2;
  T0RequiredArgs TStack_34b1;
  T0RequiredArgs TStack_34b0;
  T0RequiredArgs TStack_34af;
  T0RequiredArgs TStack_34ae;
  T0RequiredArgs TStack_34ad;
  T0RequiredArgs TStack_34ac;
  T0RequiredArgs TStack_34ab;
  T0RequiredArgs aTStack_34aa [2];
  STableColumnHeader *pSStack_34a8;
  FSharedReferencer<1> FStack_34a0;
  uint uStack_3498;
  TSharedRef<STableColumnHeader,1> TStack_3488;
  ESizeRule EStack_3478;
  FLLMScope FStack_3474;
  FLLMScope FStack_3470;
  FLLMScope FStack_346c;
  undefined1 auStack_3468 [8];
  FDelegateAllocation FStack_3460;
  undefined1 auStack_3450 [8];
  FDelegateAllocation FStack_3448;
  TSharedRef<SHorizontalBox,1> TStack_3438;
  TSharedPtr<SSplitter,1> TStack_3428;
  TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
  TStack_3418;
  float fStack_3400;
  ESizeRule EStack_33fc;
  Type aTStack_33f8 [2];
  longlong lStack_33f0;
  FName FStack_33e8;
  FArguments *pFStack_33e0;
  SHeaderRow *pSStack_33d8;
  undefined1 auStack_33d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_33c8;
  ForAnyElementType FStack_33c0;
  ulonglong uStack_33b8;
  undefined1 auStack_33b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_33a8;
  ForAnyElementType FStack_33a0;
  ulonglong uStack_3398;
  undefined4 uStack_3390;
  undefined1 uStack_338c;
  undefined1 auStack_3388 [8];
  FDelegateAllocation FStack_3380;
  TSharedRef<SWidget,1> TStack_3370;
  code *pcStack_3358;
  undefined4 uStack_3350;
  uint uStack_334c;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> TStack_3348;
  TReferenceControllerBase<1> *pTStack_3330;
  undefined8 uStack_3328;
  FSharedReferencer<1> FStack_3320;
  FName FStack_3318;
  FName FStack_3310;
  undefined8 uStack_3308;
  undefined8 uStack_3300;
  FName FStack_32f8;
  undefined1 auStack_32f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_32d8;
  ForAnyElementType FStack_32d0;
  ulonglong uStack_32c8;
  float fStack_32c0;
  undefined1 uStack_32bc;
  undefined1 auStack_32b8 [8];
  void *pvStack_32b0;
  undefined8 uStack_32a8;
  undefined4 uStack_32a0;
  undefined1 uStack_329c;
  undefined1 auStack_3298 [8];
  void *pvStack_3290;
  undefined8 uStack_3288;
  undefined4 uStack_3280;
  undefined1 uStack_327c;
  undefined1 auStack_3278 [8];
  void *pvStack_3270;
  undefined4 uStack_3268;
  FMargin FStack_3260;
  TWeakPtr<SBorder,1> TStack_3250;
  TSharedRef<SBorder,1> TStack_3240;
  STableColumnHeader *pSStack_3228;
  FSharedReferencer<1> FStack_3220;
  undefined8 uStack_3218;
  FSharedReferencer<1> FStack_3210;
  undefined1 auStack_3208 [8];
  undefined1 auStack_3200 [8];
  void *pvStack_31f8;
  undefined8 uStack_31f0;
  TAttribute<FOptionalSize> TStack_31e8;
  undefined4 uStack_31c8;
  undefined1 uStack_31c4;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_31c0;
  longlong lStack_31a8;
  FMemScope FStack_31a0;
  FSlot *pFStack_3198;
  <lambda_5> <Stack_3190;
  undefined8 uStack_3188;
  SWidget *pSStack_3180;
  FSlot *pFStack_3178;
  FName FStack_3170;
  FMemScope FStack_3168;
  FName FStack_3160;
  undefined8 uStack_3158;
  FSharedReferencer<1> FStack_3150;
  FMemScope FStack_3148;
  TReferenceControllerBase<1> *pTStack_3140;
  undefined1 auStack_3138 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_3110;
  ForAnyElementType FStack_3108;
  ulonglong uStack_3100;
  undefined1 auStack_30f8 [80];
  undefined1 auStack_30a8 [8];
  void *pvStack_30a0;
  undefined8 uStack_3098;
  float fStack_3090;
  bool bStack_308c;
  undefined1 auStack_3088 [8];
  void *pvStack_3080;
  undefined8 uStack_3078;
  FOptionalSize FStack_3070;
  bool bStack_306c;
  undefined1 auStack_3068 [8];
  void *pvStack_3060;
  undefined8 uStack_3058;
  FOptionalSize FStack_3050;
  bool bStack_304c;
  undefined1 auStack_3048 [8];
  void *pvStack_3040;
  undefined8 uStack_3038;
  undefined1 auStack_3030 [24];
  undefined1 auStack_3018 [8];
  void *pvStack_3010;
  undefined8 uStack_3008;
  undefined1 auStack_3000 [24];
  undefined1 auStack_2fe8 [8];
  void *pvStack_2fe0;
  undefined8 uStack_2fd8;
  undefined1 auStack_2fd0 [128];
  undefined1 auStack_2f50 [8];
  void *pvStack_2f48;
  undefined8 uStack_2f40;
  int iStack_2f38;
  bool bStack_2f34;
  undefined1 auStack_2f30 [8];
  void *pvStack_2f28;
  undefined8 uStack_2f20;
  undefined1 auStack_2f18 [8];
  undefined1 auStack_2f10 [8];
  void *pvStack_2f08;
  undefined8 uStack_2f00;
  undefined1 auStack_2ef8 [8];
  undefined1 auStack_2ef0 [8];
  void *pvStack_2ee8;
  undefined8 uStack_2ee0;
  undefined1 auStack_2ed8 [8];
  undefined1 auStack_2ed0 [8];
  void *pvStack_2ec8;
  undefined8 uStack_2ec0;
  int iStack_2eb8;
  bool bStack_2eb4;
  undefined1 auStack_2eb0 [8];
  void *pvStack_2ea8;
  undefined8 uStack_2ea0;
  undefined1 auStack_2e98 [8];
  undefined1 auStack_2e90 [8];
  void *pvStack_2e88;
  undefined8 uStack_2e80;
  bool bStack_2e77;
  bool bStack_2e75;
  bool bStack_2e70;
  undefined1 auStack_2e68 [8];
  void *pvStack_2e60;
  undefined8 uStack_2e58;
  undefined4 uStack_2e50;
  TSharedRef<SWidget,1> TStack_2e48;
  TSharedRef<SWidget,1> TStack_2e38;
  TVector2<double>_u_0 TStack_2e28;
  NamedSlotProperty<SBorder::FArguments> NStack_2e18;
  TSharedRef<SWidget,1> TStack_2e08;
  <lambda_4> <Stack_2df8;
  TSharedRef<SWidget,1> TStack_2de8;
  TSharedRef<SWidget,1> TStack_2dd8;
  TSharedRef<SWidget,1> TStack_2dc8;
  TSharedRef<SWidget,1> TStack_2db8;
  TSharedRef<SWidget,1> TStack_2da8;
  SVerticalBox *pSStack_2d98;
  TReferenceControllerBase<1> *pTStack_2d90;
  SHorizontalBox *pSStack_2d88;
  undefined8 uStack_2d80;
  undefined1 auStack_2d78 [8];
  undefined1 auStack_2d70 [24];
  TSharedRef<SWidget,1> TStack_2d58;
  TSharedRef<SWidget,1> TStack_2d48;
  FDestructionSentinel FStack_2d38;
  FDestructionSentinel FStack_2d20;
  FDestructionSentinel FStack_2d08;
  FDestructionSentinel FStack_2cf0;
  FDestructionSentinel FStack_2cd8;
  T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&> TStack_2cc0;
  undefined1 auStack_2ca8 [24];
  FDestructionSentinel FStack_2c90;
  FDestructionSentinel FStack_2c78;
  FDelegateAllocation *pFStack_2c60;
  FDestructionSentinel FStack_2c58;
  FDelegateAllocation *pFStack_2c40;
  FDestructionSentinel FStack_2c38;
  FDelegateAllocation *pFStack_2c20;
  TVector2<double>_u_0 TStack_2c18;
  undefined1 uStack_2c08;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> TStack_2c00;
  TSharedRef<SOverlay,1> TStack_2be8;
  TSharedRef<SBox,1> TStack_2bd8;
  <lambda_3> <Stack_2bc8;
  <lambda_2> <Stack_2bb0;
  <lambda_1> <Stack_2b98;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> TStack_2b80;
  FMargin FStack_2b68;
  TSharedRef<SWidget,1> TStack_2b58;
  FText FStack_2b48;
  FText FStack_2b38;
  TSharedRef<SWidget,1> TStack_2b28;
  FText FStack_2b18;
  TSharedPtr<FUICommandList_const_,1> TStack_2b08;
  TSharedPtr<FExtender,1> TStack_2af8;
  TAttribute<FOptionalSize> TStack_2ae8;
  TSharedRef<SSplitter,1> TStack_2ac8;
  TSharedRef<SSpacer,1> TStack_2ab8;
  code *pcStack_2aa8;
  longlong lStack_2aa0;
  TSharedRef<SVerticalBox,1> TStack_2a98;
  TSharedRef<SBox,1> TStack_2a88;
  TSharedRef<SSpacer,1> TStack_2a78;
  TSharedRef<SBox,1> TStack_2a68;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> TStack_2a58;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> TStack_2a40;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> TStack_2a28;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> TStack_2a10;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> TStack_29f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> TStack_29e0;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> TStack_29c8;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> TStack_29b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> TStack_2998;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> TStack_2980;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> TStack_2968;
  SWidget *pSStack_2948;
  TReferenceControllerBase<1> *pTStack_2940;
  undefined8 *puStack_2938;
  SHorizontalBox *pSStack_2930;
  FSharedReferencer<1> aFStack_2928 [4];
  undefined1 auStack_2908 [40];
  FSlotArgumentsMixin FStack_28e0;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  TStack_2850;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  TStack_2838;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  TStack_2820;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  TStack_2808;
  undefined8 *apuStack_27f0 [2];
  TReferenceControllerBase<1> *pTStack_27e0;
  undefined1 auStack_27c0 [40];
  FSlotArgumentsMixin FStack_2798;
  TAttribute<FOptionalSize> TStack_2708;
  undefined1 auStack_26e8 [32];
  TAttribute<float> TStack_26c8;
  TAttribute<FOptionalSize> TStack_26a8;
  undefined1 auStack_2688 [32];
  TAttribute<float> TStack_2668;
  TAttribute<EVisibility> TStack_2648;
  FSlateIcon FStack_2628;
  TAttribute<float> TStack_2608;
  undefined1 auStack_25e8 [40];
  TAttribute<FSlateBrush_const_*> TStack_25c0;
  FSlotArguments FStack_2598;
  FSlotArguments FStack_2538;
  TAttribute<UE::Math::TVector2<double>_> TStack_24d8;
  FArguments FStack_24a8;
  FSlotArguments FStack_22a0;
  FSlotArguments FStack_21b8;
  undefined1 auStack_20d0 [544];
  undefined1 auStack_1eb0 [24];
  FArguments FStack_1e98;
  FArguments FStack_1c98;
  FArguments FStack_1a90;
  FArguments FStack_1888;
  FArguments FStack_1660;
  FArguments FStack_1438;
  FArguments FStack_11a8;
  FArguments FStack_dc8;
  FArguments FStack_a88;
  FArguments FStack_748;
  FScopedWidgetSlotArguments FStack_408;
  FScopedWidgetSlotArguments FStack_328;
  FScopedWidgetSlotArguments FStack_248;
  FScopedWidgetSlotArguments FStack_168;
  ulonglong uStack_88;
  undefined8 uStack_30;
  
  fVar15 = __real_40a00000;
  fVar14 = __real_40800000;
  uStack_30 = 0x142a32734;
  uStack_88 = __security_cookie.value ^ (ulonglong)auStackY_3508;
  bVar13 = false;
  bVar12 = false;
  bVar21 = false;
  EStack_3478 = SizeToContent;
  fVar73 = __real_40a00000;
  if (0.0 < this->SplitterHandleSize) {
    fVar73 = this->SplitterHandleSize + __real_40800000;
  }
  pSStack_33d8 = this;
  TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_>::Empty
            (&this->HeaderWidgets,0);
  TStack_3428.Object = (SSplitter *)0x0;
  TStack_3428.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar24 = SHorizontalBox::FArguments::FArguments(&FStack_1c98);
  pFVar25 = SHorizontalBox::Slot(&FStack_21b8);
  fStack_3400 = 1.0;
  pTVar26 = TAttribute<float>::TAttribute<float>(&TStack_2668,&fStack_3400);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar25,pTVar26);
  pFVar27 = SSplitter::FArguments::FArguments(&FStack_1438);
  uStack_3350 = 0;
  pFVar27->_Style = &this->Style->ColumnSplitterStyle;
  pFVar27->_ResizeMode = this->ResizeMode;
  pFVar27->_PhysicalSplitterHandleSize = this->SplitterHandleSize;
  pcStack_3358 = GetRowSizeForSlotIndex;
  lStack_2aa0 = (ulonglong)uStack_334c << 0x20;
  pcStack_2aa8 = GetRowSizeForSlotIndex;
  pFVar27->_HitDetectionSplitterHandleSize = fVar73;
  pFVar27 = SSplitter::FArguments::OnGetMaxSlotSize<SHeaderRow>
                      (pFVar27,this,(pmf_4196fb9e *)&pcStack_2aa8);
  pTVar28 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                      (&TStack_2a28,"SSplitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x328,&TStack_34b4);
  pTVar28 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (pTVar28,&TStack_3428);
  pTVar29 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar28,&TStack_2ac8,pFVar27);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&TStack_2d48,pTVar29);
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&TStack_2d48);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar25);
  pFVar25 = SHorizontalBox::Slot(&FStack_22a0);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar25);
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0);
  pFVar30 = SSpacer::FArguments::FArguments(&FStack_1888);
  TStack_2c18._s_0.X = (double)(this->ScrollBarThickness).field0_0x0._s_0.X;
  uStack_2c08 = 1;
  TStack_2c18._s_0.Y = (double)(this->ScrollBarThickness).field0_0x0._s_0.Y;
  TStack_2c00._0_8_ = 0;
  TStack_2c00._8_8_ = 0;
  TStack_2c00._16_8_ = 0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>(&TStack_2c00);
  pFVar30 = SSpacer::FArguments::Size
                      (pFVar30,(TAttribute<UE::Math::TVector2<double>_> *)&TStack_2c18._s_0);
  pTVar31 = TAttribute<EVisibility>::TAttribute<EVisibility>
                      (&TStack_2648,&this->ScrollBarVisibility);
  pFVar30 = TSlateBaseNamedArgs<SSpacer>::Visibility
                      ((TSlateBaseNamedArgs<SSpacer> *)pFVar30,pTVar31);
  pTVar32 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&TStack_2a40,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x334,&TStack_34b3);
  pTVar33 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar32,&TStack_2ab8,pFVar30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&TStack_2d58,pTVar33);
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&TStack_2d58);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar25);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&TStack_2a58,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x324,&TStack_34b2);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&TStack_3438,pFVar24)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2a58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2d58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2ab8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2a40._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&FStack_1888);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&FStack_22a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2d48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2ac8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2a28._Widget.SharedReferenceCount.ReferenceController);
  SSplitter::FArguments::~FArguments(&FStack_1438);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&FStack_21b8);
  SHorizontalBox::FArguments::~FArguments(&FStack_1c98);
  uVar69 = (this->Columns).Array.ArrayNum - 1;
  fVar73 = fVar73 * __real_3f000000 + __real_3f800000;
  if (-1 < (int)uVar69) {
    lVar70 = (longlong)(int)uVar69 << 3;
    do {
      uVar22 = 0;
      if ((int)uVar69 < (this->Columns).Array.ArrayNum) {
        uVar22 = ~uVar69 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar6 = *(longlong *)((this->Columns).Array.AllocatorInstance.Data + lVar70);
      if (((*(char *)(lVar6 + 0x219) == '\0') ||
          (pbVar34 = TAttribute<bool>::Get((TAttribute<bool> *)(lVar6 + 0x218)), *pbVar34 != false))
         && (*(char *)(lVar6 + 600) != '\0')) break;
      lVar70 = lVar70 + -8;
      uVar69 = uVar69 - 1;
    } while (-1 < (int)uVar69);
  }
  pSStack_34a8 = (STableColumnHeader *)0x0;
  FStack_34a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_3498 = 0;
  if (0 < (this->Columns).Array.ArrayNum) {
    lStack_31a8 = (longlong)(int)uVar69;
    uVar69 = uStack_2d80._4_4_;
    lStack_33f0 = 0;
    uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    do {
      lVar70 = lStack_33f0;
      uVar22 = 0;
      if ((int)uStack_3498 < (this->Columns).Array.ArrayNum) {
        uVar22 = ~uStack_3498 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = *(FColumn **)((this->Columns).Array.AllocatorInstance.Data + lVar70 * 8);
      if ((((pFVar7->ShouldGenerateWidget).bIsSet == false) ||
          (pbVar34 = TAttribute<bool>::Get(&pFVar7->ShouldGenerateWidget), *pbVar34 != false)) &&
         (pFVar7->bIsVisible != false)) {
        pFStack_33e0 = (FArguments *)FStack_34a0.ReferenceController;
        if ((FArguments *)FStack_34a0.ReferenceController != (FArguments *)0x0) {
          LOCK();
          (FStack_34a0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_34a0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FStack_3150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pSStack_34a8 = (STableColumnHeader *)0x0;
        uStack_3158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_34a0,&FStack_3150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_3150.ReferenceController);
        TStack_3370.SharedReferenceCount.ReferenceController =
             (pFVar7->HeaderMenuContent).Widget.SharedReferenceCount.ReferenceController;
        TStack_3370.Object = (pFVar7->HeaderMenuContent).Widget.Object;
        FStack_3260.Top = 0.0;
        FStack_3260.Bottom = 0.0;
        if (TStack_3370.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (TStack_3370.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_3370.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
               1);
          UNLOCK();
        }
        FStack_3260.Left = fVar73;
        FStack_3260.Right = fVar73;
        if ((this->bCanSelectGeneratedColumn != false) &&
           (TStack_3370.Object != SNullWidget::NullWidget.Object)) {
          uStack_3098 = 0;
          uStack_3078 = 0;
          uStack_3058 = 0;
          uStack_3038 = 0;
          FStack_3070.Size = FOptionalSize::Unspecified;
          FStack_3050.Size = FOptionalSize::Unspecified;
          auStack_30f8._4_4_ = HAlign_Fill;
          auStack_30f8[0xc] = false;
          auStack_30f8[0x14] = false;
          auStack_30f8[0x1c] = false;
          auStack_30f8[0x24] = false;
          auStack_30f8[0x2c] = false;
          auStack_30f8[0x34] = false;
          auStack_30f8[0x3c] = false;
          auStack_30f8[0x44] = false;
          auStack_30f8._72_4_ = 0.0;
          auStack_30f8[0x4c] = false;
          auStack_30a8 = (undefined1  [8])0x0;
          pvStack_30a0 = (void *)0x0;
          fStack_3090 = 0.0;
          bStack_308c = false;
          auStack_3088 = (undefined1  [8])0x0;
          pvStack_3080 = (void *)0x0;
          bStack_306c = false;
          auStack_3068 = (undefined1  [8])0x0;
          pvStack_3060 = (void *)0x0;
          bStack_304c = false;
          auStack_3048 = (undefined1  [8])0x0;
          pvStack_3040 = (void *)0x0;
          auStack_30f8[0] = true;
          FStack_32f8.ComparisonIndex.Value = 0;
          FStack_32f8.Number = 0;
          pIVar35 = FAppStyle::Get();
          uStack_3300 = 0;
          TStack_2af8.Object = (FExtender *)0x0;
          TStack_2af8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          TStack_2b08.Object = (FUICommandList *)0x0;
          TStack_2b08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FBaseMenuBuilder::FBaseMenuBuilder
                    ((FBaseMenuBuilder *)auStack_2fd0,Menu,true,&TStack_2b08,false,&TStack_2af8,
                     pIVar35,(FName)0x0,FStack_32f8);
          auStack_2fd0._96_4_ = 0;
          auStack_2fd0._100_4_ = 0;
          auStack_2fd0._0_8_ = &___7FMenuBuilder__6B_;
          FText::FText((FText *)(auStack_2fd0 + 0x68));
          auStack_2fd0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
          auStack_2fd0[0x79] = false;
          uStack_2f40 = 0;
          auStack_2f50 = (undefined1  [8])0x0;
          pvStack_2f48 = (void *)0x0;
          memset(&iStack_2f38,0,200);
          iStack_2f38 = 0;
          uStack_2f20 = 0;
          uStack_2f00 = 0;
          bStack_2f34 = false;
          auStack_2f30 = (undefined1  [8])0x0;
          pvStack_2f28 = (void *)0x0;
          auStack_2f18[0] = false;
          auStack_2f18[1] = false;
          auStack_2f10 = (undefined1  [8])0x0;
          pvStack_2f08 = (void *)0x0;
          auStack_2ef8[0] = false;
          auStack_2ef8[1] = false;
          uStack_2ec0 = 0;
          uStack_2ea0 = 0;
          uStack_2e80 = 0;
          uStack_2e58 = 0;
          auStack_2ef0 = (undefined1  [8])0x0;
          pvStack_2ee8 = (void *)0x0;
          uStack_2ee0 = 0;
          auStack_2ed8[0] = false;
          auStack_2ed8[1] = false;
          auStack_2ed0 = (undefined1  [8])0x0;
          pvStack_2ec8 = (void *)0x0;
          iStack_2eb8 = 0;
          bStack_2eb4 = false;
          auStack_2eb0 = (undefined1  [8])0x0;
          pvStack_2ea8 = (void *)0x0;
          auStack_2e98[0] = Preferred;
          auStack_2e98[1] = false;
          auStack_2e90 = (undefined1  [8])0x0;
          pvStack_2e88 = (void *)0x0;
          bStack_2e77 = false;
          bStack_2e75 = false;
          bStack_2e70 = false;
          auStack_2e68 = (undefined1  [8])0x0;
          pvStack_2e60 = (void *)0x0;
          uStack_2e50._0_1_ = false;
          uStack_2e50._1_1_ = true;
          uStack_2e50._2_1_ = true;
          uStack_2e50._3_1_ = false;
          FMenuBuilder::AddSearchWidget((FMenuBuilder *)auStack_2fd0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          auStack_33d0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          auStack_33d0[1] = false;
          uStack_33b8 = 0;
          TStack_33c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_33c0.Data = (FScriptContainerElement *)0x0;
          FSlateIcon::FSlateIcon((FSlateIcon *)auStack_3138);
          auStack_3138[0x20] = false;
          uStack_3100 = 0;
          TStack_3110.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_3108.Data = (FScriptContainerElement *)0x0;
          pFVar36 = FText::FText(&FStack_2b18);
          FText::FText((FText *)auStack_32f0,pFVar36);
          auStack_32f0[0x10] = true;
          uStack_32c8 = 0;
          TStack_32d8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_32d0.Data = (FScriptContainerElement *)0x0;
          pFVar36 = FText::GetEmpty();
          FMenuBuilder::AddWidget
                    ((FMenuBuilder *)auStack_2fd0,&(pFVar7->HeaderMenuContent).Widget,pFVar36,
                     (FMenuEntryStyleParams *)auStack_30f8,true,(TAttribute<FText> *)auStack_32f0,
                     (TAttribute<FSlateIcon> *)auStack_3138,(TAttribute<EVisibility> *)auStack_33d0)
          ;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_32d8,(FWriteAccessScope *)&FStack_2d38);
          if (((int)uStack_32c8 != 0) && (FStack_32d0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_32d0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_32d0,0,0,0x10);
            uStack_32c8 = uStack_32c8 & 0xffffffff00000000;
          }
          if (FStack_2d38.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2d38.Accessor,&FStack_2d38);
          }
          if (FStack_32d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_32d0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_32d8.AccessDetector);
          if ((ITextData *)auStack_32f0._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)auStack_32f0._0_8_ + 0x10))();
          }
          if (FStack_2b18.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_2b18.TextData.Reference + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_3110,(FWriteAccessScope *)&FStack_2d20);
          if (((int)uStack_3100 != 0) && (FStack_3108.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_3108.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_3108,0,0,0x10);
            uStack_3100 = uStack_3100 & 0xffffffff00000000;
          }
          if (FStack_2d20.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2d20.Accessor,&FStack_2d20);
          }
          if (FStack_3108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3108.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_3110.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_33c8,(FWriteAccessScope *)&FStack_2d08);
          if (((int)uStack_33b8 != 0) && (FStack_33c0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_33c0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_33c0,0,0,0x10);
            uStack_33b8 = uStack_33b8 & 0xffffffff00000000;
          }
          if (FStack_2d08.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2d08.Accessor,&FStack_2d08);
          }
          if (FStack_33c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_33c0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_33c8.AccessDetector);
          auStack_33b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          auStack_33b0[1] = false;
          uStack_3398 = 0;
          uStack_3308 = 0;
          TStack_33a8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_33a0.Data = (FScriptContainerElement *)0x0;
          FMenuBuilder::AddMenuSeparator
                    ((FMenuBuilder *)auStack_2fd0,(FName)0x0,(TAttribute<EVisibility> *)auStack_33b0
                    );
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_33a8,(FWriteAccessScope *)&FStack_2cf0);
          if (((int)uStack_3398 != 0) && (FStack_33a0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_33a0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_33a0,0,0,0x10);
            uStack_3398 = uStack_3398 & 0xffffffff00000000;
          }
          if (FStack_2cf0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2cf0.Accessor,&FStack_2cf0);
          }
          if (FStack_33a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_33a0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_33a8.AccessDetector);
          auStack_3208[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          auStack_3208[1] = false;
          uStack_31f0 = 0;
          auStack_3200 = (undefined1  [8])0x0;
          pvStack_31f8 = (void *)0x0;
          FStack_3310.ComparisonIndex.Value = 0;
          FStack_3310.Number = 0;
          FStack_3318.ComparisonIndex.Value = 0;
          FStack_3318.Number = 0;
          pFVar37 = FSlateIcon::FSlateIcon(&FStack_2628);
          auStack_3468 = (undefined1  [8])0x0;
          FStack_3460.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_3460.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3468,
                     (FWriteAccessScope *)&FStack_2c58);
          pFStack_2c40 = &FStack_3460;
          puVar38 = UE::Core::Private::DelegateAllocate(0x38,&FStack_3460);
          pTVar71 = pTStack_3330;
          if (puVar38 != (undefined8 *)0x0) {
            uStack_3350 = 0;
            pcStack_3358 = OnGenerateSelectColumnsSubMenu;
            uStack_334c = uVar69;
            pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                                ((TSharedFromThis<SWidget,1> *)&this->_padding_,&TStack_2b28);
            pTVar71 = (pTVar39->SharedReferenceCount).ReferenceController;
            pSStack_3180 = pTVar39->Object;
            if (pTVar71 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar71->SharedReferenceCount = (atomic<int>)((int)pTVar71->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar71->SharedReferenceCount = (atomic<int>)((int)pTVar71->SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar13 = true;
            bVar12 = true;
            bVar21 = true;
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            pTStack_3330 = pTVar71;
            pTStack_3140 = pTVar71;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseSPMethodDelegateInstance__0A_VSHeaderRow___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[3] = pSStack_3180;
            puVar38[4] = pTVar71;
            if (pTVar71 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar71->WeakReferenceCount = (atomic<int>)((int)pTVar71->WeakReferenceCount + 1);
              UNLOCK();
            }
            puVar38[5] = pcStack_3358;
            puVar38[6] = CONCAT44(uStack_334c,uStack_3350);
          }
          if (bVar21) {
            bVar21 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar71);
          }
          if (bVar12) {
            bVar12 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_3140);
          }
          if (bVar13) {
            bVar13 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_2b28.SharedReferenceCount.ReferenceController);
          }
          if (FStack_2c58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2c58.Accessor,&FStack_2c58);
          }
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&FStack_2b48,L"SHeaderRow",L"SelectColumns_Tooltip",
                               L"Show/hide columns");
          FText::FText((FText *)auStack_3000,pFVar36);
          auStack_3000[0x10] = true;
          uStack_2fd8 = 0;
          auStack_2fe8 = (undefined1  [8])0x0;
          pvStack_2fe0 = (void *)0x0;
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&FStack_2b38,L"SHeaderRow",L"SelectColumns",L"Select Columns");
          FText::FText((FText *)auStack_3030,pFVar36);
          auStack_3030[0x10] = true;
          uStack_3008 = 0;
          auStack_3018 = (undefined1  [8])0x0;
          pvStack_3010 = (void *)0x0;
          FMenuBuilder::AddSubMenu
                    ((FMenuBuilder *)auStack_2fd0,(TAttribute<FText> *)auStack_3030,
                     (TAttribute<FText> *)auStack_3000,
                     (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                     auStack_3468,false,pFVar37,true,FStack_3318,FStack_3310,
                     (TAttribute<EVisibility> *)auStack_3208);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3018);
          if (pvStack_3010 != (void *)0x0) {
            FMemory::Free(pvStack_3010);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3018);
          if ((ITextData *)auStack_3030._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)auStack_3030._0_8_ + 0x10))();
          }
          if (FStack_2b38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_2b38.TextData.Reference + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2fe8);
          if (pvStack_2fe0 != (void *)0x0) {
            FMemory::Free(pvStack_2fe0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2fe8);
          if ((ITextData *)auStack_3000._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)auStack_3000._0_8_ + 0x10))();
          }
          if (FStack_2b48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_2b48.TextData.Reference + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3468,
                     (FWriteAccessScope *)&FStack_2cd8);
          if ((FStack_3460.DelegateSize != 0) &&
             (FStack_3460.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_3460.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_3460,0,0,0x10);
            FStack_3460.DelegateSize = 0;
          }
          if (FStack_2cd8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2cd8.Accessor,&FStack_2cd8);
          }
          if (FStack_3460.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_3460.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3468);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3200);
          if (pvStack_31f8 != (void *)0x0) {
            FMemory::Free(pvStack_31f8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3200);
          pTVar39 = FMenuBuilder::MakeWidget
                              ((FMenuBuilder *)auStack_2fd0,&TStack_2b58,
                               (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                                *)0x0);
          pSVar11 = pTVar39->Object;
          pTVar71 = (pTVar39->SharedReferenceCount).ReferenceController;
          *(undefined4 *)&pTVar39->Object = TStack_3370.Object._0_4_;
          *(undefined4 *)((longlong)&pTVar39->Object + 4) = TStack_3370.Object._4_4_;
          *(undefined4 *)&(pTVar39->SharedReferenceCount).ReferenceController =
               TStack_3370.SharedReferenceCount.ReferenceController._0_4_;
          *(undefined4 *)((longlong)&(pTVar39->SharedReferenceCount).ReferenceController + 4) =
               TStack_3370.SharedReferenceCount.ReferenceController._4_4_;
          TStack_3370.Object = pSVar11;
          TStack_3370.SharedReferenceCount.ReferenceController = pTVar71;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2b58.SharedReferenceCount.ReferenceController);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2e68);
          if (pvStack_2e60 != (void *)0x0) {
            FMemory::Free(pvStack_2e60);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2e68);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2e90);
          if (pvStack_2e88 != (void *)0x0) {
            FMemory::Free(pvStack_2e88);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2e90);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2eb0);
          if (pvStack_2ea8 != (void *)0x0) {
            FMemory::Free(pvStack_2ea8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2eb0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2ed0);
          if (pvStack_2ec8 != (void *)0x0) {
            FMemory::Free(pvStack_2ec8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2ed0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2ef0);
          if (pvStack_2ee8 != (void *)0x0) {
            FMemory::Free(pvStack_2ee8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2ef0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2f10);
          if (pvStack_2f08 != (void *)0x0) {
            FMemory::Free(pvStack_2f08);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2f10);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2f30);
          if (pvStack_2f28 != (void *)0x0) {
            FMemory::Free(pvStack_2f28);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2f30);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2f50);
          if (pvStack_2f48 != (void *)0x0) {
            FMemory::Free(pvStack_2f48);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_2f50);
          if ((ITextData *)auStack_2fd0._104_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)auStack_2fd0._104_8_ + 0x10))();
          }
          FBaseMenuBuilder::~FBaseMenuBuilder((FBaseMenuBuilder *)auStack_2fd0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3048);
          if (pvStack_3040 != (void *)0x0) {
            FMemory::Free(pvStack_3040);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3048);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3068);
          if (pvStack_3060 != (void *)0x0) {
            FMemory::Free(pvStack_3060);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3068);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3088);
          if (pvStack_3080 != (void *)0x0) {
            FMemory::Free(pvStack_3080);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3088);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_30a8);
          if (pvStack_30a0 != (void *)0x0) {
            FMemory::Free(pvStack_30a0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_30a8);
        }
        pFVar41 = STableColumnHeader::FArguments::FArguments(&FStack_1e98);
        lVar70 = 0x650;
        if (lStack_33f0 != lStack_31a8) {
          lVar70 = 0x10;
        }
        TStack_2cc0.Arg1 = &TStack_3370;
        pFVar41->_Style = (FTableColumnHeaderStyle *)(&this->Style->field_0x0 + lVar70);
        TStack_2cc0.Arg2 = &FStack_3260;
        TStack_2cc0.Arg0 = pFVar7;
        FLLMScope::FLLMScope
                  (&FStack_3474,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        FStack_33e8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&FStack_31a0,&FStack_33e8,true);
        TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
        ::
        TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
                  (&TStack_3418,"STableColumnHeader",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                   ,0x36a,&TStack_2cc0);
        FMemScope::~FMemScope(&FStack_31a0);
        FLLMScope::~FLLMScope(&FStack_3474);
        this_00 = TStack_3418._Widget.Object;
        FVar16.ReferenceController = FStack_34a0.ReferenceController;
        if ((FArguments *)TStack_3418._Widget.SharedReferenceCount.ReferenceController !=
            (FArguments *)0x0) {
          LOCK();
          (TStack_3418._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_3418._Widget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pSStack_34a8 = TStack_3418._Widget.Object;
        FStack_34a0.ReferenceController =
             TStack_3418._Widget.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar16.ReferenceController);
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar41);
        pFVar8 = (TStack_3418._RequiredArgs)->Arg2;
        FStack_2b68.Left = pFVar8->Left;
        FStack_2b68.Top = pFVar8->Top;
        FStack_2b68.Right = pFVar8->Right;
        FStack_2b68.Bottom = pFVar8->Bottom;
        STableColumnHeader::Construct
                  (this_00,pFVar41,(TStack_3418._RequiredArgs)->Arg0,
                   (TStack_3418._RequiredArgs)->Arg1,&FStack_2b68);
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((this_00->_padding_ & 0x10) == 0) {
          cVar19 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
          bVar20 = 0;
          if (cVar19 != '\0') goto LAB_142a33a8b;
        }
        else {
LAB_142a33a8b:
          bVar20 = 0x20;
        }
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar20;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar16.ReferenceController = TStack_3418._Widget.SharedReferenceCount.ReferenceController;
        TStack_3488.Object = this_00;
        TStack_3488.SharedReferenceCount.ReferenceController =
             TStack_3418._Widget.SharedReferenceCount.ReferenceController;
        TStack_3418._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        TStack_3418._Widget.Object = (STableColumnHeader *)0x0;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&FStack_1e98);
        pTVar3 = &this->HeaderWidgets;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&pSStack_34a8) &&
            ((FScriptContainerElement *)&pSStack_34a8 <
             pFVar9 + (longlong)(this->HeaderWidgets).ArrayMax * 0x10)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar23 = (this->HeaderWidgets).ArrayNum;
        piVar2 = &(this->HeaderWidgets).ArrayMax;
        if (iVar23 == *piVar2) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->HeaderWidgets).ArrayNum = iVar23 + 1;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        *(STableColumnHeader **)(pFVar9 + (longlong)iVar23 * 0x10) = pSStack_34a8;
        *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar23 * 0x10 + 8) =
             FStack_34a0.ReferenceController;
        if ((FArguments *)FStack_34a0.ReferenceController != (FArguments *)0x0) {
          LOCK();
          (FStack_34a0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_34a0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TVar5 = pFVar7->SizeRule;
        if (TVar5 == Fill) {
          uStack_3390 = 0;
          uStack_338c = 1;
          FStack_3380.DelegateSize = 0;
          FStack_3380._12_4_ = 0;
          auStack_3388 = (undefined1  [8])0x0;
          FStack_3380.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3388,
                     (FWriteAccessScope *)&FStack_2c38);
          pFStack_2c20 = &FStack_3380;
          puVar38 = UE::Core::Private::DelegateAllocate(0x28,&FStack_3380);
          if (puVar38 != (undefined8 *)0x0) {
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseRawMethodDelegateInstance__00__CBVFColumn_SHeaderRow____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[4] = FColumn::GetWidth;
            puVar38[3] = pFVar7;
          }
          if (FStack_2c38.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2c38.Accessor,&FStack_2c38);
          }
          if ((TStack_3428.Object == (SSplitter *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar44 = SSplitter::AddSlot(TStack_3428.Object,&FStack_248,-1);
          uStack_3280 = uStack_3390;
          uStack_327c = uStack_338c;
          auStack_3278 = (undefined1  [8])0x0;
          pvStack_3270 = (void *)0x0;
          uStack_3268 = 0;
          TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_3278,
                     (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_3388);
          *(undefined4 *)&pFVar44->_padding_ = uStack_3280;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = uStack_327c;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3278);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3278);
          if (pvStack_3270 != (void *)0x0) {
            FMemory::Free(pvStack_3270);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3278);
          uStack_329c = 1;
          uStack_32a0 = 1;
          uStack_3288 = 0;
          auStack_3298 = (undefined1  [8])0x0;
          pvStack_3290 = (void *)0x0;
          *(undefined4 *)&pFVar44->_padding_ = 1;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3298);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3298);
          if (pvStack_3290 != (void *)0x0) {
            FMemory::Free(pvStack_3290);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3298);
          auStack_3450 = (undefined1  [8])0x0;
          FStack_3448.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_3448.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3450,
                     (FWriteAccessScope *)&FStack_2c78);
          pFStack_2c60 = &FStack_3448;
          puVar38 = UE::Core::Private::DelegateAllocate(0x28,&FStack_3448);
          if (puVar38 != (undefined8 *)0x0) {
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFColumn_SHeaderRow____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[4] = FColumn::SetWidth;
            puVar38[3] = pFVar7;
          }
          if (FStack_2c78.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2c78.Accessor,&FStack_2c78);
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3450);
          fStack_32c0 = pFVar7->MinSize;
          uStack_32bc = 1;
          auStack_32b8 = (undefined1  [8])0x0;
          pvStack_32b0 = (void *)0x0;
          uStack_32a8 = 0;
          *(float *)&pFVar44->_padding_ = fStack_32c0;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_32b8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_32b8);
          if (pvStack_32b0 != (void *)0x0) {
            FMemory::Free(pvStack_32b0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_32b8);
          if ((FArguments *)FVar16.ReferenceController == (FArguments *)0x0) {
            paVar61 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar61 = &(FVar16.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          pSStack_3228 = TStack_3488.Object;
          FStack_3220.ReferenceController = TStack_3488.SharedReferenceCount.ReferenceController;
          if ((FArguments *)FVar16.ReferenceController != (FArguments *)0x0) {
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          if ((STableColumnHeader **)&pFVar44->_padding_ != &pSStack_3228) {
            pFVar44->_padding_ = (longlong)TStack_3488.Object;
            pSStack_3228 = (STableColumnHeader *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar44->_padding_,&FStack_3220);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_3220.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar16.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_3450,
                     (FWriteAccessScope *)&FStack_2c90);
          if ((FStack_3448.DelegateSize != 0) &&
             (FStack_3448.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_3448.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_3448,0,0,0x10);
            FStack_3448.DelegateSize = 0;
          }
          if (FStack_2c90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_2c90.Accessor,&FStack_2c90);
          }
          if (FStack_3448.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_3448.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_3450);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&FStack_248);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_3388);
          if (FStack_3380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_3380.DelegateAllocator);
          }
          this_05 = (FMRSWRecursiveAccessDetector *)auStack_3388;
LAB_142a34a89:
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_05);
        }
        else if (TVar5 == Fixed) {
          if ((TStack_3428.Object == (SSplitter *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar44 = SSplitter::AddSlot(TStack_3428.Object,&FStack_328,-1);
          uStack_31c4 = 1;
          uStack_31c8 = 0;
          TStack_31c0._16_8_ = 0;
          TStack_31c0._0_8_ = 0;
          TStack_31c0._8_8_ = 0;
          *(undefined4 *)&pFVar44->_padding_ = 0;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,&TStack_31c0);
          TAttribute<enum_SSplitter::ESizeRule>::~TAttribute<enum_SSplitter::ESizeRule>
                    (&uStack_31c8);
          pFVar48 = SBox::FArguments::FArguments(&FStack_748);
          pfVar60 = TAttribute<float>::Get(&pFVar7->Width);
          TStack_31e8.Value.Size = *pfVar60;
          TStack_31e8.Getter._16_8_ = 0;
          TStack_31e8.bIsSet = true;
          TStack_31e8.Getter._0_8_ = 0;
          TStack_31e8.Getter._8_8_ = 0;
          (pFVar48->_WidthOverride).Value.Size = TStack_31e8.Value.Size;
          (pFVar48->_WidthOverride).bIsSet = true;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_WidthOverride).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_31e8.Getter);
          TAttribute<FOptionalSize>::~TAttribute<FOptionalSize>(&TStack_31e8);
          if ((FArguments *)FVar16.ReferenceController == (FArguments *)0x0) {
            paVar61 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar61 = &(FVar16.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          if ((FArguments *)FVar16.ReferenceController != (FArguments *)0x0) {
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          pSStack_2948 = (pFVar48->_Content).Widget.Object;
          pTStack_2940 = (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController;
          *(undefined4 *)&(pFVar48->_Content).Widget.Object = TStack_3488.Object._0_4_;
          *(undefined4 *)((longlong)&(pFVar48->_Content).Widget.Object + 4) =
               TStack_3488.Object._4_4_;
          *(undefined4 *)&(pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController =
               TStack_3488.SharedReferenceCount.ReferenceController._0_4_;
          *(undefined4 *)
           ((longlong)&(pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController + 4) =
               TStack_3488.SharedReferenceCount.ReferenceController._4_4_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_2940);
          pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                              (&TStack_2968,"SBox",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x388,&TStack_34ac);
          pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar50,&TStack_2a88,pFVar48);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&TStack_2da8,pTVar51);
          TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                    ((FSlotArguments *)pFVar44,&TStack_2da8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2da8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2a88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2968._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar16.ReferenceController);
          SBox::FArguments::~FArguments(&FStack_748);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&FStack_328);
        }
        else if (TVar5 == Manual) {
          fVar72 = fVar15;
          if (0.0 < this->SplitterHandleSize) {
            fVar72 = this->SplitterHandleSize + fVar14;
          }
          pFVar52 = SBorder::FArguments::FArguments(&FStack_11a8);
          pFVar52 = SBorder::FArguments::Padding(pFVar52,0.0);
          uStack_3188 = 0;
          pTVar53 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><std::nullptr_t>
                              (&TStack_25c0,(void **)&uStack_3188);
          pFVar52 = SBorder::FArguments::BorderImage(pFVar52,pTVar53);
          aTStack_33f8[0] = ResizeLeftRight;
          pTVar54 = TAttribute<TOptional<enum_EMouseCursor::Type>_>::
                    TAttribute<TOptional<enum_EMouseCursor::Type>_><enum_EMouseCursor::Type>
                              (auStack_25e8,aTStack_33f8);
          NStack_2e18.OwnerDeclaration =
               TSlateBaseNamedArgs<SBorder>::Cursor((TSlateBaseNamedArgs<SBorder> *)pFVar52,pTVar54)
          ;
          NStack_2e18.SlotContent = &(NStack_2e18.OwnerDeclaration)->_Content;
          pFVar30 = SSpacer::FArguments::FArguments(&FStack_1660);
          TStack_2e28._s_0.X = (double)fVar72;
          TStack_2e28._s_0.Y = TStack_2e28._s_0.X;
          pTVar55 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                              (&TStack_24d8,(TVector2<double> *)&TStack_2e28._s_0);
          pFVar30 = SSpacer::FArguments::Size(pFVar30,pTVar55);
          pTVar32 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                              (&TStack_29c8,"SSpacer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x39b,&TStack_34b0);
          pTVar33 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar32,&TStack_2a78,pFVar30);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&TStack_2e08,pTVar33);
          pFVar52 = NamedSlotProperty<SBorder::FArguments>::operator[](&NStack_2e18,&TStack_2e08);
          this_03 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                              (&TStack_29e0,"SBorder",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x395,&TStack_34af);
          TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                    (this_03,&TStack_3240,pFVar52);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_29e0._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2e08.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2a78.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_29c8._Widget.SharedReferenceCount.ReferenceController);
          SSpacer::FArguments::~FArguments(&FStack_1660);
          SBorder::FArguments::~FArguments(&FStack_11a8);
          TWeakPtr<SBorder,1>::TWeakPtr<SBorder,1><SBorder>(&TStack_3250,&TStack_3240);
          pFVar68 = pFVar7;
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::<lambda_1>
                    (&<Stack_2b98,pFVar7,&TStack_3250);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::<lambda_2>
                    (&<Stack_2bb0,pFVar68,&TStack_3250);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::<lambda_3>
                    (&<Stack_2bc8,pFVar68,&TStack_3250);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_1>_&>
                              (&TStack_2850,&<Stack_2b98);
          this_01 = TStack_3240.Object;
          SWidget::SetOnMouseButtonDown((SWidget *)TStack_3240.Object,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_2>_&>
                              (&TStack_2838,&<Stack_2bb0);
          SWidget::SetOnMouseButtonUp((SWidget *)this_01,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_3>_&>
                              (&TStack_2820,&<Stack_2bc8);
          SWidget::SetOnMouseMove((SWidget *)this_01,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::
                    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                              (&TStack_2808,&pFVar7->OnColumnSplitterDoubleClick);
          SWidget::SetOnMouseDoubleClick((SWidget *)this_01,pTVar56);
          <Stack_2df8.SplitterHandleSizeCopy = this->SplitterHandleSize;
          <Stack_2df8.SomeColumn = pFVar7;
          TAttribute<FOptionalSize>::TAttribute<FOptionalSize>(&TStack_2ae8);
          pTVar42 = TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
                    CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_4>_&>
                              (&TStack_29b0,&<Stack_2df8);
          TAttribute<FOptionalSize>::Bind(&TStack_2ae8,pTVar42);
          TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
          ~TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>(&TStack_29b0);
          pSVar43 = TSharedPtr<SSplitter,1>::operator->(&TStack_3428);
          pFVar44 = SSplitter::AddSlot(pSVar43,&FStack_408,-1);
          EStack_3478 = SizeToContent;
          pTVar45 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                              (auStack_26e8,&EStack_3478);
          pFVar46 = SSplitter::FSlot::FSlotArguments::SizeRule((FSlotArguments *)pFVar44,pTVar45);
          uStack_34b6 = 0x100;
          pFVar46 = SSplitter::FSlot::FSlotArguments::Resizable(pFVar46,SUB82(&uStack_34b6,0));
          pTVar26 = TAttribute<float>::TAttribute<float><float>(&TStack_26c8,&pFVar7->MinSize);
          pFVar46 = SSplitter::FSlot::FSlotArguments::MinSize(pFVar46,pTVar26);
          pFVar48 = SBox::FArguments::FArguments(&FStack_a88);
          pTVar49 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize>(&TStack_26a8,&TStack_2ae8);
          pFVar48 = SBox::FArguments::WidthOverride(pFVar48,pTVar49);
          pFVar57 = SOverlay::FArguments::FArguments(&FStack_1a90);
          pFVar58 = SOverlay::Slot(&FStack_2538,0);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STableColumnHeader>
                    (&TStack_2db8,&TStack_3488);
          pFVar58 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                              ((FSlotArguments *)pFVar58,&TStack_2db8);
          pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar58);
          pFVar58 = SOverlay::Slot(&FStack_2598,0);
          pFVar58 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                              ((FSlotArgumentsMixin *)&pFVar58->_padding_,HAlign_Right);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&TStack_2dc8,&TStack_3240);
          pFVar58 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                              ((FSlotArguments *)pFVar58,&TStack_2dc8);
          pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar58);
          this_04 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                              (&TStack_2980,"SOverlay",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x3da,&TStack_34ae);
          pTVar59 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                              (this_04,&TStack_2be8,pFVar57);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&TStack_2dd8,pTVar59);
          pFVar48 = SBox::FArguments::operator[](pFVar48,&TStack_2dd8);
          pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                              (&TStack_2998,"SBox",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x3d7,&TStack_34ad);
          pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar50,&TStack_2bd8,pFVar48);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&TStack_2de8,pTVar51);
          TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                    ((FSlotArguments *)pFVar46,&TStack_2de8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2de8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2bd8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2998._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2dd8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2be8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2980._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2dc8.SharedReferenceCount.ReferenceController);
          SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&FStack_2598);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_2db8.SharedReferenceCount.ReferenceController);
          SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&FStack_2538);
          SOverlay::FArguments::~FArguments(&FStack_1a90);
          SBox::FArguments::~FArguments(&FStack_a88);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&FStack_408);
          TAttribute<FOptionalSize>::~TAttribute<FOptionalSize>(&TStack_2ae8);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::~<lambda_3>(&<Stack_2bc8);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::~<lambda_2>(&<Stack_2bb0);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::~<lambda_1>(&<Stack_2b98);
          if (TStack_3250.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar61 = &(TStack_3250.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar4 = *paVar61;
            *paVar61 = (atomic<int>)((int)*paVar61 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)((TStack_3250.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (TStack_3250.WeakReferenceCount.ReferenceController,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_3240.SharedReferenceCount.ReferenceController);
          this = pSStack_33d8;
        }
        else {
          if (TVar5 == FillSized) {
            <Stack_3190.SomeColumn = pFVar7;
            TAttribute<FOptionalSize>::TAttribute<FOptionalSize>
                      ((TAttribute<FOptionalSize> *)auStack_2d78);
            pTVar42 = TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
                      CreateLambda<_SHeaderRow::RegenerateWidgets_::__l22::<lambda_5>_&>
                                (&TStack_2a10,&<Stack_3190);
            TAttribute<FOptionalSize>::Bind((TAttribute<FOptionalSize> *)auStack_2d78,pTVar42);
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
            ~TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>(&TStack_2a10);
            pSVar43 = TSharedPtr<SSplitter,1>::operator->(&TStack_3428);
            pFVar44 = SSplitter::AddSlot(pSVar43,&FStack_168,-1);
            EStack_33fc = SizeToContent;
            pTVar45 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                                (auStack_2688,&EStack_33fc);
            pFVar46 = SSplitter::FSlot::FSlotArguments::SizeRule((FSlotArguments *)pFVar44,pTVar45);
            uStack_34b8 = 0x101;
            pFVar46 = SSplitter::FSlot::FSlotArguments::Resizable(pFVar46,SUB82(&uStack_34b8,0));
            pTVar47 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
                      CreateRaw<SHeaderRow::FColumn>
                                ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                                 auStack_2ca8,pFVar7,(pmf_a95a4bec)0x142a369e0);
            pFVar46 = SSplitter::FSlot::FSlotArguments::OnSlotResized(pFVar46,pTVar47);
            pTVar26 = TAttribute<float>::TAttribute<float><float>(&TStack_2608,&pFVar7->MinSize);
            pFVar46 = SSplitter::FSlot::FSlotArguments::MinSize(pFVar46,pTVar26);
            pFVar48 = SBox::FArguments::FArguments(&FStack_dc8);
            pTVar49 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize>
                                (&TStack_2708,(TAttribute<FOptionalSize> *)auStack_2d78);
            pFVar48 = SBox::FArguments::WidthOverride(pFVar48,pTVar49);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STableColumnHeader>
                      (&TStack_2e38,&TStack_3488);
            pFVar48 = SBox::FArguments::operator[](pFVar48,&TStack_2e38);
            pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                (&TStack_29f8,"SBox",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                                 ,0x3fa,&TStack_34b1);
            pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (pTVar50,&TStack_2a68,pFVar48);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&TStack_2e48,pTVar51);
            TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar46,&TStack_2e48);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_2e48.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_2a68.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_29f8._Widget.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_2e38.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&FStack_dc8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2ca8);
            if ((void *)auStack_2ca8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)auStack_2ca8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)auStack_2ca8);
            TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::
            ~FScopedWidgetSlotArguments(&FStack_168);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2d70);
            if ((void *)auStack_2d70._8_8_ != (void *)0x0) {
              FMemory::Free((void *)auStack_2d70._8_8_);
            }
            this_05 = (FMRSWRecursiveAccessDetector *)auStack_2d70;
            goto LAB_142a34a89;
          }
          bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6856063789322730492>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                              ,0x404,"false");
          if (bVar18) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar16.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_3370.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFStack_33e0);
        lVar70 = lStack_33f0;
      }
      lStack_33f0 = lVar70 + 1;
      uStack_3498 = uStack_3498 + 1;
    } while ((int)uStack_3498 < (this->Columns).Array.ArrayNum);
  }
  pFVar64 = (FSlot *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_34a0.ReferenceController);
  if (((this->Style->HorizontalSeparatorBrush).DrawAs.Value == '\0') ||
     (this->Style->HorizontalSeparatorThickness <= 0.0)) {
    lVar70 = this->_padding_;
    pSStack_2d88 = TStack_3438.Object;
    uStack_2d80 = TStack_3438.SharedReferenceCount.ReferenceController;
    if (TStack_3438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(lVar70 + 0x248))(this,&pSStack_2d88);
    goto LAB_142a35117;
  }
  pSStack_33d8 = *(SHeaderRow **)(this->_padding_ + 0x248);
  pFVar62 = SVerticalBox::FArguments::FArguments(&FStack_24a8);
  pFVar63 = ::operator_new(0x58);
  pFStack_3198 = pFVar64;
  if (pFVar63 != (FSlot *)0x0) {
    *(undefined8 *)pFVar63 = 0;
    *(undefined8 *)&pFVar63->field_0x8 = 0;
    *(undefined8 *)&pFVar63->field_0x10 = 0;
    *(undefined8 *)&pFVar63->field_0x18 = 0;
    *(undefined8 *)&pFVar63->field_0x20 = 0;
    *(undefined8 *)&pFVar63->field_0x28 = 0;
    *(undefined8 *)&pFVar63->field_0x30 = 0;
    *(undefined8 *)&pFVar63->field_0x38 = 0;
    *(undefined8 *)&pFVar63->field_0x40 = 0;
    *(undefined8 *)&pFVar63->field_0x48 = 0;
    *(undefined8 *)&pFVar63->field_0x50 = 0;
    pFStack_3198 = SVerticalBox::FSlot::FSlot(pFVar63);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&puStack_2938,(FSlot *)&pFStack_3198);
  FStack_3210.ReferenceController = TStack_3438.SharedReferenceCount.ReferenceController;
  if (TStack_3438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSStack_2930 = TStack_3438.Object;
  uStack_3218 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_2928,&FStack_3210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3210.ReferenceController);
  pFStack_33e0 = SVerticalBox::FArguments::operator+(pFVar62,(FSlotArguments *)&puStack_2938);
  pFVar63 = ::operator_new(0x58);
  if (pFVar63 != (FSlot *)0x0) {
    *(undefined8 *)pFVar63 = 0;
    *(undefined8 *)&pFVar63->field_0x8 = 0;
    *(undefined8 *)&pFVar63->field_0x10 = 0;
    *(undefined8 *)&pFVar63->field_0x18 = 0;
    *(undefined8 *)&pFVar63->field_0x20 = 0;
    *(undefined8 *)&pFVar63->field_0x28 = 0;
    *(undefined8 *)&pFVar63->field_0x30 = 0;
    *(undefined8 *)&pFVar63->field_0x38 = 0;
    *(undefined8 *)&pFVar63->field_0x40 = 0;
    *(undefined8 *)&pFVar63->field_0x48 = 0;
    *(undefined8 *)&pFVar63->field_0x50 = 0;
    pFVar64 = SVerticalBox::FSlot::FSlot(pFVar63);
  }
  pFStack_3178 = pFVar64;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)apuStack_27f0,(FSlot *)&pFStack_3178);
  pFVar65 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)apuStack_27f0);
  pFVar66 = SSeparator::FArguments::FArguments((FArguments *)auStack_20d0);
  pFVar66->_Thickness = this->Style->HorizontalSeparatorThickness;
  pFVar66->_SeparatorImage = &this->Style->HorizontalSeparatorBrush;
  FLLMScope::FLLMScope(&FStack_3470,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_3170 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_3168,&FStack_3170,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&TStack_3348,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x417,&TStack_34ab);
  FMemScope::~FMemScope(&FStack_3168);
  FLLMScope::~FLLMScope(&FStack_3470);
  pSVar17 = TStack_3348._Widget.Object;
  if ((TStack_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)TStack_3348._Widget.Object,(FSlateBaseNamedArgs *)pFVar66);
  SSeparator::Construct(TStack_3348._Widget.Object,pFVar66);
  if ((TStack_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((TStack_3348._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)((TStack_3348._Widget.Object)->_padding_ + 0x228))
                       (TStack_3348._Widget.Object);
    bVar20 = 0;
    if (cVar19 != '\0') goto LAB_142a34dae;
  }
  else {
LAB_142a34dae:
    bVar20 = 0x20;
  }
  *(byte *)&(TStack_3348._Widget.Object)->_padding_ =
       (byte)(TStack_3348._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(TStack_3348._Widget.Object)->_padding_ =
       (byte)(TStack_3348._Widget.Object)->_padding_ | bVar20;
  if ((TStack_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(TStack_3348._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((TStack_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar16.ReferenceController = TStack_3348._Widget.SharedReferenceCount.ReferenceController;
  TStack_3348._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TStack_3348._Widget.Object = (SSeparator *)0x0;
  if ((pSVar17 == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FStack_3320.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar65->field_0x8 != &uStack_3328) {
    *(SSeparator **)&pFVar65->field_0x8 = pSVar17;
    uStack_3328 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar65->field_0x10,&FStack_3320);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3320.ReferenceController);
  pFVar62 = SVerticalBox::FArguments::operator+(pFStack_33e0,pFVar65);
  FLLMScope::FLLMScope(&FStack_346c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_3160 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_3148,&FStack_3160,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&TStack_2b80,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x40f,aTStack_34aa);
  FMemScope::~FMemScope(&FStack_3148);
  FLLMScope::~FLLMScope(&FStack_346c);
  pTVar67 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&TStack_2b80,&TStack_2a98,pFVar62);
  pSStack_2d98 = pTVar67->Object;
  pTStack_2d90 = (pTVar67->SharedReferenceCount).ReferenceController;
  if (pTStack_2d90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_2d90->SharedReferenceCount = (atomic<int>)((int)pTStack_2d90->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*(code *)pSStack_33d8)(this,&pSStack_2d98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_2b80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1eb0);
  if ((void *)auStack_1eb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_1eb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_1eb0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)auStack_20d0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&FStack_2798);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_27c0);
  if ((void *)auStack_27c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_27c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_27c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_27e0);
  if (apuStack_27f0[0] != (undefined8 *)0x0) {
    (**(code **)*apuStack_27f0[0])(apuStack_27f0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_3438.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&FStack_28e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_2908);
  if ((void *)auStack_2908._8_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_2908._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_2908);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_2928[0].ReferenceController);
  if (puStack_2938 != (undefined8 *)0x0) {
    (**(code **)*puStack_2938)(puStack_2938,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)FStack_24a8._Slots.AllocatorInstance.Data,FStack_24a8._Slots.ArrayNum
            );
  if ((FSlotArguments *)FStack_24a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(FStack_24a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&FStack_24a8);
LAB_142a35117:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_3438.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_3428.SharedReferenceCount.ReferenceController);
  return;
}

// RegenerateWidgets @ 142a32710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::RegenerateWidgets(SHeaderRow *this)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  Type TVar5;
  longlong lVar6;
  FColumn *pFVar7;
  FMargin *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  SWidget *pSVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  FSharedReferencer<1> FVar16;
  STableColumnHeader *this_00;
  SSeparator *pSVar17;
  SBorder *this_01;
  bool bVar18;
  char cVar19;
  byte bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  FArguments *pFVar24;
  FSlotArguments *pFVar25;
  TAttribute<float> *pTVar26;
  FArguments *pFVar27;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *pTVar28;
  TSharedRef<SSplitter,1> *pTVar29;
  FArguments *pFVar30;
  TAttribute<EVisibility> *pTVar31;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *pTVar32;
  TSharedRef<SSpacer,1> *pTVar33;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  bool *pbVar34;
  ISlateStyle *pIVar35;
  FText *pFVar36;
  FSlateIcon *pFVar37;
  undefined8 *puVar38;
  TSharedRef<SWidget,1> *pTVar39;
  ulong64 uVar40;
  FArguments *pFVar41;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *pTVar42;
  SSplitter *pSVar43;
  FScopedWidgetSlotArguments *pFVar44;
  TAttribute<SSplitter::ESizeRule> *pTVar45;
  FSlotArguments *pFVar46;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *pTVar47;
  FArguments *pFVar48;
  TAttribute<FOptionalSize> *pTVar49;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar50;
  TSharedRef<SBox,1> *pTVar51;
  FArguments *pFVar52;
  TAttribute<FSlateBrush_const_*> *pTVar53;
  TAttribute<TOptional<EMouseCursor::Type>_> *pTVar54;
  TAttribute<UE::Math::TVector2<double>_> *pTVar55;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_03;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  *pTVar56;
  FArguments *pFVar57;
  FSlotArguments *pFVar58;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SOverlay,1> *pTVar59;
  float *pfVar60;
  atomic<int> *paVar61;
  FArguments *pFVar62;
  FSlot *pFVar63;
  FSlot *pFVar64;
  FSlotArguments *pFVar65;
  FArguments *pFVar66;
  TSharedRef<SVerticalBox,1> *pTVar67;
  FMRSWRecursiveAccessDetector *this_05;
  FColumn *pFVar68;
  uint uVar69;
  longlong lVar70;
  TReferenceControllerBase<1> *pTVar71;
  float fVar72;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar73;
  undefined1 auStackY_3508 [32];
  undefined2 local_34b8;
  undefined2 local_34b6;
  T0RequiredArgs local_34b4;
  T0RequiredArgs local_34b3;
  T0RequiredArgs local_34b2;
  T0RequiredArgs local_34b1;
  T0RequiredArgs local_34b0;
  T0RequiredArgs local_34af;
  T0RequiredArgs local_34ae;
  T0RequiredArgs local_34ad;
  T0RequiredArgs local_34ac;
  T0RequiredArgs local_34ab;
  T0RequiredArgs local_34aa [2];
  STableColumnHeader *local_34a8;
  FSharedReferencer<1> FStack_34a0;
  uint local_3498;
  TSharedRef<STableColumnHeader,1> local_3488;
  ESizeRule local_3478;
  FLLMScope local_3474;
  FLLMScope local_3470;
  FLLMScope local_346c;
  undefined1 local_3468 [8];
  FDelegateAllocation local_3460;
  undefined1 local_3450 [8];
  FDelegateAllocation local_3448;
  TSharedRef<SHorizontalBox,1> local_3438;
  TSharedPtr<SSplitter,1> local_3428;
  TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
  local_3418;
  float local_3400;
  ESizeRule local_33fc;
  Type local_33f8 [2];
  longlong local_33f0;
  FName local_33e8;
  FArguments *local_33e0;
  SHeaderRow *local_33d8;
  undefined1 local_33d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_33c8;
  ForAnyElementType FStack_33c0;
  ulonglong local_33b8;
  undefined1 local_33b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_33a8;
  ForAnyElementType FStack_33a0;
  ulonglong local_3398;
  undefined4 local_3390;
  undefined1 local_338c;
  undefined1 local_3388 [8];
  FDelegateAllocation FStack_3380;
  TSharedRef<SWidget,1> local_3370;
  code *local_3358;
  undefined4 uStack_3350;
  uint uStack_334c;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_3348;
  TReferenceControllerBase<1> *local_3330;
  undefined8 local_3328;
  FSharedReferencer<1> local_3320;
  FName local_3318;
  FName local_3310;
  undefined8 local_3308;
  undefined8 local_3300;
  FName local_32f8;
  undefined1 local_32f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_32d8;
  ForAnyElementType FStack_32d0;
  ulonglong local_32c8;
  float local_32c0;
  undefined1 local_32bc;
  undefined1 local_32b8 [8];
  void *pvStack_32b0;
  undefined8 local_32a8;
  undefined4 local_32a0;
  undefined1 local_329c;
  undefined1 local_3298 [8];
  void *pvStack_3290;
  undefined8 local_3288;
  undefined4 local_3280;
  undefined1 local_327c;
  undefined1 local_3278 [8];
  void *pvStack_3270;
  undefined4 local_3268;
  FMargin local_3260;
  TWeakPtr<SBorder,1> local_3250;
  TSharedRef<SBorder,1> local_3240;
  STableColumnHeader *local_3228;
  FSharedReferencer<1> FStack_3220;
  undefined8 local_3218;
  FSharedReferencer<1> local_3210;
  undefined1 local_3208 [8];
  undefined1 local_3200 [8];
  void *pvStack_31f8;
  undefined8 local_31f0;
  TAttribute<FOptionalSize> local_31e8;
  undefined4 local_31c8;
  undefined1 local_31c4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_31c0;
  longlong local_31a8;
  FMemScope local_31a0;
  FSlot *local_3198;
  <lambda_5> local_3190;
  undefined8 local_3188;
  SWidget *local_3180;
  FSlot *local_3178;
  FName local_3170;
  FMemScope local_3168;
  FName local_3160;
  undefined8 local_3158;
  FSharedReferencer<1> local_3150;
  FMemScope local_3148;
  TReferenceControllerBase<1> *local_3140;
  undefined1 local_3138 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3110;
  ForAnyElementType FStack_3108;
  ulonglong local_3100;
  undefined1 local_30f8 [80];
  undefined1 local_30a8 [8];
  void *pvStack_30a0;
  undefined8 local_3098;
  float local_3090;
  bool local_308c;
  undefined1 local_3088 [8];
  void *pvStack_3080;
  undefined8 local_3078;
  FOptionalSize local_3070;
  bool local_306c;
  undefined1 local_3068 [8];
  void *pvStack_3060;
  undefined8 local_3058;
  FOptionalSize local_3050;
  bool local_304c;
  undefined1 local_3048 [8];
  void *pvStack_3040;
  undefined8 local_3038;
  undefined1 local_3030 [24];
  undefined1 local_3018 [8];
  void *pvStack_3010;
  undefined8 local_3008;
  undefined1 local_3000 [24];
  undefined1 local_2fe8 [8];
  void *pvStack_2fe0;
  undefined8 local_2fd8;
  undefined1 local_2fd0 [128];
  undefined1 local_2f50 [8];
  void *pvStack_2f48;
  undefined8 local_2f40;
  int local_2f38;
  bool local_2f34;
  undefined1 local_2f30 [8];
  void *pvStack_2f28;
  undefined8 local_2f20;
  undefined1 local_2f18 [8];
  undefined1 local_2f10 [8];
  void *pvStack_2f08;
  undefined8 local_2f00;
  undefined1 local_2ef8 [8];
  undefined1 local_2ef0 [8];
  void *pvStack_2ee8;
  undefined8 local_2ee0;
  undefined1 local_2ed8 [8];
  undefined1 local_2ed0 [8];
  void *pvStack_2ec8;
  undefined8 local_2ec0;
  int local_2eb8;
  bool local_2eb4;
  undefined1 local_2eb0 [8];
  void *pvStack_2ea8;
  undefined8 local_2ea0;
  undefined1 local_2e98 [8];
  undefined1 local_2e90 [8];
  void *pvStack_2e88;
  undefined8 local_2e80;
  bool local_2e77;
  bool local_2e75;
  bool local_2e70;
  undefined1 local_2e68 [8];
  void *pvStack_2e60;
  undefined8 local_2e58;
  undefined4 local_2e50;
  TSharedRef<SWidget,1> local_2e48;
  TSharedRef<SWidget,1> local_2e38;
  TVector2<double>_u_0 local_2e28;
  NamedSlotProperty<SBorder::FArguments> local_2e18;
  TSharedRef<SWidget,1> local_2e08;
  <lambda_4> local_2df8;
  TSharedRef<SWidget,1> local_2de8;
  TSharedRef<SWidget,1> local_2dd8;
  TSharedRef<SWidget,1> local_2dc8;
  TSharedRef<SWidget,1> local_2db8;
  TSharedRef<SWidget,1> local_2da8;
  SVerticalBox *local_2d98;
  TReferenceControllerBase<1> *local_2d90;
  SHorizontalBox *local_2d88;
  undefined8 uStack_2d80;
  undefined1 local_2d78 [8];
  undefined1 local_2d70 [24];
  TSharedRef<SWidget,1> local_2d58;
  TSharedRef<SWidget,1> local_2d48;
  FDestructionSentinel local_2d38;
  FDestructionSentinel local_2d20;
  FDestructionSentinel local_2d08;
  FDestructionSentinel local_2cf0;
  FDestructionSentinel local_2cd8;
  T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&> local_2cc0;
  undefined1 local_2ca8 [24];
  FDestructionSentinel local_2c90;
  FDestructionSentinel local_2c78;
  FDelegateAllocation *local_2c60;
  FDestructionSentinel local_2c58;
  FDelegateAllocation *local_2c40;
  FDestructionSentinel local_2c38;
  FDelegateAllocation *local_2c20;
  TVector2<double>_u_0 local_2c18;
  undefined1 local_2c08;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> local_2c00;
  TSharedRef<SOverlay,1> local_2be8;
  TSharedRef<SBox,1> local_2bd8;
  <lambda_3> local_2bc8;
  <lambda_2> local_2bb0;
  <lambda_1> local_2b98;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2b80;
  FMargin local_2b68;
  TSharedRef<SWidget,1> local_2b58;
  FText local_2b48;
  FText local_2b38;
  TSharedRef<SWidget,1> local_2b28;
  FText local_2b18;
  TSharedPtr<FUICommandList_const_,1> local_2b08;
  TSharedPtr<FExtender,1> local_2af8;
  TAttribute<FOptionalSize> local_2ae8;
  TSharedRef<SSplitter,1> local_2ac8;
  TSharedRef<SSpacer,1> local_2ab8;
  code *local_2aa8;
  longlong lStack_2aa0;
  TSharedRef<SVerticalBox,1> local_2a98;
  TSharedRef<SBox,1> local_2a88;
  TSharedRef<SSpacer,1> local_2a78;
  TSharedRef<SBox,1> local_2a68;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2a58;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_2a40;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_2a28;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> local_2a10;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_29f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_29e0;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_29c8;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> local_29b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2998;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2980;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2968;
  SWidget *local_2948;
  TReferenceControllerBase<1> *pTStack_2940;
  undefined8 *local_2938;
  SHorizontalBox *local_2930;
  FSharedReferencer<1> local_2928 [4];
  undefined1 local_2908 [40];
  FSlotArgumentsMixin local_28e0;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  local_2850;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  local_2838;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  local_2820;
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  local_2808;
  undefined8 *local_27f0 [2];
  TReferenceControllerBase<1> *local_27e0;
  undefined1 local_27c0 [40];
  FSlotArgumentsMixin local_2798;
  TAttribute<FOptionalSize> local_2708;
  undefined1 local_26e8 [32];
  TAttribute<float> local_26c8;
  TAttribute<FOptionalSize> local_26a8;
  undefined1 local_2688 [32];
  TAttribute<float> local_2668;
  TAttribute<EVisibility> local_2648;
  FSlateIcon local_2628;
  TAttribute<float> local_2608;
  undefined1 local_25e8 [40];
  TAttribute<FSlateBrush_const_*> local_25c0;
  FSlotArguments local_2598;
  FSlotArguments local_2538;
  TAttribute<UE::Math::TVector2<double>_> local_24d8;
  FArguments local_24a8;
  FSlotArguments local_22a0;
  FSlotArguments local_21b8;
  undefined1 local_20d0 [544];
  undefined1 local_1eb0 [24];
  FArguments local_1e98;
  FArguments local_1c98;
  FArguments local_1a90;
  FArguments local_1888;
  FArguments local_1660;
  FArguments local_1438;
  FArguments local_11a8;
  FArguments local_dc8;
  FArguments local_a88;
  FArguments local_748;
  FScopedWidgetSlotArguments local_408;
  FScopedWidgetSlotArguments local_328;
  FScopedWidgetSlotArguments local_248;
  FScopedWidgetSlotArguments local_168;
  ulonglong local_88;
  undefined8 uStack_30;
  
  fVar15 = __real_40a00000;
  fVar14 = __real_40800000;
  uStack_30 = 0x142a32734;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3508;
  bVar13 = false;
  bVar12 = false;
  bVar21 = false;
  local_3478 = SizeToContent;
  fVar73 = __real_40a00000;
  if (0.0 < this->SplitterHandleSize) {
    fVar73 = this->SplitterHandleSize + __real_40800000;
  }
  local_33d8 = this;
  TArray<TSharedPtr<STableColumnHeader,1>,TSizedDefaultAllocator<32>_>::Empty
            (&this->HeaderWidgets,0);
  local_3428.Object = (SSplitter *)0x0;
  local_3428.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar24 = SHorizontalBox::FArguments::FArguments(&local_1c98);
  pFVar25 = SHorizontalBox::Slot(&local_21b8);
  local_3400 = 1.0;
  pTVar26 = TAttribute<float>::TAttribute<float>(&local_2668,&local_3400);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar25,pTVar26);
  pFVar27 = SSplitter::FArguments::FArguments(&local_1438);
  uStack_3350 = 0;
  pFVar27->_Style = &this->Style->ColumnSplitterStyle;
  pFVar27->_ResizeMode = this->ResizeMode;
  pFVar27->_PhysicalSplitterHandleSize = this->SplitterHandleSize;
  local_3358 = GetRowSizeForSlotIndex;
  lStack_2aa0 = (ulonglong)uStack_334c << 0x20;
  local_2aa8 = GetRowSizeForSlotIndex;
  pFVar27->_HitDetectionSplitterHandleSize = fVar73;
  pFVar27 = SSplitter::FArguments::OnGetMaxSlotSize<SHeaderRow>
                      (pFVar27,this,(pmf_4196fb9e *)&local_2aa8);
  pTVar28 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                      (&local_2a28,"SSplitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x328,&local_34b4);
  pTVar28 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (pTVar28,&local_3428);
  pTVar29 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar28,&local_2ac8,pFVar27);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_2d48,pTVar29);
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&local_2d48);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar25);
  pFVar25 = SHorizontalBox::Slot(&local_22a0);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar25);
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0);
  pFVar30 = SSpacer::FArguments::FArguments(&local_1888);
  local_2c18._s_0.X = (double)(this->ScrollBarThickness).field0_0x0._s_0.X;
  local_2c08 = 1;
  local_2c18._s_0.Y = (double)(this->ScrollBarThickness).field0_0x0._s_0.Y;
  local_2c00._0_8_ = 0;
  local_2c00._8_8_ = 0;
  local_2c00._16_8_ = 0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>(&local_2c00);
  pFVar30 = SSpacer::FArguments::Size
                      (pFVar30,(TAttribute<UE::Math::TVector2<double>_> *)&local_2c18._s_0);
  pTVar31 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2648,&this->ScrollBarVisibility)
  ;
  pFVar30 = TSlateBaseNamedArgs<SSpacer>::Visibility
                      ((TSlateBaseNamedArgs<SSpacer> *)pFVar30,pTVar31);
  pTVar32 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_2a40,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x334,&local_34b3);
  pTVar33 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar32,&local_2ab8,pFVar30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&local_2d58,pTVar33);
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&local_2d58);
  pFVar24 = SHorizontalBox::FArguments::operator+(pFVar24,pFVar25);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2a58,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                       ,0x324,&local_34b2);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_3438,pFVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ab8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a40._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_1888);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_22a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ac8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a28._Widget.SharedReferenceCount.ReferenceController);
  SSplitter::FArguments::~FArguments(&local_1438);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21b8);
  SHorizontalBox::FArguments::~FArguments(&local_1c98);
  uVar69 = (this->Columns).Array.ArrayNum - 1;
  fVar73 = fVar73 * __real_3f000000 + __real_3f800000;
  if (-1 < (int)uVar69) {
    lVar70 = (longlong)(int)uVar69 << 3;
    do {
      uVar22 = 0;
      if ((int)uVar69 < (this->Columns).Array.ArrayNum) {
        uVar22 = ~uVar69 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar6 = *(longlong *)((this->Columns).Array.AllocatorInstance.Data + lVar70);
      if (((*(char *)(lVar6 + 0x219) == '\0') ||
          (pbVar34 = TAttribute<bool>::Get((TAttribute<bool> *)(lVar6 + 0x218)), *pbVar34 != false))
         && (*(char *)(lVar6 + 600) != '\0')) break;
      lVar70 = lVar70 + -8;
      uVar69 = uVar69 - 1;
    } while (-1 < (int)uVar69);
  }
  local_34a8 = (STableColumnHeader *)0x0;
  FStack_34a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3498 = 0;
  if (0 < (this->Columns).Array.ArrayNum) {
    local_31a8 = (longlong)(int)uVar69;
    uVar69 = uStack_2d80._4_4_;
    local_33f0 = 0;
    uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
    do {
      lVar70 = local_33f0;
      uVar22 = 0;
      if ((int)local_3498 < (this->Columns).Array.ArrayNum) {
        uVar22 = ~local_3498 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = *(FColumn **)((this->Columns).Array.AllocatorInstance.Data + lVar70 * 8);
      if ((((pFVar7->ShouldGenerateWidget).bIsSet == false) ||
          (pbVar34 = TAttribute<bool>::Get(&pFVar7->ShouldGenerateWidget), *pbVar34 != false)) &&
         (pFVar7->bIsVisible != false)) {
        local_33e0 = (FArguments *)FStack_34a0.ReferenceController;
        if ((FArguments *)FStack_34a0.ReferenceController != (FArguments *)0x0) {
          LOCK();
          (FStack_34a0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_34a0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_34a8 = (STableColumnHeader *)0x0;
        local_3158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_34a0,&local_3150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3150.ReferenceController);
        local_3370.SharedReferenceCount.ReferenceController =
             (pFVar7->HeaderMenuContent).Widget.SharedReferenceCount.ReferenceController;
        local_3370.Object = (pFVar7->HeaderMenuContent).Widget.Object;
        local_3260.Top = 0.0;
        local_3260.Bottom = 0.0;
        if (local_3370.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_3370.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3370.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        local_3260.Left = fVar73;
        local_3260.Right = fVar73;
        if ((this->bCanSelectGeneratedColumn != false) &&
           (local_3370.Object != SNullWidget::NullWidget.Object)) {
          local_3098 = 0;
          local_3078 = 0;
          local_3058 = 0;
          local_3038 = 0;
          local_3070.Size = FOptionalSize::Unspecified;
          local_3050.Size = FOptionalSize::Unspecified;
          local_30f8._4_4_ = HAlign_Fill;
          local_30f8[0xc] = false;
          local_30f8[0x14] = false;
          local_30f8[0x1c] = false;
          local_30f8[0x24] = false;
          local_30f8[0x2c] = false;
          local_30f8[0x34] = false;
          local_30f8[0x3c] = false;
          local_30f8[0x44] = false;
          local_30f8._72_4_ = 0.0;
          local_30f8[0x4c] = false;
          local_30a8 = (undefined1  [8])0x0;
          pvStack_30a0 = (void *)0x0;
          local_3090 = 0.0;
          local_308c = false;
          local_3088 = (undefined1  [8])0x0;
          pvStack_3080 = (void *)0x0;
          local_306c = false;
          local_3068 = (undefined1  [8])0x0;
          pvStack_3060 = (void *)0x0;
          local_304c = false;
          local_3048 = (undefined1  [8])0x0;
          pvStack_3040 = (void *)0x0;
          local_30f8[0] = true;
          local_32f8.ComparisonIndex.Value = 0;
          local_32f8.Number = 0;
          pIVar35 = FAppStyle::Get();
          local_3300 = 0;
          local_2af8.Object = (FExtender *)0x0;
          local_2af8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b08.Object = (FUICommandList *)0x0;
          local_2b08.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FBaseMenuBuilder::FBaseMenuBuilder
                    ((FBaseMenuBuilder *)local_2fd0,Menu,true,&local_2b08,false,&local_2af8,pIVar35,
                     (FName)0x0,local_32f8);
          local_2fd0._96_4_ = 0;
          local_2fd0._100_4_ = 0;
          local_2fd0._0_8_ = &___7FMenuBuilder__6B_;
          FText::FText((FText *)(local_2fd0 + 0x68));
          local_2fd0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_2fd0[0x79] = false;
          local_2f40 = 0;
          local_2f50 = (undefined1  [8])0x0;
          pvStack_2f48 = (void *)0x0;
          memset(&local_2f38,0,200);
          local_2f38 = 0;
          local_2f20 = 0;
          local_2f00 = 0;
          local_2f34 = false;
          local_2f30 = (undefined1  [8])0x0;
          pvStack_2f28 = (void *)0x0;
          local_2f18[0] = false;
          local_2f18[1] = false;
          local_2f10 = (undefined1  [8])0x0;
          pvStack_2f08 = (void *)0x0;
          local_2ef8[0] = false;
          local_2ef8[1] = false;
          local_2ec0 = 0;
          local_2ea0 = 0;
          local_2e80 = 0;
          local_2e58 = 0;
          local_2ef0 = (undefined1  [8])0x0;
          pvStack_2ee8 = (void *)0x0;
          local_2ee0 = 0;
          local_2ed8[0] = false;
          local_2ed8[1] = false;
          local_2ed0 = (undefined1  [8])0x0;
          pvStack_2ec8 = (void *)0x0;
          local_2eb8 = 0;
          local_2eb4 = false;
          local_2eb0 = (undefined1  [8])0x0;
          pvStack_2ea8 = (void *)0x0;
          local_2e98[0] = Preferred;
          local_2e98[1] = false;
          local_2e90 = (undefined1  [8])0x0;
          pvStack_2e88 = (void *)0x0;
          local_2e77 = false;
          local_2e75 = false;
          local_2e70 = false;
          local_2e68 = (undefined1  [8])0x0;
          pvStack_2e60 = (void *)0x0;
          local_2e50._0_1_ = false;
          local_2e50._1_1_ = true;
          local_2e50._2_1_ = true;
          local_2e50._3_1_ = false;
          FMenuBuilder::AddSearchWidget((FMenuBuilder *)local_2fd0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_33d0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_33d0[1] = false;
          local_33b8 = 0;
          local_33c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_33c0.Data = (FScriptContainerElement *)0x0;
          FSlateIcon::FSlateIcon((FSlateIcon *)local_3138);
          local_3138[0x20] = false;
          local_3100 = 0;
          local_3110.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_3108.Data = (FScriptContainerElement *)0x0;
          pFVar36 = FText::FText(&local_2b18);
          FText::FText((FText *)local_32f0,pFVar36);
          local_32f0[0x10] = true;
          local_32c8 = 0;
          local_32d8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_32d0.Data = (FScriptContainerElement *)0x0;
          pFVar36 = FText::GetEmpty();
          FMenuBuilder::AddWidget
                    ((FMenuBuilder *)local_2fd0,&(pFVar7->HeaderMenuContent).Widget,pFVar36,
                     (FMenuEntryStyleParams *)local_30f8,true,(TAttribute<FText> *)local_32f0,
                     (TAttribute<FSlateIcon> *)local_3138,(TAttribute<EVisibility> *)local_33d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_32d8,(FWriteAccessScope *)&local_2d38);
          if (((int)local_32c8 != 0) && (FStack_32d0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_32d0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_32d0,0,0,0x10);
            local_32c8 = local_32c8 & 0xffffffff00000000;
          }
          if (local_2d38.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d38.Accessor,&local_2d38);
          }
          if (FStack_32d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_32d0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_32d8.AccessDetector);
          if ((ITextData *)local_32f0._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_32f0._0_8_ + 0x10))();
          }
          if (local_2b18.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b18.TextData.Reference + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3110,(FWriteAccessScope *)&local_2d20);
          if (((int)local_3100 != 0) && (FStack_3108.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_3108.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_3108,0,0,0x10);
            local_3100 = local_3100 & 0xffffffff00000000;
          }
          if (local_2d20.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d20.Accessor,&local_2d20);
          }
          if (FStack_3108.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_3108.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3110.AccessDetector);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_33c8,(FWriteAccessScope *)&local_2d08);
          if (((int)local_33b8 != 0) && (FStack_33c0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_33c0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_33c0,0,0,0x10);
            local_33b8 = local_33b8 & 0xffffffff00000000;
          }
          if (local_2d08.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d08.Accessor,&local_2d08);
          }
          if (FStack_33c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_33c0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_33c8.AccessDetector);
          local_33b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_33b0[1] = false;
          local_3398 = 0;
          local_3308 = 0;
          local_33a8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_33a0.Data = (FScriptContainerElement *)0x0;
          FMenuBuilder::AddMenuSeparator
                    ((FMenuBuilder *)local_2fd0,(FName)0x0,(TAttribute<EVisibility> *)local_33b0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_33a8,(FWriteAccessScope *)&local_2cf0);
          if (((int)local_3398 != 0) && (FStack_33a0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_33a0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_33a0,0,0,0x10);
            local_3398 = local_3398 & 0xffffffff00000000;
          }
          if (local_2cf0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cf0.Accessor,&local_2cf0);
          }
          if (FStack_33a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_33a0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_33a8.AccessDetector);
          local_3208[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_3208[1] = false;
          local_31f0 = 0;
          local_3200 = (undefined1  [8])0x0;
          pvStack_31f8 = (void *)0x0;
          local_3310.ComparisonIndex.Value = 0;
          local_3310.Number = 0;
          local_3318.ComparisonIndex.Value = 0;
          local_3318.Number = 0;
          pFVar37 = FSlateIcon::FSlateIcon(&local_2628);
          local_3468 = (undefined1  [8])0x0;
          local_3460.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3460.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3468,
                     (FWriteAccessScope *)&local_2c58);
          local_2c40 = &local_3460;
          puVar38 = UE::Core::Private::DelegateAllocate(0x38,&local_3460);
          pTVar71 = local_3330;
          if (puVar38 != (undefined8 *)0x0) {
            uStack_3350 = 0;
            local_3358 = OnGenerateSelectColumnsSubMenu;
            uStack_334c = uVar69;
            pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                                ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2b28);
            pTVar71 = (pTVar39->SharedReferenceCount).ReferenceController;
            local_3180 = pTVar39->Object;
            if (pTVar71 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar71->SharedReferenceCount = (atomic<int>)((int)pTVar71->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar71->SharedReferenceCount = (atomic<int>)((int)pTVar71->SharedReferenceCount + 1);
              UNLOCK();
            }
            bVar13 = true;
            bVar12 = true;
            bVar21 = true;
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            local_3330 = pTVar71;
            local_3140 = pTVar71;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseSPMethodDelegateInstance__0A_VSHeaderRow___00__A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[3] = local_3180;
            puVar38[4] = pTVar71;
            if (pTVar71 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar71->WeakReferenceCount = (atomic<int>)((int)pTVar71->WeakReferenceCount + 1);
              UNLOCK();
            }
            puVar38[5] = local_3358;
            puVar38[6] = CONCAT44(uStack_334c,uStack_3350);
          }
          if (bVar21) {
            bVar21 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar71);
          }
          if (bVar12) {
            bVar12 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3140);
          }
          if (bVar13) {
            bVar13 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2b28.SharedReferenceCount.ReferenceController);
          }
          if (local_2c58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c58.Accessor,&local_2c58);
          }
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_2b48,L"SHeaderRow",L"SelectColumns_Tooltip",
                               L"Show/hide columns");
          FText::FText((FText *)local_3000,pFVar36);
          local_3000[0x10] = true;
          local_2fd8 = 0;
          local_2fe8 = (undefined1  [8])0x0;
          pvStack_2fe0 = (void *)0x0;
          pFVar36 = FText::AsLocalizable_Advanced_LocText
                              (&local_2b38,L"SHeaderRow",L"SelectColumns",L"Select Columns");
          FText::FText((FText *)local_3030,pFVar36);
          local_3030[0x10] = true;
          local_3008 = 0;
          local_3018 = (undefined1  [8])0x0;
          pvStack_3010 = (void *)0x0;
          FMenuBuilder::AddSubMenu
                    ((FMenuBuilder *)local_2fd0,(TAttribute<FText> *)local_3030,
                     (TAttribute<FText> *)local_3000,
                     (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                     local_3468,false,pFVar37,true,local_3318,local_3310,
                     (TAttribute<EVisibility> *)local_3208);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3018);
          if (pvStack_3010 != (void *)0x0) {
            FMemory::Free(pvStack_3010);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3018);
          if ((ITextData *)local_3030._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_3030._0_8_ + 0x10))();
          }
          if (local_2b38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b38.TextData.Reference + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2fe8);
          if (pvStack_2fe0 != (void *)0x0) {
            FMemory::Free(pvStack_2fe0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2fe8);
          if ((ITextData *)local_3000._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_3000._0_8_ + 0x10))();
          }
          if (local_2b48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b48.TextData.Reference + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3468,
                     (FWriteAccessScope *)&local_2cd8);
          if ((local_3460.DelegateSize != 0) &&
             (local_3460.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3460.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3460,0,0,0x10);
            local_3460.DelegateSize = 0;
          }
          if (local_2cd8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2cd8.Accessor,&local_2cd8);
          }
          if (local_3460.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3460.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3468);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3200);
          if (pvStack_31f8 != (void *)0x0) {
            FMemory::Free(pvStack_31f8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3200);
          pTVar39 = FMenuBuilder::MakeWidget
                              ((FMenuBuilder *)local_2fd0,&local_2b58,
                               (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                                *)0x0);
          pSVar11 = pTVar39->Object;
          pTVar71 = (pTVar39->SharedReferenceCount).ReferenceController;
          *(undefined4 *)&pTVar39->Object = local_3370.Object._0_4_;
          *(undefined4 *)((longlong)&pTVar39->Object + 4) = local_3370.Object._4_4_;
          *(undefined4 *)&(pTVar39->SharedReferenceCount).ReferenceController =
               local_3370.SharedReferenceCount.ReferenceController._0_4_;
          *(undefined4 *)((longlong)&(pTVar39->SharedReferenceCount).ReferenceController + 4) =
               local_3370.SharedReferenceCount.ReferenceController._4_4_;
          local_3370.Object = pSVar11;
          local_3370.SharedReferenceCount.ReferenceController = pTVar71;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2b58.SharedReferenceCount.ReferenceController);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e68);
          if (pvStack_2e60 != (void *)0x0) {
            FMemory::Free(pvStack_2e60);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2e68);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e90);
          if (pvStack_2e88 != (void *)0x0) {
            FMemory::Free(pvStack_2e88);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2e90);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2eb0);
          if (pvStack_2ea8 != (void *)0x0) {
            FMemory::Free(pvStack_2ea8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2eb0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ed0);
          if (pvStack_2ec8 != (void *)0x0) {
            FMemory::Free(pvStack_2ec8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2ed0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ef0);
          if (pvStack_2ee8 != (void *)0x0) {
            FMemory::Free(pvStack_2ee8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2ef0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f10);
          if (pvStack_2f08 != (void *)0x0) {
            FMemory::Free(pvStack_2f08);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2f10);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f30);
          if (pvStack_2f28 != (void *)0x0) {
            FMemory::Free(pvStack_2f28);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2f30);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f50);
          if (pvStack_2f48 != (void *)0x0) {
            FMemory::Free(pvStack_2f48);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2f50);
          if ((ITextData *)local_2fd0._104_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_2fd0._104_8_ + 0x10))();
          }
          FBaseMenuBuilder::~FBaseMenuBuilder((FBaseMenuBuilder *)local_2fd0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3048);
          if (pvStack_3040 != (void *)0x0) {
            FMemory::Free(pvStack_3040);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3048);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3068);
          if (pvStack_3060 != (void *)0x0) {
            FMemory::Free(pvStack_3060);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3068);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3088);
          if (pvStack_3080 != (void *)0x0) {
            FMemory::Free(pvStack_3080);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3088);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30a8);
          if (pvStack_30a0 != (void *)0x0) {
            FMemory::Free(pvStack_30a0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_30a8);
        }
        pFVar41 = STableColumnHeader::FArguments::FArguments(&local_1e98);
        lVar70 = 0x650;
        if (local_33f0 != local_31a8) {
          lVar70 = 0x10;
        }
        local_2cc0.Arg1 = &local_3370;
        pFVar41->_Style = (FTableColumnHeaderStyle *)(&this->Style->field_0x0 + lVar70);
        local_2cc0.Arg2 = &local_3260;
        local_2cc0.Arg0 = pFVar7;
        FLLMScope::FLLMScope
                  (&local_3474,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_33e8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_31a0,&local_33e8,true);
        TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
        ::
        TSlateDecl<STableColumnHeader,RequiredArgs::T3RequiredArgs<SHeaderRow::FColumn_&,TSharedRef<SWidget,1>_&,FMargin_&>_>
                  (&local_3418,"STableColumnHeader",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                   ,0x36a,&local_2cc0);
        FMemScope::~FMemScope(&local_31a0);
        FLLMScope::~FLLMScope(&local_3474);
        this_00 = local_3418._Widget.Object;
        FVar16.ReferenceController = FStack_34a0.ReferenceController;
        if ((FArguments *)local_3418._Widget.SharedReferenceCount.ReferenceController !=
            (FArguments *)0x0) {
          LOCK();
          (local_3418._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3418._Widget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_34a8 = local_3418._Widget.Object;
        FStack_34a0.ReferenceController =
             local_3418._Widget.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar16.ReferenceController);
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar41);
        pFVar8 = (local_3418._RequiredArgs)->Arg2;
        local_2b68.Left = pFVar8->Left;
        local_2b68.Top = pFVar8->Top;
        local_2b68.Right = pFVar8->Right;
        local_2b68.Bottom = pFVar8->Bottom;
        STableColumnHeader::Construct
                  (this_00,pFVar41,(local_3418._RequiredArgs)->Arg0,(local_3418._RequiredArgs)->Arg1
                   ,&local_2b68);
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((this_00->_padding_ & 0x10) == 0) {
          cVar19 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
          bVar20 = 0;
          if (cVar19 != '\0') goto LAB_142a33a8b;
        }
        else {
LAB_142a33a8b:
          bVar20 = 0x20;
        }
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar20;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar16.ReferenceController = local_3418._Widget.SharedReferenceCount.ReferenceController;
        local_3488.Object = this_00;
        local_3488.SharedReferenceCount.ReferenceController =
             local_3418._Widget.SharedReferenceCount.ReferenceController;
        local_3418._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_3418._Widget.Object = (STableColumnHeader *)0x0;
        if ((this_00 == (STableColumnHeader *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1e98);
        pTVar3 = &this->HeaderWidgets;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_34a8) &&
            ((FScriptContainerElement *)&local_34a8 <
             pFVar9 + (longlong)(this->HeaderWidgets).ArrayMax * 0x10)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar23 = (this->HeaderWidgets).ArrayNum;
        piVar2 = &(this->HeaderWidgets).ArrayMax;
        if (iVar23 == *piVar2) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->HeaderWidgets).ArrayNum = iVar23 + 1;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        *(STableColumnHeader **)(pFVar9 + (longlong)iVar23 * 0x10) = local_34a8;
        *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar23 * 0x10 + 8) =
             FStack_34a0.ReferenceController;
        if ((FArguments *)FStack_34a0.ReferenceController != (FArguments *)0x0) {
          LOCK();
          (FStack_34a0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_34a0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TVar5 = pFVar7->SizeRule;
        if (TVar5 == Fill) {
          local_3390 = 0;
          local_338c = 1;
          FStack_3380.DelegateSize = 0;
          FStack_3380._12_4_ = 0;
          local_3388 = (undefined1  [8])0x0;
          FStack_3380.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3388,
                     (FWriteAccessScope *)&local_2c38);
          local_2c20 = &FStack_3380;
          puVar38 = UE::Core::Private::DelegateAllocate(0x28,&FStack_3380);
          if (puVar38 != (undefined8 *)0x0) {
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseRawMethodDelegateInstance__00__CBVFColumn_SHeaderRow____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[4] = FColumn::GetWidth;
            puVar38[3] = pFVar7;
          }
          if (local_2c38.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c38.Accessor,&local_2c38);
          }
          if ((local_3428.Object == (SSplitter *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar44 = SSplitter::AddSlot(local_3428.Object,&local_248,-1);
          local_3280 = local_3390;
          local_327c = local_338c;
          local_3278 = (undefined1  [8])0x0;
          pvStack_3270 = (void *)0x0;
          local_3268 = 0;
          TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_3278,
                     (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_3388);
          *(undefined4 *)&pFVar44->_padding_ = local_3280;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = local_327c;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3278);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3278);
          if (pvStack_3270 != (void *)0x0) {
            FMemory::Free(pvStack_3270);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3278);
          local_329c = 1;
          local_32a0 = 1;
          local_3288 = 0;
          local_3298 = (undefined1  [8])0x0;
          pvStack_3290 = (void *)0x0;
          *(undefined4 *)&pFVar44->_padding_ = 1;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3298);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3298);
          if (pvStack_3290 != (void *)0x0) {
            FMemory::Free(pvStack_3290);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3298);
          local_3450 = (undefined1  [8])0x0;
          local_3448.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3448.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3450,
                     (FWriteAccessScope *)&local_2c78);
          local_2c60 = &local_3448;
          puVar38 = UE::Core::Private::DelegateAllocate(0x28,&local_3448);
          if (puVar38 != (undefined8 *)0x0) {
            *puVar38 = &
                       ___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar40 = FDelegateHandle::GenerateNewID();
            puVar38[2] = uVar40;
            *puVar38 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFColumn_SHeaderRow____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            puVar38[4] = FColumn::SetWidth;
            puVar38[3] = pFVar7;
          }
          if (local_2c78.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c78.Accessor,&local_2c78);
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3450);
          local_32c0 = pFVar7->MinSize;
          local_32bc = 1;
          local_32b8 = (undefined1  [8])0x0;
          pvStack_32b0 = (void *)0x0;
          local_32a8 = 0;
          *(float *)&pFVar44->_padding_ = local_32c0;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_32b8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_32b8);
          if (pvStack_32b0 != (void *)0x0) {
            FMemory::Free(pvStack_32b0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_32b8);
          if ((FArguments *)FVar16.ReferenceController == (FArguments *)0x0) {
            paVar61 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar61 = &(FVar16.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          local_3228 = local_3488.Object;
          FStack_3220.ReferenceController = local_3488.SharedReferenceCount.ReferenceController;
          if ((FArguments *)FVar16.ReferenceController != (FArguments *)0x0) {
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          if ((STableColumnHeader **)&pFVar44->_padding_ != &local_3228) {
            pFVar44->_padding_ = (longlong)local_3488.Object;
            local_3228 = (STableColumnHeader *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar44->_padding_,&FStack_3220);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_3220.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar16.ReferenceController);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3450,
                     (FWriteAccessScope *)&local_2c90);
          if ((local_3448.DelegateSize != 0) &&
             (local_3448.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3448.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3448,0,0,0x10);
            local_3448.DelegateSize = 0;
          }
          if (local_2c90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c90.Accessor,&local_2c90);
          }
          if (local_3448.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3448.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3450);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&local_248);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3388);
          if (FStack_3380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_3380.DelegateAllocator);
          }
          this_05 = (FMRSWRecursiveAccessDetector *)local_3388;
LAB_142a34a89:
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_05);
        }
        else if (TVar5 == Fixed) {
          if ((local_3428.Object == (SSplitter *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar44 = SSplitter::AddSlot(local_3428.Object,&local_328,-1);
          local_31c4 = 1;
          local_31c8 = 0;
          local_31c0._16_8_ = 0;
          local_31c0._0_8_ = 0;
          local_31c0._8_8_ = 0;
          *(undefined4 *)&pFVar44->_padding_ = 0;
          *(undefined1 *)((longlong)&pFVar44->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,&local_31c0);
          TAttribute<enum_SSplitter::ESizeRule>::~TAttribute<enum_SSplitter::ESizeRule>(&local_31c8)
          ;
          pFVar48 = SBox::FArguments::FArguments(&local_748);
          pfVar60 = TAttribute<float>::Get(&pFVar7->Width);
          local_31e8.Value.Size = *pfVar60;
          local_31e8.Getter._16_8_ = 0;
          local_31e8.bIsSet = true;
          local_31e8.Getter._0_8_ = 0;
          local_31e8.Getter._8_8_ = 0;
          (pFVar48->_WidthOverride).Value.Size = local_31e8.Value.Size;
          (pFVar48->_WidthOverride).bIsSet = true;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_WidthOverride).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_31e8.Getter);
          TAttribute<FOptionalSize>::~TAttribute<FOptionalSize>(&local_31e8);
          if ((FArguments *)FVar16.ReferenceController == (FArguments *)0x0) {
            paVar61 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar61 = &(FVar16.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          if ((FArguments *)FVar16.ReferenceController != (FArguments *)0x0) {
            LOCK();
            *paVar61 = (atomic<int>)((int)*paVar61 + 1);
            UNLOCK();
          }
          local_2948 = (pFVar48->_Content).Widget.Object;
          pTStack_2940 = (pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController;
          *(undefined4 *)&(pFVar48->_Content).Widget.Object = local_3488.Object._0_4_;
          *(undefined4 *)((longlong)&(pFVar48->_Content).Widget.Object + 4) =
               local_3488.Object._4_4_;
          *(undefined4 *)&(pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController =
               local_3488.SharedReferenceCount.ReferenceController._0_4_;
          *(undefined4 *)
           ((longlong)&(pFVar48->_Content).Widget.SharedReferenceCount.ReferenceController + 4) =
               local_3488.SharedReferenceCount.ReferenceController._4_4_;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_2940);
          pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                              (&local_2968,"SBox",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x388,&local_34ac);
          pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar50,&local_2a88,pFVar48);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2da8,pTVar51);
          TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                    ((FSlotArguments *)pFVar44,&local_2da8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2da8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2a88.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2968._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar16.ReferenceController);
          SBox::FArguments::~FArguments(&local_748);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&local_328);
        }
        else if (TVar5 == Manual) {
          fVar72 = fVar15;
          if (0.0 < this->SplitterHandleSize) {
            fVar72 = this->SplitterHandleSize + fVar14;
          }
          pFVar52 = SBorder::FArguments::FArguments(&local_11a8);
          pFVar52 = SBorder::FArguments::Padding(pFVar52,0.0);
          local_3188 = 0;
          pTVar53 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><std::nullptr_t>
                              (&local_25c0,(void **)&local_3188);
          pFVar52 = SBorder::FArguments::BorderImage(pFVar52,pTVar53);
          local_33f8[0] = ResizeLeftRight;
          pTVar54 = TAttribute<TOptional<enum_EMouseCursor::Type>_>::
                    TAttribute<TOptional<enum_EMouseCursor::Type>_><enum_EMouseCursor::Type>
                              (local_25e8,local_33f8);
          local_2e18.OwnerDeclaration =
               TSlateBaseNamedArgs<SBorder>::Cursor((TSlateBaseNamedArgs<SBorder> *)pFVar52,pTVar54)
          ;
          local_2e18.SlotContent = &(local_2e18.OwnerDeclaration)->_Content;
          pFVar30 = SSpacer::FArguments::FArguments(&local_1660);
          local_2e28._s_0.X = (double)fVar72;
          local_2e28._s_0.Y = local_2e28._s_0.X;
          pTVar55 = TAttribute<UE::Math::TVector2<double>_>::TAttribute<UE::Math::TVector2<double>_>
                              (&local_24d8,(TVector2<double> *)&local_2e28._s_0);
          pFVar30 = SSpacer::FArguments::Size(pFVar30,pTVar55);
          pTVar32 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                              (&local_29c8,"SSpacer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x39b,&local_34b0);
          pTVar33 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar32,&local_2a78,pFVar30);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&local_2e08,pTVar33);
          pFVar52 = NamedSlotProperty<SBorder::FArguments>::operator[](&local_2e18,&local_2e08);
          this_03 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                              (&local_29e0,"SBorder",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x395,&local_34af);
          TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=(this_03,&local_3240,pFVar52)
          ;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_29e0._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e08.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2a78.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_29c8._Widget.SharedReferenceCount.ReferenceController);
          SSpacer::FArguments::~FArguments(&local_1660);
          SBorder::FArguments::~FArguments(&local_11a8);
          TWeakPtr<SBorder,1>::TWeakPtr<SBorder,1><SBorder>(&local_3250,&local_3240);
          pFVar68 = pFVar7;
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::<lambda_1>
                    (&local_2b98,pFVar7,&local_3250);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::<lambda_2>
                    (&local_2bb0,pFVar68,&local_3250);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::<lambda_3>
                    (&local_2bc8,pFVar68,&local_3250);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_1>_&>
                              (&local_2850,&local_2b98);
          this_01 = local_3240.Object;
          SWidget::SetOnMouseButtonDown((SWidget *)local_3240.Object,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_2>_&>
                              (&local_2838,&local_2bb0);
          SWidget::SetOnMouseButtonUp((SWidget *)this_01,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_3>_&>
                              (&local_2820,&local_2bc8);
          SWidget::SetOnMouseMove((SWidget *)this_01,pTVar56);
          pTVar56 = TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                    ::
                    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                              (&local_2808,&pFVar7->OnColumnSplitterDoubleClick);
          SWidget::SetOnMouseDoubleClick((SWidget *)this_01,pTVar56);
          local_2df8.SplitterHandleSizeCopy = this->SplitterHandleSize;
          local_2df8.SomeColumn = pFVar7;
          TAttribute<FOptionalSize>::TAttribute<FOptionalSize>(&local_2ae8);
          pTVar42 = TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
                    CreateLambda<_SHeaderRow::RegenerateWidgets_::__l21::<lambda_4>_&>
                              (&local_29b0,&local_2df8);
          TAttribute<FOptionalSize>::Bind(&local_2ae8,pTVar42);
          TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
          ~TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>(&local_29b0);
          pSVar43 = TSharedPtr<SSplitter,1>::operator->(&local_3428);
          pFVar44 = SSplitter::AddSlot(pSVar43,&local_408,-1);
          local_3478 = SizeToContent;
          pTVar45 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                              (local_26e8,&local_3478);
          pFVar46 = SSplitter::FSlot::FSlotArguments::SizeRule((FSlotArguments *)pFVar44,pTVar45);
          local_34b6 = 0x100;
          pFVar46 = SSplitter::FSlot::FSlotArguments::Resizable(pFVar46,SUB82(&local_34b6,0));
          pTVar26 = TAttribute<float>::TAttribute<float><float>(&local_26c8,&pFVar7->MinSize);
          pFVar46 = SSplitter::FSlot::FSlotArguments::MinSize(pFVar46,pTVar26);
          pFVar48 = SBox::FArguments::FArguments(&local_a88);
          pTVar49 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize>(&local_26a8,&local_2ae8);
          pFVar48 = SBox::FArguments::WidthOverride(pFVar48,pTVar49);
          pFVar57 = SOverlay::FArguments::FArguments(&local_1a90);
          pFVar58 = SOverlay::Slot(&local_2538,0);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STableColumnHeader>(&local_2db8,&local_3488);
          pFVar58 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                              ((FSlotArguments *)pFVar58,&local_2db8);
          pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar58);
          pFVar58 = SOverlay::Slot(&local_2598,0);
          pFVar58 = TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
                              ((FSlotArgumentsMixin *)&pFVar58->_padding_,HAlign_Right);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2dc8,&local_3240);
          pFVar58 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                              ((FSlotArguments *)pFVar58,&local_2dc8);
          pFVar57 = SOverlay::FArguments::operator+(pFVar57,pFVar58);
          this_04 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                              (&local_2980,"SOverlay",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x3da,&local_34ae);
          pTVar59 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                              (this_04,&local_2be8,pFVar57);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_2dd8,pTVar59);
          pFVar48 = SBox::FArguments::operator[](pFVar48,&local_2dd8);
          pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                              (&local_2998,"SBox",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                               ,0x3d7,&local_34ad);
          pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar50,&local_2bd8,pFVar48);
          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2de8,pTVar51);
          TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                    ((FSlotArguments *)pFVar46,&local_2de8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2de8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2bd8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2998._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2dd8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2be8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2980._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2dc8.SharedReferenceCount.ReferenceController);
          SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2598);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2db8.SharedReferenceCount.ReferenceController);
          SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2538);
          SOverlay::FArguments::~FArguments(&local_1a90);
          SBox::FArguments::~FArguments(&local_a88);
          TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                    (&local_408);
          TAttribute<FOptionalSize>::~TAttribute<FOptionalSize>(&local_2ae8);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_3>::~<lambda_3>(&local_2bc8);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_2>::~<lambda_2>(&local_2bb0);
          `SHeaderRow::RegenerateWidgets'::__l21::<lambda_1>::~<lambda_1>(&local_2b98);
          if (local_3250.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar61 = &(local_3250.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar4 = *paVar61;
            *paVar61 = (atomic<int>)((int)*paVar61 + -1);
            UNLOCK();
            if (aVar4 == (atomic<int>)0x1) {
              (**(code **)((local_3250.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_3250.WeakReferenceCount.ReferenceController,1);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3240.SharedReferenceCount.ReferenceController);
          this = local_33d8;
        }
        else {
          if (TVar5 == FillSized) {
            local_3190.SomeColumn = pFVar7;
            TAttribute<FOptionalSize>::TAttribute<FOptionalSize>
                      ((TAttribute<FOptionalSize> *)local_2d78);
            pTVar42 = TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
                      CreateLambda<_SHeaderRow::RegenerateWidgets_::__l22::<lambda_5>_&>
                                (&local_2a10,&local_3190);
            TAttribute<FOptionalSize>::Bind((TAttribute<FOptionalSize> *)local_2d78,pTVar42);
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
            ~TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>(&local_2a10);
            pSVar43 = TSharedPtr<SSplitter,1>::operator->(&local_3428);
            pFVar44 = SSplitter::AddSlot(pSVar43,&local_168,-1);
            local_33fc = SizeToContent;
            pTVar45 = TAttribute<enum_SSplitter::ESizeRule>::TAttribute<enum_SSplitter::ESizeRule>
                                (local_2688,&local_33fc);
            pFVar46 = SSplitter::FSlot::FSlotArguments::SizeRule((FSlotArguments *)pFVar44,pTVar45);
            local_34b8 = 0x101;
            pFVar46 = SSplitter::FSlot::FSlotArguments::Resizable(pFVar46,SUB82(&local_34b8,0));
            pTVar47 = TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
                      CreateRaw<SHeaderRow::FColumn>
                                ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                                 local_2ca8,pFVar7,(pmf_a95a4bec)0x142a369e0);
            pFVar46 = SSplitter::FSlot::FSlotArguments::OnSlotResized(pFVar46,pTVar47);
            pTVar26 = TAttribute<float>::TAttribute<float><float>(&local_2608,&pFVar7->MinSize);
            pFVar46 = SSplitter::FSlot::FSlotArguments::MinSize(pFVar46,pTVar26);
            pFVar48 = SBox::FArguments::FArguments(&local_dc8);
            pTVar49 = TAttribute<FOptionalSize>::TAttribute<FOptionalSize>
                                (&local_2708,(TAttribute<FOptionalSize> *)local_2d78);
            pFVar48 = SBox::FArguments::WidthOverride(pFVar48,pTVar49);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STableColumnHeader>
                      (&local_2e38,&local_3488);
            pFVar48 = SBox::FArguments::operator[](pFVar48,&local_2e38);
            pTVar50 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                (&local_29f8,"SBox",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                                 ,0x3fa,&local_34b1);
            pTVar51 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (pTVar50,&local_2a68,pFVar48);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2e48,pTVar51);
            TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar46,&local_2e48);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2e48.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2a68.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_29f8._Widget.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2e38.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&local_dc8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ca8);
            if ((void *)local_2ca8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_2ca8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_2ca8);
            TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::
            ~FScopedWidgetSlotArguments(&local_168);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d70);
            if ((void *)local_2d70._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_2d70._8_8_);
            }
            this_05 = (FMRSWRecursiveAccessDetector *)local_2d70;
            goto LAB_142a34a89;
          }
          bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6856063789322730492>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                              ,0x404,"false");
          if (bVar18) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar16.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3370.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_33e0);
        lVar70 = local_33f0;
      }
      local_33f0 = lVar70 + 1;
      local_3498 = local_3498 + 1;
    } while ((int)local_3498 < (this->Columns).Array.ArrayNum);
  }
  pFVar64 = (FSlot *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_34a0.ReferenceController);
  if (((this->Style->HorizontalSeparatorBrush).DrawAs.Value == '\0') ||
     (this->Style->HorizontalSeparatorThickness <= 0.0)) {
    lVar70 = this->_padding_;
    local_2d88 = local_3438.Object;
    uStack_2d80 = local_3438.SharedReferenceCount.ReferenceController;
    if (local_3438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(lVar70 + 0x248))(this,&local_2d88);
    goto LAB_142a35117;
  }
  local_33d8 = *(SHeaderRow **)(this->_padding_ + 0x248);
  pFVar62 = SVerticalBox::FArguments::FArguments(&local_24a8);
  pFVar63 = ::operator_new(0x58);
  local_3198 = pFVar64;
  if (pFVar63 != (FSlot *)0x0) {
    *(undefined8 *)pFVar63 = 0;
    *(undefined8 *)&pFVar63->field_0x8 = 0;
    *(undefined8 *)&pFVar63->field_0x10 = 0;
    *(undefined8 *)&pFVar63->field_0x18 = 0;
    *(undefined8 *)&pFVar63->field_0x20 = 0;
    *(undefined8 *)&pFVar63->field_0x28 = 0;
    *(undefined8 *)&pFVar63->field_0x30 = 0;
    *(undefined8 *)&pFVar63->field_0x38 = 0;
    *(undefined8 *)&pFVar63->field_0x40 = 0;
    *(undefined8 *)&pFVar63->field_0x48 = 0;
    *(undefined8 *)&pFVar63->field_0x50 = 0;
    local_3198 = SVerticalBox::FSlot::FSlot(pFVar63);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_2938,(FSlot *)&local_3198);
  local_3210.ReferenceController = local_3438.SharedReferenceCount.ReferenceController;
  if (local_3438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2930 = local_3438.Object;
  local_3218 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_2928,&local_3210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3210.ReferenceController);
  local_33e0 = SVerticalBox::FArguments::operator+(pFVar62,(FSlotArguments *)&local_2938);
  pFVar63 = ::operator_new(0x58);
  if (pFVar63 != (FSlot *)0x0) {
    *(undefined8 *)pFVar63 = 0;
    *(undefined8 *)&pFVar63->field_0x8 = 0;
    *(undefined8 *)&pFVar63->field_0x10 = 0;
    *(undefined8 *)&pFVar63->field_0x18 = 0;
    *(undefined8 *)&pFVar63->field_0x20 = 0;
    *(undefined8 *)&pFVar63->field_0x28 = 0;
    *(undefined8 *)&pFVar63->field_0x30 = 0;
    *(undefined8 *)&pFVar63->field_0x38 = 0;
    *(undefined8 *)&pFVar63->field_0x40 = 0;
    *(undefined8 *)&pFVar63->field_0x48 = 0;
    *(undefined8 *)&pFVar63->field_0x50 = 0;
    pFVar64 = SVerticalBox::FSlot::FSlot(pFVar63);
  }
  local_3178 = pFVar64;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_27f0,(FSlot *)&local_3178);
  pFVar65 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_27f0);
  pFVar66 = SSeparator::FArguments::FArguments((FArguments *)local_20d0);
  pFVar66->_Thickness = this->Style->HorizontalSeparatorThickness;
  pFVar66->_SeparatorImage = &this->Style->HorizontalSeparatorBrush;
  FLLMScope::FLLMScope(&local_3470,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3170 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3168,&local_3170,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_3348,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x417,&local_34ab);
  FMemScope::~FMemScope(&local_3168);
  FLLMScope::~FLLMScope(&local_3470);
  pSVar17 = local_3348._Widget.Object;
  if ((local_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3348._Widget.Object,(FSlateBaseNamedArgs *)pFVar66);
  SSeparator::Construct(local_3348._Widget.Object,pFVar66);
  if ((local_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_3348._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)((local_3348._Widget.Object)->_padding_ + 0x228))
                       (local_3348._Widget.Object);
    bVar20 = 0;
    if (cVar19 != '\0') goto LAB_142a34dae;
  }
  else {
LAB_142a34dae:
    bVar20 = 0x20;
  }
  *(byte *)&(local_3348._Widget.Object)->_padding_ =
       (byte)(local_3348._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3348._Widget.Object)->_padding_ =
       (byte)(local_3348._Widget.Object)->_padding_ | bVar20;
  if ((local_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_3348._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3348._Widget.Object == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar16.ReferenceController = local_3348._Widget.SharedReferenceCount.ReferenceController;
  local_3348._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3348._Widget.Object = (SSeparator *)0x0;
  if ((pSVar17 == (SSeparator *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3320.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&pFVar65->field_0x8 != &local_3328) {
    *(SSeparator **)&pFVar65->field_0x8 = pSVar17;
    local_3328 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar65->field_0x10,&local_3320);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3320.ReferenceController);
  pFVar62 = SVerticalBox::FArguments::operator+(local_33e0,pFVar65);
  FLLMScope::FLLMScope(&local_346c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3160 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3148,&local_3160,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2b80,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
             ,0x40f,local_34aa);
  FMemScope::~FMemScope(&local_3148);
  FLLMScope::~FLLMScope(&local_346c);
  pTVar67 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2b80,&local_2a98,pFVar62);
  local_2d98 = pTVar67->Object;
  local_2d90 = (pTVar67->SharedReferenceCount).ReferenceController;
  if (local_2d90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2d90->SharedReferenceCount = (atomic<int>)((int)local_2d90->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*(code *)local_33d8)(this,&local_2d98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1eb0);
  if ((void *)local_1eb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1eb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1eb0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_20d0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2798);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_27c0);
  if ((void *)local_27c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_27c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_27c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_27e0);
  if (local_27f0[0] != (undefined8 *)0x0) {
    (**(code **)*local_27f0[0])(local_27f0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3438.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_28e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2908);
  if ((void *)local_2908._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2908._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2908);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2928[0].ReferenceController);
  if (local_2938 != (undefined8 *)0x0) {
    (**(code **)*local_2938)(local_2938,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_24a8._Slots.AllocatorInstance.Data,local_24a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_24a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_24a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_24a8);
LAB_142a35117:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3438.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3428.SharedReferenceCount.ReferenceController);
  return;
}

// RemoveColumn @ 142a35510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHeaderRow::RemoveColumn(SHeaderRow *this,FName *param_1)

{
  int *piVar1;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FColumn *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  TSharedRef<SHeaderRow,1> local_48;
  TSharedRef<SWidget,1> local_38;
  
  if ((*param_1 == (FName)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InColumnId != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0x27c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (this->Columns).Array.ArrayNum - 1;
  if (-1 < (int)uVar9) {
    pTVar2 = &this->Columns;
    lVar8 = (longlong)(int)uVar9;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->Columns).Array.ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (**(FName **)((pTVar2->Array).AllocatorInstance.Data + lVar8 * 8) == *param_1) {
        if (((this->Columns).Array.ArrayNum <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\IndirectArray.h"
                               ,0x101,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(FColumn **)((pTVar2->Array).AllocatorInstance.Data + lVar8 * 8);
        if (this_00 != (FColumn *)0x0) {
          FColumn::~FColumn(this_00);
          ::operator_delete(this_00,0x260);
        }
        uVar5 = 0;
        if ((int)uVar9 < (this->Columns).Array.ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->Array).AllocatorInstance.Data + lVar8 * 8;
        iVar7 = (this->Columns).Array.ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Columns).Array.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pTVar2,(this->Columns).Array.ArrayNum,
                   &(this->Columns).Array.ArrayMax);
      }
      lVar8 = lVar8 + -1;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_38);
  local_48.Object = (SHeaderRow *)pTVar6->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->ColumnsChanged,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  RegenerateWidgets(this);
  return;
}

// ResetColumnWidths @ 142a357f0

void __thiscall SHeaderRow::ResetColumnWidths(SHeaderRow *this)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FDestructionSentinel local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  plVar10 = plVar9;
  if (0 < (this->Columns).Array.ArrayNum) {
    do {
      uVar8 = (uint)plVar7;
      uVar6 = 0;
      if ((int)uVar8 < (this->Columns).Array.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)
               ((longlong)plVar10 + (longlong)(this->Columns).Array.AllocatorInstance.Data);
      uVar1 = *(undefined4 *)(lVar2 + 0xb8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xc0),&local_80)
      ;
      if (((*(int *)(lVar2 + 0xd0) == 0) || (*(longlong **)(lVar2 + 200) == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)(lVar2 + 200) + 0x38))(), cVar5 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        local_38 = 0;
        *(undefined4 *)(lVar2 + 0x98) = uVar1;
        local_4c = 1;
        local_48 = (undefined1  [8])0x0;
        FStack_40.Data = (FScriptContainerElement *)0x0;
        *(undefined1 *)(lVar2 + 0x9c) = 1;
        local_50 = uVar1;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xa0),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_98);
        if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_40.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
          local_38 = local_38 & 0xffffffff00000000;
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        if (FStack_40.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_40.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_80);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0xc0),
                   &local_68);
        plVar7 = plVar9;
        if (*(int *)(lVar2 + 0xd0) != 0) {
          plVar7 = *(longlong **)(lVar2 + 200);
        }
        (**(code **)(*plVar7 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
      }
      plVar7 = (longlong *)(ulonglong)(uVar8 + 1);
      plVar10 = plVar10 + 1;
    } while ((int)(uVar8 + 1) < (this->Columns).Array.ArrayNum);
  }
  return;
}

// SetAssociatedVerticalScrollBar @ 142a35d10

void __thiscall
SHeaderRow::SetAssociatedVerticalScrollBar
          (SHeaderRow *this,TSharedRef<SScrollBar,1> *param_1,float param_2)

{
  SScrollBar *pSVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  bool bVar4;
  TReferenceControllerBase<1> *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_60 [8];
  FDelegateAllocation local_58;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  bVar4 = false;
  (this->ScrollBarThickness).field0_0x0._s_0.X = param_2;
  local_60 = (undefined1  [8])0x0;
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_58;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,&local_58);
  if (puVar2 != (undefined8 *)0x0) {
    pSVar1 = param_1->Object;
    local_res8 = (param_1->SharedReferenceCount).ReferenceController;
    local_78 = SScrollBar::ShouldBeVisible;
    uStack_70 = 0;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = pSVar1;
    puVar2[4] = local_res8;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->WeakReferenceCount = (atomic<int>)((int)local_res8->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    puVar2[5] = local_78;
    puVar2[6] = CONCAT44(uStack_6c,uStack_70);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  (this->ScrollBarVisibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ScrollBarVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
             (FWriteAccessScope *)&local_78);
  if ((local_58.DelegateSize != 0) &&
     (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_58.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_58,0,0,0x10);
    local_58.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_58.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_58.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  RegenerateWidgets(this);
  return;
}

// SetColumnWidth @ 142a35f20

void __thiscall SHeaderRow::SetColumnWidth(SHeaderRow *this,FName *param_1,float param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  FName FVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  float local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  ForAnyElementType FStack_50;
  ulonglong local_48;
  
  if ((*param_1 == (FName)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InColumnId != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SHeaderRow.cpp"
                         ,0x2a5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = (this->Columns).Array.ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Columns).Array.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FName **)((this->Columns).Array.AllocatorInstance.Data + lVar8);
      if (*pFVar1 == *param_1) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar1 + 0x18),
                   &local_90);
        if (((pFVar1[0x1a].ComparisonIndex.Value == 0) || (pFVar1[0x19] == (FName)0x0)) ||
           (cVar4 = (**(code **)(*(longlong *)pFVar1[0x19] + 0x38))(), cVar4 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
          local_48 = 0;
          pFVar1[0x13].ComparisonIndex.Value = (uint)param_2;
          local_5c = 1;
          local_58 = (undefined1  [8])0x0;
          FStack_50.Data = (FScriptContainerElement *)0x0;
          *(undefined1 *)&pFVar1[0x13].Number = 1;
          local_60 = param_2;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar1 + 0x14),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_a8);
          if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_50.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_50,0,0,0x10);
            local_48 = local_48 & 0xffffffff00000000;
          }
          if (local_a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
          }
          if (FStack_50.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_50.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_58);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar1 + 0x18),
                     &local_78);
          if (pFVar1[0x1a].ComparisonIndex.Value == 0) {
            FVar6.ComparisonIndex.Value = 0;
            FVar6.Number = 0;
          }
          else {
            FVar6 = pFVar1[0x19];
          }
          (**(code **)(*(longlong *)FVar6 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
        }
      }
      lVar8 = lVar8 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// SetShowGeneratedColumn @ 142a36850

void __thiscall SHeaderRow::SetShowGeneratedColumn(SHeaderRow *this,FName *param_1,bool param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  FName *pFVar4;
  longlong *plVar5;
  TSharedRef<SWidget,1> *pTVar6;
  SHeaderRow *pSVar7;
  undefined1 local_res8 [8];
  TSharedRef<SHeaderRow,1> local_58;
  undefined8 local_48;
  FReadAccessScope local_40;
  
  pSVar7 = (SHeaderRow *)(this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar3 = *piVar1;
  plVar5 = &pSVar7->_padding_;
  local_48 = CONCAT44(local_40.DestructionSentinel._20_4_,iVar3);
  local_58.Object = pSVar7;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)piVar1;
  local_40.DestructionSentinel._0_8_ = pSVar7;
  local_40.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)piVar1;
  local_40.DestructionSentinel._16_4_ = iVar3;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pSVar7 == (SHeaderRow *)(plVar5 + iVar3)) break;
    pFVar4 = (FName *)pSVar7->_padding_;
    if (*pFVar4 == *param_1) {
      if ((*(char *)((longlong)&pFVar4[0x43].ComparisonIndex.Value + 1) == '\0') &&
         (cVar2 = (char)pFVar4[0x4b].ComparisonIndex.Value, (bool)cVar2 != param_2)) {
        *(bool *)&pFVar4[0x4b].ComparisonIndex.Value = cVar2 == '\0';
        RegenerateWidgets(this);
        pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                            (TSharedRef<SWidget,1> *)&local_40);
        local_58.Object = (SHeaderRow *)pTVar6->Object;
        local_58.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_40.DestructionSentinel.Accessor);
        TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                     *)&this->ColumnsChanged,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnHiddenColumnsListChanged,&local_40);
        if ((*(int *)&(this->OnHiddenColumnsListChanged).field_0x10 != 0) &&
           (plVar5 = *(longlong **)&(this->OnHiddenColumnsListChanged).field_0x8,
           plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
      }
      return;
    }
    pSVar7 = (SHeaderRow *)&pSVar7->_padding_;
  }
  return;
}

// ShouldGenerateEmptyColumnForSpacing @ 142a36b70

bool __thiscall SHeaderRow::ShouldGenerateEmptyColumnForSpacing(SHeaderRow *this,FName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  bool *pbVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar4 = *(FName **)pFVar6;
    if (*pFVar4 == *param_1) {
      if ((((*(char *)((longlong)&pFVar4[0x43].ComparisonIndex.Value + 1) == '\0') ||
           (pbVar5 = TAttribute<bool>::Get((TAttribute<bool> *)(pFVar4 + 0x43)), *pbVar5 != false))
          && ((*(char *)((longlong)&pFVar4[0x47].ComparisonIndex.Value + 1) == '\0' ||
              (pbVar5 = TAttribute<bool>::Get((TAttribute<bool> *)(pFVar4 + 0x47)), *pbVar5 != false
              )))) && ((char)pFVar4[0x4b].ComparisonIndex.Value != '\0')) {
        return true;
      }
      return false;
    }
    pFVar6 = pFVar6 + 8;
  }
  return false;
}

// ShouldGeneratedColumn @ 142a36c60

bool __thiscall SHeaderRow::ShouldGeneratedColumn(SHeaderRow *this,FName *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  bool *pbVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar4 = *(FName **)pFVar6;
    if (*pFVar4 == *param_1) {
      if (((*(char *)((longlong)&pFVar4[0x43].ComparisonIndex.Value + 1) == '\0') ||
          (pbVar5 = TAttribute<bool>::Get((TAttribute<bool> *)(pFVar4 + 0x43)), *pbVar5 != false))
         && ((char)pFVar4[0x4b].ComparisonIndex.Value != '\0')) {
        return true;
      }
      return false;
    }
    pFVar6 = pFVar6 + 8;
  }
  return false;
}

// ToggleAllColumns @ 142a37990

void __thiscall SHeaderRow::ToggleAllColumns(SHeaderRow *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ECheckBoxState EVar4;
  TSharedRef<SWidget,1> *pTVar5;
  SHeaderRow *pSVar6;
  undefined1 local_res8 [8];
  TSharedRef<SHeaderRow,1> local_58;
  undefined8 local_48;
  FReadAccessScope local_40;
  
  EVar4 = GetSelectAllColumnsCheckState(this);
  piVar1 = &(this->Columns).Array.ArrayNum;
  pSVar6 = (SHeaderRow *)(this->Columns).Array.AllocatorInstance.Data;
  iVar2 = *piVar1;
  plVar3 = &pSVar6->_padding_;
  local_48 = CONCAT44(local_40.DestructionSentinel._20_4_,iVar2);
  local_58.Object = pSVar6;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)piVar1;
  local_40.DestructionSentinel._0_8_ = pSVar6;
  local_40.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)piVar1;
  local_40.DestructionSentinel._16_4_ = iVar2;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pSVar6 == (SHeaderRow *)(plVar3 + iVar2)) break;
    if (*(char *)(pSVar6->_padding_ + 0x219) == '\0') {
      *(bool *)(pSVar6->_padding_ + 600) = (EVar4 & ~Undetermined) == Unchecked;
    }
    pSVar6 = (SHeaderRow *)&pSVar6->_padding_;
  }
  RegenerateWidgets(this);
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                      (TSharedRef<SWidget,1> *)&local_40);
  local_58.Object = (SHeaderRow *)pTVar5->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_40.DestructionSentinel.Accessor);
  TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>::
  Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->ColumnsChanged,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnHiddenColumnsListChanged,&local_40);
  if ((*(int *)&(this->OnHiddenColumnsListChanged).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnHiddenColumnsListChanged).field_0x8,
     plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  return;
}

// ToggleGeneratedColumn @ 142a37af0

void __thiscall SHeaderRow::ToggleGeneratedColumn(SHeaderRow *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  longlong *plVar4;
  TSharedRef<SWidget,1> *pTVar5;
  SHeaderRow *pSVar6;
  undefined1 local_res8 [8];
  TSharedRef<SHeaderRow,1> local_58;
  undefined8 local_48;
  FReadAccessScope local_40;
  
  pSVar6 = (SHeaderRow *)(this->Columns).Array.AllocatorInstance.Data;
  piVar1 = &(this->Columns).Array.ArrayNum;
  iVar2 = *piVar1;
  plVar4 = &pSVar6->_padding_;
  local_48 = CONCAT44(local_40.DestructionSentinel._20_4_,iVar2);
  local_58.Object = pSVar6;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)piVar1;
  local_40.DestructionSentinel._0_8_ = pSVar6;
  local_40.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)piVar1;
  local_40.DestructionSentinel._16_4_ = iVar2;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pSVar6 == (SHeaderRow *)(plVar4 + iVar2)) break;
    pFVar3 = (FName *)pSVar6->_padding_;
    if (*pFVar3 == param_1) {
      if (*(char *)((longlong)&pFVar3[0x43].ComparisonIndex.Value + 1) == '\0') {
        *(bool *)&pFVar3[0x4b].ComparisonIndex.Value =
             (char)pFVar3[0x4b].ComparisonIndex.Value == '\0';
        RegenerateWidgets(this);
        pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                            (TSharedRef<SWidget,1> *)&local_40);
        local_58.Object = (SHeaderRow *)pTVar5->Object;
        local_58.SharedReferenceCount.ReferenceController =
             (pTVar5->SharedReferenceCount).ReferenceController;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_40.DestructionSentinel.Accessor);
        TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                     *)&this->ColumnsChanged,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnHiddenColumnsListChanged,&local_40);
        if ((*(int *)&(this->OnHiddenColumnsListChanged).field_0x10 != 0) &&
           (plVar4 = *(longlong **)&(this->OnHiddenColumnsListChanged).field_0x8,
           plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x68))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
      }
      return;
    }
    pSVar6 = (SHeaderRow *)&pSVar6->_padding_;
  }
  return;
}

