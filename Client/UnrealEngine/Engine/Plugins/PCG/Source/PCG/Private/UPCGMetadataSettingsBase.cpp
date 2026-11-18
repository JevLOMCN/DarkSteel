// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 43

// StaticClass @ 149903f10

UClass * __cdecl UPCGMetadataSettingsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataSettingsBase",
               &Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton,
               StaticRegisterNativesUPCGMetadataSettingsBase,0x178,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataSettingsBase>,
               InternalVTableHelperCtorCaller<UPCGMetadataSettingsBase>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton;
}

// UPCGMetadataSettingsBase @ 1499c4510

UPCGMetadataSettingsBase * __thiscall
UPCGMetadataSettingsBase::UPCGMetadataSettingsBase
          (UPCGMetadataSettingsBase *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->OutputDataFromPin = PCGMetadataSettingsBaseConstants::DefaultOutputDataFromPinName;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements = 0;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x34 = 0;
  (this->DefaultValues).ActivatedProperties.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DefaultValues).ActivatedProperties.HashSize = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultValues).PropertyBag.Value);
  return this;
}

// UPCGMetadataSettingsBase @ 1499c45b0

UPCGMetadataSettingsBase * __thiscall
UPCGMetadataSettingsBase::UPCGMetadataSettingsBase
          (UPCGMetadataSettingsBase *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->OutputDataFromPin = PCGMetadataSettingsBaseConstants::DefaultOutputDataFromPinName;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements = 0;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DefaultValues).ActivatedProperties.Elements.field_0x34 = 0;
  (this->DefaultValues).ActivatedProperties.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DefaultValues).ActivatedProperties.HashSize = 0;
  FInstancedStruct::FInstancedStruct(&(this->DefaultValues).PropertyBag.Value);
  return this;
}

// ~UPCGMetadataSettingsBase @ 1499c6ca0

void __thiscall UPCGMetadataSettingsBase::~UPCGMetadataSettingsBase(UPCGMetadataSettingsBase *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGSettingsDefaultValueProvider__;
  FInstancedStruct::Reset(&(this->DefaultValues).PropertyBag.Value);
  (this->DefaultValues).ActivatedProperties.HashSize = 0;
  FVar1 = (this->DefaultValues).ActivatedProperties.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultValues);
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar2 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7IPCGSettingsDefaultValueProvider__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// AddDefaultValuesToCrc @ 1499d32d0

void __thiscall
UPCGMetadataSettingsBase::AddDefaultValuesToCrc
          (UPCGMetadataSettingsBase *this,FArchiveCrc32 *param_1)

{
  FInstancedPropertyBag::Serialize(&(this->DefaultValues).PropertyBag,(FArchive *)param_1);
  return;
}

// CanCullTaskIfUnwired @ 1499da3d0

bool __thiscall UPCGMetadataSettingsBase::CanCullTaskIfUnwired(UPCGMetadataSettingsBase *this)

{
  return false;
}

// CreateDefaultValueParam @ 1499db000

UPCGParamData * __thiscall
UPCGMetadataSettingsBase::CreateDefaultValueParam(UPCGMetadataSettingsBase *this,uint param_1)

{
  return (UPCGParamData *)0x0;
}

// CreateDefaultValueParam @ 1499db010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
UPCGMetadataSettingsBase::CreateDefaultValueParam
          (UPCGMetadataSettingsBase *this,FPCGContext *param_1,uint param_2)

{
  return (UPCGParamData *)0x0;
}

// CreateDefaultValueParamData @ 1499db020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
UPCGMetadataSettingsBase::CreateDefaultValueParamData
          (UPCGMetadataSettingsBase *this,FPCGContext *param_1,FName param_2)

{
  char cVar1;
  UPCGParamData *pUVar2;
  UPCGParamData *pUVar3;
  FName local_res8;
  
  GetInputPinIndex(this,param_2);
  PCGMetadataBase::Helpers::GetDefaultValuePropertyName((int)&local_res8);
  pUVar2 = FPCGDefaultValueContainer::CreateParamData(&this->DefaultValues,param_1,local_res8);
  if (pUVar2 == (UPCGParamData *)0x0) {
    pUVar3 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGParamData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    cVar1 = (**(code **)(this->_padding_ + 0x38))(&this->_padding_,param_2,pUVar3->_padding_);
    if (cVar1 != '\0') {
      pUVar2 = pUVar3;
    }
  }
  return pUVar2;
}

// DefaultValuesAreEnabled @ 1499df570

bool __thiscall UPCGMetadataSettingsBase::DefaultValuesAreEnabled(UPCGMetadataSettingsBase *this)

