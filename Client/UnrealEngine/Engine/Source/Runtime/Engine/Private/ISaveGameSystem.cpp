// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// operator() @ 1484bef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::DeleteGameAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_c8 [32];
  code *local_a8 [5];
  undefined8 *local_80;
  FString local_78;
  undefined4 local_68;
  undefined1 local_64;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar1 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                    ((FPlatformUserId)*(int *)((longlong)this + 0x20));
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)((longlong)this + 0x10);
  }
  local_64 = (**(code **)(**(longlong **)this + 0x38))
                       (*(longlong **)this,*(undefined1 *)((longlong)this + 8),pwVar4,iVar1);
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    this_00 = *(ISaveGameSystem **)this;
    ::FString::FString(&local_78,(FString *)((longlong)this + 0x10));
    local_58 = *(longlong *)((longlong)this + 0x30);
    local_68 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = (longlong *)0x0;
    if (local_58 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x40);
      if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x58);
      }
      (**(code **)*puVar2)(puVar2,&local_48);
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x60,0x10);
    local_80[2] = 0;
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::DeleteGameAsync'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_80[2] = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_80 + 3) = local_78.Data.ArrayNum;
    *(int *)((longlong)local_80 + 0x1c) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    *(undefined4 *)(local_80 + 4) = local_68;
    *(undefined1 *)((longlong)local_80 + 0x24) = local_64;
    local_80[6] = local_58;
    local_80[0xb] = local_30;
    local_30 = (longlong *)0x0;
    local_80[8] = local_48;
    local_80[9] = uStack_40;
    local_80[10] = local_38;
    if (local_80[6] != 0) {
      local_58 = 0;
    }
    if (local_80 + 2 != (undefined8 *)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::DeleteGameAsync'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_a8);
    if (local_58 != 0) {
      plVar3 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1484bf0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::DoesSaveGameExistAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_c8 [32];
  code *local_a8 [5];
  undefined8 *local_80;
  FString local_78;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  iVar1 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                    ((FPlatformUserId)*(int *)((longlong)this + 0x18));
  if (*(int *)((longlong)this + 0x10) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)((longlong)this + 8);
  }
  local_64 = (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,pwVar4,iVar1);
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    this_00 = *(ISaveGameSystem **)this;
    ::FString::FString(&local_78,(FString *)((longlong)this + 8));
    local_58 = *(longlong *)((longlong)this + 0x20);
    local_68 = *(undefined4 *)((longlong)this + 0x18);
    local_30 = (longlong *)0x0;
    if (local_58 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)(puVar2,&local_48);
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x60,0x10);
    local_80[2] = 0;
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::DoesSaveGameExistAsync'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_80[2] = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_80 + 3) = local_78.Data.ArrayNum;
    *(int *)((longlong)local_80 + 0x1c) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    *(undefined4 *)(local_80 + 4) = local_68;
    *(undefined4 *)((longlong)local_80 + 0x24) = local_64;
    local_80[6] = local_58;
    local_80[0xb] = local_30;
    local_30 = (longlong *)0x0;
    local_80[8] = local_48;
    local_80[9] = uStack_40;
    local_80[10] = local_38;
    if (local_80[6] != 0) {
      local_58 = 0;
    }
    if (local_80 + 2 != (undefined8 *)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::DoesSaveGameExistAsync'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_a8);
    if (local_58 != 0) {
      plVar3 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1484bf270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::GetSaveGameNamesAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FString *local_a8;
  undefined8 local_a0;
  code *local_98 [5];
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_64;
  FString *local_60;
  undefined8 local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = (FString *)0x0;
  local_a0 = 0;
  iVar2 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                    ((FPlatformUserId)*(int *)((longlong)this + 8));
  uVar1 = (**(code **)(**(longlong **)this + 0x20))(*(longlong **)this,&local_a8,iVar2);
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    local_68 = *(undefined4 *)((longlong)this + 8);
    local_60 = local_a8;
    local_58._0_4_ = (int)local_a0;
    local_58._4_4_ = local_a0._4_4_;
    local_a8 = (FString *)0x0;
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    local_a0 = 0;
    local_20 = (longlong *)0x0;
    this_00 = *(ISaveGameSystem **)this;
    local_64 = uVar1;
    local_48 = *(longlong *)((longlong)this + 0x10);
    (**(code **)*puVar3)(puVar3,&local_38);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x60,0x10);
    *local_70 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::GetSaveGameNamesAsync'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(undefined4 *)(local_70 + 2) = local_68;
    local_70[3] = 0;
    *(undefined1 *)((longlong)local_70 + 0x14) = local_64;
    local_70[3] = local_60;
    local_60 = (FString *)0x0;
    *(int *)(local_70 + 4) = (int)local_58;
    *(undefined4 *)((longlong)local_70 + 0x24) = local_58._4_4_;
    local_58 = 0;
    local_70[6] = local_48;
    local_70[0xb] = local_20;
    local_20 = (longlong *)0x0;
    local_70[8] = local_38;
    local_70[9] = uStack_30;
    local_70[10] = local_28;
    if (local_70[6] != 0) {
      local_48 = 0;
    }
    if (local_70 + 2 != (undefined8 *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::GetSaveGameNamesAsync'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_98);
    if (local_48 != 0) {
      plVar4 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar4 = local_20;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    DestructItems<FString,int>(local_60,(int)local_58);
    if (local_60 != (FString *)0x0) {
      FMemory::Free(local_60);
    }
  }
  DestructItems<FString,int>(local_a8,(int)local_a0);
  if (local_a8 != (FString *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// operator() @ 1484bf440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::LoadGameAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStack_f8 [32];
  TReferenceControllerBase<1> *local_d8;
  code *local_c8 [5];
  undefined8 *local_a0;
  FString local_98;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar5 = ::operator_new(0x20);
  pwVar8 = L"";
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9 = pTVar5 + 1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_EV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  iVar4 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                    ((FPlatformUserId)*(int *)((longlong)this + 0x20));
  if (*(int *)((longlong)this + 0x18) != 0) {
    pwVar8 = *(wchar_t **)((longlong)this + 0x10);
  }
  local_d8 = pTVar9;
  uVar3 = (**(code **)(**(longlong **)this + 0x30))
                    (*(longlong **)this,*(undefined1 *)((longlong)this + 8),pwVar8,iVar4);
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    this_00 = *(ISaveGameSystem **)this;
    ::FString::FString(&local_98,(FString *)((longlong)this + 0x10));
    local_78 = *(longlong *)((longlong)this + 0x30);
    local_88 = *(undefined4 *)((longlong)this + 0x20);
    local_50 = (longlong *)0x0;
    local_84 = uVar3;
    if (local_78 != 0) {
      puVar6 = (undefined8 *)((longlong)this + 0x40);
      if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)((longlong)this + 0x58);
      }
      (**(code **)*puVar6)(puVar6,&local_68);
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8[0] = (code *)0x0;
    local_48 = pTVar9;
    local_40 = pTVar5;
    local_a0 = FMemory::Malloc(0x70,0x10);
    local_a0[2] = 0;
    *local_a0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::LoadGameAsync'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_a0[2] = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_a0 + 3) = local_98.Data.ArrayNum;
    *(int *)((longlong)local_a0 + 0x1c) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    *(undefined4 *)(local_a0 + 4) = local_88;
    *(undefined1 *)((longlong)local_a0 + 0x24) = local_84;
    local_a0[6] = local_78;
    local_a0[0xb] = local_50;
    local_50 = (longlong *)0x0;
    local_a0[8] = local_68;
    local_a0[9] = uStack_60;
    local_a0[10] = local_58;
    if (local_a0[6] != 0) {
      local_78 = 0;
    }
    local_a0[0xc] = local_48;
    local_a0[0xd] = local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_a0 + 2 != (undefined8 *)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::LoadGameAsync'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (local_78 != 0) {
      plVar7 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// operator() @ 1484bf6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::LoadGameIfExistsAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_108 [32];
  TReferenceControllerBase<1> *local_e8;
  int local_d8;
  code *local_c8 [5];
  undefined8 *local_a0;
  FString local_98;
  undefined4 local_88;
  undefined1 local_84;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar5 = ::operator_new(0x20);
  pwVar9 = L"";
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10 = pTVar5 + 1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_EV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ = 0;
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_d8 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                       ((FPlatformUserId)*(int *)((longlong)this + 0x20));
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)((longlong)this + 0x10);
  }
  uVar3 = 0;
  iVar4 = (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,pwVar8,local_d8);
  if (iVar4 == 0) {
    if (*(int *)((longlong)this + 0x18) != 0) {
      pwVar9 = *(wchar_t **)((longlong)this + 0x10);
    }
    local_e8 = pTVar10;
    uVar3 = (**(code **)(**(longlong **)this + 0x30))
                      (*(longlong **)this,*(undefined1 *)((longlong)this + 8),pwVar9,local_d8);
  }
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    this_00 = *(ISaveGameSystem **)this;
    ::FString::FString(&local_98,(FString *)((longlong)this + 0x10));
    local_88 = *(undefined4 *)((longlong)this + 0x20);
    local_78 = *(longlong *)((longlong)this + 0x30);
    local_50 = (longlong *)0x0;
    local_84 = uVar3;
    if (local_78 != 0) {
      puVar6 = (undefined8 *)((longlong)this + 0x40);
      if (*(undefined8 **)((longlong)this + 0x58) != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)((longlong)this + 0x58);
      }
      (**(code **)*puVar6)(puVar6,&local_68);
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8[0] = (code *)0x0;
    local_48 = pTVar10;
    local_40 = pTVar5;
    local_a0 = FMemory::Malloc(0x70,0x10);
    local_a0[2] = 0;
    *local_a0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::LoadGameIfExistsAsync'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>,0,1>
                 ::_vftable_;
    local_a0[2] = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_a0 + 3) = local_98.Data.ArrayNum;
    *(int *)((longlong)local_a0 + 0x1c) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    *(undefined4 *)(local_a0 + 4) = local_88;
    *(undefined1 *)((longlong)local_a0 + 0x24) = local_84;
    local_a0[6] = local_78;
    local_a0[0xb] = local_50;
    local_50 = (longlong *)0x0;
    local_a0[8] = local_68;
    local_a0[9] = uStack_60;
    local_a0[10] = local_58;
    if (local_a0[6] != 0) {
      local_78 = 0;
    }
    local_a0[0xc] = local_48;
    local_a0[0xd] = local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_a0 + 2 != (undefined8 *)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::LoadGameIfExistsAsync'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (local_78 != 0) {
      plVar7 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// operator() @ 1484bfa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISaveGameSystem::SaveGameAsync'::__l2::<lambda_1>::operator()(void *this)

{
  ISaveGameSystem *this_00;
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  code *local_a8 [5];
  undefined8 *local_80;
  FString local_78;
  undefined4 local_68;
  undefined1 local_64;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = FGenericPlatformMisc::GetUserIndexForPlatformUser
                    ((FPlatformUserId)*(int *)((longlong)this + 0x20));
  local_b8 = *(undefined8 *)((longlong)this + 0x28);
  if (*(int *)((longlong)this + 0x18) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = *(wchar_t **)((longlong)this + 0x10);
  }
  local_64 = (**(code **)(**(longlong **)this + 0x28))
                       (*(longlong **)this,*(undefined1 *)((longlong)this + 8),pwVar4,iVar1);
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    this_00 = *(ISaveGameSystem **)this;
    ::FString::FString(&local_78,(FString *)((longlong)this + 0x10));
    local_58 = *(longlong *)((longlong)this + 0x40);
    local_68 = *(undefined4 *)((longlong)this + 0x20);
    local_30 = (longlong *)0x0;
    if (local_58 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x50);
      if (*(undefined8 **)((longlong)this + 0x68) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x68);
      }
      (**(code **)*puVar2)(puVar2,&local_48);
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x60,0x10);
    local_80[2] = 0;
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``ISaveGameSystem::SaveGameAsync'::`2'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_80[2] = local_78.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_80 + 3) = local_78.Data.ArrayNum;
    *(int *)((longlong)local_80 + 0x1c) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    *(undefined4 *)(local_80 + 4) = local_68;
    *(undefined1 *)((longlong)local_80 + 0x24) = local_64;
    local_80[6] = local_58;
    local_80[0xb] = local_30;
    local_30 = (longlong *)0x0;
    local_80[8] = local_48;
    local_80[9] = uStack_40;
    local_80[10] = local_38;
    if (local_80[6] != 0) {
      local_58 = 0;
    }
    if (local_80 + 2 != (undefined8 *)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``ISaveGameSystem::SaveGameAsync'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    ISaveGameSystem::OnAsyncComplete(this_00,(TFunction<void___cdecl(void)> *)local_a8);
    if (local_58 != 0) {
      plVar3 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DeleteGameAsync @ 1484cfd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::DeleteGameAsync
          (ISaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool)> *param_4)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 *puVar6;
  FTaskBase *this_01;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_d8 [32];
  FString local_98;
  ISaveGameSystem *local_88;
  undefined1 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  int local_68;
  FPipe *local_58;
  undefined8 local_48;
  atomic<unsigned___int64> aStack_40;
  undefined8 local_38;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ::FString::FString(&local_98,param_2);
  _Src.Data = local_98.Data.AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_98.Data.ArrayNum;
  local_70 = CONCAT44(local_70._4_4_,iVar9);
  local_88 = this;
  local_80 = param_1;
  if (iVar9 == 0) {
    local_70 = local_98.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_78,iVar9,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src.Data,(longlong)iVar9 * 2);
  }
  local_58 = *(FPipe **)param_4;
  local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  local_68 = param_3.InternalId;
  if (local_58 != (FPipe *)0x0) {
    puVar6 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_48);
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::DeleteGameAsync'::`2'::<lambda_1>,void,void>::
          _vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 != (FTask *)0x0) {
      this_01 = *(FTaskBase **)&pFVar5->field_0x30;
    }
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbdf400;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)local_88;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = local_80;
    this_00[1]._padding_ = (longlong)local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_00[1]._padding_ = (undefined4)local_70;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = local_70._4_4_;
    local_70 = 0;
    *(int *)&this_00[1]._padding_ = local_68;
    this_00[1].Pipe = local_58;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = local_30;
    local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)local_48;
    this_00[1]._padding_ = local_48._4_4_;
    this_00[1].TraceId = aStack_40;
    *(undefined8 *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_38;
    if (this_00[1].Pipe != (FPipe *)0x0) {
      local_58 = (FPipe *)0x0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`ISaveGameSystem::DeleteGameAsync'::`2'::<lambda_1>_>
          ::_vftable_;
    this_01 = this_00;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  if (local_58 != (FPipe *)0x0) {
    FVar7 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_48;
    if (local_30 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar7 = local_30;
    }
    (**(code **)(*(longlong *)FVar7 + 0x10))();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// DoesSaveGameExistAsync @ 1484d4f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::DoesSaveGameExistAsync
          (ISaveGameSystem *this,wchar_t *param_1,FPlatformUserId param_2,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,ISaveGameSystem::ESaveExistsResult)>
          *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 *puVar6;
  FTaskBase *this_01;
  atomic<unsigned___int64> aVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_d8 [32];
  FString local_98;
  ISaveGameSystem *local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  FPipe *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  atomic<unsigned___int64> local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ::FString::FString(&local_98,param_1);
  _Src.Data = local_98.Data.AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_98.Data.ArrayNum;
  local_78 = CONCAT44(local_78._4_4_,iVar9);
  local_88 = this;
  if (iVar9 == 0) {
    local_78 = local_98.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_80,iVar9,(int *)((longlong)&local_78 + 4));
    memcpy(local_80.Data,_Src.Data,(longlong)iVar9 * 2);
  }
  local_68 = *(longlong *)param_3;
  local_40 = (atomic<unsigned___int64>)0x0;
  local_70 = param_2.InternalId;
  if (local_68 != 0) {
    puVar6 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_58);
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::DoesSaveGameExistAsync'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 != (FTask *)0x0) {
      this_01 = *(FTaskBase **)&pFVar5->field_0x30;
    }
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbd4400;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)local_88;
    this_00[1]._padding_ = (longlong)local_80.Data;
    local_80.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_00[1]._padding_ = (undefined4)local_78;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = local_78._4_4_;
    local_78 = 0;
    *(int *)&this_00[1]._padding_ = local_70;
    this_00[1]._padding_ = local_68;
    this_00[1].TraceId = local_40;
    local_40 = (atomic<unsigned___int64>)0x0;
    this_00[1].Pipe = local_58;
    this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)(undefined4)uStack_50;
    this_00[1].ExtendedPriority = uStack_50._4_1_;
    this_00[1].TaskTriggered = (atomic<bool>)uStack_50._5_1_;
    this_00[1]._padding_ = uStack_50._6_2_;
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)local_48;
    this_00[1]._padding_ = local_48._4_4_;
    if (this_00[1]._padding_ != 0) {
      local_68 = 0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`ISaveGameSystem::DoesSaveGameExistAsync'::`2'::<lambda_1>_>::_vftable_;
    this_01 = this_00;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  if (local_68 != 0) {
    aVar7 = (atomic<unsigned___int64>)&local_58;
    if (local_40 != (atomic<unsigned___int64>)0x0) {
      aVar7 = local_40;
    }
    (**(code **)(*(longlong *)aVar7 + 0x10))();
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_3 != 0) {
    plVar8 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// GetSaveGameNamesAsync @ 1484dac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::GetSaveGameNamesAsync
          (ISaveGameSystem *this,FPlatformUserId param_1,
          TFunction<void___cdecl(FPlatformUserId,bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&)>
          *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  ISaveGameSystem *local_58;
  int local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  FPipe *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = *(longlong *)param_2;
  local_20 = (longlong *)0x0;
  local_58 = this;
  local_50 = param_1.InternalId;
  if (local_48 != 0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_38);
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::GetSaveGameNamesAsync'::`2'::<lambda_1>,void,void>::
          _vftable_;
    if ((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) {
      local_68 = (uint)*(undefined8 *)&(this_00->LowLevelTask).field_0x38 & 0x3f;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 == (FTask *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)&pFVar5->field_0x30;
    }
    *(undefined8 *)&(this_00->LowLevelTask).field_0x30 = uVar7;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbe2000;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)local_58;
    *(int *)&this_00[1]._padding_ = local_50;
    this_00[1]._padding_ = local_48;
    *(longlong **)&this_00[1].StateChangeEvent = local_20;
    local_20 = (longlong *)0x0;
    this_00[1]._padding_ = local_38;
    this_00[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_30;
    this_00[1].NumLocks = (atomic<unsigned_int>)uStack_30._4_4_;
    this_00[1].Pipe = local_28;
    if (this_00[1]._padding_ != 0) {
      local_48 = 0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`ISaveGameSystem::GetSaveGameNamesAsync'::`2'::<lambda_1>_>::_vftable_;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  if (local_48 != 0) {
    plVar8 = &local_38;
    if (local_20 != (longlong *)0x0) {
      plVar8 = local_20;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// InitAsync @ 1484dc640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::InitAsync
          (ISaveGameSystem *this,bool param_1,FPlatformUserId param_2,
          TFunction<void___cdecl(FPlatformUserId,bool)> *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  int local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = *(longlong *)param_3;
  if (local_48 != 0) {
    local_20 = (longlong *)0x0;
    puVar1 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_3->field_0x28;
    }
    local_58 = param_2.InternalId;
    (**(code **)*puVar1)(puVar1,&local_38);
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x50,0x10);
    *local_60 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ISaveGameSystem::InitAsync'::`5'::<lambda_1>,0,1>::_vftable_
    ;
    *(int *)(local_60 + 2) = local_58;
    local_60[4] = local_48;
    local_60[9] = local_20;
    local_20 = (longlong *)0x0;
    local_60[6] = local_38;
    local_60[7] = uStack_30;
    local_60[8] = local_28;
    if (local_60[4] != 0) {
      local_48 = 0;
    }
    if ((int *)(local_60 + 2) != (int *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ISaveGameSystem::InitAsync'::__l5::<lambda_1>,void>::Call;
    }
    OnAsyncComplete(this,(TFunction<void___cdecl(void)> *)local_88);
    if (local_48 != 0) {
      plVar2 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (*(longlong *)param_3 != 0) {
      plVar2 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar2 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return;
}

// LoadGameAsync @ 1484e1520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::LoadGameAsync
          (ISaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)>
          *param_4)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 *puVar6;
  FTaskBase *this_01;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_d8 [32];
  FString local_98;
  ISaveGameSystem *local_88;
  undefined1 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  int local_68;
  FPipe *local_58;
  undefined8 local_48;
  atomic<unsigned___int64> aStack_40;
  undefined8 local_38;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ::FString::FString(&local_98,param_2);
  _Src.Data = local_98.Data.AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_98.Data.ArrayNum;
  local_70 = CONCAT44(local_70._4_4_,iVar9);
  local_88 = this;
  local_80 = param_1;
  if (iVar9 == 0) {
    local_70 = local_98.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_78,iVar9,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src.Data,(longlong)iVar9 * 2);
  }
  local_58 = *(FPipe **)param_4;
  local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  local_68 = param_3.InternalId;
  if (local_58 != (FPipe *)0x0) {
    puVar6 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_48);
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::LoadGameAsync'::`2'::<lambda_1>,void,void>::
          _vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 != (FTask *)0x0) {
      this_01 = *(FTaskBase **)&pFVar5->field_0x30;
    }
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbd9c00;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)local_88;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = local_80;
    this_00[1]._padding_ = (longlong)local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_00[1]._padding_ = (undefined4)local_70;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = local_70._4_4_;
    local_70 = 0;
    *(int *)&this_00[1]._padding_ = local_68;
    this_00[1].Pipe = local_58;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = local_30;
    local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)local_48;
    this_00[1]._padding_ = local_48._4_4_;
    this_00[1].TraceId = aStack_40;
    *(undefined8 *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_38;
    if (this_00[1].Pipe != (FPipe *)0x0) {
      local_58 = (FPipe *)0x0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`ISaveGameSystem::LoadGameAsync'::`2'::<lambda_1>_>::
          _vftable_;
    this_01 = this_00;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  if (local_58 != (FPipe *)0x0) {
    FVar7 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_48;
    if (local_30 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar7 = local_30;
    }
    (**(code **)(*(longlong *)FVar7 + 0x10))();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// LoadGameIfExistsAsync @ 1484e1900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::LoadGameIfExistsAsync
          (ISaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)>
          *param_4)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FTaskBase *this_00;
  FTask *pFVar5;
  undefined8 *puVar6;
  FTaskBase *this_01;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_d8 [32];
  FString local_98;
  ISaveGameSystem *local_88;
  undefined1 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  int local_68;
  FPipe *local_58;
  undefined8 local_48;
  atomic<unsigned___int64> aStack_40;
  undefined8 local_38;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  ::FString::FString(&local_98,param_2);
  _Src.Data = local_98.Data.AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_98.Data.ArrayNum;
  local_70 = CONCAT44(local_70._4_4_,iVar9);
  local_88 = this;
  local_80 = param_1;
  if (iVar9 == 0) {
    local_70 = local_98.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_78,iVar9,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src.Data,(longlong)iVar9 * 2);
  }
  local_58 = *(FPipe **)param_4;
  local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
  local_68 = param_3.InternalId;
  if (local_58 != (FPipe *)0x0) {
    puVar6 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_48);
  }
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::LoadGameIfExistsAsync'::`2'::<lambda_1>,void,void>::
          _vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar5 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar5 != (FTask *)0x0) {
      this_01 = *(FTaskBase **)&pFVar5->field_0x30;
    }
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbdc800;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)local_88;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = local_80;
    this_00[1]._padding_ = (longlong)local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_00[1]._padding_ = (undefined4)local_70;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = local_70._4_4_;
    local_70 = 0;
    *(int *)&this_00[1]._padding_ = local_68;
    this_00[1].Pipe = local_58;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = local_30;
    local_30 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)local_48;
    this_00[1]._padding_ = local_48._4_4_;
    this_00[1].TraceId = aStack_40;
    *(undefined8 *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_38;
    if (this_00[1].Pipe != (FPipe *)0x0) {
      local_58 = (FPipe *)0x0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`ISaveGameSystem::LoadGameIfExistsAsync'::`2'::<lambda_1>_>::_vftable_;
    this_01 = this_00;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  if (local_58 != (FPipe *)0x0) {
    FVar7 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)&local_48;
    if (local_30 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FVar7 = local_30;
    }
    (**(code **)(*(longlong *)FVar7 + 0x10))();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// OnAsyncComplete @ 1484e4320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::OnAsyncComplete(ISaveGameSystem *this,TFunction<void___cdecl(void)> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  TWeakPtr<FTSTicker::FElement,1> local_70;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = FTSTicker::GetCoreTicker();
  local_58 = *(longlong *)param_1;
  local_30 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_38 = *(undefined8 *)&param_1->field_0x20;
  local_48 = *(longlong *)&param_1->field_0x10;
  uStack_40 = *(undefined8 *)&param_1->field_0x18;
  if (local_58 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_a8 = (undefined1  [8])0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_a0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x50,&local_a0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`ISaveGameSystem::OnAsyncComplete'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[4] = local_58;
    puVar3[9] = local_30;
    local_30 = (longlong *)0x0;
    puVar3[6] = local_48;
    puVar3[7] = uStack_40;
    puVar3[8] = local_38;
    if (puVar3[4] != 0) {
      local_58 = 0;
    }
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  FTSTicker::AddTicker
            (this_00,&local_70,(TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_a8
             ,0.0);
  if (local_70.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_70.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_70.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_70.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_58 != 0) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// SaveGameAsync @ 1484f3440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISaveGameSystem::SaveGameAsync
          (ISaveGameSystem *this,bool param_1,wchar_t *param_2,FPlatformUserId param_3,
          TSharedRef<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_,1> *param_4,
          TFunction<void___cdecl(FString_const_&,FPlatformUserId,bool)> *param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  FTaskBase *this_00;
  FTask *pFVar6;
  undefined8 *puVar7;
  FTaskBase *this_01;
  longlong *plVar8;
  int iVar9;
  undefined1 auStackY_f8 [32];
  FString local_b8;
  ISaveGameSystem *local_a8;
  undefined1 local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  int local_88;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_80;
  FPipe *local_78;
  longlong local_68;
  longlong local_58;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  ::FString::FString(&local_b8,param_2);
  _Src.Data = local_b8.Data.AllocatorInstance.Data;
  this_01 = (FTaskBase *)0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  iVar9 = local_b8.Data.ArrayNum;
  local_90 = CONCAT44(local_90._4_4_,iVar9);
  local_a8 = this;
  local_a0 = param_1;
  if (iVar9 == 0) {
    local_90 = local_b8.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,&local_98,iVar9,(int *)((longlong)&local_90 + 4));
    memcpy(local_98.Data,_Src.Data,(longlong)iVar9 * 2);
  }
  local_80 = param_4->Object;
  local_78 = (FPipe *)(param_4->SharedReferenceCount).ReferenceController;
  if (local_78 != (FPipe *)0x0) {
    LOCK();
    *(int *)&local_78->TaskCount = *(int *)&local_78->TaskCount + 1;
    UNLOCK();
  }
  local_68 = *(longlong *)param_5;
  local_40 = (longlong *)0x0;
  local_88 = param_3.InternalId;
  if (local_68 != 0) {
    puVar7 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar7)(puVar7,&local_58);
  }
  this_00 = FMemory::Malloc(0x180,0x40);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`ISaveGameSystem::SaveGameAsync'::`2'::<lambda_1>,void,void>::
          _vftable_;
    if (((*(ulonglong *)&(this_00->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                           ,0x1dd,L"State: %d"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)&(this_00->LowLevelTask).field_0x28 + 0x18))
              (&(this_00->LowLevelTask).field_0x28,&this_00->LowLevelTask);
    *(FTaskBase **)&this_00->LowLevelTask = this_00;
    *(undefined ***)&(this_00->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x8 = this_00;
    pFVar6 = LowLevelTasks::FTask::GetActiveTask();
    if (pFVar6 != (FTask *)0x0) {
      this_01 = *(FTaskBase **)&pFVar6->field_0x30;
    }
    *(FTaskBase **)&(this_00->LowLevelTask).field_0x30 = this_01;
    *(undefined8 *)&(this_00->LowLevelTask).field_0x38 = 0xc80000546bbd7000;
    this_00->ExtendedPriority = None;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    this_00[1]._padding_ = (longlong)local_a8;
    this_00[1]._padding_ = 0;
    *(undefined1 *)&this_00[1]._padding_ = local_a0;
    this_00[1]._padding_ = (longlong)local_98.Data;
    local_98.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this_00[1]._padding_ = (undefined4)local_90;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = local_90._4_4_;
    local_90 = 0;
    *(int *)&this_00[1]._padding_ = local_88;
    *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)&this_00[1].RefCount = local_80;
    this_00[1].Pipe = local_78;
    if (local_78 != (FPipe *)0x0) {
      LOCK();
      *(int *)&local_78->TaskCount = *(int *)&local_78->TaskCount + 1;
      UNLOCK();
    }
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)local_68;
    this_00[1]._padding_ = local_68._4_4_;
    *(longlong **)&this_00[1].Prerequisites.Mutex = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_58;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FStack_50;
    this_00[1].Prerequisites.Prerequisites.ArrayNum = (undefined4)local_48;
    this_00[1].Prerequisites.Prerequisites.ArrayMax = local_48._4_4_;
    lVar3._0_4_ = this_00[1].ExecutingThreadId;
    lVar3._4_4_ = this_00[1]._padding_;
    if (lVar3 != 0) {
      local_68 = 0;
    }
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::TExecutableTask<`ISaveGameSystem::SaveGameAsync'::`2'::<lambda_1>_>::
          _vftable_;
    this_01 = this_00;
  }
  LOCK();
  AsyncTaskPipe.TaskCount = (atomic<unsigned___int64>)((longlong)AsyncTaskPipe.TaskCount + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &AsyncTaskPipe;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x180);
  LOCK();
  paVar1 = &this_01->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  if (local_68 != 0) {
    plVar8 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78);
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  if (*(longlong *)param_5 != 0) {
    plVar8 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

