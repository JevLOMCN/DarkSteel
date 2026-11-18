// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetClickHudMenu_WrapperImpl @ 14b669680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_HUD_Menu::SetClickHudMenu_WrapperImpl(void *param_1,void *param_2)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1f8 [32];
  undefined1 auStack_1b8 [8];
  FDelegateAllocation FStack_1b0;
  code *pcStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool bStack_188;
  void *pvStack_178;
  FDestructionSentinel FStack_170;
  FDelegateAllocation *pFStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)*(int *)((longlong)param_1 + 0xc4),true);
  if (pFVar1 == (FDS_ContentsTotalMenuTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_HUD_Menu::OnClickHudMenu",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,TStack_148.Ptr,0x8b,L"FDS_ContentsTotalMenuTableRow is nullptr");
  }
  else {
    if (pFVar1->Type == Hud) {
      if (pFVar1->ID_ContentsBase != HudMenu) {
        return;
      }
      this = UDS_WindowManager::GetInst();
      if (this == (UDS_WindowManager *)0x0) {
        return;
      }
      pcStack_198 = OnOpenWindowCallback_TotalMenu;
      uStack_190 = 0;
      auStack_1b8 = (undefined1  [8])0x0;
      FStack_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_1b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
                 (FWriteAccessScope *)&FStack_170);
      pFStack_158 = &FStack_1b0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1b0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Menu____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        puVar3[3] = 0;
        pvStack_178 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStack_178);
        puVar3[4] = pcStack_198;
        puVar3[5] = CONCAT44(uStack_18c,uStack_190);
      }
      if (FStack_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_170.Accessor,&FStack_170);
      }
      pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &pcStack_198,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          auStack_1b8);
      UDS_WindowManager::OpenWindow(this,TotalMenu,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1b8,
                 (FWriteAccessScope *)&pcStack_198);
      if ((FStack_1b0.DelegateSize != 0) &&
         (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_1b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_1b0,0,0,0x10);
        FStack_1b0.DelegateSize = 0;
      }
      if (bStack_188 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                   (FDestructionSentinel *)&pcStack_198);
      }
      if (FStack_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_1b8);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_HUD_Menu::OnClickHudMenu",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_148.Ptr,0x9c,L"Invalid EDS_TotalMenuType : %d")
    ;
  }
  if ((void *)TStack_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// StaticClass @ 14b669690

UClass * __cdecl UDS_VM_HUD_Menu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Menu",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Menu,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_HUD_Menu>,InternalVTableHelperCtorCaller<UDS_VM_HUD_Menu>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton;
}

// UDS_VM_HUD_Menu @ 14b66dcc0

UDS_VM_HUD_Menu * __thiscall
UDS_VM_HUD_Menu::UDS_VM_HUD_Menu(UDS_VM_HUD_Menu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Menu__6B_;
  *(undefined8 *)&(this->ClickHudMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickHudMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickHudMenu).Delegate.field_0x10 = 0;
  (this->ClickHudMenu)._padding_ = '\0';
  (this->ClickHudMenu).bIsCustomSelected = false;
  (this->ClickHudMenu).bIsLacked = false;
  (this->ClickHudMenu).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_HUD_Menu @ 14b66dd20

UDS_VM_HUD_Menu * __thiscall
UDS_VM_HUD_Menu::UDS_VM_HUD_Menu(UDS_VM_HUD_Menu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Menu__6B_;
  *(undefined8 *)&(this->ClickHudMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickHudMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickHudMenu).Delegate.field_0x10 = 0;
  (this->ClickHudMenu)._padding_ = '\0';
  (this->ClickHudMenu).bIsCustomSelected = false;
  (this->ClickHudMenu).bIsLacked = false;
  (this->ClickHudMenu).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_HUD_Menu @ 14b66f410

void __thiscall UDS_VM_HUD_Menu::~UDS_VM_HUD_Menu(UDS_VM_HUD_Menu *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Menu__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickHudMenu).Delegate);
  pvVar1 = *(void **)&(this->ClickHudMenu).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickHudMenu).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671b20

