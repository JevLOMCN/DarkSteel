// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// FContainer @ 14d835a90

FContainer * __thiscall
UE::PropertyViewer::Private::FContainer::FContainer
          (FContainer *this,FHandle param_1,TOptional<FText> *param_2,UObject *param_3)

{
  TOptional<FText> *pTVar1;
  UObject *pUVar2;
  ITextData *pIVar3;
  UObject *local_res8;
  undefined1 local_res10 [8];
  
  (this->Identifier).Id = param_1.Id;
  pUVar2 = *(UObject **)&param_3->field_0x10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  (this->Container).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&(this->Container).WeakPtr,(FObjectPtr)&local_res8);
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_3);
  }
  (this->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_3);
  }
  pTVar1 = &this->DisplayName;
  FWeakObjectPtr::operator=(&(this->ObjectInstance).WeakPtr,(FObjectPtr)&local_res8);
  this->StructInstance = (void *)0x0;
  (pTVar1->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->DisplayName).field0_0x0.TypedValue.Flags = 0;
  if ((param_2->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    (pTVar1->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar3 = *(ITextData **)&param_2->field0_0x0;
    (pTVar1->field0_0x0).TypedValue.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
    }
    (this->DisplayName).field0_0x0.TypedValue.Flags = (param_2->field0_0x0).TypedValue.Flags;
  }
  this->bIsObject = true;
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return this;
}

// FContainer @ 14d835ba0

FContainer * __thiscall
UE::PropertyViewer::Private::FContainer::FContainer
          (FContainer *this,FHandle param_1,TOptional<FText> *param_2,UScriptStruct *param_3,
          void *param_4)

{
  ITextData *pIVar1;
  UScriptStruct *local_res8;
  undefined1 local_res10 [8];
  
  (this->Identifier).Id = param_1.Id;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  (this->Container).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->Container).WeakPtr,(FObjectPtr)&local_res8);
  this->StructInstance = param_4;
  (this->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->DisplayName).field0_0x0.TypedValue.Flags = 0;
  if ((param_2->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&param_2->field0_0x0;
    (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    (this->DisplayName).field0_0x0.TypedValue.Flags = (param_2->field0_0x0).TypedValue.Flags;
  }
  this->bIsObject = false;
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return this;
}

// FContainer @ 14d835c70

FContainer * __thiscall
UE::PropertyViewer::Private::FContainer::FContainer
          (FContainer *this,FHandle param_1,TOptional<FText> *param_2,UStruct *param_3)

{
  ITextData *pIVar1;
  UStruct *local_res8;
  undefined1 local_res10 [8];
  
  (this->Identifier).Id = param_1.Id;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  (this->Container).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->Container).WeakPtr,(FObjectPtr)&local_res8);
  (this->ObjectInstance).WeakPtr = (FWeakObjectPtr)0x0;
  this->StructInstance = (void *)0x0;
  (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->DisplayName).field0_0x0.TypedValue.Flags = 0;
  if ((param_2->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    pIVar1 = *(ITextData **)&param_2->field0_0x0;
    (this->DisplayName).field0_0x0.TypedValue.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    (this->DisplayName).field0_0x0.TypedValue.Flags = (param_2->field0_0x0).TypedValue.Flags;
  }
  this->bIsObject = false;
  if (*(longlong **)&param_2->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_2->field0_0x0 + 0x10))();
  }
  return this;
}

// IsValid @ 14d8727b0

bool __thiscall UE::PropertyViewer::Private::FContainer::IsValid(FContainer *this)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->Container).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      if (*(int *)&pUVar2[5].field_0xc < 0) {
        return false;
      }
      if (this->bIsObject == false) {
        return true;
      }
      pUVar4 = FWeakObjectPtr::Get(&(this->ObjectInstance).WeakPtr);
      if (pUVar4 == (UObject *)0x0) {
        return false;
      }
      pUVar4 = FWeakObjectPtr::Get(&(this->ObjectInstance).WeakPtr);
      if (*(UObject **)&pUVar4->field_0x10 != pUVar2) {
        return false;
      }
      return true;
    }
  }
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (bool)(~(byte)(*(uint *)&pUVar2[4].field_0x10 >> 0x17) & 1);
    }
  }
  return false;
}

