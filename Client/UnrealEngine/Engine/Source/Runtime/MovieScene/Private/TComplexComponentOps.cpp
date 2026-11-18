// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 46

// AddReferencedObjects @ 1460a81c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<unsigned_char>::AddReferencedObjects
          (TComplexComponentOps<unsigned_char> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8210

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<short>::AddReferencedObjects
          (TComplexComponentOps<short> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8260

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<unsigned_short>::AddReferencedObjects
          (TComplexComponentOps<unsigned_short> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a82b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<int>::AddReferencedObjects
          (TComplexComponentOps<int> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8300

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<double>::AddReferencedObjects
          (TComplexComponentOps<double> *this,FReferenceCollector *param_1,void *param_2,int param_3
          )

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8350

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UObject_*_(__cdecl*)(UObject_*)>::
AddReferencedObjects
          (TComplexComponentOps<UObject_*_(__cdecl*)(UObject_*)> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a83a0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<TObjectPtr<UMovieSceneCondition_const_>_>::
AddReferencedObjects
          (TComplexComponentOps<TObjectPtr<UMovieSceneCondition_const_>_> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,param_2,0,0);
    param_2 = (void *)((longlong)param_2 + 8);
  }
  return;
}

// AddReferencedObjects @ 1460a8400

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::Interpolation::FCachedInterpolation> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8450

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FCustomPropertyIndex>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FCustomPropertyIndex> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a84a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FEasingComponentData>::AddReferencedObjects
          (TComplexComponentOps<FEasingComponentData> *this,FReferenceCollector *param_1,
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
      if (Z_Registration_Info_UScriptStruct_FEasingComponentData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FEasingComponentData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FEasingComponentData,(UObject *)pUVar2,
                             L"EasingComponentData");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FEasingComponentData.OuterSingleton;
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

// AddReferencedObjects @ 1460a85e0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FEntityGroupID>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FEntityGroupID> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8630

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FEvaluationHookFlags>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FEvaluationHookFlags> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8680

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FFrameTime>::AddReferencedObjects
          (TComplexComponentOps<FFrameTime> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a86d0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FGuid>::AddReferencedObjects
          (TComplexComponentOps<FGuid> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8720

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FHierarchicalBlendTarget>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FHierarchicalBlendTarget> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8770

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInitialValueIndex>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FInitialValueIndex> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a87c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInstanceHandle>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FInstanceHandle> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8810

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInterrogationInstance>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FInterrogationInstance> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8860

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FInterrogationKey>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FInterrogationKey> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a88b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8900

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneBlendChannelID>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneBlendChannelID> *this,FReferenceCollector *param_1,
          void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8950

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FMovieSceneEntityID>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FMovieSceneEntityID> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a89a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneEvaluationHookComponent>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneEvaluationHookComponent> *this,
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
      if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationHookComponent,
                             (UObject *)pUVar2,L"MovieSceneEvaluationHookComponent");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationHookComponent.OuterSingleton;
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

// AddReferencedObjects @ 1460a8ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieScenePropertyBinding>::
AddReferencedObjects
          (TComplexComponentOps<FMovieScenePropertyBinding> *this,FReferenceCollector *param_1,
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
      pUVar1 = FMovieScenePropertyBinding::StaticStruct();
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
      param_2 = (void *)((longlong)param_2 + 0x14);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1460a8bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneSequenceID>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneSequenceID> *this,FReferenceCollector *param_1,
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
      pUVar1 = FMovieSceneSequenceID::StaticStruct();
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
      param_2 = (void *)((longlong)param_2 + 4);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1460a8d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneTrackInstanceComponent>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneTrackInstanceComponent> *this,
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
      if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceComponent,
                             (UObject *)pUVar2,L"MovieSceneTrackInstanceComponent");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneTrackInstanceComponent.OuterSingleton;
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
      param_2 = (void *)((longlong)param_2 + 0x10);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1460a8e40

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FObjectComponent>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FObjectComponent> *this,FReferenceCollector *param_1
          ,void *param_2,int param_3)

{
  int *piVar1;
  
  if (0 < param_3) {
    piVar1 = (int *)((longlong)param_2 + 0xc);
    do {
      param_3 = param_3 + -1;
      if ((piVar1[-1] == 0) && (*piVar1 == 0)) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,piVar1 + -3,0,0);
      }
      piVar1 = piVar1 + 4;
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1460a8eb0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FObjectKey>::AddReferencedObjects
          (TComplexComponentOps<FObjectKey> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  return;
}

// AddReferencedObjects @ 1460a8ec0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FRootInstanceHandle>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FRootInstanceHandle> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8f10

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceBoolChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceBoolChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8f60

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceByteChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceByteChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a8fb0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceDoubleChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceDoubleChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9000

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceFloatChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceFloatChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9050

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceIntegerChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceIntegerChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a90a0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceObjectPathChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceObjectPathChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a90f0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceStringChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceStringChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9140

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FSourceTextChannel>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FSourceTextChannel> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FTrackInstanceInputComponent>::
AddReferencedObjects
          (TComplexComponentOps<FTrackInstanceInputComponent> *this,FReferenceCollector *param_1,
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
      if (Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_MovieScene();
        Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTrackInstanceInputComponent,
                             (UObject *)pUVar2,L"TrackInstanceInputComponent");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FTrackInstanceInputComponent.OuterSingleton;
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
      param_2 = (void *)((longlong)param_2 + 0x10);
    } while (0 < param_3);
  }
  return;
}

// AddReferencedObjects @ 1460a92d0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FVariantPropertyTypeIndex>
::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FVariantPropertyTypeIndex> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9320

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_>::AddReferencedObjects
          (TComplexComponentOps<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9370

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_>::
AddReferencedObjects
          (TComplexComponentOps<TSubclassOf<UMovieSceneBlenderSystem>_> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a93c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FString>::AddReferencedObjects
          (TComplexComponentOps<FString> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9410

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FText>::AddReferencedObjects
          (TComplexComponentOps<FText> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a9460

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<__int64>::AddReferencedObjects
          (TComplexComponentOps<__int64> *this,FReferenceCollector *param_1,void *param_2,
          int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1460a94b0

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<bool>::AddReferencedObjects
          (TComplexComponentOps<bool> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 1462a2880

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<float>::AddReferencedObjects
          (TComplexComponentOps<float> *this,FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

