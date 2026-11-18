// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// GetInitialValue @ 14a414e10

FControlRigTrackTokenFloat __thiscall
TMovieSceneInitialValueStore<FControlRigTrackTokenFloat>::GetInitialValue
          (TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> *this)

{
  int *piVar1;
  int iVar2;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar3;
  FWeakObjectPtr FVar4;
  int iVar5;
  UObject *pUVar6;
  int *in_RDX;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr local_res8;
  int local_res18 [2];
  UObject *local_res20;
  
  pUVar6 = this->AnimatingObject;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar5 = 0;
  iVar7 = iVar5;
  if (pUVar6 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    iVar5 = local_res8.ObjectSerialNumber;
    iVar7 = local_res8.ObjectIndex;
  }
  FVar4 = local_res8;
  pTVar3 = this->Actuator;
  iVar2 = (pTVar3->InitialValues).ArrayNum;
  pFVar8 = (pTVar3->InitialValues).AllocatorInstance.Data;
  pUVar6 = (UObject *)(pFVar8 + (longlong)iVar2 * 0xc);
  local_res20 = pUVar6;
  while( true ) {
    if ((pTVar3->InitialValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenFloat>::FInitialValue,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      pUVar6 = local_res20;
    }
    if ((UObject *)pFVar8 == pUVar6) break;
    if ((*(int *)pFVar8 == iVar7) && (*(int *)(pFVar8 + 4) == iVar5)) {
      local_res18[0] = *(int *)(pFVar8 + 8);
LAB_14a414f40:
      *in_RDX = local_res18[0];
      return (FControlRigTrackTokenFloat)SUB84(in_RDX,0);
    }
    pFVar8 = pFVar8 + 0xc;
  }
  (**(code **)(this->Actuator->_padding_ + 0x28))
            (this->Actuator,local_res18,this->AnimatingObject,this->Player);
  if (this->Player != (IMovieScenePlayer *)0x0) {
    pTVar3 = this->Actuator;
    piVar1 = &(pTVar3->InitialValues).ArrayMax;
    iVar5 = (pTVar3->InitialValues).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(pTVar3->InitialValues).AllocatorInstance,piVar1);
    }
    (pTVar3->InitialValues).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar3->InitialValues).AllocatorInstance.Data;
    *(FWeakObjectPtr *)(pFVar8 + (longlong)iVar5 * 0xc) = FVar4;
    *(int *)(pFVar8 + (longlong)iVar5 * 0xc + 8) = local_res18[0];
  }
  goto LAB_14a414f40;
}

// GetInitialValue @ 14a414f70

