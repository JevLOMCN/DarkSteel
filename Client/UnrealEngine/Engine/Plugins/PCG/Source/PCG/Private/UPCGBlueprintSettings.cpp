// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 30

// StaticClass @ 149b32870

UClass * __cdecl UPCGBlueprintSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintSettings",
               &Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintSettings>,
               InternalVTableHelperCtorCaller<UPCGBlueprintSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton;
}

// UPCGBlueprintSettings @ 149b55700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintSettings * __thiscall
UPCGBlueprintSettings::UPCGBlueprintSettings(UPCGBlueprintSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGBlueprintSettings__6B_;
  (this->BlueprintElementType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintElementInstance).field0_0x0.DebugPtr = (UPCGBlueprintBaseElement *)0x0;
  return this;
}

// UPCGBlueprintSettings @ 149b55740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintSettings * __thiscall
UPCGBlueprintSettings::UPCGBlueprintSettings(UPCGBlueprintSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGBlueprintSettings__6B_;
  (this->BlueprintElementType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlueprintElementInstance).field0_0x0.DebugPtr = (UPCGBlueprintBaseElement *)0x0;
  return this;
}

// ~UPCGBlueprintSettings @ 149b58af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::~UPCGBlueprintSettings(UPCGBlueprintSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGBlueprintSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149b66b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintSettings::ApplyPreconfiguredSettings
          (UPCGBlueprintSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  ITextData *pIVar1;
  UPCGBlueprintBaseElement *this_00;
  TRefCountPtr<ITextData> TVar2;
  UFunction *pUVar3;
  undefined1 auStackX_8 [8];
  undefined4 auStack_28 [2];
  FText FStack_20;
  
  this_00 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if (this_00 == (UPCGBlueprintBaseElement *)0x0) {
    return;
  }
  auStack_28[0] = 0xffffffff;
  FText::FText(&FStack_20);
  TVar2.Reference = FStack_20.TextData.Reference;
  pIVar1 = *(ITextData **)&param_1->field_0x8;
  auStack_28[0] = *(undefined4 *)param_1;
  if (FStack_20.TextData.Reference != pIVar1) {
    FStack_20.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  FStack_20.Flags = *(uint *)&param_1->field_0x10;
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this_00,NAME_UPCGBlueprintBaseElement_ApplyPreconfiguredSettings);
  (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar3,auStack_28);
  if (FStack_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_20.TextData.Reference + 0x10))();
  }
  return;
}

// BeginDestroy @ 149b66bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::BeginDestroy(UPCGBlueprintSettings *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGBlueprintSettings **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CanCullTaskIfUnwired @ 149b67b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintSettings::CanCullTaskIfUnwired(UPCGBlueprintSettings *this)

{
  return false;
}

