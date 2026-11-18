// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// Get @ 141872330

FAsyncTaskNotificationFactory * __cdecl FAsyncTaskNotificationFactory::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FAsyncTaskNotificationFactory::Get'::__l2::_dynamic_atexit_destructor_for__Factory__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Factory;
}

// InvokeFactory @ 14187a620

TSharedPtr<IAsyncTaskNotificationImpl,1> * __thiscall
FAsyncTaskNotificationFactory::InvokeFactory
          (FAsyncTaskNotificationFactory *this,
          TSharedPtr<IAsyncTaskNotificationImpl,1> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<IAsyncTaskNotificationImpl,1> *pTVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  IAsyncTaskNotificationImpl *local_28;
  TReferenceControllerBase<1> *local_20;
  
  iVar1 = (this->Factories).ArrayNum;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (iVar1 < 1) {
    pTVar8 = ::operator_new(0xa8);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCoreAsyncTaskNotificationImpl___00_SharedPointerInternals__6B_
      ;
      pTVar8[1]._padding_ = (longlong)&___7FCoreAsyncTaskNotificationImpl__6B_;
      *(undefined1 *)&pTVar8[1].SharedReferenceCount = 1;
      FText::FText((FText *)(pTVar8 + 2));
      FText::FText((FText *)(pTVar8 + 3));
      FText::FText((FText *)(pTVar8 + 4));
      pTVar8[5]._padding_ = 0;
      pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar8[6]._padding_ = 0;
      FText::FText((FText *)&pTVar8[6].SharedReferenceCount);
      pTVar8[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[7].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar8 + 8),4000);
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreAsyncTaskNotificationImpl.cpp"
                           ,0xc,
                           L"AsyncTaskNotification must be constructed on the game thread before being optionally passed to another thread."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<IAsyncTaskNotificationImpl,1> *)(*pcVar3)();
          return pTVar6;
        }
      }
      pTVar11 = pTVar8 + 1;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<IAsyncTaskNotificationImpl,1> *)(*pcVar3)();
          return pTVar6;
        }
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar8;
    }
    __return_storage_ptr__->Object = (IAsyncTaskNotificationImpl *)pTVar11;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    return __return_storage_ptr__;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<IAsyncTaskNotificationImpl,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = (this->Factories).ArrayNum;
  pFVar2 = (this->Factories).AllocatorInstance.Data;
  UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + (longlong)iVar1 * 0x40 + -0x30));
  pcVar3 = *(code **)(pFVar2 + (longlong)iVar1 * 0x40 + -0x30);
  pFVar9 = pFVar2 + (longlong)iVar1 * 0x40 + -0x20;
  if (*(FScriptContainerElement **)(pFVar2 + (longlong)iVar1 * 0x40 + -8) !=
      (FScriptContainerElement *)0x0) {
    pFVar9 = *(FScriptContainerElement **)(pFVar2 + (longlong)iVar1 * 0x40 + -8);
  }
  uVar7 = (**(code **)(*(longlong *)pFVar9 + 8))();
  (*pcVar3)(&local_28,uVar7);
  __return_storage_ptr__->Object = local_28;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (IAsyncTaskNotificationImpl *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// RegisterFactory @ 141887920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141887bb6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000141887bba */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
FAsyncTaskNotificationFactory::RegisterFactory
          (FAsyncTaskNotificationFactory *this,FName param_1,
          TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)> *param_2)

