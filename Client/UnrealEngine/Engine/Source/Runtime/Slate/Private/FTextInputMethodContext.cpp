// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// FTextInputMethodContext @ 1429b9e90

/* WARNING: Enum "Type": Some values do not have unique names */

FTextInputMethodContext * __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::FTextInputMethodContext
          (FTextInputMethodContext *this,FSlateEditableTextLayout *param_1)

{
  this->OwnerLayout = param_1;
  this->_padding_ = (longlong)&___7FTextInputMethodContext_FSlateEditableTextLayout__6B_;
  (this->CachedParentWindow).Object = (SWindow *)0x0;
  (this->CachedParentWindow).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometry::FGeometry(&this->CachedGeometry);
  this->bIsComposing = false;
  this->CompositionBeginIndex = -1;
  this->CompositionLength = 0;
  return this;
}

// BeginComposition @ 1429caa00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::BeginComposition(FTextInputMethodContext *this)

{
  if ((this->OwnerLayout != (FSlateEditableTextLayout *)0x0) && (this->bIsComposing == false)) {
    this->bIsComposing = true;
    BeginEditTransation(this->OwnerLayout);
    UpdateCursorHighlight(this->OwnerLayout);
    return;
  }
  return;
}

// CacheWindow @ 1429cc8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::CacheWindow(FTextInputMethodContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ISlateEditableTextWidget *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 *puVar8;
  FSlateApplication *pFVar9;
  longlong lVar10;
  undefined8 local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->OwnerLayout != (FSlateEditableTextLayout *)0x0) {
    pIVar3 = this->OwnerLayout->OwnerWidget;
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x90))(pIVar3,&local_28);
    pTVar4 = (TReferenceControllerBase<1> *)puVar8[1];
    uVar5 = *puVar8;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      pFVar9 = FSlateApplication::Get();
      lVar10 = *(longlong *)pFVar9;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      pFVar9 = FSlateApplication::Get();
      lVar10 = *(longlong *)pFVar9;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = uVar5;
    local_20 = pTVar4;
    puVar8 = (undefined8 *)(**(code **)(lVar10 + 0x28))(pFVar9,local_18,&local_28);
    (this->CachedParentWindow).Object = (SWindow *)*puVar8;
    pTVar6 = (TReferenceControllerBase<1> *)puVar8[1];
    if (pTVar6 != (this->CachedParentWindow).WeakReferenceCount.ReferenceController) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar7->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
      (this->CachedParentWindow).WeakReferenceCount.ReferenceController = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// Create @ 1429de8b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> * __cdecl
FSlateEditableTextLayout::FTextInputMethodContext::Create
          (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *__return_storage_ptr__,
          FSlateEditableTextLayout *param_1)

{
  TRawPtrProxy<FSlateEditableTextLayout::FTextInputMethodContext> local_res8;
  
  local_res8.Object = ::operator_new(0x68);
  if (local_res8.Object == (FTextInputMethodContext *)0x0) {
    local_res8.Object = (FTextInputMethodContext *)0x0;
  }
  else {
    (local_res8.Object)->OwnerLayout = param_1;
    (local_res8.Object)->_padding_ =
         (longlong)&___7FTextInputMethodContext_FSlateEditableTextLayout__6B_;
    ((local_res8.Object)->CachedParentWindow).Object = (SWindow *)0x0;
    ((local_res8.Object)->CachedParentWindow).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FGeometry::FGeometry(&(local_res8.Object)->CachedGeometry);
    (local_res8.Object)->bIsComposing = false;
    (local_res8.Object)->CompositionBeginIndex = -1;
    (local_res8.Object)->CompositionLength = 0;
  }
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1>::
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1><FSlateEditableTextLayout::FTextInputMethodContext>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// EndComposition @ 1429e45e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::EndComposition(FTextInputMethodContext *this)

{
  if ((this->OwnerLayout != (FSlateEditableTextLayout *)0x0) && (this->bIsComposing != false)) {
    EndEditTransaction(this->OwnerLayout);
    UpdateCursorHighlight(this->OwnerLayout);
    this->bIsComposing = false;
  }
  return;
}

// GetCharacterIndexFromPoint @ 1429e9480

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetCharacterIndexFromPoint
          (FTextInputMethodContext *this,TVector2<double> *param_1)

{
  FSlateEditableTextLayout *pFVar1;
  FSlateTextLayout *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FTextLocation local_res8;
  FTextOffsetLocations local_28;
  undefined1 local_18 [16];
  
  pFVar1 = this->OwnerLayout;
  if (pFVar1 == (FSlateEditableTextLayout *)0x0) {
    return -1;
  }
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  this_00 = (pFVar1->TextLayout).Object;
  pFVar1 = this->OwnerLayout;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  dVar3 = (double)*(float *)&((pFVar1->TextLayout).Object)->field_0x94;
  dVar4 = dVar3 * (param_1->field0_0x0)._s_0.Y;
  local_18._8_4_ = SUB84(dVar4,0);
  local_18._0_8_ = dVar3 * (param_1->field0_0x0)._s_0.X;
  local_18._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  FTextLayout::GetTextLocationAt((FTextLayout *)this_00,(TVector2<double> *)&local_res8,local_18);
  pFVar1 = this->OwnerLayout;
  local_28.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.OffsetData.ArrayNum = 0;
  local_28.OffsetData.ArrayMax = 0;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  FTextLayout::GetTextOffsetLocations((FTextLayout *)(pFVar1->TextLayout).Object,&local_28);
  iVar6 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(&local_28,&local_res8);
  if (local_28.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.OffsetData.AllocatorInstance.Data);
  }
  return iVar6;
}

