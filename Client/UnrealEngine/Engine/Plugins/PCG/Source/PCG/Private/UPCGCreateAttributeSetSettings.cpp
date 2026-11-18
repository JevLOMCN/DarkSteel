// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149b31770

UClass * __cdecl UPCGCreateAttributeSetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateAttributeSetSettings",
               &Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateAttributeSetSettings,0x280,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateAttributeSetSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateAttributeSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton;
}

// UPCGCreateAttributeSetSettings @ 149b55af0

UPCGCreateAttributeSetSettings * __thiscall
UPCGCreateAttributeSetSettings::UPCGCreateAttributeSetSettings
          (UPCGCreateAttributeSetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCreateAttributeSetSettings__6B_;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->AttributeTypes);
  *(undefined8 *)&(this->OutputTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x18 = 0;
  *(undefined4 *)&(this->OutputTarget).field_0x20 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x28 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x30 = 0;
  (this->OutputTarget).field_0x38 = 0;
  *(undefined ***)&this->OutputTarget = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// UPCGCreateAttributeSetSettings @ 149b55b70

UPCGCreateAttributeSetSettings * __thiscall
UPCGCreateAttributeSetSettings::UPCGCreateAttributeSetSettings
          (UPCGCreateAttributeSetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCreateAttributeSetSettings__6B_;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->AttributeTypes);
  *(undefined8 *)&(this->OutputTarget).field_0x8 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x10 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x18 = 0;
  *(undefined4 *)&(this->OutputTarget).field_0x20 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x28 = 0;
  *(undefined8 *)&(this->OutputTarget).field_0x30 = 0;
  (this->OutputTarget).field_0x38 = 0;
  *(undefined ***)&this->OutputTarget = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// ~UPCGCreateAttributeSetSettings @ 149b58c30

void __thiscall
UPCGCreateAttributeSetSettings::~UPCGCreateAttributeSetSettings
          (UPCGCreateAttributeSetSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGCreateAttributeSetSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar1 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->AttributeTypes).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->AttributeTypes).SoftClassPathValue.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->AttributeTypes).StringValue.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149b66b70

void __thiscall
UPCGCreateAttributeSetSettings::ApplyPreconfiguredSettings
          (UPCGCreateAttributeSetSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  if (*(uint *)param_1 < 0xf) {
    (this->AttributeTypes).Type = (EPCGMetadataTypes)*(uint *)param_1;
  }
  return;
}

// ConvertNode @ 149b693b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

bool __thiscall
UPCGCreateAttributeSetSettings::ConvertNode
          (UPCGCreateAttributeSetSettings *this,FPCGPreconfiguredInfo *param_1)

