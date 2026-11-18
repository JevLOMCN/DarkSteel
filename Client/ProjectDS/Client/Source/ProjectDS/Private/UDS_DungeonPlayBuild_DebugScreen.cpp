// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b486b80

UClass * __cdecl UDS_DungeonPlayBuild_DebugScreen::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonPlayBuild_DebugScreen",
               &Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton,
               StaticRegisterNativesUDS_DungeonPlayBuild_DebugScreen,0x430,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DungeonPlayBuild_DebugScreen>,
               InternalVTableHelperCtorCaller<UDS_DungeonPlayBuild_DebugScreen>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton;
}

// UDS_DungeonPlayBuild_DebugScreen @ 14b48b0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_DungeonPlayBuild_DebugScreen * __thiscall
UDS_DungeonPlayBuild_DebugScreen::UDS_DungeonPlayBuild_DebugScreen
          (UDS_DungeonPlayBuild_DebugScreen *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuild_DebugScreen__6B_;
  ::FString::FString(&this->ButtonString_CreateParty,L"Create Party");
  this->bButtonEnabled_CreateParty = true;
  ::FString::FString(&this->ButtonString_DismissParty,L"Dismiss Party");
  this->bButtonEnabled_DismissParty = true;
  ::FString::FString(&this->ButtonString_EnterDungeon,L"Enter Dungeon");
  this->bButtonEnabled_EnterDungeon = true;
  ::FString::FString(&this->PartyInfoString,L"Party : 99/99");
  this->EnterButtonVisibility = Collapsed;
  this->ExitButtonVisibility = Collapsed;
  this->PartyMemberCount = 0;
  this->PartyMemberCountMax = 0;
  (this->InvitePlayerUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvitePlayerUIDArray).ArrayNum = 0;
  (this->InvitePlayerUIDArray).ArrayMax = 0;
  this->ElapsedTime = 0.0;
  this->RequestRaidPartyInviteInterval = 1.0;
  this->bIsPartyJoined = false;
  this->bIsPartyLeader = false;
  return this;
}

// UDS_DungeonPlayBuild_DebugScreen @ 14b48b180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_DungeonPlayBuild_DebugScreen * __thiscall
UDS_DungeonPlayBuild_DebugScreen::UDS_DungeonPlayBuild_DebugScreen
          (UDS_DungeonPlayBuild_DebugScreen *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuild_DebugScreen__6B_;
  ::FString::FString(&this->ButtonString_CreateParty,L"Create Party");
  this->bButtonEnabled_CreateParty = true;
  ::FString::FString(&this->ButtonString_DismissParty,L"Dismiss Party");
  this->bButtonEnabled_DismissParty = true;
  ::FString::FString(&this->ButtonString_EnterDungeon,L"Enter Dungeon");
  this->bButtonEnabled_EnterDungeon = true;
  ::FString::FString(&this->PartyInfoString,L"Party : 99/99");
  this->EnterButtonVisibility = Collapsed;
  this->ExitButtonVisibility = Collapsed;
  this->PartyMemberCount = 0;
  this->PartyMemberCountMax = 0;
  (this->InvitePlayerUIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvitePlayerUIDArray).ArrayNum = 0;
  (this->InvitePlayerUIDArray).ArrayMax = 0;
  this->ElapsedTime = 0.0;
  this->RequestRaidPartyInviteInterval = 1.0;
  this->bIsPartyJoined = false;
  this->bIsPartyLeader = false;
  return this;
}

// ~UDS_DungeonPlayBuild_DebugScreen @ 14b48bcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::~UDS_DungeonPlayBuild_DebugScreen
          (UDS_DungeonPlayBuild_DebugScreen *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_DungeonPlayBuild_DebugScreen__6B_;
  pFVar1 = (this->InvitePlayerUIDArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PartyInfoString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ButtonString_EnterDungeon).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ButtonString_DismissParty).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ButtonString_CreateParty).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d190

UClass * __cdecl UDS_DungeonPlayBuild_DebugScreen::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonPlayBuild_DebugScreen",
               &Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton,
               StaticRegisterNativesUDS_DungeonPlayBuild_DebugScreen,0x430,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DungeonPlayBuild_DebugScreen>,
               InternalVTableHelperCtorCaller<UDS_DungeonPlayBuild_DebugScreen>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonPlayBuild_DebugScreen.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonPlayBuild_DebugScreen @ 14b48d810

