// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 10

// DestroyObject @ 1423d96d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericAccessibleMessageHandler>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericAccessibleMessageHandler>,1>
                *this)

{
  FGenericAccessibleMessageHandler *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericAccessibleMessageHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d96e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d96f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericApplicationMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericApplicationMessageHandler>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericApplicationMessageHandler,SharedPointerInternals::DefaultDeleter<FGenericApplicationMessageHandler>,1>
                *this)

{
  FGenericApplicationMessageHandler *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericApplicationMessageHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9710

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericWindow,SharedPointerInternals::DefaultDeleter<FGenericWindow>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericWindow,SharedPointerInternals::DefaultDeleter<FGenericWindow>,1>
                *this)

{
  FGenericWindow *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9730

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullCursor,SharedPointerInternals::DefaultDeleter<FNullCursor>,1>::
DestroyObject(TReferenceControllerWithDeleter<FNullCursor,SharedPointerInternals::DefaultDeleter<FNullCursor>,1>
              *this)

{
  FNullCursor *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNullCursor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9750

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNullWindow,SharedPointerInternals::DefaultDeleter<FNullWindow>,1>::
DestroyObject(TReferenceControllerWithDeleter<FNullWindow,SharedPointerInternals::DefaultDeleter<FNullWindow>,1>
              *this)

{
  FNullWindow *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNullWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9770

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTaskbarList,SharedPointerInternals::DefaultDeleter<FTaskbarList>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTaskbarList,SharedPointerInternals::DefaultDeleter<FTaskbarList>,1>
                *this)

{
  FTaskbarList *pFVar1;
  bool bVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTaskbarList *)0x0) {
    if (pFVar1->TaskBarList3 != (ITaskbarList3 *)0x0) {
      bVar2 = FWindowsPlatformMisc::CoInitialize(Singlethreaded);
      if (bVar2) {
        (**(code **)((longlong)*pFVar1->TaskBarList3 + 0x10))();
      }
    }
    pFVar1->TaskBarList3 = (ITaskbarList3 *)0x0;
    ::operator_delete(pFVar1,8);
    return;
  }
  return;
}

// DestroyObject @ 1423d97c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`anonymous_namespace'::FTextInputMethodChangeNotifier,SharedPointerInternals::DefaultDeleter<`anonymous_namespace'::FTextInputMethodChangeNotifier>,1>
::DestroyObject(TReferenceControllerWithDeleter<_anonymous_namespace_::FTextInputMethodChangeNotifier,SharedPointerInternals::DefaultDeleter<_anonymous_namespace_::FTextInputMethodChangeNotifier>,1>
                *this)

{
  FTextInputMethodChangeNotifier *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextInputMethodChangeNotifier *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d97d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d97e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsCursor,SharedPointerInternals::DefaultDeleter<FWindowsCursor>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWindowsCursor,SharedPointerInternals::DefaultDeleter<FWindowsCursor>,1>
                *this)

{
  FWindowsCursor *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWindowsCursor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d97f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9800

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsTextInputMethodSystem,SharedPointerInternals::DefaultDeleter<FWindowsTextInputMethodSystem>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWindowsTextInputMethodSystem,SharedPointerInternals::DefaultDeleter<FWindowsTextInputMethodSystem>,1>
                *this)

{
  FWindowsTextInputMethodSystem *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWindowsTextInputMethodSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1423d9820

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsWindow,SharedPointerInternals::DefaultDeleter<FWindowsWindow>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWindowsWindow,SharedPointerInternals::DefaultDeleter<FWindowsWindow>,1>
                *this)

{
  FWindowsWindow *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWindowsWindow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423d9831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

