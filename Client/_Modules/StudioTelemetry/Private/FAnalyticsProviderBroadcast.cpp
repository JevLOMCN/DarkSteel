// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 18

// FAnalyticsProviderBroadcast @ 14ea19440

/* WARNING: Enum "Type": Some values do not have unique names */

FAnalyticsProviderBroadcast * __thiscall
FAnalyticsProviderBroadcast::FAnalyticsProviderBroadcast(FAnalyticsProviderBroadcast *this)

{
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *this_00;
  void *_Src;
  undefined1 *puVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  FName *pFVar13;
  FModuleManager *this_01;
  IModuleInterface *pIVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  int iVar19;
  ForAnyElementType FVar20;
  ForAnyElementType this_02;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  longlong local_e0;
  FSharedReferencer<1> FStack_d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FDestructionSentinel local_c0;
  FDelegateAllocation *local_a8;
  FName local_a0;
  FString local_98;
  FString local_88;
  FString *local_78;
  longlong *local_70;
  FName local_68;
  FName local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  *(undefined8 *)&this->Providers = 0;
  this_00 = &this->Providers;
  *(undefined8 *)&(this->Providers).field_0x8 = 0;
  *(undefined8 *)&(this->Providers).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FAnalyticsProviderBroadcast__6B_;
  *(undefined4 *)&(this->Providers).field_0x28 = 0;
  *(undefined4 *)&(this->Providers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Providers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Providers).field_0x34 = 0;
  *(undefined8 *)&(this->Providers).field_0x40 = 0;
  *(undefined4 *)&(this->Providers).field_0x48 = 0;
  (this->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserID).Data.ArrayNum = 0;
  (this->UserID).Data.ArrayMax = 0;
  (this->SessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionID).Data.ArrayNum = 0;
  (this->SessionID).Data.ArrayMax = 0;
  (this->DefaultEventAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultEventAttributes).ArrayNum = 0;
  (this->DefaultEventAttributes).ArrayMax = 0;
  *(undefined8 *)&this->RecordEventCallback = 0;
  *(undefined8 *)&(this->RecordEventCallback).field_0x28 = 0;
  ::FString::FString(&local_88,L"StudioTelemetry.Provider");
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar9,L"ST_Provider=",&local_108,true,(wchar_t **)0x0);
  if ((bVar4) && (3 < (byte)LogAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  bVar4 = FConfigCacheIni::GetSectionNames(GConfig,&GEngineIni,&local_d0);
  if (bVar4) {
    uVar10 = (ulonglong)local_d0.ArrayNum;
    pFVar21 = local_d0.AllocatorInstance.Data + uVar10 * 0x10;
    local_res18 = local_d0.ArrayNum;
    this_02.Data = local_d0.AllocatorInstance.Data;
    while( true ) {
      if (local_d0.ArrayNum != (int)uVar10) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_02.Data == pFVar21) break;
      iVar19 = 0;
      iVar5 = local_88.Data.ArrayNum + -1;
      FVar20.Data = local_88.Data.AllocatorInstance.Data;
      if (local_88.Data.ArrayNum == 0) {
        iVar5 = iVar19;
        FVar20.Data = (FScriptContainerElement *)L"";
      }
      iVar5 = ::FString::Find((FString *)this_02.Data,(wchar_t *)FVar20.Data,iVar5,IgnoreCase,
                              FromStart,-1);
      if (iVar5 != -1) {
        if (this_02.Data != (FScriptContainerElement *)&ProviderSection) {
          iVar5 = *(int *)(this_02.Data + 8);
          _Src = *(void **)this_02.Data;
          ProviderSection.Data.ArrayNum = iVar5;
          if ((iVar5 == 0) && (ProviderSection.Data.ArrayMax == 0)) {
            ProviderSection.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,ProviderSection.Data.ArrayMax,(ForAnyElementType *)&ProviderSection
                       ,iVar5,&ProviderSection.Data.ArrayMax);
            if (iVar5 != 0) {
              memcpy(ProviderSection.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
            }
          }
        }
        pwVar9 = L"";
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (ProviderSection.Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)ProviderSection.Data.AllocatorInstance.Data;
        }
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        bVar4 = FConfigCacheIni::GetString(GConfig,pwVar9,L"UsageType",&local_118,&GEngineIni);
        if (bVar4) {
          iVar5 = ::FString::Find(&local_118,L"Runtime",7,IgnoreCase,FromStart,-1);
          iVar6 = ::FString::Find(&local_118,L"Server",6,IgnoreCase,FromStart,-1);
          iVar7 = ::FString::Find(&local_118,L"Client",6,IgnoreCase,FromStart,-1);
          if ((iVar7 != -1) || (iVar6 != -1 || iVar5 != -1)) {
            pwVar9 = L"";
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (ProviderSection.Data.ArrayNum != 0) {
              pwVar9 = (wchar_t *)ProviderSection.Data.AllocatorInstance;
            }
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            bVar4 = FConfigCacheIni::GetString
                              (GConfig,pwVar9,L"ProviderModule",&local_128,&GEngineIni);
            if (bVar4) {
              local_e0 = 0;
              FStack_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              ::FString::FString(&local_98,"Name");
              FVar20.Data = (FScriptContainerElement *)L"";
              if (local_98.Data.ArrayNum != 0) {
                FVar20.Data = local_98.Data.AllocatorInstance.Data;
              }
              pwVar9 = L"";
              local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (ProviderSection.Data.ArrayNum != 0) {
                pwVar9 = (wchar_t *)ProviderSection.Data.AllocatorInstance;
              }
              local_138.Data.ArrayNum = 0;
              local_138.Data.ArrayMax = 0;
              FConfigCacheIni::GetString
                        (GConfig,pwVar9,(wchar_t *)FVar20.Data,&local_138,&GEngineIni);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_138.Data.ArrayNum < 2) {
                if (1 < (byte)LogAnalytics._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics)
                  ;
                }
              }
              else {
                iVar5 = local_138.Data.ArrayNum + -1;
                if (local_138.Data.ArrayNum == 0) {
                  iVar5 = iVar19;
                }
                uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>
                                  (iVar5,(wchar_t *)local_138.Data.AllocatorInstance.Data);
                iVar5 = local_138.Data.ArrayNum;
                if (*(int *)&(this->Providers).field_0x8 != *(int *)&(this->Providers).field_0x34) {
                  puVar1 = *(undefined1 **)&(this->Providers).field_0x40;
                  puVar18 = &(this->Providers).field_0x38;
                  if (puVar1 != (undefined1 *)0x0) {
                    puVar18 = puVar1;
                  }
                  iVar6 = *(int *)(puVar18 +
                                  (ulonglong)(*(int *)&(this->Providers).field_0x48 - 1U & uVar8) *
                                  4);
                  while (iVar6 != -1) {
                    lVar11 = (longlong)iVar6 * 0x28;
                    iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + lVar11);
                    if (iVar7 == iVar5) {
                      if (1 < iVar7) {
                        iVar5 = FGenericPlatformStricmp::Stricmp
                                          (*(wchar_t **)(*(longlong *)&this_00->field_0x0 + lVar11),
                                           (wchar_t *)local_138.Data.AllocatorInstance.Data);
                        bVar4 = iVar5 == 0;
                        iVar5 = local_138.Data.ArrayNum;
                        goto LAB_14ea198ea;
                      }
LAB_14ea198ff:
                      if (iVar6 != -1) {
                        lVar11 = *(longlong *)&this_00->field_0x0 + lVar11;
                        lVar12 = lVar11 + 0x10;
                        if (lVar11 == 0) {
                          lVar12 = 0;
                        }
                        if (lVar12 != 0) {
                          if (2 < (byte)LogAnalytics._0_1_) {
                            UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
                          }
                          goto LAB_14ea19828;
                        }
                      }
                      break;
                    }
                    bVar4 = iVar7 + iVar5 == 1;
LAB_14ea198ea:
                    if (bVar4) goto LAB_14ea198ff;
                    iVar6 = *(int *)(lVar11 + 0x20 + *(longlong *)&this_00->field_0x0);
                  }
                }
                iVar6 = local_108.Data.ArrayNum + -1;
                if (local_108.Data.ArrayNum == 0) {
                  iVar6 = iVar19;
                }
                if (iVar6 != 0) {
                  if (iVar5 == local_108.Data.ArrayNum) {
                    if (iVar5 < 2) goto LAB_14ea19988;
                    iVar5 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)local_138.Data.AllocatorInstance.Data,
                                       (wchar_t *)local_108.Data.AllocatorInstance.Data);
                    bVar4 = iVar5 == 0;
                  }
                  else {
                    bVar4 = iVar5 + local_108.Data.ArrayNum == 1;
                  }
                  if (!bVar4) goto LAB_14ea19828;
                }
LAB_14ea19988:
                pFVar13 = ::FName::FName(&local_68,"Analytics");
                FVar2 = *pFVar13;
                this_01 = FModuleManager::Get();
                pIVar14 = FModuleManager::LoadModuleChecked(this_01,FVar2);
                local_f8.AccessDetector.State =
                     (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
                local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_f0.DelegateSize = 0;
                pcVar3 = *(code **)((longlong)*pIVar14 + 0x40);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          (&local_f8,(FWriteAccessScope *)&local_c0);
                local_a8 = &local_f0;
                puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_f0);
                if (puVar15 != (undefined8 *)0x0) {
                  *puVar15 = &
                             ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar16 = FDelegateHandle::GenerateNewID();
                  puVar15[2] = uVar16;
                  *puVar15 = &
                             ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBV1__N_ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  puVar15[3] = GetAnalyticsProviderConfiguration;
                }
                if (local_c0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
                }
                iVar5 = local_128.Data.ArrayNum + -1;
                if (local_128.Data.ArrayNum == 0) {
                  iVar5 = 0;
                }
                pFVar13 = ::FName::FName(&local_60,iVar5,
                                         (wchar_t *)local_128.Data.AllocatorInstance.Data,FNAME_Add)
                ;
                local_a0 = *pFVar13;
                plVar17 = (longlong *)(*pcVar3)(pIVar14,local_58,&local_a0,&local_f8);
                if (&local_e0 != plVar17) {
                  local_e0 = *plVar17;
                  *plVar17 = 0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&FStack_d8,(FSharedReferencer<1> *)(plVar17 + 1));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_50);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          (&local_f8,(FWriteAccessScope *)&local_c0);
                if ((local_f0.DelegateSize != 0) &&
                   (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_f0,0,0,0x10);
                  local_f0.DelegateSize = 0;
                }
                if (local_c0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
                }
                if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_f0.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          (&local_f8.AccessDetector);
                if (local_e0 == 0) {
                  if (2 < (byte)LogAnalytics._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Unable_to_creat_152fdfe60,
                               (FLogCategoryBase *)&LogAnalytics);
                  }
                }
                else {
                  if (3 < (byte)LogAnalytics._0_1_) {
                    UE::Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
                  }
                  local_78 = &local_138;
                  local_70 = &local_e0;
                  TSet<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<FString_const_&,TSharedPtr<IAnalyticsProvider,1>_const_&>_>
                            ((TSet<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>,FDefaultSetAllocator>
                              *)this_00,
                             (TPairInitializer<FString_const_&,TSharedPtr<IAnalyticsProvider,1>_const_&>
                              *)&stack0x00000020,(bool *)&local_78);
                }
              }
