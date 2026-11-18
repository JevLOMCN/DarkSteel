// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b70a780

UClass * __cdecl UDS_VM_W_APIServerSelect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_APIServerSelect",
               &Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_APIServerSelect,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_APIServerSelect>,
               InternalVTableHelperCtorCaller<UDS_VM_W_APIServerSelect>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton;
}

// UDS_VM_W_APIServerSelect @ 14b710160

UDS_VM_W_APIServerSelect * __thiscall
UDS_VM_W_APIServerSelect::UDS_VM_W_APIServerSelect
          (UDS_VM_W_APIServerSelect *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelect__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_APIServerSelect @ 14b7101b0

UDS_VM_W_APIServerSelect * __thiscall
UDS_VM_W_APIServerSelect::UDS_VM_W_APIServerSelect
          (UDS_VM_W_APIServerSelect *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelect__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_APIServerSelect @ 14b712cc0

void __thiscall UDS_VM_W_APIServerSelect::~UDS_VM_W_APIServerSelect(UDS_VM_W_APIServerSelect *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelect__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7166e0

IClassDescriptor * __thiscall
UDS_VM_W_APIServerSelect::GetFieldNotificationDescriptor(UDS_VM_W_APIServerSelect *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_APIServerSelect::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7171d0

UClass * __cdecl UDS_VM_W_APIServerSelect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_APIServerSelect",
               &Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_APIServerSelect,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_APIServerSelect>,
               InternalVTableHelperCtorCaller<UDS_VM_W_APIServerSelect>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_APIServerSelect.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_APIServerSelect @ 14b7188a0

void __cdecl UDS_VM_W_APIServerSelect::StaticRegisterNativesUDS_VM_W_APIServerSelect(void)

{
  return;
}

// OnSetViewModel @ 14bfc3090

void __thiscall
UDS_VM_W_APIServerSelect::OnSetViewModel
          (UDS_VM_W_APIServerSelect *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateServerList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateServerList @ 14bfe5230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_APIServerSelect::UpdateServerList(UDS_VM_W_APIServerSelect *this)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  UDS_GameInstance *this_00;
  UDS_SyncServer *this_01;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_03;
  UDS_LogManager *pUVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [8];
  FWeakObjectPtr local_260;
  longlong *local_258;
  int iStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  int local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  int local_224;
  UDS_UserObjectListItem *local_220;
  UDS_VM_W_APIServerSelect *local_218;
  FName local_208;
  int local_200;
  TSharedPtr<FDS_ViewModelContext,1> local_1f8;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  undefined1 local_1a8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  uint local_180;
  int local_174;
  void *local_168;
  undefined4 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_218 = this;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 != (UDS_GameInstance *)0x0) {
    UDS_GameInstance::GetServerInfoObject(this_00);
    bVar5 = TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> *)&local_260,(void *)0x0);
    if (!bVar5) {
      this_01 = (UDS_SyncServer *)FWeakObjectPtr::Get(&local_260);
      UDS_SyncServer::GetServerInfos
                (this_01,(TMap<int,FDS_ServerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ServerInfo,0>_>
                          *)local_1a8);
      uVar16 = local_180;
      iStack_250 = 0;
      local_238 = 0;
      uStack_24c = 1;
      uStack_23c = 0;
      if (local_180 != 0) {
        pTVar17 = pTVar2;
        if (local_188 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = local_188;
        }
        uVar14 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        while (uVar14 == 0) {
          lVar12 = (longlong)iStack_250;
          local_238 = local_238 + 0x20;
          iStack_250 = iStack_250 + 1;
          uStack_23c = local_180;
          if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_250)
          goto LAB_14bfe5353;
          uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uStack_24c = -uVar14 & uVar14;
        uVar1 = (ulonglong)uStack_24c * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_228 = (int)lVar12;
        uStack_23c = local_238 + -1 + local_228;
        if ((int)local_180 < (int)uStack_23c) {
          uStack_23c = local_180;
        }
      }
LAB_14bfe5353:
      local_258 = (longlong *)local_1a8;
      iStack_230 = local_1a8._8_4_ - local_174;
      uVar14 = local_180 & 0xffffffe0;
      uStack_240 = 0xffffffff;
      TStack_1e0.CurrentBitIndex = uStack_23c;
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._padding_ = CONCAT44(uStack_24c,iStack_250);
      iVar13 = (int)local_180 >> 5;
      TStack_1e0._28_4_ = uStack_23c;
      TStack_1e0.BaseBitIndex = local_238;
      uStack_1c0 = CONCAT44(uStack_22c,iStack_230);
      bVar11 = (byte)local_180;
      local_248 = pTVar2;
      uStack_234 = uStack_23c;
      local_1e8 = local_258;
      TStack_1e0.Array = pTVar2;
      if (((int)local_180 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar16 != local_180) {
        pTVar17 = pTVar2;
        if (local_188 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = local_188;
        }
        uVar16 = -1 << (bVar11 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
        while (uVar16 == 0) {
          lVar12 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar16 = local_180;
          if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14bfe5461;
          uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_224 = (int)lVar12;
        uVar16 = local_224 + -1 + uVar14;
        if ((int)local_180 < (int)uVar16) {
          uVar16 = local_180;
        }
      }
LAB_14bfe5461:
      do {
        plVar4 = local_1e8;
        if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
          local_268[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
        }
        lVar12 = (longlong)TStack_1e0.CurrentBitIndex;
        if (((TStack_1e0.CurrentBitIndex == uVar16) && (TStack_1e0.Array == pTVar2)) &&
           (plVar4 == (longlong *)local_1a8)) {
LAB_14bfe576f:
          local_160 = 0;
          if (local_168 != (void *)0x0) {
            FMemory::Free(local_168);
          }
          TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ServerInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1a8);
          this = local_218;
          break;
        }
        lVar15 = *plVar4;
        pUVar6 = GetTransientPackageAsObject();
        this_02 = NewObject<UDS_UserObjectListItem>(pUVar6);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_02 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe56f7;
        }
        else {
          if (this_02 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfe56f7:
            pUVar10 = UDS_LogManager::GetInst();
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_VM_W_APIServerSelect::UpdateServerList",0x2a,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,local_158.Ptr,0x2e,
                         L"UDS_VM_W_ServerList::InitViewModel() NewObject<UDS_ListItemObject> failed"
                        );
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
            goto LAB_14bfe576f;
          }
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        pFVar7 = ::operator_new(0x88);
        if (pFVar7 == (FDS_ViewModelContext *)0x0) {
          pFVar7 = (FDS_ViewModelContext *)0x0;
        }
        else {
          *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
          pFVar7->DerivedStaticStruct = (UStruct *)0x0;
          pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_ServerInfo__6B_;
          (pFVar7->ViewModelName).ComparisonIndex = 0;
          (pFVar7->ViewModelName).Number = 0;
          pFVar7[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar7[1].ViewModelName.ComparisonIndex = 0;
          pFVar7[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar7[1].ViewModelTemplateKey = 0;
          pFVar7[2]._padding_ = 0;
          pFVar7[2].DerivedStaticStruct = (UStruct *)0x0;
          pFVar7[2].ViewModelName.ComparisonIndex = 0;
          pFVar7[2].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar7[2].ViewModelTemplateKey = 0;
          pFVar7[3]._padding_ = 0;
          pFVar7[3].DerivedStaticStruct = (UStruct *)0x0;
          pFVar7[3].ViewModelName.ComparisonIndex = 0;
          pFVar7[3].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar7[3].ViewModelTemplateKey = 0;
          pFVar7[4]._padding_ = 0;
          pFVar7[1]._padding_ = 0;
          ::FString::FString((FString *)&pFVar7[1].DerivedStaticStruct,"");
          ::FString::FString((FString *)&pFVar7[1].ViewModelTemplateKey,"");
          ::FString::FString((FString *)&pFVar7[2].DerivedStaticStruct,"");
          ::FString::FString((FString *)&pFVar7[2].ViewModelTemplateKey,"");
          pFVar7[3].DerivedStaticStruct = (UStruct *)0x0;
          pFVar7[3].ViewModelName.ComparisonIndex = 0;
          pFVar7[3].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar7[3].ViewModelTemplateKey = 0;
          pFVar7[4]._padding_ = 0;
        }
        pTVar8 = ::operator_new(0x20);
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ServerInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar8[1].SharedReferenceCount = pFVar7;
        }
        if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_ServerInfo::StaticStruct();
        pFVar7->DerivedStaticStruct = (UStruct *)pUVar9;
        this_03 = UDS_ViewModelContextManager::GetInst();
        if (this_03 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1f8.Object = pFVar7;
          local_1f8.SharedReferenceCount.ReferenceController = pTVar8;
          UDS_ViewModelContextManager::RegisterContext(this_03,&local_1f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f8.SharedReferenceCount.ReferenceController);
        }
        pFVar7->ViewModelTemplateKey = W_APIServerSelectBtn;
        lVar15 = lVar12 * 0x78 + lVar15;
        *(undefined4 *)&pFVar7[1]._padding_ = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = *(undefined4 *)(lVar15 + 0xc);
        ::FString::operator=((FString *)&pFVar7[1].DerivedStaticStruct,(FString *)(lVar15 + 0x10));
        ::FString::operator=((FString *)&pFVar7[1].ViewModelTemplateKey,(FString *)(lVar15 + 0x20));
        ::FString::operator=((FString *)&pFVar7[2].DerivedStaticStruct,(FString *)(lVar15 + 0x30));
        ::FString::operator=((FString *)&pFVar7[2].ViewModelTemplateKey,(FString *)(lVar15 + 0x40));
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar7[3].DerivedStaticStruct,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x50));
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar7[3].ViewModelTemplateKey,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar15 + 0x60));
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b8.Object = pFVar7;
        local_1b8.SharedReferenceCount.ReferenceController = pTVar8;
        UDS_UserObjectListItem::AddContext(this_02,&local_1b8);
        local_220 = this_02;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_220);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
      } while( true );
    }
  }
  local_200 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_208 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
  return;
}

