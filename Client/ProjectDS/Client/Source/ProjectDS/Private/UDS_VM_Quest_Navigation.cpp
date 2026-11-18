// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// StaticClass @ 14b6d3dd0

UClass * __cdecl UDS_VM_Quest_Navigation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Quest_Navigation",
               &Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Quest_Navigation,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Quest_Navigation>,
               InternalVTableHelperCtorCaller<UDS_VM_Quest_Navigation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton;
}

// UDS_VM_Quest_Navigation @ 14b6d7560

UDS_VM_Quest_Navigation * __thiscall
UDS_VM_Quest_Navigation::UDS_VM_Quest_Navigation
          (UDS_VM_Quest_Navigation *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Quest_Navigation__6B_;
  FText::FText(&this->TraceDistance);
  (this->TraceTargetInfo).StringTableType = None;
  (this->TraceTargetInfo).StringTableID = 0;
  (this->TraceTargetInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TraceTargetInfo).StringEnumTableNameID.Number = 0;
  (this->TraceTargetInfo).DateTime.Ticks = 0;
  (this->TraceTargetInfo).TimeSpan.Ticks = 0;
  (this->TraceTargetInfo).TimeExpressionType = None;
  (this->TraceTargetInfo).IsExpression = false;
  (this->TraceTargetInfo).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTargetInfo).UniqueString.Data.ArrayNum = 0;
  (this->TraceTargetInfo).UniqueString.Data.ArrayMax = 0;
  (this->TraceTargetInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTargetInfo).FormatArgs.ArrayNum = 0;
  (this->TraceTargetInfo).FormatArgs.ArrayMax = 0;
  this->ArrowAngle = 0.0;
  this->IsInVisibleNavigation = false;
  this->TargetDistance = 0.0;
  this->QuestID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->QuestObjectiveID = 0;
  (this->TargetLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->TargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->NavigationInvisibleRange = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// UDS_VM_Quest_Navigation @ 14b6d7640

UDS_VM_Quest_Navigation * __thiscall
UDS_VM_Quest_Navigation::UDS_VM_Quest_Navigation
          (UDS_VM_Quest_Navigation *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Quest_Navigation__6B_;
  FText::FText(&this->TraceDistance);
  (this->TraceTargetInfo).StringTableType = None;
  (this->TraceTargetInfo).StringTableID = 0;
  (this->TraceTargetInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TraceTargetInfo).StringEnumTableNameID.Number = 0;
  (this->TraceTargetInfo).DateTime.Ticks = 0;
  (this->TraceTargetInfo).TimeSpan.Ticks = 0;
  (this->TraceTargetInfo).TimeExpressionType = None;
  (this->TraceTargetInfo).IsExpression = false;
  (this->TraceTargetInfo).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTargetInfo).UniqueString.Data.ArrayNum = 0;
  (this->TraceTargetInfo).UniqueString.Data.ArrayMax = 0;
  (this->TraceTargetInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceTargetInfo).FormatArgs.ArrayNum = 0;
  (this->TraceTargetInfo).FormatArgs.ArrayMax = 0;
  this->ArrowAngle = 0.0;
  this->IsInVisibleNavigation = false;
  this->TargetDistance = 0.0;
  this->QuestID = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->QuestObjectiveID = 0;
  (this->TargetLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->TargetLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->NavigationInvisibleRange = 0.0;
  (this->TargetLocation).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_VM_Quest_Navigation @ 14b6d9d70

void __thiscall UDS_VM_Quest_Navigation::~UDS_VM_Quest_Navigation(UDS_VM_Quest_Navigation *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Quest_Navigation__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TraceTargetInfo).FormatArgs.AllocatorInstance.Data,
             (this->TraceTargetInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->TraceTargetInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceTargetInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TraceDistance).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dc910

IClassDescriptor * __thiscall
UDS_VM_Quest_Navigation::GetFieldNotificationDescriptor(UDS_VM_Quest_Navigation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Quest_Navigation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd140

UClass * __cdecl UDS_VM_Quest_Navigation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Quest_Navigation",
               &Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton,
               StaticRegisterNativesUDS_VM_Quest_Navigation,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Quest_Navigation>,
               InternalVTableHelperCtorCaller<UDS_VM_Quest_Navigation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Quest_Navigation.InnerSingleton;
}

// GetTickableTickType @ 14b6dde00

ETickableTickType __thiscall
UDS_VM_Quest_Navigation::GetTickableTickType(UDS_VM_Quest_Navigation *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_Quest_Navigation @ 14b6dde20

void __cdecl UDS_VM_Quest_Navigation::StaticRegisterNativesUDS_VM_Quest_Navigation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Quest_Navigation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeIsland @ 14b6df390

void __cdecl
UDS_VM_Quest_Navigation::execOnChangeIsland(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint *puVar2;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar2 = (uint *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeIsland((UDS_VM_Quest_Navigation *)param_1,puVar2);
  return;
}

// CheckDungeon @ 14be144d0

void __thiscall UDS_VM_Quest_Navigation::CheckDungeon(UDS_VM_Quest_Navigation *this)

{
  bool bVar1;
  UDS_DungeonManager *pUVar2;
  
  pUVar2 = UDS_DungeonManager::GetInst();
  if ((pUVar2 != (UDS_DungeonManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar1 = UDS_DungeonManager::IsDungeonPlay();
    this->IsInVisibleNavigation = bVar1;
  }
  return;
}

// CheckIsland @ 14be14510

void __thiscall UDS_VM_Quest_Navigation::CheckIsland(UDS_VM_Quest_Navigation *this)

{
  uint uVar1;
  uint uVar2;
  UDS_ZoneManager *pUVar3;
  UDS_QuestManager *this_00;
  
  pUVar3 = UDS_ZoneManager::GetInst();
  if (pUVar3 != (UDS_ZoneManager *)0x0) {
    this_00 = UDS_QuestManager::GetInst();
    if ((this_00 != (UDS_QuestManager *)0x0) && (this->IsInVisibleNavigation == false)) {
      uVar1 = pUVar3->IslandID;
      uVar2 = UDS_QuestManager::GetQuestIsland(this_00,this->QuestID);
      this->IsInVisibleNavigation = uVar1 != uVar2;
    }
  }
  return;
}

// CheckPhasing @ 14be14850

void __thiscall UDS_VM_Quest_Navigation::CheckPhasing(UDS_VM_Quest_Navigation *this)

{
  bool bVar1;
  UDS_PhasingManager *this_00;
  
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar1 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    this->IsInVisibleNavigation = bVar1;
  }
  return;
}

// CheckQuest @ 14be14890

void __thiscall UDS_VM_Quest_Navigation::CheckQuest(UDS_VM_Quest_Navigation *this)

{
  int iVar1;
  bool bVar2;
  FDS_QuestBaseTableRow *this_00;
  
  if (this->IsInVisibleNavigation == false) {
    iVar1 = this->QuestID;
    this->IsInVisibleNavigation = iVar1 < 1;
    if (iVar1 < 1) {
      this->IsInVisibleNavigation = true;
      return;
    }
    bVar2 = UDS_QuestManager::HasQuestData(iVar1);
    if (bVar2) {
      this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar2 = FDS_QuestBaseTableRow::IsValid(this_00);
      if (bVar2) {
        this->IsInVisibleNavigation = this_00->IsNavigationIndication == false;
      }
    }
  }
  return;
}

// IsNotShowNavigation @ 14be26c60

bool __thiscall UDS_VM_Quest_Navigation::IsNotShowNavigation(UDS_VM_Quest_Navigation *this)

{
  return this->TargetDistance < this->NavigationInvisibleRange ||
         this->TargetDistance == this->NavigationInvisibleRange;
}

// IsUpdate @ 14be27d30

bool __thiscall UDS_VM_Quest_Navigation::IsUpdate(UDS_VM_Quest_Navigation *this)

{
  return 0 < this->QuestID;
}

// OnChangeDungeonInOut @ 14be29400

void __thiscall
UDS_VM_Quest_Navigation::OnChangeDungeonInOut(UDS_VM_Quest_Navigation *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  UDS_PhasingManager *this_00;
  UDS_DungeonManager *pUVar5;
  UDS_ZoneManager *pUVar6;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *this_02;
  
  this->IsInVisibleNavigation = false;
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar5 = UDS_DungeonManager::GetInst();
  if ((pUVar5 != (UDS_DungeonManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_DungeonManager::IsDungeonPlay();
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if ((pUVar6 != (UDS_ZoneManager *)0x0) &&
     (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
    if (this->IsInVisibleNavigation != false) {
      return;
    }
    uVar1 = pUVar6->IslandID;
    uVar4 = UDS_QuestManager::GetQuestIsland(this_01,this->QuestID);
    this->IsInVisibleNavigation = uVar1 != uVar4;
  }
  if (this->IsInVisibleNavigation == false) {
    iVar2 = this->QuestID;
    this->IsInVisibleNavigation = iVar2 < 1;
    if (iVar2 < 1) {
      this->IsInVisibleNavigation = true;
    }
    else {
      bVar3 = UDS_QuestManager::HasQuestData(iVar2);
      if (bVar3) {
        this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_02);
        if (bVar3) {
          this->IsInVisibleNavigation = this_02->IsNavigationIndication == false;
          return;
        }
      }
    }
  }
  return;
}

// OnChangeIsland @ 14be29410

void __thiscall UDS_VM_Quest_Navigation::OnChangeIsland(UDS_VM_Quest_Navigation *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  UDS_PhasingManager *this_00;
  UDS_DungeonManager *pUVar5;
  UDS_ZoneManager *pUVar6;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *this_02;
  
  this->IsInVisibleNavigation = false;
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar5 = UDS_DungeonManager::GetInst();
  if ((pUVar5 != (UDS_DungeonManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_DungeonManager::IsDungeonPlay();
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if ((pUVar6 != (UDS_ZoneManager *)0x0) &&
     (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
    if (this->IsInVisibleNavigation != false) {
      return;
    }
    uVar1 = pUVar6->IslandID;
    uVar4 = UDS_QuestManager::GetQuestIsland(this_01,this->QuestID);
    this->IsInVisibleNavigation = uVar1 != uVar4;
  }
  if (this->IsInVisibleNavigation == false) {
    iVar2 = this->QuestID;
    this->IsInVisibleNavigation = iVar2 < 1;
    if (iVar2 < 1) {
      this->IsInVisibleNavigation = true;
    }
    else {
      bVar3 = UDS_QuestManager::HasQuestData(iVar2);
      if (bVar3) {
        this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_02);
        if (bVar3) {
          this->IsInVisibleNavigation = this_02->IsNavigationIndication == false;
          return;
        }
      }
    }
  }
  return;
}

// OnChangePhasingStartOrEnd @ 14be29420

void __thiscall
UDS_VM_Quest_Navigation::OnChangePhasingStartOrEnd(UDS_VM_Quest_Navigation *this,bool *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  UDS_PhasingManager *this_00;
  UDS_DungeonManager *pUVar5;
  UDS_ZoneManager *pUVar6;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *this_02;
  
  this->IsInVisibleNavigation = false;
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar5 = UDS_DungeonManager::GetInst();
  if ((pUVar5 != (UDS_DungeonManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_DungeonManager::IsDungeonPlay();
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if ((pUVar6 != (UDS_ZoneManager *)0x0) &&
     (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
    if (this->IsInVisibleNavigation != false) {
      return;
    }
    uVar1 = pUVar6->IslandID;
    uVar4 = UDS_QuestManager::GetQuestIsland(this_01,this->QuestID);
    this->IsInVisibleNavigation = uVar1 != uVar4;
  }
  if (this->IsInVisibleNavigation == false) {
    iVar2 = this->QuestID;
    this->IsInVisibleNavigation = iVar2 < 1;
    if (iVar2 < 1) {
      this->IsInVisibleNavigation = true;
    }
    else {
      bVar3 = UDS_QuestManager::HasQuestData(iVar2);
      if (bVar3) {
        this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_02);
        if (bVar3) {
          this->IsInVisibleNavigation = this_02->IsNavigationIndication == false;
          return;
        }
      }
    }
  }
  return;
}

// OnChangeTraceQuest @ 14be297a0

void __thiscall
UDS_VM_Quest_Navigation::OnChangeTraceQuest(UDS_VM_Quest_Navigation *this,int param_1)

{
  if (this->QuestID != param_1) {
    this->QuestID = param_1;
    SetTraceTargetInfo(this);
    SetTargetObjective(this);
    SetShowTargetInfo(this);
    UpdateIsInVisibleNavigation(this);
    SetVisiblityNavigation(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14be3d490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_Quest_Navigation::OnSetViewModel
          (UDS_VM_Quest_Navigation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_QuestManager *this_00;
  UDS_QuestEvent *pUVar5;
  UDS_PhasingManager *pUVar6;
  UDS_ZoneManager *pUVar7;
  char *pcVar8;
  UObject *this_01;
  UFunction *pUVar9;
  UDS_DungeonEvent *pUVar10;
  char *pcVar11;
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FWeakObjectPtr local_130;
  FName local_128;
  code *local_118;
  ulonglong uStack_110;
  UDS_VM_Quest_Navigation *local_108;
  FName *local_100;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f8;
  FDestructionSentinel local_e8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  TRefCountPtr<ITextData> local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  FName local_88;
  FDateTime FStack_80;
  code *local_78;
  longlong lStack_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object == (FDS_ViewModelContext *)0x0) goto LAB_14be3d8cc;
  this_00 = UDS_QuestManager::GetInst();
  if ((this_00 != (UDS_QuestManager *)0x0) &&
     (iVar4 = UDS_QuestManager::GetTraceQuestID(this_00), this->QuestID != iVar4)) {
    this->QuestID = iVar4;
    SetTraceTargetInfo(this);
    SetTargetObjective(this);
    SetShowTargetInfo(this);
    UpdateIsInVisibleNavigation(this);
    SetVisiblityNavigation(this);
  }
  pUVar5 = UDS_QuestEvent::GetEvent();
  if (pUVar5 != (UDS_QuestEvent *)0x0) {
    uStack_140 = 0;
    local_148 = (FName)OnChangeTraceQuest;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedTraceQuestDelegate,this);
    lStack_a0 = CONCAT44(uStack_13c,uStack_140);
    local_a8.Reference = (ITextData *)local_148;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Quest_Navigation>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedTraceQuestDelegate,(UDS_VM_Quest_Navigation *)local_d0,
               (pmf_a66bc49e *)this);
    uStack_140 = 0;
    local_148 = (FName)OnUpdateQuest;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnAddQuestDataDelegate
               ,this);
    lStack_90 = CONCAT44(uStack_13c,uStack_140);
    local_98 = (code *)local_148;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Quest_Navigation>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnAddQuestDataDelegate,(UDS_VM_Quest_Navigation *)(local_d0 + 8),
               (pmf_a66bc49e *)this);
    local_148 = (FName)OnUpdateQuest;
    uStack_140 = 0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnUpdateQuestDataDelegate,this);
    FStack_80.Ticks = CONCAT44(uStack_13c,uStack_140);
    local_88 = local_148;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Quest_Navigation>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnUpdateQuestDataDelegate,(UDS_VM_Quest_Navigation *)local_c0,
               (pmf_a66bc49e *)this);
  }
  pUVar6 = UDS_PhasingManager::GetInst();
  if (pUVar6 != (UDS_PhasingManager *)0x0) {
    uStack_140 = 0;
    local_148 = (FName)OnChangePhasingStartOrEnd;
    lStack_70 = (ulonglong)uStack_13c << 0x20;
    local_78 = OnChangePhasingStartOrEnd;
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Quest_Navigation>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar6->PhasingStartOrEndDelegate,(UDS_VM_Quest_Navigation *)(local_c0 + 8),
               (pmf_bc0f0aa6 *)this);
  }
  pUVar7 = UDS_ZoneManager::GetInst();
  if (pUVar7 != (UDS_ZoneManager *)0x0) {
    pcVar8 = strstr("&UDS_VM_Quest_Navigation::OnChangeIsland","::");
    if (pcVar8 == (char *)0x0) {
LAB_14be3d68b:
      pcVar11 = &DAT_00000002;
LAB_14be3d690:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar11 = pcVar8;
        pcVar8 = strstr(pcVar11 + 1,"::");
      } while (pcVar8 != (char *)0x0);
      if (pcVar11 == (char *)0x0) goto LAB_14be3d68b;
      pcVar11 = pcVar11 + 2;
      if (*pcVar11 == '0') goto LAB_14be3d690;
    }
    ::FName::FName(&local_res20,pcVar11);
    if ((this == (UDS_VM_Quest_Navigation *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x4c8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_130.ObjectIndex = 0;
    local_130.ObjectSerialNumber = 0;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    local_res18 = local_res20;
    if ((this == (UDS_VM_Quest_Navigation *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && InMethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                           ,0x46d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_108 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Quest_Navigation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_108);
    local_128 = local_res18;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_138,&local_68)
    ;
    if ((local_128 == (FName)0x0) ||
       (this_01 = FWeakObjectPtr::Get(&local_130), this_01 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
LAB_14be3d7cb:
      local_100 = &local_res18;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,unsigned_int_const_&>::
      __Internal_BindDynamic<UDS_VM_Quest_Navigation>'::__l2::<lambda_1>::operator()(&local_100);
    }
    else {
      pUVar9 = UObject::FindFunction(this_01,local_128);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      if (pUVar9 == (UFunction *)0x0) goto LAB_14be3d7cb;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_138,&local_50)
    ;
    local_f8.Object = local_130;
    local_f8.FunctionName = local_128;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar7->IslandIdChangeDelegate,(FWriteAccessScope *)&local_e8);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&(pUVar7->IslandIdChangeDelegate).field_0x8,local_res10,Default);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar7->IslandIdChangeDelegate,&local_f8);
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  }
  pUVar10 = UDS_DungeonEvent::GetEvent();
  if (pUVar10 != (UDS_DungeonEvent *)0x0) {
    uStack_110 = uStack_110 & 0xffffffff00000000;
    local_118 = OnChangeDungeonInOut;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar10->OnDungeonInOut,this);
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Quest_Navigation>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar10->OnDungeonInOut,(UDS_VM_Quest_Navigation *)&local_148,(pmf_e8c75c08 *)this);
  }
  UpdateIsInVisibleNavigation(this);
  SetVisiblityNavigation(this);
LAB_14be3d8cc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be442d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Quest_Navigation::OnUpdate(UDS_VM_Quest_Navigation *this,float param_1)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MovementCore *this_00;
  ADS_MainCharacter *this_01;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_02;
  UDS_MainCameraComponent *this_03;
  TMatrix<double> *this_04;
  ESlateVisibility EVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr local_248 [2];
  TVector<double>_u_0 local_238;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  UObject *local_208;
  TVector<double>_u_0 local_200;
  TRotator<double> local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_MovementCore::GetMovementCore((ulong64)&local_218);
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_218,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1c8,"UDS_VM_Quest_Navigation::OnUpdate",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_1c8.Ptr,0x76,L"movementCore is nullptr.");
      if ((void *)local_1c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1c8._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_218);
    UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_200._s_0);
    fVar9 = 0.0;
    dVar6 = (this->TargetLocation).field0_0x0._s_0.Y - local_200._s_0.Y;
    dVar8 = (this->TargetLocation).field0_0x0._s_0.X - local_200._s_0.X;
    auVar7._0_8_ = dVar6 * dVar6 + dVar8 * dVar8;
    auVar7._8_8_ = 0;
    auVar7 = sqrtpd(auVar7,auVar7);
    this->TargetDistance = (float)auVar7._0_8_;
    ADS_MainCharacter::GetMainPlayer();
    bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_210,(void *)0x0);
    if (!bVar3) {
      this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_210);
      this_02 = ADS_MainCharacter::GetFollowCamera(this_01);
      local_208 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_208);
      }
      local_248[0].ObjectIndex = 0;
      local_248[0].ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_208);
      }
      FWeakObjectPtr::operator=(local_248,(FObjectPtr)&local_208);
      bVar3 = FWeakObjectPtr::IsValid(local_248);
      if (bVar3) {
        this_03 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(local_248);
        fVar9 = UDS_MainCameraComponent::GetCameraYaw(this_03);
      }
    }
    local_238._s_0.X = (this->TargetLocation).field0_0x0._s_0.X - local_200._s_0.X;
    local_238._s_0.Y = (this->TargetLocation).field0_0x0._s_0.Y - local_200._s_0.Y;
    local_238._s_0.Z = (this->TargetLocation).field0_0x0._s_0.Z - local_200._s_0.Z;
    this_04 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_a8,(TVector<double> *)&local_238._s_0);
    UE::Math::TMatrix<double>::Rotator(this_04,&local_1e8);
    iVar2 = FFieldNotificationClassDescriptor::ArrowAngle.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::ArrowAngle.FieldName;
    if ((float)(local_1e8.Yaw - (double)fVar9) != this->ArrowAngle) {
      this->ArrowAngle = (float)(local_1e8.Yaw - (double)fVar9);
      local_238._8_4_ = iVar2;
      local_238._s_0.X = (double)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    SetTraceDistance(this);
    SetVisiblityNavigation(this);
    iVar2 = FFieldNotificationClassDescriptor::VisibilityTargetDistance.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::VisibilityTargetDistance.FieldName;
    EVar5 = SelfHitTestInvisible;
    if (this->ShowTargetDistanceRange < (int)this->TargetDistance) {
      EVar5 = Collapsed;
    }
    if (this->VisibilityTargetDistance != EVar5) {
      this->VisibilityTargetDistance = EVar5;
      local_238._8_4_ = iVar2;
      local_238._s_0.X = (double)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    SetShowTargetInfo(this);
  }
  return;
}

