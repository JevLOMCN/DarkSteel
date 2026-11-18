// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 7

// StartupModule @ 14311a330

void __thiscall FCookOnTheFlyModule::StartupModule(FCookOnTheFlyModule *this)

{
  return;
}

// ShutdownModule @ 14311a340

void __thiscall FCookOnTheFlyModule::ShutdownModule(FCookOnTheFlyModule *this)

{
  return;
}

// SupportsDynamicReloading @ 14311a350

bool __thiscall FCookOnTheFlyModule::SupportsDynamicReloading(FCookOnTheFlyModule *this)

{
  return false;
}

// GetDefaultServerConnection @ 14311a360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> * __thiscall
FCookOnTheFlyModule::GetDefaultServerConnection
          (FCookOnTheFlyModule *this,
          TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCookOnTheFlyHostOptions *pFVar3;
  ICookOnTheFlyServerConnection *pIVar4;
  FCookOnTheFlyHostOptions local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1>___cdecl_FCookOnTheFlyModule::GetDefaultServerConnection(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1>___cdecl_FCookOnTheFlyModule::GetDefaultServerConnection(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1>___cdecl_FCookOnTheFlyModule::GetDefaultServerConnection(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar3 = GetDefaultHostOptions(this,&local_28);
      pIVar4 = CreateServerConnection(this,pFVar3);
      _DefaultServerConnection = pIVar4;
      DAT_1550640b8 = ::operator_new(0x18);
      if (DAT_1550640b8 != (TReferenceControllerBase<1> *)0x0) {
        DAT_1550640b8->SharedReferenceCount = (atomic<int>)0x1;
        DAT_1550640b8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VICookOnTheFlyServerConnection_Cook_UE__U__DefaultDeleter_VICookOnTheFlyServerConnection_Cook_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        DAT_1550640b8->WeakReferenceCount = (atomic<int>)0x1;
        DAT_1550640b8[1]._padding_ = (longlong)pIVar4;
      }
      DestructItems<FString,int>
                ((FString *)local_28.Hosts.AllocatorInstance.Data,local_28.Hosts.ArrayNum);
      if (local_28.Hosts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Hosts.AllocatorInstance.Data);
      }
      atexit(`FCookOnTheFlyModule::GetDefaultServerConnection'::__l2::
             _dynamic_atexit_destructor_for__DefaultServerConnection__);
      _Init_thread_footer(&`public:_virtual_class_TSharedPtr<UE::Cook::ICookOnTheFlyServerConnection,1>___cdecl_FCookOnTheFlyModule::GetDefaultServerConnection(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  __return_storage_ptr__->Object = _DefaultServerConnection;
  pTVar2 = DAT_1550640b8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = DAT_1550640b8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar2->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// ConnectToServer @ 14311a470

TUniquePtr<UE::Cook::ICookOnTheFlyServerConnection,TDefaultDelete<UE::Cook::ICookOnTheFlyServerConnection>_>
 __thiscall
FCookOnTheFlyModule::ConnectToServer(FCookOnTheFlyModule *this,FCookOnTheFlyHostOptions *param_1)

{
  ICookOnTheFlyServerConnection *pIVar1;
  FCookOnTheFlyHostOptions *in_R8;
  
  pIVar1 = CreateServerConnection(this,in_R8);
  (param_1->Hosts).AllocatorInstance.Data = (FScriptContainerElement *)pIVar1;
  return (TUniquePtr<UE::Cook::ICookOnTheFlyServerConnection,TDefaultDelete<UE::Cook::ICookOnTheFlyServerConnection>_>
          )(ICookOnTheFlyServerConnection *)param_1;
}

// CreateServerConnection @ 14311cf20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

ICookOnTheFlyServerConnection * __thiscall
FCookOnTheFlyModule::CreateServerConnection
          (FCookOnTheFlyModule *this,FCookOnTheFlyHostOptions *param_1)

{
  double dVar1;
  float fVar2;
  double dVar3;
  ForAnyElementType _Src;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  IPlatformHostCommunication *pIVar8;
  void *pvVar9;
  FCookOnTheFlyServerConnection *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  void *pvVar13;
  FScriptContainerElement *this_00;
  void *pvVar14;
  void *pvVar15;
  FCookOnTheFlyHostOptions *local_res10;
  LARGE_INTEGER local_res18;
  uint local_res20;
  LARGE_INTEGER local_90;
  FString local_88;
  FString local_78 [4];
  
  pvVar14 = (void *)0x0;
  local_res18.s.LowPart = 0;
  if ((param_1->Hosts).ArrayNum == 0) {
    return (ICookOnTheFlyServerConnection *)0x0;
  }
  local_res10 = param_1;
  QueryPerformanceCounter(&local_res18);
  dVar3 = __real_4170000000000000;
  fVar2 = __real_3f800000;
  dVar1 = (double)(param_1->ServerStartupWaitTime).Ticks * __real_3e7ad7f29abcaf48 +
          (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  pvVar15 = pvVar14;
  do {
    local_res20 = (param_1->Hosts).ArrayNum;
    uVar7 = (ulonglong)(int)local_res20;
    this_00 = (param_1->Hosts).AllocatorInstance.Data;
    pFVar12 = this_00 + uVar7 * 0x10;
    while( true ) {
      if ((param_1->Hosts).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (this_00 == pFVar12) break;
      bVar4 = ::FString::StartsWith((FString *)this_00,L"tcp://",6,IgnoreCase);
      pvVar13 = pvVar14;
      if (bVar4) {
LAB_14311d1a7:
        pvVar9 = ::operator_new(0x28);
        if (pvVar9 != (void *)0x0) {
          *(undefined8 *)((longlong)pvVar9 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar9 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar9 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar9 + 8) = 0;
          *(undefined ***)pvVar9 = &___7FTCPTransport__6B_;
          pvVar13 = pvVar9;
        }
LAB_14311d1d1:
        if (pvVar13 != (void *)0x0) {
          if (5 < (byte)LogCookOnTheFly._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`private:_class_UE::Cook::ICookOnTheFlyServerConnection*___ptr64___cdecl_FCookOnTheFlyModule::CreateServerConnection(UE::Cook::FCookOnTheFlyHostOptions_const&___ptr64)___ptr64'
                        ::__l15::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
          }
          if (*(int *)(this_00 + 8) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)&this_00->field_0x0;
          }
          cVar5 = (**(code **)(*(longlong *)pvVar13 + 8))(pvVar13,pwVar11);
          if (cVar5 != '\0') {
            if (3 < (byte)LogCookOnTheFly._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&`private:_class_UE::Cook::ICookOnTheFlyServerConnection*___ptr64___cdecl_FCookOnTheFlyModule::CreateServerConnection(UE::Cook::FCookOnTheFlyHostOptions_const&___ptr64)___ptr64'
                          ::__l36::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
            }
            pFVar10 = ::operator_new(0x130);
            if (pFVar10 == (FCookOnTheFlyServerConnection *)0x0) {
              (*(code *)**(undefined8 **)pvVar13)(pvVar13,1);
              return (ICookOnTheFlyServerConnection *)0x0;
            }
            local_res10 = pvVar13;
            pFVar10 = FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection
                                (pFVar10,(ICookOnTheFlyServerTransport *)&local_res10,
                                 (FString *)this_00);
            return (ICookOnTheFlyServerConnection *)pFVar10;
          }
          if (5 < (byte)LogCookOnTheFly._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`private:_class_UE::Cook::ICookOnTheFlyServerConnection*___ptr64___cdecl_FCookOnTheFlyModule::CreateServerConnection(UE::Cook::FCookOnTheFlyHostOptions_const&___ptr64)___ptr64'
                        ::__l54::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
          }
          goto LAB_14311d24a;
        }
      }
      else {
        bVar4 = ::FString::StartsWith((FString *)this_00,L"platform://",0xb,IgnoreCase);
        if (bVar4) {
LAB_14311d085:
          bVar4 = true;
        }
        else {
          ::FString::FString(&local_88,L"PlatformProtocol");
          pvVar15 = (void *)(ulonglong)((uint)pvVar15 | 1);
          iVar6 = *(int *)(this_00 + 8);
          if (iVar6 == local_88.Data.ArrayNum) {
            if (iVar6 < 2) goto LAB_14311d085;
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)&this_00->field_0x0,
                               (wchar_t *)local_88.Data.AllocatorInstance.Data);
            bVar4 = iVar6 == 0;
          }
          else {
            bVar4 = iVar6 + local_88.Data.ArrayNum == 1;
          }
          if (bVar4) goto LAB_14311d085;
          bVar4 = false;
        }
        if ((((ulonglong)pvVar15 & 1) != 0) &&
           (pvVar15 = (void *)(ulonglong)((uint)pvVar15 & 0xfffffffe),
           local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar4) goto LAB_14311d1a7;
        pIVar8 = FGenericPlatformMisc::GetPlatformHostCommunication();
        cVar5 = (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
        if (cVar5 != '\0') {
          pvVar9 = ::operator_new(0x30);
          if (pvVar9 != (void *)0x0) {
            ::FString::FString(local_78,"CookOnTheFly");
            _Src.Data = local_78[0].Data.AllocatorInstance.Data;
            *(undefined8 *)((longlong)pvVar9 + 0x10) = 0;
            *(undefined ***)pvVar9 = &___7FPlatformTransport__6B_;
            *(undefined4 *)((longlong)pvVar9 + 8) = 0;
            pvVar15 = (void *)(ulonglong)((uint)pvVar15 | 2);
            iVar6 = (int)local_78[0].Data._8_8_;
            *(int *)((longlong)pvVar9 + 0x18) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)((longlong)pvVar9 + 0x1cU) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar6,0,(ForAnyElementType *)((longlong)pvVar9 + 0x10U),iVar6,
                         (int *)((longlong)pvVar9 + 0x1cU));
              memcpy(((ForAnyElementType *)((longlong)pvVar9 + 0x10U))->Data,_Src.Data,
                     (longlong)iVar6 * 2);
            }
            *(undefined8 *)((longlong)pvVar9 + 0x20) = 0;
            *(undefined8 *)((longlong)pvVar9 + 0x28) = 0;
            pvVar13 = pvVar9;
            param_1 = local_res10;
          }
          if ((((ulonglong)pvVar15 & 2) != 0) &&
             (pvVar15 = (void *)(ulonglong)((uint)pvVar15 & 0xfffffffd),
             local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
          goto LAB_14311d1d1;
        }
        if (2 < (byte)LogCookOnTheFly._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`private:_class_TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>___cdecl_FCookOnTheFlyModule::CreateTransportForHostAddress(FString_const&___ptr64)___ptr64'
                      ::__l14::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
        }
LAB_14311d24a:
        if (pvVar13 != (void *)0x0) {
          (*(code *)**(undefined8 **)pvVar13)(pvVar13,1);
        }
      }
      this_00 = this_00 + 0x10;
      uVar7 = (ulonglong)local_res20;
    }
    QueryPerformanceCounter(&local_90);
    if (dVar1 < (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) {
      if ((byte)LogCookOnTheFly._0_1_ < 2) {
        return (ICookOnTheFlyServerConnection *)0x0;
      }
      UE::Logging::Private::BasicLog<2>
                (&`private:_class_UE::Cook::ICookOnTheFlyServerConnection*___ptr64___cdecl_FCookOnTheFlyModule::CreateServerConnection(UE::Cook::FCookOnTheFlyHostOptions_const&___ptr64)___ptr64'
                  ::__l75::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
      return (ICookOnTheFlyServerConnection *)0x0;
    }
    FWindowsPlatformProcess::Sleep(fVar2);
  } while( true );
}

// GetDefaultHostOptions @ 14311dcc0

/* WARNING: Removing unreachable block (ram,0x00014311deba) */

FCookOnTheFlyHostOptions * __thiscall
FCookOnTheFlyModule::GetDefaultHostOptions
          (FCookOnTheFlyModule *this,FCookOnTheFlyHostOptions *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FCookOnTheFlyHostOptions *pFVar7;
  longlong lVar8;
  long64 lVar9;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar10 [16];
  double local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  lVar9 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar6,L"-FileHostIP=",&local_28,true,(wchar_t **)0x0);
  if (!bVar4) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"CookOnTheFly");
    if (bVar4) {
      pwVar6 = FCommandLine::Get();
      FParse::Value(pwVar6,L"-ZenStoreHost=",&local_28,true,(wchar_t **)0x0);
    }
  }
  iVar5 = ::FString::ParseIntoArray(&local_28,&local_48,L"+",true);
  if (0 < iVar5) {
    local_res10 = 0.0;
    pwVar6 = FCommandLine::Get();
    FParse::Value(pwVar6,L"-CookOnTheFlyServerWaitTime=",&local_res10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_res10 * __real_416312d000000000 + __real_3fe0000000000000;
    auVar10 = roundpd(extraout_XMM0,auVar10,1);
    lVar9 = (long64)auVar10._0_8_;
  }
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar6,L"ZenPlatformProtocol");
  if (!bVar4) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"PlatformProtocol");
    if (!bVar4) goto LAB_14311debf;
  }
  ::FString::FString(&local_38,"platform://");
  if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FCookOnTheFlyHostOptions *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar5 + 1;
  lVar8 = (longlong)iVar5;
  *(undefined8 *)(local_48.AllocatorInstance.Data + lVar8 * 0x10) = 0;
  *(FScriptContainerElement **)(local_48.AllocatorInstance.Data + lVar8 * 0x10) =
       local_38.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_48.AllocatorInstance.Data + lVar8 * 0x10 + 8) = local_38.Data.ArrayNum;
  *(int *)(local_48.AllocatorInstance.Data + lVar8 * 0x10 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
LAB_14311debf:
  FVar3.Data = local_48.AllocatorInstance.Data;
  iVar5 = local_48.ArrayNum;
  piVar1 = &(__return_storage_ptr__->Hosts).ArrayMax;
  (__return_storage_ptr__->Hosts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Hosts).ArrayNum = local_48.ArrayNum;
  if (local_48.ArrayNum == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_48.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
               local_48.ArrayNum,piVar1);
    ConstructItems<FString,FString,int>
              ((__return_storage_ptr__->Hosts).AllocatorInstance.Data,(FString *)FVar3.Data,iVar5);
    iVar5 = local_48.ArrayNum;
  }
  (__return_storage_ptr__->ServerStartupWaitTime).Ticks = lVar9;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    iVar5 = local_48.ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar5);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