LAB_14ea19828:
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FStack_d8.ReferenceController);
            }
            else if (2 < (byte)LogAnalytics._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
            }
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (2 < (byte)LogAnalytics._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      uVar10 = (ulonglong)local_res18;
      this_02.Data = this_02.Data + 0x10;
    }
  }
  iVar5 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  if (((iVar5 != 0) &&
      (*(int *)&(this->Providers).field_0x8 == *(int *)&(this->Providers).field_0x34)) &&
     (2 < (byte)LogAnalytics._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnalytics);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FAnalyticsProviderBroadcast @ 14ea19ed0

void __thiscall
FAnalyticsProviderBroadcast::~FAnalyticsProviderBroadcast(FAnalyticsProviderBroadcast *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->RecordEventCallback != 0) {
    plVar1 = *(longlong **)&(this->RecordEventCallback).field_0x28;
    plVar4 = (longlong *)&(this->RecordEventCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->DefaultEventAttributes).AllocatorInstance.Data,
             (this->DefaultEventAttributes).ArrayNum);
  pFVar2 = (this->DefaultEventAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SessionID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Providers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Providers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Providers);
  this->_padding_ = (longlong)&___7IAnalyticsProvider__6B_;
  return;
}

// CreateAnalyticsProvider @ 14ea1a600

