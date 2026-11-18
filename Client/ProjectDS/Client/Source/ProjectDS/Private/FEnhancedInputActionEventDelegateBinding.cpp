// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// Clone @ 14b8b8a60

TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
__thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::Clone(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
        *this)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FEnhancedInputActionEventBinding *in_RDX;
  
  puVar4 = ::operator_new(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7FInputBindingHandle__6B_;
    lVar3 = this->_padding_;
    *puVar4 = &___7FEnhancedInputActionEventBinding__6B_;
    *(int *)(puVar4 + 1) = (int)lVar3;
    puVar4[2] = this->_padding_;
    *(char *)(puVar4 + 3) = (char)this->_padding_;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
    *puVar4 = &
              ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(byte *)((longlong)puVar4 + 0x19) =
         *(byte *)((longlong)puVar4 + 0x19) ^ (*(byte *)((longlong)puVar4 + 0x19) ^ bVar1) & 1;
    puVar4[4] = (this->Delegate).Delegate.Object;
    pTVar2 = (this->Delegate).Delegate.SharedReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    in_RDX->_padding_ = (longlong)puVar4;
    return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
          )in_RDX;
}

// Clone @ 14b8b8b20

TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
__thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Clone(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
        *this)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FEnhancedInputActionEventBinding *in_RDX;
  
  puVar4 = ::operator_new(0x38);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7FInputBindingHandle__6B_;
    lVar3 = this->_padding_;
    *puVar4 = &___7FEnhancedInputActionEventBinding__6B_;
    *(int *)(puVar4 + 1) = (int)lVar3;
    puVar4[2] = this->_padding_;
    *(char *)(puVar4 + 3) = (char)this->_padding_;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
    *puVar4 = &
              ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(byte *)((longlong)puVar4 + 0x19) =
         *(byte *)((longlong)puVar4 + 0x19) ^ (*(byte *)((longlong)puVar4 + 0x19) ^ bVar1) & 1;
    puVar4[4] = (this->Delegate).Delegate.Object;
    pTVar2 = (this->Delegate).Delegate.SharedReferenceCount.ReferenceController;
    puVar4[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    *(bool *)(puVar4 + 6) = (this->Delegate).bShouldFireWithEditorScriptGuard;
    in_RDX->_padding_ = (longlong)puVar4;
    return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>
          )in_RDX;
}

// Execute @ 14b8beeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::Execute(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
          *this,FInputActionInstance *param_1)

{
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FInputActionValue *pFVar5;
  FReadAccessScope *this_00;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  FInputActionValue local_28;
  
  pFVar5 = FInputActionInstance::GetValue(param_1,&local_28);
  pTVar1 = (this->Delegate).Delegate.Object;
  local_48 = (pFVar5->Value).field0_0x0._s_0.X;
  dStack_40 = (pFVar5->Value).field0_0x0._s_0.Y;
  local_38 = (pFVar5->Value).field0_0x0._s_0.Z;
  uStack_30 = *(undefined8 *)&pFVar5->ValueType;
  if (pTVar1 == (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_78);
  if (((*(int *)&pTVar1->field_0x10 == 0) || (*(longlong **)&pTVar1->field_0x8 == (longlong *)0x0))
     || (cVar3 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))(), cVar3 == '\0')) {
    this_00 = &local_78;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (((this->Delegate).Delegate.Object ==
         (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = (this->Delegate).Delegate.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_60);
    if (*(int *)&pTVar1->field_0x10 == 0) {
      (**(code **)(_DAT_00000000 + 0x60))(0,&local_48);
      this_00 = &local_60;
    }
    else {
      (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x60))
                (*(longlong **)&pTVar1->field_0x8,&local_48);
      this_00 = &local_60;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return;
}

// Execute @ 14b8befc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *this,FInputActionInstance *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar1 = (this->Delegate).Delegate.Object;
  if (pTVar1 != (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_38);
    if ((*(int *)&pTVar1->field_0x10 != 0) && (*(longlong **)&pTVar1->field_0x8 != (longlong *)0x0))
    {
      cVar3 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if ((this->Delegate).Delegate.Object ==
            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar1 = (this->Delegate).Delegate.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_20);
        if (*(int *)&pTVar1->field_0x10 != 0) {
          (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_20);
          return;
        }
        (**(code **)(_DAT_00000000 + 0x60))();
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return;
}

// GetUObject @ 14b8c8e30

UObject * __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::GetUObject(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
             *this)

{
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UObject *pUVar5;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar1 = (this->Delegate).Delegate.Object;
  if (pTVar1 != (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_38);
    if ((*(int *)&pTVar1->field_0x10 != 0) && (*(longlong **)&pTVar1->field_0x8 != (longlong *)0x0))
    {
      cVar3 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if ((this->Delegate).Delegate.Object ==
            (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pUVar5 = (UObject *)(*pcVar2)();
            return pUVar5;
          }
        }
        pTVar1 = (this->Delegate).Delegate.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_20);
        if ((*(int *)&pTVar1->field_0x10 != 0) &&
           (*(longlong **)&pTVar1->field_0x8 != (longlong *)0x0)) {
          pUVar5 = (UObject *)(**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x10))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_20);
          return pUVar5;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        return (UObject *)0x0;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return (UObject *)0x0;
}

// GetUObject @ 14b8c8f30

UObject * __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
             *this)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UObject *pUVar5;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar1 = (this->Delegate).Delegate.Object;
  if (pTVar1 != (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_38);
    if ((*(int *)&pTVar1->field_0x10 != 0) && (*(longlong **)&pTVar1->field_0x8 != (longlong *)0x0))
    {
      cVar3 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        if ((this->Delegate).Delegate.Object ==
            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pUVar5 = (UObject *)(*pcVar2)();
            return pUVar5;
          }
        }
        pTVar1 = (this->Delegate).Delegate.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_20);
        if ((*(int *)&pTVar1->field_0x10 != 0) &&
           (*(longlong **)&pTVar1->field_0x8 != (longlong *)0x0)) {
          pUVar5 = (UObject *)(**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x10))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_20);
          return pUVar5;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        return (UObject *)0x0;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return (UObject *)0x0;
}

