// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 25

// StaticClass @ 14cf31250

UClass * __cdecl AARSharedWorldPlayerController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldPlayerController",
               &Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton,
               StaticRegisterNativesAARSharedWorldPlayerController,0x790,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldPlayerController>,
               InternalVTableHelperCtorCaller<AARSharedWorldPlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton;
}

// AARSharedWorldPlayerController @ 14cf405e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AARSharedWorldPlayerController * __thiscall
AARSharedWorldPlayerController::AARSharedWorldPlayerController
          (AARSharedWorldPlayerController *this,FVTableHelper *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
  return this;
}

// AARSharedWorldPlayerController @ 14cf40630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AARSharedWorldPlayerController * __thiscall
AARSharedWorldPlayerController::AARSharedWorldPlayerController
          (AARSharedWorldPlayerController *this,FObjectInitializer *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->bIsReadyToReceive = false;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
  return this;
}

// ~AARSharedWorldPlayerController @ 14cf43d80

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
AARSharedWorldPlayerController::~AARSharedWorldPlayerController
          (AARSharedWorldPlayerController *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// ClientInitSharedWorld @ 14cf4bdb0

void __thiscall
AARSharedWorldPlayerController::ClientInitSharedWorld
          (AARSharedWorldPlayerController *this,int param_1,int param_2)

{
  UFunction *pUVar1;
  int local_res8;
  int local_resc;
  
  local_res8 = param_1;
  local_resc = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AARSharedWorldPlayerController_ClientInitSharedWorld);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res8);
  return;
}

// ClientInitSharedWorld_Implementation @ 14cf4be00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldPlayerController::ClientInitSharedWorld_Implementation
          (AARSharedWorldPlayerController *this,int param_1,int param_2)

{
  AARSharedWorldGameState *pAVar1;
  
  if (5 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  pAVar1 = GetGameState(this);
  if (GIsServer == false) {
    pAVar1->PreviewImageBytesTotal = 0;
    pAVar1->ARWorldBytesTotal = 0;
    pAVar1->PreviewImageBytesDelivered = 0;
    pAVar1->ARWorldBytesDelivered = 0;
    if ((param_1 < 1) || (param_2 < 1)) {
      if (2 < (byte)LogAR._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      }
    }
    else {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(&pAVar1->PreviewImageData,param_1);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&(pAVar1->PreviewImageData).AllocatorInstance,
                 &(pAVar1->PreviewImageData).ArrayNum,&(pAVar1->PreviewImageData).ArrayMax);
      pAVar1->PreviewImageBytesTotal = param_1;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(&pAVar1->ARWorldData,param_2);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&(pAVar1->ARWorldData).AllocatorInstance,
                 &(pAVar1->ARWorldData).ArrayNum,&(pAVar1->ARWorldData).ArrayMax);
      pAVar1->ARWorldBytesTotal = param_2;
    }
  }
  else if (2 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  return;
}

// ClientInitSharedWorld_Validate @ 14cf4bf60

bool __thiscall
AARSharedWorldPlayerController::ClientInitSharedWorld_Validate
          (AARSharedWorldPlayerController *this,int param_1,int param_2)

{
  if (((uint)param_1 < 0x800001) && ((uint)param_2 < 0x8000001)) {
    return true;
  }
  return false;
}

// ClientUpdateARWorldData @ 14cf4bf80

