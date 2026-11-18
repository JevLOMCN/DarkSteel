// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 20

// RestorePreAnimatedValue @ 1466e1cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2->Data);
        }
      }
      else {
        TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e1df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2);
        }
      }
      else {
        TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
        ::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,&param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
      ::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 &param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e1ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2);
        }
      }
      else {
        TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
        ::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,&param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
      ::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 &param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e1ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2);
        }
      }
      else {
        TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
        ::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,&param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
      ::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 &param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e20f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>
          *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2);
        }
      }
      else {
        TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
        ::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,&param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
      ::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 &param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e21f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,TIntegerSequence<int,0>,UE::MovieScene::FVariantPropertyTypeIndex>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pTVar6 = &param_2->Binding;
      if (uVar1 != '\x02') {
        pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  *)0x0;
      }
      if (pTVar6 == (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                     *)0x0) {
        if ((uVar1 != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = (param_2->Binding)._padding_;
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x20))(pUVar5,param_2->Data);
        }
      }
      else {
        TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue
                  (this->PropertyTraitsInstance,pUVar5,
                   (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,
                   (FTrackInstancePropertyBindings *)pTVar6->_padding_,param_2->Data);
      }
    }
    else {
      TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::SetObjectPropertyValue
                (this->PropertyTraitsInstance,pUVar5,
                 (FVariantPropertyTypeIndex)*(uchar *)&param_2->MetaData,(ushort)pTVar6->_padding_,
                 param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e22f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,TPreAnimatedPropertyValue<unsigned_char> *param_2
          ,FRestoreStateParams *param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  FCustomPropertyAccessor **ppFVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      (&pUVar2->field_0x0)[(ushort)pTVar4->_padding_] = param_2->Data;
      return;
    }
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<unsigned_char>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar2,param_2->Data);
      return;
    }
    ppFVar3 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar3 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar3)[1].PropertyPath)(pUVar2,param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e23a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>::
RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<float,double,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,TPreAnimatedPropertyValue<double> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  FCustomPropertyAccessor **ppFVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      *(float *)(&pUVar2->field_0x0 + (ushort)pTVar4->_padding_) = (float)param_2->Data;
      return;
    }
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<float>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar2,(float)param_2->Data);
      return;
    }
    ppFVar3 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar3 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar3)[1].PropertyPath)(pUVar2,param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::Math::TRotator<double>_> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  ushort uVar2;
  double dVar3;
  UObject *pUVar4;
  FCustomPropertyAccessor **ppFVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  if (pUVar4 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      uVar2 = (ushort)pTVar6->_padding_;
      dVar3 = (param_2->Data).Yaw;
      *(double *)(&pUVar4->field_0x0 + uVar2) = (param_2->Data).Pitch;
      *(double *)((longlong)(&pUVar4->field_0x0 + uVar2) + 8) = dVar3;
      *(double *)(&pUVar4->field_0x10 + uVar2) = (param_2->Data).Roll;
      return;
    }
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TRotator<double>_>
                ((FTrackInstancePropertyBindings *)pTVar6->_padding_,pUVar4,&param_2->Data);
      return;
    }
    ppFVar5 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar5 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar5)[1].PropertyPath)(pUVar4,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  TVector2<float> TVar2;
  UObject *pUVar3;
  FCustomPropertyAccessor **ppFVar4;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar5;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar3 = FWeakObjectPtr::Get(local_res10);
  if (pUVar3 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar5 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar5 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar5 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      *(ulonglong *)(&pUVar3->field_0x0 + (ushort)pTVar5->_padding_) =
           CONCAT44((float)(param_2->Data).Y,(float)(param_2->Data).X);
      return;
    }
    pTVar5 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar5 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar5 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      TVar2.field0_0x0._s_0.Y = (float)(param_2->Data).Y;
      TVar2.field0_0x0._s_0.X = (float)(param_2->Data).X;
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>
                ((FTrackInstancePropertyBindings *)pTVar5->_padding_,pUVar3,TVar2);
      return;
    }
    ppFVar4 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar4 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar4)[1].PropertyPath)(pUVar3,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  double dVar1;
  double dVar2;
  uchar uVar3;
  ushort uVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FCustomPropertyAccessor **ppFVar7;
  FWeakObjectPtr local_res10 [3];
  TVector<float>_u_0 local_18;
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar3 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar6 = this_00;
    if (uVar3 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      dVar1 = (param_2->Data).Y;
      dVar2 = (param_2->Data).Z;
      uVar4 = (ushort)pTVar6->_padding_;
      *(float *)(&pUVar5->field_0x0 + uVar4) = (float)(param_2->Data).X;
      *(float *)(&pUVar5->field_0x4 + uVar4) = (float)dVar1;
      *(float *)(&pUVar5->field_0x8 + uVar4) = (float)dVar2;
      return;
    }
    pTVar6 = this_00;
    if (uVar3 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_18._s_0.X = (float)(param_2->Data).X;
      local_18._s_0.Y = (float)(param_2->Data).Y;
      local_18._s_0.Z = (float)(param_2->Data).Z;
      FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
                ((FTrackInstancePropertyBindings *)pTVar6->_padding_,pUVar5,
                 (TVector<float> *)&local_18._s_0);
      return;
    }
    ppFVar7 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    if (*ppFVar7 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar7)[1].PropertyPath)(pUVar5,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  double dVar1;
  double dVar2;
  uchar uVar3;
  ushort uVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FCustomPropertyAccessor **ppFVar7;
  FWeakObjectPtr local_res10 [3];
  TVector<double>_u_0 local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar3 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar6 = this_00;
    if (uVar3 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      uVar4 = (ushort)pTVar6->_padding_;
      dVar1 = (param_2->Data).T_Y;
      dVar2 = (param_2->Data).T_Z;
      *(double *)(&pUVar5->field_0x0 + uVar4) = (param_2->Data).T_X;
      *(double *)(&pUVar5->field_0x8 + uVar4) = dVar1;
      *(double *)((longlong)(&pUVar5->field_0x8 + uVar4) + 8) = dVar2;
      dVar1 = (param_2->Data).R_Z;
      dVar2 = (param_2->Data).R_X;
      *(double *)(&pUVar5->field_0x18 + uVar4) = (param_2->Data).R_Y;
      *(double *)(&pUVar5->field_0x20 + uVar4) = dVar1;
      *(double *)(&pUVar5[1].field_0x0 + uVar4) = dVar2;
      dVar1 = (param_2->Data).S_Y;
      dVar2 = (param_2->Data).S_Z;
      *(double *)(&pUVar5[1].field_0x8 + uVar4) = (param_2->Data).S_X;
      *(double *)(&pUVar5[1].field_0x10 + uVar4) = dVar1;
      *(double *)((longlong)(&pUVar5[1].field_0x10 + uVar4) + 8) = dVar2;
      return;
    }
    pTVar6 = this_00;
    if (uVar3 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_58._s_0.X = (param_2->Data).T_X;
      local_58._s_0.Y = (param_2->Data).T_Y;
      local_40 = (param_2->Data).R_Y;
      dStack_38 = (param_2->Data).R_Z;
      local_58._s_0.Z = (param_2->Data).T_Z;
      local_28 = (param_2->Data).S_X;
      dStack_20 = (param_2->Data).S_Y;
      local_30 = (param_2->Data).R_X;
      local_18 = (param_2->Data).S_Z;
      FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
                ((FTrackInstancePropertyBindings *)pTVar6->_padding_,pUVar5,
                 (FEulerTransform *)&local_58._s_0);
      return;
    }
    ppFVar7 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    if (*ppFVar7 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar7)[1].PropertyPath)(pUVar5,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  ushort uVar2;
  double dVar3;
  UObject *pUVar4;
  FCustomPropertyAccessor **ppFVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  if (pUVar4 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      dVar3 = (param_2->Data).T_Y;
      uVar2 = (ushort)pTVar6->_padding_;
      *(double *)(&pUVar4->field_0x0 + uVar2) = (param_2->Data).T_X;
      *(double *)((longlong)(&pUVar4->field_0x0 + uVar2) + 8) = dVar3;
      dVar3 = (param_2->Data).R_X;
      *(double *)(&pUVar4->field_0x10 + uVar2) = (param_2->Data).T_Z;
      *(double *)((longlong)(&pUVar4->field_0x10 + uVar2) + 8) = dVar3;
      dVar3 = (param_2->Data).R_Z;
      *(double *)(&pUVar4->field_0x20 + uVar2) = (param_2->Data).R_Y;
      *(double *)((longlong)(&pUVar4->field_0x20 + uVar2) + 8) = dVar3;
      dVar3 = (param_2->Data).S_Y;
      *(double *)(&pUVar4[1].field_0x8 + uVar2) = (param_2->Data).S_X;
      *(double *)((longlong)(&pUVar4[1].field_0x8 + uVar2) + 8) = dVar3;
      *(double *)(&pUVar4[1].field_0x18 + uVar2) = (param_2->Data).S_Z;
      return;
    }
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                ((FTrackInstancePropertyBindings *)pTVar6->_padding_,pUVar4,&param_2->Data);
      return;
    }
    ppFVar5 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar5 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar5)[1].PropertyPath)(pUVar4,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  ushort uVar5;
  UObject *pUVar6;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar7;
  FCustomPropertyAccessor **ppFVar8;
  FWeakObjectPtr local_res10 [3];
  FLinearColor_u_0 local_18;
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar6 = FWeakObjectPtr::Get(local_res10);
  if (pUVar6 != (UObject *)0x0) {
    uVar4 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar7 = this_00;
    if (uVar4 != '\x01') {
      pTVar7 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar7 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      dVar1 = (param_2->Data).G;
      dVar2 = (param_2->Data).B;
      dVar3 = (param_2->Data).A;
      uVar5 = (ushort)pTVar7->_padding_;
      *(float *)(&pUVar6->field_0x0 + uVar5) = (float)(param_2->Data).R;
      *(float *)(&pUVar6->field_0x4 + uVar5) = (float)dVar1;
      *(float *)(&pUVar6->field_0x8 + uVar5) = (float)dVar2;
      *(float *)(&pUVar6->field_0xc + uVar5) = (float)dVar3;
      return;
    }
    pTVar7 = this_00;
    if (uVar4 != '\x02') {
      pTVar7 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar7 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_18._s_0.R = (float)(param_2->Data).R;
      local_18._s_0.G = (float)(param_2->Data).G;
      local_18._s_0.B = (float)(param_2->Data).B;
      local_18._s_0.A = (float)(param_2->Data).A;
      FTrackInstancePropertyBindings::CallFunction<FLinearColor>
                ((FTrackInstancePropertyBindings *)pTVar7->_padding_,pUVar6,
                 (FLinearColor *)&local_18._s_0);
      return;
    }
    ppFVar8 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    if (*ppFVar8 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar8)[1].PropertyPath)(pUVar6,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FString,FString,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,TPreAnimatedPropertyValue<FString> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  FCustomPropertyAccessor **ppFVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      ::FString::operator=
                ((FString *)(&pUVar2->field_0x0 + (ushort)pTVar4->_padding_),&param_2->Data);
      return;
    }
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<FString>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar2,&param_2->Data);
      return;
    }
    ppFVar3 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar3 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar3)[1].PropertyPath)(pUVar2,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>::
RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FText,FText,1>,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,TPreAnimatedPropertyValue<FText> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  UObject *pUVar4;
  FCustomPropertyAccessor **ppFVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  longlong *plVar7;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar4 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      pIVar2 = (param_2->Data).TextData.Reference;
      plVar7 = (longlong *)(&pUVar4->field_0x0 + (ushort)pTVar6->_padding_);
      pIVar3 = (ITextData *)*plVar7;
      if (pIVar3 != pIVar2) {
        *plVar7 = (longlong)pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res10);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      *(uint *)(plVar7 + 1) = (param_2->Data).Flags;
      return;
    }
    pTVar6 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<FText>
                ((FTrackInstancePropertyBindings *)pTVar6->_padding_,pUVar4,&param_2->Data);
      return;
    }
    ppFVar5 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar5 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar5)[1].PropertyPath)(pUVar4,param_2);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::FBoolPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
          *param_2,FRestoreStateParams *param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  FCustomPropertyAccessor **ppFVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FBoolPropertyTraits::SetObjectPropertyValue
                (pUVar2,*(FBoolMetaData *)&param_2->MetaData,(ushort)pTVar4->_padding_,param_2->Data
                );
      return;
    }
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<bool>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar2,param_2->Data);
      return;
    }
    ppFVar3 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar3 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar3)[1].PropertyPath)(pUVar2,param_2->MetaData,param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::FComponentTransformPreAnimatedTraits,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FIntermediate3DTransform> *param_2,
          FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  undefined4 *puVar1;
  uchar uVar2;
  ushort uVar3;
  FTrackInstancePropertyBindings *this_01;
  FCustomPropertyAccessor *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FCustomPropertyAccessor **ppFVar12;
  char cVar13;
  UObject *pUVar14;
  FWeakObjectPtr local_res10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar10 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar10 == (UObject *)0x0) {
    return;
  }
  uVar2 = (param_2->Binding).TypeIndex;
  this_00 = &param_2->Binding;
  if ((uVar2 == '\x01') &&
     (this_00 !=
      (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
       *)0x0)) {
    uVar3 = (ushort)this_00->_padding_;
    pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar11->_padding_)) {
      pUVar14 = (UObject *)0x0;
      cVar13 = '\x02';
    }
    else {
      cVar13 = pUVar10[10].field_0x1b;
      pUVar14 = pUVar10;
      if (cVar13 != '\x02') {
        (**(code **)(*(longlong *)pUVar10 + 0x5f8))(pUVar10,2);
      }
    }
    dVar8 = (param_2->Data).T_Y;
    *(double *)(&pUVar10->field_0x0 + uVar3) = (param_2->Data).T_X;
    *(double *)((longlong)(&pUVar10->field_0x0 + uVar3) + 8) = dVar8;
    dVar8 = (param_2->Data).R_X;
    *(double *)(&pUVar10->field_0x10 + uVar3) = (param_2->Data).T_Z;
    *(double *)((longlong)(&pUVar10->field_0x10 + uVar3) + 8) = dVar8;
    dVar8 = (param_2->Data).R_Z;
    *(double *)(&pUVar10->field_0x20 + uVar3) = (param_2->Data).R_Y;
    *(double *)((longlong)(&pUVar10->field_0x20 + uVar3) + 8) = dVar8;
    uVar5 = *(undefined4 *)((longlong)&(param_2->Data).S_X + 4);
    uVar6 = *(undefined4 *)&(param_2->Data).S_Y;
    uVar7 = *(undefined4 *)((longlong)&(param_2->Data).S_Y + 4);
    puVar1 = (undefined4 *)(&pUVar10[1].field_0x8 + uVar3);
    *puVar1 = *(undefined4 *)&(param_2->Data).S_X;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(double *)(&pUVar10[1].field_0x18 + uVar3) = (param_2->Data).S_Z;
    if (cVar13 != '\x02') {
      (**(code **)(*(longlong *)pUVar14 + 0x5f8))(pUVar14,cVar13);
    }
    iVar9 = (**(code **)(*(longlong *)CVarResetComponentVelocity._8_8_ + 200))();
    if (iVar9 < 1) {
      return;
    }
    *(longlong *)(pUVar14 + 10) = 0;
    *(undefined8 *)&pUVar14[10].field_0x8 = 0;
    *(undefined8 *)&pUVar14[10].field_0x10 = 0;
    return;
  }
  if ((uVar2 == '\x02') &&
     (this_00 !=
      (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
       *)0x0)) {
    this_01 = (FTrackInstancePropertyBindings *)this_00->_padding_;
    pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar11->_padding_)) {
      cVar13 = pUVar10[10].field_0x1b;
      if (cVar13 == '\x02') {
        FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                  (this_01,pUVar10,&param_2->Data);
      }
      else {
        (**(code **)(*(longlong *)pUVar10 + 0x5f8))(pUVar10,2);
        FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
                  (this_01,pUVar10,&param_2->Data);
        (**(code **)(*(longlong *)pUVar10 + 0x5f8))(pUVar10,cVar13);
      }
      goto LAB_1466e2f43;
    }
    FTrackInstancePropertyBindings::CallFunction<UE::MovieScene::FIntermediate3DTransform>
              (this_01,pUVar10,&param_2->Data);
  }
  else {
    ppFVar12 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
               ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    pFVar4 = *ppFVar12;
    if (pFVar4 == (FCustomPropertyAccessor *)0x0) {
      return;
    }
    pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar11->_padding_)) {
      cVar13 = pUVar10[10].field_0x1b;
      if (cVar13 == '\x02') {
        (*(code *)pFVar4[1].PropertyPath)(pUVar10,param_2);
      }
      else {
        (**(code **)(*(longlong *)pUVar10 + 0x5f8))(pUVar10,2);
        (*(code *)pFVar4[1].PropertyPath)(pUVar10,param_2);
        (**(code **)(*(longlong *)pUVar10 + 0x5f8))(pUVar10,cVar13);
      }
      goto LAB_1466e2f43;
    }
    (*(code *)pFVar4[1].PropertyPath)(pUVar10,param_2);
  }
  pUVar10 = (UObject *)0x0;
