// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// WatchProperty<float> @ 14ca61f60

int __thiscall
FWatchablePropertySet::WatchProperty<float>
          (FWatchablePropertySet *this,float *param_1,
          TFunction<void___cdecl(float_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<float> *this_00;
  TPropertyWatcher<float> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(float_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<float> *)0x0;
  if (this_00 != (TPropertyWatcher<float> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<float>::TPropertyWatcher<float><float,void>(this_00,param_1,&local_58)
    ;
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<float> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<FColor> @ 14ca62040

int __thiscall
FWatchablePropertySet::WatchProperty<FColor>
          (FWatchablePropertySet *this,FColor *param_1,
          TFunction<void___cdecl(FColor_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<FColor> *this_00;
  TPropertyWatcher<FColor> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(FColor_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<FColor> *)0x0;
  if (this_00 != (TPropertyWatcher<FColor> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<FColor>::TPropertyWatcher<FColor><FColor,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<FColor> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<bool> @ 14ca62120

int __thiscall
FWatchablePropertySet::WatchProperty<bool>
          (FWatchablePropertySet *this,bool *param_1,TFunction<void___cdecl(bool_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<bool> *this_00;
  TPropertyWatcher<bool> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(bool_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<bool> *)0x0;
  if (this_00 != (TPropertyWatcher<bool> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<bool>::TPropertyWatcher<bool><bool,void>(this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<bool> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// CheckAndUpdateWatched @ 14caf3a80

void __thiscall FWatchablePropertySet::CheckAndUpdateWatched(FWatchablePropertySet *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PropertyWatchers).AllocatorInstance.Data;
  iVar2 = (this->PropertyWatchers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PropertyWatchers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

