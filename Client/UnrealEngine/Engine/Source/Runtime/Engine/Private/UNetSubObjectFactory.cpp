// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 1480062e0

UClass * __cdecl UNetSubObjectFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetSubObjectFactory",
               &Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton,
               StaticRegisterNativesUNetSubObjectFactory,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetSubObjectFactory>,
               InternalVTableHelperCtorCaller<UNetSubObjectFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton;
}

// UNetSubObjectFactory @ 148016c80

UNetSubObjectFactory * __thiscall
UNetSubObjectFactory::UNetSubObjectFactory(UNetSubObjectFactory *this,FVTableHelper *param_1)

{
  UNetObjectFactory::UNetObjectFactory((UNetObjectFactory *)this,param_1);
  *(undefined ***)this = &___7UNetSubObjectFactory__6B_;
  return this;
}

// UNetSubObjectFactory @ 148016cb0

UNetSubObjectFactory * __thiscall
UNetSubObjectFactory::UNetSubObjectFactory(UNetSubObjectFactory *this,FObjectInitializer *param_1)

{
  UNetObjectFactory::UNetObjectFactory((UNetObjectFactory *)this,param_1);
  *(undefined ***)this = &___7UNetSubObjectFactory__6B_;
  return this;
}

// ~UNetSubObjectFactory @ 148018a70

void __thiscall UNetSubObjectFactory::~UNetSubObjectFactory(UNetSubObjectFactory *this)

{
  *(undefined ***)this = &___7UNetSubObjectFactory__6B_;
  UNetObjectFactory::~UNetObjectFactory((UNetObjectFactory *)this);
  return;
}

// CreateAndDeserializeHeader @ 1480278c0

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetSubObjectFactory::CreateAndDeserializeHeader
          (UNetSubObjectFactory *this,FCreationHeaderContext *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong in_R8;
  
  uVar1 = UE::Net::FNetBitStreamReader::ReadBits
                    (*(FNetBitStreamReader **)(*(longlong *)(in_R8 + 0x18) + 0x318),1);
  if ((uVar1 & 1) == 0) {
    plVar2 = ::operator_new(0x20);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 0;
      *(undefined1 *)((longlong)plVar2 + 0xc) = 0xff;
      *plVar2 = (longlong)&___7FNetStaticSubObjectCreationHeader_Net_UE__6B_;
      plVar2[2] = 0;
      plVar2[3] = 0;
      goto LAB_14802795b;
    }
  }
  else {
    plVar2 = ::operator_new(0x38);
    if (plVar2 != (longlong *)0x0) {
      *(byte *)(plVar2 + 6) = *(byte *)(plVar2 + 6) & 0xf8;
      *(undefined4 *)(plVar2 + 1) = 0;
      *(undefined1 *)((longlong)plVar2 + 0xc) = 0xff;
      *plVar2 = (longlong)&___7FNetDynamicSubObjectCreationHeader_Net_UE__6B_;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      goto LAB_14802795b;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_14802795b:
  (**(code **)(*plVar2 + 0x20))(plVar2);
  (param_1->Handle).field0_0x0.Value = (ulong64)plVar2;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )(FNetObjectCreationHeader *)param_1;
}

