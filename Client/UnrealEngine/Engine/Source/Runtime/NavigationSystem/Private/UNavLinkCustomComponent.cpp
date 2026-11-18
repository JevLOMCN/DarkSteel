// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 44

// StaticClass @ 146dcb230

UClass * __cdecl UNavLinkCustomComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomComponent",
               &Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkCustomComponent,0x210,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkCustomComponent>,
               InternalVTableHelperCtorCaller<UNavLinkCustomComponent>,local_res8,
               UNavRelevantComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton;
}

// UNavLinkCustomComponent @ 146dd8300

UNavLinkCustomComponent * __thiscall
UNavLinkCustomComponent::UNavLinkCustomComponent
          (UNavLinkCustomComponent *this,FVTableHelper *param_1)

{
  UNavRelevantComponent::UNavRelevantComponent((UNavRelevantComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CustomLinkId).Id = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->AuxiliaryCustomLinkId).Id = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UNavRelevantComponent__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  (this->EnabledAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DisabledAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  (this->ObstacleAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnBroadcastFilter = 0;
  *(undefined8 *)&(this->OnBroadcastFilter).field_0x8 = 0;
  *(undefined4 *)&(this->OnBroadcastFilter).field_0x10 = 0;
  (this->MovingAgents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovingAgents).ArrayNum = 0;
  (this->MovingAgents).ArrayMax = 0;
  *(undefined8 *)&this->OnMoveReachedLink = 0;
  *(undefined8 *)&(this->OnMoveReachedLink).field_0x8 = 0;
  *(undefined4 *)&(this->OnMoveReachedLink).field_0x10 = 0;
  (this->TimerHandle_BroadcastStateChange).Handle = 0;
  return this;
}

// UNavLinkCustomComponent @ 146dd83e0

UNavLinkCustomComponent * __thiscall
UNavLinkCustomComponent::UNavLinkCustomComponent
          (UNavLinkCustomComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  UClass *pUVar4;
  FNavLinkAuxiliaryId FVar5;
  ForAnyElementType _Str;
  FString local_18;
  
  UNavRelevantComponent::UNavRelevantComponent((UNavRelevantComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CustomLinkId).Id = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->AuxiliaryCustomLinkId).Id = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UNavRelevantComponent__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  (this->EnabledAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DisabledAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  (this->ObstacleAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnBroadcastFilter = 0;
  *(undefined8 *)&(this->OnBroadcastFilter).field_0x8 = 0;
  *(undefined4 *)&(this->OnBroadcastFilter).field_0x10 = 0;
  (this->MovingAgents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovingAgents).ArrayNum = 0;
  (this->MovingAgents).ArrayMax = 0;
  *(undefined8 *)&this->OnMoveReachedLink = 0;
  *(undefined8 *)&(this->OnMoveReachedLink).field_0x8 = 0;
  *(undefined4 *)&(this->OnMoveReachedLink).field_0x10 = 0;
  (this->TimerHandle_BroadcastStateChange).Handle = 0;
  this->NavLinkUserId = 0;
  (this->LinkRelativeStart).field0_0x0._s_0.X = 70.0;
  (this->LinkRelativeStart).field0_0x0._s_0.Y = 0.0;
  (this->LinkRelativeStart).field0_0x0._s_0.Z = 0.0;
  (this->LinkRelativeEnd).field0_0x0._s_0.X = -70.0;
  (this->LinkRelativeEnd).field0_0x0._s_0.Y = 0.0;
  (this->LinkRelativeEnd).field0_0x0._s_0.Z = 0.0;
  (this->LinkDirection).Value = '\0';
  pUVar4 = Z_Construct_UClass_UNavArea_Default_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->EnabledAreaClass).Class.field0_0x0.DebugPtr = pUVar4;
  pUVar4 = Z_Construct_UClass_UNavArea_Null_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->DisabledAreaClass).Class.field0_0x0.DebugPtr = pUVar4;
  pUVar4 = Z_Construct_UClass_UNavArea_Null_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ObstacleAreaClass).Class.field0_0x0.DebugPtr = pUVar4;
  (this->ObstacleExtent).field0_0x0._s_0.X = 50.0;
  (this->ObstacleExtent).field0_0x0._s_0.Y = 50.0;
  (this->ObstacleExtent).field0_0x0._s_0.Z = 50.0;
  this->BroadcastRadius = 0.0;
  this->BroadcastInterval = 0.0;
  (this->BroadcastChannel).Value = '\x02';
  puVar2 = &this->field_0x17c;
  this->bLinkEnabled = 1;
  this->bCreateBoxObstacle = 0;
  this->bNotifyWhenDisabled = 0;
  this->bNotifyWhenEnabled = 0;
  if ((this->_padding_ & 0x10) != 0) {
    return this;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
  if (local_18.Data.ArrayNum == 0) {
    _Str.Data = (FScriptContainerElement *)L"";
  }
  else {
    _Str.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_146dd85e0;
  }
  wcslen((wchar_t *)_Str.Data);
LAB_146dd85e0:
  FVar5 = FNavLinkAuxiliaryId::GenerateUniqueAuxiliaryId((TStringView<wchar_t> *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->AuxiliaryCustomLinkId).Id = *FVar5.Id;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UNavLinkCustomComponent @ 146dda0f0

void __thiscall UNavLinkCustomComponent::~UNavLinkCustomComponent(UNavLinkCustomComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__UNavRelevantComponent__;
  this->_padding_ = (longlong)&_vftable__for__INavLinkCustomInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMoveReachedLink);
  pFVar1 = (this->MovingAgents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBroadcastFilter);
  this->_padding_ = (longlong)&___7INavLinkCustomInterface__6B_;
  UNavRelevantComponent::~UNavRelevantComponent((UNavRelevantComponent *)this);
  return;
}

// AddNavigationObstacle @ 146ddeaa0

void __thiscall
UNavLinkCustomComponent::AddNavigationObstacle
          (UNavLinkCustomComponent *this,TSubclassOf<UNavArea> param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->ObstacleOffset).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->ObstacleOffset).field0_0x0._s_0.Y = dVar1;
  (this->ObstacleOffset).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->ObstacleExtent).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->ObstacleExtent).field0_0x0._s_0.Y = dVar1;
  (this->ObstacleExtent).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->ObstacleAreaClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  this->bCreateBoxObstacle = 1;
  UNavRelevantComponent::RefreshNavigationModifiers((UNavRelevantComponent *)this);
  return;
}

// ApplyComponentInstanceData @ 146ddfb10

