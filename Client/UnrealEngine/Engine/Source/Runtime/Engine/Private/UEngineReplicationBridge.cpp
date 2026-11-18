// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 46

// StaticClass @ 148006fe0

UClass * __cdecl UEngineReplicationBridge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineReplicationBridge",
               &Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton,
               StaticRegisterNativesUEngineReplicationBridge,0x6d0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEngineReplicationBridge>,
               InternalVTableHelperCtorCaller<UEngineReplicationBridge>,local_res8,
               UObjectReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 148007640

bool __cdecl
`UEngineReplicationBridge::Initialize'::__l21::<lambda_2>::<lambda_invoker_cdecl>(UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) && ((pUVar2[2].field_0x8 & 0xc) == 0)) &&
       ((pUVar2[2].field_0x9 & 0x10) == 0)) {
      return true;
    }
  }
  return false;
}

// <lambda_invoker_cdecl> @ 148007f60

bool __cdecl
`UEngineReplicationBridge::Initialize'::__l22::<lambda_3>::<lambda_invoker_cdecl>
          (UClass *param_1,UClass *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar4 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UObject *)0x0) {
LAB_148007fae:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_148007fae;
  }
  if ((param_2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_2);
  }
  pUVar3 = (param_2->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_148007ff3;
  }
  pUVar3 = (UObject *)0x0;
LAB_148007ff3:
  if (pUVar4 == pUVar3) {
    return true;
  }
  if ((pUVar4 != (UObject *)0x0) && (pUVar3 != (UObject *)0x0)) {
    if ((((pUVar4[2].field_0x8 ^ pUVar3[2].field_0x8) & 8) == 0) &&
       ((((pUVar3[2].field_0x8 ^ pUVar4[2].field_0x8) & 4) == 0 &&
        (((pUVar3[2].field_0x9 ^ pUVar4[2].field_0x9) & 0x10) == 0)))) {
      return true;
    }
  }
  return false;
}

// UEngineReplicationBridge @ 148015820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __thiscall
UEngineReplicationBridge::UEngineReplicationBridge
          (UEngineReplicationBridge *this,FVTableHelper *param_1)

