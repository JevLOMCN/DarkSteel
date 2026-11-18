// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix> @ 1464d1f10

TSharedPtr<FSoundEffectSubmix,1> * __cdecl
USoundEffectPreset::CreateInstance<FSoundEffectSubmixInitData,FSoundEffectSubmix>
          (TSharedPtr<FSoundEffectSubmix,1> *__return_storage_ptr__,
          FSoundEffectSubmixInitData *param_1,USoundEffectPreset *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  FSoundEffectSubmix *pFVar6;
  USoundEffectPreset *local_res8;
  TSharedPtr<FSoundEffectBase,1> local_18;
  
  pFVar6 = (FSoundEffectSubmix *)(**(code **)(param_2->_padding_ + 0x2d0))(param_2);
  local_res8 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar6->field_0x4c,(FObjectPtr)&local_res8);
  lVar1 = *(longlong *)pFVar6;
  *(uint *)&pFVar6->field_0x54 = param_1->ParentPresetUniqueId;
  uVar2 = *(undefined4 *)&param_1->field_0x4;
  uVar3 = *(undefined4 *)&param_1->PresetSettings;
  uVar4 = *(undefined4 *)((longlong)&param_1->PresetSettings + 4);
  (pFVar6->InitData_Internal).DeviceID = param_1->DeviceID;
  *(undefined4 *)&(pFVar6->InitData_Internal).field_0x4 = uVar2;
  *(undefined4 *)&(pFVar6->InitData_Internal).PresetSettings = uVar3;
  *(undefined4 *)((longlong)&(pFVar6->InitData_Internal).PresetSettings + 4) = uVar4;
  uVar5 = param_1->ParentPresetUniqueId;
  (pFVar6->InitData_Internal).SampleRate = param_1->SampleRate;
  (pFVar6->InitData_Internal).ParentPresetUniqueId = uVar5;
  (**(code **)(lVar1 + 0x48))(pFVar6,param_1);
  __return_storage_ptr__->Object = pFVar6;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (FSoundEffectBase *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSoundEffectSubmix__U__DefaultDeleter_VFSoundEffectSubmix___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar6;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    local_18.Object = (FSoundEffectBase *)__return_storage_ptr__->Object;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddEffectInstance(param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// EffectCommand<FSubmixEffectDynamicsProcessor> @ 146537db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>
          (USoundEffectPreset *this,
          TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *param_1)

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
              ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z__0A__00_Function_Private_Core_UE__6B_
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
                  TFunctionRefCaller<`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>,void,FSubmixEffectDynamicsProcessor_&>
                  ::Call;
  }
  IterateEffects<FSubmixEffectDynamicsProcessor>
            (this,(TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *)local_78);
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

// IterateEffects<FSubmixEffectDynamicsProcessor> @ 14653a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::IterateEffects<FSubmixEffectDynamicsProcessor>
          (USoundEffectPreset *this,
          TFunction<void___cdecl(FSubmixEffectDynamicsProcessor_&)> *param_1)

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
LAB_14653a875:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14653a875;
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
    if (lVar2 == 0) goto LAB_14653a875;
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

// operator() @ 146542710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectDynamicsProcessor *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  FSubmixEffectDynamicsProcessor *local_58;
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
              ___7__TFunction_OwnedObject_V<lambda_1>__1___R1_1____EffectCommand_VFSubmixEffectDynamicsProcessor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDynamicsProcessor___Z___Z_QEBA_AEAVFSubmixEffectDynamicsProcessor___Z__00_00_Function_Private_Core_UE__6B_
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
                  TFunctionRefCaller<``USoundEffectPreset::EffectCommand<FSubmixEffectDynamicsProcessor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
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

// OnInit @ 146563ea0

void __thiscall USoundEffectPreset::OnInit(USoundEffectPreset *this)

{
  return;
}

