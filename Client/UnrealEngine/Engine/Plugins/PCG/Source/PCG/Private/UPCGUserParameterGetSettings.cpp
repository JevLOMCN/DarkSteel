// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149c3bdd0

UClass * __cdecl UPCGUserParameterGetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton,
               StaticRegisterNativesUPCGUserParameterGetSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton;
}

// UPCGUserParameterGetSettings @ 149c4c880

UPCGUserParameterGetSettings * __thiscall
UPCGUserParameterGetSettings::UPCGUserParameterGetSettings
          (UPCGUserParameterGetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bForceObjectAndStructExtraction = false;
  this->bSanitizeOutputAttributeName = true;
  this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
  (this->PropertyGuid).A = 0;
  (this->PropertyGuid).B = 0;
  (this->PropertyGuid).C = 0;
  (this->PropertyGuid).D = 0;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  return this;
}

// UPCGUserParameterGetSettings @ 149c4c8d0

UPCGUserParameterGetSettings * __thiscall
UPCGUserParameterGetSettings::UPCGUserParameterGetSettings
          (UPCGUserParameterGetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bForceObjectAndStructExtraction = false;
  this->bSanitizeOutputAttributeName = true;
  this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
  (this->PropertyGuid).A = 0;
  (this->PropertyGuid).B = 0;
  (this->PropertyGuid).C = 0;
  (this->PropertyGuid).D = 0;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  return this;
}

// ~UPCGUserParameterGetSettings @ 149c4dec0