TSharedPtr<FAnalyticsProviderBroadcast,1> * __cdecl
FAnalyticsProviderBroadcast::CreateAnalyticsProvider
          (TSharedPtr<FAnalyticsProviderBroadcast,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FAnalyticsProviderBroadcast,1> *pTVar4;
  
  pTVar3 = ::operator_new(0xd0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FAnalyticsProviderBroadcast *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalyticsProviderBroadcast___00_SharedPointerInternals__6B_
    ;
    FAnalyticsProviderBroadcast((FAnalyticsProviderBroadcast *)(pTVar3 + 1));
    if ((FAnalyticsProviderBroadcast *)(pTVar3 + 1) == (FAnalyticsProviderBroadcast *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FAnalyticsProviderBroadcast,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FAnalyticsProviderBroadcast *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// EndSession @ 14ea1aab0

void __thiscall FAnalyticsProviderBroadcast::EndSession(FAnalyticsProviderBroadcast *this)

{
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  uint *puVar8;
  FSharedReferencer<1> local_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *local_78;
  int iStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  this_00 = &this->Providers;
  iVar2 = *(int *)&(this->Providers).field_0x28;
  local_68 = &(this->Providers).field_0x10;
  iStack_70 = 0;
  uStack_6c = 1;
  local_58 = iStack_70;
  iStack_5c = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Providers).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_68;
    }
    uVar3 = *puVar8;
    local_58 = 0;
    iStack_70 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)iStack_70;
      local_58 = local_58 + 0x20;
      iStack_70 = iStack_70 + 1;
      iStack_5c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_70) goto LAB_14ea1ab5d;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_6c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_6c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_5c = (int)lVar7 + -1 + local_58;
    if (iVar2 < iStack_5c) {
      iStack_5c = iVar2;
    }
  }
