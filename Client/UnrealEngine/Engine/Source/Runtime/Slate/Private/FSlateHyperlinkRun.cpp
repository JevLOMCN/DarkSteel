// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// FSlateHyperlinkRun @ 142844e50

FSlateHyperlinkRun * __thiscall
FSlateHyperlinkRun::FSlateHyperlinkRun
          (FSlateHyperlinkRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FHyperlinkStyle *param_3,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_6)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_02;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this_03;
  int iVar3;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  
  pTVar5 = (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateHyperlinkRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = (((this->Text).Object)->Data).ArrayNum;
  (this->Range).BeginIndex = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  (this->Range).EndIndex = iVar3;
  FHyperlinkStyle::FHyperlinkStyle(&this->Style,param_3);
  this_01 = param_4;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->NavigateDelegate,param_4);
  this_02 = param_5;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipDelegate,param_5);
  this_03 = param_6;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipTextDelegate,param_6);
  pTVar4 = ::operator_new(2);
  if (pTVar4 != (TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                 *)0x0) {
    *(undefined2 *)pTVar4 = 0;
    pTVar5 = pTVar4;
  }
  param_4 = pTVar5;
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>::
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1><FSlateHyperlinkRun::FWidgetViewModel>
            (&this->ViewModel,(TRawPtrProxy<FSlateHyperlinkRun::FWidgetViewModel> *)&param_4);
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  if (*(void **)&this_01->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_01->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
  if (*(void **)&this_02->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_02->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_02);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_03);
  if (*(void **)&this_03->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_03->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_03);
  return this;
}

// FSlateHyperlinkRun @ 142845010

FSlateHyperlinkRun * __thiscall
FSlateHyperlinkRun::FSlateHyperlinkRun
          (FSlateHyperlinkRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FHyperlinkStyle *param_3,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_6,FTextRange *param_7)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FTextRange *pFVar2;
  FTextRange *pFVar3;
  
  pFVar3 = (FTextRange *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateHyperlinkRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Range = *param_7;
  FHyperlinkStyle::FHyperlinkStyle(&this->Style,param_3);
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->NavigateDelegate,param_4);
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipDelegate,param_5);
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipTextDelegate,param_6);
  pFVar2 = ::operator_new(2);
  if (pFVar2 != (FTextRange *)0x0) {
    *(undefined2 *)&pFVar2->BeginIndex = 0;
    pFVar3 = pFVar2;
  }
  param_7 = pFVar3;
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>::
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1><FSlateHyperlinkRun::FWidgetViewModel>
            (&this->ViewModel,(TRawPtrProxy<FSlateHyperlinkRun::FWidgetViewModel> *)&param_7);
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  if (*(void **)&param_6->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_6->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_6);
  return this;
}

// FSlateHyperlinkRun @ 1428451c0

FSlateHyperlinkRun * __thiscall
FSlateHyperlinkRun::FSlateHyperlinkRun(FSlateHyperlinkRun *this,FSlateHyperlinkRun *param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FWidgetViewModel *pFVar2;
  FWidgetViewModel *pFVar3;
  TRawPtrProxy<FSlateHyperlinkRun::FWidgetViewModel> local_res8;
  
  pFVar3 = (FWidgetViewModel *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateHyperlinkRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&(param_1->RunInfo).Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&(param_1->RunInfo).MetaData);
  (this->Text).Object = (param_1->Text).Object;
  pTVar1 = (param_1->Text).SharedReferenceCount.ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Range = param_1->Range;
  FHyperlinkStyle::FHyperlinkStyle(&this->Style,&param_1->Style);
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->NavigateDelegate,&param_1->NavigateDelegate);
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipDelegate,&param_1->TooltipDelegate);
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
            (&this->TooltipTextDelegate,&param_1->TooltipTextDelegate);
  pFVar2 = ::operator_new(2);
  if (pFVar2 != (FWidgetViewModel *)0x0) {
    pFVar2->bIsPressed = false;
    pFVar2->bIsHovered = false;
    pFVar3 = pFVar2;
  }
  local_res8.Object = pFVar3;
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>::
  TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1><FSlateHyperlinkRun::FWidgetViewModel>
            (&this->ViewModel,&local_res8);
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// ~FSlateHyperlinkRun @ 142849ac0

void __thiscall FSlateHyperlinkRun::~FSlateHyperlinkRun(FSlateHyperlinkRun *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FSlateHyperlinkRun__6B_;
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewModel).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TooltipTextDelegate);
  pvVar4 = *(void **)&(this->TooltipTextDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TooltipTextDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TooltipDelegate);
  pvVar4 = *(void **)&(this->TooltipDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TooltipDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavigateDelegate);
  pvVar4 = *(void **)&(this->NavigateDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NavigateDelegate);
  FHyperlinkStyle::~FHyperlinkStyle(&this->Style);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar4 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar3 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar5 = *(longlong **)&this->field_0x10;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *(undefined ***)this = &___7IRun__6B_;
  return;
}

// AppendTextTo @ 142853110

