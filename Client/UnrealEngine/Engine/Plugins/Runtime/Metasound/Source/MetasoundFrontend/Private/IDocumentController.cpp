// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// ~IDocumentController @ 14ad9ec00

void __thiscall
Metasound::Frontend::IDocumentController::~IDocumentController(IDocumentController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9ec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CreateDocumentHandle @ 14adab050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __cdecl
Metasound::Frontend::IDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAccessToken *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  longlong *plStack_60;
  code *local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = (param_1->AccessPoint).Token.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->AccessPoint).Token.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_98._0_8_ = 0;
  local_88 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = (code *)0x0;
  plVar8 = FMemory::Malloc(0x20,8);
  plStack_30 = plStack_60;
  uVar7 = local_78[1]._4_4_;
  uVar6 = (undefined4)local_78[1];
  uVar5 = local_78[0]._4_4_;
  uVar4 = (undefined4)local_78[0];
  uVar10 = uStack_80;
  plVar8[1] = (longlong)pFVar2;
  plVar8[2] = (longlong)pTVar1;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TAccessPtr___CBUFMetasoundFrontendDocument___Frontend_Metasound__QEAA_V__TWeakPtr_UFAccessToken_Frontend_Metasound___00__AEBUFMetasoundFrontendDocument___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar8[3] = (longlong)param_1;
  pcVar9 = local_58;
  if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
    pcVar9 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument_const_>::TAccessPtr<FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,FMetasoundFrontendDocument_const_*>
             ::Call;
  }
  uStack_80 = uStack_50;
  local_78[2]._0_4_ = (undefined4)local_48[2];
  local_78[2]._4_4_ = local_48[2]._4_4_;
  plStack_60 = plVar8;
  local_78[0]._0_4_ = (undefined4)local_48[0];
  local_78[0]._4_4_ = local_48[0]._4_4_;
  local_78[1]._0_4_ = (undefined4)local_48[1];
  local_78[1]._4_4_ = local_48[1]._4_4_;
  local_58 = (code *)local_88;
  uStack_50 = uVar10;
  local_48[0]._0_4_ = uVar4;
  local_48[0]._4_4_ = uVar5;
  local_48[1]._0_4_ = uVar6;
  local_48[1]._4_4_ = uVar7;
  bVar11 = local_88 != 0;
  local_88 = (longlong)pcVar9;
  if (bVar11) {
    plVar8 = local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable((void *)local_88);
  lVar3 = local_88;
  plVar8 = local_78;
  if (plStack_60 != (longlong *)0x0) {
    plVar8 = plStack_60;
  }
  uVar10 = (**(code **)(*plVar8 + 8))();
  local_98._0_8_ = (*(code *)lVar3)(uVar10);
  CreateDocumentHandle(__return_storage_ptr__,(FConstDocumentAccessPtr *)local_98);
  return __return_storage_ptr__;
}

