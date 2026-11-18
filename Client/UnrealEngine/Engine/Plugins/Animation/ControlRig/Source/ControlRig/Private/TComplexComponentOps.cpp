// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// AddReferencedObjects @ 14a3df970

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneControlRigSpaceChannel_const_*>
::AddReferencedObjects
          (TComplexComponentOps<FMovieSceneControlRigSpaceChannel_const_*> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14a3df9c0

void __thiscall
UE::MovieScene::FComponentTypeInfo::
TComplexComponentOps<UE::MovieScene::FAccumulatedControlEntryIndex>::AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14a3dfa10

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FBaseControlRigEvalData>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FBaseControlRigEvalData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14a3dfa60

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<UE::MovieScene::FControlRigSourceData>::
AddReferencedObjects
          (TComplexComponentOps<UE::MovieScene::FControlRigSourceData> *this,
          FReferenceCollector *param_1,void *param_2,int param_3)

{
  for (; 0 < param_3; param_3 = param_3 + -1) {
    AddReferencedObjectForComponent();
  }
  return;
}

// AddReferencedObjects @ 14a3dfab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FMovieSceneControlRigSpaceBaseKey>::
AddReferencedObjects
          (TComplexComponentOps<FMovieSceneControlRigSpaceBaseKey> *this,
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
      if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar2 = Z_Construct_UPackage__Script_ControlRig();
        Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey,
                             (UObject *)pUVar2,L"MovieSceneControlRigSpaceBaseKey");
      }
      pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton;
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