// GetScreenBounds @ 1429ed7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetScreenBounds
          (FTextInputMethodContext *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  float fVar1;
  FDeprecateSlateVector2D FVar2;
  float local_res8;
  float fStackX_c;
  
  if (this->OwnerLayout == (FSlateEditableTextLayout *)0x0) {
    (param_1->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    (param_2->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return;
  }
  fVar1 = (this->CachedGeometry).AbsolutePosition.field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (double)(this->CachedGeometry).AbsolutePosition.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)fVar1;
  fVar1 = (this->CachedGeometry).Scale;
  FVar2 = (this->CachedGeometry).Size;
  local_res8 = FVar2._0_4_;
  fStackX_c = FVar2._4_4_;
  (param_2->field0_0x0)._s_0.X = (double)(fVar1 * local_res8);
  (param_2->field0_0x0)._s_0.Y = (double)(fVar1 * fStackX_c);
  return;
}

// GetSelectionRange @ 1429ee5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetSelectionRange
          (FTextInputMethodContext *this,uint *param_1,uint *param_2,ECaretPosition *param_3)

{
  FSlateEditableTextLayout *pFVar1;
  FTextLocation FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FTextLocation *pFVar10;
  ECaretPosition EVar11;
  int iVar12;
  bool bVar13;
  FTextLocation local_res8;
  FTextLocation local_50;
  FTextLocation local_48;
  FTextOffsetLocations local_40;
  
  pFVar1 = this->OwnerLayout;
  EVar11 = Beginning;
  if (pFVar1 == (FSlateEditableTextLayout *)0x0) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = Beginning;
  }
  else {
    local_res8.LineIndex = (pFVar1->CursorInfo).CursorPosition.LineIndex;
    iVar8 = (pFVar1->CursorInfo).CursorPosition.Offset +
            (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
    local_res8.Offset = 0;
    if (0 < iVar8) {
      local_res8.Offset = iVar8;
    }
    pFVar10 = &local_res8;
    if ((pFVar1->SelectionStart).bIsSet != false) {
      pFVar10 = &(pFVar1->SelectionStart).TypedValue;
    }
    FVar2 = *pFVar10;
    local_40.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.OffsetData.ArrayNum = 0;
    local_40.OffsetData.ArrayMax = 0;
    if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FTextLayout::GetTextOffsetLocations((FTextLayout *)(pFVar1->TextLayout).Object,&local_40);
    iVar8 = FVar2.LineIndex;
    iVar12 = FVar2.Offset;
    if ((iVar8 == local_res8.LineIndex) && (iVar12 == local_res8.Offset)) {
      uVar5 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(&local_40,&local_res8);
      *param_1 = uVar5;
      *param_2 = 0;
    }
    else {
      local_48.Offset = local_res8.Offset;
      local_48.LineIndex = local_res8.LineIndex;
      pFVar10 = &local_50;
      if (iVar8 == local_res8.LineIndex) {
        if (local_res8.Offset <= iVar12) {
          pFVar10 = &local_48;
        }
      }
      else if (local_res8.LineIndex <= iVar8) {
        pFVar10 = &local_48;
      }
      local_50 = FVar2;
      uVar5 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(&local_40,pFVar10);
      iVar9 = local_48.LineIndex;
      iVar7 = local_50.LineIndex;
      bVar13 = SBORROW4(iVar7,iVar9);
      iVar6 = iVar7 - iVar9;
      bVar4 = false;
      if (iVar7 == iVar9) {
        bVar13 = SBORROW4(local_50.Offset,local_48.Offset);
        iVar6 = local_50.Offset - local_48.Offset;
        bVar4 = local_50.Offset == local_48.Offset;
      }
      pFVar10 = &local_50;
      if (bVar4 || bVar13 != iVar6 < 0) {
        pFVar10 = &local_48;
      }
      iVar6 = FTextLayout::FTextOffsetLocations::TextLocationToOffset(&local_40,pFVar10);
      *param_1 = uVar5;
      *param_2 = iVar6 - uVar5;
      if ((iVar8 <= local_res8.LineIndex) &&
         ((local_res8.LineIndex != iVar8 || (iVar12 <= local_res8.Offset)))) {
        EVar11 = Ending;
      }
    }
    *param_3 = EVar11;
    if (local_40.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.OffsetData.AllocatorInstance.Data);
    }
  }
  return;
}

