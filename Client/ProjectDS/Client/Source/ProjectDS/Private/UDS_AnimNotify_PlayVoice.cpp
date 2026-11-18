// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4167b0

UClass * __cdecl UDS_AnimNotify_PlayVoice::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlayVoice",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlayVoice,0x70,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_AnimNotify_PlayVoice>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlayVoice>,local_res8,
               UDS_AnimNotify_PlaySound::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton;
}

// UDS_AnimNotify_PlayVoice @ 14b41b700

UDS_AnimNotify_PlayVoice * __thiscall
UDS_AnimNotify_PlayVoice::UDS_AnimNotify_PlayVoice
          (UDS_AnimNotify_PlayVoice *this,FVTableHelper *param_1)

{
  FWeakObjectPtr *this_00;
  undefined8 local_res8 [4];
  
  UAnimNotify_PlaySound::UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_res8);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlayVoice__6B_;
  return this;
}

// UDS_AnimNotify_PlayVoice @ 14b41b750

UDS_AnimNotify_PlayVoice * __thiscall
UDS_AnimNotify_PlayVoice::UDS_AnimNotify_PlayVoice(UDS_AnimNotify_PlayVoice *this)

{
  FWeakObjectPtr *this_00;
  undefined8 local_res8 [4];
  
  UAnimNotify_PlaySound::UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  this_00 = (FWeakObjectPtr *)((longlong)&this->_padding_ + 4);
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)local_res8);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlayVoice__6B_;
  return this;
}

// ~UDS_AnimNotify_PlayVoice @ 14b41bcd0

void __thiscall UDS_AnimNotify_PlayVoice::~UDS_AnimNotify_PlayVoice(UDS_AnimNotify_PlayVoice *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify_PlaySound__6B_;
  UAnimNotify_PlaySound::~UAnimNotify_PlaySound((UAnimNotify_PlaySound *)this);
  return;
}

// GetPrivateStaticClass @ 14b41dfd0

UClass * __cdecl UDS_AnimNotify_PlayVoice::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlayVoice",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlayVoice,0x70,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UDS_AnimNotify_PlayVoice>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlayVoice>,local_res8,
               UDS_AnimNotify_PlaySound::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlayVoice.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_PlayVoice @ 14b41e2e0

void __cdecl UDS_AnimNotify_PlayVoice::StaticRegisterNativesUDS_AnimNotify_PlayVoice(void)

{
  return;
}

// Notify @ 14b8d3310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_PlayVoice::Notify
          (UDS_AnimNotify_PlayVoice *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2
          ,FAnimNotifyEventReference *param_3)

{
  uchar uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  FName *pFVar9;
  float fVar10;
  FName local_res8;
  FWeakObjectPtr local_38;
  UObject *local_30 [3];
  
  UDS_AnimNotify_PlaySound::Notify((UDS_AnimNotify_PlaySound *)this,param_1,param_2,param_3);
  bVar5 = TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UAudioComponent,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (bVar5) {
    return;
  }
  pUVar6 = (UWorld *)param_1->_padding_;
  if ((pUVar6 == (UWorld *)0x0) &&
     (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar6 == (UWorld *)0x0)) {
    return;
  }
  uVar1 = (pUVar6->WorldType).Value;
  if ((uVar1 == '\x04') || (uVar1 == '\x02')) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    iVar3 = this->DefaultVoiceType;
    pcVar4 = *(code **)(*(longlong *)&pUVar8[0xe].field_0x20 + 0x30);
    pFVar9 = ::FName::FName(&local_res8,"Voice_Type");
    (*pcVar4)(&pUVar8[0xe].field_0x20,*pFVar9,iVar3);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    fVar10 = this->DefaultVoiceTone;
  }
  else {
    pUVar8 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_30[0] = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)local_30);
    pFVar7 = FDS_EntityBase::GetEntityBaseFromActor
                       ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res8);
    if (pFVar7 == (FDS_EntityBase *)0x0) {
      return;
    }
    UDS_CustomizeData::GetData((ulong64)&local_38,pFVar7->EntityID,false);
    bVar5 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (bVar5) {
      return;
    }
    pUVar8 = FWeakObjectPtr::Get(&local_38);
    uVar2 = *(undefined4 *)&pUVar8[2].field_0xc;
    pUVar8 = FWeakObjectPtr::Get(&local_38);
    fVar10 = *(float *)&pUVar8[2].field_0x10;
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    pcVar4 = *(code **)(*(longlong *)&pUVar8[0xe].field_0x20 + 0x30);
    pFVar9 = ::FName::FName(&local_res8,"Voice_Type");
    (*pcVar4)(&pUVar8[0xe].field_0x20,*pFVar9,uVar2);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  }
  pcVar4 = *(code **)(*(longlong *)&pUVar8[0xe].field_0x20 + 0x40);
  pFVar9 = ::FName::FName(&local_res8,"Voice_Tone");
  (*pcVar4)(&pUVar8[0xe].field_0x20,*pFVar9,fVar10);
  return;
}

