// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 36

// ~FGenericPlatformChunkInstall @ 141620c50

void __thiscall
FGenericPlatformChunkInstall::~FGenericPlatformChunkInstall(FGenericPlatformChunkInstall *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NamedChunkCompleteDelegate).field_0x8,
             *(int *)&(this->NamedChunkCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->NamedChunkCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NamedChunkCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InstallDelegate).field_0x8,*(int *)&(this->InstallDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InstallDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InstallDelegate);
  this->_padding_ = (longlong)&___7IPlatformChunkInstall__6B_;
  return;
}

// operator() @ 141622210

void __thiscall
`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  
  lVar13 = *(longlong *)((longlong)this + 8);
  iVar1 = *(int *)((longlong)this + 0x10);
  local_res20 = lVar13 + (longlong)iVar1 * 8;
  do {
    lVar3 = local_res20;
    if (*(int *)((longlong)this + 0x10) != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (lVar13 == lVar3) {
      return;
    }
    lVar3 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x28),&local_60);
    iVar2 = *(int *)(lVar3 + 0x38);
    plVar10 = *(longlong **)(lVar3 + 0x30);
    plVar11 = plVar10 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(lVar3 + 0x38) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (plVar10 == plVar11) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_60);
        goto LAB_1416223f5;
      }
      if (((int)plVar10[1] != 0) && (*plVar10 != 0)) break;
      plVar10 = plVar10 + 2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    lVar3 = *(longlong *)this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar3 + 0x28),
               (FWriteAccessScope *)&local_78);
    *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + 1;
    bVar5 = false;
    uVar9 = *(int *)(lVar3 + 0x38) - 1;
    if (-1 < (int)uVar9) {
      lVar12 = (longlong)(int)uVar9 << 4;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)(lVar3 + 0x38)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(int *)(*(longlong *)(lVar3 + 0x30) + 8 + lVar12) == 0) ||
            (plVar10 = *(longlong **)(*(longlong *)(lVar3 + 0x30) + lVar12),
            plVar10 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar10 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x28),false);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      lVar13 = lVar13 + 8;
    }
    else {
LAB_1416223f5:
      lVar13 = lVar13 + 8;
    }
  } while( true );
}

// AddChunkInstallDelegate @ 141626790

FDelegateHandle __thiscall
FGenericPlatformChunkInstall::AddChunkInstallDelegate
          (FGenericPlatformChunkInstall *this,
          TDelegate<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
              *)&this->InstallDelegate,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddNamedChunkCompleteDelegate @ 141627c30

FDelegateHandle __thiscall
FGenericPlatformChunkInstall::AddNamedChunkCompleteDelegate
          (FGenericPlatformChunkInstall *this,
          TDelegate<void___cdecl(FNamedChunkCompleteCallbackParam_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(FNamedChunkCompleteCallbackParam_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FNamedChunkCompleteCallbackParam_const_&),FDefaultDelegateUserPolicy>
         *)&this->NamedChunkCompleteDelegate,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// AsyncInit @ 141629fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGenericPlatformChunkInstall::AsyncInit
          (FGenericPlatformChunkInstall *this,TFunction<void___cdecl(bool)> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  code **ppcVar3;
  longlong *plVar4;
  undefined1 auStackY_e8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code **local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_78 = *(code **)param_1;
  local_50 = *(code ***)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58 = *(code **)&param_1->field_0x20;
  local_68 = *(code **)&param_1->field_0x10;
  pcStack_60 = *(code **)&param_1->field_0x18;
  if (local_78 != (code *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  this_00 = FTSTicker::GetCoreTicker();
  local_a8 = local_78;
  local_80 = local_50;
  local_50 = (code **)0x0;
  local_98 = local_68;
  pcStack_90 = pcStack_60;
  local_88 = local_58;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x40,0x10);
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar3 = local_20 + 2;
  *ppcVar3 = local_a8;
  local_20[7] = (code *)local_80;
  local_80 = (code **)0x0;
  local_20[4] = local_98;
  local_20[5] = pcStack_90;
  local_20[6] = local_88;
  if (*ppcVar3 != (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  if (ppcVar3 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::AsyncInit'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker
            (this_00,&local_b8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformChunkInstall.cpp(11)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (local_b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48[0] != (code *)0x0) {
    ppcVar3 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar3 = local_20;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    ppcVar3 = &local_98;
    if (local_80 != (code **)0x0) {
      ppcVar3 = local_80;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    ppcVar3 = &local_68;
    if (local_50 != (code **)0x0) {
      ppcVar3 = local_50;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// DebugStartNextChunk @ 141633650

bool __thiscall
FGenericPlatformChunkInstall::DebugStartNextChunk(FGenericPlatformChunkInstall *this)

{
  return true;
}

// DoNamedChunkCompleteCallbacks @ 141634ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks
          (FGenericPlatformChunkInstall *this,TArrayView<FName_const_,int> *param_1,Type param_2,
          bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FName *_Src;
  ForAnyElementType FVar4;
  undefined4 uVar5;
  FTSTicker *this_00;
  code **ppcVar6;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_88;
  undefined8 local_80;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    _Src = param_1->DataPtr;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80._0_4_ = iVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&local_88,iVar3,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,_Src,(longlong)iVar3 << 3);
    uVar5 = local_80._4_4_;
    iVar3 = (int)local_80;
    FVar4.Data = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    this_00 = FTSTicker::GetCoreTicker();
    local_68[0] = (code *)0x0;
    local_40 = FMemory::Malloc(0x28,8);
    local_40[2] = (code *)FVar4.Data;
    local_40[1] = (code *)this;
    *local_40 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    *(int *)(local_40 + 3) = iVar3;
    *(undefined4 *)((longlong)local_40 + 0x1c) = uVar5;
    *(Type *)(local_40 + 4) = param_2;
    *(bool *)((longlong)local_40 + 0x24) = param_3;
    if (local_40 != (code **)&DAT_fffffffffffffff8) {
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_00,&local_78,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformChunkInstall.cpp(33)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
    if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_78.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_68[0] != (code *)0x0) {
      ppcVar6 = local_68 + 2;
      if (local_40 != (code **)0x0) {
        ppcVar6 = local_40;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return;
}

// DoNamedChunkCompleteCallbacks @ 1416350b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks
          (FGenericPlatformChunkInstall *this,FName param_1,Type param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForAnyElementType FVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FTSTicker *this_00;
  code **ppcVar6;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_88;
  undefined8 local_80;
  TWeakPtr<FTSTicker::FElement,1> local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_80._0_4_ = 1;
  local_88.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,(int *)((longlong)&local_80 + 4));
  uVar5 = local_80._4_4_;
  uVar4 = (undefined4)local_80;
  FVar3.Data = local_88.Data;
  *(FName *)local_88.Data = param_1;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  this_00 = FTSTicker::GetCoreTicker();
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  local_40[2] = (code *)FVar3.Data;
  local_40[1] = (code *)this;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::`2'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(undefined4 *)(local_40 + 3) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar5;
  *(Type *)(local_40 + 4) = param_2;
  *(bool *)((longlong)local_40 + 0x24) = param_3;
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`FGenericPlatformChunkInstall::DoNamedChunkCompleteCallbacks'::__l2::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker
            (this_00,&local_78,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformChunkInstall.cpp(33)"
             ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_68);
  if (local_78.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_78.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_68[0] != (code *)0x0) {
    ppcVar6 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar6 = local_40;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// ExternalNotifyChunkAvailable @ 141639f00

void __thiscall
FGenericPlatformChunkInstall::ExternalNotifyChunkAvailable
          (FGenericPlatformChunkInstall *this,uint param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->InstallDelegate,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->InstallDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->InstallDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->InstallDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->InstallDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,1), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->InstallDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InstallDelegate,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// GetChunkLocation @ 14163ee20

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FGenericPlatformChunkInstall::GetChunkLocation(FGenericPlatformChunkInstall *this,uint param_1)

{
  return BestLocation;
}

// GetChunkProgress @ 14163ee30

float __thiscall
FGenericPlatformChunkInstall::GetChunkProgress
          (FGenericPlatformChunkInstall *this,uint param_1,Type param_2)

{
  if (param_2 == PercentageComplete) {
    return __real_42c80000;
  }
  return 0.0;
}

// GetInstallSpeed @ 141642b00

Type __thiscall FGenericPlatformChunkInstall::GetInstallSpeed(FGenericPlatformChunkInstall *this)

{
  return Paused;
}

// GetNamedChunkInstallationStatus @ 141643c50

bool __thiscall
FGenericPlatformChunkInstall::GetNamedChunkInstallationStatus
          (FGenericPlatformChunkInstall *this,FName param_1,FChunkInstallationStatusDetail *param_2)

{
  return false;
}

// GetNamedChunkLocation @ 141643c60

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FGenericPlatformChunkInstall::GetNamedChunkLocation
          (FGenericPlatformChunkInstall *this,FName param_1)

{
  return NotAvailable;
}

// GetNamedChunkProgress @ 141643c70

float __thiscall
FGenericPlatformChunkInstall::GetNamedChunkProgress
          (FGenericPlatformChunkInstall *this,FName param_1,Type param_2)

{
  return 0.0;
}

// GetNamedChunkType @ 141643c80

ENamedChunkType __thiscall
FGenericPlatformChunkInstall::GetNamedChunkType(FGenericPlatformChunkInstall *this,FName param_1)

{
  return Invalid;
}

// GetNamedChunksByType @ 141643c90

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FGenericPlatformChunkInstall::GetNamedChunksByType
          (FGenericPlatformChunkInstall *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,ENamedChunkType param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPakFilesInNamedChunk @ 141643f90

bool __thiscall
FGenericPlatformChunkInstall::GetPakFilesInNamedChunk
          (FGenericPlatformChunkInstall *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetPakchunkLocation @ 1416444b0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FGenericPlatformChunkInstall::GetPakchunkLocation(FGenericPlatformChunkInstall *this,int param_1)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416444b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(this->_padding_ + 0xf8))();
  return TVar1;
}

// GetProgressReportingTypeSupported @ 141645bc0

bool __thiscall
FGenericPlatformChunkInstall::GetProgressReportingTypeSupported
          (FGenericPlatformChunkInstall *this,Type param_1)

{
  return param_1 == PercentageComplete;
}

// InstallNamedChunk @ 141649a20

bool __thiscall
FGenericPlatformChunkInstall::InstallNamedChunk(FGenericPlatformChunkInstall *this,FName param_1)

{
  undefined1 uVar1;
  FName local_res10 [3];
  FName *local_18;
  undefined4 local_10;
  
  local_18 = local_res10;
  local_10 = 1;
  local_res10[0] = param_1;
  uVar1 = (**(code **)(this->_padding_ + 0x88))(this,&local_18);
  return (bool)uVar1;
}

// InstallNamedChunks @ 141649a60

bool __thiscall
FGenericPlatformChunkInstall::InstallNamedChunks
          (FGenericPlatformChunkInstall *this,TArrayView<FName_const_,int> *param_1)

{
  return false;
}

// IsAvailable @ 141649c80

bool __thiscall FGenericPlatformChunkInstall::IsAvailable(FGenericPlatformChunkInstall *this)

{
  return true;
}

// IsNamedChunkForCurrentLocale @ 14164a150

bool __thiscall
FGenericPlatformChunkInstall::IsNamedChunkForCurrentLocale
          (FGenericPlatformChunkInstall *this,FName param_1)

{
  return true;
}

// IsNamedChunkInProgress @ 14164a160

bool __thiscall
FGenericPlatformChunkInstall::IsNamedChunkInProgress
          (FGenericPlatformChunkInstall *this,FName param_1)

{
  return false;
}

// PrioritizeChunk @ 141650810

bool __thiscall
FGenericPlatformChunkInstall::PrioritizeChunk
          (FGenericPlatformChunkInstall *this,uint param_1,Type param_2)

{
  return false;
}

// PrioritizeNamedChunk @ 141650820

bool __thiscall
FGenericPlatformChunkInstall::PrioritizeNamedChunk
          (FGenericPlatformChunkInstall *this,FName param_1,Type param_2)

{
  return false;
}

// PrioritizePakchunk @ 141650830

bool __thiscall
FGenericPlatformChunkInstall::PrioritizePakchunk
          (FGenericPlatformChunkInstall *this,int param_1,Type param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141650833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x100))();
  return (bool)uVar1;
}

// RemoveChunkInstallDelegate @ 1416578f0

void __thiscall
FGenericPlatformChunkInstall::RemoveChunkInstallDelegate
          (FGenericPlatformChunkInstall *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InstallDelegate,param_1)
    ;
    return;
  }
  return;
}

// RemoveNamedChunkCompleteDelegate @ 141657a40

void __thiscall
FGenericPlatformChunkInstall::RemoveNamedChunkCompleteDelegate
          (FGenericPlatformChunkInstall *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NamedChunkCompleteDelegate,param_1);
    return;
  }
  return;
}

// SetAutoPakMountingEnabled @ 14165ce00

bool __thiscall
FGenericPlatformChunkInstall::SetAutoPakMountingEnabled
          (FGenericPlatformChunkInstall *this,bool param_1)

{
  return false;
}

// SetInstallSpeed @ 14165d8f0

bool __thiscall
FGenericPlatformChunkInstall::SetInstallSpeed(FGenericPlatformChunkInstall *this,Type param_1)

{
  return false;
}

// SupportsBundleSource @ 141662d10

bool __thiscall
FGenericPlatformChunkInstall::SupportsBundleSource(FGenericPlatformChunkInstall *this)

{
  return false;
}

// SupportsNamedChunkInstall @ 141662db0

bool __thiscall
FGenericPlatformChunkInstall::SupportsNamedChunkInstall(FGenericPlatformChunkInstall *this)

{
  return false;
}

// UninstallNamedChunk @ 141666c00

bool __thiscall
FGenericPlatformChunkInstall::UninstallNamedChunk(FGenericPlatformChunkInstall *this,FName param_1)

{
  undefined1 uVar1;
  FName local_res10 [3];
  FName *local_18;
  undefined4 local_10;
  
  local_18 = local_res10;
  local_10 = 1;
  local_res10[0] = param_1;
  uVar1 = (**(code **)(this->_padding_ + 0x90))(this,&local_18);
  return (bool)uVar1;
}

// UninstallNamedChunks @ 141666c40

bool __thiscall
FGenericPlatformChunkInstall::UninstallNamedChunks
          (FGenericPlatformChunkInstall *this,TArrayView<FName_const_,int> *param_1)

{
  return false;
}