IClassDescriptor * __thiscall UDS_VM_HUD_Menu::GetFieldNotificationDescriptor(UDS_VM_HUD_Menu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_Menu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b672760

UClass * __cdecl UDS_VM_HUD_Menu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Menu",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Menu,200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_HUD_Menu>,InternalVTableHelperCtorCaller<UDS_VM_HUD_Menu>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Menu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_Menu @ 14b672be0

void __cdecl UDS_VM_HUD_Menu::StaticRegisterNativesUDS_VM_HUD_Menu(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_Menu_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCheckRedDot @ 14b674310

void __cdecl UDS_VM_HUD_Menu::execOnCheckRedDot(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCheckRedDot((UDS_VM_HUD_Menu *)param_1);
  return;
}

// execOnOpenWindowCallback_TotalMenu @ 14b6743d0

void __cdecl
UDS_VM_HUD_Menu::execOnOpenWindowCallback_TotalMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenWindowCallback_TotalMenu((UDS_VM_HUD_Menu *)param_1,local_res10);
  return;
}

// BindModel @ 14be76480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Menu::BindModel(UDS_VM_HUD_Menu *this)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *this_00;
  FName *pFVar3;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)this->TotalMenuID,true);
  if (pFVar1 == (FDS_ContentsTotalMenuTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Menu::BindModel",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x36,L"FDS_ContentsTotalMenuTableRow is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (pFVar1->ID_ContentsBase == HudMenu) {
    this_00 = UDS_NotificationManager::GetInst();
    if (this_00 == (UDS_NotificationManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_HUD_Menu::BindModel",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x42,L"notificationManager is nullptr.");
        if ((UDS_NotificationManager *)local_138._padding_ != (UDS_NotificationManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
      pFVar3 = ::FName::FName(local_148,"OnCheckRedDot");
      UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate
                (this_00,(UObject *)this,*pFVar3);
    }
  }
  return;
}

// OnCheckRedDot @ 14be92d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_VM_HUD_Menu::OnCheckRedDot(UDS_VM_HUD_Menu *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  UDS_NotificationManager *this_00;
  byte bVar6;
  longlong lVar7;
  FName *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  int local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 == (UDS_NotificationManager *)0x0) {
    this->IsRedDot = false;
    local_f0 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
    local_f8 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
    return;
  }
  UDS_NotificationManager::GetInventoryTabFrameMap
            (this_00,(TMap<EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ContentsTabFrameType,bool,0>_>
                      *)local_88);
  uVar11 = local_60;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  uStack_114 = 0;
  if (local_60 != 0) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar13 = *puVar12;
    while (uVar13 == 0) {
      lVar7 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_114 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_128)
      goto LAB_14be92e41;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_124 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_124 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_100 = (int)lVar7;
    uStack_114 = local_110 + -1 + local_100;
    if ((int)local_60 < (int)uStack_114) {
      uStack_114 = local_60;
    }
  }
LAB_14be92e41:
  local_130 = (longlong *)local_88;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar13 = local_60 & 0xffffffe0;
  iStack_108 = local_88._8_4_ - local_54;
  uStack_118 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_114;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_124,iStack_128);
  iVar9 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_114;
  TStack_b0.BaseBitIndex = local_110;
  uStack_90 = CONCAT44(uStack_104,iStack_108);
  bVar6 = (byte)local_60;
  uStack_10c = uStack_114;
  local_b8 = local_130;
  TStack_b0.Array = local_120;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar11 != local_60) {
    puVar12 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar11 = -1 << (bVar6 & 0x1f) & puVar12[iVar9];
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14be92f4c;
      uVar11 = puVar12[lVar7 + 1];
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar13;
    if ((int)local_60 < (int)uVar11) {
      uVar11 = local_60;
    }
  }
LAB_14be92f4c:
  while( true ) {
    plVar4 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_138);
    }
    if (((TStack_b0.CurrentBitIndex == uVar11) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar4 == (longlong *)local_88)) {
      iVar9 = CheckRedDotList.ArrayNum;
      pFVar1 = CheckRedDotList.AllocatorInstance.Data + (longlong)iVar9 * 4;
      FVar10.Data = CheckRedDotList.AllocatorInstance.Data;
      goto LAB_14be92fe0;
    }
    bVar5 = UDS_NotificationManager::GetRedDotStateByTabFrame
                      (this_00,*(EDS_ContentsTabFrameType *)
                                (*plVar4 + (longlong)TStack_b0.CurrentBitIndex * 0x10));
    if (bVar5) break;
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  this->IsRedDot = true;
  pFVar8 = &local_c8;
  local_c8 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
  local_c0 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
LAB_14be9307b:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar8);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_88);
  return;