// CreateElement @ 149b69fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBlueprintSettings::CreateElement
          (UPCGBlueprintSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGExecuteBlueprintElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGExecuteBlueprintElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// FixingOverridableParamPropertyClass @ 149b8a340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintSettings::FixingOverridableParamPropertyClass
          (UPCGBlueprintSettings *this,FPCGSettingsOverridableParam *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  FProperty *pFVar3;
  
  if ((param_1->PropertiesNames).ArrayNum != 0) {
    this_00 = TSubclassOf<UPCGBlueprintBaseElement>::operator*(&this->BlueprintElementType);
    if (this_00 != (UClass *)0x0) {
      if ((param_1->PropertiesNames).ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar3 = UStruct::FindPropertyByName
                         ((UStruct *)this_00,
                          *(FName *)(param_1->PropertiesNames).AllocatorInstance.Data);
      if (pFVar3 != (FProperty *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (param_1->PropertyClass).field0_0x0.DebugPtr = (UStruct *)this_00;
        return;
      }
    }
  }
  UPCGSettings::FixingOverridableParamPropertyClass((UPCGSettings *)this,param_1);
  return;
}

// GetAdditionalTitleInformation @ 149b8c540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UPCGBlueprintSettings::GetAdditionalTitleInformation
          (UPCGBlueprintSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UPCGBlueprintBaseElement *this_00;
  UClass *pUVar2;
  bool bVar3;
  bool bVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FText *pFVar8;
  FString *pFVar9;
  FName local_res8;
  FString local_48;
  FText local_38;
  FText local_28;
  
  pUVar7 = (UClass *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if ((this_00 != (UPCGBlueprintBaseElement *)0x0) &&
     (FVar5 = UPCGBlueprintBaseElement::NodeTitleOverride(this_00), *(longlong *)FVar5 != 0)) {
    FVar5 = UPCGBlueprintBaseElement::NodeTitleOverride
                      ((this->BlueprintElementInstance).field0_0x0.DebugPtr);
    ::FName::ToString((FName *)FVar5,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar2 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar2 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      pUVar6 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
      if (pUVar6 != (UClass *)0x0) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar7 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
        }
      }
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_28);
      pFVar8 = &local_28;
      bVar4 = true;
      bVar3 = false;
      goto LAB_149b8c664;
    }
  }
  local_38.TextData.Reference = (ITextData *)0x0;
  pFVar8 = &local_38;
  local_38.Flags = 0;
  local_38._12_4_ = 0;
  bVar4 = false;
  bVar3 = true;
LAB_149b8c664:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pFVar8->TextData).Reference;
  (pFVar8->TextData).Reference = (ITextData *)0x0;
  local_48.Data.ArrayNum = pFVar8->Flags;
  local_48.Data.ArrayMax = *(int *)&pFVar8->field_0xc;
  *(undefined8 *)&pFVar8->Flags = 0;
  if ((bVar3) && (local_38.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if ((bVar4) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    FMemory::Free(local_28.TextData.Reference);
  }
  if (local_48.Data.ArrayNum < 2) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"PCGExecuteBlueprint",L"MissingBlueprint",L"Missing Blueprint");
    pFVar9 = FText::ToString(pFVar8);
    ::FString::FString(__return_storage_ptr__,pFVar9);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  else {
    ::FName::NameToDisplayString(__return_storage_ptr__,&local_48,false);
  }
  if ((ITextData *)local_48.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 149b8dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGBlueprintSettings::GetCurrentPinTypesID
          (UPCGBlueprintSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  UPCGBlueprintBaseElement *pUVar1;
  code *pcVar2;
  bool bVar3;
  EPCGDataType EVar4;
  FPCGDataTypeIdentifier *pFVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGExecuteBlueprint.cpp"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar2)();
      return pFVar5;
    }
  }
  pUVar1 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPCGBlueprintBaseElement *)0x0) && (pUVar1->bHasDynamicPins != false)) {
    puVar6 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar6);
    if (*(char *)(pFVar7 + 4) == '\0') {
      EVar4 = UPCGBlueprintBaseElement::DynamicPinTypesOverride
                        ((this->BlueprintElementInstance).field0_0x0.DebugPtr,(UPCGSettings *)this,
                         param_1);
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,EVar4);
      return __return_storage_ptr__;
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b8fb40

UClass * __cdecl UPCGBlueprintSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintSettings",
               &Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintSettings>,
               InternalVTableHelperCtorCaller<UPCGBlueprintSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintSettings::HasDynamicPins(UPCGBlueprintSettings *this)

{
  UPCGBlueprintBaseElement *pUVar1;
  
  pUVar1 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGBlueprintBaseElement *)0x0) {
    return pUVar1->bHasDynamicPins;
  }
  return false;
}

// HasFlippedTitleLines @ 149b91b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintSettings::HasFlippedTitleLines(UPCGBlueprintSettings *this)

{
  return true;
}

// HasOverridableParams @ 149b91b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintSettings::HasOverridableParams(UPCGBlueprintSettings *this)

{
  return true;
}

// InputPinProperties @ 149b91ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlueprintSettings::InputPinProperties
          (UPCGBlueprintSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGBlueprintBaseElement *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar1 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPCGBlueprintBaseElement *)0x0) || (pUVar1->bHasDefaultInPin != false)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FText::GetEmpty();
    pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),
               &PCGPinConstants::DefaultInputLabel,pFVar5,true,true,pFVar4);
  }
  pUVar1 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGBlueprintBaseElement *)0x0) {
    TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>::
    Append<FPCGPinProperties,TSizedDefaultAllocator<32>_>
              (__return_storage_ptr__,&pUVar1->CustomInputPins);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlueprintSettings::OutputPinProperties
          (UPCGBlueprintSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGBlueprintBaseElement *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar6;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar1 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGBlueprintBaseElement *)0x0) {
    pTVar6 = UPCGSettings::OutputPinProperties
                       ((UPCGSettings *)this,
                        (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&local_28);
    if (__return_storage_ptr__ != pTVar6) {
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
                 __return_storage_ptr__->ArrayNum);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_28.Ids.AllocatorInstance.Data,local_28.Ids.ArrayNum);
    if ((FPCGPinProperties *)local_28.Ids.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
    }
  }
  else {
    if (pUVar1->bHasDefaultOutPin != false) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
      __return_storage_ptr__->ArrayNum = iVar3 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar4 = FText::GetEmpty();
      pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
      FPCGPinProperties::FPCGPinProperties
                ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),
                 &PCGPinConstants::DefaultOutputLabel,pFVar5,true,true,pFVar4);
    }
    TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>::
    Append<FPCGPinProperties,TSizedDefaultAllocator<32>_>
              (__return_storage_ptr__,
               &((this->BlueprintElementInstance).field0_0x0.DebugPtr)->CustomOutputPins);
  }
  return __return_storage_ptr__;
}

