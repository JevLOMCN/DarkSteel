// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetClickAreaInfo_WrapperImpl @ 14b6fb0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_WorldBoss_Info::SetClickAreaInfo_WrapperImpl(void *param_1,void *param_2)

{
  UDS_LogManager *pUVar1;
  UDS_WorldMapManager *this;
  UDS_WorldBossManager *pUVar2;
  FDS_WorldBossTableRow *pFVar3;
  UDS_ContentManager *this_00;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_ContentsTabFrameType aEStack_158 [4];
  TVector2<double>_u_0 TStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x83,L"Click Area Info Button.");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  this = UDS_WorldMapManager::GetInst();
  if (this == (UDS_WorldMapManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
    pwVar5 = L"worldMapManager is nullptr";
    uVar4 = 0x88;
  }
  else {
    pUVar2 = UDS_WorldBossManager::GetInst();
    if ((pUVar2 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
      pwVar5 = L"UDS_WorldBossManager is InValid";
      uVar4 = 0x8f;
    }
    else {
      pFVar3 = FDS_WorldBossTableRow::Get((longlong)pUVar2->SelectedWorldBossID,true);
      if (pFVar3 != (FDS_WorldBossTableRow *)0x0) {
        UDS_WorldMapManager::SetWorldBossIslandID(this,pFVar3->IslandNumber);
        TStack_148._s_0.X = (pFVar3->Location).field0_0x0._s_0.X;
        TStack_148._s_0.Y = (pFVar3->Location).field0_0x0._s_0.Y;
        UDS_WorldMapManager::SetContentsFocusPosition(this,(TVector2<double> *)&TStack_148._s_0);
        this_00 = UDS_ContentManager::GetInst();
        if (this_00 == (UDS_ContentManager *)0x0) {
          return;
        }
        TStack_148._s_0.X = 0.0;
        aEStack_158[0] = Map;
        UDS_ContentManager::OpenContent
                  (this_00,aEStack_158,(TObjectPtr<UDS_ContentArguments>)&TStack_148);
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
      pwVar5 = L"worldbossTableRow is nullptr";
      uVar4 = 0x98;
    }
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,uVar4,pwVar5);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// StaticClass @ 14b6fb100

UClass * __cdecl UDS_VM_WorldBoss_Info::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_Info",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_Info,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldBoss_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton;
}

// UDS_VM_WorldBoss_Info @ 14b7005e0

UDS_VM_WorldBoss_Info * __thiscall
UDS_VM_WorldBoss_Info::UDS_VM_WorldBoss_Info(UDS_VM_WorldBoss_Info *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Info__6B_;
  (this->SpawnInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_SpawnInfo *)0x0;
  (this->Ranking_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_Ranking *)0x0;
  (this->WorldBossDesc_Text).StringTableType = None;
  (this->WorldBossDesc_Text).StringTableID = 0;
  (this->WorldBossDesc_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossDesc_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossDesc_Text).DateTime.Ticks = 0;
  (this->WorldBossDesc_Text).TimeSpan.Ticks = 0;
  (this->WorldBossDesc_Text).TimeExpressionType = None;
  (this->WorldBossDesc_Text).IsExpression = false;
  (this->WorldBossDesc_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossDesc_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossDesc_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossDesc_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossDesc_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossDesc_Text).FormatArgs.ArrayMax = 0;
  (this->WorldBossName_Text).StringTableType = None;
  (this->WorldBossName_Text).StringTableID = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossName_Text).DateTime.Ticks = 0;
  (this->WorldBossName_Text).TimeSpan.Ticks = 0;
  (this->WorldBossName_Text).TimeExpressionType = None;
  (this->WorldBossName_Text).IsExpression = false;
  (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossName_Text).FormatArgs.ArrayMax = 0;
  (this->Elemental_Text).StringTableType = None;
  (this->Elemental_Text).StringTableID = 0;
  (this->Elemental_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Elemental_Text).StringEnumTableNameID.Number = 0;
  (this->Elemental_Text).DateTime.Ticks = 0;
  (this->Elemental_Text).TimeSpan.Ticks = 0;
  (this->Elemental_Text).TimeExpressionType = None;
  (this->Elemental_Text).IsExpression = false;
  (this->Elemental_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elemental_Text).UniqueString.Data.ArrayNum = 0;
  (this->Elemental_Text).UniqueString.Data.ArrayMax = 0;
  (this->Elemental_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elemental_Text).FormatArgs.ArrayNum = 0;
  (this->Elemental_Text).FormatArgs.ArrayMax = 0;
  (this->AreaButtonLabel_Text).StringTableType = None;
  (this->AreaButtonLabel_Text).StringTableID = 0;
  (this->AreaButtonLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaButtonLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AreaButtonLabel_Text).DateTime.Ticks = 0;
  (this->AreaButtonLabel_Text).TimeSpan.Ticks = 0;
  (this->AreaButtonLabel_Text).TimeExpressionType = None;
  (this->AreaButtonLabel_Text).IsExpression = false;
  (this->AreaButtonLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AreaButtonLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaButtonLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaButtonLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaButtonLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AreaButtonLabel_Text).FormatArgs.ArrayMax = 0;
  (this->ClickAreaInfo)._padding_ = '\0';
  (this->ClickAreaInfo).bIsCustomSelected = false;
  (this->ClickAreaInfo).bIsLacked = false;
  (this->ClickAreaInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAreaInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickAreaInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAreaInfo).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_WorldBoss_Info @ 14b700770

UDS_VM_WorldBoss_Info * __thiscall
UDS_VM_WorldBoss_Info::UDS_VM_WorldBoss_Info
          (UDS_VM_WorldBoss_Info *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Info__6B_;
  (this->SpawnInfo_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_SpawnInfo *)0x0;
  (this->Ranking_ViewModel).field0_0x0.DebugPtr = (UDS_VM_WorldBoss_Ranking *)0x0;
  (this->WorldBossDesc_Text).StringTableType = None;
  (this->WorldBossDesc_Text).StringTableID = 0;
  (this->WorldBossDesc_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossDesc_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossDesc_Text).DateTime.Ticks = 0;
  (this->WorldBossDesc_Text).TimeSpan.Ticks = 0;
  (this->WorldBossDesc_Text).TimeExpressionType = None;
  (this->WorldBossDesc_Text).IsExpression = false;
  (this->WorldBossDesc_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossDesc_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossDesc_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossDesc_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossDesc_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossDesc_Text).FormatArgs.ArrayMax = 0;
  (this->WorldBossName_Text).StringTableType = None;
  (this->WorldBossName_Text).StringTableID = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->WorldBossName_Text).StringEnumTableNameID.Number = 0;
  (this->WorldBossName_Text).DateTime.Ticks = 0;
  (this->WorldBossName_Text).TimeSpan.Ticks = 0;
  (this->WorldBossName_Text).TimeExpressionType = None;
  (this->WorldBossName_Text).IsExpression = false;
  (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayNum = 0;
  (this->WorldBossName_Text).UniqueString.Data.ArrayMax = 0;
  (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldBossName_Text).FormatArgs.ArrayNum = 0;
  (this->WorldBossName_Text).FormatArgs.ArrayMax = 0;
  (this->Elemental_Text).StringTableType = None;
  (this->Elemental_Text).StringTableID = 0;
  (this->Elemental_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Elemental_Text).StringEnumTableNameID.Number = 0;
  (this->Elemental_Text).DateTime.Ticks = 0;
  (this->Elemental_Text).TimeSpan.Ticks = 0;
  (this->Elemental_Text).TimeExpressionType = None;
  (this->Elemental_Text).IsExpression = false;
  (this->Elemental_Text).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elemental_Text).UniqueString.Data.ArrayNum = 0;
  (this->Elemental_Text).UniqueString.Data.ArrayMax = 0;
  (this->Elemental_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elemental_Text).FormatArgs.ArrayNum = 0;
  (this->Elemental_Text).FormatArgs.ArrayMax = 0;
  (this->AreaButtonLabel_Text).StringTableType = None;
  (this->AreaButtonLabel_Text).StringTableID = 0;
  (this->AreaButtonLabel_Text).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AreaButtonLabel_Text).StringEnumTableNameID.Number = 0;
  (this->AreaButtonLabel_Text).DateTime.Ticks = 0;
  (this->AreaButtonLabel_Text).TimeSpan.Ticks = 0;
  (this->AreaButtonLabel_Text).TimeExpressionType = None;
  (this->AreaButtonLabel_Text).IsExpression = false;
  (this->AreaButtonLabel_Text).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AreaButtonLabel_Text).UniqueString.Data.ArrayNum = 0;
  (this->AreaButtonLabel_Text).UniqueString.Data.ArrayMax = 0;
  (this->AreaButtonLabel_Text).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AreaButtonLabel_Text).FormatArgs.ArrayNum = 0;
  (this->AreaButtonLabel_Text).FormatArgs.ArrayMax = 0;
  (this->ClickAreaInfo)._padding_ = '\0';
  (this->ClickAreaInfo).bIsCustomSelected = false;
  (this->ClickAreaInfo).bIsLacked = false;
  (this->ClickAreaInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickAreaInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickAreaInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAreaInfo).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_WorldBoss_Info @ 14b702dc0

