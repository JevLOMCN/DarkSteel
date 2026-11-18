// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 6

// CreateAnalyticsProvider @ 14318c1c0

TSharedPtr<IAnalyticsProvider,1> * __thiscall
FAnalyticsET::CreateAnalyticsProvider
          (FAnalyticsET *this,TSharedPtr<IAnalyticsProvider,1> *__return_storage_ptr__,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar2 = (undefined8 *)(**(code **)((longlong)*this + 0x50))(this,local_18);
  __return_storage_ptr__->Object = (IAnalyticsProvider *)*puVar2;
  pTVar1 = (TReferenceControllerBase<1> *)puVar2[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// CreateAnalyticsProviderET @ 14318c210

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAnalyticsProviderET,1> * __thiscall
FAnalyticsET::CreateAnalyticsProviderET
          (FAnalyticsET *this,TSharedPtr<IAnalyticsProviderET,1> *__return_storage_ptr__,
          TDelegate<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy> *param_1)

{
  bool bVar1;
  char cVar2;
  FEngineVersion *this_00;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  void *local_e8 [3];
  FReadAccessScope local_d0;
  FScriptContainerElement *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FScriptContainerElement *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FScriptContainerElement *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  FString *local_78;
  undefined8 local_70;
  FString local_68;
  char local_58;
  undefined1 local_57;
  FScriptContainerElement *local_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)local_e8);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar7 = &param_1->field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_e8);
  if (bVar1) {
    plVar6 = (longlong *)0x0;
    local_57 = 1;
    local_b8 = (FScriptContainerElement *)0x0;
    local_a8 = (void *)0x0;
    local_98 = (void *)0x0;
    local_88 = (void *)0x0;
    local_78 = (FString *)0x0;
    local_70 = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0xffffffffbf800000;
    local_24 = 0xffffffff;
    ::FString::FString((FString *)local_e8,L"APIKeyET");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    if (local_b8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8);
    }
    local_b8 = local_f8;
    local_b0 = (int)local_f0;
    local_ac = local_f0._4_4_;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    ::FString::FString((FString *)local_e8,L"APIServerET");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    local_a8 = local_f8;
    local_a0 = (int)local_f0;
    local_9c = local_f0._4_4_;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    ::FString::FString((FString *)local_e8,L"APIEndpointET");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    local_98 = local_f8;
    local_90 = (int)local_f0;
    local_8c = local_f0._4_4_;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    ::FString::FString((FString *)local_e8,L"AppVersionET");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_f8;
    local_68.Data.ArrayNum = (int)local_f0;
    local_68.Data.ArrayMax = local_f0._4_4_;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    ::FString::FString((FString *)local_e8,L"UseLegacyProtocol");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    pFVar4 = (FScriptContainerElement *)L"";
    if ((int)local_f0 != 0) {
      pFVar4 = local_f8;
    }
    local_58 = FToBoolHelper::FromCStringWide((wchar_t *)pFVar4);
    if (local_f8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    ::FString::FString((FString *)local_e8,L"APIUnixSocketPathET");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
    plVar5 = plVar6;
    if (*(int *)&param_1->field_0x10 != 0) {
      plVar5 = *(longlong **)puVar7;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    local_88 = local_f8;
    local_80 = (int)local_f0;
    local_7c = local_f0._4_4_;
    local_f0 = 0;
    local_f8 = (FScriptContainerElement *)0x0;
    if (local_e8[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8[0]);
    }
    if (local_68.Data.ArrayNum < 2) {
      this_00 = FEngineVersion::Current();
      pFVar3 = FEngineVersion::ToString(this_00,(FString *)local_e8,Branch);
      if (&local_68 != pFVar3) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_68.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_e8[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0]);
      }
    }
    if (local_58 == '\0') {
      ::FString::FString((FString *)local_e8,L"AppEnvironment");
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
      plVar5 = plVar6;
      if (*(int *)&param_1->field_0x10 != 0) {
        plVar5 = *(longlong **)puVar7;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_f8,local_e8,1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (local_50 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50);
      }
      local_50 = local_f8;
      local_48 = local_f0;
      local_f0 = 0;
      local_f8 = (FScriptContainerElement *)0x0;
      if (local_e8[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0]);
      }
      ::FString::FString((FString *)local_e8,L"UploadType");
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d0);
      if (*(int *)&param_1->field_0x10 != 0) {
        plVar6 = *(longlong **)puVar7;
      }
      (**(code **)(*plVar6 + 0x60))(plVar6,&local_f8,local_e8,1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (local_40 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40);
      }
      local_40 = local_f8;
      local_38 = local_f0;
      local_f0 = 0;
      local_f8 = (FScriptContainerElement *)0x0;
      if (local_e8[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8[0]);
      }
    }
    (**(code **)((longlong)*this + 0x48))(this,__return_storage_ptr__,&local_b8);
    if (local_40 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40);
    }
    if (local_50 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>(local_78,(int)local_70);
    if (local_78 != (FString *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_88 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_a8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8);
    }
    if (local_b8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else {
    if (2 < (byte)LogAnalytics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
    }
    __return_storage_ptr__->Object = (IAnalyticsProviderET *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// CreateAnalyticsProvider @ 14318c840

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAnalyticsProviderET,1> * __thiscall
FAnalyticsET::CreateAnalyticsProvider
          (FAnalyticsET *this,TSharedPtr<IAnalyticsProviderET,1> *__return_storage_ptr__,
          Config *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<IAnalyticsProviderET,1> *pTVar7;
  IAnalyticsProviderET *pIVar8;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FString local_28;
  
  if ((param_1->APIKeyET).Data.ArrayNum < 2) {
    if (2 < (byte)LogAnalytics._0_1_) {
      ::FString::FString(&local_28,L"APIKeyET");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IAnalyticsProviderET *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name235,L"Analytics");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name235,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name235,true);
  pTVar6 = ::operator_new(0x2c0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pIVar8 = (IAnalyticsProviderET *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAnalyticsProviderET___00_SharedPointerInternals__6B_
    ;
    FAnalyticsProviderET::FAnalyticsProviderET((FAnalyticsProviderET *)(pTVar6 + 1),param_1);
    pIVar8 = (IAnalyticsProviderET *)(pTVar6 + 1);
    if (pIVar8 == (IAnalyticsProviderET *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<IAnalyticsProviderET,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14318c9f5;
    }
  }
  if (((pIVar8[2]._padding_ == 0) ||
      (pFVar3 = pIVar8[2].UnsafeDefaultAttributes.AllocatorInstance.Data,
      pFVar3 == (FScriptContainerElement *)0x0)) || (*(int *)(pFVar3 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pIVar8[2]._padding_ = (longlong)pIVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)
                  pIVar8[2].UnsafeDefaultAttributes.AllocatorInstance.Data) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar3 = pIVar8[2].UnsafeDefaultAttributes.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        LOCK();
        pFVar1 = pFVar3 + 0xc;
        iVar2 = *(int *)pFVar1;
        *(int *)pFVar1 = *(int *)pFVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
        }
      }
      pIVar8[2].UnsafeDefaultAttributes.AllocatorInstance.Data = (FScriptContainerElement *)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14318c9f5:
  __return_storage_ptr__->Object = pIVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// StartupModule @ 14318ca80

void __thiscall FAnalyticsET::StartupModule(FAnalyticsET *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,"HTTP");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  return;
}

// ShutdownModule @ 14318cac0

void __thiscall FAnalyticsET::ShutdownModule(FAnalyticsET *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1550660d0 = (undefined8 *)0x0;
      atexit(`TLazySingleton<FAnalyticsPerfTracker>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FAnalyticsPerfTracker>&___ptr64___cdecl_TLazySingleton<FAnalyticsPerfTracker>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1550660d0 != (undefined8 *)0x0) {
    (**(code **)*DAT_1550660d0)(DAT_1550660d0,0);
    DAT_1550660d0 = (undefined8 *)0x0;
  }
  return;
}

// ~Config @ 143193b80

void __thiscall FAnalyticsET::Config::~Config(Config *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UploadType).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppEnvironment).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AppVersionET).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AltAPIServersET).AllocatorInstance.Data,
             (this->AltAPIServersET).ArrayNum);
  pFVar1 = (this->AltAPIServersET).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->APIUnixSocketPathET).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->APIEndpointET).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->APIServerET).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->APIKeyET).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

