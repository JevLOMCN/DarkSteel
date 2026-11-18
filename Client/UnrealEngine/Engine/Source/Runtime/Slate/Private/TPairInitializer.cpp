// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// operator<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>_TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction> @ 1426e8240

TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction> * __thiscall
TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&>::
operator<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>_TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction>
          (TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIAction_const_&> *this,
          TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIAction> *__return_storage_ptr__)

{
  TSharedPtr<FUICommandInfo_const_,1> *pTVar1;
  FUIAction *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = this->Key;
  pFVar2 = this->Value;
  *(FUICommandInfo **)__return_storage_ptr__ = pTVar1->Object;
  pTVar3 = (pTVar1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x10,&pFVar2->ExecuteAction);
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x28,&pFVar2->CanExecuteAction);
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&__return_storage_ptr__->field_0x40,&pFVar2->GetActionCheckState);
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x68 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x58,&pFVar2->IsActionVisibleDelegate);
  *(EUIActionRepeatMode *)&__return_storage_ptr__->field_0x70 = pFVar2->RepeatMode;
  return __return_storage_ptr__;
}

// operator<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>_TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext> @ 1426e8300

TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext> * __thiscall
TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIActionContext_const_&>::
operator<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>_TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>
          (TPairInitializer<TSharedPtr<FUICommandInfo_const_,1>_const_&,FUIActionContext_const_&>
           *this,TTuple<TSharedPtr<FUICommandInfo_const_,1>_const_,FUIActionContext>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TSharedPtr<FUICommandInfo_const_,1> *pTVar3;
  FUIActionContext *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<IUIActionContextBase,1> *pTVar6;
  
  pTVar3 = this->Key;
  pFVar4 = this->Value;
  *(FUICommandInfo **)__return_storage_ptr__ = pTVar3->Object;
  pTVar5 = (pTVar3->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar4->Contexts).ArrayNum;
  pTVar6 = (TSharedPtr<IUIActionContextBase,1> *)(pFVar4->Contexts).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<TSharedPtr<IUIActionContextBase,1>,TSharedPtr<IUIActionContextBase,1>,int>
              (*(void **)puVar1,pTVar6,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FInputChord,FName>_TTuple<FInputChord,FName> @ 1426e83b0

TTuple<FInputChord,FName> * __thiscall
TPairInitializer<FInputChord_const_&,FName_&&>::
operator<FInputChord,FName>_TTuple<FInputChord,FName>
          (TPairInitializer<FInputChord_const_&,FName_&&> *this,
          TTuple<FInputChord,FName> *__return_storage_ptr__)

{
  FInputChord *pFVar1;
  FName *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  
  pFVar1 = this->Key;
  pFVar2 = this->Value;
  uVar4 = (pFVar1->Key).KeyName.Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->Key).KeyName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(FKeyDetails **)&__return_storage_ptr__->field_0x8 = (pFVar1->Key).KeyDetails.Object;
  pTVar3 = (pFVar1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = (*(uint *)&__return_storage_ptr__->field_0x18 ^ pFVar1->bShift) & 1 ^
          *(uint *)&__return_storage_ptr__->field_0x18;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&pFVar1->field_0x18) & 2 ^ uVar4;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar4;
  uVar4 = (uVar4 ^ *(uint *)&pFVar1->field_0x18) & 4 ^ uVar4;
  *(uint *)&__return_storage_ptr__->field_0x18 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0x18 = (uVar4 ^ *(uint *)&pFVar1->field_0x18) & 8 ^ uVar4;
  uVar4 = pFVar2->Number;
  *(uint *)&__return_storage_ptr__->field_0x20 = (pFVar2->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x24 = uVar4;
  return __return_storage_ptr__;
}

// operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray> @ 1427971a0

TTuple<FName,FCustomizedToolMenuNameArray> * __thiscall
TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&>::
operator<FName,FCustomizedToolMenuNameArray>_TTuple<FName,FCustomizedToolMenuNameArray>
          (TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&> *this,
          TTuple<FName,FCustomizedToolMenuNameArray> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FCustomizedToolMenuNameArray *pFVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pFVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->Names).ArrayNum;
  _Src = (pFVar3->Names).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