void __thiscall FSlateHyperlinkRun::AppendTextTo(FSlateHyperlinkRun *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  
  iVar1 = (this->Range).BeginIndex;
  pFVar2 = (this->Text).Object;
  iVar3 = (this->Range).EndIndex - iVar1;
  if ((pFVar2->Data).ArrayNum != 0) {
    ::FString::AppendChars
              (param_1,(wchar_t *)((pFVar2->Data).AllocatorInstance.Data + (longlong)iVar1 * 2),
               iVar3);
    return;
  }
  ::FString::AppendChars(param_1,L"" + iVar1,iVar3);
  return;
}

// AppendTextTo @ 142853160

void __thiscall
FSlateHyperlinkRun::AppendTextTo(FSlateHyperlinkRun *this,FString *param_1,FTextRange *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if (param_2->BeginIndex < (this->Range).BeginIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.BeginIndex <= PartialRange.BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateHyperlinkRun.cpp"
                       ,0xd5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Range).EndIndex < param_2->EndIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.EndIndex >= PartialRange.EndIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateHyperlinkRun.cpp"
                       ,0xd6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Text).Object;
  if ((pFVar1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FString::AppendChars
            (param_1,(wchar_t *)((longlong)pwVar4 + (longlong)param_2->BeginIndex * 2),
             param_2->EndIndex - param_2->BeginIndex);
  return;
}

// ArrangeChildren @ 142853630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateHyperlinkRun::ArrangeChildren
          (FSlateHyperlinkRun *this,TSharedRef<ILayoutBlock,1> *param_1,FGeometry *param_2,
          FArrangedChildren *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ILayoutBlock *pIVar2;
  ILayoutBlock IVar3;
  double dVar4;
  double *pdVar5;
  FArrangedWidget *pFVar6;
  float fVar7;
  undefined1 auStackY_118 [32];
  float local_e8;
  float local_e4;
  FSlateLayoutTransform local_e0;
  TSharedRef<SWidget,1> local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  FArrangedWidget local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar7 = __real_3f800000 / param_2->Scale;
  pdVar5 = (double *)(**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,local_c0);
  dVar4 = (double)fVar7;
  local_e0.Scale = 1.0;
  local_e0.Translation.field0_0x0._s_0.X = (float)(dVar4 * *pdVar5);
  local_e0.Translation.field0_0x0._s_0.Y = (float)(dVar4 * pdVar5[1]);
  pdVar5 = (double *)(**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_b0);
  IVar3 = pIVar2[4];
  local_d0.Object = *(SWidget **)(pIVar2 + 3);
  local_e8 = (float)(dVar4 * *pdVar5);
  local_e4 = (float)(dVar4 * pdVar5[1]);
  if (IVar3 != (ILayoutBlock)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)IVar3 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)IVar3 + 8) + 1);
    UNLOCK();
  }
  local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)IVar3;
  pFVar6 = FGeometry::MakeChild
                     (param_2,&local_98,&local_d0,(FDeprecateVector2DParameter *)&local_e8,&local_e0
                     );
  FArrangedChildren::AddWidget(param_3,pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// BeginLayout @ 142855720

void __thiscall FSlateHyperlinkRun::BeginLayout(FSlateHyperlinkRun *this)

{
  int *piVar1;
  
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  piVar1 = &(this->Children).ArrayMax;
  (this->Children).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Children).AllocatorInstance,0,piVar1);
  }
  return;
}

// Clone @ 142857bc0

