// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// AddReferencedObjects @ 14d607650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FComponentTypeInfo::TComplexComponentOps<FCameraFramingZone>::AddReferencedObjects
          (TComplexComponentOps<FCameraFramingZone> *this,FReferenceCollector *param_1,void *param_2
          ,int param_3)

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
      pUVar1 = FCameraFramingZone::StaticStruct();
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
      param_2 = (void *)((longlong)param_2 + 0x20);
    } while (0 < param_3);
  }
  return;
}

