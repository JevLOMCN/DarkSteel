// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 121

// StaticClass @ 14b558120

UClass * __cdecl ADS_PlayerController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerController",
               &Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton,
               StaticRegisterNativesADS_PlayerController,0x9b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_PlayerController>,
               InternalVTableHelperCtorCaller<ADS_PlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton;
}

// ADS_PlayerController @ 14b559b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_PlayerController * __thiscall
ADS_PlayerController::ADS_PlayerController(ADS_PlayerController *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&this->AddInputFlagDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x8 = 0;
  this->_padding_ = (longlong)&___7ADS_PlayerController__6B_;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x18 = 2;
  *(undefined8 *)&this->RemoveInputFlagDelegate = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangeInputControlType = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x18 = 2;
  *(undefined8 *)&this->CameraBattleModeDelegate = 0;
  *(undefined8 *)&(this->CameraBattleModeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CameraBattleModeDelegate).field_0x10 = 0;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerCharacter).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MovementCore).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InputData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InputData).WeakPtr,(FObjectPtr)&local_res8);
  this->bInputMappingsLoaded = false;
  this->InputFlag = NONE;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MoveForwardValue = 0.0;
  this->MoveBackValue = 0.0;
  this->MoveLeftValue = 0.0;
  this->MoveRightValue = 0.0;
  (this->InputMoveDirection).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->ChangedCharacterStateHandle).ID = 0;
  (this->RightPressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LeftPressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)&this->InputMappingContextMap = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x48 = 0;
  (this->CurrentMappingContext).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  this->KeyChangeGameOptionID = None;
  this->KeyChangeIndex = FirstKey;
  *(undefined8 *)&this->ChangeCursorStateDelegate = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x18 = 2;
  *(undefined8 *)&this->MouseCursorMap = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x8 = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x20 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x28 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MouseCursorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MouseCursorMap).field_0x34 = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x40 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x48 = 0;
  *(undefined8 *)&this->GamePadCursorMap = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x8 = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x20 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x28 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x34 = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x40 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x48 = 0;
  this->CurrentCursorShape = Default;
  this->bActionModeCursorEnabled = false;
  this->bPrevActionModeCursorEnabled = false;
  this->bGamePadCursorEnabled = false;
  return this;
}

// ~ADS_PlayerController @ 14b55b170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::~ADS_PlayerController(ADS_PlayerController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7ADS_PlayerController__6B_;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GamePadCursorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CursorShapeType,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CursorShapeType,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->GamePadCursorMap);
  *(undefined4 *)&(this->MouseCursorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MouseCursorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CursorShapeType,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CursorShapeType,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MouseCursorMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeCursorStateDelegate).field_0x8,
             *(int *)&(this->ChangeCursorStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeCursorStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeCursorStateDelegate);
  *(undefined4 *)&(this->InputMappingContextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InputMappingContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->InputMappingContextMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CameraBattleModeDelegate);
  pvVar1 = *(void **)&(this->CameraBattleModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CameraBattleModeDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeInputControlType).field_0x8,
             *(int *)&(this->ChangeInputControlType).field_0x10);
  pvVar1 = *(void **)&(this->ChangeInputControlType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeInputControlType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RemoveInputFlagDelegate).field_0x8,
             *(int *)&(this->RemoveInputFlagDelegate).field_0x10);
  pvVar1 = *(void **)&(this->RemoveInputFlagDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RemoveInputFlagDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->AddInputFlagDelegate).field_0x8,
             *(int *)&(this->AddInputFlagDelegate).field_0x10);
  pvVar1 = *(void **)&(this->AddInputFlagDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AddInputFlagDelegate);
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// GetPrivateStaticClass @ 14b55cb30

UClass * __cdecl ADS_PlayerController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerController",
               &Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton,
               StaticRegisterNativesADS_PlayerController,0x9b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADS_PlayerController>,
               InternalVTableHelperCtorCaller<ADS_PlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PlayerController.InnerSingleton;
}

// PlayDetectionEffect @ 14b55d260

void __thiscall ADS_PlayerController::PlayDetectionEffect(ADS_PlayerController *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADS_PlayerController_PlayDetectionEffect);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b55d28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesADS_PlayerController @ 14b55d2e0

void __cdecl ADS_PlayerController::StaticRegisterNativesADS_PlayerController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ADS_PlayerController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeGameState @ 14b55e550

void __cdecl
ADS_PlayerController::execOnChangeGameState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_GameStateType *pEVar2;
  EDS_GameStateType *pEVar3;
  EDS_GameStateType local_res10 [4];
  EDS_GameStateType local_res20 [2];
  
  local_res10[0] = None;
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
  pEVar3 = (EDS_GameStateType *)param_2->MostRecentPropertyAddress;
  local_res20[0] = None;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar2 = local_res10;
  if (pEVar3 != (EDS_GameStateType *)0x0) {
    pEVar2 = pEVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pEVar3 = local_res20;
  if ((EDS_GameStateType *)param_2->MostRecentPropertyAddress != (EDS_GameStateType *)0x0) {
    pEVar3 = (EDS_GameStateType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeGameState((ADS_PlayerController *)param_1,pEVar2,pEVar3);
  return;
}

// execUpdateInputMappings @ 14b55e760

void __cdecl
ADS_PlayerController::execUpdateInputMappings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInputComponent *local_res10;
  
  local_res10 = (UInputComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateInputMappings((ADS_PlayerController *)param_1,local_res10);
  return;
}

// ADS_PlayerController @ 14b8b1330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADS_PlayerController * __thiscall
ADS_PlayerController::ADS_PlayerController(ADS_PlayerController *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  TVector2<double> TVar2;
  undefined8 local_res8;
  
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined8 *)&this->AddInputFlagDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x8 = 0;
  this->_padding_ = (longlong)&___7ADS_PlayerController__6B_;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->AddInputFlagDelegate).field_0x18 = 2;
  *(undefined8 *)&this->RemoveInputFlagDelegate = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->RemoveInputFlagDelegate).field_0x18 = 2;
  *(undefined8 *)&this->ChangeInputControlType = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeInputControlType).field_0x18 = 2;
  *(undefined8 *)&this->CameraBattleModeDelegate = 0;
  *(undefined8 *)&(this->CameraBattleModeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CameraBattleModeDelegate).field_0x10 = 0;
  (this->OwnerCharacter).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->OwnerCharacter).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MovementCore).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharStateData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InputData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InputData).WeakPtr,(FObjectPtr)&local_res8);
  this->bInputMappingsLoaded = false;
  this->InputFlag = NONE;
  TVar2 = UE::Math::TVector2<double>::ZeroVector;
  this->MoveForwardValue = 0.0;
  this->MoveBackValue = 0.0;
  this->MoveLeftValue = 0.0;
  this->MoveRightValue = 0.0;
  (this->InputMoveDirection).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar2.field0_0x0;
  (this->ChangedCharacterStateHandle).ID = 0;
  (this->RightPressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LeftPressedMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined8 *)&this->InputMappingContextMap = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->InputMappingContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->InputMappingContextMap).field_0x48 = 0;
  (this->CurrentMappingContext).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  this->KeyChangeGameOptionID = None;
  this->KeyChangeIndex = FirstKey;
  *(undefined8 *)&this->ChangeCursorStateDelegate = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeCursorStateDelegate).field_0x18 = 2;
  *(undefined8 *)&this->MouseCursorMap = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x8 = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x20 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x28 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MouseCursorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MouseCursorMap).field_0x34 = 0;
  *(undefined8 *)&(this->MouseCursorMap).field_0x40 = 0;
  *(undefined4 *)&(this->MouseCursorMap).field_0x48 = 0;
  *(undefined8 *)&this->GamePadCursorMap = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x8 = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x20 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x28 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x34 = 0;
  *(undefined8 *)&(this->GamePadCursorMap).field_0x40 = 0;
  *(undefined4 *)&(this->GamePadCursorMap).field_0x48 = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 10;
  this->CurrentCursorShape = Default;
  this->bActionModeCursorEnabled = false;
  this->bPrevActionModeCursorEnabled = false;
  this->bGamePadCursorEnabled = false;
  this->InputDeviceType = KeyboardMouse;
  return this;
}

// AddInputFlag @ 14b8b4e80

void __thiscall
ADS_PlayerController::AddInputFlag(ADS_PlayerController *this,EDS_InputFlags param_1)

{
  EDS_InputFlags local_res10 [6];
  
  if ((param_1 & this->InputFlag) == NONE) {
    this->InputFlag = this->InputFlag | param_1;
    local_res10[0] = param_1;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->AddInputFlagDelegate,local_res10);
  }
  return;
}

// AddTag @ 14b8b4ff0

void __thiscall ADS_PlayerController::AddTag(ADS_PlayerController *this,FGameplayTag *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_AbilitySystemComponent *this_00;
  FWeakObjectPtr local_res8;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x178))
              (&pUVar2[0x29].field_0x10,&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
      UWN_AbilitySystemComponent::AddTag(this_00,param_1,1);
    }
  }
  return;
}

// AdjustInputControlType @ 14b8b5070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_InputControlType __thiscall
ADS_PlayerController::AdjustInputControlType
          (ADS_PlayerController *this,EDS_InputControlType param_1)

{
  int iVar1;
  bool bVar2;
  EDS_ChatMode EVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  UDS_ChatEvent *pUVar5;
  EDS_InputControlType EVar6;
  FWeakObjectPtr local_res8;
  
  bVar2 = UDS_GameInstance::GetDoNotActionMode();
  EVar6 = Cursor;
  if (!bVar2) {
    EVar6 = param_1;
  }
  bVar2 = UDS_GameInstance::GetIsCCSAIMode();
  if (bVar2) {
    EVar6 = Cursor;
  }
  if (this->InputDeviceType == KeyboardMouse) {
    if ((EVar6 == Cursor) && (EVar6 = ActionMode, this->bActionModeCursorEnabled != true)) {
      this->bActionModeCursorEnabled = true;
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->ChangeCursorStateDelegate,true);
    }
  }
  else if ((this->InputDeviceType == GamePad) &&
          (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_WindowManager::GetCurrentClosableWindowInfo(this_00);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      iVar1 = *(int *)(pUVar4 + 1);
      if (iVar1 != 0x20) {
        if (iVar1 == 0xcf) {
          return EVar6;
        }
        if (iVar1 == 0x3ec) {
          return EVar6;
        }
        if (iVar1 != 0x421) {
          return UIMode;
        }
      }
      pUVar5 = UDS_ChatEvent::GetEvent();
      if ((pUVar5 != (UDS_ChatEvent *)0x0) &&
         (EVar3 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar5->OnQueryChatMode),
         EVar3 != Viewer)) {
        EVar6 = ActionMode;
      }
    }
  }
  return EVar6;
}

// ApplyGameOptionData @ 14b8b5360

void __thiscall ADS_PlayerController::ApplyGameOptionData(ADS_PlayerController *this)

{
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  EDS_InputMappingType EVar4;
  UDS_GameOptionData *this_01;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  EDS_GameOptionType EVar8;
  int iVar9;
  UDS_GameOptionManager *this_02;
  FDS_GameOptionBaseTableRow *pFVar10;
  TObjectPtr<UInputMappingContext> *pTVar11;
  TObjectPtr<UInputMappingContext> TVar12;
  TObjectPtr<UInputMappingContext>_u_0 *pTVar13;
  UDS_InputEvent *pUVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  EDS_KeyType EVar17;
  ForAnyElementType FVar18;
  undefined1 local_res10 [8];
  uint local_res18;
  EDS_KeyActionType local_res20 [2];
  undefined8 in_stack_ffffffffffffff38;
  TObjectPtr<UInputMappingContext>_u_0 local_a0;
  undefined1 local_98 [16];
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> local_88;
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> local_78;
  code *local_68;
  int iStack_60;
  uint uStack_5c;
  code *local_58;
  longlong lStack_50;
  
  this_02 = UDS_GameOptionManager::GetInst();
  if (this_02 != (UDS_GameOptionManager *)0x0) {
    UDS_GameOptionManager::GetGameOptionDataList(this_02,&local_78,KeySettings);
    uVar15 = (ulonglong)local_78.ArrayNum;
    pFVar1 = local_78.AllocatorInstance.Data + uVar15 * 8;
    local_res18 = local_78.ArrayNum;
    FVar18.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if (local_78.ArrayNum != (uint)uVar15) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UDS_GameOptionData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      EVar17 = None;
      if (FVar18.Data == pFVar1) break;
      this_01 = *(UDS_GameOptionData **)FVar18.Data;
      if (this_01 == (UDS_GameOptionData *)0x0) {
LAB_14b8b5623:
        uVar15 = (ulonglong)local_res18;
        FVar18.Data = FVar18.Data + 8;
      }
      else {
        EVar8 = UDS_GameOptionData::GetGameOptionID(this_01);
        pFVar10 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar8,true);
        if (pFVar10 == (FDS_GameOptionBaseTableRow *)0x0) goto LAB_14b8b5623;
        if ((pFVar10->DefaultValue).ArrayNum < 1) {
          in_stack_ffffffffffffff38 = 0;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar3 = *(int *)(pFVar10->DefaultValue).AllocatorInstance.Data;
        if ((((0x186a3 < iVar3 - 1U) || (cVar2 = (char)pFVar10->Value1, 1 < (byte)(cVar2 - 1U))) ||
            (EVar4 = pFVar10->Value2, 300 < EVar4 - Action_Base)) ||
           (this_00 = &this->InputMappingContextMap,
           *(int *)&(this->InputMappingContextMap).field_0x8 ==
           *(int *)&(this->InputMappingContextMap).field_0x34)) goto LAB_14b8b5623;
        puVar5 = *(undefined1 **)&(this->InputMappingContextMap).field_0x40;
        puVar16 = &(this->InputMappingContextMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar16 = puVar5;
        }
        iVar9 = *(int *)(puVar16 +
                        (ulonglong)
                        (*(int *)&(this->InputMappingContextMap).field_0x48 - Action_Base & EVar4) *
                        4);
        if (iVar9 == -1) goto LAB_14b8b5623;
        do {
          if (*(EDS_InputMappingType *)(*(longlong *)this_00 + (longlong)iVar9 * 0x18) == EVar4) {
            UDS_GameOptionData::GetGameOptionKeyValue(this_01,&local_88,FirstKey);
            if (local_88.ArrayNum == 0) {
              if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.AllocatorInstance.Data);
              }
              goto LAB_14b8b563d;
            }
            if (0 < local_88.ArrayNum) {
              EVar17 = *(EDS_KeyType *)local_88.AllocatorInstance.Data;
            }
            pTVar11 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                      ::FindChecked(this_00,EVar4);
            local_a0.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar11->field0_0x0).DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_a0.DebugPtr != (UInputMappingContext *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_a0.DebugPtr);
            }
            in_stack_ffffffffffffff38 =
                 CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),cVar2);
            TVar12 = DS_InputUtil::OverrideKey
                               ((UDS_InputConfig *)local_98,
                                (TObjectPtr<UInputMappingContext>)this->InputConfig,
                                (EDS_KeyActionType)&local_a0,(EDS_InputDeviceType)iVar3,
                                (EDS_KeyType)in_stack_ffffffffffffff38,EVar17);
            pTVar13 = &TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                       ::FindChecked(this_00,EVar4)->field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)TVar12.field0_0x0 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)TVar12.field0_0x0);
            }
            *pTVar13 = *(TObjectPtr<UInputMappingContext>_u_0 *)TVar12.field0_0x0;
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this_01->GameOptionKeySettingClicked,this);
            local_68 = OnClickedGameOptionKeyChange;
            iStack_60 = 0;
            lStack_50 = (ulonglong)uStack_5c << 0x20;
            local_58 = OnClickedGameOptionKeyChange;
            TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,enum_EDS_GameOptionKeySettingIndex),FDefaultDelegateUserPolicy>
            ::AddUObject<ADS_PlayerController>
                      (&this_01->GameOptionKeySettingClicked,(ADS_PlayerController *)(local_98 + 8),
                       (pmf_689edd2e *)this);
            if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.AllocatorInstance.Data);
            }
            goto LAB_14b8b5623;
          }
          iVar9 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
        FVar18.Data = FVar18.Data + 8;
        uVar15 = (ulonglong)local_res18;
      }
    }
LAB_14b8b563d:
    pUVar14 = UDS_InputEvent::GetEvent();
    if (pUVar14 != (UDS_InputEvent *)0x0) {
      local_res20[0] = None;
      FDS_EventDelegate<enum_EDS_KeyActionType_const_&>::Broadcast
                (&pUVar14->OnChangeInputKey,local_res20);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginPlay @ 14b8b58a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::BeginPlay(ADS_PlayerController *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCommonAnalogCursor *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  UObject *pUVar8;
  char *pcVar9;
  UObject *this_01;
  UFunction *pUVar10;
  UDS_WindowManager *pUVar11;
  UDS_ContentManager *pUVar12;
  UDS_InputEvent *pUVar13;
  FSlateApplication *pFVar14;
  ULocalPlayer *this_02;
  UCommonUIActionRouterBase *this_03;
  IConsoleManager *pIVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  int iVar18;
  char *pcVar19;
  int *piVar20;
  <lambda_1> local_res8 [8];
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_318;
  code *local_308;
  FName FStack_300;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  FWeakObjectPtr local_2f0;
  FName local_2e8;
  int local_2e0 [3];
  undefined4 local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  undefined4 local_2c4;
  int local_2c0 [3];
  int local_2b4;
  int local_2b0 [4];
  FWeakObjectPtr local_2a0;
  FName local_298;
  undefined8 local_290;
  FUIInputConfig local_288 [2];
  undefined1 local_278 [24];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [24];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [24];
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [24];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  int *local_1e8;
  FName local_1e0;
  ADS_PlayerController *local_1d8;
  FName *local_1d0;
  undefined4 *local_1c8;
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined4 *local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  longlong local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined4 local_180;
  int *local_178;
  undefined4 *local_170;
  FDestructionSentinel local_168;
  undefined1 local_150 [56];
  code *local_118;
  longlong lStack_110;
  code *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  code *local_a8;
  longlong lStack_a0;
  undefined1 local_98 [32];
  code *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  FReadAccessScope local_58;
  
  APlayerController::BeginPlay((APlayerController *)this);
  dVar6 = DS_CommonDataHelper::MouseCrosshairEnableRange();
  *(float *)((longlong)&this->_padding_ + 4) = (float)dVar6;
  InitCursorData(this);
  ADS_GameMode::GetInst();
  bVar7 = FWeakObjectPtr::IsValid(&local_2a0);
  if (!bVar7) goto LAB_14b8b5ada;
  pUVar8 = FWeakObjectPtr::Get(&local_2a0);
  pcVar9 = strstr("&ADS_PlayerController::OnChangeGameState","::");
  if (pcVar9 == (char *)0x0) {
LAB_14b8b595b:
    pcVar19 = &DAT_00000002;
LAB_14b8b5960:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    do {
      pcVar19 = pcVar9;
      pcVar9 = strstr(pcVar19 + 1,"::");
    } while (pcVar9 != (char *)0x0);
    if (pcVar19 == (char *)0x0) goto LAB_14b8b595b;
    pcVar19 = pcVar19 + 2;
    if (*pcVar19 == '0') goto LAB_14b8b5960;
  }
  ::FName::FName((FName *)(local_1f8 + 0x18),pcVar19);
  local_298 = local_1e0;
  local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2f0.ObjectIndex = 0;
  local_2f0.ObjectSerialNumber = 0;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  local_1d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_PlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_2f0,(FObjectPtr)((longlong)local_1f8 + 0x20));
  local_2e8 = local_298;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_2f8,(FReadAccessScope *)(local_98 + 8));
  if ((local_2e8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_2f0), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 8));
LAB_14b8b5a38:
    local_1d0 = &local_298;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EDS_GameStateType_const_&,enum_EDS_GameStateType_const_&>
    ::__Internal_BindDynamic<ADS_PlayerController>'::__l2::<lambda_1>::operator()(local_1f8 + 0x28);
  }
  else {
    pUVar10 = UObject::FindFunction(this_01,local_2e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_98 + 8));
    if (pUVar10 == (UFunction *)0x0) goto LAB_14b8b5a38;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2f8,&local_58);
  local_318.Object = local_2f0;
  local_318.FunctionName = local_2e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar8 + 0x18),
             (FWriteAccessScope *)(local_1f8 + 0x90));
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar8[0x18].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar8 + 0x18),&local_318);
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_168.Accessor,(FDestructionSentinel *)(local_1f8 + 0x90));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
LAB_14b8b5ada:
  pUVar11 = UDS_WindowManager::GetInst();
  if (pUVar11 != (UDS_WindowManager *)0x0) {
    local_318.FunctionName = (FName)((ulonglong)local_318.FunctionName & 0xffffffff00000000);
    local_318.Object = (FWeakObjectPtr)OnWindowOpenCloseEvent;
    local_150._8_8_ = OnWindowOpenCloseEvent;
    local_150._16_4_ = local_318.FunctionName.ComparisonIndex.Value;
    local_150._20_4_ = local_318.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (&pUVar11->WindowOpenCloseDelegate,(ADS_PlayerController *)local_150,
               (pmf_c56b2887 *)this);
  }
  pUVar12 = UDS_ContentManager::GetInst();
  if (pUVar12 != (UDS_ContentManager *)0x0) {
    local_318.FunctionName = (FName)((ulonglong)local_318.FunctionName & 0xffffffff00000000);
    local_318.Object = (FWeakObjectPtr)OnCloseContentEvent;
    local_150._24_8_ = OnCloseContentEvent;
    local_150._32_4_ = local_318.FunctionName.ComparisonIndex.Value;
    local_150._36_4_ = local_318.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ContentsTabFrameType),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (&pUVar12->CloseContentEvent,(ADS_PlayerController *)(local_278 + 0x10),
               (pmf_ba3dc958 *)this);
  }
  pUVar13 = UDS_InputEvent::GetEvent();
  if (pUVar13 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar13->OnInputEvent).Subscriptions;
    uStack_25c = FStack_300.Number;
    puVar1 = &(pUVar13->OnInputEvent).Subscriptions.field_0x40;
    local_res10[0] = 0x2776;
    local_278._16_8_ = Input_Move;
    uStack_260 = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x2776) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x2776) {
            if ((iVar18 != -1) && (piVar20 != (int *)0x0)) goto LAB_14b8b5c2b;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1c8 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2776,
               (bool *)(local_1f8 + 0x30));
    piVar20 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14b8b5c2b:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_b0 = CONCAT44(uStack_25c,uStack_260);
    local_b8 = (code *)local_278._16_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)local_258,(pmf_bb7c5cf1 *)this);
    local_258._12_4_ = FStack_300.Number;
    local_res20[0] = 0x2778;
    local_258._0_8_ = Input_Move;
    local_258._8_4_ = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x2778) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x2778) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b5d1c;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1c0 = local_res20;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_2e0,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2778,
               (bool *)(local_1f8 + 0x38));
    piVar20 = (int *)((longlong)local_2e0[0] * 0x50 + *(longlong *)this_00);
LAB_14b8b5d1c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_110 = CONCAT44(local_258._12_4_,local_258._8_4_);
    local_118 = (code *)local_258._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)(local_258 + 0x10),(pmf_bb7c5cf1 *)this);
    uStack_23c = FStack_300.Number;
    local_2e0[1] = 0x2777;
    local_258._16_8_ = Input_Move;
    uStack_240 = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x2777) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x2777) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b5dea;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1e8 = local_2e0 + 1;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(int)local_2e0 + 8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2777,
               (bool *)(local_1f8 + 0x10));
    piVar20 = (int *)((longlong)local_2e0[2] * 0x50 + *(longlong *)this_00);
LAB_14b8b5dea:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_100 = CONCAT44(uStack_23c,uStack_240);
    local_108 = (code *)local_258._16_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)local_238,(pmf_bb7c5cf1 *)this);
    local_238._12_4_ = FStack_300.Number;
    local_2d4 = 0x2779;
    local_238._0_8_ = Input_Move;
    local_238._8_4_ = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x2779) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x2779) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b5ec0;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1b8 = &local_2d4;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)&local_2d0,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x2779,
               (bool *)(local_1f8 + 0x40));
    piVar20 = (int *)((longlong)local_2d0 * 0x50 + *(longlong *)this_00);
LAB_14b8b5ec0:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_f0 = CONCAT44(local_238._12_4_,local_238._8_4_);
    local_f8 = (code *)local_238._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)(local_238 + 0x10),(pmf_bb7c5cf1 *)this);
    local_2cc = 0x7536;
    local_238._16_8_ = Input_ControlMode;
    uStack_21c = FStack_300.Number;
    uStack_220 = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x7536) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x7536) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b5f9e;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1b0 = (longlong)&local_2cc;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)&local_2c8,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x7536,
               (bool *)(local_1f8 + 0x48));
    piVar20 = (int *)((longlong)local_2c8 * 0x50 + *(longlong *)this_00);
LAB_14b8b5f9e:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_e0 = CONCAT44(uStack_21c,uStack_220);
    local_e8 = (code *)local_238._16_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)local_218,(pmf_bb7c5cf1 *)this);
    local_2c4 = 0x4e2b;
    local_218._0_8_ = Input_CharacterInfo;
    local_218._12_4_ = FStack_300.Number;
    local_218._8_4_ = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x4e2b) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x4e2b) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b607d;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1a8 = (longlong)&local_2c4;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_2c0,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2b,
               (bool *)(local_1f8 + 0x50));
    piVar20 = (int *)((longlong)local_2c0[0] * 0x50 + *(longlong *)this_00);
LAB_14b8b607d:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_d0 = CONCAT44(local_218._12_4_,local_218._8_4_);
    local_d8 = (code *)local_218._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)local_278,(pmf_bb7c5cf1 *)this);
    local_2c0[1] = 0x4e2a;
    local_278._0_8_ = Input_Invectory;
    local_278._12_4_ = FStack_300.Number;
    local_278._8_4_ = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x4e2a) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x4e2a) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b615d;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_1a0 = local_2c0 + 1;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)(local_2c0 + 2),(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2a,
               (bool *)(local_1f8 + 0x58));
    piVar20 = (int *)((longlong)local_2c0[2] * 0x50 + *(longlong *)this_00);
LAB_14b8b615d:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_c0 = CONCAT44(local_278._12_4_,local_278._8_4_);
    local_c8 = (code *)local_278._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)(local_218 + 0x10),(pmf_bb7c5cf1 *)this);
    local_2b4 = 0x4e2d;
    local_218._16_8_ = Input_WorldMap;
    uStack_1fc = FStack_300.Number;
    uStack_200 = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x4e2d) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x4e2d) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b623d;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_178 = &local_2b4;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_2b0,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2d,
               (bool *)(local_1f8 + 0x80));
    piVar20 = (int *)((longlong)local_2b0[0] * 0x50 + *(longlong *)this_00);
LAB_14b8b623d:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_70 = CONCAT44(uStack_1fc,uStack_200);
    local_78 = (code *)local_218._16_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)local_1f8,(pmf_bb7c5cf1 *)this);
    local_2b0[1] = 0x4e2f;
    local_1f8._0_8_ = Input_TotalMenu;
    local_1f8._12_4_ = FStack_300.Number;
    local_1f8._8_4_ = 0;
    if (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x34) {
      puVar17 = *(undefined1 **)puVar1;
      if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
        puVar17 = &(pUVar13->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar18 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar13->OnInputEvent).Subscriptions.field_0x48 - 1U & 0x4e2f) * 4
                       );
      if (iVar18 != -1) {
        do {
          piVar20 = (int *)((longlong)iVar18 * 0x50 + *(longlong *)this_00);
          if (*piVar20 == 0x4e2f) {
            if (piVar20 != (int *)0x0) goto LAB_14b8b631d;
            break;
          }
          iVar18 = piVar20[0x12];
        } while (iVar18 != -1);
      }
    }
    local_170 = local_2b0 + 1;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)(local_2b0 + 2),(TKeyInitializer<EDS_KeyActionType_const_&> *)0x4e2f,
               (bool *)(local_1f8 + 0x88));
    piVar20 = (int *)((longlong)local_2b0[2] * 0x50 + *(longlong *)this_00);
