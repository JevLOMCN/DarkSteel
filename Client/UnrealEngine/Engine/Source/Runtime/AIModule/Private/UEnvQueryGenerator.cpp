// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146f101d0

UClass * __cdecl UEnvQueryGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator",
               &Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator>,local_res8,
               UEnvQueryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton;
}

// UEnvQueryGenerator @ 146f2a740

UEnvQueryGenerator * __thiscall
UEnvQueryGenerator::UEnvQueryGenerator(UEnvQueryGenerator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  (this->OptionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).Data.ArrayNum = 0;
  (this->OptionName).Data.ArrayMax = 0;
  (this->ItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->EnvQueryResultNormalizationOption = Default;
  return this;
}

// UEnvQueryGenerator @ 146f2a780

UEnvQueryGenerator * __thiscall
UEnvQueryGenerator::UEnvQueryGenerator(UEnvQueryGenerator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  (this->OptionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).Data.ArrayNum = 0;
  (this->OptionName).Data.ArrayMax = 0;
  (this->ItemType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->EnvQueryResultNormalizationOption = Default;
  this->bAutoSortTests = 1;
  this->bCanRunAsync = 0;
  return this;
}

// ~UEnvQueryGenerator @ 146f2e950

void __thiscall UEnvQueryGenerator::~UEnvQueryGenerator(UEnvQueryGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnvQueryGenerator__6B_;
  pFVar1 = (this->OptionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GenerateItems @ 146f4c130

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
UEnvQueryGenerator::GenerateItems(UEnvQueryGenerator *this,FEnvQueryInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryGenerator.h"
                     ,0x25,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetNormalizationOption @ 146f57160

EEnvQueryResultNormalizationOption __thiscall
UEnvQueryGenerator::GetNormalizationOption(UEnvQueryGenerator *this)

{
  return this->EnvQueryResultNormalizationOption;
}

// GetPrivateStaticClass @ 146f57f10

UClass * __cdecl UEnvQueryGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryGenerator",
               &Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton,
               StaticRegisterNativesUEnvQueryGenerator,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryGenerator>,
               InternalVTableHelperCtorCaller<UEnvQueryGenerator>,local_res8,
               UEnvQueryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryGenerator.InnerSingleton;
}

// IsValidGenerator @ 146f5bf90

bool __thiscall UEnvQueryGenerator::IsValidGenerator(UEnvQueryGenerator *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ItemType).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UEnvQueryItemType::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->ItemType).Class.field0_0x0.DebugPtr != (UClass *)0x0;
      }
    }
  }
  return false;
}

// PostLoad @ 146f5f920

void __thiscall UEnvQueryGenerator::PostLoad(UEnvQueryGenerator *this)

{
  UObject::PostLoad((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x000146f5f939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// StaticRegisterNativesUEnvQueryGenerator @ 146f76ca0

void __cdecl UEnvQueryGenerator::StaticRegisterNativesUEnvQueryGenerator(void)

{
  return;
}

// UpdateNodeVersion @ 146f7cbb0

void __thiscall UEnvQueryGenerator::UpdateNodeVersion(UEnvQueryGenerator *this)

{
  *(undefined4 *)&this->_padding_ = 1;
  return;
}