// OnUpdateQuest @ 14be45180

void __thiscall UDS_VM_Quest_Navigation::OnUpdateQuest(UDS_VM_Quest_Navigation *this,int param_1)

{
  if (this->QuestID == param_1) {
    SetTraceTargetInfo(this);
    SetTargetObjective(this);
    UpdateIsInVisibleNavigation(this);
    return;
  }
  return;
}

// SetArrowAngle @ 14be48e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_VM_Quest_Navigation::SetArrowAngle
          (UDS_VM_Quest_Navigation *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  UDS_MainCameraComponent *this_02;
  TMatrix<double> *this_03;
  float fVar5;
  undefined1 auStack_118 [32];
  FWeakObjectPtr local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  UObject *local_c8;
  TRotator<double> local_c0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  fVar5 = 0.0;
  ADS_MainCharacter::GetMainPlayer();
  bVar4 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_f0,(void *)0x0);
  if (!bVar4) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_f0);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_c8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c8);
    }
    local_f8.ObjectIndex = 0;
    local_f8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_c8);
    }
    FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_c8);
    bVar4 = FWeakObjectPtr::IsValid(&local_f8);
    if (bVar4) {
      this_02 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_f8);
      fVar5 = UDS_MainCameraComponent::GetCameraYaw(this_02);
    }
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  local_d8 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  iStack_e0 = SUB84(dVar1,0);
  local_e8 = (FName)((param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X);
  uStack_dc = (int)((ulonglong)dVar1 >> 0x20);
  this_03 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_a8,(TVector<double> *)&local_e8);
  UE::Math::TMatrix<double>::Rotator(this_03,&local_c0);
  FVar2 = FFieldNotificationClassDescriptor::ArrowAngle.FieldName;
  if ((float)(local_c0.Yaw - (double)fVar5) != this->ArrowAngle) {
    iStack_e0 = FFieldNotificationClassDescriptor::ArrowAngle.BitNumber;
    this->ArrowAngle = (float)(local_c0.Yaw - (double)fVar5);
    FVar3 = FFieldNotificationClassDescriptor::ArrowAngle.FieldName;
    FFieldNotificationClassDescriptor::ArrowAngle.FieldName.ComparisonIndex =
         FVar2.ComparisonIndex.Value;
    FFieldNotificationClassDescriptor::ArrowAngle.FieldName.Number = FVar2.Number;
    local_e8.ComparisonIndex =
         (FNameEntryId)FFieldNotificationClassDescriptor::ArrowAngle.FieldName.ComparisonIndex.Value
    ;
    local_e8.Number = FFieldNotificationClassDescriptor::ArrowAngle.FieldName.Number;
    FFieldNotificationClassDescriptor::ArrowAngle.FieldName = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  }
  return;
}