// PostLoad @ 149b958e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::PostLoad(UPCGBlueprintSettings *this)

{
  UPCGBlueprintBaseElement *this_00;
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  if ((this->BlueprintElementInstance).field0_0x0.DebugPtr == (UPCGBlueprintBaseElement *)0x0) {
    RefreshBlueprintElement(this);
  }
  this_00 = (this->BlueprintElementInstance).field0_0x0.DebugPtr;
  if (this_00 != (UPCGBlueprintBaseElement *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    UObjectBase::AtomicallySetFlags
              ((UObjectBase *)(this->BlueprintElementInstance).field0_0x0.DebugPtr,RF_Transactional)
    ;
    return;
  }
  return;
}

// RefreshBlueprintElement @ 149b97470

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::RefreshBlueprintElement(UPCGBlueprintSettings *this)

{
  int iVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  UClass *pUVar5;
  UPCGBlueprintBaseElement *this_00;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
  if (pUVar6 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0))
      {
        local_a8.ComparisonIndex.Value = 0;
        local_a8.Number = 0;
        pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
        FVar3 = local_a8;
        if (pUVar5 == (UClass *)0x0) {
LAB_149b97530:
          pUVar6 = (UClass *)0x0;
        }
        else {
          iVar1 = (int)pUVar5->_padding_;
          if (((int)pUVar6->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_149b97530;
          pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
        }
        if (local_a8 == (FName)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
        }
        pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
        CheckIsClassChildOf_Internal(pUVar5,pUVar6);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_98,pUVar6);
        FVar4 = local_a8;
        local_98._48_8_ = (FObjectInstancingGraph *)0x0;
        local_98._56_8_ = (UPackage *)0x0;
        local_a8.ComparisonIndex = FVar3.ComparisonIndex.Value;
        local_a8.Number = FVar3.Number;
        local_98._16_4_ = local_a8.ComparisonIndex.Value;
        local_98._20_4_ = local_a8.Number;
        local_98._24_4_ = RF_Transactional;
        local_98._40_8_ = (UObject *)0x0;
        local_98[0x20] = false;
        local_a8 = FVar4;
        local_98._8_8_ = this;
        this_00 = (UPCGBlueprintBaseElement *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
        if (local_98._64_8_ != 0) {
          plVar7 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UPCGBlueprintBaseElement *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (this->BlueprintElementInstance).field0_0x0.DebugPtr = this_00;
        UPCGBlueprintBaseElement::Initialize(this_00);
        goto LAB_149b97603;
      }
    }
  }
  (this->BlueprintElementInstance).field0_0x0.DebugPtr = (UPCGBlueprintBaseElement *)0x0;
LAB_149b97603:
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,true);
  return;
}

// SetBlueprintElementType @ 149b97b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintSettings::SetBlueprintElementType
          (UPCGBlueprintSettings *this,TSubclassOf<UPCGBlueprintBaseElement> param_1,
          UPCGBlueprintBaseElement **param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  pUVar8 = (UClass *)0x0;
  if ((this->BlueprintElementInstance).field0_0x0.DebugPtr != (UPCGBlueprintBaseElement *)0x0) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    pUVar7 = pUVar8;
    if ((lVar2 != 0) &&
       (pUVar4 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar4 != (UClass *)0x0))
    {
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
        pUVar7 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    pUVar4 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
    pUVar6 = pUVar8;
    if ((pUVar4 != (UClass *)0x0) &&
       (pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar5 != (UClass *)0x0))
    {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
      }
    }
    if (pUVar7 == pUVar6) goto LAB_149b97ccb;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar7 = pUVar8;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar4 != (UClass *)0x0)) {
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
      pUVar7 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->BlueprintElementType).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  }
  RefreshBlueprintElement(this);
LAB_149b97ccb:
  *param_2 = (UPCGBlueprintBaseElement *)(this->BlueprintElementInstance).field0_0x0;
  return;
}

