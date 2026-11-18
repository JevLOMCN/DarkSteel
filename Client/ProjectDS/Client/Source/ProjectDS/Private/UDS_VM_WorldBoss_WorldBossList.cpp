// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6fcce0

UClass * __cdecl UDS_VM_WorldBoss_WorldBossList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_WorldBossList",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_WorldBossList,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_WorldBossList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_WorldBossList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton;
}

// UDS_VM_WorldBoss_WorldBossList @ 14b701060

UDS_VM_WorldBoss_WorldBossList * __thiscall
UDS_VM_WorldBoss_WorldBossList::UDS_VM_WorldBoss_WorldBossList
          (UDS_VM_WorldBoss_WorldBossList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossList__6B_;
  (this->WorldBossListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->WorldBossListSlotEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_WorldBoss_WorldBossList @ 14b7010b0

UDS_VM_WorldBoss_WorldBossList * __thiscall
UDS_VM_WorldBoss_WorldBossList::UDS_VM_WorldBoss_WorldBossList
          (UDS_VM_WorldBoss_WorldBossList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossList__6B_;
  (this->WorldBossListSlotEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossListSlotEventField).UserObjectList.ArrayNum = 0;
  (this->WorldBossListSlotEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_WorldBoss_WorldBossList @ 14b7031c0

void __thiscall
UDS_VM_WorldBoss_WorldBossList::~UDS_VM_WorldBoss_WorldBossList
          (UDS_VM_WorldBoss_WorldBossList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_WorldBossList__6B_;
  pFVar1 = (this->WorldBossListSlotEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b706070

IClassDescriptor * __thiscall
UDS_VM_WorldBoss_WorldBossList::GetFieldNotificationDescriptor(UDS_VM_WorldBoss_WorldBossList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss_WorldBossList::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706dd0

UClass * __cdecl UDS_VM_WorldBoss_WorldBossList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_WorldBossList",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_WorldBossList,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_WorldBoss_WorldBossList>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_WorldBossList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_WorldBossList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_WorldBossList @ 14b7076e0

void __cdecl
UDS_VM_WorldBoss_WorldBossList::StaticRegisterNativesUDS_VM_WorldBoss_WorldBossList(void)

{
  return;
}

// OnSetViewModel @ 14c037110

void __thiscall
UDS_VM_WorldBoss_WorldBossList::OnSetViewModel
          (UDS_VM_WorldBoss_WorldBossList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)(this->_padding_ + 0x330))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetBossList @ 14c040160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_WorldBossList::SetBossList(UDS_VM_WorldBoss_WorldBossList *this)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  FDS_EntryBindingEventField *this_00;
  bool bVar5;
  UDS_WorldBossManager *this_01;
  uint *puVar6;
  UDS_LogManager *pUVar7;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_03;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FDS_ViewModelContext *pFVar17;
  FDS_ViewModelContext *pFVar18;
  UDS_VM_WorldBoss_WorldBossList *pUVar19;
  FDS_ViewModelContext *pFVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_408 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  FIdentityFunctor local_3c6 [6];
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  UDS_VM_WorldBoss_WorldBossList *local_3b0;
  uint local_3a8;
  FScriptContainerElement *local_3a0;
  longlong *local_398;
  uint uStack_390;
  uint uStack_38c;
  TBitArray<FDefaultBitArrayAllocator> *local_388;
  undefined8 uStack_380;
  uint local_378;
  undefined4 uStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int local_368;
  int local_364;
  FDS_EntryBindingEventField *local_360;
  undefined8 uStack_358;
  UDS_UserObjectListItem *local_350;
  FName local_348;
  int local_340;
  TSharedPtr<FDS_ViewModelContext,1> local_338;
  longlong *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  TSharedPtr<FDS_ViewModelContext,1> local_2f8 [2];
  undefined4 local_2cc;
  undefined1 local_2c8 [32];
  uint *local_2a8;
  uint local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  int local_294;
  undefined1 local_290 [8];
  ForElementType<FSetElementId> local_288;
  int local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_3b0 = this;
  this_01 = UDS_WorldBossManager::GetInst();
  if ((this_01 == (UDS_WorldBossManager *)0x0) || (((uint)this_01->_padding_ >> 0x1e & 1) != 0)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_WorldBoss_WorldBossList::SetBossList",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x19,L"UDS_WorldBossManager is InValid");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar18 = (FDS_ViewModelContext *)0x0;
    local_2c8._0_8_ = 0;
    local_2c8._8_8_ = 0;
    local_2a8 = (uint *)0x0;
    uVar21 = 0;
    local_2a0 = 0;
    local_29c = 0x80;
    local_298 = 0xffffffff;
    local_294 = 0;
    local_288 = (ForElementType<FSetElementId>)0x0;
    local_280 = 0;
    TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
                 *)local_2c8,
                (TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
                 *)&this_01->WorldBossInfoMap);
    uVar23 = local_2a0;
    local_3c0.Data = (FScriptContainerElement *)0x0;
    uStack_38c = 1;
    local_3b8 = 0;
    TStack_320.CurrentBitIndex = uVar21;
    local_378 = uVar21;
    if (local_2a0 != 0) {
      puVar6 = (uint *)(local_2c8 + 0x10);
      if (local_2a8 != (uint *)0x0) {
        puVar6 = local_2a8;
      }
      uVar24 = *puVar6;
      pFVar20 = pFVar18;
      pFVar17 = pFVar18;
      local_378 = 0;
      uVar21 = 0;
      while (uVar24 == 0) {
        iVar15 = (int)pFVar20;
        local_378 = (int)pFVar17 + 0x20;
        pFVar17 = (FDS_ViewModelContext *)(ulonglong)local_378;
        uVar21 = iVar15 + 1;
        pFVar20 = (FDS_ViewModelContext *)(ulonglong)uVar21;
        TStack_320.CurrentBitIndex = local_2a0;
        if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_14c04028f;
        uVar24 = puVar6[(longlong)iVar15 + 1];
      }
      uStack_38c = -uVar24 & uVar24;
      uVar13 = (ulonglong)uStack_38c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_368 = (int)lVar12;
      TStack_320.CurrentBitIndex = (local_378 - 1) + local_368;
      if ((int)local_2a0 < TStack_320.CurrentBitIndex) {
        TStack_320.CurrentBitIndex = local_2a0;
      }
    }
LAB_14c04028f:
    local_398 = (longlong *)local_2c8;
    local_388 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10);
    uVar24 = local_2a0 & 0xffffffe0;
    iStack_370 = local_2c8._8_4_ - local_294;
    uStack_380 = CONCAT44(TStack_320.CurrentBitIndex,0xffffffff);
    TStack_320._padding_ = CONCAT44(uStack_38c,uVar21);
    uStack_374 = local_2cc;
    iVar15 = (int)local_2a0 >> 5;
    uStack_300 = CONCAT44(uStack_36c,iStack_370);
    bVar11 = (byte)local_2a0;
    TStack_320.UnvisitedBitMask = 0xffffffff;
    TStack_320.BaseBitIndex = local_378;
    TStack_320._28_4_ = local_2cc;
    pFVar20 = pFVar18;
    uStack_390 = uVar21;
    local_328 = local_398;
    TStack_320.Array = local_388;
    if ((int)local_2a0 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar20 = (FDS_ViewModelContext *)(local_3b8 & 0xffffffff);
    }
    if (uVar23 != local_2a0) {
      puVar6 = (uint *)(local_2c8 + 0x10);
      if (local_2a8 != (uint *)0x0) {
        puVar6 = local_2a8;
      }
      uVar21 = -1 << (bVar11 & 0x1f) & puVar6[iVar15];
      while (uVar21 == 0) {
        lVar12 = (longlong)iVar15;
        uVar24 = uVar24 + 0x20;
        iVar15 = iVar15 + 1;
        uVar23 = local_2a0;
        if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14c040394;
        uVar21 = puVar6[lVar12 + 1];
      }
      uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_364 = (int)lVar12;
      uVar23 = local_364 + -1 + uVar24;
      if ((int)local_2a0 < (int)uVar23) {
        uVar23 = local_2a0;
      }
    }
LAB_14c040394:
    while( true ) {
      plVar2 = local_328;
      iVar15 = (int)pFVar20;
      if ((int)local_328[1] - *(int *)((longlong)local_328 + 0x34) != (int)uStack_300) {
        local_3c8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3c8);
        iVar15 = (uint)local_3b8;
      }
      pUVar19 = local_3b0;
      lVar12 = (longlong)TStack_320.CurrentBitIndex;
      if (((TStack_320.CurrentBitIndex == uVar23) &&
          (TStack_320.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10))) &&
         (plVar2 == (longlong *)local_2c8)) break;
      lVar3 = *plVar2;
      puVar1 = (undefined8 *)(lVar3 + lVar12 * 0x30);
      local_360 = (FDS_EntryBindingEventField *)*puVar1;
      uStack_358 = puVar1[1];
      _local_378 = *(undefined8 *)(lVar3 + 0x20 + lVar12 * 0x30);
      plVar2 = (longlong *)(lVar3 + 0x10 + lVar12 * 0x30);
      local_388 = (TBitArray<FDefaultBitArrayAllocator> *)*plVar2;
      uStack_380 = plVar2[1];
      if (iVar15 == local_3b8._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_3c0,(int *)((longlong)&local_3b8 + 4));
      }
      local_3b8 = CONCAT44(local_3b8._4_4_,iVar15 + 1);
      *(undefined4 *)(local_3c0.Data + (longlong)iVar15 * 4) = local_360._0_4_;
      TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
      pFVar20 = (FDS_ViewModelContext *)(local_3b8 & 0xffffffff);
    }
    local_360 = &local_3b0->WorldBossListSlotEventField;
    FDS_EntryBindingEventField::Reset(local_360);
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UDS_VM_WorldBoss_WorldBossList::SetBossList_::__l2::<lambda_1>_>_>
              ((int *)local_3c0.Data,(uint)local_3b8,local_3c6[0],(<lambda_1> *)local_3c6);
    if (0 < (int)(uint)local_3b8) {
      UDS_WorldBossManager::SetSelectedWorldBossID(this_01,*(uint *)local_3c0.Data);
    }
    this_00 = local_360;
    uVar13 = (ulonglong)(int)(uint)local_3b8;
    pFVar16 = local_3c0.Data + uVar13 * 4;
    FVar22.Data = local_3c0.Data;
    uVar21 = (uint)local_3b8;
    local_3a8 = (uint)local_3b8;
    local_3a0 = pFVar16;
    while( true ) {
      if (uVar21 != (uint)uVar13) {
        local_3c7 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3c7);
      }
      if (FVar22.Data == pFVar16) break;
      if (local_2c8._8_4_ != local_294) {
        FVar14 = (ForElementType<FSetElementId>)local_290;
        if (local_288 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = local_288;
        }
        uVar21 = *(uint *)((longlong)FVar14 + (ulonglong)(local_280 - 1U & *(uint *)FVar22.Data) * 4
                          );
        while (uVar21 != 0xffffffff) {
          puVar6 = (uint *)((longlong)(int)uVar21 * 0x30 + local_2c8._0_8_);
          if (*puVar6 == *(uint *)FVar22.Data) {
            pFVar20 = (FDS_ViewModelContext *)(puVar6 + 1);
            if (puVar6 == (uint *)0x0) {
              pFVar20 = pFVar18;
            }
            if (pFVar20 != (FDS_ViewModelContext *)0x0) {
              this_02 = NewObject<UDS_UserObjectListItem>((UObject *)pUVar19);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_02 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              pFVar8 = ::operator_new(0x30);
              pFVar17 = pFVar18;
              if (pFVar8 != (FDS_ViewModelContext *)0x0) {
                *(undefined8 *)&pFVar8->field_0x1c = 0;
                puVar6 = (uint *)((longlong)&pFVar8[1]._padding_ + 4);
                puVar6[0] = 0;
                puVar6[1] = 0;
                ((atomic<int> *)&pFVar8[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
                *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
                (pFVar8->ViewModelName).ComparisonIndex = 0;
                (pFVar8->ViewModelName).Number = 0;
                pFVar8->ViewModelTemplateKey = None;
                pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldBossSlot__6B_;
                pFVar17 = pFVar8;
              }
              pFVar9 = ::operator_new(0x20);
              pFVar8 = pFVar18;
              if (pFVar9 != (FDS_ViewModelContext *)0x0) {
                *(atomic<int> *)&pFVar9->DerivedStaticStruct = (atomic<int>)0x1;
                *(code **)&(pFVar9->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
                pFVar9->_padding_ =
                     (longlong)
                     &
                     ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldBossSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
                ;
                ((atomic<int> *)&pFVar9->DerivedStaticStruct)[1] = (atomic<int>)0x1;
                *(FDS_ViewModelContext **)&pFVar9->ViewModelTemplateKey = pFVar17;
                pFVar8 = pFVar9;
              }
              if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar10 = FDS_ViewModelContext_WorldBossSlot::StaticStruct();
              *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar10;
              this_03 = UDS_ViewModelContextManager::GetInst();
              if (this_03 != (UDS_ViewModelContextManager *)0x0) {
                if (pFVar8 != (FDS_ViewModelContext *)0x0) {
                  LOCK();
                  *(atomic<int> *)&pFVar8->DerivedStaticStruct =
                       (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
                  UNLOCK();
                }
                local_338.Object = pFVar17;
                local_338.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pFVar8;
                UDS_ViewModelContextManager::RegisterContext(this_03,&local_338);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_338.SharedReferenceCount.ReferenceController);
              }
              pFVar17->ViewModelTemplateKey = WorldBossListSlot;
              pFVar17[1]._padding_ = (longlong)(int)*(uint *)FVar22.Data;
              *(atomic<int> *)&pFVar17[1].DerivedStaticStruct =
                   ((atomic<int> *)&pFVar20->DerivedStaticStruct)[1];
              ((atomic<int> *)&pFVar17[1].DerivedStaticStruct)[1] =
                   (atomic<int>)(pFVar20->ViewModelName).Number;
              if (pFVar8 != (FDS_ViewModelContext *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar8->DerivedStaticStruct =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
                UNLOCK();
              }
              local_2f8[0].Object = pFVar17;
              local_2f8[0].SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar8;
              UDS_UserObjectListItem::AddContext(this_02,local_2f8);
              local_350 = this_02;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this_02 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              FDS_EntryBindingEventField::Add
                        (this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_350);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar8);
              pFVar16 = local_3a0;
              pUVar19 = local_3b0;
              goto LAB_14c0405d4;
            }
            break;
          }
          uVar21 = puVar6[10];
        }
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_WorldBoss_WorldBossList::SetBossList",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_278.Ptr,0x39,L"WorldBossInfo not found for ID: %d");
        pFVar16 = local_3a0;
        pUVar19 = local_3b0;
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
          pFVar16 = local_3a0;
          pUVar19 = local_3b0;
        }
      }
LAB_14c0405d4:
      FVar22.Data = FVar22.Data + 4;
      uVar13 = (ulonglong)local_3a8;
      uVar21 = (uint)local_3b8;
    }
    local_340 = FFieldNotificationClassDescriptor::WorldBossListSlotEventField.BitNumber;
    local_348 = FFieldNotificationClassDescriptor::WorldBossListSlotEventField.FieldName;
    (**(code **)(pUVar19->_padding_ + 0x38))(&pUVar19->_padding_,&local_348);
    if (local_3c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data);
    }
    local_280 = 0;
    if (local_288 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_288);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldBossInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c8);
  }
  return;
}

