// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149a151f0

UClass * __cdecl UPCGAttributeSelectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeSelectSettings",
               &Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeSelectSettings,0x140,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeSelectSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeSelectSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton;
}

// UPCGAttributeSelectSettings @ 149ad12a0

UPCGAttributeSelectSettings * __thiscall
UPCGAttributeSelectSettings::UPCGAttributeSelectSettings
          (UPCGAttributeSelectSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeSelectSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Operation = Min;
  this->Axis = X;
  (this->CustomAxis).field0_0x0._s_0.X = 0.0;
  (this->CustomAxis).field0_0x0._s_0.Y = 0.0;
  (this->CustomAxis).field0_0x0._s_0.Z = 0.0;
  (this->CustomAxis).field0_0x0._s_0.W = 0.0;
  return this;
}

// UPCGAttributeSelectSettings @ 149ad1300

UPCGAttributeSelectSettings * __thiscall
UPCGAttributeSelectSettings::UPCGAttributeSelectSettings
          (UPCGAttributeSelectSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeSelectSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Operation = Min;
  this->Axis = X;
  (this->CustomAxis).field0_0x0._s_0.X = 0.0;
  (this->CustomAxis).field0_0x0._s_0.Y = 0.0;
  (this->CustomAxis).field0_0x0._s_0.Z = 0.0;
  (this->CustomAxis).field0_0x0._s_0.W = 0.0;
  return this;
}

// ~UPCGAttributeSelectSettings @ 149ad3490

void __thiscall
UPCGAttributeSelectSettings::~UPCGAttributeSelectSettings(UPCGAttributeSelectSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAttributeSelectSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc530

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeSelectSettings::CreateElement
          (UPCGAttributeSelectSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGAttributeSelectElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeSelectElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14410

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGAttributeSelectSettings::GetAdditionalTitleInformation
          (UPCGAttributeSelectSettings *this,FString *__return_storage_ptr__)

{
  UEnum *this_00;
  UEnum *this_01;
  UPackage *pUVar1;
  FName *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  FName local_res18;
  FName local_res20;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  if (Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeSelectOperation,(UObject *)pUVar1,
                       L"EPCGAttributeSelectOperation");
  }
  this_00 = Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton;
  if (Z_Registration_Info_UEnum_EPCGAttributeSelectOperation.OuterSingleton == (UEnum *)0x0) {
LAB_149b14743:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    if (Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton == (UEnum *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributeSelectAxis,(UObject *)pUVar1,
                         L"EPCGAttributeSelectAxis");
      if (Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton == (UEnum *)0x0)
      goto LAB_149b14743;
    }
    this_01 = Z_Registration_Info_UEnum_EPCGAttributeSelectAxis.OuterSingleton;
    UEnum::GetDisplayNameTextByValue(this_00,&local_88,(longlong)(int)this->Operation);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    if (this->Axis == CustomAxis) {
      ::FString::PrintfImpl((FString *)&local_98,L"(%.2f, %.2f, %.2f, %.2f)");
      if ((ITextData *)local_a8.Data.AllocatorInstance.Data != (ITextData *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_98.TextData.Reference;
      local_a8.Data.ArrayMax = local_98._12_4_;
      local_a8.Data.ArrayNum = local_98.Flags;
    }
    else {
      pFVar3 = UEnum::GetDisplayNameTextByValue(this_01,&local_98,(longlong)(int)this->Axis);
      pFVar8 = FText::ToString(pFVar3);
      ::FString::operator=(&local_a8,pFVar8);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    FPCGAttributePropertySelector::GetName((FPCGAttributePropertySelector *)&this->InputSource);
    if (local_res20 == (FName)0x0) {
      pFVar2 = ::FName::FName(&local_res18,L"LastAttribute");
      local_res20 = *pFVar2;
    }
    if ((local_res20 == this->OutputAttributeName) || (this->OutputAttributeName == (FName)0x0)) {
      pFVar3 = FText::FromString(&local_38,&local_a8);
      local_98.TextData.Reference = local_88.TextData.Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 8))
                  (local_88.TextData.Reference,&local_res18);
      }
      local_98.Flags = local_88.Flags;
      pFVar4 = FText::FromName(&local_48,&local_res20);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"PCGAttributeSelectElement",L"SelectWithOperationAndAxis",
                          L"Select {0}: {1} on {2}");
      pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar5,Default);
      pFVar3 = FText::Format<FText,FText,FText>(&local_68,pFVar7,pFVar4,&local_98,pFVar3);
      pFVar8 = FText::ToString(pFVar3);
      ::FString::FString(__return_storage_ptr__,pFVar8);
      TVar9.Reference = local_78.TextData.Reference;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        TVar9.Reference = local_78.TextData.Reference;
      }
    }
    else {
      pFVar3 = FText::FromString(&local_28,&local_a8);
      local_98.TextData.Reference = local_88.TextData.Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 8))
                  (local_88.TextData.Reference,&local_res18);
      }
      local_98.Flags = local_88.Flags;
      pFVar4 = FText::FromName(&local_58,&this->OutputAttributeName);
      pFVar5 = FText::FromName(&local_48,&local_res20);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"PCGAttributeSelectElement",
                          L"SelectInputToOutputWithOperationAndAxis",
                          L"Select {0} to {1}: {2} on {3}");
      pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar6,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>
                         (&local_78,pFVar7,pFVar5,pFVar4,&local_98,pFVar3);
      pFVar8 = FText::ToString(pFVar3);
      ::FString::FString(__return_storage_ptr__,pFVar8);
      TVar9.Reference = local_68.TextData.Reference;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        TVar9.Reference = local_68.TextData.Reference;
      }
    }
    if (TVar9.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar9.Reference + 0x10))();
    }
    if ((ITextData *)local_a8.Data.AllocatorInstance.Data != (ITextData *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b17970

UClass * __cdecl UPCGAttributeSelectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeSelectSettings",
               &Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeSelectSettings,0x140,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeSelectSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeSelectSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeSelectSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c340

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeSelectSettings::InputPinProperties
          (UPCGAttributeSelectSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,false,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20140

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeSelectSettings::OutputPinProperties
          (UPCGAttributeSelectSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
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
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGAttributeSelectConstants::OutputAttributeLabel,pFVar4,true,true,pFVar3);
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGAttributeSelectConstants::OutputPointLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b20b80

void __thiscall UPCGAttributeSelectSettings::PostLoad(UPCGAttributeSelectSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGAttributeSelectSettings @ 149b2cf10

void __cdecl UPCGAttributeSelectSettings::StaticRegisterNativesUPCGAttributeSelectSettings(void)

{
  return;
}