LAB_14be92fe0:
  if (CheckRedDotList.ArrayNum != iVar9) {
    `TCheckedPointerIterator<enum_EDS_ContentsTabFrameType_const_,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_137);
  }
  if (FVar10.Data == pFVar1) {
    this->IsRedDot = false;
    pFVar8 = &local_d8;
    local_d8 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
    local_d0 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
    goto LAB_14be9307b;
  }
  bVar5 = UDS_NotificationManager::GetRedDotStateByTabFrame
                    (this_00,*(EDS_ContentsTabFrameType *)FVar10.Data);
  if (bVar5) goto LAB_14be9300e;
  FVar10.Data = FVar10.Data + 4;
  goto LAB_14be92fe0;
LAB_14be9300e:
  this->IsRedDot = true;
  pFVar8 = &local_e8;
  local_e8 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
  local_e0 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
  goto LAB_14be9307b;
}

// OnClickHudMenu @ 14be95360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Menu::OnClickHudMenu(UDS_VM_HUD_Menu *this,FDS_ButtonEventField *param_1)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_VM_HUD_Menu *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)this->TotalMenuID,true);
  if (pFVar1 == (FDS_ContentsTotalMenuTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_Menu::OnClickHudMenu",0x1f,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_148.Ptr,0x8b,L"FDS_ContentsTotalMenuTableRow is nullptr");
  }
  else {
    if (pFVar1->Type == Hud) {
      if (pFVar1->ID_ContentsBase != HudMenu) {
        return;
      }
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
      local_198 = OnOpenWindowCallback_TotalMenu;
      uStack_190 = 0;
      local_1b8 = (undefined1  [8])0x0;
      local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_170);
      local_158 = &local_1b0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Menu____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_178 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_178);
        puVar3[4] = local_198;
        puVar3[5] = CONCAT44(uStack_18c,uStack_190);
      }
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
      pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_198,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1b8);
      UDS_WindowManager::OpenWindow(this_00,TotalMenu,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
                 (FWriteAccessScope *)&local_198);
      if ((local_1b0.DelegateSize != 0) &&
         (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1b0,0,0,0x10);
        local_1b0.DelegateSize = 0;
      }
      if (local_188 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                   (FDestructionSentinel *)&local_198);
      }
      if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1b8);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_HUD_Menu::OnClickHudMenu",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x9c,L"Invalid EDS_TotalMenuType : %d");
  }
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnOpenWindowCallback_TotalMenu @ 14be9aab0

void __thiscall
UDS_VM_HUD_Menu::OnOpenWindowCallback_TotalMenu(UDS_VM_HUD_Menu *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_28.Object)->ViewModelTemplateKey = W_TotalMenu;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14bea2680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Menu::OnSetViewModel(UDS_VM_HUD_Menu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_LogManager *pUVar3;
  FDS_ContentsTotalMenuTableRow *pFVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TSharedPtr<FDS_ViewModelContext_HudMenu,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_HudMenu>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_HudMenu *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bea27f2;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_Menu::OnSetViewModel",0x1f,Yes);
    pwVar6 = L"FDS_ViewModelContext_HudMenu is nullptr";
    uVar5 = 0x1c;
  }
  else {
    iVar1 = (local_158.Object)->TotalMenuID;
    this->TotalMenuID = iVar1;
    pFVar4 = FDS_ContentsTotalMenuTableRow::Get((longlong)iVar1,true);
    if (pFVar4 != (FDS_ContentsTotalMenuTableRow *)0x0) {
      if (pFVar4->ID_ContentsBase == HudMenu) {
        OnCheckRedDot(this);
      }
      goto LAB_14bea27f2;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bea27f2;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_Menu::OnSetViewModel",0x1f,Yes);
    pwVar6 = L"FDS_ContentsTotalMenuTableRow is nullptr";
    uVar5 = 0x25;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bea27f2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetRedDot @ 14beb3ea0

void __thiscall UDS_VM_HUD_Menu::SetRedDot(UDS_VM_HUD_Menu *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsRedDot = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsRedDot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRedDot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Menu::UnbindModel(UDS_VM_HUD_Menu *this)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *this_00;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)this->TotalMenuID,true);
  if (pFVar1 == (FDS_ContentsTotalMenuTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_Menu::UnbindModel",0x1c,Yes);
    pwVar4 = L"FDS_ContentsTotalMenuTableRow is nullptr";
    uVar3 = 0x51;
  }
  else {
    if (pFVar1->ID_ContentsBase != HudMenu) {
      return;
    }
    this_00 = UDS_NotificationManager::GetInst();
    if (this_00 != (UDS_NotificationManager *)0x0) {
      UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate(this_00,(UObject *)this);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_HUD_Menu::UnbindModel",0x1c,Yes);
    pwVar4 = L"notificationManager is nullptr.";
    uVar3 = 0x5d;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

