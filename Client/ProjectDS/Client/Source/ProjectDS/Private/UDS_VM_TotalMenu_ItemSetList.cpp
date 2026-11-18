// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6ede40

UClass * __cdecl UDS_VM_TotalMenu_ItemSetList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_ItemSetList",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_ItemSetList,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_ItemSetList>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_ItemSetList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton;
}

// UDS_VM_TotalMenu_ItemSetList @ 14b6f2a50

UDS_VM_TotalMenu_ItemSetList * __thiscall
UDS_VM_TotalMenu_ItemSetList::UDS_VM_TotalMenu_ItemSetList
          (UDS_VM_TotalMenu_ItemSetList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ItemPerSetNum = 4;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSetList__6B_;
  (this->EntryBindingEventField_ItemSet).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ItemSet).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ItemSet).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_TotalMenu_ItemSetList @ 14b6f2ab0

UDS_VM_TotalMenu_ItemSetList * __thiscall
UDS_VM_TotalMenu_ItemSetList::UDS_VM_TotalMenu_ItemSetList
          (UDS_VM_TotalMenu_ItemSetList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ItemPerSetNum = 4;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSetList__6B_;
  (this->EntryBindingEventField_ItemSet).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ItemSet).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ItemSet).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_TotalMenu_ItemSetList @ 14b6f4540