LAB_1466e2f43:
  iVar9 = (**(code **)(*(longlong *)CVarResetComponentVelocity._8_8_ + 200))();
  if (0 < iVar9) {
    *(undefined8 *)(pUVar10 + 10) = 0;
    *(undefined8 *)&pUVar10[10].field_0x8 = 0;
    *(undefined8 *)&pUVar10[10].field_0x10 = 0;
  }
  return;
}

// RestorePreAnimatedValue @ 1466e2f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>::
RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
           *this,TTuple<FObjectKey,FName> *param_1,TPreAnimatedPropertyValue<double> *param_2,
          FRestoreStateParams *param_3)

{
  uchar uVar1;
  UObject *pUVar2;
  FCustomPropertyAccessor **ppFVar3;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = *(int *)param_1;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x01') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      *(float *)(&pUVar2->field_0x0 + (ushort)pTVar4->_padding_) = (float)param_2->Data;
      return;
    }
    pTVar4 = &param_2->Binding;
    if (uVar1 != '\x02') {
      pTVar4 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar4 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      FTrackInstancePropertyBindings::CallFunction<float>
                ((FTrackInstancePropertyBindings *)pTVar4->_padding_,pUVar2,(float)param_2->Data);
      return;
    }
    ppFVar3 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(&param_2->Binding);
    if (*ppFVar3 != (FCustomPropertyAccessor *)0x0) {
      (*(code *)(*ppFVar3)[1].PropertyPath)(pUVar2,(float)param_2->Data);
    }
  }
  return;
}

