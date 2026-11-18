// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147e8d8b0

UClass * __cdecl AMaterialInstanceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceActor",
               &Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton,
               StaticRegisterNativesAMaterialInstanceActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMaterialInstanceActor>,
               InternalVTableHelperCtorCaller<AMaterialInstanceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton;
}

// AMaterialInstanceActor @ 147ea4910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMaterialInstanceActor * __thiscall
AMaterialInstanceActor::AMaterialInstanceActor(AMaterialInstanceActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
  (this->TargetActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetActors).ArrayNum = 0;
  (this->TargetActors).ArrayMax = 0;
  return this;
}

// AMaterialInstanceActor @ 147ea4950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AMaterialInstanceActor * __thiscall
AMaterialInstanceActor::AMaterialInstanceActor
          (AMaterialInstanceActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
  (this->TargetActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetActors).ArrayNum = 0;
  (this->TargetActors).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"SceneComp");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

// ~AMaterialInstanceActor @ 147ea8c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMaterialInstanceActor::~AMaterialInstanceActor(AMaterialInstanceActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AMaterialInstanceActor__6B_;
  pFVar1 = (this->TargetActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147ec4320

UClass * __cdecl AMaterialInstanceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceActor",
               &Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton,
               StaticRegisterNativesAMaterialInstanceActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AMaterialInstanceActor>,
               InternalVTableHelperCtorCaller<AMaterialInstanceActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AMaterialInstanceActor.InnerSingleton;
}

// PostLoad @ 147ed1950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AMaterialInstanceActor::PostLoad(AMaterialInstanceActor *this)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong uVar6;
  
  AActor::PostLoad((AActor *)this);
  iVar4 = (this->TargetActors).ArrayNum;
  uVar9 = 0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar6 = uVar9;
  uVar7 = uVar9;
  iVar8 = 0;
  if (0 < iVar4) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(AActor **)((this->TargetActors).AllocatorInstance.Data + uVar7);
      if ((this_00 != (AActor *)0x0) && (bVar2 = AActor::IsRootComponentStatic(this_00), bVar2)) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None)
        ;
        ::FString::PrintfImpl(&local_38,L"\n%s");
        uVar6 = (ulonglong)(local_38.Data.ArrayNum - 1);
        if (local_38.Data.ArrayNum == 0) {
          uVar6 = uVar9;
        }
        ::FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,(int)uVar6)
        ;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = (this->TargetActors).ArrayNum;
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < iVar4);
    iVar8 = local_48.Data.ArrayNum;
  }
  iVar4 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar4 = 0;
  }
  if ((0 < iVar4) && (4 < (byte)LogTemp._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesAMaterialInstanceActor @ 147edf100

void __cdecl AMaterialInstanceActor::StaticRegisterNativesAMaterialInstanceActor(void)

{
  return;
}

