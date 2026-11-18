// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// GetInstance<ISmoothie<1>_> @ 141cdee60

TSharedRef<ISmoothie<1>,1> * __thiscall
TTypeContainer<1>::GetInstance<ISmoothie<1>_>
          (TTypeContainer<1> *this,TSharedRef<ISmoothie<1>,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISmoothie<1> *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<ISmoothie<1>,1> *pTVar7;
  longlong *plVar8;
  int iVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TTypeContainer<1> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  ::FString::FString(&local_28,L"ISmoothie<>");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar10.Data = local_28.Data.AllocatorInstance.Data;
  }
  plVar8 = (longlong *)0x0;
  iVar9 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar10.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
                      *)&this->Providers,uVar6,&local_28);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&this->Providers + (longlong)iVar9 * 0x28, lVar1 == 0))
  {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar1 + 0x10);
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (plVar8 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TypeContainer.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<ISmoothie<1>,1> *)(*pcVar4)();
      return pTVar7;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<ISmoothie<1>,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_18);
  pTVar2 = (TReferenceControllerBase<1> *)plVar8[1];
  pIVar3 = (ISmoothie<1> *)*plVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 == (ISmoothie<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<ISmoothie<1>,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = pIVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pIVar3 == (ISmoothie<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<ISmoothie<1>,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// GetInstance<IBerry> @ 141cdf040

TSharedRef<IBerry,1> * __thiscall
TTypeContainer<1>::GetInstance<IBerry>
          (TTypeContainer<1> *this,TSharedRef<IBerry,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  IBerry *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<IBerry,1> *pTVar7;
  longlong *plVar8;
  int iVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TTypeContainer<1> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  ::FString::FString(&local_28,L"IBerry");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar10.Data = local_28.Data.AllocatorInstance.Data;
  }
  plVar8 = (longlong *)0x0;
  iVar9 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar10.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
                      *)&this->Providers,uVar6,&local_28);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&this->Providers + (longlong)iVar9 * 0x28, lVar1 == 0))
  {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar1 + 0x10);
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (plVar8 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TypeContainer.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBerry,1> *)(*pcVar4)();
      return pTVar7;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBerry,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_18);
  pTVar2 = (TReferenceControllerBase<1> *)plVar8[1];
  pIVar3 = (IBerry *)*plVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 == (IBerry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBerry,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = pIVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pIVar3 == (IBerry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IBerry,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// GetInstance<IFruit> @ 141cdf220

TSharedRef<IFruit,1> * __thiscall
TTypeContainer<1>::GetInstance<IFruit>
          (TTypeContainer<1> *this,TSharedRef<IFruit,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  IFruit *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedRef<IFruit,1> *pTVar7;
  longlong *plVar8;
  int iVar9;
  ForAnyElementType FVar10;
  TReferenceControllerBase<1> *pTVar11;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TTypeContainer<1> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  ::FString::FString(&local_28,L"IFruit");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar10.Data = local_28.Data.AllocatorInstance.Data;
  }
  plVar8 = (longlong *)0x0;
  iVar9 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar10.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
                      *)&this->Providers,uVar6,&local_28);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&this->Providers + (longlong)iVar9 * 0x28, lVar1 == 0))
  {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar1 + 0x10);
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (plVar8 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Provider.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TypeContainer.h"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IFruit,1> *)(*pcVar4)();
      return pTVar7;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IFruit,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_18);
  pTVar2 = (TReferenceControllerBase<1> *)plVar8[1];
  pIVar3 = (IFruit *)*plVar8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 == (IFruit *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IFruit,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object = pIVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pIVar3 == (IFruit *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IFruit,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return __return_storage_ptr__;
}

// RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry> @ 141cdf520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>
          (TTypeContainer<1> *this,ETypeContainerScope param_1)

{
  DWORD DVar1;
  TThreadInstanceProvider<TSmoothie<1>_> *pTVar2;
  TSmoothie<1> *this_00;
  TSharedRef<IBerry,1> *pTVar3;
  TSharedRef<IFruit,1> *pTVar4;
  TThreadInstanceProvider<TSmoothie<1>_> *pTVar5;
  undefined ***pppuVar6;
  TThreadInstanceProvider<TSmoothie<1>_> *pTVar7;
  FSharedReferencer<1> FVar8;
  undefined1 auStack_c8 [32];
  TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_> local_a8;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_a0;
  TSharedRef<TSmoothie<1>,1> local_90;
  TSharedRef<IBerry,1> local_80;
  TSharedRef<IFruit,1> local_70;
  TThreadInstanceProvider<TSmoothie<1>_> *local_58;
  undefined **local_48;
  TTypeContainer<1> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar5 = (TThreadInstanceProvider<TSmoothie<1>_> *)0x0;
  local_a8.Object = local_a8.Object & 0xffffffff00000000;
  local_a0.Object = (IInstanceProvider *)0x0;
  local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 == Instance) {
    pTVar2 = ::operator_new(0x40);
    pTVar7 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_U__ISmoothie__00__U__TSmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 =
           &___7__TFunctionInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
      ((FSharedReferencer<1> *)&pTVar2->field_0x10)->ReferenceController =
           (TReferenceControllerBase<1> *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      ((FSharedReferencer<1> *)&pTVar2->field_0x20)->ReferenceController =
           (TReferenceControllerBase<1> *)
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_U__ISmoothie__00__U__TSmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<TSmoothie<1>_> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
                 ::Call;
      if (((FSharedReferencer<1> *)&pTVar2->field_0x10)->ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        local_58 = pTVar5;
      }
      pTVar5 = pTVar2;
      pTVar7 = (TThreadInstanceProvider<TSmoothie<1>_> *)&DAT_00000001;
      pTStack_40 = this;
    }
    local_a8.Object = pTVar5;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_>
              (&local_a0,
               (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_> *)
               &local_a8);
  }
  else {
    if (param_1 != Thread) {
      pTVar2 = ::operator_new(0x18);
      pTVar7 = pTVar5;
      FVar8.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) {
        this_00 = ::operator_new(0x28);
        if (this_00 != (TSmoothie<1> *)0x0) {
          pTVar3 = GetInstance<IBerry>(this,&local_80);
          pTVar4 = GetInstance<IFruit>(this,&local_70);
          pTVar5 = (TThreadInstanceProvider<TSmoothie<1>_> *)
                   TSmoothie<1>::TSmoothie<1>(this_00,pTVar4,pTVar3);
        }
        local_a8.Object = pTVar5;
        TSharedRef<TSmoothie<1>,1>::TSharedRef<TSmoothie<1>,1><TSmoothie<1>_>
                  (&local_90,(TRawPtrProxy<TSmoothie<1>_> *)&local_a8);
        *(undefined ***)pTVar2 =
             &___7__TSharedInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
        ((TSharedRef<IBerry,1> *)&pTVar2->field_0x8)->Object = (IBerry *)local_90.Object;
        ((FSharedReferencer<1> *)&pTVar2->field_0x10)->ReferenceController =
             local_90.SharedReferenceCount.ReferenceController;
        if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = (TThreadInstanceProvider<TSmoothie<1>_> *)&DAT_00000004;
        pTVar7 = pTVar2;
        FVar8.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
      }
      local_a8.Object = pTVar7;
      TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
      operator=<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_>
                (&local_a0,
                 (TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_> *)
                 &local_a8);
      if (pTVar5 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
      }
      goto LAB_141cdf777;
    }
    pTVar2 = ::operator_new(0x50);
    pTVar7 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__3____RegisterClass_U__ISmoothie__00__U__TSmoothie__00__UIFruit__UIBerry_____TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
      ((FSharedReferencer<1> *)&pTVar2->field_0x10)->ReferenceController =
           (TReferenceControllerBase<1> *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      *(undefined4 *)&((FSharedReferencer<1> *)&pTVar2->field_0x20)->ReferenceController =
           0x50795fe8;
      *(undefined4 *)&pTVar2->field_0x24 = 1;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<TSmoothie<1>_> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
                 ::Call;
      if (((FSharedReferencer<1> *)&pTVar2->field_0x10)->ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        local_58 = pTVar5;
      }
      pTStack_40 = this;
      DVar1 = TlsAlloc();
      *(DWORD *)&pTVar2->field_0x40 = DVar1;
      pTVar5 = (TThreadInstanceProvider<TSmoothie<1>_> *)&DAT_00000002;
      *(undefined ***)pTVar2 =
           &___7__TThreadInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__6B_;
      pTVar7 = pTVar2;
    }
    local_a8.Object = pTVar7;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_>(&local_a0,&local_a8);
    pTVar7 = pTVar5;
  }
  if ((pTVar7 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) &&
     (local_58 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0)) {
    pppuVar6 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar6 = local_30;
    }
    (*(code *)(*pppuVar6)[2])();
  }
