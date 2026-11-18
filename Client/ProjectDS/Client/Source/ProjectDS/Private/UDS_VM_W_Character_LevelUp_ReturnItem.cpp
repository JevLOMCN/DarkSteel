// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b725130

UClass * __cdecl UDS_VM_W_Character_LevelUp_ReturnItem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp_ReturnItem",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp_ReturnItem,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp_ReturnItem>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp_ReturnItem>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton;
}

// UDS_VM_W_Character_LevelUp_ReturnItem @ 14b7277d0

UDS_VM_W_Character_LevelUp_ReturnItem * __thiscall
UDS_VM_W_Character_LevelUp_ReturnItem::UDS_VM_W_Character_LevelUp_ReturnItem
          (UDS_VM_W_Character_LevelUp_ReturnItem *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_ReturnItem__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_Character_LevelUp_ReturnItem @ 14b727820

UDS_VM_W_Character_LevelUp_ReturnItem * __thiscall
UDS_VM_W_Character_LevelUp_ReturnItem::UDS_VM_W_Character_LevelUp_ReturnItem
          (UDS_VM_W_Character_LevelUp_ReturnItem *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_ReturnItem__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_Character_LevelUp_ReturnItem @ 14b728fe0

void __thiscall
UDS_VM_W_Character_LevelUp_ReturnItem::~UDS_VM_W_Character_LevelUp_ReturnItem
          (UDS_VM_W_Character_LevelUp_ReturnItem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Character_LevelUp_ReturnItem__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72ae30

IClassDescriptor * __thiscall
UDS_VM_W_Character_LevelUp_ReturnItem::GetFieldNotificationDescriptor
          (UDS_VM_W_Character_LevelUp_ReturnItem *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Character_LevelUp_ReturnItem::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b520

UClass * __cdecl UDS_VM_W_Character_LevelUp_ReturnItem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Character_LevelUp_ReturnItem",
               &Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Character_LevelUp_ReturnItem,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Character_LevelUp_ReturnItem>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Character_LevelUp_ReturnItem>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Character_LevelUp_ReturnItem.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Character_LevelUp_ReturnItem @ 14b72bde0

void __cdecl
UDS_VM_W_Character_LevelUp_ReturnItem::StaticRegisterNativesUDS_VM_W_Character_LevelUp_ReturnItem
          (void)

{
  return;
}

// OnSetViewModel @ 14bfc8c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_W_Character_LevelUp_ReturnItem::OnSetViewModel
          (UDS_VM_W_Character_LevelUp_ReturnItem *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  UDS_VM_W_Character_LevelUp_ReturnItem *pUVar5;
  bool bVar6;
  UDS_UserObjectListItem *this_00;
  undefined8 *puVar7;
  byte bVar8;
  longlong lVar9;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  UDS_M_ItemImplBase *local_170;
  TSharedPtr<FDS_ViewModelContext_CharacterLevelUpResultInfo,1> local_168;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  UDS_VM_W_Character_LevelUp_ReturnItem *local_120;
  UDS_UserObjectListItem *local_118 [2];
  FName local_108;
  int local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_c8.Object = param_1->Object;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharacterLevelUpResultInfo>(&local_168,&local_c8);
  if (local_168.Object == (FDS_ViewModelContext_CharacterLevelUpResultInfo *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1833267877893898223>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Character_LevelUp_ReturnItem.cpp"
                       ,0x11,"context.IsValid()");
    if (!bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  local_6c = 0x80;
  TVar10.DebugPtr = (UDS_UserObjectListItem *)&(local_168.Object)->RemainMap;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar14 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             local_98,(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)TVar10.DebugPtr);
  uVar16 = local_70;
  uStack_14c = 1;
  local_138 = 0;
  uStack_13c = local_138;
  if (local_70 != 0) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar12 = *puVar15;
    local_138 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)(int)uVar14;
      local_138 = local_138 + 0x20;
      uVar14 = uVar14 + 1;
      uStack_13c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14bfc8e20;
      uVar12 = puVar15[lVar9 + 1];
    }
    uStack_14c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_128 = (int)lVar9;
    uStack_13c = (local_138 - 1) + local_128;
    if ((int)local_70 < (int)uStack_13c) {
      uStack_13c = local_70;
    }
  }
LAB_14bfc8e20:
  local_158 = (longlong *)local_98;
  local_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar12 = local_70 & 0xffffffe0;
  iStack_130 = local_98._8_4_ - local_64;
  uStack_140 = 0xffffffff;
  TStack_f0.CurrentBitIndex = uStack_13c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_14c,uVar14);
  iVar11 = (int)local_70 >> 5;
  TStack_f0._28_4_ = uStack_13c;
  TStack_f0.BaseBitIndex = local_138;
  uStack_d0 = CONCAT44(uStack_12c,iStack_130);
  bVar8 = (byte)local_70;
  uStack_150 = uVar14;
  uStack_134 = uStack_13c;
  local_f8 = local_158;
  TStack_f0.Array = local_148;
  if ((int)local_70 < 0) {
    TVar10.DebugPtr = (UDS_UserObjectListItem *)&::s_C__Workspace_UnrealEngine_Engin;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar5 = local_120;
  if (uVar16 != local_70) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
    uVar14 = -1 << (bVar8 & 0x1f) & puVar15[iVar11];
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar16 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14bfc8f40;
      uVar14 = puVar15[lVar9 + 1];
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_124 = (int)lVar9;
    uVar16 = local_124 + -1 + uVar12;
    if ((int)local_70 < (int)uVar16) {
      uVar16 = local_70;
    }
  }
LAB_14bfc8f40:
  do {
    plVar1 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_178[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (((TStack_f0.CurrentBitIndex == uVar16) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar1 == (longlong *)local_98)) {
      plVar1 = &pUVar5->_padding_;
      local_100 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_108 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_108);
LAB_14bfc90c4:
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    TVar10._0_1_ = 1;
    piVar13 = (int *)((longlong)TStack_f0.CurrentBitIndex * 0x10 + *plVar1);
    FDS_CharacterLevelUpCostTableRow::Get((longlong)*piVar13,true);
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)pUVar5);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UDS_UserObjectListItem *)0x0) goto LAB_14bfc8fd5;
    }
    else if (this_00 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14bfc8fd5:
      DS_ItemDataUtil::CreateItemModel
                ((EDS_ItemSlotStateType)&local_170,(int)CONCAT71(TVar10._1_7_,0xb));
      if (local_170 == (UDS_M_ItemImplBase *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1833267877893898203>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Character_LevelUp_ReturnItem.cpp"
                           ,0x25,"false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14bfc90c4;
      }
      UDS_M_ItemImplBase::SetQuantity(local_170,piVar13[1]);
      puVar7 = (undefined8 *)(**(code **)(local_170->_padding_ + 0x310))(local_170,local_a8);
      local_b8.Object = (FDS_ViewModelContext *)*puVar7;
      local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_00,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
      local_118[0] = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      TVar10.DebugPtr = (UDS_UserObjectListItem *)local_118;
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,
                 (TObjectPtr<UDS_UserObjectListItem>)TVar10.ObjectPtr.field0_0x0);
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

