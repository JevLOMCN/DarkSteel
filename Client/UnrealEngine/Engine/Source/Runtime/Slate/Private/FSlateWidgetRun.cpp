// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// FSlateWidgetRun @ 142845fc0

FSlateWidgetRun * __thiscall
FSlateWidgetRun::FSlateWidgetRun(FSlateWidgetRun *this,FSlateWidgetRun *param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateWidgetRun__6B_;
  (this->TextLayout).Object = (param_1->TextLayout).Object;
  pTVar1 = (param_1->TextLayout).WeakReferenceCount.ReferenceController;
  (this->TextLayout).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
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
  FWidgetRunInfo::FWidgetRunInfo(&this->Info,&param_1->Info);
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  dVar2 = (param_1->WidgetSize).field0_0x0._s_0.Y;
  (this->WidgetSize).field0_0x0._s_0.X = (param_1->WidgetSize).field0_0x0._s_0.X;
  (this->WidgetSize).field0_0x0._s_0.Y = dVar2;
  return this;
}

// FSlateWidgetRun @ 1428460e0

FSlateWidgetRun * __thiscall
FSlateWidgetRun::FSlateWidgetRun
          (FSlateWidgetRun *this,TSharedRef<FTextLayout,1> *param_1,FRunInfo *param_2,
          TSharedRef<FString_const_,1> *param_3,FWidgetRunInfo *param_4)

{
  int iVar1;
  FTextRange local_res8 [4];
  
  local_res8[0].BeginIndex = 0;
  iVar1 = (param_3->Object->Data).ArrayNum;
  local_res8[0].EndIndex = iVar1 + -1;
  if (iVar1 == 0) {
    local_res8[0].EndIndex = 0;
  }
  FSlateWidgetRun(this,param_1,param_2,param_3,param_4,local_res8);
  this->_padding_ = (longlong)&___7FSlateWidgetRun__6B_;
  return this;
}

// FSlateWidgetRun @ 142846140

FSlateWidgetRun * __thiscall
FSlateWidgetRun::FSlateWidgetRun
          (FSlateWidgetRun *this,TSharedRef<FTextLayout,1> *param_1,FRunInfo *param_2,
          TSharedRef<FString_const_,1> *param_3,FWidgetRunInfo *param_4,FTextRange *param_5)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  FWidgetRunInfo *this_01;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FDeprecateSlateVector2D FVar8;
  FSlateWidgetRun *pFVar9;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateWidgetRun__6B_;
  (this->TextLayout).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TextLayout).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&(this->RunInfo).Name,&param_2->Name);
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
               *)&param_2->MetaData);
  (this->Text).Object = param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_01 = &this->Info;
  this->Range = *param_5;
  FWidgetRunInfo::FWidgetRunInfo(this_01,param_4);
  pTVar1 = &this->Children;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->WidgetSize).field0_0x0._s_0.X = 0.0;
  (this->WidgetSize).field0_0x0._s_0.Y = 0.0;
  SWidget::SlatePrepass((this_01->Widget).Object,param_1->Object->Scale);
  FVar8 = SWidget::GetDesiredSize((this_01->Widget).Object);
  fVar2 = *(float *)((longlong)FVar8 + 4);
  (this->WidgetSize).field0_0x0._s_0.X = (double)*(float *)FVar8;
  (this->WidgetSize).field0_0x0._s_0.Y = (double)fVar2;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= this_01) && (this_01 < pFVar4 + (longlong)(this->Children).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSlateWidgetRun *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar7 = (this->Children).ArrayNum;
  if (iVar7 == (this->Children).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(this->Children).ArrayMax);
  }
  (this->Children).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(SWidget **)(pFVar4 + (longlong)iVar7 * 0x10) = (this_01->Widget).Object;
  pTVar3 = (this->Info).Widget.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FSlateWidgetRun @ 142849dd0

