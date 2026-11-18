// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// FSlateTextRun @ 142845c30

FSlateTextRun * __thiscall
FSlateTextRun::FSlateTextRun
          (FSlateTextRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FTextBlockStyle *param_3)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateTextRun__6B_;
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
  FTextBlockStyle::FTextBlockStyle(&this->Style,param_3);
  iVar1 = (((this->Text).Object)->Data).ArrayNum;
  (this->Range).BeginIndex = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  (this->Range).EndIndex = iVar3;
  return this;
}

// FSlateTextRun @ 142845d20

FSlateTextRun * __thiscall
FSlateTextRun::FSlateTextRun
          (FSlateTextRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FTextBlockStyle *param_3,FTextRange *param_4)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateTextRun__6B_;
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
  FTextBlockStyle::FTextBlockStyle(&this->Style,param_3);
  this->Range = *param_4;
  return this;
}

// FSlateTextRun @ 142845e00

FSlateTextRun * __thiscall FSlateTextRun::FSlateTextRun(FSlateTextRun *this,FSlateTextRun *param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FSlateTextRun__6B_;
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
  FTextBlockStyle::FTextBlockStyle(&this->Style,&param_1->Style);
  this->Range = param_1->Range;
  return this;
}

// ~FSlateTextRun @ 142849d30

