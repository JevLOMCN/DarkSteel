// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 23

// operator=<FSlateDynamicImageBrush> @ 14241e720

TSharedPtr<FSlateDynamicImageBrush,1> * __thiscall
TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
          (TSharedPtr<FSlateDynamicImageBrush,1> *this,
          TRawPtrProxy<FSlateDynamicImageBrush> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FSlateDynamicImageBrush *pFVar4;
  FSlateDynamicImageBrush *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FSlateDynamicImageBrush,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSlateDynamicImageBrush__U__DefaultDeleter_UFSlateDynamicImageBrush___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FSlateDynamicImageBrush *)0x0) &&
     (((puVar2 = &pFVar5->field_0xb8, *(longlong *)&pFVar5->field_0xb0 == 0 ||
       (*(longlong *)puVar2 == 0)) || (*(int *)(*(longlong *)puVar2 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSlateDynamicImageBrush **)&pFVar5->field_0xb0 = pFVar5;
    if (FVar7.ReferenceController != *(TReferenceControllerBase<1> **)puVar2) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = *(longlong **)puVar2;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar2 = FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FSlateDynamicImageBrush *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator=<FSlateFontMeasureCache> @ 14245a510

TSharedPtr<FSlateFontMeasureCache,1> * __thiscall
TSharedPtr<FSlateFontMeasureCache,1>::operator=<FSlateFontMeasureCache>
          (TSharedPtr<FSlateFontMeasureCache,1> *this,TRawPtrProxy<FSlateFontMeasureCache> *param_1)

{
  FSlateFontMeasureCache *pFVar1;
  TSharedPtr<FSlateFontMeasureCache,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSlateFontMeasureCache__U__DefaultDeleter_UFSlateFontMeasureCache___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FSlateFontMeasureCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLegacySlateFontInfoCache> @ 14245a5a0

TSharedPtr<FLegacySlateFontInfoCache,1> * __thiscall
TSharedPtr<FLegacySlateFontInfoCache,1>::operator=<FLegacySlateFontInfoCache>
          (TSharedPtr<FLegacySlateFontInfoCache,1> *this,
          TRawPtrProxy<FLegacySlateFontInfoCache> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FLegacySlateFontInfoCache *pFVar4;
  FLegacySlateFontInfoCache *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<FLegacySlateFontInfoCache,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLegacySlateFontInfoCache__U__DefaultDeleter_VFLegacySlateFontInfoCache___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FLegacySlateFontInfoCache *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = pFVar4;
    local_18.Object = (FLegacySlateFontInfoCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// operator-> @ 14247a8f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeFace * __thiscall
TSharedPtr<FFreeTypeFace,1>::operator->(TSharedPtr<FFreeTypeFace,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFreeTypeFace *pFVar3;
  
  if (this->Object != (FFreeTypeFace *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFreeTypeFace *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14247a940

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeKerningCache * __thiscall
TSharedPtr<FFreeTypeKerningCache,1>::operator->(TSharedPtr<FFreeTypeKerningCache,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFreeTypeKerningCache *pFVar3;
  
  if (this->Object != (FFreeTypeKerningCache *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFreeTypeKerningCache *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14247a990

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FShapedGlyphFaceData * __thiscall
TSharedPtr<FShapedGlyphFaceData,1>::operator->(TSharedPtr<FShapedGlyphFaceData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FShapedGlyphFaceData *pFVar3;
  
  if (this->Object != (FShapedGlyphFaceData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FShapedGlyphFaceData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1424a8540

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FFreeTypeAdvanceCache,1> * __thiscall
TSharedPtr<FFreeTypeAdvanceCache,1>::ToSharedRef
          (TSharedPtr<FFreeTypeAdvanceCache,1> *this,
          TSharedRef<FFreeTypeAdvanceCache,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FFreeTypeAdvanceCache,1> *pTVar4;
  
  if (this->Object == (FFreeTypeAdvanceCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FFreeTypeAdvanceCache,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FFreeTypeAdvanceCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FFreeTypeAdvanceCache,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator=<FSlateSharedHandleData> @ 1424c7560

TSharedPtr<FSlateSharedHandleData,1> * __thiscall
TSharedPtr<FSlateSharedHandleData,1>::operator=<FSlateSharedHandleData>
          (TSharedPtr<FSlateSharedHandleData,1> *this,TRawPtrProxy<FSlateSharedHandleData> *param_1)

{
  FSlateSharedHandleData *pFVar1;
  TSharedPtr<FSlateSharedHandleData,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateSharedHandleData__U__DefaultDeleter_VFSlateSharedHandleData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FSlateSharedHandleData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 1424ed520

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::operator=(TSharedPtr<SWidget,1> *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pSVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1424ed570

TSharedPtr<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::operator=(TSharedPtr<SWidget,1> *this,FNullTag *param_1)

{
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = (SWidget *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 1424edf60

FGenericWindow * __thiscall
TSharedPtr<FGenericWindow_const_,1>::operator->(TSharedPtr<FGenericWindow_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGenericWindow *pFVar3;
  
  if (this->Object != (FGenericWindow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGenericWindow *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1424edfb0

SWidget * __thiscall TSharedPtr<SWidget,1>::operator->(TSharedPtr<SWidget,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SWidget *pSVar3;
  
  if (this->Object != (SWidget *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SWidget *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1425204c0

TSharedRef<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::ToSharedRef
          (TSharedPtr<SWidget,1> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  
  if (this->Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142520560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
TSharedPtr<SWindow,1>::ToSharedRef
          (TSharedPtr<SWindow,1> *this,TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWindow,1> *pTVar4;
  
  if (this->Object == (SWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator=<FTextBlockStyle> @ 142535fd0

TSharedPtr<FTextBlockStyle,1> * __thiscall
TSharedPtr<FTextBlockStyle,1>::operator=<FTextBlockStyle>
          (TSharedPtr<FTextBlockStyle,1> *this,TRawPtrProxy<FTextBlockStyle> *param_1)

{
  FTextBlockStyle *pFVar1;
  TSharedPtr<FTextBlockStyle,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFTextBlockStyle__U__DefaultDeleter_UFTextBlockStyle___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FTextBlockStyle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14254ec00

SManagedAttribute * __thiscall
TSharedPtr<`FSlateAttributeTest::RunTest'::__l14::SManagedAttribute,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  SManagedAttribute *pSVar3;
  
  if (*(longlong *)this != 0) {
    return *(SManagedAttribute **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SManagedAttribute *)(*pcVar1)();
    return pSVar3;
  }
  return *(SManagedAttribute **)this;
}

// operator-> @ 14254ec50

SSlateAttribute * __thiscall
TSharedPtr<`FSlateAttributeTest::RunTest'::__l9::SSlateAttribute,1>::operator->(void *this)

{
  code *pcVar1;
  bool bVar2;
  SSlateAttribute *pSVar3;
  
  if (*(longlong *)this != 0) {
    return *(SSlateAttribute **)this;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SSlateAttribute *)(*pcVar1)();
    return pSVar3;
  }
  return *(SSlateAttribute **)this;
}

// ToSharedRef @ 1425a8f20

TSharedRef<_protected:_virtual_bool___cdecl_FSlateAttributeTest::RunTest(FString_const_&)_::_14_::SManagedAttribute,1>
* __thiscall
TSharedPtr<`FSlateAttributeTest::RunTest'::__l14::SManagedAttribute,1>::ToSharedRef
          (void *this,
          TSharedRef<_protected:_virtual_bool___cdecl_FSlateAttributeTest::RunTest(FString_const_&)_::_14_::SManagedAttribute,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<_protected:_virtual_bool___cdecl_FSlateAttributeTest::RunTest(FString_const_&)_::_14_::SManagedAttribute,1>
  *pTVar4;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<_protected:_virtual_bool___cdecl_FSlateAttributeTest::RunTest(FString_const_&)_::_14_::SManagedAttribute,1>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = *(SManagedAttribute **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SManagedAttribute *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<_protected:_virtual_bool___cdecl_FSlateAttributeTest::RunTest(FString_const_&)_::_14_::SManagedAttribute,1>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<FPopupLayer,1><FOverlayPopupLayer> @ 1425b03d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FPopupLayer,1> * __thiscall
TSharedPtr<FPopupLayer,1>::TSharedPtr<FPopupLayer,1><FOverlayPopupLayer>
          (TSharedPtr<FPopupLayer,1> *this,TRawPtrProxy<FOverlayPopupLayer> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FOverlayPopupLayer *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (FPopupLayer *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOverlayPopupLayer__U__DefaultDeleter_VFOverlayPopupLayer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FOverlayPopupLayer *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator-> @ 1425c33e0

FGenericWindow * __thiscall
TSharedPtr<FGenericWindow,1>::operator->(TSharedPtr<FGenericWindow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGenericWindow *pFVar3;
  
  if (this->Object != (FGenericWindow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGenericWindow *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142601bc0

TSharedRef<SImage,1> * __thiscall
TSharedPtr<SImage,1>::ToSharedRef
          (TSharedPtr<SImage,1> *this,TSharedRef<SImage,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SImage,1> *pTVar4;
  
  if (this->Object == (SImage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SImage,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SImage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SImage,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142601c60

TSharedRef<SVerticalBox,1> * __thiscall
TSharedPtr<SVerticalBox,1>::ToSharedRef
          (TSharedPtr<SVerticalBox,1> *this,TSharedRef<SVerticalBox,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SVerticalBox,1> *pTVar4;
  
  if (this->Object == (SVerticalBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SVerticalBox *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SVerticalBox,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142601d00

TSharedRef<SWidget,1> * __thiscall
TSharedPtr<SWidget,1>::ToSharedRef
          (TSharedPtr<SWidget,1> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  
  if (this->Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (SWidget *)0x0;
  if (__return_storage_ptr__->Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