void __cdecl
UDS_DungeonPlayBuild_DebugScreen::StaticRegisterNativesUDS_DungeonPlayBuild_DebugScreen(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_DungeonPlayBuild_DebugScreen_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnClickCreateParty @ 14b48e750

void __cdecl
UDS_DungeonPlayBuild_DebugScreen::execOnClickCreateParty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickCreateParty((UDS_DungeonPlayBuild_DebugScreen *)param_1);
  return;
}

// execOnClickDismissParty @ 14b48e770

void __cdecl
UDS_DungeonPlayBuild_DebugScreen::execOnClickDismissParty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickDismissParty((UDS_DungeonPlayBuild_DebugScreen *)param_1);
  return;
}

// execOnClickEnterDungeon @ 14b48e790

void __cdecl
UDS_DungeonPlayBuild_DebugScreen::execOnClickEnterDungeon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickEnterDungeon((UDS_DungeonPlayBuild_DebugScreen *)param_1);
  return;
}

// execOnClickExitDungeon @ 14b48e7b0

void __cdecl
UDS_DungeonPlayBuild_DebugScreen::execOnClickExitDungeon
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickExitDungeon((UDS_DungeonPlayBuild_DebugScreen *)param_1);
  return;
}

// GetInst @ 14b9aee10

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

UDS_DungeonPlayBuild_DebugScreen * __cdecl UDS_DungeonPlayBuild_DebugScreen::GetInst(void)

{
  int iVar1;
  UDS_DungeonPlayBuild_DebugScreen *pUVar2;
  UDS_DungeonPlayBuildManager *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  UWorld *pUVar8;
  undefined1 auStackY_1b8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  TStringView<wchar_t> local_178;
  FSoftObjectPath local_168;
  FName local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar3 = UDS_DungeonPlayBuildManager::GetInst();
  if (pUVar3 == (UDS_DungeonPlayBuildManager *)0x0) {
    return (UDS_DungeonPlayBuild_DebugScreen *)0x0;
  }
  pUVar2 = (pUVar3->DungeonPlayBuild_DebugScreen).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_DungeonPlayBuild_DebugScreen *)0x0) {
    return pUVar2;
  }
  local_178.Size = 0x5e;
  pUVar8 = (UWorld *)0x0;
  local_178.DataPtr =
       L"/Game/DungeonPlayBuild/Widgets/DungeonPlayBuild_DebugScreenBP.DungeonPlayBuild_DebugScreenBP_C"
  ;
  local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_168.AssetPath.PackageName.Number = 0;
  local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_168.AssetPath.AssetName.Number = 0;
  local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.SubPathString.Data.ArrayNum = 0;
  local_168.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_168,&local_178);
  if (local_168.AssetPath.PackageName == (FName)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b9af10f;
    pUVar4 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DungeonPlayBuild_DebugScreen::GetInst",0x29,Yes);
    pwVar10 = L"Invalid WidgetPath. %s";
    uVar9 = 0x29;
  }
  else {
    pUVar5 = FSoftObjectPath::TryLoad(&local_168,(FUObjectSerializeContext *)0x0);
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        local_148.ComparisonIndex.Value = 0;
        local_148.Number = 0;
        local_178.DataPtr = (wchar_t *)pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pUVar7 = pUVar8;
        if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
          pUVar7 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
        }
        pUVar7 = (UWorld *)
                 CreateWidget<UDS_DungeonPlayBuild_DebugScreen,UWorld_*>
                           (pUVar7,(TSubclassOf<UUserWidget>)&local_178,local_148);
        if (pUVar7 != (UWorld *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (pUVar3->DungeonPlayBuild_DebugScreen).field0_0x0.DebugPtr =
               (UDS_DungeonPlayBuild_DebugScreen *)pUVar7;
          UUserWidget::AddToViewport((UUserWidget *)pUVar7,2);
          (**(code **)(pUVar7->_padding_ + 0x2c0))(pUVar7,1);
          pUVar8 = pUVar7;
          goto LAB_14b9af10f;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b9af10f;
        pUVar4 = UDS_LogManager::GetInst();
        FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_DungeonPlayBuild_DebugScreen::GetInst",0x29,Yes);
        pwVar10 = L"Failed to CreateWidget. %s";
        uVar9 = 0x37;
        goto LAB_14b9af0d2;
      }
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14b9af10f;
    pUVar4 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&local_168,(FString *)&local_178);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DungeonPlayBuild_DebugScreen::GetInst",0x29,Yes);
    pwVar10 = L"Failed to TryLoad. %s";
    uVar9 = 0x30;
  }
