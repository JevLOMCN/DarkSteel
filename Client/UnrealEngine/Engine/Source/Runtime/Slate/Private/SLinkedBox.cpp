// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// SLinkedBox @ 142a18090

SLinkedBox * __thiscall SLinkedBox::SLinkedBox(SLinkedBox *this)

{
  byte *pbVar1;
  
  SBox::SBox((SBox *)this);
  this->_padding_ = (longlong)&___7SLinkedBox__6B_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  (this->Manager).Object = (FLinkedBoxManager *)0x0;
  (this->Manager).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SLinkedBox @ 142a18d80

void __thiscall SLinkedBox::~SLinkedBox(SLinkedBox *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7SLinkedBox__6B_;
  if ((this->Manager).Object == (FLinkedBoxManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<SLinkedBox_*,DefaultKeyFuncs<SLinkedBox_*,0>,FDefaultSetAllocator>::Remove
            (&((this->Manager).Object)->Siblings,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Manager).SharedReferenceCount.ReferenceController);
  SBox::~SBox((SBox *)this);
  return;
}

// ComputeDesiredSize @ 142a1bdc0

TVector2<double> * __thiscall
SLinkedBox::ComputeDesiredSize
          (SLinkedBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  if ((this->Manager).Object == (FLinkedBoxManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FLinkedBoxManager::GetUniformCellSize((this->Manager).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Construct @ 142a1d280

void __thiscall
SLinkedBox::Construct(SLinkedBox *this,FArguments *param_1,TSharedRef<FLinkedBoxManager,1> *param_2)

{
  TSharedPtr<FLinkedBoxManager,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  SLinkedBox *local_res8;
  SLinkedBox *local_res10;
  FLinkedBoxManager *local_4a8;
  FSharedReferencer<1> local_4a0;
  float local_498;
  bool local_494;
  undefined1 local_490 [24];
  float local_478;
  bool local_474;
  undefined1 local_470 [24];
  float local_458;
  bool local_454;
  undefined1 local_450 [24];
  float local_438;
  bool local_434;
  undefined1 local_430 [24];
  float local_418;
  bool local_414;
  undefined1 local_410 [24];
  float local_3f8;
  bool local_3f4;
  undefined1 local_3f0 [24];
  float local_3d8;
  bool local_3d4;
  undefined1 local_3d0 [24];
  float local_3b8;
  bool local_3b4;
  undefined1 local_3b0 [24];
  undefined8 local_398;
  undefined8 uStack_390;
  bool local_388;
  undefined1 local_380 [24];
  SWidget *local_368;
  TReferenceControllerBase<1> *pTStack_360;
  FArguments local_358;
  
  local_4a8 = param_2->Object;
  local_4a0.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  if (local_4a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Manager;
  if (pTVar1 != (TSharedPtr<FLinkedBoxManager,1> *)&local_4a8) {
    pTVar1->Object = local_4a8;
    local_4a8 = (FLinkedBoxManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manager).SharedReferenceCount,&local_4a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a0.ReferenceController);
  if (pTVar1->Object == (FLinkedBoxManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res10 = this;
  TSet<SLinkedBox_*,DefaultKeyFuncs<SLinkedBox_*,0>,FDefaultSetAllocator>::
  Emplace<SLinkedBox_*_const_&>(&pTVar1->Object->Siblings,&local_res8,(bool *)&local_res10);
  pFVar6 = SBox::FArguments::FArguments(&local_358);
  pFVar6->_HAlign = param_1->_HAlign;
  pFVar6->_VAlign = param_1->_VAlign;
  local_388 = (param_1->_Padding).bIsSet;
  local_398._0_4_ = (param_1->_Padding).Value.Left;
  local_398._4_4_ = (param_1->_Padding).Value.Top;
  uStack_390._0_4_ = (param_1->_Padding).Value.Right;
  uStack_390._4_4_ = (param_1->_Padding).Value.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_380,
             &(param_1->_Padding).Getter);
  (pFVar6->_Padding).Value.Left = (float)(undefined4)local_398;
  (pFVar6->_Padding).Value.Top = (float)local_398._4_4_;
  (pFVar6->_Padding).Value.Right = (float)(undefined4)uStack_390;
  (pFVar6->_Padding).Value.Bottom = (float)uStack_390._4_4_;
  (pFVar6->_Padding).bIsSet = local_388;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_380);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_380);
  if ((void *)local_380._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_380._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_380);
  local_498 = (param_1->_WidthOverride).Value.Size;
  local_494 = (param_1->_WidthOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_490,
             &(param_1->_WidthOverride).Getter);
  (pFVar6->_WidthOverride).Value.Size = local_498;
  (pFVar6->_WidthOverride).bIsSet = local_494;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  if ((void *)local_490._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_490._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  local_478 = (param_1->_HeightOverride).Value.Size;
  local_474 = (param_1->_HeightOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_470,
             &(param_1->_HeightOverride).Getter);
  (pFVar6->_HeightOverride).Value.Size = local_478;
  (pFVar6->_HeightOverride).bIsSet = local_474;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  if ((void *)local_470._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_470._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  local_458 = (param_1->_MinDesiredWidth).Value.Size;
  local_454 = (param_1->_MinDesiredWidth).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_450,
             &(param_1->_MinDesiredWidth).Getter);
  (pFVar6->_MinDesiredWidth).Value.Size = local_458;
  (pFVar6->_MinDesiredWidth).bIsSet = local_454;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
  if ((void *)local_450._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_450._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  local_438 = (param_1->_MinDesiredHeight).Value.Size;
  local_434 = (param_1->_MinDesiredHeight).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_430,
             &(param_1->_MinDesiredHeight).Getter);
  (pFVar6->_MinDesiredHeight).Value.Size = local_438;
  (pFVar6->_MinDesiredHeight).bIsSet = local_434;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MinDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
  if ((void *)local_430._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_430._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_430);
  local_418 = (param_1->_MaxDesiredWidth).Value.Size;
  local_414 = (param_1->_MaxDesiredWidth).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_410,
             &(param_1->_MaxDesiredWidth).Getter);
  (pFVar6->_MaxDesiredWidth).Value.Size = local_418;
  (pFVar6->_MaxDesiredWidth).bIsSet = local_414;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_410);
  if ((void *)local_410._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_410._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_410);
  local_3f8 = (param_1->_MaxDesiredHeight).Value.Size;
  local_3f4 = (param_1->_MaxDesiredHeight).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f0,
             &(param_1->_MaxDesiredHeight).Getter);
  (pFVar6->_MaxDesiredHeight).Value.Size = local_3f8;
  (pFVar6->_MaxDesiredHeight).bIsSet = local_3f4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  if ((void *)local_3f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  local_3d8 = (param_1->_MinAspectRatio).Value.Size;
  local_3d4 = (param_1->_MinAspectRatio).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d0,
             &(param_1->_MinAspectRatio).Getter);
  (pFVar6->_MinAspectRatio).Value.Size = local_3d8;
  (pFVar6->_MinAspectRatio).bIsSet = local_3d4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MinAspectRatio).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  if ((void *)local_3d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  local_3b8 = (param_1->_MaxAspectRatio).Value.Size;
  local_3b4 = (param_1->_MaxAspectRatio).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_3b0,
             &(param_1->_MaxAspectRatio).Getter);
  (pFVar6->_MaxAspectRatio).Value.Size = local_3b8;
  (pFVar6->_MaxAspectRatio).bIsSet = local_3b4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_MaxAspectRatio).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if ((void *)local_3b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_368 = (pFVar6->_Content).Widget.Object;
  pTStack_360 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_Content).Widget.Object = pSVar3;
  (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_360);
  SBox::Construct((SBox *)this,pFVar6);
  SBox::FArguments::~FArguments(&local_358);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// CustomChildPrepass @ 142a26710

void __thiscall SLinkedBox::CustomChildPrepass(SLinkedBox *this)

{
  SWidget::SlatePrepass((SWidget *)this->_padding_);
  return;
}

// CustomPrepass @ 142a26730

bool __thiscall SLinkedBox::CustomPrepass(SLinkedBox *this,float param_1)

{
  return false;
}

// GetChildrensDesiredSize @ 142a28ca0

TVector2<double> * __thiscall
SLinkedBox::GetChildrensDesiredSize(SLinkedBox *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FDeprecateSlateVector2D FVar6;
  
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((SWidget *)this->_padding_)->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    fVar2 = *(float *)&this->_padding_;
    fVar3 = *(float *)((longlong)&this->_padding_ + 4);
    fVar4 = *(float *)&this->_padding_;
    fVar5 = *(float *)((longlong)&this->_padding_ + 4);
    FVar6 = SWidget::GetDesiredSize((SWidget *)this->_padding_);
    fVar1 = *(float *)((longlong)FVar6 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar4 + fVar2 + *(float *)FVar6);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar5 + fVar3 + fVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

