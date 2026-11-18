// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 148006220

UClass * __cdecl UNetActorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetActorFactory",
               &Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton,
               StaticRegisterNativesUNetActorFactory,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetActorFactory>,
               InternalVTableHelperCtorCaller<UNetActorFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton;
}

// UNetActorFactory @ 148015910

UNetActorFactory * __thiscall
UNetActorFactory::UNetActorFactory(UNetActorFactory *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UNetObjectFactory::UNetObjectFactory((UNetObjectFactory *)this,param_1);
  this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.X = 0.0;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.Y = 0.0;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.Z = 0.0;
  (this->DefaultSpawnInfo).Rotation.Pitch = 0.0;
  (this->DefaultSpawnInfo).Rotation.Yaw = 0.0;
  (this->DefaultSpawnInfo).Rotation.Roll = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.X = 0.0;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Y = 0.0;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Z = 0.0;
  return this;
}

// UNetActorFactory @ 148015980

UNetActorFactory * __thiscall
UNetActorFactory::UNetActorFactory(UNetActorFactory *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UNetObjectFactory::UNetObjectFactory((UNetObjectFactory *)this,param_1);
  this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.X = 0.0;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.Y = 0.0;
  (this->DefaultSpawnInfo).Location.field0_0x0._s_0.Z = 0.0;
  (this->DefaultSpawnInfo).Rotation.Pitch = 0.0;
  (this->DefaultSpawnInfo).Rotation.Yaw = 0.0;
  (this->DefaultSpawnInfo).Rotation.Roll = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultSpawnInfo).Scale.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.X = 0.0;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Y = 0.0;
  (this->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UNetActorFactory @ 1480184f0

void __thiscall UNetActorFactory::~UNetActorFactory(UNetActorFactory *this)

{
  this->_padding_ = (longlong)&___7UNetActorFactory__6B_;
  UNetObjectFactory::~UNetObjectFactory((UNetObjectFactory *)this);
  return;
}

// CreateAndDeserializeHeader @ 148027750

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetActorFactory::CreateAndDeserializeHeader(UNetActorFactory *this,FCreationHeaderContext *param_1)

{
  FNetBitStreamReader *this_00;
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  longlong in_R8;
  
  plVar5 = (longlong *)0x0;
  this_00 = *(FNetBitStreamReader **)(*(longlong *)(in_R8 + 0x18) + 0x318);
  uVar2 = UE::Net::FNetBitStreamReader::ReadBits(this_00,1);
  if ((uVar2 & 1) == 0) {
    plVar3 = ::operator_new(0x38);
    if (plVar3 == (longlong *)0x0) goto LAB_148027839;
    ppuVar4 = &___7FStaticActorNetCreationHeader_Net_UE__6B_;
    plVar3[5] = 0;
    plVar3[6] = 0;
  }
  else {
    uVar2 = UE::Net::FNetBitStreamReader::ReadBits(this_00,1);
    plVar5 = (longlong *)0x0;
    if ((uVar2 & 1) == 0) {
      plVar3 = ::operator_new(0xb0);
      if (plVar3 != (longlong *)0x0) {
        plVar3[3] = 0;
        plVar3[5] = 0;
        plVar3[6] = 0;
        plVar3[7] = 0;
        plVar3[8] = 0;
        plVar3[9] = 0;
        plVar3[10] = 0;
        *(undefined4 *)(plVar3 + 1) = 0;
        *(undefined2 *)(plVar3 + 4) = 0;
        *plVar3 = (longlong)&___7FDynamicActorNetCreationHeader_Net_UE__6B_;
        *(undefined1 *)((longlong)plVar3 + 0xc) = 0xff;
        plVar3[2] = 0;
        uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        plVar3[0xb] = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        plVar3[0xc] = uVar1;
        plVar3[0xd] = (longlong)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        plVar3[0xe] = 0;
        plVar3[0xf] = 0;
        plVar3[0x10] = 0;
        plVar3[0x11] = 0;
        plVar3[0x12] = 0;
        plVar3[0x13] = 0;
        plVar3[0x14] = 0;
        *(undefined2 *)(plVar3 + 0x15) = 0;
        plVar5 = plVar3;
      }
      goto LAB_148027839;
    }
    plVar3 = ::operator_new(0x28);
    if (plVar3 == (longlong *)0x0) goto LAB_148027839;
    ppuVar4 = &___7FPreRegisteredActorNetCreationHeader_Net_UE__6B_;
  }
  *plVar3 = (longlong)ppuVar4;
  *(undefined4 *)(plVar3 + 1) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined2 *)(plVar3 + 4) = 0;
  *(undefined1 *)((longlong)plVar3 + 0xc) = 0xff;
  plVar5 = plVar3;
LAB_148027839:
  (**(code **)(*plVar5 + 0x28))();
  (param_1->Handle).field0_0x0.Value = (ulong64)plVar5;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )(FNetObjectCreationHeader *)param_1;
}

// CreateAndFillHeader @ 148027990

