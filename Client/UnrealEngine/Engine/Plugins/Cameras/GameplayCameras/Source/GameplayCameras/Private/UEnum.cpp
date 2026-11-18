// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// GetDisplayValueAsText<enum_ECameraContextDataContainerType> @ 14d53f960

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_ECameraContextDataContainerType>
          (FText *__return_storage_ptr__,ECameraContextDataContainerType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton;
  if (Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_GameplayCameras();
    this = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType,
                         (UObject *)pUVar3,L"ECameraContextDataContainerType");
    Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(longlong)(int)param_1);
  return __return_storage_ptr__;
}

// GetDisplayValueAsText<enum_ECameraContextDataType> @ 14d53fa00

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_ECameraContextDataType>
          (FText *__return_storage_ptr__,ECameraContextDataType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton;
  if (Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_GameplayCameras();
    this = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataType,(UObject *)pUVar3,
                         L"ECameraContextDataType");
    Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(longlong)(int)param_1);
  return __return_storage_ptr__;
}

// GetDisplayValueAsText<enum_ECameraVariableType> @ 14d53faa0

FText * __cdecl
UEnum::GetDisplayValueAsText<enum_ECameraVariableType>
          (FText *__return_storage_ptr__,ECameraVariableType param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FText *pFVar4;
  
  this = Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton;
  if (Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton == (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_GameplayCameras();
    this = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableType,(UObject *)pUVar3,
                         L"ECameraVariableType");
    Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xd13,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetDisplayNameTextByValue(this,__return_storage_ptr__,(longlong)(int)param_1);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_EAutoExposureMethod> @ 14d5830d0

FString * __cdecl
UEnum::GetValueAsString<enum_EAutoExposureMethod>
          (FString *__return_storage_ptr__,EAutoExposureMethod param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EAutoExposureMethod>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_EBloomMethod> @ 14d583150

FString * __cdecl
UEnum::GetValueAsString<enum_EBloomMethod>(FString *__return_storage_ptr__,EBloomMethod param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EBloomMethod>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_ETemperatureMethod> @ 14d5831d0

FString * __cdecl
UEnum::GetValueAsString<enum_ETemperatureMethod>
          (FString *__return_storage_ptr__,ETemperatureMethod param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_ETemperatureMethod>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_EDynamicGlobalIlluminationMethod::Type> @ 14d583250

FString * __cdecl
UEnum::GetValueAsString<enum_EDynamicGlobalIlluminationMethod::Type>
          (FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EDynamicGlobalIlluminationMethod::Type>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_EReflectionMethod::Type> @ 14d5832d0

FString * __cdecl
UEnum::GetValueAsString<enum_EReflectionMethod::Type>(FString *__return_storage_ptr__,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  this = StaticEnum<enum_EReflectionMethod::Type>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetValueAsString<enum_EGameplayCameraComponentActivationMode> @ 14d5f2610

FString * __cdecl
UEnum::GetValueAsString<enum_EGameplayCameraComponentActivationMode>
          (FString *__return_storage_ptr__,EGameplayCameraComponentActivationMode param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UEnum *this;
  FString *pFVar4;
  FName local_res8;
  
  this = Z_Registration_Info_UEnum_EGameplayCameraComponentActivationMode.OuterSingleton;
  if (Z_Registration_Info_UEnum_EGameplayCameraComponentActivationMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_GameplayCameras();
    this = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EGameplayCameraComponentActivationMode,
                         (UObject *)pUVar3,L"EGameplayCameraComponentActivationMode");
    Z_Registration_Info_UEnum_EGameplayCameraComponentActivationMode.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

