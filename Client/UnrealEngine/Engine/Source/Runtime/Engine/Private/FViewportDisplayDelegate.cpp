// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FViewportDisplayDelegate @ 147bba7c0

FViewportDisplayDelegate * __thiscall
FViewportDisplayDelegate::FViewportDisplayDelegate
          (FViewportDisplayDelegate *this,FViewportDisplayDelegate *param_1)

{
  undefined8 uVar1;
  FReadAccessScope local_28;
  
  *(undefined8 *)&this->FuncDynDelegate = 0;
  *(undefined8 *)&(this->FuncDynDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->FuncDynDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  *(undefined8 *)&(this->FuncDynDelegate).field_0x8 =
       *(undefined8 *)&(param_1->FuncDynDelegate).field_0x8;
  *(undefined8 *)&(this->FuncDynDelegate).field_0x10 =
       *(undefined8 *)&(param_1->FuncDynDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->FuncCallback = *(undefined8 *)&param_1->FuncCallback;
  *(undefined8 *)&(this->FuncCallback).field_0x28 =
       *(undefined8 *)&(param_1->FuncCallback).field_0x28;
  *(undefined8 *)&(param_1->FuncCallback).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->FuncCallback).field_0x18;
  *(undefined8 *)&(this->FuncCallback).field_0x10 =
       *(undefined8 *)&(param_1->FuncCallback).field_0x10;
  *(undefined8 *)&(this->FuncCallback).field_0x18 = uVar1;
  *(undefined8 *)&(this->FuncCallback).field_0x20 =
       *(undefined8 *)&(param_1->FuncCallback).field_0x20;
  if (*(longlong *)&this->FuncCallback != 0) {
    *(undefined8 *)&param_1->FuncCallback = 0;
  }
  return this;
}

// Execute @ 147bda400

bool __thiscall
FViewportDisplayDelegate::Execute
          (FViewportDisplayDelegate *this,FText *param_1,FLinearColor *param_2)

{
  ITextData *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined1 local_res8 [8];
  FText local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  char local_18;
  
  bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this);
  if (bVar5) {
    FText::FText(&local_38);
    TVar4.Reference = local_38.TextData.Reference;
    pIVar1 = (param_1->TextData).Reference;
    local_18 = '\0';
    if (local_38.TextData.Reference != pIVar1) {
      local_38.TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (TVar4.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
      }
    }
    local_28 = *(undefined8 *)&param_2->field0_0x0;
    uStack_20 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_38.Flags = param_1->Flags;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_38);
    pIVar1 = (param_1->TextData).Reference;
    if (pIVar1 != local_38.TextData.Reference) {
      (param_1->TextData).Reference = local_38.TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 8))
                  (local_38.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    uVar8 = local_18 != '\0';
    param_1->Flags = local_38.Flags;
    (param_2->field0_0x0)._s_0.R = (float)local_28;
    (param_2->field0_0x0)._s_0.G = local_28._4_4_;
    (param_2->field0_0x0)._s_0.B = (float)uStack_20;
    (param_2->field0_0x0)._s_0.A = uStack_20._4_4_;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
    }
  }
  else if (*(void **)&this->FuncCallback == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->FuncCallback);
    plVar2 = *(longlong **)&(this->FuncCallback).field_0x28;
    pcVar3 = *(code **)&this->FuncCallback;
    plVar7 = (longlong *)&(this->FuncCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    uVar8 = (*pcVar3)(uVar6,param_1,param_2);
  }
  return (bool)uVar8;
}

// Unbind @ 147c08cf0

void __thiscall FViewportDisplayDelegate::Unbind(FViewportDisplayDelegate *this)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_28);
  local_res8 = 0;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&(this->FuncDynDelegate).field_0x8,(FObjectPtr)&local_res8);
  local_res8 = 0;
  *(undefined8 *)&(this->FuncDynDelegate).field_0x10 = 0;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (*(longlong *)&this->FuncCallback != 0) {
    plVar1 = *(longlong **)&(this->FuncCallback).field_0x28;
    plVar2 = (longlong *)&(this->FuncCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)&this->FuncCallback = 0;
  }
  return;
}

