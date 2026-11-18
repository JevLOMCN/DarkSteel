// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 139

// StaticClass @ 14772bd70

UClass * __cdecl APawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_APawn.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Pawn",&Z_Registration_Info_UClass_APawn.InnerSingleton,
               StaticRegisterNativesAPawn,0x340,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_APawn,
               L"Game",InternalConstructor<APawn>,InternalVTableHelperCtorCaller<APawn>,aFStackX_8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APawn.InnerSingleton;
}

// _getUObject @ 1477343a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall APawn::_getUObject(APawn *this)

{
  return (UObject *)&this[-1]._padding_;
}

// GetMovementBase @ 147ae9bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall APawn::GetMovementBase(APawn *this)

{
  return (UPrimitiveComponent *)0x0;
}

// GetNavAgentLocation @ 147ae9c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::GetNavAgentLocation(APawn *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = this[-1]._padding_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar2 != 0) {
    uVar3 = *(double *)(lVar2 + 0x220);
    uVar4 = *(double *)(lVar2 + 0x210);
    uVar5 = *(double *)(lVar2 + 0x218);
  }
  fVar1 = *(float *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar3 - (double)fVar1;
  return __return_storage_ptr__;
}

// APawn @ 1481c6d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall APawn::APawn(APawn *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->AIControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->LastHitBy).field0_0x0.DebugPtr = (AController *)0x0;
  (this->Controller).field0_0x0.DebugPtr = (AController *)0x0;
  (this->PreviousController).field0_0x0.DebugPtr = (AController *)0x0;
  this->ReceiveControllerChangedDelegate = (FPawnControllerChangedSignature)0x0;
  this->ReceiveRestartedDelegate = (FPawnRestartedSignature)0x0;
  (this->OverrideInputComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// APawn @ 1481c6da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall APawn::APawn(APawn *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  APawn *pAVar11;
  size_t sVar12;
  UClass *pUVar13;
  FRepMovement *pFVar14;
  int iVar15;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  iVar15 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->AIControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->LastHitBy).field0_0x0.DebugPtr = (AController *)0x0;
  (this->Controller).field0_0x0.DebugPtr = (AController *)0x0;
  (this->PreviousController).field0_0x0.DebugPtr = (AController *)0x0;
  this->ReceiveControllerChangedDelegate = (FPawnControllerChangedSignature)0x0;
  this->ReceiveRestartedDelegate = (FPawnRestartedSignature)0x0;
  (this->OverrideInputComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  *(undefined1 *)&this->_padding_ = 0;
  this->AutoPossessAI = PlacedInWorld;
  if (((this->_padding_ & 0x10) == 0) ||
     (pUVar9 = GetPrivateStaticClass(), (UClass *)this->_padding_ != pUVar9)) {
    pUVar9 = GetPrivateStaticClass();
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar3 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = *(UObject **)&pUVar3[0x12].field_0x8, pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->AIControllerClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)&pUVar3[0x12].field_0x8;
    goto LAB_1481c70b9;
  }
  pwVar10 = FCommandLine::Get();
  bVar7 = FParse::Param(pwVar10,L"NoEnginePlugins");
  pUVar9 = Z_Construct_UClass_UEngine_NoRegister();
  if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar9);
  }
  FSoftObjectPath::ToString
            ((FSoftObjectPath *)((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr + 0xf),&local_98);
  local_68 = local_98.Data.AllocatorInstance.Data;
  iStack_60 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iStack_60 = iVar15;
  }
  local_48._12_4_ = uStack_5c;
  local_48.Size = iStack_60;
  local_48.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  bVar8 = FPackageName::IsValidObjectPath(&local_48,(FText *)0x0);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPackageName::IsValidObjectPath(AIControllerClassName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Pawn.cpp"
                         ,0x42,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pAVar11 = (APawn *)(*pcVar5)();
    return pAVar11;
  }
  if (local_98.Data.ArrayNum == 0) {
    local_88 = (FScriptContainerElement *)0x15060d16c;
LAB_1481c6f12:
    sVar12 = wcslen((wchar_t *)local_88);
    iVar15 = (int)sVar12;
  }
  else {
    local_88 = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1481c6f12;
  }
  iStack_80 = iVar15;
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  local_38._12_4_ = uStack_7c;
  local_38.Size = iStack_80;
  local_38.DataPtr = (wchar_t *)local_88;
  pUVar9 = (UClass *)StaticFindObject(pUVar9,(UObject *)0x0,&local_38,None);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UClass *)0x0)) {
    (this->AIControllerClass).Class.field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UClass *)0x0) goto LAB_1481c6f71;
LAB_1481c6fac:
    if (!bVar7) {
      local_58 = (wchar_t *)0x0;
      iStack_50 = 0;
      if (local_98.Data.ArrayNum == 0) {
        local_78 = (FScriptContainerElement *)0x15060d16c;
LAB_1481c6fdf:
        sVar12 = wcslen((wchar_t *)local_78);
        iStack_70 = (int)sVar12;
      }
      else {
        iStack_70 = 0;
        local_78 = local_98.Data.AllocatorInstance.Data;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_1481c6fdf;
      }
      pUVar9 = Z_Construct_UClass_AController_NoRegister();
      local_28._12_4_ = uStack_4c;
      local_28.Size = iStack_50;
      local_18._12_4_ = uStack_6c;
      local_18.Size = iStack_70;
      local_28.DataPtr = local_58;
      local_18.DataPtr = (wchar_t *)local_78;
      pUVar9 = StaticLoadClass(pUVar9,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->AIControllerClass).Class.field0_0x0.DebugPtr = pUVar9;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
    (this->AIControllerClass).Class.field0_0x0.DebugPtr = pUVar9;
LAB_1481c6f71:
    pUVar13 = Z_Construct_UClass_AController_NoRegister();
    if (pUVar13 == (UClass *)0x0) goto LAB_1481c6fac;
    iVar15 = (int)pUVar13->_padding_;
    if (((int)pUVar9->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar13->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((!bVar8) || ((this->AIControllerClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
    goto LAB_1481c6fac;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_1481c70b9:
  AActor::SetCanBeDamaged((AActor *)this,true);
  fVar6 = __real_42c80000;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)&this->_padding_ = 0x40400000;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar6);
  AActor::SetReplicatingMovement((AActor *)this,true);
  this->bUseControllerRotationPitch = 0;
  this->bIsLocalViewTarget = 0;
  this->bProcessingOutsideWorldBounds = 0;
  this->bUseControllerRotationRoll = 0;
  this->bUseControllerRotationYaw = 0;
  this->bInputEnabled = 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x50;
  this->BaseEyeHeight = 64.0;
  this->AllowedYawError = 10.99;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  pFVar14 = AActor::GetReplicatedMovement_Mutable((AActor *)this);
  pFVar14->LocationQuantizationLevel = RoundTwoDecimals;
  return this;
}

// ~APawn @ 1481c8ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::~APawn(APawn *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddControllerPitchInput @ 1481d1f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::AddControllerPitchInput(APawn *this,float param_1)

{
  AController *pAVar1;
  char cVar2;
  APlayerController *pAVar3;
  
  if (((param_1 != 0.0) &&
      (pAVar1 = (this->Controller).field0_0x0.DebugPtr, pAVar1 != (AController *)0x0)) &&
     (pAVar1->bIsPlayerController != '\0')) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x7f0))();
    if (cVar2 != '\0') {
      pAVar3 = CastChecked<APlayerController,AController>((this->Controller).field0_0x0.DebugPtr);
      (**(code **)(pAVar3->_padding_ + 0xd40))(pAVar3,param_1);
    }
  }
  return;
}

// AddControllerRollInput @ 1481d1f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::AddControllerRollInput(APawn *this,float param_1)

{
  AController *pAVar1;
  char cVar2;
  APlayerController *pAVar3;
  
  if (((param_1 != 0.0) &&
      (pAVar1 = (this->Controller).field0_0x0.DebugPtr, pAVar1 != (AController *)0x0)) &&
     (pAVar1->bIsPlayerController != '\0')) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x7f0))();
    if (cVar2 != '\0') {
      pAVar3 = CastChecked<APlayerController,AController>((this->Controller).field0_0x0.DebugPtr);
      (**(code **)(pAVar3->_padding_ + 0xd50))(pAVar3,param_1);
    }
  }
  return;
}

// AddControllerYawInput @ 1481d1fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::AddControllerYawInput(APawn *this,float param_1)

{
  AController *pAVar1;
  char cVar2;
  APlayerController *pAVar3;
  
  if (((param_1 != 0.0) &&
      (pAVar1 = (this->Controller).field0_0x0.DebugPtr, pAVar1 != (AController *)0x0)) &&
     (pAVar1->bIsPlayerController != '\0')) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x7f0))();
    if (cVar2 != '\0') {
      pAVar3 = CastChecked<APlayerController,AController>((this->Controller).field0_0x0.DebugPtr);
      (**(code **)(pAVar3->_padding_ + 0xd48))(pAVar3,param_1);
    }
  }
  return;
}

// AddMovementInput @ 1481d28f0

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
APawn::AddMovementInput(APawn *this,TVector<double> *param_1,float param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double local_58;
  double local_50;
  double local_48;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x760))();
  local_48 = (double)param_2;
  local_58 = local_48 * (param_1->field0_0x0)._s_0.X;
  local_50 = local_48 * (param_1->field0_0x0)._s_0.Y;
  local_48 = local_48 * (param_1->field0_0x0)._s_0.Z;
  if (plVar4 == (longlong *)0x0) {
    if ((!param_3) && (cVar3 = (**(code **)(this->_padding_ + 0x8b0))(this), cVar3 != '\0')) {
      return;
    }
    dVar1 = (this->ControlInputVector).field0_0x0._s_0.Y;
    dVar2 = (this->ControlInputVector).field0_0x0._s_0.Z;
    (this->ControlInputVector).field0_0x0._s_0.X =
         local_58 + (this->ControlInputVector).field0_0x0._s_0.X;
    (this->ControlInputVector).field0_0x0._s_0.Y = local_50 + dVar1;
    (this->ControlInputVector).field0_0x0._s_0.Z = local_48 + dVar2;
  }
  else {
    (**(code **)(*plVar4 + 0x620))(plVar4,&local_58,param_3);
  }
  return;
}

// BecomeViewTarget @ 1481d53a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::BecomeViewTarget(APawn *this,APlayerController *param_1)

{
  ENetMode EVar1;
  APlayerController *pAVar2;
  
  AActor::BecomeViewTarget((AActor *)this,param_1);
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar1 != NM_Client) {
    (**(code **)(this->_padding_ + 0x710))(this);
  }
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar1 != NM_DedicatedServer) {
    pAVar2 = GetLocalViewingPlayerController(this);
    this->bIsLocalViewTarget = 0;
    *(uint *)&this->field_0x2c8 =
         *(uint *)&this->field_0x2c8 | -(uint)(pAVar2 != (APlayerController *)0x0) & 0x40;
  }
  return;
}