LAB_14b8b631d:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar20 + 2),this);
    lStack_a0 = CONCAT44(local_1f8._12_4_,local_1f8._8_4_);
    local_a8 = (code *)local_1f8._0_8_;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<ADS_PlayerController>
              (piVar20 + 2,(ADS_PlayerController *)(local_150 + 0x28),(pmf_bb7c5cf1 *)this);
  }
  IPlatformInputDeviceMapper::Get();
  local_318.FunctionName = (FName)((ulonglong)local_318.FunctionName & 0xffffffff00000000);
  local_318.Object = (FWeakObjectPtr)OnChangedInputDeviceConnectionChange;
  local_308 = OnChangedInputDeviceConnectionChange;
  FStack_300 = local_318.FunctionName;
  TMulticastDelegateRegistration<void___cdecl(enum_EInputDeviceConnectionState,FPlatformUserId,FInputDeviceId),FDefaultDelegateUserPolicy>
  ::AddUObject<ADS_PlayerController>
            (&IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,
             (ADS_PlayerController *)local_98,(pmf_d3743f48 *)this);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar14 = FSlateApplication::Get();
    FSlateApplication::UsePlatformCursorForCursorUser(pFVar14,true);
    pFVar14 = FSlateApplication::Get();
    FSlateApplication::SetGameAllowsFakingTouchEvents(pFVar14,false);
    pFVar14 = FSlateApplication::Get();
    FSlateApplication::SetGameIsFakingTouchEvents(pFVar14,false,(TVector2<double> *)0x0);
  }
  this_02 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if ((this_02 != (ULocalPlayer *)0x0) &&
     (this_03 = (UCommonUIActionRouterBase *)
                ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_02),
     this_03 != (UCommonUIActionRouterBase *)0x0)) {
    pTVar2 = (this_03->AnalogCursor).SharedReferenceCount.ReferenceController;
    pFVar3 = (this_03->AnalogCursor).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FCommonAnalogCursor *)0x0) {
      FUIInputConfig::FUIInputConfig
                (local_288,All,CapturePermanently_IncludingInitialMouseDown,DoNotLock,false);
      pIVar15 = IConsoleManager::Get();
      plVar16 = (longlong *)
                (**(code **)((longlong)*pIVar15 + 0xc0))
                          (pIVar15,L"CommonInput.EnableGamepadPlatformCursor");
      if (plVar16 != (longlong *)0x0) {
        lVar4 = *plVar16;
        local_290 = 0;
        local_190 = 0;
        local_198 = 0xe000000;
        local_194 = 0;
        local_188 = 0;
        local_184 = 0xf000000;
        local_180 = 0x1000000;
        (**(code **)(lVar4 + 0xa8))(plVar16,local_68,local_1f8 + 0x60);
        (**(code **)(lVar4 + 0xb0))(plVar16,&u_1);
      }
      UCommonUIActionRouterBase::SetActiveUIInputConfig(this_03,local_288,(UObject *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// ChangeInputMapping @ 14b8b8070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::ChangeInputMapping(ADS_PlayerController *this,EDS_InputMappingType param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ULocalPlayer *pUVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UInputMappingContext>_u_0 *pTVar8;
  undefined1 *puVar9;
  undefined1 auStackY_198 [32];
  uint uVar10;
  wchar_t *pwVar11;
  byte local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (this->CurrnetInputMappingType == param_1) {
    return;
  }
  pUVar4 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if (pUVar4 == (ULocalPlayer *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)pUVar4;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_PlayerController::ChangeInputMapping",0x28,Yes);
    pwVar11 = L"localPlayer is nullptr.";
    uVar10 = 0x7b1;
  }
  else {
    pUVar6 = Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UClass *)0x0) goto LAB_14b8b8148;
LAB_14b8b8176:
      pUVar6 = (UClass *)0x0;
    }
    else {
      if (pUVar6 == (UClass *)0x0) goto LAB_14b8b8176;
      UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14b8b8148:
      pUVar7 = Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
      if (pUVar7 == (UClass *)0x0) goto LAB_14b8b8176;
      iVar3 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar7->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14b8b8176;
    }
    pUVar4 = (ULocalPlayer *)
             FSubsystemCollectionBase::GetSubsystemInternal
                       ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar6);
    if (pUVar4 != (ULocalPlayer *)0x0) {
      if (*(int *)&(this->InputMappingContextMap).field_0x8 !=
          *(int *)&(this->InputMappingContextMap).field_0x34) {
        puVar9 = *(undefined1 **)&(this->InputMappingContextMap).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->InputMappingContextMap).field_0x38;
        }
        iVar3 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->InputMappingContextMap).field_0x48 - Action_Base
                                  & param_1) * 4);
        if (iVar3 != -1) {
          lVar1 = *(longlong *)&this->InputMappingContextMap;
          do {
            if (*(EDS_InputMappingType *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
              this->CurrnetInputMappingType = param_1;
              pTVar8 = &TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                        ::FindChecked(&this->InputMappingContextMap,param_1)->field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pTVar8->DebugPtr != (UInputMappingContext *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pTVar8->DebugPtr);
              }
              (this->CurrentMappingContext).field0_0x0.DebugPtr =
                   (UInputMappingContext *)*(UInputMappingContext **)pTVar8;
              DS_InputUtil::ReleaseAllKeys((APlayerController *)this);
              (**(code **)(pUVar4->_padding_ + 0x90))(&pUVar4->_padding_);
              local_158[0] = local_158[0] & 0xf9 | 1;
              (**(code **)(pUVar4->_padding_ + 0x98))
                        (&pUVar4->_padding_,(this->CurrentMappingContext).field0_0x0.DebugPtr,0,
                         local_158);
              return;
            }
            iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
          } while (iVar3 != -1);
        }
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_PlayerController::ChangeInputMapping",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Error,local_148.Ptr,0x7be,L"InputMappingContextMap not contains. %d");
      goto LAB_14b8b82a6;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)pUVar4;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"ADS_PlayerController::ChangeInputMapping",0x28,Yes);
    pwVar11 = L"nullptr inputSystem";
    uVar10 = 0x7b8;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Error,local_148.Ptr,uVar10,pwVar11);
LAB_14b8b82a6:
  if ((ULocalPlayer *)local_148._padding_ != (ULocalPlayer *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// ClearAsyncInputMappings @ 14b8b89e0

void __thiscall ADS_PlayerController::ClearAsyncInputMappings(ADS_PlayerController *this)

{
  TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
  ::Reset(&this->InputMappingContextMap);
  (this->CurrentMappingContext).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  return;
}

// CloseTotalMenuIfOpen @ 14b8b8f50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::CloseTotalMenuIfOpen(ADS_PlayerController *this)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UDS_WindowManager *this_01;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  this_01 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_01 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  UDS_WindowManager::GetCurrentClosableWindowInfo(this_01);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if ((!bVar1) || (pUVar3 = FWeakObjectPtr::Get(&local_res10), *(int *)(pUVar3 + 1) == 0xcf)) {
    UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\x01') {
        local_res10.ObjectIndex = 0;
        local_res18[0].ObjectIndex = 0;
        UDS_WindowManager::CloseWindow(this_00,TotalMenu,(uint *)local_res18,(float *)&local_res10);
      }
    }
  }
  return;
}

// ConvertInputControlTypeToMappingType @ 14b8b9060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_InputMappingType __thiscall
ADS_PlayerController::ConvertInputControlTypeToMappingType
          (ADS_PlayerController *this,EDS_InputControlType param_1)

{
  bool bVar1;
  EDS_ContentsTabFrameType EVar2;
  EDS_ChatMode EVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  UDS_ContentManager *this_01;
  FDS_ContentsTabFrameTableRow *pFVar5;
  FDS_WindowBaseTableRow *pFVar6;
  UDS_ChatEvent *pUVar7;
  EDS_InputMappingType EVar8;
  FWeakObjectPtr local_res18 [2];
  
  if (param_1 == UIMode) {
    this_00 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return UI_Base;
      }
    }
    else {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return UI_Base;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_WindowManager::GetCurrentClosableWindowInfo(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(local_res18);
      if (*(int *)(pUVar4 + 1) == 0xe1) {
        this_01 = UDS_ContentManager::GetInst();
        if (this_01 != (UDS_ContentManager *)0x0) {
          EVar2 = UDS_ContentManager::GetCurrentTabFrameID(this_01);
          pFVar5 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)EVar2,true);
          if ((pFVar5 != (FDS_ContentsTabFrameTableRow *)0x0) &&
             (pFVar6 = FDS_WindowBaseTableRow::Get((longlong)(int)pFVar5->ID_WindowBase,true),
             pFVar6 != (FDS_WindowBaseTableRow *)0x0)) {
            EVar8 = UI_Base;
            if (pFVar6->InputMappingType != None) {
              EVar8 = pFVar6->InputMappingType;
            }
            return EVar8;
          }
        }
      }
      else {
        pUVar4 = FWeakObjectPtr::Get(local_res18);
        pFVar6 = FDS_WindowBaseTableRow::Get((longlong)*(int *)(pUVar4 + 1),true);
        if (pFVar6 != (FDS_WindowBaseTableRow *)0x0) {
          EVar8 = UI_Base;
          if (pFVar6->InputMappingType != None) {
            EVar8 = pFVar6->InputMappingType;
          }
          return EVar8;
        }
      }
    }
    return UI_Base;
  }
  if (((this->InputDeviceType == GamePad) &&
      (pUVar7 = UDS_ChatEvent::GetEvent(), pUVar7 != (UDS_ChatEvent *)0x0)) &&
     (EVar3 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar7->OnQueryChatMode),
     EVar3 != Viewer)) {
    return UI_Chatting;
  }
  if (param_1 != ActionMode) {
    if (param_1 != Cursor) {
      EVar8 = None;
      if (param_1 == Construction) {
        EVar8 = Construction;
      }
      return EVar8;
    }
    if (this->InputDeviceType != KeyboardMouse) {
      EVar8 = None;
      if (this->InputDeviceType == GamePad) {
        EVar8 = Action_GamePadCursor;
      }
      return EVar8;
    }
  }
  return Action_Base;
}

// EnableActionModeCursor @ 14b8be970

void __thiscall
ADS_PlayerController::EnableActionModeCursor(ADS_PlayerController *this,bool param_1)

{
  EDS_InputFlags local_res10 [2];
  TVector<double>_u_0 local_28;
  undefined1 local_10;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (this->bActionModeCursorEnabled != param_1) {
    this->bActionModeCursorEnabled = param_1;
    if (!param_1) {
      if ((this->InputFlag & MOUSE_LEFT_PRESSED) != NONE) {
        local_res10[0] = MOUSE_LEFT_PRESSED;
        this->InputFlag = this->InputFlag & ~MOUSE_LEFT_PRESSED;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&this->RemoveInputFlagDelegate,local_res10);
        local_f = 0;
        local_b = 0;
        local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_9 = 0;
        local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_10 = 0;
        local_res10[0] = MOUSE_LEFT_RELEASED;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&ChangeInputDelegate,local_res10,(FInputActionValue *)&local_28._s_0);
      }
      if ((this->InputFlag & MOUSE_RIGHT_PRESSED) != NONE) {
        local_res10[0] = MOUSE_RIGHT_PRESSED;
        this->InputFlag = this->InputFlag & ~MOUSE_RIGHT_PRESSED;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&this->RemoveInputFlagDelegate,local_res10);
        local_f = 0;
        local_b = 0;
        local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_9 = 0;
        local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_10 = 0;
        local_res10[0] = MOUSE_RIGHT_RELEASED;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&ChangeInputDelegate,local_res10,(FInputActionValue *)&local_28._s_0);
      }
    }
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ChangeCursorStateDelegate,param_1);
  }
  return;
}

// EndPlay @ 14b8bedd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::EndPlay(ADS_PlayerController *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_WindowManager *pUVar3;
  UDS_ContentManager *pUVar4;
  UDS_InputEvent *pUVar5;
  FWeakObjectPtr local_res8;
  
  TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
  ::Reset(&this->InputMappingContextMap);
  (this->CurrentMappingContext).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  SetCursorVisible(this,true);
  ADS_GameMode::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 0x18),
               (UObject *)this);
  }
  pUVar3 = UDS_WindowManager::GetInst();
  if (pUVar3 != (UDS_WindowManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->WindowOpenCloseDelegate,this);
  }
  pUVar4 = UDS_ContentManager::GetInst();
  if (pUVar4 != (UDS_ContentManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->CloseContentEvent,this
              );
  }
  pUVar5 = UDS_InputEvent::GetEvent();
  if (pUVar5 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<ADS_PlayerController>(&pUVar5->OnInputEvent,this);
  }
  IPlatformInputDeviceMapper::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,this);
  APlayerController::EndPlay((APlayerController *)this,param_1);
  return;
}

// FindDuplicateKey @ 14b8c2fd0

EDS_KeyActionType __thiscall
ADS_PlayerController::FindDuplicateKey
          (ADS_PlayerController *this,TObjectPtr<UInputMappingContext> param_1,
          EDS_InputDeviceType param_2,EDS_KeyActionType param_3,EDS_KeyType param_4,
          EDS_KeyType param_5)

{
  int iVar1;
  longlong lVar2;
  EDS_KeyActionType EVar3;
  UInputAction *pUVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_b8 [8];
  undefined1 local_b0 [16];
  ForAnyElementType local_a0;
  UInputAction *local_98;
  TObjectPtr<UInputAction_const_>_u_0 local_90;
  FKey local_88;
  FKey local_70;
  FKey local_58;
  
  DS_InputUtil::GetKey(&local_58,param_4);
  local_b0._8_8_ = DS_InputUtil::GetInputAction(this->InputConfig,param_3);
  if ((UInputAction *)local_b0._8_8_ == (UInputAction *)0x0) {
LAB_14b8c31dc:
    EVar3 = None;
LAB_14b8c31de:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.KeyDetails.SharedReferenceCount.ReferenceController);
    return EVar3;
  }
  lVar2 = *(longlong *)param_1.field0_0x0;
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar5 = *(longlong *)(lVar2 + 0x40);
  lVar6 = (longlong)iVar1 * 0x50 + lVar5;