void __thiscall FSlateWidgetRun::~FSlateWidgetRun(FSlateWidgetRun *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  this->_padding_ = (longlong)&___7FSlateWidgetRun__6B_;
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).AllocatorInstance.Data,
             (this->Children).ArrayNum);
  pFVar5 = (this->Children).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Info).Baseline.Getter);
  pvVar6 = *(void **)&(this->Info).Baseline.Getter.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Info).Baseline.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Info).Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar6 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar5 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar7 = (this->TextLayout).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  this->_padding_ = (longlong)&___7IRun__6B_;
  return;
}

// AppendTextTo @ 142853440

void __thiscall FSlateWidgetRun::AppendTextTo(FSlateWidgetRun *this,FString *param_1)

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

// AppendTextTo @ 142853490

void __thiscall
FSlateWidgetRun::AppendTextTo(FSlateWidgetRun *this,FString *param_1,FTextRange *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if (param_2->BeginIndex < (this->Range).BeginIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.BeginIndex <= PartialRange.BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateWidgetRun.cpp"
                       ,0x9b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Range).EndIndex < param_2->EndIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.EndIndex >= PartialRange.EndIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateWidgetRun.cpp"
                       ,0x9c,L"");
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

// ArrangeChildren @ 142853990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateWidgetRun::ArrangeChildren
          (FSlateWidgetRun *this,TSharedRef<ILayoutBlock,1> *param_1,FGeometry *param_2,
          FArrangedChildren *param_3)

