// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 1493176e0

UClass * __cdecl ANiagaraPerfBaselineActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPerfBaselineActor",
               &Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton,
               StaticRegisterNativesANiagaraPerfBaselineActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraPerfBaselineActor>,
               InternalVTableHelperCtorCaller<ANiagaraPerfBaselineActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton;
}

// ANiagaraPerfBaselineActor @ 149332040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPerfBaselineActor * __thiscall
ANiagaraPerfBaselineActor::ANiagaraPerfBaselineActor
          (ANiagaraPerfBaselineActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANiagaraPerfBaselineActor__6B_;
  (this->Controller).field0_0x0.DebugPtr = (UNiagaraBaselineController *)0x0;
  (this->Label).field0_0x0.DebugPtr = (UTextRenderComponent *)0x0;
  return this;
}

// ANiagaraPerfBaselineActor @ 149332080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPerfBaselineActor * __thiscall
ANiagaraPerfBaselineActor::ANiagaraPerfBaselineActor
          (ANiagaraPerfBaselineActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UTextRenderComponent *pUVar6;
  FText *pFVar7;
  TQuat<double> *pTVar8;
  FName local_res8;
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANiagaraPerfBaselineActor__6B_;
  (this->Controller).field0_0x0.DebugPtr = (UNiagaraBaselineController *)0x0;
  (this->Label).field0_0x0.DebugPtr = (UTextRenderComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"RootComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,L"LabelText");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UTextRenderComponent_NoRegister();
  pUVar6 = (UTextRenderComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UTextRenderComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->Label).field0_0x0.DebugPtr = pUVar6;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_48._s_0,L"NiagaraPerformanceBaselines",L"BaselineActorLabel",
                      L"Generating Niagara Baseline Stats");
  UTextRenderComponent::SetText(pUVar6,pFVar7);
  if ((longlong *)local_48._s_0.X != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_48._s_0.X + 0x10))();
  }
  UTextRenderComponent::SetWorldSize((this->Label).field0_0x0.DebugPtr,__real_42700000);
  local_48._s_0.X = ___xmm_40668000000000000000000000000000;
  local_48._s_0.Y = _UNK_15076bfd8;
  local_48._s_0.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((USceneComponent *)(this->Label).field0_0x0.DebugPtr,(TRotator<double> *)&local_48._s_0
             ,false,(FHitResult *)0x0,None);
  pUVar6 = (this->Label).field0_0x0.DebugPtr;
  local_48._s_0.X = ((TRotator<double> *)&pUVar6->_padding_)->Pitch;
  local_48._s_0.Y = (double)pUVar6->_padding_;
  local_48._s_0.Z = (double)pUVar6->_padding_;
  pTVar8 = FRotationConversionCache::RotatorToQuat
                     ((FRotationConversionCache *)&pUVar6->_padding_,&local_28,
                      (TRotator<double> *)&local_48._s_0);
  local_48._s_0.X = ___xmm_0000000000000000c06f400000000000;
  local_48._s_0.Y = _UNK_151df60e8;
  local_48._s_0.Z = __real_c059000000000000;
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)pUVar6,(TVector<double> *)&local_48._s_0,pTVar8,false,
             (FHitResult *)0x0,None);
  UTextRenderComponent::SetHorizontalAlignment((this->Label).field0_0x0.DebugPtr,EHTA_Center);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// ~ANiagaraPerfBaselineActor @ 149335f40

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
ANiagaraPerfBaselineActor::~ANiagaraPerfBaselineActor(ANiagaraPerfBaselineActor *this)

{
  this->_padding_ = (longlong)&___7ANiagaraPerfBaselineActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14933dc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPerfBaselineActor::BeginPlay(ANiagaraPerfBaselineActor *this)

{
  int *piVar1;
  int iVar2;
  UNiagaraBaselineController *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FParticlePerfStatsListener *pFVar9;
  UNiagaraBaselineController *local_res10;
  TSharedPtr<FParticlePerfStatsListener,1> local_28;
  
  AActor::BeginPlay((AActor *)this);
  pTVar7 = ::operator_new(0x2e8);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FParticlePerfStatsListener *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraPerfBaselineStatsListener___00_SharedPointerInternals__6B_
    ;
    pUVar3 = (this->Controller).field0_0x0.DebugPtr;
    pTVar7[1]._padding_ = (longlong)&___7FNiagaraPerfBaselineStatsListener__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNiagaraBaselineController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UNiagaraBaselineController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar7[2].SharedReferenceCount,(FObjectPtr)&local_res10);
    FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats
              ((FAccumulatedParticlePerfStats *)(pTVar7 + 3));
    pFVar9 = (FParticlePerfStatsListener *)(pTVar7 + 1);
    pTVar8 = pTVar7;
    if (pFVar9 == (FParticlePerfStatsListener *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14933ddb5;
    }
  }
  if (((*(longlong *)&pFVar9->field_0x8 == 0) || (*(longlong *)&pFVar9->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FParticlePerfStatsListener **)&pFVar9->field_0x8 = pFVar9;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pFVar9->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14933ddb5:
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar9;
  local_28.SharedReferenceCount.ReferenceController = pTVar8;
  FParticlePerfStatsManager::AddListener(&local_28,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// GetPrivateStaticClass @ 1493559d0

UClass * __cdecl ANiagaraPerfBaselineActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPerfBaselineActor",
               &Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton,
               StaticRegisterNativesANiagaraPerfBaselineActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraPerfBaselineActor>,
               InternalVTableHelperCtorCaller<ANiagaraPerfBaselineActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.InnerSingleton;
}

// StaticRegisterNativesANiagaraPerfBaselineActor @ 1493702a0

void __cdecl ANiagaraPerfBaselineActor::StaticRegisterNativesANiagaraPerfBaselineActor(void)

{
  return;
}

// TickActor @ 149371470

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
ANiagaraPerfBaselineActor::TickActor
          (ANiagaraPerfBaselineActor *this,float param_1,ELevelTick param_2,
          FActorTickFunction *param_3)

{
  UNiagaraBaselineController *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  float local_res8 [2];
  
  this_00 = (this->Controller).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraBaselineController *)0x0) {
    this_01 = UObject::FindFunctionChecked
                        ((UObject *)this_00,NAME_UNiagaraBaselineController_OnOwnerTick);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_res8[0] = param_1;
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,local_res8);
    }
    else {
      (**(code **)(this_00->_padding_ + 0x2b0))(this_00,param_1);
    }
  }
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  return;
}