LAB_14b8c3046:
  if (*(int *)(lVar2 + 0x48) != iVar1) {
    `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_b8);
  }
  if (lVar5 == lVar6) goto LAB_14b8c31dc;
  if (((*(UInputAction **)(lVar5 + 0x20) == (UInputAction *)0x0) ||
      (*(UInputAction **)(lVar5 + 0x20) != (UInputAction *)local_b0._8_8_)) &&
     (*(FName *)(lVar5 + 0x28) == local_58.KeyName)) {
    local_a0.Data = *(FScriptContainerElement **)param_1.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)local_a0.Data != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a0.Data);
    }
    pUVar4 = DS_InputUtil::GetInputAction
                       ((TObjectPtr<UInputMappingContext_const_>)&local_a0,(FKey *)(lVar5 + 0x28));
    if (pUVar4 != (UInputAction *)0x0) {
      DS_InputUtil::GetTriggerChordAction((FEnhancedActionKeyMapping *)local_b0);
      if (((UInputAction *)local_b0._0_8_ != (UInputAction *)0x0) || (param_5 == None)) {
        if ((UInputAction *)local_b0._0_8_ == (UInputAction *)0x0) goto LAB_14b8c31c6;
        if (param_5 != None) {
          EVar3 = UDS_InputConfig::FindKeyActionType
                            (this->InputConfig,(UInputAction *)local_b0._0_8_,true);
          local_98 = (UInputAction *)local_b0._0_8_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UInputAction *)local_b0._0_8_ != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_b0._0_8_);
          }
          local_90 = *(TObjectPtr<UInputAction_const_>_u_0 *)param_1.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_90.DebugPtr != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
          }
          DS_InputUtil::GetKey
                    (&local_70,(TObjectPtr<UInputMappingContext>)&local_90,
                     (TObjectPtr<UInputAction_const_>)&local_98,EVar3,param_2);
          DS_InputUtil::GetKey(&local_88,param_5);
          if (local_70.KeyName == local_88.KeyName) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_88.KeyDetails.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.KeyDetails.SharedReferenceCount.ReferenceController);
LAB_14b8c31c6:
            EVar3 = UDS_InputConfig::FindKeyActionType(this->InputConfig,pUVar4,true);
            goto LAB_14b8c31de;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.KeyDetails.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.KeyDetails.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  lVar5 = lVar5 + 0x50;
  goto LAB_14b8c3046;
}

// GetCursorLock @ 14b8c4b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ADS_PlayerController::GetCursorLock(ADS_PlayerController *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  ULocalPlayer *this_00;
  UDS_CommonUIActionRouterBase *pUVar3;
  atomic<int> *paVar4;
  undefined1 uVar5;
  
  this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar3 = ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_00);
    if (pUVar3 != (UDS_CommonUIActionRouterBase *)0x0) {
      pTVar1 = *(TReferenceControllerBase<1> **)&pUVar3->field_0x40;
      lVar2 = *(longlong *)&pUVar3->field_0x38;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        paVar4 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar4 = &pTVar1->SharedReferenceCount;
        LOCK();
        *paVar4 = (atomic<int>)((int)*paVar4 + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if (lVar2 != 0) {
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar4 = (atomic<int>)((int)*paVar4 + 1);
          UNLOCK();
        }
        uVar5 = *(undefined1 *)(lVar2 + 0x15c);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return (bool)uVar5;
    }
  }
  return false;
}

// GetGamepadCursorMaxSpeed @ 14b8c6430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall ADS_PlayerController::GetGamepadCursorMaxSpeed(ADS_PlayerController *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  ULocalPlayer *this_00;
  UDS_CommonUIActionRouterBase *pUVar3;
  atomic<int> *paVar4;
  float fVar5;
  
  this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar3 = ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_00);
    if (pUVar3 != (UDS_CommonUIActionRouterBase *)0x0) {
      lVar1 = *(longlong *)&pUVar3->field_0x38;
      pTVar2 = *(TReferenceControllerBase<1> **)&pUVar3->field_0x40;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        paVar4 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar4 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar4 = (atomic<int>)((int)*paVar4 + 1);
        UNLOCK();
      }
      if (lVar1 == 0) {
        fVar5 = 0.0;
      }
      else {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar4 = (atomic<int>)((int)*paVar4 + 1);
          UNLOCK();
        }
        fVar5 = *(float *)(lVar1 + 0x154);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return fVar5;
    }
  }
  return 0.0;
}

// GetInputMappingContext @ 14b8c6d00

TObjectPtr<UInputMappingContext> __thiscall
ADS_PlayerController::GetInputMappingContext
          (ADS_PlayerController *this,EDS_InputMappingType param_1)

{
  longlong lVar1;
  TObjectPtr<UInputMappingContext> TVar2;
  TObjectPtr<UInputMappingContext>_u_0 *pTVar3;
  undefined4 in_register_00000014;
  TObjectPtr<UInputMappingContext>_u_0 TVar4;
  undefined1 *puVar5;
  EDS_InputMappingType in_R8D;
  int iVar6;
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._0_4_ = param_1;
  if (*(int *)&(this->InputMappingContextMap).field_0x8 !=
      *(int *)&(this->InputMappingContextMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->InputMappingContextMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->InputMappingContextMap).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->InputMappingContextMap).field_0x48 - Action_Base &
                              in_R8D) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->InputMappingContextMap;
      do {
        if (*(EDS_InputMappingType *)(lVar1 + (longlong)iVar6 * 0x18) == in_R8D) {
          if (iVar6 != -1) {
            pTVar3 = &TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                      ::FindChecked(&this->InputMappingContextMap,in_R8D)->field0_0x0;
            TVar2.field0_0x0 = (TObjectPtr<UInputMappingContext>_u_0)pTVar3->DebugPtr;
            (TVar4.DebugPtr)->_padding_ = (longlong)TVar2.field0_0x0;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              return (TObjectPtr<UInputMappingContext>)TVar4.DebugPtr;
            }
            if (TVar2.field0_0x0 == (UInputMappingContext *)0x0) {
              return (TObjectPtr<UInputMappingContext>)TVar4.DebugPtr;
            }
            UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
            return (TObjectPtr<UInputMappingContext>)TVar4.DebugPtr;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  (TVar4.DebugPtr)->_padding_ = 0;
  return (TObjectPtr<UInputMappingContext>)TVar4;
}

// GetLongPressTime @ 14b8c78e0

float __thiscall
ADS_PlayerController::GetLongPressTime(ADS_PlayerController *this,EDS_KeyActionType param_1)

{
  EDS_InputDeviceType EVar1;
  float fVar2;
  UInputMappingContext *local_res8;
  
  EVar1 = this->InputDeviceType;
  local_res8 = (this->CurrentMappingContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  fVar2 = DS_InputUtil::GetLongPressTime
                    (this->InputConfig,(TObjectPtr<UInputMappingContext>)&local_res8,param_1,EVar1);
  return fVar2;
}

// GetPlayerController @ 14b8c8250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> __cdecl
ADS_PlayerController::GetPlayerController(void)

{
  int iVar1;
  bool bVar2;
  UGameInstance *this;
  UWorld *this_00;
  APlayerController *pAVar3;
  UClass *pUVar4;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  APlayerController *local_res18;
  
  local_res18 = (APlayerController *)UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this = (UGameInstance *)FWeakObjectPtr::Get(&local_res10);
    this_00 = UGameInstance::GetWorld(this);
    if (this_00 != (UWorld *)0x0) {
      pAVar3 = UWorld::GetFirstPlayerController(this_00);
      if (pAVar3 == (APlayerController *)0x0) {
LAB_14b8c8311:
        pAVar3 = (APlayerController *)0x0;
      }
      else {
        pUVar4 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) goto LAB_14b8c8311;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar3 != (APlayerController *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      *(undefined8 *)in_RCX = 0;
      local_res18 = pAVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar3 != (APlayerController *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar3);
      }
      goto LAB_14b8c8352;
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res18 = (APlayerController *)0x0;
LAB_14b8c8352:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res18);
  return (TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>)in_RCX;
}

// GetPlayerRotateValue @ 14b8c8380

void __thiscall
ADS_PlayerController::GetPlayerRotateValue
          (ADS_PlayerController *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  TVector<double> *pTVar2;
  TRotator<double> local_38;
  TVector<double> local_20;
  
  local_38.Pitch = 0.0;
  local_38.Yaw = (double)param_1;
  local_38.Roll = 0.0;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&local_38,&local_20,&UE::Math::TVector<double>::RightVector);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  pTVar2 = UE::Math::TRotator<double>::RotateVector
                     (&local_38,&local_20,&UE::Math::TVector<double>::ForwardVector);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar1;
  (param_3->field0_0x0)._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// HasInputFlag @ 14b8c93c0

bool __thiscall
ADS_PlayerController::HasInputFlag(ADS_PlayerController *this,EDS_InputFlags param_1)

{
  return (this->InputFlag & param_1) != NONE;
}

// InitCursorData @ 14b8ca030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::InitCursorData(ADS_PlayerController *this)

{
  undefined1 *puVar1;
  TMap<EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CursorShapeType,void_*,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar2;
  ICursor *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128 [8];
  TPairInitializer<EDS_CursorShapeType_&&,void_*_&> local_120;
  undefined8 local_110;
  undefined8 local_108 [2];
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  FString local_c8;
  undefined1 *local_b8;
  void ***local_b0;
  FString local_a8;
  undefined1 *local_98;
  undefined8 *local_90;
  FString local_88;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FString local_48;
  
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar3 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 != (ICursor *)0x0) {
    if (*(int *)&(this->MouseCursorMap).field_0x8 != *(int *)&(this->MouseCursorMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->MouseCursorMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->MouseCursorMap).field_0x38;
      }
      iVar10 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->MouseCursorMap).field_0x48 - 1U & 1) *
                                 4);
      if (iVar10 != -1) {
        lVar4 = *(longlong *)&this->MouseCursorMap;
        do {
          if (*(char *)(lVar4 + (longlong)iVar10 * 0x18) == '\x01') goto LAB_14b8ca190;
          iVar10 = *(int *)(lVar4 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pcVar5 = *(code **)((longlong)*pIVar3 + 8);
    local_f8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pFVar7 = FPaths::ProjectContentDir((FString *)&local_e8._s_0);
    ::FString::ConcatFC(&local_c8,pFVar7,L"Slate/Img_DefCursor");
    local_120.Value = (void **)(*pcVar5)(pIVar3,&local_c8,&local_f8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if ((void *)local_e8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_e8._s_0.X);
    }
    local_b8 = local_res10;
    local_res10[0] = 1;
    local_b0 = &local_120.Value;
    TSet<TTuple<enum_EDS_CursorShapeType,void_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_CursorShapeType_&&,void_*_&>_>
              (&this->MouseCursorMap,(TPairInitializer<EDS_CursorShapeType_&&,void_*_&> *)local_128,
               (bool *)&local_b8);
LAB_14b8ca190:
    this_00 = &this->GamePadCursorMap;
    puVar8 = &(this->GamePadCursorMap).field_0x38;
    puVar1 = &(this->GamePadCursorMap).field_0x48;
    if (*(int *)&(this->GamePadCursorMap).field_0x8 != *(int *)&(this->GamePadCursorMap).field_0x34)
    {
      puVar9 = *(undefined1 **)&(this->GamePadCursorMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar8;
      }
      iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)puVar1 - 1U & 1) * 4);
      if (iVar10 != -1) {
        do {
          if (*(char *)(*(longlong *)this_00 + (longlong)iVar10 * 0x18) == '\x01') {
            if (iVar10 != -1) goto LAB_14b8ca28a;
            break;
          }
          iVar10 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pcVar5 = *(code **)((longlong)*pIVar3 + 8);
    local_e8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pFVar7 = FPaths::ProjectContentDir((FString *)&local_d8._s_0);
    ::FString::ConcatFC(&local_a8,pFVar7,L"Slate/Img_GamepadCursor_Default");
    local_68 = local_e8._0_4_;
    uStack_64 = local_e8._4_4_;
    uStack_60 = local_e8._8_4_;
    uStack_5c = local_e8._12_4_;
    local_110 = (*pcVar5)(pIVar3,&local_a8,&local_68);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if ((void *)local_d8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_d8._s_0.X);
    }
    local_98 = local_res18;
    local_res18[0] = 1;
    local_90 = &local_110;
    TSet<TTuple<enum_EDS_CursorShapeType,void_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_CursorShapeType_&&,void_*_&>_>
              (this_00,(TPairInitializer<EDS_CursorShapeType_&&,void_*_&> *)(local_128 + 4),
               (bool *)&local_98);
LAB_14b8ca28a:
    if (*(int *)&(this->GamePadCursorMap).field_0x8 != *(int *)&(this->GamePadCursorMap).field_0x34)
    {
      puVar9 = *(undefined1 **)&(this->GamePadCursorMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar8;
      }
      iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)puVar1 - 1U & 2) * 4);
      if (iVar10 != -1) {
        do {
          if (*(char *)(*(longlong *)this_00 + (longlong)iVar10 * 0x18) == '\x02')
          goto LAB_14b8ca374;
          iVar10 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pcVar5 = *(code **)((longlong)*pIVar3 + 8);
    local_d8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pFVar7 = FPaths::ProjectContentDir(&local_48);
    ::FString::ConcatFC(&local_88,pFVar7,L"Slate/Img_GamepadCursor_Hovered");
    local_58 = local_d8._0_4_;
    uStack_54 = local_d8._4_4_;
    uStack_50 = local_d8._8_4_;
    uStack_4c = local_d8._12_4_;
    local_108[0] = (*pcVar5)(pIVar3,&local_88,&local_58);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_78 = local_res20;
    local_res20[0] = 2;
    local_70 = local_108;
    TSet<TTuple<enum_EDS_CursorShapeType,void_*>,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_CursorShapeType_&&,void_*_&>_>
              (this_00,&local_120,(bool *)&local_78);
  }
LAB_14b8ca374:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// Input_ActionNormalAttack @ 14b8cc810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_ActionNormalAttack(ADS_PlayerController *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_CharStateData *this_01;
  UObject *pUVar2;
  EDS_CharDetailState aEStackX_8 [2];
  FWeakObjectPtr FStackX_10;
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  undefined8 auStack_28 [3];
  
  if (this->bActionModeCursorEnabled == true) {
    return;
  }
  this_00 = &this->OwnerCharacter;
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    return;
  }
  FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_CharStateData::GetData((ulong64)&FStackX_20);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&FStackX_20,(void *)0x0);
  if (bVar1) {
    return;
  }
  this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStackX_20);
  aEStackX_8[0] = PlayerSkill_InstallCamp;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_01,aEStackX_8);
  if (!bVar1) {
    aEStackX_8[0]._0_1_ = Hit;
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
              ((ulong64 *)&FStackX_10,&pUVar2[0x29].field_0x18);
    bVar1 = FWeakObjectPtr::IsValid(&FStackX_10);
    if (!bVar1) {
      return;
    }
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&FStackX_18);
    bVar1 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&FStackX_18,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&FStackX_18);
      *(undefined1 *)(pUVar2 + 0xc) = 1;
      pUVar2 = FWeakObjectPtr::Get(&FStackX_10);
      if ((pUVar2[4].field_0x20 == '\x01') ||
         (pUVar2 = FWeakObjectPtr::Get(&FStackX_10), pUVar2[4].field_0x20 == '\x02')) {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        aEStackX_8[0] = CONCAT31(aEStackX_8[0]._1_3_,0xf);
      }
      else {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        aEStackX_8[0] = CONCAT31(aEStackX_8[0]._1_3_,0xe);
      }
      auStack_28[0] = 0;
      FDS_EntityBase::TryActivateAbility
                ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,(EDS_AbilityTagType *)aEStackX_8,
                 (TObjectPtr<UWN_AbilityContext>)auStack_28);
      pUVar2 = FWeakObjectPtr::Get(&FStackX_18);
      *(undefined1 *)(pUVar2 + 0xc) = 0;
      CloseTotalMenuIfOpen(this);
      return;
    }
    return;
  }
  return;
}

// Input_ActionNormalAttackTriggered @ 14b8cc830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_ActionNormalAttackTriggered(ADS_PlayerController *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UObject *pUVar2;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_01;
  EDS_CharDetailState aEStackX_10 [2];
  FWeakObjectPtr FStackX_18;
  FWeakObjectPtr FStackX_20;
  undefined8 auStack_18 [2];
  
  if (this->bActionModeCursorEnabled == true) {
    return;
  }
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if ((bVar1) || (this->InputControlType == ActionMode)) {
    this_01 = &this->OwnerCharacter;
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
    if (!bVar1) {
      FWeakObjectPtr::Get(&this_01->WeakPtr);
      UDS_CharStateData::GetData((ulong64)&FStackX_20);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&FStackX_20,(void *)0x0
                        );
      if (!bVar1) {
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStackX_20);
        aEStackX_10[0] = PlayerSkill_InstallCamp;
        bVar1 = UDS_CharStateData::HasCharDetailState(this_00,aEStackX_10);
        if (!bVar1) {
          FWeakObjectPtr::Get(&this_01->WeakPtr);
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&FStackX_18);
          bVar1 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&FStackX_18,
                             (void *)0x0);
          if (!bVar1) {
            pUVar2 = FWeakObjectPtr::Get(&FStackX_18);
            *(undefined1 *)(pUVar2 + 0xc) = 1;
            pUVar2 = FWeakObjectPtr::Get(&this_01->WeakPtr);
            auStack_18[0] = 0;
            aEStackX_10[0] = CONCAT31(aEStackX_10[0]._1_3_,0xe);
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,(EDS_AbilityTagType *)aEStackX_10,
                       (TObjectPtr<UWN_AbilityContext>)auStack_18);
            pUVar2 = FWeakObjectPtr::Get(&FStackX_18);
            *(undefined1 *)(pUVar2 + 0xc) = 0;
          }
        }
      }
    }
  }
  return;
}

// Input_AirWalk_Dash @ 14b8cc850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_AirWalk_Dash(ADS_PlayerController *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    FDS_EntityBase::TryActivateAirWalkAbility
              ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,AirWalk_Dash);
    return;
  }
  return;
}

// Input_AirWalk_DashAttack @ 14b8cc8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_AirWalk_DashAttack(ADS_PlayerController *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    FDS_EntityBase::TryActivateAirWalkAbility
              ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,AirWalk_DashAttack);
    return;
  }
  return;
}

// Input_AirWalk_Hovering @ 14b8cc8f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_AirWalk_Hovering(ADS_PlayerController *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    FDS_EntityBase::TryActivateAirWalkAbility
              ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,AirWalk_Hovering);
    return;
  }
  return;
}

// Input_AirWalk_Jump @ 14b8cc940

void __thiscall ADS_PlayerController::Input_AirWalk_Jump(ADS_PlayerController *this)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    ADS_MainCharacter::TryJump(this_00);
    return;
  }
  return;
}

// Input_AirWalk_PowerJump @ 14b8cc980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_AirWalk_PowerJump(ADS_PlayerController *this)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AbilityTagType local_res8 [8];
  undefined8 local_res10 [3];
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    local_res10[0] = 0;
    local_res8[0] = Climbing;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,local_res8,
               (TObjectPtr<UWN_AbilityContext>)local_res10);
  }
  return;
}

// Input_AnyKey @ 14b8cc9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_AnyKey(ADS_PlayerController *this,FInputActionValue *param_1)

{
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *this_00;
  FKey *pFVar1;
  EDS_GameOptionType EVar2;
  EDS_InputMappingType EVar3;
  UPlayerInput *this_01;
  TReferenceControllerBase<1> *pTVar4;
  FKeyDetails *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  EDS_KeyActionType EVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  bool bVar11;
  EDS_KeyActionType EVar12;
  int iVar13;
  FName *pFVar14;
  FName FVar15;
  UDS_LogManager *pUVar16;
  UDS_GameOptionManager *this_02;
  FString *pFVar17;
  size_t sVar18;
  UClass *pUVar19;
  UEnum *this_03;
  FDS_KeyTypeDataTableRow *pFVar20;
  FDS_GameOptionBaseTableRow *pFVar21;
  TObjectPtr<UInputMappingContext> *pTVar22;
  UDS_CommonPopupManager *this_04;
  UDS_M_CommonPopup *pUVar23;
  FDS_Text *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  TObjectPtr<UInputMappingContext> TVar27;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *pTVar28;
  UDS_InputEvent *pUVar29;
  ulonglong uVar30;
  wchar_t *pwVar31;
  undefined1 *puVar32;
  EDS_KeyType EVar33;
  ForAnyElementType this_05;
  EDS_KeyType EVar34;
  undefined1 auStackY_598 [32];
  EDS_InputDeviceType local_548 [8];
  FWeakObjectPtr local_540;
  EDS_KeyActionType local_538 [2];
  FWeakObjectPtr local_530;
  FString local_528;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_518;
  TArray<FKey,TSizedDefaultAllocator<32>_> local_508;
  ulonglong local_4f8;
  EDS_KeyType local_4f0;
  EDS_KeyType local_4ec;
  FKey local_4e8;
  undefined1 local_4d0 [8];
  FDelegateAllocation local_4c8;
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  undefined8 local_4a0;
  UInputMappingContext *local_498;
  ADS_PlayerController *local_490;
  ADS_PlayerController *local_488;
  TObjectPtr<UInputMappingContext>_u_0 local_480;
  UDS_GameOptionData *local_478;
  FScriptContainerElement *local_468;
  int iStack_460;
  int iStack_45c;
  FString local_458;
  initializer_list<EDS_KeyType> local_448;
  FString local_438;
  FString local_428;
  FDS_Text local_418;
  FKey local_3c8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_3b0;
  FDestructionSentinel local_398;
  FDelegateAllocation *local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  FName local_340;
  undefined1 local_338 [40];
  FName local_310;
  FString local_308;
  TStringView<wchar_t> local_2f8;
  FKeyDetails *local_2e8;
  TReferenceControllerBase<1> *pTStack_2e0;
  undefined1 local_2d8 [16];
  FDS_Text local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_598;
  if (this->KeyChangeGameOptionID == None) {
    return;
  }
  if (this->_padding_ == 0) {
    return;
  }
  local_4e8.KeyName.ComparisonIndex.Value = 0;
  local_4e8.KeyName.Number = 0;
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  local_4e8.KeyDetails.Object = (FKeyDetails *)0x0;
  local_4e8.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  EKeys::GetAllKeys(&local_508);
  iVar13 = local_508.ArrayNum;
  uVar30 = (ulonglong)local_508.ArrayNum;
  pFVar1 = (FKey *)(local_508.AllocatorInstance.Data + uVar30 * 0x18);
  this_05.Data = local_508.AllocatorInstance.Data;
  do {
    if ((int)uVar30 != iVar13) {
      local_548[0] = None;
      `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()(local_548);
    }
    if ((FKey *)this_05.Data == pFVar1) goto LAB_14b8ccb79;
    local_3c8.KeyName = ((FKey *)this_05.Data)->KeyName;
    this_01 = (UPlayerInput *)this->_padding_;
    local_3c8.KeyDetails.Object = (((FKey *)this_05.Data)->KeyDetails).Object;
    local_3c8.KeyDetails.SharedReferenceCount.ReferenceController =
         (((FKey *)this_05.Data)->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar10 = UPlayerInput::WasJustPressed(this_01,&local_3c8);
    if (bVar10) {
      pFVar14 = ::FName::FName(&local_340,"AnyKey");
      FVar15 = FKey::GetFName((FKey *)this_05.Data);
      if (*(FName *)FVar15 != *pFVar14) {
        pFVar14 = ::FName::FName((FName *)(local_338 + 0x10),"LeftControl");
        FVar15 = FKey::GetFName((FKey *)this_05.Data);
        if ((*(FName *)FVar15 != *pFVar14) &&
           (bVar10 = FKey::IsAnalog((FKey *)this_05.Data),
           FVar9.ReferenceController = local_4e8.KeyDetails.SharedReferenceCount.ReferenceController
           , !bVar10)) break;
      }
    }
    uVar30 = local_508._8_8_ & 0xffffffff;
    this_05.Data = this_05.Data + 0x18;
  } while( true );
  local_4e8.KeyName = ((FKey *)this_05.Data)->KeyName;
  pTVar4 = (((FKey *)this_05.Data)->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar5 = (((FKey *)this_05.Data)->KeyDetails).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2e8 = local_4e8.KeyDetails.Object;
  pTStack_2e0 = local_4e8.KeyDetails.SharedReferenceCount.ReferenceController;
  local_4e8.KeyDetails.Object = pFVar5;
  local_4e8.KeyDetails.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
LAB_14b8ccb79:
  bVar10 = FKey::IsValid(&local_4e8);
  if (!bVar10) goto LAB_14b8cd4c6;
  bVar10 = UPlayerInput::IsCtrlPressed((UPlayerInput *)this->_padding_);
  pUVar16 = UDS_LogManager::GetInst();
  iVar13 = 0;
  if (pUVar16 != (UDS_LogManager *)0x0) {
    pUVar16 = UDS_LogManager::GetInst();
    FKey::ToString(&local_4e8,&local_308);
    EVar2 = this->KeyChangeGameOptionID;
    ::FString::FString(&local_428,"EDS_GameOptionType");
    DS_Util::GetEnumToString((FString *)(local_338 + 0x18),&local_428,(longlong)(int)EVar2);
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"ADS_PlayerController::Input_AnyKey",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar16,1,Display,local_278.Ptr,0x6cf,L"KeyChange[%s] receivedKey: %s (%s)");
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if ((void *)local_338._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_338._24_8_);
    }
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  this_02 = UDS_GameOptionManager::GetInst();
  if ((this_02 == (UDS_GameOptionManager *)0x0) ||
     (local_478 = UDS_GameOptionManager::GetGameOptionData(this_02,this->KeyChangeGameOptionID),
     local_478 == (UDS_GameOptionData *)0x0)) goto LAB_14b8cd4c6;
  ::FString::FString(&local_528,"EDS_KeyType");
  pFVar17 = FKey::ToString(&local_4e8,&local_458);
  if (local_528.Data.ArrayNum == 0) {
    local_468 = (FScriptContainerElement *)0x15060d16c;
LAB_14b8ccd35:
    sVar18 = wcslen((wchar_t *)local_468);
    iVar13 = (int)sVar18;
  }
  else {
    local_468 = local_528.Data.AllocatorInstance.Data;
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14b8ccd35;
  }
  iStack_460 = iVar13;
  pUVar19 = Z_Construct_UClass_UEnum_NoRegister();
  local_2f8._12_4_ = iStack_45c;
  local_2f8.Size = iStack_460;
  local_2f8.DataPtr = (wchar_t *)local_468;
  this_03 = (UEnum *)StaticFindFirstObjectSafe(pUVar19,&local_2f8,None,NoLogging,(wchar_t *)0x0);
  if ((pFVar17->Data).ArrayNum == 0) {
    pwVar31 = L"";
  }
  else {
    pwVar31 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  pFVar14 = ::FName::FName(&local_310,pwVar31);
  local_4f8 = UEnum::GetValueByName(this_03,*pFVar14,None);
  pFVar6 = (pFVar17->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  uVar30 = local_4f8;
  EVar33 = (EDS_KeyType)local_4f8;
  if (EVar33 != None) {
    if (EVar33 == Escape) {
      local_530.ObjectIndex = 0;
      local_530.ObjectSerialNumber = 0;
      local_4a0 = 0;
      FWeakObjectPtr::operator=(&local_530,(FObjectPtr)&local_4a0);
      OnGameOptionKeyChangeCanceled
                (this,(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)local_530);
    }
    else {
      pFVar20 = FDS_KeyTypeDataTableRow::Get((longlong)(int)EVar33,true);
      if ((pFVar20 == (FDS_KeyTypeDataTableRow *)0x0) || (pFVar20->IsCanChange != false)) {
        pFVar21 = FDS_GameOptionBaseTableRow::Get((longlong)(int)this->KeyChangeGameOptionID,true);
        if (pFVar21 != (FDS_GameOptionBaseTableRow *)0x0) {
          if (((pFVar21->DefaultValue).ArrayNum < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_538[0] = *(EDS_KeyActionType *)(pFVar21->DefaultValue).AllocatorInstance.Data;
          local_530.ObjectIndex = local_538[0];
          if ((((local_538[0] + ~None < 0x186a4) &&
               (local_548[0] = (EDS_InputDeviceType)pFVar21->Value1,
               (byte)(local_548[0] - KeyboardMouse) < 2)) &&
              (EVar3 = pFVar21->Value2, EVar3 - Action_Base < 0x12d)) &&
             (this_00 = &this->InputMappingContextMap,
             *(int *)&(this->InputMappingContextMap).field_0x8 !=
             *(int *)&(this->InputMappingContextMap).field_0x34)) {
            puVar32 = *(undefined1 **)&(this->InputMappingContextMap).field_0x40;
            if (puVar32 == (undefined1 *)0x0) {
              puVar32 = &(this->InputMappingContextMap).field_0x38;
            }
            iVar13 = *(int *)(puVar32 +
                             (ulonglong)
                             (*(int *)&(this->InputMappingContextMap).field_0x48 - Action_Base &
                             EVar3) * 4);
            if (iVar13 != -1) {
              do {
                if (*(EDS_InputMappingType *)(*(longlong *)this_00 + (longlong)iVar13 * 0x18) ==
                    EVar3) {
                  EVar34 = -(uint)bVar10 & LeftControl;
                  pTVar22 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                            ::FindChecked(this_00,EVar3);
                  local_498 = (pTVar22->field0_0x0).DebugPtr;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_498 != (UInputMappingContext *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_498);
                  }
                  uVar30 = uVar30 & 0xffffffff;
                  EVar12 = FindDuplicateKey(this,(TObjectPtr<UInputMappingContext>)&local_498,
                                            local_548[0],local_530.ObjectIndex,EVar33,
                                            -(uint)bVar10 & LeftControl);
                  EVar8 = local_538[0];
                  local_530.ObjectIndex = EVar12;
                  if (EVar12 == None) {
                    pTVar22 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                              ::FindChecked(this_00,EVar3);
                    local_480.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar22->field0_0x0).DebugPtr;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_480.DebugPtr != (UInputMappingContext *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)local_480.DebugPtr);
                    }
                    TVar27 = DS_InputUtil::OverrideKey
                                       ((UDS_InputConfig *)local_338,
                                        (TObjectPtr<UInputMappingContext>)this->InputConfig,
                                        (EDS_KeyActionType)&local_480,(EDS_InputDeviceType)EVar8,
                                        (EDS_KeyType)CONCAT71((int7)(uVar30 >> 8),local_548[0]),
                                        EVar33);
                    pTVar22 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                              ::FindChecked(this_00,EVar3);
                    TObjectPtr<UInputMappingContext>::operator=
                              (pTVar22,(TObjectPtr<UInputMappingContext> *)TVar27.field0_0x0);
                    local_4f0 = (EDS_KeyType)local_4f8;
                    local_448._First = &local_4f0;
                    this->KeyChangeGameOptionID = None;
                    local_448._Last = (EDS_KeyType *)&local_4e8;
                    local_4ec = EVar34;
                    pTVar28 = TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>::
                              TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>
                                        (local_2d8,&local_448);
                    UDS_GameOptionData::SetGameOptionKeyValue
                              (local_478,this->KeyChangeIndex,pTVar28);
                    pUVar29 = UDS_InputEvent::GetEvent();
                    if (pUVar29 != (UDS_InputEvent *)0x0) {
                      FDS_EventDelegate<enum_EDS_KeyActionType_const_&>::Broadcast
                                (&pUVar29->OnChangeInputKey,local_538);
                    }
                  }
                  else {
                    pUVar16 = UDS_LogManager::GetInst();
                    if (pUVar16 != (UDS_LogManager *)0x0) {
                      pUVar16 = UDS_LogManager::GetInst();
                      ::FString::FString(&local_438,"EDS_KeyActionType");
                      DS_Util::GetEnumToString
                                (&local_358,&local_438,(longlong)local_530.ObjectIndex);
                      local_158._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_158,"ADS_PlayerController::Input_AnyKey",0x22,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar16,1,Display,local_158.Ptr,0x714,L"duplicateKey : %s");
                      if ((void *)local_158._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_158._padding_);
                      }
                      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_358.Data.AllocatorInstance.Data);
                      }
                      if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_438.Data.AllocatorInstance.Data);
                      }
                    }
                    this_04 = UDS_CommonPopupManager::GetInst();
                    if ((this_04 != (UDS_CommonPopupManager *)0x0) &&
                       (bVar10 = UDS_CommonPopupManager::IsPopupOpened(this_04), !bVar10)) {
                      UDS_CommonPopupManager::CreateCommonPopup(this_04);
                      bVar10 = FWeakObjectPtr::IsValid(&local_540);
                      if (bVar10) {
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        pFVar24 = FDS_Text::FromStringTable(&local_2c8,StringUi,2);
                        UDS_M_CommonPopup::SetTitle(pUVar23,pFVar24);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        local_418.StringTableType = None;
                        local_418.StringTableID = 0;
                        local_418.StringEnumTableNameID.ComparisonIndex.Value = 0;
                        local_418.StringEnumTableNameID.Number = 0;
                        local_418.TimeExpressionType = None;
                        local_418.DateTime.Ticks = 0;
                        local_418.TimeSpan.Ticks = 0;
                        local_418.IsExpression = false;
                        local_418.UniqueString.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)0x0;
                        local_418.UniqueString.Data.ArrayNum = 0;
                        local_418.UniqueString.Data.ArrayMax = 0;
                        local_418.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
                        ;
                        local_418.FormatArgs.ArrayNum = 0;
                        local_418.FormatArgs.ArrayMax = 0;
                        local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_518.ArrayNum = 0;
                        local_518.ArrayMax = 0;
                        iVar13 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x828,&local_518.AllocatorInstance,&local_518.ArrayMax);
                        local_518.ArrayNum = iVar13 + 1;
                        FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_const_&>
                                  ((FDS_TextFormatArg *)
                                   (local_518.AllocatorInstance.Data + (longlong)iVar13 * 0x28),
                                   &pFVar21->ID_OptionName);
                        FDS_Text::SetTextFormatFromStringTable
                                  (&local_418,StringUi,0x31ce3,&local_518);
                        DestructItems<FDS_TextFormatArg,int>
                                  ((FDS_TextFormatArg *)local_518.AllocatorInstance.Data,
                                   local_518.ArrayNum);
                        if ((FDS_TextFormatArg *)local_518.AllocatorInstance.Data !=
                            (FDS_TextFormatArg *)0x0) {
                          FMemory::Free(local_518.AllocatorInstance.Data);
                        }
                        UDS_M_CommonPopup::SetMainContent(pUVar23,&local_418);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        UDS_M_CommonPopup::SetButton(pUVar23,ButtonCancel,StringUi,0x66,false);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        local_528.Data.ArrayMax = local_458.Data.ArrayMax;
                        local_528.Data.ArrayNum = 0;
                        local_528.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)OnGameOptionKeyChangeCanceled;
                        local_4d0 = (undefined1  [8])0x0;
                        local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                        local_4c8.DelegateSize = 0;
                        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                                   local_4d0,(FWriteAccessScope *)&local_378);
                        local_360 = &local_4c8;
                        puVar25 = UE::Core::Private::DelegateAllocate(0x30,&local_4c8);
                        if (puVar25 != (undefined8 *)0x0) {
                          *puVar25 = &
                                     ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                          ;
                          uVar26 = FDelegateHandle::GenerateNewID();
                          puVar25[2] = uVar26;
                          *puVar25 = &
                                     ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                          ;
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)this);
                          }
                          puVar25[3] = 0;
                          local_490 = this;
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)this);
                          }
                          FWeakObjectPtr::operator=
                                    ((FWeakObjectPtr *)(puVar25 + 3),(FObjectPtr)&local_490);
                          puVar25[4] = local_528.Data.AllocatorInstance.Data;
                          puVar25[5] = CONCAT44(local_528.Data.ArrayMax,local_528.Data.ArrayNum);
                        }
                        if (local_378.bDestroyed == false) {
                          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                    (local_378.Accessor,&local_378);
                        }
                        UDS_M_CommonPopup::SetDelegate
                                  (pUVar23,ButtonCancel,
                                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                                    *)local_4d0);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        UDS_M_CommonPopup::SetButton(pUVar23,ButtonConfirm,StringUi,0x65,false);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        local_528.Data.ArrayMax = local_458.Data.ArrayMax;
                        local_528.Data.ArrayNum = 0;
                        local_528.Data.AllocatorInstance.Data =
                             (FScriptContainerElement *)OnGameOptionKeyChange;
                        local_4b8 = (undefined1  [8])0x0;
                        local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                        local_4b0.DelegateSize = 0;
                        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                                   local_4b8,(FWriteAccessScope *)&local_398);
                        local_380 = &local_4b0;
                        puVar25 = UE::Core::Private::DelegateAllocate(0x40,&local_4b0);
                        if (puVar25 != (undefined8 *)0x0) {
                          *puVar25 = &
                                     ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_InputMappingType__W4EDS_KeyActionType__W4EDS_InputDeviceType__W4EDS_KeyType__W46___6B_
                          ;
                          *(EDS_InputMappingType *)(puVar25 + 1) = EVar3;
                          *(EDS_InputDeviceType *)(puVar25 + 2) = local_548[0];
                          *(int *)((longlong)puVar25 + 0x14) = (int)local_4f8;
                          *(EDS_KeyActionType *)((longlong)puVar25 + 0xc) = local_538[0];
                          *(EDS_KeyType *)(puVar25 + 3) = EVar34;
                          uVar26 = FDelegateHandle::GenerateNewID();
                          puVar25[4] = uVar26;
                          *puVar25 = &
                                     ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_InputMappingType__W4EDS_KeyActionType__W4EDS_InputDeviceType__W4EDS_KeyType__W47___6B_
                          ;
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)this);
                          }
                          puVar25[5] = 0;
                          local_488 = this;
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)this);
                          }
                          FWeakObjectPtr::operator=
                                    ((FWeakObjectPtr *)(puVar25 + 5),(FObjectPtr)&local_488);
                          puVar25[6] = local_528.Data.AllocatorInstance.Data;
                          puVar25[7] = CONCAT44(local_528.Data.ArrayMax,local_528.Data.ArrayNum);
                        }
                        if (local_398.bDestroyed == false) {
                          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                                    (local_398.Accessor,&local_398);
                        }
                        UDS_M_CommonPopup::SetDelegate
                                  (pUVar23,ButtonConfirm,
                                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                                    *)local_4b8);
                        pUVar23 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_540);
                        UDS_M_CommonPopup::OpenCommonPopup(pUVar23);
                      }
                    }
                  }
                  break;
                }
                iVar13 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar13 * 0x18);
              } while (iVar13 != -1);
            }
          }
        }
      }
      else {
        local_3b0._0_8_ = 0;
        local_3b0._8_8_ = 0;
        local_3b0._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x31ce4,Popup_Close_None_01,&local_3b0);
      }
    }
  }
LAB_14b8cd4c6:
  DestructItems<FKey,int>((FKey *)local_508.AllocatorInstance.Data,local_508.ArrayNum);
  if ((FKey *)local_508.AllocatorInstance.Data != (FKey *)0x0) {
    FMemory::Free(local_508.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e8.KeyDetails.SharedReferenceCount.ReferenceController);
  return;
}

// Input_Avoid @ 14b8cd530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_Avoid(ADS_PlayerController *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_SkillDataSet *this_01;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  EDS_AbilityTagType local_b8 [8];
  FWeakObjectPtr local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this_00 = &this->OwnerCharacter;
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_b0);
    bVar1 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_b0,(void *)0x0);
    if (!bVar1) {
      this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_b0);
      UDS_SkillDataSet::ClearReservedSkill(this_01);
    }
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FObjectInitializer::AssertIfInConstructor
              (pUVar2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_SkillAbilityContext_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._8_8_ = pUVar2;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_a8[0] = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_b8[0] = Avoid_Process;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)&pUVar4[0x29].field_0x10,local_b8,
               (TObjectPtr<UWN_AbilityContext>)local_a8);
  }
  return;
}

// Input_CameraCompleted @ 14b8cd690

void __thiscall
ADS_PlayerController::Input_CameraCompleted(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags EVar1;
  EDS_InputFlags local_res18 [4];
  
  EVar1 = this->InputFlag;
  local_res18[0] = GAMEPAD_ROTATE_START;
  if (FDS_RingCommandService::bIsRingCommandKeyPressed) {
    if ((EVar1 & GAMEPAD_ROTATE_START) != NONE) {
      this->InputFlag = EVar1 & ~GAMEPAD_ROTATE_START;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_TRIGGERED;
    if ((this->InputFlag & GAMEPAD_ROTATE_TRIGGERED) != NONE) {
      this->InputFlag = this->InputFlag & ~GAMEPAD_ROTATE_TRIGGERED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
      return;
    }
  }
  else {
    if ((EVar1 & GAMEPAD_ROTATE_START) != NONE) {
      this->InputFlag = EVar1 & ~GAMEPAD_ROTATE_START;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_TRIGGERED;
    if ((this->InputFlag & GAMEPAD_ROTATE_TRIGGERED) != NONE) {
      this->InputFlag = this->InputFlag & ~GAMEPAD_ROTATE_TRIGGERED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_END;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res18,param_1);
  }
  return;
}

// Input_CameraReset @ 14b8cd7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_CameraReset(ADS_PlayerController *this,FInputActionValue *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_CameraReset",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x42b,L"Input_CameraReset");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// Input_CameraStart @ 14b8cd870

void __thiscall
ADS_PlayerController::Input_CameraStart(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags local_res18 [4];
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    local_res18[0] = GAMEPAD_ROTATE_START;
    if ((this->InputFlag & GAMEPAD_ROTATE_START) == NONE) {
      this->InputFlag = this->InputFlag | GAMEPAD_ROTATE_START;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->AddInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_START;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res18,param_1);
  }
  return;
}

// Input_CameraTriggered @ 14b8cd8e0

void __thiscall
ADS_PlayerController::Input_CameraTriggered(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags EVar1;
  EDS_InputFlags local_res18 [4];
  
  EVar1 = this->InputFlag;
  if (FDS_RingCommandService::bIsRingCommandKeyPressed) {
    local_res18[0] = GAMEPAD_ROTATE_START;
    if ((EVar1 & GAMEPAD_ROTATE_START) != NONE) {
      this->InputFlag = EVar1 & ~GAMEPAD_ROTATE_START;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_TRIGGERED;
    if ((this->InputFlag & GAMEPAD_ROTATE_TRIGGERED) != NONE) {
      this->InputFlag = this->InputFlag & ~GAMEPAD_ROTATE_TRIGGERED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res18);
      return;
    }
  }
  else {
    local_res18[0] = GAMEPAD_ROTATE_TRIGGERED;
    if ((EVar1 & GAMEPAD_ROTATE_TRIGGERED) == NONE) {
      this->InputFlag = EVar1 | GAMEPAD_ROTATE_TRIGGERED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->AddInputFlagDelegate,local_res18);
    }
    local_res18[0] = GAMEPAD_ROTATE_TRIGGERED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res18,param_1);
  }
  return;
}

// Input_CharacterInfo @ 14b8cd9b0

void __thiscall
ADS_PlayerController::Input_CharacterInfo
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ContentManager *this_00;
  EDS_TotalMenuId local_res18 [4];
  
  if (param_2 == Triggered) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_res18[0] = Character;
      UDS_ContentManager::OpenContent(this_00,local_res18);
    }
  }
  return;
}

// Input_ControlMode @ 14b8cd9f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_ControlMode
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  FWeakObjectPtr local_18 [2];
  
  if (param_2 != Triggered) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14b8cda47;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14b8cda47;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_WindowManager::GetCurrentClosableWindowInfo(this_00);
  bVar1 = FWeakObjectPtr::IsValid(local_18);
  if (bVar1) {
    return;
  }
LAB_14b8cda47:
  if (this->InputDeviceType == GamePad) {
    SetInputControlType(this,(this->InputControlType != ActionMode) + Cursor,false);
    bVar1 = this->InputControlType != ActionMode;
  }
  else {
    if (this->InputControlType == UIMode) {
      return;
    }
    bVar1 = this->bActionModeCursorEnabled == false;
  }
  EnableActionModeCursor(this,bVar1);
  RefreshInputCursorSettings(this);
  return;
}