// SetShowTargetDistance @ 14be51b20

void __thiscall UDS_VM_Quest_Navigation::SetShowTargetDistance(UDS_VM_Quest_Navigation *this)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityTargetDistance.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTargetDistance.FieldName;
  EVar1 = SelfHitTestInvisible;
  if (this->ShowTargetDistanceRange < (int)this->TargetDistance) {
    EVar1 = Collapsed;
  }
  if (this->VisibilityTargetDistance != EVar1) {
    this->VisibilityTargetDistance = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetShowTargetInfo @ 14be51b90

void __thiscall UDS_VM_Quest_Navigation::SetShowTargetInfo(UDS_VM_Quest_Navigation *this)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityTargetInfo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityTargetInfo.FieldName;
  EVar1 = SelfHitTestInvisible;
  if (this->ShowTargetInfoRange < (int)this->TargetDistance) {
    EVar1 = Collapsed;
  }
  if (this->VisibilityTargetInfo != EVar1) {
    this->VisibilityTargetInfo = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTargetObjective @ 14be51db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Quest_Navigation::SetTargetObjective(UDS_VM_Quest_Navigation *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UDS_QuestManager *this_00;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_QuestBaseTableRow *this_01;
  UDS_QuestData *this_02;
  FDS_QuestObjectiveTableRow *this_03;
  TVector<double> *pTVar8;
  FDS_QuestLocalTableRow *this_04;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [8];
  FWeakObjectPtr local_170;
  TVector<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    bVar4 = UDS_QuestManager::HasQuestData(this->QuestID);
    if (bVar4) {
      UDS_QuestManager::GetQuestData((int)&local_170);
      bVar4 = FWeakObjectPtr::IsValid(&local_170);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_170);
        if (pUVar7[2].field_0x19 == '\0') {
          this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
          bVar4 = FDS_QuestBaseTableRow::IsValid(this_01);
          if (bVar4) {
            pFVar9 = (this_01->ID_QuestObjectiveId).AllocatorInstance.Data;
            iVar5 = (this_01->ID_QuestObjectiveId).ArrayNum;
            pFVar1 = pFVar9 + (longlong)iVar5 * 4;
            while( true ) {
              if ((this_01->ID_QuestObjectiveId).ArrayNum != iVar5) {
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_178);
              }
              if (pFVar9 == pFVar1) break;
              iVar2 = *(int *)pFVar9;
              this_02 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_170);
              bVar4 = UDS_QuestData::IsGoalQuestObjective(this_02,iVar2);
              if (!bVar4) {
                this_03 = FDS_QuestObjectiveTableRow::GetRef((longlong)iVar2,true);
                bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_03);
                if (bVar4) {
                  dVar3 = (this_03->ProgressCoordinate).field0_0x0._s_0.Y;
                  (this->TargetLocation).field0_0x0._s_0.X =
                       (this_03->ProgressCoordinate).field0_0x0._s_0.X;
                  (this->TargetLocation).field0_0x0._s_0.Y = dVar3;
                  (this->TargetLocation).field0_0x0._s_0.Z =
                       (this_03->ProgressCoordinate).field0_0x0._s_0.Z;
                  this->NavigationInvisibleRange = (float)this_03->NavigationInvisibleRange;
                  this->ShowTargetDistanceRange = this_03->IsNavigationDistance;
                  this->ShowTargetInfoRange = this_03->IsNavigationInfo;
                  return;
                }
              }
              pFVar9 = pFVar9 + 4;
            }
            return;
          }
        }
        else if (pUVar7[2].field_0x19 == '\x01') {
          pTVar8 = UDS_QuestManager::GetQuestCompleteCoordinate(this_00,&local_168,this->QuestID);
          dVar3 = (pTVar8->field0_0x0)._s_0.Y;
          (this->TargetLocation).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
          (this->TargetLocation).field0_0x0._s_0.Y = dVar3;
          (this->TargetLocation).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
          iVar5 = DS_CommonDataHelper::QuestNavigationInvisibleRange();
          this->NavigationInvisibleRange = (float)iVar5;
          iVar5 = DS_CommonDataHelper::CompleteNavigationDistance();
          this->ShowTargetDistanceRange = iVar5;
          iVar5 = DS_CommonDataHelper::CompleteNavigationDistance();
          this->ShowTargetInfoRange = iVar5;
        }
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_VM_Quest_Navigation::SetTargetObjective",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_148.Ptr,0xf6,L"Not Found Quest Data, Quest ID = %d");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
    }
    else {
      this_04 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
      bVar4 = FDS_QuestLocalTableRow::IsValid(this_04);
      if (bVar4) {
        dVar3 = (this_04->AcceptCoordinate).field0_0x0._s_0.Y;
        (this->TargetLocation).field0_0x0._s_0.X = (this_04->AcceptCoordinate).field0_0x0._s_0.X;
        (this->TargetLocation).field0_0x0._s_0.Y = dVar3;
        (this->TargetLocation).field0_0x0._s_0.Z = (this_04->AcceptCoordinate).field0_0x0._s_0.Z;
      }
      iVar5 = DS_CommonDataHelper::QuestNavigationInvisibleRange();
      this->NavigationInvisibleRange = (float)iVar5;
      iVar5 = DS_CommonDataHelper::CompleteNavigationDistance();
      this->ShowTargetDistanceRange = iVar5;
      iVar5 = DS_CommonDataHelper::CompleteNavigationDistance();
      this->ShowTargetInfoRange = iVar5;
    }
  }
  return;
}

