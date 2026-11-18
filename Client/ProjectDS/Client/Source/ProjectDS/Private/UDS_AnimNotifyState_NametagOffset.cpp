// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4169b0

UClass * __cdecl UDS_AnimNotifyState_NametagOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_NametagOffset",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_NametagOffset,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_NametagOffset>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_NametagOffset>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton;
}

// UDS_AnimNotifyState_NametagOffset @ 14b41b100

UDS_AnimNotifyState_NametagOffset * __thiscall
UDS_AnimNotifyState_NametagOffset::UDS_AnimNotifyState_NametagOffset
          (UDS_AnimNotifyState_NametagOffset *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_NametagOffset__6B_;
  this->AccTime = 0.0;
  this->TotalTime = 0.0;
  this->DestZOfset = 0.0;
  return this;
}

// UDS_AnimNotifyState_NametagOffset @ 14b41b130

UDS_AnimNotifyState_NametagOffset * __thiscall
UDS_AnimNotifyState_NametagOffset::UDS_AnimNotifyState_NametagOffset
          (UDS_AnimNotifyState_NametagOffset *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState_NametagOffset__6B_;
  this->AccTime = 0.0;
  this->TotalTime = 0.0;
  this->DestZOfset = 0.0;
  return this;
}

// ~UDS_AnimNotifyState_NametagOffset @ 14b41bab0

void __thiscall
UDS_AnimNotifyState_NametagOffset::~UDS_AnimNotifyState_NametagOffset
          (UDS_AnimNotifyState_NametagOffset *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotifyState__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d490

UClass * __cdecl UDS_AnimNotifyState_NametagOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotifyState_NametagOffset",
               &Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotifyState_NametagOffset,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotifyState_NametagOffset>,
               InternalVTableHelperCtorCaller<UDS_AnimNotifyState_NametagOffset>,local_res8,
               UDS_AnimNotifyState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotifyState_NametagOffset.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotifyState_NametagOffset @ 14b41e1c0

void __cdecl
UDS_AnimNotifyState_NametagOffset::StaticRegisterNativesUDS_AnimNotifyState_NametagOffset(void)

{
  return;
}

// NotifyBegin @ 14b8d3830

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
UDS_AnimNotifyState_NametagOffset::NotifyBegin
          (UDS_AnimNotifyState_NametagOffset *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UObject *pUVar4;
  FName *pFVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_58;
  UObject *local_50;
  FName local_48;
  undefined1 local_40 [16];
  double local_30;
  
  this->TotalTime = param_3;
  this->AccTime = 0.0;
  pUVar4 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_50 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_50);
  pFVar3 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8)
  ;
  if (pFVar3 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3);
    bVar2 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_58,
                       (void *)0x0);
    if (!bVar2) {
      (**(code **)(pFVar3->_padding_ + 0x170))(pFVar3,&local_res10);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        this->StartLocationZ = (float)*(double *)&pUVar4[0xd].field_0x18;
        pUVar4 = FWeakObjectPtr::Get(&local_58);
        pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x528);
        pFVar5 = ::FName::FName(&local_48,L"NameTag");
        (*pcVar1)(pUVar4,local_40,*pFVar5);
        this->DestZOfset =
             (float)(((double)this->ZOffset + local_30) - (double)this->StartLocationZ);
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5962052461031063582>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\NotifyState\\DS_AnimNotifyState_NametagOffset.cpp"
                           ,0x1e,"nameTagUIComponent.IsValid()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// NotifyEnd @ 14b8d3c30

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
UDS_AnimNotifyState_NametagOffset::NotifyEnd
          (UDS_AnimNotifyState_NametagOffset *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  USceneComponent *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_98;
  UObject *local_90;
  undefined1 local_88 [16];
  double local_78;
  FName local_70;
  TVector<double>_u_0 local_68 [4];
  
  pUVar7 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_90 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_90);
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (pFVar6 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6);
    bVar5 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_98,
                       (void *)0x0);
    if (!bVar5) {
      (**(code **)(pFVar6->_padding_ + 0x170))(pFVar6,&local_res20);
      bVar5 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar5) {
        pUVar7 = FWeakObjectPtr::Get(&local_98);
        pcVar1 = *(code **)(*(longlong *)pUVar7 + 0x528);
        ::FName::FName(&local_70,L"NameTag");
        (*pcVar1)(pUVar7,local_88);
        local_78 = local_78 + (double)this->ZOffset;
        pUVar7 = FWeakObjectPtr::Get(&local_res20);
        dVar4 = local_78;
        dVar2 = *(double *)&pUVar7[0xd].field_0x8;
        dVar3 = *(double *)&pUVar7[0xd].field_0x10;
        this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_res20);
        local_68[0]._s_0.Z = dVar4;
        local_68[0]._0_8_ = dVar2;
        local_68[0]._8_8_ = dVar3;
        USceneComponent::SetWorldLocation
                  (this_00,(TVector<double> *)&local_68[0]._s_0,false,(FHitResult *)0x0,None);
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5962052461031063632>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\NotifyState\\DS_AnimNotifyState_NametagOffset.cpp"
                           ,0x50,"nameTagUIComponent.IsValid()");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// NotifyTick @ 14b8d3e60

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
UDS_AnimNotifyState_NametagOffset::NotifyTick
          (UDS_AnimNotifyState_NametagOffset *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FDS_EntityBase *pFVar8;
  UObject *pUVar9;
  USceneComponent *this_00;
  float fVar10;
  FWeakObjectPtr local_res10 [3];
  FWeakObjectPtr local_78;
  UObject *local_70;
  TVector<double>_u_0 local_68 [4];
  
  pUVar9 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_70 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_70);
  pFVar8 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
  if (pFVar8 != (FDS_EntityBase *)0x0) {
    (**(code **)(pFVar8->_padding_ + 0x170))(pFVar8,&local_78);
    bVar7 = FWeakObjectPtr::IsValid(&local_78);
    if (bVar7) {
      fVar10 = param_3 + this->AccTime;
      fVar1 = this->DestZOfset;
      fVar2 = this->TotalTime;
      this->AccTime = fVar10;
      fVar3 = this->StartLocationZ;
      pUVar9 = FWeakObjectPtr::Get(&local_78);
      dVar5 = *(double *)&pUVar9[0xd].field_0x8;
      dVar6 = *(double *)&pUVar9[0xd].field_0x10;
      this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_78);
      local_68[0]._0_8_ = dVar5;
      local_68[0]._8_8_ = dVar6;
      local_68[0]._16_8_ = (double)((fVar1 / fVar2) * fVar10 + fVar3);
      USceneComponent::SetWorldLocation
                (this_00,(TVector<double> *)&local_68[0]._s_0,false,(FHitResult *)0x0,None);
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5962052461031063602>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\NotifyState\\DS_AnimNotifyState_NametagOffset.cpp"
                         ,0x32,"nameTagUIComponent.IsValid()");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