{
  int iVar1;
  UPCGNode *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  EPropertyBagAlterationResult EVar7;
  UClass *pUVar8;
  FInstancedPropertyBag *this_00;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FPropertyBagPropertyDesc *pFVar12;
  FString *pFVar13;
  byte bVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  undefined1 auStackY_228 [32];
  FName local_1e8;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_1e0;
  UClass *local_1d0;
  FName local_1c8;
  UPCGGraph *pUStack_1c0;
  FPCGSingleNodeConverter local_1b8;
  FText local_180;
  FText local_170;
  <lambda_1> local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  FTextFormat local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TObjectPtr<UObject_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  TObjectPtr<UObject_const_>_u_0 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pUVar2 = (UPCGNode *)this->_padding_;
  if (pUVar2 == (UPCGNode *)0x0) {
    pFVar13 = GetTypeName<UPCGNode>(&local_138);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar8 = Z_Construct_UClass_UPCGNode_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_)) {
    pFVar13 = GetTypeName<UPCGNode>(&local_d8);
    pwVar15 = L"";
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UObject>(&local_c8,(UObject *)pUVar2);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar16);
  }
  if (param_1->PreconfiguredIndex != 0) {
    return false;
  }
  local_1d0 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1d0);
  }
  FPCGSingleNodeConverter::FPCGSingleNodeConverter
            (&local_1b8,pUVar2,(TSubclassOf<UPCGSettings>)&local_1d0);
  bVar14 = 0;
  if ((~local_1b8._padding_._1_1_ & 2) == 0) {
    bVar14 = local_1b8._padding_._1_1_ & 1;
  }
  if (bVar14 == 0) {
    PCGLog::Settings::LogInvalidPreconfigurationWarning
              (param_1->PreconfiguredIndex,&PCGCreateAttributeConstants::NodeTitleCreateConstant);
  }
  else {
    FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_1b8);
    if ((UPCGGraph *)local_1b8._padding_ == (UPCGGraph *)0x0) {
LAB_149b6974e:
      FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_1b8);
      FPCGSingleNodeConverter::Finalize(&local_1b8);
      bVar5 = local_1b8._padding_._1_1_ == 0xf;
      goto LAB_149b697f1;
    }
    this_00 = (FInstancedPropertyBag *)
              (**(code **)(*(longlong *)local_1b8._padding_ + 0x2c0))(local_1b8._padding_);
    FPCGAttributePropertySelector::GetName((FPCGAttributePropertySelector *)&this->OutputTarget);
    bVar5 = PCGGraphParameter::Helpers::GenerateUniqueName
                      ((UPCGGraphInterface *)local_1b8._padding_,&local_1e8);
    if (bVar5) {
      bVar5 = FInstancedPropertyBag::IsPropertyNameValid(local_1e8);
      pwVar15 = L"";
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("UserParametersStruct->IsPropertyNameValid(PropertyName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                             ,0x155,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      PCGPropertyHelpers::CreatePropertyBagDescWithMetadataType
                ((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,local_1e8,
                 (this->AttributeTypes).Type);
      local_78.DebugPtr = local_b8.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_b8.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_b8.DebugPtr);
      }
      local_60 = local_a0;
      local_58 = local_98;
      local_57 = local_97;
      local_55 = local_95;
      local_50 = local_90;
      local_48 = local_88;
      local_40 = local_80;
      local_70 = local_b0;
      uStack_68 = uStack_a8;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,1,0,&local_1e0.AllocatorInstance,1,&local_1e0.ArrayMax);
      ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                (local_1e0.AllocatorInstance.Data,(FPropertyBagPropertyDesc *)&local_78.ObjectPtr,1)
      ;
      EVar7 = UPCGGraph::AddUserParameters
                        ((UPCGGraph *)local_1b8._padding_,&local_1e0,(UPCGGraph *)0x0);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      if (EVar7 == NoOperation) {
        pFVar12 = FInstancedPropertyBag::FindPropertyDescByName(this_00,local_1e8);
        if (pFVar12 != (FPropertyBagPropertyDesc *)0x0) {
          if (local_1b8.GeneratedSettings == (UPCGSettings *)0x0) {
            pFVar13 = GetTypeName<UPCGUserParameterGetSettings>(&local_108);
            if ((pFVar13->Data).ArrayNum != 0) {
              pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar15);
          }
          pUVar8 = Z_Construct_UClass_UPCGUserParameterGetSettings_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((*(int *)((local_1b8.GeneratedSettings)->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((local_1b8.GeneratedSettings)->_padding_ + 0x30) + (longlong)iVar1 * 8
               ) != &pUVar8->_padding_)) {
            pFVar13 = GetTypeName<UPCGUserParameterGetSettings>(&local_f8);
            if ((pFVar13->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
            pFVar13 = GetFullNameForCastLogError<UPCGSettings>
                                (&local_e8,local_1b8.GeneratedSettings);
            if ((pFVar13->Data).ArrayNum != 0) {
              pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar15,pwVar16);
          }
          local_1b8.GeneratedSettings[1]._padding_ = (longlong)pFVar12->Name;
          lVar4 = *(longlong *)&(pFVar12->ID).C;
          pUStack_1c0 = (UPCGGraph *)local_1b8._padding_;
          local_1b8.GeneratedSettings[1]._padding_ = *(longlong *)&pFVar12->ID;
          local_1b8.GeneratedSettings[1]._padding_ = lVar4;
          local_1c8 = local_1e8;
          local_158.PropertyName = local_1e8;
          local_158.Graph = (UPCGGraph *)local_1b8._padding_;
          FPCGMetadataTypesConstantStruct::
          Dispatcher<_UPCGCreateAttributeSetSettings::ConvertNode_::__l27::<lambda_1>_>
                    (&this->AttributeTypes,&local_158);
          goto LAB_149b6974e;
        }
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&local_1e8,&local_148);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3651223243894816404>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCreateAttribute.cpp"
                           ,0x16c,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      else {
        PCGGraphParameter::Helpers::LogGraphParamNamingErrors(local_1e8,EVar7,(FPCGContext *)0x0);
      }
    }
    else {
      pFVar9 = FText::FromName(&local_128,&local_1e8);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_170,L"PCGCreateAttributeElement",
                           L"CouldNotCreateUniqueGraphParameterName",
                           L"Could not create a unique graph parameter with name \'{0}\'. Check if the graph is valid and the name has not reached its maximum."
                          );
      pFVar11 = FTextFormat::FTextFormat(&local_118,pFVar10,Default);
      pFVar9 = FText::Format<FText>(&local_180,pFVar11,pFVar9);
      PCGLog::LogErrorOnGraph(pFVar9,(FPCGContext *)0x0);
      if (local_180.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
      }
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
    }
  }
  bVar5 = false;
LAB_149b697f1:
  FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_1b8);
  return bVar5;
}

// CreateElement @ 149b6a2d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateAttributeSetSettings::CreateElement
          (UPCGCreateAttributeSetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCreateAttributeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateAttributeElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8c840

FString * __thiscall
UPCGCreateAttributeSetSettings::GetAdditionalTitleInformation
          (UPCGCreateAttributeSetSettings *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ & 0x10) != 0) {
    ::FName::ToString(&PCGCreateAttributeConstants::NodeNameAddAttribute,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FPCGMetadataTypesConstantStruct::ToString(&this->AttributeTypes,&local_18);
  FPCGAttributePropertySelector::ToString
            ((FPCGAttributePropertySelector *)&this->OutputTarget,&local_28,false);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b8ffc0

UClass * __cdecl UPCGCreateAttributeSetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateAttributeSetSettings",
               &Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateAttributeSetSettings,0x280,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateAttributeSetSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateAttributeSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateAttributeSetSettings.InnerSingleton;
}

// InputPinProperties @ 149b921c0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateAttributeSetSettings::InputPinProperties
          (UPCGCreateAttributeSetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93db0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateAttributeSetSettings::OutputPinProperties
          (UPCGCreateAttributeSetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  (pFVar5->AllowedTypes).CustomSubtype = (uint)(this->AttributeTypes).Type;
  return __return_storage_ptr__;
}

// PostLoad @ 149b95940

void __thiscall UPCGCreateAttributeSetSettings::PostLoad(UPCGCreateAttributeSetSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGCreateAttributeSetSettings @ 149b983b0

void __cdecl
UPCGCreateAttributeSetSettings::StaticRegisterNativesUPCGCreateAttributeSetSettings(void)

{
  return;
}

