// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 33

// ForEachField @ 146958820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USlider::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  FName FVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  FFieldId **ppFVar7;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar6 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(FName *)*puVar6;
    local_18._8_4_ = (uint)((FName *)*puVar6)[1].ComparisonIndex;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x154bff5c8);
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  FVar2.Number = *(uint *)&param_2->field_0x4;
  ppFVar7 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar7)->FieldName;
    local_18._8_4_ = (*ppFVar7)->BitNumber;
    cVar4 = (*(code *)FVar2)(uVar3,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar7 = ppFVar7 + 1;
  } while ((longlong)ppFVar7 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = FVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146958fe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UImage::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  FName FVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  FFieldId **ppFVar7;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar6 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(FName *)*puVar6;
    local_18._8_4_ = (uint)((FName *)*puVar6)[1].ComparisonIndex;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x154bff5d0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  FVar2.Number = *(uint *)&param_2->field_0x4;
  ppFVar7 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar7)->FieldName;
    local_18._8_4_ = (*ppFVar7)->BitNumber;
    cVar4 = (*(code *)FVar2)(uVar3,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar7 = ppFVar7 + 1;
  } while ((longlong)ppFVar7 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = FVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 1469594c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UExpandableArea::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff5d8);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14695a400

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMultiLineEditableText::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  FName FVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  FFieldId **ppFVar7;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar6 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(FName *)*puVar6;
    local_18._8_4_ = (uint)((FName *)*puVar6)[1].ComparisonIndex;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x154bff5f8);
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  FVar2.Number = *(uint *)&param_2->field_0x4;
  ppFVar7 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar7)->FieldName;
    local_18._8_4_ = (*ppFVar7)->BitNumber;
    cVar4 = (*(code *)FVar2)(uVar3,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar7 = ppFVar7 + 1;
  } while ((longlong)ppFVar7 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = FVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14695c6e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCheckBox::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  FName FVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  FFieldId **ppFVar7;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar6 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(FName *)*puVar6;
    local_18._8_4_ = (uint)((FName *)*puVar6)[1].ComparisonIndex;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x154bff618);
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  FVar2.Number = *(uint *)&param_2->field_0x4;
  ppFVar7 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar7)->FieldName;
    local_18._8_4_ = (*ppFVar7)->BitNumber;
    cVar4 = (*(code *)FVar2)(uVar3,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar7 = ppFVar7 + 1;
  } while ((longlong)ppFVar7 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = FVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14695e1b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UInputKeySelector::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff620);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14695f640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWidget::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  FFieldId **ppFVar4;
  FName local_18;
  int local_10;
  undefined4 uStack_c;
  
  ppFVar4 = AllFields;
  do {
    local_18 = (*ppFVar4)->FieldName;
    local_10 = (*ppFVar4)->BitNumber;
    cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar2 == '\0') {
      return;
    }
    ppFVar4 = ppFVar4 + 1;
  } while ((longlong)ppFVar4 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      local_18.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
      local_18.Number = *(uint *)&param_2->field_0x4;
      _local_10 = *(undefined8 *)&param_2->field_0x8;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,
                 (TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *)&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146960230

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UEditableText::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  FName FVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  undefined8 *puVar6;
  FFieldId **ppFVar7;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar6 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(FName *)*puVar6;
    local_18._8_4_ = (uint)((FName *)*puVar6)[1].ComparisonIndex;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    puVar6 = puVar6 + 1;
  } while ((longlong)puVar6 < 0x154bff640);
  FVar2.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  FVar2.Number = *(uint *)&param_2->field_0x4;
  ppFVar7 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar7)->FieldName;
    local_18._8_4_ = (*ppFVar7)->BitNumber;
    cVar4 = (*(code *)FVar2)(uVar3,(FName *)&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar7 = ppFVar7 + 1;
  } while ((longlong)ppFVar7 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = FVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146961d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComboBoxString::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff658);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146967aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UEditableTextBox::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff678);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146967c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USpinBox::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff680);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14696b590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMultiLineEditableTextBox::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff698);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14696bfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UComboBoxKey::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff6a0);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 14696cf50