void __thiscall
UNavLinkCustomComponent::ApplyComponentInstanceData
          (UNavLinkCustomComponent *this,FNavLinkCustomInstanceData *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FNavLinkCustomInstanceData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavLinkData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkCustomComponent.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->CustomLinkId).Id != (param_1->CustomLinkId).Id) ||
     ((this->AuxiliaryCustomLinkId).Id != (param_1->AuxiliaryCustomLinkId).Id)) {
    if ((this->_padding_ & 1) != 0) {
      UNavigationSystemV1::RequestCustomLinkUnregistering
                ((INavLinkCustomInterface *)&this->_padding_,(UObject *)this);
      (this->AuxiliaryCustomLinkId).Id = (param_1->AuxiliaryCustomLinkId).Id;
      (this->CustomLinkId).Id = (param_1->CustomLinkId).Id;
      UNavigationSystemV1::RequestCustomLinkRegistering
                ((INavLinkCustomInterface *)&this->_padding_,(UObject *)this);
      return;
    }
    (this->AuxiliaryCustomLinkId).Id = (param_1->AuxiliaryCustomLinkId).Id;
    (this->CustomLinkId).Id = (param_1->CustomLinkId).Id;
  }
  return;
}

// BroadcastStateChange @ 146de1150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavLinkCustomComponent::BroadcastStateChange(UNavLinkCustomComponent *this)

{
  longlong *plVar1;
  UWorld *this_00;
  FTimerManager *this_01;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  CollectNearbyAgents(this,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnBroadcastFilter,
             &local_28);
  if ((*(int *)&(this->OnBroadcastFilter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnBroadcastFilter).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0.0 < this->BroadcastInterval) {
    this_00 = (UWorld *)this->_padding_;
    if (this_00 == (UWorld *)0x0) {
      this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_01 = UWorld::GetTimerManager(this_00);
    local_28.DestructionSentinel.Accessor =
         (FMRSWRecursiveAccessDetector *)
         ((ulonglong)local_28.DestructionSentinel.Accessor._4_4_ << 0x20);
    local_28.DestructionSentinel._0_8_ = BroadcastStateChange;
    FTimerManager::SetTimer<UNavLinkCustomComponent>
              (this_01,&this->TimerHandle_BroadcastStateChange,this,(pmf_e62c9050 *)&local_28,
               this->BroadcastInterval,false,__real_bf800000);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// CalcAndCacheBounds @ 146de1e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNavLinkCustomComponent::CalcAndCacheBounds(UNavLinkCustomComponent *this)

{
  longlong *this_00;
  double dVar1;
  double dVar2;
  longlong lVar3;
  TVector<double> *pTVar4;
  TMatrix<double> *pTVar5;
  TTransform<double> *this_01;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_158 [32];
  TVector<double> local_138;
  TVector<double>_u_0 local_120;
  double dStack_108;
  double local_100;
  double dStack_f8;
  char local_f0;
  undefined7 uStack_ef;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = &this->_padding_;
  local_b8 = 0;
  uStack_b7 = 0;
  *this_00 = 0;
  this->_padding_ = 0;
  uStack_b3 = 0;
  uStack_b1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pTVar4 = GetStartPoint(this,&local_138);
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,pTVar4);
  pTVar4 = GetEndPoint(this,&local_138);
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,pTVar4);
  if (this->bCreateBoxObstacle != 0) {
    dVar1 = (this->ObstacleOffset).field0_0x0._s_0.X;
    local_d0 = (this->ObstacleExtent).field0_0x0._s_0.X;
    dVar2 = (this->ObstacleOffset).field0_0x0._s_0.Y;
    local_e8._s_0.X = dVar1 - local_d0;
    local_c8 = (this->ObstacleExtent).field0_0x0._s_0.Y;
    local_d0 = local_d0 + dVar1;
    local_e8._s_0.Y = dVar2 - local_c8;
    local_c0 = (this->ObstacleExtent).field0_0x0._s_0.Z;
    local_c8 = local_c8 + dVar2;
    lVar3 = *(longlong *)(this->_padding_ + 0x1b8);
    local_e8._s_0.Z = (this->ObstacleOffset).field0_0x0._s_0.Z - local_c0;
    local_b8 = 1;
    local_c0 = local_c0 + (this->ObstacleOffset).field0_0x0._s_0.Z;
    if (lVar3 == 0) {
      this_01 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      this_01 = (TTransform<double> *)(lVar3 + 0x1f0);
    }
    pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(this_01,&local_a8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_e8._s_0,(TBox<double> *)&local_120._s_0,pTVar5);
    if ((char)this->_padding_ == '\0') {
      if (local_f0 != '\0') {
        *this_00 = (longlong)local_120._s_0.X;
        this->_padding_ = (longlong)local_120._s_0.Y;
        this->_padding_ = (longlong)local_120._s_0.Z;
        this->_padding_ = (longlong)dStack_108;
        this->_padding_ = (longlong)local_100;
        this->_padding_ = (longlong)dStack_f8;
        this->_padding_ = CONCAT71(uStack_ef,local_f0);
      }
    }
    else if (local_f0 != '\0') {
      dVar1 = (double)*this_00;
      uVar6 = SUB84(dVar1,0);
      uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (local_120._s_0.X <= dVar1) {
        uVar6 = SUB84(local_120._s_0.X,0);
        uVar7 = (undefined4)((ulonglong)local_120._0_8_ >> 0x20);
      }
      dVar1 = (double)this->_padding_;
      uVar8 = SUB84(dVar1,0);
      uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (local_120._s_0.Y <= dVar1) {
        uVar8 = SUB84(local_120._s_0.Y,0);
        uVar9 = (undefined4)((ulonglong)local_120._8_8_ >> 0x20);
      }
      *this_00 = CONCAT44(uVar7,uVar6);
      dVar1 = (double)this->_padding_;
      uVar6 = SUB84(dVar1,0);
      uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (local_120._s_0.Z <= dVar1) {
        uVar6 = SUB84(local_120._s_0.Z,0);
        uVar7 = (undefined4)((ulonglong)local_120._16_8_ >> 0x20);
      }
      this->_padding_ = CONCAT44(uVar9,uVar8);
      dVar1 = (double)this->_padding_;
      uVar8 = SUB84(dVar1,0);
      uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dStack_108) {
        uVar8 = SUB84(dStack_108,0);
        uVar9 = (undefined4)((ulonglong)dStack_108 >> 0x20);
      }
      this->_padding_ = CONCAT44(uVar7,uVar6);
      dVar1 = (double)this->_padding_;
      uVar6 = SUB84(dVar1,0);
      uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= local_100) {
        uVar6 = SUB84(local_100,0);
        uVar7 = (undefined4)((ulonglong)local_100 >> 0x20);
      }
      this->_padding_ = CONCAT44(uVar9,uVar8);
      dVar1 = (double)this->_padding_;
      uVar8 = SUB84(dVar1,0);
      uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= dStack_f8) {
        uVar8 = SUB84(dStack_f8,0);
        uVar9 = (undefined4)((ulonglong)dStack_f8 >> 0x20);
      }
      this->_padding_ = CONCAT44(uVar7,uVar6);
      this->_padding_ = CONCAT44(uVar9,uVar8);
    }
  }
  return;
}

