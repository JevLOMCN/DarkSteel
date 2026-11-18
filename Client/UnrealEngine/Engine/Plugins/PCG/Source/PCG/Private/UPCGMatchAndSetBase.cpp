// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149ce6860

UClass * __cdecl UPCGMatchAndSetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetBase",
               &Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetBase>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton;
}

// UPCGMatchAndSetBase @ 149d34480

UPCGMatchAndSetBase * __thiscall
UPCGMatchAndSetBase::UPCGMatchAndSetBase(UPCGMatchAndSetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Type = Double;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetBase__6B_;
  return this;
}

// UPCGMatchAndSetBase @ 149d344b0

UPCGMatchAndSetBase * __thiscall
UPCGMatchAndSetBase::UPCGMatchAndSetBase(UPCGMatchAndSetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Type = Double;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetBase__6B_;
  return this;
}

// ~UPCGMatchAndSetBase @ 149d35070

void __thiscall UPCGMatchAndSetBase::~UPCGMatchAndSetBase(UPCGMatchAndSetBase *this)

{
  this->_padding_ = (longlong)&___7UPCGMatchAndSetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateAttributeIfNeeded @ 149d45690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UPCGMatchAndSetBase::CreateAttributeIfNeeded
          (UPCGMatchAndSetBase *this,FPCGContext *param_1,FPCGAttributePropertySelector *param_2,
          FPCGMetadataTypesConstantStruct *param_3,UPCGPointData *param_4,
          UPCGPointMatchAndSetSettings *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  UPCGPointData *pUVar3;
  FPCGMetadataDomainID FVar4;
  bool bVar5;
  undefined1 uVar6;
  FPCGMetadataAttributeBase *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  <lambda_1> local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FText local_e8;
  UPCGPointData *local_d8;
  FPCGMetadataDomainID FStack_d0;
  FPCGAttributeIdentifier local_b8;
  UPCGPointData *local_98;
  FPCGMetadataDomainID FStack_90;
  FPCGAttributeIdentifier local_78;
  FText local_58;
  FTextFormat local_48;
  
  pUVar3 = param_4;
  plVar1 = &param_4->_padding_;
  if ((param_4 == (UPCGPointData *)0x0) || (*plVar1 == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutPointData && OutPointData->Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetBase.cpp"
                       ,0x31,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if ((*plVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutPointData->Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetBase.cpp"
                           ,0x33,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  if (param_2->Selection == Attribute) {
    FPCGAttributePropertySelector::GetName(param_2);
    FStack_d0 = PCGMetadataDomainID::Default;
    FVar4 = FStack_d0;
    local_d8 = param_4;
    FStack_d0._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_b8.Name = (FName)param_4;
    local_b8.MetadataDomain.Flag = FStack_d0.Flag;
    local_b8.MetadataDomain._1_3_ = FStack_d0._1_3_;
    local_b8.MetadataDomain.CustomFlag = FStack_d0.CustomFlag;
    local_b8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_d0 = FVar4;
    bVar5 = UPCGMetadata::HasAttribute((UPCGMetadata *)*plVar1,&local_b8);
    if (bVar5) {
      FStack_90 = PCGMetadataDomainID::Default;
      FVar4 = FStack_90;
      local_98 = param_4;
      FStack_90._0_8_ = PCGMetadataDomainID::Default._0_8_;
      local_78.Name = (FName)param_4;
      local_78.MetadataDomain.Flag = FStack_90.Flag;
      local_78.MetadataDomain._1_3_ = FStack_90._1_3_;
      local_78.MetadataDomain.CustomFlag = FStack_90.CustomFlag;
      local_78.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
      FStack_90 = FVar4;
      pFVar7 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)*plVar1,&local_78);
      if (pFVar7->TypeId == (ushort)param_5->SetTargetType) {
        return true;
      }
    }
    local_128.DestinationAttribute = (FName *)&param_4;
    local_128.OutPointData = pUVar3;
    bVar5 = FPCGMetadataTypesConstantStruct::
            Dispatcher<_UPCGMatchAndSetBase::CreateAttributeIfNeeded_::__l22::<lambda_1>_>
                      (param_3,&local_128);
    if (!bVar5) {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar8 = FText::FromName(&local_58,(FName *)&param_4);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_e8,L"PCGMatchAndSetBase",L"AttributeCreationFailed",
                            L"Unable to create attribute \'{0}\' on Point data");
        pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
        pFVar8 = FText::Format<FText>(&local_f8,pFVar10,pFVar8);
        FText::ToString(pFVar8);
        bVar5 = param_1 != (FPCGContext *)0x0;
        if (bVar5) {
          FPCGContext::GetTaskName(param_1,&local_108);
          FPCGContext::GetExecutionSourceName(param_1,&local_118);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar5) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if ((bVar5) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        }
      }
      return false;
    }
  }
  return true;
}

// GetPrivateStaticClass @ 149d54710

UClass * __cdecl UPCGMatchAndSetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetBase",
               &Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetBase>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetBase.InnerSingleton;
}

