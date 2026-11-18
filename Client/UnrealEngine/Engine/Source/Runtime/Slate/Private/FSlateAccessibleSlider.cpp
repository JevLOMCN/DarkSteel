// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// GetMaximum @ 142877f70

float __thiscall FSlateAccessibleSlider::GetMaximum(FSlateAccessibleSlider *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  float fVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return __real_3f800000;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142877fd1;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142877ff7;
  }
LAB_142877fd1:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
LAB_142877ff7:
  fVar8 = *(float *)((longlong)&pTVar6[0x25]._padding_ + 4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return fVar8;
}

// GetMinimum @ 142878060

float __thiscall FSlateAccessibleSlider::GetMinimum(FSlateAccessibleSlider *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  float fVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return 0.0;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1428780c1;
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = pTVar5;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1428780e7;
  }
LAB_1428780c1:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar5 = pTVar4;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
LAB_1428780e7:
  fVar8 = *(float *)&pTVar6[0x25]._padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return fVar8;
}

// GetStepSize @ 14287ad80

float __thiscall FSlateAccessibleSlider::GetStepSize(FSlateAccessibleSlider *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSlider *pSVar4;
  SSlider *pSVar5;
  SSlider *this_00;
  bool bVar6;
  float fVar7;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return 0.0;
  }
  pSVar5 = *(SSlider **)&this[-1].field_0x28;
  this_00 = (SSlider *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SSlider *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar4 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14287ade1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = *(SSlider **)&this[-1].field_0x20;
    LOCK();
    *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
    UNLOCK();
    pSVar4 = pSVar5;
    if (this_00 != (SSlider *)0x0) goto LAB_14287ae07;
  }
LAB_14287ade1:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar5 = pSVar4;
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    fVar7 = (float)(*pcVar1)();
    return fVar7;
  }
LAB_14287ae07:
  fVar7 = SSlider::GetStepSize(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return fVar7;
}

// GetValue @ 14287d6b0

FString * __thiscall
FSlateAccessibleSlider::GetValue(FSlateAccessibleSlider *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  SSlider *pSVar5;
  SSlider *pSVar6;
  SSlider *this_00;
  bool bVar7;
  float fVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    ::FString::SanitizeFloat(__return_storage_ptr__,0.0,1);
    return __return_storage_ptr__;
  }
  pSVar6 = *(SSlider **)&this[-1].field_0x28;
  this_00 = (SSlider *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SSlider *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14287d711;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = *(SSlider **)&this[-1].field_0x20;
    LOCK();
    *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar6->_padding_ + 1);
    UNLOCK();
    pSVar5 = pSVar6;
    if (this_00 != (SSlider *)0x0) goto LAB_14287d737;
  }
LAB_14287d711:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_14287d737:
  fVar8 = SSlider::GetValue(this_00);
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)fVar8,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 14287d860

FVariant * __thiscall
FSlateAccessibleSlider::GetValueAsVariant
          (FSlateAccessibleSlider *this,FVariant *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FVariant *pFVar4;
  char *pcVar5;
  undefined7 uVar6;
  SSlider *this_00;
  SSlider *pSVar7;
  SSlider *pSVar8;
  bool bVar9;
  float local_res8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    __return_storage_ptr__->Type = Empty;
    (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Value).ArrayNum = 0;
    (__return_storage_ptr__->Value).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pSVar8 = *(SSlider **)&this[-1].field_0x28;
  this_00 = (SSlider *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 != (SSlider *)0x0) {
    iVar2 = (int)pSVar8->_padding_;
    do {
      this_00 = (SSlider *)0x0;
      pSVar7 = (SSlider *)0x0;
      if (iVar2 == 0) goto LAB_14287d8d5;
      LOCK();
      iVar3 = (int)pSVar8->_padding_;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&pSVar8->_padding_ = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    this_00 = *(SSlider **)&this[-1].field_0x20;
    LOCK();
    *(int *)&pSVar8->_padding_ = (int)pSVar8->_padding_ + 1;
    UNLOCK();
    pcVar5 = (char *)this;
    pSVar7 = pSVar8;
    if (this_00 != (SSlider *)0x0) goto LAB_14287d8fb;
  }
LAB_14287d8d5:
  pcVar5 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h";
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FVariant *)(*pcVar1)();
    return pFVar4;
  }
LAB_14287d8fb:
  local_res8[0] = SSlider::GetValue(this_00);
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  uVar6 = (undefined7)((ulonglong)pcVar5 >> 8);
  local_c8.ArchiveName.ComparisonIndex.Value = 0;
  local_c8.ArchiveName.Number = 0;
  local_c8.Bytes = &__return_storage_ptr__->Value;
  FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar6,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  if (*(float **)(local_c8._padding_ + 8) < *(float **)local_c8._padding_ + 1) {
    if ((local_c8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = **(float **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 4;
  }
  __return_storage_ptr__->Type = Float;
  FArchive::~FArchive((FArchive *)&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return __return_storage_ptr__;
}

// IsReadOnly @ 1428823f0

bool __thiscall FSlateAccessibleSlider::IsReadOnly(FSlateAccessibleSlider *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uStackX_c;
  
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return true;
  }
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar11;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_142882465:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      pTVar8 = pTVar11;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142882465;
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    pTVar8 = pTVar9;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142882465;
  }
  bVar12 = false;
  if (pTVar7[3].SharedReferenceCount.field_0x2 == '\0') {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142882515:
    bVar10 = true;
    bVar3 = true;
    if (!bVar12) goto LAB_142882526;
  }
  else {
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    pTVar8 = pTVar7;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1428824b7:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pTVar7 = pTVar8;
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    else {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        pTVar8 = pTVar11;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1428824b7;
        LOCK();
        aVar6 = pTVar7->SharedReferenceCount;
        bVar12 = aVar2 == aVar6;
        if (bVar12) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar6 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar6;
      } while (!bVar12);
      pTVar11 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
      pTVar8 = pTVar7;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_1428824b7;
    }
    bVar12 = true;
    cVar5 = (**(code **)(pTVar11->_padding_ + 0x1b0))(pTVar11);
    if (cVar5 == '\0') goto LAB_142882515;
    bVar3 = false;
  }
  bVar10 = bVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_142882526:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return bVar10;
}

// SetValue @ 14289b6a0

void __thiscall FSlateAccessibleSlider::SetValue(FSlateAccessibleSlider *this,FString *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  wchar_t *_Str;
  SSlider *this_00;
  bool bVar5;
  double dVar6;
  TAttribute<float> local_28;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  _Str = L"";
  this_00 = (SSlider *)0x0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14289b714;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = *(SSlider **)&this[-1].field_0x20;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (this_00 != (SSlider *)0x0) goto LAB_14289b736;
  }
LAB_14289b714:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14289b736:
  if ((param_1->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  dVar6 = _wtof(_Str);
  local_28.bIsSet = true;
  local_28.Value = (float)dVar6;
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SSlider::SetValue(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// AsProperty @ 1428d78e0

IAccessibleProperty * __thiscall FSlateAccessibleSlider::AsProperty(FSlateAccessibleSlider *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleSlider *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

