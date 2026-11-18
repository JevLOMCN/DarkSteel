// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// Num @ 1425ac5d0

int __thiscall FNoChildren::Num(FNoChildren *this)

{
  return 0;
}

// GetChildAt @ 1425ac5e0

TSharedRef<SWidget,1> * __thiscall
FNoChildren::GetChildAt(FNoChildren *this,TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0xaa,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1425ac640

TSharedRef<SWidget_const_,1> * __thiscall
FNoChildren::GetChildAt
          (FNoChildren *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0xb2,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSlotAt @ 1425ac6a0

FSlotBase * __thiscall FNoChildren::GetSlotAt(FNoChildren *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0xba,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlotBase *)(*pcVar1)();
    return pFVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FSlotBase::FSlotBase
                ((FSlotBase *)
                 &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
                  ::__l2::NullSlot);
      atexit(`FNoChildren::GetSlotAt'::__l2::_dynamic_atexit_destructor_for__NullSlot__);
      _Init_thread_footer(&`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return (FSlotBase *)
             &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
              ::__l2::NullSlot;
    }
  }
  return (FSlotBase *)
         &`private:_virtual_class_FSlotBase_const&___ptr64___cdecl_FNoChildren::GetSlotAt(int)const___ptr64'
          ::__l2::NullSlot;
}

// GetChildRefAt @ 1425ac760

FWidgetRef * __thiscall
FNoChildren::GetChildRefAt(FNoChildren *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FWidgetRef *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,0xc1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWidgetRef *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->WidgetReference = SNullWidget::NullWidget.Object;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1425ac7c0

FConstWidgetRef * __thiscall
FNoChildren::GetChildRefAt(FNoChildren *this,FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstWidgetRef *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                     ,199,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FConstWidgetRef *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->WidgetReference = SNullWidget::NullWidget.Object;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