// Input_Interaction @ 14b8cdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_Interaction(ADS_PlayerController *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  ADS_MainCharacter *this_01;
  UDS_InteractionComponent *this_02;
  FDS_EntityBase *pFVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->OwnerCharacter;
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_Interaction",0x27,Yes);
    pwVar7 = L"OwnerCharacter is nullptr.";
    uVar6 = 0x5db;
  }
  else {
    this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    ADS_MainCharacter::GetInteractionComponent(this_01);
    bVar2 = TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (!bVar2) {
      this_02 = (UDS_InteractionComponent *)FWeakObjectPtr::Get(&local_148);
      pFVar4 = UDS_InteractionComponent::GetIconInteractedEntity(this_02);
      if (pFVar4 == (FDS_EntityBase *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)pFVar4;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_PlayerController::Input_Interaction",0x27,Yes);
        pwVar7 = L"targetEntity is nullptr.";
        uVar6 = 0x5e9;
      }
      else {
        UDS_PlayerData::GetMainPlayerData();
        bVar2 = FWeakObjectPtr::IsValid(&local_140);
        if (bVar2) {
          pUVar5 = FWeakObjectPtr::Get(&local_140);
          iVar1 = *(int *)&pUVar5[9].field_0x10;
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_InteractionProcessAbility::TryActivate
                    ((ulong64 *)&pUVar5[0x29].field_0x18,&pFVar4->EntityID,iVar1);
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_PlayerController::Input_Interaction",0x27,Yes);
        pwVar7 = L"playerData is nullptr.";
        uVar6 = 0x5f0;
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,pwVar7);
      if ((FDS_EntityBase *)local_138._padding_ == (FDS_EntityBase *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_Interaction",0x27,Yes);
    pwVar7 = L"interactionComp is nullptr.";
    uVar6 = 0x5e2;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Input_Invectory @ 14b8cdd60

void __thiscall
ADS_PlayerController::Input_Invectory
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ContentManager *this_00;
  EDS_TotalMenuId local_res18 [4];
  
  if (param_2 == Triggered) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_res18[0] = Inventory;
      UDS_ContentManager::OpenContent(this_00,local_res18);
    }
  }
  return;
}

// Input_ItemSlot @ 14b8cdda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_ItemSlot(ADS_PlayerController *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_QuickSlotDeckDataSet *this_00;
  undefined1 auStackY_188 [32];
  int local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148[0] = param_1;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_ItemSlot",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x4ba,L"Input_ItemSlot : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_140);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    this_00 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get(&local_140);
    UDS_QuickSlotDeckDataSet::UseQuickSlot(this_00,local_148);
  }
  return;
}

// Input_LockOnTarget @ 14b8cdec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_LockOnTarget(ADS_PlayerController *this,FInputActionValue *param_1)

{
  bool bVar1;
  FDS_EntityBase *this_00;
  EDS_AbilityDeactivateType local_res8 [16];
  EDS_AbilityTagType local_res18 [16];
  
  if ((this->InputControlType == ActionMode) &&
     (this_00 = FDS_EntityBase::GetMainPlayerEntityBase(true), this_00 != (FDS_EntityBase *)0x0)) {
    local_res8[0] = 0x1c;
    bVar1 = FDS_EntityBase::IsActiveAbility(this_00,local_res8);
    if (bVar1) {
      local_res8[0] = Cancel;
      local_res18[0] = 0x1c;
      FDS_EntityBase::DeactivateAbility(this_00,local_res18,local_res8);
      return;
    }
    local_res18[0] = None;
    local_res18[1] = None;
    local_res18[2] = None;
    local_res18[3] = None;
    local_res18[4] = None;
    local_res18[5] = None;
    local_res18[6] = None;
    local_res18[7] = None;
    local_res8[0] = 0x1c;
    FDS_EntityBase::TryActivateAbility
              (this_00,local_res8,(TObjectPtr<UWN_AbilityContext>)local_res18);
  }
  return;
}

// Input_LockOnTargetChange @ 14b8cdf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_LockOnTargetChange
          (ADS_PlayerController *this,FInputActionValue *param_1)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_e8 [32];
  EDS_AbilityTagType local_c8 [8];
  UObject *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  dVar1 = (param_1->Value).field0_0x0._s_0.X;
  dVar2 = (param_1->Value).field0_0x0._s_0.Y;
  uVar3 = *(undefined4 *)&(param_1->Value).field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&(param_1->Value).field0_0x0 + 8);
  if (this->InputControlType == ActionMode) {
    if (this->InputDeviceType == KeyboardMouse) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar1 * dVar1 + dVar2 * dVar2;
      auVar11 = sqrtpd(in_XMM2,auVar11);
      if ((0.0 < auVar11._0_8_) && (auVar11._0_8_ < __real_3ff0000000000000)) {
        return;
      }
    }
    if ((this->InputFlag & LOCK_ON_TARGET) != NONE) {
      this_00 = &this->OwnerCharacter;
      bVar6 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      if (!bVar6) {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FObjectInitializer::AssertIfInConstructor
                  (pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_LockOnTargetAbilityContext_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar8);
        local_b8._8_8_ = pUVar7;
        pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar10 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar10 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(undefined4 *)(pUVar7 + 1) = uVar3;
        *(undefined4 *)&pUVar7[1].field_0x4 = uVar4;
        *(undefined4 *)&pUVar7[1].field_0x8 = uVar5;
        *(int *)&pUVar7[1].field_0xc = (int)((ulonglong)dVar2 >> 0x20);
        pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_c0 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_c8[0] = LockOnTarget;
        FDS_EntityBase::TryActivateAbility
                  ((FDS_EntityBase *)&pUVar9[0x29].field_0x10,local_c8,
                   (TObjectPtr<UWN_AbilityContext>)&local_c0);
      }
    }
  }
  return;
}

// Input_MouseLeftPressed @ 14b8ce100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_MouseLeftPressed(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags local_res8 [2];
  
  if (this->bActionModeCursorEnabled != false) {
    APlayerController::GetMousePosition
              ((APlayerController *)this,(double *)&this->LeftPressedMousePos,
               &(this->LeftPressedMousePos).field0_0x0._s_0.Y);
    local_res8[0] = MOUSE_LEFT_PRESSED;
    if ((this->InputFlag & MOUSE_LEFT_PRESSED) == NONE) {
      this->InputFlag = this->InputFlag | MOUSE_LEFT_PRESSED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->AddInputFlagDelegate,local_res8);
    }
    local_res8[0] = MOUSE_LEFT_PRESSED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res8,param_1);
  }
  return;
}

// Input_MouseLeftReleased @ 14b8ce190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_MouseLeftReleased(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags local_res8 [2];
  double local_18;
  double local_10;
  
  if (this->bActionModeCursorEnabled != false) {
    APlayerController::GetMousePosition((APlayerController *)this,&local_18,&local_10);
    local_res8[0] = MOUSE_LEFT_PRESSED;
    if ((this->InputFlag & MOUSE_LEFT_PRESSED) != NONE) {
      this->InputFlag = this->InputFlag & ~MOUSE_LEFT_PRESSED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res8);
    }
    local_res8[0] = MOUSE_LEFT_RELEASED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res8,param_1);
  }
  return;
}

// Input_MouseRightPressed @ 14b8ce220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_MouseRightPressed(ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags local_res8 [2];
  
  if (this->bActionModeCursorEnabled != false) {
    APlayerController::GetMousePosition
              ((APlayerController *)this,(double *)&this->RightPressedMousePos,
               &(this->RightPressedMousePos).field0_0x0._s_0.Y);
    local_res8[0] = MOUSE_RIGHT_PRESSED;
    if ((this->InputFlag & MOUSE_RIGHT_PRESSED) == NONE) {
      this->InputFlag = this->InputFlag | MOUSE_RIGHT_PRESSED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->AddInputFlagDelegate,local_res8);
    }
    local_res8[0] = MOUSE_RIGHT_PRESSED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res8,param_1);
  }
  return;
}

// Input_MouseRightReleased @ 14b8ce2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_MouseRightReleased
          (ADS_PlayerController *this,FInputActionValue *param_1)

{
  EDS_InputFlags local_res8 [2];
  double local_18;
  double local_10;
  
  if (this->bActionModeCursorEnabled != false) {
    APlayerController::GetMousePosition((APlayerController *)this,&local_18,&local_10);
    local_res8[0] = MOUSE_RIGHT_PRESSED;
    if ((this->InputFlag & MOUSE_RIGHT_PRESSED) != NONE) {
      this->InputFlag = this->InputFlag & ~MOUSE_RIGHT_PRESSED;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,local_res8);
    }
    local_res8[0] = MOUSE_RIGHT_RELEASED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_res8,param_1);
  }
  return;
}

// Input_Move @ 14b8ce340

void __thiscall
ADS_PlayerController::Input_Move
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  if (param_1 == IA_Move_Forward) {
    this->MoveForwardValue = (float)(param_3->Value).field0_0x0._s_0.X;
    UpdateMoveDirection(this,param_2);
    return;
  }
  if (param_1 == IA_Move_Back) {
    this->MoveBackValue = (float)(param_3->Value).field0_0x0._s_0.X;
    UpdateMoveDirection(this,param_2);
    return;
  }
  if (param_1 == IA_Move_Left) {
    this->MoveLeftValue = (float)(param_3->Value).field0_0x0._s_0.X;
    UpdateMoveDirection(this,param_2);
    return;
  }
  if (param_1 == IA_Move_Right) {
    this->MoveRightValue = (float)(param_3->Value).field0_0x0._s_0.X;
  }
  UpdateMoveDirection(this,param_2);
  return;
}

// Input_MoveEnd @ 14b8ce3d0

void __thiscall
ADS_PlayerController::Input_MoveEnd(ADS_PlayerController *this,FInputActionValue *param_1)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  EDS_InputFlags local_res8 [2];
  
  dVar1 = (param_1->Value).field0_0x0._s_0.Y;
  (this->InputMoveDirection).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->InputMoveDirection).field0_0x0._s_0.Y = dVar1;
  bVar2 = FWeakObjectPtr::IsValid(&(this->InputData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    dVar1 = (this->InputMoveDirection).field0_0x0._s_0.Y;
    *(double *)(pUVar3 + 6) = (this->InputMoveDirection).field0_0x0._s_0.X;
    *(double *)&pUVar3[6].field_0x8 = dVar1;
    pUVar3 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    pUVar3[6].field_0x11 = 0;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x10,false);
  }
  local_res8[0] = KEY_MOVE;
  if ((this->InputFlag >> 8 & 1) != 0) {
    this->InputFlag = this->InputFlag & ~KEY_MOVE;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->RemoveInputFlagDelegate,local_res8);
  }
  return;
}

// Input_MoveStart @ 14b8ce480

void __thiscall
ADS_PlayerController::Input_MoveStart(ADS_PlayerController *this,FInputActionValue *param_1)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  EDS_InputFlags local_res8 [2];
  
  dVar1 = (param_1->Value).field0_0x0._s_0.Y;
  (this->InputMoveDirection).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->InputMoveDirection).field0_0x0._s_0.Y = dVar1;
  bVar2 = FWeakObjectPtr::IsValid(&(this->InputData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    dVar1 = (this->InputMoveDirection).field0_0x0._s_0.Y;
    *(double *)(pUVar3 + 6) = (this->InputMoveDirection).field0_0x0._s_0.X;
    *(double *)&pUVar3[6].field_0x8 = dVar1;
    pUVar3 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    pUVar3[6].field_0x11 = 1;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar3[4].field_0x10,true);
  }
  local_res8[0] = KEY_MOVE;
  if ((this->InputFlag >> 8 & 1) == 0) {
    this->InputFlag = this->InputFlag | KEY_MOVE;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->AddInputFlagDelegate,local_res8);
  }
  return;
}

// Input_MoveTriggered @ 14b8ce530

void __thiscall
ADS_PlayerController::Input_MoveTriggered(ADS_PlayerController *this,FInputActionValue *param_1)

{
  double dVar1;
  bool bVar2;
  UObject *pUVar3;
  ADS_MainCharacter *this_00;
  
  dVar1 = (param_1->Value).field0_0x0._s_0.Y;
  (this->InputMoveDirection).field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  (this->InputMoveDirection).field0_0x0._s_0.Y = dVar1;
  bVar2 = FWeakObjectPtr::IsValid(&(this->InputData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    dVar1 = (this->InputMoveDirection).field0_0x0._s_0.Y;
    *(double *)(pUVar3 + 6) = (this->InputMoveDirection).field0_0x0._s_0.X;
    *(double *)&pUVar3[6].field_0x8 = dVar1;
  }
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar2) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    ADS_MainCharacter::TryEscapeFromStuck(this_00);
  }
  return;
}

// Input_NormalAttack @ 14b8ce5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_NormalAttack(ADS_PlayerController *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_CharStateData *this_01;
  UObject *pUVar2;
  EDS_CharDetailState local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [3];
  
  this_00 = &this->OwnerCharacter;
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar1) {
    return;
  }
  FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_CharStateData::GetData((ulong64)&local_res20);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar1) {
    return;
  }
  this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
  local_res8[0] = PlayerSkill_InstallCamp;
  bVar1 = UDS_CharStateData::HasCharDetailState(this_01,local_res8);
  if (bVar1) {
    return;
  }
  local_res8[0]._0_1_ = Hit;
  pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
            ((ulong64 *)&local_res10,&pUVar2[0x29].field_0x18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res18);
    bVar1 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res18);
      *(undefined1 *)(pUVar2 + 0xc) = 1;
      pUVar2 = FWeakObjectPtr::Get(&local_res10);
      if ((pUVar2[4].field_0x20 == '\x01') ||
         (pUVar2 = FWeakObjectPtr::Get(&local_res10), pUVar2[4].field_0x20 == '\x02')) {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,0xf);
      }
      else {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,0xe);
      }
      local_28[0] = 0;
      FDS_EntityBase::TryActivateAbility
                ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,(EDS_AbilityTagType *)local_res8,
                 (TObjectPtr<UWN_AbilityContext>)local_28);
      pUVar2 = FWeakObjectPtr::Get(&local_res18);
      *(undefined1 *)(pUVar2 + 0xc) = 0;
      CloseTotalMenuIfOpen(this);
      return;
    }
    return;
  }
  return;
}

// Input_NormalAttackTriggered @ 14b8ce740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_NormalAttackTriggered(ADS_PlayerController *this)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  UObject *pUVar2;
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_01;
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  bVar1 = UDS_GameInstance::GetIsCCSAIMode();
  if ((bVar1) || (this->InputControlType == ActionMode)) {
    this_01 = &this->OwnerCharacter;
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
    if (!bVar1) {
      FWeakObjectPtr::Get(&this_01->WeakPtr);
      UDS_CharStateData::GetData((ulong64)&local_res20);
      bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res20,
                         (void *)0x0);
      if (!bVar1) {
        this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res20);
        local_res10[0] = PlayerSkill_InstallCamp;
        bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res10);
        if (!bVar1) {
          FWeakObjectPtr::Get(&this_01->WeakPtr);
          TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res18);
          bVar1 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_res18,
                             (void *)0x0);
          if (!bVar1) {
            pUVar2 = FWeakObjectPtr::Get(&local_res18);
            *(undefined1 *)(pUVar2 + 0xc) = 1;
            pUVar2 = FWeakObjectPtr::Get(&this_01->WeakPtr);
            local_18[0] = 0;
            local_res10[0] = CONCAT31(local_res10[0]._1_3_,0xe);
            FDS_EntityBase::TryActivateAbility
                      ((FDS_EntityBase *)&pUVar2[0x29].field_0x10,(EDS_AbilityTagType *)local_res10,
                       (TObjectPtr<UWN_AbilityContext>)local_18);
            pUVar2 = FWeakObjectPtr::Get(&local_res18);
            *(undefined1 *)(pUVar2 + 0xc) = 0;
          }
        }
      }
    }
  }
  return;
}

// Input_PopupSkill @ 14b8ce850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_PopupSkill(ADS_PlayerController *this)

{
  longlong *plVar1;
  bool bVar2;
  UDS_SkillDataSet *this_00;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->CameraBattleModeDelegate,&local_28);
  if ((*(int *)&(this->CameraBattleModeDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CameraBattleModeDelegate).field_0x8, plVar1 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar2) {
    FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res8);
      UDS_SkillDataSet::GetActivatedPopupSkill(this_00);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        *(undefined1 *)(pUVar3 + 0xc) = 1;
        pUVar3 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        FDS_EntityBase::TryActivateSkillAbility
                  ((FDS_EntityBase *)&pUVar3[0x29].field_0x10,*(int *)&pUVar4[2].field_0x1c);
        pUVar3 = FWeakObjectPtr::Get(&local_res8);
        *(undefined1 *)(pUVar3 + 0xc) = 0;
        CloseTotalMenuIfOpen(this);
      }
    }
  }
  return;
}

// Input_RingCmdClose @ 14b8ce960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_RingCmdClose(ADS_PlayerController *this)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  float local_res10 [2];
  uint local_res18 [2];
  FWeakObjectPtr local_res20;
  
  FDS_RingCommandService::bIsRingCommandKeyPressed = false;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_res20);
    bVar1 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_res20,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res20);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 != '\0') {
        local_res10[0] = 0.0;
        local_res18[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,RingCommand,local_res18,local_res10);
      }
    }
  }
  return;
}

// Input_RingCmdOpen @ 14b8ce9f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_RingCmdOpen(ADS_PlayerController *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  ADS_PlayerController *local_res8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if ((this->InputControlType == ActionMode) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    FDS_RingCommandService::bIsRingCommandKeyPressed = true;
    local_78 = OpenRingCmd;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = local_78;
      puVar1[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_78,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,RingCommand,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// Input_RingCmdQuickSlot @ 14b8cebc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_RingCmdQuickSlot(ADS_PlayerController *this,int param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_UIData *pFVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_RingCmdQuickSlot",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x4c8,L"Input_RingCmdQuickSlot : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pFVar3 = TDS_Singleton<FDS_UIData>::GetInst();
  UDS_RingCommandDeckData::GetData
            ((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,
             SUB41(pFVar3->CurrentRingCmdQuickSlotDeckIndex,0));
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    if (-1 < param_1 + -1) {
      FDS_RingCommandService::ExecuteRingCommand
                ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)local_148[0],param_1 + -1);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_RingCmdQuickSlot",0x2c,Yes);
    pwVar5 = L"SlotIndex is invalid. SlotIndex : %d";
    uVar4 = 0x4d5;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::Input_RingCmdQuickSlot",0x2c,Yes);
    pwVar5 = L"ringCmdDeckData is invalid. DeckIndex : %d";
    uVar4 = 0x4cf;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Input_RingCmdQuickSlotNextDeck @ 14b8cedc0

void __thiscall ADS_PlayerController::Input_RingCmdQuickSlotNextDeck(ADS_PlayerController *this)

{
  bool bVar1;
  UDS_RingCommandUIEvent *pUVar2;
  
  pUVar2 = UDS_RingCommandUIEvent::GetEvent();
  if (pUVar2 != (UDS_RingCommandUIEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnRingCmdQuickSlotNextDeck);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnRingCmdQuickSlotNextDeck).Delegate);
      return;
    }
  }
  return;
}

// Input_RingCmdQuickSlotPrevDeck @ 14b8cee10

void __thiscall ADS_PlayerController::Input_RingCmdQuickSlotPrevDeck(ADS_PlayerController *this)

{
  bool bVar1;
  UDS_RingCommandUIEvent *pUVar2;
  
  pUVar2 = UDS_RingCommandUIEvent::GetEvent();
  if (pUVar2 != (UDS_RingCommandUIEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnRingCmdQuickSlotPrevDeck);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnRingCmdQuickSlotPrevDeck).Delegate);
      return;
    }
  }
  return;
}

// Input_RingCmd_ChangeDeck_Next @ 14b8cee60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_RingCmd_ChangeDeck_Next
          (ADS_PlayerController *this,FInputActionValue *param_1,ETriggerEvent param_2)

{
  UDS_WindowManager *this_00;
  EDS_KeyActionType local_res8 [2];
  FDS_InputEventParams local_38;
  
  if (this->InputDeviceType == KeyboardMouse) {
    if ((float)(param_1->Value).field0_0x0._s_0.X <= 0.0) {
      return;
    }
  }
  else if ((this->InputDeviceType == GamePad) && (param_2 != Started)) {
    return;
  }
  local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  local_38.InputActionValue.ValueType = param_1->ValueType;
  local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
  local_38.TriggerEvent = param_2;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (param_2 != Started) {
    if (param_2 == Triggered) {
      local_res8[0] = IA_RingCmd_ChangeDeck_Next;
      UDS_WindowManager::OnInputActionTriggered(this_00,local_res8,&local_38);
      return;
    }
    if (param_2 != Completed) {
      if (param_2 == Canceled) {
        local_res8[0] = IA_RingCmd_ChangeDeck_Next;
        UDS_WindowManager::OnInputActionCanceled(this_00,local_res8,&local_38);
      }
      return;
    }
    local_res8[0] = IA_RingCmd_ChangeDeck_Next;
    UDS_WindowManager::OnInputActionCompleted(this_00,local_res8,&local_38);
    return;
  }
  local_res8[0] = IA_RingCmd_ChangeDeck_Next;
  UDS_WindowManager::OnInputActionStarted(this_00,local_res8,&local_38);
  return;
}

// Input_RingCmd_ChangeDeck_Prev @ 14b8cefa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_RingCmd_ChangeDeck_Prev
          (ADS_PlayerController *this,FInputActionValue *param_1,ETriggerEvent param_2)

{
  UDS_WindowManager *this_00;
  EDS_KeyActionType local_res8 [2];
  FDS_InputEventParams local_38;
  
  if (this->InputDeviceType == KeyboardMouse) {
    if (0.0 <= (float)(param_1->Value).field0_0x0._s_0.X) {
      return;
    }
  }
  else if ((this->InputDeviceType == GamePad) && (param_2 != Started)) {
    return;
  }
  local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  local_38.InputActionValue.ValueType = param_1->ValueType;
  local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
  local_38.TriggerEvent = param_2;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (param_2 != Started) {
    if (param_2 == Triggered) {
      local_res8[0] = IA_RingCmd_ChangeDeck_Prev;
      UDS_WindowManager::OnInputActionTriggered(this_00,local_res8,&local_38);
      return;
    }
    if (param_2 != Completed) {
      if (param_2 == Canceled) {
        local_res8[0] = IA_RingCmd_ChangeDeck_Prev;
        UDS_WindowManager::OnInputActionCanceled(this_00,local_res8,&local_38);
      }
      return;
    }
    local_res8[0] = IA_RingCmd_ChangeDeck_Prev;
    UDS_WindowManager::OnInputActionCompleted(this_00,local_res8,&local_38);
    return;
  }
  local_res8[0] = IA_RingCmd_ChangeDeck_Prev;
  UDS_WindowManager::OnInputActionStarted(this_00,local_res8,&local_38);
  return;
}

// Input_RingCmd_Custom_NextDeck @ 14b8cf0e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_RingCmd_Custom_NextDeck
          (ADS_PlayerController *this,FInputActionValue *param_1,ETriggerEvent param_2)

{
  UDS_WindowManager *this_00;
  EDS_KeyActionType local_res8 [2];
  FDS_InputEventParams local_38;
  
  if (this->InputDeviceType == KeyboardMouse) {
    if ((float)(param_1->Value).field0_0x0._s_0.X <= 0.0) {
      return;
    }
  }
  else if ((this->InputDeviceType == GamePad) && (param_2 != Started)) {
    return;
  }
  local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  local_38.InputActionValue.ValueType = param_1->ValueType;
  local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
  local_38.TriggerEvent = param_2;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (param_2 != Started) {
    if (param_2 == Triggered) {
      local_res8[0] = IA_RingCmd_Custom_NextDeck;
      UDS_WindowManager::OnInputActionTriggered(this_00,local_res8,&local_38);
      return;
    }
    if (param_2 != Completed) {
      if (param_2 == Canceled) {
        local_res8[0] = IA_RingCmd_Custom_NextDeck;
        UDS_WindowManager::OnInputActionCanceled(this_00,local_res8,&local_38);
      }
      return;
    }
    local_res8[0] = IA_RingCmd_Custom_NextDeck;
    UDS_WindowManager::OnInputActionCompleted(this_00,local_res8,&local_38);
    return;
  }
  local_res8[0] = IA_RingCmd_Custom_NextDeck;
  UDS_WindowManager::OnInputActionStarted(this_00,local_res8,&local_38);
  return;
}

// Input_RingCmd_Custom_PrevDeck @ 14b8cf220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_RingCmd_Custom_PrevDeck
          (ADS_PlayerController *this,FInputActionValue *param_1,ETriggerEvent param_2)

{
  UDS_WindowManager *this_00;
  EDS_KeyActionType local_res8 [2];
  FDS_InputEventParams local_38;
  
  if (this->InputDeviceType == KeyboardMouse) {
    if (0.0 <= (float)(param_1->Value).field0_0x0._s_0.X) {
      return;
    }
  }
  else if ((this->InputDeviceType == GamePad) && (param_2 != Started)) {
    return;
  }
  local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
  local_38.InputActionValue.ValueType = param_1->ValueType;
  local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
  local_38.TriggerEvent = param_2;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (param_2 != Started) {
    if (param_2 == Triggered) {
      local_res8[0] = IA_RingCmd_Custom_PrevDeck;
      UDS_WindowManager::OnInputActionTriggered(this_00,local_res8,&local_38);
      return;
    }
    if (param_2 != Completed) {
      if (param_2 == Canceled) {
        local_res8[0] = IA_RingCmd_Custom_PrevDeck;
        UDS_WindowManager::OnInputActionCanceled(this_00,local_res8,&local_38);
      }
      return;
    }
    local_res8[0] = IA_RingCmd_Custom_PrevDeck;
    UDS_WindowManager::OnInputActionCompleted(this_00,local_res8,&local_38);
    return;
  }
  local_res8[0] = IA_RingCmd_Custom_PrevDeck;
  UDS_WindowManager::OnInputActionStarted(this_00,local_res8,&local_38);
  return;
}

// Input_SkillSlot @ 14b8cf360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_PlayerController::Input_SkillSlot(ADS_PlayerController *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  UDS_SkillDataSet *this_00;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [32];
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  undefined1 local_68 [72];
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  bVar3 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar3) {
    FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_70);
    bVar3 = FWeakObjectPtr::IsValid(&local_70);
    if (bVar3) {
      this_00 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_70);
      UDS_SkillDataSet::GetSkillSlotDataMap
                (this_00,(TMap<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
                          *)local_68);
      if (local_68._8_4_ != local_68._52_4_) {
        puVar6 = local_68 + 0x38;
        if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
          puVar6 = (undefined1 *)local_68._64_8_;
        }
        iVar2 = *(int *)(puVar6 + (ulonglong)(local_20 - 1U & param_1) * 4);
        while (iVar2 != -1) {
          lVar1 = local_68._0_8_ + (longlong)iVar2 * 0x14;
          if (*(int *)(local_68._0_8_ + (longlong)iVar2 * 0x14) == param_1) {
            if (lVar1 != 0) {
              local_78 = *(FWeakObjectPtr *)(lVar1 + 4);
              goto LAB_14b8cf444;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0xc);
        }
      }
      local_78.ObjectIndex = 0;
      local_78.ObjectSerialNumber = 0;
LAB_14b8cf444:
      bVar3 = FWeakObjectPtr::IsValid(&local_78);
      if (bVar3) {
        pUVar4 = FWeakObjectPtr::Get(&local_70);
        *(undefined1 *)(pUVar4 + 0xc) = 1;
        pUVar4 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
        pUVar5 = FWeakObjectPtr::Get(&local_78);
        FDS_EntityBase::TryActivateSkillAbility
                  ((FDS_EntityBase *)&pUVar4[0x29].field_0x10,*(int *)&pUVar5[2].field_0x1c);
        pUVar4 = FWeakObjectPtr::Get(&local_70);
        *(undefined1 *)(pUVar4 + 0xc) = 0;
        CloseTotalMenuIfOpen(this);
      }
      local_20 = 0;
      if ((undefined1 *)local_68._64_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_68._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_68);
    }
  }
  return;
}

