// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b416cf0

UClass * __cdecl ADS_AI_GYM_SyncActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_SyncActor",
               &Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_SyncActor,800,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_AI_GYM_SyncActor>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_SyncActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton;
}

// ADS_AI_GYM_SyncActor @ 14b41a9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_AI_GYM_SyncActor * __thiscall
ADS_AI_GYM_SyncActor::ADS_AI_GYM_SyncActor(ADS_AI_GYM_SyncActor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_AI_GYM_SyncActor__6B_;
  (this->DamageWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DebugWidgetComponent).field0_0x0.DebugPtr = (UWidgetComponent *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->RootLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->RootLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->EntityID = 1;
  (this->EntityActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EntityActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->DebugWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DebugWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OwnerGameMode).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerGameMode).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~ADS_AI_GYM_SyncActor @ 14b41b920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::~ADS_AI_GYM_SyncActor(ADS_AI_GYM_SyncActor *this)

{
  this->_padding_ = (longlong)&___7ADS_AI_GYM_SyncActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cd10

UClass * __cdecl ADS_AI_GYM_SyncActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_SyncActor",
               &Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_SyncActor,800,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_AI_GYM_SyncActor>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_SyncActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_SyncActor.InnerSingleton;
}

// StaticRegisterNativesADS_AI_GYM_SyncActor @ 14b41e120

void __cdecl ADS_AI_GYM_SyncActor::StaticRegisterNativesADS_AI_GYM_SyncActor(void)

{
  return;
}

// ADS_AI_GYM_SyncActor @ 14b863bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_AI_GYM_SyncActor * __thiscall
ADS_AI_GYM_SyncActor::ADS_AI_GYM_SyncActor(ADS_AI_GYM_SyncActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  undefined8 uVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UWidgetComponent *this_00;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_AI_GYM_SyncActor__6B_;
  (this->DamageWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DebugWidgetComponent).field0_0x0.DebugPtr = (UWidgetComponent *)0x0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->RootLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RootLocationOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->RootLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->DamageWidgetLocationOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->EntityID = 1;
  (this->EntityActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EntityActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->DebugWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DebugWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->OwnerGameMode).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OwnerGameMode).WeakPtr,(FObjectPtr)&local_res8);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pFVar4 = ::FName::FName(&local_res8,"Root");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar6 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  this->_padding_ = (longlong)pUVar6;
  pFVar4 = ::FName::FName(&local_res8,"DebugWidget");
  FVar2 = *pFVar4;
  pUVar5 = Z_Construct_UClass_UWidgetComponent_NoRegister();
  this_00 = (UWidgetComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UWidgetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->DebugWidgetComponent).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  return this;
}

