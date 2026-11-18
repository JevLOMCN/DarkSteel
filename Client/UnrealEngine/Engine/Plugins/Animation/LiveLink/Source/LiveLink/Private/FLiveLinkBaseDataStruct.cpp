// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 7

// Cast<FLiveLinkAnimationFrameData> @ 14cffb6c0

FLiveLinkAnimationFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkAnimationFrameData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  
  pFVar3 = (FLiveLinkAnimationFrameData *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = FLiveLinkAnimationFrameData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar3;
        }
      }
    }
  }
  return (FLiveLinkAnimationFrameData *)0x0;
}

// Cast<FLiveLinkLocatorFrameData> @ 14cffb760

FLiveLinkLocatorFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkLocatorFrameData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  
  pFVar3 = (FLiveLinkLocatorFrameData *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = FLiveLinkLocatorFrameData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar3;
        }
      }
    }
  }
  return (FLiveLinkLocatorFrameData *)0x0;
}

// Cast<FLiveLinkSkeletonStaticData> @ 14cffb800

FLiveLinkSkeletonStaticData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkSkeletonStaticData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkSkeletonStaticData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  
  pFVar3 = (FLiveLinkSkeletonStaticData *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = FLiveLinkSkeletonStaticData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar3;
        }
      }
    }
  }
  return (FLiveLinkSkeletonStaticData *)0x0;
}

// Cast<FLiveLinkTransformFrameData> @ 14cffb8a0

FLiveLinkTransformFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkTransformFrameData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  
  pFVar3 = (FLiveLinkTransformFrameData *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = FLiveLinkTransformFrameData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar3;
        }
      }
    }
  }
  return (FLiveLinkTransformFrameData *)0x0;
}

// Cast<FLiveLinkTransformStaticData> @ 14cffb940

FLiveLinkTransformStaticData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::Cast<FLiveLinkTransformStaticData>
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  int iVar1;
  bool bVar2;
  FLiveLinkTransformStaticData *pFVar3;
  longlong lVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  
  pFVar3 = (FLiveLinkTransformStaticData *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))();
  lVar4 = (**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (lVar4 != 0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = FLiveLinkTransformStaticData::StaticStruct();
      if (pUVar6 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar3;
        }
      }
    }
  }
  return (FLiveLinkTransformStaticData *)0x0;
}

// InitializeWith @ 14d05d200

void __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FWeakObjectPtr FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  UScriptStruct *this_00;
  void *pvVar7;
  void *pvVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar4 = (UObject *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (pUVar4 == (UObject *)0x0) {
LAB_14d05d243:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14d05d243;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar3 = local_res8;
  (**(code **)((this->WrappedStruct)._padding_ + 0x40))(this);
  puVar2 = (undefined8 *)(this->WrappedStruct)._padding_;
  (this->WrappedStruct).ScriptStruct.WeakPtr = FVar3;
  (*(code *)*puVar2)(this);
  lVar6 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if (lVar6 == 0) {
    return;
  }
  this_00 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (this_00 != (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14d05d2f5;
  }
  this_00 = (UScriptStruct *)0x0;
LAB_14d05d2f5:
  pvVar7 = (void *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  pvVar8 = (void *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))(this);
  UScriptStruct::CopyScriptStruct(this_00,pvVar8,pvVar7,1);
  return;
}

// InitializeWith @ 14d05d340

void __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::InitializeWith
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FWeakObjectPtr FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  UScriptStruct *this_00;
  void *pvVar7;
  void *pvVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar4 = (UObject *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (pUVar4 == (UObject *)0x0) {
LAB_14d05d383:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14d05d383;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  FVar3 = local_res8;
  (**(code **)((this->WrappedStruct)._padding_ + 0x40))(this);
  puVar2 = (undefined8 *)(this->WrappedStruct)._padding_;
  (this->WrappedStruct).ScriptStruct.WeakPtr = FVar3;
  (*(code *)*puVar2)(this);
  lVar6 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if (lVar6 == 0) {
    return;
  }
  this_00 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))(this);
  if (this_00 != (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14d05d435;
  }
  this_00 = (UScriptStruct *)0x0;
LAB_14d05d435:
  pvVar7 = (void *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  pvVar8 = (void *)(**(code **)((this->WrappedStruct)._padding_ + 0x18))(this);
  UScriptStruct::CopyScriptStruct(this_00,pvVar8,pvVar7,1);
  return;
}