// BeginPlay @ 1481d5580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::BeginPlay(APawn *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  AActor::BeginPlay((AActor *)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnPawnBeginPlay,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnPawnBeginPlay._28_4_ = OnPawnBeginPlay._28_4_ + 1;
  uVar7 = OnPawnBeginPlay._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnPawnBeginPlay._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnPawnBeginPlay._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnPawnBeginPlay._8_8_), plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnPawnBeginPlay._28_4_ = OnPawnBeginPlay._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnPawnBeginPlay,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CanBeBaseForCharacter @ 1481d9930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::CanBeBaseForCharacter(APawn *this,APawn *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         == &pUVar4->_padding_)) && (*(char *)(lVar2 + 0x287) != '\x02')) {
      return *(char *)(lVar2 + 0x287) == '\x01';
    }
  }
  bVar3 = AActor::CanBeBaseForCharacter((AActor *)this,param_1);
  return bVar3;
}

// ConsumeMovementInputVector @ 1481dbd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::ConsumeMovementInputVector(APawn *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x760))();
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x628))(plVar4,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  dVar2 = (this->ControlInputVector).field0_0x0._s_0.Y;
  dVar1 = (this->ControlInputVector).field0_0x0._s_0.Z;
  (this->LastControlInputVector).field0_0x0._s_0.X = (this->ControlInputVector).field0_0x0._s_0.X;
  (this->LastControlInputVector).field0_0x0._s_0.Y = dVar2;
  (this->LastControlInputVector).field0_0x0._s_0.Z = dVar1;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ControlInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ControlInputVector).field0_0x0._s_0.Y = (double)uVar3;
  (this->ControlInputVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (this->LastControlInputVector).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LastControlInputVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->LastControlInputVector).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// CreatePlayerInputComponent @ 1481de380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInputComponent * __thiscall APawn::CreatePlayerInputComponent(APawn *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UInputComponent *pUVar5;
  longlong *plVar6;
  FName FVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&InputComponentName,L"PawnInputComponent0");
    _Init_thread_footer(&::_TSS0);
  }
  pUVar4 = (this->OverrideInputComponentClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar4 = (this->OverrideInputComponentClass).Class.field0_0x0.DebugPtr,
       FVar7 = InputComponentName, pUVar4 != (UClass *)0x0)) goto LAB_1481de437;
  }
  FVar7 = InputComponentName;
  pUVar4 = UInputSettings::GetDefaultInputComponentClass();
LAB_1481de437:
  if (FVar7 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UInputComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar3,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._8_8_ = this;
  local_98._16_8_ = FVar7;
  pUVar5 = (UInputComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar5;
}

// DestroyPlayerInputComponent @ 1481e0cb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::DestroyPlayerInputComponent(APawn *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a0))(plVar1,0);
    this->_padding_ = 0;
  }
  return;
}

// Destroyed @ 1481e0cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::Destroyed(APawn *this)

{
  (**(code **)(this->_padding_ + 0x858))();
  AActor::Destroyed((AActor *)this);
  return;
}

// DetachFromControllerPendingDestroy @ 1481e0d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::DetachFromControllerPendingDestroy(APawn *this)

{
  AController *this_00;
  APawn *pAVar1;
  bool bVar2;
  
  this_00 = (this->Controller).field0_0x0.DebugPtr;
  if (this_00 == (AController *)0x0) {
    return;
  }
  pAVar1 = (this_00->Pawn).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pAVar1 != (APawn *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
LAB_1481e0d5b:
      bVar2 = pAVar1 == this;
      goto LAB_1481e0d5e;
    }
  }
  else if (pAVar1 != (APawn *)0x0) goto LAB_1481e0d5b;
  bVar2 = this == (APawn *)0x0;
LAB_1481e0d5e:
  if (bVar2) {
    (**(code **)(this_00->_padding_ + 0x820))(this_00,this);
    AController::UnPossess(this_00);
    (this->Controller).field0_0x0.DebugPtr = (AController *)0x0;
  }
  return;
}

// DisableInput @ 1481e1960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::DisableInput(APawn *this,APlayerController *param_1)

{
  if ((param_1 == (APlayerController *)(this->Controller).field0_0x0.DebugPtr) ||
     (param_1 == (APlayerController *)0x0)) {
    this->bInputEnabled = 0;
  }
  else if (1 < (byte)LogPawn._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPawn);
    return;
  }
  return;
}

// DispatchRestart @ 1481e19a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::DispatchRestart(APawn *this,bool param_1)