FControlRigTrackTokenTransform * __thiscall
TMovieSceneInitialValueStore<FControlRigTrackTokenTransform>::GetInitialValue
          (TMovieSceneInitialValueStore<FControlRigTrackTokenTransform> *this,
          FControlRigTrackTokenTransform *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FWeakObjectPtr FVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  
  pUVar3 = this->AnimatingObject;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar10 = 0;
  iVar13 = iVar10;
  if (pUVar3 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    iVar10 = local_res8.ObjectSerialNumber;
    iVar13 = local_res8.ObjectIndex;
  }
  FVar9 = local_res8;
  pTVar4 = this->Actuator;
  iVar2 = (pTVar4->InitialValues).ArrayNum;
  uVar12 = (ulonglong)iVar2;
  pFVar14 = (pTVar4->InitialValues).AllocatorInstance.Data;
  local_res18[0] = (UObject *)CONCAT44(local_res18[0]._4_4_,iVar2);
  pFVar15 = pFVar14 + uVar12 * 0x50;
  while( true ) {
    if ((pTVar4->InitialValues).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenTransform>::FInitialValue,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      uVar12 = (ulonglong)local_res18[0] & 0xffffffff;
    }
    if (pFVar14 == pFVar15) break;
    if ((*(int *)pFVar14 == iVar13) && (*(int *)(pFVar14 + 4) == iVar10)) {
      dVar5 = *(double *)(pFVar14 + 0x10);
      dVar6 = *(double *)(pFVar14 + 0x18);
      dVar7 = *(double *)(pFVar14 + 0x20);
      (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = *(double *)(pFVar14 + 8);
      (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = dVar5;
      dVar5 = *(double *)(pFVar14 + 0x28);
      dVar8 = *(double *)(pFVar14 + 0x30);
      (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = dVar6;
      (__return_storage_ptr__->Value).Rotation.Pitch = dVar7;
      local_58 = *(int *)(pFVar14 + 0x38);
      iStack_54 = *(int *)(pFVar14 + 0x3c);
      iStack_50 = *(int *)(pFVar14 + 0x40);
      iStack_4c = *(int *)(pFVar14 + 0x44);
      (__return_storage_ptr__->Value).Rotation.Yaw = dVar5;
      (__return_storage_ptr__->Value).Rotation.Roll = dVar8;
      uVar16 = (undefined4)*(undefined8 *)(pFVar14 + 0x48);
      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(pFVar14 + 0x48) >> 0x20);
LAB_14a41512f:
      *(int *)&(__return_storage_ptr__->Value).Scale.field0_0x0 = local_58;
      *(int *)((longlong)&(__return_storage_ptr__->Value).Scale.field0_0x0 + 4) = iStack_54;
      *(int *)((longlong)&(__return_storage_ptr__->Value).Scale.field0_0x0 + 8) = iStack_50;
      *(int *)((longlong)&(__return_storage_ptr__->Value).Scale.field0_0x0 + 0xc) = iStack_4c;
      (__return_storage_ptr__->Value).Scale.field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
      return __return_storage_ptr__;
    }
    pFVar14 = pFVar14 + 0x50;
  }
  (**(code **)(this->Actuator->_padding_ + 0x28))
            (this->Actuator,&local_88,this->AnimatingObject,this->Player);
  if (this->Player != (IMovieScenePlayer *)0x0) {
    pTVar4 = this->Actuator;
    piVar1 = &(pTVar4->InitialValues).ArrayMax;
    iVar10 = (pTVar4->InitialValues).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&(pTVar4->InitialValues).AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar10;
    (pTVar4->InitialValues).ArrayNum = iVar10 + 1;
    pFVar14 = (pTVar4->InitialValues).AllocatorInstance.Data;
    *(FWeakObjectPtr *)(pFVar14 + lVar11 * 0x50) = FVar9;
    *(double *)(pFVar14 + lVar11 * 0x50 + 8) = local_88;
    *(double *)(pFVar14 + lVar11 * 0x50 + 8 + 8) = dStack_80;
    *(double *)(pFVar14 + lVar11 * 0x50 + 0x18) = local_78;
    *(double *)(pFVar14 + lVar11 * 0x50 + 0x18 + 8) = dStack_70;
    *(double *)(pFVar14 + lVar11 * 0x50 + 0x28) = local_68;
    *(double *)(pFVar14 + lVar11 * 0x50 + 0x28 + 8) = dStack_60;
    *(ulonglong *)(pFVar14 + lVar11 * 0x50 + 0x38) = CONCAT44(iStack_54,local_58);
    *(ulonglong *)(pFVar14 + lVar11 * 0x50 + 0x38 + 8) = CONCAT44(iStack_4c,iStack_50);
    *(undefined8 *)(pFVar14 + lVar11 * 0x50 + 0x48) = local_48;
  }
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.X = local_88;
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Y = dStack_80;
  (__return_storage_ptr__->Value).Location.field0_0x0._s_0.Z = local_78;
  (__return_storage_ptr__->Value).Rotation.Pitch = dStack_70;
  (__return_storage_ptr__->Value).Rotation.Yaw = local_68;
  (__return_storage_ptr__->Value).Rotation.Roll = dStack_60;
  uVar16 = (undefined4)local_48;
  uVar17 = (undefined4)((ulonglong)local_48 >> 0x20);
  goto LAB_14a41512f;
}

// GetInitialValue @ 14a415160

FControlRigTrackTokenVector2D * __thiscall
TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D>::GetInitialValue
          (TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D> *this,
          FControlRigTrackTokenVector2D *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *pTVar3;
  FWeakObjectPtr FVar4;
  int iVar5;
  UObject *pUVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  pUVar6 = this->AnimatingObject;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar5 = 0;
  iVar7 = iVar5;
  if (pUVar6 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    iVar5 = local_res8.ObjectSerialNumber;
    iVar7 = local_res8.ObjectIndex;
  }
  FVar4 = local_res8;
  pTVar3 = this->Actuator;
  iVar2 = (pTVar3->InitialValues).ArrayNum;
  pFVar8 = (pTVar3->InitialValues).AllocatorInstance.Data;
  pUVar6 = (UObject *)(pFVar8 + (longlong)iVar2 * 0x18);
  local_res18[0] = pUVar6;
  while( true ) {
    if ((pTVar3->InitialValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D>::FInitialValue,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      pUVar6 = local_res18[0];
    }
    if ((UObject *)pFVar8 == pUVar6) break;
    if ((*(int *)pFVar8 == iVar7) && (*(int *)(pFVar8 + 4) == iVar5)) {
      local_48 = *(int *)(pFVar8 + 8);
      iStack_44 = *(int *)(pFVar8 + 0xc);
      iStack_40 = *(int *)(pFVar8 + 0x10);
      iStack_3c = *(int *)(pFVar8 + 0x14);
LAB_14a415294:
      *(int *)&(__return_storage_ptr__->Value).field0_0x0 = local_48;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = iStack_44;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = iStack_40;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = iStack_3c;
      return __return_storage_ptr__;
    }
    pFVar8 = pFVar8 + 0x18;
  }
  (**(code **)(this->Actuator->_padding_ + 0x28))
            (this->Actuator,&local_48,this->AnimatingObject,this->Player);
  if (this->Player != (IMovieScenePlayer *)0x0) {
    pTVar3 = this->Actuator;
    piVar1 = &(pTVar3->InitialValues).ArrayMax;
    iVar5 = (pTVar3->InitialValues).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(pTVar3->InitialValues).AllocatorInstance,piVar1);
    }
    (pTVar3->InitialValues).ArrayNum = iVar5 + 1;
    pFVar8 = (pTVar3->InitialValues).AllocatorInstance.Data;
    *(FWeakObjectPtr *)(pFVar8 + (longlong)iVar5 * 0x18) = FVar4;
    pFVar8 = pFVar8 + (longlong)iVar5 * 0x18 + 8;
    *(ulonglong *)pFVar8 = CONCAT44(iStack_44,local_48);
    *(ulonglong *)(pFVar8 + 8) = CONCAT44(iStack_3c,iStack_40);
  }
  goto LAB_14a415294;
}

// GetInitialValue @ 14a4152c0

FControlRigTrackTokenVector * __thiscall
TMovieSceneInitialValueStore<FControlRigTrackTokenVector>::GetInitialValue
          (TMovieSceneInitialValueStore<FControlRigTrackTokenVector> *this,
          FControlRigTrackTokenVector *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  double local_48;
  
  pUVar3 = this->AnimatingObject;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar6 = 0;
  iVar9 = iVar6;
  if (pUVar3 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    iVar6 = local_res8.ObjectSerialNumber;
    iVar9 = local_res8.ObjectIndex;
  }
  FVar5 = local_res8;
  pTVar4 = this->Actuator;
  iVar2 = (pTVar4->InitialValues).ArrayNum;
  uVar7 = (ulonglong)iVar2;
  pFVar10 = (pTVar4->InitialValues).AllocatorInstance.Data;
  pFVar11 = pFVar10 + uVar7 * 0x20;
  local_res18[0] = (UObject *)CONCAT44(local_res18[0]._4_4_,iVar2);
  while( true ) {
    if ((pTVar4->InitialValues).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenVector>::FInitialValue,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      uVar7 = (ulonglong)local_res18[0] & 0xffffffff;
    }
    if (pFVar10 == pFVar11) break;
    if ((*(int *)pFVar10 == iVar9) && (*(int *)(pFVar10 + 4) == iVar6)) {
      local_58 = *(int *)(pFVar10 + 8);
      iStack_54 = *(int *)(pFVar10 + 0xc);
      iStack_50 = *(int *)(pFVar10 + 0x10);
      iStack_4c = *(int *)(pFVar10 + 0x14);
      local_48 = *(double *)(pFVar10 + 0x18);
LAB_14a415430:
      *(int *)&(__return_storage_ptr__->Value).field0_0x0 = local_58;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = iStack_54;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = iStack_50;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = iStack_4c;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = local_48;
      return __return_storage_ptr__;
    }
    pFVar10 = pFVar10 + 0x20;
  }
  (**(code **)(this->Actuator->_padding_ + 0x28))
            (this->Actuator,&local_58,this->AnimatingObject,this->Player);
  if (this->Player != (IMovieScenePlayer *)0x0) {
    pTVar4 = this->Actuator;
    piVar1 = &(pTVar4->InitialValues).ArrayMax;
    iVar6 = (pTVar4->InitialValues).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(pTVar4->InitialValues).AllocatorInstance,piVar1);
    }
    (pTVar4->InitialValues).ArrayNum = iVar6 + 1;
    pFVar10 = (pTVar4->InitialValues).AllocatorInstance.Data;
    lVar8 = (longlong)iVar6 * 0x20;
    *(FWeakObjectPtr *)(pFVar10 + lVar8) = FVar5;
    *(ulonglong *)(pFVar10 + lVar8 + 8) = CONCAT44(iStack_54,local_58);
    *(ulonglong *)(pFVar10 + lVar8 + 8 + 8) = CONCAT44(iStack_4c,iStack_50);
    *(double *)(pFVar10 + lVar8 + 0x18) = local_48;
  }
  goto LAB_14a415430;
}

