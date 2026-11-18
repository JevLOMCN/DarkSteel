// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 1424c6150

UScriptStruct * __cdecl FInputEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FInputEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputEvent,(UObject *)pUVar1,L"InputEvent");
  }
  return Z_Registration_Info_UScriptStruct_FInputEvent.OuterSingleton;
}

// ToText @ 1424c61c0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall FInputEvent::ToText(FInputEvent *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"Events",L"Unimplemented",L"Unimplemented");
  return __return_storage_ptr__;
}

// IsPointerEvent @ 1424c6200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FInputEvent::IsPointerEvent(FInputEvent *this)

{
  return false;
}

// IsKeyEvent @ 1424c6210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FInputEvent::IsKeyEvent(FInputEvent *this)

{
  return false;
}

// ~FInputEvent @ 1424ec7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInputEvent::~FInputEvent(FInputEvent *this)

{
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  return;
}

// FindGeometry @ 142509aa0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall
FInputEvent::FindGeometry
          (FInputEvent *this,FGeometry *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetPath *this_00;
  SWidget *pSVar3;
  ForElementType<FArrangedWidget> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  uint uVar12;
  FGeometry *pFVar13;
  FArrangedWidget *pFVar14;
  FArrangedWidget *pFVar15;
  ForElementType<FArrangedWidget> FVar16;
  uint uVar17;
  char cVar18;
  longlong lVar19;
  FArrangedWidget local_68;
  char local_20;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  this_00 = this->EventPath;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar17 = 0;
  if (0 < (this_00->Widgets).Array.ArrayNum) {
    lVar19 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar17 < (this_00->Widgets).Array.ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FGeometry *)(*pcVar5)();
          return pFVar13;
        }
      }
      FVar4 = (this_00->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<FArrangedWidget>)&(this_00->Widgets).Array;
      if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
        FVar16 = FVar4;
      }
      if (*(SWidget **)(lVar19 + 0x38 + (longlong)FVar16) == pSVar3) {
        pFVar15 = FArrangedChildren::operator[](&this_00->Widgets,uVar17);
        local_68.Geometry.Size = (pFVar15->Geometry).Size;
        local_68.Geometry._8_8_ = *(undefined8 *)&(pFVar15->Geometry).Scale;
        local_68.Widget.SharedReferenceCount.ReferenceController =
             (pFVar15->Widget).SharedReferenceCount.ReferenceController;
        local_68.Widget.Object = (pFVar15->Widget).Object;
        local_68.Geometry._16_8_ =
             *(undefined8 *)((longlong)&(pFVar15->Geometry).AbsolutePosition.field0_0x0 + 4);
        local_68.Geometry._24_8_ =
             *(undefined8 *)((longlong)&(pFVar15->Geometry).Position.field0_0x0 + 4);
        local_68.Geometry.AccumulatedRenderTransform.M.M._4_8_ =
             *(undefined8 *)((pFVar15->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
        local_68.Geometry.AccumulatedRenderTransform._12_8_ =
             *(undefined8 *)((pFVar15->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
        local_68.Geometry._48_8_ =
             *(undefined8 *)
              ((longlong)&(pFVar15->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
        if (local_68.Widget.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_68.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.Widget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar18 = '\x01';
        bVar11 = true;
        goto LAB_142509b72;
      }
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x48;
    } while ((int)uVar17 < (this_00->Widgets).Array.ArrayNum);
  }
  cVar18 = '\0';
  bVar11 = false;
LAB_142509b72:
  FVar10.ReferenceController = local_68.Widget.SharedReferenceCount.ReferenceController;
  local_20 = cVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar14 = FArrangedWidget::GetNullWidget();
  pFVar15 = &local_68;
  if (cVar18 == '\0') {
    pFVar15 = pFVar14;
  }
  uVar1 = *(undefined8 *)&(pFVar15->Geometry).Scale;
  uVar6 = *(undefined8 *)((longlong)&(pFVar15->Geometry).AbsolutePosition.field0_0x0 + 4);
  uVar7 = *(undefined8 *)((longlong)&(pFVar15->Geometry).Position.field0_0x0 + 4);
  __return_storage_ptr__->Size = (pFVar15->Geometry).Size;
  *(undefined8 *)&__return_storage_ptr__->Scale = uVar1;
  uVar8 = *(undefined8 *)((pFVar15->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  uVar9 = *(undefined8 *)((pFVar15->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AbsolutePosition).field0_0x0 + 4) = uVar6;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 4) = uVar7;
  uVar1 = *(undefined8 *)
           ((longlong)&(pFVar15->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[0] + 1) = uVar8;
  *(undefined8 *)((__return_storage_ptr__->AccumulatedRenderTransform).M.M[1] + 1) = uVar9;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AccumulatedRenderTransform).Trans.field0_0x0 + 4) = uVar1;
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar10.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetWindow @ 14250fd40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
FInputEvent::GetWindow(FInputEvent *this,TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  FWidgetPath *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWindow,1> *pTVar4;
  FArrangedWidget *pFVar5;
  
  this_00 = this->EventPath;
  if ((this_00->Widgets).Array.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                       ,0x69,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = FArrangedChildren::operator[](&this_00->Widgets,0);
  __return_storage_ptr__->Object = (SWindow *)(pFVar5->Widget).Object;
  pTVar1 = (pFVar5->Widget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