LAB_14b9af0d2:
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar9,pwVar10);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if ((UObject *)local_178.DataPtr != (UObject *)0x0) {
    FMemory::Free(local_178.DataPtr);
  }
LAB_14b9af10f:
  if (local_168.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.SubPathString.Data.AllocatorInstance.Data);
  }
  return (UDS_DungeonPlayBuild_DebugScreen *)pUVar8;
}

// InvitePartyAround @ 14b9b6c40

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
UDS_DungeonPlayBuild_DebugScreen::InvitePartyAround(UDS_DungeonPlayBuild_DebugScreen *this)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UDS_MovementCore *this_00;
  UClass *pUVar9;
  UWorld *pUVar10;
  UWorld *pUVar11;
  FDS_RaidPartyRepo *pFVar12;
  FDS_EntityBase *pFVar13;
  UObject *pUVar14;
  FDS_RaidPartyMemberInfo *pFVar15;
  ForAnyElementType FVar16;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_c8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [3];
  
  pTVar2 = &this->InvitePlayerUIDArray;
  pUVar11 = (UWorld *)0x0;
  piVar1 = &(this->InvitePlayerUIDArray).ArrayMax;
  (this->InvitePlayerUIDArray).ArrayNum = 0;
  if ((this->InvitePlayerUIDArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (this->bIsPartyLeader != false) {
    FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_MovementCore::GetMovementCore((ulong64)&local_res20);
    bVar6 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar6) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_res20);
      UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_a8._s_0);
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
      local_d8.ArrayNum = iVar7 + 1;
      local_d8.AllocatorInstance.Data[iVar7] = (FScriptContainerElement)0x8;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      pUVar9 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
      pUVar10 = pUVar11;
      if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
        pUVar10 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
      }
      fVar5 = __real_43fa0000;
      local_88[0]._s_0.X = local_a8._s_0.X;
      local_88[0]._s_0.Y = local_a8._s_0.Y;
      local_88[0]._s_0.Z = local_a8._s_0.Z;
      UKismetSystemLibrary::SphereOverlapActors
                ((UObject *)pUVar10,(TVector<double> *)&local_88[0]._s_0,__real_43fa0000,&local_d8,
                 pUVar9,&local_b8,&local_c8);
      if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
        pUVar11 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
      }
      DrawDebugSphere(pUVar11,(TVector<double> *)&local_a8._s_0,fVar5,0x14,&FColor::Cyan,false,
                      __real_40000000,'\0',__real_40a00000);
      pFVar12 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      iVar7 = local_c8.ArrayNum;
      pFVar3 = local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 8;
      FVar16.Data = local_c8.AllocatorInstance.Data;
      while( true ) {
        if (local_c8.ArrayNum != iVar7) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (FVar16.Data == pFVar3) break;
        pUVar14 = *(UObject **)FVar16.Data;
        if (pUVar14 != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          local_res10.ObjectIndex = 0;
          local_res10.ObjectSerialNumber = 0;
          local_res8 = pUVar14;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
          pFVar13 = FDS_EntityBase::GetEntityBaseFromActor
                              ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
          if (pFVar13 != (FDS_EntityBase *)0x0) {
            UDS_PlayerData::GetData((ulong64)&local_res18,pFVar13->EntityID,false);
            bVar6 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res18,
                               (void *)0x0);
            if (!bVar6) {
              pUVar14 = FWeakObjectPtr::Get(&local_res18);
              pFVar15 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID
                                  (&pFVar12->RaidPartyInfo,*(long64 *)&pUVar14[6].field_0x8);
              if (pFVar15->PlayerUID < 1) {
                pUVar14 = FWeakObjectPtr::Get(&local_res18);
                uVar4 = *(undefined8 *)&pUVar14[6].field_0x8;
                iVar8 = (this->InvitePlayerUIDArray).ArrayNum;
                if (iVar8 == *piVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->InvitePlayerUIDArray).ArrayNum = iVar8 + 1;
                *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = uVar4;
              }
            }
          }
        }
        FVar16.Data = FVar16.Data + 8;
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// NativeConstruct @ 14b9bbaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::NativeConstruct(UDS_DungeonPlayBuild_DebugScreen *this)