/* WARNING: Removing unreachable block (ram,0x000148027ac3) */
/* WARNING: Removing unreachable block (ram,0x000148027afa) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall UNetActorFactory::CreateAndFillHeader(UNetActorFactory *this,FNetRefHandle param_1)

{
  int iVar1;
  bool bVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  FDynamicActorNetCreationHeader *pFVar5;
  undefined **ppuVar6;
  FDynamicActorNetCreationHeader *pFVar7;
  FNetRefHandle_u_0 in_R8;
  FNetRefHandle_u_0 local_res18;
  undefined8 local_res20;
  UNetActorFactory *local_48;
  FNetRefHandle_u_0 *local_40;
  FNetRefHandle_u_0 local_38 [2];
  
  local_res18 = in_R8;
  pAVar3 = (AActor *)
           UObjectReplicationBridge::GetReplicatedObject
                     ((UObjectReplicationBridge *)this->_padding_,(FNetRefHandle)in_R8);
  if (pAVar3 == (AActor *)0x0) {
LAB_148027b28:
    local_40 = &local_res18;
    local_48 = this;
    `UNetActorFactory::CreateAndFillHeader'::__l5::<lambda_1>::operator()(&local_48);
    *(undefined8 *)param_1.field0_0x0 = 0;
    return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
            )param_1.field0_0x0.Value;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) goto LAB_148027b28;
  UObjectReplicationBridge::GetOrCreateObjectReference
            ((UObjectReplicationBridge *)this->_padding_,(FNetObjectReference *)&local_38[0]._s_0,
             (UObject *)pAVar3);
  pFVar7 = (FDynamicActorNetCreationHeader *)0x0;
  if ((local_38[0].Value == 0) || ((local_38[0].Value & 1) != 0)) {
    pFVar5 = ::operator_new(0x38);
    if (pFVar5 == (FDynamicActorNetCreationHeader *)0x0) goto LAB_148027a94;
    ppuVar6 = &___7FStaticActorNetCreationHeader_Net_UE__6B_;
    (pFVar5->SpawnInfo).Location.field0_0x0._s_0.X = 0.0;
    (pFVar5->SpawnInfo).Location.field0_0x0._s_0.Y = 0.0;
  }
  else {
    bVar2 = UObjectReplicationBridge::IsNetRefHandlePreRegistered
                      ((UObjectReplicationBridge *)this->_padding_,(FNetRefHandle)local_res18._s_0);
    if (!bVar2) {
      pFVar5 = ::operator_new(0xb0);
      if ((pFVar5 != (FDynamicActorNetCreationHeader *)0x0) &&
         (pFVar5 = UE::Net::FDynamicActorNetCreationHeader::FDynamicActorNetCreationHeader(pFVar5),
         pFVar7 = (FDynamicActorNetCreationHeader *)0x0,
         pFVar5 != (FDynamicActorNetCreationHeader *)0x0)) {
        pFVar7 = pFVar5;
      }
      goto LAB_148027a94;
    }
    pFVar5 = ::operator_new(0x28);
    pFVar7 = (FDynamicActorNetCreationHeader *)0x0;
    if (pFVar5 == (FDynamicActorNetCreationHeader *)0x0) goto LAB_148027a94;
    ppuVar6 = &___7FPreRegisteredActorNetCreationHeader_Net_UE__6B_;
  }
  pFVar5->_padding_ = (longlong)ppuVar6;
  *(undefined2 *)&pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = 0;
  *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 0xff;
  *(undefined4 *)&pFVar5->_padding_ = 0;
  pFVar7 = pFVar5;
LAB_148027a94:
  bVar2 = FillHeader(this,(FBaseActorNetCreationHeader *)pFVar7,(FNetRefHandle)local_res18._s_0,
                     pAVar3);
  if (bVar2) {
    *(FDynamicActorNetCreationHeader **)param_1.field0_0x0 = pFVar7;
  }
  else {
    *(undefined8 *)param_1.field0_0x0 = 0;
    local_res20 = 0;
    if (pFVar7 != (FDynamicActorNetCreationHeader *)0x0) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )param_1.field0_0x0.Value;
}

// DetachedFromReplication @ 14802bc00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNetActorFactory::DetachedFromReplication(UNetActorFactory *this,FDestroyedContext *param_1)

{
  int iVar1;
  UNetDriver *pUVar2;
  AActor *this_00;
  char cVar3;
  UEngineReplicationBridge *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>
                     ((UObjectReplicationBridge *)this->_padding_);
  pUVar2 = pUVar4->NetDriver;
  if ((param_1->DestroyReason != DoNotDestroy) &&
     (this_00 = (AActor *)param_1->DestroyedInstance, this_00 != (AActor *)0x0)) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      if ((param_1->DestroyReason == TearOff) &&
         (cVar3 = (**(code **)(pUVar2->_padding_ + 0x428))(pUVar2), cVar3 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014802bc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pUVar2->_padding_ + 0x4c0))(pUVar2,this_00);
        return;
      }
      if ((param_1->DestroyFlags & AllowDestroyInstanceFromRemote) != None) {
        (**(code **)(this_00->_padding_ + 0x238))(this_00);
        AActor::Destroy(this_00,true,true);
      }
    }
  }
  return;
}

// FillHeader @ 1480300e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNetActorFactory::FillHeader
          (UNetActorFactory *this,FBaseActorNetCreationHeader *param_1,FNetRefHandle param_2,
          AActor *param_3)

{
  ULevel *pUVar1;
  USceneComponent *pUVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  FNetToken FVar7;
  ENetObjectReferenceTraits EVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  FNetObjectReference *pFVar13;
  UChildActorComponent *this_00;
  AActor *pAVar14;
  ULevel *pUVar15;
  UEngineReplicationBridge *pUVar16;
  TVector<double> *pTVar17;
  TRotator<double> *pTVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_348 [32];
  ulonglong local_328;
  undefined1 local_318 [16];
  double local_308;
  TVector<double>_u_0 local_300;
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  FNetObjectReference local_288;
  FNetObjectReference local_278;
  FNetObjectReference local_268;
  TVector<double> local_258;
  TRotator<double> local_240;
  undefined1 local_228 [64];
  undefined1 local_1e8 [16];
  double local_1d8;
  FOutBunch local_1c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_348;
  cVar9 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  if (cVar9 == '\0') {
    pFVar13 = UObjectReplicationBridge::GetOrCreateObjectReference
                        ((UObjectReplicationBridge *)this->_padding_,&local_288,(UObject *)param_3);
    lVar6 = *(longlong *)&pFVar13->PathToken;
    param_1[1]._padding_ = (longlong)(pFVar13->RefHandle).field0_0x0;
    param_1[1]._padding_ = lVar6;
    goto LAB_148030549;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (cVar9 != '\0') goto LAB_148030549;
  this_00 = AActor::GetParentComponent(param_3);
  if ((this_00 == (UChildActorComponent *)0x0) ||
     (pAVar14 = UChildActorComponent::GetSpawnableChildActorTemplate(this_00),
     pAVar14 == (AActor *)0x0)) {
    pAVar14 = (AActor *)UObject::GetArchetype((UObject *)param_3);
  }
  pUVar15 = AActor::GetLevel(param_3);
  if ((pAVar14 == (AActor *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Archetype != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                          ,0xb0,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  cVar9 = (**(code **)(param_3->_padding_ + 0x100))(param_3);
  if ((cVar9 == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Actor->NeedsLoadForClient()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                          ,0xb1,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  cVar9 = (**(code **)(pAVar14->_padding_ + 0x100))(pAVar14);
  if ((cVar9 == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Archetype->NeedsLoadForClient()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                          ,0xb2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return (bool)uVar11;
  }
  pUVar16 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>
                      ((UObjectReplicationBridge *)this->_padding_);
  pFVar13 = UObjectReplicationBridge::GetOrCreateObjectReference
                      ((UObjectReplicationBridge *)this->_padding_,&local_278,(UObject *)pAVar14);
  FVar7.field0_0x0 = (pFVar13->PathToken).field0_0x0;
  EVar8 = pFVar13->Traits;
  param_1[3].CustomCreationData.AllocatorInstance.Data =
       (FScriptContainerElement *)(pFVar13->RefHandle).field0_0x0;
  param_1[3].CustomCreationData.ArrayNum = (int)FVar7.field0_0x0;
  param_1[3].CustomCreationData.ArrayMax = EVar8;
  if (UE::Net::Private::SerializeNewActorOverrideLevel == 0) {
LAB_1480302a8:
    *(undefined1 *)&param_1[4]._padding_ = 1;
  }
  else {
    pUVar1 = (((pUVar16->NetDriver->World).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.
             DebugPtr;
    if (pUVar1 == (ULevel *)0x0) {
      bVar10 = pUVar15 == (ULevel *)0x0;
    }
    else {
      bVar10 = pUVar1 == pUVar15;
    }
    if (bVar10) goto LAB_1480302a8;
    *(undefined1 *)&param_1[4]._padding_ = 0;
    pFVar13 = UObjectReplicationBridge::GetOrCreateObjectReference
                        ((UObjectReplicationBridge *)this->_padding_,&local_268,(UObject *)pUVar15);
    lVar6 = *(longlong *)&pFVar13->PathToken;
    *(FNetRefHandle_u_0 *)&param_1[3].CustomCreationDataBitCount = (pFVar13->RefHandle).field0_0x0;
    param_1[4]._padding_ = lVar6;
  }
  pUVar2 = (param_3->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    iVar12 = _finite((double)param_1[1]._padding_);
    if ((((iVar12 == 0) || (iVar12 = _finite((double)param_1[1]._padding_), iVar12 == 0)) ||
        (iVar12 = _finite((double)param_1[1].CustomCreationData.AllocatorInstance.Data), iVar12 == 0
        )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Header->SpawnInfo.Location.ContainsNaN()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                                   ,0xd5,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
  }
  else {
    local_300._s_0.X = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_300._s_0.Y = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_300._s_0.Z = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_2d0 = local_300._s_0.X;
    dStack_2c8 = local_300._s_0.Y;
    local_2c0 = local_300._s_0.Z;
    pTVar17 = FRepMovement::RebaseOntoZeroOrigin
                        (&local_258,(TVector<double> *)&local_300._s_0,param_3);
    dVar5 = (pTVar17->field0_0x0)._s_0.Y;
    param_1[1]._padding_ = (longlong)(pTVar17->field0_0x0)._s_0.X;
    param_1[1]._padding_ = (longlong)dVar5;
    param_1[1].CustomCreationData.AllocatorInstance.Data =
         (FScriptContainerElement *)(pTVar17->field0_0x0)._s_0.Z;
    pTVar18 = AActor::GetActorRotation(param_3,&local_240);
    auVar31 = ___xmm_3ff00000000000003ff0000000000000;
    dVar5 = __real_3ff0000000000000;
    uVar20 = SUB84(__real_3ff0000000000000,0);
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    iVar12 = *(int *)((longlong)&pTVar18->Pitch + 4);
    uVar27 = *(undefined4 *)&pTVar18->Yaw;
    uVar24 = *(undefined4 *)((longlong)&pTVar18->Yaw + 4);
    param_1[1].CustomCreationData.ArrayNum = *(int *)&pTVar18->Pitch;
    param_1[1].CustomCreationData.ArrayMax = iVar12;
    *(undefined4 *)&param_1[1].CustomCreationDataBitCount = uVar27;
    *(undefined4 *)&param_1[1].field_0x24 = uVar24;
    param_1[2]._padding_ = (longlong)pTVar18->Roll;
    pUVar3 = (param_3->RootComponent).field0_0x0.DebugPtr;
    uVar27 = auVar31._12_4_;
    if (pUVar3 == (USceneComponent *)0x0) {
      uVar24 = auVar31._0_4_;
      uVar25 = auVar31._4_4_;
      uVar26 = auVar31._8_4_;
      dVar28 = dVar5;
    }
    else {
      local_2a8 = (pUVar3->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      uVar24 = *(undefined4 *)(pUVar3->ComponentToWorld).Scale3D.XY.m128d_f64;
      uVar25 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Scale3D.XY.m128d_f64 + 4);
      uVar26 = *(undefined4 *)((pUVar3->ComponentToWorld).Scale3D.XY.m128d_f64 + 1);
      uVar27 = *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Scale3D.XY.m128d_f64 + 0xc);
      dVar28 = local_2a8;
      local_2b8 = uVar24;
      uStack_2b4 = uVar25;
      uStack_2b0 = uVar26;
      uStack_2ac = uVar27;
    }
    *(undefined4 *)&param_1[2]._padding_ = uVar24;
    *(undefined4 *)((longlong)&param_1[2]._padding_ + 4) = uVar25;
    *(undefined4 *)&param_1[2].CustomCreationData.AllocatorInstance.Data = uVar26;
    *(undefined4 *)((longlong)&param_1[2].CustomCreationData.AllocatorInstance.Data + 4) = uVar27;
    *(double *)&param_1[2].CustomCreationData.ArrayNum = dVar28;
    pUVar3 = (param_3->RootComponent).field0_0x0.DebugPtr;
    if (pUVar3 == (USceneComponent *)0x0) {
      local_308 = dVar5;
    }
    else {
      local_308 = (pUVar3->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      uVar20 = SUB84(local_308,0);
      uVar22 = (undefined4)((ulonglong)local_308 >> 0x20);
      auVar31 = *(undefined1 (*) [16])(pUVar3->ComponentToWorld).Scale3D.XY.m128d_f64;
      local_2a0 = auVar31;
      local_290 = local_308;
    }
    pUVar3 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
    dVar28 = (double)CONCAT44(uVar22,uVar20);
    if (pUVar3 != (USceneComponent *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x520))(pUVar3,local_228,pUVar2->AttachSocketName,0);
      dVar28 = 0.0;
      local_2d8 = local_1d8;
      uVar21 = local_1e8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar23 = local_1e8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_2e8 = local_1e8;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar23,uVar21) &&
          (double)CONCAT44(uVar23,uVar21) != __real_3e45798ee0000000) {
        dVar30 = dVar5 / local_1e8._0_8_;
      }
      else {
        dVar30 = 0.0;
      }
      uVar21 = local_1e8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar23 = local_1e8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar23,uVar21) &&
          (double)CONCAT44(uVar23,uVar21) != __real_3e45798ee0000000) {
        dVar29 = dVar5 / local_1e8._8_8_;
      }
      else {
        dVar29 = 0.0;
      }
      uVar21 = SUB84(local_1d8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar23 = (uint)((ulonglong)local_1d8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar23,uVar21) &&
          (double)CONCAT44(uVar23,uVar21) != __real_3e45798ee0000000) {
        dVar28 = dVar5 / local_1d8;
      }
      dVar28 = (double)CONCAT44(uVar22,uVar20) * dVar28;
      dVar5 = auVar31._0_8_;
      auVar31._8_8_ = auVar31._8_8_ * dVar29;
      auVar31._0_8_ = dVar5 * dVar30;
      local_308 = dVar28;
    }
    param_1[2]._padding_ = auVar31._0_8_;
    param_1[2].CustomCreationData.AllocatorInstance = (ForAnyElementType)auVar31._8_8_;
    *(double *)&param_1[2].CustomCreationData.ArrayNum = dVar28;
    puVar19 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x360))(param_3,local_318);
    lVar6 = puVar19[1];
    *(undefined8 *)&param_1[2].CustomCreationDataBitCount = *puVar19;
    param_1[3]._padding_ = lVar6;
    param_1[3]._padding_ = puVar19[2];
  }
LAB_148030549:
  FOutBunch::FOutBunch(&local_1c8,(longlong)UE::Net::Private::SerializeNewActorMaxBunchSize);
  (**(code **)(param_3->_padding_ + 0x498))(param_3,&local_1c8);
  lVar6 = local_1c8._padding_;
  if ((local_1c8._padding_ != (local_1c8._padding_ & 0xffffU)) || (local_1c8._padding_ < 0)) {
    local_328 = local_1c8._padding_;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
  }
  param_1->CustomCreationDataBitCount = (ushort)lVar6;
  if ((ushort)lVar6 != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&param_1->CustomCreationData,
               (int)((longlong)(local_1c8._padding_ + 7U) >> 3) + 3U & 0xfffffffc,Default);
    if (((local_1c8._padding_._1_1_ & 2) != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsError()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                            ,0x49,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    memcpy((param_1->CustomCreationData).AllocatorInstance.Data,(void *)local_1c8._padding_,
           (longlong)(local_1c8._padding_ + 7U) >> 3);
  }
  FOutBunch::~FOutBunch(&local_1c8);
  return true;
}

// GetFactoryName @ 148035740

FName __cdecl UNetActorFactory::GetFactoryName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UE::Net::Private::NetActorFactoryName;
  return in_RCX;
}

// GetPollFrequency @ 1480366f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UNetActorFactory::GetPollFrequency(UNetActorFactory *this,FNetRefHandle param_1,UObject *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  float fVar5;
  
  if (param_2 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14803678b;
  }
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  param_2 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(((AActor *)param_2)->_padding_ + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(((AActor *)param_2)->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar4->_padding_)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
LAB_14803678b:
  fVar5 = AActor::GetNetUpdateFrequency((AActor *)param_2);
  return fVar5;
}

// GetPrivateStaticClass @ 148036a20

UClass * __cdecl UNetActorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetActorFactory",
               &Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton,
               StaticRegisterNativesUNetActorFactory,0xa0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetActorFactory>,
               InternalVTableHelperCtorCaller<UNetActorFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetActorFactory.InnerSingleton;
}

// GetWorldInfo @ 148038900

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

TOptional<UNetObjectFactory::FWorldInfoData> * __thiscall
UNetActorFactory::GetWorldInfo
          (UNetActorFactory *this,
          TOptional<UNetObjectFactory::FWorldInfoData> *__return_storage_ptr__,
          FWorldInfoContext *param_1)

{
  int iVar1;
  AActor *this_00;
  USceneComponent *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FName local_res18;
  FString local_58;
  FString local_48;
  double local_38;
  float fStack_30;
  undefined4 uStack_2c;
  
  this_00 = (AActor *)param_1->Instance;
  if (this_00 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      fStack_30 = 0.0;
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      if (((param_1->InfoRequested & Location) != None) &&
         (pUVar2 = (this_00->RootComponent).field0_0x0.DebugPtr, pUVar2 != (USceneComponent *)0x0))
      {
        local_38 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
        uVar6 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
        uVar7 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        uVar8 = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        uVar9 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
        ;
      }
      if (((param_1->InfoRequested >> 1 & 1) != 0) &&
         (fVar5 = AActor::GetNetCullDistanceSquared(this_00), 0.0 < fVar5)) {
        fStack_30 = AActor::GetNetCullDistanceSquared(this_00);
        fStack_30 = SQRT(fStack_30);
      }
      __return_storage_ptr__->bIsSet = true;
      *(undefined4 *)&(__return_storage_ptr__->TypedValue).WorldLocation.field0_0x0 = uVar6;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).WorldLocation.field0_0x0 + 4)
           = uVar7;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).WorldLocation.field0_0x0 + 8)
           = uVar8;
      *(undefined4 *)
       ((longlong)&(__return_storage_ptr__->TypedValue).WorldLocation.field0_0x0 + 0xc) = uVar9;
      (__return_storage_ptr__->TypedValue).WorldLocation.field0_0x0._s_0.Z = local_38;
      *(ulonglong *)&(__return_storage_ptr__->TypedValue).CullDistance =
           CONCAT44(uStack_2c,fStack_30);
      return __return_storage_ptr__;
    }
  }
  if (6 < (byte)LogIris._0_1_) {
    UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_48);
    pUVar3 = param_1->Instance;
    if (pUVar3 == (UObject *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res18.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
      local_res18.Number = *(uint *)&pUVar3->field_0x1c;
      ::FName::ToString(&local_res18,&local_58);
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InstantiateReplicatedObjectFromHeader @ 14803f240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstantiateResult * __thiscall
UNetActorFactory::InstantiateReplicatedObjectFromHeader
          (UNetActorFactory *this,FInstantiateResult *__return_storage_ptr__,
          FInstantiateContext *param_1,FNetObjectCreationHeader *param_2)

{
  int iVar1;
  UNetDriver *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  FName FVar12;
  UNetActorFactory *pUVar13;
  char cVar14;
  bool bVar15;
  AActor *pAVar16;
  UClass *pUVar17;
  FName FVar18;
  TEventRef<unsigned_int> TVar19;
  UPackage *pUVar20;
  UWorld *pUVar21;
  FInstantiateResult *pFVar22;
  TQuat<double> *pTVar23;
  FWriteBuffer *pFVar24;
  longlong *plVar25;
  uint *puVar26;
  bool bVar27;
  double dVar28;
  undefined1 auStackY_318 [32];
  AActor *local_2e8 [2];
  FNetObjectCreationHeader *local_2d8;
  FName local_2d0;
  undefined1 local_2c8 [8];
  UObject *pUStack_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  FLLMScope local_2b0 [2];
  UEngineReplicationBridge *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  UNetDriver *local_288;
  FString local_280;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  FInstantiateContext *local_258;
  UNetActorFactory *local_250;
  FMemScope local_248;
  TVector<double>_u_0 local_240;
  AActor **local_228;
  UEngineReplicationBridge **local_220;
  FNetObjectCreationHeader **local_218;
  FInstantiateContext *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FName local_1b8;
  FName local_1b0;
  TVector<double>_u_0 local_1a8;
  FName local_188 [2];
  TQuat<double> local_178;
  undefined1 local_158 [112];
  undefined4 *local_e8;
  longlong local_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_258 = param_1;
  local_250 = this;
  FLLMScope::FLLMScope(local_2b0,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_248,EngineMisc,true);
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId293,"NetActorFactory_InstantiateReplicatedObjectFromHeader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
               ,0x125);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId293);
  }
  local_2a8 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>
                        ((UObjectReplicationBridge *)this->_padding_);
  pUVar2 = local_2a8->NetDriver;
  local_288 = pUVar2;
  cVar14 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  if (cVar14 == '\0') {
    puVar26 = &param_2[2].ProtocolIdentifier;
    pAVar16 = (AActor *)
              UObjectReplicationBridge::ResolveObjectReference
                        ((UObjectReplicationBridge *)local_2a8,(FNetObjectReference *)puVar26,
                         param_1->ResolveContext);
    if (pAVar16 != (AActor *)0x0) {
      pUVar17 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar17->_padding_;
      if ((iVar1 <= *(int *)(pAVar16->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar17->_padding_)) {
        if (5 < (byte)LogIris._0_1_) {
          UObjectReplicationBridge::DescribeObjectReference
                    ((UObjectReplicationBridge *)local_2a8,&local_1f8,(FNetObjectReference *)puVar26
                     ,param_1->ResolveContext);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pAVar16,&local_208,(UObject *)0x0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
LAB_14803f3e6:
        pUStack_2c0 = (UObject *)0x0;
        local_2c8 = (undefined1  [8])pAVar16;
        cVar14 = (**(code **)(pUVar2->_padding_ + 0x498))(pUVar2,pAVar16,0);
        local_2b8 = (uint)(cVar14 != '\0');
        pAVar16->bActorIsPendingPostNetInit = '\x01';
        __return_storage_ptr__->Instance = (UObject *)local_2c8;
        __return_storage_ptr__->Template = pUStack_2c0;
        *(ulonglong *)&__return_storage_ptr__->Flags = CONCAT44(uStack_2b4,local_2b8);
        goto LAB_14803fb92;
      }
    }
    if (1 < (byte)LogIris._0_1_) {
      UObjectReplicationBridge::DescribeObjectReference
                ((UObjectReplicationBridge *)local_2a8,&local_1e8,(FNetObjectReference *)puVar26,
                 param_1->ResolveContext);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
LAB_14803f47e:
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    cVar14 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
    if (cVar14 == '\0') {
      local_2d8 = param_2;
      local_2e8[0] = (AActor *)
                     UObjectReplicationBridge::ResolveObjectReference
                               ((UObjectReplicationBridge *)this->_padding_,
                                (FNetObjectReference *)&param_2[8].ProtocolIdentifier,
                                param_1->ResolveContext);
      if (local_2e8[0] != (AActor *)0x0) {
        pUVar17 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar17->_padding_;
        if ((iVar1 <= *(int *)(local_2e8[0]->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(local_2e8[0]->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar17->_padding_)) {
          local_2d0.ComparisonIndex.Value = 0;
          local_2d0.Number = 0;
          if ((char)local_2d8[10].ProtocolIdentifier == '\0') {
            FVar18 = (FName)UObjectReplicationBridge::ResolveObjectReference
                                      ((UObjectReplicationBridge *)this->_padding_,
                                       (FNetObjectReference *)&local_2d8[9].ProtocolIdentifier,
                                       param_1->ResolveContext);
            if (FVar18 != (FName)0x0) {
              local_2d0 = FVar18;
              pUVar17 = Z_Construct_UClass_ULevel_NoRegister();
              iVar1 = (int)pUVar17->_padding_;
              if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar18 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)FVar18 + 0x10) + 0x30) +
                   (longlong)iVar1 * 8) == &pUVar17->_padding_)) goto LAB_14803f5ce;
            }
            local_2d0.ComparisonIndex.Value = 0;
            local_2d0.Number = 0;
          }
LAB_14803f5ce:
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_2a0 = 0;
            TVar19 = (TEventRef<unsigned_int>)&local_2a0;
          }
          else {
            local_270 = local_2e8[0]->_padding_;
            TVar19 = FStringTrace::GetNameRef(local_188);
          }
          uVar3 = *(undefined8 *)TVar19;
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_298 = 0;
            TVar19 = (TEventRef<unsigned_int>)&local_298;
          }
          else {
            local_268 = *(undefined8 *)(local_2e8[0]->_padding_ + 0x18);
            TVar19 = FStringTrace::GetNameRef(&local_1b8);
          }
          uVar4 = *(undefined8 *)TVar19;
          if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
            local_290 = 0;
            TVar19 = (TEventRef<unsigned_int>)&local_290;
          }
          else {
            pUVar20 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_2e8[0]);
            local_260 = pUVar20->_padding_;
            TVar19 = FStringTrace::GetNameRef(&local_1b0);
          }
          uVar5 = *(undefined8 *)TVar19;
          bVar8 = false;
          if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
            UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                      ((TLogScope<0> *)&local_e8);
            bVar8 = true;
            *local_e8 = (int)uVar3;
            local_e8[1] = (int)uVar4;
            local_e8[2] = (int)uVar5;
            *(undefined8 *)(local_e0 + 0x28) = *(undefined8 *)(local_e0 + 0x20);
          }
          FVar18 = local_2d0;
          if (((local_2d0 != (FName)0x0) &&
              (pUVar21 = ULevel::GetWorld((ULevel *)local_2d0), pUVar21 == (UWorld *)0x0)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Level == nullptr || Level->GetWorld() != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                                  ,0x17b,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            pFVar22 = (FInstantiateResult *)(*pcVar7)();
            return pFVar22;
          }
          FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_158);
          FVar12 = local_2d0;
          local_158[0x32] = local_158[0x32] | 3;
          local_2d0.ComparisonIndex = FVar18.ComparisonIndex.Value;
          local_2d0.Number = FVar18.Number;
          local_158._32_4_ = local_2d0.ComparisonIndex.Value;
          local_158._36_4_ = local_2d0.Number;
          local_158._8_8_ = local_2e8[0];
          local_158[0x30] = AlwaysSpawn;
          pUVar21 = (local_288->World).field0_0x0.DebugPtr;
          local_2d0 = FVar12;
          FRepMovement::RebaseOntoLocalOrigin
                    ((TVector<double> *)&local_240._s_0,
                     (TVector<double> *)&local_2d8[2].ProtocolIdentifier,&pUVar21->OriginLocation);
          pTVar23 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)(local_2d8 + 4),&local_178);
          local_d8.Rotation.XY.m128d_f64[0] = pTVar23->X;
          local_d8.Rotation.XY.m128d_f64[1] = pTVar23->Y;
          local_d8.Rotation.ZW.m128d_f64[0] = pTVar23->Z;
          local_d8.Rotation.ZW.m128d_f64[1] = pTVar23->W;
          local_d8.Translation.XY.m128d_f64[0] = local_240._s_0.X;
          local_d8.Translation.XY.m128d_f64[1] = local_240._s_0.Y;
          local_d8.Translation.ZW.m128d_f64[0] = local_240._s_0.Z;
          local_d8.Translation.ZW.m128d_f64[1] = 0.0;
          local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
          local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
          local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
          local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
          pAVar16 = UWorld::SpawnActorAbsolute
                              (pUVar21,(UClass *)local_2e8[0]->_padding_,&local_d8,
                               (FActorSpawnParameters *)local_158);
          pUVar13 = local_250;
          dVar11 = __real_3f1a36e2e0000000;
          uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          if (pAVar16 == (AActor *)0x0) {
            local_228 = local_2e8;
            local_220 = &local_2a8;
            local_218 = &local_2d8;
            local_210 = local_258;
            `UNetActorFactory::InstantiateReplicatedObjectFromHeader'::__l114::<lambda_1>::
            operator()(&local_228);
            *(undefined8 *)&__return_storage_ptr__->Flags = 0;
            __return_storage_ptr__->Instance = (UObject *)0x0;
            __return_storage_ptr__->Template = (UObject *)0x0;
            if (local_158._64_8_ != 0) {
              plVar25 = (longlong *)(local_158 + 0x50);
              if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
                plVar25 = (longlong *)local_158._104_8_;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
            if (!bVar8) goto LAB_14803fb92;
            lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar6 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pFVar24 = *(FWriteBuffer **)(lVar6 + 0x20);
            if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
              pFVar24 = UE::Trace::Private::Writer_NextBuffer();
            }
          }
          else {
            dVar28 = (double)local_2d8[7]._padding_ -
                     (local_250->DefaultSpawnInfo).Velocity.field0_0x0._s_0.X;
            if (((__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                || (dVar28 = *(double *)&local_2d8[7].ProtocolIdentifier -
                             (local_250->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Y,
                   __real_3f1a36e2e0000000 <
                   (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
                ) || (dVar28 = (double)local_2d8[8]._padding_ -
                               (local_250->DefaultSpawnInfo).Velocity.field0_0x0._s_0.Z,
                     __real_3f1a36e2e0000000 <
                     (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ))) {
              (**(code **)(pAVar16->_padding_ + 0x4f0))(pAVar16);
            }
            dVar28 = *(double *)&local_2d8[5].ProtocolIdentifier -
                     (pUVar13->DefaultSpawnInfo).Scale.field0_0x0._s_0.X;
            if (((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar10,
                                            SUB84(dVar28,0) & uVar9)) ||
                (dVar28 = (double)local_2d8[6]._padding_ -
                          (pUVar13->DefaultSpawnInfo).Scale.field0_0x0._s_0.Y,
                dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar10,
                                          SUB84(dVar28,0) & uVar9))) ||
               (dVar28 = *(double *)&local_2d8[6].ProtocolIdentifier -
                         (pUVar13->DefaultSpawnInfo).Scale.field0_0x0._s_0.Z,
               dVar11 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar10,
                                         SUB84(dVar28,0) & uVar9))) {
              local_1a8._s_0.X = (double)*(undefined8 *)&local_2d8[5].ProtocolIdentifier;
              local_1a8._s_0.Y = (double)local_2d8[6]._padding_;
              local_1a8._s_0.Z = (double)*(undefined8 *)&local_2d8[6].ProtocolIdentifier;
              AActor::SetActorRelativeScale3D(pAVar16,(TVector<double> *)&local_1a8._s_0);
            }
            pUStack_2c0 = (UObject *)0x0;
            local_2c8 = (undefined1  [8])pAVar16;
            cVar14 = (**(code **)(local_288->_padding_ + 0x498))(local_288,pAVar16);
            local_2b8 = (uint)(cVar14 != '\0');
            if (5 < (byte)LogIris._0_1_) {
              if (local_2e8[0] == (AActor *)0x0) {
                ::FString::FString(&local_280,L"None");
              }
              else {
                local_2d0 = (FName)local_2e8[0]->_padding_;
                ::FName::ToString(&local_2d0,&local_280);
              }
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pAVar16,&local_1c8,(UObject *)0x0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
            }
            pAVar16->bActorIsPendingPostNetInit = '\x01';
            __return_storage_ptr__->Instance = (UObject *)local_2c8;
            __return_storage_ptr__->Template = pUStack_2c0;
            *(ulonglong *)&__return_storage_ptr__->Flags = CONCAT44(uStack_2b4,local_2b8);
            if (local_158._64_8_ != 0) {
              plVar25 = (longlong *)(local_158 + 0x50);
              if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
                plVar25 = (longlong *)local_158._104_8_;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
            if (!bVar8) goto LAB_14803fb92;
            lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (*(char *)(lVar6 + 0x9d48) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pFVar24 = *(FWriteBuffer **)(lVar6 + 0x20);
            if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
              pFVar24 = UE::Trace::Private::Writer_NextBuffer();
              *pFVar24->Cursor = '\n';
              pFVar24->Cursor = pFVar24->Cursor + 1;
              pFVar24->Committed = pFVar24->Cursor;
              goto LAB_14803fb92;
            }
          }
          *pFVar24->Cursor = '\n';
          pFVar24->Cursor = pFVar24->Cursor + 1;
          pFVar24->Committed = pFVar24->Cursor;
          goto LAB_14803fb92;
        }
      }
      local_2e8[0] = (AActor *)0x0;
      if (1 < (byte)LogIris._0_1_) {
        UObjectReplicationBridge::DescribeObjectReference
                  ((UObjectReplicationBridge *)this->_padding_,(FString *)local_2c8,
                   (FNetObjectReference *)&local_2d8[8].ProtocolIdentifier,param_1->ResolveContext);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_2c8 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_2c8);
        }
      }
    }
    else {
      pAVar16 = (AActor *)
                UObjectReplicationBridge::GetPreRegisteredObject
                          ((UObjectReplicationBridge *)this->_padding_,
                           (FNetRefHandle)*(FNetRefHandle_u_0 *)&(param_1->Handle).field0_0x0._s_0);
      if (pAVar16 != (AActor *)0x0) {
        pUVar17 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar17->_padding_;
        if ((iVar1 <= *(int *)(pAVar16->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar17->_padding_)) goto LAB_14803f3e6;
      }
      if (1 < (byte)LogIris._0_1_) {
        UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_1d8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        local_1e8.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
        goto LAB_14803f47e;
      }
    }
  }
  *(undefined8 *)&__return_storage_ptr__->Flags = 0;
  __return_storage_ptr__->Instance = (UObject *)0x0;
  __return_storage_ptr__->Template = (UObject *)0x0;
LAB_14803fb92:
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_248);
  FLLMScope::~FLLMScope(local_2b0);
  return __return_storage_ptr__;
}

// OnInit @ 1480472e0

void __thiscall UNetActorFactory::OnInit(UNetActorFactory *this)

{
  EActorNetSpawnInfoFlags EVar1;
  
  EVar1 = UE::Net::Private::GetSpawnInfoFlags();
  this->SpawnInfoFlags = EVar1;
  return;
}

// PostInit @ 148049670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UNetActorFactory::PostInit(UNetActorFactory *this,FPostInitContext *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  AActor *this_00;
  TEventRef<unsigned_int> TVar6;
  UPackage *pUVar7;
  FWriteBuffer *pFVar8;
  undefined1 auStackY_78 [32];
  longlong local_48;
  FLLMScope local_40 [2];
  FMemScope local_38;
  TLogScope<0> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this_00 = CastChecked<AActor,UObject>(param_1->Instance);
  if (this_00 != (AActor *)0x0) {
    this_00->bActorIsPendingPostNetInit = '\0';
    uVar1 = (param_1->Handle).field0_0x0.Value;
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FName::FName(&LLMScope_Name473,L"UObject/NetworkPostInit");
          _Init_thread_footer(&::_TSS0);
        }
      }
      FLLMScope::FLLMScope(local_40,LLMScope_Name473,false,None,Default,true);
      FMemScope::FMemScope(&local_38,&LLMScope_Name473,true);
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_48 = 0;
        TVar6 = (TEventRef<unsigned_int>)&local_48;
      }
      else {
        local_48 = this_00->_padding_;
        TVar6 = FStringTrace::GetNameRef((FName *)&local_30);
      }
      uVar3 = *(undefined8 *)TVar6;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_48 = 0;
        TVar6 = (TEventRef<unsigned_int>)&local_48;
      }
      else {
        local_48 = *(undefined8 *)(this_00->_padding_ + 0x18);
        TVar6 = FStringTrace::GetNameRef((FName *)&local_30);
      }
      uVar4 = *(undefined8 *)TVar6;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_48 = 0;
        TVar6 = (TEventRef<unsigned_int>)&local_48;
      }
      else {
        pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
        local_48 = pUVar7->_padding_;
        TVar6 = FStringTrace::GetNameRef((FName *)&local_30);
      }
      uVar5 = *(undefined8 *)TVar6;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        (**(code **)(this_00->_padding_ + 0x4d8))(this_00);
      }
      else {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_30);
        *(int *)local_30._0_8_ = (int)uVar3;
        *(int *)(local_30._0_8_ + 4) = (int)uVar4;
        *(int *)(local_30._0_8_ + 8) = (int)uVar5;
        *(undefined8 *)(local_30._8_8_ + 0x28) = *(undefined8 *)(local_30._8_8_ + 0x20);
        (**(code **)(this_00->_padding_ + 0x4d8))(this_00);
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar8 = *(FWriteBuffer **)(lVar2 + 0x20);
        if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 1) {
          pFVar8 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar8->Cursor = '\n';
        pFVar8->Cursor = pFVar8->Cursor + 1;
        pFVar8->Committed = pFVar8->Cursor;
      }
      FMemScope::~FMemScope(&local_38);
      FLLMScope::~FLLMScope(local_40);
    }
  }
  return;
}

// PostInstantiation @ 148049d40

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
UNetActorFactory::PostInstantiation(UNetActorFactory *this,FPostInstantiationContext *param_1)

{
  byte bVar1;
  int iVar2;
  FNetObjectCreationHeader *pFVar3;
  UNetDriver *pUVar4;
  code *pcVar5;
  FConnectionHandle FVar6;
  char cVar7;
  bool bVar8;
  AActor *this_00;
  UEngineReplicationBridge *pUVar9;
  UNetConnection *pUVar10;
  FWorldContext *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  undefined4 uStackX_1c;
  FString local_128;
  FInBunch local_118;
  
  this_00 = CastChecked<AActor,UObject>(param_1->Instance);
  if (this_00 != (AActor *)0x0) {
    pUVar9 = CastChecked<UEngineReplicationBridge,UObjectReplicationBridge>
                       ((UObjectReplicationBridge *)this->_padding_);
    local_res18 = param_1->ConnectionId;
    pFVar3 = param_1->Header;
    uStackX_1c = 0;
    FVar6.ChildConnectionId = 0;
    FVar6.ParentConnectionId = local_res18;
    pUVar10 = UNetDriver::GetConnectionByHandle(pUVar9->NetDriver,FVar6);
    FInBunch::FInBunch(&local_118,pUVar10,(uchar *)pFVar3[1]._padding_,
                       (ulonglong)(ushort)pFVar3[2]._padding_);
    (**(code **)(this_00->_padding_ + 0x488))(this_00,&local_118);
    if (((local_118._padding_._1_1_ & 2) == 0) && (local_118._padding_ == local_118._padding_)) {
      FNetBitReader::~FNetBitReader((FNetBitReader *)&local_118);
      bVar1 = (this_00->NetDormancy).Value;
      if (1 < bVar1) {
        (this_00->NetDormancy).Value = '\x01';
        if ((pUVar9->NetDriver != (UNetDriver *)0x0) &&
           (pFVar11 = UEngine::GetWorldContextFromWorld
                                (GEngine,(pUVar9->NetDriver->World).field0_0x0.DebugPtr),
           pFVar11 != (FWorldContext *)0x0)) {
          pFVar12 = (pFVar11->ActiveNetDrivers).AllocatorInstance.Data;
          iVar2 = (pFVar11->ActiveNetDrivers).ArrayNum;
          pFVar13 = pFVar12 + (longlong)iVar2 * 0x10;
          while( true ) {
            if ((pFVar11->ActiveNetDrivers).ArrayNum != iVar2) {
              `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res10);
            }
            if (pFVar12 == pFVar13) break;
            pUVar4 = *(UNetDriver **)pFVar12;
            if (((pUVar4 != (UNetDriver *)0x0) && (pUVar4 != pUVar9->NetDriver)) &&
               (cVar7 = (**(code **)(pUVar4->_padding_ + 0x488))(pUVar4,this_00), cVar7 != '\0')) {
              (**(code **)(**(longlong **)pFVar12 + 0x3a8))(*(longlong **)pFVar12,this_00,bVar1);
            }
            pFVar12 = pFVar12 + 0x10;
          }
        }
      }
    }
    else {
      if (1 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_128,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetActorFactory.cpp"
                         ,0x1c5,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNetBitReader::~FNetBitReader((FNetBitReader *)&local_118);
    }
  }
  return;
}

// SerializeHeader @ 148058590

bool __thiscall
UNetActorFactory::SerializeHeader
          (UNetActorFactory *this,FCreationHeaderContext *param_1,FNetObjectCreationHeader *param_2)

{
  FNetBitStreamWriter *this_00;
  char cVar1;
  undefined1 uVar2;
  
  this_00 = param_1->Serialization->BitStreamWriter;
  cVar1 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  UE::Net::FNetBitStreamWriter::WriteBits(this_00,(uint)(cVar1 != '\0'),1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
    UE::Net::FNetBitStreamWriter::WriteBits(this_00,(uint)(cVar1 != '\0'),1);
  }
                    /* WARNING: Could not recover jumptable at 0x000148058631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_2->_padding_ + 0x20))(param_2,param_1);
  return (bool)uVar2;
}

// StaticRegisterNativesUNetActorFactory @ 148065380

void __cdecl UNetActorFactory::StaticRegisterNativesUNetActorFactory(void)

{
  return;
}

// SubObjectCreatedFromReplication @ 148065b80

void __thiscall
UNetActorFactory::SubObjectCreatedFromReplication
          (UNetActorFactory *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  pUVar2 = UObjectReplicationBridge::GetReplicatedObject
                     ((UObjectReplicationBridge *)this->_padding_,param_1);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_148065bcb;
  }
  pUVar2 = (UObject *)0x0;
LAB_148065bcb:
  pUVar4 = UObjectReplicationBridge::GetReplicatedObject
                     ((UObjectReplicationBridge *)this->_padding_,param_2);
  if ((((pUVar2 != (UObject *)0x0) && ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0)) &&
      (pUVar4 != (UObject *)0x0)) && ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) {
    (**(code **)(*(longlong *)pUVar2 + 0x300))(pUVar2,pUVar4);
  }
  return;
}

// operator() @ 150520a30

bool __thiscall `UNetActorFactory::CreateAndFillHeader'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8676358834463178860>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)this + 0x28),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8676358834463178860>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150520aa2;
    }
  }
  bVar2 = false;
LAB_150520aa2:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505218d0

bool __thiscall
`UNetActorFactory::InstantiateReplicatedObjectFromHeader'::__l114::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8676358834463179148>);
  if (bVar4) {
    UObjectReplicationBridge::DescribeObjectReference
              ((UObjectReplicationBridge *)**(undefined8 **)((longlong)this + 8),&local_18,
               (FNetObjectReference *)(**(longlong **)((longlong)this + 0x10) + 0x88),
               *(FNetObjectResolveContext **)(*(longlong *)((longlong)this + 0x18) + 8));
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8676358834463179148>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505219b6;
    }
  }
  bVar4 = false;
LAB_1505219b6:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