// MatchAndSet @ 149d58310

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

void __thiscall
UPCGMatchAndSetBase::MatchAndSet
          (UPCGMatchAndSetBase *this,FPCGContext *param_1,UPCGPointMatchAndSetSettings *param_2,
          UPCGPointData *param_3,UPCGPointData *param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_2e8 [32];
  UPCGPointData *local_2c8;
  FPCGContext local_2b8;
  UPCGPointMatchAndSetSettings *local_60;
  UPCGPointData *local_58;
  UPCGPointData *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGMatchAndSetBase_MatchAndSet);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FPCGContext::FPCGContext(&local_2b8);
    FPCGContext::operator=(&local_2b8,param_1);
    local_50 = param_4;
    local_60 = param_2;
    local_58 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_2b8);
    FPCGContext::operator=(param_1,&local_2b8);
    FPCGContext::~FPCGContext(&local_2b8);
  }
  else {
    local_2c8 = param_4;
    (**(code **)(this->_padding_ + 0x2d0))(this,param_1,param_2,param_3);
  }
  return;
}

// MatchAndSet_Implementation @ 149d58410

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
UPCGMatchAndSetBase::MatchAndSet_Implementation
          (UPCGMatchAndSetBase *this,FPCGContext *param_1,UPCGPointMatchAndSetSettings *param_2,
          UPCGPointData *param_3,UPCGPointData *param_4)

{
  FText *this_00;
  bool bVar1;
  FString local_40;
  FString local_30;
  FText local_20;
  
  if (1 < (byte)LogPCG._0_1_) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_20,L"PCGMatchAndSetBase",L"MatchAndSetBaseFailed",
                         L"Unable to execute MatchAndSet pure virtual base function, override the MatchAndSet function or use a default implementation."
                        );
    FText::ToString(this_00);
    bVar1 = param_1 != (FPCGContext *)0x0;
    if (bVar1) {
      FPCGContext::GetTaskName(param_1,&local_30);
      FPCGContext::GetExecutionSourceName(param_1,&local_40);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar1) && (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetType @ 149d64910

void __thiscall UPCGMatchAndSetBase::SetType(UPCGMatchAndSetBase *this,EPCGMetadataTypes param_1)

{
  this->Type = param_1;
  return;
}

// ShouldMutateSeed @ 149d656a0

bool __thiscall UPCGMatchAndSetBase::ShouldMutateSeed(UPCGMatchAndSetBase *this)

{
  return false;
}

// StaticRegisterNativesUPCGMatchAndSetBase @ 149d662f0

void __cdecl UPCGMatchAndSetBase::StaticRegisterNativesUPCGMatchAndSetBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGMatchAndSetBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UsesRandomProcess @ 149d674c0

bool __thiscall UPCGMatchAndSetBase::UsesRandomProcess(UPCGMatchAndSetBase *this)

{
  return false;
}

// ValidatePreconditions @ 149d67e70

bool __thiscall
UPCGMatchAndSetBase::ValidatePreconditions(UPCGMatchAndSetBase *this,UPCGPointData *param_1)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  UPCGPointData *local_18;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGMatchAndSetBase_ValidatePreconditions);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = '\0';
    local_18 = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return local_10 != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000149d67eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
  return (bool)uVar1;
}

// ValidatePreconditions_Implementation @ 149d67f00

bool __thiscall
UPCGMatchAndSetBase::ValidatePreconditions_Implementation
          (UPCGMatchAndSetBase *this,UPCGPointData *param_1)

{
  return true;
}

// execMatchAndSet @ 149d6ef70

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

void __cdecl UPCGMatchAndSetBase::execMatchAndSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *pFVar2;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298 [2];
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = 0;
  pFVar2 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar2 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_2a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_2a8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2b8 = local_2a8;
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,pFVar2,local_298[0],local_2a0);
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execValidatePreconditions @ 149d72930

void __cdecl
UPCGMatchAndSetBase::execValidatePreconditions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