void __thiscall
UPCGUserParameterGetSettings::~UPCGUserParameterGetSettings(UPCGUserParameterGetSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGUserParameterGetSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149c5c970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGUserParameterGetSettings::ApplyPreconfiguredSettings
          (UPCGUserParameterGetSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  EPropertyBagAlterationResult EVar6;
  uint uVar7;
  UEnum *this_00;
  EPCGMetadataTypes *pEVar8;
  UPCGNode *this_01;
  UPCGGraph *this_02;
  FInstancedPropertyBag *this_03;
  FPropertyBagPropertyDesc *pFVar9;
  int *piVar10;
  EPCGMetadataTypes EVar11;
  undefined1 auStackY_138 [32];
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_f8;
  TArrayView<__int64_const_,int> local_e8;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (0xe < *(uint *)param_1) {
    return;
  }
  EVar11 = Unknown;
  this_00 = StaticEnum<enum_EPCGMetadataTypes>();
  if (this_00 == (UEnum *)0x0) goto LAB_149c5caf8;
  bVar5 = UEnum::IsValidEnumValue(this_00,(longlong)*(int *)param_1);
  if (!bVar5) {
    return;
  }
  uVar1 = *(uint *)param_1;
  if (((int)uVar1 < 0) || ((this_00->Names).NumValues <= (int)uVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Names.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xb2d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < (int)uVar1) goto LAB_149c5ca10;
LAB_149c5ca20:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd78,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
LAB_149c5ca10:
    if ((this_00->Names).NumValues <= (int)uVar1) goto LAB_149c5ca20;
  }
  piVar10 = &(this_00->Names).NumValues;
  iVar2 = *piVar10;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = 0;
  if ((int)uVar1 < iVar2) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e8.DataPtr = (long64 *)((this_00->Names).TaggedValues & 0xfffffffffffffffe);
  local_e8.ArrayNum = *piVar10;
  if ((local_e8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pEVar8 = (EPCGMetadataTypes *)TArrayView<__int64_const_,int>::operator[](&local_e8,uVar1);
  EVar11 = *pEVar8;
LAB_149c5caf8:
  this_01 = CastChecked<UPCGNode,UObject>((UObject *)this->_padding_);
  if ((this_01 != (UPCGNode *)0x0) &&
     (this_02 = UPCGNode::GetGraph(this_01), this_02 != (UPCGGraph *)0x0)) {
    bVar5 = PCGGraphParameter::Helpers::GenerateUniqueName
                      ((UPCGGraphInterface *)this_02,&this->PropertyName);
    if (bVar5) {
      bVar5 = FInstancedPropertyBag::IsPropertyNameValid(this->PropertyName);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FInstancedPropertyBag::IsPropertyNameValid(PropertyName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                             ,0x128,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      PCGPropertyHelpers::CreatePropertyBagDescWithMetadataType
                ((FPropertyBagPropertyDesc *)&local_b8.ObjectPtr,this->PropertyName,EVar11);
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
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
      ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                (local_f8.AllocatorInstance.Data,(FPropertyBagPropertyDesc *)&local_78.ObjectPtr,1);
      EVar6 = UPCGGraph::AddUserParameters(this_02,&local_f8,(UPCGGraph *)0x0);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      if (EVar6 == NoOperation) {
        this_03 = (FInstancedPropertyBag *)(**(code **)(this_02->_padding_ + 0x2c0))(this_02);
        if (this_03 != (FInstancedPropertyBag *)0x0) {
          pFVar9 = FInstancedPropertyBag::FindPropertyDescByName(this_03,this->PropertyName);
          if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
            if (1 < (byte)LogPCG._0_1_) {
              ::FName::ToString(&this->PropertyName,&local_c8);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
            }
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7478725784002100931>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGUserParameterGet.cpp"
                               ,0x13d,"false");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar1 = (pFVar9->ID).B;
            uVar7 = (pFVar9->ID).C;
            uVar4 = (pFVar9->ID).D;
            (this->PropertyGuid).A = (pFVar9->ID).A;
            (this->PropertyGuid).B = uVar1;
            (this->PropertyGuid).C = uVar7;
            (this->PropertyGuid).D = uVar4;
            this->PropertyName = pFVar9->Name;
          }
        }
      }
      else {
        PCGGraphParameter::Helpers::LogGraphParamNamingErrors
                  (this->PropertyName,EVar6,(FPCGContext *)0x0);
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&this->PropertyName,&local_d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ConvertNode @ 149c5f6b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGUserParameterGetSettings::ConvertNode
          (UPCGUserParameterGetSettings *this,FPCGPreconfiguredInfo *param_1)

{
  int iVar1;
  bool bVar2;
  UPCGNode *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  UPCGCreateAttributeSetSettings *pUVar6;
  byte bVar7;
  UPCGSettings *pUVar8;
  UClass *local_res8;
  FText local_78;
  FString local_68;
  FPCGSingleNodeConverter local_58;
  
  pUVar3 = CastChecked<UPCGNode,UObject>((UObject *)this->_padding_);
  if (param_1->PreconfiguredIndex != 0) {
    if (param_1->PreconfiguredIndex != 1) {
      return false;
    }
    local_res8 = Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FPCGSingleNodeConverter::FPCGSingleNodeConverter
              (&local_58,pUVar3,(TSubclassOf<UPCGSettings>)&local_res8);
    bVar7 = 0;
    if ((~local_58._padding_._1_1_ & 2) == 0) {
      bVar7 = local_58._padding_._1_1_ & 1;
    }
    if (bVar7 != 0) {
      FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_58);
      if ((UPCGGraph *)local_58._padding_ != (UPCGGraph *)0x0) {
        pUVar6 = CastChecked<UPCGCreateAttributeSetSettings,UPCGSettings>
                           (local_58.GeneratedSettings);
        pFVar5 = ::FName::ToString(&this->PropertyName,&local_68);
        FPCGAttributePropertySelector::Update
                  ((FPCGAttributePropertySelector *)&pUVar6->OutputTarget,pFVar5);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        FText::FText(&local_78);
        bVar2 = PCGUserParameterGet::Helpers::Conversion::AssignValue
                          (&pUVar6->AttributeTypes,(UPCGGraph *)local_58._padding_,
                           this->PropertyName,&local_78);
        if (bVar2) {
          FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_58);
          FPCGSingleNodeConverter::Finalize(&local_58);
        }
        else {
          PCGLog::Settings::LogInvalidConversionError
                    (param_1->PreconfiguredIndex,
                     &PCGUserParameterGet::Constants::Conversion::SpecificGetUserParameterNodeTitle,
                     &local_78);
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
      }
      FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_58);
      return local_58._padding_._1_1_ == 0xf;
    }
LAB_149c5f7cc:
    PCGLog::Settings::LogInvalidPreconfigurationWarning
              (param_1->PreconfiguredIndex,
               &PCGUserParameterGet::Constants::Conversion::SpecificGetUserParameterNodeTitle);
    FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_58);
    return false;
  }
  local_res8 = UPCGGenericUserParameterGetSettings::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FPCGSingleNodeConverter::FPCGSingleNodeConverter
            (&local_58,pUVar3,(TSubclassOf<UPCGSettings>)&local_res8);
  bVar7 = 0;
  if ((~local_58._padding_._1_1_ & 2) == 0) {
    bVar7 = local_58._padding_._1_1_ & 1;
  }
  if (bVar7 == 0) goto LAB_149c5f7cc;
  FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_58);
  if (local_58.GeneratedSettings != (UPCGSettings *)0x0) {
    pUVar4 = UPCGGenericUserParameterGetSettings::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)((local_58.GeneratedSettings)->_padding_ + 0x38)) &&
       (pUVar8 = local_58.GeneratedSettings,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)((local_58.GeneratedSettings)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar4->_padding_)) goto LAB_149c5f767;
  }
  pUVar8 = (UPCGSettings *)0x0;