// SetTraceDistance @ 14be52820

void __thiscall UDS_VM_Quest_Navigation::SetTraceDistance(UDS_VM_Quest_Navigation *this)

{
  ITextData *pIVar1;
  int iVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  FName FVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  FString local_78;
  FText local_68;
  FDS_StringUiID local_58;
  FText local_48;
  FText local_38 [2];
  
  FText::FText(&local_68);
  if (this->QuestID < 1) goto LAB_14be52b04;
  if (this->TargetDistance * __real_3c23d70a <= __real_447a0000) {
    ::FString::PrintfImpl((FString *)&local_58,L"%.f");
    bVar3 = UDS_QuestManager::HasQuestData(this->QuestID);
    local_78.Data.ArrayNum = (int)local_58.ID;
    FVar7 = (FName)local_58._padding_;
    if (bVar3) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if ((int)local_58.ID == 0) {
        local_78.Data.ArrayMax = 0;
        local_58.ID = 0xeaa8;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_58.ID,0,(ForAnyElementType *)&local_78,(int)local_58.ID,
                   &local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,(void *)local_58._padding_,
               (longlong)(int)local_58.ID * 2);
        local_58.ID = 0xeaa8;
      }
    }
    else {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if ((int)local_58.ID == 0) {
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_58.ID,0,(ForAnyElementType *)&local_78,(int)local_58.ID,
                   &local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,(void *)local_58._padding_,
               (longlong)(int)local_58.ID * 2);
      }
      local_58.ID = 0xeb44;
    }
