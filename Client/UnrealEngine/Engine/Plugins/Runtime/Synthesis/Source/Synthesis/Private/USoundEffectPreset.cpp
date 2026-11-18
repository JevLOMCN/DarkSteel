// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 11

// EffectCommand<FSubmixEffectDelay> @ 14f0ab980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::EffectCommand<FSubmixEffectDelay>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSubmixEffectDelay_&)> *param_1)

{
  int iVar1;
  FSubmixEffectDelay *pFVar2;
  atomic<int> aVar3;
  TFunction<void___cdecl(FSubmixEffectDelay_&)> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  void *this_00;
  undefined8 *puVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  LPCRITICAL_SECTION local_b0;
  TFunction<void___cdecl(FSubmixEffectDelay_&)> *local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = *(longlong *)param_1;
  local_40 = (longlong *)0x0;
  local_a8 = param_1;
  if (local_68 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_58);
  }
  local_98 = (code *)0x0;
  local_70 = FMemory::Malloc(0x40,0x10);
  *local_70 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar8 = local_70 + 2;
  *plVar8 = local_68;
  local_70[7] = (longlong)local_40;
  local_40 = (longlong *)0x0;
  *(undefined4 *)(local_70 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)local_70 + 0x24) = local_58._4_4_;
  *(undefined4 *)(local_70 + 5) = uStack_50;
  *(undefined4 *)((longlong)local_70 + 0x2c) = uStack_4c;
  local_70[6] = local_48;
  if (*plVar8 != 0) {
    local_68 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
               ::Call;
  }
  local_b0 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  iVar1 = (this->Instances).ArrayNum;
  pFVar11 = (this->Instances).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_b8);
      }
      if (pFVar11 == pFVar10) {
        LeaveCriticalSection(local_b0);
        pTVar4 = local_a8;
        if (local_98 != (code *)0x0) {
          plVar8 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar8 = local_70;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (local_68 != 0) {
          plVar8 = &local_58;
          if (local_40 != (longlong *)0x0) {
            plVar8 = local_40;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (*(longlong *)pTVar4 != 0) {
          plVar8 = (longlong *)&pTVar4->field_0x10;
          if (*(longlong **)&pTVar4->field_0x28 != (longlong *)0x0) {
            plVar8 = *(longlong **)&pTVar4->field_0x28;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        return;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0abaf0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0abaf0;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pFVar2 = *(FSubmixEffectDelay **)pFVar11;
    if (pFVar2 == (FSubmixEffectDelay *)0x0) goto LAB_14f0abaf0;
    UE::Core::Private::Function::CheckCallable(local_98);
    pcVar5 = local_98;
    plVar8 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    this_00 = (void *)(**(code **)(*plVar8 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
                  ::Call) {
      `USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()
                (this_00,pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      (*pcVar5)();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
  } while( true );
}

// EffectCommand<FSubmixEffectFilter> @ 14f0abc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSubmixEffectFilter_&)> *param_1)

{
  int iVar1;
  FSubmixEffectFilter *pFVar2;
  atomic<int> aVar3;
  TFunction<void___cdecl(FSubmixEffectFilter_&)> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  void *this_00;
  undefined8 *puVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  LPCRITICAL_SECTION local_b0;
  TFunction<void___cdecl(FSubmixEffectFilter_&)> *local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = *(longlong *)param_1;
  local_40 = (longlong *)0x0;
  local_a8 = param_1;
  if (local_68 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_58);
  }
  local_98 = (code *)0x0;
  local_70 = FMemory::Malloc(0x40,0x10);
  *local_70 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar8 = local_70 + 2;
  *plVar8 = local_68;
  local_70[7] = (longlong)local_40;
  local_40 = (longlong *)0x0;
  *(undefined4 *)(local_70 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)local_70 + 0x24) = local_58._4_4_;
  *(undefined4 *)(local_70 + 5) = uStack_50;
  *(undefined4 *)((longlong)local_70 + 0x2c) = uStack_4c;
  local_70[6] = local_48;
  if (*plVar8 != 0) {
    local_68 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
               ::Call;
  }
  local_b0 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  iVar1 = (this->Instances).ArrayNum;
  pFVar11 = (this->Instances).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_b8);
      }
      if (pFVar11 == pFVar10) {
        LeaveCriticalSection(local_b0);
        pTVar4 = local_a8;
        if (local_98 != (code *)0x0) {
          plVar8 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar8 = local_70;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (local_68 != 0) {
          plVar8 = &local_58;
          if (local_40 != (longlong *)0x0) {
            plVar8 = local_40;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (*(longlong *)pTVar4 != 0) {
          plVar8 = (longlong *)&pTVar4->field_0x10;
          if (*(longlong **)&pTVar4->field_0x28 != (longlong *)0x0) {
            plVar8 = *(longlong **)&pTVar4->field_0x28;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        return;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0abda0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0abda0;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pFVar2 = *(FSubmixEffectFilter **)pFVar11;
    if (pFVar2 == (FSubmixEffectFilter *)0x0) goto LAB_14f0abda0;
    UE::Core::Private::Function::CheckCallable(local_98);
    pcVar5 = local_98;
    plVar8 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    this_00 = (void *)(**(code **)(*plVar8 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                  ::Call) {
      `USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()
                (this_00,pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      (*pcVar5)();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
  } while( true );
}

// EffectCommand<FSubmixEffectMultibandCompressor> @ 14f0abee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
          (USoundEffectPreset *this,
          TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  code *local_78 [5];
  undefined8 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)param_1;
  local_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_38);
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x40,0x10);
  *local_50 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_50 + 2;
  *plVar2 = local_48;
  local_50[7] = local_20;
  local_20 = (longlong *)0x0;
  local_50[4] = local_38;
  local_50[5] = uStack_30;
  local_50[6] = local_28;
  if (*plVar2 != 0) {
    local_48 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                  ::Call;
  }
  IterateEffects<FSubmixEffectMultibandCompressor>
            (this,(TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_78);
  if (local_48 != 0) {
    plVar2 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// EffectCommand<FSubmixEffectTapDelay> @ 14f0ac020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *param_1)

{
  int iVar1;
  FSubmixEffectTapDelay *pFVar2;
  atomic<int> aVar3;
  TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  void *this_00;
  undefined8 *puVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  LPCRITICAL_SECTION local_b0;
  TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = *(longlong *)param_1;
  local_40 = (longlong *)0x0;
  local_a8 = param_1;
  if (local_68 != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_58);
  }
  local_98 = (code *)0x0;
  local_70 = FMemory::Malloc(0x40,0x10);
  *local_70 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar8 = local_70 + 2;
  *plVar8 = local_68;
  local_70[7] = (longlong)local_40;
  local_40 = (longlong *)0x0;
  *(undefined4 *)(local_70 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)local_70 + 0x24) = local_58._4_4_;
  *(undefined4 *)(local_70 + 5) = uStack_50;
  *(undefined4 *)((longlong)local_70 + 0x2c) = uStack_4c;
  local_70[6] = local_48;
  if (*plVar8 != 0) {
    local_68 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
               ::Call;
  }
  local_b0 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_b0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_b0);
  iVar1 = (this->Instances).ArrayNum;
  pFVar11 = (this->Instances).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_b8);
      }
      if (pFVar11 == pFVar10) {
        LeaveCriticalSection(local_b0);
        pTVar4 = local_a8;
        if (local_98 != (code *)0x0) {
          plVar8 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar8 = local_70;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (local_68 != 0) {
          plVar8 = &local_58;
          if (local_40 != (longlong *)0x0) {
            plVar8 = local_40;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (*(longlong *)pTVar4 != 0) {
          plVar8 = (longlong *)&pTVar4->field_0x10;
          if (*(longlong **)&pTVar4->field_0x28 != (longlong *)0x0) {
            plVar8 = *(longlong **)&pTVar4->field_0x28;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        return;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0ac190:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0ac190;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pFVar2 = *(FSubmixEffectTapDelay **)pFVar11;
    if (pFVar2 == (FSubmixEffectTapDelay *)0x0) goto LAB_14f0ac190;
    UE::Core::Private::Function::CheckCallable(local_98);
    pcVar5 = local_98;
    plVar8 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar8 = local_70;
    }
    this_00 = (void *)(**(code **)(*plVar8 + 8))();
    if (pcVar5 == UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
                  ::Call) {
      `USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()
                (this_00,pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      (*pcVar5)();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
  } while( true );
}

// IterateEffects<FSourceEffectBitCrusher> @ 14f0b1b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  LPCRITICAL_SECTION local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_40 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_40);
  iVar1 = (this->Instances).ArrayNum;
  pFVar10 = (this->Instances).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_48);
      }
      if (pFVar10 == pFVar9) {
        LeaveCriticalSection(local_40);
        if (*(longlong *)param_1 != 0) {
          plVar7 = (longlong *)&param_1->field_0x10;
          if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&param_1->field_0x28;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        return;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0b1be5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0b1be5;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    lVar2 = *(longlong *)pFVar10;
    if (lVar2 == 0) goto LAB_14f0b1be5;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar6,lVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// IterateEffects<FSourceEffectChorus> @ 14f0b1ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::IterateEffects<FSourceEffectChorus>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSourceEffectChorus_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  LPCRITICAL_SECTION local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_40 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_40);
  iVar1 = (this->Instances).ArrayNum;
  pFVar10 = (this->Instances).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_48);
      }
      if (pFVar10 == pFVar9) {
        LeaveCriticalSection(local_40);
        if (*(longlong *)param_1 != 0) {
          plVar7 = (longlong *)&param_1->field_0x10;
          if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&param_1->field_0x28;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        return;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0b1d45:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0b1d45;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    lVar2 = *(longlong *)pFVar10;
    if (lVar2 == 0) goto LAB_14f0b1d45;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar6,lVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// IterateEffects<FSubmixEffectMultibandCompressor> @ 14f0b1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::IterateEffects<FSubmixEffectMultibandCompressor>
          (USoundEffectPreset *this,
          TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  LPCRITICAL_SECTION local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_40 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_40);
  iVar1 = (this->Instances).ArrayNum;
  pFVar10 = (this->Instances).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_48);
      }
      if (pFVar10 == pFVar9) {
        LeaveCriticalSection(local_40);
        if (*(longlong *)param_1 != 0) {
          plVar7 = (longlong *)&param_1->field_0x10;
          if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&param_1->field_0x28;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        return;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14f0b1ea5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f0b1ea5;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    lVar2 = *(longlong *)pFVar10;
    if (lVar2 == 0) goto LAB_14f0b1ea5;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar6,lVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// operator() @ 14f0c16e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectDelay *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  FSubmixEffectDelay *local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)this;
  local_20 = (longlong *)0x0;
  local_58 = param_1;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)this + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&local_38);
  }
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x50,0x10);
  *local_60 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z_QEBA_AEAVFSubmixEffectDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[2] = local_58;
  local_60[4] = local_48;
  local_60[9] = local_20;
  local_20 = (longlong *)0x0;
  local_60[6] = local_38;
  local_60[7] = uStack_30;
  local_60[8] = local_28;
  if (local_60[4] != 0) {
    local_48 = 0;
  }
  if (local_60 + 2 != (undefined8 *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_1,(TUniqueFunction<void___cdecl(void)> *)local_88);
  if (local_48 != 0) {
    plVar2 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// operator() @ 14f0c1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectFilter *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  FSubmixEffectFilter *local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)this;
  local_20 = (longlong *)0x0;
  local_58 = param_1;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)this + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&local_38);
  }
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x50,0x10);
  *local_60 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z_QEBA_AEAVFSubmixEffectFilter___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[2] = local_58;
  local_60[4] = local_48;
  local_60[9] = local_20;
  local_20 = (longlong *)0x0;
  local_60[6] = local_38;
  local_60[7] = uStack_30;
  local_60[8] = local_28;
  if (local_60[4] != 0) {
    local_48 = 0;
  }
  if (local_60 + 2 != (undefined8 *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_1,(TUniqueFunction<void___cdecl(void)> *)local_88);
  if (local_48 != 0) {
    plVar2 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// operator() @ 14f0c1940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectMultibandCompressor *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  FSubmixEffectMultibandCompressor *local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)this;
  local_20 = (longlong *)0x0;
  local_58 = param_1;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)this + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&local_38);
  }
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x50,0x10);
  *local_60 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z_QEBA_AEAVFSubmixEffectMultibandCompressor___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[2] = local_58;
  local_60[4] = local_48;
  local_60[9] = local_20;
  local_20 = (longlong *)0x0;
  local_60[6] = local_38;
  local_60[7] = uStack_30;
  local_60[8] = local_28;
  if (local_60[4] != 0) {
    local_48 = 0;
  }
  if (local_60 + 2 != (undefined8 *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_1,(TUniqueFunction<void___cdecl(void)> *)local_88);
  if (local_48 != 0) {
    plVar2 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// operator() @ 14f0c1a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectTapDelay *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  FSubmixEffectTapDelay *local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)this;
  local_20 = (longlong *)0x0;
  local_58 = param_1;
  if (local_48 != 0) {
    puVar1 = (undefined8 *)((longlong)this + 0x10);
    if (*(undefined8 **)((longlong)this + 0x28) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)((longlong)this + 0x28);
    }
    (**(code **)*puVar1)(puVar1,&local_38);
  }
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x50,0x10);
  *local_60 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z_QEBA_AEAVFSubmixEffectTapDelay___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_60[2] = local_58;
  local_60[4] = local_48;
  local_60[9] = local_20;
  local_20 = (longlong *)0x0;
  local_60[6] = local_38;
  local_60[7] = uStack_30;
  local_60[8] = local_28;
  if (local_60[4] != 0) {
    local_48 = 0;
  }
  if (local_60 + 2 != (undefined8 *)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  FSoundEffectBase::EffectCommand
            ((FSoundEffectBase *)param_1,(TUniqueFunction<void___cdecl(void)> *)local_88);
  if (local_48 != 0) {
    plVar2 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

