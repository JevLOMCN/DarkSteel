// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c39c40

UClass * __cdecl UPCGGetPCGComponentSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPCGComponentSettings",
               &Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPCGComponentSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetPCGComponentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPCGComponentSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton;
}

// UPCGGetPCGComponentSettings @ 149c4b1f0

UPCGGetPCGComponentSettings * __thiscall
UPCGGetPCGComponentSettings::UPCGGetPCGComponentSettings
          (UPCGGetPCGComponentSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGGetPCGComponentSettings__6B_;
  return this;
}

// UPCGGetPCGComponentSettings @ 149c4b220

UPCGGetPCGComponentSettings * __thiscall
UPCGGetPCGComponentSettings::UPCGGetPCGComponentSettings(UPCGGetPCGComponentSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar1);
  this->field_0x188 = 3;
  *(undefined ***)this = &___7UPCGGetPCGComponentSettings__6B_;
  this->field_0x122 = 0;
  this->field_0xc8 = 3;
  return this;
}

// ~UPCGGetPCGComponentSettings @ 149c4d8d0

void __thiscall
UPCGGetPCGComponentSettings::~UPCGGetPCGComponentSettings(UPCGGetPCGComponentSettings *this)

{
  *(undefined ***)this = &___7UPCGGetPCGComponentSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetDataFilter @ 149c76510

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
UPCGGetPCGComponentSettings::GetDataFilter(UPCGGetPCGComponentSettings *this)

{
  return Any;
}

// GetPrivateStaticClass @ 149c77eb0

UClass * __cdecl UPCGGetPCGComponentSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPCGComponentSettings",
               &Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPCGComponentSettings,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetPCGComponentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPCGComponentSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPCGComponentSettings.InnerSingleton;
}

// OutputPinProperties @ 149c80dd0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetPCGComponentSettings::OutputPinProperties
          (UPCGGetPCGComponentSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FPCGDataTypeIdentifier *pFVar7;
  FPCGDataTypeIdentifier local_28;
  
  UPCGDataFromActorSettings::OutputPinProperties
            ((UPCGDataFromActorSettings *)this,__return_storage_ptr__);
  if (__return_storage_ptr__->ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PinProperties.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGTypedGetter.cpp"
                       ,0xe1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar7 = (FPCGDataTypeIdentifier *)(pFVar1 + 0x10);
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  if (pFVar7 != pFVar6) {
    pFVar2 = (pFVar7->Ids).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar7->Ids).AllocatorInstance.Data = (pFVar6->Ids).AllocatorInstance.Data;
    (pFVar6->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar1 + 0x18) = (pFVar6->Ids).ArrayNum;
    *(int *)(pFVar1 + 0x1c) = (pFVar6->Ids).ArrayMax;
    (pFVar6->Ids).ArrayNum = 0;
    (pFVar6->Ids).ArrayMax = 0;
  }
  *(int *)(pFVar1 + 0x20) = pFVar6->CustomSubtype;
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetPCGComponentSettings @ 149c91f20

void __cdecl UPCGGetPCGComponentSettings::StaticRegisterNativesUPCGGetPCGComponentSettings(void)

{
  return;
}