LAB_14be52a9e:
    local_58._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar4 = FDS_StringUiID::Str(&local_58);
    pFVar4 = DS_Util::GetFormatString<FString>((FString *)&local_48,pFVar4,&local_78);
    pFVar5 = FText::FromString(local_38,pFVar4);
    FText::operator=(&local_68,pFVar5);
    TVar6.Reference = local_48.TextData.Reference;
    if (local_38[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38[0].TextData.Reference + 0x10))();
      TVar6.Reference = local_48.TextData.Reference;
    }
  }
  else {
    ::FString::PrintfImpl(&local_78,L"%.1f");
    FVar7 = (FName)local_78.Data.AllocatorInstance;
    lVar8 = (longlong)local_78.Data.ArrayNum;
    bVar3 = UDS_QuestManager::HasQuestData(this->QuestID);
    if (!bVar3) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.ArrayNum == 0) {
        local_78.Data.ArrayMax = 0;
        local_58.ID = 0xeb45;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,
                   local_78.Data.ArrayNum,&local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,(void *)FVar7,lVar8 * 2);
        local_58.ID = 0xeb45;
      }
      goto LAB_14be52a9e;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,(void *)FVar7,lVar8 * 2);
    }
    local_58.ID = 0xeaac;
    local_58._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar4 = FDS_StringUiID::Str(&local_58);
    pFVar4 = DS_Util::GetFormatString<FString>((FString *)local_38,pFVar4,&local_78);
    pFVar5 = FText::FromString(&local_48,pFVar4);
    FText::operator=(&local_68,pFVar5);
    TVar6.Reference = local_38[0].TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      TVar6.Reference = local_38[0].TextData.Reference;
    }
  }
  if (TVar6.Reference != (ITextData *)0x0) {
    FMemory::Free(TVar6.Reference);
  }
  if (FVar7 != (FName)0x0) {
    FMemory::Free((void *)FVar7);
  }