LAB_141cdf777:
  AddProvider(this,L"ISmoothie<>",&local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.SharedReferenceCount.ReferenceController);
  return;
}

// RegisterClass<IBerry,FStrawberry> @ 141cdf7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>
          (TTypeContainer<1> *this,ETypeContainerScope param_1)

{
  DWORD DVar1;
  TThreadInstanceProvider<FStrawberry> *pTVar2;
  TThreadInstanceProvider<FStrawberry> *pTVar3;
  undefined ***pppuVar4;
  TThreadInstanceProvider<FStrawberry> *pTVar5;
  FSharedReferencer<1> FVar6;
  undefined1 auStack_a8 [32];
  TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_> local_88;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_80;
  TSharedRef<FStrawberry,1> local_70;
  TThreadInstanceProvider<FStrawberry> *local_58;
  undefined **local_48;
  TTypeContainer<1> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar5 = (TThreadInstanceProvider<FStrawberry> *)0x0;
  local_88.Object = local_88.Object & 0xffffffff00000000;
  local_80.Object = (IInstanceProvider *)0x0;
  local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 == Instance) {
    pTVar2 = ::operator_new(0x40);
    pTVar3 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_UIBerry__UFStrawberry____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 =
           &___7__TFunctionInstanceProvider_UFStrawberry_____TTypeContainer__00__6B_;
      *(code **)&pTVar2->field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      *(undefined ***)&pTVar2->field_0x20 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_UIBerry__UFStrawberry____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<FStrawberry> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
                 ::Call;
      if (*(longlong *)&pTVar2->field_0x10 != 0) {
        local_58 = pTVar5;
      }
      pTVar5 = pTVar2;
      pTVar3 = (TThreadInstanceProvider<FStrawberry> *)&DAT_00000001;
      pTStack_40 = this;
    }
    local_88.Object = pTVar5;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_>
              (&local_80,
               (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_> *)&local_88
              );
  }
  else {
    if (param_1 != Thread) {
      pTVar2 = ::operator_new(0x18);
      pTVar3 = pTVar5;
      FVar6.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
        pTVar3 = ::operator_new(8);
        if (pTVar3 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
          *(undefined ***)pTVar3 = &___7FStrawberry__6B_;
          pTVar5 = pTVar3;
        }
        local_88.Object = pTVar5;
        TSharedRef<FStrawberry,1>::TSharedRef<FStrawberry,1><FStrawberry>
                  (&local_70,(TRawPtrProxy<FStrawberry> *)&local_88);
        *(undefined ***)pTVar2 =
             &___7__TSharedInstanceProvider_UFStrawberry_____TTypeContainer__00__6B_;
        *(FStrawberry **)&pTVar2->field_0x8 = local_70.Object;
        *(TReferenceControllerBase<1> **)&pTVar2->field_0x10 =
             local_70.SharedReferenceCount.ReferenceController;
        if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = (TThreadInstanceProvider<FStrawberry> *)&DAT_00000004;
        pTVar3 = pTVar2;
        FVar6.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
      }
      local_88.Object = pTVar3;
      TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
      operator=<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_>
                (&local_80,
                 (TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_> *)&local_88
                );
      if (pTVar5 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
      }
      goto LAB_141cdf9f7;
    }
    pTVar2 = ::operator_new(0x50);
    pTVar3 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__3____RegisterClass_UIBerry__UFStrawberry____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
      *(code **)&pTVar2->field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      *(undefined4 *)&pTVar2->field_0x20 = 0x50795fa8;
      *(undefined4 *)&pTVar2->field_0x24 = 1;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<FStrawberry> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IBerry,FStrawberry>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
                 ::Call;
      if (*(longlong *)&pTVar2->field_0x10 != 0) {
        local_58 = pTVar5;
      }
      pTStack_40 = this;
      DVar1 = TlsAlloc();
      *(DWORD *)&pTVar2->field_0x40 = DVar1;
      pTVar5 = (TThreadInstanceProvider<FStrawberry> *)&DAT_00000002;
      *(undefined ***)pTVar2 =
           &___7__TThreadInstanceProvider_UFStrawberry_____TTypeContainer__00__6B_;
      pTVar3 = pTVar2;
    }
    local_88.Object = pTVar3;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_>(&local_80,&local_88);
    pTVar3 = pTVar5;
  }
  if ((pTVar3 != (TThreadInstanceProvider<FStrawberry> *)0x0) &&
     (local_58 != (TThreadInstanceProvider<FStrawberry> *)0x0)) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_141cdf9f7:
  AddProvider(this,L"IBerry",&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  return;
}