// SetElementType @ 149b97d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintSettings::SetElementType
          (UPCGBlueprintSettings *this,TSubclassOf<UPCGBlueprintElement> param_1,
          UPCGBlueprintElement **param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  if ((this->BlueprintElementInstance).field0_0x0.DebugPtr != (UPCGBlueprintBaseElement *)0x0) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if (lVar2 == 0) {
LAB_149b97d6c:
      pUVar4 = (UClass *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
      if (pUVar4 == (UClass *)0x0) goto LAB_149b97d6c;
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_149b97d6c;
      pUVar4 = *(UClass **)param_1.Class.field0_0x0;
    }
    pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
    if (pUVar6 == (UClass *)0x0) {
LAB_149b97db1:
      pUVar6 = (UClass *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
      if (pUVar5 == (UClass *)0x0) goto LAB_149b97db1;
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_149b97db1;
      pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
    }
    if (pUVar4 == pUVar6) goto LAB_149b97e6b;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
LAB_149b97df7:
    pUVar4 = (UClass *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
    if (pUVar4 == (UClass *)0x0) goto LAB_149b97df7;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_149b97df7;
    pUVar4 = *(UClass **)param_1.Class.field0_0x0;
  }
  pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
  if (pUVar6 == (UClass *)0x0) {
LAB_149b97e3c:
    pUVar6 = (UClass *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UPCGBlueprintBaseElement_NoRegister();
    if (pUVar5 == (UClass *)0x0) goto LAB_149b97e3c;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_149b97e3c;
    pUVar6 = (this->BlueprintElementType).Class.field0_0x0.DebugPtr;
  }
  if (pUVar4 != pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->BlueprintElementType).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  }
  RefreshBlueprintElement(this);
LAB_149b97e6b:
  if ((this->BlueprintElementInstance).field0_0x0.DebugPtr != (UPCGBlueprintBaseElement *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGBlueprintElement_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->BlueprintElementInstance,pUVar4);
    if (bVar3) {
      *param_2 = (UPCGBlueprintElement *)(this->BlueprintElementInstance).field0_0x0;
      return;
    }
  }
  *param_2 = (UPCGBlueprintElement *)0x0;
  return;
}

// SetupBlueprintElementEvent @ 149b980a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::SetupBlueprintElementEvent(UPCGBlueprintSettings *this)

{
  return;
}

// SetupBlueprintEvent @ 149b980b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::SetupBlueprintEvent(UPCGBlueprintSettings *this)

{
  return;
}

// StaticRegisterNativesUPCGBlueprintSettings @ 149b98320

void __cdecl UPCGBlueprintSettings::StaticRegisterNativesUPCGBlueprintSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownBlueprintElementEvent @ 149b98b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::TeardownBlueprintElementEvent(UPCGBlueprintSettings *this)

{
  return;
}

// TeardownBlueprintEvent @ 149b98b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintSettings::TeardownBlueprintEvent(UPCGBlueprintSettings *this)

{
  return;
}

// UseSeed @ 149b98d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPCGBlueprintSettings::UseSeed(UPCGBlueprintSettings *this)

{
  return true;
}

// execGetElementType @ 149b9ae00

void __cdecl
UPCGBlueprintSettings::execGetElementType(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = *(UObject **)(param_1 + 5);
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

// execSetBlueprintElementType @ 149b9ae80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintSettings::execSetBlueprintElementType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGBlueprintBaseElement **ppUVar2;
  UPCGBlueprintBaseElement *local_res10 [2];
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UPCGBlueprintBaseElement *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28[0] = local_res20;
  ppUVar2 = local_res10;
  if ((UPCGBlueprintBaseElement **)param_2->MostRecentPropertyAddress !=
      (UPCGBlueprintBaseElement **)0x0) {
    ppUVar2 = (UPCGBlueprintBaseElement **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  SetBlueprintElementType
            ((UPCGBlueprintSettings *)param_1,(TSubclassOf<UPCGBlueprintBaseElement>)local_28,
             ppUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*ppUVar2 != (UPCGBlueprintBaseElement *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  return;
}

// execSetElementType @ 149b9af90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGBlueprintSettings::execSetElementType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGBlueprintElement **ppUVar2;
  UPCGBlueprintElement *local_res10 [2];
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UPCGBlueprintElement *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28[0] = local_res20;
  ppUVar2 = local_res10;
  if ((UPCGBlueprintElement **)param_2->MostRecentPropertyAddress != (UPCGBlueprintElement **)0x0) {
    ppUVar2 = (UPCGBlueprintElement **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  SetElementType((UPCGBlueprintSettings *)param_1,(TSubclassOf<UPCGBlueprintElement>)local_28,
                 ppUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*ppUVar2 != (UPCGBlueprintElement *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  return;
}

