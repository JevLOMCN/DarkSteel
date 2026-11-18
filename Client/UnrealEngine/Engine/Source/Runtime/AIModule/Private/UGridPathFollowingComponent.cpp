// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146f834e0

UClass * __cdecl UGridPathFollowingComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathFollowingComponent",
               &Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton,
               StaticRegisterNativesUGridPathFollowingComponent,0x358,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGridPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UGridPathFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton;
}

// UGridPathFollowingComponent @ 146f95960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGridPathFollowingComponent * __thiscall
UGridPathFollowingComponent::UGridPathFollowingComponent
          (UGridPathFollowingComponent *this,FVTableHelper *param_1)

{
  UPathFollowingComponent::UPathFollowingComponent((UPathFollowingComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  (this->GridManager).field0_0x0.DebugPtr = (UNavLocalGridManager *)0x0;
  (this->GridPathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridPathPoints).ArrayNum = 0;
  (this->GridPathPoints).ArrayMax = 0;
  return this;
}

// UGridPathFollowingComponent @ 146f959d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGridPathFollowingComponent * __thiscall
UGridPathFollowingComponent::UGridPathFollowingComponent
          (UGridPathFollowingComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UPathFollowingComponent::UPathFollowingComponent((UPathFollowingComponent *)this,param_1);
  this->ActiveGridIdx = -1;
  this->ActiveGridId = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  this->bIsPathEndInsideGrid = 0;
  this->bHasGridPath = 0;
  (this->GridPathPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridPathPoints).ArrayNum = 0;
  (this->GridPathPoints).ArrayMax = 0;
  this->GridMoveSegmentEndIndex = 0;
  this->MoveSegmentStartIndexOffGrid = 0;
  (this->GridManager).field0_0x0.DebugPtr = (UNavLocalGridManager *)0x0;
  return this;
}

// ~UGridPathFollowingComponent @ 146f96f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGridPathFollowingComponent::~UGridPathFollowingComponent(UGridPathFollowingComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IAIResourceInterface__;
  this->_padding_ = (longlong)&_vftable__for__IPathFollowingAgentInterface__;
  pFVar1 = (this->GridPathPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPathFollowingComponent::~UPathFollowingComponent((UPathFollowingComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146fb4130

UClass * __cdecl UGridPathFollowingComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"GridPathFollowingComponent",
               &Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton,
               StaticRegisterNativesUGridPathFollowingComponent,0x358,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGridPathFollowingComponent>,
               InternalVTableHelperCtorCaller<UGridPathFollowingComponent>,local_res8,
               UPathFollowingComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridPathFollowingComponent.InnerSingleton;
}

// Initialize @ 146fb8b10

void __thiscall UGridPathFollowingComponent::Initialize(UGridPathFollowingComponent *this)

{
  int *piVar1;
  uint uVar2;
  UNavLocalGridManager *pUVar3;
  
  (**(code **)(this->_padding_ + 0x508))();
  uVar2 = (uint)this->_padding_;
  if (-1 < (int)uVar2) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar2,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,piVar1);
    }
    pUVar3 = UNavLocalGridManager::GetCurrent((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNavLocalGridManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->GridManager).field0_0x0.DebugPtr = pUVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// OnPathUpdated @ 146fc0880

void __thiscall UGridPathFollowingComponent::OnPathUpdated(UGridPathFollowingComponent *this)

{
  this->ActiveGridIdx = -1;
  this->ActiveGridId = -1;
  return;
}

// Reset @ 146fcd710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGridPathFollowingComponent::Reset(UGridPathFollowingComponent *this)

{
  undefined1 *puVar1;
  
  UPathFollowingComponent::Reset((UPathFollowingComponent *)this);
  this->ActiveGridIdx = -1;
  this->ActiveGridId = -1;
  this->bIsPathEndInsideGrid = 0;
  this->bHasGridPath = 0;
  this->GridMoveSegmentEndIndex = 0;
  this->MoveSegmentStartIndexOffGrid = 0;
  return;
}

// ResumeMove @ 146fcdee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGridPathFollowingComponent::ResumeMove(UGridPathFollowingComponent *this,FAIRequestID param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  INavMovementInterface *pIVar4;
  double *pdVar5;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_40;
  undefined1 local_28 [32];
  
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return;
  }
  if (param_1.RequestID != 0xffffffff) {
    if (((param_1.RequestID != uVar1) && (param_1.RequestID != 0)) && (uVar1 != 0)) {
      return;
    }
    if ((this->_padding_ == 0) ||
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), !bVar3)) {
      pdVar5 = &local_58;
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      pIVar4 = TWeakInterfacePtr<INavMovementInterface>::operator->
                         ((TWeakInterfacePtr<INavMovementInterface> *)&this->_padding_);
      pdVar5 = (double *)(**(code **)((longlong)*pIVar4 + 0x80))(pIVar4,local_28);
    }
    local_40._s_0.X = *pdVar5;
    local_40._s_0.Y = pdVar5[1];
    local_40._s_0.Z = pdVar5[2];
    UpdateActiveGrid(this,(TVector<double> *)&local_40._s_0);
    if (this->ActiveGridIdx == -1) {
      UPathFollowingComponent::ResumeMove
                ((UPathFollowingComponent *)this,FAIRequestID::CurrentRequest);
    }
    else {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->_padding_,(FName *)&LogPathFollowing.field_0x4,Log,
                   L"ResumeMove: RequestID(%u) is on grid");
      }
      lVar2 = this->_padding_;
      *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
      if (((lVar2 & 0x10000000000000) != 0) && ((this->_padding_ & 0x100000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146fce00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x2b8))(this,0);
        return;
      }
    }
    return;
  }
  return;
}