// RegisterClass<IFruit,FBanana> @ 141cdfa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TTypeContainer<1>::RegisterClass<IFruit,FBanana>
          (TTypeContainer<1> *this,ETypeContainerScope param_1)

{
  DWORD DVar1;
  TThreadInstanceProvider<FBanana> *pTVar2;
  TThreadInstanceProvider<FBanana> *pTVar3;
  undefined ***pppuVar4;
  TThreadInstanceProvider<FBanana> *pTVar5;
  FSharedReferencer<1> FVar6;
  undefined1 auStack_a8 [32];
  TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_> local_88;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_80;
  TSharedRef<FBanana,1> local_70;
  TThreadInstanceProvider<FBanana> *local_58;
  undefined **local_48;
  TTypeContainer<1> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar5 = (TThreadInstanceProvider<FBanana> *)0x0;
  local_88.Object = local_88.Object & 0xffffffff00000000;
  local_80.Object = (IInstanceProvider *)0x0;
  local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 == Instance) {
    pTVar2 = ::operator_new(0x40);
    pTVar3 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<FBanana> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_UIFruit__UFBanana____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 = &___7__TFunctionInstanceProvider_UFBanana_____TTypeContainer__00__6B_
      ;
      *(code **)&pTVar2->field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      *(undefined ***)&pTVar2->field_0x20 =
           &
           ___7__TFunction_OwnedObject_V<lambda_1>__3____RegisterClass_UIFruit__UFBanana____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<FBanana> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_1>,TSharedPtr<void,1>_>
                 ::Call;
      if (*(longlong *)&pTVar2->field_0x10 != 0) {
        local_58 = pTVar5;
      }
      pTVar5 = pTVar2;
      pTVar3 = (TThreadInstanceProvider<FBanana> *)&DAT_00000001;
      pTStack_40 = this;
    }
    local_88.Object = pTVar5;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_>
              (&local_80,
               (TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_> *)&local_88);
  }
  else {
    if (param_1 != Thread) {
      pTVar2 = ::operator_new(0x18);
      pTVar3 = pTVar5;
      FVar6.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TThreadInstanceProvider<FBanana> *)0x0) {
        pTVar3 = ::operator_new(8);
        if (pTVar3 != (TThreadInstanceProvider<FBanana> *)0x0) {
          *(undefined ***)pTVar3 = &___7FBanana__6B_;
          pTVar5 = pTVar3;
        }
        local_88.Object = pTVar5;
        TSharedRef<FBanana,1>::TSharedRef<FBanana,1><FBanana>
                  (&local_70,(TRawPtrProxy<FBanana> *)&local_88);
        *(undefined ***)pTVar2 = &___7__TSharedInstanceProvider_UFBanana_____TTypeContainer__00__6B_
        ;
        *(FBanana **)&pTVar2->field_0x8 = local_70.Object;
        *(TReferenceControllerBase<1> **)&pTVar2->field_0x10 =
             local_70.SharedReferenceCount.ReferenceController;
        if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = (TThreadInstanceProvider<FBanana> *)&DAT_00000004;
        pTVar3 = pTVar2;
        FVar6.ReferenceController = local_70.SharedReferenceCount.ReferenceController;
      }
      local_88.Object = pTVar3;
      TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
      operator=<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_>
                (&local_80,
                 (TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_> *)&local_88);
      if (pTVar5 != (TThreadInstanceProvider<FBanana> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
      }
      goto LAB_141cdfc77;
    }
    pTVar2 = ::operator_new(0x50);
    pTVar3 = pTVar5;
    if (pTVar2 != (TThreadInstanceProvider<FBanana> *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__3____RegisterClass_UIFruit__UFBanana____V___TTypeContainer__00__QEAAXW4ETypeContainerScope___Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      *(undefined ***)pTVar2 = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
      *(code **)&pTVar2->field_0x10 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
           ::Call;
      *(undefined8 *)&pTVar2->field_0x38 = 0;
      *(undefined4 *)&pTVar2->field_0x20 = 0x50795f68;
      *(undefined4 *)&pTVar2->field_0x24 = 1;
      *(TTypeContainer<1> **)&pTVar2->field_0x28 = this;
      *(undefined8 *)&pTVar2->field_0x30 = local_38;
      local_58 = (TThreadInstanceProvider<FBanana> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterClass<IFruit,FBanana>'::__l4::<lambda_2>,TSharedPtr<void,1>_>
                 ::Call;
      if (*(longlong *)&pTVar2->field_0x10 != 0) {
        local_58 = pTVar5;
      }
      pTStack_40 = this;
      DVar1 = TlsAlloc();
      *(DWORD *)&pTVar2->field_0x40 = DVar1;
      pTVar5 = (TThreadInstanceProvider<FBanana> *)&DAT_00000002;
      *(undefined ***)pTVar2 = &___7__TThreadInstanceProvider_UFBanana_____TTypeContainer__00__6B_;
      pTVar3 = pTVar2;
    }
    local_88.Object = pTVar3;
    TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
    operator=<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_>(&local_80,&local_88);
    pTVar3 = pTVar5;
  }
  if ((pTVar3 != (TThreadInstanceProvider<FBanana> *)0x0) &&
     (local_58 != (TThreadInstanceProvider<FBanana> *)0x0)) {
    pppuVar4 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_141cdfc77:
  AddProvider(this,L"IFruit",&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  return;
}

// RegisterFactory<IFruit> @ 141cdfcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TTypeContainer<1>::RegisterFactory<IFruit>
          (TTypeContainer<1> *this,TFunction<TSharedRef<IFruit,1>___cdecl(void)> *param_1)

{
  TFunctionInstanceProvider<IFruit> *pTVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  TFunctionInstanceProvider<IFruit> *pTVar4;
  TFunctionInstanceProvider<IFruit> *pTVar5;
  undefined1 auStack_d8 [32];
  TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_> local_b8;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_b0;
  TFunctionInstanceProvider<IFruit> *local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  TTypeContainer<1> *local_68;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar4 = (TFunctionInstanceProvider<IFruit> *)0x0;
  local_b8.Object = local_b8.Object & 0xffffffff00000000;
  pTVar1 = ::operator_new(0x40);
  pTVar5 = pTVar4;
  if (pTVar1 != (TFunctionInstanceProvider<IFruit> *)0x0) {
    local_58 = *(longlong *)param_1;
    local_30 = (longlong *)0x0;
    local_68 = this;
    if (local_58 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)(puVar2,local_48);
    }
    local_98 = (TFunctionInstanceProvider<IFruit> *)0x0;
    puVar2 = FMemory::Malloc(0x50,0x10);
    local_70 = puVar2;
    *puVar2 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterFactory_UIFruit_____TTypeContainer__00__QEAAXAEBV__TFunction___A6A_AV__TSharedRef_UIFruit___00__XZ___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    puVar2[2] = local_68;
    puVar2[4] = local_58;
    puVar2[9] = 0;
    if (local_58 != 0) {
      plVar3 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)*plVar3)();
    }
    if (puVar2 + 2 != (undefined8 *)0x0) {
      local_98 = (TFunctionInstanceProvider<IFruit> *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`TTypeContainer<1>::RegisterFactory<IFruit>'::__l2::<lambda_1>,TSharedPtr<void,1>_>
                 ::Call;
    }
    pTVar1->_padding_ =
         (longlong)&___7__TFunctionInstanceProvider_UIFruit_____TTypeContainer__00__6B_;
    *(TFunctionInstanceProvider<IFruit> **)&pTVar1->CreateFunc = local_98;
    *(longlong **)&(pTVar1->CreateFunc).field_0x28 = local_70;
    local_70 = (longlong *)0x0;
    *(longlong *)&(pTVar1->CreateFunc).field_0x10 = local_88;
    *(undefined8 *)&(pTVar1->CreateFunc).field_0x18 = uStack_80;
    *(undefined8 *)&(pTVar1->CreateFunc).field_0x20 = local_78;
    if (*(longlong *)&pTVar1->CreateFunc != 0) {
      local_98 = pTVar4;
    }
    pTVar4 = (TFunctionInstanceProvider<IFruit> *)&DAT_00000003;
    pTVar5 = pTVar1;
  }
  local_b8.Object = pTVar5;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_>
            (&local_b0,&local_b8);
  if ((((ulonglong)pTVar4 & 2) != 0) &&
     (pTVar4 = (TFunctionInstanceProvider<IFruit> *)(ulonglong)((uint)pTVar4 & 0xfffffffd),
     local_98 != (TFunctionInstanceProvider<IFruit> *)0x0)) {
    plVar3 = &local_88;
    if (local_70 != (longlong *)0x0) {
      plVar3 = local_70;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((((ulonglong)pTVar4 & 1) != 0) && (local_58 != 0)) {
    plVar3 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  AddProvider(this,L"IFruit",&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 141cf1900

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::
RegisterDelegate<ISmoothie<1>,TDelegate<TSharedRef<ISmoothie<1>,1>___cdecl(TSharedRef<IFruit,1>,TSharedRef<IBerry,1>),FDefaultDelegateUserPolicy>,IFruit,IBerry>'
::__l2::<lambda_1>::operator()(void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TSharedRef<IBerry,1> *pTVar2;
  TSharedRef<IFruit,1> *pTVar3;
  longlong *plVar4;
  void *local_78;
  TReferenceControllerBase<1> *local_70;
  IBerry *local_68;
  TReferenceControllerBase<1> *local_60;
  IFruit *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<IBerry,1> local_48;
  TSharedRef<IFruit,1> local_38;
  FReadAccessScope local_28;
  
  pTVar2 = TTypeContainer<1>::GetInstance<IBerry>(*(TTypeContainer<1> **)this,&local_48);
  pTVar3 = TTypeContainer<1>::GetInstance<IFruit>(*(TTypeContainer<1> **)this,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)((longlong)this + 0x10);
  }
  pcVar1 = *(code **)(*plVar4 + 0x60);
  local_68 = pTVar2->Object;
  local_60 = (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = pTVar3->Object;
  local_50 = (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(plVar4,&local_78,&local_58,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  __return_storage_ptr__->Object = local_78;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return __return_storage_ptr__;
}

// operator() @ 141cf1a10

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::
RegisterDelegate<IBerry,TDelegate<TSharedRef<IBerry,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'
::__l2::<lambda_1>::operator()(void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  void *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)((longlong)this + 0x10);
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  __return_storage_ptr__->Object = local_38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}

// operator() @ 141cf1a90

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::
RegisterDelegate<IFruit,TDelegate<TSharedRef<IFruit,1>___cdecl(void),FDefaultDelegateUserPolicy>_>'
::__l2::<lambda_1>::operator()(void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  longlong *plVar1;
  void *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
             &local_28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)((longlong)this + 0x10);
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  __return_storage_ptr__->Object = local_38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}

// operator() @ 141cf1b10

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::RegisterFactory<ISmoothie<1>,IFruit,IBerry>'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<IBerry,1> *pTVar3;
  TSharedRef<IFruit,1> *pTVar4;
  undefined8 *puVar5;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  pcVar1 = *(code **)((longlong)this + 8);
  pTVar3 = TTypeContainer<1>::GetInstance<IBerry>(*(TTypeContainer<1> **)this,&local_28);
  pTVar4 = TTypeContainer<1>::GetInstance<IFruit>(*(TTypeContainer<1> **)this,&local_18);
  puVar5 = (undefined8 *)(*pcVar1)(local_38,pTVar4,pTVar3);
  __return_storage_ptr__->Object = (void *)*puVar5;
  pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}

// operator() @ 141cf1ba0

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::RegisterFactory<IFruit>'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *local_18;
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar1 = *(code **)((longlong)this + 0x10);
  plVar3 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_18,uVar2);
  __return_storage_ptr__->Object = local_18;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_10;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// operator() @ 141cf5f20

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_1>::
operator()(void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TSmoothie<1> *this_00;
  TSharedRef<IBerry,1> *pTVar1;
  TSharedRef<IFruit,1> *pTVar2;
  TRawPtrProxy<TSmoothie<1>_> local_res10;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  this_00 = ::operator_new(0x28);
  local_res10.Object = (TSmoothie<1> *)0x0;
  if (this_00 != (TSmoothie<1> *)0x0) {
    pTVar1 = TTypeContainer<1>::GetInstance<IBerry>(*(TTypeContainer<1> **)this,&local_28);
    pTVar2 = TTypeContainer<1>::GetInstance<IFruit>(*(TTypeContainer<1> **)this,&local_18);
    local_res10.Object = TSmoothie<1>::TSmoothie<1>(this_00,pTVar2,pTVar1);
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><TSmoothie<1>_>(__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// operator() @ 141cf67c0

TSharedPtr<void,1> * __thiscall
`TTypeContainer<1>::RegisterClass<ISmoothie<1>,TSmoothie<1>,IFruit,IBerry>'::__l4::<lambda_2>::
operator()(void *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  TSmoothie<1> *this_00;
  TSharedRef<IBerry,1> *pTVar1;
  TSharedRef<IFruit,1> *pTVar2;
  TRawPtrProxy<TSmoothie<1>_> local_res10;
  TSharedRef<IBerry,1> local_28;
  TSharedRef<IFruit,1> local_18;
  
  this_00 = ::operator_new(0x28);
  local_res10.Object = (TSmoothie<1> *)0x0;
  if (this_00 != (TSmoothie<1> *)0x0) {
    pTVar1 = TTypeContainer<1>::GetInstance<IBerry>(*(TTypeContainer<1> **)this,&local_28);
    pTVar2 = TTypeContainer<1>::GetInstance<IFruit>(*(TTypeContainer<1> **)this,&local_18);
    local_res10.Object = TSmoothie<1>::TSmoothie<1>(this_00,pTVar2,pTVar1);
  }
  TSharedPtr<void,1>::TSharedPtr<void,1><TSmoothie<1>_>(__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// AddProvider @ 141cf8c20

void __thiscall
TTypeContainer<1>::AddProvider
          (TTypeContainer<1> *this,wchar_t *param_1,
          TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *param_2)

{
  FString *local_28;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *local_20;
  FString local_18;
  
  if (this != (TTypeContainer<1> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    ::FString::FString(&local_18,param_1);
    local_28 = &local_18;
    local_20 = param_2;
    TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_const_&>_>
              ((TSet<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>,0>,FDefaultSetAllocator>
                *)&this->Providers,
               (TPairInitializer<FString_&&,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_const_&>
                *)&stack0x00000008,(bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
                    /* WARNING: Could not recover jumptable at 0x000141cf8c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

