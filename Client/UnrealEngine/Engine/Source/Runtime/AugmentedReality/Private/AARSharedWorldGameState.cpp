// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 11

// StaticClass @ 14cf31090

UClass * __cdecl AARSharedWorldGameState::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameState",
               &Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton,
               StaticRegisterNativesAARSharedWorldGameState,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AARSharedWorldGameState>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameState>,local_res8,
               AGameState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton;
}

// AARSharedWorldGameState @ 14cf40530

AARSharedWorldGameState * __thiscall
AARSharedWorldGameState::AARSharedWorldGameState
          (AARSharedWorldGameState *this,FVTableHelper *param_1)

{
  AGameState::AGameState((AGameState *)this,param_1);
  this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
  (this->PreviewImageData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewImageData).ArrayNum = 0;
  (this->PreviewImageData).ArrayMax = 0;
  (this->ARWorldData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ARWorldData).ArrayNum = 0;
  (this->ARWorldData).ArrayMax = 0;
  return this;
}

// AARSharedWorldGameState @ 14cf40580

AARSharedWorldGameState * __thiscall
AARSharedWorldGameState::AARSharedWorldGameState
          (AARSharedWorldGameState *this,FObjectInitializer *param_1)

{
  AGameState::AGameState((AGameState *)this,param_1);
  this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
  (this->PreviewImageData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewImageData).ArrayNum = 0;
  (this->PreviewImageData).ArrayMax = 0;
  (this->ARWorldData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ARWorldData).ArrayNum = 0;
  (this->ARWorldData).ArrayMax = 0;
  this->PreviewImageBytesTotal = 0;
  this->ARWorldBytesTotal = 0;
  this->PreviewImageBytesDelivered = 0;
  this->ARWorldBytesDelivered = 0;
  this->bFiredCompletionEvent = false;
  return this;
}

// ~AARSharedWorldGameState @ 14cf43d30

void __thiscall AARSharedWorldGameState::~AARSharedWorldGameState(AARSharedWorldGameState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
  pFVar1 = (this->ARWorldData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewImageData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AGameState::~AGameState((AGameState *)this);
  return;
}

// GetPrivateStaticClass @ 14cf53aa0

UClass * __cdecl AARSharedWorldGameState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameState",
               &Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton,
               StaticRegisterNativesAARSharedWorldGameState,0x370,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AARSharedWorldGameState>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameState>,local_res8,
               AGameState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton;
}

// InitSharedWorld @ 14cf56cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldGameState::InitSharedWorld(AARSharedWorldGameState *this,int param_1,int param_2)

{
  if (GIsServer) {
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  else {
    this->PreviewImageBytesTotal = 0;
    this->ARWorldBytesTotal = 0;
    this->PreviewImageBytesDelivered = 0;
    this->ARWorldBytesDelivered = 0;
    if ((0 < param_1) && (0 < param_2)) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(&this->PreviewImageData,param_1);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&(this->PreviewImageData).AllocatorInstance,
                 &(this->PreviewImageData).ArrayNum,&(this->PreviewImageData).ArrayMax);
      this->PreviewImageBytesTotal = param_1;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Reset(&this->ARWorldData,param_2);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&(this->ARWorldData).AllocatorInstance,&(this->ARWorldData).ArrayNum,
                 &(this->ARWorldData).ArrayMax);
      this->ARWorldBytesTotal = param_2;
      return;
    }
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
  }
  return;
}

// K2_OnARWorldMapIsReady @ 14cf57b00

void __thiscall AARSharedWorldGameState::K2_OnARWorldMapIsReady(AARSharedWorldGameState *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014cf57b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesAARSharedWorldGameState @ 14cf60d40

void __cdecl AARSharedWorldGameState::StaticRegisterNativesAARSharedWorldGameState(void)

{
  return;
}

// TriggerCompletionIfDone @ 14cf63930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AARSharedWorldGameState::TriggerCompletionIfDone(AARSharedWorldGameState *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  if (((this->bFiredCompletionEvent == false) &&
      (this->ARWorldBytesDelivered == this->ARWorldBytesTotal)) &&
     (this->PreviewImageBytesDelivered == this->PreviewImageBytesTotal)) {
    if (4 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
    this->bFiredCompletionEvent = true;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady);
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014cf639a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// UpdateARWorldData @ 14cf65fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldGameState::UpdateARWorldData
          (AARSharedWorldGameState *this,int param_1,uchar *param_2,int param_3)

{
  if (GIsServer) {
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  else {
    if (((-1 < param_1) && (param_1 + param_3 <= this->ARWorldBytesTotal)) &&
       (-1 < param_1 + param_3)) {
      memcpy((this->ARWorldData).AllocatorInstance.Data + param_1,param_2,(longlong)param_3);
      this->ARWorldBytesDelivered = this->ARWorldBytesDelivered + param_3;
      TriggerCompletionIfDone(this);
      return;
    }
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
  }
  return;
}

// UpdatePreviewImageData @ 14cf66c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AARSharedWorldGameState::UpdatePreviewImageData
          (AARSharedWorldGameState *this,int param_1,uchar *param_2,int param_3)

{
  if (GIsServer) {
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
      return;
    }
  }
  else {
    if (((-1 < param_1) && (param_1 + param_3 <= this->PreviewImageBytesTotal)) &&
       (-1 < param_1 + param_3)) {
      memcpy((this->PreviewImageData).AllocatorInstance.Data + param_1,param_2,(longlong)param_3);
      this->PreviewImageBytesDelivered = this->PreviewImageBytesDelivered + param_3;
      TriggerCompletionIfDone(this);
      return;
    }
    if (2 < (byte)LogAR._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAR);
    }
  }
  return;
}