{
  double dVar1;
  double *pdVar2;
  FArrangedWidget *pFVar3;
  float fVar4;
  undefined1 auStackY_108 [32];
  float local_d8;
  float local_d4;
  FSlateLayoutTransform local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  FArrangedWidget local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  fVar4 = __real_3f800000 / param_2->Scale;
  pdVar2 = (double *)(**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,local_c0);
  dVar1 = (double)fVar4;
  local_d0.Scale = 1.0;
  local_d0.Translation.field0_0x0._s_0.X = (float)(dVar1 * *pdVar2);
  local_d0.Translation.field0_0x0._s_0.Y = (float)(dVar1 * pdVar2[1]);
  pdVar2 = (double *)(**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_b0);
  local_d8 = (float)(dVar1 * *pdVar2);
  local_d4 = (float)(dVar1 * pdVar2[1]);
  pFVar3 = FGeometry::MakeChild
                     (param_2,&local_98,&(this->Info).Widget,
                      (FDeprecateVector2DParameter *)&local_d8,&local_d0);
  FArrangedChildren::AddWidget(param_3,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// BeginLayout @ 142855790

void __thiscall FSlateWidgetRun::BeginLayout(FSlateWidgetRun *this)

{
  return;
}

// Clone @ 142857e20

TSharedRef<IRun,1> * __thiscall
FSlateWidgetRun::Clone(FSlateWidgetRun *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TSharedRef<IRun,1> *pTVar4;
  FSlateWidgetRun *this_00;
  FTextLayout *pFVar5;
  FTextLayout *pFVar6;
  FTextLayout *pFVar7;
  bool bVar8;
  TRawPtrProxy<FSlateWidgetRun> local_res8;
  TSharedRef<FTextLayout,1> local_38;
  TSharedRef<FSlateWidgetRun,1> local_28;
  
  local_38.SharedReferenceCount.ReferenceController =
       (this->TextLayout).WeakReferenceCount.ReferenceController;
  pFVar5 = (FTextLayout *)0x0;
  pFVar6 = (FTextLayout *)local_38.SharedReferenceCount.ReferenceController;
  pFVar7 = pFVar5;
  if ((FTextLayout *)local_38.SharedReferenceCount.ReferenceController != (FTextLayout *)0x0) {
    iVar2 = (int)((FTextLayout *)local_38.SharedReferenceCount.ReferenceController)->_padding_;
    do {
      pFVar6 = pFVar5;
      pFVar7 = (FTextLayout *)0x0;
      if (iVar2 == 0) goto LAB_142857e65;
      LOCK();
      iVar3 = (int)((FTextLayout *)local_38.SharedReferenceCount.ReferenceController)->_padding_;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&((FTextLayout *)local_38.SharedReferenceCount.ReferenceController)->_padding_ =
             iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pFVar7 = (this->TextLayout).Object;
    pFVar6 = (FTextLayout *)local_38.SharedReferenceCount.ReferenceController;
    if (pFVar7 != (FTextLayout *)0x0) goto LAB_142857e8b;
  }
LAB_142857e65:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<IRun,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_142857e8b:
  local_38.Object = pFVar7;
  if ((pFVar7 == (FTextLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<IRun,1> *)(*pcVar1)();
    return pTVar4;
  }
  this_00 = ::operator_new(0x108);
  if ((((this_00 != (FSlateWidgetRun *)0x0) &&
       (pFVar5 = (FTextLayout *)
                 FSlateWidgetRun(this_00,&local_38,&this->RunInfo,&this->Text,&this->Info,
                                 &this->Range), pFVar5 != (FTextLayout *)0x0)) &&
      (pFVar5->_padding_ != 0)) &&
     (((pFVar5->_padding_ != 0 && (0 < *(int *)(pFVar5->_padding_ + 8))) &&
      (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InObject || !InObject->DoesSharedInstanceExist()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x7a5,L"Trying to share an already-shared object"), bVar8)))) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<IRun,1> *)(*pcVar1)();
    return pTVar4;
  }
  local_res8.Object = (FSlateWidgetRun *)pFVar5;
  TSharedRef<FSlateWidgetRun,1>::TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun>
            (&local_28,&local_res8);
  __return_storage_ptr__->Object = (IRun *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Create @ 142865ab0

TSharedRef<FSlateWidgetRun,1> * __cdecl
FSlateWidgetRun::Create
          (TSharedRef<FSlateWidgetRun,1> *__return_storage_ptr__,TSharedRef<FTextLayout,1> *param_1,
          FRunInfo *param_2,TSharedRef<FString_const_,1> *param_3,FWidgetRunInfo *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateWidgetRun *this;
  TSharedRef<FSlateWidgetRun,1> *pTVar4;
  FTextRange local_res8;
  TRawPtrProxy<FSlateWidgetRun> local_28 [2];
  
  this = ::operator_new(0x108);
  if (this != (FSlateWidgetRun *)0x0) {
    local_res8.BeginIndex = 0;
    iVar1 = (param_3->Object->Data).ArrayNum;
    local_res8.EndIndex = iVar1 + -1;
    if (iVar1 == 0) {
      local_res8.EndIndex = 0;
    }
    FSlateWidgetRun(this,param_1,param_2,param_3,param_4,&local_res8);
    this->_padding_ = (longlong)&___7FSlateWidgetRun__6B_;
    if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (0 < *(int *)(this->_padding_ + 8)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_28[0].Object = this;
  TSharedRef<FSlateWidgetRun,1>::TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun>
            (__return_storage_ptr__,local_28);
  return __return_storage_ptr__;
}

// Create @ 142865bb0

TSharedRef<FSlateWidgetRun,1> * __cdecl
FSlateWidgetRun::Create
          (TSharedRef<FSlateWidgetRun,1> *__return_storage_ptr__,TSharedRef<FTextLayout,1> *param_1,
          FRunInfo *param_2,TSharedRef<FString_const_,1> *param_3,FWidgetRunInfo *param_4,
          FTextRange *param_5)

{
  code *pcVar1;
  bool bVar2;
  FSlateWidgetRun *this;
  TSharedRef<FSlateWidgetRun,1> *pTVar3;
  TRawPtrProxy<FSlateWidgetRun> local_res8;
  
  this = ::operator_new(0x108);
  if (this == (FSlateWidgetRun *)0x0) {
    local_res8.Object = (FSlateWidgetRun *)0x0;
  }
  else {
    local_res8.Object = FSlateWidgetRun(this,param_1,param_2,param_3,param_4,param_5);
    if ((((local_res8.Object != (FSlateWidgetRun *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateWidgetRun,1>::TSharedRef<FSlateWidgetRun,1><FSlateWidgetRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateBlock @ 142868190

TSharedRef<ILayoutBlock,1> * __thiscall
FSlateWidgetRun::CreateBlock
          (FSlateWidgetRun *this,TSharedRef<ILayoutBlock,1> *__return_storage_ptr__,int param_1,
          int param_2,TVector2<double> *param_3,FLayoutBlockTextContext *param_4,
          TSharedPtr<IRunRenderer,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateWidgetRun *pFVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateWidgetRun,1> *pTVar5;
  TVector2<double> *pTVar6;
  atomic<int> *paVar7;
  TSharedRef<FSlateWidgetRun,1> local_28;
  
  pTVar5 = TSharedFromThis<FSlateWidgetRun,1>::AsShared
                     ((TSharedFromThis<FSlateWidgetRun,1> *)&this->_padding_,&local_28);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    paVar7 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TVector2<double> *)0x0) {
    pTVar6 = (TVector2<double> *)0x0;
  }
  else {
    (pTVar6->field0_0x0)._s_0.Y = (double)pFVar2;
    (pTVar6->field0_0x0)._s_0.X = (double)&___7FDefaultLayoutBlock__6B_;
    *(TReferenceControllerBase<1> **)&pTVar6[1].field0_0x0 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar6[1].field0_0x0._s_0.Y = (double)CONCAT44(param_2,param_1);
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    pTVar6[2].field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    pTVar6[2].field0_0x0._s_0.Y = dVar3;
    pTVar6[3].field0_0x0._s_0.X = 0.0;
    pTVar6[3].field0_0x0._s_0.Y = 0.0;
    *(short *)&pTVar6[4].field0_0x0 = (short)param_4->_padding_;
    pTVar6[4].field0_0x0._s_0.Y = (double)param_4->_padding_;
    dVar3 = (double)param_4->_padding_;
    pTVar6[5].field0_0x0._s_0.X = dVar3;
    if (dVar3 != 0.0) {
      LOCK();
      *(int *)((longlong)dVar3 + 8) = *(int *)((longlong)dVar3 + 8) + 1;
      UNLOCK();
    }
    *(ETextDirection *)((longlong)&pTVar6[5].field0_0x0 + 8) = param_4->TextDirection;
    pTVar6[6].field0_0x0._s_0.X = (double)param_5->Object;
    pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
    pTVar6[6].field0_0x0._s_0.Y = (double)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  param_3 = pTVar6;
  TSharedRef<FDefaultLayoutBlock,1>::TSharedRef<FDefaultLayoutBlock,1><FDefaultLayoutBlock>
            ((TSharedRef<FDefaultLayoutBlock,1> *)&local_28,
             (TRawPtrProxy<FDefaultLayoutBlock> *)&param_3);
  __return_storage_ptr__->Object = (ILayoutBlock *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// EndLayout @ 14286f190

void __thiscall FSlateWidgetRun::EndLayout(FSlateWidgetRun *this)

{
  return;
}

// GetBaseLine @ 142875220

short __thiscall FSlateWidgetRun::GetBaseLine(FSlateWidgetRun *this,float param_1)

{
  short *psVar1;
  short local_res10 [12];
  
  local_res10[0] = 0;
  psVar1 = TAttribute<short>::Get(&(this->Info).Baseline,local_res10);
  return (short)(int)((float)(int)*psVar1 * param_1);
}

// GetChildren @ 142875a30

TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateWidgetRun::GetChildren(FSlateWidgetRun *this)

{
  return &this->Children;
}

// GetKerning @ 142877340

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateWidgetRun::GetKerning
          (FSlateWidgetRun *this,int param_1,float param_2,FRunTextContext *param_3)

{
  return '\0';
}

// GetLocationAt @ 142877b10

TVector2<double> * __thiscall
FSlateWidgetRun::GetLocationAt
          (FSlateWidgetRun *this,TVector2<double> *__return_storage_ptr__,
          TSharedRef<ILayoutBlock,1> *param_1,int param_2,float param_3)

{
  (**(code **)((longlong)*param_1->Object + 0x38))();
  return __return_storage_ptr__;
}

// GetMaxHeight @ 142877f10

short __thiscall FSlateWidgetRun::GetMaxHeight(FSlateWidgetRun *this,float param_1)

{
  TOptional<UE::Math::TVector2<double>_> *pTVar1;
  TOptional<UE::Math::TVector2<double>_> local_28;
  
  SWidget::GetDesiredSize((this->Info).Widget.Object);
  pTVar1 = &local_28;
  if ((this->Info).Size.bIsSet != false) {
    pTVar1 = &(this->Info).Size;
  }
  return (short)(int)((double)param_1 * (pTVar1->TypedValue).field0_0x0._s_0.Y);
}

// GetRunAttributes @ 142879ea0

ERunAttributes __thiscall FSlateWidgetRun::GetRunAttributes(FSlateWidgetRun *this)

{
  return None;
}

// GetRunInfo @ 142879ee0

FRunInfo * __thiscall FSlateWidgetRun::GetRunInfo(FSlateWidgetRun *this)

{
  return &this->RunInfo;
}

// GetTextIndexAt @ 14287c580

int __thiscall
FSlateWidgetRun::GetTextIndexAt
          (FSlateWidgetRun *this,TSharedRef<ILayoutBlock,1> *param_1,TVector2<double> *param_2,
          float param_3,ETextHitPoint *param_4)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDeprecateSlateVector2D FVar5;
  ETextHitPoint EVar6;
  FTextRange *pFVar7;
  undefined1 local_res8 [4];
  int local_resc;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58 [16];
  TReferenceControllerBase<1> *local_48;
  
  if (((this->Range).EndIndex - (this->Range).BeginIndex != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Range.Len() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateWidgetRun.cpp"
                         ,100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_78);
  (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,&local_68);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((((dVar1 < (double)(float)local_78) || ((double)(float)(local_68 + local_78) <= dVar1)) ||
      (dVar1 = (param_2->field0_0x0)._s_0.Y, dVar1 < (double)(float)local_70)) ||
     ((double)(float)(local_60 + local_70) <= dVar1)) {
    iVar4 = -1;
  }
  else {
    FVar5 = SWidget::GetDesiredSize((this->Info).Widget.Object);
    pFVar7 = &this->Range;
    if ((double)(param_3 * *(float *)FVar5) * __real_3fe0000000000000 + (double)(float)local_78 <
        (param_2->field0_0x0)._s_0.X) {
      pFVar7 = (FTextRange *)&(this->Range).EndIndex;
    }
    iVar4 = pFVar7->BeginIndex;
    if (param_4 != (ETextHitPoint *)0x0) {
      (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,local_res8);
      (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_58);
      EVar6 = WithinText;
      if (iVar4 == local_resc) {
        EVar6 = RightGutter;
      }
      *param_4 = EVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    }
  }
  return iVar4;
}

// GetTextRange @ 14287ceb0

FTextRange __thiscall FSlateWidgetRun::GetTextRange(FSlateWidgetRun *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// Measure @ 1428847d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateWidgetRun::Measure
          (FSlateWidgetRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3,FRunTextContext *param_4)

{
  short sVar1;
  FDeprecateSlateVector2D FVar2;
  TOptional<UE::Math::TVector2<double>_> *pTVar3;
  double dVar4;
  TOptional<UE::Math::TVector2<double>_> local_20;
  
  if (param_2 == param_1) {
    sVar1 = (**(code **)(this->_padding_ + 0x20))(this,param_3);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)sVar1;
    return __return_storage_ptr__;
  }
  pTVar3 = &(this->Info).Size;
  FVar2 = SWidget::GetDesiredSize((this->Info).Widget.Object);
  dVar4 = (double)*(float *)FVar2;
  local_20.TypedValue.field0_0x0._s_0.Y = (double)*(float *)((longlong)FVar2 + 4);
  if ((this->Info).Size.bIsSet == false) {
    pTVar3 = &local_20;
  }
  else {
    dVar4 = (pTVar3->TypedValue).field0_0x0._s_0.X;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)param_3 * (pTVar3->TypedValue).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)param_3 * dVar4;
  return __return_storage_ptr__;
}

// Move @ 142884be0

void __thiscall
FSlateWidgetRun::Move(FSlateWidgetRun *this,TSharedRef<FString,1> *param_1,FTextRange *param_2)

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

// OnPaint @ 14288c4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateWidgetRun::OnPaint
          (FSlateWidgetRun *this,FPaintArgs *param_1,FTextArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  float fVar1;
  FTextLayout *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FSlateWidgetRun *pFVar3;
  ILayoutBlock *pIVar4;
  double dVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  FDeprecateSlateVector2D FVar9;
  TSharedRef<FSlateWidgetRun_const_,1> *pTVar10;
  double *pdVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStackY_168 [32];
  float local_120;
  float local_11c;
  FSlateLayoutTransform local_118;
  TSharedRef<IRun_const_,1> local_108;
  FPaintArgs *local_f8;
  FSlateWindowElementList *local_f0;
  FWidgetStyle *local_e8;
  FSlateLayoutTransform local_e0;
  TSharedRef<FSlateWidgetRun_const_,1> local_d0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  FGeometry local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_168;
  fVar14 = __real_3f800000 / param_3->Scale;
  local_f0 = param_5;
  local_e8 = param_7;
  local_f8 = param_1;
  FVar9 = SWidget::GetDesiredSize((this->Info).Widget.Object);
  fVar1 = *(float *)((longlong)FVar9 + 4);
  if (((double)*(float *)FVar9 != (this->WidgetSize).field0_0x0._s_0.X) ||
     ((double)fVar1 != (this->WidgetSize).field0_0x0._s_0.Y)) {
    (this->WidgetSize).field0_0x0._s_0.X = (double)*(float *)FVar9;
    (this->WidgetSize).field0_0x0._s_0.Y = (double)fVar1;
    pTVar12 = (this->TextLayout).WeakReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar12->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14288c609;
        }
        LOCK();
        aVar7 = pTVar12->SharedReferenceCount;
        bVar13 = aVar6 == aVar7;
        if (bVar13) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar13);
      this_00 = (this->TextLayout).Object;
      if (this_00 != (FTextLayout *)0x0) {
        pTVar10 = TSharedFromThis<FSlateWidgetRun,1>::AsShared
                            ((TSharedFromThis<FSlateWidgetRun,1> *)&this->_padding_,&local_d0);
        pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
        pFVar3 = pTVar10->Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_108.Object = (IRun *)pFVar3;
        local_108.SharedReferenceCount.ReferenceController = pTVar2;
        FTextLayout::DirtyRunLayout(this_00,&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        param_1 = local_f8;
        param_5 = local_f0;
      }
    }
LAB_14288c609:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  pIVar4 = param_2->Block->Object;
  pdVar11 = (double *)(**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,local_b8);
  dVar5 = (double)fVar14;
  local_118.Scale = 1.0;
  local_118.Translation.field0_0x0._s_0.X = (float)(dVar5 * *pdVar11);
  pIVar4 = param_2->Block->Object;
  local_118.Translation.field0_0x0._s_0.Y = (float)(dVar5 * pdVar11[1]);
  pdVar11 = (double *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_a8);
  local_e0.Scale = param_3->Scale;
  local_e0.Translation.field0_0x0 = (param_3->AbsolutePosition).field0_0x0;
  local_120 = (float)(dVar5 * *pdVar11);
  local_11c = (float)(dVar5 * pdVar11[1]);
  FGeometry::FGeometry
            (&local_98,(FDeprecateVector2DParameter *)&local_120,&local_118,&local_e0,
             &param_3->AccumulatedRenderTransform,param_3->bHasRenderTransform);
  iVar8 = SWidget::Paint((this->Info).Widget.Object,param_1,&local_98,param_4,param_5,param_6,
                         local_e8,param_8);
  return iVar8;
}

// SetTextRange @ 14289adc0

void __thiscall FSlateWidgetRun::SetTextRange(FSlateWidgetRun *this,FTextRange *param_1)

{
  this->Range = *param_1;
  return;
}