TSharedRef<IRun,1> * __thiscall
FSlateHyperlinkRun::Clone(FSlateHyperlinkRun *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar3;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar5;
  TSharedRef<FSlateHyperlinkRun,1> local_68;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_58;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_40;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_28;
  
  pTVar2 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_58,&this->TooltipTextDelegate);
  pTVar3 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_40,&this->TooltipDelegate);
  pTVar4 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::
           TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                     (&local_28,&this->NavigateDelegate);
  pTVar5 = Create(&local_68,&this->RunInfo,&this->Text,&this->Style,pTVar4,pTVar3,pTVar2,
                  &this->Range);
  __return_storage_ptr__->Object = (IRun *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 142864b30

TSharedRef<FSlateHyperlinkRun,1> * __cdecl
FSlateHyperlinkRun::Create
          (TSharedRef<FSlateHyperlinkRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FHyperlinkStyle *param_3,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_6)

{
  code *pcVar1;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this;
  bool bVar2;
  FSlateHyperlinkRun *pFVar3;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar7;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_88;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_70;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_58;
  
  pFVar3 = ::operator_new(0x790);
  this = param_6;
  if (pFVar3 == (FSlateHyperlinkRun *)0x0) {
    pFVar3 = (FSlateHyperlinkRun *)0x0;
  }
  else {
    pTVar4 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_88,param_6);
    pTVar5 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_70,param_5);
    pTVar6 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_58,param_4);
    pFVar3 = FSlateHyperlinkRun(pFVar3,param_1,param_2,param_3,pTVar6,pTVar5,pTVar4);
    if ((((pFVar3 != (FSlateHyperlinkRun *)0x0) && (*(longlong *)&pFVar3->field_0x8 != 0)) &&
        (*(longlong *)&pFVar3->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar3->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
  }
  param_6 = (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             *)pFVar3;
  TSharedRef<FSlateHyperlinkRun,1>::TSharedRef<FSlateHyperlinkRun,1><FSlateHyperlinkRun>
            (__return_storage_ptr__,(TRawPtrProxy<FSlateHyperlinkRun> *)&param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return __return_storage_ptr__;
}

// Create @ 142864cf0

TSharedRef<FSlateHyperlinkRun,1> * __cdecl
FSlateHyperlinkRun::Create
          (TSharedRef<FSlateHyperlinkRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FHyperlinkStyle *param_3,
          TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
          *param_6,FTextRange *param_7)

{
  code *pcVar1;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *this;
  bool bVar2;
  FSlateHyperlinkRun *pFVar3;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar4;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar7;
  TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_88;
  TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_70;
  TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
  local_58;
  
  pFVar3 = ::operator_new(0x790);
  this = param_6;
  if (pFVar3 == (FSlateHyperlinkRun *)0x0) {
    pFVar3 = (FSlateHyperlinkRun *)0x0;
  }
  else {
    pTVar4 = TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_88,param_6);
    pTVar5 = TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<TSharedRef<IToolTip,1>___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_70,param_5);
    pTVar6 = TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             ::
             TDelegate<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
                       (&local_58,param_4);
    pFVar3 = FSlateHyperlinkRun(pFVar3,param_1,param_2,param_3,pTVar6,pTVar5,pTVar4,param_7);
    if ((((pFVar3 != (FSlateHyperlinkRun *)0x0) && (*(longlong *)&pFVar3->field_0x8 != 0)) &&
        (*(longlong *)&pFVar3->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar3->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
  }
  param_6 = (TDelegate<FText___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
             *)pFVar3;
  TSharedRef<FSlateHyperlinkRun,1>::TSharedRef<FSlateHyperlinkRun,1><FSlateHyperlinkRun>
            (__return_storage_ptr__,(TRawPtrProxy<FSlateHyperlinkRun> *)&param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return __return_storage_ptr__;
}

// CreateBlock @ 142867470

TSharedRef<ILayoutBlock,1> * __thiscall
FSlateHyperlinkRun::CreateBlock
          (FSlateHyperlinkRun *this,TSharedRef<ILayoutBlock,1> *__return_storage_ptr__,int param_1,
          int param_2,TVector2<double> *param_3,FLayoutBlockTextContext *param_4,
          TSharedPtr<IRunRenderer,1> *param_5)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  FSlateHyperlinkRun *pFVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  FTextRange FVar11;
  SRichTextHyperlink *pSVar12;
  FSharedReferencer<1> FVar13;
  char cVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  FArguments *this_00;
  FString *pFVar19;
  FText *pFVar20;
  undefined8 *puVar21;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar22;
  ulong64 uVar23;
  TSharedRef<ILayoutBlock,1> *pTVar24;
  longlong *plVar25;
  wchar_t *pwVar26;
  atomic<int> *paVar27;
  FString *pFVar28;
  longlong *plVar29;
  FLayoutBlockTextContext *pFVar30;
  undefined4 local_res8 [2];
  int local_res10;
  int iStackX_14;
  int local_res18;
  int local_res20;
  SRichTextHyperlink *local_4a8;
  TReferenceControllerBase<1> *local_4a0;
  undefined1 local_498 [8];
  TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
  local_490;
  TRawPtrProxy<FWidgetLayoutBlock> local_478;
  undefined4 uStack_470;
  int iStack_46c;
  longlong local_468;
  FSharedReferencer<1> FStack_460;
  FText local_458;
  longlong local_448;
  FSharedReferencer<1> local_440;
  undefined1 local_438;
  undefined1 local_430 [8];
  void *pvStack_428;
  undefined8 local_420;
  FString local_418;
  FText local_408;
  undefined1 local_3f8;
  undefined1 local_3f0 [8];
  void *pvStack_3e8;
  undefined8 local_3e0;
  FText local_3d8;
  bool local_3c8;
  undefined1 local_3c0 [8];
  void *pvStack_3b8;
  undefined8 local_3b0;
  FName local_3a8;
  T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&> local_3a0;
  FMemScope local_398;
  undefined8 local_390;
  FSharedReferencer<1> local_388;
  longlong local_380;
  TReferenceControllerBase<1> *local_378;
  FText local_370;
  TSharedRef<FSlateHyperlinkRun,1> local_360;
  TSharedRef<FWidgetLayoutBlock,1> local_350;
  FString local_340;
  FDestructionSentinel local_330;
  undefined1 *local_318;
  FText local_310;
  TSharedRef<FSlateHyperlinkRun,1> local_300;
  FText local_2f0;
  FReadAccessScope local_2e0;
  FReadAccessScope local_2c8;
  FReadAccessScope local_2b0;
  undefined1 local_298 [528];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  plVar29 = (longlong *)0x0;
  local_res8[0] = 0;
  local_res18 = param_1;
  local_res20 = param_2;
  FText::FText(&local_458);
  local_468 = 0;
  FStack_460.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TooltipDelegate,
             &local_2e0);
  if (((*(int *)&(this->TooltipDelegate).field_0x10 == 0) ||
      (plVar25 = *(longlong **)&(this->TooltipDelegate).field_0x8, plVar25 == (longlong *)0x0)) ||
     (cVar14 = (**(code **)(*plVar25 + 0x38))(), cVar14 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2e0);
    ::FString::FString(&local_418,L"href");
    if (local_418.Data.ArrayNum == 0) {
      pwVar26 = L"";
      local_418.Data.ArrayNum = 0;
    }
    else {
      local_418.Data.ArrayNum = local_418.Data.ArrayNum + -1;
      pwVar26 = (wchar_t *)local_418.Data.AllocatorInstance.Data;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(local_418.Data.ArrayNum,pwVar26);
    iVar18 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&(this->RunInfo).MetaData,uVar17,&local_418);
    pFVar19 = (FString *)0x0;
    if (iVar18 != -1) {
      pFVar19 = (FString *)(*(longlong *)&(this->RunInfo).MetaData + (longlong)iVar18 * 0x28);
    }
    pFVar28 = pFVar19 + 1;
    if (pFVar19 == (FString *)0x0) {
      pFVar28 = (FString *)0x0;
    }
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    bVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TooltipTextDelegate);
    if (bVar15) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->TooltipTextDelegate,&local_2b0);
      if (*(int *)&(this->TooltipTextDelegate).field_0x10 == 0) {
        plVar25 = (longlong *)0x0;
      }
      else {
        plVar25 = *(longlong **)&(this->TooltipTextDelegate).field_0x8;
      }
      (**(code **)(*plVar25 + 0x60))(plVar25,&local_370,&(this->RunInfo).MetaData);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2b0);
      FText::operator=(&local_458,&local_370);
    }
    else {
      param_1 = local_res18;
      if (pFVar28 == (FString *)0x0) goto LAB_1428676a7;
      pFVar20 = FText::FromString(&local_310,pFVar28);
      FText::operator=(&local_458,pFVar20);
      local_370.TextData.Reference = local_310.TextData.Reference;
    }
    param_1 = local_res18;
    if (local_370.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
      param_1 = local_res18;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TooltipDelegate,
               &local_2c8);
    plVar25 = plVar29;
    if (*(int *)&(this->TooltipDelegate).field_0x10 != 0) {
      plVar25 = *(longlong **)&(this->TooltipDelegate).field_0x8;
    }
    (**(code **)(*plVar25 + 0x60))(plVar25,&local_380,&(this->RunInfo).MetaData);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2c8);
    local_388.ReferenceController = local_378;
    if (local_378 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_468 = local_380;
    local_390 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_460,&local_388);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_388.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
  }