{
  UDS_DungeonEvent *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UUserWidget::NativeConstruct((UUserWidget *)this);
  UpdatePartyInfo(this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 == (UDS_DungeonEvent *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_DungeonPlayBuild_DebugScreen::NativeConstruct",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x58,L"dungeonEvent is nullptr.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    local_158._8_4_ = 0;
    local_158._0_8_ = UpdatePartyInfo;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    local_158._24_8_ = CONCAT44(local_158._12_4_,local_158._8_4_);
    local_158._16_8_ = local_158._0_8_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_DungeonPlayBuild_DebugScreen>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_DungeonPlayBuild_DebugScreen *)local_158,
               (pmf_cf4f7b01 *)this);
  }
  return;
}

// NativeDestruct @ 14b9bbbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::NativeDestruct(UDS_DungeonPlayBuild_DebugScreen *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UUserWidget::NativeDestruct((UUserWidget *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    return;
  }
  return;
}

// NativeTick @ 14b9bbc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::NativeTick
          (UDS_DungeonPlayBuild_DebugScreen *this,FGeometry *param_1,float param_2)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  float fVar7;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  if ((this->InvitePlayerUIDArray).ArrayNum < 1) {
    this->ElapsedTime = 0.0;
  }
  else {
    fVar7 = param_2 + this->ElapsedTime;
    this->ElapsedTime = fVar7;
    if (this->RequestRaidPartyInviteInterval <= fVar7 &&
        fVar7 != this->RequestRaidPartyInviteInterval) {
      this->ElapsedTime = 0.0;
      pTVar2 = &this->InvitePlayerUIDArray;
      FDS_RaidPartyService::RequestRaidPartyInvite(*(long64 *)(pTVar2->AllocatorInstance).Data);
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_DungeonPlayBuild_DebugScreen::NativeTick",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Display,local_158.Ptr,0x77,L"RequestRaidPartyInvite(%llu)");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      if ((this->InvitePlayerUIDArray).ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (pTVar2->AllocatorInstance).Data;
      iVar5 = (this->InvitePlayerUIDArray).ArrayNum + -1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
      }
      piVar1 = &(this->InvitePlayerUIDArray).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar2->AllocatorInstance,(this->InvitePlayerUIDArray).ArrayNum,
                 &(this->InvitePlayerUIDArray).ArrayMax);
    }
  }
  return;
}

// OnClickCreateParty @ 14b9bc7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnClickCreateParty(UDS_DungeonPlayBuild_DebugScreen *this)