void __thiscall UDS_VM_WorldBoss_Info::~UDS_VM_WorldBoss_Info(UDS_VM_WorldBoss_Info *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Info__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAreaInfo).Delegate);
  pvVar1 = *(void **)&(this->ClickAreaInfo).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAreaInfo).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AreaButtonLabel_Text).FormatArgs.AllocatorInstance.Data,
             (this->AreaButtonLabel_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->AreaButtonLabel_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AreaButtonLabel_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Elemental_Text).FormatArgs.AllocatorInstance.Data,
             (this->Elemental_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->Elemental_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Elemental_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data,
             (this->WorldBossName_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->WorldBossName_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorldBossName_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->WorldBossDesc_Text).FormatArgs.AllocatorInstance.Data,
             (this->WorldBossDesc_Text).FormatArgs.ArrayNum);
  pFVar2 = (this->WorldBossDesc_Text).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WorldBossDesc_Text).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b705f20

IClassDescriptor * __thiscall
UDS_VM_WorldBoss_Info::GetFieldNotificationDescriptor(UDS_VM_WorldBoss_Info *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WorldBoss_Info::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b706a10

UClass * __cdecl UDS_VM_WorldBoss_Info::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WorldBoss_Info",
               &Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton,
               StaticRegisterNativesUDS_VM_WorldBoss_Info,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WorldBoss_Info>,
               InternalVTableHelperCtorCaller<UDS_VM_WorldBoss_Info>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WorldBoss_Info.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_WorldBoss_Info @ 14b707690

void __cdecl UDS_VM_WorldBoss_Info::StaticRegisterNativesUDS_VM_WorldBoss_Info(void)

{
  return;
}

// __VTableCtorCaller @ 14b7082f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_WorldBoss_Info::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_WorldBoss_Info__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    this[1].VMName.Number = 0;
    this[1].bIsCloseInit = false;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[2].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14c003c40

void __thiscall UDS_VM_WorldBoss_Info::BindModel(UDS_VM_WorldBoss_Info *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_WorldBoss_Info>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedWorldBoss,(UDS_VM_WorldBoss_Info *)&stack0x00000010,
               (pmf_ef85d107 *)this);
  }
  return;
}