{
  return true;
}

// DoesInputSupportDefaultValue @ 1499e1d80

bool __thiscall
UPCGMetadataSettingsBase::DoesInputSupportDefaultValue(UPCGMetadataSettingsBase *this,uint param_1)

{
  return false;
}

// DoesPinSupportPassThrough @ 1499e1d90

bool __thiscall
UPCGMetadataSettingsBase::DoesPinSupportPassThrough(UPCGMetadataSettingsBase *this,UPCGPin *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (UPCGPin *)0x0) {
    bVar1 = UPCGPin::IsOutputPin(param_1);
    if (!bVar1) {
      uVar2 = GetInputPinIndex(this,(param_1->Properties).Label);
      uVar3 = GetInputPinToForward(this);
      if (uVar2 == uVar3) {
        return true;
      }
    }
  }
  return false;
}

// GetAllOutputTypes @ 1499f4260

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataSettingsBase::GetAllOutputTypes
          (UPCGMetadataSettingsBase *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 1499f49b0

FPCGDataTypeIdentifier * __thiscall
UPCGMetadataSettingsBase::GetCurrentPinTypesID
          (UPCGMetadataSettingsBase *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FPCGDataTypeIdentifier *pFVar5;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataOpElementBase.cpp"
                       ,0xce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar5;
    }
  }
  iVar3 = (**(code **)(this->_padding_ + 0x500))(this);
  bVar2 = UPCGPin::IsOutputPin(param_1);
  if ((bVar2) && (iVar3 != 0)) {
    uVar4 = GetInputPinToForward(this);
    GetInputPinTypeID(this,__return_storage_ptr__,uVar4);
  }
  else {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetInputPinIndex @ 1499f7700

uint __thiscall
UPCGMetadataSettingsBase::GetInputPinIndex(UPCGMetadataSettingsBase *this,FName param_1)

{
  int iVar1;
  uint uVar2;
  FName *pFVar3;
  uint uVar4;
  undefined1 local_res10 [8];
  
  if (param_1 != PCGMetadataSettingsBaseConstants::DefaultOutputDataFromPinName) {
    uVar4 = 0;
    iVar1 = (**(code **)(this->_padding_ + 0x500))();
    if (iVar1 != 0) {
      do {
        pFVar3 = (FName *)(**(code **)(this->_padding_ + 0x4f8))(this,local_res10,uVar4);
        if (param_1 == *pFVar3) {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        uVar2 = (**(code **)(this->_padding_ + 0x500))(this);
      } while (uVar4 < uVar2);
    }
  }
  return 0xffffffff;
}

// GetInputPinLabel @ 1499f7d30

FName __thiscall
UPCGMetadataSettingsBase::GetInputPinLabel(UPCGMetadataSettingsBase *this,uint param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultInputLabel;
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  return FVar1;
}

// GetInputPinToForward @ 1499f7d50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

uint __thiscall UPCGMetadataSettingsBase::GetInputPinToForward(UPCGMetadataSettingsBase *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FPCGDataTypeIdentifier *pFVar5;
  uint uVar6;
  undefined4 local_res8 [2];
  FPCGDataTypeIdentifier local_68;
  FPCGDataTypeIdentifier local_50;
  FPCGDataTypeIdentifier local_38;
  
  bVar1 = false;
  local_res8[0] = 0;
  uVar3 = (**(code **)(this->_padding_ + 0x500))();
  if (uVar3 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = GetInputPinIndex(this,this->OutputDataFromPin);
    if (uVar4 == 0xffffffff) {
      PCGSettingsHelpers::FPinTypeScopeHelper::FPinTypeScopeHelper
                ((FPinTypeScopeHelper *)local_res8);
      uVar6 = 0;
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          GetInputPinTypeID(this,&local_68,uVar6);
          pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Any);
          bVar2 = FPCGDataTypeIdentifier::IsSameType(&local_68,pFVar5);
          if (bVar2) {
LAB_1499f7e1c:
            bVar2 = false;
          }
          else {
            bVar1 = true;
            pFVar5 = FPCGDataTypeIdentifier::operator&(&local_68,&local_50,Spatial);
            bVar2 = FPCGDataTypeIdentifier::IsValid(pFVar5);
            if (!bVar2) goto LAB_1499f7e1c;
            bVar2 = true;
          }
          if ((bVar1) &&
             (bVar1 = false, local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_50.Ids.AllocatorInstance.Data);
          }
          if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Ids.AllocatorInstance.Data);
          }
          if (bVar2) {
            uVar4 = uVar6;
            if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Ids.AllocatorInstance.Data);
            }
            break;
          }
          if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Ids.AllocatorInstance.Data);
          }
          uVar6 = uVar6 + 1;
          uVar4 = 0;
        } while (uVar6 < uVar3);
      }
      PCGSettingsHelpers::FPinTypeScopeHelper::~FPinTypeScopeHelper
                ((FPinTypeScopeHelper *)local_res8);
      return uVar4;
    }
  }
  return uVar4;
}