void __thiscall
AARSharedWorldPlayerController::ClientUpdateARWorldData
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  int local_28 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_1;
  if (&local_20 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_20.ArrayMax = 0;
    local_20.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,0,&local_20.AllocatorInstance,uVar1,&local_20.ArrayMax);
      memcpy(local_20.AllocatorInstance.Data,_Src,(longlong)(int)uVar1);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_28);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// ClientUpdateARWorldData_Implementation @ 14cf4c050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldPlayerController::ClientUpdateARWorldData_Implementation
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  AARSharedWorldGameState *this_00;
  
  if (5 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  this_00 = GetGameState(this);
  iVar1 = param_2->ArrayNum;
  if (GIsServer == false) {
    if (((param_1 < 0) || (this_00->ARWorldBytesTotal < iVar1 + param_1)) || (iVar1 + param_1 < 0))
    {
      if (2 < (byte)LogAR._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      }
    }
    else {
      memcpy((this_00->ARWorldData).AllocatorInstance.Data + param_1,
             (param_2->AllocatorInstance).Data,(longlong)iVar1);
      this_00->ARWorldBytesDelivered = this_00->ARWorldBytesDelivered + iVar1;
      AARSharedWorldGameState::TriggerCompletionIfDone(this_00);
    }
  }
  else if (2 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  return;
}

// ClientUpdateARWorldData_Validate @ 14cf4c140

bool __thiscall
AARSharedWorldPlayerController::ClientUpdateARWorldData_Validate
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  if ((-1 < param_1) && (-1 < param_2->ArrayNum + param_1)) {
    return true;
  }
  return false;
}

// ClientUpdatePreviewImageData @ 14cf4c160

void __thiscall
AARSharedWorldPlayerController::ClientUpdatePreviewImageData
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *pUVar2;
  int local_28 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28[0] = param_1;
  if (&local_20 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_20.ArrayMax = 0;
    local_20.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,0,&local_20.AllocatorInstance,uVar1,&local_20.ArrayMax);
      memcpy(local_20.AllocatorInstance.Data,_Src,(longlong)(int)uVar1);
    }
  }
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_28);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// ClientUpdatePreviewImageData_Implementation @ 14cf4c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldPlayerController::ClientUpdatePreviewImageData_Implementation
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  AARSharedWorldGameState *this_00;
  
  if (5 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  this_00 = GetGameState(this);
  iVar1 = param_2->ArrayNum;
  if (GIsServer == false) {
    if (((param_1 < 0) || (this_00->PreviewImageBytesTotal < iVar1 + param_1)) ||
       (iVar1 + param_1 < 0)) {
      if (2 < (byte)LogAR._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      }
    }
    else {
      memcpy((this_00->PreviewImageData).AllocatorInstance.Data + param_1,
             (param_2->AllocatorInstance).Data,(longlong)iVar1);
      this_00->PreviewImageBytesDelivered = this_00->PreviewImageBytesDelivered + iVar1;
      AARSharedWorldGameState::TriggerCompletionIfDone(this_00);
    }
  }
  else if (2 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
  }
  return;
}

// ClientUpdatePreviewImageData_Validate @ 14cf4c320

bool __thiscall
AARSharedWorldPlayerController::ClientUpdatePreviewImageData_Validate
          (AARSharedWorldPlayerController *this,int param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  if ((-1 < param_1) && (-1 < param_2->ArrayNum + param_1)) {
    return true;
  }
  return false;
}

// GetGameState @ 14cf50e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARSharedWorldGameState * __thiscall
AARSharedWorldPlayerController::GetGameState(AARSharedWorldPlayerController *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  AARSharedWorldGameState *pAVar7;
  FString local_28;
  FString local_18;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    pAVar7 = (AARSharedWorldGameState *)0x0;
  }
  else {
    pAVar7 = (AARSharedWorldGameState *)(pUVar2->GameState).field0_0x0.DebugPtr;
    if (pAVar7 == (AARSharedWorldGameState *)0x0) {
      pFVar4 = GetTypeName<AARSharedWorldGameState>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = AARSharedWorldGameState::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<AARSharedWorldGameState>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<AGameStateBase>(&local_18,(AGameStateBase *)pAVar7);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pAVar7;
}

// GetPrivateStaticClass @ 14cf53b60

UClass * __cdecl AARSharedWorldPlayerController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldPlayerController",
               &Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton,
               StaticRegisterNativesAARSharedWorldPlayerController,0x790,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldPlayerController>,
               InternalVTableHelperCtorCaller<AARSharedWorldPlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton;
}

