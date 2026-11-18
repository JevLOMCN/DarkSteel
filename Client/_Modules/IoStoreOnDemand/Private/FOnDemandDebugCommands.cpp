// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 7

// FOnDemandDebugCommands @ 1445a3d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandDebugCommands * __thiscall
UE::IoStore::FOnDemandDebugCommands::FOnDemandDebugCommands
          (FOnDemandDebugCommands *this,FOnDemandIoStore *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOnDemandDebugCommands *pFVar3;
  
  this->OnDemandIoStore = param_1;
  (this->DynamicConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicConsoleCommands).ArrayNum = 0;
  (this->DynamicConsoleCommands).ArrayMax = 0;
  if (param_1 == (FOnDemandIoStore *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOnDemandIoStore != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\DebugCommands.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOnDemandDebugCommands *)(*pcVar1)();
      return pFVar3;
    }
  }
  BindConsoleCommands(this);
  return this;
}

// ~FOnDemandDebugCommands @ 1445a8ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandDebugCommands::~FOnDemandDebugCommands(FOnDemandDebugCommands *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->DynamicConsoleCommands).AllocatorInstance.Data;
  iVar1 = (this->DynamicConsoleCommands).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->DynamicConsoleCommands).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar3) break;
    uVar2 = *(undefined8 *)pFVar6;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar2,1);
    pFVar6 = pFVar6 + 8;
  }
  pFVar3 = (this->DynamicConsoleCommands).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// operator() @ 1445aac50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandDebugCommands::BindConsoleCommands'::__l2::<lambda_1>::operator()(void *this)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FHostGroupManager *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *this_00;
  undefined1 local_res10 [8];
  
  if (3 < (byte)LogIas._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  pFVar4 = UE::IoStore::FHostGroupManager::Get();
  SRWLock = &pFVar4->Mutex;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar1 = (pFVar4->HostGroups).ArrayNum;
  this_00 = (pFVar4->HostGroups).AllocatorInstance.Data;
  pFVar5 = this_00 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar4->HostGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar5) break;
    UE::IoStore::FIASHostGroup::Disconnect((FIASHostGroup *)this_00);
    this_00 = this_00 + 0x10;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// operator() @ 1445ac8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>::operator()(void *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  if (3 < (byte)LogIas._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  if (*(char *)((longlong)this + 8) != '\0') {
    if (3 < (byte)LogIas._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    FWindowsPlatformMisc::RequestExitWithStatus(false,'\0',(wchar_t *)0x0);
    return;
  }
  return;
}

// BindConsoleCommands @ 1445b4cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandDebugCommands::BindConsoleCommands(FOnDemandDebugCommands *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_68);
  local_50 = &local_c0;
  puVar5 = Core::Private::DelegateAllocate(0x20,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandDebugCommands::BindConsoleCommands'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  uVar7 = (*pcVar1)(pIVar2,L"ias.InvokeHttpFailure",
                    L"Marks the current ias http connections as failed and forcing them  to try to reconnect"
                    ,&local_c8,0);
  iVar4 = (this->DynamicConsoleCommands).ArrayNum;
  if (iVar4 == (this->DynamicConsoleCommands).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DynamicConsoleCommands).AllocatorInstance,
                       &(this->DynamicConsoleCommands).ArrayMax);
  }
  (this->DynamicConsoleCommands).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->DynamicConsoleCommands).AllocatorInstance.Data + (longlong)iVar4 * 8) =
       uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_98);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_48);
  local_30 = &local_a8;
  puVar5 = Core::Private::DelegateAllocate(0x28,&local_a8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__00__CBVFOnDemandDebugCommands_IoStore_UE____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = RunRequestTest;
    puVar5[3] = this;
    if (this == (FOnDemandDebugCommands *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  uVar7 = (*pcVar1)(pIVar2,L"ias.RunRequestTest",
                    L"[optional Number of requests to make] Creates a number of requests for chunks that can be found in that IAS system"
                    ,&local_b0,0);
  iVar4 = (this->DynamicConsoleCommands).ArrayNum;
  if (iVar4 == (this->DynamicConsoleCommands).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DynamicConsoleCommands).AllocatorInstance,
                       &(this->DynamicConsoleCommands).ArrayMax);
  }
  (this->DynamicConsoleCommands).ArrayNum = iVar4 + 1;
  *(undefined8 *)((this->DynamicConsoleCommands).AllocatorInstance.Data + (longlong)iVar4 * 8) =
       uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_80);
  if ((local_a8.DelegateSize != 0) &&
     (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a8,0,0,0x10);
    local_a8.DelegateSize = 0;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  return;
}