// IsBoundToObject @ 14b8cfbc0

bool __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::IsBoundToObject(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                  *this,void *param_1)

{
  TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FReadAccessScope *this_00;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar1 = (this->Delegate).Delegate.Object;
  if (pTVar1 == (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_20);
  if (((*(int *)&pTVar1->field_0x10 == 0) || (*(longlong **)&pTVar1->field_0x8 == (longlong *)0x0))
     || (cVar4 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))(), cVar4 == '\0')) {
    this_00 = &local_20;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if (((this->Delegate).Delegate.Object ==
         (TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pTVar1 = (this->Delegate).Delegate.Object;
    if (param_1 == (void *)0x0) {
      return false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_38);
    if (((*(int *)&pTVar1->field_0x10 != 0) &&
        (plVar2 = *(longlong **)&pTVar1->field_0x8, plVar2 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return true;
    }
    this_00 = &local_38;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return false;
}

// IsBoundToObject @ 14b8cfcd0

bool __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsBoundToObject(FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *this,void *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  FReadAccessScope *this_00;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pTVar1 = (this->Delegate).Delegate.Object;
  if (pTVar1 == (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_20);
  if (((*(int *)&pTVar1->field_0x10 == 0) || (*(longlong **)&pTVar1->field_0x8 == (longlong *)0x0))
     || (cVar4 = (**(code **)(**(longlong **)&pTVar1->field_0x8 + 0x38))(), cVar4 == '\0')) {
    this_00 = &local_20;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if (((this->Delegate).Delegate.Object ==
         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pTVar1 = (this->Delegate).Delegate.Object;
    if (param_1 == (void *)0x0) {
      return false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar1,&local_38);
    if (((*(int *)&pTVar1->field_0x10 != 0) &&
        (plVar2 = *(longlong **)&pTVar1->field_0x8, plVar2 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1), cVar4 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return true;
    }
    this_00 = &local_38;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return false;
}

// SetShouldFireWithEditorScriptGuard @ 14b8eab00

void __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
::SetShouldFireWithEditorScriptGuard
          (FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
           *this,bool param_1)

{
  (this->Delegate).bShouldFireWithEditorScriptGuard = param_1;
  return;
}

// SetShouldFireWithEditorScriptGuard @ 14b8eab10

void __thiscall
FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
::SetShouldFireWithEditorScriptGuard
          (FEnhancedInputActionEventDelegateBinding<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
           *this,bool param_1)

{
  (this->Delegate).bShouldFireWithEditorScriptGuard = param_1;
  return;
}