// IsGameStateReady @ 14cf57650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AARSharedWorldPlayerController::IsGameStateReady(AARSharedWorldPlayerController *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  AGameStateBase *pAVar4;
  
  pUVar2 = AActor::GetWorld((AActor *)this);
  if ((pUVar2 != (UWorld *)0x0) &&
     (pAVar4 = (pUVar2->GameState).field0_0x0.DebugPtr, pAVar4 != (AGameStateBase *)0x0)) {
    pUVar3 = AARSharedWorldGameState::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14cf57691;
  }
  pAVar4 = (AGameStateBase *)0x0;
LAB_14cf57691:
  return pAVar4 != (AGameStateBase *)0x0;
}

// ServerMarkReadyForReceiving @ 14cf5d740

void __thiscall
AARSharedWorldPlayerController::ServerMarkReadyForReceiving(AARSharedWorldPlayerController *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014cf5d76d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ServerMarkReadyForReceiving_Implementation @ 14cf5d780

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldPlayerController::ServerMarkReadyForReceiving_Implementation
          (AARSharedWorldPlayerController *this)

{
  this->bIsReadyToReceive = true;
  if (5 < (byte)LogAR._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    return;
  }
  return;
}

// ServerMarkReadyForReceiving_Validate @ 14cf5d7b0

bool __thiscall
AARSharedWorldPlayerController::ServerMarkReadyForReceiving_Validate
          (AARSharedWorldPlayerController *this)

{
  return true;
}

// StaticRegisterNativesAARSharedWorldPlayerController @ 14cf60d50

void __cdecl
AARSharedWorldPlayerController::StaticRegisterNativesAARSharedWorldPlayerController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AARSharedWorldPlayerController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14cf61e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AARSharedWorldPlayerController::Tick(AARSharedWorldPlayerController *this,float param_1)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  AGameStateBase *pAVar5;
  
  AActor::Tick((AActor *)this,param_1);
  if ((char)this->_padding_ == '\x03') {
    return;
  }
  if (this->bIsReadyToReceive != false) {
    return;
  }
  pUVar2 = AActor::GetWorld((AActor *)this);
  if (pUVar2 == (UWorld *)0x0) {
    return;
  }
  pAVar5 = (pUVar2->GameState).field0_0x0.DebugPtr;
  if (pAVar5 != (AGameStateBase *)0x0) {
    pUVar3 = AARSharedWorldGameState::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14cf61edf;
  }
  pAVar5 = (AGameStateBase *)0x0;
LAB_14cf61edf:
  if (pAVar5 != (AGameStateBase *)0x0) {
    this->bIsReadyToReceive = true;
    pUVar4 = UObject::FindFunctionChecked
                       ((UObject *)this,
                        NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,0);
    if (5 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  return;
}

// execClientInitSharedWorld @ 14cf6c2a0

void __cdecl
AARSharedWorldPlayerController::execClientInitSharedWorld
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0xfb8))(param_1,local_res10[0],local_res8[0]);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ClientInitSharedWorld_Validate");
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0xfc0))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execClientUpdateARWorldData @ 14cf6c3b0

void __cdecl
AARSharedWorldPlayerController::execClientUpdateARWorldData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0xf98))(param_1,local_res8[0],&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ClientUpdateARWorldData_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 4000))(param_1,local_res8[0],&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execClientUpdatePreviewImageData @ 14cf6c4c0

void __cdecl
AARSharedWorldPlayerController::execClientUpdatePreviewImageData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined4 local_res8 [2];
  void *local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0xfa8))(param_1,local_res8[0],&local_18);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ClientUpdatePreviewImageData_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0xfb0))(param_1,local_res8[0],&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execServerMarkReadyForReceiving @ 14cf725f0

void __cdecl
AARSharedWorldPlayerController::execServerMarkReadyForReceiving
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0xfc8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMarkReadyForReceiving_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf72637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xfd0))(param_1);
  return;
}