// Input_TotalMenu @ 14b8cf510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_TotalMenu
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_ChatMode_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  EDS_GameStateType EVar8;
  EDS_ChatMode EVar9;
  uint uVar10;
  UDS_LogManager *pUVar11;
  ADS_GameMode *this_01;
  UDS_WindowManager *this_02;
  UObject *pUVar12;
  UDS_ChatEvent *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStackY_368 [32];
  undefined1 local_338 [8];
  FDelegateAllocation local_330;
  float local_320;
  uint local_31c;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308 [2];
  code *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  bool local_2e8;
  ADS_PlayerController *local_2d8;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDelegateAllocation *local_2a0;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  if (param_2 == Triggered) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
    ADS_GameMode::GetInst();
    bVar5 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_318,(void *)0x0);
    if (bVar5) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"ADS_PlayerController::Input_TotalMenu",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar11,1,Warning,local_278.Ptr,0x62b,L"gameMode is nullptr.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      this_01 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_318);
      EVar8 = ADS_GameMode::GetCurGameStateType(this_01);
      if (EVar8 == IngameState) {
        this_02 = UDS_WindowManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_02 == (UDS_WindowManager *)0x0) {
            return;
          }
        }
        else {
          if (this_02 == (UDS_WindowManager *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        UDS_WindowManager::GetCurrentClosableWindowInfo(this_02);
        bVar5 = FWeakObjectPtr::IsValid(&local_310);
        if ((!bVar5) || (pUVar12 = FWeakObjectPtr::Get(&local_310), *(int *)(pUVar12 + 1) == 0xcf))
        {
          pUVar13 = UDS_ChatEvent::GetEvent();
          if ((pUVar13 == (UDS_ChatEvent *)0x0) ||
             (EVar9 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar13->OnQueryChatMode),
             EVar9 == Viewer)) {
            UDS_WindowManager::GetWindowInfo(this_02,(EDS_WindowWidget)local_308);
            bVar5 = FWeakObjectPtr::IsValid(local_308);
            if (bVar5) {
              pUVar12 = FWeakObjectPtr::Get(local_308);
              cVar7 = (**(code **)(*(longlong *)pUVar12 + 0x2c8))(pUVar12);
              if (cVar7 == '\0') {
                uStack_2f0 = 0;
                local_2f8 = OnOpenTotalMenu;
                local_338 = (undefined1  [8])0x0;
                local_330.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_330.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
                           (FWriteAccessScope *)&local_2b8);
                local_2a0 = &local_330;
                puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_330);
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = &
                             ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar15 = FDelegateHandle::GenerateNewID();
                  puVar14[2] = uVar15;
                  *puVar14 = &
                             ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PlayerController____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (this != (ADS_PlayerController *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  puVar14[3] = 0;
                  local_2d8 = this;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (this != (ADS_PlayerController *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_2d8);
                  puVar14[4] = local_2f8;
                  puVar14[5] = CONCAT44(uStack_2ec,uStack_2f0);
                }
                if (local_2b8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
                }
                pTVar16 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                    (&local_298,
                                     (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                      *)local_338);
                UDS_WindowManager::OpenWindow(this_02,TotalMenu,pTVar16);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_338,
                           (FWriteAccessScope *)&local_2d0);
                if ((local_330.DelegateSize != 0) &&
                   (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_330.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_330,0,0,0x10);
                  local_330.DelegateSize = 0;
                }
                if (local_2d0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
                }
                if (local_330.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_330.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)local_338);
              }
              else {
                local_320 = 0.0;
                local_31c = 0;
                UDS_WindowManager::CloseWindow(this_02,TotalMenu,&local_31c,&local_320);
              }
            }
          }
          else {
            this_00 = &pUVar13->OnChangedChatMode;
            bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
            if (bVar5) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                         (FWriteAccessScope *)&local_2f8);
              puVar1 = &(pUVar13->OnChangedChatMode).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              bVar5 = false;
              uVar17 = *(int *)&(pUVar13->OnChangedChatMode).Delegate.field_0x10 - 1;
              if (-1 < (int)uVar17) {
                lVar18 = (longlong)(int)uVar17 << 4;
                bVar5 = false;
                do {
                  uVar10 = 0;
                  if ((int)uVar17 < *(int *)&(pUVar13->OnChangedChatMode).Delegate.field_0x10) {
                    uVar10 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  lVar2 = *(longlong *)&(pUVar13->OnChangedChatMode).Delegate.field_0x8;
                  if (((*(int *)(lVar2 + 8 + lVar18) == 0) ||
                      (plVar3 = *(longlong **)(lVar2 + lVar18), plVar3 == (longlong *)0x0)) ||
                     (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
                    bVar5 = true;
                  }
                  lVar18 = lVar18 + -0x10;
                  uVar17 = uVar17 - 1;
                } while (-1 < (int)uVar17);
              }
              puVar1 = &(pUVar13->OnChangedChatMode).Delegate.field_0x1c;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              if (bVar5) {
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
              }
              if (local_2e8 == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                          ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_2ec,uStack_2f0),
                           (FDestructionSentinel *)&local_2f8);
              }
            }
          }
        }
      }
      else {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"ADS_PlayerController::Input_TotalMenu",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_158.Ptr,0x631,L"gameMode is not IngameState.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
    }
  }
  return;
}

// Input_UI_Back @ 14b8cfa30

void __thiscall
ADS_PlayerController::Input_UI_Back(ADS_PlayerController *this,ETriggerEvent param_1)

{
  UDS_GameInstance *this_00;
  UClass *pUVar1;
  UDS_ManagerBase *pUVar2;
  
  if (param_1 != Completed) {
    return;
  }
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar1 = Z_Construct_UClass_UDS_HistoryManager_NoRegister();
  pUVar2 = UDS_GameInstance::GetManager(this_00,(FName)pUVar1->_padding_);
  if (pUVar2 != (UDS_ManagerBase *)0x0) {
    Z_Construct_UClass_UDS_HistoryManager_NoRegister();
  }
  return;
}

// Input_WorldMap @ 14b8cfa40

void __thiscall
ADS_PlayerController::Input_WorldMap
          (ADS_PlayerController *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_ContentManager *this_00;
  EDS_ContentsTabFrameType local_res18 [4];
  undefined8 local_18 [3];
  
  if (param_2 == Triggered) {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      local_18[0] = 0;
      local_res18[0] = Map;
      UDS_ContentManager::OpenContent
                (this_00,local_res18,(TObjectPtr<UDS_ContentArguments>)local_18);
    }
  }
  return;
}

// Input_ZoomInOut @ 14b8cfa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_PlayerController::Input_ZoomInOut(ADS_PlayerController *this,FInputActionValue *param_1)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  UDS_InteractionComponent *this_01;
  FDS_EntityBase *pFVar2;
  UDS_WindowManager *this_02;
  FWeakObjectPtr local_res18 [2];
  FDS_InputEventParams local_38;
  
  if (!FDS_RingCommandService::bIsRingCommandKeyPressed) {
    bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerCharacter,(void *)0x0);
    if (!bVar1) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
      ADS_MainCharacter::GetInteractionComponent(this_00);
      bVar1 = TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> *)local_res18,
                         (void *)0x0);
      if (!bVar1) {
        this_01 = (UDS_InteractionComponent *)FWeakObjectPtr::Get(local_res18);
        pFVar2 = UDS_InteractionComponent::GetIconInteractedEntity(this_01);
        if (pFVar2 != (FDS_EntityBase *)0x0) {
          return;
        }
      }
    }
    if (this->InputControlType == UIMode) {
      this_02 = UDS_WindowManager::GetInst();
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (this_02 == (UDS_WindowManager *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      if (this_02 != (UDS_WindowManager *)0x0) {
        local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
        local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
        local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
        local_38.InputActionValue.ValueType = param_1->ValueType;
        local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
        local_38.TriggerEvent = Triggered;
        local_res18[0].ObjectIndex = 0x296c;
        UDS_WindowManager::OnInputActionTriggered
                  (this_02,(EDS_KeyActionType *)local_res18,&local_38);
        return;
      }
    }
    else {
      local_res18[0].ObjectIndex = 0x10;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&ChangeInputDelegate,(EDS_InputFlags *)local_res18,param_1);
    }
  }
  return;
}

// IsGameOptionKeyChanging @ 14b8d0110

bool __thiscall ADS_PlayerController::IsGameOptionKeyChanging(ADS_PlayerController *this)

{
  return this->KeyChangeGameOptionID != None;
}

// IsInteractionVisible @ 14b8d0140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_PlayerController::IsInteractionVisible(ADS_PlayerController *this)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  UDS_InteractionComponent *this_01;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res8 [4];
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    ADS_MainCharacter::GetInteractionComponent(this_00);
    bVar1 = TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionComponent,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_01 = (UDS_InteractionComponent *)FWeakObjectPtr::Get(local_res8);
      pFVar2 = UDS_InteractionComponent::GetIconInteractedEntity(this_01);
      return pFVar2 != (FDS_EntityBase *)0x0;
    }
  }
  return false;
}

// IsKeyPressed @ 14b8d01b0

bool __thiscall
ADS_PlayerController::IsKeyPressed(ADS_PlayerController *this,EDS_KeyActionType param_1)

{
  EDS_InputDeviceType EVar1;
  UPlayerInput *this_00;
  bool bVar2;
  UInputAction *local_res8;
  UInputMappingContext *local_res18;
  FKey local_38;
  FKey local_20;
  
  local_res8 = DS_InputUtil::GetInputAction(this->InputConfig,param_1);
  if (local_res8 == (UInputAction *)0x0) {
    return false;
  }
  EVar1 = this->InputDeviceType;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_res18 = (this->CurrentMappingContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  DS_InputUtil::GetKey
            (&local_38,(TObjectPtr<UInputMappingContext>)&local_res18,
             (TObjectPtr<UInputAction_const_>)&local_res8,param_1,EVar1);
  this_00 = (UPlayerInput *)this->_padding_;
  local_20.KeyName = local_38.KeyName;
  local_20.KeyDetails.Object = local_38.KeyDetails.Object;
  local_20.KeyDetails.SharedReferenceCount.ReferenceController =
       local_38.KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  bVar2 = UPlayerInput::IsPressed(this_00,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// IsLongPressKey @ 14b8d02b0

bool __thiscall
ADS_PlayerController::IsLongPressKey(ADS_PlayerController *this,EDS_KeyActionType param_1)

{
  EDS_InputDeviceType EVar1;
  bool bVar2;
  UInputMappingContext *local_res8;
  
  EVar1 = this->InputDeviceType;
  local_res8 = (this->CurrentMappingContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  bVar2 = DS_InputUtil::IsLongPressKey
                    (this->InputConfig,(TObjectPtr<UInputMappingContext>)&local_res8,param_1,EVar1);
  return bVar2;
}

// IsTotalMenuOpened @ 14b8d0a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall ADS_PlayerController::IsTotalMenuOpened(ADS_PlayerController *this)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return false;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_WindowManager::GetCurrentClosableWindowInfo(this_00);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar1) && (pUVar3 = FWeakObjectPtr::Get(&local_res10), *(int *)(pUVar3 + 1) != 0xcf)) {
    return false;
  }
  UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
    if (cVar2 == '\x01') {
      return true;
    }
  }
  return false;
}

// OnChangeGameState @ 14b8d42f0

void __thiscall
ADS_PlayerController::OnChangeGameState
          (ADS_PlayerController *this,EDS_GameStateType *param_1,EDS_GameStateType *param_2)

{
  if (*param_2 == LoginState) {
    SetInputControlType(this,UIMode,true);
    return;
  }
  return;
}

// OnChangeInputActive @ 14b8d4310

void __thiscall ADS_PlayerController::OnChangeInputActive(ADS_PlayerController *this,bool param_1)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_CharStateData *this_01;
  UDS_PlayerData *this_02;
  UDS_SkillDataSet *this_03;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_18;
  EDS_CharState local_10;
  
  if (param_1) {
    this_00 = &this->OwnerCharacter;
    bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar2) {
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_CharStateData::GetData((ulong64)&local_res18);
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5435635855911812377>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                           ,0x2e7,"charStateData.IsValid()");
        if (!bVar2) {
          return;
        }
code_r0x00014b8d43ef:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_PlayerData::GetData((ulong64)&local_res20,*(ulong64 *)&pUVar3[0x29].field_0x18,false);
      bVar2 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar2) {
        this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
        local_10 = Skill;
        bVar2 = UDS_CharStateData::HasCharState(this_01,&local_10);
        if (!bVar2) {
          this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res20);
          UDS_PlayerData::SetMainTargetEntityID(this_02,0);
        }
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_18);
        bVar2 = TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> *)&local_18,(void *)0x0)
        ;
        if (!bVar2) {
          this_03 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_18);
          UDS_SkillDataSet::ClearReservedSkill(this_03);
        }
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5435635855911812369>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                           ,0x2ef,"false");
        if (bVar2) goto code_r0x00014b8d43ef;
      }
    }
  }
  return;
}

// OnChangedCharState @ 14b8d4480

void __thiscall
ADS_PlayerController::OnChangedCharState
          (ADS_PlayerController *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  EDS_InputFlags EVar1;
  bool bVar2;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10 [2];
  EDS_CharState local_res20;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_res20 = Dead|Groggy;
    bVar2 = UDS_CharStateData::HasCharState(this_00,&local_res20);
    EVar1 = this->InputFlag;
    local_res20 = CONCAT44(local_res20._4_4_,0x400);
    if (bVar2) {
      if ((EVar1 & LOCK_INPUT_MOVE) == NONE) {
        this->InputFlag = EVar1 | LOCK_INPUT_MOVE;
        TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&this->AddInputFlagDelegate,(EDS_InputFlags *)&local_res20);
        return;
      }
    }
    else if ((EVar1 & LOCK_INPUT_MOVE) != NONE) {
      this->InputFlag = EVar1 & ~LOCK_INPUT_MOVE;
      TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&this->RemoveInputFlagDelegate,(EDS_InputFlags *)&local_res20);
    }
  }
  return;
}

// OnChangedInputDeviceConnectionChange @ 14b8d4d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnChangedInputDeviceConnectionChange
          (ADS_PlayerController *this,EInputDeviceConnectionState param_1,FPlatformUserId param_2,
          FInputDeviceId param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UDS_InputEvent *pUVar4;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  FSlateApplication::Get();
  if (FSlateApplicationBase::PlatformApplication.Object != (GenericApplication *)0x0) {
    if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x98))();
    if (cVar3 != '\0') goto LAB_14b8d4daa;
  }
  RefreshInputCursorSettings(this);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  UDS_UIMessageManager::OpenMsgByStringUi(0x641,Alert_None_01,&local_28);
LAB_14b8d4daa:
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 == (UDS_InputEvent *)0x0) {
    return;
  }
  FDS_EventDelegate<enum_EDS_InputDeviceType_const_&>::Broadcast
            (&pUVar4->OnChangeInputDeviceType,&this->InputDeviceType);
  return;
}

// OnChangedTagCallback @ 14b8d4de0

void __thiscall
ADS_PlayerController::OnChangedTagCallback
          (ADS_PlayerController *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  EDS_InputFlags EVar2;
  FName *pFVar3;
  UObject *pUVar4;
  TMulticastDelegate<void___cdecl(EDS_InputFlags_const_&),FDefaultDelegateUserPolicy> *this_00;
  EDS_InputFlags local_res20 [2];
  
  local_res20[0]._0_1_ = GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED;
  pFVar3 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res20)->TagName;
  if ((*pFVar3 == (FName)0x0) || (param_1->TagName != *pFVar3)) {
    local_res20[0]._0_1_ = GAMEPAD_ROTATE_START|MOUSE_LEFT_RELEASED|MOUSE_LEFT_PRESSED;
    pFVar3 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res20)->TagName;
    if ((*pFVar3 == (FName)0x0) || (param_1->TagName != *pFVar3)) {
      local_res20[0]._0_1_ = GAMEPAD_ROTATE_START|MOUSE_RIGHT_PRESSED;
      pFVar3 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res20)->TagName;
      if ((*pFVar3 == (FName)0x0) || (param_1->TagName != *pFVar3)) {
        local_res20[0] = CONCAT31(local_res20[0]._1_3_,0x25);
        pFVar3 = &FDS_GameplayTags::GetStateTag((EDS_StateTagType *)local_res20)->TagName;
        if (*pFVar3 == (FName)0x0) {
          return;
        }
        if (param_1->TagName != *pFVar3) {
          return;
        }
        EVar2 = this->InputFlag;
        local_res20[0] = LOCK_CAMERA_FRONT;
        if (param_2) {
          if ((EVar2 & LOCK_CAMERA_FRONT) != NONE) {
            return;
          }
          EVar2 = EVar2 | LOCK_CAMERA_FRONT;
          this_00 = &this->AddInputFlagDelegate;
          goto LAB_14b8d4f97;
        }
        if ((EVar2 & LOCK_CAMERA_FRONT) == NONE) {
          return;
        }
        EVar2 = EVar2 & ~LOCK_CAMERA_FRONT;
      }
      else {
        bVar1 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                          (&this->InputData,(void *)0x0);
        if (!bVar1) {
          pUVar4 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
          pUVar4[6].field_0x10 = param_2;
          TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                     &pUVar4[5].field_0x8,param_2);
        }
        EVar2 = this->InputFlag;
        local_res20[0] = INPUT_LOCK;
        if (param_2) {
          if ((EVar2 & INPUT_LOCK) != NONE) {
            return;
          }
          EVar2 = EVar2 | INPUT_LOCK;
          this_00 = &this->AddInputFlagDelegate;
          goto LAB_14b8d4f97;
        }
        if ((EVar2 & INPUT_LOCK) == NONE) {
          return;
        }
        EVar2 = EVar2 & ~INPUT_LOCK;
      }
    }
    else {
      EVar2 = this->InputFlag;
      local_res20[0] = LOCK_INPUT_MOVE;
      if (param_2) {
        if ((EVar2 & LOCK_INPUT_MOVE) != NONE) {
          return;
        }
        EVar2 = EVar2 | LOCK_INPUT_MOVE;
        this_00 = &this->AddInputFlagDelegate;
        goto LAB_14b8d4f97;
      }
      if ((EVar2 & LOCK_INPUT_MOVE) == NONE) {
        return;
      }
      EVar2 = EVar2 & ~LOCK_INPUT_MOVE;
    }
  }
  else {
    EVar2 = this->InputFlag;
    local_res20[0] = LOCK_INPUT_ROTATION;
    if (param_2) {
      if ((EVar2 & LOCK_INPUT_ROTATION) != NONE) {
        return;
      }
      EVar2 = EVar2 | LOCK_INPUT_ROTATION;
      this_00 = &this->AddInputFlagDelegate;
      goto LAB_14b8d4f97;
    }
    if ((EVar2 & LOCK_INPUT_ROTATION) == NONE) {
      return;
    }
    EVar2 = EVar2 & ~LOCK_INPUT_ROTATION;
  }
  this_00 = &this->RemoveInputFlagDelegate;
LAB_14b8d4f97:
  this->InputFlag = EVar2;
  TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(this_00,local_res20);
  return;
}

// OnClickedGameOptionKeyChange @ 14b8d4fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnClickedGameOptionKeyChange
          (ADS_PlayerController *this,UDS_GameOptionData *param_1,
          EDS_GameOptionKeySettingIndex param_2)

{
  EDS_GameOptionType EVar1;
  UDS_LogManager *pUVar2;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  if (param_1 != (UDS_GameOptionData *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      EVar1 = UDS_GameOptionData::GetGameOptionID(param_1);
      ::FString::FString(&local_178,"EDS_GameOptionType");
      DS_Util::GetEnumToString(&local_168,&local_178,(longlong)(int)EVar1);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_PlayerController::OnClickedGameOptionKeyChange",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_158.Ptr,0x8f3,L"%s , %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    if (((this->KeyChangeGameOptionID != None) &&
        (this_00 = UDS_GameOptionManager::GetInst(), this_00 != (UDS_GameOptionManager *)0x0)) &&
       (this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,this->KeyChangeGameOptionID),
       this_01 != (UDS_GameOptionData *)0x0)) {
      this->KeyChangeGameOptionID = None;
      this->KeyChangeIndex = FirstKey;
      UDS_GameOptionData::BroadcastDataToVM(this_01);
    }
    EVar1 = UDS_GameOptionData::GetGameOptionID(param_1);
    this->KeyChangeGameOptionID = EVar1;
    this->KeyChangeIndex = param_2;
    UDS_GameOptionData::BroadcastDataToVM(param_1);
  }
  return;
}

// OnCloseContentEvent @ 14b8d5180

void __thiscall
ADS_PlayerController::OnCloseContentEvent
          (ADS_PlayerController *this,EDS_ContentsTabFrameType param_1)

{
  EDS_ContentsTabFrameType EVar1;
  EDS_InputMappingType EVar2;
  UDS_ContentManager *this_00;
  
  this_00 = UDS_ContentManager::GetInst();
  if (this_00 != (UDS_ContentManager *)0x0) {
    EVar1 = UDS_ContentManager::GetCurrentTabFrameID(this_00);
    if (EVar1 != None) {
      EVar2 = ConvertInputControlTypeToMappingType(this,UIMode);
      ChangeInputMapping(this,EVar2);
    }
  }
  if (param_1 == GameOptionControl) {
    this->KeyChangeGameOptionID = None;
  }
  return;
}

// OnGameOptionKeyChange @ 14b8d6940

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnGameOptionKeyChange
          (ADS_PlayerController *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          EDS_InputMappingType param_2,EDS_KeyActionType param_3,EDS_InputDeviceType param_4,
          EDS_KeyType param_5,EDS_KeyType param_6)

{
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *this_00;
  EDS_InputDeviceType EVar1;
  EDS_InputMappingType EVar2;
  UDS_GameOptionData *this_01;
  code *pcVar3;
  EDS_KeyActionType EVar4;
  bool bVar5;
  int iVar6;
  EDS_GameOptionType EVar7;
  UDS_GameOptionManager *this_02;
  TObjectPtr<UInputMappingContext> *pTVar8;
  ulonglong uVar9;
  FDS_GameOptionBaseTableRow *pFVar10;
  TObjectPtr<UInputMappingContext> TVar11;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> *pTVar12;
  TObjectPtr<UInputMappingContext>_u_0 *pTVar13;
  UDS_WindowManager *this_03;
  UDS_InputEvent *pUVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  EDS_KeyActionType local_res20 [2];
  ulonglong uVar18;
  undefined1 local_d8 [8];
  FScriptContainerElement *local_d0;
  EDS_KeyActionType local_c8;
  uint local_c4;
  float local_c0;
  uint local_bc;
  EDS_KeyType local_b8 [3];
  EDS_KeyType EStack_ac;
  TArray<EDS_KeyType,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> local_98;
  UInputMappingContext *local_88;
  TObjectPtr<UInputMappingContext>_u_0 local_80;
  TObjectPtr<UInputMappingContext>_u_0 local_78;
  UDS_GameOptionData *local_70;
  initializer_list<EDS_KeyType> local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_res20[0] = param_3;
  this_02 = UDS_GameOptionManager::GetInst();
  if (this_02 == (UDS_GameOptionManager *)0x0) {
    return;
  }
  local_70 = UDS_GameOptionManager::GetGameOptionData(this_02,this->KeyChangeGameOptionID);
  if (local_70 == (UDS_GameOptionData *)0x0) {
    return;
  }
  this_00 = &this->InputMappingContextMap;
  if (*(int *)&(this->InputMappingContextMap).field_0x8 ==
      *(int *)&(this->InputMappingContextMap).field_0x34) {
    return;
  }
  puVar15 = *(undefined1 **)&(this->InputMappingContextMap).field_0x40;
  if (puVar15 == (undefined1 *)0x0) {
    puVar15 = &(this->InputMappingContextMap).field_0x38;
  }
  iVar6 = *(int *)(puVar15 +
                  (ulonglong)
                  (*(int *)&(this->InputMappingContextMap).field_0x48 - Action_Base & param_2) * 4);
  if (iVar6 == -1) {
    return;
  }
  while (*(EDS_InputMappingType *)(*(longlong *)this_00 + (longlong)iVar6 * 0x18) != param_2) {
    iVar6 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar6 * 0x18);
    if (iVar6 == -1) {
      return;
    }
  }
  pTVar8 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
           ::FindChecked(this_00,param_2);
  local_88 = (pTVar8->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_88 == (UInputMappingContext *)0x0) {
      return;
    }
  }
  else {
    if (local_88 == (UInputMappingContext *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  EVar4 = local_res20[0];
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  uVar18 = (ulonglong)param_5;
  local_c8 = FindDuplicateKey(this,(TObjectPtr<UInputMappingContext>)&local_88,param_4,EVar4,param_5
                              ,param_6);
  if (local_c8 != None) {
    UDS_GameOptionManager::GetGameOptionDataList(this_02,&local_98,KeySettings);
    uVar9 = (ulonglong)local_98.ArrayNum;
    local_c4 = local_98.ArrayNum;
    pFVar16 = local_98.AllocatorInstance.Data + uVar9 * 8;
    FVar17.Data = local_98.AllocatorInstance.Data;
    local_d0 = pFVar16;
    do {
      if (local_98.ArrayNum != (uint)uVar9) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<UDS_GameOptionData_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (FVar17.Data == pFVar16) goto LAB_14b8d6c0a;
      this_01 = *(UDS_GameOptionData **)FVar17.Data;
      if (this_01 != (UDS_GameOptionData *)0x0) {
        EVar7 = UDS_GameOptionData::GetGameOptionID(this_01);
        pFVar10 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar7,true);
        pFVar16 = local_d0;
        if ((((pFVar10 != (FDS_GameOptionBaseTableRow *)0x0) &&
             (EVar1 = (EDS_InputDeviceType)pFVar10->Value1, EVar1 != None)) && (EVar1 == param_4))
           && ((EVar2 = pFVar10->Value2, EVar2 != None && (EVar2 == param_2)))) {
          if ((pFVar10->DefaultValue).ArrayNum < 1) {
            uVar18 = 0;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          EVar4 = local_c8;
          pFVar16 = local_d0;
          if (*(EDS_KeyActionType *)(pFVar10->DefaultValue).AllocatorInstance.Data == local_c8)
          goto LAB_14b8d6b6b;
        }
      }
      uVar9 = (ulonglong)local_c4;
      FVar17.Data = FVar17.Data + 8;
    } while( true );
  }
LAB_14b8d6c1c:
  EVar4 = local_res20[0];
  this->KeyChangeGameOptionID = None;
  pTVar8 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
           ::FindChecked(this_00,param_2);
  local_78.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar8->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78.DebugPtr != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
  }
  TVar11 = DS_InputUtil::OverrideKey
                     ((UDS_InputConfig *)(local_58 + 8),
                      (TObjectPtr<UInputMappingContext>)this->InputConfig,
                      (EDS_KeyActionType)&local_78,(EDS_InputDeviceType)EVar4,
                      (EDS_KeyType)CONCAT71((int7)(uVar18 >> 8),param_4),param_5);
  pTVar13 = &TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
             ::FindChecked(&this->InputMappingContextMap,param_2)->field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)TVar11.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)TVar11.field0_0x0);
  }
  *pTVar13 = *(TObjectPtr<UInputMappingContext>_u_0 *)TVar11.field0_0x0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8[2] = param_5;
  EStack_ac = param_6;
  local_a8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
  *(ulonglong *)local_a8.AllocatorInstance.Data = CONCAT44(EStack_ac,local_b8[2]);
  UDS_GameOptionData::SetGameOptionKeyValue(local_70,this->KeyChangeIndex,&local_a8);
  this_03 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_03 == (UDS_WindowManager *)0x0) goto LAB_14b8d6d5d;
  }
  else {
    if (this_03 == (UDS_WindowManager *)0x0) goto LAB_14b8d6d5d;
    UE::GC::MarkAsReachable((UObject *)this_03);
  }
  local_c0 = 0.0;
  local_bc = 0;
  UDS_WindowManager::CloseWindow(this_03,PopupCommon,&local_bc,&local_c0);
LAB_14b8d6d5d:
  pUVar14 = UDS_InputEvent::GetEvent();
  if (pUVar14 != (UDS_InputEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_KeyActionType_const_&>::Broadcast
              (&pUVar14->OnChangeInputKey,local_res20);
  }
  return;
LAB_14b8d6b6b:
  pTVar8 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
           ::FindChecked(this_00,EVar2);
  local_80.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar8->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_80.DebugPtr != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_80.DebugPtr);
  }
  uVar18 = CONCAT71((int7)(uVar18 >> 8),EVar1);
  TVar11 = DS_InputUtil::OverrideKey
                     ((UDS_InputConfig *)local_58,
                      (TObjectPtr<UInputMappingContext>)this->InputConfig,
                      (EDS_KeyActionType)&local_80,(EDS_InputDeviceType)EVar4,(EDS_KeyType)uVar18,
                      None);
  pTVar8 = TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
           ::FindChecked(this_00,param_2);
  TObjectPtr<UInputMappingContext>::operator=
            (pTVar8,(TObjectPtr<UInputMappingContext> *)TVar11.field0_0x0);
  local_68._First = local_b8;
  local_b8[0] = None;
  local_b8[1] = None;
  local_68._Last = local_b8 + 2;
  pTVar12 = TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>::
            TArray<enum_EDS_KeyType,TSizedDefaultAllocator<32>_>(local_48,&local_68);
  UDS_GameOptionData::SetGameOptionKeyValue(this_01,FirstKey,pTVar12);
LAB_14b8d6c0a:
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  goto LAB_14b8d6c1c;
}

