// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// GetObjectPropertyValue @ 14668e370

void __cdecl
UE::MovieScene::FObjectPropertyTraits::GetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,FCustomPropertyAccessor *param_3,
          FObjectComponent *param_4)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  TObjectPtr<UClass>_u_0 local_28;
  undefined1 local_20;
  undefined1 local_18 [16];
  
  local_28 = (TObjectPtr<UClass>_u_0)(param_2->ObjectClass).field0_0x0.DebugPtr;
  pUVar1 = param_3[1].Class;
  if ((GC::GIsIncrementalReachabilityPending) && (local_28.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = param_2->bAllowsClear;
  puVar2 = (undefined8 *)(*(code *)pUVar1)(local_18,param_1,&local_28);
  if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable((UObject *)*puVar2);
  }
  (param_4->ObjectPtr).field0_0x0.DebugPtr = (UObject *)*puVar2;
  param_4->ObjectKey = *(FObjectKey *)(puVar2 + 1);
  return;
}

// GetObjectPropertyValue @ 14668e410

void __cdecl
UE::MovieScene::FObjectPropertyTraits::GetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,ushort param_3,FObjectComponent *param_4)

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)(&param_1->field_0x0 + param_3);
  if (GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (param_4->ObjectPtr).field0_0x0.DebugPtr = pUVar1;
    (param_4->ObjectKey).ObjectIndex = 0;
    (param_4->ObjectKey).ObjectSerialNumber = 0;
    return;
  }
  (param_4->ObjectPtr).field0_0x0.DebugPtr = pUVar1;
  (param_4->ObjectKey).ObjectIndex = 0;
  (param_4->ObjectKey).ObjectSerialNumber = 0;
  return;
}

// GetObjectPropertyValue @ 14668e490

void __cdecl
UE::MovieScene::FObjectPropertyTraits::GetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,FTrackInstancePropertyBindings *param_3,
          FObjectComponent *param_4)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FResolvedPropertyAndFunction *pFVar2;
  TObjectPtr<UObject>_u_0 local_res20;
  
  local_res20.DebugPtr = (UObject *)0x0;
  pFVar2 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  FTrackInstancePropertyBindings::TryGetPropertyValue<UObject_*>(pFVar2,&local_res20.DebugPtr);
  TVar1 = local_res20;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (local_res20.DebugPtr != (UObject *)0x0) {
      GC::MarkAsReachable(local_res20.DebugPtr);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
      GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  (param_4->ObjectPtr).field0_0x0.DebugPtr = (UObject *)TVar1;
  (param_4->ObjectKey).ObjectIndex = 0;
  (param_4->ObjectKey).ObjectSerialNumber = 0;
  return;
}

// SetObjectPropertyValue @ 1466faef0

void __cdecl
UE::MovieScene::FObjectPropertyTraits::SetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,FCustomPropertyAccessor *param_3,
          FObjectComponent *param_4)

{
  FName FVar1;
  TObjectPtr<UClass>_u_0 local_18;
  undefined1 local_10;
  
  local_18 = (TObjectPtr<UClass>_u_0)(param_2->ObjectClass).field0_0x0.DebugPtr;
  FVar1 = param_3[1].PropertyPath;
  if ((GC::GIsIncrementalReachabilityPending) && (local_18.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  local_10 = param_2->bAllowsClear;
  (*(code *)FVar1)(param_1,&local_18,param_4);
  return;
}

// SetObjectPropertyValue @ 1466faf60

void __cdecl
UE::MovieScene::FObjectPropertyTraits::SetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,ushort param_3,FObjectComponent *param_4)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  char cVar4;
  UObject *pUVar5;
  
  pUVar5 = FObjectComponent::GetObject(param_4);
  pUVar2 = (param_2->ObjectClass).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    if (pUVar5 == (UObject *)0x0) {
      cVar4 = param_2->bAllowsClear;
    }
    else {
      lVar3 = *(longlong *)&pUVar5->field_0x10;
      if (lVar3 == 0) {
        return;
      }
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
    }
    if (cVar4 != '\0') {
      pUVar5 = FObjectComponent::GetObject(param_4);
      *(UObject **)(&param_1->field_0x0 + param_3) = pUVar5;
    }
  }
  return;
}

// SetObjectPropertyValue @ 1466faff0

void __cdecl
UE::MovieScene::FObjectPropertyTraits::SetObjectPropertyValue
          (UObject *param_1,FObjectMetadata *param_2,FTrackInstancePropertyBindings *param_3,
          FObjectComponent *param_4)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  char cVar4;
  UObject *pUVar5;
  
  pUVar5 = FObjectComponent::GetObject(param_4);
  pUVar2 = (param_2->ObjectClass).field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    if (pUVar5 == (UObject *)0x0) {
      cVar4 = param_2->bAllowsClear;
    }
    else {
      lVar3 = *(longlong *)&pUVar5->field_0x10;
      if (lVar3 == 0) {
        return;
      }
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
    }
    if (cVar4 != '\0') {
      pUVar5 = FObjectComponent::GetObject(param_4);
      FTrackInstancePropertyBindings::CallFunction<UObject_*>(param_3,param_1,pUVar5);
    }
  }
  return;
}

