// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 19

// FWindowsUIAWindowProvider @ 1423c5260

FWindowsUIAWindowProvider * __thiscall
FWindowsUIAWindowProvider::FWindowsUIAWindowProvider
          (FWindowsUIAWindowProvider *this,FWindowsUIAManager *param_1,
          TSharedRef<IAccessibleWidget,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FWindowsUIAWindowProvider *pFVar4;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWindowsUIAWidgetProvider::FWindowsUIAWidgetProvider
            ((FWindowsUIAWidgetProvider *)this,param_1,&local_18);
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IRawElementProviderSimple__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRawElementProviderFragment__;
  *(undefined ***)&this->field_0x38 = &___7FWindowsUIAWindowProvider__6B_;
  lVar3 = (**(code **)(*(longlong *)param_2->Object + 0xc0))();
  if (lVar3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4163973379042311337>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIAWidgetProvider.cpp"
                       ,0x357,"InWidget->AsWindow() != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWindowsUIAWindowProvider *)(*pcVar1)();
      return pFVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWindowsUIAWindowProvider @ 1423c79f0

void __thiscall
FWindowsUIAWindowProvider::~FWindowsUIAWindowProvider(FWindowsUIAWindowProvider *this)

{
  *(undefined ***)this = &_vftable__for__FWindowsUIABaseProvider__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IRawElementProviderSimple__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IRawElementProviderFragment__;
  *(undefined ***)&this->field_0x38 = &___7FWindowsUIAWindowProvider__6B_;
  FWindowsUIAWidgetProvider::~FWindowsUIAWidgetProvider((FWindowsUIAWidgetProvider *)this);
  return;
}

// operator() @ 1423c8a00

void __thiscall
`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  undefined1 *puVar6;
  IAccessibleWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
      (**(code **)(*plVar4 + 8))
                (plVar4,&local_28,(int)**(double **)((longlong)this + 0x18),
                 (int)**(double **)((longlong)this + 0x20));
      if (local_28 == (IAccessibleWidget *)0x0) {
        *(undefined8 *)**(undefined8 **)((longlong)this + 0x10) = 0;
      }
      else {
        this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_18.Object = local_28;
        local_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar5 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_18);
        puVar6 = &pFVar5->field_0x30;
        if (pFVar5 == (FWindowsUIAWidgetProvider *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        *(undefined1 **)**(undefined8 **)((longlong)this + 0x10) = puVar6;
      }
      **(undefined4 **)((longlong)this + 8) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// operator() @ 1423c8e90

void __thiscall `FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsUIAManager *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FWindowsUIAWidgetProvider *pFVar5;
  undefined1 *puVar6;
  IAccessibleWidget *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  *(undefined8 *)**(undefined8 **)((longlong)this + 0x10) = 0;
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
    if (cVar2 != '\0') {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28,0);
      if (local_28 != (IAccessibleWidget *)0x0) {
        this_00 = *(FWindowsUIAManager **)(*(longlong *)this + 8);
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_18.Object = local_28;
        local_18.SharedReferenceCount.ReferenceController = pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_28 == (IAccessibleWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar5 = FWindowsUIAManager::GetWidgetProvider(this_00,&local_18);
        puVar6 = &pFVar5->field_0x30;
        if (pFVar5 == (FWindowsUIAWidgetProvider *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        *(undefined1 **)**(undefined8 **)((longlong)this + 0x10) = puVar6;
      }
      **(undefined4 **)((longlong)this + 8) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
    }
  }
  return;
}

// operator() @ 1423c9170

void __thiscall
`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>::operator()(void *this)

{
  T_HRESULT *pTVar1;
  char cVar2;
  T_HRESULT TVar3;
  FWindowsUIAControlProvider *pFVar4;
  FWindowsUIAControlProvider *pFVar5;
  TSharedRef<IAccessibleWidget,1> local_18;
  
  if ((*(longlong *)(*(longlong *)this + 8) != 0) &&
     (cVar2 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))(), cVar2 != '\0')) {
    if (**(int **)((longlong)this + 0x10) != 0x2719) {
      pTVar1 = *(T_HRESULT **)((longlong)this + 8);
      TVar3 = FWindowsUIAWidgetProvider::GetPatternProvider
                        ((FWindowsUIAWidgetProvider *)(*(longlong *)this + 0x28),
                         **(int **)((longlong)this + 0x10),
                         (IUnknown **)**(undefined8 **)((longlong)this + 0x18));
      *pTVar1 = TVar3;
      return;
    }
    pFVar4 = ::operator_new(0x70);
    pFVar5 = (FWindowsUIAControlProvider *)0x0;
    if (pFVar4 != (FWindowsUIAControlProvider *)0x0) {
      local_18.Object = *(IAccessibleWidget **)(*(longlong *)this + 0x10);
      local_18.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x18);
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar5 = FWindowsUIAControlProvider::FWindowsUIAControlProvider
                         (pFVar4,*(FWindowsUIAManager **)(*(longlong *)this + 8),&local_18);
    }
    pFVar4 = (FWindowsUIAControlProvider *)&pFVar5->field_0x58;
    if (pFVar5 == (FWindowsUIAControlProvider *)0x0) {
      pFVar4 = (FWindowsUIAControlProvider *)0x0;
    }
    *(FWindowsUIAControlProvider **)**(undefined8 **)((longlong)this + 0x18) = pFVar4;
    **(undefined4 **)((longlong)this + 8) = 0;
  }
  return;
}

// operator() @ 1423cabc0

void __thiscall
`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>::operator()(void *this)

{
  HRESULT *pHVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  HRESULT HVar5;
  undefined8 *puVar6;
  HWND hwnd;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))();
  if (cVar3 != '\0') {
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0xc0))();
    (**(code **)*puVar6)(puVar6,&local_18);
    if (local_18 != (longlong *)0x0) {
      if ((local_18 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      hwnd = (HWND)(**(code **)(*local_18 + 0xc0))();
      if (hwnd != (HWND)0x0) {
        pHVar1 = *(HRESULT **)((longlong)this + 8);
        HVar5 = UiaHostProviderFromHwnd
                          (hwnd,(IRawElementProviderSimple **)
                                **(undefined8 **)((longlong)this + 0x10));
        *pHVar1 = HVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
        return;
      }
    }
    **(undefined4 **)((longlong)this + 8) = 0x80131509;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// AddRef @ 1423d0240

ulong __thiscall FWindowsUIAWindowProvider::AddRef(FWindowsUIAWindowProvider *this)

{
  *(int *)&this[-1].field_0x38 = *(int *)&this[-1].field_0x38 + 1;
  return *(ulong *)&this[-1].field_0x38;
}

// AddRef`adjustor{8}' @ 1423d0250

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWindowProvider::AddRef`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWindowProvider::AddRef_adjustor_8__(FWindowsUIAWindowProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAWindowProvider *)&this[-1].field_0x38);
  return uVar1;
}

// AddRef`adjustor{16}' @ 1423d0260

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWindowProvider::AddRef`adjustor{16}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWindowProvider::AddRef_adjustor_16__(FWindowsUIAWindowProvider *this)

{
  ulong uVar1;
  
  uVar1 = AddRef((FWindowsUIAWindowProvider *)&this[-1].field_0x30);
  return uVar1;
}

// ElementProviderFromPoint @ 1423dad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWindowProvider::ElementProviderFromPoint
          (FWindowsUIAWindowProvider *this,double param_1,double param_2,
          IRawElementProviderFragment **param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  double local_res10;
  double local_res18;
  IRawElementProviderFragment **local_res20;
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_20 = FMemory::Malloc(0x30,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)&local_res20;
  local_20[4] = (longlong)&local_res10;
  local_20[5] = (longlong)&local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWindowProvider::ElementProviderFromPoint'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetFocus @ 1423de900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWindowProvider::GetFocus
          (FWindowsUIAWindowProvider *this,IRawElementProviderFragment **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRawElementProviderFragment **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x10;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetFocus'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_20[1] = (longlong)&this[-1].field_0x8;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWindowProvider::GetFocus'::__l2::<lambda_1>,void>::
                  Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// GetPatternProvider @ 1423e1000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWindowProvider::GetPatternProvider
          (FWindowsUIAWindowProvider *this,int param_1,IUnknown **param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  int local_res10 [2];
  IUnknown **local_res18 [2];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_20 = FMemory::Malloc(0x28,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWindowProvider::GetPatternProvider'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  local_20[4] = (longlong)local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWindowProvider::GetPatternProvider'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

// QueryInterface @ 1423fd4d0

undefined4 __thiscall
FWindowsUIAWindowProvider::QueryInterface
          (FWindowsUIAWindowProvider *this,_GUID *param_1,void **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  FWindowsUIAWindowProvider *pFVar6;
  
  lVar1._0_4_ = param_1->Data1;
  lVar1._4_2_ = param_1->Data2;
  lVar1._6_2_ = param_1->Data3;
  if ((lVar1 == _GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58._0_8_) &&
     (*(longlong *)param_1->Data4 == _GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58._8_8_)) {
    pvVar5 = &this->field_0x10;
    if (this == (FWindowsUIAWindowProvider *)&DAT_00000028) {
      pvVar5 = (void *)0x0;
    }
    *param_2 = pvVar5;
    (**(code **)(*(longlong *)this + 8))(this);
    return 0;
  }
  lVar2._0_4_ = param_1->Data1;
  lVar2._4_2_ = param_1->Data2;
  lVar2._6_2_ = param_1->Data3;
  pFVar6 = this;
  if (((lVar2 != _GUID_00000000_0000_0000_c000_000000000046._0_8_) ||
      (*(longlong *)param_1->Data4 != _GUID_00000000_0000_0000_c000_000000000046._8_8_)) &&
     ((lVar3._0_4_ = param_1->Data1, lVar3._4_2_ = param_1->Data2, lVar3._6_2_ = param_1->Data3,
      lVar3 != _GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c._0_8_ ||
      (*(longlong *)param_1->Data4 != _GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c._8_8_)))) {
    lVar4._0_4_ = param_1->Data1;
    lVar4._4_2_ = param_1->Data2;
    lVar4._6_2_ = param_1->Data3;
    if ((lVar4 != _GUID_f7063da8_8359_439c_9297_bbc5299a7d87._0_8_) ||
       (*(longlong *)param_1->Data4 != _GUID_f7063da8_8359_439c_9297_bbc5299a7d87._8_8_)) {
      *param_2 = (void *)0x0;
      return 0x80004002;
    }
    pFVar6 = (FWindowsUIAWindowProvider *)&this->field_0x8;
  }
  if (this == (FWindowsUIAWindowProvider *)&DAT_00000028) {
    pFVar6 = (FWindowsUIAWindowProvider *)0x0;
  }
  *param_2 = pFVar6;
  if (pFVar6 == (FWindowsUIAWindowProvider *)0x0) {
    return 0x80004002;
  }
  (**(code **)(*(longlong *)this + 8))(this);
  return 0;
}

// QueryInterface`adjustor{8}' @ 1423fd5b0

/* [thunk]:public: virtual long __cdecl FWindowsUIAWindowProvider::QueryInterface`adjustor{8}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAWindowProvider::QueryInterface_adjustor_8__
          (FWindowsUIAWindowProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAWindowProvider *)&this[-1].field_0x38,(_GUID *)param_1,param_2)
  ;
  return lVar1;
}

// QueryInterface`adjustor{16}' @ 1423fd5c0

/* [thunk]:public: virtual long __cdecl FWindowsUIAWindowProvider::QueryInterface`adjustor{16}'
   (struct _GUID const & __ptr64,void * __ptr64 * __ptr64) __ptr64 */

long __thiscall
FWindowsUIAWindowProvider::QueryInterface_adjustor_16__
          (FWindowsUIAWindowProvider *this,_GUID *param_1,void **param_2)

{
  long lVar1;
  
  lVar1 = QueryInterface((FWindowsUIAWindowProvider *)&this[-1].field_0x30,(_GUID *)param_1,param_2)
  ;
  return lVar1;
}

// Release @ 142400290

ulong __thiscall FWindowsUIAWindowProvider::Release(FWindowsUIAWindowProvider *this)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(int *)&this[-1].field_0x38 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6951043228682420265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ApplicationCore\\Private\\Windows\\Accessibility\\WindowsUIABaseProvider.cpp"
                       ,0x29,"RefCount > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = *(int *)&this[-1].field_0x38 - 1;
  *(ulong *)&this[-1].field_0x38 = uVar3;
  if (uVar3 == 0) {
    (*(code *)**(undefined8 **)&this[-1].field_0x18)(&this[-1].field_0x18,1);
    uVar3 = 0;
  }
  return uVar3;
}

// Release`adjustor{8}' @ 1424002f4

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWindowProvider::Release`adjustor{8}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWindowProvider::Release_adjustor_8__(FWindowsUIAWindowProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAWindowProvider *)&this[-1].field_0x38);
  return uVar1;
}

// Release`adjustor{16}' @ 142400304

/* [thunk]:public: virtual unsigned long __cdecl FWindowsUIAWindowProvider::Release`adjustor{16}'
   (void) __ptr64 */

ulong __thiscall FWindowsUIAWindowProvider::Release_adjustor_16__(FWindowsUIAWindowProvider *this)

{
  ulong uVar1;
  
  uVar1 = Release((FWindowsUIAWindowProvider *)&this[-1].field_0x30);
  return uVar1;
}

// get_HostRawElementProvider @ 14240d780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FWindowsUIAWindowProvider::get_HostRawElementProvider
          (FWindowsUIAWindowProvider *this,IRawElementProviderSimple **param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  IRawElementProviderSimple **local_res10 [3];
  undefined1 auStack_78 [32];
  undefined4 local_58 [4];
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)&this[-1].field_0x20;
  local_58[0] = 0x80040201;
  local_48[0] = (code *)0x0;
  local_res10[0] = param_1;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = (longlong)&this[-1].field_0x18;
  local_20[2] = (longlong)local_58;
  local_20[3] = (longlong)local_res10;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FWindowsUIAWindowProvider::get_HostRawElementProvider'::__l2::<lambda_1>,void>
                  ::Call;
  }
  lVar1 = *(longlong *)(lVar1 + 0xa0);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x30);
  plVar3 = *(longlong **)(lVar1 + 0x28);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return local_58[0];
}