// StaticRegisterNativesUGridPathFollowingComponent @ 146fd36e0

void __cdecl UGridPathFollowingComponent::StaticRegisterNativesUGridPathFollowingComponent(void)

{
  return;
}

// UpdateActiveGrid @ 146fde220

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
UGridPathFollowingComponent::UpdateActiveGrid
          (UGridPathFollowingComponent *this,TVector<double> *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  UNavLocalGridManager *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_protected:_void___cdecl_UGridPathFollowingComponent::UpdateActiveGrid(UE::Math::TVector<double>_const_&)_::_2_::FStat_STAT_GridUpdate>
  FVar18;
  FNavLocalGridData *this_00;
  FNavigationPath *this_01;
  TVector<double> *pTVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  double dVar27;
  undefined1 auStackY_258 [32];
  FName local_1f0;
  FColor_u_0 local_1e0 [2];
  FName local_1d8;
  FName local_1d0;
  FNavLocalGridData *local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  FName local_170;
  FName local_168;
  TVector<double> local_160;
  TVector<double> local_148;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar22 = 0;
  uVar23 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_GridUpdate ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_UGridPathFollowingComponent::UpdateActiveGrid(UE::Math::TVector<double>_const_&)_::_2_::FStat_STAT_GridUpdate>
         )0x0) {
      pFVar17 = ::FName::FName(&local_170,"STAT_GridUpdate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridUpdate,*pFVar17,
                 L"NavGrid: UpdateActive","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true,ST_int64
                 ,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_GridUpdate;
  if (StatPtr_STAT_GridUpdate ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UGridPathFollowingComponent::UpdateActiveGrid(UE::Math::TVector<double>_const_&)_::_2_::FStat_STAT_GridUpdate>
       )0x0) {
    pFVar17 = ::FName::FName(&local_168,"STAT_GridUpdate");
    FVar18 = (FThreadSafeStaticStat<_protected:_void___cdecl_UGridPathFollowingComponent::UpdateActiveGrid(UE::Math::TVector<double>_const_&)_::_2_::FStat_STAT_GridUpdate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GridUpdate,*pFVar17,
                          L"NavGrid: UpdateActive","STATGROUP_AI","STATCAT_Advanced",L"AI",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  local_1f0 = *(FName *)FVar18;
  bVar9 = false;
  bVar10 = false;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((local_1f0.ComparisonIndex.Value.Value != 0) || (local_1f0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e0[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = local_1f0.ComparisonIndex.Value.Value;
        local_1d8.Number = local_1f0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Navigation\\GridPathFollowingComponent.cpp"
                   ,0x73);
        bVar9 = true;
        bVar10 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_1f0,CycleScopeStart);
      bVar13 = true;
      goto LAB_146fde3cb;
    }
  }
  bVar10 = bVar14;
  bVar9 = bVar13;
  bVar13 = false;
  local_1f0 = local_1d0;
LAB_146fde3cb:
  pUVar3 = (this->GridManager).field0_0x0.DebugPtr;
  if ((pUVar3 != (UNavLocalGridManager *)0x0) && (this->_padding_ != 0)) {
    iVar15 = UNavLocalGridManager::GetGridIndex(pUVar3,param_1);
    if (iVar15 == -1) {
      this->bHasGridPath = 0;
      this->ActiveGridIdx = -1;
      this->ActiveGridId = -1;
    }
    else {
      this_00 = UNavLocalGridManager::GetGridData((this->GridManager).field0_0x0.DebugPtr,iVar15);
      local_1c0 = this_00;
      if (this->ActiveGridId != this_00->GridId) {
        pUVar3 = (this->GridManager).field0_0x0.DebugPtr;
        this->ActiveGridId = this_00->GridId;
        this->ActiveGridIdx = iVar15;
        UNavLocalGridManager::UpdateAccessTime(pUVar3,iVar15);
        pTVar1 = &this->GridPathPoints;
        FNavLocalGridData::FindPathForMovingAgent
                  (this_00,(FNavigationPath *)this->_padding_,param_1,(int)this->_padding_,pTVar1,
                   &this->MoveSegmentStartIndexOffGrid);
        this->bHasGridPath = 0;
        iVar15 = (this->GridPathPoints).ArrayNum;
        uVar16 = uVar23;
        if (1 < iVar15) {
          uVar16 = 2;
        }
        *(uint *)&this->field_0x338 = *(uint *)&this->field_0x338 | uVar16;
        if (1 < iVar15) {
          uVar26 = 1;
          this->GridMoveSegmentEndIndex = 1;
          this_01 = TSharedPtr<FNavigationPath,1>::operator->
                              ((TSharedPtr<FNavigationPath,1> *)&this->_padding_);
          pTVar19 = FNavigationPath::GetEndLocation(this_01,&local_160);
          iVar15 = TSimpleCellGrid<unsigned_char,255>::GetCellIndex
                             ((TSimpleCellGrid<unsigned_char,255> *)this_00,pTVar19);
          uVar16 = this->GridMoveSegmentEndIndex;
          this->bIsPathEndInsideGrid = 0;
          *(uint *)&this->field_0x338 = *(uint *)&this->field_0x338 | (uint)(iVar15 != -1);
          uVar20 = uVar23;
          if ((int)uVar16 < (this->GridPathPoints).ArrayNum) {
            uVar20 = ~uVar16 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FBasedPosition::Set((FBasedPosition *)&this->_padding_,(AActor *)0x0,
                              (TVector<double> *)
                              ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x18));
          if (((this->GridPathPoints).ArrayNum < 2) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (pTVar1->AllocatorInstance).Data;
          if (((this->GridPathPoints).ArrayNum < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          local_1b8._s_0.X = *(double *)(pFVar4 + 0x18) - *(double *)pFVar5;
          local_1b8._s_0.Y = *(double *)(pFVar4 + 0x20) - *(double *)(pFVar5 + 8);
          local_1b8._s_0.Z = *(double *)(pFVar4 + 0x28) - *(double *)(pFVar5 + 0x10);
          pTVar19 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_1b8._s_0,&local_148,__real_3e45798ee0000000
                               ,&UE::Math::TVector<double>::ZeroVector);
          dVar8 = (pTVar19->field0_0x0)._s_0.Y;
          this->_padding_ = (longlong)(pTVar19->field0_0x0)._s_0.X;
          this->_padding_ = (longlong)dVar8;
          this->_padding_ = (longlong)(pTVar19->field0_0x0)._s_0.Z;
          (**(code **)(this->_padding_ + 0x630))(this);
          dVar11 = __real_4034000000000000;
          dVar27 = __real_4014000000000000;
          dVar8 = __real_4024000000000000;
          if ((FVisualLogger::bIsRecording != 0) &&
             (FVisualLogger::BoxLogfImpl
                        ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Verbose,
                         (TBox<double> *)&this_00->_padding_,&UE::Math::TMatrix<double>::Identity,
                         &FColor::Cyan,false,L""), FVisualLogger::bIsRecording != 0)) {
            if (((this->GridPathPoints).ArrayNum < 1) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            local_130._s_0.X = *(double *)pFVar4 - dVar27;
            local_100 = 1;
            local_130._s_0.Y = *(double *)(pFVar4 + 8) - dVar27;
            local_118 = *(double *)pFVar4 + dVar27;
            local_110 = *(double *)(pFVar4 + 8) + dVar27;
            local_130._s_0.Z = *(double *)(pFVar4 + 0x10) + dVar8;
            local_108 = *(double *)(pFVar4 + 0x10) + dVar11;
            FVisualLogger::BoxLogfImpl
                      ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                       (TBox<double> *)&local_130._s_0,&UE::Math::TMatrix<double>::Identity,
                       &FColor::Yellow,false,L"");
          }
          dVar12 = __real_402e000000000000;
          if (1 < (this->GridPathPoints).ArrayNum) {
            lVar25 = 0x18;
            do {
              if (FVisualLogger::bIsRecording != 0) {
                uVar16 = uVar23;
                if ((int)uVar26 < (this->GridPathPoints).ArrayNum) {
                  uVar16 = ~uVar26 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar4 = (pTVar1->AllocatorInstance).Data;
                local_f8._s_0.X = *(double *)(pFVar4 + lVar25) - dVar27;
                local_c8 = 1;
                local_f8._s_0.Y = *(double *)(pFVar4 + lVar25 + 8) - dVar27;
                local_e0 = *(double *)(pFVar4 + lVar25) + dVar27;
                local_d8 = *(double *)(pFVar4 + lVar25 + 8) + dVar27;
                local_f8._s_0.Z = *(double *)(pFVar4 + lVar25 + 0x10) + dVar8;
                local_d0 = *(double *)(pFVar4 + lVar25 + 0x10) + dVar11;
                FVisualLogger::BoxLogfImpl
                          ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                           (TBox<double> *)&local_f8._s_0,&UE::Math::TMatrix<double>::Identity,
                           &FColor::Yellow,false,L"");
              }
              if (FVisualLogger::bIsRecording != 0) {
                uVar16 = 0;
                if ((int)uVar26 < (this->GridPathPoints).ArrayNum) {
                  uVar16 = ~uVar26 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (pTVar1->AllocatorInstance).Data;
                pFVar4 = pFVar5 + (longlong)(int)uVar26 * 0x18;
                local_1a0._s_0.X = (double)*(undefined8 *)pFVar4;
                local_1a0._s_0.Y = (double)*(undefined8 *)(pFVar4 + 8);
                local_1a0._s_0.Z =
                     *(double *)(pFVar5 + (longlong)(int)uVar26 * 0x18 + 0x10) + dVar12;
                uVar16 = 0;
                if ((int)(uVar26 - 1) < (this->GridPathPoints).ArrayNum) {
                  uVar16 = -uVar26 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (pTVar1->AllocatorInstance).Data;
                pFVar4 = pFVar5 + lVar25 + -0x18;
                local_188._s_0.X = (double)*(undefined8 *)pFVar4;
                local_188._s_0.Y = (double)*(undefined8 *)(pFVar4 + 8);
                local_188._s_0.Z = *(double *)(pFVar5 + lVar25 + -8) + dVar12;
                FVisualLogger::SegmentLogfImpl
                          ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                           (TVector<double> *)&local_188._s_0,(TVector<double> *)&local_1a0._s_0,
                           &FColor::Yellow,3,L"");
              }
              uVar26 = uVar26 + 1;
              lVar25 = lVar25 + 0x18;
              this_00 = local_1c0;
            } while ((int)uVar26 < (this->GridPathPoints).ArrayNum);
          }
          dVar8 = __real_3fe0000000000000;
          uVar24 = uVar22;
          if (0 < (int)this_00->_padding_) {
            do {
              if ((*(char *)(uVar22 + this_00->_padding_) != '\0') &&
                 (FVisualLogger::bIsRecording != 0)) {
                fVar2 = *(float *)&this_00->_padding_;
                uVar6 = (ulonglong)*(uint *)((longlong)&this_00->_padding_ + 4);
                dVar27 = (double)this_00->_padding_ * dVar8;
                iVar15 = (int)(uVar24 / uVar6);
                local_90 = 1;
                iVar21 = (int)(uVar24 % uVar6);
                local_c0._s_0.X = (double)((float)iVar15 * fVar2) + (double)this_00->_padding_;
                local_98 = (double)this_00->_padding_ + dVar27;
                local_c0._s_0.Y = (double)((float)iVar21 * fVar2) + (double)this_00->_padding_;
                local_c0._s_0.Z = (double)this_00->_padding_ - dVar27;
                local_a8 = (double)((float)(iVar15 + 1) * fVar2) + (double)this_00->_padding_;
                local_a0 = (double)((float)(iVar21 + 1) * fVar2) + (double)this_00->_padding_;
                FVisualLogger::BoxLogfImpl
                          ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Verbose,
                           (TBox<double> *)&local_c0._s_0,&UE::Math::TMatrix<double>::Identity,
                           &FColor::Red,false,L"");
              }
              uVar23 = (int)uVar24 + 1;
              uVar22 = uVar22 + 1;
              uVar24 = (ulonglong)uVar23;
            } while ((int)uVar23 < (int)this_00->_padding_);
          }
        }
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(local_1f0,CycleScopeEnd);
  }
  return;
}

// UpdatePathSegment @ 146fe18a0

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

void __thiscall UGridPathFollowingComponent::UpdatePathSegment(UGridPathFollowingComponent *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_118 [32];
  ushort local_d8;
  undefined1 local_d6;
  ushort local_d4;
  undefined1 local_d2;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88 [24];
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->_padding_ != 0) {
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar8) {
      if (this->_padding_ == 0) {
LAB_146fe18f5:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
        if (!bVar8) goto LAB_146fe18f5;
      }
      pdVar11 = (double *)
                (**(code **)(*(longlong *)this->_padding_ + 0x80))
                          ((longlong *)this->_padding_,local_88);
      goto LAB_146fe194d;
    }
  }
  pdVar11 = &local_a0;
  local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_146fe194d:
  local_d0._s_0.X = *pdVar11;
  local_d0._s_0.Y = pdVar11[1];
  local_d0._s_0.Z = pdVar11[2];
  UpdateActiveGrid(this,(TVector<double> *)&local_d0._s_0);
  if ((this->ActiveGridIdx == -1) || (this->bHasGridPath == 0)) {
    iVar10 = (this->GridPathPoints).ArrayNum;
    if (iVar10 != 0) {
      pcVar4 = *(code **)(this->_padding_ + 0x5f8);
      uVar16 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar16 = ~(iVar10 - 1U) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      cVar9 = (*pcVar4)(this,(this->GridPathPoints).AllocatorInstance.Data +
                             (longlong)((this->GridPathPoints).ArrayNum + -1) * 0x18);
      if (cVar9 != '\0') {
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                     L"Leaving grid and resuming path from segment %d");
        }
        (**(code **)(this->_padding_ + 0x538))(this);
        (**(code **)(this->_padding_ + 0x5c0))(this,this->MoveSegmentStartIndexOffGrid);
      }
      this->bHasGridPath = 0;
      piVar1 = &(this->GridPathPoints).ArrayMax;
      (this->GridPathPoints).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->GridPathPoints).AllocatorInstance,0,piVar1);
      }
    }
    UPathFollowingComponent::UpdatePathSegment((UPathFollowingComponent *)this);
  }
  else {
    cVar9 = (**(code **)(this->_padding_ + 0x5f0))(this,&local_d0);
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(this->_padding_ + 0x5f8))(this,&local_d0);
      if (cVar9 != '\0') {
        iVar10 = this->GridMoveSegmentEndIndex + 1;
        this->GridMoveSegmentEndIndex = iVar10;
        if ((iVar10 < 0) || ((this->GridPathPoints).ArrayNum <= iVar10)) {
          if (this->bIsPathEndInsideGrid == 0) {
            if (FVisualLogger::bIsRecording != 0) {
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                         L"Last grid segment reached, resuming path from segment %d");
            }
            piVar1 = &(this->GridPathPoints).ArrayMax;
            (this->GridPathPoints).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,&(this->GridPathPoints).AllocatorInstance,0,piVar1);
            }
            this->bHasGridPath = 0;
            (**(code **)(this->_padding_ + 0x538))(this);
            (**(code **)(this->_padding_ + 0x5c0))(this,this->MoveSegmentStartIndexOffGrid);
          }
          else {
            if (FVisualLogger::bIsRecording != 0) {
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                         L"Last grid segment reached, finishing move");
            }
            (**(code **)(this->_padding_ + 0x538))(this);
            local_d4 = CodeLookup[0];
            local_d2 = 0;
            (**(code **)(this->_padding_ + 0x530))(this,&local_d4);
          }
        }
        else {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                       L"Switching to next segment in grid path");
            if (FVisualLogger::bIsRecording != 0) {
              uVar16 = this->GridMoveSegmentEndIndex;
              lVar15 = (longlong)(int)uVar16;
              uVar14 = 0;
              if ((int)uVar16 < (this->GridPathPoints).ArrayNum) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if (uVar14 == 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              pFVar2 = (this->GridPathPoints).AllocatorInstance.Data;
              local_58._s_0.X = *(double *)(pFVar2 + lVar15 * 0x18) - __real_4014000000000000;
              local_28 = 1;
              local_58._s_0.Z = *(double *)(pFVar2 + lVar15 * 0x18 + 0x10) - __real_4014000000000000
              ;
              local_40 = *(double *)(pFVar2 + lVar15 * 0x18) + __real_4014000000000000;
              local_30 = *(double *)(pFVar2 + lVar15 * 0x18 + 0x10) + __real_4014000000000000;
              local_58._s_0.Y = *(double *)(pFVar2 + lVar15 * 0x18 + 8) - __real_4014000000000000;
              local_38 = *(double *)(pFVar2 + lVar15 * 0x18 + 8) + __real_4014000000000000;
              FVisualLogger::BoxLogfImpl
                        ((UObject *)this,(FName *)&LogPathFollowing.field_0x4,Log,
                         (TBox<double> *)&local_58._s_0,&UE::Math::TMatrix<double>::Identity,
                         &FColor::Red,false,L"next corner");
            }
          }
          uVar16 = this->GridMoveSegmentEndIndex;
          uVar14 = 0;
          if ((int)uVar16 < (this->GridPathPoints).ArrayNum) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FBasedPosition::Set((FBasedPosition *)&this->_padding_,(AActor *)0x0,
                              (TVector<double> *)
                              ((this->GridPathPoints).AllocatorInstance.Data +
                              (longlong)(int)uVar16 * 0x18));
          uVar16 = this->GridMoveSegmentEndIndex;
          lVar15 = (longlong)(int)uVar16;
          uVar14 = 0;
          if ((int)uVar16 < (this->GridPathPoints).ArrayNum) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar2 = (this->GridPathPoints).AllocatorInstance.Data;
          uVar14 = this->GridMoveSegmentEndIndex - 1;
          uVar16 = 0;
          if ((int)uVar14 < (this->GridPathPoints).ArrayNum) {
            uVar16 = ~uVar14 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          lVar12 = (longlong)(int)uVar14;
          pFVar3 = (this->GridPathPoints).AllocatorInstance.Data;
          local_b8._s_0.X =
               *(double *)(pFVar2 + lVar15 * 0x18) - *(double *)(pFVar3 + lVar12 * 0x18);
          local_b8._s_0.Y =
               *(double *)(pFVar2 + lVar15 * 0x18 + 8) - *(double *)(pFVar3 + lVar12 * 0x18 + 8);
          local_b8._s_0.Z =
               *(double *)(pFVar2 + lVar15 * 0x18 + 0x10) -
               *(double *)(pFVar3 + lVar12 * 0x18 + 0x10);
          pTVar13 = UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_b8._s_0,&local_70,__real_3e45798ee0000000,
                               &UE::Math::TVector<double>::ZeroVector);
          uVar5 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 4);
          uVar6 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 8);
          uVar7 = *(undefined4 *)((longlong)&pTVar13->field0_0x0 + 0xc);
          *(undefined4 *)&this->_padding_ = *(undefined4 *)&pTVar13->field0_0x0;
          *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
          *(undefined4 *)&this->_padding_ = uVar6;
          *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
          this->_padding_ = (longlong)(pTVar13->field0_0x0)._s_0.Z;
          (**(code **)(this->_padding_ + 0x630))(this);
        }
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x538))();
      local_d8 = CodeLookup[0];
      local_d6 = 0;
      (**(code **)(this->_padding_ + 0x530))(this,&local_d8);
    }
  }
  return;
}