{
  int *piVar1;
  code *pcVar2;
  FAsyncTaskNotificationFactory *pFVar3;
  int iVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  FName *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  FName *local_d8;
  FName *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  FAsyncTaskNotificationFactory *local_a0;
  TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)> *local_98;
  FName local_88 [2];
  FName local_78;
  FNameEntryId local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  FName local_58;
  FName local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar4 = (this->Factories).ArrayNum;
  lVar7 = (longlong)iVar4;
  iVar12 = 0;
  local_a0 = this;
  local_98 = param_2;
  if (iVar4 != 0) {
    pFVar8 = (FName *)(this->Factories).AllocatorInstance.Data;
    iVar12 = 0;
    bVar13 = *pFVar8 != param_1;
    lVar11 = 0;
    iVar4 = 0;
    do {
      lVar11 = lVar11 + 1;
      iVar10 = iVar4 + 1;
      if (lVar11 < lVar7) {
        pFVar5 = pFVar8 + lVar11 * 8;
        do {
          if (bVar13 != (*pFVar5 != param_1)) break;
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 1;
          pFVar5 = pFVar5 + 8;
        } while (lVar11 < lVar7);
      }
      iVar9 = iVar10 - iVar4;
      if (bVar13 == false) {
        DestructItems<TTuple<FName,TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)>_>,int>
                  ((TTuple<FName,TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)>_>
                    *)(pFVar8 + (longlong)iVar4 * 8),iVar9);
      }
      else {
        if (iVar12 != iVar4) {
          memmove(pFVar8 + (longlong)iVar12 * 8,pFVar8 + (longlong)iVar4 * 8,(longlong)iVar9 << 6);
        }
        iVar12 = iVar12 + iVar9;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar4 = iVar10;
    } while (lVar11 < lVar7);
    (local_a0->Factories).ArrayNum = iVar12;
  }
  pFVar3 = local_a0;
  local_78.ComparisonIndex.Value = *(uint *)&local_98->field_0x0;
  local_78.Number = *(uint *)&local_98->field_0x4;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  local_88[0] = param_1;
  if (local_78 != (FName)0x0) {
    puVar6 = (undefined8 *)&local_98->field_0x10;
    if (*(undefined8 **)&local_98->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&local_98->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_68);
    iVar12 = (pFVar3->Factories).ArrayNum;
  }
  pFVar8 = (FName *)(pFVar3->Factories).AllocatorInstance.Data;
  if ((pFVar8 <= local_88) &&
     (lVar7 = (longlong)(pFVar3->Factories).ArrayMax, local_88 < pFVar8 + lVar7 * 8)) {
    local_c0 = (longlong)iVar12;
    local_b8 = 0x40;
    local_d8 = local_88;
    local_d0 = pFVar8;
    local_c8 = lVar7;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (pFVar3->Factories).ArrayNum;
  piVar1 = &(pFVar3->Factories).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Factories).ArrayNum = iVar4 + 1;
  pFVar8 = (FName *)((pFVar3->Factories).AllocatorInstance.Data + (longlong)iVar4 * 0x40);
  *pFVar8 = local_88[0];
  pFVar8[2] = local_78;
  pFVar8[7] = local_50;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  pFVar8[4].ComparisonIndex.Value = local_68.Value;
  pFVar8[4].Number = uStack_64;
  pFVar8[5].ComparisonIndex.Value = uStack_60;
  pFVar8[5].Number = uStack_5c;
  pFVar8[6] = local_58;
  if ((pFVar8[2] == (FName)0x0) && (local_78 != (FName)0x0)) {
    (**(code **)(CONCAT44(uStack_64,local_68.Value) + 0x10))();
  }
  return;
}

// UnregisterFactory @ 141896240

void __thiscall
FAsyncTaskNotificationFactory::UnregisterFactory(FAsyncTaskNotificationFactory *this,FName param_1)

{
  FName *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = (this->Factories).ArrayNum;
  lVar2 = (longlong)iVar5;
  if (iVar5 != 0) {
    iVar8 = 0;
    pFVar1 = (FName *)(this->Factories).AllocatorInstance.Data;
    bVar9 = *pFVar1 != param_1;
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar6 = iVar5 + 1;
      if (lVar7 < lVar2) {
        pFVar3 = pFVar1 + lVar7 * 8;
        do {
          if (bVar9 != (*pFVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          pFVar3 = pFVar3 + 8;
        } while (lVar7 < lVar2);
      }
      iVar4 = iVar6 - iVar5;
      if (bVar9 == false) {
        DestructItems<TTuple<FName,TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)>_>,int>
                  ((TTuple<FName,TFunction<TSharedPtr<IAsyncTaskNotificationImpl,1>___cdecl(void)>_>
                    *)(pFVar1 + (longlong)iVar5 * 8),iVar4);
      }
      else {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 8,pFVar1 + (longlong)iVar5 * 8,(longlong)iVar4 << 6);
        }
        iVar8 = iVar8 + iVar4;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar5 = iVar6;
    } while (lVar7 < lVar2);
    (this->Factories).ArrayNum = iVar8;
  }
  return;
}