// AddDamageWidget @ 14b867de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::AddDamageWidget(ADS_AI_GYM_SyncActor *this,int *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UWidgetComponent *this_00;
  UWorld *pUVar9;
  UDS_AI_GYM_DamageWidget *pUVar10;
  FString *pFVar11;
  FTimerManager *this_01;
  longlong *plVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr local_1c8;
  undefined8 local_1c0;
  FName local_1b8;
  UClass *local_1b0;
  UWidgetComponent *local_1a8;
  ADS_AI_GYM_SyncActor *local_1a0;
  UWidgetComponent *local_198;
  FTimerHandle local_190;
  TVector<double>_u_0 local_188;
  TVector2<double>_u_0 local_168;
  FString local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined1 local_128 [128];
  code *local_a8;
  double local_98 [3];
  double *local_80;
  undefined1 local_78 [16];
  double local_68 [3];
  double *local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar8 = (this->DamageWidgetBP).Class.field0_0x0.DebugPtr;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UDS_AI_GYM_DamageWidget_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && ((this->DamageWidgetBP).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UWidgetComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_128,pUVar8);
      local_128._8_8_ = this;
      this_00 = (UWidgetComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
      if (local_128._64_8_ != 0) {
        plVar12 = (longlong *)(local_128 + 0x50);
        if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_128._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (this_00 != (UWidgetComponent *)0x0) {
        local_1c0 = 0;
        USceneComponent::SetupAttachment
                  ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
        local_168._s_0.X = ___xmm_40490000000000004059000000000000;
        local_168._s_0.Y = _UNK_151a801d8;
        this_00->Space = Screen;
        UWidgetComponent::SetDrawSize(this_00,(TVector2<double> *)&local_168._s_0);
        UActorComponent::RegisterComponent((UActorComponent *)this_00);
        local_1b0 = (this->DamageWidgetBP).Class.field0_0x0.DebugPtr;
        local_1b8.ComparisonIndex.Value = 0;
        local_1b8.Number = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1b0);
        }
        pUVar9 = AActor::GetWorld((AActor *)this);
        pUVar10 = CreateWidget<UDS_AI_GYM_DamageWidget,UWorld_*>
                            (pUVar9,(TSubclassOf<UUserWidget>)&local_1b0,local_1b8);
        if (pUVar10 != (UDS_AI_GYM_DamageWidget *)0x0) {
          (**(code **)(*(longlong *)this_00 + 0xb58))(this_00,pUVar10);
          pFVar11 = ::FString::FormatAsNumber(&local_158,*param_1);
          ::FString::operator=(&pUVar10->DamageString,pFVar11);
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          local_1d8.ObjectIndex = 0;
          local_1d8.ObjectSerialNumber = 0;
          local_1a8 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1a8);
          (pUVar10->OwnerWidgetComponent).WeakPtr = local_1d8;
          lVar2 = this->_padding_;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_98[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (lVar2 != 0) {
            local_148 = *(undefined4 *)(lVar2 + 0x210);
            uStack_144 = *(undefined4 *)(lVar2 + 0x214);
            uStack_140 = *(undefined4 *)(lVar2 + 0x218);
            uStack_13c = *(undefined4 *)(lVar2 + 0x21c);
            local_138 = *(double *)(lVar2 + 0x220);
            uVar15 = local_148;
            uVar16 = uStack_144;
            uVar17 = uStack_140;
            uVar18 = uStack_13c;
            local_98[0] = local_138;
          }
          local_188._s_0.X =
               (double)CONCAT44(uVar16,uVar15) +
               (this->DamageWidgetLocationOffset).field0_0x0._s_0.X;
          local_188._s_0.Y =
               (double)CONCAT44(uVar18,uVar17) +
               (this->DamageWidgetLocationOffset).field0_0x0._s_0.Y;
          local_188._s_0.Z = local_98[0] + (this->DamageWidgetLocationOffset).field0_0x0._s_0.Z;
          USceneComponent::SetWorldLocation
                    ((USceneComponent *)this_00,(TVector<double> *)&local_188._s_0,false,
                     (FHitResult *)0x0,None);
          local_190.Handle = 0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_1d0.ObjectIndex = 0;
          local_1d0.ObjectSerialNumber = 0;
          local_1a0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_1a0);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          local_1c8.ObjectIndex = 0;
          local_1c8.ObjectSerialNumber = 0;
          local_198 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_198);
          this_01 = FDS_TimerManager::Get((UObject *)0x0);
          FVar5 = local_1c8;
          FVar4 = local_1d0;
          local_a8 = (code *)0x0;
          local_50 = FMemory::Malloc(0x20,8);
          *local_50 = (double)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`ADS_AI_GYM_SyncActor::AddDamageWidget'::`2'::<lambda_1>,0,1>
                               ::_vftable_;
          *(FWeakObjectPtr *)(local_50 + 1) = FVar4;
          *(FWeakObjectPtr *)(local_50 + 2) = FVar5;
          local_50[3] = (double)this;
          local_78._0_8_ = local_a8;
          if ((FWeakObjectPtr *)(local_50 + 1) != (FWeakObjectPtr *)0x0) {
            local_78._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`ADS_AI_GYM_SyncActor::AddDamageWidget'::__l2::<lambda_1>,void>
                 ::Call;
          }
          local_68[0] = local_98[0];
          local_68[1] = local_98[1];
          local_80 = (double *)0x0;
          local_68[2] = local_98[2];
          local_a8 = (code *)0x0;
          local_48 = 3;
          FTimerManager::InternalSetTimer
                    (this_01,&local_190,(FTimerUnifiedDelegate *)local_78,__real_3fc00000,false,
                     __real_bf800000);
          uVar14 = (ulonglong)local_48;
          if ((3 < local_48) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14] ==
              UE::Core::Private::TDestructorCaller<TFunction<void___cdecl(void)>_>::Destruct) {
            if ((code *)local_78._0_8_ != (code *)0x0) {
              pdVar13 = local_68;
              if (local_50 != (double *)0x0) {
                pdVar13 = local_50;
              }
              (**(code **)((longlong)*pdVar13 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14])(local_78);
          }
          if (local_a8 != (code *)0x0) {
            pdVar13 = local_98;
            if (local_80 != (double *)0x0) {
              pdVar13 = local_80;
            }
            (**(code **)((longlong)*pdVar13 + 0x10))();
          }
        }
      }
    }
  }
  return;
}

// BeginPlay @ 14b869a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::BeginPlay(ADS_AI_GYM_SyncActor *this)

{
  int iVar1;
  UWidgetComponent *pUVar2;
  UClass *pUVar3;
  UObject *local_res8;
  
  AActor::BeginPlay((AActor *)this);
  pUVar2 = (this->DebugWidgetComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (UWidgetComponent *)0x0) {
    return;
  }
  local_res8 = (UObject *)(**(code **)(*(longlong *)pUVar2 + 0xb50))();
  if (local_res8 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_AI_GYM_DebugWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14b869a95;
  }
  local_res8 = (UObject *)0x0;
LAB_14b869a95:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->DebugWidget).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// EndPlay @ 14b86f230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::EndPlay(ADS_AI_GYM_SyncActor *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  ADS_AI_GYM_SyncActor *pAVar11;
  UClass *pUVar12;
  ADS_AI_GYM_SyncActor *pAVar13;
  longlong *plVar14;
  ADS_AI_GYM_SyncActor *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_AI_GYM_SyncActor *pAStack_148;
  ADS_AI_GYM_SyncActor *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_AI_GYM_SyncActor *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (ADS_AI_GYM_SyncActor *)0x0;
  pAVar15 = (ADS_AI_GYM_SyncActor *)0x0;
  pAVar11 = this;
  if (this == (ADS_AI_GYM_SyncActor *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (ADS_AI_GYM_SyncActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_AI_GYM_SyncActor *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_AI_GYM_SyncActor *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (ADS_AI_GYM_SyncActor *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_AI_GYM_SyncActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_AI_GYM_SyncActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// RemoveDamageWidget @ 14b898380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_SyncActor::RemoveDamageWidget(ADS_AI_GYM_SyncActor *this,UWidgetComponent *param_1)

{
  if (param_1 != (UWidgetComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b898390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x4a0))(param_1,0);
    return;
  }
  return;
}

// SetOwnerGameMode @ 14b899050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_SyncActor::SetOwnerGameMode
          (ADS_AI_GYM_SyncActor *this,TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> param_1)

{
  (this->OwnerGameMode).WeakPtr = param_1.WeakPtr;
  return;
}

// SyncLocationToEntityActor @ 14b89b430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::SyncLocationToEntityActor(ADS_AI_GYM_SyncActor *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar3;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->EntityActor,(void *)0x0);
  if (!bVar1) {
    pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->EntityActor).WeakPtr);
    if (pFVar2 != (FDS_EntityBase *)0x0) {
      UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
      bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,(void *)0x0)
      ;
      if (!bVar1) {
        this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
        pTVar3 = UDS_MovementCore::GetActorHeadLocation(this_00,&local_20);
        local_38._s_0.Z = (this->RootLocationOffset).field0_0x0._s_0.Z + (pTVar3->field0_0x0)._s_0.Z
        ;
        local_38._s_0.Y = (this->RootLocationOffset).field0_0x0._s_0.Y + (pTVar3->field0_0x0)._s_0.Y
        ;
        local_38._s_0.X = (pTVar3->field0_0x0)._s_0.X + (this->RootLocationOffset).field0_0x0._s_0.X
        ;
        AActor::SetActorLocation
                  ((AActor *)this,(TVector<double> *)&local_38._s_0,false,(FHitResult *)0x0,None);
      }
    }
  }
  return;
}

// Tick @ 14b89b500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::Tick(ADS_AI_GYM_SyncActor *this,float param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar3;
  UObject *pUVar4;
  UWidget *this_01;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  AActor::Tick((AActor *)this,param_1);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->EntityActor,(void *)0x0);
  if ((!bVar1) &&
     (pFVar2 = FDS_EntityBase::GetEntityBaseFromActor
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->EntityActor).WeakPtr),
     pFVar2 != (FDS_EntityBase *)0x0)) {
    UDS_MovementCore::GetMovementCore((ulong64)&local_res8);
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res8);
      pTVar3 = UDS_MovementCore::GetActorHeadLocation(this_00,(TVector<double> *)&local_48._s_0);
      local_28._s_0.Z = (this->RootLocationOffset).field0_0x0._s_0.Z + (pTVar3->field0_0x0)._s_0.Z;
      local_28._s_0.Y = (this->RootLocationOffset).field0_0x0._s_0.Y + (pTVar3->field0_0x0)._s_0.Y;
      local_28._s_0.X = (this->RootLocationOffset).field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X;
      AActor::SetActorLocation
                ((AActor *)this,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None);
    }
  }
  bVar1 = TWeakObjectPtr<UDS_AI_GYM_DebugWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugWidget,(void *)0x0);
  if (((!bVar1) && ((this->DebugWidgetComponent).field0_0x0.DebugPtr != (UWidgetComponent *)0x0)) &&
     (bVar1 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerGameMode,(void *)0x0), !bVar1)) {
    pUVar4 = FWeakObjectPtr::Get(&(this->OwnerGameMode).WeakPtr);
    if (*(char *)(pUVar4 + 0x16) == '\x01') {
      pUVar4 = FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,4);
      this_01 = (UWidget *)FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      UWidget::GetDesiredSize(this_01,(TVector2<double> *)&local_48._s_0);
      if ((local_48._s_0.X != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) ||
         (local_48._s_0.Y != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
        local_28._s_0.X = local_48._s_0.X;
        local_28._s_0.Y = local_48._s_0.Y;
        UWidgetComponent::SetDrawSize
                  ((this->DebugWidgetComponent).field0_0x0.DebugPtr,
                   (TVector2<double> *)&local_28._s_0);
      }
    }
    else {
      pUVar4 = FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,1);
    }
  }
  UpdateDebugWidget_Content(this);
  return;
}

// UpdateDebugWidget_Content @ 14b8a1d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::UpdateDebugWidget_Content(ADS_AI_GYM_SyncActor *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FDS_EntityBase *this_00;
  UObject *pUVar4;
  UDS_CharStatusData *pUVar5;
  int iVar6;
  float fVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar3 = TWeakObjectPtr<UDS_AI_GYM_DebugWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugWidget,(void *)0x0);
  if ((!bVar3) &&
     (this_00 = FDS_EntityBase::GetEntityBaseFromActor
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->EntityActor).WeakPtr),
     this_00 != (FDS_EntityBase *)0x0)) {
    FDS_EntityBase::GetCharInfoData(this_00);
    FDS_EntityBase::GetCharStatusData(this_00);
    bVar3 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if ((!bVar3) &&
       (bVar3 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0), !bVar3)) {
      ::FString::FString(&local_88,"");
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      ::FString::FString(&local_58,(FString *)&pUVar4[8].field_0x18);
      iVar6 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_88,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
      ::FString::AppendChars(&local_88,L"\r\n",2);
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      iVar6 = UDS_CharStatusData::GetCurrentStatus(pUVar5,Hp);
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      fVar7 = UDS_CharStatusData::GetMaxStatus(pUVar5,Hp);
      ::FString::FormatAsNumber(&local_38,(int)fVar7);
      ::FString::FormatAsNumber(&local_48,iVar6);
      ::FString::PrintfImpl(&local_68,L"[HP] %s / %s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_88,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar6);
      ::FString::AppendChars(&local_88,L"\r\n",2);
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      iVar6 = UDS_CharStatusData::GetCurrentStatus(pUVar5,Mp);
      pUVar5 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_res8);
      fVar7 = UDS_CharStatusData::GetMaxStatus(pUVar5,Mp);
      ::FString::FormatAsNumber(&local_48,(int)fVar7);
      ::FString::FormatAsNumber(&local_38,iVar6);
      ::FString::PrintfImpl(&local_78,L"[MP] %s / %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar6 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar6);
      pUVar4 = FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      _Src.Data = local_88.Data.AllocatorInstance.Data;
      puVar2 = &pUVar4[0x17].field_0x10;
      if ((FString *)puVar2 != &local_88) {
        puVar1 = &pUVar4[0x17].field_0x1c;
        *(int *)&pUVar4[0x17].field_0x18 = local_88.Data.ArrayNum;
        if ((local_88.Data.ArrayNum == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_88.Data.ArrayNum,*(int *)puVar1,(ForAnyElementType *)puVar2,
                     local_88.Data.ArrayNum,(int *)puVar1);
          if (local_88.Data.ArrayNum != 0) {
            memcpy(*(void **)puVar2,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
          }
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateDebugWidget_View @ 14b8a2050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_SyncActor::UpdateDebugWidget_View(ADS_AI_GYM_SyncActor *this)

{
  bool bVar1;
  UObject *pUVar2;
  UWidget *this_00;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  bVar1 = TWeakObjectPtr<UDS_AI_GYM_DebugWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugWidget,(void *)0x0);
  if (((!bVar1) && ((this->DebugWidgetComponent).field0_0x0.DebugPtr != (UWidgetComponent *)0x0)) &&
     (bVar1 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerGameMode,(void *)0x0), !bVar1)) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerGameMode).WeakPtr);
    if (*(char *)(pUVar2 + 0x16) == '\x01') {
      pUVar2 = FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,4);
      this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      UWidget::GetDesiredSize(this_00,(TVector2<double> *)&local_28._s_0);
      if ((local_28._s_0.X != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) ||
         (local_28._s_0.Y != UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
        local_18._s_0.X = local_28._s_0.X;
        local_18._s_0.Y = local_28._s_0.Y;
        UWidgetComponent::SetDrawSize
                  ((this->DebugWidgetComponent).field0_0x0.DebugPtr,
                   (TVector2<double> *)&local_18._s_0);
        return;
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&(this->DebugWidget).WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,1);
    }
  }
  return;
}

