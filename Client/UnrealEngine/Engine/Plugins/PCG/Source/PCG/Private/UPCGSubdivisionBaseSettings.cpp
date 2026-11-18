// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149902860

UClass * __cdecl UPCGSubdivisionBaseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivisionBaseSettings",
               &Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivisionBaseSettings,0x1d8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSubdivisionBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivisionBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton;
}

// UPCGSubdivisionBaseSettings @ 1499c50d0

UPCGSubdivisionBaseSettings * __thiscall
UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
          (UPCGSubdivisionBaseSettings *this,FVTableHelper *param_1)

{
  FName FVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bModuleInfoAsInput = false;
  this->_padding_ = (longlong)&___7UPCGSubdivisionBaseSettings__6B_;
  (this->ModulesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulesInfo).ArrayNum = 0;
  (this->ModulesInfo).ArrayMax = 0;
  (this->ModulesInfoAttributeNames).SymbolAttributeName =
       PCGSubdivisionBase::Constants::SymbolAttributeName;
  FVar1 = PCGSubdivisionBase::Constants::SizeAttributeName;
  (this->ModulesInfoAttributeNames).bProvideScalable = false;
  (this->ModulesInfoAttributeNames).SizeAttributeName = FVar1;
  FVar1 = PCGSubdivisionBase::Constants::ScalableAttributeName;
  (this->ModulesInfoAttributeNames).bProvideDebugColor = false;
  (this->ModulesInfoAttributeNames).ScalableAttributeName = FVar1;
  (this->ModulesInfoAttributeNames).DebugColorAttributeName =
       PCGSubdivisionBase::Constants::DebugColorAttributeName;
  (this->GrammarSelection).bGrammarAsAttribute = false;
  (this->GrammarSelection).GrammarString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GrammarSelection).GrammarString.Data.ArrayNum = 0;
  (this->GrammarSelection).GrammarString.Data.ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->GrammarSelection).GrammarAttribute);
  this->bUseSeedAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->SeedAttribute);
  this->bForwardAttributesFromModulesInfo = false;
  this->SymbolAttributeName = PCGSubdivisionBase::Constants::SymbolAttributeName;
  this->bOutputSizeAttribute = true;
  this->SizeAttributeName = PCGSubdivisionBase::Constants::SizeAttributeName;
  this->bOutputScalableAttribute = true;
  this->ScalableAttributeName = PCGSubdivisionBase::Constants::ScalableAttributeName;
  this->bOutputDebugColorAttribute = false;
  this->DebugColorAttributeName = PCGSubdivisionBase::Constants::DebugColorAttributeName;
  return this;
}

// UPCGSubdivisionBaseSettings @ 1499c51e0

UPCGSubdivisionBaseSettings * __thiscall
UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
          (UPCGSubdivisionBaseSettings *this,FObjectInitializer *param_1)

{
  FName FVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bModuleInfoAsInput = false;
  this->_padding_ = (longlong)&___7UPCGSubdivisionBaseSettings__6B_;
  (this->ModulesInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModulesInfo).ArrayNum = 0;
  (this->ModulesInfo).ArrayMax = 0;
  (this->ModulesInfoAttributeNames).SymbolAttributeName =
       PCGSubdivisionBase::Constants::SymbolAttributeName;
  FVar1 = PCGSubdivisionBase::Constants::SizeAttributeName;
  (this->ModulesInfoAttributeNames).bProvideScalable = false;
  (this->ModulesInfoAttributeNames).SizeAttributeName = FVar1;
  FVar1 = PCGSubdivisionBase::Constants::ScalableAttributeName;
  (this->ModulesInfoAttributeNames).bProvideDebugColor = false;
  (this->ModulesInfoAttributeNames).ScalableAttributeName = FVar1;
  (this->ModulesInfoAttributeNames).DebugColorAttributeName =
       PCGSubdivisionBase::Constants::DebugColorAttributeName;
  (this->GrammarSelection).bGrammarAsAttribute = false;
  (this->GrammarSelection).GrammarString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GrammarSelection).GrammarString.Data.ArrayNum = 0;
  (this->GrammarSelection).GrammarString.Data.ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->GrammarSelection).GrammarAttribute);
  this->bUseSeedAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->SeedAttribute);
  this->bForwardAttributesFromModulesInfo = false;
  this->SymbolAttributeName = PCGSubdivisionBase::Constants::SymbolAttributeName;
  this->bOutputSizeAttribute = true;
  this->SizeAttributeName = PCGSubdivisionBase::Constants::SizeAttributeName;
  this->bOutputScalableAttribute = true;
  this->ScalableAttributeName = PCGSubdivisionBase::Constants::ScalableAttributeName;
  this->bOutputDebugColorAttribute = false;
  this->DebugColorAttributeName = PCGSubdivisionBase::Constants::DebugColorAttributeName;
  return this;
}

// ~UPCGSubdivisionBaseSettings @ 1499c7090

void __thiscall
UPCGSubdivisionBaseSettings::~UPCGSubdivisionBaseSettings(UPCGSubdivisionBaseSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGSubdivisionBaseSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->SeedAttribute).field_0x28,
             *(int *)&(this->SeedAttribute).field_0x30);
  pvVar1 = *(void **)&(this->SeedAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->GrammarSelection).GrammarAttribute.field_0x28,
             *(int *)&(this->GrammarSelection).GrammarAttribute.field_0x30);
  pvVar1 = *(void **)&(this->GrammarSelection).GrammarAttribute.field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->GrammarSelection).GrammarString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ModulesInfo).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// GetPrivateStaticClass @ 1499fc410

UClass * __cdecl UPCGSubdivisionBaseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivisionBaseSettings",
               &Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivisionBaseSettings,0x1d8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSubdivisionBaseSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivisionBaseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivisionBaseSettings.InnerSingleton;
}

// PostLoad @ 149a04c90

void __thiscall UPCGSubdivisionBaseSettings::PostLoad(UPCGSubdivisionBaseSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGSubdivisionBaseSettings @ 149a101a0

void __cdecl UPCGSubdivisionBaseSettings::StaticRegisterNativesUPCGSubdivisionBaseSettings(void)

{
  return;
}

// UseSeed @ 149a11c50

bool __thiscall UPCGSubdivisionBaseSettings::UseSeed(UPCGSubdivisionBaseSettings *this)

{
  return true;
}

