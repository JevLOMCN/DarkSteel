// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 9

// StaticClass @ 14eca8c80

UClass * __cdecl ATestBeaconHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconHost",
               &Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton,
               StaticRegisterNativesATestBeaconHost,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconHost>,InternalVTableHelperCtorCaller<ATestBeaconHost>,
               local_res8,AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton;
}

// ATestBeaconHost @ 14ecacef0

ATestBeaconHost * __thiscall
ATestBeaconHost::ATestBeaconHost(ATestBeaconHost *this,FVTableHelper *param_1)

{
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  *(undefined ***)this = &___7ATestBeaconHost__6B_;
  return this;
}

// ATestBeaconHost @ 14ecacf20

ATestBeaconHost * __thiscall
ATestBeaconHost::ATestBeaconHost(ATestBeaconHost *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName local_res8;
  FString local_18;
  
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  *(undefined ***)this = &___7ATestBeaconHost__6B_;
  pUVar4 = ATestBeaconClient::StaticClass();
  lVar6 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    *(UClass **)&this->field_0x2d0 = pUVar4;
    if (pUVar4 == (UClass *)0x0) goto LAB_14ecacfaf;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    *(UClass **)&this->field_0x2d0 = pUVar4;
  }
  pUVar5 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = *(longlong *)&this->field_0x2d0;
    }
  }
LAB_14ecacfaf:
  local_res8 = *(FName *)(lVar6 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  puVar1 = &this->field_0x2c0;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x2c8 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x2cc = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~ATestBeaconHost @ 14ecadaa0

void __thiscall ATestBeaconHost::~ATestBeaconHost(ATestBeaconHost *this)

{
  *(undefined ***)this = &___7ATestBeaconHost__6B_;
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbb430

UClass * __cdecl ATestBeaconHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TestBeaconHost",
               &Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton,
               StaticRegisterNativesATestBeaconHost,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestBeaconHost>,InternalVTableHelperCtorCaller<ATestBeaconHost>,
               local_res8,AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestBeaconHost.InnerSingleton;
}

// Init @ 14ecbcef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ATestBeaconHost::Init(ATestBeaconHost *this)

{
  if (5 < (byte)LogBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
  }
  return true;
}

// OnClientConnected @ 14ecbeaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ATestBeaconHost::OnClientConnected
          (ATestBeaconHost *this,AOnlineBeaconClient *param_1,UNetConnection *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  AOnlineBeaconHostObject::OnClientConnected((AOnlineBeaconHostObject *)this,param_1,param_2);
  if (param_1 != (AOnlineBeaconClient *)0x0) {
    pUVar2 = ATestBeaconClient::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014ecbeb31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1->_padding_ + 0x7b8))(param_1);
      return;
    }
  }
  return;
}

// SpawnBeaconActor @ 14ecc9110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __thiscall
ATestBeaconHost::SpawnBeaconActor(ATestBeaconHost *this,UNetConnection *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_00;
  AOnlineBeaconClient *pAVar5;
  FString *pFVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_d8 [32];
  FString FStack_a8;
  FString FStack_98;
  undefined1 auStack_88 [112];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar2 = *(longlong *)&this->field_0x2d0;
  if ((lVar2 == 0) || (pUVar4 = AOnlineBeaconClient::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_14ec98d10:
    if (2 < (byte)LogBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
    return (AOnlineBeaconClient *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) || (*(longlong *)&this->field_0x2d0 == 0)) goto LAB_14ec98d10;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)auStack_88);
  this_00 = AActor::GetWorld((AActor *)this);
  lVar2 = *(longlong *)&this->field_0x2d0;
  if ((lVar2 != 0) && (pUVar4 = AOnlineBeaconClient::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar4 = *(UClass **)&this->field_0x2d0;
      goto LAB_14ec98c48;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14ec98c48:
  pAVar5 = (AOnlineBeaconClient *)
           UWorld::SpawnActor(this_00,pUVar4,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)auStack_88);
  if (pAVar5 == (AOnlineBeaconClient *)0x0) {
    pAVar5 = (AOnlineBeaconClient *)0x0;
  }
  else {
    pUVar4 = AOnlineBeaconClient::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<AOnlineBeaconClient>(&FStack_a8);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&FStack_98,(AActor *)pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar9);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ATestBeaconHost *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pAVar5->BeaconOwner).field0_0x0.DebugPtr = (AOnlineBeaconHostObject *)this;
  }
  if (auStack_88._64_8_ == 0) {
    return pAVar5;
  }
  plVar7 = (longlong *)(auStack_88 + 0x50);
  if ((longlong *)auStack_88._104_8_ != (longlong *)0x0) {
    plVar7 = (longlong *)auStack_88._104_8_;
  }
  (**(code **)(*plVar7 + 0x10))();
  return pAVar5;
}

// StaticRegisterNativesATestBeaconHost @ 14ecca420

void __cdecl ATestBeaconHost::StaticRegisterNativesATestBeaconHost(void)

{
  return;
}

