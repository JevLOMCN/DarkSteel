// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147b2b180

UClass * __cdecl UEngineElementsLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineElementsLibrary",
               &Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton,
               StaticRegisterNativesUEngineElementsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEngineElementsLibrary>,
               InternalVTableHelperCtorCaller<UEngineElementsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton;
}

// UEngineElementsLibrary @ 147b3b310

UEngineElementsLibrary * __thiscall
UEngineElementsLibrary::UEngineElementsLibrary(UEngineElementsLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEngineElementsLibrary__6B_;
  return this;
}

// UEngineElementsLibrary @ 147b3b340

UEngineElementsLibrary * __thiscall
UEngineElementsLibrary::UEngineElementsLibrary(UEngineElementsLibrary *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,pFVar1);
  *(undefined ***)this = &___7UEngineElementsLibrary__6B_;
  return this;
}

// ~UEngineElementsLibrary @ 147b3d890

void __thiscall UEngineElementsLibrary::~UEngineElementsLibrary(UEngineElementsLibrary *this)

{
  *(undefined ***)this = &___7UEngineElementsLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateActorElement @ 147b4d900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementOwner<FActorElementData> * __cdecl
UEngineElementsLibrary::CreateActorElement
          (TTypedElementOwner<FActorElementData> *__return_storage_ptr__,AActor *param_1)

{
  TTypedElementInternalData<FActorElementData> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  int iVar6;
  undefined4 extraout_var;
  UTypedElementRegistry *this;
  TTypedElementOwner<FActorElementData> *pTVar7;
  IModularFeatures *pIVar8;
  longlong lVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  undefined1 local_res8 [8];
  UClass *local_res10;
  AActor *local_res18;
  FNameEntryId local_res20;
  uint uStackX_24;
  AActor **local_58;
  AActor *local_50;
  UClass *local_48;
  UClass *local_40;
  TTypedElementOwner<FActorElementData> local_38;
  
  FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
  pUVar12 = (UClass *)0x0;
  pUVar13 = (UClass *)0x0;
  uStackX_24 = 0;
  local_res20.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  local_res18 = param_1;
  this = UTypedElementRegistry::GetInstance();
  __return_storage_ptr__->DataPtr = (TTypedElementInternalData<FActorElementData> *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  if (this == (UTypedElementRegistry *)0x0) {
    local_58 = &local_res18;
    bVar4 = `EngineElementsLibraryUtil::CreateTypedElement<AActor,FActorElementData>'::__l3::
            <lambda_1>::operator()(&local_58);
    if (bVar4) goto LAB_147b4d973;
  }
  else {
LAB_147b4d973:
    if ((((uint)local_res18->_padding_ >> 0xf & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object->HasAnyFlags(RF_BeginDestroyed)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                           ,0x25,
                           L"Typed element was requested for an object that is being destroyed!"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FActorElementData> *)(*pcVar2)();
      return pTVar7;
    }
    FVar3.Number = uStackX_24;
    FVar3.ComparisonIndex.Value = local_res20.Value;
    UTypedElementRegistry::CreateElementImpl<FActorElementData>(this,&local_38,FVar3,-1);
    if (__return_storage_ptr__ == &local_38) {
      if ((local_38.DataPtr != (TTypedElementInternalData<FActorElementData> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                             ,0x1b5,
                             L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TTypedElementOwner<FActorElementData> *)(*pcVar2)();
        return pTVar7;
      }
    }
    else {
      __return_storage_ptr__->DataPtr = local_38.DataPtr;
      local_38.DataPtr = (TTypedElementInternalData<FActorElementData> *)0x0;
    }
  }
  if (__return_storage_ptr__->DataPtr != (TTypedElementInternalData<FActorElementData> *)0x0) {
    (__return_storage_ptr__->DataPtr->Data).Actor = param_1;
    if ((__return_storage_ptr__->DataPtr == (TTypedElementInternalData<FActorElementData> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                           ,0x1e2,L"Handle data is null!"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FActorElementData> *)(*pcVar2)();
      return pTVar7;
    }
    pTVar1 = __return_storage_ptr__->DataPtr;
    local_50 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pTVar1->Data).ActorWeak.WeakPtr,(FObjectPtr)&local_50);
  }
  FVar3 = UE::Editor::DataStorage::CompatibilityFeatureName;
  pIVar8 = IModularFeatures::Get();
  iVar6 = (**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,FVar3);
  if (iVar6 < 1) {
    return __return_storage_ptr__;
  }
  pIVar8 = IModularFeatures::Get();
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar3,0);
  local_res10 = (UClass *)(lVar9 + -8);
  if (lVar9 == 0) {
    local_res10 = pUVar12;
  }
  if (local_res10 == (UClass *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)(local_res10->_padding_ + 0x20))(local_res10,param_1);
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar10 == (UClass *)0x0) goto LAB_147b4db25;
  }
  else {
    pUVar13 = pUVar12;
    if (pUVar10 == (UClass *)0x0) goto LAB_147b4db25;
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar13 = pUVar12;
  if (pUVar11 != (UClass *)0x0) {
    iVar6 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar6 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar13 = pUVar10;
    }
  }
LAB_147b4db25:
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 != pUVar12) {
    local_40 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_UEngineElementsLibrary::RegisterActorElement_::__l5::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_40,(<lambda_1>)&local_res10);
    return __return_storage_ptr__;
  }
  local_48 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  AActor::
  ForEachComponent_Internal<UActorComponent,1,0,_UEngineElementsLibrary::RegisterActorElement_::__l5::<lambda_1>_>
            (param_1,(TSubclassOf<UActorComponent>)&local_48,(<lambda_1>)&local_res10);
  return __return_storage_ptr__;
}

// CreateComponentElement @ 147b4dc70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementOwner<FComponentElementData> * __cdecl
UEngineElementsLibrary::CreateComponentElement
          (TTypedElementOwner<FComponentElementData> *__return_storage_ptr__,
          UActorComponent *param_1)

{
  uint uVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  UTypedElementRegistry *this;
  TTypedElementOwner<FComponentElementData> *pTVar6;
  TTypedElementInternalData<FComponentElementData> *pTVar7;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UActorComponent *local_res20;
  UActorComponent *local_40;
  UActorComponent **local_38;
  UActorComponent *local_30;
  TTypedElementOwner<FComponentElementData> local_28;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_40 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  pTVar7 = (TTypedElementInternalData<FComponentElementData> *)0x0;
  if (bVar4) {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
    uVar1 = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    local_res20 = param_1;
    this = UTypedElementRegistry::GetInstance();
    if (this == (UTypedElementRegistry *)0x0) {
      local_38 = &local_res20;
      bVar4 = `EngineElementsLibraryUtil::CreateTypedElement<UActorComponent,FComponentElementData>'
              ::__l3::<lambda_1>::operator()(&local_38);
      if (!bVar4) goto LAB_147b4ddc5;
    }
    if ((((uint)local_res20->_padding_ >> 0xf & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Object->HasAnyFlags(RF_BeginDestroyed)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                           ,0x25,
                           L"Typed element was requested for an object that is being destroyed!"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TTypedElementOwner<FComponentElementData> *)(*pcVar2)();
      return pTVar6;
    }
    FVar3.Number = 0;
    FVar3.ComparisonIndex.Value = uVar1;
    UTypedElementRegistry::CreateElementImpl<FComponentElementData>(this,&local_28,FVar3,-1);
    pTVar7 = local_28.DataPtr;
    if (local_28.DataPtr != (TTypedElementInternalData<FComponentElementData> *)0x0) {
      ((local_28.DataPtr)->Data).Component = param_1;
      local_30 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UActorComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=
                (&((local_28.DataPtr)->Data).ComponentWeak.WeakPtr,(FObjectPtr)&local_30);
    }
  }
  else {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  }
LAB_147b4ddc5:
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = pTVar7;
  return __return_storage_ptr__;
}

// CreateObjectElement @ 147b4e970

TTypedElementOwner<FObjectElementData> * __cdecl
UEngineElementsLibrary::CreateObjectElement
          (TTypedElementOwner<FObjectElementData> *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  UTypedElementRegistry *this;
  TTypedElementOwner<FObjectElementData> *pTVar5;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FNameEntryId local_res18;
  uint uStackX_1c;
  UObject **local_res20;
  TTypedElementOwner<FObjectElementData> local_28;
  
  FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
  uStackX_1c = 0;
  local_res18.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  local_res10 = param_1;
  this = UTypedElementRegistry::GetInstance();
  __return_storage_ptr__->DataPtr = (TTypedElementInternalData<FObjectElementData> *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  if (this == (UTypedElementRegistry *)0x0) {
    local_res20 = &local_res10;
    bVar3 = `EngineElementsLibraryUtil::CreateTypedElement<UObject,FObjectElementData>'::__l3::
            <lambda_1>::operator()(&local_res20);
    if (!bVar3) goto LAB_147b4ea67;
  }
  if ((*(uint *)&local_res10->field_0x8 >> 0xf & 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Object->HasAnyFlags(RF_BeginDestroyed)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x25,L"Typed element was requested for an object that is being destroyed!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FObjectElementData> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FVar2.Number = uStackX_1c;
  FVar2.ComparisonIndex.Value = local_res18.Value;
  UTypedElementRegistry::CreateElementImpl<FObjectElementData>(this,&local_28,FVar2,-1);
  if (__return_storage_ptr__ == &local_28) {
    if (local_28.DataPtr != (TTypedElementInternalData<FObjectElementData> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                         ,0x1b5,
                         L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TTypedElementOwner<FObjectElementData> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = local_28.DataPtr;
  }
LAB_147b4ea67:
  if (__return_storage_ptr__->DataPtr != (TTypedElementInternalData<FObjectElementData> *)0x0) {
    (__return_storage_ptr__->DataPtr->Data).Object = param_1;
  }
  return __return_storage_ptr__;
}

// CreateSMInstanceElement @ 147b4f100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTypedElementOwner<FSMInstanceElementData> * __cdecl
UEngineElementsLibrary::CreateSMInstanceElement
          (TTypedElementOwner<FSMInstanceElementData> *__return_storage_ptr__,FSMInstanceId *param_1
          )

{
  TTypedElementInternalData<FSMInstanceElementData> *pTVar1;
  code *pcVar2;
  UInstancedStaticMeshComponent *pUVar3;
  bool bVar4;
  FSMInstanceElementIdMap *this;
  TTypedElementOwner<FSMInstanceElementData> *pTVar5;
  UTypedElementRegistry *this_00;
  ISMInstanceManager *pIVar6;
  FSMInstanceElementId local_28;
  TTypedElementOwner<FSMInstanceElementData> local_18;
  
  this = FSMInstanceElementIdMap::Get();
  FSMInstanceElementIdMap::GetSMInstanceElementIdFromSMInstanceId(this,&local_28,param_1,true);
  pUVar3 = local_28.ISMComponent;
  if ((local_28.ISMComponent == (UInstancedStaticMeshComponent *)0x0) || (local_28.InstanceId == 0))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SMInstanceElementId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x20e,
                       L"Static Mesh Instance Index failed to map to a valid Static Mesh Instance Element ID!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if (param_1->ISMComponent != pUVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSMInstanceId.ISMComponent == InSMInstanceElementId.ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x214,L"Component mismatch in IDs!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
      return pTVar5;
    }
  }
  this_00 = UTypedElementRegistry::GetInstance();
  __return_storage_ptr__->DataPtr = (TTypedElementInternalData<FSMInstanceElementData> *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  if (this_00 == (UTypedElementRegistry *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8390497777020305945>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x219,"Registry");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else if (SMInstanceElementDataUtil::GEnableSMInstanceElements != 0) {
    pIVar6 = SMInstanceElementDataUtil::GetSMInstanceManager(param_1);
    if (pIVar6 != (ISMInstanceManager *)0x0) {
      UTypedElementRegistry::CreateElementImpl<FSMInstanceElementData>
                (this_00,&local_18,NAME_SMInstance,-1);
      if (__return_storage_ptr__ == &local_18) {
        if (local_18.DataPtr != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                             ,0x1b5,
                             L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
            return pTVar5;
          }
        }
      }
      else {
        __return_storage_ptr__->DataPtr = local_18.DataPtr;
      }
      pTVar1 = __return_storage_ptr__->DataPtr;
      if (pTVar1 != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
        (pTVar1->Data).InstanceElementId.ISMComponent = local_28.ISMComponent;
        (pTVar1->Data).InstanceElementId.InstanceId = local_28.InstanceId;
      }
    }
  }
  return __return_storage_ptr__;
}

// CreateSMInstanceElementImpl @ 147b4f290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTypedElementOwner<FSMInstanceElementData> * __cdecl
UEngineElementsLibrary::CreateSMInstanceElementImpl
          (TTypedElementOwner<FSMInstanceElementData> *__return_storage_ptr__,FSMInstanceId *param_1
          ,FSMInstanceElementId *param_2)

{
  TTypedElementInternalData<FSMInstanceElementData> *pTVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  TTypedElementOwner<FSMInstanceElementData> *pTVar5;
  UTypedElementRegistry *this;
  ISMInstanceManager *pIVar6;
  TTypedElementOwner<FSMInstanceElementData> local_18;
  
  if (param_1->ISMComponent != param_2->ISMComponent) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSMInstanceId.ISMComponent == InSMInstanceElementId.ISMComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x214,L"Component mismatch in IDs!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
      return pTVar5;
    }
  }
  this = UTypedElementRegistry::GetInstance();
  __return_storage_ptr__->DataPtr = (TTypedElementInternalData<FSMInstanceElementData> *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  if (this == (UTypedElementRegistry *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8390497777020305945>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                       ,0x219,"Registry");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else if (SMInstanceElementDataUtil::GEnableSMInstanceElements != 0) {
    pIVar6 = SMInstanceElementDataUtil::GetSMInstanceManager(param_1);
    if (pIVar6 != (ISMInstanceManager *)0x0) {
      UTypedElementRegistry::CreateElementImpl<FSMInstanceElementData>
                (this,&local_18,NAME_SMInstance,-1);
      if (__return_storage_ptr__ == &local_18) {
        if (local_18.DataPtr != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                             ,0x1b5,
                             L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar2)();
            return pTVar5;
          }
        }
      }
      else {
        __return_storage_ptr__->DataPtr = local_18.DataPtr;
      }
      pTVar1 = __return_storage_ptr__->DataPtr;
      if (pTVar1 != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
        uVar3 = param_2->InstanceId;
        (pTVar1->Data).InstanceElementId.ISMComponent = param_2->ISMComponent;
        (pTVar1->Data).InstanceElementId.InstanceId = uVar3;
      }
    }
  }
  return __return_storage_ptr__;
}

// DestroyActorElement @ 147b50910

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
UEngineElementsLibrary::DestroyActorElement
          (AActor *param_1,TTypedElementOwner<FActorElementData> *param_2)

{
  TTypedElementInternalData<FActorElementData> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  AActor *pAVar8;
  UTypedElementRegistry *this;
  FRegisteredElementType *pFVar9;
  longlong *plVar10;
  FTypedElementId *pFVar11;
  FTypedElementId *pFVar12;
  FString local_18;
  
  UTypedElementRegistry::GetInstance();
  FVar3 = UE::Editor::DataStorage::CompatibilityFeatureName;
  pIVar6 = IModularFeatures::Get();
  iVar5 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,FVar3);
  if (0 < iVar5) {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3);
    plVar10 = (longlong *)(lVar7 + -8);
    if (lVar7 == 0) {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,param_1);
    }
  }
  if (param_2->DataPtr != (TTypedElementInternalData<FActorElementData> *)0x0) {
    pAVar8 = (AActor *)
             FWeakObjectPtr::GetEvenIfUnreachable(&(param_2->DataPtr->Data).ActorWeak.WeakPtr);
    if (pAVar8 != param_1) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutActorElement.GetDataChecked().ActorWeak.GetEvenIfUnreachable() == InActor"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                         ,0x182,L"Actor element was not for this actor instance! %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = UTypedElementRegistry::GetInstance();
    pFVar12 = &FTypedElementId::Unset;
    pFVar11 = (FTypedElementId *)&param_2->DataPtr->_padding_;
    if (param_2->DataPtr == (TTypedElementInternalData<FActorElementData> *)0x0) {
      pFVar11 = &FTypedElementId::Unset;
    }
    pFVar9 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                       (this,*(uchar *)((longlong)pFVar11 + 3));
    if ((pFVar9 == (FRegisteredElementType *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = param_2->DataPtr;
    if (pTVar1 != (TTypedElementInternalData<FActorElementData> *)0x0) {
      pFVar12 = (FTypedElementId *)&pTVar1->_padding_;
    }
    (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9,(uint)*(longlong *)pFVar12 & 0xffffff,pTVar1,1);
    param_2->DataPtr = (TTypedElementInternalData<FActorElementData> *)0x0;
    param_2->ReferenceId = -1;
  }
  return;
}

// DestroyComponentElement @ 147b50ab0

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
UEngineElementsLibrary::DestroyComponentElement
          (UActorComponent *param_1,TTypedElementOwner<FComponentElementData> *param_2)

{
  TTypedElementInternalData<FComponentElementData> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UActorComponent *pUVar4;
  UTypedElementRegistry *this;
  FRegisteredElementType *pFVar5;
  FTypedElementId *pFVar6;
  FTypedElementId *pFVar7;
  FString local_18;
  
  if (param_2->DataPtr != (TTypedElementInternalData<FComponentElementData> *)0x0) {
    pUVar4 = (UActorComponent *)
             FWeakObjectPtr::GetEvenIfUnreachable(&(param_2->DataPtr->Data).ComponentWeak.WeakPtr);
    if (pUVar4 != param_1) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutComponentElement.GetDataChecked().ComponentWeak.GetEvenIfUnreachable() == InComponent"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                         ,0x1e0,L"Component element was not for this component instance! %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = UTypedElementRegistry::GetInstance();
    pFVar7 = &FTypedElementId::Unset;
    pFVar6 = (FTypedElementId *)&param_2->DataPtr->_padding_;
    if (param_2->DataPtr == (TTypedElementInternalData<FComponentElementData> *)0x0) {
      pFVar6 = &FTypedElementId::Unset;
    }
    pFVar5 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                       (this,*(uchar *)((longlong)pFVar6 + 3));
    if ((pFVar5 == (FRegisteredElementType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = param_2->DataPtr;
    if (pTVar1 != (TTypedElementInternalData<FComponentElementData> *)0x0) {
      pFVar7 = (FTypedElementId *)&pTVar1->_padding_;
    }
    (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,(uint)*(longlong *)pFVar7 & 0xffffff,pTVar1,1);
    param_2->DataPtr = (TTypedElementInternalData<FComponentElementData> *)0x0;
    param_2->ReferenceId = -1;
  }
  return;
}

// DestroyObjectElement @ 147b514c0

void __cdecl
UEngineElementsLibrary::DestroyObjectElement
          (UObject *param_1,TTypedElementOwner<FObjectElementData> *param_2)

{
  TTypedElementInternalData<FObjectElementData> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UTypedElementRegistry *this;
  FRegisteredElementType *pFVar4;
  FTypedElementId *pFVar5;
  FTypedElementId *pFVar6;
  FString local_18;
  
  if (param_2->DataPtr != (TTypedElementInternalData<FObjectElementData> *)0x0) {
    if ((param_2->DataPtr->Data).Object != param_1) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutObjectElement.GetDataChecked().Object == InObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                         ,0x122,L"Object element was not for this object instance! %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = UTypedElementRegistry::GetInstance();
    pFVar6 = &FTypedElementId::Unset;
    pFVar5 = (FTypedElementId *)&param_2->DataPtr->_padding_;
    if (param_2->DataPtr == (TTypedElementInternalData<FObjectElementData> *)0x0) {
      pFVar5 = &FTypedElementId::Unset;
    }
    pFVar4 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                       (this,*(uchar *)((longlong)pFVar5 + 3));
    if ((pFVar4 == (FRegisteredElementType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = param_2->DataPtr;
    if (pTVar1 != (TTypedElementInternalData<FObjectElementData> *)0x0) {
      pFVar6 = (FTypedElementId *)&pTVar1->_padding_;
    }
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,(uint)*(longlong *)pFVar6 & 0xffffff,pTVar1,1);
    param_2->DataPtr = (TTypedElementInternalData<FObjectElementData> *)0x0;
    param_2->ReferenceId = -1;
  }
  return;
}

// DestroySMInstanceElement @ 147b51600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UEngineElementsLibrary::DestroySMInstanceElement
          (FSMInstanceElementId *param_1,TTypedElementOwner<FSMInstanceElementData> *param_2)

{
  TTypedElementInternalData<FSMInstanceElementData> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UTypedElementRegistry *this;
  FRegisteredElementType *pFVar4;
  FTypedElementId *pFVar5;
  FTypedElementId *pFVar6;
  FString local_18;
  
  pTVar1 = param_2->DataPtr;
  if (pTVar1 != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
    if (((pTVar1->Data).InstanceElementId.ISMComponent != param_1->ISMComponent) ||
       ((pTVar1->Data).InstanceElementId.InstanceId != param_1->InstanceId)) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)param_1->ISMComponent,&local_18,(UObject *)0x0);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutSMInstanceElement.GetDataChecked().InstanceElementId == InSMInstanceElementId"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Elements\\Framework\\EngineElementsLibrary.cpp"
                         ,0x229,L"Static Mesh Instance element was not for this instance! %s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = UTypedElementRegistry::GetInstance();
    pFVar6 = &FTypedElementId::Unset;
    pFVar5 = (FTypedElementId *)&param_2->DataPtr->_padding_;
    if (param_2->DataPtr == (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
      pFVar5 = &FTypedElementId::Unset;
    }
    pFVar4 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                       (this,*(uchar *)((longlong)pFVar5 + 3));
    if ((pFVar4 == (FRegisteredElementType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar1 = param_2->DataPtr;
    if (pTVar1 != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
      pFVar6 = (FTypedElementId *)&pTVar1->_padding_;
    }
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,(uint)*(longlong *)pFVar6 & 0xffffff,pTVar1,1);
    param_2->DataPtr = (TTypedElementInternalData<FSMInstanceElementData> *)0x0;
    param_2->ReferenceId = -1;
  }
  return;
}

// GetPrivateStaticClass @ 147b6c060

UClass * __cdecl UEngineElementsLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"EngineElementsLibrary",
               &Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton,
               StaticRegisterNativesUEngineElementsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEngineElementsLibrary>,
               InternalVTableHelperCtorCaller<UEngineElementsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineElementsLibrary.InnerSingleton;
}

// RegisterActorElement @ 147b81b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UEngineElementsLibrary::RegisterActorElement(AActor *param_1)

{
  bool bVar1;
  FName FVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *local_res10;
  UClass *local_res18;
  
  FVar2 = UE::Editor::DataStorage::CompatibilityFeatureName;
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,FVar2);
  if (iVar3 < 1) {
    return;
  }
  pIVar4 = IModularFeatures::Get();
  lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,FVar2,0);
  pUVar8 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_res10 = (UClass *)(lVar5 + -8);
  if (lVar5 == 0) {
    local_res10 = pUVar8;
  }
  if (local_res10 == (UClass *)0x0) {
    return;
  }
  (**(code **)(local_res10->_padding_ + 0x20))(local_res10,param_1);
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) goto LAB_147b81bd8;
  }
  else {
    pUVar9 = pUVar8;
    if (pUVar6 == (UClass *)0x0) goto LAB_147b81bd8;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar8;
  if (pUVar7 != (UClass *)0x0) {
    iVar3 = (int)pUVar7->_padding_;
    if (((int)pUVar6->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) != &pUVar7->_padding_)
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pUVar9 = pUVar6;
    }
  }
LAB_147b81bd8:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res18 = pUVar6;
  if (pUVar9 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_UEngineElementsLibrary::RegisterActorElement_::__l5::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_res18,(<lambda_1>)&local_res10);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  AActor::
  ForEachComponent_Internal<UActorComponent,1,0,_UEngineElementsLibrary::RegisterActorElement_::__l5::<lambda_1>_>
            (param_1,(TSubclassOf<UActorComponent>)&local_res18,(<lambda_1>)&local_res10);
  return;
}

// StaticRegisterNativesUEngineElementsLibrary @ 147b8ec30

void __cdecl UEngineElementsLibrary::StaticRegisterNativesUEngineElementsLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterActorElement @ 147b8ffc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UEngineElementsLibrary::UnregisterActorElement(AActor *param_1)

{
  FName FVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FVar1 = UE::Editor::DataStorage::CompatibilityFeatureName;
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,FVar1);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar1,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,param_1);
    }
  }
  return;
}