// RestorePreAnimatedValue @ 1466e3060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
::RestorePreAnimatedValue
          (TPreAnimatedPropertyTraits<UE::MovieScene::FObjectPropertyTraits,TIntegerSequence<int,0>,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
           *this,TTuple<FObjectKey,FName> *param_1,
          TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
          *param_2,FRestoreStateParams *param_3)

{
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *this_00;
  uchar uVar1;
  FTrackInstancePropertyBindings *pFVar2;
  FCustomPropertyAccessor *pFVar3;
  longlong lVar4;
  UObject *pUVar5;
  TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  *pTVar6;
  FCustomPropertyAccessor **ppFVar7;
  FObjectMetadata *pFVar8;
  FWeakObjectPtr local_res10;
  TObjectPtr<UClass>_u_0 local_18;
  undefined1 local_10;
  
  local_res10.ObjectIndex = *(int *)param_1;
  local_res10.ObjectSerialNumber = *(int *)&param_1->field_0x4;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar5 != (UObject *)0x0) {
    uVar1 = (param_2->Binding).TypeIndex;
    this_00 = &param_2->Binding;
    pTVar6 = this_00;
    if (uVar1 != '\x01') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_18 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&param_2->MetaData;
      lVar4 = pTVar6->_padding_;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0))
      {
        GC::MarkAsReachable((UObject *)local_18.DebugPtr);
      }
      local_10 = (param_2->MetaData).field_0x8;
      FObjectPropertyTraits::SetObjectPropertyValue
                (pUVar5,(FObjectMetadata *)&local_18.ObjectPtr,(ushort)lVar4,&param_2->Data);
      return;
    }
    pTVar6 = this_00;
    if (uVar1 != '\x02') {
      pTVar6 = (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)0x0;
    }
    if (pTVar6 != (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                   *)0x0) {
      local_18 = (TObjectPtr<UClass>_u_0)*(TObjectPtr<UClass>_u_0 *)&param_2->MetaData;
      pFVar2 = (FTrackInstancePropertyBindings *)pTVar6->_padding_;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_18.DebugPtr != (UClass *)0x0))
      {
        GC::MarkAsReachable((UObject *)local_18.DebugPtr);
      }
      local_10 = (param_2->MetaData).field_0x8;
      FObjectPropertyTraits::SetObjectPropertyValue
                (pUVar5,(FObjectMetadata *)&local_18.ObjectPtr,pFVar2,&param_2->Data);
      return;
    }
    ppFVar7 = TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ::Get<UE::MovieScene::FCustomPropertyAccessor_const_*>(this_00);
    pFVar3 = *ppFVar7;
    if (pFVar3 != (FCustomPropertyAccessor *)0x0) {
      pFVar8 = FObjectPropertyTraits::FObjectMetadata::FObjectMetadata
                         ((FObjectMetadata *)&local_18.ObjectPtr,
                          (FObjectMetadata *)&param_2->MetaData);
      FObjectPropertyTraits::SetObjectPropertyValue(pUVar5,pFVar8,pFVar3,&param_2->Data);
    }
  }
  return;
}