// GetInputPinType @ 1499f7ed0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
UPCGMetadataSettingsBase::GetInputPinType(UPCGMetadataSettingsBase *this,uint param_1)

{
  EPCGDataType EVar1;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  this_00 = GetInputPinTypeID(this,&local_28,param_1);
  EVar1 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(this_00);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return EVar1;
}

// GetInputPinTypeID @ 1499f7f10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGMetadataSettingsBase::GetInputPinTypeID
          (UPCGMetadataSettingsBase *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  char cVar4;
  FPCGDataTypeIdentifier *pFVar5;
  ForAnyElementType this_00;
  int iVar6;
  int iVar7;
  undefined4 in_register_00000084;
  undefined1 local_res8 [8];
  FName local_res20;
  FPCGDataTypeIdentifier local_78;
  FPCGDataTypeIdentifier local_60;
  FPCGDataTypeIdentifier local_48;
  
  (**(code **)(this->_padding_ + 0x4f8))(this,&local_res20,CONCAT44(in_register_00000084,param_1));
  UPCGSettings::GetTypeUnionIDOfIncidentEdges((UPCGSettings *)this,&local_78,&local_res20);
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_60,None);
  bVar3 = FPCGDataTypeIdentifier::IsSameType(&local_78,pFVar5);
  if (local_60.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Ids.AllocatorInstance.Data);
  }
  if ((bVar3) &&
     (cVar4 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_,local_res20), cVar4 != '\0')) {
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Param);
  }
  else {
    iVar6 = local_78.Ids.ArrayNum;
    if (iVar6 != 0) {
      pFVar1 = local_78.Ids.AllocatorInstance.Data + (longlong)iVar6 * 8;
      this_00.Data = local_78.Ids.AllocatorInstance.Data;
      while( true ) {
        iVar7 = local_78.Ids.ArrayNum;
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
          iVar7 = local_78.Ids.ArrayNum;
        }
        FVar2.Data = local_78.Ids.AllocatorInstance.Data;
        if (this_00.Data == pFVar1) {
          local_60.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_60.Ids.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_60.Ids.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,0,(ForAnyElementType *)&local_60,iVar7,&local_60.Ids.ArrayMax);
            ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                      (local_60.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar2.Data,iVar7);
          }
          local_60.CustomSubtype = local_78.CustomSubtype;
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&local_60);
          local_48.Ids.AllocatorInstance.Data = local_60.Ids.AllocatorInstance.Data;
          goto LAB_1499f8071;
        }
        bVar3 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this_00.Data);
        if (!bVar3) break;
        this_00.Data = this_00.Data + 8;
      }
    }
    pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Any);
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar5);
LAB_1499f8071:
    if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Ids.AllocatorInstance.Data);
    }
  }
  if (local_78.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInputSource @ 1499f85b0

FPCGAttributePropertyInputSelector * __thiscall
UPCGMetadataSettingsBase::GetInputSource
          (UPCGMetadataSettingsBase *this,FPCGAttributePropertyInputSelector *__return_storage_ptr__
          ,uint param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\Metadata\\PCGMetadataOpElementBase.h"
             ,0x9e,L"Pure virtual not implemented (%s)");
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOperandNum @ 1499f9d40

uint __thiscall UPCGMetadataSettingsBase::GetOperandNum(UPCGMetadataSettingsBase *this)

{
  return 1;
}

// GetOutputAttributeName @ 1499fa080

FName __thiscall
UPCGMetadataSettingsBase::GetOutputAttributeName
          (UPCGMetadataSettingsBase *this,FName param_1,uint param_2)

{
  undefined4 in_register_00000084;
  
  *(ulonglong *)param_1 = CONCAT44(in_register_00000084,param_2);
  return param_1;
}

// GetOutputDataFromPinOptions @ 1499fa090

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataSettingsBase::GetOutputDataFromPinOptions
          (UPCGMetadataSettingsBase *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  
  uVar6 = (**(code **)(this->_padding_ + 0x500))();
  piVar1 = &__return_storage_ptr__->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar11 = uVar6 + 1;
  if ((int)uVar11 < 1) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar11,&__return_storage_ptr__->AllocatorInstance,piVar1,
                       &__return_storage_ptr__->ArrayMax);
    memset((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
           (longlong)(int)uVar11 << 3);
  }
  FVar4 = PCGMetadataSettingsBaseConstants::DefaultOutputDataFromPinName;
  if ((*piVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar9;
  }
  *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = FVar4;
  if (uVar6 != 0) {
    uVar11 = 1;
    do {
      puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x4f8))(this,local_res8,uVar11 - 1);
      uVar2 = *puVar10;
      uVar8 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar11 * 8)
           = uVar2;
      bVar5 = uVar11 < uVar6;
      uVar11 = uVar11 + 1;
    } while (bVar5);
  }
  return __return_storage_ptr__;
}