// ClearNavigationObstacle @ 146de3eb0

void __thiscall UNavLinkCustomComponent::ClearNavigationObstacle(UNavLinkCustomComponent *this)

{
  (this->ObstacleAreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bCreateBoxObstacle = 0;
  UNavRelevantComponent::RefreshNavigationModifiers((UNavRelevantComponent *)this);
  return;
}

// CollectNearbyAgents @ 146de3f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavLinkCustomComponent::CollectNearbyAgents
          (UNavLinkCustomComponent *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<AController>_u_0 *pTVar1;
  byte bVar2;
  AActor *pAVar3;
  longlong lVar4;
  TObjectPtr<AController>_u_0 TVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  UWorld *this_00;
  APawn *pAVar13;
  longlong *plVar14;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  TVector<double>_u_0 *pTVar19;
  undefined1 auStackY_228 [32];
  FCollisionShape *pFVar20;
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  TObjectPtr<AController>_u_0 local_1a8;
  TObjectPtr<AController>_u_0 local_1a0;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_198;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_188;
  TVector<double>_u_0 local_178;
  TStatId local_160;
  TVector<double>_u_0 local_158;
  FCollisionShape local_140;
  FCollisionShape local_130;
  FCollisionShape local_120;
  TVector<double>_u_0 local_110;
  FName local_f8;
  FName local_f0;
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((__real_38d1b717 < this->BroadcastRadius || __real_38d1b717 == this->BroadcastRadius) &&
     (pAVar3 = (AActor *)this->_padding_, pAVar3 != (AActor *)0x0)) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar17 = 0;
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SmartLinkBroadcastTrace =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UNavLinkCustomComponent::CollectNearbyAgents(TArray<UObject_*,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SmartLinkBroadcastTrace>
            )0x0;
      pFVar12 = ::FName::FName(&local_f8,"SmartLinkBroadcastTrace");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SmartLinkBroadcastTrace,*pFVar12,
                 L"SmartLinkBroadcastTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_160.StatIdPtr = (TStatIdData *)StatPtr_SmartLinkBroadcastTrace;
    if (StatPtr_SmartLinkBroadcastTrace ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_UNavLinkCustomComponent::CollectNearbyAgents(TArray<UObject_*,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_SmartLinkBroadcastTrace>
         )0x0) {
      pFVar12 = ::FName::FName(&local_f0,"SmartLinkBroadcastTrace");
      local_160.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_SmartLinkBroadcastTrace,*pFVar12,
                      L"SmartLinkBroadcastTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SmartLinkBroadcastTrace");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams(&local_e8,::StaticName,&local_160,false,pAVar3);
    local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.ArrayNum = 0;
    local_198.ArrayMax = 0;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    GetStartPoint(this,(TVector<double> *)&local_158._s_0);
    GetEndPoint(this,(TVector<double> *)&local_178._s_0);
    this_00 = (UWorld *)this->_padding_;
    if ((local_158._s_0.Y - local_178._s_0.Y) * (local_158._s_0.Y - local_178._s_0.Y) +
        (local_158._s_0.X - local_178._s_0.X) * (local_158._s_0.X - local_178._s_0.X) +
        (local_158._s_0.Z - local_178._s_0.Z) * (local_158._s_0.Z - local_178._s_0.Z) <=
        (double)this->BroadcastRadius * (double)this->BroadcastRadius * __real_3fb0000000000000) {
      local_110._s_0.X = (local_158._s_0.X + local_178._s_0.X) * __real_3fe0000000000000;
      local_110._s_0.Y = (local_158._s_0.Y + local_178._s_0.Y) * __real_3fe0000000000000;
      local_110._s_0.Z = (local_158._s_0.Z + local_178._s_0.Z) * __real_3fe0000000000000;
      if (this_00 == (UWorld *)0x0) {
        this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar2 = (this->BroadcastChannel).Value;
      local_120.field1_0x4.Box.HalfExtentX = this->BroadcastRadius;
      pTVar19 = &local_110;
      pTVar15 = &local_198;
      pFVar20 = &local_120;
      local_120.ShapeType = Sphere;
    }
    else {
      if (this_00 == (UWorld *)0x0) {
        this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      local_140.field1_0x4.Box.HalfExtentX = this->BroadcastRadius;
      local_140.ShapeType = Sphere;
      UWorld::OverlapMultiByChannel
                (this_00,&local_198,(TVector<double> *)&local_158._s_0,
                 &UE::Math::TQuat<double>::Identity,(uint)(this->BroadcastChannel).Value,&local_140,
                 &local_e8,&FCollisionResponseParams::DefaultResponseParam);
      this_00 = (UWorld *)this->_padding_;
      if (this_00 == (UWorld *)0x0) {
        this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
      }
      bVar2 = (this->BroadcastChannel).Value;
      local_130.field1_0x4.Box.HalfExtentX = this->BroadcastRadius;
      pTVar19 = &local_178;
      pFVar20 = &local_130;
      pTVar15 = &local_188;
      local_130.ShapeType = Sphere;
    }
    UWorld::OverlapMultiByChannel
              (this_00,pTVar15,(TVector<double> *)&pTVar19->_s_0,&UE::Math::TQuat<double>::Identity,
               (uint)bVar2,pFVar20,&local_e8,&FCollisionResponseParams::DefaultResponseParam);
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    uVar16 = uVar17;
    if (0 < local_198.ArrayNum) {
      do {
        uVar9 = 0;
        if ((int)uVar16 < local_198.ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pAVar13 = FActorInstanceHandle::FetchActor<APawn>
                            ((FActorInstanceHandle *)
                             (local_198.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x48));
        if ((pAVar13 != (APawn *)0x0) &&
           (TVar5 = (TObjectPtr<AController>_u_0)(pAVar13->Controller).field0_0x0.DebugPtr,
           TVar5.DebugPtr != (AController *)0x0)) {
          local_1a8 = TVar5;
          if ((local_1c0.Data <= &local_1a8) &&
             ((&local_1a8 <
               (TObjectPtr<AController>_u_0 *)(local_1c0.Data + (longlong)local_1b8._4_4_ * 8) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar10 + 1);
          ((TObjectPtr<AController>_u_0 *)(local_1c0.Data + (longlong)iVar10 * 8))->DebugPtr =
               (AController *)local_1a8;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < local_198.ArrayNum);
    }
    if (0 < local_188.ArrayNum) {
      do {
        uVar16 = 0;
        if ((int)uVar17 < local_188.ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pAVar13 = FActorInstanceHandle::FetchActor<APawn>
                            ((FActorInstanceHandle *)
                             (local_188.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x48));
        if ((pAVar13 != (APawn *)0x0) &&
           (TVar5 = (TObjectPtr<AController>_u_0)(pAVar13->Controller).field0_0x0.DebugPtr,
           TVar5.DebugPtr != (AController *)0x0)) {
          local_1a0 = TVar5;
          if ((local_1c0.Data <= &local_1a0) &&
             ((&local_1a0 <
               (TObjectPtr<AController>_u_0 *)(local_1c0.Data + (longlong)local_1b8._4_4_ * 8) &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (int)local_1b8;
          if ((int)local_1b8 == local_1b8._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
          }
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar10 + 1);
          ((TObjectPtr<AController>_u_0 *)(local_1c0.Data + (longlong)iVar10 * 8))->DebugPtr =
               (AController *)local_1a0;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < local_188.ArrayNum);
    }
    iVar10 = (int)local_1b8;
    pTVar1 = (TObjectPtr<AController>_u_0 *)(local_1c0.Data + (longlong)(int)local_1b8 * 8);
    FVar18.Data = local_1c0.Data;
    while( true ) {
      if ((int)local_1b8 != iVar10) {
        local_1c8[0] = 0;
        `TCheckedPointerIterator<AController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c8);
      }
      if ((TObjectPtr<AController>_u_0 *)FVar18.Data == pTVar1) break;
      plVar14 = (longlong *)(**(code **)((*(AController **)FVar18.Data)->_padding_ + 0x50))();
      if ((plVar14 == (longlong *)0x0) ||
         (local_1b0 = (**(code **)(*plVar14 + 8))(plVar14), local_1b0 == 0)) {
        local_1b0 = 0;
        FVar18.Data = FVar18.Data + 8;
      }
      else {
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = param_1->ArrayNum;
        if (iVar11 == param_1->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        FVar18.Data = FVar18.Data + 8;
        param_1->ArrayNum = iVar11 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_1b0;
      }
    }
    if ((TObjectPtr<AController>_u_0 *)local_1c0.Data != (TObjectPtr<AController>_u_0 *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
    if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.AllocatorInstance.Data);
    }
    if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetAuxiliaryId @ 146e008a0

FNavLinkAuxiliaryId __thiscall
UNavLinkCustomComponent::GetAuxiliaryId(UNavLinkCustomComponent *this)

{
  longlong *in_RDX;
  
  *in_RDX = this->_padding_;
  return (FNavLinkAuxiliaryId)(ulong64)in_RDX;
}

// GetComponentInstanceData @ 146e00f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TStructOnScope<FActorComponentInstanceData> * __thiscall
UNavLinkCustomComponent::GetComponentInstanceData
          (UNavLinkCustomComponent *this,
          TStructOnScope<FActorComponentInstanceData> *__return_storage_ptr__)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  UPackage *pUVar4;
  FActorComponentInstanceData *this_00;
  UObject *pUVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  UScriptStruct *local_res8;
  
  FStructOnScope::FStructOnScope((FStructOnScope *)__return_storage_ptr__);
  *(undefined ***)__return_storage_ptr__ = &___7__TStructOnScope_UFActorComponentInstanceData____6B_
  ;
  FStructOnScope::Destroy((FStructOnScope *)__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData,(UObject *)pUVar4,
                         L"NavLinkCustomInstanceData");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton;
  lVar8 = 0;
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton !=
      (UScriptStruct *)0x0) {
    local_res8 = Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable
                ((UObject *)
                 Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
    iVar6 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar7 = (int)pUVar2->_padding_ + -1 + iVar6 & ~(iVar6 - 1U);
    uVar3 = 1;
    if (uVar7 != 0) {
      uVar3 = uVar7;
    }
    this_00 = FMemory::Malloc((longlong)(int)uVar3,0);
    *(FActorComponentInstanceData **)&__return_storage_ptr__->field_0x10 = this_00;
    FActorComponentInstanceData::FActorComponentInstanceData(this_00,(UActorComponent *)this);
    this_00->_padding_ = (longlong)&___7FNavLinkCustomInstanceData__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    __return_storage_ptr__->field_0x20 = 1;
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8);
  if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_NavigationSystem();
    Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavLinkCustomInstanceData,(UObject *)pUVar4,
                         L"NavLinkCustomInstanceData");
    if (Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_146e01049;
  }
  iVar6 = (int)(Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton)->
               _padding_;
  if ((*(int *)&pUVar5[1].field_0x10 < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar6 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FNavLinkCustomInstanceData.OuterSingleton)->_padding_)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar8 = *(longlong *)&__return_storage_ptr__->field_0x10;
  }
LAB_146e01049:
  *(ulong64 *)(lVar8 + 0x68) = (this->CustomLinkId).Id;
  *(ulong64 *)(lVar8 + 0x70) = (this->AuxiliaryCustomLinkId).Id;
  return __return_storage_ptr__;
}

// GetEndPoint @ 146e05b90

TVector<double> * __thiscall
UNavLinkCustomComponent::GetEndPoint
          (UNavLinkCustomComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TTransform<double> *pTVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar2 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar2 == 0) {
    pTVar9 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar9 = (TTransform<double> *)(lVar2 + 0x1f0);
  }
  auVar1 = *(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64;
  dVar6 = (this->LinkRelativeEnd).field0_0x0._s_0.Z * (pTVar9->Scale3D).ZW.m128d_f64[0];
  dVar7 = (pTVar9->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = (pTVar9->Rotation).ZW.m128d_f64[1];
  dVar4 = (pTVar9->Scale3D).XY.m128d_f64[0] * (this->LinkRelativeEnd).field0_0x0._s_0.X;
  dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1] * (this->LinkRelativeEnd).field0_0x0._s_0.Y;
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar10 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar11 = blendpd(auVar10,auVar1,2);
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  dVar3 = auVar1._0_8_;
  auVar21._0_8_ = auVar20._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
  auVar21._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
  auVar22._8_4_ = SUB84(dVar5,0);
  auVar22._0_8_ = dVar4;
  auVar22._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar22,auVar10,2);
  auVar13._0_8_ = auVar10._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar13._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar21,auVar13,2);
  auVar23._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar23._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar15 = auVar21._8_8_ + auVar21._8_8_;
  dVar16 = auVar13._0_8_ + auVar13._0_8_;
  auVar18._8_4_ = SUB84(dVar16,0);
  auVar18._0_8_ = dVar15;
  uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar18._12_4_ = uVar17;
  auVar12._8_4_ = SUB84(dVar16,0);
  auVar12._0_8_ = dVar15;
  auVar12._12_4_ = uVar17;
  auVar22 = blendpd(auVar10,auVar1,2);
  auVar13 = blendpd(auVar12,auVar23,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar15;
  auVar19._8_8_ = auVar23._0_8_ * auVar10._8_8_ - dVar3 * dVar16;
  auVar14._0_8_ = auVar13._0_8_ * dVar3 - auVar22._0_8_ * auVar23._0_8_;
  auVar14._8_8_ = auVar13._8_8_ * auVar1._8_8_ - auVar22._8_8_ * auVar23._8_8_;
  dVar7 = (pTVar9->Translation).ZW.m128d_f64[0];
  auVar11._8_4_ = SUB84(auVar19._8_8_,0);
  auVar11._0_8_ = auVar19._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar10 = blendpd(auVar19,auVar14,2);
  dVar3 = dVar8 * dVar16 + dVar5 + auVar14._0_8_ + (pTVar9->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar8 * dVar15 + dVar4 + auVar11._8_8_ + (pTVar9->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar8 * auVar23._0_8_ + dVar6 + auVar10._0_8_ + dVar7;
  return __return_storage_ptr__;
}

// GetId @ 146e05d20

FNavLinkId __thiscall UNavLinkCustomComponent::GetId(UNavLinkCustomComponent *this)

{
  longlong *in_RDX;
  
  *in_RDX = this->_padding_;
  return (FNavLinkId)(ulong64)in_RDX;
}

// GetLinkAreaClass @ 146e05d50

TSubclassOf<UNavArea> __thiscall
UNavLinkCustomComponent::GetLinkAreaClass(UNavLinkCustomComponent *this)

{
  UObject *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (UObject *)(&this->_padding_)[~*(uint *)((longlong)&this->_padding_ + 4) & 1];
  *(UObject **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TSubclassOf<UNavArea>)in_RDX.field0_0x0;
}

// GetLinkData @ 146e05d90

void __thiscall
UNavLinkCustomComponent::GetLinkData
          (UNavLinkCustomComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          Type *param_3)

{
  double dVar1;
  
  dVar1 = (double)this->_padding_;
  (param_1->field0_0x0)._s_0.X = (double)this->_padding_;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (double)this->_padding_;
  dVar1 = (double)this->_padding_;
  (param_2->field0_0x0)._s_0.X = (double)this->_padding_;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (double)this->_padding_;
  *param_3 = (uint)(byte)this->_padding_;
  return;
}

// GetLinkModifier @ 146e07790

FNavigationLink * __thiscall
UNavLinkCustomComponent::GetLinkModifier
          (UNavLinkCustomComponent *this,FNavigationLink *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  pUVar6 = (UClass *)0x0;
  pUVar7 = (UClass *)&this->_padding_;
  if (this == (UNavLinkCustomComponent *)0x0) {
    pUVar7 = pUVar6;
  }
  FNavigationLinkBase::FNavigationLinkBase((FNavigationLinkBase *)__return_storage_ptr__);
  (__return_storage_ptr__->Left).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Left).field0_0x0._s_0.Y = -50.0;
  (__return_storage_ptr__->Left).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Right).field0_0x0._s_0.Y = 50.0;
  lVar2 = pUVar7->_padding_;
  (__return_storage_ptr__->Right).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Right).field0_0x0._s_0.Z = 0.0;
  plVar4 = (longlong *)(**(code **)(lVar2 + 0x20))(pUVar7,local_res10);
  lVar2 = *plVar4;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar5 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = (UClass *)*plVar4;
    }
  }
  FNavigationLinkBase::SetAreaClass((FNavigationLinkBase *)__return_storage_ptr__,pUVar6);
  plVar4 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x38))(pUVar7,local_res10);
  __return_storage_ptr__->_padding_ = *plVar4;
  local_res8[0] = 0;
  (**(code **)(pUVar7->_padding_ + 0x10))
            (pUVar7,&__return_storage_ptr__->Left,&__return_storage_ptr__->Right,local_res8);
  (**(code **)(pUVar7->_padding_ + 0x18))(pUVar7,&__return_storage_ptr__->_padding_);
  *(undefined1 *)&__return_storage_ptr__->_padding_ = (undefined1)local_res8[0];
  return __return_storage_ptr__;
}

// GetNavigationData @ 146e0a070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavLinkCustomComponent::GetNavigationData
          (UNavLinkCustomComponent *this,FNavigationRelevantData *param_1)

{
  int *piVar1;
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar2;
  AActor *pAVar3;
  USceneComponent *pUVar4;
  FAreaNavModifier *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  FAreaNavModifier *pFVar10;
  uint uVar11;
  double *pdVar12;
  uint uVar13;
  FNavigationLinkBase *this_00;
  TTransform<double> *pTVar14;
  longlong lVar15;
  undefined1 auStack_238 [32];
  FAreaNavModifier *local_218;
  FAreaNavModifier *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> local_1e8;
  UObject *local_1d8 [2];
  FAreaNavModifier local_1c8;
  TVector<double>_u_0 local_158;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128;
  FNavLinkOwnerData local_118;
  FAreaNavModifier local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pdVar12 = &this[-1].LinkRelativeStart.field0_0x0._s_0.Y;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  (**(code **)((longlong)*pdVar12 + 0x500))(pdVar12,&local_1c8);
  local_1c8._padding_ = 0;
  local_1c8.Cost = 0.0;
  if (local_1e8.AllocatorInstance.Data <= &local_1c8) {
    if (&local_1c8 <
        (FAreaNavModifier *)(local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x70)
       ) {
      local_200 = (longlong)local_1e8.ArrayNum;
      local_1f8 = 0x70;
      local_218 = &local_1c8;
      local_210 = (FAreaNavModifier *)local_1e8.AllocatorInstance.Data;
      local_208 = (longlong)local_1e8.ArrayMax;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  iVar8 = local_1e8.ArrayNum;
  if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
  }
  local_1e8.ArrayNum = iVar8 + 1;
  this_00 = (FNavigationLinkBase *)(local_1e8.AllocatorInstance.Data + (longlong)iVar8 * 0x70);
  FNavigationLinkBase::FNavigationLinkBase(this_00,(FNavigationLinkBase *)&local_1c8);
  *(double *)(this_00 + 1) = local_1c8.Bounds.Max.field0_0x0._s_0.Y;
  *(double *)&this_00[1].UserId = local_1c8.Bounds.Max.field0_0x0._s_0.Z;
  this_00[1].NavLinkId.Id = local_1c8.Bounds._48_8_;
  *(FScriptContainerElement **)&this_00[1].SnapRadius = local_1c8.Points.AllocatorInstance.Data;
  this_00[1].SupportedAgents = (FNavAgentSelector)local_1c8.Points.ArrayNum;
  this_00[1].field7_0x24 = (FNavigationLinkBase_u_36)local_1c8.Points.ArrayMax;
  this_00[1].Direction = (TEnumAsByte<ENavLinkDirection::Type>)local_1c8.ShapeType.Value;
  this_00[1].field_0x29 = local_1c8.ApplyMode.Value;
  *(undefined6 *)&this_00[1].field_0x2a = local_1c8._106_6_;
  pTVar14 = &UE::Math::TTransform<double>::Identity;
  pAVar3 = *(AActor **)&this[-1].OnMoveReachedLink.field_0x8;
  if (pAVar3 != (AActor *)0x0) {
    pUVar4 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (USceneComponent *)0x0) {
      pTVar9 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar9 = &pUVar4->ComponentToWorld;
    }
    local_118.LinkToWorld.Rotation.XY.m128d_f64 = *&(pTVar9->Rotation).XY.m128d_f64;
    local_118.LinkToWorld.Rotation.ZW.m128d_f64 = *&(pTVar9->Rotation).ZW.m128d_f64;
    local_118.LinkToWorld.Translation.XY.m128d_f64 = *&(pTVar9->Translation).XY.m128d_f64;
    local_118.LinkToWorld.Translation.ZW.m128d_f64 = *&(pTVar9->Translation).ZW.m128d_f64;
    local_118.LinkToWorld.Scale3D.XY.m128d_f64 = *&(pTVar9->Scale3D).XY.m128d_f64;
    local_118.LinkToWorld.Scale3D.ZW.m128d_f64 = *&(pTVar9->Scale3D).ZW.m128d_f64;
    local_118.Actor = pAVar3;
    NavigationHelper::ProcessNavLinkAndAppend(&param_1->Modifiers,&local_118,&local_1e8);
  }
  if ((this->_padding_ & 0x800000000) != 0) {
    local_1d8[0] = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_1d8[0]);
    }
    lVar15 = *(longlong *)(*(longlong *)&this[-1].OnMoveReachedLink.field_0x8 + 0x1b8);
    if (lVar15 != 0) {
      pTVar14 = (TTransform<double> *)(lVar15 + 0x1f0);
    }
    local_158._s_0.X = (double)this->_padding_ - (double)this->_padding_;
    local_128 = 1;
    local_158._s_0.Y = (double)this->_padding_ - (double)this->_padding_;
    local_140 = (double)this->_padding_ + (double)this->_padding_;
    local_138 = (double)this->_padding_ + (double)this->_padding_;
    local_158._s_0.Z = (double)this->_padding_ - (double)this->_padding_;
    local_130 = (double)this->_padding_ + (double)this->_padding_;
    pFVar10 = FAreaNavModifier::FAreaNavModifier
                        (&local_a8,(TBox<double> *)&local_158._s_0,pTVar14,
                         (TSubclassOf<UNavAreaBase>)local_1d8);
    pTVar2 = &(param_1->Modifiers).Areas;
    pFVar5 = (FAreaNavModifier *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= pFVar10) &&
       (lVar15 = (longlong)(param_1->Modifiers).Areas.ArrayMax, pFVar10 < pFVar5 + lVar15)) {
      local_200 = (longlong)(param_1->Modifiers).Areas.ArrayNum;
      local_1f8 = 0x70;
      local_218 = pFVar10;
      local_210 = pFVar5;
      local_208 = lVar15;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (param_1->Modifiers).Areas.ArrayNum;
    piVar1 = &(param_1->Modifiers).Areas.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->Modifiers).Areas.ArrayNum = iVar8 + 1;
    FAreaNavModifier::FAreaNavModifier
              ((FAreaNavModifier *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x70),
               pFVar10);
    uVar11 = (uint)(param_1->Modifiers)._padding_;
    uVar13 = pFVar10->_padding_ & 1U | uVar11;
    *(uint *)&(param_1->Modifiers)._padding_ = (uVar13 ^ uVar11) & 0xfffffffe ^ uVar13;
    uVar11 = *(uint *)&(param_1->Modifiers).field_0x50;
    uVar11 = ((byte)pFVar10->field_0x6a | uVar11) & 2 ^ uVar11 & 0xfffffffd;
    *(uint *)&(param_1->Modifiers).field_0x50 = uVar11;
    *(uint *)&(param_1->Modifiers).field_0x50 =
         ((byte)pFVar10->field_0x6a | uVar11) & 4 ^ uVar11 & 0xfffffffb;
    if (local_a8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Points.AllocatorInstance.Data);
    }
  }
  if ((FAreaNavModifier *)local_1e8.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 146e0e9c0

UClass * __cdecl UNavLinkCustomComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavLinkCustomComponent",
               &Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton,
               StaticRegisterNativesUNavLinkCustomComponent,0x210,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkCustomComponent>,
               InternalVTableHelperCtorCaller<UNavLinkCustomComponent>,local_res8,
               UNavRelevantComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkCustomComponent.InnerSingleton;
}

// GetStartPoint @ 146e101d0

TVector<double> * __thiscall
UNavLinkCustomComponent::GetStartPoint
          (UNavLinkCustomComponent *this,TVector<double> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TTransform<double> *pTVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar2 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar2 == 0) {
    pTVar9 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar9 = (TTransform<double> *)(lVar2 + 0x1f0);
  }
  auVar1 = *(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64;
  dVar6 = (this->LinkRelativeStart).field0_0x0._s_0.Z * (pTVar9->Scale3D).ZW.m128d_f64[0];
  dVar7 = (pTVar9->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = (pTVar9->Rotation).ZW.m128d_f64[1];
  dVar4 = (pTVar9->Scale3D).XY.m128d_f64[0] * (this->LinkRelativeStart).field0_0x0._s_0.X;
  dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1] * (this->LinkRelativeStart).field0_0x0._s_0.Y;
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar10 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar11 = blendpd(auVar10,auVar1,2);
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  dVar3 = auVar1._0_8_;
  auVar21._0_8_ = auVar20._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
  auVar21._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
  auVar22._8_4_ = SUB84(dVar5,0);
  auVar22._0_8_ = dVar4;
  auVar22._12_4_ = uVar17;
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar10 = blendpd(auVar22,auVar10,2);
  auVar13._0_8_ = auVar10._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar13._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
  auVar10 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar21,auVar13,2);
  auVar23._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar23._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar15 = auVar21._8_8_ + auVar21._8_8_;
  dVar16 = auVar13._0_8_ + auVar13._0_8_;
  auVar18._8_4_ = SUB84(dVar16,0);
  auVar18._0_8_ = dVar15;
  uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar18._12_4_ = uVar17;
  auVar12._8_4_ = SUB84(dVar16,0);
  auVar12._0_8_ = dVar15;
  auVar12._12_4_ = uVar17;
  auVar22 = blendpd(auVar10,auVar1,2);
  auVar13 = blendpd(auVar12,auVar23,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar15;
  auVar19._8_8_ = auVar23._0_8_ * auVar10._8_8_ - dVar3 * dVar16;
  auVar14._0_8_ = auVar13._0_8_ * dVar3 - auVar22._0_8_ * auVar23._0_8_;
  auVar14._8_8_ = auVar13._8_8_ * auVar1._8_8_ - auVar22._8_8_ * auVar23._8_8_;
  dVar7 = (pTVar9->Translation).ZW.m128d_f64[0];
  auVar11._8_4_ = SUB84(auVar19._8_8_,0);
  auVar11._0_8_ = auVar19._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar10 = blendpd(auVar19,auVar14,2);
  dVar3 = dVar8 * dVar16 + dVar5 + auVar14._0_8_ + (pTVar9->Translation).XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar8 * dVar15 + dVar4 + auVar11._8_8_ + (pTVar9->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar8 * auVar23._0_8_ + dVar6 + auVar10._0_8_ + dVar7;
  return __return_storage_ptr__;
}

// GetSupportedAgents @ 146e11310

void __thiscall
UNavLinkCustomComponent::GetSupportedAgents
          (UNavLinkCustomComponent *this,FNavAgentSelector *param_1)

{
  param_1->field0_0x0 = *(FNavAgentSelector_u_0 *)&this->_padding_;
  return;
}

// HasMovingAgents @ 146e146b0

bool __thiscall UNavLinkCustomComponent::HasMovingAgents(UNavLinkCustomComponent *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (0 < (this->MovingAgents).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MovingAgents).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)
                         ((this->MovingAgents).AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
      if (bVar2) {
        return true;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->MovingAgents).ArrayNum);
  }
  return false;
}

// IsLinkPathfindingAllowed @ 146e15890

bool __thiscall
UNavLinkCustomComponent::IsLinkPathfindingAllowed(UNavLinkCustomComponent *this,UObject *param_1)

{
  return true;
}

// OnLinkMoveFinished @ 146e19300

void __thiscall
UNavLinkCustomComponent::OnLinkMoveFinished(UNavLinkCustomComponent *this,UObject *param_1)

{
  int iVar1;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UObject *local_res8;
  FWeakObjectPtr local_38 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  iVar7 = 0;
  local_38[0].ObjectIndex = 0;
  local_38[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res8);
  if ((((FWeakObjectPtr *)this->_padding_ <= local_38) &&
      (local_38 < (FWeakObjectPtr *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    this_00 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)this->_padding_;
    bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_38);
    bVar4 = !bVar4;
    iVar6 = iVar7;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                          (this_00 + iVar3,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_38);
      } while (bVar4 == !bVar5);
      if (bVar4 != false) {
        if (iVar7 != iVar6) {
          memmove(this_00 + iVar7,this_00 + iVar6,(longlong)(iVar3 - iVar6) << 3);
        }
        iVar7 = iVar7 + (iVar3 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    *(int *)&this->_padding_ = iVar7;
  }
  return;
}

// OnLinkMoveStarted @ 146e194c0

bool __thiscall
UNavLinkCustomComponent::OnLinkMoveStarted
          (UNavLinkCustomComponent *this,UObject *param_1,TVector<double> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  UObject *local_res8;
  FWeakObjectPtr local_58;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  plVar2 = &this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  plVar8 = (longlong *)0x0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res8);
  if ((((FWeakObjectPtr *)*plVar2 <= &local_58) &&
      (&local_58 < (FWeakObjectPtr *)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  *(FWeakObjectPtr *)(*plVar2 + (longlong)iVar7 * 8) = local_58;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_50);
  if ((((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x38))(), cVar6 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_38)
    ;
    if ((int)this->_padding_ != 0) {
      plVar8 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&this[-1]._padding_,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  return false;
}

// OnRegister @ 146e19ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNavLinkCustomComponent::OnRegister(UNavLinkCustomComponent *this)

{
  FGuid *pFVar1;
  FNavLinkId FVar2;
  undefined1 local_res8 [32];
  FString local_28;
  FGuid local_18;
  
  UNavRelevantComponent::OnRegister((UNavRelevantComponent *)this);
  if ((this->CustomLinkId).Id == FNavLinkId::Invalid.Id) {
    pFVar1 = FGuid::NewGuid(&local_18);
    local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar1;
    local_28.Data.ArrayNum = pFVar1->C;
    local_28.Data.ArrayMax = pFVar1->D;
    FVar2 = FNavLinkId::GenerateUniqueId
                      ((FNavLinkAuxiliaryId)local_res8,(FGuid *)(this->AuxiliaryCustomLinkId).Id);
                    /* WARNING: Load size is inaccurate */
    (this->CustomLinkId).Id = *FVar2.Id;
    if (6 < (byte)LogNavLink._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  UNavigationSystemV1::RequestCustomLinkRegistering
            ((INavLinkCustomInterface *)&this->_padding_,(UObject *)this);
  return;
}

// OnUnregister @ 146e1ae50

void __thiscall UNavLinkCustomComponent::OnUnregister(UNavLinkCustomComponent *this)

{
  UNavRelevantComponent::OnUnregister((UNavRelevantComponent *)this);
  UNavigationSystemV1::RequestCustomLinkUnregistering
            ((INavLinkCustomInterface *)&this->_padding_,(UObject *)this);
  return;
}

// PostLoad @ 146e1b450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavLinkCustomComponent::PostLoad(UNavLinkCustomComponent *this)

{
  ulong64 uVar1;
  ulonglong uVar2;
  undefined1 local_res8 [32];
  
  UActorComponent::PostLoad((UActorComponent *)this);
  uVar1 = (this->CustomLinkId).Id;
  if (-1 < (longlong)uVar1) {
    if ((6 < (byte)LogNavLink._0_1_) &&
       ((ulonglong)INavLinkCustomInterface::NextUniqueId < uVar1 + 1)) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
    }
    uVar2 = uVar1 + 1;
    if (uVar1 + 1 < (ulonglong)INavLinkCustomInterface::NextUniqueId) {
      uVar2 = (ulonglong)INavLinkCustomInterface::NextUniqueId;
    }
    if (0xffffffff < uVar2) {
      `INavLinkCustomInterface::UpdateUniqueId'::__l5::<lambda_1>::operator()(local_res8);
    }
    INavLinkCustomInterface::NextUniqueId = (uint)uVar2;
  }
  return;
}

// SendBroadcastWhenDisabled @ 146e22670

void __thiscall
UNavLinkCustomComponent::SendBroadcastWhenDisabled(UNavLinkCustomComponent *this,bool param_1)

{
  this->bNotifyWhenDisabled = 0;
  *(uint *)&this->field_0x17c = *(uint *)&this->field_0x17c | (uint)param_1 << 2;
  return;
}

// SendBroadcastWhenEnabled @ 146e22690

void __thiscall
UNavLinkCustomComponent::SendBroadcastWhenEnabled(UNavLinkCustomComponent *this,bool param_1)

{
  this->bNotifyWhenEnabled = 0;
  *(uint *)&this->field_0x17c = *(uint *)&this->field_0x17c | (uint)param_1 * 2;
  return;
}

// Serialize @ 146e26160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavLinkCustomComponent::Serialize(UNavLinkCustomComponent *this,FArchive *param_1)

{
  int iVar1;
  
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x61) {
      (this->CustomLinkId).Id = (ulonglong)this->NavLinkUserId;
    }
  }
  return;
}

// Serialize @ 146e261c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavLinkCustomComponent::Serialize(UNavLinkCustomComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UActorComponent::Serialize((UActorComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x61) {
      (this->CustomLinkId).Id = (ulonglong)this->NavLinkUserId;
    }
  }
  return;
}

// SetBroadcastData @ 146e285c0

void __thiscall
UNavLinkCustomComponent::SetBroadcastData
          (UNavLinkCustomComponent *this,float param_1,ECollisionChannel param_2,float param_3)

{
  this->BroadcastRadius = param_1;
  this->BroadcastInterval = param_3;
  (this->BroadcastChannel).Value = (uchar)param_2;
  return;
}

// SetBroadcastFilter @ 146e285e0

void __thiscall
UNavLinkCustomComponent::SetBroadcastFilter
          (UNavLinkCustomComponent *this,
          TDelegate<void___cdecl(UNavLinkCustomComponent_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->OnBroadcastFilter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBroadcastFilter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// SetDisabledArea @ 146e287f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavLinkCustomComponent::SetDisabledArea
          (UNavLinkCustomComponent *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  char cVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemV1 *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->DisabledAreaClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  cVar2 = (**(code **)(this->_padding_ + 0x4e0))(this);
  if (cVar2 == '\0') {
    return;
  }
  if (this->bLinkEnabled != 0) {
    return;
  }
  pUVar3 = (UWorld *)this->_padding_;
  if ((pUVar3 == (UWorld *)0x0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) {
    return;
  }
  this_00 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146e28883;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146e28883:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    UNavigationSystemV1::UpdateCustomLink(this_00,(INavLinkCustomInterface *)&this->_padding_);
  }
  return;
}

// SetEnabled @ 146e288b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavLinkCustomComponent::SetEnabled(UNavLinkCustomComponent *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  FTimerManager *this_00;
  FTimerData *pFVar5;
  UNavigationSystemV1 *this_01;
  
  if (ZPULL(*(undefined4 *)&this->field_0x17c,0,1) == (uint)param_1) {
    return;
  }
  pUVar3 = (UWorld *)this->_padding_;
  *(uint *)&this->field_0x17c = *(undefined4 *)&this->field_0x17c & 0xfffffffe | (uint)param_1;
  if ((pUVar3 == (UWorld *)0x0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) goto LAB_146e28940;
  this_01 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (this_01 == (UNavigationSystemV1 *)0x0) {
LAB_146e2892a:
    this_01 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&this_01->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_146e2892a;
  }
  if (this_01 != (UNavigationSystemV1 *)0x0) {
    UNavigationSystemV1::UpdateCustomLink(this_01,(INavLinkCustomInterface *)&this->_padding_);
  }
LAB_146e28940:
  if ((this->_padding_ != 0) ||
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 != (UWorld *)0x0)
     ) {
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    this_00 = UWorld::GetTimerManager(pUVar3);
    pFVar5 = FTimerManager::FindTimer(this_00,&this->TimerHandle_BroadcastStateChange);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (this_00,(FTimerHandle)(this->TimerHandle_BroadcastStateChange).Handle);
    }
    (this->TimerHandle_BroadcastStateChange).Handle = 0;
    if ((this->bLinkEnabled == 1 && this->bNotifyWhenEnabled == 1) ||
       ((this->bLinkEnabled == 0 && (this->bNotifyWhenDisabled != 0)))) {
      BroadcastStateChange(this);
    }
  }
  UNavRelevantComponent::RefreshNavigationModifiers((UNavRelevantComponent *)this);
  return;
}

// SetEnabledArea @ 146e289f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavLinkCustomComponent::SetEnabledArea(UNavLinkCustomComponent *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  char cVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UNavigationSystemV1 *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->EnabledAreaClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  cVar2 = (**(code **)(this->_padding_ + 0x4e0))(this);
  if (cVar2 == '\0') {
    return;
  }
  if (this->bLinkEnabled == 0) {
    return;
  }
  pUVar3 = (UWorld *)this->_padding_;
  if ((pUVar3 == (UWorld *)0x0) &&
     (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0)
     ) {
    return;
  }
  this_00 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146e28a83;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146e28a83:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    UNavigationSystemV1::UpdateCustomLink(this_00,(INavLinkCustomInterface *)&this->_padding_);
  }
  return;
}

// SetLinkData @ 146e28ae0

void __thiscall
UNavLinkCustomComponent::SetLinkData
          (UNavLinkCustomComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          Type param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (this->LinkRelativeStart).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LinkRelativeStart).field0_0x0._s_0.Y = dVar4;
  (this->LinkRelativeStart).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  uVar1 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  *(undefined4 *)&(this->LinkRelativeEnd).field0_0x0 = *(undefined4 *)&param_2->field0_0x0;
  *(undefined4 *)((longlong)&(this->LinkRelativeEnd).field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&(this->LinkRelativeEnd).field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(this->LinkRelativeEnd).field0_0x0 + 0xc) = uVar3;
  (this->LinkRelativeEnd).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  (this->LinkDirection).Value = (uchar)param_3;
  (**(code **)(this->_padding_ + 0x68))();
  UNavRelevantComponent::RefreshNavigationModifiers((UNavRelevantComponent *)this);
  return;
}

// SetMoveReachedLink @ 146e28b80

void __thiscall
UNavLinkCustomComponent::SetMoveReachedLink
          (UNavLinkCustomComponent *this,
          TDelegate<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->OnMoveReachedLink) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMoveReachedLink,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// StaticRegisterNativesUNavLinkCustomComponent @ 146e29e20

void __cdecl UNavLinkCustomComponent::StaticRegisterNativesUNavLinkCustomComponent(void)

{
  return;
}

// UpdateLinkId @ 146e2e200

void __thiscall
UNavLinkCustomComponent::UpdateLinkId(UNavLinkCustomComponent *this,FNavLinkId param_1)

{
  if (param_1.Id != this->_padding_) {
    this->_padding_ = param_1.Id;
  }
  return;
}

// _getUObject @ 146e2fa30

UObject * __thiscall UNavLinkCustomComponent::_getUObject(UNavLinkCustomComponent *this)

{
  return (UObject *)&this[-1].MovingAgents.ArrayNum;
}

// _getUObject`adjustor{152}' @ 146e2fa3c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkCustomComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UNavLinkCustomComponent::_getUObject_adjustor_152__(UNavLinkCustomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkCustomComponent *)&this[-1].LinkDirection);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{232}' @ 146e2fa50

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavLinkCustomComponent::_getUObject`adjustor{232}' (void)const __ptr64 */

UObject * __thiscall
UNavLinkCustomComponent::_getUObject_adjustor_232__(UNavLinkCustomComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavLinkCustomComponent *)&this[-1].AuxiliaryCustomLinkId);
  return (UObject *)pUVar1;
}

