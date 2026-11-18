// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// CreateUndo @ 1429e33a0

FCursorInfo * __thiscall
SlateEditableTextTypes::FCursorInfo::CreateUndo
          (FCursorInfo *this,FCursorInfo *__return_storage_ptr__)

{
  (__return_storage_ptr__->CursorPosition).LineIndex = 0;
  (__return_storage_ptr__->CursorPosition).Offset = 0;
  __return_storage_ptr__->CursorAlignment = Left;
  __return_storage_ptr__->CursorTextDirection = LeftToRight;
  __return_storage_ptr__->LastCursorInteractionTime = 0.0;
  __return_storage_ptr__->CursorPosition = this->CursorPosition;
  __return_storage_ptr__->CursorAlignment = this->CursorAlignment;
  __return_storage_ptr__->CursorTextDirection = this->CursorTextDirection;
  return __return_storage_ptr__;
}

// RestoreFromUndo @ 142a06260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SlateEditableTextTypes::FCursorInfo::RestoreFromUndo(FCursorInfo *this,FCursorInfo *param_1)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  this->CursorPosition = param_1->CursorPosition;
  this->CursorAlignment = param_1->CursorAlignment;
  this->CursorTextDirection = param_1->CursorTextDirection;
  pFVar1 = FSlateApplication::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->LastCursorInteractionTime = dVar2;
  return;
}

// SetCursorLocationAndAlignment @ 142a08610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndAlignment
          (FCursorInfo *this,FTextLayout *param_1,FTextLocation *param_2,ECursorAlignment param_3)

{
  int iVar1;
  FTextLocation FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSlateApplication *pFVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  double dVar11;
  int local_res8;
  int local_resc;
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *local_38;
  
  FVar2 = *param_2;
  this->CursorAlignment = param_3;
  this->CursorPosition = FVar2;
  this->CursorTextDirection = LeftToRight;
  iVar6 = FTextLayout::GetLineViewIndexForTextLocation
                    (param_1,&param_1->LineViews,param_2,param_3 == Right);
  if ((-1 < iVar6) && (iVar6 < (param_1->LineViews).ArrayNum)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_1->LineViews).AllocatorInstance.Data;
    iVar1 = param_2->Offset;
    lVar10 = (longlong)iVar6 * 0x68;
    iVar6 = *(int *)(pFVar3 + lVar10 + 8);
    puVar8 = *(undefined8 **)(pFVar3 + lVar10);
    puVar9 = puVar8 + (longlong)iVar6 * 2;
    while( true ) {
      if (*(int *)(pFVar3 + lVar10 + 8) != iVar6) {
        `TCheckedPointerIterator<TSharedRef<ILayoutBlock,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar8 == puVar9) goto LAB_142a08748;
      (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,&local_res8);
      if ((local_res8 <= iVar1) && (iVar1 < local_resc)) break;
      puVar8 = puVar8 + 2;
    }
    lVar10 = (**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,local_48);
    this->CursorTextDirection = *(ETextDirection *)(lVar10 + 0x18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  }
LAB_142a08748:
  pFVar7 = FSlateApplication::Get();
  dVar11 = (double)(**(code **)(*(longlong *)pFVar7 + 0x60))(pFVar7);
  this->LastCursorInteractionTime = dVar11;
  return;
}

// SetCursorLocationAndCalculateAlignment @ 142a08770

void __thiscall
SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
          (FCursorInfo *this,FTextLayout *param_1,FTextLocation *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ECursorAlignment EVar8;
  FTextLocation local_res18;
  int local_res20;
  int iStackX_24;
  
  local_res18 = *param_2;
  iVar7 = local_res18.Offset;
  EVar8 = Left;
  if (0 < iVar7) {
    uVar6 = local_res18.LineIndex;
    uVar4 = 0;
    if ((int)uVar6 < (param_1->LineModels).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = *(int *)(*(longlong *)
                      ((param_1->LineModels).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70) +
                    8);
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    EVar8 = Left;
    if (iVar5 == iVar7) {
      EVar8 = Right;
      local_res20 = local_res18.LineIndex;
      iStackX_24 = 0;
      if (0 < local_res18.Offset + -1) {
        iStackX_24 = local_res18.Offset + -1;
      }
      local_res18.Offset = iStackX_24;
    }
  }
  SetCursorLocationAndAlignment(this,param_1,&local_res18,EVar8);
  return;
}

// UpdateLastCursorInteractionTime @ 142a13d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SlateEditableTextTypes::FCursorInfo::UpdateLastCursorInteractionTime(FCursorInfo *this)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  pFVar1 = FSlateApplication::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->LastCursorInteractionTime = dVar2;
  return;
}