LAB_14be52b04:
  iVar2 = FFieldNotificationClassDescriptor::TraceDistance.BitNumber;
  FVar7 = FFieldNotificationClassDescriptor::TraceDistance.FieldName;
  bVar3 = FText::IdenticalTo(&this->TraceDistance,&local_68,None);
  if (!bVar3) {
    pIVar1 = (this->TraceDistance).TextData.Reference;
    if (pIVar1 != local_68.TextData.Reference) {
      (this->TraceDistance).TextData.Reference = local_68.TextData.Reference;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 8))
                  (local_68.TextData.Reference,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->TraceDistance).Flags = local_68.Flags;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar7;
    local_78.Data.ArrayNum = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// SetTraceTargetInfo @ 14be52bd0

void __thiscall UDS_VM_Quest_Navigation::SetTraceTargetInfo(UDS_VM_Quest_Navigation *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  FDS_QuestLocalTableRow *this_01;
  FDS_NpcBaseTableRow *this_02;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  FDS_Text::Reset(&this->TraceTargetInfo);
  if (0 < this->QuestID) {
    bVar1 = UDS_QuestManager::HasQuestData(this->QuestID);
    if (bVar1) {
      this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
      bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
      if (bVar1) {
        local_58.StringTableType = None;
        local_58.StringTableID = 0;
        local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_58.StringEnumTableNameID.Number = 0;
        local_58.DateTime.Ticks = 0;
        local_58.TimeSpan.Ticks = 0;
        local_58.TimeExpressionType = None;
        local_58.IsExpression = false;
        local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.UniqueString.Data.ArrayNum = 0;
        local_58.UniqueString.Data.ArrayMax = 0;
        local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.FormatArgs.ArrayNum = 0;
        local_58.FormatArgs.ArrayMax = 0;
        if (this_00->QuestTitleStep < 1) {
          FDS_Text::SetTextFromStringID(&local_58,&this_00->ID_QuestTitleId);
        }
        else {
          FDS_Text::SetTextFormatFromStringTable<int_const_&>
                    (&local_58,StringQuest,(this_00->ID_QuestTitleId).ID,&this_00->QuestTitleStep);
        }
        FDS_Text::operator=(&this->TraceTargetInfo,&local_58);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                   local_58.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
        }
        if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this_01 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
      bVar1 = FDS_QuestLocalTableRow::IsValid(this_01);
      if (bVar1) {
        this_02 = FDS_NpcBaseTableRow::GetRef((longlong)this_01->ID_AcceptNpc,true);
        bVar1 = FDS_NpcBaseTableRow::IsValid(this_02);
        if (bVar1) {
          FDS_Text::SetTextFormatFromStringTable<FDS_StringWorldID_const_&>
                    (&this->TraceTargetInfo,StringUi,0xeb46,&this_02->ID_NameSid);
        }
      }
    }
  }
  local_60 = FFieldNotificationClassDescriptor::TraceTargetInfo.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::TraceTargetInfo.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

// SetVisiblityNavigation @ 14be52e60

void __thiscall UDS_VM_Quest_Navigation::SetVisiblityNavigation(UDS_VM_Quest_Navigation *this)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisiblityNavigation.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisiblityNavigation.FieldName;
  EVar1 = SelfHitTestInvisible;
  if ((this->IsInVisibleNavigation == true) ||
     (this->TargetDistance <= this->NavigationInvisibleRange)) {
    EVar1 = Collapsed;
  }
  if (this->VisiblityNavigation != EVar1) {
    this->VisiblityNavigation = EVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be559d0

void __thiscall UDS_VM_Quest_Navigation::UnbindModel(UDS_VM_Quest_Navigation *this)

{
  UDS_QuestEvent *pUVar1;
  UDS_PhasingManager *pUVar2;
  UDS_ZoneManager *pUVar3;
  UDS_DungeonEvent *pUVar4;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedTraceQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
  }
  pUVar2 = UDS_PhasingManager::GetInst();
  if (pUVar2 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->PhasingStartOrEndDelegate,this);
  }
  pUVar3 = UDS_ZoneManager::GetInst();
  if (pUVar3 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar3->IslandIdChangeDelegate,(UObject *)this);
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnDungeonInOut,this);
  }
  return;
}

