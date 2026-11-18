// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// StaticClass @ 147cac1f0

UClass * __cdecl UInputDeviceLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceLibrary",
               &Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton,
               StaticRegisterNativesUInputDeviceLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputDeviceLibrary>,
               InternalVTableHelperCtorCaller<UInputDeviceLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton;
}

// UInputDeviceLibrary @ 147cc6c70

UInputDeviceLibrary * __thiscall
UInputDeviceLibrary::UInputDeviceLibrary(UInputDeviceLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UInputDeviceLibrary__6B_;
  return this;
}

// UInputDeviceLibrary @ 147cc6ca0

UInputDeviceLibrary * __thiscall
UInputDeviceLibrary::UInputDeviceLibrary(UInputDeviceLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UInputDeviceLibrary__6B_;
  return this;
}

// ~UInputDeviceLibrary @ 147cc9690

void __thiscall UInputDeviceLibrary::~UInputDeviceLibrary(UInputDeviceLibrary *this)

{
  *(undefined ***)this = &___7UInputDeviceLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EqualEqual_InputDeviceId @ 147cf2bc0

bool __cdecl
UInputDeviceLibrary::EqualEqual_InputDeviceId(FInputDeviceId param_1,FInputDeviceId param_2)

{
  return param_1.InternalId == param_2.InternalId;
}

// EqualEqual_PlatformUserId @ 147cf2bd0

bool __cdecl
UInputDeviceLibrary::EqualEqual_PlatformUserId(FPlatformUserId param_1,FPlatformUserId param_2)

{
  return param_1.InternalId == param_2.InternalId;
}

// GetAllActiveUsers @ 147cfa5a0

int __cdecl
UInputDeviceLibrary::GetAllActiveUsers(TArray<FPlatformUserId,TSizedDefaultAllocator<32>_> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000147cfa5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,UNRECOVERED_JUMPTABLE);
  return iVar1;
}

// GetAllConnectedInputDevices @ 147cfa5d0

int __cdecl
UInputDeviceLibrary::GetAllConnectedInputDevices
          (TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147cfa5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,UNRECOVERED_JUMPTABLE);
  return iVar1;
}

// GetAllInputDevices @ 147cfa610

int __cdecl
UInputDeviceLibrary::GetAllInputDevices(TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000147cfa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,UNRECOVERED_JUMPTABLE);
  return iVar1;
}

// GetAllInputDevicesForUser @ 147cfa640

