// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f0e700

UClass * __cdecl UEnvQueryContext_Querier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Querier",
               &Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_Querier,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryContext_Querier>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Querier>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton;
}

// UEnvQueryContext_Querier @ 146f2a680

UEnvQueryContext_Querier * __thiscall
UEnvQueryContext_Querier::UEnvQueryContext_Querier
          (UEnvQueryContext_Querier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext_Querier__6B_;
  return this;
}

// UEnvQueryContext_Querier @ 146f2a6b0

UEnvQueryContext_Querier * __thiscall
UEnvQueryContext_Querier::UEnvQueryContext_Querier
          (UEnvQueryContext_Querier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEnvQueryContext_Querier__6B_;
  return this;
}

// ~UEnvQueryContext_Querier @ 146f2e910

void __thiscall UEnvQueryContext_Querier::~UEnvQueryContext_Querier(UEnvQueryContext_Querier *this)

{
  *(undefined ***)this = &___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f57da0

UClass * __cdecl UEnvQueryContext_Querier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_Querier",
               &Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_Querier,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryContext_Querier>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_Querier>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_Querier.InnerSingleton;
}

// ProvideContext @ 146f640a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UEnvQueryContext_Querier::ProvideContext
          (UEnvQueryContext_Querier *this,FEnvQueryInstance *param_1,FEnvQueryContextData *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146f640e8;
  }
  pUVar2 = (UObject *)0x0;
LAB_146f640e8:
  if (FVisualLogger::bIsRecording != 0) {
    pUVar3 = Z_Construct_UClass_UAISystem_NoRegister();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    if (((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x7 == '\0') &&
       (pUVar2 != (UObject *)0x0)) {
      pUVar3 = Z_Construct_UClass_AController_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar3->_padding_ && (FVisualLogger::bIsRecording != 0)))) {
        FVisualLogger::CategorizedLogfImpl
                  (pUVar2,(FName *)&LogEQS.field_0x4,Warning,
                   L"Using Controller as query\'s owner is dangerous since Controller\'s location is usually not what you expect it to be!"
                  );
      }
    }
  }
  pUVar3 = UEnvQueryItemType_Actor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (param_2->ValueType).Class.field0_0x0.DebugPtr = pUVar3;
  param_2->NumValues = 1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&param_2->RawData,8,Default);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  *(FWeakObjectPtr *)(param_2->RawData).AllocatorInstance.Data = local_res10;
  return;
}

// StaticRegisterNativesUEnvQueryContext_Querier @ 146f76c80

void __cdecl UEnvQueryContext_Querier::StaticRegisterNativesUEnvQueryContext_Querier(void)

{
  return;
}