// OnGameOptionKeyChangeCanceled @ 14b8d6da0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnGameOptionKeyChangeCanceled
          (ADS_PlayerController *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  UDS_WindowManager *this_02;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_GameOptionManager::GetInst();
  if ((this_00 != (UDS_GameOptionManager *)0x0) &&
     (this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,this->KeyChangeGameOptionID),
     this_01 != (UDS_GameOptionData *)0x0)) {
    this->KeyChangeGameOptionID = None;
    this->KeyChangeIndex = FirstKey;
    UDS_GameOptionData::BroadcastDataToVM(this_01);
    this_02 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_02 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
    else {
      if (this_02 == (UDS_WindowManager *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_02);
    }
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_02,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnGamepadCursorSensitivityChanged @ 14b8d6e40

void __thiscall
ADS_PlayerController::OnGamepadCursorSensitivityChanged
          (ADS_PlayerController *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  
  RefreshInputCursorSettings(this);
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnInputEvent @ 14b8d7850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnInputEvent
          (ADS_PlayerController *this,FInputActionValue *param_1,EDS_KeyActionType param_2,
          ETriggerEvent param_3)

{
  UDS_WindowManager *this_00;
  UDS_InputEvent *pUVar1;
  EDS_KeyActionType local_res18 [4];
  FDS_InputEventParams local_38;
  
  local_res18[0] = param_2;
  if (this->InputControlType == UIMode) {
    local_38.InputActionValue.Value.field0_0x0._s_0.X = (param_1->Value).field0_0x0._s_0.X;
    local_38.InputActionValue.Value.field0_0x0._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
    local_38.InputActionValue.Value.field0_0x0._s_0.Z = (param_1->Value).field0_0x0._s_0.Z;
    local_38.InputActionValue.ValueType = param_1->ValueType;
    local_38.InputActionValue._25_7_ = *(undefined7 *)&param_1->field_0x19;
    local_38.TriggerEvent = param_3;
    this_00 = UDS_WindowManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
    }
    else {
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    if (param_3 == Started) {
      UDS_WindowManager::OnInputActionStarted(this_00,local_res18,&local_38);
      return;
    }
    if (param_3 == Triggered) {
      UDS_WindowManager::OnInputActionTriggered(this_00,local_res18,&local_38);
      return;
    }
    if (param_3 == Completed) {
      UDS_WindowManager::OnInputActionCompleted(this_00,local_res18,&local_38);
      return;
    }
    if (param_3 == Canceled) {
      UDS_WindowManager::OnInputActionCanceled(this_00,local_res18,&local_38);
      return;
    }
  }
  else {
    pUVar1 = UDS_InputEvent::GetEvent();
    if (pUVar1 != (UDS_InputEvent *)0x0) {
      FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
      ::Broadcast(&pUVar1->OnInputEvent,local_res18,local_res18[0],param_3,param_1);
    }
  }
  return;
}

// OnInputMethodChanged @ 14b8d7990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnInputMethodChanged(ADS_PlayerController *this,ECommonInputType param_1)

{
  EDS_InputControlType EVar1;
  UDS_LogManager *pUVar2;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *this_01;
  UDS_InputEvent *pUVar3;
  long64 lVar4;
  EDS_InputDeviceType EVar5;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  EVar5 = None;
  if (param_1 == MouseAndKeyboard) {
    EVar5 = KeyboardMouse;
  }
  else if (param_1 == Gamepad) {
    EVar5 = GamePad;
  }
  else if ((param_1 == Touch) || (param_1 == Count)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_PlayerController::OnInputMethodChanged",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xa74,L"OnInputMethodChanged() Invalid InputType");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
    if (this_00 == (ULocalPlayer *)0x0) {
      return;
    }
    this_01 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
    if (this_01 == (UCommonInputSubsystem *)0x0) {
      return;
    }
    UCommonInputSubsystem::SetCurrentInputType(this_01,MouseAndKeyboard);
    return;
  }
  if (this->InputDeviceType != EVar5) {
    this->InputDeviceType = EVar5;
    EVar1 = AdjustInputControlType(this,this->InputControlType);
    SetInputControlType(this,EVar1,true);
    pUVar3 = UDS_InputEvent::GetEvent();
    if (pUVar3 != (UDS_InputEvent *)0x0) {
      FDS_EventDelegate<enum_EDS_InputDeviceType_const_&>::Broadcast
                (&pUVar3->OnChangeInputDeviceType,&this->InputDeviceType);
    }
    if (this->InputDeviceType == KeyboardMouse) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_PlayerController::OnInputMethodChanged",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,local_138.Ptr,0xa94,L"OnInputMethodChanged() MouseAndKeyboard");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      lVar4 = 0x641;
    }
    else {
      if (this->InputDeviceType != GamePad) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_PlayerController::OnInputMethodChanged",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Display,local_138.Ptr,0xa9a,L"OnInputMethodChanged() Gamepad");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      lVar4 = 0x642;
    }
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(lVar4,Alert_None_01,&local_158);
  }
  return;
}

// OnLoadedGameOptionDevice @ 14b8d8260

void __thiscall ADS_PlayerController::OnLoadedGameOptionDevice(ADS_PlayerController *this)

{
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *pUVar1;
  
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 != (UDS_GameOptionManager *)0x0) {
    pUVar1 = UDS_GameOptionManager::GetGameOptionData(this_00,GamepadCursorSensitivity);
    if (pUVar1 != (UDS_GameOptionData *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar1->GameOptionDataChangedFromVM,this);
      TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_PlayerController>
                ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  *)&pUVar1->GameOptionDataChangedFromVM,(ADS_PlayerController *)&stack0x00000010,
                 (pmf_e9c5a142 *)this);
    }
    pUVar1 = UDS_GameOptionManager::GetGameOptionData(this_00,MouseCursorSensitivity);
    if (pUVar1 != (UDS_GameOptionData *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar1->GameOptionDataChangedFromVM,this);
      TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
      ::AddUObject<ADS_PlayerController>
                ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  *)&pUVar1->GameOptionDataChangedFromVM,(ADS_PlayerController *)&stack0x00000010,
                 (pmf_e9c5a142 *)this);
    }
  }
  return;
}

// OnMouseCursorSensitivityChanged @ 14b8d8350

void __thiscall
ADS_PlayerController::OnMouseCursorSensitivityChanged
          (ADS_PlayerController *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  
  RefreshInputCursorSettings(this);
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnOpenTotalMenu @ 14b8d8e60

void __thiscall
ADS_PlayerController::OnOpenTotalMenu(ADS_PlayerController *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x20);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = (FDS_ViewModelContext *)local_28.SharedReferenceCount.ReferenceController;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar5 = pFVar3;
    }
    local_28.Object = pFVar5;
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar5;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    }
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = local_28.Object;
    pUVar4 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar5->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_28);
    }
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_28.Object)->ViewModelTemplateKey = W_TotalMenu;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_28.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPossess @ 14b8d94a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_PlayerController::OnPossess(ADS_PlayerController *this,APawn *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UDS_CameraComponent *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  APlayerController::OnPossess((APlayerController *)this,param_1);
  if (this->_padding_ != 0) {
    pUVar2 = Z_Construct_UClass_ADS_CameraManager_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if ((bVar1) && ((ADS_CameraManager *)this->_padding_ != (ADS_CameraManager *)0x0)) {
      pUVar3 = ADS_CameraManager::GetCurrentCameraComponent((ADS_CameraManager *)this->_padding_);
      if (pUVar3 != (UDS_CameraComponent *)0x0) {
        (**(code **)(pUVar3->_padding_ + 0x670))(pUVar3);
      }
      Refresh(this);
      return;
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_PlayerController::OnPossess",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x14b,L"cameraMng is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnUnPossess @ 14b8da5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::OnUnPossess(ADS_PlayerController *this)

{
  (**(code **)(this->_padding_ + 0x6f8))();
  APlayerController::OnUnPossess((APlayerController *)this);
  return;
}

// OnViewportLostFocus @ 14b8da5e0

void __thiscall
ADS_PlayerController::OnViewportLostFocus(ADS_PlayerController *this,FViewport *param_1)

{
  if ((this->InputControlType == ActionMode) && (this->bActionModeCursorEnabled == false)) {
    this->bActionModeCursorEnabled = true;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ChangeCursorStateDelegate,true);
    RefreshInputCursorSettings(this);
    return;
  }
  return;
}

// OnViewportReceivedFocus @ 14b8da630

void __thiscall
ADS_PlayerController::OnViewportReceivedFocus(ADS_PlayerController *this,FViewport *param_1)

{
  bool bVar1;
  EDS_GameStateType EVar2;
  ADS_GameMode *this_00;
  FWeakObjectPtr local_res18 [2];
  
  ADS_GameMode::GetInst();
  bVar1 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    this_00 = (ADS_GameMode *)FWeakObjectPtr::Get(local_res18);
    EVar2 = ADS_GameMode::GetCurGameStateType(this_00);
    if ((EVar2 == IngameState) && (this->bActionModeCursorEnabled == true)) {
      RefreshInputCursorSettings(this);
    }
  }
  return;
}

// OnWindowOpenCloseEvent @ 14b8da690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::OnWindowOpenCloseEvent
          (ADS_PlayerController *this,EDS_WindowWidget param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  EDS_GameStateType EVar3;
  int iVar4;
  EDS_InputMappingType EVar5;
  ADS_GameMode *this_00;
  UDS_WindowManager *this_01;
  TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  UDS_ConstructionManager *pUVar8;
  EDS_InputControlType EVar9;
  EDS_InputFlags local_res20 [2];
  EDS_InputFlags local_f8 [2];
  EDS_InputFlags local_f0 [2];
  EDS_InputFlags local_e8 [2];
  EDS_InputFlags local_e0 [2];
  EDS_InputFlags local_d8 [2];
  EDS_InputFlags local_d0 [2];
  EDS_InputFlags local_c8 [2];
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  TVector<double>_u_0 local_a8;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  TVector<double>_u_0 local_88;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  TVector<double>_u_0 local_68;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  TVector<double>_u_0 local_48;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  undefined1 local_28 [16];
  
  ADS_GameMode::GetInst();
  bVar2 = TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> *)&local_b8,(void *)0x0);
  if (bVar2) {
    return;
  }
  this_00 = (ADS_GameMode *)FWeakObjectPtr::Get(&local_b8);
  EVar3 = ADS_GameMode::GetCurGameStateType(this_00);
  if (EVar3 != IngameState) {
    return;
  }
  this_01 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_01 == (UDS_WindowManager *)0x0) goto LAB_14b8da80d;
  }
  else {
    if (this_01 == (UDS_WindowManager *)0x0) {
LAB_14b8da80d:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5435635855911810372>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                         ,0xabc,"false");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  if ((param_1 == HUDDeath) && (*param_2 == true)) {
LAB_14b8da8a3:
    if (this->bActionModeCursorEnabled != true) {
      this->bActionModeCursorEnabled = true;
      TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                (&this->ChangeCursorStateDelegate,true);
    }
    RefreshInputCursorSettings(this);
    return;
  }
  TVar6 = UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)local_28);
                    /* WARNING: Load size is inaccurate */
  local_b0 = *TVar6.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_b0);
  if (!bVar2) {
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_b0);
  if (pUVar7[8].field_0x20 == '\0') {
    return;
  }
  UDS_WindowManager::GetCurrentClosableWindowInfo(this_01);
  bVar2 = FWeakObjectPtr::IsValid(&local_c0);
  if (bVar2) {
    iVar4 = UDS_WindowManager::GetClosableWindowInfoTotalCount(this_01);
    if ((iVar4 == 1) &&
       (pUVar7 = FWeakObjectPtr::Get(&local_c0), param_1 == *(EDS_WindowWidget *)(pUVar7 + 1))) {
      this->bPrevActionModeCursorEnabled = this->bActionModeCursorEnabled;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_c0);
    iVar4 = *(int *)(pUVar7 + 1);
    if (iVar4 == 0x20) {
      return;
    }
    if (iVar4 != 0xcf) {
      if (iVar4 == 0x3ec) {
        if (this->InputDeviceType == GamePad) {
          SetInputControlType(this,Cursor,false);
        }
        if (this->bActionModeCursorEnabled == false) {
          this->bActionModeCursorEnabled = true;
          TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->ChangeCursorStateDelegate,true);
        }
        SetCursorVisible(this,false);
        return;
      }
      if (iVar4 == 0x421) {
        return;
      }
      SetInputControlType(this,UIMode,false);
      EVar5 = ConvertInputControlTypeToMappingType(this,UIMode);
      ChangeInputMapping(this,EVar5);
      return;
    }
    if (this->InputDeviceType != GamePad) {
      SetInputControlType(this,ActionMode,false);
      goto LAB_14b8da8a3;
    }
    EVar9 = Cursor;
  }
  else {
    if (param_1 == CommonTextTooltip) {
      return;
    }
    if (param_1 == ItemDetailInfo) {
      EVar9 = this->PrevInputControlType;
    }
    else {
      if (param_1 == RingCommand) {
        if (this->InputDeviceType == GamePad) {
          SetInputControlType(this,ActionMode,false);
        }
        bVar2 = this->bPrevActionModeCursorEnabled;
        if (this->bActionModeCursorEnabled != bVar2) {
          this->bActionModeCursorEnabled = bVar2;
          if (bVar2 == false) {
            if ((this->InputFlag & MOUSE_LEFT_PRESSED) != NONE) {
              local_e0[0] = MOUSE_LEFT_PRESSED;
              this->InputFlag = this->InputFlag & ~MOUSE_LEFT_PRESSED;
              TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(&this->RemoveInputFlagDelegate,local_e0);
              local_4f = 0;
              local_4b = 0;
              local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_49 = 0;
              local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_50 = 0;
              local_d8[0] = MOUSE_LEFT_RELEASED;
              TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(&ChangeInputDelegate,local_d8,(FInputActionValue *)&local_68._s_0);
            }
            if ((this->InputFlag & MOUSE_RIGHT_PRESSED) != NONE) {
              local_d0[0] = MOUSE_RIGHT_PRESSED;
              this->InputFlag = this->InputFlag & ~MOUSE_RIGHT_PRESSED;
              TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(&this->RemoveInputFlagDelegate,local_d0);
              local_2f = 0;
              local_2b = 0;
              local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_29 = 0;
              local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_30 = 0;
              local_c8[0] = MOUSE_RIGHT_RELEASED;
              TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast(&ChangeInputDelegate,local_c8,(FInputActionValue *)&local_48._s_0);
            }
          }
          TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->ChangeCursorStateDelegate,bVar2);
        }
        RefreshInputCursorSettings(this);
        if (this->bPrevActionModeCursorEnabled != true) {
          return;
        }
        SetCursorVisible(this,true);
        return;
      }
      if (param_1 == ChattingSubTabList) {
        return;
      }
      if (((param_1 != CheatKey) ||
          (pUVar8 = UDS_ConstructionManager::GetInst(), pUVar8 == (UDS_ConstructionManager *)0x0))
         || (pUVar8->IsConstructionMode == false)) {
        SetInputControlType(this,ActionMode,false);
        if (this->InputDeviceType == GamePad) {
          return;
        }
        if (this->InputControlType != ActionMode) {
          return;
        }
        bVar2 = this->bPrevActionModeCursorEnabled;
        if (this->bActionModeCursorEnabled == bVar2) {
          return;
        }
        this->bActionModeCursorEnabled = bVar2;
        if (bVar2 == false) {
          if ((this->InputFlag & MOUSE_LEFT_PRESSED) != NONE) {
            local_res20[0] = MOUSE_LEFT_PRESSED;
            this->InputFlag = this->InputFlag & ~MOUSE_LEFT_PRESSED;
            TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->RemoveInputFlagDelegate,local_res20);
            local_8f = 0;
            local_8b = 0;
            local_a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_89 = 0;
            local_a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_90 = 0;
            local_f8[0] = MOUSE_LEFT_RELEASED;
            TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&ChangeInputDelegate,local_f8,(FInputActionValue *)&local_a8._s_0);
          }
          if ((this->InputFlag & MOUSE_RIGHT_PRESSED) != NONE) {
            local_f0[0] = MOUSE_RIGHT_PRESSED;
            this->InputFlag = this->InputFlag & ~MOUSE_RIGHT_PRESSED;
            TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->RemoveInputFlagDelegate,local_f0);
            local_6f = 0;
            local_6b = 0;
            local_88._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_88._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_69 = 0;
            local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_70 = 0;
            local_e8[0] = MOUSE_RIGHT_RELEASED;
            TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&ChangeInputDelegate,local_e8,(FInputActionValue *)&local_88._s_0);
          }
        }
        TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->ChangeCursorStateDelegate,bVar2);
        RefreshInputCursorSettings(this);
        return;
      }
      EVar9 = Construction;
    }
  }
  SetInputControlType(this,EVar9,false);
  return;
}

// OpenRingCmd @ 14b8de890

void __thiscall
ADS_PlayerController::OpenRingCmd(ADS_PlayerController *this,UDS_UserWidget *param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_RingCmd *pFVar3;
  bool bVar4;
  FDS_UIData *pFVar5;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18;
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar5 = TDS_Singleton<FDS_UIData>::GetInst();
    iVar1 = pFVar5->CurrentRingCmdQuickSlotDeckIndex;
    MakeContext<FDS_ViewModelContext_RingCmd>(&local_28);
    pFVar3 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_RingCmd *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x10f;
    pFVar3->RingCmdDeckNum = iVar1;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// PlayForceFeedback @ 14b8de990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::PlayForceFeedback(ADS_PlayerController *this,float param_1,float param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UForceFeedbackEffect *pUVar10;
  FRichCurve *this_00;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 in_R9B;
  float fVar14;
  undefined1 auStackY_318 [32];
  uint in_stack_fffffffffffffd08;
  FKeyHandle FVar15;
  uint local_2c0;
  FKeyHandle local_2bc [2];
  FKeyHandle local_2b4 [3];
  FForceFeedbackParameters local_2a8;
  undefined1 local_298 [128];
  uint local_218 [2];
  undefined1 local_210 [72];
  void *local_1c8;
  undefined4 local_1c0;
  void *local_1b8;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a3;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  TObjectPtr<UCurveFloat>_u_0 local_190;
  uint local_188 [2];
  undefined1 local_180 [72];
  void *local_138;
  undefined4 local_130;
  void *local_128;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  TObjectPtr<UCurveFloat>_u_0 local_100;
  undefined1 local_f8 [72];
  void *local_b0;
  undefined4 local_a8;
  void *local_a0;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  ForAnyElementType local_88;
  int local_80;
  TObjectPtr<UCurveFloat>_u_0 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_318;
  fVar14 = param_1;
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_298,pUVar9);
  local_298._8_8_ = pUVar8;
  pUVar10 = (UForceFeedbackEffect *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_298);
  if (local_298._64_8_ != 0) {
    plVar13 = (longlong *)(local_298 + 0x50);
    if ((longlong *)local_298._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_298._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if (pUVar10 != (UForceFeedbackEffect *)0x0) {
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_f8);
    this_00 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)local_f8);
    if (this_00 != (FRichCurve *)0x0) {
      FKeyHandle::FKeyHandle(local_2bc);
      FVar15.Index = in_stack_fffffffffffffd08 & 0xffffff00;
      FRichCurve::AddKey(this_00,fVar14,0.0,(bool)in_R9B,FVar15);
      FKeyHandle::FKeyHandle(local_2b4);
      FRichCurve::AddKey(this_00,fVar14,param_1,(bool)in_R9B,(FKeyHandle)(FVar15.Index & 0xffffff00)
                        );
    }
    local_188[0] = local_188[0] | 0xf;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_180);
    iVar6 = local_80;
    FVar4.Data = local_88.Data;
    lVar12 = (longlong)local_80;
    local_188[0] = local_188[0] | 1;
    local_114 = local_8c;
    local_113 = local_8b;
    local_118 = local_90;
    local_108 = local_80;
    if ((local_80 == 0) && (local_104 == 0)) {
      local_104 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,local_80,local_104,&local_110,local_80,&local_104);
      if (iVar6 != 0) {
        memcpy(local_110.Data,FVar4.Data,lVar12 * 0x1c);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_78.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
    }
    local_218[0] = local_218[0] | 0xf;
    local_100 = local_78;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_210);
    FVar4.Data = local_88.Data;
    local_218[0] = local_218[0] | 4;
    local_1a4 = local_8c;
    local_1a3 = local_8b;
    local_1a8 = local_90;
    local_198 = local_80;
    if ((local_80 == 0) && (local_194 == 0)) {
      local_194 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,local_80,local_194,&local_1a0,local_80,&local_194);
      if (local_80 != 0) {
        memcpy(local_1a0.Data,FVar4.Data,(longlong)local_80 * 0x1c);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_78.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
    }
    pFVar2 = (pUVar10->ChannelDetails).AllocatorInstance.Data;
    local_190 = local_78;
    if ((pFVar2 <= (FScriptContainerElement *)local_188) &&
       ((FScriptContainerElement *)local_188 <
        pFVar2 + (longlong)(pUVar10->ChannelDetails).ArrayMax * 0x90)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (pUVar10->ChannelDetails).ArrayNum;
    if (iVar6 == (pUVar10->ChannelDetails).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&(pUVar10->ChannelDetails).AllocatorInstance,
                         &(pUVar10->ChannelDetails).ArrayMax);
    }
    pFVar2 = (pUVar10->ChannelDetails).AllocatorInstance.Data;
    (pUVar10->ChannelDetails).ArrayNum = iVar6 + 1;
    lVar12 = (longlong)iVar6;
    uVar11 = local_188[0] & 1;
    uVar1 = *(uint *)(pFVar2 + lVar12 * 0x90);
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar11 | uVar1 & 0xfffffffe;
    uVar7 = local_188[0] & 2;
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar11 | uVar1 & 0xfffffffc | uVar7;
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar11 | uVar1 & 0xfffffff8 | uVar7 | local_188[0] & 4;
    *(uint *)(pFVar2 + lVar12 * 0x90) =
         uVar11 | uVar1 & 0xfffffff0 | uVar7 | local_188[0] & 4 | local_188[0] & 8;
    FRichCurve::FRichCurve((FRichCurve *)(pFVar2 + lVar12 * 0x90 + 8),(FRichCurve *)local_180);
    ((TObjectPtr<UCurveFloat>_u_0 *)(pFVar2 + lVar12 * 0x90 + 0x88))->DebugPtr =
         (UCurveFloat *)local_100;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_100.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_100.DebugPtr);
    }
    pFVar2 = (pUVar10->ChannelDetails).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_218) &&
       ((FScriptContainerElement *)local_218 <
        pFVar2 + (longlong)(pUVar10->ChannelDetails).ArrayMax * 0x90)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (pUVar10->ChannelDetails).ArrayNum;
    if (iVar6 == (pUVar10->ChannelDetails).ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x890,&(pUVar10->ChannelDetails).AllocatorInstance,
                         &(pUVar10->ChannelDetails).ArrayMax);
    }
    pFVar2 = (pUVar10->ChannelDetails).AllocatorInstance.Data;
    (pUVar10->ChannelDetails).ArrayNum = iVar6 + 1;
    lVar12 = (longlong)iVar6;
    uVar7 = local_218[0] & 1;
    uVar1 = *(uint *)(pFVar2 + lVar12 * 0x90);
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar1 & 0xfffffffe | uVar7;
    uVar11 = local_218[0] & 2;
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar1 & 0xfffffffc | uVar7 | uVar11;
    *(uint *)(pFVar2 + lVar12 * 0x90) = uVar1 & 0xfffffff8 | uVar7 | uVar11 | local_218[0] & 4;
    *(uint *)(pFVar2 + lVar12 * 0x90) =
         uVar1 & 0xfffffff0 | uVar7 | uVar11 | local_218[0] & 4 | local_218[0] & 8;
    FRichCurve::FRichCurve((FRichCurve *)(pFVar2 + lVar12 * 0x90 + 8),(FRichCurve *)local_210);
    ((TObjectPtr<UCurveFloat>_u_0 *)(pFVar2 + lVar12 * 0x90 + 0x88))->DebugPtr =
         (UCurveFloat *)local_190;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_190.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_190.DebugPtr);
    }
    local_2c0 = local_2c0 & 0xff000000;
    local_2a8.Tag.ComparisonIndex.Value = 0;
    local_2a8.Tag.Number = 0;
    local_2a8.bLooping = (bool)(undefined1)local_2c0;
    local_2a8.bIgnoreTimeDilation = (bool)local_2c0._1_1_;
    local_2a8.bPlayWhilePaused = (bool)local_2c0._2_1_;
    local_2a8._11_1_ = local_2c0._3_1_;
    APlayerController::ClientPlayForceFeedback_Internal
              ((APlayerController *)this,pUVar10,&local_2a8);
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    local_210._0_8_ = &___7FIndexedCurve__6B_;
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
    local_1c0 = 0;
    if (local_1c8 != (void *)0x0) {
      FMemory::Free(local_1c8);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_210 + 8));
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    local_180._0_8_ = &___7FIndexedCurve__6B_;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    local_130 = 0;
    if (local_138 != (void *)0x0) {
      FMemory::Free(local_138);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_180 + 8));
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    local_f8._0_8_ = &___7FIndexedCurve__6B_;
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    local_a8 = 0;
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
    TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_f8 + 8));
  }
  return;
}

// PlayerMoveTick @ 14b8df000

