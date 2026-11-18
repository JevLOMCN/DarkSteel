// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// CalculateOffsetArgument @ 14690f5e0

TTuple<FMargin,bool> * __cdecl
UE::UMG::Private::CalculateOffsetArgument
          (TTuple<FMargin,bool> *__return_storage_ptr__,FGameViewportWidgetSlot *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((((param_1->Offsets).Right == 0.0) && ((param_1->Offsets).Bottom == 0.0)) &&
      ((param_1->Anchors).Maximum.field0_0x0._s_0.Y == (param_1->Anchors).Minimum.field0_0x0._s_0.Y)
      ) && ((param_1->Anchors).Maximum.field0_0x0._s_0.X ==
            (param_1->Anchors).Minimum.field0_0x0._s_0.X)) {
    fVar1 = (param_1->Offsets).Top;
    fVar2 = (param_1->Offsets).Right;
    fVar3 = (param_1->Offsets).Bottom;
    *(float *)&__return_storage_ptr__->field_0x0 = (param_1->Offsets).Left;
    *(float *)&__return_storage_ptr__->field_0x4 = fVar1;
    *(float *)&__return_storage_ptr__->field_0x8 = fVar2;
    *(float *)&__return_storage_ptr__->field_0xc = fVar3;
    __return_storage_ptr__->field_0x10 = 1;
    return __return_storage_ptr__;
  }
  fVar1 = (param_1->Offsets).Top;
  fVar2 = (param_1->Offsets).Right;
  fVar3 = (param_1->Offsets).Bottom;
  *(float *)&__return_storage_ptr__->field_0x0 = (param_1->Offsets).Left;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 = fVar2;
  *(float *)&__return_storage_ptr__->field_0xc = fVar3;
  __return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// FindOrAddWidgetNotifyExtension @ 1469c8ea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetFieldNotificationExtension * __cdecl
UE::UMG::Private::FindOrAddWidgetNotifyExtension(UWidget *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UWidgetFieldNotificationExtension *pUVar4;
  
  if (param_1 == (UWidget *)0x0) {
LAB_1469c8eeb:
    lVar2 = param_1->_padding_;
    if (lVar2 != 0) {
      pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           == &pUVar3->_padding_)) &&
         (param_1 = *(UWidget **)(lVar2 + 0x20), (UUserWidget *)param_1 != (UUserWidget *)0x0)) {
        pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(((UUserWidget *)param_1)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(((UUserWidget *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) goto LAB_1469c8ed1;
      }
    }
    pUVar4 = (UWidgetFieldNotificationExtension *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_1469c8eeb;
LAB_1469c8ed1:
    pUVar4 = UUserWidget::GetExtension<UWidgetFieldNotificationExtension>((UUserWidget *)param_1);
    if (pUVar4 == (UWidgetFieldNotificationExtension *)0x0) {
      pUVar4 = UUserWidget::AddExtension<UWidgetFieldNotificationExtension>((UUserWidget *)param_1);
      return pUVar4;
    }
  }
  return pUVar4;
}

// FindWidgetNotifyExtension @ 1469c9010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetFieldNotificationExtension * __cdecl
UE::UMG::Private::FindWidgetNotifyExtension(UWidget *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UWidgetFieldNotificationExtension *pUVar4;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1469c9099;
  }
  lVar2 = param_1->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       (param_1 = *(UWidget **)(lVar2 + 0x20), (UUserWidget *)param_1 != (UUserWidget *)0x0)) {
      pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(((UUserWidget *)param_1)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((UUserWidget *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
LAB_1469c9099:
        pUVar4 = UUserWidget::GetExtension<UWidgetFieldNotificationExtension>
                           ((UUserWidget *)param_1);
        return pUVar4;
      }
    }
  }
  return (UWidgetFieldNotificationExtension *)0x0;
}