{
  UDS_DungeonPlayBuildManager *this_00;
  UDS_LogManager *pUVar1;
  int *piVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined1 auStackY_198 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = UDS_DungeonPlayBuildManager::GetInst();
  if (this_00 == (UDS_DungeonPlayBuildManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DungeonPlayBuild_DebugScreen::OnClickCreateParty",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x88,L"dungeonPlayBuildMng is nullptr.");
      if ((UDS_DungeonPlayBuildManager *)local_138._padding_ != (UDS_DungeonPlayBuildManager *)0x0)
      {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UpdatePartyInfo(this);
    if (this->bButtonEnabled_CreateParty != false) {
      if (this->bIsPartyJoined == false) {
        piVar2 = UDS_DungeonPlayBuildManager::GetDungeonID(this_00);
        pFVar3 = ::FString::FString(&local_158,L"");
        pFVar4 = ::FString::FString(&local_148,L"WemadeNext");
        FDS_RaidPartyService::RequestRaidPartyCreate(*piVar2,pFVar4,pFVar3,true);
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 != (UDS_LogManager *)0x0) {
          pUVar1 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_DungeonPlayBuild_DebugScreen::OnClickCreateParty",0x34,Yes);
          UDS_LogManager::PrintLog
                    (pUVar1,1,Display,local_138.Ptr,0x99,L"RequestRaidPartyCreate(%d)");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else if (this->bIsPartyLeader == true) {
        InvitePartyAround(this);
      }
    }
  }
  return;
}

// OnClickDismissParty @ 14b9bc9e0

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnClickDismissParty(UDS_DungeonPlayBuild_DebugScreen *this)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  UpdatePartyInfo(this);
  if ((this->bButtonEnabled_DismissParty != false) && (this->bIsPartyJoined != false)) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    FDS_RaidPartyService::RequestRaidPartyLeave(&local_28);
  }
  return;
}

// OnClickEnterDungeon @ 14b9bca30

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnClickEnterDungeon(UDS_DungeonPlayBuild_DebugScreen *this)

{
  UpdatePartyInfo(this);
  if (((this->bButtonEnabled_EnterDungeon != false) && (this->bIsPartyJoined != false)) &&
     (this->bIsPartyLeader == true)) {
    FDS_RaidPartyService::RequestRaidPartyDungeonStart();
    return;
  }
  return;
}

// OnClickExitDungeon @ 14b9bca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnClickExitDungeon(UDS_DungeonPlayBuild_DebugScreen *this)

{
  bool bVar1;
  UDS_CommonPopupManager *this_00;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  undefined1 auStackY_1f8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_1c8 [2];
  code *local_1b8;
  undefined8 uStack_1b0;
  FDS_Text local_1a8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  UpdatePartyInfo(this);
  this_00 = UDS_CommonPopupManager::GetInst();
  if (this_00 == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DungeonPlayBuild_DebugScreen::OnClickExitDungeon",0x34,Yes);
    pwVar6 = L"commonPopupMng is nullptr.";
    uVar5 = 0xe8;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this_00);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)local_1c8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.IsExpression = false;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0x33485);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1a8,StringUi,0x33487);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1a8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0._0_4_ = 0;
      local_1b8 = OnExitDungeonPopup_ClickCancel;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_DungeonPlayBuild_DebugScreen>
                         (&local_158,this,(pmf_3889675b *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonCancel,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x65,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
      local_1b8 = OnExitDungeonPopup_ClickConfirm;
      pTVar4 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               ::CreateUObject<UDS_DungeonPlayBuild_DebugScreen>
                         (&local_158,this,(pmf_3889675b *)&local_1b8);
      UDS_M_CommonPopup::SetDelegate(pUVar3,ButtonConfirm,pTVar4);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_1c8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DungeonPlayBuild_DebugScreen::OnClickExitDungeon",0x34,Yes);
    pwVar6 = L"commonPopupModel is nullptr.";
    uVar5 = 0xef;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnExitDungeonPopup_ClickCancel @ 14b9bd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnExitDungeonPopup_ClickCancel
          (UDS_DungeonPlayBuild_DebugScreen *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DungeonPlayBuild_DebugScreen::OnExitDungeonPopup_ClickCancel",0x40,
                 Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1ff,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_144,&local_148);
  }
  return;
}

