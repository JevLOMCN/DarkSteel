// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b417f10

UClass * __cdecl UDS_AnimNotify_NametagOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_NametagOffset",
               &Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_NametagOffset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_NametagOffset>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_NametagOffset>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton;
}

// UDS_AnimNotify_NametagOffset @ 14b41b4c0

UDS_AnimNotify_NametagOffset * __thiscall
UDS_AnimNotify_NametagOffset::UDS_AnimNotify_NametagOffset
          (UDS_AnimNotify_NametagOffset *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_NametagOffset__6B_;
  return this;
}

// UDS_AnimNotify_NametagOffset @ 14b41b4f0

UDS_AnimNotify_NametagOffset * __thiscall
UDS_AnimNotify_NametagOffset::UDS_AnimNotify_NametagOffset
          (UDS_AnimNotify_NametagOffset *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_NametagOffset__6B_;
  return this;
}

// ~UDS_AnimNotify_NametagOffset @ 14b41bc30

void __thiscall
UDS_AnimNotify_NametagOffset::~UDS_AnimNotify_NametagOffset(UDS_AnimNotify_NametagOffset *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41dc10

UClass * __cdecl UDS_AnimNotify_NametagOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_NametagOffset",
               &Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_NametagOffset,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_NametagOffset>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_NametagOffset>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_NametagOffset.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_NametagOffset @ 14b41e290

void __cdecl UDS_AnimNotify_NametagOffset::StaticRegisterNativesUDS_AnimNotify_NametagOffset(void)

{
  return;
}

// Notify @ 14b8d2610

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
UDS_AnimNotify_NametagOffset::Notify
          (UDS_AnimNotify_NametagOffset *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FDS_EntityBase *pFVar6;
  UObject *pUVar7;
  USceneComponent *this_00;
  FWeakObjectPtr local_res10 [3];
  FWeakObjectPtr local_78;
  UObject *local_70;
  TVector<double>_u_0 local_68 [4];
  
  pUVar7 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_70 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_70);
  pFVar6 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10[0]);
  if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar6->EntityType != DummyCharacter)) {
    (**(code **)(pFVar6->_padding_ + 0x170))(pFVar6);
    bVar5 = FWeakObjectPtr::IsValid(&local_78);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&local_78);
      fVar1 = this->ZOffset;
      dVar3 = *(double *)&pUVar7[8].field_0x8;
      dVar4 = *(double *)&pUVar7[8].field_0x10;
      this_00 = (USceneComponent *)FWeakObjectPtr::Get(&local_78);
      local_68[0]._0_8_ = dVar3;
      local_68[0]._8_8_ = dVar4;
      local_68[0]._16_8_ = (double)fVar1;
      USceneComponent::SetRelativeLocation
                (this_00,(TVector<double> *)&local_68[0]._s_0,false,(FHitResult *)0x0,None);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4923509981375889437>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\Notify\\DS_AnimNotify_NametagOffset.cpp"
                         ,0x1d,"false");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

