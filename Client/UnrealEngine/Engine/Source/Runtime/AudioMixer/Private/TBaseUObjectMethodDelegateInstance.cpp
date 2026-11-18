// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 12

// CreateCopy @ 14654c900

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthComponent____A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14654c990

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthComponent____A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14654c9e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUSynthComponent____A6AXPEBVUAudioComponent__PEBVUSoundWave__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146553810

void __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
          *this,UAudioComponent *param_1,USoundWave *param_2,float param_3)

{
  USynthComponent *pUVar1;
  USynthComponent *local_res8;
  
  local_res8 = (USynthComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<USynthComponent,USynthComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// ExecuteIfSafe @ 1465538e0

/* WARNING: Removing unreachable block (ram,0x00014655395b) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                *this,UAudioComponent *param_1,USoundWave *param_2,float param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  USynthComponent *pUVar3;
  USynthComponent *pUVar4;
  UObject *pUVar5;
  USynthComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (USynthComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (USynthComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (USynthComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (USynthComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<USynthComponent,USynthComponent_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (USynthComponent *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146555820

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146559580

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14655c2e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14655c570

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 146561080

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 146561820

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14657a0c0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,USynthComponent,void___cdecl(UAudioComponent_const_*,USoundWave_const_*,float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