void __thiscall ADS_PlayerController::PlayerMoveTick(ADS_PlayerController *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  UDS_CharStateData *pUVar6;
  UDS_MovementCore *pUVar7;
  TRotator<double> *pTVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  UObject *pUVar11;
  float fVar12;
  EDS_CharState local_res8;
  TRotator<double> local_b8;
  TVector<double>_u_0 local_a0;
  TRotator<double> local_88;
  TRotator<double> local_70;
  TRotator<double> local_58 [3];
  
  bVar5 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if ((((!bVar5) &&
       (bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                          (&this->MovementCore,(void *)0x0), !bVar5)) &&
      (bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                         (&this->CharStateData,(void *)0x0), !bVar5)) &&
     ((this->InputFlag & INPUT_LOCK) == NONE)) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res8 = AutoMove;
    bVar5 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
    if ((bVar5) || ((this->InputFlag & KEY_MOVE) != NONE)) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res8 = Swim;
      bVar5 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
      if (!bVar5) {
        pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
        local_res8 = Climbing;
        bVar5 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
        if (!bVar5) {
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          local_res8 = Mount;
          bVar5 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
          if (!bVar5) {
            if ((this->InputFlag >> 10 & 1) == 0) {
              if ((this->InputFlag >> 0x10 & 1) == 0) {
                local_b8.Pitch = 0.0;
                lVar10 = (**(code **)(this->_padding_ + 0x7a8))(this,local_58);
                local_b8.Roll = 0.0;
                local_b8.Yaw = (double)(float)*(double *)(lVar10 + 8);
                pTVar9 = UE::Math::TRotator<double>::RotateVector
                                   (&local_b8,(TVector<double> *)&local_70,
                                    &UE::Math::TVector<double>::RightVector);
                pTVar8 = &local_70;
              }
              else {
                pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
                local_b8.Pitch = 0.0;
                pTVar8 = UDS_MovementCore::GetActorRotation(pUVar7,&local_70);
                local_b8.Roll = 0.0;
                local_b8.Yaw = (double)(float)pTVar8->Yaw;
                pTVar9 = UE::Math::TRotator<double>::RotateVector
                                   (&local_b8,(TVector<double> *)&local_88,
                                    &UE::Math::TVector<double>::RightVector);
                pTVar8 = local_58;
              }
              local_88.Roll = (pTVar9->field0_0x0)._s_0.Z;
              dVar3 = (pTVar9->field0_0x0)._s_0.X;
              dVar4 = (pTVar9->field0_0x0)._s_0.Y;
              pTVar9 = UE::Math::TRotator<double>::RotateVector
                                 (&local_b8,(TVector<double> *)pTVar8,
                                  &UE::Math::TVector<double>::ForwardVector);
              dVar1 = (this->InputMoveDirection).field0_0x0._s_0.X;
              dVar2 = (this->InputMoveDirection).field0_0x0._s_0.Y;
              local_b8.Roll = (pTVar9->field0_0x0)._s_0.Z;
              local_a0._s_0.X = dVar2 * (pTVar9->field0_0x0)._s_0.X + dVar1 * dVar3;
              local_a0._s_0.Z = dVar2 * local_b8.Roll + dVar1 * local_88.Roll;
              local_a0._s_0.Y = dVar2 * (pTVar9->field0_0x0)._s_0.Y + dVar1 * dVar4;
              pUVar11 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
              (**(code **)(*(longlong *)pUVar11 + 0x2e0))(pUVar11,&local_a0);
            }
            if ((this->InputFlag & LOCK_INPUT_ROTATION) == NONE) {
              pUVar11 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
              (**(code **)(*(longlong *)pUVar11 + 0x458))(pUVar11,&local_a0);
              if (((local_a0._s_0.X != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
                  (local_a0._s_0.Y != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
                 (local_a0._s_0.Z != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
                UE::Math::TVector<double>::ToOrientationRotator
                          ((TVector<double> *)&local_a0._s_0,&local_88);
                local_b8.Yaw = local_88.Yaw;
                local_b8.Pitch = 0.0;
                local_b8.Roll = 0.0;
                pUVar11 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
                fVar12 = (float)(**(code **)(*(longlong *)&pUVar11[0x29].field_0x10 + 0x158))();
                pUVar7 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
                pTVar8 = UDS_MovementCore::GetActorRotation(pUVar7,local_58);
                pTVar8 = FMath::RInterpTo(&local_70,pTVar8,&local_b8,param_1,fVar12);
                local_b8.Pitch = pTVar8->Pitch;
                local_b8.Yaw = pTVar8->Yaw;
                local_b8.Roll = pTVar8->Roll;
                pUVar11 = FWeakObjectPtr::Get(&(this->MovementCore).WeakPtr);
                (**(code **)(*(longlong *)pUVar11 + 0x370))(pUVar11,&local_b8);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// PlayerTick @ 14b8df3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::PlayerTick(ADS_PlayerController *this,float param_1)

{
  APlayerController::PlayerTick((APlayerController *)this,param_1);
  PlayerMoveTick(this,param_1);
  return;
}

// PostInitializeComponents @ 14b8df420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_PlayerController::PostInitializeComponents(ADS_PlayerController *this)

{
  code *pcVar1;
  bool bVar2;
  ENetMode EVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined1 auStackX_8 [32];
  
  AController::PostInitializeComponents((AController *)this);
  if (this == (ADS_PlayerController *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    EVar3 = AActor::InternalGetNetMode((AActor *)this);
    if (EVar3 != NM_Client) {
      (**(code **)(this->_padding_ + 0x830))(this);
    }
  }
  (**(code **)(this->_padding_ + 0xe20))(this);
  (**(code **)(this->_padding_ + 0xf88))(this);
  EVar3 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar3 == NM_Client) {
    (**(code **)(this->_padding_ + 0xe88))(this);
  }
  (**(code **)(this->_padding_ + 0xe80))(this,0);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10;
  FVar4 = FNameEntryId::FromValidEName((EName)auStackX_8);
  this->_padding_ = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar4.Value);
  return;
}

// Refresh @ 14b8e0a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::Refresh(ADS_PlayerController *this)

{
  TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  UWN_AbilitySystemComponent *this_01;
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy> *this_02;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar7;
  undefined1 auStackY_678 [32];
  undefined1 local_648 [56];
  undefined1 local_610 [8];
  undefined1 local_608 [320];
  void *local_4c8;
  wchar_t *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_678;
  local_648._16_8_ = this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && ((UObject *)local_648._16_8_ != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_648._16_8_);
  }
  if ((UObject *)local_648._16_8_ != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)(local_648 + 0x10),pUVar3);
    local_648._32_8_ = local_648._16_8_;
    if (bVar2) goto LAB_14b8e0aa9;
  }
  local_648._32_8_ = (UObject *)0x0;
LAB_14b8e0aa9:
  this_00 = &this->OwnerCharacter;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_648._32_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_648._32_8_);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)((longlong)local_648 + 0x20));
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_4c8 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_608 + 0x40),
                 "ADS_PlayerController::Refresh",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_4c0,0x166,L"OwnerCharacter is nullptr.");
      if (local_4c8 != (void *)0x0) {
        FMemory::Free(local_4c8);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5435635855911812761>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                       ,0x167,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar6 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x78))
                       (&pUVar5[0x29].field_0x10,local_648 + 0x28);
    (this->MovementCore).WeakPtr = *pFVar6;
    bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->MovementCore,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_4a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4a8,"ADS_PlayerController::Refresh",0x1d,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_4a8.Ptr,0x16e,L"MovementCore is nullptr.");
        if ((void *)local_4a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4a8._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      (**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x178))();
      bVar2 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)
                         (local_648 + 0x18),(void *)0x0);
      if (bVar2) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"ADS_PlayerController::Refresh",0x1d,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_388.Ptr,0x176,L"asc is nullptr.");
          if ((void *)local_388._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_388._padding_);
          }
        }
      }
      else {
        this_01 = (UWN_AbilitySystemComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(local_648 + 0x18));
        this_02 = UWN_AbilitySystemComponent::GetChangedTagEvent(this_01);
        local_648._8_4_ = 0;
        local_648._0_8_ = OnChangedTagCallback;
        local_608._24_8_ = (ulonglong)(uint)local_648._12_4_ << 0x20;
        local_608._16_8_ = OnChangedTagCallback;
        TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<ADS_PlayerController>
                  ((TMulticastDelegateRegistration<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>
                    *)this_02,(ADS_PlayerController *)(local_648 + 0x30),(pmf_a84e8a52 *)this);
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        TVar7 = UDS_CharStateData::GetData((ulong64)local_610);
                    /* WARNING: Load size is inaccurate */
        (this->CharStateData).WeakPtr = *TVar7.WeakPtr;
        bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                          (&this->CharStateData,(void *)0x0);
        if (bVar2) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_268._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_268,"ADS_PlayerController::Refresh",0x1d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_268.Ptr,0x17f,L"CharStateData is nullptr.");
            if ((void *)local_268._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_268._padding_);
            }
          }
        }
        else {
          local_648._8_4_ = 0;
          local_648._0_8_ = OnChangedCharState;
          local_608._40_8_ = (ulonglong)(uint)local_648._12_4_ << 0x20;
          local_608._32_8_ = OnChangedCharState;
          pUVar5 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
          ::AddUObject<ADS_PlayerController>
                    ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                      *)&pUVar5[7].field_0x20,(ADS_PlayerController *)local_608,(pmf_9f1562c9 *)this
                    );
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pFVar6 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar5[0x29].field_0x10 + 0x1b8))();
          (this->InputData).WeakPtr = *pFVar6;
          bVar2 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals
                            (&this->InputData,(void *)0x0);
          if (bVar2) {
            pUVar4 = UDS_LogManager::GetInst();
            if (pUVar4 != (UDS_LogManager *)0x0) {
              pUVar4 = UDS_LogManager::GetInst();
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"ADS_PlayerController::Refresh",0x1d,Yes);
              UDS_LogManager::PrintLog
                        (pUVar4,1,Warning,local_148.Ptr,0x188,L"InputData is nullptr.");
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
          }
          else {
            local_648._8_4_ = 0;
            local_648._0_8_ = OnChangeInputActive;
            local_608._56_8_ = (ulonglong)(uint)local_648._12_4_ << 0x20;
            local_608._48_8_ = OnChangeInputActive;
            pUVar5 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
            TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
            AddUObject<ADS_PlayerController>
                      ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>
                        *)&pUVar5[4].field_0x10,(ADS_PlayerController *)local_648,
                       (pmf_a7638074 *)this);
          }
        }
      }
    }
  }
  return;
}

// RefreshInputCursorSettings @ 14b8e1130

void __thiscall ADS_PlayerController::RefreshInputCursorSettings(ADS_PlayerController *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_48 [16];
  FSharedReferencer<1> local_38;
  undefined2 local_30;
  FInputModeGameAndUI local_28;
  
  if ((this->InputControlType == ActionMode) && (this->bActionModeCursorEnabled != true)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  SetCursorVisible(this,bVar2);
  if (bVar2 == true) {
    FInputModeGameAndUI::FInputModeGameAndUI((FInputModeGameAndUI *)local_48);
    local_30._0_1_ = DoNotLock;
    local_30._1_1_ = false;
    pcVar1 = *(code **)(this->_padding_ + 0xd68);
    local_28._padding_ = (longlong)&___7FInputModeGameAndUI__6B_;
    local_28.WidgetToFocus.SharedReferenceCount.ReferenceController = local_38.ReferenceController;
    if (local_38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_38.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.MouseLockMode = DoNotLock;
    local_28.bHideCursorDuringCapture = false;
    (*pcVar1)(this,&local_28);
    FInputModeGameAndUI::~FInputModeGameAndUI(&local_28);
    FInputModeGameAndUI::~FInputModeGameAndUI((FInputModeGameAndUI *)local_48);
    return;
  }
  FInputModeGameOnly::FInputModeGameOnly((FInputModeGameOnly *)local_48);
  local_48[8] = false;
  (**(code **)(this->_padding_ + 0xd68))(this,local_48);
  FInputModeGameOnly::~FInputModeGameOnly((FInputModeGameOnly *)local_48);
  return;
}

// RemoveInputFlag @ 14b8e3290

void __thiscall
ADS_PlayerController::RemoveInputFlag(ADS_PlayerController *this,EDS_InputFlags param_1)

{
  EDS_InputFlags local_res10 [6];
  
  if ((param_1 & this->InputFlag) != NONE) {
    this->InputFlag = ~param_1 & this->InputFlag;
    local_res10[0] = param_1;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->RemoveInputFlagDelegate,local_res10);
  }
  return;
}

// RemoveTag @ 14b8e3330

void __thiscall ADS_PlayerController::RemoveTag(ADS_PlayerController *this,FGameplayTag *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_AbilitySystemComponent *this_00;
  FWeakObjectPtr local_res8;
  
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x178))
              (&pUVar2[0x29].field_0x10,&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
      UWN_AbilitySystemComponent::RemoveTag(this_00,param_1,-1);
    }
  }
  return;
}

// Reset @ 14b8e5820

void __thiscall ADS_PlayerController::Reset(ADS_PlayerController *this)

{
  bool bVar1;
  UObject *pUVar2;
  UWN_AbilitySystemComponent *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->InputFlag = NONE;
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerCharacter,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerCharacter).WeakPtr);
    (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x178))();
    bVar1 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_res8);
      this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                UWN_AbilitySystemComponent::GetChangedTagEvent(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
    }
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      (&this->CharStateData,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    }
    bVar1 = TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>::UEOpEquals(&this->InputData,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[4].field_0x10,this);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->OwnerCharacter).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->MovementCore).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->CharStateData).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->InputData).WeakPtr = local_res8;
  return;
}

// ResetInputFlag @ 14b8e5c30

void __thiscall ADS_PlayerController::ResetInputFlag(ADS_PlayerController *this)

{
  this->InputFlag = NONE;
  return;
}

// SetActionModeCursor @ 14b8e6b70

void __thiscall ADS_PlayerController::SetActionModeCursor(ADS_PlayerController *this,bool param_1)

{
  EnableActionModeCursor(this,param_1);
  RefreshInputCursorSettings(this);
  return;
}

// SetCursorLock @ 14b8e74f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::SetCursorLock(ADS_PlayerController *this,bool param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  ULocalPlayer *this_00;
  UDS_CommonUIActionRouterBase *pUVar3;
  atomic<int> *paVar4;
  
  this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if (this_00 != (ULocalPlayer *)0x0) {
    pUVar3 = ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_00);
    if (pUVar3 != (UDS_CommonUIActionRouterBase *)0x0) {
      lVar1 = *(longlong *)&pUVar3->field_0x38;
      pTVar2 = *(TReferenceControllerBase<1> **)&pUVar3->field_0x40;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        paVar4 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar4 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar4 = (atomic<int>)((int)*paVar4 + 1);
        UNLOCK();
      }
      if (lVar1 != 0) {
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar4 = (atomic<int>)((int)*paVar4 + 1);
          UNLOCK();
        }
        *(bool *)(lVar1 + 0x15c) = param_1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// SetCursorShape @ 14b8e7580

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
ADS_PlayerController::SetCursorShape(ADS_PlayerController *this,EDS_CursorShapeType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ICursor *pIVar2;
  UDS_CommonGameViewportClient *this_00;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  void **ppvVar6;
  UClass *pUVar7;
  TMap<EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CursorShapeType,void_*,0>_>
  *this_01;
  void *pvVar8;
  
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar1 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ICursor *)0x0) goto LAB_14b8e769f;
  pvVar8 = (void *)0x0;
  if (this->InputDeviceType == KeyboardMouse) {
    this_01 = &this->MouseCursorMap;
LAB_14b8e7617:
    ppvVar6 = TMapBase<enum_EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>_>
              ::Find(this_01,param_1);
    if (ppvVar6 != (void **)0x0) {
      pvVar8 = *ppvVar6;
    }
  }
  else if (this->InputDeviceType == GamePad) {
    this_01 = &this->GamePadCursorMap;
    goto LAB_14b8e7617;
  }
  this->CurrentCursorShape = param_1;
  pUVar4 = GEngine;
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
    pUVar7 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar4->GameViewport,pUVar7);
    if ((bVar5) &&
       (this_00 = (UDS_CommonGameViewportClient *)(pUVar4->GameViewport).field0_0x0.DebugPtr,
       this_00 != (UDS_CommonGameViewportClient *)0x0)) {
      if ((pvVar8 == (void *)0x0) || (param_1 == None)) {
        UDS_CommonGameViewportClient::SetOverrideMouseCursor(this_00,Default);
      }
      else {
        UDS_CommonGameViewportClient::SetOverrideMouseCursor(this_00,Custom);
        (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,0xe,pvVar8);
      }
    }
  }
LAB_14b8e769f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetCursorVisible @ 14b8e76f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::SetCursorVisible(ADS_PlayerController *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ICursor *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  UDS_CommonGameViewportClient *this_00;
  longlong lVar4;
  code *pcVar5;
  UEngine *pUVar6;
  bool bVar7;
  int iVar8;
  FSlateApplication *this_01;
  void **ppvVar9;
  UClass *pUVar10;
  ULocalPlayer *this_02;
  UDS_CommonUIActionRouterBase *pUVar11;
  atomic<int> *paVar12;
  UCommonInputSubsystem *this_03;
  FName *pFVar13;
  UDS_GameOptionManager *this_04;
  UDS_GameOptionData *this_05;
  FDS_GameOptionBaseTableRow *pFVar14;
  TMap<EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CursorShapeType,void_*,0>_>
  *this_06;
  void *pvVar15;
  float fVar16;
  FName local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  this_01 = FSlateApplication::Get();
  FSlateApplication::UsePlatformCursorForCursorUser(this_01,true);
  FSlateApplication::Get();
  if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 != (ICursor *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,param_1);
  }
  FSlateApplication::Get();
  if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (ICursor *)0x0) goto LAB_14b8e7875;
  pvVar15 = (void *)0x0;
  if (this->InputDeviceType == KeyboardMouse) {
    this_06 = &this->MouseCursorMap;
LAB_14b8e77f9:
    ppvVar9 = TMapBase<enum_EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>_>
              ::Find(this_06,Default);
    if (ppvVar9 != (void **)0x0) {
      pvVar15 = *ppvVar9;
    }
  }
  else if (this->InputDeviceType == GamePad) {
    this_06 = &this->GamePadCursorMap;
    goto LAB_14b8e77f9;
  }
  this->CurrentCursorShape = Default;
  pUVar6 = GEngine;
  if ((GEngine != (UEngine *)0x0) &&
     ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) {
    pUVar10 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&pUVar6->GameViewport,pUVar10);
    if ((bVar7) &&
       (this_00 = (UDS_CommonGameViewportClient *)(pUVar6->GameViewport).field0_0x0.DebugPtr,
       this_00 != (UDS_CommonGameViewportClient *)0x0)) {
      if (pvVar15 == (void *)0x0) {
        UDS_CommonGameViewportClient::SetOverrideMouseCursor(this_00,Default);
      }
      else {
        UDS_CommonGameViewportClient::SetOverrideMouseCursor(this_00,Custom);
        (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,0xe,pvVar15);
      }
    }
  }
LAB_14b8e7875:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (this->InputDeviceType == GamePad) {
    this_02 = APlayerController::GetLocalPlayer((APlayerController *)this);
    if (this_02 != (ULocalPlayer *)0x0) {
      pUVar11 = ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_02);
      if (pUVar11 != (UDS_CommonUIActionRouterBase *)0x0) {
        pTVar3 = *(TReferenceControllerBase<1> **)&pUVar11->field_0x40;
        lVar4 = *(longlong *)&pUVar11->field_0x38;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = &pTVar3->SharedReferenceCount;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        if (lVar4 != 0) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar12 = (atomic<int>)((int)*paVar12 + 1);
            UNLOCK();
          }
          *(bool *)(lVar4 + 0x79) = param_1;
          this_03 = UCommonUIActionRouterBase::GetInputSubsystem
                              (*(UCommonUIActionRouterBase **)(lVar4 + 0x70));
          pFVar13 = ::FName::FName(&local_res8,"AnalogCursor");
          UCommonInputSubsystem::SetInputTypeFilter(this_03,MouseAndKeyboard,*pFVar13,false);
          this_04 = UDS_GameOptionManager::GetInst();
          if (this_04 != (UDS_GameOptionManager *)0x0) {
            this_05 = UDS_GameOptionManager::GetGameOptionData(this_04,GamepadCursorSensitivity);
            if (this_05 != (UDS_GameOptionData *)0x0) {
              iVar8 = UDS_GameOptionData::GetGameOptionValue(this_05,0);
              pFVar14 = FDS_GameOptionBaseTableRow::Get(0xcf,true);
              if ((pFVar14 != (FDS_GameOptionBaseTableRow *)0x0) &&
                 ((iVar8 < pFVar14->Value1 || (pFVar14->Value2 < iVar8)))) {
                local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_38.ArrayNum = 1;
                iVar8 = 1000000;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
                *(undefined4 *)local_38.AllocatorInstance.Data = 1000000;
                UDS_GameOptionData::SetGameOptionValues(this_05,&local_38);
                UDS_GameOptionManager::SaveGameOptionDevice(this_04);
              }
              fVar16 = (float)iVar8 * __real_3a83126f;
              *(float *)(lVar4 + 0x150) = fVar16;
              *(float *)(lVar4 + 0x154) = fVar16;
            }
          }
          fVar16 = DS_CommonDataHelper::PadCursorHoverSlowdown();
          *(float *)(lVar4 + 0x158) = fVar16;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetDefaultHitTraceDistance @ 14b8e7a70

void __thiscall ADS_PlayerController::SetDefaultHitTraceDistance(ADS_PlayerController *this)

{
  double dVar1;
  
  dVar1 = DS_CommonDataHelper::MouseCrosshairEnableRange();
  *(float *)((longlong)&this->_padding_ + 4) = (float)dVar1;
  return;
}

// SetGamepadCursor @ 14b8e7b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_PlayerController::SetGamepadCursor(ADS_PlayerController *this,bool param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  ULocalPlayer *this_00;
  UDS_CommonUIActionRouterBase *pUVar4;
  atomic<int> *paVar5;
  UCommonInputSubsystem *this_01;
  FName *pFVar6;
  UDS_GameOptionManager *this_02;
  UDS_GameOptionData *this_03;
  FDS_GameOptionBaseTableRow *pFVar7;
  float fVar8;
  FName local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
  if ((this_00 != (ULocalPlayer *)0x0) &&
     (pUVar4 = ULocalPlayer::GetSubsystem<UDS_CommonUIActionRouterBase>(this_00),
     pUVar4 != (UDS_CommonUIActionRouterBase *)0x0)) {
    lVar1 = *(longlong *)&pUVar4->field_0x38;
    pTVar2 = *(TReferenceControllerBase<1> **)&pUVar4->field_0x40;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    if (lVar1 != 0) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar5 = (atomic<int>)((int)*paVar5 + 1);
        UNLOCK();
      }
      *(bool *)(lVar1 + 0x79) = param_1;
      this_01 = UCommonUIActionRouterBase::GetInputSubsystem
                          (*(UCommonUIActionRouterBase **)(lVar1 + 0x70));
      pFVar6 = ::FName::FName(local_res18,"AnalogCursor");
      UCommonInputSubsystem::SetInputTypeFilter(this_01,MouseAndKeyboard,*pFVar6,false);
      this_02 = UDS_GameOptionManager::GetInst();
      if ((this_02 != (UDS_GameOptionManager *)0x0) &&
         (this_03 = UDS_GameOptionManager::GetGameOptionData(this_02,GamepadCursorSensitivity),
         this_03 != (UDS_GameOptionData *)0x0)) {
        iVar3 = UDS_GameOptionData::GetGameOptionValue(this_03,0);
        pFVar7 = FDS_GameOptionBaseTableRow::Get(0xcf,true);
        if ((pFVar7 != (FDS_GameOptionBaseTableRow *)0x0) &&
           ((iVar3 < pFVar7->Value1 || (pFVar7->Value2 < iVar3)))) {
          local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = 1;
          iVar3 = 1000000;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
          *(undefined4 *)local_28.AllocatorInstance.Data = 1000000;
          UDS_GameOptionData::SetGameOptionValues(this_03,&local_28);
          UDS_GameOptionManager::SaveGameOptionDevice(this_02);
        }
        fVar8 = (float)iVar3 * __real_3a83126f;
        *(float *)(lVar1 + 0x150) = fVar8;
        *(float *)(lVar1 + 0x154) = fVar8;
      }
      fVar8 = DS_CommonDataHelper::PadCursorHoverSlowdown();
      *(float *)(lVar1 + 0x158) = fVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// SetInputControlType @ 14b8e8070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_PlayerController::SetInputControlType
          (ADS_PlayerController *this,EDS_InputControlType param_1,bool param_2)

{
  undefined1 *puVar1;
  bool *pbVar2;
  EDS_InputControlType EVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  EDS_InputControlType EVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  EDS_InputMappingType EVar12;
  uint uVar13;
  int iVar14;
  UDS_WindowManager *pUVar15;
  UObject *pUVar16;
  longlong lVar17;
  uint uVar18;
  EDS_InputControlType *pEVar19;
  EDS_InputFlags local_b8 [2];
  EDS_InputFlags local_b0 [2];
  EDS_InputFlags local_a8 [2];
  EDS_InputFlags local_a0 [2];
  EDS_InputFlags local_98 [2];
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  TVector<double>_u_0 local_80;
  undefined1 local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  TVector<double>_u_0 local_60;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  FDestructionSentinel local_40;
  
  EVar8 = AdjustInputControlType(this,param_1);
  if ((EVar8 == ActionMode) &&
     (pUVar15 = UDS_WindowManager::GetInst(), pUVar15 != (UDS_WindowManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    UDS_WindowManager::GetCurrentClosableWindowInfo(pUVar15);
    bVar9 = FWeakObjectPtr::IsValid(&local_90);
    if (((bVar9) && (pUVar16 = FWeakObjectPtr::Get(&local_90), *(int *)(pUVar16 + 1) != 0xcf)) &&
       (pUVar16 = FWeakObjectPtr::Get(&local_90), *(int *)(pUVar16 + 1) != 0x3ec)) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5435635855911810011>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                         ,0xc25,"false");
      if (!bVar9) {
        return;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->bInputMappingsLoaded == false) {
    return;
  }
  pEVar19 = &this->InputControlType;
  if ((!param_2) && (EVar8 == *pEVar19)) {
    return;
  }
  if (EVar8 == None) {
    this->PrevInputControlType = *pEVar19;
    *pEVar19 = None;
    return;
  }
  bVar9 = false;
  bVar7 = false;
  pUVar15 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar15 != (UDS_WindowManager *)0x0) goto LAB_14b8e81ca;
  }
  else if (pUVar15 != (UDS_WindowManager *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
LAB_14b8e81ca:
    UDS_WindowManager::GetCurrentClosableWindowInfo(pUVar15);
    bVar10 = FWeakObjectPtr::IsValid(&local_88);
    if ((bVar10) && (pUVar16 = FWeakObjectPtr::Get(&local_88), *(int *)(pUVar16 + 1) == 0xcf)) {
      bVar9 = true;
      bVar7 = true;
    }
  }
  pEVar19 = &this->InputControlType;
  if (this->InputDeviceType == GamePad) {
    if (((bVar9) && (*pEVar19 == ActionMode)) && (this->bActionModeCursorEnabled == true)) {
      EVar8 = Cursor;
    }
  }
  else if (*pEVar19 == Cursor) {
    *pEVar19 = ActionMode;
    this->bActionModeCursorEnabled = true;
  }
  EVar12 = ConvertInputControlTypeToMappingType(this,EVar8);
  ChangeInputMapping(this,EVar12);
  EVar3 = *pEVar19;
  *pEVar19 = EVar8;
  this->PrevInputControlType = EVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ChangeInputControlType
             ,(FWriteAccessScope *)&local_40);
  puVar1 = &(this->ChangeInputControlType).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar9 = false;
  uVar18 = *(int *)&(this->ChangeInputControlType).field_0x10 - 1;
  if (-1 < (int)uVar18) {
    lVar17 = (longlong)(int)uVar18 << 4;
    bVar9 = false;
    do {
      uVar13 = 0;
      if ((int)uVar18 < *(int *)&(this->ChangeInputControlType).field_0x10) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->ChangeInputControlType).field_0x8;
      if (((*(int *)(lVar17 + 8 + lVar4) == 0) ||
          (plVar5 = *(longlong **)(lVar17 + lVar4), plVar5 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar5 + 0x68))(), cVar11 == '\0')) {
        bVar9 = true;
      }
      lVar17 = lVar17 + -0x10;
      uVar18 = uVar18 - 1;
    } while (-1 < (int)uVar18);
  }
  puVar1 = &(this->ChangeInputControlType).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar9) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeInputControlType,
               false);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if ((this->InputFlag & MOUSE_LEFT_PRESSED) != NONE) {
    local_b8[0] = MOUSE_LEFT_PRESSED;
    this->InputFlag = this->InputFlag & ~MOUSE_LEFT_PRESSED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->RemoveInputFlagDelegate,local_b8);
    local_67 = 0;
    local_63 = 0;
    local_80._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_80._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_61 = 0;
    local_80._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_68 = 0;
    local_b0[0] = MOUSE_LEFT_RELEASED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_b0,(FInputActionValue *)&local_80._s_0);
  }
  if ((this->InputFlag & MOUSE_RIGHT_PRESSED) != NONE) {
    local_a8[0] = MOUSE_RIGHT_PRESSED;
    this->InputFlag = this->InputFlag & ~MOUSE_RIGHT_PRESSED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->RemoveInputFlagDelegate,local_a8);
    local_47 = 0;
    local_43 = 0;
    local_60._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_60._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_41 = 0;
    local_60._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48 = 0;
    local_a0[0] = MOUSE_RIGHT_RELEASED;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&,FInputActionValue_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&ChangeInputDelegate,local_a0,(FInputActionValue *)&local_60._s_0);
  }
  if ((this->InputControlType == UIMode) && ((this->InputFlag >> 8 & 1) != 0)) {
    this->MoveForwardValue = 0.0;
    this->MoveBackValue = 0.0;
    this->InputFlag = this->InputFlag & ~KEY_MOVE;
    this->MoveLeftValue = 0.0;
    this->MoveRightValue = 0.0;
    local_98[0] = KEY_MOVE;
    TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->RemoveInputFlagDelegate,local_98);
    UpdateMoveDirection(this,Canceled);
  }
  if (this->InputDeviceType == GamePad) {
    if (!bVar7) {
      EnableActionModeCursor(this,this->InputControlType != ActionMode);
      goto LAB_14b8e8540;
    }
    if (this->bActionModeCursorEnabled == true) goto LAB_14b8e8540;
    this->bActionModeCursorEnabled = true;
  }
  else {
    pbVar2 = &this->bActionModeCursorEnabled;
    if ((this->InputControlType == ActionMode) && (*pbVar2 != this->bPrevActionModeCursorEnabled)) {
      pUVar15 = UDS_WindowManager::GetInst();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar15 != (UDS_WindowManager *)0x0) goto LAB_14b8e8502;
      }
      else if (pUVar15 != (UDS_WindowManager *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
LAB_14b8e8502:
        iVar14 = UDS_WindowManager::GetClosableWindowInfoTotalCount(pUVar15);
        if (0 < iVar14) {
          if (*pbVar2 == true) goto LAB_14b8e8540;
          this->bActionModeCursorEnabled = true;
          goto LAB_14b8e8532;
        }
      }
      EnableActionModeCursor(this,this->bPrevActionModeCursorEnabled);
      goto LAB_14b8e8540;
    }
    if (*pbVar2 == true) goto LAB_14b8e8540;
    *pbVar2 = true;
  }
LAB_14b8e8532:
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ChangeCursorStateDelegate,true);
LAB_14b8e8540:
  RefreshInputCursorSettings(this);
  return;
}