LAB_14ea1ab5d:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(uStack_6c,iStack_70);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78 = this_00;
  iStack_54 = iStack_5c;
  local_48 = this_00;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar2) {
    do {
      local_90.ReferenceController =
           *(TReferenceControllerBase<1> **)
            (*(longlong *)&local_48->field_0x0 + 0x18 + (longlong)TStack_40.CurrentBitIndex * 0x28);
      plVar4 = *(longlong **)
                (*(longlong *)&local_48->field_0x0 + 0x10 +
                (longlong)TStack_40.CurrentBitIndex * 0x28);
      if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_90.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar4 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
      local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_90,&local_80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.ReferenceController);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  TSet<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSharedPtr<IAnalyticsProvider,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>,FDefaultSetAllocator>
           *)this_00);
  return;
}

// FlushEvents @ 14ea1b190

void __thiscall FAnalyticsProviderBroadcast::FlushEvents(FAnalyticsProviderBroadcast *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  FName *pFVar8;
  IModuleInterface *pIVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  FName local_res10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId242,"FAnalyticsProviderBroadcast::FlushEvents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StudioTelemetry\\Private\\AnalyticsProviderBroadcast.cpp"
               ,0xf2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId242);
  }
  iVar11 = 0;
  iVar2 = *(int *)&(this->Providers).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Providers).field_0x10;
  uVar6 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->Providers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar3 = *puVar13;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ea1b271;
      uVar3 = puVar13[lVar10 + 1];
    }
    uVar6 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = iVar12 + -1 + (int)lVar10;
    if (iVar2 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar2;
    }
  }