void __thiscall
UMouseHoverComponent::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  char cVar1;
  FFieldId **ppFVar2;
  FName local_18;
  int local_10;
  undefined4 uStack_c;
  
  ppFVar2 = AllFields;
  do {
    local_18 = (*ppFVar2)->FieldName;
    local_10 = (*ppFVar2)->BitNumber;
    cVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar1 == '\0') {
      return;
    }
    ppFVar2 = ppFVar2 + 1;
  } while ((longlong)ppFVar2 < 0x154bff6a8);
  local_18.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  local_18.Number = *(uint *)&param_2->field_0x4;
  _local_10 = *(undefined8 *)&param_2->field_0x8;
  UUIComponent::FFieldNotificationClassDescriptor::ForEachField
            ((FFieldNotificationClassDescriptor *)this,param_1,
             (TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *)&local_18);
  return;
}

// ForEachField @ 14696ddb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProgressBar::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  UClass *pUVar5;
  FFieldId **ppFVar6;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  ppFVar6 = AllFields;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff6c8);
  pcVar2 = *(code **)param_2;
  ppFVar6 = UWidget::FFieldNotificationClassDescriptor::AllFields;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  do {
    local_18._0_8_ = (*ppFVar6)->FieldName;
    local_18._8_4_ = (*ppFVar6)->BitNumber;
    cVar4 = (*pcVar2)(uVar3,&local_18);
    if (cVar4 == '\0') {
      return;
    }
    ppFVar6 = ppFVar6 + 1;
  } while ((longlong)ppFVar6 < 0x154bff638);
  if (param_1 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_18._0_8_ = pcVar2;
      local_18._8_8_ = uVar3;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// GetDescriptor @ 1469cf300

IClassDescriptor * __cdecl UCheckBox::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UCheckBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf370

IClassDescriptor * __cdecl UComboBoxKey::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UComboBoxKey::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf3e0

IClassDescriptor * __cdecl UComboBoxString::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UComboBoxString::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf450

IClassDescriptor * __cdecl UEditableText::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf4c0

IClassDescriptor * __cdecl UEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf530

IClassDescriptor * __cdecl UExpandableArea::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UExpandableArea::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf5a0

IClassDescriptor * __cdecl UImage::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UImage::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf610

IClassDescriptor * __cdecl UInputKeySelector::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UInputKeySelector::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf680

IClassDescriptor * __cdecl
UMouseHoverComponent::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMouseHoverComponent::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf6f0

IClassDescriptor * __cdecl
UMultiLineEditableText::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMultiLineEditableText::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf760

IClassDescriptor * __cdecl
UMultiLineEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMultiLineEditableTextBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf7d0

IClassDescriptor * __cdecl UProgressBar::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UProgressBar::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf840

IClassDescriptor * __cdecl USlider::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USlider::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf8b0

IClassDescriptor * __cdecl USpinBox::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USpinBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetDescriptor @ 1469cf920

IClassDescriptor * __cdecl UWidget::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWidget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// ForEachField @ 146a485c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UUIComponent::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      local_18._0_8_ = *(undefined8 *)param_2;
      local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
      UBlueprintGeneratedClass::ForEachFieldNotify
                ((UBlueprintGeneratedClass *)param_1,&local_18,true);
    }
  }
  return;
}

// ForEachField @ 146a4bde0

void __thiscall
UWidgetSwitcher::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  char cVar1;
  FFieldId **ppFVar2;
  FName local_18;
  int local_10;
  undefined4 uStack_c;
  
  ppFVar2 = AllFields;
  do {
    local_18 = (*ppFVar2)->FieldName;
    local_10 = (*ppFVar2)->BitNumber;
    cVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar1 == '\0') {
      return;
    }
    ppFVar2 = ppFVar2 + 1;
  } while ((longlong)ppFVar2 < 0x154c05858);
  local_18.ComparisonIndex.Value = *(uint *)&param_2->field_0x0;
  local_18.Number = *(uint *)&param_2->field_0x4;
  _local_10 = *(undefined8 *)&param_2->field_0x8;
  UWidget::FFieldNotificationClassDescriptor::ForEachField
            ((FFieldNotificationClassDescriptor *)this,param_1,
             (TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *)&local_18);
  return;
}

// GetDescriptor @ 146a74a80

IClassDescriptor * __cdecl UWidgetSwitcher::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWidgetSwitcher::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