// InitViewModel @ 14c01f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_Info::InitViewModel(UDS_VM_WorldBoss_Info *this)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UDS_VM_WorldBoss_SpawnInfo *pUVar3;
  UDS_VM_WorldBoss_Ranking *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->SpawnInfo_ViewModel).field0_0x0.DebugPtr == (UDS_VM_WorldBoss_SpawnInfo *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_SpawnInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WorldBoss_SpawnInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar3 = (UDS_VM_WorldBoss_SpawnInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar3 != (UDS_VM_WorldBoss_SpawnInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar3->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_WorldBoss_SpawnInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SpawnInfo_ViewModel).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->Ranking_ViewModel).field0_0x0.DebugPtr == (UDS_VM_WorldBoss_Ranking *)0x0) {
    local_a8 = 0;
    pUVar1 = Z_Construct_UClass_UDS_VM_WorldBoss_Ranking_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_VM_WorldBoss_Ranking_NoRegister();
    CheckIsClassChildOf_Internal(pUVar2,pUVar1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar4 = (UDS_VM_WorldBoss_Ranking *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_WorldBoss_Ranking *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_WorldBoss_Ranking *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Ranking_ViewModel).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// OnClickAreaInfo @ 14c025f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_Info::OnClickAreaInfo(UDS_VM_WorldBoss_Info *this,FDS_ButtonEventField *param_1)

{
  UDS_LogManager *pUVar1;
  UDS_WorldMapManager *this_00;
  UDS_WorldBossManager *pUVar2;
  FDS_WorldBossTableRow *pFVar3;
  UDS_ContentManager *this_01;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_ContentsTabFrameType local_158 [4];
  TVector2<double>_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x83,L"Click Area Info Button.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
    pwVar5 = L"worldMapManager is nullptr";
    uVar4 = 0x88;
  }
  else {
    pUVar2 = UDS_WorldBossManager::GetInst();
    if ((pUVar2 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
      pwVar5 = L"UDS_WorldBossManager is InValid";
      uVar4 = 0x8f;
    }
    else {
      pFVar3 = FDS_WorldBossTableRow::Get((longlong)pUVar2->SelectedWorldBossID,true);
      if (pFVar3 != (FDS_WorldBossTableRow *)0x0) {
        UDS_WorldMapManager::SetWorldBossIslandID(this_00,pFVar3->IslandNumber);
        local_148._s_0.X = (pFVar3->Location).field0_0x0._s_0.X;
        local_148._s_0.Y = (pFVar3->Location).field0_0x0._s_0.Y;
        UDS_WorldMapManager::SetContentsFocusPosition(this_00,(TVector2<double> *)&local_148._s_0);
        this_01 = UDS_ContentManager::GetInst();
        if (this_01 == (UDS_ContentManager *)0x0) {
          return;
        }
        local_148._s_0.X = 0.0;
        local_158[0] = Map;
        UDS_ContentManager::OpenContent
                  (this_01,local_158,(TObjectPtr<UDS_ContentArguments>)&local_148);
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_Info::OnClickAreaInfo",0x26,Yes);
      pwVar5 = L"worldbossTableRow is nullptr";
      uVar4 = 0x98;
    }
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnSelectedWorldBoss @ 14c02fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_WorldBoss_Info::OnSelectedWorldBoss(UDS_VM_WorldBoss_Info *this,int param_1)

{
  EDS_ElementType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDS_WorldBossTableRow *this_00;
  UDS_LogManager *pUVar5;
  UDS_WorldBossManager *pUVar6;
  UEnum *pUVar7;
  FName *pFVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_518 [32];
  FName local_4d8;
  FDS_NpcBattleTableRow *local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  int local_4b0;
  FName local_4a8;
  int local_4a0;
  FName local_498;
  int local_490;
  FName local_488;
  int local_480;
  FName local_478;
  int local_470;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FName local_428;
  FString local_420;
  FString local_410;
  undefined1 local_3f8 [32];
  void *local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  undefined1 local_3c0 [8];
  ForElementType<FSetElementId> local_3b8;
  int local_3b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  this_00 = FDS_WorldBossTableRow::GetRef((longlong)param_1,true);
  bVar4 = FDS_WorldBossTableRow::IsValid(this_00);
  if (bVar4) {
    local_4d0 = FDS_NpcBattleTableRow::GetRef((longlong)this_00->ID_NpcBase,true);
    bVar4 = FDS_NpcBattleTableRow::IsValid(local_4d0);
    if (bVar4) {
      pUVar6 = UDS_WorldBossManager::GetInst();
      if ((pUVar6 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar6->_padding_ >> 0x1e & 1) != 0)) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar5 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_WorldBoss_Info::OnSelectedWorldBoss",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_168.Ptr,0x66,L"UDS_WorldBossManager is InValid");
        pFVar11 = (FScriptContainerElement *)local_168._padding_;
      }
      else {
        pFVar12 = (FScriptContainerElement *)0x0;
        local_3f8._0_8_ = (FScriptContainerElement *)0x0;
        local_3f8._8_8_ = 0;
        local_3d8 = (void *)0x0;
        iVar9 = 0;
        local_3d0 = 0;
        local_3c4 = 0;
        local_3b8 = (ForElementType<FSetElementId>)0x0;
        local_3b0 = 0;
        local_3cc = 0x80;
        local_3c8 = 0xffffffff;
        TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
                     *)local_3f8,
                    (TSet<TTuple<int,FDS_WorldBossInfo>,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>,FDefaultSetAllocator>
                     *)&pUVar6->WorldBossInfoMap);
        pFVar11 = pFVar12;
        if (local_3f8._8_4_ != local_3c4) {
          FVar10 = (ForElementType<FSetElementId>)local_3c0;
          if (local_3b8 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_3b8;
          }
          iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(local_3b0 - 1U & param_1) * 4);
          while (pFVar11 = pFVar12, iVar2 != -1) {
            pFVar11 = (FScriptContainerElement *)(local_3f8._0_8_ + (longlong)iVar2 * 0x30);
            if (*(int *)pFVar11 == param_1) {
              if (pFVar11 != (FScriptContainerElement *)0x0) goto LAB_14c02fc72;
              break;
            }
            iVar2 = *(int *)(pFVar11 + 0x28);
          }
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14c02fc72:
        FDS_Text::SetTextFromStringTable
                  (&this->WorldBossName_Text,StringWorld,(longlong)*(int *)(pFVar11 + 0x10));
        local_4b0 = FFieldNotificationClassDescriptor::WorldBossName_Text.BitNumber;
        local_4b8 = FFieldNotificationClassDescriptor::WorldBossName_Text.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_4b8);
        pFVar11 = pFVar12;
        if (local_3f8._8_4_ != local_3c4) {
          FVar10 = (ForElementType<FSetElementId>)local_3c0;
          if (local_3b8 != (ForElementType<FSetElementId>)0x0) {
            FVar10 = local_3b8;
          }
          iVar2 = *(int *)((longlong)FVar10 + (ulonglong)(local_3b0 - 1U & param_1) * 4);
          while (pFVar11 = pFVar12, iVar2 != -1) {
            pFVar11 = (FScriptContainerElement *)(local_3f8._0_8_ + (longlong)iVar2 * 0x30);
            if (*(int *)pFVar11 == param_1) {
              if (pFVar11 != (FScriptContainerElement *)0x0) goto LAB_14c02fd22;
              break;
            }
            iVar2 = *(int *)(pFVar11 + 0x28);
          }
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_14c02fd22:
        FDS_Text::SetTextFromStringTable
                  (&this->WorldBossDesc_Text,StringUi,(longlong)*(int *)(pFVar11 + 0x14));
        local_4a0 = FFieldNotificationClassDescriptor::WorldBossDesc_Text.BitNumber;
        local_4a8 = FFieldNotificationClassDescriptor::WorldBossDesc_Text.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
        EVar1 = local_4d0->ElementType;
        pUVar7 = StaticEnum<enum_EDS_ElementType>();
        if (pUVar7 == (UEnum *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8627520946023956243>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                             0xed,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          UEnum::GetNameStringByValue(pUVar7,&local_420,(ulonglong)EVar1);
          local_4c8 = (FName)pUVar7->_padding_;
          ::FName::ToString(&local_4c8,&local_468);
          ::FString::PrintfImpl(&local_438,L"%s_%s");
          iVar9 = DS_Util::GetEnumIconID(&local_438);
          if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.Data.AllocatorInstance.Data);
          }
          if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_468.Data.AllocatorInstance.Data);
          }
          if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420.Data.AllocatorInstance.Data);
          }
        }
        this->ElementalIconID = iVar9;
        local_490 = FFieldNotificationClassDescriptor::ElementalIconID.BitNumber;
        local_498 = FFieldNotificationClassDescriptor::ElementalIconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
        EVar1 = local_4d0->ElementType;
        pUVar7 = StaticEnum<enum_EDS_ElementType>();
        if (pUVar7 == (UEnum *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8627520946023956263>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                             0xd9,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_4d8.ComparisonIndex.Value = 0;
          local_4d8.Number = 0;
        }
        else {
          UEnum::GetNameStringByValue(pUVar7,&local_410,(ulonglong)EVar1);
          local_4c0 = (FName)pUVar7->_padding_;
          ::FName::ToString(&local_4c0,&local_448);
          ::FString::PrintfImpl(&local_458,L"%s_%s");
          iVar9 = local_458.Data.ArrayNum + -1;
          if (local_458.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          pFVar8 = ::FName::FName(&local_428,iVar9,(wchar_t *)local_458.Data.AllocatorInstance.Data,
                                  FNAME_Add);
          local_4d8 = *pFVar8;
          if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.Data.AllocatorInstance.Data);
          }
          if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_448.Data.AllocatorInstance.Data);
          }
          if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_410.Data.AllocatorInstance.Data);
          }
        }
        FDS_Text::SetTextFromStringEnumTable(&this->Elemental_Text,&local_4d8);
        local_480 = FFieldNotificationClassDescriptor::Elemental_Text.BitNumber;
        local_488 = FFieldNotificationClassDescriptor::Elemental_Text.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_488);
        FDS_Text::SetTextFromStringTable(&this->AreaButtonLabel_Text,StringUi,0x5a55c);
        local_470 = FFieldNotificationClassDescriptor::AreaButtonLabel_Text.BitNumber;
        local_478 = FFieldNotificationClassDescriptor::AreaButtonLabel_Text.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
        local_3b0 = 0;
        if (local_3b8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_3b8);
        }
        iVar9 = SUB84(local_3f8._8_8_,4);
        local_3f8._8_8_ = local_3f8._8_8_ & 0xffffffff00000000;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,4,0,(ForAnyElementType *)local_3f8,0,(int *)(local_3f8 + 0xc));
        }
        local_3c8 = 0xffffffff;
        local_3c4 = 0;
        local_3d0 = 0;
        if (0x80 < local_3cc) {
          local_3cc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_3f8 + 0x10),0);
        }
        pFVar11 = (FScriptContainerElement *)local_3f8._0_8_;
        if (local_3d8 != (void *)0x0) {
          FMemory::Free(local_3d8);
          pFVar11 = (FScriptContainerElement *)local_3f8._0_8_;
        }
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_WorldBoss_Info::OnSelectedWorldBoss",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_288.Ptr,0x5f,
                 L"[ID_NpcBase : %d] FDS_NpcBattleTableRow is InValid");
      pFVar11 = (FScriptContainerElement *)local_288._padding_;
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_VM_WorldBoss_Info::OnSelectedWorldBoss",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_3a8.Ptr,0x58,
               L"[WorldBossID : %d] FDS_WorldBossTableRow is InValid");
    pFVar11 = (FScriptContainerElement *)local_3a8._padding_;
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// OnSetViewModel @ 14c036d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WorldBoss_Info::OnSetViewModel
          (UDS_VM_WorldBoss_Info *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_WorldBoss_SpawnInfo *this_00;
  UDS_VM_WorldBoss_Ranking *this_01;
  UDS_WorldBossManager *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pUVar3 = UDS_WorldBossManager::GetInst();
  if ((pUVar3 == (UDS_WorldBossManager *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_WorldBoss_Info::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x18,L"UDS_WorldBossManager is InValid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (this->SpawnInfo_ViewModel).field0_0x0.DebugPtr;
    iVar1 = pUVar3->SelectedWorldBossID;
    if (this_00 != (UDS_VM_WorldBoss_SpawnInfo *)0x0) {
      local_148.Object = param_1->Object;
      local_148.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_148);
    }
    this_01 = (this->Ranking_ViewModel).field0_0x0.DebugPtr;
    if (this_01 != (UDS_VM_WorldBoss_Ranking *)0x0) {
      local_148.Object = param_1->Object;
      local_148.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_148);
    }
    OnSelectedWorldBoss(this,iVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14c049090

void __thiscall UDS_VM_WorldBoss_Info::UnbindModel(UDS_VM_WorldBoss_Info *this)

{
  UDS_WorldBossEvent *pUVar1;
  
  pUVar1 = UDS_WorldBossEvent::GetEvent();
  if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWorldBoss,
               this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