// GetTextBounds @ 1429eef10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetTextBounds
          (FTextInputMethodContext *this,uint param_1,uint param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  float fVar1;
  FSlateEditableTextLayout *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector2<double> *pTVar8;
  FTextLocation local_res8;
  FTextLocation local_88;
  FTextOffsetLocations local_80;
  TVector2<double>_u_0 local_70;
  TVector2<double>_u_0 local_60;
  TVector2<double> local_50 [2];
  
  pFVar2 = this->OwnerLayout;
  if (pFVar2 == (FSlateEditableTextLayout *)0x0) {
    (param_3->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    (param_4->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  }
  else {
    local_80.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.OffsetData.ArrayNum = 0;
    local_80.OffsetData.ArrayMax = 0;
    if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    FTextLayout::GetTextOffsetLocations((FTextLayout *)(pFVar2->TextLayout).Object,&local_80);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_80,(int)&local_res8);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_80,(int)&local_88);
    pFVar2 = this->OwnerLayout;
    if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    FTextLayout::GetLocationAt
              ((FTextLayout *)(pFVar2->TextLayout).Object,(TVector2<double> *)&local_60._s_0,
               &local_res8,false);
    pFVar2 = this->OwnerLayout;
    if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    FTextLayout::GetLocationAt
              ((FTextLayout *)(pFVar2->TextLayout).Object,(TVector2<double> *)&local_70._s_0,
               &local_88,false);
    if (local_60._s_0.Y == local_70._s_0.Y) {
      dVar5 = local_70._s_0.Y - local_60._s_0.Y;
      (param_3->field0_0x0)._s_0.X = local_60._s_0.X;
      (param_3->field0_0x0)._s_0.Y = local_60._s_0.Y;
      dVar4 = local_70._s_0.X - local_60._s_0.X;
    }
    else {
      (param_3->field0_0x0)._s_0.X = 0.0;
      (param_3->field0_0x0)._s_0.Y = local_60._s_0.Y;
      pFVar2 = this->OwnerLayout;
      if ((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      dVar5 = local_70._s_0.Y - local_60._s_0.Y;
      pTVar8 = FTextLayout::GetDrawSize((FTextLayout *)(pFVar2->TextLayout).Object,local_50);
      dVar4 = (pTVar8->field0_0x0)._s_0.X;
    }
    (param_4->field0_0x0)._s_0.X = dVar4;
    (param_4->field0_0x0)._s_0.Y = dVar5;
    fVar1 = (this->CachedGeometry).AbsolutePosition.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y =
         (double)(this->CachedGeometry).AbsolutePosition.field0_0x0._s_0.Y +
         (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (double)fVar1 + (param_3->field0_0x0)._s_0.X;
    if (local_80.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.OffsetData.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetTextInRange @ 1429ef160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetTextInRange
          (FTextInputMethodContext *this,uint param_1,uint param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FText local_28;
  FString local_18;
  
  if (this->OwnerLayout == (FSlateEditableTextLayout *)0x0) {
    ::FString::Reset(param_3,0);
    return;
  }
  GetEditableText(this->OwnerLayout,&local_28);
  pFVar2 = FText::ToString(&local_28);
  pFVar2 = ::FString::Mid(pFVar2,&local_18,param_1,param_2);
  if (param_3 != pFVar2) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// GetTextLength @ 1429ef340

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetTextLength(FTextInputMethodContext *this)

{
  FSlateEditableTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTextOffsetLocations local_18;
  
  pFVar1 = this->OwnerLayout;
  if (pFVar1 == (FSlateEditableTextLayout *)0x0) {
    return 0;
  }
  local_18.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.OffsetData.ArrayNum = 0;
  local_18.OffsetData.ArrayMax = 0;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FTextLayout::GetTextOffsetLocations((FTextLayout *)(pFVar1->TextLayout).Object,&local_18);
  uVar4 = FTextLayout::FTextOffsetLocations::GetTextLength(&local_18);
  if (local_18.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.OffsetData.AllocatorInstance.Data);
  }
  return uVar4;
}

// GetWindow @ 1429effc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FGenericWindow,1> * __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::GetWindow
          (FTextInputMethodContext *this,TSharedPtr<FGenericWindow,1> *__return_storage_ptr__)

{
  SWindow *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TSharedPtr<FGenericWindow,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<FGenericWindow,1> local_18;
  
  if (this->OwnerLayout == (FSlateEditableTextLayout *)0x0) {
    __return_storage_ptr__->Object = (FGenericWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar5 = (this->CachedParentWindow).WeakReferenceCount.ReferenceController;
  pTVar4 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar5->SharedReferenceCount;
    do {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      if (aVar1 == (atomic<int>)0x0) goto LAB_1429f0013;
      LOCK();
      aVar2 = pTVar5->SharedReferenceCount;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    this_00 = (this->CachedParentWindow).Object;
    pTVar4 = pTVar5;
    if (this_00 != (SWindow *)0x0) {
      pTVar3 = SWindow::GetNativeWindow(this_00,&local_18);
      __return_storage_ptr__->Object = pTVar3->Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (pTVar3->SharedReferenceCount).ReferenceController;
      (pTVar3->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar3->Object = (FGenericWindow *)0x0;
      goto LAB_1429f001d;
    }
  }
LAB_1429f0013:
  __return_storage_ptr__->Object = (FGenericWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar4;
LAB_1429f001d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// IsComposing @ 1429f5530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::IsComposing(FTextInputMethodContext *this)

{
  if ((this->OwnerLayout != (FSlateEditableTextLayout *)0x0) && (this->bIsComposing != false)) {
    return true;
  }
  return false;
}

// IsReadOnly @ 1429f5ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::IsReadOnly(FTextInputMethodContext *this)

{
  char cVar1;
  
  if (this->OwnerLayout != (FSlateEditableTextLayout *)0x0) {
    cVar1 = (**(code **)*this->OwnerLayout->OwnerWidget)();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// SetSelectionRange @ 142a0ba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::SetSelectionRange
          (FTextInputMethodContext *this,uint param_1,uint param_2,ECaretPosition param_3)

{
  FSlateEditableTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateTextLayout *pFVar4;
  TOptional<FTextLocation> *pTVar5;
  int iVar6;
  int local_res8;
  int local_resc;
  FTextLocation local_48;
  FTextLocation local_40;
  undefined1 local_38 [16];
  FTextOffsetLocations local_28;
  
  if (this->OwnerLayout != (FSlateEditableTextLayout *)0x0) {
    (**(code **)(this->_padding_ + 0x18))();
    pFVar1 = this->OwnerLayout;
    local_28.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.OffsetData.ArrayNum = 0;
    local_28.OffsetData.ArrayMax = 0;
    if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextLayout::GetTextOffsetLocations((FTextLayout *)(pFVar1->TextLayout).Object,&local_28);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_28,(int)&local_48);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_28,(int)&local_40);
    pFVar1 = this->OwnerLayout;
    if (((TOptional<FTextLocation> *)local_38 != &pFVar1->SelectionStart) &&
       ((pFVar1->SelectionStart).bIsSet != false)) {
      (pFVar1->SelectionStart).bIsSet = false;
    }
    if (param_3 == Beginning) {
      pFVar1 = this->OwnerLayout;
      pFVar4 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&pFVar1->TextLayout);
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (&pFVar1->CursorInfo,(FTextLayout *)pFVar4,&local_48);
      pFVar1 = this->OwnerLayout;
      pTVar5 = &pFVar1->SelectionStart;
      if ((TOptional<FTextLocation> *)&local_40 != pTVar5) {
        pTVar5->TypedValue = local_40;
        (pFVar1->SelectionStart).bIsSet = true;
      }
    }
    else if (param_3 == Ending) {
      pFVar1 = this->OwnerLayout;
      pTVar5 = &pFVar1->SelectionStart;
      if ((TOptional<FTextLocation> *)&local_48 != pTVar5) {
        pTVar5->TypedValue = local_48;
        (pFVar1->SelectionStart).bIsSet = true;
      }
      pFVar1 = this->OwnerLayout;
      pFVar4 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&pFVar1->TextLayout);
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (&pFVar1->CursorInfo,(FTextLayout *)pFVar4,&local_40);
    }
    pFVar1 = this->OwnerLayout;
    local_res8 = (pFVar1->CursorInfo).CursorPosition.LineIndex;
    iVar6 = (pFVar1->CursorInfo).CursorPosition.Offset +
            (uint)((pFVar1->CursorInfo).CursorAlignment == Right);
    local_resc = 0;
    if (0 < iVar6) {
      local_resc = iVar6;
    }
    (**(code **)((longlong)*pFVar1->OwnerWidget + 0xc0))(pFVar1->OwnerWidget,&local_res8);
    UpdateCursorHighlight(this->OwnerLayout);
    if (local_28.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.OffsetData.AllocatorInstance.Data);
    }
  }
  return;
}

// SetTextInRange @ 142a0d050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::SetTextInRange
          (FTextInputMethodContext *this,uint param_1,uint param_2,FString *param_3)

{
  int iVar1;
  FSlateEditableTextLayout *pFVar2;
  longlong *plVar3;
  ITextData *pIVar4;
  ISlateEditableTextWidget *pIVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  FText local_48;
  FText local_38;
  FReadAccessScope local_28;
  
  if (this->OwnerLayout == (FSlateEditableTextLayout *)0x0) {
    return;
  }
  GetEditableText(this->OwnerLayout,&local_38);
  (**(code **)(this->_padding_ + 0x28))(this,param_1,param_2,0);
  DeleteSelectedText(this->OwnerLayout);
  InsertTextAtCursorImpl(this->OwnerLayout,param_3);
  GetEditableText(this->OwnerLayout,&local_48);
  pFVar9 = FText::ToString(&local_48);
  pFVar10 = FText::ToString(&local_38);
  iVar8 = (pFVar9->Data).ArrayNum;
  iVar1 = (pFVar10->Data).ArrayNum;
  if (iVar8 == iVar1) {
    if (iVar8 < 2) goto LAB_142a0d1f5;
    iVar8 = wcscmp((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                   (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
    bVar11 = iVar8 == 0;
  }
  else {
    bVar11 = iVar1 + iVar8 == 1;
  }
  if (!bVar11) {
    pFVar2 = this->OwnerLayout;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar2->BoundText).Getter
               ,&local_28);
    if (((*(int *)&(pFVar2->BoundText).Getter.field_0x10 == 0) ||
        (plVar3 = *(longlong **)&(pFVar2->BoundText).Getter.field_0x8, plVar3 == (longlong *)0x0))
       || (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->BoundText).Getter);
      pIVar4 = (pFVar2->BoundText).Value.TextData.Reference;
      if (pIVar4 != local_48.TextData.Reference) {
        (pFVar2->BoundText).Value.TextData.Reference = local_48.TextData.Reference;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 8))
                    (local_48.TextData.Reference,local_res8);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (pFVar2->BoundText).Value.Flags = local_48.Flags;
      (pFVar2->BoundText).bIsSet = true;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    pFVar2 = this->OwnerLayout;
    if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)(pFVar2->TextLayout).Object + 8))();
    pIVar5 = this->OwnerLayout->OwnerWidget;
    (**(code **)((longlong)*pIVar5 + 0xb0))(pIVar5,&local_48);
  }
LAB_142a0d1f5:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// UpdateCompositionRange @ 142a12790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::FTextInputMethodContext::UpdateCompositionRange
          (FTextInputMethodContext *this,int param_1,uint param_2)

{
  if ((this->OwnerLayout != (FSlateEditableTextLayout *)0x0) && (this->bIsComposing != false)) {
    this->CompositionBeginIndex = param_1;
    this->CompositionLength = param_2;
    UpdateCursorHighlight(this->OwnerLayout);
    return;
  }
  return;
}