// SetMappingDataAsset @ 14b8e8750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_PlayerController::SetMappingDataAsset(ADS_PlayerController *this)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_InputMappingDataAsset *this_01;
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *pTVar6;
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *this_02;
  undefined1 auStackY_1d8 [32];
  FWeakObjectPtr local_1a8 [2];
  undefined1 local_198 [72];
  undefined4 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_InputMappingDataAsset::GetInst();
  bVar4 = FWeakObjectPtr::IsValid(local_1a8);
  if (bVar4) {
    this_02 = &this->InputMappingContextMap;
    bVar4 = 1 < *(int *)&(this->InputMappingContextMap).field_0x48;
    if (!bVar4) {
      TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_02);
    }
    puVar1 = &(this->InputMappingContextMap).field_0xc;
    *(undefined4 *)&(this->InputMappingContextMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
    }
    this_00 = &(this->InputMappingContextMap).field_0x10;
    *(undefined4 *)&(this->InputMappingContextMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->InputMappingContextMap).field_0x34 = 0;
    iVar2 = *(int *)&(this->InputMappingContextMap).field_0x2c;
    *(undefined4 *)&(this->InputMappingContextMap).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->InputMappingContextMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->InputMappingContextMap).field_0x48 = 1;
      TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
      ::Rehash(this_02);
    }
    this_01 = (UDS_InputMappingDataAsset *)FWeakObjectPtr::Get(local_1a8);
    pTVar6 = UDS_InputMappingDataAsset::GetAllMappings
                       (this_01,(TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
                                 *)local_198);
    if (this_02 != pTVar6) {
      if (*(void **)this_02 != (void *)0x0) {
        FMemory::Free(*(void **)this_02);
      }
      *(undefined8 *)this_02 = *(undefined8 *)pTVar6;
      *(undefined8 *)pTVar6 = 0;
      *(undefined4 *)&(this->InputMappingContextMap).field_0x8 = *(undefined4 *)&pTVar6->field_0x8;
      *(undefined4 *)puVar1 = *(undefined4 *)&pTVar6->field_0xc;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      if (this_00 != &pTVar6->field_0x10) {
        if (*(longlong *)&pTVar6->field_0x20 == 0) {
          memmove(this_00,&pTVar6->field_0x10,0x10);
        }
        pvVar3 = *(void **)&(this->InputMappingContextMap).field_0x20;
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        *(undefined8 *)&(this->InputMappingContextMap).field_0x20 =
             *(undefined8 *)&pTVar6->field_0x20;
        *(undefined8 *)&pTVar6->field_0x20 = 0;
        *(undefined4 *)&(this->InputMappingContextMap).field_0x28 =
             *(undefined4 *)&pTVar6->field_0x28;
        *(undefined4 *)&(this->InputMappingContextMap).field_0x2c =
             *(undefined4 *)&pTVar6->field_0x2c;
        *(undefined8 *)&pTVar6->field_0x28 = 0;
      }
      *(undefined4 *)&(this->InputMappingContextMap).field_0x30 = *(undefined4 *)&pTVar6->field_0x30
      ;
      *(undefined4 *)&(this->InputMappingContextMap).field_0x34 = *(undefined4 *)&pTVar6->field_0x34
      ;
      *(undefined4 *)&pTVar6->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar6->field_0x34 = 0;
      if (*(longlong *)&pTVar6->field_0x40 == 0) {
        *(undefined4 *)&(this->InputMappingContextMap).field_0x38 =
             *(undefined4 *)&pTVar6->field_0x38;
      }
      pvVar3 = *(void **)&(this->InputMappingContextMap).field_0x40;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->InputMappingContextMap).field_0x40 = *(undefined8 *)&pTVar6->field_0x40
      ;
      *(undefined8 *)&pTVar6->field_0x40 = 0;
      *(undefined4 *)&(this->InputMappingContextMap).field_0x48 = *(undefined4 *)&pTVar6->field_0x48
      ;
      *(undefined4 *)&pTVar6->field_0x48 = 0;
    }
    local_150 = 0;
    if ((void *)local_198._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_198._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_198);
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_PlayerController::SetMappingDataAsset",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Error,local_148.Ptr,0x79f,L"UDS_InputMappingDataAsset is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// SetupPlayerInputComponent @ 14b8eb070

void __thiscall
ADS_PlayerController::SetupPlayerInputComponent(ADS_PlayerController *this,UInputComponent *param_1)

{
  this->InputControlType = None;
  this->bInputMappingsLoaded = false;
  UpdateInputMappings(this,param_1);
  return;
}

// UpdateInputMappings @ 14b8f3390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_PlayerController::UpdateInputMappings(ADS_PlayerController *this,UInputComponent *param_1)

{
  byte *pbVar1;
  UInputComponent *pUVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *pUVar7;
  UClass *pUVar8;
  UInputAction *pUVar9;
  FInputBindingHandle *pFVar10;
  UDS_GameOptionManager *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  EDS_KeyActionType EVar15;
  UInputAction *local_res18;
  UInputAction *local_res20;
  uint uStack_43c;
  FInputBindingHandle *local_438;
  FInputBindingHandle *local_430;
  FString local_428;
  undefined1 local_418 [16];
  code *local_408;
  longlong lStack_400;
  code *local_3f8;
  longlong lStack_3f0;
  code *local_3e8;
  longlong lStack_3e0;
  code *local_3d8;
  longlong lStack_3d0;
  code *local_3c8;
  longlong lStack_3c0;
  code *local_3b8;
  longlong lStack_3b0;
  code *local_3a8;
  longlong lStack_3a0;
  code *local_398;
  longlong lStack_390;
  code *local_388;
  longlong lStack_380;
  code *local_378;
  longlong lStack_370;
  code *local_368;
  longlong lStack_360;
  code *local_358;
  longlong lStack_350;
  code *local_348;
  longlong lStack_340;
  code *local_338;
  longlong lStack_330;
  code *local_328;
  longlong lStack_320;
  code *local_318;
  longlong lStack_310;
  code *local_308;
  longlong lStack_300;
  code *local_2f8;
  longlong lStack_2f0;
  code *local_2e8;
  longlong lStack_2e0;
  code *local_2d8;
  longlong lStack_2d0;
  code *local_2c8;
  longlong lStack_2c0;
  code *local_2b8;
  longlong lStack_2b0;
  code *local_2a8;
  longlong lStack_2a0;
  code *local_298;
  longlong lStack_290;
  code *local_288;
  longlong lStack_280;
  code *local_278;
  longlong lStack_270;
  code *local_268;
  longlong lStack_260;
  code *local_258;
  longlong lStack_250;
  code *local_248;
  longlong lStack_240;
  code *local_238;
  longlong lStack_230;
  code *local_228;
  longlong lStack_220;
  code *local_218;
  longlong lStack_210;
  code *local_208;
  longlong lStack_200;
  code *local_1f8;
  longlong lStack_1f0;
  code *local_1e8;
  longlong lStack_1e0;
  code *local_1d8;
  longlong lStack_1d0;
  code *local_1c8;
  longlong lStack_1c0;
  code *local_1b8;
  longlong lStack_1b0;
  code *local_1a8;
  longlong lStack_1a0;
  code *local_198;
  longlong lStack_190;
  code *local_188;
  longlong lStack_180;
  code *local_178;
  longlong lStack_170;
  code *local_168;
  longlong lStack_160;
  code *local_158;
  longlong lStack_150;
  code *local_148;
  longlong lStack_140;
  code *local_138;
  longlong lStack_130;
  code *local_128;
  longlong lStack_120;
  code *local_118;
  longlong lStack_110;
  code *local_108;
  longlong lStack_100;
  code *local_f8;
  longlong lStack_f0;
  code *local_e8;
  longlong lStack_e0;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  longlong lStack_b0;
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  undefined1 local_78 [24];
  FString local_60 [2];
  
  this_00 = APlayerController::GetLocalPlayer((APlayerController *)this);
  pwVar14 = L"";
  if (this_00 == (ULocalPlayer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("localPlayer",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Controller\\DS_PlayerController.cpp"
                       ,0x201,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar7 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
  if (pUVar7 != (UCommonInputSubsystem *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar7->OnInputMethodChangedNative,this);
    lStack_400 = (ulonglong)uStack_43c << 0x20;
    local_408 = OnInputMethodChanged;
    TMulticastDelegateRegistration<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
    AddUObject<ADS_PlayerController>
              (&pUVar7->OnInputMethodChangedNative,(ADS_PlayerController *)local_78,
               (pmf_f8812009 *)this);
  }
  if (param_1 != (UInputComponent *)0x0) {
    pUVar8 = Z_Construct_UClass_UDS_InputComponent_NoRegister();
    iVar6 = (int)pUVar8->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar8->_padding_)) {
      lStack_3f0 = (ulonglong)uStack_43c << 0x20;
      local_3f8 = OnInputEvent;
      UDS_InputComponent::
      BindAllInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&,enum_EDS_KeyActionType,enum_ETriggerEvent)>
                ((UDS_InputComponent *)param_1,this->InputConfig,this,(pmf_2a4db2b5 *)&local_3f8);
      lStack_3e0 = (ulonglong)uStack_43c << 0x20;
      local_3e8 = Input_MouseLeftPressed;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_MouseLeft,Started,this,
                 (pmf_cc4d16a5 *)&local_3e8,false);
      lStack_3d0 = (ulonglong)uStack_43c << 0x20;
      local_3d8 = Input_MouseLeftReleased;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_MouseLeft,Completed,this,
                 (pmf_cc4d16a5 *)&local_3d8,false);
      lStack_3c0 = (ulonglong)uStack_43c << 0x20;
      local_3c8 = Input_MouseRightPressed;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_MouseRight,Started,this,
                 (pmf_cc4d16a5 *)&local_3c8,false);
      lStack_3b0 = (ulonglong)uStack_43c << 0x20;
      local_3b8 = Input_MouseRightReleased;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_MouseRight,Completed,this,
                 (pmf_cc4d16a5 *)&local_3b8,false);
      lStack_3a0 = (ulonglong)uStack_43c << 0x20;
      local_3a8 = Input_ZoomInOut;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_ZoomInOut,Triggered,this,
                 (pmf_cc4d16a5 *)&local_3a8,false);
      lStack_390 = (ulonglong)uStack_43c << 0x20;
      local_398 = Input_LockOnTarget;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_LockOnTarget,Started,this,
                 (pmf_cc4d16a5 *)&local_398,false);
      lStack_380 = (ulonglong)uStack_43c << 0x20;
      local_388 = Input_LockOnTargetChange;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_LockOnTargetChange,Triggered,
                 this,(pmf_cc4d16a5 *)&local_388,false);
      lStack_370 = (ulonglong)uStack_43c << 0x20;
      local_378 = Input_CameraReset;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_CameraReset,Started,this,
                 (pmf_cc4d16a5 *)&local_378,false);
      lStack_360 = (ulonglong)uStack_43c << 0x20;
      local_368 = Input_CameraStart;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_CameraRotation,Started,this,
                 (pmf_cc4d16a5 *)&local_368,false);
      lStack_350 = (ulonglong)uStack_43c << 0x20;
      local_358 = Input_CameraTriggered;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_CameraRotation,Triggered,this,
                 (pmf_cc4d16a5 *)&local_358,false);
      lStack_340 = (ulonglong)uStack_43c << 0x20;
      local_348 = Input_CameraCompleted;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_CameraRotation,Completed,this,
                 (pmf_cc4d16a5 *)&local_348,false);
      lStack_330 = (ulonglong)uStack_43c << 0x20;
      local_338 = Input_MoveStart;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_Move,Started,this,
                 (pmf_cc4d16a5 *)&local_338,false);
      lStack_320 = (ulonglong)uStack_43c << 0x20;
      local_328 = Input_MoveTriggered;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_Move,Triggered,this,
                 (pmf_cc4d16a5 *)&local_328,false);
      lStack_310 = (ulonglong)uStack_43c << 0x20;
      local_318 = Input_MoveEnd;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_Move,Completed,this,
                 (pmf_cc4d16a5 *)&local_318,false);
      lStack_300 = (ulonglong)uStack_43c << 0x20;
      local_308 = Input_NormalAttack;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_NormalAttack,Started,this,
                 (pmf_28ef44d0 *)&local_308,false);
      lStack_2f0 = (ulonglong)uStack_43c << 0x20;
      local_2f8 = Input_NormalAttackTriggered;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_NormalAttack,Triggered,this,
                 (pmf_28ef44d0 *)&local_2f8,false);
      lStack_2e0 = (ulonglong)uStack_43c << 0x20;
      local_2e8 = Input_ActionNormalAttack;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_ActionNormalAttack,Started,this,
                 (pmf_28ef44d0 *)&local_2e8,false);
      lStack_2d0 = (ulonglong)uStack_43c << 0x20;
      local_2d8 = Input_ActionNormalAttackTriggered;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_ActionNormalAttack,Triggered,
                 this,(pmf_28ef44d0 *)&local_2d8,false);
      lStack_2c0 = (ulonglong)uStack_43c << 0x20;
      local_2c8 = Input_PopupSkill;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_PopupSkill,Started,this,
                 (pmf_28ef44d0 *)&local_2c8,false);
      lStack_2b0 = (ulonglong)uStack_43c << 0x20;
      local_2b8 = Input_Avoid;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_Avoid,Started,this,
                 (pmf_28ef44d0 *)&local_2b8,false);
      lStack_2a0 = (ulonglong)uStack_43c << 0x20;
      local_2a8 = Input_Interaction;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_Interaction,Started,this,
                 (pmf_28ef44d0 *)&local_2a8,false);
      lStack_290 = (ulonglong)uStack_43c << 0x20;
      local_298 = Input_AirWalk_Jump;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AirWalk_Jump,Started,this,
                 (pmf_28ef44d0 *)&local_298,false);
      lStack_280 = (ulonglong)uStack_43c << 0x20;
      local_288 = Input_AirWalk_Dash;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AIrWalk_Dash,Started,this,
                 (pmf_28ef44d0 *)&local_288,false);
      lStack_270 = (ulonglong)uStack_43c << 0x20;
      local_278 = Input_AirWalk_Hovering;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AIrWalk_Hovering,Started,this,
                 (pmf_28ef44d0 *)&local_278,false);
      lStack_260 = (ulonglong)uStack_43c << 0x20;
      local_268 = Input_AirWalk_PowerJump;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AIrWalk_PowerJump,Started,this,
                 (pmf_28ef44d0 *)&local_268,false);
      lStack_250 = (ulonglong)uStack_43c << 0x20;
      local_258 = Input_AirWalk_DashAttack;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AirDashAttack,Started,this,
                 (pmf_28ef44d0 *)&local_258,false);
      lStack_240 = (ulonglong)uStack_43c << 0x20;
      local_248 = Input_RingCmdOpen;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_RingCmd,Started,this,
                 (pmf_28ef44d0 *)&local_248,false);
      lStack_230 = (ulonglong)uStack_43c << 0x20;
      local_238 = Input_RingCmdClose;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_RingCmd,Completed,this,
                 (pmf_28ef44d0 *)&local_238,false);
      lStack_220 = (ulonglong)uStack_43c << 0x20;
      local_228 = Input_RingCmdQuickSlotPrevDeck;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_RingCmdQuickSlot_ChangeDeck_Prev
                 ,Started,this,(pmf_28ef44d0 *)&local_228,false);
      lStack_210 = (ulonglong)uStack_43c << 0x20;
      local_218 = Input_RingCmdQuickSlotNextDeck;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_RingCmdQuickSlot_ChangeDeck_Next
                 ,Started,this,(pmf_28ef44d0 *)&local_218,false);
      pUVar9 = UDS_InputConfig::FindNativeInputAction(this->InputConfig,IA_UI_Back,true);
      lStack_200 = (ulonglong)uStack_43c << 0x20;
      local_208 = Input_UI_Back;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Started,this,(pmf_122f22a7 *)&local_208,
                 Started);
      lStack_1f0 = (ulonglong)uStack_43c << 0x20;
      local_1f8 = Input_UI_Back;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Triggered,this,(pmf_122f22a7 *)&local_1f8
                 ,Triggered);
      lStack_1e0 = (ulonglong)uStack_43c << 0x20;
      local_1e8 = Input_UI_Back;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Completed,this,(pmf_122f22a7 *)&local_1e8
                 ,Completed);
      lStack_1d0 = (ulonglong)uStack_43c << 0x20;
      local_1d8 = Input_UI_Back;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Canceled,this,(pmf_122f22a7 *)&local_1d8,
                 Canceled);
      pUVar9 = UDS_InputConfig::FindNativeInputAction
                         (this->InputConfig,IA_RingCmd_ChangeDeck_Prev,true);
      lStack_1c0 = (ulonglong)uStack_43c << 0x20;
      local_1c8 = Input_RingCmd_ChangeDeck_Prev;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Started,this,(pmf_65f1f248 *)&local_1c8,
                 Started);
      lStack_1b0 = (ulonglong)uStack_43c << 0x20;
      local_1b8 = Input_RingCmd_ChangeDeck_Prev;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Triggered,this,(pmf_65f1f248 *)&local_1b8
                 ,Triggered);
      lStack_1a0 = (ulonglong)uStack_43c << 0x20;
      local_1a8 = Input_RingCmd_ChangeDeck_Prev;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Completed,this,(pmf_65f1f248 *)&local_1a8
                 ,Completed);
      lStack_190 = (ulonglong)uStack_43c << 0x20;
      local_198 = Input_RingCmd_ChangeDeck_Prev;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Canceled,this,(pmf_65f1f248 *)&local_198,
                 Canceled);
      pUVar9 = UDS_InputConfig::FindNativeInputAction
                         (this->InputConfig,IA_RingCmd_ChangeDeck_Next,true);
      lStack_180 = (ulonglong)uStack_43c << 0x20;
      local_188 = Input_RingCmd_ChangeDeck_Next;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Started,this,(pmf_65f1f248 *)&local_188,
                 Started);
      lStack_170 = (ulonglong)uStack_43c << 0x20;
      local_178 = Input_RingCmd_ChangeDeck_Next;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Triggered,this,(pmf_65f1f248 *)&local_178
                 ,Triggered);
      lStack_160 = (ulonglong)uStack_43c << 0x20;
      local_168 = Input_RingCmd_ChangeDeck_Next;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Completed,this,(pmf_65f1f248 *)&local_168
                 ,Completed);
      lStack_150 = (ulonglong)uStack_43c << 0x20;
      local_158 = Input_RingCmd_ChangeDeck_Next;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Canceled,this,(pmf_65f1f248 *)&local_158,
                 Canceled);
      pUVar9 = UDS_InputConfig::FindNativeInputAction
                         (this->InputConfig,IA_RingCmd_Custom_PrevDeck,true);
      lStack_140 = (ulonglong)uStack_43c << 0x20;
      local_148 = Input_RingCmd_Custom_PrevDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Started,this,(pmf_65f1f248 *)&local_148,
                 Started);
      lStack_130 = (ulonglong)uStack_43c << 0x20;
      local_138 = Input_RingCmd_Custom_PrevDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Triggered,this,(pmf_65f1f248 *)&local_138
                 ,Triggered);
      lStack_120 = (ulonglong)uStack_43c << 0x20;
      local_128 = Input_RingCmd_Custom_PrevDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Completed,this,(pmf_65f1f248 *)&local_128
                 ,Completed);
      lStack_110 = (ulonglong)uStack_43c << 0x20;
      local_118 = Input_RingCmd_Custom_PrevDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Canceled,this,(pmf_65f1f248 *)&local_118,
                 Canceled);
      pUVar9 = UDS_InputConfig::FindNativeInputAction
                         (this->InputConfig,IA_RingCmd_Custom_NextDeck,true);
      lStack_100 = (ulonglong)uStack_43c << 0x20;
      local_108 = Input_RingCmd_Custom_NextDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Started,this,(pmf_65f1f248 *)&local_108,
                 Started);
      lStack_f0 = (ulonglong)uStack_43c << 0x20;
      local_f8 = Input_RingCmd_Custom_NextDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Triggered,this,(pmf_65f1f248 *)&local_f8,
                 Triggered);
      lStack_e0 = (ulonglong)uStack_43c << 0x20;
      local_e8 = Input_RingCmd_Custom_NextDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Completed,this,(pmf_65f1f248 *)&local_e8,
                 Completed);
      lStack_d0 = (ulonglong)uStack_43c << 0x20;
      local_d8 = Input_RingCmd_Custom_NextDeck;
      UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
                ((UEnhancedInputComponent *)param_1,pUVar9,Canceled,this,(pmf_65f1f248 *)&local_d8,
                 Canceled);
      pUVar2 = param_1 + 1;
      EVar15 = IA_SkillSlot_1;
      uVar4 = (ulonglong)(uint)local_428.Data.ArrayMax;
      do {
        pUVar9 = DS_InputUtil::GetInputAction(this->InputConfig,EVar15);
        pFVar10 = ::operator_new(0x38);
        if (pFVar10 == (FInputBindingHandle *)0x0) {
          pFVar10 = (FInputBindingHandle *)0x0;
        }
        else {
          FInputBindingHandle::FInputBindingHandle(pFVar10);
          pFVar10->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pFVar10[1]._padding_ = 0;
          local_res18 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar10 + 1),(FObjectPtr)&local_res18);
          pbVar1 = (byte *)((longlong)&pFVar10[1].Handle + 1);
          *pbVar1 = *pbVar1 & 0xfe;
          pFVar10[2]._padding_ = 0;
          *(undefined8 *)&pFVar10[2].Handle = 0;
          *(undefined1 *)&pFVar10[3]._padding_ = 0;
          *(undefined1 *)&pFVar10[1].Handle = 2;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
        }
        local_c8 = Input_SkillSlot;
        lStack_c0 = uVar4 << 0x20;
        TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
        BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
                  ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                    *)(pFVar10 + 2),this,(pmf_fd7da4d2 *)&local_c8,EVar15 - IA_PopupSkill);
        *(char *)&pFVar10[3]._padding_ = (char)param_1[1]._padding_;
        local_438 = pFVar10;
        if (((FScriptContainerElement *)pUVar2->_padding_ <= (FScriptContainerElement *)&local_438)
           && ((FScriptContainerElement *)&local_438 <
               (FScriptContainerElement *)pUVar2->_padding_ +
               (longlong)*(int *)((longlong)&param_1[1]._padding_ + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = (int)param_1[1]._padding_;
        if (iVar6 == *(int *)((longlong)&param_1[1]._padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)pUVar2,
                             (int *)((longlong)&param_1[1]._padding_ + 4));
        }
        EVar15 = EVar15 + 1;
        *(int *)&param_1[1]._padding_ = iVar6 + 1;
        *(FInputBindingHandle **)
         ((FScriptContainerElement *)pUVar2->_padding_ + (longlong)iVar6 * 8) = local_438;
        local_438 = (FInputBindingHandle *)0x0;
      } while ((int)EVar15 < 0x28a9);
      EVar15 = IA_RingCommandQuickSlot_0;
      do {
        pUVar9 = DS_InputUtil::GetInputAction(this->InputConfig,EVar15);
        pFVar10 = ::operator_new(0x38);
        if (pFVar10 == (FInputBindingHandle *)0x0) {
          pFVar10 = (FInputBindingHandle *)0x0;
        }
        else {
          FInputBindingHandle::FInputBindingHandle(pFVar10);
          pFVar10->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pFVar10[1]._padding_ = 0;
          local_res20 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UInputAction *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar10 + 1),(FObjectPtr)&local_res20);
          pbVar1 = (byte *)((longlong)&pFVar10[1].Handle + 1);
          *pbVar1 = *pbVar1 & 0xfe;
          pFVar10[2]._padding_ = 0;
          *(undefined8 *)&pFVar10[2].Handle = 0;
          *(undefined1 *)&pFVar10[3]._padding_ = 0;
          *(undefined1 *)&pFVar10[1].Handle = 2;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
        }
        local_b8 = Input_RingCmdQuickSlot;
        lStack_b0 = (ulonglong)(uint)local_428.Data.ArrayMax << 0x20;
        TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
        BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,int>
                  ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                    *)(pFVar10 + 2),this,(pmf_fd7da4d2 *)&local_b8,EVar15 - 0x2a39);
        *(char *)&pFVar10[3]._padding_ = (char)param_1[1]._padding_;
        local_430 = pFVar10;
        if (((FScriptContainerElement *)pUVar2->_padding_ <= (FScriptContainerElement *)&local_430)
           && ((FScriptContainerElement *)&local_430 <
               (FScriptContainerElement *)pUVar2->_padding_ +
               (longlong)*(int *)((longlong)&param_1[1]._padding_ + 4) * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar6 = (int)param_1[1]._padding_;
        if (iVar6 == *(int *)((longlong)&param_1[1]._padding_ + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)pUVar2,
                             (int *)((longlong)&param_1[1]._padding_ + 4));
        }
        EVar15 = EVar15 + 1;
        *(int *)&param_1[1]._padding_ = iVar6 + 1;
        *(FInputBindingHandle **)
         ((FScriptContainerElement *)pUVar2->_padding_ + (longlong)iVar6 * 8) = local_430;
      } while ((int)EVar15 < 0x2a42);
      lStack_a0 = (ulonglong)(uint)local_428.Data.ArrayMax << 0x20;
      local_a8 = Input_AnyKey;
      UDS_InputComponent::
      BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
                ((UDS_InputComponent *)param_1,this->InputConfig,IA_AnyKey,Triggered,this,
                 (pmf_cc4d16a5 *)&local_a8,false);
      this->bInputMappingsLoaded = true;
      SetMappingDataAsset(this);
      ApplyGameOptionData(this);
      SetInputControlType(this,UIMode,false);
      pUVar11 = UDS_GameOptionManager::GetInst();
      if (pUVar11 != (UDS_GameOptionManager *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar11->LoadedGameOptionDBDelegate,this);
        lStack_90 = (ulonglong)(uint)local_428.Data.ArrayMax << 0x20;
        local_98 = ApplyGameOptionData;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<ADS_PlayerController>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar11->LoadedGameOptionDBDelegate,(ADS_PlayerController *)local_418,
                   (pmf_28ef44d0 *)this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar11->LoadedGameOptionDeviceDelegate,this);
        lStack_80 = (ulonglong)(uint)local_428.Data.ArrayMax << 0x20;
        local_88 = ApplyGameOptionData;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<ADS_PlayerController>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar11->LoadedGameOptionDeviceDelegate,(ADS_PlayerController *)(local_418 + 8),
                   (pmf_28ef44d0 *)this);
      }
      return;
    }
    pFVar12 = GetTypeName<UDS_InputComponent>((FString *)(local_78 + 8));
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UInputComponent>(local_60,param_1);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar13);
  }
  pFVar12 = GetTypeName<UDS_InputComponent>(&local_428);
  if ((pFVar12->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar14);
}

// UpdateMoveDirection @ 14b8f4850

void __thiscall
ADS_PlayerController::UpdateMoveDirection(ADS_PlayerController *this,ETriggerEvent param_1)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  EDS_InputFlags EVar4;
  UObject *pUVar5;
  TMulticastDelegate<void___cdecl(EDS_InputFlags_const_&),FDefaultDelegateUserPolicy> *this_00;
  uint uVar6;
  uint uVar7;
  double dVar8;
  undefined8 local_res8;
  
  dVar8 = (double)(this->MoveForwardValue - this->MoveBackValue);
  (this->InputMoveDirection).field0_0x0._s_0.X =
       (double)(this->MoveRightValue - this->MoveLeftValue);
  (this->InputMoveDirection).field0_0x0._s_0.Y = dVar8;
  dVar1 = (this->InputMoveDirection).field0_0x0._s_0.X;
  dVar8 = dVar1 * dVar1 + dVar8 * dVar8;
  if (__real_3ff0000000000000 < dVar8) {
    local_res8 = __real_3ff0000000000000 / SQRT(dVar8);
    dVar8 = (this->InputMoveDirection).field0_0x0._s_0.Y;
    (this->InputMoveDirection).field0_0x0._s_0.X = dVar1 * local_res8;
    (this->InputMoveDirection).field0_0x0._s_0.Y = local_res8 * dVar8;
  }
  bVar3 = FWeakObjectPtr::IsValid(&(this->InputData).WeakPtr);
  if (!bVar3) {
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
  dVar1 = (this->InputMoveDirection).field0_0x0._s_0.Y;
  *(double *)(pUVar5 + 6) = (this->InputMoveDirection).field0_0x0._s_0.X;
  *(double *)&pUVar5[6].field_0x8 = dVar1;
  if (param_1 == Started) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    pUVar5[6].field_0x11 = 1;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar5[4].field_0x10,true);
    if ((this->InputFlag >> 8 & 1) != 0) {
      return;
    }
    EVar4 = this->InputFlag | KEY_MOVE;
    this_00 = &this->AddInputFlagDelegate;
  }
  else {
    uVar2 = *(undefined8 *)&(this->InputMoveDirection).field0_0x0;
    uVar6 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) {
      return;
    }
    uVar2 = *(undefined8 *)((longlong)&(this->InputMoveDirection).field0_0x0 + 8);
    uVar6 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
        (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) {
      return;
    }
    if ((param_1 - Canceled & 0xf7) != 0) {
      return;
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->InputData).WeakPtr);
    pUVar5[6].field_0x11 = 0;
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar5[4].field_0x10,false);
    if ((this->InputFlag >> 8 & 1) == 0) {
      return;
    }
    EVar4 = this->InputFlag & ~KEY_MOVE;
    this_00 = &this->RemoveInputFlagDelegate;
  }
  local_res8 = (double)CONCAT44(local_res8._4_4_,0x100);
  this->InputFlag = EVar4;
  TMulticastDelegate<void___cdecl(enum_EDS_InputFlags_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(this_00,(EDS_InputFlags *)&local_res8);
  return;
}