{
  if (param_1) {
    (**(code **)(this->_padding_ + 0x810))();
                    /* WARNING: Could not recover jumptable at 0x0001481e19c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x800))(this);
    return;
  }
  (**(code **)(this->_padding_ + 0x808))();
                    /* WARNING: Could not recover jumptable at 0x0001481e19d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x800))(this);
  return;
}

// DisplayDebug @ 1481e19f0

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
APawn::DisplayDebug(APawn *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
                   float *param_4)

{
  FDisplayDebugManager *this_00;
  FScriptContainerElement *pFVar1;
  APlayerState *pAVar2;
  AController *pAVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar5;
  float local_res8 [2];
  FString local_28;
  
  this_00 = &param_1->DisplayDebugManager;
  pAVar2 = (this->PlayerState).field0_0x0.DebugPtr;
  if (pAVar2 == (APlayerState *)0x0) {
    local_res8[0] = 0.0;
    ::FString::FString(&local_28,L"NO PlayerState");
    FDisplayDebugManager::DrawString(this_00,&local_28,local_res8);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(pAVar2->_padding_ + 0x758))();
  }
  AActor::DisplayDebug((AActor *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f800000;
  *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f800000;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res8[0] = *(float *)CONCAT44(extraout_var,FVar4.Value);
  pFVar5 = (param_2->DisplayNames).AllocatorInstance.Data;
  local_res8[1] = 0.0;
  pFVar1 = pFVar5 + (longlong)(param_2->DisplayNames).ArrayNum * 8;
  if (pFVar5 != pFVar1) {
    do {
      if (*(ulonglong *)pFVar5 == (ulonglong)(uint)local_res8[0]) {
        local_res8[0] = 0.0;
        ::FString::PrintfImpl(&local_28,L"BaseEyeHeight %f");
        FDisplayDebugManager::DrawString(this_00,&local_28,local_res8);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1);
  }
  pAVar3 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar3 == (AController *)0x0) {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         0x3f800000;
    local_res8[0] = 0.0;
    ::FString::FString(&local_28,L"NO Controller");
    FDisplayDebugManager::DrawString(this_00,&local_28,local_res8);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(pAVar3->_padding_ + 0x758))(pAVar3,param_1,param_2,param_3,param_4);
  }
  return;
}

// EnableInput @ 1481e3300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::EnableInput(APawn *this,APlayerController *param_1)

{
  if ((param_1 == (APlayerController *)(this->Controller).field0_0x0.DebugPtr) ||
     (param_1 == (APlayerController *)0x0)) {
    this->bInputEnabled = 1;
  }
  else if (1 < (byte)LogPawn._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPawn);
    return;
  }
  return;
}

// EndPlay @ 1481e3340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::EndPlay(APawn *this,Type param_1)

{
  if (param_1 != Destroyed) {
    (**(code **)(this->_padding_ + 0x858))();
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// EndViewTarget @ 1481e33b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::EndViewTarget(APawn *this,APlayerController *param_1)

{
  ENetMode EVar1;
  APlayerController *pAVar2;
  
  AActor::EndViewTarget((AActor *)this,param_1);
  EVar1 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar1 != NM_DedicatedServer) {
    pAVar2 = GetLocalViewingPlayerController(this);
    this->bIsLocalViewTarget = 0;
    *(uint *)&this->field_0x2c8 =
         *(uint *)&this->field_0x2c8 | -(uint)(pAVar2 != (APlayerController *)0x0) & 0x40;
  }
  return;
}

// FaceRotation @ 1481e4120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::FaceRotation(APawn *this,TRotator<double> *param_1,float param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TRotator<double> local_28;
  
  if (this->bUseControllerRotationPitch != 0 ||
      (this->bUseControllerRotationYaw != 0 || this->bUseControllerRotationRoll != 0)) {
    AActor::GetActorRotation((AActor *)this,&local_28);
    if (this->bUseControllerRotationPitch == 0) {
      param_1->Pitch = local_28.Pitch;
    }
    if (this->bUseControllerRotationYaw == 0) {
      param_1->Yaw = local_28.Yaw;
    }
    if (this->bUseControllerRotationRoll == 0) {
      param_1->Roll = local_28.Roll;
    }
    local_28.Pitch = param_1->Pitch;
    local_28.Yaw = param_1->Yaw;
    local_28.Roll = param_1->Roll;
    AActor::SetActorRotation((AActor *)this,&local_28,None);
  }
  return;
}

// GetActorEyesViewPoint @ 1481f4120

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
APawn::GetActorEyesViewPoint(APawn *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 *puVar5;
  double *pdVar6;
  undefined1 local_28 [32];
  
  puVar5 = (undefined4 *)(**(code **)(this->_padding_ + 0x838))(this,local_28);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)&param_1->field0_0x0 = *puVar5;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc) = uVar3;
  (param_1->field0_0x0)._s_0.Z = *(double *)(puVar5 + 4);
  pdVar6 = (double *)(**(code **)(this->_padding_ + 0x830))(this,local_28);
  dVar4 = pdVar6[1];
  param_2->Pitch = *pdVar6;
  param_2->Yaw = dVar4;
  param_2->Roll = pdVar6[2];
  return;
}

// GetBaseAimRotation @ 1481f4330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
APawn::GetBaseAimRotation(APawn *this,TRotator<double> *__return_storage_ptr__)

{
  AController *pAVar1;
  UDemoNetDriver *this_00;
  char cVar2;
  bool bVar3;
  uint uVar4;
  TRotator<double> *pTVar5;
  UWorld *pUVar6;
  double dVar7;
  undefined1 local_38 [24];
  TRotator<double> local_20;
  
  if (((this->Controller).field0_0x0.DebugPtr != (AController *)0x0) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x848))(), cVar2 == '\0')) {
    pAVar1 = (this->Controller).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x840))(pAVar1,local_38,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pTVar5 = AActor::GetActorRotation((AActor *)this,&local_20);
  dVar7 = pTVar5->Yaw;
  __return_storage_ptr__->Pitch = pTVar5->Pitch;
  __return_storage_ptr__->Yaw = dVar7;
  __return_storage_ptr__->Roll = pTVar5->Roll;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)__return_storage_ptr__->Pitch >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(__return_storage_ptr__->Pitch,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    return __return_storage_ptr__;
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  if ((pUVar6 != (UWorld *)0x0) &&
     (this_00 = (pUVar6->DemoNetDriver).field0_0x0.DebugPtr, this_00 != (UDemoNetDriver *)0x0)) {
    bVar3 = UDemoNetDriver::IsPlaying(this_00);
    if ((bVar3) &&
       (uVar4 = FNetworkDemoHeader::GetCustomVersion
                          (&(this_00->ReplayHelper).PlaybackDemoHeader,
                           &FEngineNetworkCustomVersion::Guid), uVar4 < 0x18)) {
      dVar7 = (double)this->RemoteViewPitch * ___real_3ff6969696969696;
      goto LAB_1481f4466;
    }
    bVar3 = UDemoNetDriver::IsPlaying(this_00);
    if ((bVar3) &&
       (uVar4 = FNetworkDemoHeader::GetCustomVersion
                          (&(this_00->ReplayHelper).PlaybackDemoHeader,
                           &FEngineNetworkCustomVersion::Guid), uVar4 < 0x2a)) {
      dVar7 = (double)this->RemoteViewPitch * __real_3ff6800000000000;
      goto LAB_1481f4466;
    }
  }
  dVar7 = (double)this->RemoteViewPitch16 * __real_3f76800000000000;
LAB_1481f4466:
  __return_storage_ptr__->Pitch = dVar7;
  return __return_storage_ptr__;
}

// GetControlRotation @ 1481f5190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
APawn::GetControlRotation(APawn *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  AController *pAVar2;
  double dVar3;
  double *pdVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  pAVar2 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar2 == (AController *)0x0) {
    pdVar4 = &local_28;
    local_28 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_20 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pdVar4 = (double *)(**(code **)(pAVar2->_padding_ + 0x7a8))(pAVar2,&local_28);
  }
  dVar3 = pdVar4[1];
  dVar1 = pdVar4[2];
  __return_storage_ptr__->Pitch = *pdVar4;
  __return_storage_ptr__->Yaw = dVar3;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetDamageInstigator @ 1481f5460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AController * __thiscall
APawn::GetDamageInstigator(APawn *this,AController *param_1,UDamageType *param_2)

{
  AController *pAVar1;
  
  if ((((param_1 == (AController *)0x0) || (param_1 == (this->Controller).field0_0x0.DebugPtr)) &&
      (param_2->bCausedByWorld != 0)) &&
     (pAVar1 = (this->LastHitBy).field0_0x0.DebugPtr, pAVar1 != (AController *)0x0)) {
    param_1 = pAVar1;
  }
  return param_1;
}

// GetDefaultHalfHeight @ 1481f59a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall APawn::GetDefaultHalfHeight(APawn *this)

{
  longlong *plVar1;
  APawn *pAVar2;
  float local_res8 [2];
  undefined1 local_res10 [8];
  
  pAVar2 = UClass::GetDefaultObject<APawn>((UClass *)this->_padding_);
  plVar1 = (longlong *)pAVar2->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5b0))(plVar1);
    (**(code **)(*plVar1 + 0x5a8))(plVar1,local_res10,local_res8);
    return local_res8[0];
  }
  pAVar2 = UClass::GetDefaultObject<APawn>((UClass *)this->_padding_);
  (**(code **)(pAVar2->_padding_ + 0x688))(pAVar2,local_res10,local_res8);
  return local_res8[0];
}

// GetGravityDirection @ 1481fab20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::GetGravityDirection(APawn *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -1.0;
  return __return_storage_ptr__;
}

// GetGravityTransform @ 1481fab50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TQuat<double> * __thiscall
APawn::GetGravityTransform(APawn *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetHumanReadableName @ 1481fac90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall APawn::GetHumanReadableName(APawn *this,FString *__return_storage_ptr__)

{
  APlayerState *this_00;
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  this_00 = (this->PlayerState).field0_0x0.DebugPtr;
  bVar2 = this_00 == (APlayerState *)0x0;
  if (bVar2) {
    pFVar1 = AActor::GetHumanReadableName((AActor *)this,&local_28);
  }
  else {
    pFVar1 = APlayerState::GetPlayerName(this_00,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLastMovementInputVector @ 1481fbea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::GetLastMovementInputVector(APawn *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->LastControlInputVector).field0_0x0._s_0.Y;
  dVar1 = (this->LastControlInputVector).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LastControlInputVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLifetimeReplicatedProps @ 1481fbed0

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
APawn::GetLifetimeReplicatedProps
          (APawn *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18;
  FString local_48;
  FDoRepLifetimeParams local_38;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,0xb,L"PlayerState",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38.bIsPushBased = false;
  local_38._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  pFVar2 = ::FName::FName(&local_res18,10,L"Controller",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.Condition = COND_None;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38._8_8_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  local_38.Condition = COND_ReplayOnly;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38._8_8_ = local_38._8_8_ & 0xffffffffffffff00;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0xf,L"RemoteViewPitch",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  local_38.Condition = COND_SkipOwner;
  local_38.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_38._8_8_ = local_38._8_8_ & 0xffffffffffffff00;
  local_38.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  pFVar2 = ::FName::FName(&local_res18,0x11,L"RemoteViewPitch16",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,&local_48);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_38);
  return;
}

// GetLocalViewingPlayerController @ 1481fc180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APlayerController * __thiscall APawn::GetLocalViewingPlayerController(APawn *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  APawn *pAVar8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; iVar3 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      if ((local_18.Container)->ArrayNum <= local_18.Index) {
        return (APlayerController *)0x0;
      }
      uVar6 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar6 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pAVar7 = (APlayerController *)(*pcVar1)();
        return pAVar7;
      }
      pAVar7 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if (((pAVar7 != (APlayerController *)0x0) &&
          (cVar5 = (**(code **)(pAVar7->_padding_ + 0x7f0))(pAVar7), cVar5 != '\0')) &&
         (pAVar8 = (APawn *)(**(code **)(pAVar7->_padding_ + 0x7e0))(pAVar7), pAVar8 == this)) {
        return pAVar7;
      }
    }
  }
  return (APlayerController *)0x0;
}

// GetMoveGoalReachTest @ 1481fc790

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
APawn::GetMoveGoalReachTest
          (APawn *this,AActor *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float *param_4,float *param_5)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar1;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x0001481fc7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this[-1]._padding_ + 0x688))(&this[-1]._padding_,param_4,param_5);
  return;
}

// GetMovementBaseActor @ 1481fc7d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __cdecl APawn::GetMovementBaseActor(APawn *param_1)

{
  longlong lVar1;
  
  if (param_1 != (APawn *)0x0) {
    lVar1 = (**(code **)(param_1->_padding_ + 0x768))();
    if (lVar1 != 0) {
      return *(AActor **)(lVar1 + 0xa8);
    }
  }
  return (AActor *)0x0;
}

// GetMovementComponent @ 1481fc800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnMovementComponent * __thiscall APawn::GetMovementComponent(APawn *this)

{
  code *pcVar1;
  UPawnMovementComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UPawnMovementComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UPawnMovementComponent *)(*pcVar1)(this,&local_res8);
  return pUVar2;
}

// GetNavAgentPropertiesRef @ 1481fc860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavAgentProperties * __thiscall APawn::GetNavAgentPropertiesRef(APawn *this)

{
  INavMovementInterface *pIVar1;
  FNavAgentProperties *pFVar2;
  
  pIVar1 = AActor::FindComponentByInterface<INavMovementInterface>((AActor *)&this[-1]._padding_);
  if (pIVar1 != (INavMovementInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481fc883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FNavAgentProperties *)
             (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,*(code **)((longlong)*pIVar1 + 0x38));
    return pFVar2;
  }
  return &FNavAgentProperties::DefaultProperties;
}

// GetNetConnection @ 1481fc8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNetConnection * __thiscall APawn::GetNetConnection(APawn *this)

{
  AController *pAVar1;
  UNetConnection *pUVar2;
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481fc8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UNetConnection *)(**(code **)(pAVar1->_padding_ + 0x570))();
    return pUVar2;
  }
  pUVar2 = AActor::GetNetConnection((AActor *)this);
  return pUVar2;
}

// GetNetOwner @ 1481fc8e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall APawn::GetNetOwner(APawn *this)

{
  return (AActor *)this;
}

// GetNetOwningPlayer @ 1481fc8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPlayer * __thiscall APawn::GetNetOwningPlayer(APawn *this)

{
  int iVar1;
  AController *pAVar2;
  UClass *pUVar3;
  UPlayer *pUVar4;
  
  if (((char)this->_padding_ != '\x03') ||
     (pAVar2 = (this->Controller).field0_0x0.DebugPtr, pAVar2 == (AController *)0x0)) {
    pUVar4 = AActor::GetNetOwningPlayer((AActor *)this);
    return pUVar4;
  }
  pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar4 = (UPlayer *)0x0;
  }
  else {
    pUVar4 = (UPlayer *)pAVar2[1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      return pUVar4;
    }
  }
  return pUVar4;
}

// GetNetOwningPlayerAnyRole @ 1481fc970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPlayer * __thiscall APawn::GetNetOwningPlayerAnyRole(APawn *this)

{
  int iVar1;
  AController *pAVar2;
  UClass *pUVar3;
  UPlayer *pUVar4;
  
  pAVar2 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar2 == (AController *)0x0) {
    pUVar4 = AActor::GetNetOwningPlayer((AActor *)this);
    return pUVar4;
  }
  pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    pUVar4 = (UPlayer *)0x0;
  }
  else {
    pUVar4 = (UPlayer *)pAVar2[1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      return pUVar4;
    }
  }
  return pUVar4;
}

// GetOverrideInputComponentClass @ 1481fcb80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSubclassOf<UInputComponent> __thiscall APawn::GetOverrideInputComponentClass(APawn *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->OverrideInputComponentClass).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UInputComponent>)in_RDX.field0_0x0;
}

// GetPawnNoiseEmitterComponent @ 1481fdad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPawnNoiseEmitterComponent * __thiscall APawn::GetPawnNoiseEmitterComponent(APawn *this)

{
  code *pcVar1;
  AController *this_00;
  UPawnNoiseEmitterComponent *pUVar2;
  UClass *local_res8;
  
  pcVar1 = *(code **)(this->_padding_ + 0x738);
  local_res8 = Z_Construct_UClass_UPawnNoiseEmitterComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UPawnNoiseEmitterComponent *)(*pcVar1)(this,&local_res8);
  if ((pUVar2 == (UPawnNoiseEmitterComponent *)0x0) &&
     (this_00 = (this->Controller).field0_0x0.DebugPtr, this_00 != (AController *)0x0)) {
    pUVar2 = AActor::FindComponentByClass<UPawnNoiseEmitterComponent>((AActor *)this_00);
  }
  return pUVar2;
}

// GetPawnViewLocation @ 1481fdb40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::GetPawnViewLocation(APawn *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = this->_padding_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar2 != 0) {
    uVar3 = *(double *)(lVar2 + 0x220);
    uVar4 = *(double *)(lVar2 + 0x210);
    uVar5 = *(double *)(lVar2 + 0x218);
  }
  fVar1 = this->BaseEyeHeight;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar1 + (double)uVar3;
  return __return_storage_ptr__;
}

// GetPendingMovementInputVector @ 1481fdbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::GetPendingMovementInputVector(APawn *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ControlInputVector).field0_0x0._s_0.Y;
  dVar1 = (this->ControlInputVector).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ControlInputVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPhysicsVolume @ 1481fdce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APhysicsVolume * __thiscall APawn::GetPhysicsVolume(APawn *this)

{
  longlong *plVar1;
  APhysicsVolume *pAVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x760))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481fdd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pAVar2 = (APhysicsVolume *)(**(code **)(*plVar1 + 0x520))(plVar1,*(code **)(*plVar1 + 0x520));
    return pAVar2;
  }
  pAVar2 = AActor::GetPhysicsVolume((AActor *)this);
  return pAVar2;
}

// GetPlatformUserId @ 1481fdd20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPlatformUserId __thiscall APawn::GetPlatformUserId(APawn *this)

{
  int iVar1;
  APlayerController *this_00;
  UClass *pUVar2;
  undefined4 *in_RDX;
  
  this_00 = (APlayerController *)(this->Controller).field0_0x0.DebugPtr;
  if (this_00 != (APlayerController *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      APlayerController::GetPlatformUserId(this_00);
      return (FPlatformUserId)(int)in_RDX;
    }
  }
  *in_RDX = 0xffffffff;
  return (FPlatformUserId)(int)in_RDX;
}

// GetPrivateStaticClass @ 1481fde50

UClass * __cdecl APawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Pawn",&Z_Registration_Info_UClass_APawn.InnerSingleton,
               StaticRegisterNativesAPawn,0x340,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_APawn,
               L"Game",InternalConstructor<APawn>,InternalVTableHelperCtorCaller<APawn>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APawn.InnerSingleton;
}

// GetVelocity @ 1482000c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall APawn::GetVelocity(APawn *this,TVector<double> *__return_storage_ptr__)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  TVector<double> *pTVar5;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x4f8))(plVar1,0);
    if (cVar3 != '\0') {
      (**(code **)(*(longlong *)this->_padding_ + 0x558))
                ((longlong *)this->_padding_,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  lVar4 = (**(code **)(this->_padding_ + 0x760))(this);
  if (lVar4 == 0) {
    pTVar5 = &UE::Math::TVector<double>::ZeroVector;
  }
  else {
    pTVar5 = (TVector<double> *)(lVar4 + 0xd8);
  }
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetViewRotation @ 148200e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
APawn::GetViewRotation(APawn *this,TRotator<double> *__return_storage_ptr__)

{
  AController *pAVar1;
  code *pcVar2;
  double dVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  UWorld *this_00;
  TRotator<double> *pTVar8;
  UObject *pUVar9;
  APawn *pAVar10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x7a8))();
    return __return_storage_ptr__;
  }
  if ((byte)this->_padding_ < 3) {
    this_00 = AActor::GetWorld((AActor *)this);
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; (iVar5 = local_18.Index, pTVar4 = local_18.Container, -1 < local_18.Index &&
           (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1)
    {
      uVar7 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TRotator<double> *)(*pcVar2)();
        return pTVar8;
      }
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar5 * 8));
      if (((pUVar9 != (UObject *)0x0) &&
          (*(APlayerCameraManager **)&pUVar9[0x16].field_0x20 != (APlayerCameraManager *)0x0)) &&
         (pAVar10 = APlayerCameraManager::GetViewTargetPawn
                              (*(APlayerCameraManager **)&pUVar9[0x16].field_0x20), pAVar10 == this)
         ) {
        dVar3 = *(double *)&pUVar9[0x18].field_0x8;
        __return_storage_ptr__->Pitch = *(double *)(pUVar9 + 0x18);
        __return_storage_ptr__->Yaw = dVar3;
        __return_storage_ptr__->Roll = *(double *)&pUVar9[0x18].field_0x10;
        return __return_storage_ptr__;
      }
    }
  }
  AActor::GetActorRotation((AActor *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InFreeCam @ 1482013c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::InFreeCam(APawn *this)

{
  int iVar1;
  FName FVar2;
  UClass *pUVar3;
  AController *pAVar4;
  int *piVar5;
  
  pAVar4 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar4 != (AController *)0x0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1482013fb;
  }
  pAVar4 = (AController *)0x0;
LAB_1482013fb:
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_FreeCam,L"FreeCam");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&NAME_FreeCamDefault,L"FreeCam_Default");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (((pAVar4 != (AController *)0x0) && (pAVar4[1]._padding_ != 0)) &&
     ((FVar2 = *(FName *)(pAVar4[1]._padding_ + 0x2d0), FVar2 == NAME_FreeCam ||
      (FVar2 == NAME_FreeCamDefault)))) {
    return true;
  }
  return false;
}

// Internal_AddMovementInput @ 1482054a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::Internal_AddMovementInput(APawn *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  
  if ((!param_2) && (cVar5 = (**(code **)(this->_padding_ + 0x8b0))(), cVar5 != '\0')) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->ControlInputVector).field0_0x0._s_0.Y;
  (this->ControlInputVector).field0_0x0._s_0.X =
       (this->ControlInputVector).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (this->ControlInputVector).field0_0x0._s_0.Z;
  (this->ControlInputVector).field0_0x0._s_0.Y = dVar1 + dVar2;
  (this->ControlInputVector).field0_0x0._s_0.Z = dVar3 + dVar4;
  return;
}

// Internal_ConsumeMovementInputVector @ 148205520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
APawn::Internal_ConsumeMovementInputVector(APawn *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = (this->ControlInputVector).field0_0x0._s_0.Y;
  dVar1 = (this->ControlInputVector).field0_0x0._s_0.Z;
  (this->LastControlInputVector).field0_0x0._s_0.X = (this->ControlInputVector).field0_0x0._s_0.X;
  (this->LastControlInputVector).field0_0x0._s_0.Y = dVar2;
  (this->LastControlInputVector).field0_0x0._s_0.Z = dVar1;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ControlInputVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ControlInputVector).field0_0x0._s_0.Y = (double)uVar3;
  (this->ControlInputVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = (this->LastControlInputVector).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LastControlInputVector).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// IsBasedOnActor @ 1482055d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsBasedOnActor(APawn *this,AActor *param_1)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x768))();
  if (((lVar2 != 0) && (*(AActor **)(lVar2 + 0xa8) != (AActor *)0x0)) &&
     (*(AActor **)(lVar2 + 0xa8) == param_1)) {
    return true;
  }
  bVar1 = AActor::IsBasedOnActor((AActor *)this,param_1);
  return bVar1;
}

// IsBotControlled @ 1482056e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsBotControlled(APawn *this)

{
  APlayerState *pAVar1;
  
  pAVar1 = (this->PlayerState).field0_0x0.DebugPtr;
  if ((pAVar1 != (APlayerState *)0x0) && (pAVar1->bIsABot != '\0')) {
    return true;
  }
  return false;
}

// IsControlled @ 148205790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsControlled(APawn *this)

{
  int iVar1;
  UClass *pUVar2;
  AController *pAVar3;
  
  pAVar3 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar3 != (AController *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1482057c7;
  }
  pAVar3 = (AController *)0x0;
LAB_1482057c7:
  return pAVar3 != (AController *)0x0;
}

// IsLocalPlayerControllerViewingAPawn @ 148205890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsLocalPlayerControllerViewingAPawn(APawn *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  UWorld *this_00;
  UObject *pUVar8;
  longlong lVar9;
  UObject *pUVar10;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::GetPlayerControllerIterator(this_00,&local_18);
    for (; iVar3 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index;
        local_18.Index = local_18.Index + 1) {
      if ((local_18.Container)->ArrayNum <= local_18.Index) {
        return false;
      }
      uVar7 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar7 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if ((((pUVar8 != (UObject *)0x0) &&
           (cVar6 = (**(code **)(*(longlong *)pUVar8 + 0x7f0))(pUVar8), cVar6 != '\0')) &&
          (lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x7e0))(pUVar8), lVar9 != 0)) &&
         (pUVar10 = (UObject *)(**(code **)(*(longlong *)pUVar8 + 0x7e0))(pUVar8), pUVar10 != pUVar8
         )) {
        return true;
      }
    }
  }
  return false;
}

// IsLocallyControlled @ 1482059a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsLocallyControlled(APawn *this)

{
  AController *pAVar1;
  char cVar2;
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x7f0))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsLocallyViewed @ 1482059e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsLocallyViewed(APawn *this)

{
  return this->bIsLocalViewTarget;
}

// IsMoveInputIgnored @ 148205a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsMoveInputIgnored(APawn *this)

{
  AController *pAVar1;
  char cVar2;
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
    cVar2 = (**(code **)(pAVar1->_padding_ + 0x868))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsNetRelevantFor @ 148205a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
APawn::IsNetRelevantFor(APawn *this,AActor *param_1,AActor *param_2,TVector<double> *param_3)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  APawn *pAVar7;
  APawn *pAVar8;
  longlong lVar9;
  longlong lVar10;
  UClass *pUVar11;
  
  if (((this->_padding_ & 8) != 0) ||
     (pAVar8 = this, (AController *)param_1 == (this->Controller).field0_0x0.DebugPtr)) {
    return true;
  }
  do {
    if (pAVar8 == (APawn *)param_2) {
      return true;
    }
    plVar2 = &pAVar8->_padding_;
    pAVar7 = this;
    pAVar8 = (APawn *)*plVar2;
  } while ((APawn *)*plVar2 != (APawn *)0x0);
  do {
    if (pAVar7 == (APawn *)param_1) {
      return true;
    }
    plVar2 = &pAVar7->_padding_;
    pAVar7 = (APawn *)*plVar2;
  } while ((APawn *)*plVar2 != (APawn *)0x0);
  if (this == (APawn *)param_2) {
    return true;
  }
  pAVar8 = AActor::GetInstigator((AActor *)this);
  if ((APawn *)param_2 == pAVar8) {
    return true;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x610))(this,param_2);
  if (cVar3 != '\0') {
    return true;
  }
  if ((param_2 != (AActor *)0x0) &&
     (cVar3 = (**(code **)(param_2->_padding_ + 0x610))(param_2,this), cVar3 != '\0')) {
    return true;
  }
  bVar1 = (byte)this->_padding_;
  if ((((char)bVar1 < '\0') || ((bVar1 & 4) != 0)) &&
     (((longlong *)this->_padding_ == (longlong *)0x0 ||
      (iVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x5e0))(), iVar6 == 0)))) {
    return false;
  }
  lVar9 = (**(code **)(this->_padding_ + 0x768))(this);
  if (((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xa8), plVar2 != (longlong *)0x0)) &&
     (lVar10 = (**(code **)(this->_padding_ + 0x760))(this), lVar10 != 0)) {
    pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar6 = (int)pUVar11->_padding_;
    if (((iVar6 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8)
         == &pUVar11->_padding_)) || (plVar2 == (longlong *)this->_padding_)) {
      uVar4 = (**(code **)(*plVar2 + 0x528))(plVar2,param_1,param_2,param_3);
      return (bool)uVar4;
    }
  }
  pUVar11 = Z_Construct_UClass_AGameNetworkManager_NoRegister();
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  if (((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr[0x15].field_0x15 != '\0') &&
     (bVar5 = AActor::IsWithinNetRelevancyDistance((AActor *)this,param_3), !bVar5)) {
    return false;
  }
  return true;
}

// IsPawnControlled @ 148205c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsPawnControlled(APawn *this)

{
  return (this->Controller).field0_0x0.DebugPtr != (AController *)0x0;
}

// IsPlayerControlled @ 148205ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::IsPlayerControlled(APawn *this)

{
  APlayerState *pAVar1;
  
  pAVar1 = (this->PlayerState).field0_0x0.DebugPtr;
  if ((pAVar1 != (APlayerState *)0x0) && (pAVar1->bIsABot == '\0')) {
    return true;
  }
  return false;
}

// MoveIgnoreActorAdd @ 148207100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::MoveIgnoreActorAdd(APawn *this,AActor *param_1)

{
  int iVar1;
  UPrimitiveComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (UPrimitiveComponent *)this->_padding_;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UPrimitiveComponent::IgnoreActorWhenMoving(this_00,param_1,true);
    }
  }
  return;
}

// MoveIgnoreActorRemove @ 148207160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::MoveIgnoreActorRemove(APawn *this,AActor *param_1)

{
  int iVar1;
  UPrimitiveComponent *this_00;
  UClass *pUVar2;
  
  this_00 = (UPrimitiveComponent *)this->_padding_;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UPrimitiveComponent::IgnoreActorWhenMoving(this_00,param_1,false);
    }
  }
  return;
}

// NotifyControllerChanged @ 1482082f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::NotifyControllerChanged(APawn *this)

{
  TObjectPtr<AController>_u_0 TVar1;
  AController *pAVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UFunction *pUVar6;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar7;
  UGameInstance *pUVar8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  TObjectPtr<AController>_u_0 local_48;
  TObjectPtr<AController>_u_0 local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  APawn *local_28;
  AController *local_20;
  TObjectPtr<AController>_u_0 local_18;
  
  local_48 = (this->PreviousController).field0_0x0;
  local_40 = (this->Controller).field0_0x0;
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveControllerChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_48);
  TVar1 = (this->Controller).field0_0x0;
  pAVar2 = (this->PreviousController).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  local_68 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->ReceiveControllerChangedDelegate != (FPawnControllerChangedSignature)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"ReceiveControllerChangedDelegate");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnControllerChangedSignature_MCSignature,APawn,FPawnControllerChangedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar7 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_38,(UObject *)this,FVar4);
    local_50.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_68 = pTVar7->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_60,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_68 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_68 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28 = this;
    local_20 = pAVar2;
    local_18 = TVar1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_68,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
  pUVar8 = AActor::GetGameInstance((AActor *)this);
  if (pUVar8 != (UGameInstance *)0x0) {
    FOnPawnControllerChanged_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar8->OnPawnControllerChangedDelegates,this,(this->Controller).field0_0x0.DebugPtr
              );
  }
  pAVar2 = (this->Controller).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (AController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  (this->PreviousController).field0_0x0.DebugPtr = pAVar2;
  return;
}

// NotifyRestarted @ 148208540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::NotifyRestarted(APawn *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  UFunction *pUVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  APawn *local_res8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_18;
  
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveRestarted);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
  local_38 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->ReceiveRestartedDelegate != (FPawnRestartedSignature)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"ReceiveRestartedDelegate");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPawnRestartedSignature_MCSignature,APawn,FPawnRestartedSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar5 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_18,(UObject *)this,FVar2);
    local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_38 = pTVar5->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_30,&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (local_38 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_38 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res8 = this;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_38,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  return;
}

// OnRep_Controller @ 148208d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::OnRep_Controller(APawn *this)

{
  int iVar1;
  AController *this_00;
  AController *pAVar2;
  APawn *pAVar3;
  AController *pAVar4;
  UClass *pUVar5;
  bool bVar6;
  
  this_00 = (this->Controller).field0_0x0.DebugPtr;
  if (UE::Gameplay::CVars::bAlwaysNotifyClientOnControllerChange) {
    pAVar2 = (this->PreviousController).field0_0x0.DebugPtr;
    if (pAVar2 == (AController *)0x0) {
      bVar6 = this_00 != (AController *)0x0;
    }
    else {
      bVar6 = pAVar2 != this_00;
    }
  }
  else {
    bVar6 = this_00 == (AController *)0x0;
  }
  if (this_00 == (AController *)0x0) {
LAB_148208d79:
    if (!bVar6) {
      return;
    }
  }
  else {
    pAVar3 = (this_00->Pawn).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pAVar3 != (APawn *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
        goto LAB_148208d79;
      }
    }
    else if (pAVar3 != (APawn *)0x0) goto LAB_148208d79;
    AController::SetPawnFromRep(this_00,this);
    pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar5->_padding_)) && ((char)this_00[1]._padding_ != '\0')) {
      pAVar2 = (this->Controller).field0_0x0.DebugPtr;
      pAVar4 = *(AController **)(this_00[1]._padding_ + 0x350);
      if (pAVar4 == (AController *)0x0) {
        bVar6 = pAVar2 == (AController *)0x0;
      }
      else {
        bVar6 = pAVar4 == pAVar2;
      }
      if (bVar6) {
        (**(code **)(this_00->_padding_ + 0xf00))(this_00,this);
      }
    }
  }
  (**(code **)(this->_padding_ + 0x7f8))(this);
  return;
}

// OnRep_PlayerState @ 148208e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::OnRep_PlayerState(APawn *this)

{
  SetPlayerState(this,(this->PlayerState).field0_0x0.DebugPtr);
  return;
}

// OutsideWorldBounds @ 148209510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::OutsideWorldBounds(APawn *this)

{
  int iVar1;
  AController *pAVar2;
  longlong lVar3;
  UClass *pUVar4;
  float fVar5;
  
  if (ZPULL(*(undefined4 *)&this->field_0x2c8,5,1) != 0) {
    return;
  }
  *(uint *)&this->field_0x2c8 = *(undefined4 *)&this->field_0x2c8 | 0x20;
  if ((char)this->_padding_ == '\x03') {
    pAVar2 = (this->Controller).field0_0x0.DebugPtr;
    if (pAVar2 != (AController *)0x0) {
      pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
      lVar3 = pAVar2->_padding_;
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14820958f;
    }
    AActor::Destroy((AActor *)this,false,true);
  }
  else {
LAB_14820958f:
    (**(code **)(this->_padding_ + 0x858))(this);
    (**(code **)(this->_padding_ + 0x780))(this);
    (**(code **)(this->_padding_ + 0x368))(this,1);
    fVar5 = *(float *)((longlong)&this->_padding_ + 4);
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= __real_3dcccccd) {
      fVar5 = __real_3dcccccd;
    }
    (**(code **)(this->_padding_ + 0x400))(this,fVar5);
  }
  this->bProcessingOutsideWorldBounds = 0;
  return;
}

// PawnClientRestart @ 14820a930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PawnClientRestart(APawn *this)

{
  byte bVar1;
  int iVar2;
  AController *pAVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  
  (**(code **)(this->_padding_ + 0x808))();
  pAVar3 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar3 != (AController *)0x0) {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if (((iVar2 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar6->_padding_)) &&
       (cVar4 = (**(code **)(pAVar3->_padding_ + 0x7f0))(pAVar3), cVar4 != '\0')) {
      if ((char)pAVar3[1]._padding_ != '\0') {
        (**(code **)(pAVar3->_padding_ + 0xf00))(pAVar3,this);
      }
      if (this->_padding_ == 0) {
        pUVar7 = (UObject *)(**(code **)(this->_padding_ + 0x870))(this);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UObject *)0x0)) {
          this->_padding_ = (longlong)pUVar7;
          if (pUVar7 == (UObject *)0x0) {
            return;
          }
        }
        else {
          UE::GC::MarkAsReachable(pUVar7);
          this->_padding_ = (longlong)pUVar7;
        }
        (**(code **)(this->_padding_ + 0x880))(this,pUVar7);
        UActorComponent::RegisterComponent((UActorComponent *)this->_padding_);
        bVar5 = UInputDelegateBinding::SupportsInputDelegate((UClass *)this->_padding_);
        if (bVar5) {
          bVar1 = *(byte *)(this->_padding_ + 0x144);
          *(byte *)(this->_padding_ + 0x144) =
               (*(byte *)((longlong)&this->_padding_ + 2) >> 3 ^ bVar1) & 1 ^ bVar1;
          UInputDelegateBinding::BindInputDelegatesWithSubojects
                    ((AActor *)this,(UInputComponent *)this->_padding_);
        }
      }
    }
  }
  return;
}

// PawnMakeNoise @ 14820aa60

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
APawn::PawnMakeNoise
          (APawn *this,float param_1,TVector<double> *param_2,bool param_3,AActor *param_4)

{
  longlong lVar1;
  APawn *this_00;
  TVector<double>_u_0 local_28;
  
  this_00 = this;
  if (param_4 != (AActor *)0x0) {
    this_00 = (APawn *)param_4;
  }
  if (param_3) {
    lVar1 = this_00->_padding_;
    local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_28._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar1 != 0) {
      local_28._0_4_ = *(undefined4 *)(lVar1 + 0x210);
      local_28._4_4_ = *(undefined4 *)(lVar1 + 0x214);
      local_28._8_4_ = *(undefined4 *)(lVar1 + 0x218);
      local_28._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
      local_28._s_0.Z = *(double *)(lVar1 + 0x220);
    }
  }
  else {
    local_28._0_4_ = *(undefined4 *)&param_2->field0_0x0;
    local_28._4_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    local_28._8_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    local_28._12_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  AActor::MakeNoise((AActor *)this_00,param_1,this,(TVector<double> *)&local_28._s_0,0.0,(FName)0x0)
  ;
  return;
}

// PawnStartFire @ 14820ab00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PawnStartFire(APawn *this,uchar param_1)

{
  return;
}

// PossessedBy @ 14820ac00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PossessedBy(APawn *this,AController *param_1)

{
  int iVar1;
  AController *pAVar2;
  APlayerState *this_00;
  APlayerState *this_01;
  APawn *pAVar3;
  AController *pAVar4;
  char cVar5;
  ENetMode EVar6;
  UClass *pUVar7;
  UFunction *pUVar8;
  TObjectPtr<AController>_u_0 local_res8;
  
  (**(code **)(this->_padding_ + 0x500))();
  pAVar2 = (this->Controller).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Controller).field0_0x0.DebugPtr = param_1;
  (**(code **)(this->_padding_ + 0x710))(this);
  AActor::UpdateOwningNetConnection((AActor *)this);
  this_00 = *(APlayerState **)((longlong)(this->Controller).field0_0x0 + 0x2c8);
  if (this_00 != (APlayerState *)0x0) {
    this_01 = (this->PlayerState).field0_0x0.DebugPtr;
    if ((this_01 != (APlayerState *)0x0) &&
       (pAVar3 = (this_01->PawnPrivate).field0_0x0.DebugPtr, pAVar3 == this)) {
      APlayerState::SetPawnPrivate(this_01,(APawn *)0x0);
      FOnPlayerStatePawnSet_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_01->OnPawnSet,this_01
                 ,(this_01->PawnPrivate).field0_0x0.DebugPtr,pAVar3);
    }
    (this->PlayerState).field0_0x0.DebugPtr = this_00;
    pAVar3 = (this_00->PawnPrivate).field0_0x0.DebugPtr;
    APlayerState::SetPawnPrivate(this_00,this);
    FOnPlayerStatePawnSet_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnPawnSet,this_00,
               (this_00->PawnPrivate).field0_0x0.DebugPtr,pAVar3);
    (**(code **)(this->_padding_ + 0x778))(this,this_00,this_01);
  }
  pAVar4 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar4 != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      EVar6 = AActor::InternalGetNetMode((AActor *)this);
      if (EVar6 != NM_Standalone) {
        AActor::SetReplicates((AActor *)this,true);
        cVar5 = (**(code **)(pAVar4->_padding_ + 0x7f0))(pAVar4);
        if (cVar5 == '\0') {
          AActor::SetAutonomousProxy((AActor *)this,true,true);
        }
      }
      goto LAB_14820ada2;
    }
  }
  pUVar7 = StaticClass();
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  AActor::CopyRemoteRoleFrom
            ((AActor *)this,(AActor *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr);
LAB_14820ada2:
  if (pAVar2 != param_1) {
    local_res8 = (this->Controller).field0_0x0;
    pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceivePossessed);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014820adf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x7f8))(this);
    return;
  }
  return;
}

// PostInitializeComponents @ 14820afb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PostInitializeComponents(APawn *this)

{
  int *piVar1;
  EAutoPossessAI EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ENetMode EVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_APawn::PostInitializeComponents(void)_::_2_::FStat_STAT_Pawn_PostInitComponents>
  FVar10;
  UWorld *pUVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Pawn_PostInitComponents ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APawn::PostInitializeComponents(void)_::_2_::FStat_STAT_Pawn_PostInitComponents>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_Pawn_PostInitComponents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Pawn_PostInitComponents,*pFVar9,
                 L"STAT_Pawn_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_Pawn_PostInitComponents;
  if (StatPtr_STAT_Pawn_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APawn::PostInitializeComponents(void)_::_2_::FStat_STAT_Pawn_PostInitComponents>
       )0x0) {
    pFVar9 = ::FName::FName(&local_58,"STAT_Pawn_PostInitComponents");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_APawn::PostInitializeComponents(void)_::_2_::FStat_STAT_Pawn_PostInitComponents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Pawn_PostInitComponents,*pFVar9
                          ,L"STAT_Pawn_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_14820b11d:
    bVar5 = false;
    FVar14 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Pawn.cpp"
                   ,0x86);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14820b11d;
    local_res18.s.LowPart = FVar13.Value;
    local_res18.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  AActor::PostInitializeComponents((AActor *)this);
  if ((this == (APawn *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) goto LAB_14820b1cf;
  pUVar11 = AActor::GetWorld((AActor *)this);
  if (((((this->AutoPossessPlayer).Value != '\0') || (this->AutoPossessAI == Disabled)) ||
      ((this->Controller).field0_0x0.DebugPtr != (AController *)0x0)) ||
     (EVar8 = AActor::InternalGetNetMode((AActor *)this), EVar8 == NM_Client)) goto LAB_14820b1c7;
  EVar2 = this->AutoPossessAI;
  if (EVar2 == PlacedInWorldOrSpawned) {
LAB_14820b1bb:
    (**(code **)(this->_padding_ + 0x860))(this);
  }
  else if (EVar2 == PlacedInWorld) {
    if (pUVar11->bStartup != '\0') goto LAB_14820b1bb;
  }
  else if ((EVar2 == Spawned) && (pUVar11->bStartup == '\0')) goto LAB_14820b1bb;
LAB_14820b1c7:
  UpdateNavAgent(this);
LAB_14820b1cf:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PostLoad @ 14820b360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PostLoad(APawn *this)

{
  AActor::PostLoad((AActor *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  return;
}

// PostNetReceiveLocationAndRotation @ 14820b3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PostNetReceiveLocationAndRotation(APawn *this)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  TVector<double> *pTVar4;
  TRotator<double> *pTVar5;
  UWorld *pUVar6;
  FRepMovement *pFVar7;
  UObjectBaseUtility *this_00;
  UClass *pUVar8;
  longlong *plVar9;
  TQuat<double> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double>_u_0 local_78;
  TRotator<double> local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pTVar4 = FRepMovement::RebaseOntoLocalOrigin
                     ((TVector<double> *)&local_78._s_0,(TVector<double> *)&this->_padding_,
                      (AActor *)this);
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar12 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    uVar11 = *(undefined4 *)(lVar2 + 0x220);
    uVar12 = *(undefined4 *)(lVar2 + 0x224);
    uVar13 = *(double *)(lVar2 + 0x210);
    uVar14 = *(double *)(lVar2 + 0x218);
  }
  local_a8._s_0.Z = (double)CONCAT44(uVar12,uVar11);
  if ((((((double)uVar13 != (pTVar4->field0_0x0)._s_0.X) ||
        ((double)uVar14 != (pTVar4->field0_0x0)._s_0.Y)) ||
       (local_a8._s_0.Z != (pTVar4->field0_0x0)._s_0.Z)) ||
      (((pTVar5 = AActor::GetActorRotation((AActor *)this,(TRotator<double> *)&local_78._s_0),
        pTVar5->Pitch != (double)this->_padding_ || (pTVar5->Yaw != (double)this->_padding_)) ||
       ((pTVar5->Roll != (double)this->_padding_ ||
        (fVar1 = *(float *)&this->_padding_, pUVar6 = AActor::GetWorld((AActor *)this),
        (double)fVar1 == pUVar6->TimeSeconds)))))) && ((char)this->_padding_ == '\x01')) {
    pFVar7 = AActor::GetReplicatedMovement_Mutable((AActor *)this);
    (pFVar7->Location).field0_0x0._s_0.Z =
         (pFVar7->Location).field0_0x0._s_0.Z + __real_3f847ae140000000;
    lVar2 = this->_padding_;
    if (lVar2 == 0) {
      local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_28 = ___xmm_3ff00000000000000000000000000000;
      uStack_20 = _UNK_15061cbc8;
    }
    else {
      local_80 = *(double *)(lVar2 + 0x220);
      local_90 = *(double *)(lVar2 + 0x210);
      dStack_88 = *(double *)(lVar2 + 0x218);
      local_38 = *(undefined4 *)(lVar2 + 0x1f0);
      uStack_34 = *(undefined4 *)(lVar2 + 500);
      uStack_30 = *(undefined4 *)(lVar2 + 0x1f8);
      uStack_2c = *(undefined4 *)(lVar2 + 0x1fc);
      local_28 = *(undefined8 *)(lVar2 + 0x200);
      uStack_20 = *(undefined8 *)(lVar2 + 0x208);
    }
    FRepMovement::RebaseOntoLocalOrigin
              ((TVector<double> *)&local_a8._s_0,&pFVar7->Location,(AActor *)this);
    local_58.Pitch = (pFVar7->Rotation).Pitch;
    local_58.Yaw = (pFVar7->Rotation).Yaw;
    local_58.Roll = (pFVar7->Rotation).Roll;
    local_78._s_0.X = local_a8._s_0.X;
    local_78._s_0.Y = local_a8._s_0.Y;
    local_78._s_0.Z = local_a8._s_0.Z;
    AActor::SetActorLocationAndRotation
              ((AActor *)this,(TVector<double> *)&local_78._s_0,&local_58,false,(FHitResult *)0x0,
               None);
    this_00 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x760))(this);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar8 = Z_Construct_UClass_UNetworkPredictionInterface_NoRegister();
      plVar9 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar8);
      if (plVar9 != (longlong *)0x0) {
        pcVar3 = *(code **)(*plVar9 + 0x20);
        pTVar10 = UE::Math::TRotator<double>::Quaternion
                            (&pFVar7->Rotation,(TQuat<double> *)&local_78._s_0);
        (*pcVar3)(plVar9,&local_90,&local_38,&local_a8,pTVar10);
      }
    }
  }
  return;
}

// PostNetReceiveVelocity @ 14820b610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PostNetReceiveVelocity(APawn *this,TVector<double> *param_1)

{
  double dVar1;
  UPhysicsSettings *pUVar2;
  longlong lVar3;
  
  pUVar2 = UPhysicsSettings::Get();
  if ((pUVar2->PhysicsPrediction).bEnablePhysicsPrediction != false) {
    AActor::PostNetReceiveVelocity((AActor *)this,param_1);
  }
  if ((char)this->_padding_ == '\x01') {
    lVar3 = (**(code **)(this->_padding_ + 0x760))(this);
    if (lVar3 != 0) {
      dVar1 = (param_1->field0_0x0)._s_0.Y;
      *(double *)(lVar3 + 0xd8) = (param_1->field0_0x0)._s_0.X;
      *(double *)(lVar3 + 0xe0) = dVar1;
      *(double *)(lVar3 + 0xe8) = (param_1->field0_0x0)._s_0.Z;
    }
  }
  return;
}

// PostRegisterAllComponents @ 14820b680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PostRegisterAllComponents(APawn *this)

{
  AActor::PostRegisterAllComponents((AActor *)this);
  UpdateNavAgent(this);
  return;
}

// PreInitializeComponents @ 14820b720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PreInitializeComponents(APawn *this)

{
  byte bVar1;
  ENetMode EVar2;
  APawn *pAVar3;
  APlayerController *this_00;
  UWorld *pUVar4;
  
  AActor::PreInitializeComponents((AActor *)this);
  pAVar3 = AActor::GetInstigator((AActor *)this);
  if (pAVar3 == (APawn *)0x0) {
    AActor::SetInstigator((AActor *)this,this);
  }
  if (((this->AutoPossessPlayer).Value != '\0') &&
     (EVar2 = AActor::InternalGetNetMode((AActor *)this), EVar2 != NM_Client)) {
    bVar1 = (this->AutoPossessPlayer).Value;
    this_00 = UGameplayStatics::GetPlayerController((UObject *)this,bVar1 - 1);
    if (this_00 == (APlayerController *)0x0) {
      pUVar4 = AActor::GetWorld((AActor *)this);
      ULevel::RegisterActorForAutoReceiveInput
                ((pUVar4->PersistentLevel).field0_0x0.DebugPtr,(AActor *)this,bVar1 - 1);
    }
    else {
      AController::Possess((AController *)this_00,this);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014820b7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7b8))(this);
  return;
}

// PreReplication @ 14820b7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::PreReplication(APawn *this,IRepChangedPropertyTracker *param_1)

{
  AController *pAVar1;
  double *pdVar2;
  undefined1 local_28 [32];
  
  AActor::PreReplication((AActor *)this,param_1);
  if (((char)this->_padding_ == '\x03') &&
     (pAVar1 = (this->Controller).field0_0x0.DebugPtr, pAVar1 != (AController *)0x0)) {
    pdVar2 = (double *)(**(code **)(pAVar1->_padding_ + 0x7a8))(pAVar1,local_28);
    this->RemoteViewPitch16 =
         (ushort)((longlong)ROUND(*pdVar2 * __real_4076c16c16c16c17 + __real_3fe0000000000000) >> 1)
    ;
  }
  return;
}

// ReachedDesiredRotation @ 14820c460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::ReachedDesiredRotation(APawn *this)

{
  AController *pAVar1;
  double dVar2;
  bool bVar3;
  TRotator<double> *pTVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 local_68 [24];
  TRotator<double> local_50 [3];
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if (pAVar1 == (AController *)0x0) {
    pTVar4 = AActor::GetActorRotation((AActor *)this,local_50);
  }
  else {
    pTVar4 = (TRotator<double> *)(**(code **)(pAVar1->_padding_ + 0x7e8))(pAVar1,local_68);
  }
  dVar2 = __real_4076800000000000;
  dVar5 = FGenericPlatformMath::Fmod(pTVar4->Yaw,__real_4076800000000000);
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar2;
  }
  pTVar4 = AActor::GetActorRotation((AActor *)this,local_50);
  dVar6 = FGenericPlatformMath::Fmod(pTVar4->Yaw,dVar2);
  if (dVar6 < 0.0) {
    dVar6 = dVar6 + dVar2;
  }
  fVar7 = (float)(double)CONCAT44((uint)((ulonglong)(dVar5 - dVar6) >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar5 - dVar6,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((fVar7 < this->AllowedYawError) || (__real_43b40000 - this->AllowedYawError < fVar7)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// RecalculateBaseEyeHeight @ 14820c670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::RecalculateBaseEyeHeight(APawn *this)

{
  int iVar1;
  UClass *this_00;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = StaticClass();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1469,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this->BaseEyeHeight =
       *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0x11].field_0x24;
  return;
}

// ReceiveControllerChanged @ 14820ca10

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
APawn::ReceiveControllerChanged(APawn *this,AController *param_1,AController *param_2)

{
  UFunction *pUVar1;
  AController *local_18;
  AController *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveControllerChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ReceivePossessed @ 14820ca60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::ReceivePossessed(APawn *this,AController *param_1)

{
  UFunction *pUVar1;
  AController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceivePossessed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveRestarted @ 14820caa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::ReceiveRestarted(APawn *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveRestarted);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014820cacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveUnpossessed @ 14820cae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::ReceiveUnpossessed(APawn *this,AController *param_1)

{
  UFunction *pUVar1;
  AController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveUnpossessed);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Reset @ 148212e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::Reset(APawn *this)

{
  AController *pAVar1;
  
  pAVar1 = (this->Controller).field0_0x0.DebugPtr;
  if ((pAVar1 != (AController *)0x0) &&
     ((pAVar1->PlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0)) {
    AActor::Reset((AActor *)this);
    return;
  }
  (**(code **)(this->_padding_ + 0x858))();
  AActor::Destroy((AActor *)this,false,true);
  return;
}

// Restart @ 148214800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::Restart(APawn *this)

{
  longlong *plVar1;
  undefined1 local_28 [32];
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x760))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x510))(plVar1);
  }
  (**(code **)(this->_padding_ + 0x890))(this,local_28);
                    /* WARNING: Could not recover jumptable at 0x00014821483f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x7e0))(this);
  return;
}

// SetCanAffectNavigationGeneration @ 148216730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetCanAffectNavigationGeneration(APawn *this,bool param_1,bool param_2)

{
  if ((ZPULL(*(undefined4 *)&this->field_0x2c8,3,1) == (uint)param_1) && (!param_2)) {
    return;
  }
  *(uint *)&this->field_0x2c8 = *(undefined4 *)&this->field_0x2c8 & 0xfffffff7 | (uint)param_1 * 8;
  (**(code **)(this->_padding_ + 0x7b8))(this);
  FNavigationSystem::UpdateActorAndComponentData((AActor *)this,true);
  return;
}

// SetController @ 148216bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetController(APawn *this,AController *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Controller).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->Controller).field0_0x0.DebugPtr = param_1;
  return;
}

// SetPlayerDefaults @ 1482183b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetPlayerDefaults(APawn *this)

{
  return;
}

// SetPlayerState @ 1482183c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetPlayerState(APawn *this,APlayerState *param_1)

{
  APlayerState *this_00;
  APawn *pAVar1;
  
  this_00 = (this->PlayerState).field0_0x0.DebugPtr;
  if ((this_00 != (APlayerState *)0x0) &&
     (pAVar1 = (this_00->PawnPrivate).field0_0x0.DebugPtr, pAVar1 == this)) {
    APlayerState::SetPawnPrivate(this_00,(APawn *)0x0);
    FOnPlayerStatePawnSet_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnPawnSet,this_00,
               (this_00->PawnPrivate).field0_0x0.DebugPtr,pAVar1);
  }
  (this->PlayerState).field0_0x0.DebugPtr = param_1;
  if (param_1 != (APlayerState *)0x0) {
    pAVar1 = (param_1->PawnPrivate).field0_0x0.DebugPtr;
    APlayerState::SetPawnPrivate(param_1,this);
    FOnPlayerStatePawnSet_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnPawnSet,param_1,
               (param_1->PawnPrivate).field0_0x0.DebugPtr,pAVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014821846c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x778))(this,param_1,this_00);
  return;
}

// SetRemoteViewPitch @ 148218540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetRemoteViewPitch(APawn *this,double param_1)

{
  this->RemoteViewPitch16 =
       (ushort)((longlong)ROUND(param_1 * __real_4076c16c16c16c17 + __real_3fe0000000000000) >> 1);
  return;
}

// SetupPlayerInputComponent @ 148219640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SetupPlayerInputComponent(APawn *this,UInputComponent *param_1)

{
  return;
}

// ShouldTakeDamage @ 14821a1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
APawn::ShouldTakeDamage
          (APawn *this,float param_1,FDamageEvent *param_2,AController *param_3,AActor *param_4)

{
  UWorld *pUVar1;
  
  if ((2 < (byte)this->_padding_) && ((this->_padding_ & 0x40000) != 0)) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    if (((pUVar1->AuthorityGameMode).field0_0x0.DebugPtr != (AGameModeBase *)0x0) &&
       (param_1 != 0.0)) {
      return true;
    }
  }
  return false;
}

// ShouldTickIfViewportsOnly @ 14821a230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall APawn::ShouldTickIfViewportsOnly(APawn *this)

{
  int iVar1;
  AController *pAVar2;
  longlong lVar3;
  char cVar4;
  UClass *pUVar5;
  
  cVar4 = (**(code **)(this->_padding_ + 0x818))();
  if ((cVar4 != '\0') &&
     (pAVar2 = (this->Controller).field0_0x0.DebugPtr, pAVar2 != (AController *)0x0)) {
    pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
    lVar3 = pAVar2->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return true;
    }
  }
  return false;
}

// SpawnDefaultController @ 14821c4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::SpawnDefaultController(APawn *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ENetMode EVar4;
  UClass *pUVar5;
  UWorld *this_00;
  TRotator<double> *pTVar6;
  AController *this_01;
  UClass *pUVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_108 [32];
  TVector<double>_u_0 local_d8;
  FString local_c0;
  FString local_b0;
  TRotator<double> local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((this->Controller).field0_0x0.DebugPtr != (AController *)0x0) {
    return;
  }
  EVar4 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar4 == NM_Client) {
    return;
  }
  pUVar7 = (this->AIControllerClass).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar5 = Z_Construct_UClass_AController_NoRegister();
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar5->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((this->AIControllerClass).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  local_88._24_8_ = AActor::GetInstigator((AActor *)this);
  local_88[0x30] = AlwaysSpawn;
  local_88._32_8_ = AActor::GetLevel((AActor *)this);
  local_88._52_4_ = local_88._52_4_ | RF_Transient;
  this_00 = AActor::GetWorld((AActor *)this);
  pTVar6 = AActor::GetActorRotation((AActor *)this,&local_a0);
  lVar2 = this->_padding_;
  local_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar2 != 0) {
    local_d8._0_4_ = *(undefined4 *)(lVar2 + 0x210);
    local_d8._4_4_ = *(undefined4 *)(lVar2 + 0x214);
    local_d8._8_4_ = *(undefined4 *)(lVar2 + 0x218);
    local_d8._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
    local_d8._s_0.Z = *(double *)(lVar2 + 0x220);
  }
  pUVar7 = (this->AIControllerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_AController_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (this->AIControllerClass).Class.field0_0x0.DebugPtr;
      goto LAB_14821c65a;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14821c65a:
  this_01 = (AController *)
            UWorld::SpawnActor(this_00,pUVar7,(TVector<double> *)&local_d8._s_0,pTVar6,
                               (FActorSpawnParameters *)local_88);
  if (this_01 != (AController *)0x0) {
    pUVar7 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<AController>(&local_c0);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_b0,(AActor *)this_01);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
    AController::Possess(this_01,this);
  }
  if (local_88._64_8_ != 0) {
    plVar9 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// StaticRegisterNativesAPawn @ 148220530

void __cdecl APawn::StaticRegisterNativesAPawn(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1d;
  local_18.DataPtr = Z_Construct_UClass_APawn_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeDamage @ 1482208b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
APawn::TakeDamage(APawn *this,float param_1,FDamageEvent *param_2,AController *param_3,
                 AActor *param_4)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x7c0))();
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = AActor::TakeDamage((AActor *)this,param_1,param_2,param_3,param_4);
    if (((fVar2 != 0.0) && (param_3 != (AController *)0x0)) &&
       (param_3 != (this->Controller).field0_0x0.DebugPtr)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      (this->LastHitBy).field0_0x0.DebugPtr = param_3;
    }
  }
  return fVar2;
}

// TeleportSucceeded @ 148220960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::TeleportSucceeded(APawn *this,bool param_1)

{
  longlong *plVar1;
  
  if (!param_1) {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x760))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148220987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x5f8))(plVar1,*(code **)(*plVar1 + 0x5f8));
      return;
    }
  }
  return;
}

// TurnOff @ 148222790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::TurnOff(APawn *this)

{
  longlong *plVar1;
  
  if ((char)this->_padding_ == '\x03') {
    AActor::SetReplicates((AActor *)this,true);
  }
  AActor::SetActorEnableCollision((AActor *)this,false);
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x760))(this);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x510))(plVar1);
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
  }
  AActor::DisableComponentsSimulatePhysics((AActor *)this);
  return;
}

// UnPossessed @ 148222830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::UnPossessed(APawn *this)

{
  TObjectPtr<AController>_u_0 TVar1;
  APlayerState *this_00;
  APawn *pAVar2;
  UFunction *pUVar3;
  TObjectPtr<AController>_u_0 local_res8;
  undefined1 local_28 [32];
  
  TVar1 = (TObjectPtr<AController>_u_0)(this->Controller).field0_0x0.DebugPtr;
  (**(code **)(this->_padding_ + 0x710))();
  this_00 = (this->PlayerState).field0_0x0.DebugPtr;
  if ((this_00 != (APlayerState *)0x0) &&
     (pAVar2 = (this_00->PawnPrivate).field0_0x0.DebugPtr, pAVar2 == this)) {
    APlayerState::SetPawnPrivate(this_00,(APawn *)0x0);
    FOnPlayerStatePawnSet_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnPawnSet,this_00,
               (this_00->PawnPrivate).field0_0x0.DebugPtr,pAVar2);
  }
  (this->PlayerState).field0_0x0.DebugPtr = (APlayerState *)0x0;
  (**(code **)(this->_padding_ + 0x778))(this,0,this_00);
  (**(code **)(this->_padding_ + 0x500))(this,0);
  (this->Controller).field0_0x0.DebugPtr = (AController *)0x0;
  AActor::UpdateOwningNetConnection((AActor *)this);
  (**(code **)(this->_padding_ + 0x878))(this);
  if (TVar1.DebugPtr != (AController *)0x0) {
    local_res8 = TVar1;
    pUVar3 = UObject::FindFunctionChecked((UObject *)this,NAME_APawn_ReceiveUnpossessed);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_res8);
  }
  (**(code **)(this->_padding_ + 0x7f8))(this);
  (**(code **)(this->_padding_ + 0x890))(this,local_28);
  return;
}

// UpdateNavAgent @ 1482251f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::UpdateNavAgent(APawn *this)

{
  INavMovementInterface *pIVar1;
  longlong lVar2;
  
  pIVar1 = AActor::FindComponentByInterface<INavMovementInterface>((AActor *)this);
  if ((this->_padding_ != 0) && (pIVar1 != (INavMovementInterface *)0x0)) {
    lVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 4) != '\0')) {
      (**(code **)(*(longlong *)this->_padding_ + 0x5b0))();
      (**(code **)((longlong)*pIVar1 + 0xb8))(pIVar1,this);
    }
  }
  return;
}

// UpdateNavigationRelevance @ 148225260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall APawn::UpdateNavigationRelevance(APawn *this)

{
  return;
}

// ValidateGeneratedRepEnums @ 148226e50

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
APawn::ValidateGeneratedRepEnums
          (APawn *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_RemoteViewPitch16,L"RemoteViewPitch16");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_RemoteViewPitch,L"RemoteViewPitch");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_PlayerState,L"PlayerState");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_Controller,L"Controller");
    _Init_thread_footer(&::_TSS3);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_RemoteViewPitch16 == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_RemoteViewPitch == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_PlayerState == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_Controller == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\Pawn.gen.cpp"
                     ,0x914,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APawn"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// execAddControllerPitchInput @ 148227ca0

void __cdecl APawn::execAddControllerPitchInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x898))(param_1,local_res8[0]);
  return;
}

// execAddControllerRollInput @ 148227d30

void __cdecl APawn::execAddControllerRollInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8a8))(param_1,local_res8[0]);
  return;
}

// execAddControllerYawInput @ 148227dc0

void __cdecl APawn::execAddControllerYawInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8a0))(param_1,local_res8[0]);
  return;
}

// execAddMovementInput @ 148227e50

void __cdecl APawn::execAddMovementInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  (**(code **)(*(longlong *)param_1 + 0x888))(param_1,&local_28,local_res10[0],local_res8[0] != 0);
  return;
}

// execConsumeMovementInputVector @ 148227f90

void __cdecl APawn::execConsumeMovementInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x890))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execDetachFromControllerPendingDestroy @ 148227fe0

void __cdecl
APawn::execDetachFromControllerPendingDestroy(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148227ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x858))();
  return;
}

// execGetBaseAimRotation @ 148228010

void __cdecl APawn::execGetBaseAimRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x840))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetControlRotation @ 148228060

void __cdecl APawn::execGetControlRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  longlong *plVar2;
  double dVar3;
  double *pdVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1[0x12].field_0x20;
  if (plVar2 == (longlong *)0x0) {
    pdVar4 = &local_28;
    local_28 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_20 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    pdVar4 = (double *)(**(code **)(*plVar2 + 0x7a8))(plVar2,&local_28);
  }
  dVar3 = pdVar4[1];
  dVar1 = pdVar4[2];
  *(double *)param_3 = *pdVar4;
  *(double *)((longlong)param_3 + 8) = dVar3;
  *(double *)((longlong)param_3 + 0x10) = dVar1;
  return;
}

// execGetController @ 1482280e0

void __cdecl APawn::execGetController(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x12].field_0x20;
  return;
}

// execGetLastMovementInputVector @ 148228250

void __cdecl APawn::execGetLastMovementInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x14].field_0x8;
  uVar1 = *(undefined8 *)&param_1[0x14].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetLocalViewingPlayerController @ 148228290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
APawn::execGetLocalViewingPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  APlayerController *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = GetLocalViewingPlayerController((APawn *)param_1);
  *(APlayerController **)param_3 = pAVar1;
  return;
}

// execGetMovementBaseActor @ 1482282d0

void __cdecl APawn::execGetMovementBaseActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (longlong *)0x0) {
    lVar2 = (**(code **)(*local_res10[0] + 0x768))();
    if (lVar2 != 0) {
      *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0xa8);
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetMovementComponent @ 148228380

void __cdecl APawn::execGetMovementComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x760))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetNavAgentLocation @ 1482283c0

void __cdecl APawn::execGetNavAgentLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)&param_1[0x11].field_0x18 + 0x18))
                     (&param_1[0x11].field_0x18,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetOverrideInputComponentClass @ 148228410

void __cdecl
APawn::execGetOverrideInputComponentClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)&param_1[0x14].field_0x18;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetPendingMovementInputVector @ 148228490

void __cdecl
APawn::execGetPendingMovementInputVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x13].field_0x18;
  uVar1 = *(undefined8 *)&param_1[0x13].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x13].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execGetPlatformUserId @ 1482284d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl APawn::execGetPlatformUserId(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  APlayerController *this;
  UClass *pUVar2;
  undefined4 local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(APlayerController **)&param_1[0x12].field_0x20;
  if (this != (APlayerController *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      APlayerController::GetPlatformUserId(this);
      *(undefined4 *)param_3 = local_res8;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execIsBotControlled @ 148228560

void __cdecl APawn::execIsBotControlled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x828))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsControlled @ 1482285a0

void __cdecl APawn::execIsControlled(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)&param_1[0x12].field_0x20;
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_1482285f1;
  }
  lVar3 = 0;
LAB_1482285f1:
  *(bool *)param_3 = lVar3 != 0;
  return;
}

// execIsLocallyControlled @ 148228610

void __cdecl APawn::execIsLocallyControlled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x818))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsLocallyViewed @ 148228650

void __cdecl APawn::execIsLocallyViewed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)(*(uint *)&param_1[0x11].field_0x20 >> 6) & 1;
  return;
}

// execIsMoveInputIgnored @ 148228680

void __cdecl APawn::execIsMoveInputIgnored(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x8b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPawnControlled @ 1482286c0

void __cdecl APawn::execIsPawnControlled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7a0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPlayerControlled @ 148228700

void __cdecl APawn::execIsPlayerControlled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x820))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execOnRep_Controller @ 148228740

void __cdecl APawn::execOnRep_Controller(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148228758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7a8))();
  return;
}

// execOnRep_PlayerState @ 148228770

void __cdecl APawn::execOnRep_PlayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148228788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7b0))();
  return;
}

// execPawnMakeNoise @ 1482287a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl APawn::execPawnMakeNoise(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  USceneComponent *pUVar2;
  AActor *this;
  bool bVar3;
  int local_res10 [4];
  float local_res20 [2];
  AActor *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TVector<double>_u_0 local_48 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_78 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_70 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = local_78;
  if (local_78 == (AActor *)0x0) {
    this = (AActor *)param_1;
  }
  if ((bVar3) &&
     (pUVar2 = (this->RootComponent).field0_0x0.DebugPtr,
     local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_,
     uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
     uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_,
     uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
     local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     pUVar2 != (USceneComponent *)0x0)) {
    local_68 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_64 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_60 = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_5c = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
    ;
    local_58 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  local_48[0]._0_4_ = local_68;
  local_48[0]._4_4_ = uStack_64;
  local_48[0]._8_4_ = uStack_60;
  local_48[0]._12_4_ = uStack_5c;
  local_48[0]._16_8_ = local_58;
  AActor::MakeNoise(this,local_res20[0],(APawn *)param_1,(TVector<double> *)&local_48[0]._s_0,0.0,
                    (FName)0x0);
  return;
}

// execSetCanAffectNavigationGeneration @ 148228a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
APawn::execSetCanAffectNavigationGeneration(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(uint *)&param_1[0x11].field_0x20 >> 3 & 1) != (uint)bVar3) || (local_res10[0] != 0)) {
    lVar2 = *(longlong *)param_1;
    *(uint *)&param_1[0x11].field_0x20 =
         *(uint *)&param_1[0x11].field_0x20 & 0xfffffff7 | (uint)bVar3 * 8;
    (**(code **)(lVar2 + 0x7b8))(param_1);
    FNavigationSystem::UpdateActorAndComponentData((AActor *)param_1,true);
  }
  return;
}

// execSpawnDefaultController @ 148228b30

void __cdecl APawn::execSpawnDefaultController(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148228b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x860))();
  return;
}

