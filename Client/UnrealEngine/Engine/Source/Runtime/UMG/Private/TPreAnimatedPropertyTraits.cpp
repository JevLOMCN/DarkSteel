// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// RestorePreAnimatedValue @ 14693e5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateMargin> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  uchar uVar1;
  ushort uVar2;
  UObject *pUVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FCustomPropertyAccessor **ppFVar5;
  FWeakObjectPtr local_res10 [3];
  FMargin local_18;
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar3 = FWeakObjectPtr::Get(local_res10);
  if (pUVar3 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar4 = this_00;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      uVar2 = (ushort)pTVar4->_padding_;
      *(float *)(&pUVar3->field_0x4 + uVar2) = (float)(param_2->Data).Top;
      *(float *)(&pUVar3->field_0x8 + uVar2) = (float)(param_2->Data).Right;
      *(float *)(&pUVar3->field_0xc + uVar2) = (float)(param_2->Data).Bottom;
      *(float *)(&pUVar3->field_0x0 + uVar2) = (float)(param_2->Data).Left;
      return;
    }
    pTVar4 = this_00;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_18.Top = (float)(param_2->Data).Top;
      local_18.Right = (float)(param_2->Data).Right;
      local_18.Bottom = (float)(param_2->Data).Bottom;
      local_18.Left = (float)(param_2->Data).Left;
      FTrackInstancePropertyBindings::CallFunction<FMargin>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar3,&local_18);
      return;
    }
    ppFVar5 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    if (*ppFVar5 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar5)[1].PropertyPath)(pUVar3,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 14693e720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateWidgetTransform> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  uchar uVar1;
  ushort uVar2;
  UObject *pUVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FCustomPropertyAccessor **ppFVar5;
  FWeakObjectPtr local_res10 [3];
  TVector2<double>_u_0 local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  float local_18;
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar3 = FWeakObjectPtr::Get(local_res10);
  if (pUVar3 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar4 = this_00;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      uVar2 = (ushort)pTVar4->_padding_;
      *(double *)(&pUVar3->field_0x0 + uVar2) = (param_2->Data).TranslationX;
      *(double *)(&pUVar3->field_0x8 + uVar2) = (param_2->Data).TranslationY;
      *(float *)(&pUVar3[1].field_0x8 + uVar2) = (float)(param_2->Data).Rotation;
      *(double *)(&pUVar3->field_0x10 + uVar2) = (param_2->Data).ScaleX;
      *(double *)(&pUVar3->field_0x18 + uVar2) = (param_2->Data).ScaleY;
      *(double *)(&pUVar3->field_0x20 + uVar2) = (param_2->Data).ShearX;
      *(double *)(&pUVar3[1].field_0x0 + uVar2) = (param_2->Data).ShearY;
      return;
    }
    pTVar4 = this_00;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_48._s_0.X = (param_2->Data).TranslationX;
      local_48._s_0.Y = (param_2->Data).TranslationY;
      local_38 = (param_2->Data).ScaleX;
      dStack_30 = (param_2->Data).ScaleY;
      local_18 = (float)(param_2->Data).Rotation;
      local_28 = (param_2->Data).ShearX;
      dStack_20 = (param_2->Data).ShearY;
      FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar3,
                 (FWidgetTransform *)&local_48._s_0);
      return;
    }
    ppFVar5 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    if (*ppFVar5 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar5)[1].PropertyPath)(pUVar3,param_2);
    }
  }
  return;
}

