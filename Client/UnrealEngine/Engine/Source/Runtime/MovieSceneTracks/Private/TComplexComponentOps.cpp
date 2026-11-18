// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 25

// AddReferencedObjects @ 1466394d0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::Math::TRotator<double>_>::
AddReferencedObjects
          (TComplexComponentOps<UE::Math::TRotator<double>_> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639520

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>::
AddReferencedObjects
          (TComplexComponentOps<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639570

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>::AddReferencedObjects
          (TComplexComponentOps<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1466395c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FAttachmentComponent>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FAttachmentComponent> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639610

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FComponentMaterialInfo>::
AddReferencedObjects
          (TComplexComponentOps<FComponentMaterialInfo> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      pUVar1 = FComponentMaterialInfo::StaticStruct();
      pFVar2 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar3 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar4 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar4,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x10);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 146639770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FConstraintComponentData>::
AddReferencedObjects
          (TComplexComponentOps<FConstraintComponentData> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FConstraintComponentData,(UObject *)pUVar2,
                             L"ConstraintComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x18);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1466398b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FDoubleIntermediateVector>
::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FDoubleIntermediateVector> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639900

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FFadeComponentData>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FFadeComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639950

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FFloatIntermediateVector>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FFloatIntermediateVector> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1466399a0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FIntermediate3DTransform>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FIntermediate3DTransform> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1466399f0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FIntermediateColor>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FIntermediateColor> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 146639a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FLevelVisibilityComponentData>::
AddReferencedObjects
          (TComplexComponentOps<FLevelVisibilityComponentData> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData,
                             (UObject *)pUVar2,L"LevelVisibilityComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 8);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 146639b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMaterialParameterInfo>::
AddReferencedObjects
          (TComplexComponentOps<FMaterialParameterInfo> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      pUVar1 = FMaterialParameterInfo::StaticStruct();
      pFVar2 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar3 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar4 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar4,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x10);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 146639c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneAudioComponentData>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneAudioComponentData> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData,
                             (UObject *)pUVar2,L"MovieSceneAudioComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 8);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 146639dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneAudioInputData>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneAudioInputData> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioInputData,(UObject *)pUVar2,
                             L"MovieSceneAudioInputData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x60);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 146639f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneCameraShakeComponentData>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneCameraShakeComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData,
                             (UObject *)pUVar2,L"MovieSceneCameraShakeComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x40);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneCameraShakeInstanceData>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneCameraShakeInstanceData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData,
                             (UObject *)pUVar2,L"MovieSceneCameraShakeInstanceData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x20);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneDataLayerComponentData>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneDataLayerComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData,
                             (UObject *)pUVar2,L"MovieSceneDataLayerComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 8);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneObjectBindingID>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneObjectBindingID> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      pUVar1 = FMovieSceneObjectBindingID::StaticStruct();
      pFVar2 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar3 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar4 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar4,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x18);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneSkeletalAnimationComponentData>
::AddReferencedObjects
          (TComplexComponentOps<FMovieSceneSkeletalAnimationComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.OuterSingleton
          == (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData,
                             (UObject *)pUVar2,L"MovieSceneSkeletalAnimationComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.
               OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 8);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a520

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14663a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FPerlinNoiseParams>::AddReferencedObjects
          (TComplexComponentOps<FPerlinNoiseParams> *this,FReferenceCollector *param_1,void *param_2
          ,int param_3)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_778 [32];
  FPropertyValueIterator local_748;
  ulonglong local_20;
  
  if (0 < param_3) {
    local_20 = __security_cookie.value ^ (ulonglong)auStackY_778;
    do {
      param_3 = param_3 + -1;
      if (Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseParams,(UObject *)pUVar2,
                             L"PerlinNoiseParams");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton;
      pFVar3 = FObjectProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_748,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
      while( true ) {
        if (local_748.PropertyIteratorStack.ArrayNum < 1) break;
        FPropertyValueIterator::operator->(&local_748);
        pTVar4 = FPropertyValueIterator::operator->(&local_748);
        (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
        FPropertyValueIterator::IterateToNext(&local_748);
      }
      FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_748;
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar5 = local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar5,local_748.PropertyIteratorStack.ArrayNum);
      if (local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_748.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      param_2 = (void *)((longlong)param_2 + 0x18);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 14663a6b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FPropertyNotifyComponentData>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FPropertyNotifyComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14663a700

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FName>::AddReferencedObjects
          (TComplexComponentOps<FName> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

