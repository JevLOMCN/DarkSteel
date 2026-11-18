// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f0d840

UClass * __cdecl UEnvQueryItemType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType",
               &Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton;
}

// UEnvQueryItemType @ 146f2c160

UEnvQueryItemType * __thiscall
UEnvQueryItemType::UEnvQueryItemType(UEnvQueryItemType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryItemType__6B_;
  return this;
}

// UEnvQueryItemType @ 146f2c190

UEnvQueryItemType * __thiscall
UEnvQueryItemType::UEnvQueryItemType(UEnvQueryItemType *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnvQueryItemType *pUVar3;
  longlong lVar4;
  UObject *local_18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryItemType__6B_;
  if (((this->_padding_ & 0x10) != 0) &&
     (local_18[0] = (UObject *)this->_padding_, (local_18[0][5].field_0xc & 1) == 0)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    if (((UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data +
         (longlong)UEnvQueryManager::RegisteredItemTypes.ArrayMax * 8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UEnvQueryItemType *)(*pcVar1)();
      return pUVar3;
    }
    if (UEnvQueryManager::RegisteredItemTypes.ArrayNum ==
        UEnvQueryManager::RegisteredItemTypes.ArrayMax) {
      UEnvQueryManager::RegisteredItemTypes.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&UEnvQueryManager::RegisteredItemTypes.AllocatorInstance,
                      &UEnvQueryManager::RegisteredItemTypes.ArrayMax);
    }
    lVar4 = (longlong)UEnvQueryManager::RegisteredItemTypes.ArrayNum;
    UEnvQueryManager::RegisteredItemTypes.ArrayNum =
         UEnvQueryManager::RegisteredItemTypes.ArrayNum + 1;
    *(UObject **)(UEnvQueryManager::RegisteredItemTypes.AllocatorInstance.Data + lVar4 * 8) =
         local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
  }
  return this;
}

// ~UEnvQueryItemType @ 146f2ee00

void __thiscall UEnvQueryItemType::~UEnvQueryItemType(UEnvQueryItemType *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryItemType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddBlackboardFilters @ 146f34470

void __thiscall
UEnvQueryItemType::AddBlackboardFilters
          (UEnvQueryItemType *this,FBlackboardKeySelector *param_1,UObject *param_2)

{
  return;
}

// FinishDestroy @ 146f4a830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UEnvQueryItemType::FinishDestroy(UEnvQueryItemType *this)

{
  TObjectPtr<UClass>_u_0 local_res8 [4];
  
  if ((this->_padding_ & 0x10) != 0) {
    local_res8[0] = (TObjectPtr<UClass>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8[0].DebugPtr);
    }
    TArray<TSubclassOf<UEnvQueryItemType>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&UEnvQueryManager::RegisteredItemTypes,
               (TSubclassOf<UEnvQueryItemType> *)&local_res8[0].ObjectPtr,Default);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetDescription @ 146f50ca0

FString * __thiscall
UEnvQueryItemType::GetDescription
          (UEnvQueryItemType *this,FString *__return_storage_ptr__,uchar *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"item");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f588c0

UClass * __cdecl UEnvQueryItemType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryItemType",
               &Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton,
               StaticRegisterNativesUEnvQueryItemType,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryItemType>,
               InternalVTableHelperCtorCaller<UEnvQueryItemType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryItemType.InnerSingleton;
}

// StaticRegisterNativesUEnvQueryItemType @ 146f76dd0

void __cdecl UEnvQueryItemType::StaticRegisterNativesUEnvQueryItemType(void)

{
  return;
}

// StoreInBlackboard @ 146f77240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UEnvQueryItemType::StoreInBlackboard
          (UEnvQueryItemType *this,FBlackboardKeySelector *param_1,UBlackboardComponent *param_2,
          uchar *param_3)

{
  return false;
}