// CreateAndFillHeader @ 148027b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
__thiscall
UNetSubObjectFactory::CreateAndFillHeader(UNetSubObjectFactory *this,FNetRefHandle param_1)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  FNetDynamicSubObjectCreationHeader *pFVar5;
  undefined8 *puVar6;
  FNetDynamicSubObjectCreationHeader *pFVar7;
  FNetRefHandle_u_0 in_R8;
  FNetRefHandle_u_0 local_res18 [2];
  UNetSubObjectFactory *local_38;
  FNetRefHandle_u_0 *local_30;
  FNetRefHandle_u_0 local_28;
  undefined8 uStack_20;
  
  local_res18[0] = in_R8;
  pUVar4 = UObjectReplicationBridge::GetReplicatedObject
                     (*(UObjectReplicationBridge **)&this->field_0x28,(FNetRefHandle)in_R8);
  if (pUVar4 == (UObject *)0x0) {
    local_30 = local_res18;
    local_38 = this;
    `UNetSubObjectFactory::CreateAndFillHeader'::__l5::<lambda_1>::operator()(&local_38);
    *(undefined8 *)param_1.field0_0x0 = 0;
    return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
            )param_1.field0_0x0.Value;
  }
  UObjectReplicationBridge::GetOrCreateObjectReference
            (*(UObjectReplicationBridge **)&this->field_0x28,(FNetObjectReference *)&local_28._s_0,
             pUVar4);
  if (((local_28.Value._0_1_ & 1) == 0) &&
     (cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x200))(pUVar4), cVar2 == '\0')) {
    pFVar5 = ::operator_new(0x38);
    pFVar7 = (FNetDynamicSubObjectCreationHeader *)0x0;
    if (pFVar5 != (FNetDynamicSubObjectCreationHeader *)0x0) {
      pFVar5->bUsePersistentLevel = '\0';
      pFVar5->bOuterIsRootObject = '\0';
      pFVar5->bOuterIsTransientLevel = '\0';
      *(undefined4 *)&pFVar5->_padding_ = 0;
      *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 0xff;
      pFVar5->_padding_ = (longlong)&___7FNetDynamicSubObjectCreationHeader_Net_UE__6B_;
      (pFVar5->TemplateReference).RefHandle.field0_0x0.Value = 0;
      (pFVar5->TemplateReference).PathToken = (FNetToken_u_0)0x0;
      (pFVar5->TemplateReference).Traits = None;
      (pFVar5->OuterReference).RefHandle.field0_0x0.Value = 0;
      (pFVar5->OuterReference).PathToken = (FNetToken_u_0)0x0;
      (pFVar5->OuterReference).Traits = None;
      pFVar7 = pFVar5;
    }
    bVar3 = FillDynamicHeader(this,pFVar7,pUVar4,(FNetRefHandle)local_res18[0]._s_0);
    if (bVar3) {
      *(FNetDynamicSubObjectCreationHeader **)param_1.field0_0x0 = pFVar7;
    }
    else {
      *(undefined8 *)param_1.field0_0x0 = 0;
      if (pFVar7 != (FNetDynamicSubObjectCreationHeader *)0x0) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
            )param_1.field0_0x0.Value;
  }
  puVar6 = ::operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)param_1.field0_0x0 = 0;
    _DAT_00000010 = CONCAT71(local_28.Value._1_7_,local_28.Value._0_1_);
    _DAT_00000018 = uStack_20;
    return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
            )param_1.field0_0x0.Value;
  }
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = &___7FNetStaticSubObjectCreationHeader_Net_UE__6B_;
  *(undefined1 *)((longlong)puVar6 + 0xc) = 0xff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined8 **)param_1.field0_0x0 = puVar6;
  puVar6[2] = CONCAT71(local_28.Value._1_7_,local_28.Value._0_1_);
  puVar6[3] = uStack_20;
  return (TUniquePtr<UE::Net::FNetObjectCreationHeader,TDefaultDelete<UE::Net::FNetObjectCreationHeader>_>
          )param_1.field0_0x0.Value;
}

// DetachedFromReplication @ 14802bcd0

void __thiscall
UNetSubObjectFactory::DetachedFromReplication(UNetSubObjectFactory *this,FDestroyedContext *param_1)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FUObjectItem *pFVar5;
  FDestroyedContext *local_res10 [3];
  
  if (param_1->DestroyReason == TearOff) {
    return;
  }
  if (param_1->DestroyReason != DoNotDestroy) {
    if ((param_1->DestroyFlags & AllowDestroyInstanceFromRemote) != None) {
      pUVar2 = param_1->RootObject;
      if (pUVar2 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar4->_padding_)) &&
           ((((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0 &&
             (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
             ((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0)) ||
            (local_res10[0] = param_1,
            bVar3 = `UNetSubObjectFactory::DetachedFromReplication'::__l15::<lambda_1>::operator()
                              (local_res10), bVar3)))) {
          (**(code **)(*(longlong *)pUVar2 + 0x308))(pUVar2,param_1->DestroyedInstance);
        }
      }
      (**(code **)(*(longlong *)param_1->DestroyedInstance + 0x238))();
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)param_1->DestroyedInstance);
      return;
    }
    return;
  }
  return;
}