// GetOutputPinLabel @ 1499fa3d0

FName __thiscall
UPCGMetadataSettingsBase::GetOutputPinLabel(UPCGMetadataSettingsBase *this,uint param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  *(FName *)CONCAT44(in_register_00000014,param_1) = PCGPinConstants::DefaultOutputLabel;
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  return FVar1;
}

// GetOutputType @ 1499fa640

ushort __thiscall
UPCGMetadataSettingsBase::GetOutputType(UPCGMetadataSettingsBase *this,ushort param_1)

{
  return param_1;
}

// GetPinDefaultValueType @ 1499fa670

EPCGMetadataTypes __thiscall
UPCGMetadataSettingsBase::GetPinDefaultValueType(UPCGMetadataSettingsBase *this,FName param_1)

{
  EPCGMetadataTypes EVar1;
  FProperty *pFVar2;
  FName local_res8;
  
  GetInputPinIndex((UPCGMetadataSettingsBase *)&this[-1]._padding_,param_1);
  PCGMetadataBase::Helpers::GetDefaultValuePropertyName((int)&local_res8);
  if (local_res8 == (FName)0x0) {
    return Unknown;
  }
  pFVar2 = FPCGDefaultValueContainer::FindProperty
                     ((FPCGDefaultValueContainer *)&this->_padding_,local_res8);
  if (pFVar2 != (FProperty *)0x0) {
    EVar1 = FPCGDefaultValueContainer::GetCurrentPropertyType
                      ((FPCGDefaultValueContainer *)&this->_padding_,local_res8);
    return EVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001499fa6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x40))(this,param_1);
  return EVar1;
}

// GetPinInitialDefaultValueType @ 1499fa8a0

EPCGMetadataTypes __thiscall
UPCGMetadataSettingsBase::GetPinInitialDefaultValueType
          (UPCGMetadataSettingsBase *this,FName param_1)

{
  return Unknown;
}

// GetPrivateStaticClass @ 1499fbc90

UClass * __cdecl UPCGMetadataSettingsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataSettingsBase",
               &Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton,
               StaticRegisterNativesUPCGMetadataSettingsBase,0x178,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataSettingsBase>,
               InternalVTableHelperCtorCaller<UPCGMetadataSettingsBase>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataSettingsBase.InnerSingleton;
}

// GetResultNum @ 1499fce00

uint __thiscall UPCGMetadataSettingsBase::GetResultNum(UPCGMetadataSettingsBase *this)

{
  return 1;
}

// HasDifferentOutputTypes @ 1499fe460

bool __thiscall UPCGMetadataSettingsBase::HasDifferentOutputTypes(UPCGMetadataSettingsBase *this)

{
  return false;
}

// HasDynamicPins @ 1499fe4d0

bool __thiscall UPCGMetadataSettingsBase::HasDynamicPins(UPCGMetadataSettingsBase *this)

{
  return true;
}

// HasFlippedTitleLines @ 1499fe550

bool __thiscall UPCGMetadataSettingsBase::HasFlippedTitleLines(UPCGMetadataSettingsBase *this)

{
  return true;
}

// InputPinProperties @ 1499ff2e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataSettingsBase::InputPinProperties
          (UPCGMetadataSettingsBase *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  uint uVar7;
  FName local_res8;
  FPCGDataTypeIdentifier local_38;
  
  uVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (**(code **)(this->_padding_ + 0x500))();
  if (iVar2 != 0) {
    do {
      (**(code **)(this->_padding_ + 0x4f8))(this,&local_res8,uVar7);
      if (local_res8 != (FName)0x0) {
        iVar2 = __return_storage_ptr__->ArrayNum;
        if (iVar2 == __return_storage_ptr__->ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar2 + 1;
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar4 = FText::GetEmpty();
        pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Any);
        pFVar6 = FPCGPinProperties::FPCGPinProperties
                           ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,
                            pFVar5,true,true,pFVar4);
        pFVar6->PinStatus = Required;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (**(code **)(this->_padding_ + 0x500))(this);
    } while (uVar7 < uVar3);
  }
  return __return_storage_ptr__;
}

