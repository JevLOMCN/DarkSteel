// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// DispatchInitializePropertyMetaDataTasks @ 14665ca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,double>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,double>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>,double>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665cf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,double,double,double,double,double,double,double,double,double>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,double,double,double,double,double,double,double,double,double>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>,double,double,double,double,double,double,double,double,double>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,double,double,double,double>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,double,double,double,double>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,double,double,double,double>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DispatchInitializePropertyMetaDataTasks @ 14665d280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,__int64>
::DispatchInitializePropertyMetaDataTasks
          (TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,__int64>
           *this,FPropertyDefinition *param_1,FSystemTaskPrerequisites *param_2,
          FSystemSubsequentTasks *param_3,UMovieSceneEntitySystemLinker *param_4)

{
  IPropertyTraits *pIVar1;
  FBuiltInComponentTypes *pFVar2;
  undefined1 auStack_1c8 [32];
  FComponentTypeID local_1a8;
  ushort local_1a6;
  FComponentTypeID local_1a4 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  undefined8 local_180;
  TStatIdData *pTStack_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined4 uStack_168;
  uint uStack_164;
  TComponentTypeID<UObject_*> local_160;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_15e;
  TComponentTypeID<UE::MovieScene::FVariantPropertyTypeIndex> TStack_15c;
  undefined2 uStack_15a;
  undefined8 uStack_158;
  TStatIdData *pTStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [4];
  FComponentAccess aFStack_134 [2];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar2 = FBuiltInComponentTypes::Get();
  pIVar1 = param_1->TraitsInstance;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_160 = pFVar2->BoundObject;
  TStack_15e = pFVar2->PropertyBinding;
  TStack_15c = pFVar2->VariantPropertyTypeIndex;
  local_1a8.Value = (pFVar2->Tags).NeedsLink.Value;
  local_180 = 0;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_158 = 0;
  pTStack_150 = &TStatId::TStatId_NAME_None;
  local_138._2_2_ = TStack_15e;
  local_138._0_2_ = local_160;
  unique0x100001e3 = TStack_15c;
  unique0x100001e5 = uStack_15a;
  local_1a6 = (param_1->PropertyType).Value;
  local_110.AllMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_168 = 0x6ff;
  uStack_148 = CONCAT71(uStack_16f,local_170) & 0xffffffffffffffe0;
  uStack_140._4_4_ = uStack_164;
  uStack_140._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_170 = local_170 & 0xe0;
  uStack_120 = uStack_148;
  local_118 = uStack_140;
  AddAccessorToFilter((FComponentAccess *)local_138,&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  AddAccessorToFilter((FComponentAccess *)(local_138 + 4),&local_110);
  local_198._First = &local_1a8;
  local_198._Last = local_1a4;
  FComponentMask::SetAll(&local_110.AllMask,&local_198);
  local_198._First = (FComponentTypeID *)pIVar1;
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
  ::
  Iterate_PerEntityImpl<_UE::MovieScene::TVariantPropertyComponentHandler<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>,__int64>::DispatchInitializePropertyMetaDataTasks_::__l2::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TWriteAccess<UE::MovieScene::FVariantPropertyTypeIndex>_>
              *)local_138,&param_4->EntityManager,&local_110,(<lambda_1> *)&local_198);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