// UpdateIsInVisibleNavigation @ 14be57940

void __thiscall UDS_VM_Quest_Navigation::UpdateIsInVisibleNavigation(UDS_VM_Quest_Navigation *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  UDS_PhasingManager *this_00;
  UDS_DungeonManager *pUVar5;
  UDS_ZoneManager *pUVar6;
  UDS_QuestManager *this_01;
  FDS_QuestBaseTableRow *this_02;
  
  this->IsInVisibleNavigation = false;
  this_00 = UDS_PhasingManager::GetInst();
  if ((this_00 != (UDS_PhasingManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_PhasingManager::IsPhasingInProgress(this_00);
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar5 = UDS_DungeonManager::GetInst();
  if ((pUVar5 != (UDS_DungeonManager *)0x0) && (this->IsInVisibleNavigation == false)) {
    bVar3 = UDS_DungeonManager::IsDungeonPlay();
    this->IsInVisibleNavigation = bVar3;
  }
  pUVar6 = UDS_ZoneManager::GetInst();
  if ((pUVar6 != (UDS_ZoneManager *)0x0) &&
     (this_01 = UDS_QuestManager::GetInst(), this_01 != (UDS_QuestManager *)0x0)) {
    if (this->IsInVisibleNavigation != false) {
      return;
    }
    uVar1 = pUVar6->IslandID;
    uVar4 = UDS_QuestManager::GetQuestIsland(this_01,this->QuestID);
    this->IsInVisibleNavigation = uVar1 != uVar4;
  }
  if (this->IsInVisibleNavigation == false) {
    iVar2 = this->QuestID;
    this->IsInVisibleNavigation = iVar2 < 1;
    if (iVar2 < 1) {
      this->IsInVisibleNavigation = true;
    }
    else {
      bVar3 = UDS_QuestManager::HasQuestData(iVar2);
      if (bVar3) {
        this_02 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
        bVar3 = FDS_QuestBaseTableRow::IsValid(this_02);
        if (bVar3) {
          this->IsInVisibleNavigation = this_02->IsNavigationIndication == false;
          return;
        }
      }
    }
  }
  return;
}