// OnExitDungeonPopup_ClickConfirm @ 14b9bd690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::OnExitDungeonPopup_ClickConfirm
          (UDS_DungeonPlayBuild_DebugScreen *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this_00;
  code *pcVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  TSharedRef<client_msg::ClientMessages,1> *pTVar6;
  Message *pMVar7;
  UDS_NetworkManager *this_01;
  Arena *pAVar8;
  undefined1 auStackY_298 [32];
  TSharedRef<client_msg::ClientMessages,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  if ((pFVar4->RaidPartyInfo).RaidPartyUID < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_258,"FDS_RaidPartyService::SendRaidPartyAllDungeonOutRequest",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_258.Ptr,0x34d,L"RaidPartyUID <= 0.");
      if ((void *)TStack_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_258._padding_);
      }
    }
  }
  else {
    pTVar6 = MakeShared<client_msg::ClientMessages,1>(&TStack_268);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_00 = pTVar6->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_268.SharedReferenceCount.ReferenceController);
    if ((this_00 == (ClientMessages *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this_00->_impl_)._oneof_case_[0] != 0x4f4e) {
      client_msg::ClientMessages::clear_ClientMessage(this_00);
      (this_00->_impl_)._oneof_case_[0] = 0x4f4e;
      pAVar8 = (Arena *)(this_00->_padding_ & 0xfffffffffffffffe);
      if ((this_00->_padding_ & 1) != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg::RaidPartyAllDungeonOutRequest>
                         (pAVar8);
      (this_00->_impl_).ClientMessage_.joincontinentreq_ = pMVar7;
    }
    pMVar7 = (this_00->_impl_).ClientMessage_.joincontinentreq_;
    if (pMVar7 != (Message *)0x0) {
      *(long64 *)&pMVar7[1].field_0x8 = (pFVar4->RaidPartyInfo).RaidPartyUID;
      *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 1;
      this_01 = UDS_NetworkManager::GetInst();
      if (this_01 == (UDS_NetworkManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"FDS_RaidPartyService::SendRaidPartyAllDungeonOutRequest",0x37,Yes)
          ;
          UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,0x35d,L"netMng is nullptr.");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
      else {
        UDS_NetworkManager::SendPacket(this_01,this_00);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// ShowWidget @ 14b9c5820

void __cdecl UDS_DungeonPlayBuild_DebugScreen::ShowWidget(bool param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_DungeonPlayBuild_DebugScreen *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = GetInst();
  if (pUVar1 != (UDS_DungeonPlayBuild_DebugScreen *)0x0) {
    uVar2 = 1;
    if (param_1) {
      uVar2 = 4;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2c0);
                    /* WARNING: Could not recover jumptable at 0x00014b9c5854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// UpdateButton_CreateParty @ 14b9c8840

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdateButton_CreateParty(UDS_DungeonPlayBuild_DebugScreen *this)

{
  FString *this_00;
  
  this_00 = &this->ButtonString_CreateParty;
  if (this->bIsPartyJoined == false) {
    ::FString::operator=(this_00,L"Create Party");
    this->bButtonEnabled_CreateParty = true;
    return;
  }
  if (this->bIsPartyLeader == true) {
    ::FString::operator=(this_00,L"Invite Party");
    this->bButtonEnabled_CreateParty = this->PartyMemberCount < this->PartyMemberCountMax;
    return;
  }
  ::FString::operator=(this_00,L"Wait Leader");
  this->bButtonEnabled_CreateParty = false;
  return;
}

// UpdateButton_DismissParty @ 14b9c88d0

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdateButton_DismissParty(UDS_DungeonPlayBuild_DebugScreen *this)

{
  bool bVar1;
  
  bVar1 = this->bIsPartyJoined;
  ::FString::operator=(&this->ButtonString_DismissParty,L"Leave Party");
  this->bButtonEnabled_DismissParty = bVar1 != false;
  return;
}

// UpdateButton_Enter @ 14b9c8920

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdateButton_Enter(UDS_DungeonPlayBuild_DebugScreen *this)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this->EnterButtonVisibility = Collapsed;
  if (this->bIsPartyLeader == true) {
    this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar1 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(this_00);
    if (pFVar1->MemberState != DungeonInPlay) {
      this->EnterButtonVisibility = SelfHitTestInvisible;
    }
  }
  return;
}

// UpdateButton_EnterDungeon @ 14b9c8960

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdateButton_EnterDungeon(UDS_DungeonPlayBuild_DebugScreen *this)

{
  FString *this_00;
  
  this_00 = &this->ButtonString_EnterDungeon;
  if (this->bIsPartyJoined == false) {
    ::FString::operator=(this_00,L"Enter Dungeon");
    this->bButtonEnabled_EnterDungeon = false;
    return;
  }
  if (this->bIsPartyLeader == true) {
    ::FString::operator=(this_00,L"Enter Dungeon");
    this->bButtonEnabled_EnterDungeon = true;
    return;
  }
  ::FString::operator=(this_00,L"Wait Leader");
  this->bButtonEnabled_EnterDungeon = false;
  return;
}

// UpdateButton_Exit @ 14b9c89e0

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdateButton_Exit(UDS_DungeonPlayBuild_DebugScreen *this)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  
  this->ExitButtonVisibility = Collapsed;
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(this_00);
  if (pFVar1->MemberState == DungeonInPlay) {
    this->ExitButtonVisibility = SelfHitTestInvisible;
  }
  return;
}

// UpdatePartyInfo @ 14b9c9ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DungeonPlayBuild_DebugScreen::UpdatePartyInfo(UDS_DungeonPlayBuild_DebugScreen *this)

{
  FString *pFVar1;
  EDS_DungeonType EVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_RaidPartyRepo *pFVar9;
  FDS_DungeonBaseTableRow *pFVar10;
  UDS_DungeonPlayBuild_DebugScreen *pUVar11;
  FDS_RaidPartyMemberInfo *pFVar12;
  UDS_DungeonPlayBuild_DebugScreen *pUVar13;
  undefined4 uVar14;
  undefined1 auStackY_188 [32];
  uint uVar15;
  wchar_t *pwVar16;
  FString local_158;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_PlayerData::GetMainPlayerData();
  bVar6 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar6) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DungeonPlayBuild_DebugScreen::UpdatePartyInfo",0x31,Yes);
    pwVar16 = L"playerData is nullptr.";
    uVar15 = 0x149;
LAB_14b9c9c36:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_138.Ptr,uVar15,pwVar16);
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  pUVar8 = FWeakObjectPtr::Get(local_148);
  lVar3 = *(longlong *)&pUVar8[6].field_0x8;
  pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  lVar4 = (pFVar9->RaidPartyInfo).RaidPartyUID;
  this->bIsPartyJoined = 0 < lVar4;
  if (lVar4 < 1) {
    this->bIsPartyLeader = false;
    uVar14 = 0;
    this->PartyMemberCount = 0;
    pUVar11 = (UDS_DungeonPlayBuild_DebugScreen *)0x410;
    pUVar13 = this;
  }
  else {
    this->bIsPartyLeader = (pFVar9->RaidPartyInfo).LeaderUID == lVar3;
    this->PartyMemberCount = (pFVar9->RaidPartyInfo).Members.ArrayNum;
    pFVar10 = FDS_DungeonBaseTableRow::Get((longlong)(pFVar9->RaidPartyInfo).DungeonId,true);
    if (pFVar10 == (FDS_DungeonBaseTableRow *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DungeonPlayBuild_DebugScreen::UpdatePartyInfo",0x31,Yes);
      pwVar16 = L"dungeonBaseTable is nullptr.";
      uVar15 = 0x15e;
      goto LAB_14b9c9c36;
    }
    EVar2 = pFVar10->DungeonType;
    if (((EVar2 == Normal) || (EVar2 == Heroic)) || (uVar14 = 0xc, EVar2 != Raid)) {
      uVar14 = 4;
    }
    pUVar11 = this;
    pUVar13 = (UDS_DungeonPlayBuild_DebugScreen *)0x410;
  }
  *(undefined4 *)((longlong)&pUVar13->_padding_ + (longlong)&pUVar11->_padding_) = uVar14;
  pFVar1 = &this->PartyInfoString;
  if (this->PartyMemberCount == 0) {
    ::FString::operator=(pFVar1,L"No Party");
  }
  else {
    ::FString::PrintfImpl(&local_158,L"Party : %02d/%02d");
    if (pFVar1 != &local_158) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
      (this->PartyInfoString).Data.ArrayNum = local_158.Data.ArrayNum;
      (this->PartyInfoString).Data.ArrayMax = local_158.Data.ArrayMax;
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = &this->ButtonString_CreateParty;
  if (this->bIsPartyJoined == false) {
    ::FString::operator=(pFVar1,L"Create Party");
    bVar6 = true;
  }
  else if (this->bIsPartyLeader == true) {
    ::FString::operator=(pFVar1,L"Invite Party");
    bVar6 = this->PartyMemberCount < this->PartyMemberCountMax;
  }
  else {
    ::FString::operator=(pFVar1,L"Wait Leader");
    bVar6 = false;
  }
  this->bButtonEnabled_CreateParty = bVar6;
  bVar6 = this->bIsPartyJoined;
  ::FString::operator=(&this->ButtonString_DismissParty,L"Leave Party");
  this->bButtonEnabled_DismissParty = bVar6 != false;
  if (this->bIsPartyJoined == false) {
    pwVar16 = L"Enter Dungeon";
  }
  else {
    if (this->bIsPartyLeader == true) {
      ::FString::operator=(&this->ButtonString_EnterDungeon,L"Enter Dungeon");
      this->bButtonEnabled_EnterDungeon = true;
      goto LAB_14b9c9ea9;
    }
    pwVar16 = L"Wait Leader";
  }
  ::FString::operator=(&this->ButtonString_EnterDungeon,pwVar16);
  this->bButtonEnabled_EnterDungeon = false;
LAB_14b9c9ea9:
  this->EnterButtonVisibility = Collapsed;
  if (this->bIsPartyLeader == true) {
    pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar12 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar9);
    if (pFVar12->MemberState != DungeonInPlay) {
      this->EnterButtonVisibility = SelfHitTestInvisible;
    }
  }
  this->ExitButtonVisibility = Collapsed;
  pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar12 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar9);
  if (pFVar12->MemberState == DungeonInPlay) {
    this->ExitButtonVisibility = SelfHitTestInvisible;
  }
  if ((this->bIsPartyJoined == true) && (this->bIsPartyLeader == false)) {
    pFVar9 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar12 = FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(pFVar9);
    if ((pFVar12->MemberState == None) || (pFVar12->MemberState == Waiting)) {
      FDS_RaidPartyService::RequestRaidPartyMemberUpdateState(Ready);
    }
  }
  return;
}