void __thiscall
UDS_VM_TotalMenu_ItemSetList::~UDS_VM_TotalMenu_ItemSetList(UDS_VM_TotalMenu_ItemSetList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu_ItemSetList__6B_;
  pFVar1 = (this->EntryBindingEventField_ItemSet).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6e70

IClassDescriptor * __thiscall
UDS_VM_TotalMenu_ItemSetList::GetFieldNotificationDescriptor(UDS_VM_TotalMenu_ItemSetList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu_ItemSetList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7960

UClass * __cdecl UDS_VM_TotalMenu_ItemSetList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu_ItemSetList",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu_ItemSetList,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_TotalMenu_ItemSetList>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu_ItemSetList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu_ItemSetList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TotalMenu_ItemSetList @ 14b6f84a0

void __cdecl UDS_VM_TotalMenu_ItemSetList::StaticRegisterNativesUDS_VM_TotalMenu_ItemSetList(void)

{
  return;
}

// OnSetViewModel @ 14bf6eb30

void __thiscall
UDS_VM_TotalMenu_ItemSetList::OnSetViewModel
          (UDS_VM_TotalMenu_ItemSetList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SetMainList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMainList @ 14bf7ba40

void __thiscall UDS_VM_TotalMenu_ItemSetList::SetMainList(UDS_VM_TotalMenu_ItemSetList *this)

{
  int iVar1;
  atomic<int> *paVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  atomic<int> aVar5;
  code *pcVar6;
  undefined1 auVar7 [8];
  atomic<int> aVar8;
  FName FVar9;
  FDS_ViewModelContext_TotalMenuItemSet *pFVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UObject *pUVar14;
  UDS_UserObjectListItem *pUVar15;
  FDS_ViewModelContext *pFVar16;
  UScriptStruct *pUVar17;
  UDS_ViewModelContextManager *pUVar18;
  uint uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FDS_ViewModelContext *pFVar22;
  FDS_ContentsTotalMenuTableRow *pFVar23;
  FDS_ViewModelContext *pFVar24;
  TArray<EDS_TotalMenuId,TSizedDefaultAllocator<32>_> *pTVar25;
  int iVar26;
  longlong lVar27;
  FName FVar28;
  FDS_EntryBindingEventField *this_00;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128 [8];
  undefined8 local_120;
  FName local_118;
  FName local_110;
  uint local_108;
  uint local_104;
  FDS_EntryBindingEventField *local_100;
  uint local_f8;
  TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> local_f0;
  UDS_UserObjectListItem *local_e0;
  UDS_UserObjectListItem *local_d8;
  FName local_d0;
  UDS_UserObjectListItem *local_c8 [2];
  FName local_b8;
  int local_b0;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext_TotalMenuItemSet,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  this_00 = &this->EntryBindingEventField_ItemSet;
  local_100 = this_00;
  FDS_EntryBindingEventField::Reset(this_00);
  uVar19 = 0;
  local_128 = (undefined1  [8])0x0;
  local_120 = (UStruct *)0x0;
  FDS_ContentsTotalMenuTableRow::GetAll(&local_f0);
  iVar26 = local_f0.ArrayNum;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_104 = 0;
  local_108 = 0;
  pFVar4 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
  FVar21.Data = local_f0.AllocatorInstance.Data;
  while( true ) {
    uVar12 = uVar19;
    if (local_f0.ArrayNum != iVar26) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_ContentsTotalMenuTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar12 = local_108;
    }
    if (FVar21.Data == pFVar4) break;
    uVar19 = uVar12;
    if ((*(longlong *)FVar21.Data != 0) && (*(char *)(*(longlong *)FVar21.Data + 0x20) == '\x01')) {
      if (uVar12 == local_104) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&local_110,(int *)&local_104);
      }
      uVar19 = uVar12 + 1;
      *(FDS_ContentsTotalMenuTableRow **)((longlong)local_110 + (longlong)(int)uVar12 * 8) =
           *(FDS_ContentsTotalMenuTableRow **)FVar21.Data;
      local_108 = uVar19;
    }
    FVar21.Data = FVar21.Data + 8;
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
    uVar12 = local_108;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu_ItemSetList::SetMainList_::__l2::<lambda_1>_>_>
            ((FDS_ContentsTotalMenuTableRow **)local_110,uVar12,local_res8,(<lambda_1> *)local_res20
            );
  uVar20 = (ulonglong)(int)local_108;
  local_f8 = local_108;
  if (0 < (int)local_108) {
    local_d0 = (FName)((longlong)local_110 + uVar20 * 8);
    iVar26 = (*(FDS_ContentsTotalMenuTableRow **)local_110)->Order;
    FVar28 = local_110;
    iVar13 = (int)local_120._0_4_;
    while( true ) {
      FVar9 = local_d0;
      local_118 = FVar28;
      if (local_108 != (uint)uVar20) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_ContentsTotalMenuTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
        iVar13 = (int)local_120._0_4_;
      }
      if (FVar28 == FVar9) break;
      pFVar23 = *(FDS_ContentsTotalMenuTableRow **)FVar28;
      if (pFVar23 != (FDS_ContentsTotalMenuTableRow *)0x0) {
        iVar26 = iVar26 + 1;
        if (iVar26 < pFVar23->Order) {
          do {
            if (iVar13 == local_120._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)local_128,
                                  (int *)((longlong)&local_120 + 4));
            }
            iVar1 = iVar13 + 1;
            local_120 = (UStruct *)CONCAT44(local_120._4_4_,iVar1);
            pFVar24 = (FDS_ViewModelContext *)0x0;
            *(undefined4 *)((longlong)local_128 + (longlong)iVar13 * 4) = 0;
            iVar13 = iVar1;
            if (iVar1 == this->ItemPerSetNum) {
              pUVar14 = GetTransientPackageAsObject();
              pUVar15 = NewObject<UDS_UserObjectListItem>(pUVar14);
              pFVar16 = ::operator_new(0x30);
              pFVar22 = pFVar24;
              if (pFVar16 != (FDS_ViewModelContext *)0x0) {
                *(undefined8 *)&pFVar16->ViewModelTemplateKey = 0;
                *(undefined8 *)&pFVar16->DerivedStaticStruct = 0;
                (pFVar16->ViewModelName).ComparisonIndex = 0;
                (pFVar16->ViewModelName).Number = 0;
                pFVar16->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItemSet__6B_;
                pFVar16[1]._padding_ = 0;
                *(undefined8 *)&pFVar16[1].DerivedStaticStruct = 0;
                pFVar22 = pFVar16;
              }
              pFVar16 = ::operator_new(0x20);
              if (pFVar16 != (FDS_ViewModelContext *)0x0) {
                *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
                *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
                pFVar16->_padding_ =
                     (longlong)
                     &
                     ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItemSet__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
                ;
                ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
                *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar22;
                pFVar24 = pFVar16;
              }
              if ((pFVar22 == (FDS_ViewModelContext *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar17 = FDS_ViewModelContext_TotalMenuItemSet::StaticStruct();
              *(UScriptStruct **)&pFVar22->DerivedStaticStruct = pUVar17;
              pUVar18 = UDS_ViewModelContextManager::GetInst();
              if (pUVar18 != (UDS_ViewModelContextManager *)0x0) {
                if (pFVar24 != (FDS_ViewModelContext *)0x0) {
                  LOCK();
                  *(atomic<int> *)&pFVar24->DerivedStaticStruct =
                       (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
                  UNLOCK();
                }
                local_a8.Object = pFVar22;
                local_a8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pFVar24;
                UDS_ViewModelContextManager::RegisterContext(pUVar18,&local_a8);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a8.SharedReferenceCount.ReferenceController);
              }
              auVar7 = local_128;
              pFVar16 = pFVar22 + 1;
              pFVar22->ViewModelTemplateKey = TotalMenu_ItemSet;
              if (pFVar16 != (FDS_ViewModelContext *)local_128) {
                aVar8 = local_120._0_4_;
                lVar27 = (longlong)(int)local_120._0_4_;
                paVar2 = (atomic<int> *)&pFVar22[1].DerivedStaticStruct + 1;
                aVar5 = *paVar2;
                *(atomic<int> *)&pFVar22[1].DerivedStaticStruct = local_120._0_4_;
                if ((local_120._0_4_ == (atomic<int>)0x0) && (aVar5 == (atomic<int>)0x0)) {
                  *paVar2 = (atomic<int>)0x0;
                  FVar28 = local_118;
                  this_00 = local_100;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,(int)local_120._0_4_,(int)aVar5,(ForAnyElementType *)pFVar16,
                             (int)local_120._0_4_,(int *)paVar2);
                  FVar28 = local_118;
                  this_00 = local_100;
                  if (aVar8 != (atomic<int>)0x0) {
                    memcpy((FScriptContainerElement *)pFVar16->_padding_,(void *)auVar7,lVar27 << 2)
                    ;
                    FVar28 = local_118;
                    this_00 = local_100;
                  }
                }
              }
              if (pFVar24 != (FDS_ViewModelContext *)0x0) {
                LOCK();
                *(atomic<int> *)&pFVar24->DerivedStaticStruct =
                     (atomic<int>)((int)*(atomic<int> *)&pFVar24->DerivedStaticStruct + 1);
                UNLOCK();
              }
              local_78.Object = pFVar22;
              local_78.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)pFVar24;
              UDS_UserObjectListItem::AddContext(pUVar15,&local_78);
              local_e0 = pUVar15;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar15);
              }
              FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_e0)
              ;
              uVar19 = local_120._4_4_;
              local_120 = (UStruct *)((ulonglong)local_120._4_4_ << 0x20);
              if ((int)uVar19 < 4) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4,(ForAnyElementType *)local_128,0,(int *)((longlong)&local_120 + 4))
                ;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pFVar24);
              iVar13 = (int)local_120._0_4_;
            }
            pFVar23 = *(FDS_ContentsTotalMenuTableRow **)FVar28;
            iVar26 = iVar26 + 1;
          } while (iVar26 < pFVar23->Order);
        }
        iVar26 = pFVar23->Order;
        if (iVar13 == local_120._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)local_128,(int *)((longlong)&local_120 + 4)
                             );
        }
        iVar1 = iVar13 + 1;
        local_120 = (UStruct *)CONCAT44(local_120._4_4_,iVar1);
        *(EDS_TotalMenuId *)((longlong)local_128 + (longlong)iVar13 * 4) = pFVar23->ID;
        iVar13 = iVar1;
        if (iVar1 == this->ItemPerSetNum) {
          pUVar14 = GetTransientPackageAsObject();
          pUVar15 = NewObject<UDS_UserObjectListItem>(pUVar14);
          pFVar16 = ::operator_new(0x30);
          pFVar22 = (FDS_ViewModelContext *)0x0;
          pFVar24 = pFVar22;
          if (pFVar16 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar16->ViewModelTemplateKey = 0;
            *(undefined8 *)&pFVar16->DerivedStaticStruct = 0;
            (pFVar16->ViewModelName).ComparisonIndex = 0;
            (pFVar16->ViewModelName).Number = 0;
            pFVar16->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItemSet__6B_;
            pFVar16[1]._padding_ = 0;
            *(undefined8 *)&pFVar16[1].DerivedStaticStruct = 0;
            pFVar24 = pFVar16;
          }
          pFVar16 = ::operator_new(0x20);
          if (pFVar16 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar16->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar16->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar16->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItemSet__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar16->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar16->ViewModelTemplateKey = pFVar24;
            pFVar22 = pFVar16;
          }
          if ((pFVar24 == (FDS_ViewModelContext *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pUVar17 = FDS_ViewModelContext_TotalMenuItemSet::StaticStruct();
          *(UScriptStruct **)&pFVar24->DerivedStaticStruct = pUVar17;
          pUVar18 = UDS_ViewModelContextManager::GetInst();
          if (pUVar18 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar22 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar22->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar22->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_98.Object = pFVar24;
            local_98.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar22;
            UDS_ViewModelContextManager::RegisterContext(pUVar18,&local_98);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.SharedReferenceCount.ReferenceController);
          }
          auVar7 = local_128;
          pFVar16 = pFVar24 + 1;
          pFVar24->ViewModelTemplateKey = TotalMenu_ItemSet;
          if (pFVar16 != (FDS_ViewModelContext *)local_128) {
            aVar8 = local_120._0_4_;
            lVar27 = (longlong)(int)local_120._0_4_;
            paVar2 = (atomic<int> *)&pFVar24[1].DerivedStaticStruct + 1;
            aVar5 = *paVar2;
            *(atomic<int> *)&pFVar24[1].DerivedStaticStruct = local_120._0_4_;
            if ((local_120._0_4_ == (atomic<int>)0x0) && (aVar5 == (atomic<int>)0x0)) {
              *paVar2 = (atomic<int>)0x0;
              FVar28 = local_118;
              this_00 = local_100;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(int)local_120._0_4_,(int)aVar5,(ForAnyElementType *)pFVar16,
                         (int)local_120._0_4_,(int *)paVar2);
              FVar28 = local_118;
              this_00 = local_100;
              if (aVar8 != (atomic<int>)0x0) {
                memcpy((FScriptContainerElement *)pFVar16->_padding_,(void *)auVar7,lVar27 << 2);
                FVar28 = local_118;
                this_00 = local_100;
              }
            }
          }
          if (pFVar22 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar22->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar22->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_68.Object = pFVar24;
          local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar22
          ;
          UDS_UserObjectListItem::AddContext(pUVar15,&local_68);
          local_d8 = pUVar15;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar15);
          }
          FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_d8);
          uVar19 = local_120._4_4_;
          local_120 = (UStruct *)((ulonglong)local_120._4_4_ << 0x20);
          if ((int)uVar19 < 4) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,4,(ForAnyElementType *)local_128,0,(int *)((longlong)&local_120 + 4));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar22);
          iVar13 = (int)local_120._0_4_;
        }
      }
      uVar20 = (ulonglong)local_f8;
      FVar28 = (FName)((longlong)FVar28 + 8);
    }
    if (0 < iVar13) {
      pUVar14 = GetTransientPackageAsObject();
      pUVar15 = NewObject<UDS_UserObjectListItem>(pUVar14);
      MakeContext<FDS_ViewModelContext_TotalMenuItemSet>(&local_88);
      pFVar10 = local_88.Object;
      if ((local_88.Object == (FDS_ViewModelContext_TotalMenuItemSet *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar7 = local_128;
      *(undefined4 *)&pFVar10->_padding_ = 0x34;
      pTVar25 = &pFVar10->TotalMenuIds;
      if (pTVar25 != (TArray<EDS_TotalMenuId,TSizedDefaultAllocator<32>_> *)local_128) {
        iVar26 = (int)local_120._0_4_;
        lVar27 = (longlong)(int)local_120._0_4_;
        piVar3 = &(pFVar10->TotalMenuIds).ArrayMax;
        (pFVar10->TotalMenuIds).ArrayNum = (int)local_120._0_4_;
        if ((local_120._0_4_ == (atomic<int>)0x0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_120._0_4_,*piVar3,&pTVar25->AllocatorInstance,
                     (int)local_120._0_4_,piVar3);
          if (iVar26 != 0) {
            memcpy((pTVar25->AllocatorInstance).Data,(void *)auVar7,lVar27 << 2);
          }
        }
      }
      local_58.Object = (FDS_ViewModelContext *)local_88.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(pUVar15,&local_58);
      local_c8[0] = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar15 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)local_c8);
      bVar11 = local_120._4_4_ != 0;
      local_120 = (UStruct *)((ulonglong)local_120._4_4_ << 0x20);
      if (bVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)local_128,0,(int *)((longlong)&local_120 + 4));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    local_b0 = FFieldNotificationClassDescriptor::EntryBindingEventField_ItemSet.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::EntryBindingEventField_ItemSet.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  if (local_110 != (FName)0x0) {
    FMemory::Free((void *)local_110);
  }
  if (local_128 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_128);
  }
  return;
}

