// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 8

// TSharedPtr<ICursor,1><FNullCursor> @ 1423b8e80

TSharedPtr<ICursor,1> * __thiscall
TSharedPtr<ICursor,1>::TSharedPtr<ICursor,1><FNullCursor>
          (TSharedPtr<ICursor,1> *this,TRawPtrProxy<FNullCursor> *param_1)

{
  FNullCursor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ICursor *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNullCursor__U__DefaultDeleter_VFNullCursor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<ICursor,1><FWindowsCursor> @ 1423b9030

TSharedPtr<ICursor,1> * __thiscall
TSharedPtr<ICursor,1>::TSharedPtr<ICursor,1><FWindowsCursor>
          (TSharedPtr<ICursor,1> *this,TRawPtrProxy<FWindowsCursor> *param_1)

{
  FWindowsCursor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ICursor *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWindowsCursor__U__DefaultDeleter_VFWindowsCursor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FWindowsTextInputMethodSystem> @ 1423b9260

TSharedPtr<FWindowsTextInputMethodSystem,1> * __thiscall
TSharedPtr<FWindowsTextInputMethodSystem,1>::operator=<FWindowsTextInputMethodSystem>
          (TSharedPtr<FWindowsTextInputMethodSystem,1> *this,
          TRawPtrProxy<FWindowsTextInputMethodSystem> *param_1)

{
  FWindowsTextInputMethodSystem *pFVar1;
  TSharedPtr<FWindowsTextInputMethodSystem,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWindowsTextInputMethodSystem__U__DefaultDeleter_VFWindowsTextInputMethodSystem___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FWindowsTextInputMethodSystem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 1423c8020

FGenericWindowDefinition * __thiscall
TSharedPtr<FGenericWindowDefinition,1>::operator->(TSharedPtr<FGenericWindowDefinition,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FGenericWindowDefinition *pFVar3;
  
  if (this->Object != (FGenericWindowDefinition *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGenericWindowDefinition *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1423c8070

FWindowsWindow * __thiscall
TSharedPtr<FWindowsWindow,1>::operator->(TSharedPtr<FWindowsWindow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsWindow *pFVar3;
  
  if (this->Object != (FWindowsWindow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWindowsWindow *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1423c80c0

ITextInputMethodContext * __thiscall
TSharedPtr<ITextInputMethodContext,1>::operator->(TSharedPtr<ITextInputMethodContext,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ITextInputMethodContext *pIVar3;
  
  if (this->Object != (ITextInputMethodContext *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITextInputMethodContext *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 142409e20

TSharedRef<FNullWindow,1> * __thiscall
TSharedPtr<FNullWindow,1>::ToSharedRef
          (TSharedPtr<FNullWindow,1> *this,TSharedRef<FNullWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FNullWindow,1> *pTVar4;
  
  if (this->Object == (FNullWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FNullWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FNullWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FNullWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 142409ec0

TSharedRef<FWindowsWindow,1> * __thiscall
TSharedPtr<FWindowsWindow,1>::ToSharedRef
          (TSharedPtr<FWindowsWindow,1> *this,TSharedRef<FWindowsWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FWindowsWindow,1> *pTVar4;
  
  if (this->Object == (FWindowsWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWindowsWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FWindowsWindow *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FWindowsWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