LAB_149c5f767:
  pFVar5 = ::FName::ToString(&this->PropertyName,(FString *)&local_78);
  ::FString::operator=((FString *)(pUVar8 + 1),pFVar5);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_78.TextData.Reference);
  }
  *(FName *)((longlong)&pUVar8[1]._padding_ + 4) = this->PropertyName;
  FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_58);
  FPCGSingleNodeConverter::Finalize(&local_58);
  FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_58);
  return local_58._padding_._1_1_ == 0xf;
}

// CreateElement @ 149c60bc0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGUserParameterGetSettings::CreateElement
          (UPCGUserParameterGetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGUserParameterGetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGUserParameterGetElement__6B_;
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

// GetPrivateStaticClass @ 149c78e70

UClass * __cdecl UPCGUserParameterGetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton,
               StaticRegisterNativesUPCGUserParameterGetSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParameterGetSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149c79f90

bool __thiscall
UPCGUserParameterGetSettings::HasExecutionDependencyPin(UPCGUserParameterGetSettings *this)

{
  return false;
}

// InputPinProperties @ 149c802b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGUserParameterGetSettings::InputPinProperties
          (UPCGUserParameterGetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81850

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGUserParameterGetSettings::OutputPinProperties
          (UPCGUserParameterGetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  UPCGNode *this_00;
  EPCGMetadataTypes EVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  UClass *pUVar7;
  UPCGGraph *pUVar8;
  FInstancedPropertyBag *this_01;
  FPropertyBagPropertyDesc *pFVar9;
  FProperty *pFVar10;
  FPCGDataTypeIdentifier local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Param);
  pFVar6 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),&this->PropertyName,
                      pFVar5,true,true,pFVar4);
  if (this->PropertyName == (FName)0x0) {
    return __return_storage_ptr__;
  }
  this_00 = (UPCGNode *)this->_padding_;
  if (this_00 == (UPCGNode *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar7 = Z_Construct_UClass_UPCGNode_NoRegister();
  iVar3 = (int)pUVar7->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar3) {
    return __return_storage_ptr__;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar7->_padding_) {
    return __return_storage_ptr__;
  }
  pUVar8 = UPCGNode::GetGraph(this_00);
  if (pUVar8 == (UPCGGraph *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (FInstancedPropertyBag *)(**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8);
  if (this_01 == (FInstancedPropertyBag *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName(this_01,this->PropertyName);
  if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar10 = pFVar9->CachedProperty;
  if (pFVar10 == (FProperty *)0x0) {
    return __return_storage_ptr__;
  }
  if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x15 & 1) == 0) {
    if ((*(ulonglong *)(pFVar10->_padding_ + 0x18) >> 0x2f & 1) == 0) goto LAB_149c8198b;
    pFVar10 = (FProperty *)pFVar10[1]._padding_;
  }
  else {
    pFVar10 = (FProperty *)pFVar10[1]._padding_;
  }
  if (pFVar10 == (FProperty *)0x0) {
    return __return_storage_ptr__;
  }
LAB_149c8198b:
  EVar2 = PCGAttributeAccessorHelpers::GetMetadataTypeForProperty(pFVar10);
  (pFVar6->AllowedTypes).CustomSubtype = (uint)EVar2;
  return __return_storage_ptr__;
}

// PostLoad @ 149c81ca0

void __thiscall UPCGUserParameterGetSettings::PostLoad(UPCGUserParameterGetSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// RequiresDataFromPreTask @ 149c857c0

bool __thiscall
UPCGUserParameterGetSettings::RequiresDataFromPreTask(UPCGUserParameterGetSettings *this)

{
  return true;
}

// StaticRegisterNativesUPCGUserParameterGetSettings @ 149c920d0

void __cdecl UPCGUserParameterGetSettings::StaticRegisterNativesUPCGUserParameterGetSettings(void)

{
  return;
}

// UpdatePropertyName @ 149c93660

void __thiscall
UPCGUserParameterGetSettings::UpdatePropertyName(UPCGUserParameterGetSettings *this,FName param_1)

{
  if (this->PropertyName != param_1) {
    this->PropertyName = param_1;
  }
  return;
}

