// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 36

// StaticClass @ 149d77050

UClass * __cdecl UPCGAttributePropertySelectorBlueprintHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributePropertySelectorBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.
                InnerSingleton,StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGAttributePropertySelectorBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGAttributePropertySelectorBlueprintHelpers>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.InnerSingleton;
}

// UPCGAttributePropertySelectorBlueprintHelpers @ 149e35f80

UPCGAttributePropertySelectorBlueprintHelpers * __thiscall
UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers
          (UPCGAttributePropertySelectorBlueprintHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGAttributePropertySelectorBlueprintHelpers__6B_;
  return this;
}

// UPCGAttributePropertySelectorBlueprintHelpers @ 149e35fb0

UPCGAttributePropertySelectorBlueprintHelpers * __thiscall
UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers
          (UPCGAttributePropertySelectorBlueprintHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGAttributePropertySelectorBlueprintHelpers__6B_;
  return this;
}

// ~UPCGAttributePropertySelectorBlueprintHelpers @ 149e37550

void __thiscall
UPCGAttributePropertySelectorBlueprintHelpers::~UPCGAttributePropertySelectorBlueprintHelpers
          (UPCGAttributePropertySelectorBlueprintHelpers *this)

{
  *(undefined ***)this = &___7UPCGAttributePropertySelectorBlueprintHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CopyAndFixLast @ 149e4e150

FPCGAttributePropertyInputSelector * __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixLast
          (FPCGAttributePropertyInputSelector *__return_storage_ptr__,
          FPCGAttributePropertyInputSelector *param_1,UPCGData *param_2)

{
  FPCGAttributePropertyInputSelector::CopyAndFixLast(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// CopyAndFixSource @ 149e4e490

FPCGAttributePropertyOutputSelector * __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixSource
          (FPCGAttributePropertyOutputSelector *__return_storage_ptr__,
          FPCGAttributePropertyOutputSelector *param_1,FPCGAttributePropertyInputSelector *param_2,
          UPCGData *param_3)

{
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            (param_1,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// GetAttributeName @ 149e57dd0

FName __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetAttributeName
          (FPCGAttributePropertySelector *param_1)

{
  longlong in_RDX;
  
  param_1->_padding_ = *(longlong *)(in_RDX + 0x14);
  return (FName)param_1;
}

// GetDomainName @ 149e58e10

FName __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetDomainName(FPCGAttributePropertySelector *param_1)

{
  longlong in_RDX;
  
  param_1->_padding_ = *(longlong *)(in_RDX + 0xc);
  return (FName)param_1;
}

// GetExtraNames @ 149e58f10

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetExtraNames(FPCGAttributePropertySelector *param_1)

{
  return &param_1->ExtraNames;
}

// GetExtraProperty @ 149e58f20

EPCGExtraProperties __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetExtraProperty
          (FPCGAttributePropertySelector *param_1)

{
  return param_1->ExtraProperty;
}

// GetName @ 149e5c290

FName __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetName(FPCGAttributePropertySelector *param_1)

{
  FPCGAttributePropertySelector *in_RDX;
  
  FPCGAttributePropertySelector::GetName(in_RDX);
  return (FName)param_1;
}

// GetPointProperty @ 149e5d470

EPCGPointProperties __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetPointProperty
          (FPCGAttributePropertySelector *param_1)

{
  code *pcVar1;
  bool bVar2;
  EPCGPointProperties EVar3;
  int iVar4;
  UEnum *this;
  long64 lVar5;
  
  this = StaticEnum<enum_EPCGPointProperties>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0x1df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  iVar4 = UEnum::GetIndexByName(this,param_1->PropertyName,None);
  if (iVar4 != -1) {
    lVar5 = UEnum::GetValueByIndex(this,iVar4);
    return (EPCGPointProperties)lVar5;
  }
  return Invalid;
}

// GetPrivateStaticClass @ 149e5d4f0

UClass * __cdecl UPCGAttributePropertySelectorBlueprintHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributePropertySelectorBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.
                InnerSingleton,StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGAttributePropertySelectorBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGAttributePropertySelectorBlueprintHelpers>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.InnerSingleton;
}

// GetPropertyName @ 149e5def0

FName __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetPropertyName
          (FPCGAttributePropertySelector *param_1)

{
  longlong in_RDX;
  
  param_1->_padding_ = *(longlong *)(in_RDX + 0x1c);
  return (FName)param_1;
}

// GetSelection @ 149e6ad00

EPCGAttributePropertySelection __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::GetSelection(FPCGAttributePropertySelector *param_1)

{
  return param_1->Selection;
}

// SetAttributeName @ 149e8e020

bool __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName
          (FPCGAttributePropertySelector *param_1,FName param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_3) {
    bVar1 = FPCGAttributePropertySelector::ResetExtraNames(param_1);
  }
  if ((param_1->Selection != Attribute) || (param_1->AttributeName != param_2)) {
    param_1->Selection = Attribute;
    bVar1 = true;
    param_1->AttributeName = param_2;
  }
  return bVar1;
}

// SetDomainName @ 149e8f420

bool __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::SetDomainName
          (FPCGAttributePropertySelector *param_1,FName param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_3) {
    bVar1 = FPCGAttributePropertySelector::ResetExtraNames(param_1);
  }
  if (param_1->DomainName != param_2) {
    param_1->DomainName = param_2;
    bVar1 = true;
  }
  return bVar1;
}

// SetExtraProperty @ 149e8f500

bool __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::SetExtraProperty
          (FPCGAttributePropertySelector *param_1,EPCGExtraProperties param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_3) {
    bVar1 = FPCGAttributePropertySelector::ResetExtraNames(param_1);
  }
  if ((param_1->Selection != ExtraProperty) || (param_2 != param_1->ExtraProperty)) {
    param_1->Selection = ExtraProperty;
    bVar1 = true;
    param_1->ExtraProperty = param_2;
  }
  return bVar1;
}

// SetPointProperty @ 149e8fec0

bool __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty
          (FPCGAttributePropertySelector *param_1,EPCGPointProperties param_2,bool param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UEnum *this;
  FString *pFVar5;
  FName *pFVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FString local_28;
  
  this = StaticEnum<enum_EPCGPointProperties>();
  pwVar7 = L"";
  if (this == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0xba,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = UEnum::GetNameStringByValue(this,&local_28,(ulonglong)param_2);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar7);
  bVar3 = false;
  FVar1 = *pFVar6;
  if (param_3) {
    bVar3 = FPCGAttributePropertySelector::ResetExtraNames(param_1);
  }
  if ((param_1->Selection != Property) || (param_1->PropertyName != FVar1)) {
    param_1->Selection = Property;
    bVar3 = true;
    param_1->PropertyName = FVar1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetPropertyName @ 149e8fff0

bool __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::SetPropertyName
          (FPCGAttributePropertySelector *param_1,FName param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_3) {
    bVar1 = FPCGAttributePropertySelector::ResetExtraNames(param_1);
  }
  if ((param_1->Selection != Property) || (param_1->PropertyName != param_2)) {
    param_1->Selection = Property;
    bVar1 = true;
    param_1->PropertyName = param_2;
  }
  return bVar1;
}

// StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers @ 149ec1d80

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::
StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyAndFixLast @ 149ec6950

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixLast
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGData *pUVar2;
  ForAnyElementType FVar3;
  char cVar4;
  UPCGMetadata *this;
  FName FVar5;
  int iVar6;
  FPCGAttributePropertySelector *pFVar7;
  UPCGData *local_res10 [3];
  undefined **local_f8;
  EPCGAttributePropertySelection local_f0;
  FNameEntryId FStack_ec;
  uint uStack_e8;
  FName local_e4;
  FName local_dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  EPCGExtraProperties local_c0;
  FPCGAttributePropertySelector local_b8;
  FPCGAttributePropertySelector local_78;
  
  local_78._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  local_78.Selection = Attribute;
  local_78.DomainName.ComparisonIndex.Value = 0;
  local_78.DomainName.Number = 0;
  local_78.PropertyName.ComparisonIndex.Value = 0;
  local_78.PropertyName.Number = 0;
  local_78.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ExtraNames.ArrayNum = 0;
  local_78.ExtraNames.ArrayMax = 0;
  local_78.ExtraProperty = Index;
  local_78.AttributeName = PCGMetadataAttributeConstants::LastAttributeName;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = (UPCGData *)0x0;
  pFVar7 = &local_78;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    pFVar7 = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pFVar7->Selection == Attribute) {
    if (((pFVar7->AttributeName == PCGMetadataAttributeConstants::LastAttributeName) &&
        (local_res10[0] != (UPCGData *)0x0)) &&
       (cVar4 = (**(code **)(local_res10[0]->_padding_ + 0x2f8))(local_res10[0]), cVar4 != '\0')) {
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,&local_f8);
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (&local_d0,&pFVar7->ExtraNames);
      FVar3.Data = local_d0.AllocatorInstance.Data;
      local_b8._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
      local_b8.Selection = local_f0;
      local_b8.DomainName.Number = uStack_e8;
      local_b8.DomainName.ComparisonIndex.Value = FStack_ec.Value;
      local_b8.AttributeName = local_e4;
      local_b8.PropertyName = local_dc;
      local_b8.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = local_d0.ArrayNum;
      local_b8.ExtraNames.ArrayNum = iVar6;
      if (iVar6 == 0) {
        local_b8.ExtraNames.ArrayMax = 0;
        iVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,0,&local_b8.ExtraNames.AllocatorInstance,iVar6,
                   &local_b8.ExtraNames.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_b8.ExtraNames.AllocatorInstance.Data,(FString *)FVar3.Data,iVar6);
        iVar6 = local_d0.ArrayNum;
      }
    }
    else {
      if (((pFVar7->AttributeName != PCGMetadataAttributeConstants::LastCreatedAttributeName) ||
          (pUVar2 == (UPCGData *)0x0)) ||
         (this = PCGMetadataHelpers::GetConstMetadata(pUVar2), this == (UPCGMetadata *)0x0))
      goto LAB_149ec6c97;
      local_e4 = PCGMetadataAttributeConstants::LastAttributeName;
      local_f0 = Attribute;
      FStack_ec.Value = 0;
      uStack_e8 = 0;
      local_dc.ComparisonIndex.Value = 0;
      local_dc.Number = 0;
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      local_c0 = Index;
      local_f8 = &___7FPCGAttributePropertyInputSelector__6B_;
      FVar5 = UPCGMetadata::GetLatestAttributeNameOrNone(this);
      FVar5 = *(FName *)FVar5;
      if (local_d0.ArrayNum != 0) {
        DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
        if (local_d0.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
        }
      }
      if ((local_f0 != Attribute) || (local_e4 != FVar5)) {
        local_f0 = Attribute;
        local_e4 = FVar5;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
                (&local_d0,&pFVar7->ExtraNames);
      FVar3.Data = local_d0.AllocatorInstance.Data;
      iVar6 = local_d0.ArrayNum;
      local_b8._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
      local_b8.Selection = local_f0;
      local_b8.DomainName.Number = uStack_e8;
      local_b8.DomainName.ComparisonIndex.Value = FStack_ec.Value;
      local_b8.AttributeName = local_e4;
      local_b8.PropertyName = local_dc;
      local_b8.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ExtraNames.ArrayNum = local_d0.ArrayNum;
      if (local_d0.ArrayNum == 0) {
        local_b8.ExtraNames.ArrayMax = 0;
        iVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_d0.ArrayNum,0,&local_b8.ExtraNames.AllocatorInstance,
                   local_d0.ArrayNum,&local_b8.ExtraNames.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_b8.ExtraNames.AllocatorInstance.Data,(FString *)FVar3.Data,iVar6);
        iVar6 = local_d0.ArrayNum;
      }
    }
    local_b8.ExtraProperty = local_c0;
    local_b8._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
    DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,iVar6);
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  else {
LAB_149ec6c97:
    FPCGAttributePropertySelector::FPCGAttributePropertySelector(&local_b8,pFVar7);
    local_b8._padding_ = (longlong)&___7FPCGAttributePropertyInputSelector__6B_;
  }
  *(EPCGAttributePropertySelection *)((longlong)param_3 + 8) = local_b8.Selection;
  *(FName *)((longlong)param_3 + 0xc) = local_b8.DomainName;
  *(FName *)((longlong)param_3 + 0x14) = local_b8.AttributeName;
  *(FName *)((longlong)param_3 + 0x1c) = local_b8.PropertyName;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_3 + 0x28),
             &local_b8.ExtraNames);
  *(EPCGExtraProperties *)((longlong)param_3 + 0x38) = local_b8.ExtraProperty;
  DestructItems<FString,int>
            ((FString *)local_b8.ExtraNames.AllocatorInstance.Data,local_b8.ExtraNames.ArrayNum);
  if (local_b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum);
  if (local_78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execCopyAndFixSource @ 149ec6d30

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGAttributePropertyInputSelector *pFVar2;
  FPCGAttributePropertyOutputSelector *this;
  UPCGData *local_res10;
  undefined1 local_d8 [28];
  undefined8 local_bc;
  FString *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [28];
  undefined8 local_7c;
  FString *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58 [40];
  TArray<FString,TSizedDefaultAllocator<32>_> local_30;
  undefined1 local_20;
  
  local_98._0_8_ = &___7FPCGAttributePropertyOutputSelector__6B_;
  local_98._20_8_ = PCGMetadataAttributeConstants::SourceAttributeName;
  local_98._8_8_ = 0;
  local_98._16_4_ = 0;
  local_7c = 0;
  local_70 = (FString *)0x0;
  local_68 = 0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_d8._8_8_ = 0;
  local_d8._16_4_ = 0;
  this = (FPCGAttributePropertyOutputSelector *)local_98;
  if ((FPCGAttributePropertyOutputSelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertyOutputSelector *)0x0) {
    this = (FPCGAttributePropertyOutputSelector *)param_2->MostRecentPropertyAddress;
  }
  local_bc = 0;
  local_b0 = (FString *)0x0;
  local_d8._0_8_ = &___7FPCGAttributePropertyInputSelector__6B_;
  local_d8._20_4_ = PCGMetadataAttributeConstants::LastAttributeName.ComparisonIndex.Value;
  local_d8._24_4_ = PCGMetadataAttributeConstants::LastAttributeName.Number;
  local_a8 = 0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_res10 = (UPCGData *)0x0;
  pFVar2 = (FPCGAttributePropertyInputSelector *)local_d8;
  if ((FPCGAttributePropertyInputSelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertyInputSelector *)0x0) {
    pFVar2 = (FPCGAttributePropertyInputSelector *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPCGAttributePropertyOutputSelector::CopyAndFixSource
            (this,(FPCGAttributePropertyOutputSelector *)local_58,pFVar2,local_res10);
  *(undefined4 *)((longlong)param_3 + 8) = local_58._8_4_;
  *(undefined8 *)((longlong)param_3 + 0xc) = local_58._12_8_;
  *(undefined8 *)((longlong)param_3 + 0x14) = local_58._20_8_;
  *(undefined8 *)((longlong)param_3 + 0x1c) = local_58._28_8_;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_3 + 0x28),&local_30);
  *(undefined1 *)((longlong)param_3 + 0x38) = local_20;
  DestructItems<FString,int>((FString *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_b0,(int)local_a8);
  if (local_b0 != (FString *)0x0) {
    FMemory::Free(local_b0);
  }
  DestructItems<FString,int>(local_70,(int)local_68);
  if (local_70 != (FString *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetAttributeName @ 149ec91e0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetAttributeName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)((longlong)pppuVar2 + 0x14);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetDomainName @ 149ec9a70

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetDomainName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)((longlong)pppuVar2 + 0xc);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetExtraNames @ 149eca1d0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FString,TSizedDefaultAllocator<32>_> *)(pppuVar2 + 5));
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetExtraProperty @ 149eca2b0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uchar *)param_3 = *(uchar *)(pppuVar2 + 7);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetName @ 149ecb740

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGAttributePropertySelector *this;
  undefined8 local_res10;
  FPCGAttributePropertySelector local_48;
  
  local_48._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_48.Selection = Attribute;
  local_48.DomainName.ComparisonIndex.Value = 0;
  local_48.DomainName.Number = 0;
  local_48.AttributeName.ComparisonIndex.Value = 0;
  local_48.AttributeName.Number = 0;
  local_48.PropertyName.ComparisonIndex.Value = 0;
  local_48.PropertyName.Number = 0;
  local_48.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ExtraNames.ArrayNum = 0;
  local_48.ExtraNames.ArrayMax = 0;
  local_48.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPCGAttributePropertySelector::GetName(this);
  *(undefined8 *)param_3 = local_res10;
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execGetPointProperty @ 149ecbbd0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetPointProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UEnum *this;
  undefined ***pppuVar7;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  long64 lVar6;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar7 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar7 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticEnum<enum_EPCGPointProperties>();
  if (this == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0x1df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = UEnum::GetIndexByName(this,*(FName *)((longlong)pppuVar7 + 0x1c),None);
  if (iVar5 == -1) {
    uVar4 = 0xff;
  }
  else {
    lVar6 = UEnum::GetValueByIndex(this,iVar5);
    uVar4 = (undefined1)lVar6;
  }
  *(undefined1 *)param_3 = uVar4;
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetPropertyName @ 149ecbd10

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetPropertyName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)((longlong)pppuVar2 + 0x1c);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execGetSelection @ 149eccb10

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execGetSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined ***pppuVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_48 = &___7FPCGAttributePropertySelector__6B_;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = (FString *)0x0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pppuVar2 = &local_48;
  if ((undefined ***)param_2->MostRecentPropertyAddress != (undefined ***)0x0) {
    pppuVar2 = (undefined ***)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(pppuVar2 + 1);
  DestructItems<FString,int>(local_20,(int)local_18);
  if (local_20 != (FString *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}

// execSetAttributeName @ 149ed3730

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execSetAttributeName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  bool bVar4;
  FPCGAttributePropertySelector *this;
  int local_res10 [2];
  FName local_res18;
  FPCGAttributePropertySelector local_68;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_68._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_68.Selection = Attribute;
  local_68.DomainName.ComparisonIndex.Value = 0;
  local_68.DomainName.Number = 0;
  local_68.AttributeName.ComparisonIndex.Value = 0;
  local_68.AttributeName.Number = 0;
  local_68.PropertyName.ComparisonIndex.Value = 0;
  local_68.PropertyName.Number = 0;
  local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ExtraNames.ArrayNum = 0;
  local_68.ExtraNames.ArrayMax = 0;
  local_68.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_68;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res18;
  bVar4 = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    bVar4 = FPCGAttributePropertySelector::ResetExtraNames(this);
  }
  if ((this->Selection != Attribute) || (this->AttributeName != FVar3)) {
    this->Selection = Attribute;
    bVar4 = true;
    this->AttributeName = FVar3;
  }
  *(bool *)param_3 = bVar4;
  DestructItems<FString,int>
            ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum);
  if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execSetDomainName @ 149ed43c0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execSetDomainName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  FPCGAttributePropertySelector *this;
  int local_res10 [2];
  FName local_res18;
  FPCGAttributePropertySelector local_58;
  
  local_58._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_58.Selection = Attribute;
  local_58.DomainName.ComparisonIndex.Value = 0;
  local_58.DomainName.Number = 0;
  local_58.AttributeName.ComparisonIndex.Value = 0;
  local_58.AttributeName.Number = 0;
  local_58.PropertyName.ComparisonIndex.Value = 0;
  local_58.PropertyName.Number = 0;
  local_58.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ExtraNames.ArrayNum = 0;
  local_58.ExtraNames.ArrayMax = 0;
  local_58.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_58;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar3 = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    bVar3 = FPCGAttributePropertySelector::ResetExtraNames(this);
  }
  if (this->DomainName != FVar2) {
    this->DomainName = FVar2;
    bVar3 = true;
  }
  *(bool *)param_3 = bVar3;
  DestructItems<FString,int>
            ((FString *)local_58.ExtraNames.AllocatorInstance.Data,local_58.ExtraNames.ArrayNum);
  if (local_58.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execSetExtraProperty @ 149ed4e50

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execSetExtraProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  EPCGExtraProperties EVar3;
  bool bVar4;
  FPCGAttributePropertySelector *this;
  EPCGExtraProperties local_res10 [8];
  int local_res18 [2];
  FPCGAttributePropertySelector local_68;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_68._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_68.Selection = Attribute;
  local_68.DomainName.ComparisonIndex.Value = 0;
  local_68.DomainName.Number = 0;
  local_68.AttributeName.ComparisonIndex.Value = 0;
  local_68.AttributeName.Number = 0;
  local_68.PropertyName.ComparisonIndex.Value = 0;
  local_68.PropertyName.Number = 0;
  local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ExtraNames.ArrayNum = 0;
  local_68.ExtraNames.ArrayMax = 0;
  local_68.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = Index;
  this = &local_68;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  EVar3 = local_res10[0];
  bVar4 = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != 0) {
    bVar4 = FPCGAttributePropertySelector::ResetExtraNames(this);
  }
  if ((this->Selection != ExtraProperty) || (EVar3 != this->ExtraProperty)) {
    this->Selection = ExtraProperty;
    bVar4 = true;
    this->ExtraProperty = EVar3;
  }
  *(bool *)param_3 = bVar4;
  DestructItems<FString,int>
            ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum);
  if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execSetPointProperty @ 149ed73a0

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execSetPointProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  UEnum *this;
  FString *pFVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  FPCGAttributePropertySelector *this_00;
  ulonglong uVar9;
  bool bVar10;
  byte local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FString local_88;
  FPCGAttributePropertySelector local_78;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_78._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_78.Selection = Attribute;
  local_78.DomainName.ComparisonIndex.Value = 0;
  local_78.DomainName.Number = 0;
  local_78.AttributeName.ComparisonIndex.Value = 0;
  local_78.AttributeName.Number = 0;
  local_78.PropertyName.ComparisonIndex.Value = 0;
  local_78.PropertyName.Number = 0;
  local_78.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ExtraNames.ArrayNum = 0;
  local_78.ExtraNames.ArrayMax = 0;
  local_78.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  this_00 = &local_78;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this_00 = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar10 = local_res18[0] != 0;
  uVar9 = (ulonglong)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticEnum<enum_EPCGPointProperties>();
  pwVar8 = L"";
  if (this == (UEnum *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGAttributePropertySelector.cpp"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = UEnum::GetNameStringByValue(this,&local_88,uVar9);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_res20,pwVar8);
  bVar5 = false;
  FVar3 = *pFVar7;
  if (bVar10) {
    bVar5 = FPCGAttributePropertySelector::ResetExtraNames(this_00);
  }
  if ((this_00->Selection != Property) || (this_00->PropertyName != FVar3)) {
    this_00->Selection = Property;
    bVar5 = true;
    this_00->PropertyName = FVar3;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar5;
  DestructItems<FString,int>
            ((FString *)local_78.ExtraNames.AllocatorInstance.Data,local_78.ExtraNames.ArrayNum);
  if (local_78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// execSetPropertyName @ 149ed7580

void __cdecl
UPCGAttributePropertySelectorBlueprintHelpers::execSetPropertyName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  bool bVar4;
  FPCGAttributePropertySelector *this;
  int local_res10 [2];
  FName local_res18;
  FPCGAttributePropertySelector local_68;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_68._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_68.Selection = Attribute;
  local_68.DomainName.ComparisonIndex.Value = 0;
  local_68.DomainName.Number = 0;
  local_68.AttributeName.ComparisonIndex.Value = 0;
  local_68.AttributeName.Number = 0;
  local_68.PropertyName.ComparisonIndex.Value = 0;
  local_68.PropertyName.Number = 0;
  local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ExtraNames.ArrayNum = 0;
  local_68.ExtraNames.ArrayMax = 0;
  local_68.ExtraProperty = Index;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  this = &local_68;
  if ((FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress !=
      (FPCGAttributePropertySelector *)0x0) {
    this = (FPCGAttributePropertySelector *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res18;
  bVar4 = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    bVar4 = FPCGAttributePropertySelector::ResetExtraNames(this);
  }
  if ((this->Selection != Property) || (this->PropertyName != FVar3)) {
    this->Selection = Property;
    bVar4 = true;
    this->PropertyName = FVar3;
  }
  *(bool *)param_3 = bVar4;
  DestructItems<FString,int>
            ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum);
  if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