// IsInputPinRequiredByExecution @ 149a00880

bool __thiscall
UPCGMetadataSettingsBase::IsInputPinRequiredByExecution
          (UPCGMetadataSettingsBase *this,UPCGPin *param_1)

{
  bool bVar1;
  char cVar2;
  
  if (param_1 == (UPCGPin *)0x0) {
    return false;
  }
  bVar1 = UPCGPin::IsConnected(param_1);
  if (((!bVar1) &&
      (cVar2 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_,(param_1->Properties).Label),
      cVar2 != '\0')) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_,(param_1->Properties).Label),
     cVar2 != '\0')) {
    return false;
  }
  return true;
}

// IsPinDefaultValueActivated @ 149a00910

bool __thiscall
UPCGMetadataSettingsBase::IsPinDefaultValueActivated(UPCGMetadataSettingsBase *this,FName param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  FName local_res8;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar1 != '\0') {
    uVar3 = GetInputPinIndex((UPCGMetadataSettingsBase *)&this[-1]._padding_,param_1);
    if (uVar3 != 0xffffffff) {
      PCGMetadataBase::Helpers::GetDefaultValuePropertyName((int)&local_res8);
      bVar2 = FPCGDefaultValueContainer::IsPropertyActivated
                        ((FPCGDefaultValueContainer *)&this->_padding_,local_res8);
      return bVar2;
    }
  }
  return false;
}

// IsPinDefaultValueEnabled @ 149a009a0

bool __thiscall
UPCGMetadataSettingsBase::IsPinDefaultValueEnabled(UPCGMetadataSettingsBase *this,FName param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x10))();
  if ((cVar1 != '\0') &&
     (uVar3 = GetInputPinIndex((UPCGMetadataSettingsBase *)&this[-1]._padding_,param_1),
     uVar3 != 0xffffffff)) {
    uVar2 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
    switch(uVar2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      return true;
    }
  }
  return false;
}

// IsPinDefaultValueMetadataTypeValid @ 149a00b00

bool __thiscall
UPCGMetadataSettingsBase::IsPinDefaultValueMetadataTypeValid
          (UPCGMetadataSettingsBase *this,FName param_1,EPCGMetadataTypes param_2)

{
  longlong *this_00;
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 local_res18 [16];
  
  this_00 = &this[-1]._padding_;
  pcVar1 = *(code **)(*this_00 + 0x518);
  uVar3 = GetInputPinIndex((UPCGMetadataSettingsBase *)this_00,param_1);
  uVar2 = (*pcVar1)(this_00,param_2,uVar3,local_res18);
  return (bool)uVar2;
}

// IsSupportedInputType @ 149a01230

bool __thiscall
UPCGMetadataSettingsBase::IsSupportedInputType
          (UPCGMetadataSettingsBase *this,ushort param_1,uint param_2,bool *param_3)

{
  return false;
}

// OutputPinProperties @ 149a03710

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadataSettingsBase::OutputPinProperties
          (UPCGMetadataSettingsBase *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  uint uVar6;
  FName local_res8;
  FPCGDataTypeIdentifier local_38;
  
  uVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = (**(code **)(this->_padding_ + 0x510))();
  if (iVar2 != 0) {
    do {
      (**(code **)(this->_padding_ + 0x508))(this,&local_res8,uVar6);
      if (local_res8 != (FName)0x0) {
        iVar2 = __return_storage_ptr__->ArrayNum;
        if (iVar2 == __return_storage_ptr__->ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar2 + 1;
        pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar4 = FText::GetEmpty();
        pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Any);
        FPCGPinProperties::FPCGPinProperties
                  ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar5,true,
                   true,pFVar4);
      }
      uVar6 = uVar6 + 1;
      uVar3 = (**(code **)(this->_padding_ + 0x510))(this);
    } while (uVar6 < uVar3);
  }
  return __return_storage_ptr__;
}

// PostLoad @ 149a04c40

void __thiscall UPCGMetadataSettingsBase::PostLoad(UPCGMetadataSettingsBase *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMetadataSettingsBase @ 149a100d0

void __cdecl UPCGMetadataSettingsBase::StaticRegisterNativesUPCGMetadataSettingsBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGMetadataSettingsBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 149a14330

UObject * __thiscall UPCGMetadataSettingsBase::_getUObject(UPCGMetadataSettingsBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetOutputDataFromPinOptions @ 149a14ae0

void __cdecl
UPCGMetadataSettingsBase::execGetOutputDataFromPinOptions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetOutputDataFromPinOptions((UPCGMetadataSettingsBase *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