void __thiscall FSlateTextRun::~FSlateTextRun(FSlateTextRun *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FSlateTextRun__6B_;
  FTextBlockStyle::~FTextBlockStyle(&this->Style);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar3 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar4 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
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

// AppendTextTo @ 142853330

void __thiscall FSlateTextRun::AppendTextTo(FSlateTextRun *this,FString *param_1)

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

// AppendTextTo @ 142853380

void __thiscall
FSlateTextRun::AppendTextTo(FSlateTextRun *this,FString *param_1,FTextRange *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if (param_2->BeginIndex < (this->Range).BeginIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.BeginIndex <= PartialRange.BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateTextRun.cpp"
                       ,0x115,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Range).EndIndex < param_2->EndIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.EndIndex >= PartialRange.EndIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateTextRun.cpp"
                       ,0x116,L"");
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

// ApplyFontSizeMultiplierOnTextStyle @ 142853550

void __thiscall FSlateTextRun::ApplyFontSizeMultiplierOnTextStyle(FSlateTextRun *this,float param_1)

{
  if (param_1 != 0.0) {
    (this->Style).Font.Size = param_1 * (this->Style).Font.Size;
  }
  return;
}

// ArrangeChildren @ 142853980

void __thiscall
FSlateTextRun::ArrangeChildren
          (FSlateTextRun *this,TSharedRef<ILayoutBlock,1> *param_1,FGeometry *param_2,
          FArrangedChildren *param_3)

{
  return;
}

// BeginLayout @ 142855780

void __thiscall FSlateTextRun::BeginLayout(FSlateTextRun *this)

{
  return;
}

// Clone @ 142857dc0

TSharedRef<IRun,1> * __thiscall
FSlateTextRun::Clone(FSlateTextRun *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FSlateTextRun,1> *pTVar2;
  TSharedRef<FSlateTextRun,1> local_18;
  
  pTVar2 = Create(&local_18,&this->RunInfo,&this->Text,&this->Style,&this->Range);
  __return_storage_ptr__->Object = (IRun *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 1428657a0

TSharedRef<FSlateTextRun,1> * __cdecl
FSlateTextRun::Create
          (TSharedRef<FSlateTextRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FTextBlockStyle *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextRun *this;
  TSharedRef<FSlateTextRun,1> *pTVar3;
  TRawPtrProxy<FSlateTextRun> local_res8;
  
  this = ::operator_new(0x380);
  if (this == (FSlateTextRun *)0x0) {
    local_res8.Object = (FSlateTextRun *)0x0;
  }
  else {
    local_res8.Object = FSlateTextRun(this,param_1,param_2,param_3);
    if ((((local_res8.Object != (FSlateTextRun *)0x0) &&
         (*(longlong *)&(local_res8.Object)->field_0x8 != 0)) &&
        (*(longlong *)&(local_res8.Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res8.Object)->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateTextRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 142865860

TSharedRef<FSlateTextRun,1> * __cdecl
FSlateTextRun::Create
          (TSharedRef<FSlateTextRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FTextBlockStyle *param_3,FTextRange *param_4)

{
  code *pcVar1;
  bool bVar2;
  FSlateTextRun *this;
  TSharedRef<FSlateTextRun,1> *pTVar3;
  TRawPtrProxy<FSlateTextRun> local_res8;
  
  this = ::operator_new(0x380);
  if (this == (FSlateTextRun *)0x0) {
    local_res8.Object = (FSlateTextRun *)0x0;
  }
  else {
    local_res8.Object = FSlateTextRun(this,param_1,param_2,param_3,param_4);
    if ((((local_res8.Object != (FSlateTextRun *)0x0) &&
         (*(longlong *)&(local_res8.Object)->field_0x8 != 0)) &&
        (*(longlong *)&(local_res8.Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res8.Object)->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateTextRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateTextRun,1>::TSharedRef<FSlateTextRun,1><FSlateTextRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateBlock @ 142868020

TSharedRef<ILayoutBlock,1> * __thiscall
FSlateTextRun::CreateBlock
          (FSlateTextRun *this,TSharedRef<ILayoutBlock,1> *__return_storage_ptr__,int param_1,
          int param_2,TVector2<double> *param_3,FLayoutBlockTextContext *param_4,
          TSharedPtr<IRunRenderer,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateTextRun *pFVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateTextRun,1> *pTVar5;
  TVector2<double> *pTVar6;
  atomic<int> *paVar7;
  TSharedRef<FSlateTextRun,1> local_28;
  
  pTVar5 = TSharedFromThis<FSlateTextRun,1>::AsShared
                     ((TSharedFromThis<FSlateTextRun,1> *)&this->field_0x8,&local_28);
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

// EndLayout @ 14286f180

void __thiscall FSlateTextRun::EndLayout(FSlateTextRun *this)

{
  return;
}

// GetBaseLine @ 142875150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall FSlateTextRun::GetBaseLine(FSlateTextRun *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  FSlateApplication *pFVar6;
  float fVar7;
  TSharedRef<FSlateFontMeasure,1> local_38 [3];
  
  pFVar6 = FSlateApplication::Get();
  lVar2 = *(longlong *)&pFVar6->field_0x60;
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),local_38);
  fVar7 = *(float *)&(this->Style).ShadowOffset.field_0x4;
  if (0.0 <= fVar7) {
    fVar7 = 0.0;
  }
  sVar5 = FSlateFontMeasure::GetBaseline(local_38[0].Object,&(this->Style).Font,param_1);
  iVar1 = (this->Style).Font.OutlineSettings.OutlineSize;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return (short)(int)((float)(int)sVar5 - ((float)iVar1 + fVar7) * param_1);
}

// GetChildren @ 1428759c0

TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateTextRun::GetChildren(FSlateTextRun *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSlateTextRun::GetChildren'::__l2::_dynamic_atexit_destructor_for__NoChildren__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NoChildren;
}

// GetKerning @ 142877170

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateTextRun::GetKerning(FSlateTextRun *this,int param_1,float param_2,FRunTextContext *param_3)

{
  int iVar1;
  FString *pFVar2;
  FShapedGlyphSequence *this_00;
  TReferenceControllerBase<1> *pTVar3;
  TOptional<signed_char> TVar4;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar5;
  undefined6 extraout_var;
  schar sVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 local_res10 [8];
  schar local_128;
  char local_127;
  TSharedRef<FShapedGlyphSequence_const_,1> local_120;
  TSharedRef<FShapedGlyphSequence_const_,1> local_110;
  FCachedShapedTextKey local_100;
  FCachedShapedTextKey local_88;
  schar *psVar6;
  
  iVar9 = param_1 + -1;
  if (-1 < iVar9) {
    pFVar2 = (this->Text).Object;
    iVar1 = (pFVar2->Data).ArrayNum;
    local_120.Object._4_4_ = iVar1 - 1;
    if (iVar1 == 0) {
      local_120.Object._4_4_ = 0;
    }
    if (param_1 != local_120.Object._4_4_) {
      if (iVar1 == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
      }
      local_120.Object._0_4_ = 0;
      local_100.TextRange = (FTextRange)((ulonglong)local_120.Object._4_4_ << 0x20);
      local_100.TextContext = *(FShapedTextContext *)&param_3->_padding_;
      local_100.Scale = param_2;
      FSlateFontInfo::FSlateFontInfo(&local_100.FontInfo,&(this->Style).Font);
      FShapedTextCache::FindOrAddShapedText
                ((param_3->ShapedTextCache).Object,&local_110,&local_100,pwVar8);
      FShapedGlyphSequence::GetKerning(local_110.Object,(int)&local_128);
      sVar7 = local_128;
      if (local_127 == '\0') {
        local_88.TextRange = local_100.TextRange;
        local_88.TextContext = local_100.TextContext;
        local_88.Scale = local_100.Scale;
        FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,&local_100.FontInfo);
        local_120.Object._4_4_ = param_1 + 1;
        local_88.TextRange.EndIndex = local_120.Object._4_4_;
        local_88.TextRange.BeginIndex = iVar9;
        local_120.Object._0_4_ = iVar9;
        pTVar5 = FShapedTextCache::FindOrAddShapedText
                           ((param_3->ShapedTextCache).Object,&local_120,&local_88,pwVar8);
        this_00 = pTVar5->Object;
        pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
        pTVar5->Object = local_110.Object;
        (pTVar5->SharedReferenceCount).ReferenceController =
             local_110.SharedReferenceCount.ReferenceController;
        local_110.Object = this_00;
        local_110.SharedReferenceCount.ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120.SharedReferenceCount.ReferenceController);
        TVar4 = FShapedGlyphSequence::GetKerning(this_00,(int)local_res10);
        psVar6 = (schar *)CONCAT62(extraout_var,TVar4);
        if (psVar6 != &local_128) {
          if (psVar6[1] == '\0') {
            if (local_127 != '\0') {
              local_127 = '\0';
            }
          }
          else {
            local_128 = *psVar6;
            local_127 = '\x01';
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
        sVar7 = local_128;
        if (local_127 == '\0') {
          sVar7 = '\0';
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
      return sVar7;
    }
  }
  return '\0';
}

// GetLocationAt @ 1428779e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateTextRun::GetLocationAt
          (FSlateTextRun *this,TVector2<double> *__return_storage_ptr__,
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
  FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,&(this->Style).Font);
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

// GetMaxHeight @ 142877e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

short __thiscall FSlateTextRun::GetMaxHeight(FSlateTextRun *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  FSlateApplication *pFVar7;
  float fVar8;
  TSharedRef<FSlateFontMeasure,1> local_38 [3];
  
  pFVar7 = FSlateApplication::Get();
  lVar2 = *(longlong *)&pFVar7->field_0x60;
  if (*(longlong *)(lVar2 + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      sVar5 = (*pcVar3)();
      return sVar5;
    }
  }
  FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),local_38);
  fVar8 = (float)(*(uint *)&(this->Style).ShadowOffset.field_0x4 &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  uVar6 = FSlateFontMeasure::GetMaxCharacterHeight(local_38[0].Object,&(this->Style).Font,param_1);
  iVar1 = (this->Style).Font.OutlineSettings.OutlineSize;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return (short)(int)(((float)iVar1 + fVar8) * param_1 + (float)uVar6);
}

// GetOutlineSize @ 1428789b0

TVector2<double> * __thiscall
FSlateTextRun::GetOutlineSize
          (FSlateTextRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(this->Style).Font.OutlineSettings.OutlineSize * param_3;
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

// GetRunAttributes @ 142879e90

ERunAttributes __thiscall FSlateTextRun::GetRunAttributes(FSlateTextRun *this)

{
  return SupportsText;
}

// GetRunInfo @ 142879ed0

FRunInfo * __thiscall FSlateTextRun::GetRunInfo(FSlateTextRun *this)

{
  return &this->RunInfo;
}

// GetShadowSize @ 14287a3c0

TVector2<double> * __thiscall
FSlateTextRun::GetShadowSize
          (FSlateTextRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->Style).ShadowOffset;
  if (((fVar1 <= 0.0) || (param_2 != (this->Range).EndIndex)) &&
     ((0.0 <= fVar1 || (param_1 != (this->Range).BeginIndex)))) {
    fVar1 = *(float *)&(this->Style).ShadowOffset.field_0x4;
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(float)((uint)(param_3 * fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    return __return_storage_ptr__;
  }
  fVar2 = (float)((uint)(param_3 * *(float *)&(this->Style).ShadowOffset.field_0x4) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)((uint)(fVar1 * param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2;
  return __return_storage_ptr__;
}

// GetTextIndexAt @ 14287c3e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateTextRun::GetTextIndexAt
          (FSlateTextRun *this,TSharedRef<ILayoutBlock,1> *param_1,TVector2<double> *param_2,
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
  if ((((local_c8 <= dVar1) && (dVar1 < local_b8 + local_c8)) &&
      (dVar1 = (param_2->field0_0x0)._s_0.Y, local_c0 <= dVar1)) && (dVar1 < local_b0 + local_c0)) {
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
    FSlateFontInfo::FSlateFontInfo(&local_88.FontInfo,&(this->Style).Font);
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

// GetTextRange @ 14287ce90

FTextRange __thiscall FSlateTextRun::GetTextRange(FSlateTextRun *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// Measure @ 142884630

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateTextRun::Measure
          (FSlateTextRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3,FRunTextContext *param_4)

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
    sVar4 = (**(code **)(*(longlong *)this + 0x20))(this,param_3);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_b8 + local_c8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(int)sVar4 + local_c0 + local_b0 + local_c0 + local_b0;
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
    FSlateFontInfo::FSlateFontInfo(&local_98.FontInfo,&(this->Style).Font);
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

// Move @ 142884b80

void __thiscall
FSlateTextRun::Move(FSlateTextRun *this,TSharedRef<FString,1> *param_1,FTextRange *param_2)

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

// OnPaint @ 14288bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
FSlateTextRun::OnPaint
          (FSlateTextRun *this,FPaintArgs *param_1,FTextArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  ESlateColorStylingMode EVar6;
  TSharedRef<ILayoutBlock,1> *pTVar7;
  FLineView *pFVar8;
  FString *pFVar9;
  TVector2<float>_u_0_s_0 TVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FShapedGlyphSequence *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  float afVar17 [2];
  char cVar18;
  undefined4 uVar19;
  TSharedRef<FShapedGlyphSequence_const_,1> *pTVar20;
  double *pdVar21;
  FSlateColor *this_00;
  IConsoleManager *pIVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_308 [32];
  ETextOverflowDirection local_2c8;
  ETextOverflowPolicy local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c4;
  undefined8 local_2c0;
  undefined8 local_2b8;
  FLinearColor_u_0 local_2b0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  FTextOverflowArgs local_278;
  TTransform2<float> local_260;
  FTextRange local_248;
  FSlateWindowElementList *local_240;
  TTransform2<float> local_238;
  FLinearColor_u_0 local_220;
  FShapedTextContext local_210 [4];
  TSharedRef<FShapedTextCache,1> local_208;
  ETextDirection local_1f8;
  TSharedRef<FShapedGlyphSequence_const_,1> local_1e8;
  TTransform2<float> local_1d8;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  FCachedShapedTextKey local_190;
  undefined1 local_118 [12];
  undefined1 local_10c [4];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [8];
  FLinearColor_u_0 FStack_e8;
  FSharedReferencer<1> local_d0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_240 = param_5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar22 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,L"Slate.LogPaintedText",1);
    _Init_thread_footer(&::_TSS0);
  }
  cVar18 = (**(code **)(*(longlong *)::CVar + 0xc0))();
  pwVar24 = L"";
  if ((cVar18 != '\0') && (4 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  fVar28 = 0.0;
  pTVar7 = param_2->Block;
  pFVar8 = param_2->Line;
  if (((this->Style).ShadowColorAndOpacity.field0_0x0._s_0.A <= 0.0) ||
     (fVar25 = *(float *)&(this->Style).ShadowOffset,
     fVar27 = *(float *)&(this->Style).ShadowOffset.field_0x4, bVar16 = true,
     fVar25 * fVar25 + fVar27 * fVar27 <= 0.0)) {
    bVar16 = false;
  }
  (**(code **)((longlong)*pTVar7->Object + 0x38))(pTVar7->Object,local_1a0);
  (**(code **)((longlong)*pTVar7->Object + 0x10))(pTVar7->Object,&local_248);
  (**(code **)((longlong)*pTVar7->Object + 0x20))(pTVar7->Object,local_210);
  fVar25 = *(float *)&(this->Style).ShadowOffset.field_0x4;
  local_118._8_4_ = param_3->Scale;
  fVar29 = __real_3f800000 / (float)local_118._8_4_;
  fVar27 = fVar25 * (float)local_118._8_4_;
  if (fVar25 <= 0.0) {
    fVar27 = 0.0;
  }
  fVar1 = *(float *)&(this->Style).ShadowOffset;
  if (fVar1 <= 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)local_118._8_4_ * fVar1;
  }
  if (0.0 <= fVar25) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = (float)((uint)(fVar25 * (float)local_118._8_4_) ^
                    __xmm_80000000800000008000000080000000);
  }
  if (fVar1 < 0.0) {
    fVar28 = (float)((uint)((float)local_118._8_4_ * fVar1) ^ __xmm_80000000800000008000000080000000
                    );
  }
  pFVar9 = (this->Text).Object;
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  local_118._0_8_ = pFVar8->Range;
  local_10c[0] = local_210[0].TextShapingMethod;
  local_10c[1] = local_210[0].BaseDirection;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)(local_10c + 4),&(this->Style).Font);
  ShapedTextCacheUtil::GetShapedTextSubSequence
            (&local_1e8,&local_208,(FCachedShapedTextKey *)local_118,&local_248,pwVar23,local_1f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  local_2c8 = NoOverflow;
  local_260.Trans.field0_0x0._s_0.X = 0.0;
  local_2c7 = Clip;
  local_2c6 = 0;
  local_2c4 = 0;
  local_260.M.M[0][0] = 0.0;
  local_260.M.M[0][1] = 0.0;
  local_260.M.M[1][0] = 0.0;
  local_260.M.M[1][1] = 0.0;
  if (((param_2->OverflowPolicy == Ellipsis) ||
      ((byte)(param_2->OverflowPolicy - MultilineEllipsis) < 2)) &&
     (param_2->OverflowDirection != NoOverflow)) {
    pTVar20 = FShapedTextCache::FindOrAddOverflowEllipsisText
                        (local_208.Object,
                         (TSharedRef<FShapedGlyphSequence_const_,1> *)&local_2b0._s_0,param_3->Scale
                         ,local_210,&(this->Style).Font);
    _fStack_290 = (pTVar20->SharedReferenceCount).ReferenceController;
    local_260.M.M[0] = (float  [2])pTVar20->Object;
    if ((TReferenceControllerBase<1> *)_fStack_290 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)_fStack_290)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)_fStack_290)->SharedReferenceCount + 1);
      UNLOCK();
    }
    _local_298 = (FShapedGlyphSequence *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_260.M.M + 1),(FSharedReferencer<1> *)&fStack_290);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)_fStack_290);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(local_2b0._s_0.A,local_2b0._s_0.B));
    local_2c8 = param_2->OverflowDirection;
    local_2c7 = param_2->OverflowPolicy;
    local_2c6 = param_2->bIsLastVisibleBlock;
    local_2c4 = param_2->bIsNextBlockClipped;
  }
  afVar17 = local_260.M.M[1];
  if (bVar16) {
    _local_298 = local_1e8.Object;
    _fStack_290 = local_1e8.SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.R !=
          (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.R) ||
        ((this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.G !=
         (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.G)) ||
       (((this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.B !=
         (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.B ||
        ((this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.A !=
         (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.A)))) {
      FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_118,&(this->Style).Font);
      uVar12 = *(undefined8 *)&(this->Style).ShadowColorAndOpacity.field0_0x0;
      uVar13 = *(undefined8 *)((longlong)&(this->Style).ShadowColorAndOpacity.field0_0x0 + 8);
      uVar19 = auStack_108._0_4_;
      if (auStack_108[6] == '\0') {
        uVar19 = 0;
      }
      auStack_108._8_4_ = 0.0;
      auStack_108._12_4_ = 0;
      auStack_108._0_4_ = uVar19;
      pFVar9 = (this->Text).Object;
      auStack_108._16_4_ = (undefined4)uVar12;
      auStack_108._20_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
      auStack_f0._0_4_ = (undefined4)uVar13;
      auStack_f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar24 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_190.Scale = param_3->Scale;
      local_190.TextRange = pFVar8->Range;
      local_190.TextContext = local_210[0];
      FSlateFontInfo::FSlateFontInfo(&local_190.FontInfo,(FSlateFontInfo *)local_118);
      pTVar20 = ShapedTextCacheUtil::GetShapedTextSubSequence
                          ((TSharedRef<FShapedGlyphSequence_const_,1> *)&local_2b0._s_0,&local_208,
                           &local_190,&local_248,pwVar24,local_1f8);
      pFVar14 = pTVar20->Object;
      pTVar15 = (pTVar20->SharedReferenceCount).ReferenceController;
      pTVar20->Object = (FShapedGlyphSequence *)_local_298;
      (pTVar20->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)_fStack_290;
      _local_298 = pFVar14;
      _fStack_290 = pTVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(local_2b0._s_0.A,local_2b0._s_0.B));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.FontInfo.CompositeFont.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FStack_e8._8_8_);
    }
    local_278.OverflowTextPtr.Object = (FShapedGlyphSequence *)local_260.M.M[0];
    local_278.OverflowTextPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)afVar17;
    if (afVar17 != (float  [2])0x0) {
      LOCK();
      *(atomic<int> *)((longlong)afVar17 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)afVar17 + 8) + 1);
      UNLOCK();
    }
    fVar1 = (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    fVar2 = (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_220._s_0.R = fVar1 * (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.R;
    fVar3 = (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar4 = (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_2b0._s_0.R = fVar1 * (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.R;
    local_220._s_0.G = fVar2 * (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.G;
    local_2b0._s_0.G = fVar2 * (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.G;
    local_220._s_0.B = fVar3 * (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.B;
    local_278.OverflowPolicy = local_2c7;
    local_2b0._s_0.B = fVar3 * (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.B;
    local_220._s_0.A = fVar4 * (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.A;
    local_278.OverflowDirection = local_2c8;
    local_2b0._s_0.A = fVar4 * (this->Style).ShadowColorAndOpacity.field0_0x0._s_0.A;
    local_278.bIsLastVisibleBlock = (bool)local_2c6;
    local_278.bIsNextBlockClipped = (bool)local_2c4;
    pdVar21 = (double *)(**(code **)((longlong)*pTVar7->Object + 0x38))(pTVar7->Object,local_1c0);
    dVar11 = (double)fVar29;
    local_2c0._0_4_ = (undefined4)(((double)fVar26 + *pdVar21) * dVar11);
    local_2c0._4_4_ = (undefined4)(((double)fVar27 + pdVar21[1]) * dVar11);
    pdVar21 = (double *)(**(code **)((longlong)*pTVar7->Object + 0x18))(pTVar7->Object,local_1b0);
    TVar10 = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_238.M.M[0][1] = TVar10.X;
    local_238.M.M[1][0] = TVar10.Y;
    local_280 = (float)(dVar11 * *pdVar21);
    local_238.Trans.field0_0x0 = local_2c0;
    fStack_27c = (float)(dVar11 * pdVar21[1]);
    fVar27 = param_3->Scale;
    local_288 = (float)(undefined4)local_2c0 * fVar27 + local_238.M.M[0][1];
    fStack_284 = (float)local_2c0._4_4_ * fVar27 + local_238.M.M[1][0];
    local_238.M.M[0][0] = (float)__xmm_3f80000000000000000000003f800000;
    local_238.M.M[0][1] = __xmm_3f80000000000000000000003f800000._4_4_;
    local_238.M.M[1][0] = (float)UNK_15076b188;
    local_238.M.M[1][1] = UNK_15076b188._4_4_;
    Concatenate<TTransform2<float>_>(&local_1d8,&local_238,&param_3->AccumulatedRenderTransform);
    local_118._4_4_ = (int)fStack_284;
    local_118._0_4_ = (int)local_288;
    _local_10c = (TVector2<float>_u_0)0x0;
    auStack_108._4_2_ = SUB42(local_280,0);
    auStack_108[6] = (undefined1)((uint)local_280 >> 0x10);
    auStack_108[7] = (undefined1)((uint)local_280 >> 0x18);
    auStack_108._8_4_ = fStack_27c;
    auStack_f0._4_4_ = local_1d8.Trans.field0_0x0._0_4_;
    FStack_e8._s_0.R = local_1d8.Trans.field0_0x0._4_4_;
    FStack_e8._4_1_ = param_3->bHasRenderTransform * '\x02' | FStack_e8._4_1_ & 0xfc;
    param_6 = param_6 + 1;
    auStack_108._12_4_ = local_1d8.M.M[0][0];
    auStack_108._16_4_ = local_1d8.M.M[0][1];
    auStack_108._20_4_ = local_1d8.M.M[1][0];
    auStack_f0._0_4_ = local_1d8.M.M[1][1];
    local_118._8_4_ = fVar27;
    FSlateDrawElement::MakeShapedText
              (local_240,param_6,(FPaintGeometry *)local_118,
               (TSharedRef<FShapedGlyphSequence_const_,1> *)&local_298,!param_8 << 5,
               (FLinearColor *)&local_2b0._s_0,(FLinearColor *)&local_220._s_0,&local_278);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)_fStack_290);
  }
  local_278.OverflowTextPtr.Object = (FShapedGlyphSequence *)local_260.M.M[0];
  local_278.OverflowTextPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)afVar17;
  if (afVar17 != (float  [2])0x0) {
    LOCK();
    *(atomic<int> *)((longlong)afVar17 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)afVar17 + 8) + 1);
    UNLOCK();
  }
  local_278.OverflowPolicy = local_2c7;
  local_278.bIsLastVisibleBlock = (bool)local_2c6;
  fStack_294 = (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.G *
               (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_298 = (param_7->ColorAndOpacityTint).field0_0x0._s_0.R *
              (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.R;
  this_00 = &(this->Style).ColorAndOpacity;
  local_278.OverflowDirection = local_2c8;
  EVar6 = (this->Style).ColorAndOpacity.ColorUseRule;
  fStack_28c = (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.A *
               (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
  fStack_290 = (this->Style).Font.OutlineSettings.OutlineColor.field0_0x0._s_0.B *
               (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_278.bIsNextBlockClipped = (bool)local_2c4;
  if (EVar6 != UseColor_Specified) {
    if (EVar6 == UseColor_ColorTable) {
      this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
    }
    else if ((EVar6 == UseColor_Foreground) || (EVar6 != UseColor_Foreground_Subdued)) {
      this_00 = (FSlateColor *)&param_7->ForegroundColor;
    }
    else {
      this_00 = (FSlateColor *)&param_7->SubduedForeground;
    }
  }
  local_2b0._s_0.R =
       (param_7->ColorAndOpacityTint).field0_0x0._s_0.R *
       (this_00->SpecifiedColor).field0_0x0._s_0.R;
  local_2b0._s_0.A =
       (this_00->SpecifiedColor).field0_0x0._s_0.A *
       (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_2b0._s_0.B =
       (this_00->SpecifiedColor).field0_0x0._s_0.B *
       (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_2b0._s_0.G =
       (this_00->SpecifiedColor).field0_0x0._s_0.G *
       (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
  pdVar21 = (double *)(**(code **)((longlong)*pTVar7->Object + 0x38))(pTVar7->Object,local_1b0);
  dVar11 = (double)fVar29;
  local_2b8._0_4_ = (undefined4)(((double)fVar28 + *pdVar21) * dVar11);
  local_2b8._4_4_ = (undefined4)(((double)fVar25 + pdVar21[1]) * dVar11);
  pdVar21 = (double *)(**(code **)((longlong)*pTVar7->Object + 0x18))(pTVar7->Object,local_1c0);
  TVar10 = (param_3->AbsolutePosition).field0_0x0._s_0;
  local_238.M.M[0][1] = TVar10.X;
  local_238.M.M[1][0] = TVar10.Y;
  local_288 = (float)(dVar11 * *pdVar21);
  local_1d8.Trans.field0_0x0 = local_2b8;
  fStack_284 = (float)(dVar11 * pdVar21[1]);
  fVar28 = param_3->Scale;
  local_280 = (float)(undefined4)local_2b8 * fVar28 + local_238.M.M[0][1];
  fStack_27c = (float)local_2b8._4_4_ * fVar28 + local_238.M.M[1][0];
  local_1d8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_1d8.M.M[0][1] = _UNK_15076b184;
  local_1d8.M.M[1][0] = _UNK_15076b188;
  local_1d8.M.M[1][1] = _UNK_15076b18c;
  Concatenate<TTransform2<float>_>(&local_260,&local_1d8,&param_3->AccumulatedRenderTransform);
  local_118._4_4_ = (int)fStack_27c;
  local_118._0_4_ = (int)local_280;
  auStack_108._4_2_ = SUB42(local_288,0);
  auStack_108[6] = (undefined1)((uint)local_288 >> 0x10);
  auStack_108[7] = (undefined1)((uint)local_288 >> 0x18);
  auStack_108._8_4_ = fStack_284;
  FStack_e8._4_1_ = param_3->bHasRenderTransform * '\x02' | FStack_e8._4_1_ & 0xfc;
  _local_10c = (TVector2<float>_u_0)0x0;
  auStack_108._12_4_ = local_260.M.M[0][0];
  auStack_108._16_4_ = local_260.M.M[0][1];
  auStack_108._20_4_ = local_260.M.M[1][0];
  auStack_f0._0_4_ = local_260.M.M[1][1];
  auStack_f0._4_4_ = local_260.Trans.field0_0x0._s_0.X;
  local_118._8_4_ = fVar28;
  FSlateDrawElement::MakeShapedText
            (local_240,param_6 + 1,(FPaintGeometry *)local_118,&local_1e8,!param_8 << 5,
             (FLinearColor *)&local_2b0._s_0,(FLinearColor *)&local_298,&local_278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)afVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return param_6 + 1;
}

// SetTextRange @ 14289ada0

void __thiscall FSlateTextRun::SetTextRange(FSlateTextRun *this,FTextRange *param_1)

{
  this->Range = *param_1;
  return;
}