int __cdecl
UInputDeviceLibrary::GetAllInputDevicesForUser
          (FPlatformUserId param_1,TArray<FInputDeviceId,TSizedDefaultAllocator<32>_> *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 8);
                    /* WARNING: Could not recover jumptable at 0x000147cfa66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1.InternalId,param_2,UNRECOVERED_JUMPTABLE);
  return iVar1;
}

// GetDefaultInputDevice @ 147cfc880

FInputDeviceId __cdecl UInputDeviceLibrary::GetDefaultInputDevice(void)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_ECX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1);
  return (FInputDeviceId)in_ECX;
}

// GetInputDeviceConnectionState @ 147d06210

EInputDeviceConnectionState __cdecl
UInputDeviceLibrary::GetInputDeviceConnectionState(FInputDeviceId param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  EInputDeviceConnectionState EVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000147d06231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1.InternalId,UNRECOVERED_JUMPTABLE);
  return EVar1;
}

// GetPlayerControllerFromInputDevice @ 147d0bc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __cdecl
UInputDeviceLibrary::GetPlayerControllerFromInputDevice(FInputDeviceId param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  int *piVar2;
  APlayerController *pAVar3;
  undefined1 local_res10 [24];
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x68))(pIVar1,local_res10,param_1.InternalId);
  pAVar3 = GetPlayerControllerFromPlatformUser((FPlatformUserId)*piVar2);
  return pAVar3;
}

// GetPlayerControllerFromPlatformUser @ 147d0bcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __cdecl
UInputDeviceLibrary::GetPlayerControllerFromPlatformUser(FPlatformUserId param_1)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FPlatformUserId FVar6;
  UInputDeviceSubsystem *pUVar7;
  UWorld *this;
  APlayerController *pAVar8;
  undefined4 extraout_var;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if (param_1.InternalId == -1) {
    if (2 < (byte)LogInputDevices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInputDevices);
    }
  }
  else {
    pUVar7 = UInputDeviceSubsystem::Get();
    if ((pUVar7 != (UInputDeviceSubsystem *)0x0) &&
       (this = (UWorld *)(**(code **)(pUVar7->_padding_ + 0x40))(&pUVar7->_padding_),
       this != (UWorld *)0x0)) {
      UWorld::GetPlayerControllerIterator(this,&local_18);
      for (; iVar3 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index;
          local_18.Index = local_18.Index + 1) {
        if ((local_18.Container)->ArrayNum <= local_18.Index) {
          return (APlayerController *)0x0;
        }
        uVar5 = 0;
        if (local_18.Index < (local_18.Container)->ArrayNum) {
          uVar5 = (uint)~local_18.Index >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          pAVar8 = (APlayerController *)(*pcVar1)();
          return pAVar8;
        }
        pAVar8 = (APlayerController *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
        if (pAVar8 != (APlayerController *)0x0) {
          FVar6 = APlayerController::GetPlatformUserId(pAVar8);
          if ((*(int *)CONCAT44(extraout_var,FVar6.InternalId) != -1) &&
             (*(int *)CONCAT44(extraout_var,FVar6.InternalId) == param_1.InternalId)) {
            return pAVar8;
          }
        }
      }
    }
  }
  return (APlayerController *)0x0;
}

// GetPrimaryInputDeviceForUser @ 147d0bff0

FInputDeviceId __cdecl UInputDeviceLibrary::GetPrimaryInputDeviceForUser(FPlatformUserId param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x70))
            (pIVar1,CONCAT44(in_register_0000000c,param_1.InternalId),in_EDX);
  return (FInputDeviceId)param_1.InternalId;
}

// GetPrimaryPlatformUser @ 147d0c030

FPlatformUserId __cdecl UInputDeviceLibrary::GetPrimaryPlatformUser(void)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_ECX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1);
  return (FPlatformUserId)in_ECX;
}

// GetPrivateStaticClass @ 147d0c920

UClass * __cdecl UInputDeviceLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceLibrary",
               &Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton,
               StaticRegisterNativesUInputDeviceLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInputDeviceLibrary>,
               InternalVTableHelperCtorCaller<UInputDeviceLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceLibrary.InnerSingleton;
}

// GetUserForInputDevice @ 147d10110

FPlatformUserId __cdecl UInputDeviceLibrary::GetUserForInputDevice(FInputDeviceId param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x68))
            (pIVar1,CONCAT44(in_register_0000000c,param_1.InternalId),in_EDX);
  return (FPlatformUserId)param_1.InternalId;
}

// GetUserForUnpairedInputDevices @ 147d10150

FPlatformUserId __cdecl UInputDeviceLibrary::GetUserForUnpairedInputDevices(void)

{
  IPlatformInputDeviceMapper *pIVar1;
  int in_ECX;
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
  return (FPlatformUserId)in_ECX;
}

// InputDeviceId_None @ 147d19ca0

FInputDeviceId __cdecl UInputDeviceLibrary::InputDeviceId_None(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0xffffffff;
  return (FInputDeviceId)(int)in_RCX;
}

// IsDevicePropertyHandleValid @ 147d1a320

bool __cdecl UInputDeviceLibrary::IsDevicePropertyHandleValid(FInputDevicePropertyHandle *param_1)

{
  return param_1->InternalId != FInputDevicePropertyHandle::InvalidHandle.InternalId;
}

// IsInputDeviceMappedToUnpairedUser @ 147d1a3b0

bool __cdecl UInputDeviceLibrary::IsInputDeviceMappedToUnpairedUser(FInputDeviceId param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000147d1a3ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1.InternalId,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// IsUnpairedUserId @ 147d1a590

bool __cdecl UInputDeviceLibrary::IsUnpairedUserId(FPlatformUserId param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  IPlatformInputDeviceMapper *pIVar2;
  
  pIVar2 = IPlatformInputDeviceMapper::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000147d1a5ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1.InternalId,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// IsValidInputDevice @ 147d1a680

bool __cdecl UInputDeviceLibrary::IsValidInputDevice(FInputDeviceId param_1)

{
  return (bool)((byte)((uint)param_1.InternalId >> 0x1f) ^ 1);
}

// IsValidPlatformId @ 147d1a6b0

bool __cdecl UInputDeviceLibrary::IsValidPlatformId(FPlatformUserId param_1)

{
  return param_1.InternalId != -1;
}

// NotEqual_InputDeviceId @ 147d1b610

bool __cdecl
UInputDeviceLibrary::NotEqual_InputDeviceId(FInputDeviceId param_1,FInputDeviceId param_2)

{
  return param_1.InternalId != param_2.InternalId;
}

// NotEqual_PlatformUserId @ 147d1b620

bool __cdecl
UInputDeviceLibrary::NotEqual_PlatformUserId(FPlatformUserId param_1,FPlatformUserId param_2)

{
  return param_1.InternalId != param_2.InternalId;
}

// PlatformUserId_None @ 147d1d960

FPlatformUserId __cdecl UInputDeviceLibrary::PlatformUserId_None(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0xffffffff;
  return (FPlatformUserId)(int)in_RCX;
}

// StaticRegisterNativesUInputDeviceLibrary @ 147d32950

void __cdecl UInputDeviceLibrary::StaticRegisterNativesUInputDeviceLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UInputDeviceLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEqualEqual_InputDeviceId @ 147d3d330

void __cdecl
UInputDeviceLibrary::execEqualEqual_InputDeviceId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18[0] == local_res10[0];
  return;
}

// execEqualEqual_PlatformUserId @ 147d3d400

void __cdecl
UInputDeviceLibrary::execEqualEqual_PlatformUserId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18[0] == local_res10[0];
  return;
}

// execGetAllActiveUsers @ 147d3d720

void __cdecl
UInputDeviceLibrary::execGetAllActiveUsers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  void **ppvVar4;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar4 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  uVar2 = (**(code **)(pIVar3->_padding_ + 0x28))(pIVar3,ppvVar4);
  *(undefined4 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAllConnectedInputDevices @ 147d3d7f0

void __cdecl
UInputDeviceLibrary::execGetAllConnectedInputDevices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  void **ppvVar4;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar4 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  uVar2 = (**(code **)(pIVar3->_padding_ + 0x18))(pIVar3,ppvVar4);
  *(undefined4 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAllInputDevices @ 147d3d8c0

void __cdecl
UInputDeviceLibrary::execGetAllInputDevices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  void **ppvVar4;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar4 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  uVar2 = (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3,ppvVar4);
  *(undefined4 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAllInputDevicesForUser @ 147d3d990

void __cdecl
UInputDeviceLibrary::execGetAllInputDevicesForUser(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  void **ppvVar4;
  undefined4 local_res10 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  uVar2 = local_res10[0];
  ppvVar4 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  uVar2 = (**(code **)(pIVar3->_padding_ + 8))(pIVar3,uVar2,ppvVar4);
  *(undefined4 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDefaultInputDevice @ 147d3dab0

void __cdecl
UInputDeviceLibrary::execGetDefaultInputDevice(UObject *param_1,FFrame *param_2,void *param_3)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 local_res10 [6];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,local_res10);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetInputDeviceConnectionState @ 147d3db00

void __cdecl
UInputDeviceLibrary::execGetInputDeviceConnectionState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  IPlatformInputDeviceMapper *pIVar4;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IPlatformInputDeviceMapper::Get();
  uVar3 = (**(code **)(pIVar4->_padding_ + 0x80))(pIVar4,uVar2);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execGetPlayerControllerFromInputDevice @ 147d3dc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UInputDeviceLibrary::execGetPlayerControllerFromInputDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  int *piVar4;
  APlayerController *pAVar5;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  piVar4 = (int *)(**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_res18,uVar2);
  pAVar5 = GetPlayerControllerFromPlatformUser((FPlatformUserId)*piVar4);
  *(APlayerController **)param_3 = pAVar5;
  return;
}

// execGetPlayerControllerFromPlatformUser @ 147d3dce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UInputDeviceLibrary::execGetPlayerControllerFromPlatformUser
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FPlatformUserId FVar8;
  UInputDeviceSubsystem *pUVar9;
  UWorld *this;
  APlayerController *this_00;
  undefined4 extraout_var;
  int local_res10 [6];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == -1) {
    if (2 < (byte)LogInputDevices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInputDevices);
    }
  }
  else {
    pUVar9 = UInputDeviceSubsystem::Get();
    if (pUVar9 != (UInputDeviceSubsystem *)0x0) {
      this = (UWorld *)(**(code **)(pUVar9->_padding_ + 0x40))(&pUVar9->_padding_);
      if (this != (UWorld *)0x0) {
        UWorld::GetPlayerControllerIterator(this,&local_28);
        for (; iVar5 = local_28.Index, pTVar4 = local_28.Container, -1 < local_28.Index;
            local_28.Index = local_28.Index + 1) {
          if ((local_28.Container)->ArrayNum <= local_28.Index) break;
          uVar7 = 0;
          if (local_28.Index < (local_28.Container)->ArrayNum) {
            uVar7 = (uint)~local_28.Index >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          this_00 = (APlayerController *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar4->AllocatorInstance).Data + (longlong)iVar5 * 8));
          if (this_00 != (APlayerController *)0x0) {
            FVar8 = APlayerController::GetPlatformUserId(this_00);
            if ((*(int *)CONCAT44(extraout_var,FVar8.InternalId) != -1) &&
               (*(int *)CONCAT44(extraout_var,FVar8.InternalId) == iVar3)) {
              *(APlayerController **)param_3 = this_00;
              return;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetPrimaryInputDeviceForUser @ 147d3de80

void __cdecl
UInputDeviceLibrary::execGetPrimaryInputDeviceForUser
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar3->_padding_ + 0x70))(pIVar3,local_res18,uVar2);
  *(undefined4 *)param_3 = local_res18[0];
  return;
}

// execGetPrimaryPlatformUser @ 147d3df20

void __cdecl
UInputDeviceLibrary::execGetPrimaryPlatformUser(UObject *param_1,FFrame *param_2,void *param_3)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 local_res10 [6];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,local_res10);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetUserForInputDevice @ 147d3e1a0

void __cdecl
UInputDeviceLibrary::execGetUserForInputDevice(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  IPlatformInputDeviceMapper *pIVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar3->_padding_ + 0x68))(pIVar3,local_res18,uVar2);
  *(undefined4 *)param_3 = local_res18[0];
  return;
}

// execGetUserForUnpairedInputDevices @ 147d3e240

void __cdecl
UInputDeviceLibrary::execGetUserForUnpairedInputDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IPlatformInputDeviceMapper *pIVar1;
  undefined4 local_res10 [6];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_res10);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execInputDeviceId_None @ 147d3e290

void __cdecl
UInputDeviceLibrary::execInputDeviceId_None(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execIsDevicePropertyHandleValid @ 147d3e2c0

void __cdecl
UInputDeviceLibrary::execIsDevicePropertyHandleValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FInputDevicePropertyHandle *this;
  FInputDevicePropertyHandle local_res10 [2];
  
  FInputDevicePropertyHandle::FInputDevicePropertyHandle(local_res10);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res10;
  if ((FInputDevicePropertyHandle *)param_2->MostRecentPropertyAddress !=
      (FInputDevicePropertyHandle *)0x0) {
    this = (FInputDevicePropertyHandle *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FInputDevicePropertyHandle::IsValid(this);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsInputDeviceMappedToUnpairedUser @ 147d3e360

void __cdecl
UInputDeviceLibrary::execIsInputDeviceMappedToUnpairedUser
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  IPlatformInputDeviceMapper *pIVar4;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IPlatformInputDeviceMapper::Get();
  uVar3 = (**(code **)(pIVar4->_padding_ + 0x48))(pIVar4,uVar2);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execIsUnpairedUserId @ 147d3e400

void __cdecl
UInputDeviceLibrary::execIsUnpairedUserId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  IPlatformInputDeviceMapper *pIVar4;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IPlatformInputDeviceMapper::Get();
  uVar3 = (**(code **)(pIVar4->_padding_ + 0x40))(pIVar4,uVar2);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execIsValidInputDevice @ 147d3e4a0

void __cdecl
UInputDeviceLibrary::execIsValidInputDevice(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = -1 < local_res10[0];
  return;
}

// execIsValidPlatformId @ 147d3e530

void __cdecl
UInputDeviceLibrary::execIsValidPlatformId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res10[0] != -1;
  return;
}

// execNotEqual_InputDeviceId @ 147d3e5f0

void __cdecl
UInputDeviceLibrary::execNotEqual_InputDeviceId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18[0] != local_res10[0];
  return;
}

// execNotEqual_PlatformUserId @ 147d3e6c0

void __cdecl
UInputDeviceLibrary::execNotEqual_PlatformUserId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res18[0] != local_res10[0];
  return;
}

// execPlatformUserId_None @ 147d3e790

void __cdecl
UInputDeviceLibrary::execPlatformUserId_None(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