{
  UObjectReplicationBridge::UObjectReplicationBridge((UObjectReplicationBridge *)this,param_1);
  *(undefined ***)this = &___7UEngineReplicationBridge__6B_;
  this->NetDriver = (UNetDriver *)0x0;
  (this->ObjectReferencePackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  (this->ActorFactoryName).ComparisonIndex = 0;
  (this->ActorFactoryName).Number = 0;
  (this->SubObjectFactoryName).ComparisonIndex = 0;
  (this->SubObjectFactoryName).Number = 0;
  return this;
}

// UEngineReplicationBridge @ 148015870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __thiscall
UEngineReplicationBridge::UEngineReplicationBridge(UEngineReplicationBridge *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  UObjectReplicationBridge::UObjectReplicationBridge((UObjectReplicationBridge *)this);
  this->ActorFactoryId = 0xff;
  this->SubObjectFactoryId = 0xff;
  *(undefined ***)this = &___7UEngineReplicationBridge__6B_;
  this->NetDriver = (UNetDriver *)0x0;
  (this->ObjectReferencePackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  (this->ActorFactoryName).ComparisonIndex = 0;
  (this->ActorFactoryName).Number = 0;
  (this->SubObjectFactoryName).ComparisonIndex = 0;
  (this->SubObjectFactoryName).Number = 0;
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXV__TArrayView_PEAVUObject__H__PEBVUObjectReplicationBridge___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = UE::Net::Private::ActorReplicationBridgePreUpdateFunction;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*),void,TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*>
                ::Call;
  UObjectReplicationBridge::SetInstancePreUpdateFunction
            ((UObjectReplicationBridge *)this,
             (TFunction<void___cdecl(TArrayView<UObject_*,int>,UObjectReplicationBridge_const_*)> *)
             local_38);
  this->ActorFactoryName = UE::Net::Private::NetActorFactoryName;
  this->SubObjectFactoryName = UE::Net::Private::SubObjectFactoryName;
  return this;
}

// ~UEngineReplicationBridge @ 1480184d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEngineReplicationBridge::~UEngineReplicationBridge(UEngineReplicationBridge *this)

{
  *(undefined ***)this = &___7UEngineReplicationBridge__6B_;
  UObjectReplicationBridge::~UObjectReplicationBridge((UObjectReplicationBridge *)this);
  return;
}

// ActorChangedLevel @ 14801e750

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
UEngineReplicationBridge::ActorChangedLevel
          (UEngineReplicationBridge *this,AActor *param_1,ULevel *param_2)

{
  int iVar1;
  FNetObjectGroupHandle FVar2;
  FNetObjectGroupHandle FVar3;
  bool bVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  ULevel *pUVar7;
  undefined4 local_res20;
  undefined4 uStackX_24;
  FNetRefHandle_u_0 local_58 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (UE::Net::Private::bEnableActorLevelChanges) {
    if (5 < (byte)LogIris._0_1_) {
      if ((param_2 == (ULevel *)0x0) || (param_2->_padding_ == 0)) {
        ::FString::FString((FString *)&local_58[0]._s_0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_2,(FString *)&local_58[0]._s_0,(UObject *)0x0,None);
      }
      if ((param_1 == (AActor *)0x0) || (param_1->_padding_ == 0)) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((FName)local_48.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((void *)local_58[0].Value != (void *)0x0) {
        FMemory::Free((void *)local_58[0]);
      }
    }
    pUVar5 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      if (param_2 != (ULevel *)0x0) {
        pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar6->_padding_;
        UObjectReplicationBridge::GetReplicatedRefHandle
                  ((UObjectReplicationBridge *)this,(UObject *)&local_58[0]._s_0,
                   (EGetRefHandleFlags)param_1);
        UReplicationBridge::GetLevelGroup((UReplicationBridge *)this,(UObject *)&stack0x00000020);
        FVar2.field0_0x0._s_1.UniqueId = uStackX_24;
        FVar2.field0_0x0.Value._0_4_ = local_res20;
        bVar4 = UReplicationSystem::IsInGroup
                          (*(UReplicationSystem **)&this->field_0x28,FVar2,
                           (FNetRefHandle)local_58[0]._s_0);
        if (bVar4) {
          if (5 < (byte)LogIris._0_1_) {
            ::FName::ToString((FName *)&local_48,&local_28);
            UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_58[0]._s_0,&local_38);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
          FVar3.field0_0x0._s_1.UniqueId = uStackX_24;
          FVar3.field0_0x0.Value._0_4_ = local_res20;
          UReplicationSystem::RemoveFromGroup
                    (*(UReplicationSystem **)&this->field_0x28,FVar3,(FNetRefHandle)local_58[0]._s_0
                    );
        }
        else if ((CONCAT44(uStackX_24,local_res20) != 0) && (2 < (byte)LogIris._0_1_)) {
          ::FName::ToString((FName *)&local_48,&local_38);
          UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_58[0]._s_0,&local_28);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
      pUVar7 = AActor::GetLevel(param_1);
      AddRootObjectToLevelGroup(this,(UObject *)param_1,pUVar7);
    }
  }
  return;
}

// AddRootObjectToLevelGroup @ 148020950

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
UEngineReplicationBridge::AddRootObjectToLevelGroup
          (UEngineReplicationBridge *this,UObject *param_1,ULevel *param_2)

{
  int iVar1;
  ULevel *pUVar2;
  UReplicationSystem *this_00;
  bool bVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  FNetObjectGroupHandle FVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  FNetObjectGroupHandle_u_0 local_res10 [2];
  FNetRefHandle_u_0 local_res20;
  undefined1 local_78 [16];
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  FString local_58;
  FString local_48;
  
  pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) && (param_2 != (ULevel *)0x0)) &&
     (((UE::Net::Private::bAlwaysCreateLevelFilteringGroupsForPersistentLevels != false ||
       (bVar3 = ULevel::IsPersistentLevel(param_2), !bVar3)) ||
      ((pUVar2 = (((this->NetDriver->World).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.
                 DebugPtr, pUVar2 == (ULevel *)0x0 || (pUVar2 != param_2)))))) {
    pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
    local_78._0_8_ = pUVar5->_padding_;
    ::FName::ToString((FName *)local_78,&local_58);
    UReplicationBridge::GetLevelGroup((UReplicationBridge *)this,(UObject *)&local_res10[0]._s_1);
    FVar7.Data = local_58.Data.AllocatorInstance.Data;
    if (local_res10[0].Value == 0) {
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = local_58.Data.ArrayNum;
      if (local_58.Data.ArrayNum == 0) {
        local_5c = 0;
        uVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,&local_68,local_58.Data.ArrayNum,&local_5c);
        memcpy(local_68.Data,FVar7.Data,(longlong)local_58.Data.ArrayNum * 2);
        uVar8 = (ulonglong)local_60;
      }
      while( true ) {
        this_00 = *(UReplicationSystem **)&this->field_0x28;
        FVar7.Data = (FScriptContainerElement *)L"";
        if ((int)uVar8 != 0) {
          FVar7.Data = local_68.Data;
        }
        ::FName::FName((FName *)local_78,(wchar_t *)FVar7.Data);
        FVar6 = UReplicationSystem::FindGroup(this_00,(FName)((longlong)local_78 + 8));
        if (*(longlong *)FVar6.field0_0x0 == 0) break;
        ::FString::PrintfImpl(&local_48,L"%s_%d");
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
        local_68.Data = local_48.Data.AllocatorInstance.Data;
        local_60 = local_48.Data.ArrayNum;
        uVar8 = local_48.Data._8_8_ & 0xffffffff;
        local_5c = local_48.Data.ArrayMax;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_60 != 0) {
        FVar7.Data = local_68.Data;
      }
      ::FName::FName((FName *)(local_78 + 8),(wchar_t *)FVar7.Data);
      FVar6 = UReplicationBridge::CreateLevelGroup
                        ((UReplicationBridge *)this,(UObject *)local_78,(FName)param_2);
                    /* WARNING: Load size is inaccurate */
      local_res10[0].Value = *FVar6.field0_0x0;
      if (5 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      }
      UNetDriver::UpdateGroupFilterStatusForLevel
                (this->NetDriver,param_2,(FNetObjectGroupHandle)local_res10[0]._s_1);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    UObjectReplicationBridge::GetReplicatedRefHandle
              ((UObjectReplicationBridge *)this,(UObject *)&local_res20._s_0,
               (EGetRefHandleFlags)param_1);
    if (5 < (byte)LogIris._0_1_) {
      UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res20._s_0,&local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    UReplicationSystem::AddToGroup
              (*(UReplicationSystem **)&this->field_0x28,(FNetObjectGroupHandle)local_res10[0]._s_1,
               (FNetRefHandle)local_res20);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CanCreateDestructionInfo @ 148023140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEngineReplicationBridge::CanCreateDestructionInfo(UEngineReplicationBridge *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->NetDriver == (UNetDriver *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5752921677231031088>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                       ,0x330,"NetDriver");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if ((!GIsReconstructingBlueprintInstances) &&
          (!UE::Net::Private::bIgnoreStaticActorDestruction)) {
    return true;
  }
  return false;
}

// ConsumeNetMetrics @ 148024b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001480252ef) */
/* WARNING: Removing unreachable block (ram,0x0001480254cc) */
/* WARNING: Removing unreachable block (ram,0x000148025111) */
/* WARNING: Removing unreachable block (ram,0x0001480254da) */
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
UEngineReplicationBridge::ConsumeNetMetrics
          (UEngineReplicationBridge *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  double _X;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  FString *pFVar10;
  byte bVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStack_2b8 [32];
  FScriptContainerElement **local_298;
  FScriptContainerElement *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  undefined1 local_268 [8];
  FScriptContainerElement *local_260;
  undefined8 local_258;
  FString local_250;
  undefined8 local_240;
  FScriptContainerElement local_238;
  undefined4 local_234;
  FScriptContainerElement *local_230;
  undefined8 local_228;
  FString local_220;
  undefined8 local_210;
  FScriptContainerElement local_208;
  undefined4 local_204;
  FScriptContainerElement *local_200;
  undefined8 local_1f8;
  FString local_1f0;
  undefined8 local_1e0;
  FScriptContainerElement local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  FName local_1b0;
  longlong *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  UEngineReplicationBridge *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  undefined8 local_130;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  void *local_98;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  uVar18 = 0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_170 = this;
  UReplicationSystem::CollectNetMetrics
            (*(UReplicationSystem **)&this->field_0x28,(FNetMetrics *)local_d8);
  uVar8 = local_b0;
  uStack_19c = 1;
  local_188 = 0;
  uStack_18c = local_188;
  if (local_b0 != 0) {
    puVar19 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar19 = local_b8;
    }
    uVar16 = *puVar19;
    local_188 = 0;
    uVar18 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)(int)uVar18;
      local_188 = local_188 + 0x20;
      uVar18 = uVar18 + 1;
      uStack_18c = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_148024ca0;
      uVar16 = puVar19[lVar12 + 1];
    }
    uStack_19c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_19c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (int)lVar12;
    uStack_18c = (local_188 - 1) + local_178;
    if ((int)local_b0 < (int)uStack_18c) {
      uStack_18c = local_b0;
    }
  }
LAB_148024ca0:
  local_1a8 = (longlong *)local_d8;
  uVar17 = local_b0 & 0xffffffe0;
  iStack_180 = local_d8._8_4_ - local_a4;
  local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  bVar11 = (byte)local_b0 & 0x1f;
  uStack_1cc = 1 << bVar11;
  iVar15 = (int)local_b0 >> 5;
  uVar16 = -1 << bVar11;
  uStack_190 = 0xffffffff;
  pTStack_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uStack_1bc = local_b0;
  TStack_160._padding_ = CONCAT44(uStack_19c,uVar18);
  TStack_160.CurrentBitIndex = uStack_18c;
  TStack_160.UnvisitedBitMask = 0xffffffff;
  TStack_160._28_4_ = uStack_18c;
  TStack_160.BaseBitIndex = local_188;
  uStack_140 = CONCAT44(uStack_17c,iStack_180);
  local_1d0 = iVar15;
  local_1c0 = uVar16;
  uStack_1b8 = uVar17;
  uStack_1a0 = uVar18;
  uStack_184 = uStack_18c;
  local_168 = local_1a8;
  TStack_160.Array = local_198;
  if (((int)local_b0 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar6 = pTStack_1c8;
  dVar5 = __real_c30c6bf520000000;
  dVar4 = __real_430c6bf520000000;
  if (uVar8 != local_b0) {
    puVar19 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar19 = local_b8;
    }
    uVar16 = uVar16 & puVar19[iVar15];
    while (uVar16 == 0) {
      uStack_1b8 = uVar17 + 0x20;
      local_1d0 = iVar15 + 1;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1d0) {
        uStack_1bc = local_b0;
        goto LAB_148024def;
      }
      uVar16 = puVar19[(longlong)iVar15 + 1];
      local_1c0 = 0xffffffff;
      uVar17 = uStack_1b8;
      iVar15 = local_1d0;
    }
    uStack_1cc = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_1cc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_174 = (int)lVar12;
    uStack_1bc = local_174 + -1 + uVar17;
    if ((int)local_b0 < (int)uStack_1bc) {
      uStack_1bc = local_b0;
    }
  }
LAB_148024def:
  uVar18 = uStack_1bc;
  local_130 = CONCAT44(uStack_1cc,local_1d0);
  local_120 = CONCAT44(uStack_1bc,local_1c0);
  uStack_118 = CONCAT44(uStack_1b4,uStack_1b8);
  pTStack_128 = pTStack_1c8;
  do {
    plVar7 = local_168;
    if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
      local_268[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetMetric>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    if (((TStack_160.CurrentBitIndex == uVar18) && (TStack_160.Array == pTVar6)) &&
       (plVar7 == (longlong *)local_d8)) {
      UReplicationSystem::ResetNetMetrics(*(UReplicationSystem **)&local_170->field_0x28);
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetMetric>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetMetric>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Net::FNetMetric>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    lVar12 = *plVar7;
    lVar14 = (longlong)TStack_160.CurrentBitIndex * 0x20;
    iVar15 = *(int *)(lVar14 + 0x10 + lVar12);
    local_1b0 = *(FName *)(lVar14 + lVar12);
    if (iVar15 == 1) {
      pFVar10 = ::FName::ToString(&local_1b0,&local_e8);
      if (((pFVar10->Data).ArrayNum < 2) ||
         (iVar15 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"),
         iVar15 == 0)) {
LAB_148025350:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        iVar15 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
        if (iVar15 == 0) goto LAB_148025350;
      }
      local_200 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8._0_4_ = (pFVar10->Data).ArrayNum;
      local_1f8._4_4_ = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_1f0,L"%u");
      local_1e0 = 0;
      local_1d8 = (FScriptContainerElement)0x0;
      local_1d4 = 4;
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_200) &&
         ((FScriptContainerElement *)&local_200 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) {
        local_280 = (longlong)param_1->ArrayNum;
        local_278 = 0x30;
        local_298 = &local_200;
        local_290 = pFVar2;
        local_288 = (longlong)param_1->ArrayMax;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar15 = param_1->ArrayNum;
      if (iVar15 == param_1->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar12 = (longlong)iVar15;
      param_1->ArrayNum = iVar15 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_200;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_1f8;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_1f8._4_4_;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
           local_1f0.Data.AllocatorInstance.Data;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_1f0.Data.ArrayNum;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_1f0.Data.ArrayMax;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_1e0;
      pFVar2[lVar12 * 0x30 + 0x28] = local_1d8;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_1d4;
      local_1f0.Data.ArrayNum = 0;
      local_1f0.Data.ArrayMax = 0;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      local_200 = (FScriptContainerElement *)0x0;
    }
    else if (iVar15 == 2) {
      pFVar10 = ::FName::ToString(&local_1b0,&local_f8);
      if (((pFVar10->Data).ArrayNum < 2) ||
         (iVar15 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"),
         iVar15 == 0)) {
LAB_148025173:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        iVar15 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
        if (iVar15 == 0) goto LAB_148025173;
      }
      local_230 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228._0_4_ = (pFVar10->Data).ArrayNum;
      local_228._4_4_ = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      ::FString::PrintfImpl(&local_220,L"%d");
      local_210 = 0;
      local_208 = (FScriptContainerElement)0x0;
      local_204 = 4;
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_230) &&
         ((FScriptContainerElement *)&local_230 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) {
        local_280 = (longlong)param_1->ArrayNum;
        local_278 = 0x30;
        local_298 = &local_230;
        local_290 = pFVar2;
        local_288 = (longlong)param_1->ArrayMax;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar15 = param_1->ArrayNum;
      if (iVar15 == param_1->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar12 = (longlong)iVar15;
      param_1->ArrayNum = iVar15 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_230;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_228;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_228._4_4_;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
           local_220.Data.AllocatorInstance.Data;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_220.Data.ArrayNum;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_220.Data.ArrayMax;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_210;
      pFVar2[lVar12 * 0x30 + 0x28] = local_208;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_204;
      local_220.Data.ArrayNum = 0;
      local_220.Data.ArrayMax = 0;
      local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228 = 0;
      local_230 = (FScriptContainerElement *)0x0;
    }
    else if (iVar15 == 3) {
      _X = *(double *)(lVar14 + 8 + lVar12);
      pFVar10 = ::FName::ToString(&local_1b0,&local_108);
      if (((pFVar10->Data).ArrayNum < 2) ||
         (iVar15 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"),
         iVar15 == 0)) {
LAB_148024f38:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidAttributeName(InName)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                           ,0x78,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((pFVar10->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
        iVar15 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
        if (iVar15 == 0) goto LAB_148024f38;
      }
      local_260 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258._0_4_ = (pFVar10->Data).ArrayNum;
      local_258._4_4_ = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      iVar15 = _finite(_X);
      if (iVar15 == 0) {
        ::FString::FString(&local_250,"null");
      }
      else if ((dVar4 < _X) || (_X < dVar5)) {
        ::FString::PrintfImpl(&local_250,L"%.9e");
      }
      else {
        ::FString::SanitizeFloat(&local_250,_X,1);
      }
      local_240 = 0;
      local_238 = (FScriptContainerElement)0x0;
      local_234 = 4;
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_260) &&
         ((FScriptContainerElement *)&local_260 < pFVar2 + (longlong)param_1->ArrayMax * 0x30)) {
        local_280 = (longlong)param_1->ArrayNum;
        local_278 = 0x30;
        local_298 = &local_260;
        local_290 = pFVar2;
        local_288 = (longlong)param_1->ArrayMax;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar15 = param_1->ArrayNum;
      if (iVar15 == param_1->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      lVar12 = (longlong)iVar15;
      param_1->ArrayNum = iVar15 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30) = local_260;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 8) = (undefined4)local_258;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0xc) = local_258._4_4_;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar12 * 0x30 + 0x10) =
           local_250.Data.AllocatorInstance.Data;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x18) = local_250.Data.ArrayNum;
      *(int *)(pFVar2 + lVar12 * 0x30 + 0x1c) = local_250.Data.ArrayMax;
      *(undefined8 *)(pFVar2 + lVar12 * 0x30 + 0x20) = local_240;
      pFVar2[lVar12 * 0x30 + 0x28] = local_238;
      *(undefined4 *)(pFVar2 + lVar12 * 0x30 + 0x2c) = local_234;
      local_250.Data.ArrayNum = 0;
      local_250.Data.ArrayMax = 0;
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_258 = 0;
      local_260 = (FScriptContainerElement *)0x0;
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                         ,0x43a,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
  } while( true );
}

// ConvertToEndReplicationFlags @ 1480255a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EEndReplicationFlags __thiscall
UEngineReplicationBridge::ConvertToEndReplicationFlags
          (UEngineReplicationBridge *this,EStopReplicatingReason param_1)

{
  EEndReplicationFlags EVar1;
  
  EVar1 = ClearNetPushId|DestroyNetHandle|Destroy;
  if (param_1 != Destroyed) {
    EVar1 = None;
  }
  if ((((param_1 - EndPlayInEditor & 0xfffffffd) == 0) ||
      (this->NetDriver->bPendingDestruction != 0)) || (param_1 == RemovedFromWorld)) {
    EVar1 = EVar1 | SkipPendingEndReplicationValidation;
  }
  return EVar1;
}

// Create @ 1480276d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEngineReplicationBridge * __cdecl UEngineReplicationBridge::Create(UNetDriver *param_1)

{
  UClass *pUVar1;
  UPackage *pUVar2;
  UEngineReplicationBridge *this;
  
  pUVar1 = StaticClass();
  pUVar2 = GetTransientPackage();
  this = NewObject<UEngineReplicationBridge>
                   ((UObject *)pUVar2,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  SetNetDriver(this,param_1);
  return this;
}

// Deinitialize @ 14802a480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEngineReplicationBridge::Deinitialize(UEngineReplicationBridge *this)

{
  if (this->NetDriver != (UNetDriver *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NetDriver->OnNetServerMaxTickRateChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NetDriver->OnNetUpdateFrequencyChanged,this);
    this->NetDriver = (UNetDriver *)0x0;
  }
  UObjectReplicationBridge::Deinitialize((UObjectReplicationBridge *)this);
  (this->ObjectReferencePackageMap).field0_0x0.DebugPtr = (UIrisObjectReferencePackageMap *)0x0;
  return;
}

// GetInitialDependencies @ 148035bd0

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
UEngineReplicationBridge::GetInitialDependencies
          (UEngineReplicationBridge *this,FNetRefHandle param_1,
          TArray<UE::Net::FNetDependencyInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  undefined4 *puVar1;
  ForElementType<UE::Net::FNetDependencyInfo> FVar2;
  ULevel *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FNetToken_u_0 FVar7;
  ENetObjectReferenceTraits EVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  AActor *this_00;
  UClass *pUVar12;
  UChildActorComponent *this_01;
  AActor *pAVar13;
  ULevel *pUVar14;
  FNetObjectReference *pFVar15;
  ForElementType<UE::Net::FNetDependencyInfo> FVar16;
  FNetObjectReference local_48;
  FNetObjectReference local_38;
  FNetObjectReference local_28;
  FNetObjectReference local_18;
  
  if (((param_1.field0_0x0 != 0) && (((ulonglong)param_1.field0_0x0 & 1) == 0)) &&
     (this_00 = (AActor *)
                UObjectReplicationBridge::GetReplicatedObject
                          ((UObjectReplicationBridge *)this,param_1), this_00 != (AActor *)0x0)) {
    pUVar12 = Z_Construct_UClass_AActor_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      cVar10 = (**(code **)(this_00->_padding_ + 0x200))(this_00);
      if (cVar10 == '\0') {
        this_00 = (AActor *)this_00->_padding_;
        pFVar15 = &local_18;
      }
      else {
        pFVar15 = &local_28;
      }
      pFVar15 = UObjectReplicationBridge::GetOrCreateObjectReference
                          ((UObjectReplicationBridge *)this,pFVar15,(UObject *)this_00);
      uVar5 = *(undefined4 *)&(pFVar15->RefHandle).field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&(pFVar15->RefHandle).field0_0x0 + 4);
      FVar7 = (pFVar15->PathToken).field0_0x0;
      EVar8 = pFVar15->Traits;
      iVar11 = param_2->ArrayNum;
      if (iVar11 == param_2->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetDependencyInfo>_>
                           (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar11 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<UE::Net::FNetDependencyInfo>)0x0) {
        param_2 = (TArray<UE::Net::FNetDependencyInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar2;
      }
      puVar1 = (undefined4 *)((longlong)param_2 + (longlong)iVar11 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(FNetToken_u_0 *)(puVar1 + 2) = FVar7;
      puVar1[3] = EVar8;
    }
    else {
      this_01 = AActor::GetParentComponent(this_00);
      if ((this_01 == (UChildActorComponent *)0x0) ||
         (pAVar13 = UChildActorComponent::GetSpawnableChildActorTemplate(this_01),
         pAVar13 == (AActor *)0x0)) {
        pAVar13 = (AActor *)UObject::GetArchetype((UObject *)this_00);
      }
      pUVar14 = AActor::GetLevel(this_00);
      if ((pAVar13 == (AActor *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Archetype != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                             ,0x2b7,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar10 = (**(code **)(this_00->_padding_ + 0x100))(this_00);
      if ((cVar10 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Actor->NeedsLoadForClient()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                             ,0x2b8,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar10 = (**(code **)(pAVar13->_padding_ + 0x100))(pAVar13);
      if ((cVar10 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Archetype->NeedsLoadForClient()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                             ,0x2b9,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar15 = UObjectReplicationBridge::GetOrCreateObjectReference
                          ((UObjectReplicationBridge *)this,&local_48,(UObject *)pAVar13);
      uVar5 = *(undefined4 *)&(pFVar15->RefHandle).field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&(pFVar15->RefHandle).field0_0x0 + 4);
      FVar7 = (pFVar15->PathToken).field0_0x0;
      EVar8 = pFVar15->Traits;
      iVar11 = param_2->ArrayNum;
      if (iVar11 == param_2->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetDependencyInfo>_>
                           (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar11 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      FVar16 = (ForElementType<UE::Net::FNetDependencyInfo>)param_2;
      if (FVar2 != (ForElementType<UE::Net::FNetDependencyInfo>)0x0) {
        FVar16 = FVar2;
      }
      puVar1 = (undefined4 *)((longlong)FVar16 + (longlong)iVar11 * 0x10);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(FNetToken_u_0 *)(puVar1 + 2) = FVar7;
      puVar1[3] = EVar8;
      pUVar3 = (((this->NetDriver->World).field0_0x0.DebugPtr)->PersistentLevel).field0_0x0.DebugPtr
      ;
      if (pUVar3 == (ULevel *)0x0) {
        bVar9 = pUVar14 == (ULevel *)0x0;
      }
      else {
        bVar9 = pUVar3 == pUVar14;
      }
      if (!bVar9) {
        pFVar15 = UObjectReplicationBridge::GetOrCreateObjectReference
                            ((UObjectReplicationBridge *)this,&local_38,(UObject *)pUVar14);
        uVar5 = *(undefined4 *)&(pFVar15->RefHandle).field0_0x0;
        uVar6 = *(undefined4 *)((longlong)&(pFVar15->RefHandle).field0_0x0 + 4);
        FVar7 = (pFVar15->PathToken).field0_0x0;
        EVar8 = pFVar15->Traits;
        iVar11 = param_2->ArrayNum;
        if (iVar11 == param_2->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetDependencyInfo>_>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar11 + 1;
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        if (FVar2 != (ForElementType<UE::Net::FNetDependencyInfo>)0x0) {
          param_2 = (TArray<UE::Net::FNetDependencyInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                     *)FVar2;
        }
        puVar1 = (undefined4 *)((longlong)param_2 + (longlong)iVar11 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(FNetToken_u_0 *)(puVar1 + 2) = FVar7;
        puVar1[3] = EVar8;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 148036960

UClass * __cdecl UEngineReplicationBridge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineReplicationBridge",
               &Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton,
               StaticRegisterNativesUEngineReplicationBridge,0x6d0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UEngineReplicationBridge>,
               InternalVTableHelperCtorCaller<UEngineReplicationBridge>,local_res8,
               UObjectReplicationBridge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineReplicationBridge.InnerSingleton;
}

// Initialize @ 14803ef60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UEngineReplicationBridge::Initialize(UEngineReplicationBridge *this,UReplicationSystem *param_1)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  FString *pFVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UIrisObjectReferencePackageMap *pUVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined1 auStack_158 [32];
  FScriptContainerElement *local_138;
  undefined1 local_128 [8];
  FString local_120;
  FString local_110;
  code *local_f8 [2];
  undefined **local_e8;
  code *local_e0;
  undefined8 local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  UObjectReplicationBridge::Initialize((UObjectReplicationBridge *)this,param_1);
  if (GDefaultUseSubObjectReplicationList == false) {
    local_128[0] = 0;
    `UEngineReplicationBridge::Initialize'::__l2::<lambda_1>::operator()(local_128);
  }
  uVar2 = UE::Net::FNetObjectFactoryRegistry::GetFactoryIdFromName(this->ActorFactoryName);
  this->ActorFactoryId = uVar2;
  pwVar9 = L"";
  if (uVar2 == 0xff) {
    pFVar4 = ::FName::ToString(&this->ActorFactoryName,&local_120);
    if ((pFVar4->Data).ArrayNum == 0) {
      local_138 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_138 = (pFVar4->Data).AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActorFactoryId != InvalidNetObjectFactoryId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                       ,0xde,L"UNetActorFactory with name %s was not registered");
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = UE::Net::FNetObjectFactoryRegistry::GetFactoryIdFromName(this->SubObjectFactoryName);
  this->SubObjectFactoryId = uVar2;
  if (uVar2 == 0xff) {
    pFVar4 = ::FName::ToString(&this->SubObjectFactoryName,&local_110);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    local_138 = (FScriptContainerElement *)pwVar9;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubObjectFactoryId != InvalidNetObjectFactoryId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                       ,0xe1,L"UNetSubObjectFactory with name %s was not registered");
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e8 = &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
  local_d0 = 0;
  local_e0 = `UEngineReplicationBridge::Initialize'::__l21::<lambda_2>::<lambda_invoker_cdecl>;
  local_f8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*),bool,UClass_const_*>::Call;
  UObjectReplicationBridge::SetShouldUseDefaultSpatialFilterFunction
            ((UObjectReplicationBridge *)this,(TFunction<bool___cdecl(UClass_const_*)> *)local_f8);
  local_a0 = 0;
  local_b8 = &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_b0 = `UEngineReplicationBridge::Initialize'::__l22::<lambda_3>::<lambda_invoker_cdecl>;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(UClass_const_*,UClass_const_*),bool,UClass_const_*,UClass_const_*>
                ::Call;
  UObjectReplicationBridge::SetShouldSubclassUseSameFilterFunction
            ((UObjectReplicationBridge *)this,
             (TFunction<bool___cdecl(UClass_const_*,UClass_const_*)> *)local_c8);
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar5;
  pUVar7 = (UIrisObjectReferencePackageMap *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UIrisObjectReferencePackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ObjectReferencePackageMap).field0_0x0.DebugPtr = pUVar7;
  return;
}

// IsAllowedToDestroyInstance @ 148041230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEngineReplicationBridge::IsAllowedToDestroyInstance
          (UEngineReplicationBridge *this,UObject *param_1)

{
  int iVar1;
  UNetDriver *pUVar2;
  char cVar3;
  UClass *pUVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) && (pUVar2 = this->NetDriver, pUVar2 != (UNetDriver *)0x0)) {
      cVar3 = (**(code **)(pUVar2->_padding_ + 0x498))(pUVar2,param_1,0);
      if (cVar3 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// IsClassReplicatedByDefault @ 1480412e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEngineReplicationBridge::IsClassReplicatedByDefault(UEngineReplicationBridge *this,UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(param_1);
        }
        pUVar2 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar2 != (UObject *)0x0) {
          pUVar4 = Z_Construct_UClass_AActor_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar4->_padding_)) && ((pUVar2[2].field_0xb & 8) != 0)) {
            return true;
          }
        }
        return false;
      }
    }
  }
  bVar3 = UObjectReplicationBridge::IsClassReplicatedByDefault
                    ((UObjectReplicationBridge *)this,param_1);
  return bVar3;
}

// ObjectLevelHasFinishedLoading @ 1480470b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEngineReplicationBridge::ObjectLevelHasFinishedLoading
          (UEngineReplicationBridge *this,UObject *param_1)

{
  UWorld *pUVar1;
  ULevel *pUVar2;
  UClass *pUVar3;
  ULevel *pUVar4;
  
  if (((param_1 != (UObject *)0x0) && (this->NetDriver != (UNetDriver *)0x0)) &&
     (pUVar1 = (this->NetDriver->World).field0_0x0.DebugPtr, pUVar1 != (UWorld *)0x0)) {
    pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar4 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
    if ((pUVar4 != (ULevel *)0x0) &&
       ((pUVar2 = (pUVar1->PersistentLevel).field0_0x0.DebugPtr, pUVar2 == (ULevel *)0x0 ||
        (pUVar2 != pUVar4)))) {
      return pUVar4->bIsVisible;
    }
  }
  return true;
}

// OnMaxTickRateChanged @ 1480476f0

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
UEngineReplicationBridge::OnMaxTickRateChanged
          (UEngineReplicationBridge *this,UNetDriver *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1->NetServerMaxTickRate) {
    iVar1 = param_1->NetServerMaxTickRate;
  }
  *(float *)&this->field_0x190 = (float)iVar1;
  UObjectReplicationBridge::ReinitPollFrequency((UObjectReplicationBridge *)this);
  return;
}

// OnNetUpdateFrequencyChanged @ 148047720

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
UEngineReplicationBridge::OnNetUpdateFrequencyChanged
          (UEngineReplicationBridge *this,AActor *param_1)

{
  float fVar1;
  FNetRefHandle_u_0 local_res18 [2];
  
  if (UE::Net::Private::bEnableDynamicNetUpdateFrequency) {
    UObjectReplicationBridge::GetReplicatedRefHandle
              ((UObjectReplicationBridge *)this,(UObject *)&local_res18[0]._s_0,
               (EGetRefHandleFlags)param_1);
    if ((local_res18[0].Value & 0x3fffffffffffff) != 0) {
      fVar1 = AActor::GetNetUpdateFrequency(param_1);
      UObjectReplicationBridge::SetPollFrequency
                ((UObjectReplicationBridge *)this,(FNetRefHandle)local_res18[0],fVar1);
    }
  }
  return;
}

// OnPreSeamlessTravelGarbageCollect @ 148047e10

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
UEngineReplicationBridge::OnPreSeamlessTravelGarbageCollect(UEngineReplicationBridge *this)

{
  undefined1 local_res10 [24];
  
  UReplicationBridge::OnPreSeamlessTravelGarbageCollect((UReplicationBridge *)this);
  if (UE::Net::Private::bAlwaysCreateLevelFilteringGroupsForPersistentLevels == false) {
    `UEngineReplicationBridge::OnPreSeamlessTravelGarbageCollect'::__l2::<lambda_1>::operator()
              (local_res10);
    return;
  }
  return;
}

// OnProtocolMismatchDetected @ 148047e40

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
UEngineReplicationBridge::OnProtocolMismatchDetected
          (UEngineReplicationBridge *this,FNetRefHandle param_1)

{
  UNetConnection *pUVar1;
  ulonglong local_res8 [4];
  
  if ((this->NetDriver != (UNetDriver *)0x0) &&
     (pUVar1 = (this->NetDriver->ServerConnection).field0_0x0.DebugPtr,
     pUVar1 != (UNetConnection *)0x0)) {
    local_res8[0] = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
    UE::Net::TNetControlMessageImpl<29,unsigned___int64>::Send(pUVar1,local_res8);
  }
  return;
}

// OnProtocolMismatchReported @ 148047e90

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
UEngineReplicationBridge::OnProtocolMismatchReported
          (UEngineReplicationBridge *this,FNetRefHandle param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  UNetConnection *this_00;
  UClass *pUVar4;
  FConnectionHandle FVar5;
  FName local_res8;
  FNetRefHandle_u_0 local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FNetResult local_48;
  
  FVar5.ChildConnectionId = 0;
  FVar5.ParentConnectionId = param_2;
  local_res10 = param_1.field0_0x0;
  UObjectReplicationBridge::OnProtocolMismatchReported
            ((UObjectReplicationBridge *)this,param_1,param_2);
  if ((this->NetDriver != (UNetDriver *)0x0) &&
     (cVar1 = (**(code **)(this->NetDriver->_padding_ + 0x3f8))(), cVar1 != '\0')) {
    pUVar3 = UObjectReplicationBridge::GetReplicatedObject
                       ((UObjectReplicationBridge *)this,(FNetRefHandle)local_res10._s_0);
    if (pUVar3 == (UObject *)0x0) {
      pUVar4 = (UClass *)0x0;
    }
    else {
      pUVar4 = *(UClass **)&pUVar3->field_0x10;
    }
    bVar2 = UObjectReplicationBridge::IsClassCritical((UObjectReplicationBridge *)this,pUVar4);
    if ((bVar2) &&
       (this_00 = UNetDriver::GetConnectionByHandle(this->NetDriver,FVar5),
       this_00 != (UNetConnection *)0x0)) {
      if (pUVar4 == (UClass *)0x0) {
        ::FString::FString(&local_78,L"None");
      }
      else {
        local_res8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res8,&local_78);
      }
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_88,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res8.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res8,&local_88);
      }
      UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res10._s_0,&local_58);
      ::FString::PrintfImpl(&local_68,L"Protocol mismatch: %s:%s. Class: %s");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogIris._0_1_) {
        (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_58);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_48,IrisProtocolMismatch);
      UNetConnection::SendCloseReason(this_00,&local_48);
      if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
      }
      if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
      }
      UE::Net::TNetControlMessageImpl<6,FString>::Send(this_00,&local_68);
      (**(code **)(this_00->_padding_ + 0x308))(this_00,1);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_48,IrisProtocolMismatch);
      UNetConnection::Close(this_00,&local_48);
      if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
      }
      if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PrintConnectionInfo @ 14804a5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UEngineReplicationBridge::PrintConnectionInfo
          (UEngineReplicationBridge *this,FString *__return_storage_ptr__,uint param_1)

{
  AActor *pAVar1;
  FConnectionHandle FVar2;
  UNetConnection *pUVar3;
  FName local_res8;
  FString local_38;
  void *local_28 [2];
  
  FVar2.ChildConnectionId = 0;
  FVar2.ParentConnectionId = param_1;
  if (this->NetDriver == (UNetDriver *)0x0) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"ConnectionId:%u no NetDriver attached");
    return __return_storage_ptr__;
  }
  pUVar3 = UNetDriver::GetConnectionByHandle(this->NetDriver,FVar2);
  if (pUVar3 != (UNetConnection *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3,local_28);
    pAVar1 = (pUVar3->ViewTarget).field0_0x0.DebugPtr;
    if (pAVar1 == (AActor *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8 = (FName)pAVar1->_padding_;
      ::FName::ToString(&local_res8,&local_38);
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"ConnectionId:%u ViewTarget: %s Named: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"ConnectionId:%u no NetConnection found");
  return __return_storage_ptr__;
}

// RemapPathForPIE @ 1480507e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEngineReplicationBridge::RemapPathForPIE
          (UEngineReplicationBridge *this,uint param_1,FString *param_2,bool param_3)

{
  int iVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014805080b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(GEngine->_padding_ + 0x498))(GEngine,0);
    return (bool)uVar2;
  }
  pUVar3 = UReplicationSystem::GetConnectionUserData
                     (*(UReplicationSystem **)&this->field_0x28,param_1);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UNetConnection_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14805084d;
  }
  pUVar3 = (UObject *)0x0;
LAB_14805084d:
                    /* WARNING: Could not recover jumptable at 0x000148050870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(GEngine->_padding_ + 0x498))(GEngine,pUVar3,param_2,param_3);
  return (bool)uVar2;
}

// SendErrorWithNetRefHandle @ 148056830

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
UEngineReplicationBridge::SendErrorWithNetRefHandle
          (UEngineReplicationBridge *this,ENetRefHandleError param_1,FNetRefHandle param_2,
          uint param_3,TArrayView<UE::Net::FNetRefHandle_const_,int> *param_4)

{
  FNetRefHandle *pFVar1;
  uint uVar2;
  FNetRefHandle FVar3;
  FConnectionHandle FVar4;
  UNetConnection *pUVar5;
  FNetRefHandle_u_0 *pFVar6;
  ulonglong local_res8;
  ENetRefHandleError local_res10 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  
  FVar4.ChildConnectionId = 0;
  FVar4.ParentConnectionId = param_3;
  if (this->NetDriver != (UNetDriver *)0x0) {
    local_res10[0] = param_1;
    pUVar5 = UNetDriver::GetConnectionByHandle(this->NetDriver,FVar4);
    if (pUVar5 == (UNetConnection *)0x0) {
      if (1 < (byte)LogIris._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        return;
      }
    }
    else {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res8 = (ulonglong)param_2.field0_0x0 & 0x3fffffffffffff;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      uVar2 = param_4->ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar2,&local_28.AllocatorInstance,0,&local_28.ArrayMax);
      }
      pFVar6 = &param_4->DataPtr->field0_0x0;
      pFVar1 = (FNetRefHandle *)(pFVar6 + (int)uVar2);
      for (; pFVar6 != (FNetRefHandle_u_0 *)pFVar1; pFVar6 = pFVar6 + 1) {
        FVar3.field0_0x0 = (FNetRefHandle_u_0)pFVar6->Value;
        if (local_28.ArrayNum == local_28.ArrayMax) {
          local_28.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_28.AllocatorInstance,&local_28.ArrayMax);
        }
        *(ulonglong *)(local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8) =
             (ulonglong)FVar3.field0_0x0 & 0x3fffffffffffff;
        local_28.ArrayNum = local_28.ArrayNum + 1;
      }
      UE::Net::
      TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
      ::Send(pUVar5,local_res10,&local_res8,&local_28);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetNetDriver @ 14805efc0

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
UEngineReplicationBridge::SetNetDriver(UEngineReplicationBridge *this,UNetDriver *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UObjectReplicationBridgeConfig *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res8 [3];
  FString local_18;
  
  if (this->NetDriver != (UNetDriver *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NetDriver->OnNetServerMaxTickRateChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NetDriver->OnNetUpdateFrequencyChanged,this);
  }
  this->NetDriver = param_1;
  if (param_1 != (UNetDriver *)0x0) {
    iVar2 = 0;
    if (0 < param_1->NetServerMaxTickRate) {
      iVar2 = param_1->NetServerMaxTickRate;
    }
    *(float *)&this->field_0x190 = (float)iVar2;
    TMulticastDelegateRegistration<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>::
    AddUObject<UEngineReplicationBridge>
              ((TMulticastDelegateRegistration<void___cdecl(UNetDriver_*,int,int),FDefaultDelegateUserPolicy>
                *)&param_1->OnNetServerMaxTickRateChanged,
               (UEngineReplicationBridge *)(local_res8 + 1),(pmf_20b475e0)this);
    TMulticastDelegateRegistration<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>::
    AddUObject<UEngineReplicationBridge>
              ((TMulticastDelegateRegistration<void___cdecl(AActor_const_*),FDefaultDelegateUserPolicy>
                *)&param_1->OnNetUpdateFrequencyChanged,(UEngineReplicationBridge *)(local_res8 + 2)
               ,(pmf_54202fe5)this);
    pUVar4 = UObjectReplicationBridgeConfig::GetConfig();
    local_res8[0] = pUVar4->RequiredNetDriverChannelClassName;
    if (local_res8[0] != (FName)0x0) {
      pFVar5 = (param_1->ChannelDefinitions).AllocatorInstance.Data;
      pFVar6 = pFVar5 + (longlong)(param_1->ChannelDefinitions).ArrayNum * 0x20;
      for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x20) {
        if (*(FName *)(pFVar5 + 8) == local_res8[0]) {
          return;
        }
      }
      ::FName::ToString(local_res8,&local_18);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiredChannelIsConfigured",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\Iris\\ReplicationSystem\\EngineReplicationBridge.cpp"
                         ,0x2f1,
                         L"ObjectReplication needs the netdriver channel %s to work. Add this channel to the netdriver channel definitions config"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// StartReplicatingActor @ 148064360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetRefHandle __thiscall
UEngineReplicationBridge::StartReplicatingActor(UEngineReplicationBridge *this,AActor *param_1)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  UNetDriver *pUVar5;
  longlong *plVar6;
  FName FVar7;
  FNetRefHandle_u_0 FVar8;
  FNetRefHandle_u_0 this_00;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  uchar uVar12;
  uint uVar13;
  FUObjectItem *pFVar14;
  ULevel *pUVar15;
  UObject *pUVar16;
  UWorld *pUVar17;
  FStaticBasicLogRecord *pFVar18;
  FWeakObjectPtr *this_01;
  FScriptContainerElement *pFVar19;
  FNetRefHandle_u_0 in_R8;
  FNetRefHandle_u_0 local_res18;
  FName local_res20;
  FNetRefHandle_u_0 local_d8 [2];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [6];
  FNetRefHandle_u_0 local_c0;
  FNetRefHandle_u_0 local_b8;
  FNetRefHandle_u_0 *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined2 local_a5;
  longlong local_a0;
  float local_98;
  float local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  FNameEntryId FStack_84;
  uint local_80;
  undefined1 local_78 [8];
  FNetRefHandle_u_0 local_70;
  undefined8 local_68;
  undefined1 local_60;
  FNetRefHandle_u_0 local_58;
  longlong *local_50;
  FName *local_48;
  
  local_res18 = in_R8;
  if (((AActor *)in_R8.Value != (AActor *)0x0) && ((*(uint *)(in_R8.Value + 8) & 0x30) != 0)) {
    local_res20 = (FName)&local_res18;
    bVar10 = `UEngineReplicationBridge::StartReplicatingActor'::__l3::<lambda_1>::operator()
                       (&local_res20);
    if (!bVar10) goto LAB_148064ca2;
  }
  bVar10 = ULevel::IsNetActor((AActor *)local_res18);
  if (bVar10) {
    if (((TEnumAsByte<ENetRole> *)(local_res18.Value + 0x168))->Value == '\x03') {
      if (((ZPULL(*(undefined1 *)(local_res18.Value + 0x5d),1,1) == '\0') &&
          ((*(uint *)(local_res18.Value + 8) >> 0x1e & 1) == 0)) &&
         (pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_res18.Value + 0xc)),
         ((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        if (ZPULL(*(undefined1 *)(local_res18.Value + 0x5b),3,1) == '\0') {
          if ((byte)LogIris._0_1_ < 6) goto LAB_148064ca2;
          if (*(longlong *)(local_res18.Value + 0x10) == 0) {
            ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
            pFVar18 = &::LOG_Static;
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,(UObject *)0x0
                       ,None);
            pFVar18 = &::LOG_Static;
          }
        }
        else {
          if (ZPULL(*(undefined1 *)(local_res18.Value + 0x59),0,1) == 0) {
            if (ZPULL(*(undefined1 *)(local_res18.Value + 0x5c),1,1) == '\0') {
              if ((byte)LogIris._0_1_ < 3) goto LAB_148064ca2;
              if (*(longlong *)(local_res18.Value + 0x10) == 0) {
                ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,
                           (UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              local_b8 = local_d8[0];
            }
            else {
              if (((*(undefined1 *)(local_res18.Value + 0x5d) & 0x18) - 8 & 0xf7) != 0) {
                local_res20 = (FName)&local_res18;
                bVar10 = `UEngineReplicationBridge::StartReplicatingActor'[::E]::<lambda_2>::
                         operator()(&local_res20);
                if (!bVar10) {
                  if ((byte)LogIris._0_1_ < 2) goto LAB_148064ca2;
                  if (((AActor *)local_res18.Value == (AActor *)0x0) ||
                     (*(longlong *)(local_res18.Value + 0x10) == 0)) {
                    ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
                  }
                  else {
                    UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,
                               (UObject *)0x0,None);
                  }
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_RepBridge__u____1519ea2c0,
                             (FLogCategoryBase *)&LogIris);
                  local_b8 = local_d8[0];
                  goto LAB_148064c96;
                }
              }
              pUVar5 = this->NetDriver;
              if (pUVar5 == (UNetDriver *)0x0) {
                if (6 < (byte)LogIris._0_1_) {
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                }
                goto LAB_148064ca2;
              }
              cVar11 = (**(code **)(pUVar5->_padding_ + 0x488))(pUVar5,local_res18.Value);
              if (cVar11 != '\0') {
                bVar3 = ((TEnumAsByte<ENetDormancy> *)(local_res18.Value + 0x169))->Value;
                bVar10 = AActor::IsNetStartupActor((AActor *)local_res18);
                if ((!bVar10) || (bVar3 != 4)) {
                  UObjectReplicationBridge::GetReplicatedRefHandle
                            ((UObjectReplicationBridge *)this,(UObject *)local_78,
                             (EGetRefHandleFlags)local_res18.Value);
                  if (local_78 != (undefined1  [8])0x0) {
                    param_1->_padding_ = (longlong)local_78;
                    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
                  }
                  if (!(bool)ZPULL(*(undefined1 *)(local_res18.Value + 0x5b),7,1)) {
                    local_res20 = (FName)&local_res18;
                    `UEngineReplicationBridge::StartReplicatingActor'::__l203::<lambda_3>::
                    operator()(&local_res20);
                    if (2 < (byte)LogIris._0_1_) {
                      if (((AActor *)local_res18.Value == (AActor *)0x0) ||
                         (*(longlong *)(local_res18.Value + 0x10) == 0)) {
                        ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
                      }
                      else {
                        UObjectBaseUtility::GetFullName
                                  ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,
                                   (UObject *)0x0,None);
                      }
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                      if ((int *)local_d8[0].Value != (int *)0x0) {
                        FMemory::Free((void *)local_d8[0]);
                      }
                    }
                  }
                  local_90 = 0;
                  uStack_8c = 0;
                  local_88 = 0;
                  FStack_84.Value = 0;
                  local_80 = 0;
                  (**(code **)(*(longlong *)local_res18 + 0x628))
                            (local_res18.Value,&local_c8,&local_90);
                  local_a8 = 0x101;
                  local_a5 = 1;
                  local_a6 = 1 < ((TEnumAsByte<ENetDormancy> *)(local_res18.Value + 0x169))->Value;
                  local_a0 = 0;
                  if (ZPULL(*(undefined1 *)(local_res18.Value + 0x58),2,1) == '\0' &&
                      ZPULL(*(undefined1 *)(local_res18.Value + 0x58),3,1) == '\0') {
                    local_98 = 0.0;
                  }
                  else {
                    local_98 = *(float *)(local_res18.Value + 400);
                  }
                  local_94 = AActor::GetNetUpdateFrequency((AActor *)local_res18);
                  lVar9 = local_a0;
                  if (local_90 != 0) {
                    local_a5 = CONCAT11(1,(undefined1)local_a5);
                    if (local_90 == 1) {
                      local_res20.ComparisonIndex.Value = 0;
                      local_res20.Number = 0;
                      lVar9 = 0;
                    }
                    else if (local_90 == 2) {
                      lVar9 = *(longlong *)&this->field_0x5a0;
                    }
                    else if ((local_90 == 3) &&
                            (lVar9 = CONCAT44(local_88,uStack_8c), CONCAT44(local_88,uStack_8c) == 0
                            )) {
                      `UEngineReplicationBridge::StartReplicatingActor'::__l226::<lambda_4>::
                      operator()(&local_res20);
                      lVar9 = CONCAT44(local_88,uStack_8c);
                    }
                  }
                  local_a0 = lVar9;
                  if ((ZPULL(*(undefined1 *)(local_res18.Value + 0x58),2,1) != '\0' ||
                       ZPULL(*(undefined1 *)(local_res18.Value + 0x58),3,1) != '\0') &&
                     (local_98 < __real_3f800000)) {
                    local_res20 = (FName)&local_res18;
                    `UEngineReplicationBridge::StartReplicatingActor'::__l2::<lambda_5>::operator()
                              (&local_res20);
                  }
                  FVar7.Number = local_80;
                  FVar7.ComparisonIndex.Value = FStack_84.Value;
                  if ((FVar7 != (FName)0x0) &&
                     (uVar12 = UE::Net::FNetObjectFactoryRegistry::GetFactoryIdFromName(FVar7),
                     uVar12 == 0xff)) {
                    local_b8.Value = (ulong64)&local_90;
                    local_b0 = &local_res18;
                    `UEngineReplicationBridge::StartReplicatingActor'::__l229::<lambda_6>::
                    operator()(&local_b8);
                  }
                  UObjectReplicationBridge::StartReplicatingRootObject
                            ((UObjectReplicationBridge *)this,(UObject *)&local_c0._s_0,
                             (FRootObjectReplicationParams *)local_res18,(uchar)&local_a8);
                  if (local_c0.Value != 0) {
                    if ((5 < (byte)LogIris._0_1_) &&
                       (ZPULL(*(undefined1 *)(local_res18.Value + 0x58),3,1) != '\0')) {
                      UReplicationBridge::PrintObjectFromNetRefHandle
                                ((UReplicationBridge *)this,(FString *)&local_b8._s_0,
                                 (FNetRefHandle)local_c0._s_0);
                      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
                      if ((int *)local_b8.Value != (int *)0x0) {
                        FMemory::Free((void *)local_b8);
                      }
                    }
                    if (ZPULL(*(undefined1 *)(local_res18.Value + 0x58),2,1) == '\x01' &&
                        ZPULL(*(undefined1 *)(local_res18.Value + 0x58),3,1) == '\0') {
                      local_res20.ComparisonIndex.Value = 0;
                      local_res20.Number = 0;
                      uVar13 = UObjectReplicationBridge::GetDynamicFilter
                                         ((UObjectReplicationBridge *)this,
                                          *(UClass **)(local_res18.Value + 0x10),true,&local_res20);
                      if (uVar13 == 0) {
                        local_d8[0].Value = 0;
                        UReplicationSystem::SetFilter
                                  (*(UReplicationSystem **)&this->field_0x28,
                                   (FNetRefHandle)local_c0._s_0,1,(FName)0x0);
                      }
                    }
                    if (ZPULL(*(undefined1 *)(local_res18.Value + 0x58),0,1) != 0) {
                      UReplicationSystem::SetIsNetTemporary
                                (*(UReplicationSystem **)&this->field_0x28,
                                 (FNetRefHandle)local_c0._s_0);
                    }
                    if (1 < bVar3) {
                      UObjectReplicationBridge::SetObjectWantsToBeDormant
                                ((UObjectReplicationBridge *)this,(FNetRefHandle)local_c0._s_0,true)
                      ;
                    }
                    pUVar15 = AActor::GetLevel((AActor *)local_res18);
                    AddRootObjectToLevelGroup(this,(UObject *)local_res18,pUVar15);
                    FVar8 = local_res18;
                    iVar4 = *(int *)(local_res18.Value + 0x220);
                    if ((iVar4 != 0) || (*(int *)(local_res18.Value + 0x230) != 0)) {
                      this_01 = (FWeakObjectPtr *)
                                (((FSubObjectRegistry *)(local_res18.Value + 0x218))->Registry).
                                AllocatorInstance.Data;
                      local_68 = 0;
                      local_60 = 0;
                      pFVar1 = (FWeakObjectPtr *)((longlong)this_01 + (longlong)iVar4 * 0x14);
                      local_70._s_0 = local_c0._s_0;
                      while( true ) {
                        if (*(int *)(FVar8.Value + 0x220) != iVar4) {
                          `TCheckedPointerIterator<UE::Net::FSubObjectRegistry::FEntry_const_,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
                        }
                        if (this_01 == pFVar1) break;
                        pUVar16 = FWeakObjectPtr::Get(this_01);
                        if (((pUVar16 != (UObject *)0x0) &&
                            ((*(uint *)&pUVar16->field_0x8 >> 0x1e & 1) == 0)) &&
                           ((this_01[2].ObjectIndex != 0xf &&
                            (UObjectReplicationBridge::StartReplicatingSubObject
                                       ((UObjectReplicationBridge *)this,
                                        (UObject *)&local_d8[0]._s_0,
                                        (FSubObjectReplicationParams *)pUVar16,(uchar)&local_70),
                            local_d8[0].Value != 0)))) {
                          UObjectReplicationBridge::SetSubObjectNetCondition
                                    ((UObjectReplicationBridge *)this,
                                     (FNetRefHandle)local_d8[0]._s_0,this_01[2].ObjectIndex);
                        }
                        this_01 = (FWeakObjectPtr *)&this_01[2].ObjectSerialNumber;
                      }
                      iVar4 = *(int *)(FVar8.Value + 0x230);
                      pFVar19 = (((TArray<UE::Net::FReplicatedComponentInfo,TSizedDefaultAllocator<32>_>
                                   *)(FVar8.Value + 0x228))->AllocatorInstance).Data;
                      pFVar2 = pFVar19 + (longlong)iVar4 * 0x28;
                      while( true ) {
                        if (*(int *)(FVar8.Value + 0x230) != iVar4) {
                          `TCheckedPointerIterator<UE::Net::FReplicatedComponentInfo_const_,int,0>::
                          operator!='::__l2::<lambda_1>::operator()(&local_c7);
                        }
                        this_00 = local_res18;
                        if (pFVar19 == pFVar2) break;
                        if (((*(longlong *)pFVar19 != 0) &&
                            ((*(uint *)(*(longlong *)pFVar19 + 8) >> 0x1e & 1) == 0)) &&
                           (*(int *)(pFVar19 + 0x10) != 0xf)) {
                          plVar6 = *(longlong **)pFVar19;
                          UE::Net::FNetHandleManager::GetNetHandle((UObject *)&local_d8[0]._s_0);
                          local_res20 = (FName)((ulonglong)local_res20 & 0xffffffffffffff00);
                          if (((undefined4)local_d8[0].Value != 0) || (local_d8[0].Value._4_4_ != 0)
                             ) {
                            pUVar17 = AActor::GetWorld((AActor *)this_00);
                            if (pUVar17 != (UWorld *)0x0) {
                              local_58._s_0 = local_d8[0]._s_0;
                              local_48 = &local_res20;
                              local_b0 = &local_58;
                              local_b8.Value =
                                   (ulong64)UE::Core::Private::Function::
                                            TFunctionRefCaller<`UE::Net::FReplicationSystemUtil::StartReplicatingActorComponent'::__l8::<lambda_1>,void,UReplicationSystem_*>
                                            ::Call;
                              local_50 = plVar6;
                              UE::Net::FReplicationSystemUtil::ForEachReplicationSystem
                                        (GEngine,pUVar17,
                                         (TFunctionRef<void___cdecl(UReplicationSystem_*)> *)
                                         &local_b8._s_0);
                            }
                            if ((char)local_res20.ComparisonIndex.Value != '\0') {
                              (**(code **)(*plVar6 + 0x310))(plVar6,local_c6);
                              (**(code **)(*plVar6 + 800))(plVar6);
                            }
                          }
                        }
                        pFVar19 = pFVar19 + 0x28;
                      }
                    }
                    param_1->_padding_ = (longlong)local_c0;
                    return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
                  }
                  local_res20 = (FName)&local_res18;
                  `UEngineReplicationBridge::StartReplicatingActor'::__l232::<lambda_7>::operator()
                            (&local_res20);
                }
                goto LAB_148064ca2;
              }
              if ((byte)LogIris._0_1_ < 7) goto LAB_148064ca2;
              local_res20 = (FName)this->NetDriver->_padding_;
              ::FName::ToString(&local_res20,(FString *)&local_b8._s_0);
              if (((AActor *)local_res18.Value == (AActor *)0x0) ||
                 (*(longlong *)(local_res18.Value + 0x10) == 0)) {
                ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,
                           (UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
              if ((int *)local_d8[0].Value != (int *)0x0) {
                FMemory::Free((void *)local_d8[0]);
              }
            }
            goto LAB_148064c96;
          }
          if ((byte)LogIris._0_1_ < 6) goto LAB_148064ca2;
          if (*(longlong *)(local_res18.Value + 0x10) == 0) {
            ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
            pFVar18 = &::LOG_Static;
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,(UObject *)0x0
                       ,None);
            pFVar18 = &::LOG_Static;
          }
        }
      }
      else {
        if ((byte)LogIris._0_1_ < 6) goto LAB_148064ca2;
        if (((AActor *)local_res18.Value == (AActor *)0x0) ||
           (*(longlong *)(local_res18.Value + 0x10) == 0)) {
          ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,(UObject *)0x0,
                     None);
        }
        pFVar18 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<6>(pFVar18,(FLogCategoryBase *)&LogIris);
      local_b8 = local_d8[0];
    }
    else {
      if ((byte)LogIris._0_1_ < 7) goto LAB_148064ca2;
      if (*(longlong *)(local_res18.Value + 0x10) == 0) {
        ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,(UObject *)0x0,
                   None);
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      local_b8 = local_d8[0];
    }
  }
  else {
    if ((byte)LogIris._0_1_ < 7) goto LAB_148064ca2;
    if (((AActor *)local_res18.Value == (AActor *)0x0) ||
       (*(longlong *)(local_res18.Value + 0x10) == 0)) {
      ::FString::FString((FString *)&local_d8[0]._s_0,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_res18,(FString *)&local_d8[0]._s_0,(UObject *)0x0,None)
      ;
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    local_b8 = local_d8[0];
  }
LAB_148064c96:
  if ((int *)local_b8.Value != (int *)0x0) {
    FMemory::Free((void *)local_b8);
  }
LAB_148064ca2:
  param_1->_padding_ = 0;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// StartReplicatingComponent @ 1480650b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetRefHandle __thiscall
UEngineReplicationBridge::StartReplicatingComponent
          (UEngineReplicationBridge *this,FNetRefHandle param_1,UActorComponent *param_2)

{
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  longlong lVar3;
  FUObjectItem *pFVar4;
  FNetRefHandle FVar5;
  UObject *pUVar6;
  FWeakObjectPtr *this_00;
  longlong *plVar7;
  UObjectBaseUtility *in_R9;
  undefined1 local_res18 [8];
  FNetRefHandle_u_0 local_48;
  FNetRefHandle_u_0 local_40 [2];
  UActorComponent *local_30;
  FNetRefHandle_u_0 local_28;
  undefined1 local_20;
  
  if (param_2 != (UActorComponent *)0x0) {
    lVar3 = *(longlong *)&in_R9[4].field_0x8;
    UObjectReplicationBridge::GetReplicatedRefHandle
              ((UObjectReplicationBridge *)this,(UObject *)&local_48._s_0,(EGetRefHandleFlags)in_R9)
    ;
    plVar7 = *(longlong **)(lVar3 + 0x228);
    plVar1 = plVar7 + (longlong)*(int *)(lVar3 + 0x230) * 5;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 5) {
      if ((UObjectBaseUtility *)*plVar7 == in_R9) goto LAB_148065120;
    }
    plVar7 = (longlong *)0x0;
LAB_148065120:
    if (local_48.Value != 0) {
LAB_148065249:
      UObjectReplicationBridge::SetSubObjectNetCondition
                ((UObjectReplicationBridge *)this,(FNetRefHandle)local_48._s_0,
                 *(ELifetimeCondition *)(plVar7 + 2));
      lVar3 = plVar7[4];
      this_00 = (FWeakObjectPtr *)plVar7[3];
      local_28._s_0 = local_48._s_0;
      local_20 = 1;
      pFVar2 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)(int)lVar3 * 0x14);
      local_30 = param_2;
      while( true ) {
        if ((int)plVar7[4] != (int)lVar3) {
          `TCheckedPointerIterator<UE::Net::FSubObjectRegistry::FEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        if (this_00 == pFVar2) break;
        pUVar6 = FWeakObjectPtr::Get(this_00);
        if (((pUVar6 != (UObject *)0x0) && ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0)) &&
           (UObjectReplicationBridge::StartReplicatingSubObject
                      ((UObjectReplicationBridge *)this,(UObject *)&local_40[0]._s_0,
                       (FSubObjectReplicationParams *)pUVar6,(uchar)&local_30),
           local_40[0].Value != 0)) {
          UObjectReplicationBridge::SetSubObjectNetCondition
                    ((UObjectReplicationBridge *)this,(FNetRefHandle)local_40[0]._s_0,
                     this_00[2].ObjectIndex);
        }
        this_00 = (FWeakObjectPtr *)&this_00[2].ObjectSerialNumber;
      }
      *(FNetRefHandle_u_0 *)param_1.field0_0x0 = local_48;
      return (FNetRefHandle)param_1.field0_0x0.Value;
    }
    if (((((*(uint *)&in_R9->field_0x8 >> 0x1e & 1) == 0) &&
         (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&in_R9->field_0xc),
         ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
        ((char)in_R9[3].field_0x20 < '\0')) && ((*(uint *)&in_R9->field_0x8 & 0x30) == 0)) {
      if (((in_R9[3].field_0x20 & 0x40) == 0) && (2 < (byte)LogIris._0_1_)) {
        if (*(longlong *)&in_R9->field_0x10 == 0) {
          ::FString::FString((FString *)&local_40[0]._s_0,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName(in_R9,(FString *)&local_40[0]._s_0,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if ((void *)local_40[0].Value != (void *)0x0) {
          FMemory::Free((void *)local_40[0]);
        }
      }
      if ((plVar7 != (longlong *)0x0) && ((int)plVar7[2] != 0xf)) {
        local_28 = (FNetRefHandle_u_0)0x0;
        local_20 = 0;
        local_30 = param_2;
        FVar5 = UObjectReplicationBridge::StartReplicatingSubObject
                          ((UObjectReplicationBridge *)this,(UObject *)local_res18,
                           (FSubObjectReplicationParams *)in_R9,(uchar)&local_30);
                    /* WARNING: Load size is inaccurate */
        local_48._s_0 = *FVar5.field0_0x0;
        if (local_48.Value != 0) goto LAB_148065249;
      }
    }
  }
  *(undefined8 *)param_1.field0_0x0 = 0;
  return (FNetRefHandle)param_1.field0_0x0.Value;
}

// StartReplicatingSubObject @ 148065320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetRefHandle __thiscall
UEngineReplicationBridge::StartReplicatingSubObject
          (UEngineReplicationBridge *this,UObject *param_1,FSubObjectReplicationParams *param_2)

{
  uchar in_R9B;
  
  UObjectReplicationBridge::StartReplicatingSubObject
            ((UObjectReplicationBridge *)this,param_1,param_2,in_R9B);
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// StaticRegisterNativesUEngineReplicationBridge @ 148065370

void __cdecl UEngineReplicationBridge::StaticRegisterNativesUEngineReplicationBridge(void)

{
  return;
}

// StopReplicatingActor @ 148065480

/* WARNING: Type propagation algorithm not settling */
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
UEngineReplicationBridge::StopReplicatingActor
          (UEngineReplicationBridge *this,AActor *param_1,FStopReplicatingActorParams *param_2)

{
  EStopReplicatingReason EVar1;
  USceneComponent *pUVar2;
  EEndReplicationFlags EVar3;
  FNetRefHandle FVar4;
  FNetRefHandle FVar5;
  EEndReplicationFlags EVar6;
  byte local_res20 [8];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  ULevel *local_20;
  byte local_18;
  uchar local_17;
  
  UObjectReplicationBridge::GetReplicatedRefHandle
            ((UObjectReplicationBridge *)this,(UObject *)local_res20,(EGetRefHandleFlags)param_1);
  FVar4.field0_0x0._1_1_ = local_res20[1];
  FVar4.field0_0x0._2_1_ = local_res20[2];
  FVar4.field0_0x0._3_1_ = local_res20[3];
  FVar4.field0_0x0._4_1_ = local_res20[4];
  FVar4.field0_0x0._5_1_ = local_res20[5];
  FVar4.field0_0x0._6_1_ = local_res20[6];
  FVar4.field0_0x0._7_1_ = local_res20[7];
  FVar4.field0_0x0.Value._0_1_ = local_res20[0];
  if (FVar4.field0_0x0 != 0) {
    if (5 < (byte)LogIris._0_1_) {
      UReplicationBridge::PrintObjectFromNetRefHandle
                ((UReplicationBridge *)this,(FString *)local_48,FVar4);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if ((UEngineReplicationBridge *)local_48._0_8_ != (UEngineReplicationBridge *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    if ((param_1 == (AActor *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
      local_48._8_8_ = local_res20;
      local_48._0_8_ = this;
      `UEngineReplicationBridge::StopReplicatingActor'::__l2::<lambda_1>::operator()(local_48);
    }
    if ((((*(byte *)(*(longlong *)&this->field_0x28 + 0x50) & 1) != 0) &&
        (param_2->StopReplicatingReason == Destroyed)) && ((local_res20[0] & 1) != 0)) {
      pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pUVar2 != (USceneComponent *)0x0) {
        local_38 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
        uStack_34 = *(undefined4 *)
                     ((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        uStack_30 = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        uStack_2c = *(undefined4 *)
                     ((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
        local_28 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
      }
      local_20 = AActor::GetLevel(param_1);
      local_18 = ~param_1->bAlwaysRelevant & 1;
      local_17 = this->ActorFactoryId;
      UObjectReplicationBridge::StoreDestructionInfo
                ((UObjectReplicationBridge *)this,(FNetRefHandle)local_48,
                 (FDestructionParameters *)CONCAT71(local_res20._1_7_,local_res20[0]));
    }
    EVar1 = param_2->StopReplicatingReason;
    EVar6 = ClearNetPushId|DestroyNetHandle|Destroy;
    if (EVar1 != Destroyed) {
      EVar6 = None;
    }
    if (((EVar1 == EndPlayInEditor) || (EVar1 == Quit)) ||
       ((this->NetDriver->bPendingDestruction != 0 || (EVar1 == RemovedFromWorld)))) {
      EVar6 = EVar6 | SkipPendingEndReplicationValidation;
    }
    FVar5.field0_0x0._1_1_ = local_res20[1];
    FVar5.field0_0x0._2_1_ = local_res20[2];
    FVar5.field0_0x0._3_1_ = local_res20[3];
    FVar5.field0_0x0._4_1_ = local_res20[4];
    FVar5.field0_0x0._5_1_ = local_res20[5];
    FVar5.field0_0x0._6_1_ = local_res20[6];
    FVar5.field0_0x0._7_1_ = local_res20[7];
    FVar5.field0_0x0.Value._0_1_ = local_res20[0];
    EVar3 = EVar6 | SkipPendingEndReplicationValidation;
    if (param_1->bNetTemporary == 0) {
      EVar3 = EVar6;
    }
    UReplicationBridge::StopReplicatingNetRefHandle((UReplicationBridge *)this,FVar5,EVar3);
  }
  return;
}

// StopReplicatingComponent @ 1480657b0

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
UEngineReplicationBridge::StopReplicatingComponent
          (UEngineReplicationBridge *this,UActorComponent *param_1,EEndReplicationFlags param_2)

{
  FNetRefHandle_u_0 local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  
  UObjectReplicationBridge::GetReplicatedRefHandle
            ((UObjectReplicationBridge *)this,(UObject *)&local_res20._s_0,
             (EGetRefHandleFlags)param_1);
  if (local_res20.Value != 0) {
    if (5 < (byte)LogIris._0_1_) {
      UE::Net::FNetRefHandle::ToString((FNetRefHandle *)&local_res20._s_0,&local_30);
      if (param_1 == (UActorComponent *)0x0) {
        ::FString::FString(&local_40,L"None");
      }
      else {
        local_48 = (FName)param_1->_padding_;
        ::FName::ToString(&local_48,&local_40);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    if ((param_1 == (UActorComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
      local_48 = (FName)&local_res20;
      `UEngineReplicationBridge::StopReplicatingComponent'::__l5::<lambda_1>::operator()(&local_48);
    }
    UReplicationBridge::StopReplicatingNetRefHandle
              ((UReplicationBridge *)this,(FNetRefHandle)local_res20,param_2);
  }
  return;
}

// WakeUpObjectInstantiatedFromRemote @ 148071a30

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
UEngineReplicationBridge::WakeUpObjectInstantiatedFromRemote
          (UEngineReplicationBridge *this,AActor *param_1)

{
  byte bVar1;
  int iVar2;
  UNetDriver *pUVar3;
  char cVar4;
  FWorldContext *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  bVar1 = (param_1->NetDormancy).Value;
  if (1 < bVar1) {
    (param_1->NetDormancy).Value = '\x01';
    if ((this->NetDriver != (UNetDriver *)0x0) &&
       (pFVar5 = UEngine::GetWorldContextFromWorld
                           (GEngine,(this->NetDriver->World).field0_0x0.DebugPtr),
       pFVar5 != (FWorldContext *)0x0)) {
      pFVar6 = (pFVar5->ActiveNetDrivers).AllocatorInstance.Data;
      iVar2 = (pFVar5->ActiveNetDrivers).ArrayNum;
      pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((pFVar5->ActiveNetDrivers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FNamedNetDriver,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar6 == pFVar7) break;
        pUVar3 = *(UNetDriver **)pFVar6;
        if (((pUVar3 != (UNetDriver *)0x0) && (pUVar3 != this->NetDriver)) &&
           (cVar4 = (**(code **)(pUVar3->_padding_ + 0x488))(pUVar3,param_1), cVar4 != '\0')) {
          (**(code **)(**(longlong **)pFVar6 + 0x3a8))(*(longlong **)pFVar6,param_1,bVar1);
        }
        pFVar6 = pFVar6 + 0x10;
      }
    }
  }
  return;
}

// operator() @ 150520500

bool __thiscall `UEngineReplicationBridge::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030491>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030491>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150520540

bool __thiscall
`UEngineReplicationBridge::OnPreSeamlessTravelGarbageCollect'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030561>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030561>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150520580

bool __thiscall
`UEngineReplicationBridge::StopReplicatingActor'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030869>);
  if (bVar2) {
    UReplicationBridge::PrintObjectFromNetRefHandle
              (*(UReplicationBridge **)this,&local_18,
               (FNetRefHandle)
               *(FNetRefHandle_u_0 *)&(*(FNetRefHandle_u_0 **)((longlong)this + 8))->_s_0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030869>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505205ee;
    }
  }
  bVar2 = false;
LAB_1505205ee:
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

// operator() @ 150520970

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l3::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030568>);
  if (bVar2) {
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030568>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505209fe;
    }
  }
  bVar2 = false;
LAB_1505209fe:
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

// operator() @ 1505210b0

bool __thiscall
`UEngineReplicationBridge::StopReplicatingComponent'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030927>);
  if (bVar2) {
    UE::Net::FNetRefHandle::ToString(*(FNetRefHandle **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030927>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150521117;
    }
  }
  bVar2 = false;
LAB_150521117:
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

// operator() @ 150522440

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'[::E]::<lambda_2>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030610>);
  if (bVar2) {
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030610>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505224ce;
    }
  }
  bVar2 = false;
LAB_1505224ce:
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

// operator() @ 150522b20

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l203::<lambda_3>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030645>);
  if (bVar2) {
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030645>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150522bae;
    }
  }
  bVar2 = false;
LAB_150522bae:
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

// operator() @ 150522be0

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l226::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030679>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030679>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150522c20

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l2::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030686>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030686>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150522cae;
    }
  }
  bVar2 = false;
LAB_150522cae:
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

// operator() @ 150522ce0

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l229::<lambda_6>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030694>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    ::FName::ToString((FName *)(*(longlong *)this + 0xc),&local_18);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030694>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150522daa;
    }
  }
  bVar4 = false;
LAB_150522daa:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150522e00

bool __thiscall
`UEngineReplicationBridge::StartReplicatingActor'::__l232::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5752921677231030703>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5752921677231030703>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150522e78;
    }
  }
  bVar2 = false;
LAB_150522e78:
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

