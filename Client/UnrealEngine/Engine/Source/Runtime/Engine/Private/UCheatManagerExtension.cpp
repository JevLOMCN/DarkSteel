// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 1476d7680

UClass * __cdecl UCheatManagerExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheatManagerExtension",
               &Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton,
               StaticRegisterNativesUCheatManagerExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheatManagerExtension>,
               InternalVTableHelperCtorCaller<UCheatManagerExtension>,local_res8,
               UObject::StaticClass,UCheatManager::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton;
}

// UCheatManagerExtension @ 1476e84d0

UCheatManagerExtension * __thiscall
UCheatManagerExtension::UCheatManagerExtension(UCheatManagerExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCheatManagerExtension__6B_;
  return this;
}

// UCheatManagerExtension @ 1476e8500

UCheatManagerExtension * __thiscall
UCheatManagerExtension::UCheatManagerExtension
          (UCheatManagerExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCheatManagerExtension__6B_;
  return this;
}

// ~UCheatManagerExtension @ 1476e9200

void __thiscall UCheatManagerExtension::~UCheatManagerExtension(UCheatManagerExtension *this)

{
  *(undefined ***)this = &___7UCheatManagerExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddedToCheatManager @ 1476ed3d0

void __thiscall UCheatManagerExtension::AddedToCheatManager(UCheatManagerExtension *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCheatManagerExtension_AddedToCheatManager);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x0001476ed413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001476ed424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))(this);
  return;
}

// AddedToCheatManager_Implementation @ 1476ed440

void __thiscall
UCheatManagerExtension::AddedToCheatManager_Implementation(UCheatManagerExtension *this)

{
  return;
}

// DoExtensionSpecificBugItLog @ 1476fc6c0

void __thiscall
UCheatManagerExtension::DoExtensionSpecificBugItLog
          (UCheatManagerExtension *this,FOutputDevice *param_1)

{
  return;
}

// GetPlayerController @ 147709ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UCheatManagerExtension::GetPlayerController(UCheatManagerExtension *this)

{
  code *pcVar1;
  bool bVar2;
  APlayerController *pAVar3;
  longlong lVar4;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    lVar4 = *(longlong *)&this->field_0x20;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,0x49,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (APlayerController *)(*pcVar1)();
      return pAVar3;
    }
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (APlayerController *)(*pcVar1)();
      return pAVar3;
    }
    return (APlayerController *)0x0;
  }
  return *(APlayerController **)(lVar4 + 0x20);
}

// GetPrivateStaticClass @ 14770a1f0

UClass * __cdecl UCheatManagerExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheatManagerExtension",
               &Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton,
               StaticRegisterNativesUCheatManagerExtension,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheatManagerExtension>,
               InternalVTableHelperCtorCaller<UCheatManagerExtension>,local_res8,
               UObject::StaticClass,UCheatManager::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheatManagerExtension.InnerSingleton;
}

// GetWorld @ 14770b250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UCheatManagerExtension::GetWorld(UCheatManagerExtension *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return (UWorld *)0x0;
  }
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,0x49,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00014770b2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UWorld *)(**(code **)(_DAT_00000000 + 0x180))();
    return pUVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014770b2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x20 + 0x180))();
  return pUVar3;
}

// RemovedFromCheatManager @ 147723eb0

void __thiscall UCheatManagerExtension::RemovedFromCheatManager(UCheatManagerExtension *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCheatManagerExtension_RemovedFromCheatManager);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000147723ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147723f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b8))(this);
  return;
}

// RemovedFromCheatManager_Implementation @ 147723f20

void __thiscall
UCheatManagerExtension::RemovedFromCheatManager_Implementation(UCheatManagerExtension *this)

{
  return;
}

// StaticRegisterNativesUCheatManagerExtension @ 14772bf00

void __cdecl UCheatManagerExtension::StaticRegisterNativesUCheatManagerExtension(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UCheatManagerExtension_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddedToCheatManager @ 1477343b0

void __cdecl
UCheatManagerExtension::execAddedToCheatManager(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477343c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execGetPlayerController @ 1477367e0

void __cdecl
UCheatManagerExtension::execGetPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    lVar3 = *(longlong *)&param_1->field_0x20;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703159>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,0x49,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)(lVar3 + 0x20);
  return;
}

// execRemovedFromCheatManager @ 147737460

void __cdecl
UCheatManagerExtension::execRemovedFromCheatManager(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147737478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