// FillDynamicHeader @ 14802fd90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetSubObjectFactory::FillDynamicHeader
          (UNetSubObjectFactory *this,FNetDynamicSubObjectCreationHeader *param_1,UObject *param_2,
          FNetRefHandle param_3)

{
  UPackage *pUVar1;
  code *pcVar2;
  undefined4 uVar3;
  FNetToken_u_0 FVar4;
  ENetObjectReferenceTraits EVar5;
  FNetToken FVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  UObject *pUVar10;
  FNetObjectReference *pFVar11;
  longlong lVar12;
  UPackage *pUVar13;
  FName local_res8;
  FName local_res10;
  FNetRefHandle_u_0 local_res18;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FNetObjectReference local_58;
  FNetObjectReference local_48;
  
  cVar7 = (**(code **)(*(longlong *)param_2 + 0x100))(param_2);
  if ((cVar7 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObject->NeedsLoadForClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                         ,0x50,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  cVar7 = (**(code **)(**(longlong **)&param_2->field_0x10 + 0x100))();
  if ((cVar7 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObject->GetClass()->NeedsLoadForClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                         ,0x51,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return (bool)uVar9;
  }
  pUVar10 = UObject::GetArchetype(param_2);
  pFVar11 = UObjectReplicationBridge::GetOrCreateObjectReference
                      (*(UObjectReplicationBridge **)&this->field_0x28,&local_58,pUVar10);
  uVar3 = *(undefined4 *)((longlong)&(pFVar11->RefHandle).field0_0x0 + 4);
  FVar4 = (pFVar11->PathToken).field0_0x0;
  EVar5 = pFVar11->Traits;
  *(undefined4 *)&(param_1->TemplateReference).RefHandle.field0_0x0 =
       *(undefined4 *)&(pFVar11->RefHandle).field0_0x0;
  *(undefined4 *)((longlong)&(param_1->TemplateReference).RefHandle.field0_0x0 + 4) = uVar3;
  (param_1->TemplateReference).PathToken.field0_0x0 = FVar4;
  (param_1->TemplateReference).Traits = EVar5;
  if ((*(byte *)&(param_1->TemplateReference).RefHandle.field0_0x0 & 1) == 0) {
    if (1 < (byte)LogIris._0_1_) {
      lVar12 = (**(code **)(**(longlong **)&param_2->field_0x10 + 0x368))();
      if (lVar12 == 0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_res8 = *(FName *)(lVar12 + 0x18);
        ::FName::ToString(&local_res8,&local_b8);
      }
      UReplicationBridge::PrintObjectFromNetRefHandle
                (*(UReplicationBridge **)&this->field_0x28,&local_78,param_3);
      if (pUVar10 == (UObject *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
        local_res10.Number = *(uint *)&pUVar10->field_0x1c;
        ::FName::ToString(&local_res10,&local_c8);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  pUVar1 = *(UPackage **)&param_2->field_0x20;
  pUVar13 = GetTransientPackage();
  if (pUVar1 == pUVar13) {
    param_1->bOuterIsTransientLevel = '\x01';
  }
  else {
    UObjectReplicationBridge::GetRootObjectOfSubObject
              (*(UObjectReplicationBridge **)&this->field_0x28,(FNetRefHandle)&local_res18);
    pUVar13 = (UPackage *)
              UObjectReplicationBridge::GetReplicatedObject
                        (*(UObjectReplicationBridge **)&this->field_0x28,(FNetRefHandle)local_res18)
    ;
    if ((pUVar13 == (UPackage *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                           ,0x6b,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    if (pUVar1 != pUVar13) {
      pFVar11 = UObjectReplicationBridge::GetOrCreateObjectReference
                          (*(UObjectReplicationBridge **)&this->field_0x28,&local_48,
                           (UObject *)pUVar1);
      FVar6.field0_0x0 = (pFVar11->PathToken).field0_0x0;
      EVar5 = pFVar11->Traits;
      (param_1->OuterReference).RefHandle.field0_0x0 = (pFVar11->RefHandle).field0_0x0;
      (param_1->OuterReference).PathToken = (FNetToken)FVar6.field0_0x0;
      (param_1->OuterReference).Traits = EVar5;
      if ((param_1->OuterReference).RefHandle.field0_0x0.Value != 0) {
        return true;
      }
      if (((param_1->OuterReference).PathToken.field0_0x0.Value & 0xfffff) != 0) {
        return true;
      }
      if ((2 < (byte)LogIris._0_1_) && (UE::Net::Private::bWarnWhenOuterIsReplaced != false)) {
        if (pUVar13 == (UPackage *)0x0) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          local_88 = (FName)pUVar13->_padding_;
          ::FName::ToString(&local_88,&local_98);
        }
        if (pUVar1 == (UPackage *)0x0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          local_80 = (FName)pUVar1->_padding_;
          ::FName::ToString(&local_80,&local_a8);
        }
        UReplicationBridge::PrintObjectFromNetRefHandle
                  (*(UReplicationBridge **)&this->field_0x28,&local_68,param_3);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
    }
    param_1->bOuterIsRootObject = '\x01';
  }
  return true;
}

// GetFactoryName @ 148035760

FName __cdecl UNetSubObjectFactory::GetFactoryName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = UE::Net::Private::SubObjectFactoryName;
  return in_RCX;
}

// GetPollFrequency @ 1480367a0

float __thiscall
UNetSubObjectFactory::GetPollFrequency
          (UNetSubObjectFactory *this,FNetRefHandle param_1,UObject *param_2)

{
  FNetRefHandle_u_0 local_res10;
  UObject *local_res18 [2];
  UObject **local_28;
  UNetSubObjectFactory *local_20;
  FNetRefHandle_u_0 *local_18;
  
  local_28 = local_res18;
  local_18 = &local_res10;
  local_res10 = param_1.field0_0x0;
  local_res18[0] = param_2;
  local_20 = this;
  `UNetSubObjectFactory::GetPollFrequency'::__l2::<lambda_1>::operator()(&local_28);
  return __real_42c80000;
}

// GetPrivateStaticClass @ 148036c50

UClass * __cdecl UNetSubObjectFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetSubObjectFactory",
               &Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton,
               StaticRegisterNativesUNetSubObjectFactory,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetSubObjectFactory>,
               InternalVTableHelperCtorCaller<UNetSubObjectFactory>,local_res8,
               UNetObjectFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetSubObjectFactory.InnerSingleton;
}

// GetWorldInfo @ 148038ad0

TOptional<UNetObjectFactory::FWorldInfoData> * __thiscall
UNetSubObjectFactory::GetWorldInfo
          (UNetSubObjectFactory *this,
          TOptional<UNetObjectFactory::FWorldInfoData> *__return_storage_ptr__,
          FWorldInfoContext *param_1)

{
  FWorldInfoContext *local_18;
  UNetSubObjectFactory *local_10;
  
  local_18 = param_1;
  local_10 = this;
  `UNetSubObjectFactory::GetWorldInfo'::__l2::<lambda_1>::operator()(&local_18);
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InstantiateReplicatedObjectFromHeader @ 14803fbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FInstantiateResult * __thiscall
UNetSubObjectFactory::InstantiateReplicatedObjectFromHeader
          (UNetSubObjectFactory *this,FInstantiateResult *__return_storage_ptr__,
          FInstantiateContext *param_1,FNetObjectCreationHeader *param_2)

{
  FNetObjectReference *pFVar1;
  UClass *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  UObject *pUVar6;
  UPackage *pUVar7;
  FInstantiateResult *pFVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UObject *this_00;
  longlong *plVar11;
  undefined1 auStackY_298 [32];
  FName local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  undefined4 uStack_1c4;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar1 = (FNetObjectReference *)(param_2 + 1);
  cVar4 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  if (cVar4 == '\0') {
    pUVar6 = UObjectReplicationBridge::ResolveObjectReference
                       (*(UObjectReplicationBridge **)&this->field_0x28,pFVar1,
                        param_1->ResolveContext);
    if (pUVar6 == (UObject *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        pUVar6 = UObjectReplicationBridge::GetReplicatedObject
                           (*(UObjectReplicationBridge **)&this->field_0x28,
                            (FNetRefHandle)
                            *(FNetRefHandle_u_0 *)&(param_1->RootObjectOfSubObject).field0_0x0._s_0)
        ;
        if (pUVar6 == (UObject *)0x0) {
          ::FString::FString(&local_238,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_238,(UObject *)0x0);
        }
        UReplicationBridge::PrintObjectFromNetRefHandle
                  (*(UReplicationBridge **)&this->field_0x28,&local_138,
                   (FNetRefHandle)
                   *(FNetRefHandle_u_0 *)&(param_1->RootObjectOfSubObject).field0_0x0._s_0);
        UObjectReplicationBridge::DescribeObjectReference
                  (*(UObjectReplicationBridge **)&this->field_0x28,&local_148,pFVar1,
                   param_1->ResolveContext);
        UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_158);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      *(undefined8 *)&__return_storage_ptr__->Flags = 0;
      __return_storage_ptr__->Instance = (UObject *)0x0;
      __return_storage_ptr__->Template = (UObject *)0x0;
    }
    else {
      if (5 < (byte)LogIris._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar6,&local_118,(UObject *)0x0);
        UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_128);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      __return_storage_ptr__->Instance = pUVar6;
      __return_storage_ptr__->Template = (UObject *)0x0;
      __return_storage_ptr__->Flags = None;
    }
  }
  else {
    pUVar7 = (UPackage *)
             UObjectReplicationBridge::GetReplicatedObject
                       (*(UObjectReplicationBridge **)&this->field_0x28,
                        (FNetRefHandle)
                        *(FNetRefHandle_u_0 *)&(param_1->RootObjectOfSubObject).field0_0x0._s_0);
    pUVar6 = UObjectReplicationBridge::ResolveObjectReference
                       (*(UObjectReplicationBridge **)&this->field_0x28,pFVar1,
                        param_1->ResolveContext);
    if (pUVar6 == (UObject *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_f8);
        UObjectReplicationBridge::DescribeObjectReference
                  (*(UObjectReplicationBridge **)&this->field_0x28,&local_108,pFVar1,
                   param_1->ResolveContext);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<543174188823740607>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                         ,0xbf,"Template");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FInstantiateResult *)(*pcVar3)();
        return pFVar8;
      }
      *(undefined8 *)&__return_storage_ptr__->Flags = 0;
      __return_storage_ptr__->Instance = (UObject *)0x0;
      __return_storage_ptr__->Template = (UObject *)0x0;
    }
    else {
      if ((param_2[3]._padding_ & 2) == 0) {
        pUVar9 = pUVar7;
        if ((param_2[3]._padding_ & 4) == 0) {
          pUVar9 = (UPackage *)
                   UObjectReplicationBridge::ResolveObjectReference
                             (*(UObjectReplicationBridge **)&this->field_0x28,
                              (FNetObjectReference *)(param_2 + 2),param_1->ResolveContext);
          if (((pUVar9 == (UPackage *)0x0) && (pUVar9 = pUVar7, 2 < (byte)LogIris._0_1_)) &&
             (UE::Net::Private::bWarnWhenOuterIsReplaced != false)) {
            if (pUVar7 == (UPackage *)0x0) {
              ::FString::FString(&local_228,L"None");
            }
            else {
              local_1c0 = (FName)pUVar7->_padding_;
              ::FName::ToString(&local_1c0,&local_228);
            }
            local_1b8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
            local_1b8.Number = *(uint *)&pUVar6->field_0x1c;
            ::FName::ToString(&local_1b8,&local_188);
            local_240 = (FName)L"";
            if (local_188.Data.ArrayNum != 0) {
              local_240 = (FName)local_188.Data.AllocatorInstance.Data;
            }
            UE::Net::FNetRefHandle::ToString(&param_1->Handle,&local_1d8);
            UObjectReplicationBridge::DescribeObjectReference
                      (*(UObjectReplicationBridge **)&this->field_0x28,&local_e8,
                       (FNetObjectReference *)(param_2 + 2),param_1->ResolveContext);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            if ((FName)local_188.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_188.Data.AllocatorInstance.Data);
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      else {
        pUVar9 = GetTransientPackage();
      }
      pUVar2 = *(UClass **)&pUVar6->field_0x10;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar9,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar10 = Z_Construct_UClass_UObject_NoRegister();
      CheckIsClassChildOf_Internal(pUVar10,pUVar2);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar2);
      local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_d8._56_8_ = (UPackage *)0x0;
      local_d8._16_4_ = 0;
      local_d8._20_4_ = 0;
      local_d8._24_4_ = RF_NoFlags;
      local_d8[0x20] = false;
      local_d8._8_8_ = pUVar9;
      local_d8._40_8_ = pUVar6;
      this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar11 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (this_00 == (UObject *)0x0) {
        if (pUVar7 == (UPackage *)0x0) {
          ::FString::FString(&local_1f8,L"None");
        }
        else {
          local_240 = (FName)pUVar7->_padding_;
          ::FName::ToString(&local_240,&local_1f8);
        }
        if (pUVar9 == (UPackage *)0x0) {
          ::FString::FString(&local_208,L"None");
        }
        else {
          local_1b0 = (FName)pUVar9->_padding_;
          ::FName::ToString(&local_1b0,&local_208);
        }
        if (pUVar2 == (UClass *)0x0) {
          ::FString::FString(&local_218,L"None");
        }
        else {
          local_1a8 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_1a8,&local_218);
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SubObj != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                           ,0xe2,
                           L"UNetSubObjectFactory::InstantiateReplicatedObjectFromHeader: Subobject is NULL after instantiating. Class: %s, Outer %s, Actor %s"
                          );
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FInstantiateResult *)(*pcVar3)();
          return pFVar8;
        }
      }
      if ((pUVar9 != (UPackage *)0x0) &&
         (bVar5 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this_00,(UObject *)pUVar9), !bVar5)
         ) {
        if (pUVar7 == (UPackage *)0x0) {
          ::FString::FString(&local_1e8,L"None");
        }
        else {
          local_1a0 = (FName)pUVar7->_padding_;
          ::FName::ToString(&local_1a0,&local_1e8);
        }
        local_198 = (FName)pUVar9->_padding_;
        ::FName::ToString(&local_198,&local_168);
        local_190.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
        local_190.Number = *(uint *)&this_00->field_0x1c;
        ::FName::ToString(&local_190,&local_178);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OuterObject || SubObj->IsIn(OuterObject)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\NetSubObjectFactory.cpp"
                           ,0xe3,
                           L"UNetSubObjectFactory::InstantiateReplicatedObjectFromHeader: Subobject is not in Outer. SubObject: %s, Outer %s, Actor %s"
                          );
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FInstantiateResult *)(*pcVar3)();
          return pFVar8;
        }
      }
      __return_storage_ptr__->Instance = this_00;
      __return_storage_ptr__->Template = pUVar6;
      *(ulonglong *)&__return_storage_ptr__->Flags = CONCAT44(uStack_1c4,3);
    }
  }
  return __return_storage_ptr__;
}

// SerializeHeader @ 148058640

bool __thiscall
UNetSubObjectFactory::SerializeHeader
          (UNetSubObjectFactory *this,FCreationHeaderContext *param_1,
          FNetObjectCreationHeader *param_2)

{
  FNetBitStreamWriter *this_00;
  char cVar1;
  undefined1 uVar2;
  
  this_00 = param_1->Serialization->BitStreamWriter;
  cVar1 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  UE::Net::FNetBitStreamWriter::WriteBits(this_00,(uint)(cVar1 != '\0'),1);
                    /* WARNING: Could not recover jumptable at 0x0001480586a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_2->_padding_ + 0x18))(param_2,param_1);
  return (bool)uVar2;
}

// StaticRegisterNativesUNetSubObjectFactory @ 1480653b0

void __cdecl UNetSubObjectFactory::StaticRegisterNativesUNetSubObjectFactory(void)

{
  return;
}

// SubObjectCreatedFromReplication @ 148065c20

void __thiscall
UNetSubObjectFactory::SubObjectCreatedFromReplication
          (UNetSubObjectFactory *this,FNetRefHandle param_1,FNetRefHandle param_2)

{
  FNetRefHandle_u_0 local_res10;
  FNetRefHandle_u_0 local_res18 [2];
  UNetSubObjectFactory *local_28;
  FNetRefHandle_u_0 *local_20;
  FNetRefHandle_u_0 *local_18;
  
  local_20 = &local_res10;
  local_18 = local_res18;
  local_res10 = param_1.field0_0x0;
  local_res18[0] = param_2.field0_0x0;
  local_28 = this;
  `UNetSubObjectFactory::SubObjectCreatedFromReplication'::__l2::<lambda_1>::operator()(&local_28);
  return;
}

// operator() @ 150520110

bool __thiscall `UNetSubObjectFactory::GetPollFrequency'::__l2::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<543174188823740718>);
  if (bVar4) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)((longlong)this + 8) + 0x28),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
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
                      (&bGEnsureHasExecuted<543174188823740718>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505201e8;
    }
  }
  bVar4 = false;
LAB_1505201e8:
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

// operator() @ 150520240

bool __thiscall `UNetSubObjectFactory::GetWorldInfo'::__l2::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<543174188823740712>);
  if (bVar4) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)((longlong)this + 8) + 0x28),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&((FNetRefHandle_u_0 *)(*(longlong *)this + 8))->_s_0);
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
                      (&bGEnsureHasExecuted<543174188823740712>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150520318;
    }
  }
  bVar4 = false;
LAB_150520318:
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

// operator() @ 150520620

bool __thiscall
`UNetSubObjectFactory::SubObjectCreatedFromReplication'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<543174188823740674>);
  if (bVar4) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)this + 0x28),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 0x10))->_s_0);
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)this + 0x28),&local_28,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<543174188823740674>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505206ce;
    }
  }
  bVar4 = false;
LAB_1505206ce:
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

// operator() @ 150520ad0

bool __thiscall
`UNetSubObjectFactory::CreateAndFillHeader'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<543174188823740465>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)(*(longlong *)this + 0x28),&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<543174188823740465>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150520b42;
    }
  }
  bVar2 = false;
LAB_150520b42:
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

// operator() @ 150521ee0

bool __thiscall
`UNetSubObjectFactory::DetachedFromReplication'::__l15::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<543174188823740700>);
  if (bVar4) {
    if (*(UObjectBaseUtility **)(*(longlong *)this + 8) == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(*(longlong *)this + 8),&local_18,(UObject *)0x0);
    }
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
                      (&bGEnsureHasExecuted<543174188823740700>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150521fcb;
    }
  }
  bVar4 = false;
LAB_150521fcb:
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