// RunRequestTest @ 1445fda30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandDebugCommands::RunRequestTest
          (FOnDemandDebugCommands *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  FIoReadOptions *pFVar2;
  atomic<int> aVar3;
  double dVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FTSTicker *this_00;
  wchar_t *pwVar10;
  undefined ***pppuVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  char cVar16;
  undefined1 auStackY_118 [32];
  undefined1 local_e7 [7];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  LARGE_INTEGER local_c8;
  TArray<FIoChunkId,TSizedDefaultAllocator<32>_> local_c0;
  FIoBatch local_b0;
  undefined1 local_98 [16];
  undefined **local_88;
  FScriptContainerElement *pFStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined ***local_70;
  undefined1 local_68 [8];
  FWeakReferencer<1> FStack_60;
  undefined **local_58;
  undefined1 auStack_50 [16];
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar13 = (param_1->AllocatorInstance).Data;
  bVar6 = false;
  local_d0._0_4_ = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_d0._0_4_;
  cVar16 = '\0';
  pFVar15 = pFVar13 + uVar9 * 0x10;
  iVar12 = -1;
  local_c8 = (LARGE_INTEGER)this;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e7);
    }
    if (pFVar13 == pFVar15) break;
    local_68 = *(undefined1 (*) [8])pFVar13;
    iVar8 = *(int *)(pFVar13 + 8) + -1;
    if (*(int *)(pFVar13 + 8) == 0) {
      iVar8 = 0;
    }
    local_98._8_4_ = iVar8;
    local_98._0_8_ = local_68;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)local_98._8_8_;
    bVar7 = String::IsNumeric((TStringView<wchar_t> *)local_68);
    if (bVar7) {
      if (iVar12 != -1) {
        if ((byte)LogIas._0_1_ < 2) {
          return;
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
        return;
      }
      if (*(int *)(pFVar13 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)pFVar13;
      }
      iVar8 = _wtoi(pwVar10);
      iVar12 = 0x7fffffff;
      if (0 < iVar8) {
        iVar12 = iVar8;
      }
      uVar9 = (ulonglong)(uint)local_d0._0_4_;
      pFVar13 = pFVar13 + 0x10;
    }
    else {
      if (*(int *)(pFVar13 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)pFVar13;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,"Cancel");
      if (iVar8 == 0) {
        uVar9 = (ulonglong)(uint)local_d0._0_4_;
        pFVar13 = pFVar13 + 0x10;
        bVar6 = true;
      }
      else {
        if (*(int *)(pFVar13 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pFVar13;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,"Quit");
        if (iVar8 != 0) {
          if (1 < (byte)LogIas._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
          }
          return;
        }
        uVar9 = (ulonglong)(uint)local_d0._0_4_;
        cVar16 = '\x01';
        pFVar13 = pFVar13 + 0x10;
      }
    }
  }
  if (iVar12 == -1) {
    iVar12 = 1000;
  }
  FOnDemandIoStore::DebugFindStreamingChunkIds(*(FOnDemandIoStore **)local_c8,&local_c0,iVar12);
  if (3 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  FIoBatch::FIoBatch(&local_b0);
  iVar12 = local_c0.ArrayNum;
  pFVar2 = (FIoReadOptions *)(local_c0.AllocatorInstance.Data + (longlong)iVar12 * 0xc);
  FVar14.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if (local_c0.ArrayNum != iVar12) {
      `TCheckedPointerIterator<FIoChunkId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e7);
    }
    if ((FIoReadOptions *)FVar14.Data == pFVar2) break;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auStack_50._8_8_;
    auStack_50 = auVar5 << 0x40;
    local_68 = (undefined1  [8])0x0;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0xffffffffffffffff;
    local_58 = (undefined **)0x0;
    local_98 = ZEXT816(0xffffffffffffffff) << 0x40;
    local_88 = (undefined **)0x0;
    pFStack_80 = (FScriptContainerElement *)0x0;
    FIoBatch::Read(&local_b0,(FIoChunkId *)local_d0,(FIoReadOptions *)FVar14.Data,(int)local_98);
    iVar8 = (int)local_d8;
    if ((int)local_d8 == local_d8._4_4_) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
    }
    local_d8 = CONCAT44(local_d8._4_4_,iVar8 + 1);
    FIoRequest::FIoRequest
              ((FIoRequest *)(local_e0.Data + (longlong)iVar8 * 8),(FIoRequest *)local_d0);
    FIoRequest::~FIoRequest((FIoRequest *)local_d0);
    FVar14.Data = (FScriptContainerElement *)
                  ((longlong)&((FIoReadOptions *)FVar14.Data)->RequestedSize + 4);
  }
  QueryPerformanceCounter(&local_c8);
  auVar5 = local_98;
  local_98[8] = cVar16;
  local_40 = (undefined ***)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68 = (undefined1  [8])
             Core::Private::Function::
             TFunctionRefCaller<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>,void>
             ::Call;
  local_98._12_4_ = auVar5._12_4_;
  dVar4 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_98._0_8_ = dVar4;
  auStack_50._8_4_ = local_98._8_4_;
  auStack_50._0_8_ = dVar4;
  auStack_50._12_4_ = local_98._12_4_;
  FIoBatch::IssueWithCallback(&local_b0,(TFunction<void___cdecl(void)> *)local_68);
  if (local_68 != (undefined1  [8])0x0) {
    pppuVar11 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar11 = local_40;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (bVar6) {
    if (3 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_78 = (int)local_d8;
    local_98._0_8_ =
         Core::Private::Function::
         TFunctionRefCaller<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l83::<lambda_2>,bool,float>
         ::Call;
    pFStack_80 = local_e0.Data;
    local_74 = local_d8._4_4_;
    local_e0.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_70 = (undefined ***)0x0;
    local_88 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`83'::<lambda_2>,1,0>
                ::_vftable_;
    FTSTicker::AddTicker
              (this_00,(TWeakPtr<FTSTicker::FElement,1> *)local_68,L"IASDebugCancel",__real_40a00000
               ,(TUniqueFunction<bool___cdecl(float)> *)local_98);
    if (FStack_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_60.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((FStack_60.ReferenceController)->_padding_ + 8))();
      }
    }
    if (local_98._0_8_ != 0) {
      pppuVar11 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar11 = local_70;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    DestructItems<FIoRequest,int>((FIoRequest *)0x0,0);
  }
  if ((3 < (byte)LogIas._0_1_) && (cVar16 != '\0')) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  FIoBatch::~FIoBatch(&local_b0);
  DestructItems<FIoRequest,int>((FIoRequest *)local_e0.Data,(int)local_d8);
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if ((FIoReadOptions *)local_c0.AllocatorInstance.Data == (FIoReadOptions *)0x0) {
    return;
  }
  FMemory::Free(local_c0.AllocatorInstance.Data);
  return;
}

// UnbindConsoleCommands @ 1446095c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandDebugCommands::UnbindConsoleCommands(FOnDemandDebugCommands *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->DynamicConsoleCommands).AllocatorInstance.Data;
  iVar2 = (this->DynamicConsoleCommands).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DynamicConsoleCommands).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar6;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