LAB_14ea1b271:
  TStack_40._padding_ = CONCAT44(uVar6,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar2) {
    do {
      lVar7 = (longlong)TStack_40.CurrentBitIndex;
      lVar10 = *(longlong *)&this->Providers;
      if ((*(longlong *)(lVar10 + 0x10 + lVar7 * 0x28) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(**(longlong **)(lVar10 + lVar7 * 0x28 + 0x10) + 0x20))();
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  pFVar8 = ::FName::FName(&local_res10,"HTTP");
  pIVar9 = FModuleManager::GetModulePtr_Internal(*pFVar8);
  if (pIVar9 != (IModuleInterface *)0x0) {
    if ((pIVar9[4] == (IModuleInterface)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("HttpManager != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                           ,0x50,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FHttpManager::Flush((FHttpManager *)pIVar9[4],FullFlush);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAnalyticsProvider @ 14ea1b4b0

TWeakPtr<IAnalyticsProvider,1> * __thiscall
FAnalyticsProviderBroadcast::GetAnalyticsProvider
          (FAnalyticsProviderBroadcast *this,TWeakPtr<IAnalyticsProvider,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAnalyticsProvider *pIVar2;
  TSharedPtr<IAnalyticsProvider,1> *pTVar3;
  
  pTVar3 = TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
           ::Find((TMapBase<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
                   *)&this->Providers,param_1);
  if (pTVar3 == (TSharedPtr<IAnalyticsProvider,1> *)0x0) {
    __return_storage_ptr__->Object = (IAnalyticsProvider *)0x0;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pIVar2;
    (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetDefaultEventAttribute @ 14ea1b5b0

FAnalyticsEventAttribute * __thiscall
FAnalyticsProviderBroadcast::GetDefaultEventAttribute
          (FAnalyticsProviderBroadcast *this,FAnalyticsEventAttribute *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnalyticsEventAttribute *pFVar4;
  FScriptContainerElement *pFVar5;
  
  uVar3 = 0;
  if (param_1 < (this->DefaultEventAttributes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnalyticsEventAttribute *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar5 = (this->DefaultEventAttributes).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  ::FString::FString(&__return_storage_ptr__->AttrName,(FString *)pFVar5);
  ::FString::FString(&__return_storage_ptr__->AttrValueString,(FString *)(pFVar5 + 0x10));
  __return_storage_ptr__->AttrValueNumber = *(double *)&pFVar5[0x20].field_0x0;
  __return_storage_ptr__->AttrValueBool = (bool)pFVar5[0x28];
  __return_storage_ptr__->AttrType = *(AttrTypeEnum *)(pFVar5 + 0x2c);
  return __return_storage_ptr__;
}

// GetDefaultEventAttributeCount @ 14ea1b670

int __thiscall
FAnalyticsProviderBroadcast::GetDefaultEventAttributeCount(FAnalyticsProviderBroadcast *this)

{
  return (this->DefaultEventAttributes).ArrayNum;
}

// GetDefaultEventAttributesSafe @ 14ea1b680

TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> * __thiscall
FAnalyticsProviderBroadcast::GetDefaultEventAttributesSafe
          (FAnalyticsProviderBroadcast *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FAnalyticsEventAttribute *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->DefaultEventAttributes).ArrayNum;
  pFVar2 = (FAnalyticsEventAttribute *)(this->DefaultEventAttributes).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetSessionID @ 14ea1b900

FString * __thiscall
FAnalyticsProviderBroadcast::GetSessionID
          (FAnalyticsProviderBroadcast *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SessionID);
  return __return_storage_ptr__;
}

// GetUserID @ 14ea1ba80

FString * __thiscall
FAnalyticsProviderBroadcast::GetUserID
          (FAnalyticsProviderBroadcast *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->UserID);
  return __return_storage_ptr__;
}

// RecordEvent @ 14ea1bde0

void __thiscall
FAnalyticsProviderBroadcast::RecordEvent
          (FAnalyticsProviderBroadcast *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014ea1bde6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x78))();
  return;
}

// RecordEvent @ 14ea1bdf0

void __thiscall
FAnalyticsProviderBroadcast::RecordEvent
          (FAnalyticsProviderBroadcast *this,FString *param_1,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2,
          EAnalyticsRecordEventMode param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  CheckForDuplicateAttributes(param_1,param_2);
  iVar13 = 0;
  iVar2 = *(int *)&(this->Providers).field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Providers).field_0x10;
  uVar7 = 1;
  iVar12 = 0;
  TStack_50.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->Providers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_50.Array;
    }
    uVar3 = *puVar14;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar13;
      iVar12 = iVar12 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_50.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ea1beb2;
      uVar3 = puVar14[lVar10 + 1];
    }
    uVar7 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar10 + -1 + iVar12;
    if (iVar2 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar2;
    }
  }
LAB_14ea1beb2:
  TStack_50._padding_ = CONCAT44(uVar7,iVar13);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar12;
  if (TStack_50.CurrentBitIndex < iVar2) {
    do {
      lVar8 = (longlong)TStack_50.CurrentBitIndex;
      lVar10 = *(longlong *)&this->Providers;
      if ((*(longlong *)(lVar10 + 0x10 + lVar8 * 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = *(longlong **)(lVar10 + lVar8 * 0x28 + 0x10);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_1,param_2,param_3);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  if (*(void **)&this->RecordEventCallback != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->RecordEventCallback);
    pcVar5 = *(code **)&this->RecordEventCallback;
    plVar4 = *(longlong **)&(this->RecordEventCallback).field_0x28;
    plVar11 = (longlong *)&(this->RecordEventCallback).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar11 = plVar4;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar9,param_1,param_2);
  }
  return;
}

// SetDefaultEventAttributes @ 14ea1c480

void __thiscall
FAnalyticsProviderBroadcast::SetDefaultEventAttributes
          (FAnalyticsProviderBroadcast *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FAnalyticsEventAttribute *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint *puVar13;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FString,TSharedPtr<IAnalyticsProvider,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IAnalyticsProvider,1>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  pTVar1 = &this->DefaultEventAttributes;
  iVar12 = 0;
  if (pTVar1 != param_1) {
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data,
               (this->DefaultEventAttributes).ArrayNum);
    iVar4 = param_1->ArrayNum;
    piVar2 = &(this->DefaultEventAttributes).ArrayMax;
    pFVar6 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
    (this->DefaultEventAttributes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                ((pTVar1->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  local_88 = &this->Providers;
  iVar4 = *(int *)&(this->Providers).field_0x28;
  local_78 = &(this->Providers).field_0x10;
  uStack_7c = 1;
  local_68 = iVar12;
  iStack_6c = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Providers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_78;
    }
    uVar5 = *puVar13;
    local_68 = 0;
    iVar12 = 0;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar12;
      local_68 = local_68 + 0x20;
      iVar12 = iVar12 + 1;
      iStack_6c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ea1c58e;
      uVar5 = puVar13[lVar11 + 1];
    }
    uStack_7c = -uVar5 & uVar5;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar11;
    if (iVar4 < iStack_6c) {
      iStack_6c = iVar4;
    }
  }
LAB_14ea1c58e:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iVar12);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_80 = iVar12;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar4) {
    do {
      lVar10 = (longlong)TStack_50.CurrentBitIndex;
      lVar11 = *(longlong *)local_58;
      if ((*(longlong *)(lVar11 + 0x10 + lVar10 * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar7 = *(longlong **)(lVar11 + lVar10 * 0x28 + 0x10);
      iVar12 = (this->DefaultEventAttributes).ArrayNum;
      pFVar6 = (FAnalyticsEventAttribute *)(pTVar1->AllocatorInstance).Data;
      local_98.Data = (FScriptContainerElement *)0x0;
      pcVar8 = *(code **)(*plVar7 + 0x38);
      local_90 = iVar12;
      if (iVar12 == 0) {
        local_8c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar12,0,&local_98,iVar12,&local_8c);
        ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
                  (local_98.Data,pFVar6,iVar12);
      }
      (*pcVar8)(plVar7,&local_98);
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_98.Data,local_90);
      if ((FAnalyticsEventAttribute *)local_98.Data != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_98.Data);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// SetRecordEventCallback @ 14ea1c6f0

void __thiscall
FAnalyticsProviderBroadcast::SetRecordEventCallback
          (FAnalyticsProviderBroadcast *this,
          TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  longlong *plVar1;
  
  TFunction<void___cdecl(FString_const_&,TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_>_const_&)>
  ::operator=(&this->RecordEventCallback,param_1);
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea1c722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// SetSessionID @ 14ea1c800

bool __thiscall
FAnalyticsProviderBroadcast::SetSessionID(FAnalyticsProviderBroadcast *this,FString *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  ::FString::operator=(&this->SessionID,param_1);
  iVar2 = *(int *)&(this->Providers).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Providers).field_0x10;
  iVar13 = 0;
  bVar12 = true;
  uVar9 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->Providers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar3 = *puVar15;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_40.CurrentBitIndex = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar13) goto LAB_14ea1c8b1;
      uVar3 = puVar15[lVar10 + 1];
    }
    uVar9 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar14;
    if (iVar2 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar2;
    }
  }
LAB_14ea1c8b1:
  TStack_40._padding_ = CONCAT44(uVar9,iVar13);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < iVar2) {
    do {
      lVar11 = (longlong)TStack_40.CurrentBitIndex;
      lVar10 = *(longlong *)&this->Providers;
      if ((*(longlong *)(lVar10 + 0x10 + lVar11 * 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      plVar4 = *(longlong **)(lVar10 + lVar11 * 0x28 + 0x10);
      bVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
      bVar12 = (bool)(bVar12 & bVar8);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return bVar12;
}

// SetUserID @ 14ea1c9b0

void __thiscall
FAnalyticsProviderBroadcast::SetUserID(FAnalyticsProviderBroadcast *this,FString *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  ::FString::operator=(&this->UserID,param_1);
  iVar2 = *(int *)&(this->Providers).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Providers).field_0x10;
  iVar10 = 0;
  uVar7 = 1;
  iVar11 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->Providers).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)TStack_40.Array;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ea1ca51;
      uVar3 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar11;
    if (iVar2 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar2;
    }
  }
LAB_14ea1ca51:
  TStack_40._padding_ = CONCAT44(uVar7,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar11;
  if (TStack_40.CurrentBitIndex < iVar2) {
    do {
      lVar8 = (longlong)TStack_40.CurrentBitIndex;
      lVar9 = *(longlong *)&this->Providers;
      if ((*(longlong *)(lVar9 + 0x10 + lVar8 * 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar4 = *(longlong **)(lVar9 + lVar8 * 0x28 + 0x10);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// StartSession @ 14ea1cb40

bool __thiscall
FAnalyticsProviderBroadcast::StartSession
          (FAnalyticsProviderBroadcast *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar13 = 0;
  iVar2 = *(int *)&(this->Providers).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Providers).field_0x10;
  bVar12 = true;
  uVar9 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->Providers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar3 = *puVar15;
    while (uVar3 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_40.CurrentBitIndex = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar13) goto LAB_14ea1cbe1;
      uVar3 = puVar15[lVar10 + 1];
    }
    uVar9 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar14;
    if (iVar2 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar2;
    }
  }
LAB_14ea1cbe1:
  TStack_40._padding_ = CONCAT44(uVar9,iVar13);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < iVar2) {
    do {
      lVar11 = (longlong)TStack_40.CurrentBitIndex;
      lVar10 = *(longlong *)&this->Providers;
      if ((*(longlong *)(lVar10 + 0x10 + lVar11 * 0x28) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      puVar4 = *(undefined8 **)(lVar10 + lVar11 * 0x28 + 0x10);
      bVar8 = (**(code **)*puVar4)(puVar4,param_1);
      bVar12 = (bool)(bVar12 & bVar8);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return bVar12;
}

