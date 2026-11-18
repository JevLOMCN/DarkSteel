// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// UWorldSubsystem @ 14880a300

UWorldSubsystem * __thiscall
UWorldSubsystem::UWorldSubsystem(UWorldSubsystem *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bHasCalledPostInitialize = false;
  this->bHasCalledBeginPlay = false;
  this->_padding_ = (longlong)&___7UWorldSubsystem__6B_;
  return this;
}

// UWorldSubsystem @ 14880a330

UWorldSubsystem * __thiscall UWorldSubsystem::UWorldSubsystem(UWorldSubsystem *this)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this);
  this->bHasCalledPostInitialize = false;
  this->bHasCalledBeginPlay = false;
  this->_padding_ = (longlong)&___7UWorldSubsystem__6B_;
  return this;
}

// ~UWorldSubsystem @ 14880d520

void __thiscall UWorldSubsystem::~UWorldSubsystem(UWorldSubsystem *this)

{
  this->_padding_ = (longlong)&___7USubsystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DoesSupportWorldType @ 1488348a0

bool __thiscall UWorldSubsystem::DoesSupportWorldType(UWorldSubsystem *this,Type param_1)

{
  return param_1 - Game < 3;
}

// EnsureHasCalledBeginPlay @ 148835450

void __thiscall UWorldSubsystem::EnsureHasCalledBeginPlay(UWorldSubsystem *this)

{
  UWorldSubsystem *local_res8 [4];
  
  if (!this->bHasCalledBeginPlay) {
    local_res8[0] = this;
    `UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(local_res8);
  }
  return;
}

// EnsureHasCalledPostInitialize @ 148835480

void __thiscall UWorldSubsystem::EnsureHasCalledPostInitialize(UWorldSubsystem *this)

{
  UWorldSubsystem *local_res8 [4];
  
  if (!this->bHasCalledPostInitialize) {
    local_res8[0] = this;
    `UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  return;
}

// GetPrivateStaticClass @ 148840e40

UClass * __cdecl UWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldSubsystem",
               &Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldSubsystem,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldSubsystem>,
               InternalVTableHelperCtorCaller<UWorldSubsystem>,local_res8,USubsystem::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldSubsystem.InnerSingleton;
}

// GetWorld @ 1488443a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldSubsystem::GetWorld(UWorldSubsystem *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetWorldRef @ 1488445d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWorldSubsystem::GetWorldRef(UWorldSubsystem *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pFVar4 = GetTypeName<UWorld>(&local_18);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UWorld>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// Initialize @ 148847390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldSubsystem::Initialize(UWorldSubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  bool bVar2;
  UClass *pUVar3;
  UWorldSubsystem *local_res8;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if ((!this->bHasCalledPostInitialize) && (this_00->bIsWorldInitialized != '\0')) {
        (**(code **)(this->_padding_ + 0x2c8))(this);
        if (!this->bHasCalledPostInitialize) {
          local_res8 = this;
          `UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
      }
      if (!this->bHasCalledBeginPlay) {
        bVar2 = UWorld::HasBegunPlay(this_00);
        if (bVar2) {
          (**(code **)(this->_padding_ + 0x2d8))(this,this_00);
          if (!this->bHasCalledBeginPlay) {
            local_res8 = this;
            `UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(&local_res8);
          }
        }
      }
    }
  }
  return;
}

// OnWorldBeginPlay @ 14884bbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldSubsystem::OnWorldBeginPlay(UWorldSubsystem *this,UWorld *param_1)

{
  UWorldSubsystem *local_res8 [4];
  
  if (this->bHasCalledBeginPlay) {
    local_res8[0] = this;
    `UWorldSubsystem::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(local_res8);
    this->bHasCalledBeginPlay = true;
    return;
  }
  this->bHasCalledBeginPlay = true;
  return;
}

// PostInitialize @ 14884db30

void __thiscall UWorldSubsystem::PostInitialize(UWorldSubsystem *this)

{
  UWorldSubsystem *local_res8 [4];
  
  if (this->bHasCalledPostInitialize) {
    local_res8[0] = this;
    `UWorldSubsystem::PostInitialize'::__l2::<lambda_1>::operator()(local_res8);
    this->bHasCalledPostInitialize = true;
    return;
  }
  this->bHasCalledPostInitialize = true;
  return;
}

// ShouldCreateSubsystem @ 148859850

bool __thiscall UWorldSubsystem::ShouldCreateSubsystem(UWorldSubsystem *this,UObject *param_1)

{
  int iVar1;
  undefined1 uVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UWorld>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014885989f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(this->_padding_ + 0x2f8))(this,param_1[9].field_0x22);
    return (bool)uVar2;
  }
  pFVar4 = GetTypeName<UWorld>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// StaticRegisterNativesUWorldSubsystem @ 14885ad10

void __cdecl UWorldSubsystem::StaticRegisterNativesUWorldSubsystem(void)

{
  return;
}

// UpdateStreamingState @ 148862920

void __thiscall UWorldSubsystem::UpdateStreamingState(UWorldSubsystem *this)

{
  UClass *pUVar1;
  longlong *plVar2;
  
  if (this != (UWorldSubsystem *)0x0) {
    pUVar1 = Z_Construct_UClass_UStreamingWorldSubsystemInterface_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return;
}

// operator() @ 150531c80

bool __thiscall
`UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6317575628862259118>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259118>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531cf9;
    }
  }
  bVar2 = false;
LAB_150531cf9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150531d30

bool __thiscall
`UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6317575628862259122>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259122>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531da9;
    }
  }
  bVar2 = false;
LAB_150531da9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150531e80

bool __thiscall `UWorldSubsystem::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6317575628862259128>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259128>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531ef9;
    }
  }
  bVar2 = false;
LAB_150531ef9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150531f30

bool __thiscall `UWorldSubsystem::PostInitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6317575628862259134>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317575628862259134>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150531fa9;
    }
  }
  bVar2 = false;
LAB_150531fa9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

