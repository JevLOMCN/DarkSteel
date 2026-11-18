// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FDelegateDispatchDetails @ 148906cb0

FDelegateDispatchDetails * __thiscall
FDelegateDispatchDetails::FDelegateDispatchDetails
          (FDelegateDispatchDetails *this,FDelegateDispatchDetails *param_1)

{
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *pTVar1;
  FInputActionHandlerDynamicSignature *pFVar2;
  undefined8 uVar3;
  double dVar4;
  uint uVar5;
  
  this->EventIndex = param_1->EventIndex;
  this->FoundIndex = param_1->FoundIndex;
  (this->ActionDelegate).FuncDelegate.Object = (param_1->ActionDelegate).FuncDelegate.Object;
  (this->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController =
       (param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
  pTVar1 = (param_1->ActionDelegate).FuncDelegateWithKey.Object;
  (param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ActionDelegate).FuncDelegate.Object =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  (this->ActionDelegate).FuncDelegateWithKey.Object = pTVar1;
  (this->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->ActionDelegate).FuncDynDelegate.Object;
  (param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ActionDelegate).FuncDelegateWithKey.Object =
       (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
  (this->ActionDelegate).FuncDynDelegate.Object = pFVar2;
  (this->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
  (param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ActionDelegate).FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
  (this->ActionDelegate).BoundDelegateType = (param_1->ActionDelegate).BoundDelegateType;
  this->SourceAction = param_1->SourceAction;
  (this->Chord).Key.KeyName = (param_1->Chord).Key.KeyName;
  (this->Chord).Key.KeyDetails.Object = (param_1->Chord).Key.KeyDetails.Object;
  (this->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Chord).Key.KeyDetails.Object = (FKeyDetails *)0x0;
  uVar5 = ((this->Chord).bShift ^ (param_1->Chord).bShift) & 1 ^ *(uint *)&(this->Chord).field_0x18;
  *(uint *)&(this->Chord).field_0x18 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&(param_1->Chord).field_0x18) & 2 ^ uVar5;
  *(uint *)&(this->Chord).field_0x18 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&(param_1->Chord).field_0x18) & 4 ^ uVar5;
  *(uint *)&(this->Chord).field_0x18 = uVar5;
  *(uint *)&(this->Chord).field_0x18 = (uVar5 ^ *(uint *)&(param_1->Chord).field_0x18) & 8 ^ uVar5;
  (this->KeyEvent).Value = (param_1->KeyEvent).Value;
  *(undefined8 *)&this->TouchDelegate = *(undefined8 *)&param_1->TouchDelegate;
  *(undefined8 *)&(this->TouchDelegate).field_0x8 =
       *(undefined8 *)&(param_1->TouchDelegate).field_0x8;
  uVar3 = *(undefined8 *)&(param_1->TouchDelegate).field_0x10;
  *(undefined8 *)&(param_1->TouchDelegate).field_0x8 = 0;
  *(undefined8 *)&param_1->TouchDelegate = 0;
  *(undefined8 *)&(this->TouchDelegate).field_0x10 = uVar3;
  *(undefined8 *)&(this->TouchDelegate).field_0x18 =
       *(undefined8 *)&(param_1->TouchDelegate).field_0x18;
  *(undefined8 *)&(param_1->TouchDelegate).field_0x18 = 0;
  *(undefined8 *)&(param_1->TouchDelegate).field_0x10 = 0;
  dVar4 = (param_1->TouchLocation).field0_0x0._s_0.Y;
  (this->TouchLocation).field0_0x0._s_0.X = (param_1->TouchLocation).field0_0x0._s_0.X;
  (this->TouchLocation).field0_0x0._s_0.Y = dVar4;
  (this->TouchLocation).field0_0x0._s_0.Z = (param_1->TouchLocation).field0_0x0._s_0.Z;
  this->FingerIndex = param_1->FingerIndex;
  *(undefined8 *)&this->GestureDelegate = *(undefined8 *)&param_1->GestureDelegate;
  *(undefined8 *)&(this->GestureDelegate).field_0x8 =
       *(undefined8 *)&(param_1->GestureDelegate).field_0x8;
  *(undefined8 *)&(param_1->GestureDelegate).field_0x8 = 0;
  uVar3 = *(undefined8 *)&(param_1->GestureDelegate).field_0x10;
  *(undefined8 *)&param_1->GestureDelegate = 0;
  *(undefined8 *)&(this->GestureDelegate).field_0x10 = uVar3;
  *(undefined8 *)&(this->GestureDelegate).field_0x18 =
       *(undefined8 *)&(param_1->GestureDelegate).field_0x18;
  *(undefined8 *)&(param_1->GestureDelegate).field_0x18 = 0;
  *(undefined8 *)&(param_1->GestureDelegate).field_0x10 = 0;
  this->GestureValue = param_1->GestureValue;
  return this;
}

// FDelegateDispatchDetails @ 148906e60

FDelegateDispatchDetails * __thiscall
FDelegateDispatchDetails::FDelegateDispatchDetails
          (FDelegateDispatchDetails *this,FDelegateDispatchDetails *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  double dVar3;
  uint uVar4;
  
  this->EventIndex = param_1->EventIndex;
  this->FoundIndex = param_1->FoundIndex;
  (this->ActionDelegate).FuncDelegate.Object = (param_1->ActionDelegate).FuncDelegate.Object;
  pTVar1 = (param_1->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
  (this->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ActionDelegate).FuncDelegateWithKey.Object =
       (param_1->ActionDelegate).FuncDelegateWithKey.Object;
  pTVar1 = (param_1->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
  (this->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ActionDelegate).FuncDynDelegate.Object = (param_1->ActionDelegate).FuncDynDelegate.Object;
  pTVar1 = (param_1->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
  (this->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ActionDelegate).BoundDelegateType = (param_1->ActionDelegate).BoundDelegateType;
  this->SourceAction = param_1->SourceAction;
  (this->Chord).Key.KeyName = (param_1->Chord).Key.KeyName;
  (this->Chord).Key.KeyDetails.Object = (param_1->Chord).Key.KeyDetails.Object;
  pTVar1 = (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = ((this->Chord).bShift ^ (param_1->Chord).bShift) & 1 ^ *(uint *)&(this->Chord).field_0x18;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&(param_1->Chord).field_0x18) & 2 ^ uVar4;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&(param_1->Chord).field_0x18) & 4 ^ uVar4;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  *(uint *)&(this->Chord).field_0x18 = (uVar4 ^ *(uint *)&(param_1->Chord).field_0x18) & 8 ^ uVar4;
  (this->KeyEvent).Value = (param_1->KeyEvent).Value;
  *(undefined8 *)&this->TouchDelegate = *(undefined8 *)&param_1->TouchDelegate;
  lVar2 = *(longlong *)&(param_1->TouchDelegate).field_0x8;
  *(longlong *)&(this->TouchDelegate).field_0x8 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)&(this->TouchDelegate).field_0x10 =
       *(undefined8 *)&(param_1->TouchDelegate).field_0x10;
  lVar2 = *(longlong *)&(param_1->TouchDelegate).field_0x18;
  *(longlong *)&(this->TouchDelegate).field_0x18 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  dVar3 = (param_1->TouchLocation).field0_0x0._s_0.Y;
  (this->TouchLocation).field0_0x0._s_0.X = (param_1->TouchLocation).field0_0x0._s_0.X;
  (this->TouchLocation).field0_0x0._s_0.Y = dVar3;
  (this->TouchLocation).field0_0x0._s_0.Z = (param_1->TouchLocation).field0_0x0._s_0.Z;
  this->FingerIndex = param_1->FingerIndex;
  *(undefined8 *)&this->GestureDelegate = *(undefined8 *)&param_1->GestureDelegate;
  lVar2 = *(longlong *)&(param_1->GestureDelegate).field_0x8;
  *(longlong *)&(this->GestureDelegate).field_0x8 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)&(this->GestureDelegate).field_0x10 =
       *(undefined8 *)&(param_1->GestureDelegate).field_0x10;
  lVar2 = *(longlong *)&(param_1->GestureDelegate).field_0x18;
  *(longlong *)&(this->GestureDelegate).field_0x18 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  this->GestureValue = param_1->GestureValue;
  return this;
}

// FDelegateDispatchDetails @ 148907000

FDelegateDispatchDetails * __thiscall
FDelegateDispatchDetails::FDelegateDispatchDetails
          (FDelegateDispatchDetails *this,uint param_1,uint param_2,FInputChord *param_3,
          FInputActionUnifiedDelegate *param_4,EInputEvent param_5,FInputActionBinding *param_6)

{
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *pTVar1;
  FInputActionHandlerDynamicSignature *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
  this->EventIndex = param_1;
  this->FoundIndex = param_2;
  (this->ActionDelegate).FuncDelegate.Object = (param_4->FuncDelegate).Object;
  (this->ActionDelegate).FuncDelegate.SharedReferenceCount.ReferenceController =
       (param_4->FuncDelegate).SharedReferenceCount.ReferenceController;
  pTVar1 = (param_4->FuncDelegateWithKey).Object;
  (param_4->FuncDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->FuncDelegate).Object = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  (this->ActionDelegate).FuncDelegateWithKey.Object = pTVar1;
  (this->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (param_4->FuncDelegateWithKey).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_4->FuncDynDelegate).Object;
  (param_4->FuncDelegateWithKey).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->FuncDelegateWithKey).Object =
       (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
  (this->ActionDelegate).FuncDynDelegate.Object = pFVar2;
  (this->ActionDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (param_4->FuncDynDelegate).SharedReferenceCount.ReferenceController;
  (param_4->FuncDynDelegate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->FuncDynDelegate).Object = (FInputActionHandlerDynamicSignature *)0x0;
  (this->ActionDelegate).BoundDelegateType = param_4->BoundDelegateType;
  this->SourceAction = param_6;
  (this->Chord).Key.KeyName = (param_3->Key).KeyName;
  (this->Chord).Key.KeyDetails.Object = (param_3->Key).KeyDetails.Object;
  pTVar3 = (param_3->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = ((this->Chord).bShift ^ param_3->bShift) & 1 ^ *(uint *)&(this->Chord).field_0x18;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_3->field_0x18) & 2 ^ uVar4;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&param_3->field_0x18) & 4 ^ uVar4;
  *(uint *)&(this->Chord).field_0x18 = uVar4;
  *(uint *)&(this->Chord).field_0x18 = (uVar4 ^ *(uint *)&param_3->field_0x18) & 8 ^ uVar4;
  (this->KeyEvent).Value = (undefined1)param_5;
  *(undefined8 *)&this->TouchDelegate = 0;
  *(undefined8 *)&(this->TouchDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TouchDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TouchDelegate).field_0x18 = 0;
  *(undefined8 *)&this->GestureDelegate = 0;
  *(undefined8 *)&(this->GestureDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->GestureDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->GestureDelegate).field_0x18 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->FuncDynDelegate).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->FuncDelegateWithKey).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->FuncDelegate).SharedReferenceCount.ReferenceController);
  return this;
}