LAB_1428676a7:
  this_00 = SRichTextHyperlink::FArguments::FArguments((FArguments *)local_298);
  this_00->_Style = &this->Style;
  pFVar19 = (this->Text).Object;
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  pFVar19 = ::FString::ConstructFromPtrSize
                      (&local_340,(wchar_t *)((longlong)pwVar26 + (longlong)param_1 * 2),
                       param_2 - param_1);
  pFVar20 = FText::FromString(&local_2f0,pFVar19);
  FText::FText(&local_3d8,pFVar20);
  local_3c8 = true;
  local_3b0 = 0;
  local_3c0 = (undefined1  [8])0x0;
  pvStack_3b8 = (void *)0x0;
  FText::operator=(&(this_00->_Text).Value,&local_3d8);
  (this_00->_Text).bIsSet = local_3c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  if (pvStack_3b8 != (void *)0x0) {
    FMemory::Free(pvStack_3b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  if (local_3d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
  }
  local_448 = local_468;
  local_440.ReferenceController = FStack_460.ReferenceController;
  if (FStack_460.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_460.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_460.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_438 = 1;
  local_420 = 0;
  local_430 = (undefined1  [8])0x0;
  pvStack_428 = (void *)0x0;
  if (&this_00->_padding_ != &local_448) {
    this_00->_padding_ = local_468;
    local_448 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this_00->_padding_,&local_440);
  }
  *(undefined1 *)&this_00->_padding_ = local_438;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if (pvStack_428 != (void *)0x0) {
    FMemory::Free(pvStack_428);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_440.ReferenceController);
  local_408.TextData.Reference = local_458.TextData.Reference;
  if (local_458.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_458.TextData.Reference + 8))
              (local_458.TextData.Reference,local_res8);
  }
  local_408.Flags = local_458.Flags;
  local_3f8 = 1;
  local_3e0 = 0;
  local_3f0 = (undefined1  [8])0x0;
  pvStack_3e8 = (void *)0x0;
  FText::operator=((FText *)this_00,&local_408);
  *(undefined1 *)&this_00->_padding_ = local_3f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if (pvStack_3e8 != (void *)0x0) {
    FMemory::Free(pvStack_3e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  if (local_408.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnNavigate,
             (FWriteAccessScope *)&local_330);
  local_318 = &(this_00->_OnNavigate).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_318);
  pFVar30 = param_4;
  if (puVar21 != (undefined8 *)0x0) {
    iStack_46c = local_340.Data.ArrayMax;
    local_478.Object = (FWidgetLayoutBlock *)OnNavigate;
    uStack_470 = 0;
    pTVar22 = TSharedFromThis<FSlateHyperlinkRun,1>::AsShared
                        ((TSharedFromThis<FSlateHyperlinkRun,1> *)&this->field_0x8,&local_300);
    pFVar30 = (FLayoutBlockTextContext *)(pTVar22->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar22->Object;
    if (pFVar30 != (FLayoutBlockTextContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar30->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar30->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar30->_padding_ + 1);
      UNLOCK();
    }
    *puVar21 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFSlateHyperlinkRun___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pFVar4;
    puVar21[4] = pFVar30;
    if (pFVar30 != (FLayoutBlockTextContext *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar30->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar30->_padding_)[1] + 1);
      UNLOCK();
    }
    plVar29 = (longlong *)&DAT_00000007;
    puVar21[5] = local_478.Object;
    puVar21[6] = CONCAT44(iStack_46c,uStack_470);
  }
  if (((ulonglong)plVar29 & 4) != 0) {
    plVar29 = (longlong *)(ulonglong)((uint)plVar29 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar30);
  }
  if (((ulonglong)plVar29 & 2) != 0) {
    plVar29 = (longlong *)(ulonglong)((uint)plVar29 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar30);
  }
  if (((ulonglong)plVar29 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_300.SharedReferenceCount.ReferenceController);
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  pFVar30 = param_4;
  if ((TOptional<ETextShapingMethod> *)local_498 != &this_00->_TextShapingMethod) {
    (this_00->_TextShapingMethod).TypedValue = (ETextShapingMethod)param_4->_padding_;
    (this_00->_TextShapingMethod).bIsSet = true;
  }
  local_3a0.Arg0 = &this->ViewModel;
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_398,&local_3a8,true);
  TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
  ::
  TSlateDecl<SRichTextHyperlink,RequiredArgs::T1RequiredArgs<TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1>_&>_>
            (&local_490,"SRichTextHyperlink",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateHyperlinkRun.cpp"
             ,0x66,&local_3a0);
  FMemScope::~FMemScope(&local_398);
  FLLMScope::~FLLMScope((FLLMScope *)&param_4);
  pSVar12 = local_490._Widget.Object;
  if ((local_490._Widget.Object == (SRichTextHyperlink *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  SWidget::SWidgetConstruct((SWidget *)local_490._Widget.Object,(FSlateBaseNamedArgs *)this_00);
  SRichTextHyperlink::Construct(local_490._Widget.Object,this_00,(local_490._RequiredArgs)->Arg0);
  if ((local_490._Widget.Object == (SRichTextHyperlink *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  if (((local_490._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((local_490._Widget.Object)->_padding_ + 0x228))(local_490._Widget.Object);
    bVar16 = 0;
    if (cVar14 == '\0') goto LAB_142867ae0;
  }
  bVar16 = 0x20;
LAB_142867ae0:
  *(byte *)&(local_490._Widget.Object)->_padding_ =
       (byte)(local_490._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_490._Widget.Object)->_padding_ =
       (byte)(local_490._Widget.Object)->_padding_ | bVar16;
  if ((local_490._Widget.Object == (SRichTextHyperlink *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  pbVar1 = (byte *)((longlong)&(local_490._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_490._Widget.Object == (SRichTextHyperlink *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  FVar13.ReferenceController = local_490._Widget.SharedReferenceCount.ReferenceController;
  local_490._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_490._Widget.Object = (SRichTextHyperlink *)0x0;
  if ((pSVar12 == (SRichTextHyperlink *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  local_4a8 = pSVar12;
  local_4a0 = FVar13.ReferenceController;
  if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_2f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  if ((ITextData *)local_298._504_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_298._504_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_298);
  SWidget::SlatePrepass((SWidget *)local_4a8);
  pTVar3 = &this->Children;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_4a8) &&
      ((FScriptContainerElement *)&local_4a8 < pFVar5 + (longlong)(this->Children).ArrayMax * 0x10))
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)) {
    pcVar9 = (code *)swi(3);
    pTVar24 = (TSharedRef<ILayoutBlock,1> *)(*pcVar9)();
    return pTVar24;
  }
  iVar18 = (this->Children).ArrayNum;
  piVar2 = &(this->Children).ArrayMax;
  if (iVar18 == *piVar2) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->Children).ArrayNum = iVar18 + 1;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  *(SRichTextHyperlink **)(pFVar5 + (longlong)iVar18 * 0x10) = local_4a8;
  *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar18 * 0x10 + 8) = local_4a0;
  if (local_4a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4a0->SharedReferenceCount = (atomic<int>)((int)local_4a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = local_res18;
  iStackX_14 = local_res20;
  pTVar22 = TSharedFromThis<FSlateHyperlinkRun,1>::AsShared
                      ((TSharedFromThis<FSlateHyperlinkRun,1> *)&this->field_0x8,&local_360);
  pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar22->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    paVar27 = (atomic<int> *)&DAT_00000008;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_360.SharedReferenceCount.ReferenceController);
  }
  else {
    paVar27 = &pTVar6->SharedReferenceCount;
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_360.SharedReferenceCount.ReferenceController);
    LOCK();
    *paVar27 = (atomic<int>)((int)*paVar27 + 1);
    UNLOCK();
  }
  local_478.Object = ::operator_new(0x80);
  if (local_478.Object == (FWidgetLayoutBlock *)0x0) {
    local_478.Object = (FWidgetLayoutBlock *)0x0;
  }
  else {
    ((local_478.Object)->Run).Object = (IRun *)pFVar4;
    (local_478.Object)->_padding_ = (longlong)&___7FWidgetLayoutBlock__6B_;
    ((local_478.Object)->Run).SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar27 = (atomic<int>)((int)*paVar27 + 1);
      UNLOCK();
    }
    ((local_478.Object)->Widget).Object = (SWidget *)local_4a8;
    ((local_478.Object)->Widget).SharedReferenceCount.ReferenceController = local_4a0;
    if (local_4a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_4a0->SharedReferenceCount = (atomic<int>)((int)local_4a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11.EndIndex = iStackX_14;
    FVar11.BeginIndex = local_res10;
    (local_478.Object)->Range = FVar11;
    dVar10 = (param_3->field0_0x0)._s_0.Y;
    ((local_478.Object)->Size).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    ((local_478.Object)->Size).field0_0x0._s_0.Y = dVar10;
    ((local_478.Object)->LocationOffset).field0_0x0._s_0.X = 0.0;
    ((local_478.Object)->LocationOffset).field0_0x0._s_0.Y = 0.0;
    *(short *)&((local_478.Object)->TextContext)._padding_ = (short)pFVar30->_padding_;
    ((local_478.Object)->TextContext)._padding_ = pFVar30->_padding_;
    lVar7 = pFVar30->_padding_;
    ((local_478.Object)->TextContext)._padding_ = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    ((local_478.Object)->TextContext).TextDirection = pFVar30->TextDirection;
    ((local_478.Object)->Renderer).Object = param_5->Object;
    pTVar8 = (param_5->SharedReferenceCount).ReferenceController;
    ((local_478.Object)->Renderer).SharedReferenceCount.ReferenceController = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  TSharedRef<FWidgetLayoutBlock,1>::TSharedRef<FWidgetLayoutBlock,1><FWidgetLayoutBlock>
            (&local_350,&local_478);
  __return_storage_ptr__->Object = (ILayoutBlock *)local_350.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_350.SharedReferenceCount.ReferenceController;
  if (local_350.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_350.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_350.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_460.ReferenceController);
  if (local_458.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// EndLayout @ 14286f0a0

void __thiscall FSlateHyperlinkRun::EndLayout(FSlateHyperlinkRun *this)

{
  return;
}

// GetBaseLine @ 142875040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall FSlateHyperlinkRun::GetBaseLine(FSlateHyperlinkRun *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  FSlateApplication *pFVar5;
  float fVar6;
  TSharedRef<FSlateFontMeasure,1> local_38 [3];
  
  pFVar5 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar5->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      sVar4 = (*pcVar2)();
      return sVar4;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar1 + 8),local_38);
  fVar6 = param_1 * *(float *)&(this->Style).TextStyle.ShadowOffset.field_0x4;
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  sVar4 = FSlateFontMeasure::GetBaseline(local_38[0].Object,&(this->Style).TextStyle.Font,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return (short)(int)((float)(int)sVar4 - fVar6);
}

// GetChildren @ 142875930

TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateHyperlinkRun::GetChildren(FSlateHyperlinkRun *this)

{
  return &this->Children;
}

// GetKerning @ 142877070

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateHyperlinkRun::GetKerning
          (FSlateHyperlinkRun *this,int param_1,float param_2,FRunTextContext *param_3)

{
  return '\0';
}

// GetLocationAt @ 1428776e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateHyperlinkRun::GetLocationAt
          (FSlateHyperlinkRun *this,TVector2<double> *__return_storage_ptr__,
          TSharedRef<ILayoutBlock,1> *param_1,int param_2,float param_3)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FTextRange local_res8;
  int local_res10;
  int iStackX_14;
  double local_c8;
  double local_c0;
  TVector2<double>_u_0 local_b8;
  FShapedTextContext local_a8;
  TSharedRef<FShapedTextCache,1> local_a0;
  char local_90;
  FCachedShapedTextKey local_88;
  
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_c8);
  (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,&local_res10);
  (**(code **)((longlong)*param_1->Object + 0x20))();
  if (local_90 == '\0') {
    local_res8.BeginIndex = local_res10;
    local_res8.EndIndex = local_res10 + param_2;
  }
  else {
    local_res8.BeginIndex = local_res10 + param_2;
    local_res8.EndIndex = iStackX_14;
  }
  pFVar2 = (this->Text).Object;
  iVar1 = (pFVar2->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  local_88.TextRange.EndIndex = iVar1 + -1;
  local_88.Scale = param_3;
  local_88.TextRange.BeginIndex = 0;
  if (iVar1 == 0) {
    local_88.TextRange.EndIndex = 0;
  }
  local_88.TextContext = local_a8;
  FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,&(this->Style).TextStyle.Font);
  ShapedTextCacheUtil::MeasureShapedText
            ((TVector2<double> *)&local_b8._s_0,&local_a0,&local_88,&local_res8,pwVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_c8 + local_b8._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_c0 + local_b8._s_0.Y;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetMaxHeight @ 142877d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall FSlateHyperlinkRun::GetMaxHeight(FSlateHyperlinkRun *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  short sVar4;
  ushort uVar5;
  FSlateApplication *pFVar6;
  float fVar7;
  TSharedRef<FSlateFontMeasure,1> local_38 [3];
  
  pFVar6 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar6->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      sVar4 = (*pcVar2)();
      return sVar4;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar1 + 8),local_38);
  fVar7 = (float)((uint)(param_1 * *(float *)&(this->Style).TextStyle.ShadowOffset.field_0x4) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  uVar5 = FSlateFontMeasure::GetMaxCharacterHeight
                    (local_38[0].Object,&(this->Style).TextStyle.Font,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return (short)(int)((float)uVar5 + fVar7);
}

// GetOutlineSize @ 142878960

TVector2<double> * __thiscall
FSlateHyperlinkRun::GetOutlineSize
          (FSlateHyperlinkRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2
          ,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(this->Style).TextStyle.Font.OutlineSettings.OutlineSize * param_3;
  fVar3 = fVar2;
  if (param_1 != (this->Range).BeginIndex) {
    fVar3 = 0.0;
  }
  fVar1 = 0.0;
  if (param_2 == (this->Range).EndIndex) {
    fVar1 = fVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar1 + fVar3);
  return __return_storage_ptr__;
}

// GetRunAttributes @ 142879e70

ERunAttributes __thiscall FSlateHyperlinkRun::GetRunAttributes(FSlateHyperlinkRun *this)

{
  return SupportsText;
}

// GetRunInfo @ 142879eb0

FRunInfo * __thiscall FSlateHyperlinkRun::GetRunInfo(FSlateHyperlinkRun *this)

{
  return &this->RunInfo;
}

// GetShadowSize @ 14287a360

TVector2<double> * __thiscall
FSlateHyperlinkRun::GetShadowSize
          (FSlateHyperlinkRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2
          ,float param_3)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar3 = (double)(float)((uint)(param_3 * *(float *)&(this->Style).TextStyle.ShadowOffset.field_0x4
                                ) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_2 == (this->Range).EndIndex) {
    fVar1 = *(float *)&(this->Style).TextStyle.ShadowOffset;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)((uint)(param_3 * fVar1) & uVar2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  return __return_storage_ptr__;
}

// GetTextIndexAt @ 14287be70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateHyperlinkRun::GetTextIndexAt
          (FSlateHyperlinkRun *this,TSharedRef<ILayoutBlock,1> *param_1,TVector2<double> *param_2,
          float param_3,ETextHitPoint *param_4)

{
  double dVar1;
  FString *pFVar2;
  int iVar3;
  ETextHitPoint EVar4;
  wchar_t *pwVar5;
  FTextRange local_res10;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  FShapedTextContext local_a8 [4];
  TSharedRef<FShapedTextCache,1> local_a0;
  FCachedShapedTextKey local_88;
  
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_c8);
  (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,&local_b8);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if (((((double)(float)local_c8 <= dVar1) && (dVar1 < (double)(float)(local_b8 + local_c8))) &&
      (dVar1 = (param_2->field0_0x0)._s_0.Y, (double)(float)local_c0 <= dVar1)) &&
     (dVar1 < (double)(float)(local_b0 + local_c0))) {
    (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,&local_res10);
    (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_a8);
    dVar1 = (param_2->field0_0x0)._s_0.X;
    pFVar2 = (this->Text).Object;
    iVar3 = (pFVar2->Data).ArrayNum;
    if (iVar3 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    local_88.TextRange.BeginIndex = 0;
    local_88.TextRange.EndIndex = iVar3 + -1;
    if (iVar3 == 0) {
      local_88.TextRange.EndIndex = 0;
    }
    local_88.TextContext = local_a8[0];
    local_88.Scale = param_3;
    FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,&(this->Style).TextStyle.Font);
    iVar3 = ShapedTextCacheUtil::FindCharacterIndexAtOffset
                      (&local_a0,&local_88,&local_res10,pwVar5,(int)(dVar1 - local_c8));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
    if (param_4 != (ETextHitPoint *)0x0) {
      EVar4 = WithinText;
      if (iVar3 == local_res10.EndIndex) {
        EVar4 = RightGutter;
      }
      *param_4 = EVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    return iVar3;
  }
  return -1;
}

// GetTextRange @ 14287ce50

FTextRange __thiscall FSlateHyperlinkRun::GetTextRange(FSlateHyperlinkRun *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// Measure @ 142884220

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateHyperlinkRun::Measure
          (FSlateHyperlinkRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2
          ,float param_3,FRunTextContext *param_4)

{
  double dVar1;
  int iVar2;
  FString *pFVar3;
  short sVar4;
  TVector2<double> *pTVar5;
  wchar_t *pwVar6;
  undefined4 in_register_00000084;
  undefined4 in_register_0000008c;
  FTextRange local_res8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  TVector2<double> local_a8;
  FCachedShapedTextKey local_98;
  
  (**(code **)(*(longlong *)this + 0x38))
            (this,&local_c8,CONCAT44(in_register_00000084,param_1),
             CONCAT44(in_register_0000008c,param_2),param_3);
  (**(code **)(*(longlong *)this + 0x40))(this,&local_b8,param_1,param_2,param_3);
  if (param_2 == param_1) {
    sVar4 = (**(code **)(*(longlong *)this + 0x20))(this);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8 + local_c8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)sVar4 + local_c0 + local_b0;
  }
  else {
    pFVar3 = (this->Text).Object;
    iVar2 = (pFVar3->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    local_98.TextRange.EndIndex = iVar2 + -1;
    local_98.TextRange.BeginIndex = 0;
    local_98.Scale = param_3;
    if (iVar2 == 0) {
      local_98.TextRange.EndIndex = 0;
    }
    local_98.TextContext = *(FShapedTextContext *)&param_4->_padding_;
    local_res8.BeginIndex = param_1;
    local_res8.EndIndex = param_2;
    FSlateFontInfo::FSlateFontInfo(&local_98.FontInfo,&(this->Style).TextStyle.Font);
    pTVar5 = ShapedTextCacheUtil::MeasureShapedText
                       (&local_a8,&param_4->ShapedTextCache,&local_98,&local_res8,pwVar6);
    dVar1 = (pTVar5->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_c8 + (pTVar5->field0_0x0)._s_0.X + local_b8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_c0 + dVar1 + local_b0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// Move @ 142884ac0

void __thiscall
FSlateHyperlinkRun::Move
          (FSlateHyperlinkRun *this,TSharedRef<FString,1> *param_1,FTextRange *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Text).SharedReferenceCount.ReferenceController;
  (this->Text).Object = pFVar2;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->Range = *param_2;
  return;
}

// OnNavigate @ 142889df0

void __thiscall FSlateHyperlinkRun::OnNavigate(FSlateHyperlinkRun *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->NavigateDelegate,
             &local_28);
  if (*(int *)&(this->NavigateDelegate).field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&(this->NavigateDelegate).field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&(this->RunInfo).MetaData);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnPaint @ 142889e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateHyperlinkRun::OnPaint
          (FSlateHyperlinkRun *this,FPaintArgs *param_1,FTextArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  TReferenceControllerBase<1> *pTVar1;
  ILayoutBlock *pIVar2;
  ILayoutBlock *pIVar3;
  ILayoutBlock IVar4;
  ILayoutBlock this_00;
  double dVar5;
  int iVar6;
  double *pdVar7;
  float fVar8;
  undefined1 auStackY_108 [32];
  float local_c8;
  float local_c4;
  FSlateLayoutTransform local_c0;
  FSlateLayoutTransform local_b4;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  FGeometry local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar1 = (param_2->Block->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Block->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  fVar8 = __real_3f800000 / param_3->Scale;
  pIVar3 = param_2->Block->Object;
  pdVar7 = (double *)(**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,local_a8);
  dVar5 = (double)fVar8;
  local_c0.Scale = 1.0;
  local_c0.Translation.field0_0x0._s_0.X = (float)(dVar5 * *pdVar7);
  pIVar3 = param_2->Block->Object;
  local_c0.Translation.field0_0x0._s_0.Y = (float)(dVar5 * pdVar7[1]);
  pdVar7 = (double *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,local_98);
  local_b4.Scale = param_3->Scale;
  local_b4.Translation.field0_0x0 = (param_3->AbsolutePosition).field0_0x0;
  local_c8 = (float)(dVar5 * *pdVar7);
  local_c4 = (float)(dVar5 * pdVar7[1]);
  FGeometry::FGeometry
            (&local_88,(FDeprecateVector2DParameter *)&local_c8,&local_c0,&local_b4,
             &param_3->AccumulatedRenderTransform,param_3->bHasRenderTransform);
  IVar4 = pIVar2[4];
  this_00 = pIVar2[3];
  if (IVar4 != (ILayoutBlock)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)IVar4 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)IVar4 + 8) + 1);
    UNLOCK();
  }
  iVar6 = SWidget::Paint((SWidget *)this_00,param_1,&local_88,param_4,param_5,param_6,param_7,
                         param_8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return iVar6;
}

// SetTextRange @ 14289ad60

void __thiscall FSlateHyperlinkRun::SetTextRange(FSlateHyperlinkRun *this,FTextRange *param_1)

{
  this->Range = *param_1;
  return;
}