// CreateDocumentHandle @ 14adab1a0

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __cdecl
Metasound::Frontend::IDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__,
          FConstDocumentAccessPtr *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FConstDocumentAccessPtr local_48;
  
  local_48._0_8_ = *(undefined8 *)param_1;
  local_48._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_48._56_8_ = 0;
  if (local_48._16_8_ != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,&local_48.field_0x20);
  }
  FDocumentController::CreateDocumentHandle(__return_storage_ptr__,&local_48);
  if (*(longlong *)&param_1->field_0x10 != 0) {
    plVar2 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateDocumentHandle @ 14adab230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IDocumentController,1> * __cdecl
Metasound::Frontend::IDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FAccessToken *pFVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  longlong *plStack_60;
  code *local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = (param_1->AccessPoint).Token.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->AccessPoint).Token.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_98._0_8_ = 0;
  local_88 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = (code *)0x0;
  plVar8 = FMemory::Malloc(0x20,8);
  plStack_30 = plStack_60;
  uVar7 = local_78[1]._4_4_;
  uVar6 = (undefined4)local_78[1];
  uVar5 = local_78[0]._4_4_;
  uVar4 = (undefined4)local_78[0];
  uVar10 = uStack_80;
  plVar8[1] = (longlong)pFVar2;
  plVar8[2] = (longlong)pTVar1;
  *plVar8 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1___0__TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEAA_V__TWeakPtr_UFAccessToken_Frontend_Metasound___00__AEAUFMetasoundFrontendDocument___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar8[3] = (longlong)param_1;
  pcVar9 = local_58;
  if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
    pcVar9 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument>'::__l2::<lambda_1>,FMetasoundFrontendDocument_*>
             ::Call;
  }
  uStack_80 = uStack_50;
  local_78[2]._0_4_ = (undefined4)local_48[2];
  local_78[2]._4_4_ = local_48[2]._4_4_;
  plStack_60 = plVar8;
  local_78[0]._0_4_ = (undefined4)local_48[0];
  local_78[0]._4_4_ = local_48[0]._4_4_;
  local_78[1]._0_4_ = (undefined4)local_48[1];
  local_78[1]._4_4_ = local_48[1]._4_4_;
  local_58 = (code *)local_88;
  uStack_50 = uVar10;
  local_48[0]._0_4_ = uVar4;
  local_48[0]._4_4_ = uVar5;
  local_48[1]._0_4_ = uVar6;
  local_48[1]._4_4_ = uVar7;
  bVar11 = local_88 != 0;
  local_88 = (longlong)pcVar9;
  if (bVar11) {
    plVar8 = local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar8 = plStack_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable((void *)local_88);
  lVar3 = local_88;
  plVar8 = local_78;
  if (plStack_60 != (longlong *)0x0) {
    plVar8 = plStack_60;
  }
  uVar10 = (**(code **)(*plVar8 + 8))();
  local_98._0_8_ = (*(code *)lVar3)(uVar10);
  CreateDocumentHandle(__return_storage_ptr__,(FDocumentAccessPtr *)local_98);
  return __return_storage_ptr__;
}

// CreateDocumentHandle @ 14adab380

TSharedRef<Metasound::Frontend::IDocumentController,1> * __cdecl
Metasound::Frontend::IDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__,
          FDocumentAccessPtr *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FDocumentAccessPtr local_48;
  
  local_48._0_8_ = *(undefined8 *)param_1;
  local_48._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_48._56_8_ = 0;
  if (local_48._16_8_ != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar1)(puVar1,&local_48.field_0x20);
  }
  FDocumentController::CreateDocumentHandle(__return_storage_ptr__,&local_48);
  if (*(longlong *)&param_1->field_0x10 != 0) {
    plVar2 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetInvalidHandle @ 14adbfbc0

TSharedRef<Metasound::Frontend::IDocumentController,1> * __cdecl
Metasound::Frontend::IDocumentController::GetInvalidHandle
          (TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  IDocumentController *pIVar11;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_14adbfbec;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_14adbfbec;
  pTVar8 = ::operator_new(0x28);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar11 = (IDocumentController *)&DAT_00000010;
LAB_14adbfcf6:
    if (((*(longlong *)&pIVar11->field_0x8 == 0) || (*(longlong *)&pIVar11->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar11->field_0x10 + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IDocumentController **)&pIVar11->field_0x8 = pIVar11;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pIVar11->field_0x10) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pIVar11->field_0x10;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar11->field_0x10 = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pIVar11 = (IDocumentController *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInvalidDocumentController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[1]._padding_ = (longlong)&___7FInvalidDocumentController_Frontend_Metasound__6B_;
    pTVar10 = pTVar8;
    if (pIVar11 != (IDocumentController *)0x0) goto LAB_14adbfcf6;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::Frontend::IDocumentController,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  ::Invalid.Object = pIVar11;
  ::Invalid.SharedReferenceCount.ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  atexit(`Metasound::Frontend::IDocumentController::GetInvalidHandle'::__l2::
         _dynamic_atexit_destructor_for__Invalid__);
  _Init_thread_footer(&::_TSS0);
LAB_14adbfbec:
  __return_storage_ptr__->Object = ::Invalid.Object;
  FVar6 = ::Invalid.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       ::Invalid.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

