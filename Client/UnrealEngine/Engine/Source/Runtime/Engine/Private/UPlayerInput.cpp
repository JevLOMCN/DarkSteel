// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 91

// StaticClass @ 1488eead0

UClass * __cdecl UPlayerInput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerInput",
               &Z_Registration_Info_UClass_UPlayerInput.InnerSingleton,
               StaticRegisterNativesUPlayerInput,0x498,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UPlayerInput>,InternalVTableHelperCtorCaller<UPlayerInput>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerInput.InnerSingleton;
}

// UPlayerInput @ 14890b3b0

UPlayerInput * __thiscall UPlayerInput::UPlayerInput(UPlayerInput *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayerInput__6B_;
  *(undefined8 *)&this->TouchEventLocations = 0;
  *(undefined8 *)&(this->TouchEventLocations).field_0x8 = 0;
  *(undefined8 *)&(this->TouchEventLocations).field_0x20 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x28 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->TouchEventLocations).field_0x34 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TouchEventLocations).field_0x40 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x48 = 0;
  (this->DebugExecBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExecBindings).ArrayNum = 0;
  (this->DebugExecBindings).ArrayMax = 0;
  (this->AxisConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisConfig).ArrayNum = 0;
  (this->AxisConfig).ArrayMax = 0;
  (this->ActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionMappings).ArrayNum = 0;
  (this->ActionMappings).ArrayMax = 0;
  (this->AxisMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisMappings).ArrayNum = 0;
  (this->AxisMappings).ArrayMax = 0;
  (this->InvertedAxis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvertedAxis).ArrayNum = 0;
  (this->InvertedAxis).ArrayMax = 0;
  *(undefined8 *)&this->AxisProperties = 0;
  *(undefined8 *)&(this->AxisProperties).field_0x8 = 0;
  *(undefined8 *)&(this->AxisProperties).field_0x20 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x28 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->AxisProperties).field_0x34 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AxisProperties).field_0x40 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x48 = 0;
  *(undefined8 *)&this->ActionKeyMap = 0;
  *(undefined8 *)&(this->ActionKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActionKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActionKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->AxisKeyMap = 0;
  *(undefined8 *)&(this->AxisKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->AxisKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AxisKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AxisKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->KeyStateMap = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeyStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x48 = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x8 = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x20 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x28 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x34 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x40 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x48 = 0;
  (this->GestureRecognizer).bIsReadyForPinch = false;
  (this->GestureRecognizer).AnchorDistanceSq = 0.0;
  (this->GestureRecognizer).StartAngle = 0.0;
  (this->GestureRecognizer).bIsReadyForFlick = false;
  (this->GestureRecognizer).FlickTime = 0.0;
  (this->GestureRecognizer).PreviousTouchCount = 0;
  (this->EventIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventIndices).ArrayNum = 0;
  (this->EventIndices).ArrayMax = 0;
  return this;
}

// UPlayerInput @ 14890b5e0

UPlayerInput * __thiscall UPlayerInput::UPlayerInput(UPlayerInput *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPlayerInput__6B_;
  *(undefined8 *)&this->TouchEventLocations = 0;
  *(undefined8 *)&(this->TouchEventLocations).field_0x8 = 0;
  *(undefined8 *)&(this->TouchEventLocations).field_0x20 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x28 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->TouchEventLocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TouchEventLocations).field_0x34 = 0;
  *(undefined8 *)&(this->TouchEventLocations).field_0x40 = 0;
  *(undefined4 *)&(this->TouchEventLocations).field_0x48 = 0;
  (this->DebugExecBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugExecBindings).ArrayNum = 0;
  (this->DebugExecBindings).ArrayMax = 0;
  (this->AxisConfig).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisConfig).ArrayNum = 0;
  (this->AxisConfig).ArrayMax = 0;
  (this->ActionMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionMappings).ArrayNum = 0;
  (this->ActionMappings).ArrayMax = 0;
  (this->AxisMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisMappings).ArrayNum = 0;
  (this->AxisMappings).ArrayMax = 0;
  (this->InvertedAxis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InvertedAxis).ArrayNum = 0;
  (this->InvertedAxis).ArrayMax = 0;
  *(undefined8 *)&this->AxisProperties = 0;
  *(undefined8 *)&(this->AxisProperties).field_0x8 = 0;
  *(undefined8 *)&(this->AxisProperties).field_0x20 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x28 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->AxisProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AxisProperties).field_0x34 = 0;
  *(undefined8 *)&(this->AxisProperties).field_0x40 = 0;
  *(undefined4 *)&(this->AxisProperties).field_0x48 = 0;
  *(undefined8 *)&this->ActionKeyMap = 0;
  *(undefined8 *)&(this->ActionKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActionKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActionKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActionKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActionKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActionKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->AxisKeyMap = 0;
  *(undefined8 *)&(this->AxisKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->AxisKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AxisKeyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AxisKeyMap).field_0x34 = 0;
  *(undefined8 *)&(this->AxisKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->AxisKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->KeyStateMap = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyStateMap).field_0x34 = 0;
  *(undefined8 *)&(this->KeyStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeyStateMap).field_0x48 = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x8 = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x20 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x28 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x34 = 0;
  *(undefined8 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x40 = 0;
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x48 = 0;
  (this->GestureRecognizer).bIsReadyForPinch = false;
  (this->GestureRecognizer).AnchorDistanceSq = 0.0;
  (this->GestureRecognizer).StartAngle = 0.0;
  (this->GestureRecognizer).bIsReadyForFlick = false;
  (this->GestureRecognizer).FlickTime = 0.0;
  (this->GestureRecognizer).PreviousTouchCount = 0;
  (this->EventIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventIndices).ArrayNum = 0;
  (this->EventIndices).ArrayMax = 0;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  this->MouseSamplingTotal = 0.0083;
  this->MouseSamples = 1;
  return this;
}

// ~UPlayerInput @ 14890e9a0

void __thiscall UPlayerInput::~UPlayerInput(UPlayerInput *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPlayerInput__6B_;
  pFVar1 = (this->EventIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GestureRecognizer).CurrentGestureValues.field_0x48 = 0;
  pvVar2 = *(void **)&(this->GestureRecognizer).CurrentGestureValues.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GestureRecognizer);
  *(undefined4 *)&(this->KeyStateMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->KeyStateMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyStateMap);
  *(undefined4 *)&(this->AxisKeyMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AxisKeyMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FAxisKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FAxisKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FAxisKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AxisKeyMap);
  *(undefined4 *)&(this->ActionKeyMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ActionKeyMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FActionKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FActionKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UPlayerInput::FActionKeyDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActionKeyMap);
  *(undefined4 *)&(this->AxisProperties).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AxisProperties).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKey,FInputAxisProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKey,FInputAxisProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKey,FInputAxisProperties>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AxisProperties);
  pFVar1 = (this->InvertedAxis).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputAxisKeyMapping,int>
            ((FInputAxisKeyMapping *)(this->AxisMappings).AllocatorInstance.Data,
             (this->AxisMappings).ArrayNum);
  pFVar1 = (this->AxisMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInputActionKeyMapping,int>
            ((FInputActionKeyMapping *)(this->ActionMappings).AllocatorInstance.Data,
             (this->ActionMappings).ArrayNum);
  pFVar1 = (this->ActionMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AxisConfig).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKeyBind,int>
            ((FKeyBind *)(this->DebugExecBindings).AllocatorInstance.Data,
             (this->DebugExecBindings).ArrayNum);
  pFVar1 = (this->DebugExecBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TouchEventLocations).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TouchEventLocations).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TouchEventLocations);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148912240

void __thiscall
`UPlayerInput::InputKey'::__l23::<lambda_1>::operator()(void *this,FKeyState *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  if (param_2 == 0.0) {
    if (*(float *)(*(longlong *)((longlong)this + 8) + 0x2c) != 0.0) {
      pTVar5 = param_1->EventAccumulator;
      goto LAB_148912279;
    }
  }
  else {
    pTVar5 = param_1->EventAccumulator + 1;
    if (*(float *)(*(longlong *)((longlong)this + 8) + 0x2c) == 0.0) goto LAB_148912279;
  }
  pTVar5 = param_1->EventAccumulator + 2;
LAB_148912279:
  *(int *)(*(longlong *)this + 0x490) = *(int *)(*(longlong *)this + 0x490) + 1;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  pFVar6 = (FScriptContainerElement *)(*(longlong *)this + 0x490);
  if ((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (longlong)pTVar5->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 4) = *(undefined4 *)pFVar6;
  return;
}

// AddActionMapping @ 148916590

void __thiscall UPlayerInput::AddActionMapping(UPlayerInput *this,FInputActionKeyMapping *param_1)

{
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputActionKeyMapping_const_&>(&this->ActionMappings,param_1);
  TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
           *)&this->ActionKeyMap);
  this->bKeyMapsBuilt = '\0';
  return;
}

// AddAxisMapping @ 1489166f0

void __thiscall UPlayerInput::AddAxisMapping(UPlayerInput *this,FInputAxisKeyMapping *param_1)

{
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputAxisKeyMapping_const_&>(&this->AxisMappings,param_1);
  TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
           *)&this->AxisKeyMap);
  this->bKeyMapsBuilt = '\0';
  return;
}

// AddEngineDefinedActionMapping @ 148916860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UPlayerInput::AddEngineDefinedActionMapping(FInputActionKeyMapping *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UPlayerInput> local_28;
  
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputActionKeyMapping_const_&>(&EngineDefinedActionMappings,param_1);
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UPlayerInput>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
             *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x240));
    lVar6 = (longlong)local_28.Index;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x334) =
         *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x334) &
         0xfe;
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// AddEngineDefinedAxisMapping @ 1489169c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UPlayerInput::AddEngineDefinedAxisMapping(FInputAxisKeyMapping *param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UPlayerInput> local_28;
  
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputAxisKeyMapping_const_&>(&EngineDefinedAxisMappings,param_1);
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UPlayerInput>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
             *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x290));
    lVar6 = (longlong)local_28.Index;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x334) =
         *(byte *)(*(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) + 0x334) &
         0xfe;
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// Build @ 148919650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPlayerInput::ConditionalBuildKeyMappings_Internal'::__l8::<unnamed-type-AxisMappingsUtility>::
Build(void *this,TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *param_1,
     TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
     *param_2)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FName FVar5;
  FName *pFVar6;
  code *pcVar7;
  TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
  *this_00;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FAxisKeyDetails *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FName *this_01;
  undefined1 local_res10 [8];
  TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
  *local_res18;
  undefined1 local_res20 [8];
  FString local_60;
  FString local_50;
  
  iVar4 = param_1->ArrayNum;
  this_01 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar2 = this_01 + (longlong)iVar4 * 5;
  local_res18 = param_2;
  do {
    while( true ) {
      this_00 = local_res18;
      if (param_1->ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInputAxisKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_01 == pFVar2) {
        return;
      }
      FVar5 = *this_01;
      uVar9 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      pFVar11 = TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                            *)this_00,uVar9 + FVar5.Number,this_01);
      iVar10 = (pFVar11->KeyMappings).ArrayNum;
      pFVar13 = (pFVar11->KeyMappings).AllocatorInstance.Data;
      pFVar3 = pFVar13 + (longlong)iVar10 * 0x28;
      while( true ) {
        if ((pFVar11->KeyMappings).ArrayNum != iVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FInputAxisKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar13 == pFVar3) {
          pFVar6 = (FName *)(pFVar11->KeyMappings).AllocatorInstance.Data;
          if (((pFVar6 <= this_01) &&
              (this_01 < pFVar6 + (longlong)(pFVar11->KeyMappings).ArrayMax * 5)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar10 = (pFVar11->KeyMappings).ArrayNum;
          piVar1 = &(pFVar11->KeyMappings).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,(ForAnyElementType *)pFVar11,piVar1);
          }
          lVar12 = (longlong)iVar10;
          (pFVar11->KeyMappings).ArrayNum = iVar10 + 1;
          pFVar3 = (pFVar11->KeyMappings).AllocatorInstance.Data;
          *(FName *)(pFVar3 + lVar12 * 0x28) = *this_01;
          *(uint *)(pFVar3 + lVar12 * 0x28 + 8) = this_01[1].ComparisonIndex.Value;
          *(FName *)(pFVar3 + lVar12 * 0x28 + 0x10) = this_01[2];
          *(FName *)(pFVar3 + lVar12 * 0x28 + 0x18) = this_01[3];
          FVar5 = this_01[4];
          *(FName *)(pFVar3 + lVar12 * 0x28 + 0x20) = FVar5;
          if (FVar5 != (FName)0x0) {
            LOCK();
            *(int *)((longlong)FVar5 + 8) = *(int *)((longlong)FVar5 + 8) + 1;
            UNLOCK();
          }
          goto LAB_14891986e;
        }
        if (((FKey *)(pFVar13 + 0x10))->KeyName == this_01[2]) break;
        pFVar13 = pFVar13 + 0x28;
      }
      if (1 < (byte)LogInput._0_1_) break;
LAB_14891986e:
      this_01 = this_01 + 5;
    }
    ::FName::ToString(this_01,&local_50);
    FKey::ToString((FKey *)(pFVar13 + 0x10),&local_60);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14891986e;
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
    this_01 = this_01 + 5;
  } while( true );
}

// ClearSmoothing @ 14891d1d0

void __thiscall UPlayerInput::ClearSmoothing(UPlayerInput *this)

{
  UObject *pUVar1;
  UClass *this_00;
  
  this->ZeroTime[0] = 0.0;
  this->ZeroTime[1] = 0.0;
  this->SmoothedMouse[0] = 0.0;
  this->SmoothedMouse[1] = 0.0;
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  this->MouseSamplingTotal = *(float *)&pUVar1[10].field_0x4;
  this->MouseSamples = *(int *)(pUVar1 + 10);
  return;
}

// ConditionalBuildKeyMappings_Internal @ 14891dbc0

void __thiscall UPlayerInput::ConditionalBuildKeyMappings_Internal(UPlayerInput *this)

{
  TMap<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
  *pTVar1;
  FInputActionKeyMapping *pFVar2;
  longlong lVar3;
  FName FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FActionKeyDetails *pFVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  FInputActionKeyMapping *pFVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  if (*(int *)&(this->ActionKeyMap).field_0x8 == *(int *)&(this->ActionKeyMap).field_0x34) {
    pFVar16 = (FInputActionKeyMapping *)(this->ActionMappings).AllocatorInstance.Data;
    iVar12 = (this->ActionMappings).ArrayNum;
    pFVar2 = pFVar16 + iVar12;
    while( true ) {
      if ((this->ActionMappings).ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar16 == pFVar2) break;
      FVar4 = pFVar16->ActionName;
      uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      pFVar10 = TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
                            *)&this->ActionKeyMap,uVar9 + FVar4.Number,&pFVar16->ActionName);
      TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FInputActionKeyMapping_const_&>(&pFVar10->Actions,pFVar16);
      pFVar16 = pFVar16 + 1;
    }
    iVar12 = EngineDefinedActionMappings.ArrayNum;
    pFVar2 = (FInputActionKeyMapping *)
             (EngineDefinedActionMappings.AllocatorInstance.Data + (longlong)iVar12 * 0x28);
    FVar17.Data = EngineDefinedActionMappings.AllocatorInstance.Data;
    while( true ) {
      if (EngineDefinedActionMappings.ArrayNum != iVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if ((FInputActionKeyMapping *)FVar17.Data == pFVar2) break;
      FVar4 = ((FInputActionKeyMapping *)FVar17.Data)->ActionName;
      uVar9 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      pFVar10 = TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,UPlayerInput::FActionKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>_>
                            *)&this->ActionKeyMap,uVar9 + FVar4.Number,(FName *)FVar17.Data);
      TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FInputActionKeyMapping_const_&>
                (&pFVar10->Actions,(FInputActionKeyMapping *)FVar17.Data);
      FVar17.Data = FVar17.Data + 0x28;
    }
    this->KeyMapBuildIndex = this->KeyMapBuildIndex + 1;
  }
  pTVar1 = &this->AxisKeyMap;
  if (*(int *)&(this->AxisKeyMap).field_0x8 == *(int *)&(this->AxisKeyMap).field_0x34) {
    `UPlayerInput::ConditionalBuildKeyMappings_Internal'::__l8::<unnamed-type-AxisMappingsUtility>::
    Build(local_res18,&this->AxisMappings,pTVar1);
    `UPlayerInput::ConditionalBuildKeyMappings_Internal'::__l8::<unnamed-type-AxisMappingsUtility>::
    Build(local_res18,&EngineDefinedAxisMappings,pTVar1);
    uVar14 = 0;
    uVar11 = uVar14;
    uVar18 = uVar14;
    if (0 < (this->InvertedAxis).ArrayNum) {
      do {
        uVar15 = (uint)uVar11;
        uVar9 = 0;
        if ((int)uVar15 < (this->InvertedAxis).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)((this->InvertedAxis).AllocatorInstance.Data + uVar18);
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
        if (*(int *)&(this->AxisKeyMap).field_0x8 != *(int *)&(this->AxisKeyMap).field_0x34) {
          puVar6 = *(undefined1 **)&(this->AxisKeyMap).field_0x40;
          puVar13 = &(this->AxisKeyMap).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar13 = puVar6;
          }
          iVar12 = *(int *)(puVar13 +
                           (ulonglong)
                           (*(int *)&(this->AxisKeyMap).field_0x48 - 1U &
                           (int)((ulonglong)lVar5 >> 0x20) + uVar9) * 4);
          if (iVar12 != -1) {
            do {
              lVar3 = *(longlong *)pTVar1 + (longlong)iVar12 * 0x28;
              if (*(longlong *)(*(longlong *)pTVar1 + (longlong)iVar12 * 0x28) == lVar5) {
                uVar11 = lVar3 + 8;
                if (lVar3 == 0) {
                  uVar11 = uVar14;
                }
                if (uVar11 != 0) {
                  *(byte *)(uVar11 + 0x10) = *(byte *)(uVar11 + 0x10) | 1;
                }
                break;
              }
              iVar12 = *(int *)(lVar3 + 0x20);
            } while (iVar12 != -1);
          }
        }
        uVar11 = (ulonglong)(uVar15 + 1);
        uVar18 = uVar18 + 8;
      } while ((int)(uVar15 + 1) < (this->InvertedAxis).ArrayNum);
    }
  }
  this->bKeyMapsBuilt = '\x01';
  return;
}

// ConditionalInitAxisProperties @ 14891de20

void __thiscall UPlayerInput::ConditionalInitAxisProperties(UPlayerInput *this)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  FName *pFVar4;
  undefined1 local_res8 [16];
  FKey *local_48;
  FName *local_40;
  FKey local_38;
  
  if (*(int *)&(this->AxisProperties).field_0x8 == *(int *)&(this->AxisProperties).field_0x34) {
    pFVar4 = (FName *)(this->AxisConfig).AllocatorInstance.Data;
    iVar2 = (this->AxisConfig).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 3;
    while( true ) {
      if ((this->AxisConfig).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FInputAxisConfigEntry,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_38.KeyName = *pFVar4;
      local_38.KeyDetails.Object = (FKeyDetails *)0x0;
      local_38.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      bVar3 = FKey::IsValid(&local_38);
      if (bVar3) {
        local_48 = &local_38;
        local_40 = pFVar4 + 1;
        TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FKey_const_&,FInputAxisProperties_const_&>_>
                  ((TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
                    *)&this->AxisProperties,
                   (TPairInitializer<FKey_const_&,FInputAxisProperties_const_&> *)(local_res8 + 8),
                   (bool *)&local_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
      pFVar4 = pFVar4 + 3;
    }
  }
  return;
}

// ConsumeKey @ 148922980

void __thiscall UPlayerInput::ConsumeKey(UPlayerInput *this,FKey *param_1)

{
  FName FVar1;
  uint uVar2;
  FKeyState *pFVar3;
  
  FVar1 = param_1->KeyName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar3 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           ::FindOrAddImpl<FKey_const_&>
                     ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                       *)&this->KeyStateMap,uVar2 + FVar1.Number,param_1);
  pFVar3->bConsumed = '\x01';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// DetermineAxisValue @ 148925c40

float __thiscall
UPlayerInput::DetermineAxisValue
          (UPlayerInput *this,FInputAxisBinding *param_1,bool param_2,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAxisKeyDetails *pFVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  FKey local_78;
  FKey local_60 [2];
  
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))();
  }
  fVar11 = 0.0;
  *param_4 = false;
  pFVar6 = TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
           ::Find((TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                   *)&this->AxisKeyMap,param_1->AxisName);
  if (pFVar6 == (FAxisKeyDetails *)0x0) {
    fVar11 = 0.0;
  }
  else {
    iVar7 = (pFVar6->KeyMappings).ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar11 = (float)(*pcVar3)();
          return fVar11;
        }
        pFVar2 = (pFVar6->KeyMappings).AllocatorInstance.Data;
        local_78.KeyName = *(FName *)(pFVar2 + lVar8 + 0x10);
        local_78.KeyDetails.Object = *(FKeyDetails **)(pFVar2 + lVar8 + 0x18);
        local_78.KeyDetails.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar2 + lVar8 + 0x20);
        if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar4 = IsKeyConsumed(this,&local_78,(FKeyState *)0x0);
        if (!bVar4) {
          if ((!param_2) || ((*(byte *)param_1 & 2) != 0)) {
            local_60[0].KeyName = *(FName *)(pFVar2 + lVar8 + 0x10);
            local_60[0].KeyDetails.Object = *(FKeyDetails **)(pFVar2 + lVar8 + 0x18);
            local_60[0].KeyDetails.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(pFVar2 + lVar8 + 0x20);
            if (local_60[0].KeyDetails.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_60[0].KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_60[0].KeyDetails.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            fVar1 = *(float *)(pFVar2 + lVar8 + 8);
            fVar10 = GetKeyValue(this,local_60);
            fVar11 = fVar11 + fVar10 * fVar1;
          }
          if ((*(byte *)param_1 & 1) != 0) {
            TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                      (param_3,(FKey *)(pFVar2 + lVar8 + 0x10));
          }
          *param_4 = true;
        }
        iVar7 = (pFVar6->KeyMappings).ArrayNum;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x28;
      } while ((int)uVar9 < iVar7);
    }
    if (pFVar6->bInverted != 0) {
      fVar11 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
    }
  }
  return fVar11;
}

// DiscardPlayerInput @ 1489266b0

void __thiscall UPlayerInput::DiscardPlayerInput(UPlayerInput *this)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)&this->KeyStateMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)&this->KeyStateMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar7 = 5;
      lVar5 = (longlong)(int)uVar4 * 0x110;
      lVar2 = *local_48;
      *(undefined8 *)(lVar5 + 0xf0 + lVar2) = 0;
      *(undefined8 *)(lVar5 + 0xf8 + lVar2) = 0;
      *(undefined8 *)(lVar5 + 0x100 + lVar2) = 0;
      pbVar1 = (byte *)(lVar5 + 0x4c + lVar2);
      *pbVar1 = *pbVar1 & 0x8f;
      puVar6 = (undefined4 *)(lVar2 + 0xa8 + lVar5);
      *(undefined1 *)(lVar5 + 0x4d + lVar2) = 0;
      do {
        *puVar6 = 0;
        if ((int)puVar6[1] < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(puVar6 + -2),0,puVar6 + 1);
        }
        puVar6 = puVar6 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  this->EventCount = 0;
  return;
}

// DisplayDebug @ 148926870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UPlayerInput::DisplayDebug
          (UPlayerInput *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  FDisplayDebugManager *this_00;
  ulonglong uVar1;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar2;
  APlayerController *pAVar3;
  UGameViewportClient *pUVar4;
  longlong lVar5;
  FCanvas *pFVar6;
  code *pcVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  EMouseLockMode EVar13;
  char cVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  UClass *pUVar21;
  ULocalPlayer *pUVar22;
  UEnum *pUVar23;
  longlong lVar24;
  FText *pFVar25;
  FColor *pFVar26;
  TRefCountPtr<ITextData> TVar27;
  longlong lVar28;
  longlong lVar29;
  UCanvas *pUVar30;
  float *pfVar31;
  FColor *pFVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  UCanvas *local_res10;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  FKey local_3c8;
  longlong local_3b0;
  FKey local_3a8;
  longlong *local_388;
  undefined1 auStack_380 [16];
  uint uStack_370;
  int iStack_36c;
  longlong local_368;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_360;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_358;
  undefined2 local_350;
  undefined4 local_348;
  FName local_344;
  FName local_33c;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  wchar_t *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  undefined **local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  FLinearColor_u_0 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  FTexture *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  TVector2<double>_u_0 local_158;
  FText local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FText local_118;
  FText local_108;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_d0;
  
  fVar36 = __real_3b808081;
  if (param_1 == (UCanvas *)0x0) {
    return;
  }
  pAVar3 = (APlayerController *)this->_padding_;
  this_00 = &param_1->DisplayDebugManager;
  pUVar30 = param_1;
  local_res10 = param_1;
  if (pAVar3 != (APlayerController *)0x0) {
    pUVar21 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar20 = (int)pUVar21->_padding_;
    if ((iVar20 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar20 * 8)
        == &pUVar21->_padding_)) {
      uVar16 = (uint)FColor::Orange.field0_0x0._s_0.R;
      local_3f8 = 0.0;
      uVar17 = (uint)FColor::Orange.field0_0x0._s_0.G;
      uVar18 = (uint)FColor::Orange.field0_0x0._s_0.B;
      uVar19 = (uint)FColor::Orange.field0_0x0._s_0.A;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar16 * fVar36;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar17 * fVar36;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar18 * fVar36;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar19 * fVar36;
      local_344 = (FName)pAVar3->_padding_;
      local_408._4_4_ = (float)uVar17 * fVar36;
      local_408._0_4_ = (float)uVar16 * fVar36;
      fStack_400 = (float)uVar18 * fVar36;
      fStack_3fc = (float)uVar19 * fVar36;
      ::FName::ToString(&local_344,&local_330);
      ::FString::PrintfImpl(&local_228,L"\t Player Controller Input Settings:  %s");
      FDisplayDebugManager::DrawString(this_00,&local_228,&local_3f8);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      pFVar32 = &FColor::White;
      pFVar26 = &FColor::Red;
      local_3f4 = 0.0;
      if (pAVar3->bInputEnabled != 0) {
        pFVar26 = &FColor::White;
      }
      local_408._0_4_ = (float)(pFVar26->field0_0x0)._s_0.R * fVar36;
      local_408._4_4_ = (float)(pFVar26->field0_0x0)._s_0.G * fVar36;
      fStack_400 = (float)(pFVar26->field0_0x0)._s_0.B * fVar36;
      fStack_3fc = (float)(pFVar26->field0_0x0)._s_0.A * fVar36;
      *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_408._0_4_;
      *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           local_408._4_4_;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_400;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_3fc
      ;
      ::FString::PrintfImpl(&local_218,L"\t PlayerController bIsInputEnabled: %s");
      FDisplayDebugManager::DrawString(this_00,&local_218,&local_3f4);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      local_3f0 = 0.0;
      uVar16 = (uint)FColor::White.field0_0x0._s_0.G;
      uVar17 = (uint)FColor::White.field0_0x0._s_0.B;
      uVar18 = (uint)FColor::White.field0_0x0._s_0.A;
      local_408._4_4_ = (float)uVar16 * fVar36;
      local_408._0_4_ = (float)FColor::White.field0_0x0._2_1_ * fVar36;
      fStack_400 = (float)uVar17 * fVar36;
      fStack_3fc = (float)uVar18 * fVar36;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
           (float)FColor::White.field0_0x0._2_1_ * fVar36;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar16 * fVar36;
      *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar17 * fVar36;
      *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
           (float)uVar18 * fVar36;
      APlayerController::GetCurrentInputModeDebugString(pAVar3);
      ::FString::PrintfImpl(&local_208,L"\t PlayerController Input Mode: %s");
      FDisplayDebugManager::DrawString(this_00,&local_208,&local_3f0);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      pAVar3 = (APlayerController *)this->_padding_;
      if (pAVar3 != (APlayerController *)0x0) {
        pUVar21 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar20 = (int)pUVar21->_padding_;
        if ((((iVar20 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
              &pUVar21->_padding_)) &&
            (pUVar22 = APlayerController::GetLocalPlayer(pAVar3), pUVar22 != (ULocalPlayer *)0x0))
           && (pUVar4 = (pUVar22->ViewportClient).field0_0x0.DebugPtr,
              pUVar4 != (UGameViewportClient *)0x0)) {
          local_3ec = 0.0;
          bVar12 = (**(code **)(pUVar4->_padding_ + 0x198))(&pUVar4->_padding_);
          local_2c8 = L"Engine.EMouseCaptureMode";
          iStack_2c0 = 0x18;
          pUVar21 = Z_Construct_UClass_UEnum_NoRegister();
          local_138._12_4_ = uStack_2bc;
          local_138.Size = iStack_2c0;
          local_138.DataPtr = local_2c8;
          pUVar23 = (UEnum *)StaticFindObject(pUVar21,(UObject *)0x0,&local_138,None);
          if (pUVar23 == (UEnum *)0x0) {
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
          }
          UEnum::GetNameStringByValue(pUVar23,&local_320,(ulonglong)bVar12);
          ::FString::PrintfImpl(&local_2b8,L"\t ViewportClient MouseCaptureMode: %s");
          FDisplayDebugManager::DrawString(this_00,&local_2b8,&local_3ec);
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          local_3e8 = 0.0;
          EVar13 = UGameViewportClient::GetMouseLockMode
                             ((pUVar22->ViewportClient).field0_0x0.DebugPtr);
          local_2a8 = L"Engine.EMouseLockMode";
          iStack_2a0 = 0x15;
          pUVar21 = Z_Construct_UClass_UEnum_NoRegister();
          local_128._12_4_ = uStack_29c;
          local_128.Size = iStack_2a0;
          local_128.DataPtr = local_2a8;
          pUVar23 = (UEnum *)StaticFindObject(pUVar21,(UObject *)0x0,&local_128,None);
          if (pUVar23 == (UEnum *)0x0) {
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
          }
          UEnum::GetNameStringByValue(pUVar23,&local_310,(ulonglong)EVar13);
          ::FString::PrintfImpl(&local_298,L"\t ViewportClient MouseLockMode: %s");
          FDisplayDebugManager::DrawString(this_00,&local_298,&local_3e8);
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.Data.AllocatorInstance.Data);
          }
          cVar14 = (**(code **)(((pUVar22->ViewportClient).field0_0x0.DebugPtr)->_padding_ + 400))()
          ;
          pFVar26 = &FColor::White;
          local_3e4 = 0.0;
          if (cVar14 != '\0') {
            pFVar26 = &FColor::Red;
          }
          local_408._0_4_ = (float)(pFVar26->field0_0x0)._s_0.R * fVar36;
          local_408._4_4_ = (float)(pFVar26->field0_0x0)._s_0.G * fVar36;
          fStack_400 = (float)(pFVar26->field0_0x0)._s_0.B * fVar36;
          fStack_3fc = (float)(pFVar26->field0_0x0)._s_0.A * fVar36;
          *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_408._0_4_;
          *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               local_408._4_4_;
          *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_400;
          *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               fStack_3fc;
          ::FString::PrintfImpl(&local_288,L"\t ViewportClient bIsIgnoringInput: %s");
          FDisplayDebugManager::DrawString(this_00,&local_288,&local_3e4);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          bVar15 = UGameViewportClient::GetUseMouseForTouch
                             ((pUVar22->ViewportClient).field0_0x0.DebugPtr);
          local_3e0 = 0.0;
          if (bVar15) {
            pFVar32 = &FColor::Green;
          }
          local_408._0_4_ = (float)(pFVar32->field0_0x0)._s_0.R * fVar36;
          local_408._4_4_ = (float)(pFVar32->field0_0x0)._s_0.G * fVar36;
          fStack_400 = (float)(pFVar32->field0_0x0)._s_0.B * fVar36;
          fStack_3fc = (float)(pFVar32->field0_0x0)._s_0.A * fVar36;
          *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_408._0_4_;
          *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               local_408._4_4_;
          *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_400;
          *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
               fStack_3fc;
          ::FString::PrintfImpl(&local_278,L"\t ViewportClient bIsUsingMouseForTouch: %s");
          FDisplayDebugManager::DrawString(this_00,&local_278,&local_3e0);
          pUVar30 = local_res10;
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
            pUVar30 = local_res10;
          }
        }
      }
    }
  }
  local_3dc = 0.0;
  local_408._0_4_ = (float)FColor::Red.field0_0x0._2_1_ * fVar36;
  local_408._4_4_ = (float)FColor::Red.field0_0x0._1_1_ * fVar36;
  fStack_400 = (float)FColor::Red.field0_0x0._0_1_ * fVar36;
  fStack_3fc = (float)FColor::Red.field0_0x0._3_1_ * fVar36;
  *(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
   &(param_1->DisplayDebugManager).DebugTextItem._padding_ = _local_408;
  local_33c = (FName)this->_padding_;
  ::FName::ToString(&local_33c,&local_300);
  ::FString::PrintfImpl(&local_268,L"INPUT %s");
  FDisplayDebugManager::DrawString(this_00,&local_268,&local_3dc);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  lVar24 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                          ,0x775,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this->KeyStateMap;
  local_res10 = (UCanvas *)CONCAT44(local_res10._4_4_,(float)*(double *)(lVar24 + 0x908));
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_f8,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar2);
  lVar11 = _UNK_151be7c28;
  lVar10 = ___xmm_3f8000003f34b4b53f8000003f34b4b5;
  lVar9 = _UNK_151be7c18;
  lVar24 = ___xmm_3f8000003f34b4b53f34b4b53f34b4b5;
  local_350 = 0;
  stack0xfffffffffffffc88 = local_f8._16_16_;
  local_388 = (longlong *)local_f8._0_8_;
  auStack_380._0_8_ = local_f8._8_8_;
  local_368 = local_d8;
  pTStack_360 = pTStack_d0;
  iVar20 = local_f8._28_4_;
  local_358 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
               *)pTVar2;
  if (iVar20 < *(int *)(local_f8._16_8_ + 0x18)) {
    do {
      lVar28 = (longlong)iVar20 * 0x110;
      lVar5 = *local_388;
      local_3c8.KeyName = *(FName *)(lVar28 + lVar5);
      lVar29 = lVar5 + 0x18 + lVar28;
      local_3c8.KeyDetails.Object = *(FKeyDetails **)(lVar28 + 8 + lVar5);
      local_3c8.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar28 + 0x10 + lVar5);
      if (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_3c8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3b0 = lVar29;
      local_3a8.KeyName = local_3c8.KeyName;
      local_3a8.KeyDetails.Object = local_3c8.KeyDetails.Object;
      local_3a8.KeyDetails.SharedReferenceCount.ReferenceController =
           local_3c8.KeyDetails.SharedReferenceCount.ReferenceController;
      bVar15 = FKey::IsAxis3D(&local_3c8);
      if (bVar15) {
        pFVar25 = FKey::GetDisplayName(&local_3c8,&local_118,true);
        FText::ToString(pFVar25);
        ::FString::PrintfImpl
                  ((FString *)local_408,
                   L" %s: X: %.2f Y: %.2f Z: %.2f (raw X: %.2f Y: %.2f Z: %.2f)");
        TVar27.Reference = local_118.TextData.Reference;
LAB_148927267:
        if (TVar27.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar27.Reference + 0x10))();
        }
      }
      else {
        bVar15 = FKey::IsAxis2D(&local_3c8);
        if (bVar15) {
          pFVar25 = FKey::GetDisplayName(&local_3c8,&local_148,true);
          FText::ToString(pFVar25);
          ::FString::PrintfImpl((FString *)local_408,L" %s: X: %.2f Y: %.2f (raw X: %.2f Y: %.2f)");
          TVar27.Reference = local_148.TextData.Reference;
          goto LAB_148927267;
        }
        pFVar25 = FKey::GetDisplayName(&local_3c8,&local_108,true);
        FText::ToString(pFVar25);
        ::FString::PrintfImpl((FString *)local_408,L" %s: %.2f (raw %.2f)");
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
      }
      if (((*(byte *)(lVar29 + 0x34) & 1) == 0) && (*(double *)(lVar29 + 0x18) == 0.0)) {
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar24;
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar9;
        local_3d8 = 0.0;
        pfVar31 = &local_3d8;
      }
      else {
        bVar15 = FKey::IsAxis1D(&local_3a8);
        if (!bVar15) {
          ::FString::PrintfImpl(&local_2f0,L" time: %.2f");
          iVar20 = 0;
          if (local_2f0.Data.ArrayNum != 0) {
            iVar20 = local_2f0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars
                    ((FString *)local_408,(wchar_t *)local_2f0.Data.AllocatorInstance.Data,iVar20);
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
        }
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar10;
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar11;
        local_3d4 = 0.0;
        pfVar31 = &local_3d4;
      }
      FDisplayDebugManager::DrawString(this_00,(FString *)local_408,pfVar31);
      if (local_408 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_408);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3c8.KeyDetails.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a8.KeyDetails.SharedReferenceCount.ReferenceController);
      uStack_370 = uStack_370 & ~auStack_380._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_380);
      iVar20 = iStack_36c;
    } while (iStack_36c < *(int *)(auStack_380._8_8_ + 0x18));
    if (((char)local_350 != '\0') && (local_350._1_1_ != '\0')) {
      uVar16 = *(int *)&(local_358->Elements).field_0x8 - *(int *)&(local_358->Elements).field_0x34;
      if (uVar16 < 4) {
        iVar20 = 1;
      }
      else {
        uVar1 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_348 = (undefined4)lVar24;
        iVar20 = 1 << ((byte)lVar24 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_358->HashSize < iVar20)) || (iVar20 < local_358->HashSize)) {
        local_358->HashSize = iVar20;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_358);
      }
    }
  }
  local_res10 = (UCanvas *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_2e0 = (float)FColor::White.field0_0x0._2_1_ * fVar36;
  fStack_2dc = (float)FColor::White.field0_0x0._1_1_ * fVar36;
  fStack_2d4 = (float)FColor::White.field0_0x0._3_1_ * fVar36;
  fStack_2d8 = (float)FColor::White.field0_0x0._0_1_ * fVar36;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = local_2e0;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_2dc;
  *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = fStack_2d8;
  *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_2d4;
  ::FString::PrintfImpl(&local_258,L"MouseSampleRate: %.2f");
  FDisplayDebugManager::DrawString(this_00,&local_258,(float *)&local_res10);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  local_3d0 = 0.0;
  ::FString::PrintfImpl(&local_248,L"MouseX ZeroTime: %.2f, Smoothed: %.2f");
  FDisplayDebugManager::DrawString(this_00,&local_248,&local_3d0);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  local_3cc = 0.0;
  ::FString::PrintfImpl(&local_238,L"MouseY ZeroTime: %.2f, Smoothed: %.2f");
  FDisplayDebugManager::DrawString(this_00,&local_238,&local_3cc);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((__real_40000000 < this->ZeroTime[0]) && (__real_40000000 < this->ZeroTime[1])) {
    pUVar21 = UInputSettings::StaticClass();
    if ((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar21);
    }
    if (((pUVar21->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20 & 8) != 0) {
      DebugSmoothedMouseX = (float)pUVar30->SizeX * __real_3f000000;
      DebugUnSmoothedMouseY = (float)pUVar30->SizeY * __real_3f000000;
      DebugSmoothedMouseY = DebugUnSmoothedMouseY;
      DebugUnSmoothedMouseX = DebugSmoothedMouseX;
      goto LAB_148927786;
    }
  }
  fVar34 = (float)pUVar30->SizeX * __real_3f000000;
  fVar36 = (float)pUVar30->SizeY * __real_3f000000;
  fVar35 = fVar34 - __real_442f0000;
  fVar34 = fVar34 + __real_442f0000;
  fVar37 = fVar36 - __real_442f0000;
  fVar36 = fVar36 + __real_442f0000;
  fVar33 = fVar34;
  if (DebugUnSmoothedMouseX <= fVar34) {
    fVar33 = DebugUnSmoothedMouseX;
  }
  if (DebugSmoothedMouseX <= fVar34) {
    fVar34 = DebugSmoothedMouseX;
  }
  fVar8 = fVar36;
  if (DebugUnSmoothedMouseY <= fVar36) {
    fVar8 = DebugUnSmoothedMouseY;
  }
  if (DebugSmoothedMouseY <= fVar36) {
    fVar36 = DebugSmoothedMouseY;
  }
  DebugUnSmoothedMouseX = fVar33;
  if (fVar33 <= fVar35) {
    DebugUnSmoothedMouseX = fVar35;
  }
  DebugSmoothedMouseX = fVar34;
  if (fVar34 <= fVar35) {
    DebugSmoothedMouseX = fVar35;
  }
  DebugUnSmoothedMouseY = fVar8;
  if (fVar8 <= fVar37) {
    DebugUnSmoothedMouseY = fVar37;
  }
  DebugSmoothedMouseY = fVar36;
  if (fVar36 <= fVar37) {
    DebugSmoothedMouseY = fVar37;
  }
LAB_148927786:
  local_1e8 = (double)DebugSmoothedMouseY;
  local_1e0 = 0;
  local_1f8 = &___7FCanvasTileItem__6B_;
  local_1d8 = 0;
  local_1d0 = 0;
  local_198 = ___xmm_3ff00000000000000000000000000000;
  uStack_190 = _UNK_15061cbc8;
  local_1a0 = 0;
  local_170 = 0;
  local_178 = 0;
  local_1a8 = 0x3f800000;
  local_180 = GWhiteTexture;
  local_1f0 = (double)DebugSmoothedMouseX;
  local_158 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_1b8 = ___xmm_40200000000000004020000000000000;
  uStack_1b0 = _UNK_151be7c58;
  local_188 = __real_3ff0000000000000;
  local_168 = 0;
  uStack_160 = 0;
  local_1c8 = FLinearColor::Yellow.field0_0x0;
  if ((GWhiteTexture == (FTexture *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                          ,0x152,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = pUVar30->Canvas;
  (*(code *)local_1f8[3])(&local_1f8);
  if (pFVar6->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar6,false);
  }
  pFVar6 = pUVar30->Canvas;
  local_1c8 = FLinearColor::White.field0_0x0;
  local_1b8 = ___xmm_40140000000000004014000000000000;
  uStack_1b0 = _UNK_150ae9818;
  local_1f0 = (double)DebugUnSmoothedMouseX;
  local_1e8 = (double)DebugUnSmoothedMouseY;
  (*(code *)local_1f8[3])(&local_1f8);
  if (pFVar6->DrawMode == CDM_ImmediateDrawing) {
    FCanvas::Flush_GameThread(pFVar6,false);
  }
  return;
}

// EvaluateBlockedInputComponent @ 148939bb0

void __thiscall
UPlayerInput::EvaluateBlockedInputComponent(UPlayerInput *this,UInputComponent *param_1)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  
  if (param_1 != (UInputComponent *)0x0) {
    pFVar3 = (param_1->AxisBindings).AllocatorInstance.Data;
    iVar1 = (param_1->AxisBindings).ArrayNum;
    pFVar5 = pFVar3 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((param_1->AxisBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FInputAxisBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar3 == pFVar5) break;
      *(undefined4 *)(pFVar3 + 0x30) = 0;
      pFVar3 = pFVar3 + 0x38;
    }
    iVar1 = (param_1->AxisKeyBindings).ArrayNum;
    pFVar3 = (param_1->AxisKeyBindings).AllocatorInstance.Data;
    pFVar5 = pFVar3 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((param_1->AxisKeyBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FInputAxisKeyBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar3 == pFVar5) break;
      *(undefined4 *)(pFVar3 + 4) = 0;
      pFVar3 = pFVar3 + 0x40;
    }
    pFVar5 = (param_1->VectorAxisBindings).AllocatorInstance.Data;
    iVar1 = (param_1->VectorAxisBindings).ArrayNum;
    pFVar3 = pFVar5 + 8;
    pFVar4 = pFVar5 + (longlong)iVar1 * 0x58;
    while( true ) {
      if ((param_1->VectorAxisBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FInputVectorAxisBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (pFVar5 == pFVar4) break;
      pFVar5 = pFVar5 + 0x58;
      *(double *)pFVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar3 + 8) = uVar2;
      *(double *)(pFVar3 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pFVar3 = pFVar3 + 0x58;
    }
  }
  return;
}

// EvaluateInputComponentDelegates @ 148939cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPlayerInput::EvaluateInputComponentDelegates
          (UPlayerInput *this,UInputComponent *param_1,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          bool param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  FScriptContainerElement FVar5;
  FName FVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar11;
  atomic<unsigned___int64> aVar12;
  undefined8 uVar13;
  code *pcVar14;
  FKeyDetails *pFVar15;
  FSharedReferencer<1> FVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  char cVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  TTuple<FName,UPlayerInput::FActionKeyDetails> *pTVar24;
  TScriptDelegate<FNotThreadSafeDelegateMode> *pTVar25;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  longlong lVar26;
  TTuple<FKey,FKeyState> *pTVar27;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar28;
  FKeyState *pFVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  FKeyState *pFVar33;
  undefined1 *puVar34;
  undefined4 *puVar35;
  ulonglong uVar36;
  undefined1 *puVar37;
  uint uVar38;
  FName *pFVar39;
  ForAnyElementType FVar40;
  FInputKeyBinding *pFVar41;
  FDelegateDispatchDetails *pFVar42;
  FInputAxisBinding *pFVar43;
  FName *pFVar44;
  FKeyState *pFVar45;
  FScriptContainerElement *pFVar46;
  FInputKeyBinding *pFVar47;
  FKey *pFVar48;
  FInputAxisBinding *pFVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  ulonglong uVar52;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  FIdentityFunctor local_res10;
  bool local_3d8 [8];
  uint local_3d0;
  undefined1 local_3cc [4];
  Type local_3c8;
  FScriptContainerElement *local_3c0;
  FKey *local_3b8;
  longlong local_3b0;
  uint local_3a8 [4];
  undefined1 local_398 [136];
  TReferenceControllerBase<1> *local_310;
  TVector<double>_u_0 local_308;
  Type local_2f0;
  undefined1 local_2e8 [8];
  TReferenceControllerBase<1> *pTStack_2e0;
  undefined8 local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  FKey local_2b8;
  FKey local_2a0;
  FKey local_288;
  FKey local_270;
  FKey local_258;
  FKey local_240;
  FKey local_228;
  FKey local_210;
  FKey local_1f8;
  FKey local_1e0;
  undefined8 local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  undefined8 local_160;
  undefined1 local_158 [120];
  TReferenceControllerBase<1> *pTStack_e0;
  undefined8 local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined1 local_a8 [24];
  TReferenceControllerBase<1> *local_90;
  float local_88;
  
  if ((param_1 == (UInputComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    return false;
  }
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UPlayerInput::EvaluateInputComponentDelegates'::__l2::
           _dynamic_atexit_destructor_for__KeysToConsume__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`UPlayerInput::EvaluateInputComponentDelegates'::__l2::
           _dynamic_atexit_destructor_for__FoundChords__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    atexit(`UPlayerInput::EvaluateInputComponentDelegates'::__l2::
           _dynamic_atexit_destructor_for__PotentialActions__);
    _Init_thread_footer(&::_TSS2);
  }
  if (((((KeysToConsume.ArrayNum != 0) || (FoundChords.ArrayNum != 0)) ||
       ((this->EventIndices).ArrayNum != 0)) || (PotentialActions.ArrayNum != 0)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!KeysToConsume.Num() && !FoundChords.Num() && !EventIndices.Num() && !PotentialActions.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                          ,0x5db,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  UInputComponent::ConditionalBuildKeyMap(param_1,this);
  iVar23 = param_2->ArrayNum;
  pFVar39 = (FName *)(param_2->AllocatorInstance).Data;
  pFVar44 = pFVar39 + (longlong)iVar23 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar23) {
      local_3d8[1] = false;
      `TCheckedPointerIterator<TTuple<FKey,FKeyState_*>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_3d8 + 1);
    }
    iVar17 = PotentialActions.ArrayNum;
    if (pFVar39 == pFVar44) break;
    if ((*(byte *)((longlong)pFVar39[3] + 0x34) & 4) == 0) {
      FVar6 = pFVar39[2];
      local_2b8.KeyName = *pFVar39;
      local_2b8.KeyDetails.Object = *(FKeyDetails **)(pFVar39 + 1);
      if (FVar6 != (FName)0x0) {
        paVar1 = (atomic<int> *)((longlong)FVar6 + 8);
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      local_2b8.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)FVar6;
      UInputComponent::GetActionsBoundToKey(param_1,this,&local_2b8,&PotentialActions);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar6);
    }
    pFVar39 = pFVar39 + 4;
  }
  uVar36 = (ulonglong)PotentialActions.ArrayNum;
  pFVar46 = PotentialActions.AllocatorInstance.Data + uVar36 * 0x10;
  FVar40.Data = PotentialActions.AllocatorInstance.Data;
  while( true ) {
    iVar23 = (int)uVar36;
    if ((int)uVar36 != iVar17) {
      local_3d8[2] = false;
      `TCheckedPointerIterator<TSharedPtr<FInputActionBinding,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3d8 + 2);
      iVar23 = PotentialActions.ArrayNum;
    }
    if (FVar40.Data == pFVar46) break;
    GetChordsForAction(this,*(FInputActionBinding **)FVar40.Data,param_4,&FoundChords,&KeysToConsume
                      );
    uVar36 = (ulonglong)(uint)PotentialActions.ArrayNum;
    FVar40.Data = FVar40.Data + 0x10;
  }
  if (PotentialActions.ArrayMax < 0) {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>
              ((TSharedPtr<FInputActionBinding,1> *)PotentialActions.AllocatorInstance.Data,iVar23);
    PotentialActions.ArrayNum = 0;
    if (PotentialActions.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&PotentialActions.AllocatorInstance,0,&PotentialActions.ArrayMax);
    }
  }
  else {
    DestructItems<TSharedPtr<FInputActionBinding,1>,int>
              ((TSharedPtr<FInputActionBinding,1> *)PotentialActions.AllocatorInstance.Data,iVar23);
    PotentialActions.ArrayNum = 0;
  }
  uVar36 = 0;
  iVar23 = (param_1->KeyBindings).ArrayNum;
  pFVar41 = (FInputKeyBinding *)(param_1->KeyBindings).AllocatorInstance.Data;
  pFVar47 = pFVar41 + iVar23;
  while( true ) {
    if ((param_1->KeyBindings).ArrayNum != iVar23) {
      local_3d8[3] = false;
      `TCheckedPointerIterator<FInputKeyBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3d8 + 3);
    }
    if (pFVar41 == pFVar47) break;
    GetChordForKey(this,pFVar41,param_4,&FoundChords,&KeysToConsume,(FKeyState *)0x0);
    pFVar41 = pFVar41 + 1;
  }
  local_res10 = SUB81(param_1,0);
  AlgoImpl::
  IntroSortInternal<FDelegateDispatchDetails,int,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,UE::Input::FDelegateDispatchDetailsSorter>_>
            ((FDelegateDispatchDetails *)FoundChords.AllocatorInstance.Data,FoundChords.ArrayNum,
             local_res10,(FDelegateDispatchDetailsSorter *)local_3cc);
  uVar52 = uVar36;
  if (0 < FoundChords.ArrayNum) {
    do {
      uVar38 = (uint)uVar36;
      uVar51 = ~uVar38 >> 0x1f;
      uVar32 = 0;
      if ((int)uVar38 < FoundChords.ArrayNum) {
        uVar32 = uVar51;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        uVar19 = (*pcVar14)();
        return (bool)uVar19;
      }
      FVar40.Data = FoundChords.AllocatorInstance.Data;
      lVar26 = *(longlong *)(FoundChords.AllocatorInstance.Data + uVar52 + 0x40);
      if ((lVar26 == 0) || ((*(byte *)(lVar26 + 1) & 1) == 0)) {
LAB_14893a19f:
        uVar22 = 0;
        uVar32 = uVar22;
        if ((int)uVar38 < FoundChords.ArrayNum) {
          uVar32 = uVar51;
        }
        if ((uVar32 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        FVar5 = FoundChords.AllocatorInstance.Data[uVar52 + 0x38];
        if (FVar5 == (FScriptContainerElement)0x1) {
          this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                    TSharedPtr<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>::
                    operator->((TSharedPtr<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,1>
                                *)(FoundChords.AllocatorInstance.Data + uVar52 + 8));
LAB_14893a22b:
          bVar18 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(this_00);
        }
        else {
          if (FVar5 == (FScriptContainerElement)0x2) {
            this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                      TSharedPtr<TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy>,1>::
                      operator->((TSharedPtr<TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy>,1>
                                  *)(FoundChords.AllocatorInstance.Data + uVar52 + 0x18));
            goto LAB_14893a22b;
          }
          if (FVar5 != (FScriptContainerElement)0x3) goto LAB_14893a3ae;
          pTVar25 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)
                    TSharedPtr<FInputActionHandlerDynamicSignature,1>::operator->
                              ((TSharedPtr<FInputActionHandlerDynamicSignature,1> *)
                               (FoundChords.AllocatorInstance.Data + uVar52 + 0x28));
          bVar18 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar25);
        }
        iVar23 = UE::Input::NonAxisDelegates.ArrayNum;
        if (bVar18 != false) {
          uVar32 = uVar22;
          if ((int)uVar38 < FoundChords.ArrayNum) {
            uVar32 = uVar51;
          }
          if ((uVar32 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            uVar19 = (*pcVar14)();
            return (bool)uVar19;
          }
          *(int *)(FoundChords.AllocatorInstance.Data + uVar52 + 4) = iVar23;
          if ((int)uVar38 < FoundChords.ArrayNum) {
            uVar22 = uVar51;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            uVar19 = (*pcVar14)();
            return (bool)uVar19;
          }
          pFVar42 = (FDelegateDispatchDetails *)
                    (FoundChords.AllocatorInstance.Data + (longlong)(int)uVar38 * 0xd8);
          if (((UE::Input::NonAxisDelegates.AllocatorInstance.Data <= pFVar42) &&
              (pFVar42 < (FDelegateDispatchDetails *)
                         (UE::Input::NonAxisDelegates.AllocatorInstance.Data +
                         (longlong)UE::Input::NonAxisDelegates.ArrayMax * 0xd8))) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar14 = (code *)swi(3);
            uVar19 = (*pcVar14)();
            return (bool)uVar19;
          }
          if (UE::Input::NonAxisDelegates.ArrayNum == UE::Input::NonAxisDelegates.ArrayMax) {
            UE::Input::NonAxisDelegates.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8d8,&UE::Input::NonAxisDelegates.AllocatorInstance,
                            &UE::Input::NonAxisDelegates.ArrayMax);
          }
          lVar26 = (longlong)UE::Input::NonAxisDelegates.ArrayNum;
          UE::Input::NonAxisDelegates.ArrayNum = UE::Input::NonAxisDelegates.ArrayNum + 1;
          FDelegateDispatchDetails::FDelegateDispatchDetails
                    ((FDelegateDispatchDetails *)
                     (UE::Input::NonAxisDelegates.AllocatorInstance.Data + lVar26 * 0xd8),pFVar42);
        }
      }
      else {
        pTVar24 = TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                          *)&this->ActionKeyMap,*(FName *)(lVar26 + 4));
        if ((pTVar24 == (TTuple<FName,UPlayerInput::FActionKeyDetails> *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        bVar18 = FKey::IsValid((FKey *)&pTVar24->field_0x18);
        if (!bVar18) {
LAB_14893a108:
          if (*(char *)(*(longlong *)(FVar40.Data + uVar52 + 0x40) + 2) == '\0') {
            FKey::operator=((FKey *)&pTVar24->field_0x18,(FKey *)(FVar40.Data + uVar52 + 0x48));
            uVar32 = (*(uint *)&pTVar24->field_0x30 ^ *(uint *)(FVar40.Data + uVar52 + 0x60)) & 1 ^
                     *(uint *)&pTVar24->field_0x30;
            *(uint *)&pTVar24->field_0x30 = uVar32;
            uVar32 = (uVar32 ^ *(uint *)(FVar40.Data + uVar52 + 0x60)) & 2 ^ uVar32;
            *(uint *)&pTVar24->field_0x30 = uVar32;
            uVar32 = (uVar32 ^ *(uint *)(FVar40.Data + uVar52 + 0x60)) & 4 ^ uVar32;
            *(uint *)&pTVar24->field_0x30 = uVar32;
            *(uint *)&pTVar24->field_0x30 =
                 (uVar32 ^ *(uint *)(FVar40.Data + uVar52 + 0x60)) & 8 ^ uVar32;
          }
          else {
            uVar32 = EKeys::Invalid.KeyName.Number;
            *(uint *)&pTVar24->field_0x18 = EKeys::Invalid.KeyName.ComparisonIndex.Value;
            FVar16 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
            pFVar15 = EKeys::Invalid.KeyDetails.Object;
            *(uint *)&pTVar24->field_0x1c = uVar32;
            if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1c8 = *(undefined8 *)&pTVar24->field_0x20;
            pTStack_1c0 = *(TReferenceControllerBase<1> **)&pTVar24->field_0x28;
            *(FKeyDetails **)&pTVar24->field_0x20 = pFVar15;
            *(TReferenceControllerBase<1> **)&pTVar24->field_0x28 = FVar16.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1c0);
          }
          goto LAB_14893a19f;
        }
        FVar6.ComparisonIndex.Value = *(uint *)&pTVar24->field_0x18;
        FVar6.Number = *(uint *)&pTVar24->field_0x1c;
        if (FVar6 == *(FName *)(FVar40.Data + uVar52 + 0x48)) {
          uVar32 = *(uint *)&pTVar24->field_0x30;
          uVar22 = *(uint *)(FVar40.Data + uVar52 + 0x60);
          if ((((((uVar32 ^ uVar22) & 1) == 0) && (((uVar22 ^ uVar32) & 2) == 0)) &&
              (((uVar22 ^ uVar32) & 4) == 0)) && (((uVar22 ^ uVar32) & 8) == 0)) goto LAB_14893a108;
        }
        local_2a0.KeyDetails.Object = *(FKeyDetails **)&pTVar24->field_0x20;
        local_2a0.KeyDetails.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)&pTVar24->field_0x28;
        if (local_2a0.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2a0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a0.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_2a0.KeyName = FVar6;
        bVar18 = IsPressed(this,&local_2a0);
        if (!bVar18) goto LAB_14893a108;
      }
LAB_14893a3ae:
      uVar36 = (ulonglong)(uVar38 + 1);
      uVar52 = uVar52 + 0xd8;
    } while ((int)(uVar38 + 1) < FoundChords.ArrayNum);
  }
  uVar62 = _UNK_15076c71c;
  uVar61 = _UNK_15076c718;
  uVar60 = _UNK_15076c714;
  uVar59 = ___xmm_bff0000000000000bff0000000000000;
  pFVar45 = (FKeyState *)0x0;
  local_3d0 = 0;
  if (0 < (param_1->TouchBindings).ArrayNum) {
    local_3b0 = 0;
    pFVar29 = pFVar45;
    do {
      lVar26 = local_3b0;
      uVar32 = 0;
      if ((int)(uint)pFVar29 < (param_1->TouchBindings).ArrayNum) {
        uVar32 = ~(uint)pFVar29 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        uVar19 = (*pcVar14)();
        return (bool)uVar19;
      }
      pFVar46 = (param_1->TouchBindings).AllocatorInstance.Data;
      local_3b8 = EKeys::TouchKeys;
      local_3c8 = Touch1;
      local_3c0 = pFVar46;
      do {
        pFVar48 = local_3b8;
        pTVar53 = &this->EventIndices;
        pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                          *)&this->KeyStateMap,local_3b8);
        FVar5 = pFVar46[lVar26 + 1];
        pTVar7 = (pFVar48->KeyDetails).SharedReferenceCount.ReferenceController;
        local_288.KeyName = pFVar48->KeyName;
        pFVar29 = (FKeyState *)&pTVar27->field_0x18;
        if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
          pFVar29 = pFVar45;
        }
        local_288.KeyDetails.Object = (pFVar48->KeyDetails).Object;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar33 = pFVar29;
        local_288.KeyDetails.SharedReferenceCount.ReferenceController = pTVar7;
        if (pFVar29 == (FKeyState *)0x0) {
          pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                            *)&this->KeyStateMap,&local_288);
          pFVar33 = (FKeyState *)&pTVar27->field_0x18;
          if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
            pFVar33 = (FKeyState *)0x0;
          }
        }
        if ((pFVar33 == (FKeyState *)0x0) || (pFVar33->EventCounts[(byte)FVar5].ArrayNum < 1)) {
          bVar18 = false;
        }
        else {
          pTVar28 = pFVar33->EventCounts + (byte)FVar5;
          if (pTVar53 != pTVar28) {
            iVar23 = pTVar28->ArrayNum;
            piVar2 = &(this->EventIndices).ArrayMax;
            pFVar46 = (pTVar28->AllocatorInstance).Data;
            (this->EventIndices).ArrayNum = iVar23;
            if ((iVar23 == 0) && (*piVar2 == 0)) {
              bVar18 = true;
              *piVar2 = 0;
              pFVar48 = local_3b8;
              goto LAB_14893a58b;
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar23,*piVar2,&pTVar53->AllocatorInstance,iVar23,piVar2);
            pFVar48 = local_3b8;
            if (iVar23 != 0) {
              memcpy((pTVar53->AllocatorInstance).Data,pFVar46,(longlong)iVar23 << 2);
              pFVar48 = local_3b8;
            }
          }
          bVar18 = true;
        }
LAB_14893a58b:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        pFVar46 = local_3c0;
        lVar26 = local_3b0;
        if (bVar18) {
          local_270.KeyName = pFVar48->KeyName;
          local_270.KeyDetails.Object = (pFVar48->KeyDetails).Object;
          local_270.KeyDetails.SharedReferenceCount.ReferenceController =
               (pFVar48->KeyDetails).SharedReferenceCount.ReferenceController;
          if (local_270.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_270.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_270.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar18 = IsKeyConsumed(this,&local_270,pFVar29);
          lVar26 = local_3b0;
          pFVar46 = local_3c0;
          if (!bVar18) {
            if ((((byte)local_3c0[local_3b0] & 2) != 0) || (!param_4)) {
              if (((this->EventIndices).ArrayNum < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("EventIndices.Num() > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                                      ,0x622,L""), bVar18)) {
                pcVar14 = (code *)swi(3);
                uVar19 = (*pcVar14)();
                return (bool)uVar19;
              }
              if (((this->EventIndices).ArrayNum < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                uVar19 = (*pcVar14)();
                return (bool)uVar19;
              }
              local_3a8[0] = *(uint *)(pTVar53->AllocatorInstance).Data;
              iVar23 = TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<unsigned_int>
                                 ((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                                   *)&this->TouchEventLocations,local_3a8[0],local_3a8);
              pFVar29 = pFVar45;
              if (iVar23 != -1) {
                pFVar29 = (FKeyState *)
                          (*(longlong *)&this->TouchEventLocations + (longlong)iVar23 * 0x28);
              }
              pFVar33 = (FKeyState *)((longlong)&(pFVar29->RawValue).field0_0x0 + 8);
              if (pFVar29 == (FKeyState *)0x0) {
                pFVar33 = pFVar45;
              }
              if (pFVar33 == (FKeyState *)0x0) {
                uVar57 = 0;
                uVar58 = 0;
                uVar63 = uVar59;
                uVar64 = uVar60;
                uVar55 = uVar61;
                uVar56 = uVar62;
              }
              else {
                local_160 = *(undefined8 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 0x10);
                uVar57 = (undefined4)local_160;
                uVar58 = (undefined4)((ulonglong)local_160 >> 0x20);
                uVar63 = *(undefined4 *)&(pFVar33->RawValue).field0_0x0;
                uVar64 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 4);
                uVar55 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 8);
                uVar56 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 0xc);
              }
              pTVar7 = *(TReferenceControllerBase<1> **)(pFVar46 + lVar26 + 0x10);
              uVar8 = *(undefined8 *)(pFVar46 + lVar26 + 8);
              if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                UNLOCK();
              }
              pTVar9 = *(TReferenceControllerBase<1> **)(pFVar46 + lVar26 + 0x20);
              uVar10 = *(undefined8 *)(pFVar46 + lVar26 + 0x18);
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              iVar23 = UE::Input::NonAxisDelegates.ArrayNum;
              if (((this->EventIndices).ArrayNum < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                uVar19 = (*pcVar14)();
                return (bool)uVar19;
              }
              local_398._0_4_ = *(undefined4 *)(this->EventIndices).AllocatorInstance.Data;
              local_398._4_4_ = iVar23;
              local_398._8_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
              local_398._16_8_ = (TReferenceControllerBase<1> *)0x0;
              local_398._24_8_ = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
              local_398._32_8_ = (TReferenceControllerBase<1> *)0x0;
              local_398._40_8_ = (FInputActionHandlerDynamicSignature *)0x0;
              local_398._48_8_ = (TReferenceControllerBase<1> *)0x0;
              local_398[0x38] = Unbound;
              FInputChord::FInputChord((FInputChord *)(local_398 + 0x48));
              local_308._s_0.X = (double)CONCAT44(uVar64,uVar63);
              local_308._s_0.Y = (double)CONCAT44(uVar56,uVar55);
              local_2e8 = (undefined1  [8])0x0;
              pTStack_2e0 = (TReferenceControllerBase<1> *)0x0;
              local_2d8 = 0;
              pTStack_2d0 = (TReferenceControllerBase<1> *)0x0;
              local_308._s_0.Z = (double)CONCAT44(uVar58,uVar57);
              local_2f0 = local_3c8;
              local_398._112_8_ = uVar8;
              local_398._120_8_ = pTVar7;
              local_398._128_8_ = uVar10;
              local_310 = pTVar9;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              if (((UE::Input::NonAxisDelegates.AllocatorInstance.Data <=
                    (FScriptContainerElement *)local_398) &&
                  ((FScriptContainerElement *)local_398 <
                   UE::Input::NonAxisDelegates.AllocatorInstance.Data +
                   (longlong)UE::Input::NonAxisDelegates.ArrayMax * 0xd8)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar14 = (code *)swi(3);
                uVar19 = (*pcVar14)();
                return (bool)uVar19;
              }
              if (UE::Input::NonAxisDelegates.ArrayNum == UE::Input::NonAxisDelegates.ArrayMax) {
                UE::Input::NonAxisDelegates.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x8d8,&UE::Input::NonAxisDelegates.AllocatorInstance,
                                &UE::Input::NonAxisDelegates.ArrayMax);
              }
              lVar26 = (longlong)UE::Input::NonAxisDelegates.ArrayNum;
              UE::Input::NonAxisDelegates.ArrayNum = UE::Input::NonAxisDelegates.ArrayNum + 1;
              FDelegateDispatchDetails::FDelegateDispatchDetails
                        ((FDelegateDispatchDetails *)
                         (UE::Input::NonAxisDelegates.AllocatorInstance.Data + lVar26 * 0xd8),
                         (FDelegateDispatchDetails *)local_398);
              uVar32 = 1;
              if (1 < (this->EventIndices).ArrayNum) {
                lVar26 = 4;
                do {
                  uVar38 = 0;
                  if ((int)uVar32 < (this->EventIndices).ArrayNum) {
                    uVar38 = ~uVar32 >> 0x1f;
                  }
                  if ((uVar38 == 0) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    uVar19 = (*pcVar14)();
                    return (bool)uVar19;
                  }
                  local_398._0_4_ =
                       *(undefined4 *)((this->EventIndices).AllocatorInstance.Data + lVar26);
                  pFVar29 = pFVar45;
                  if (*(int *)&(this->TouchEventLocations).field_0x8 !=
                      *(int *)&(this->TouchEventLocations).field_0x34) {
                    puVar34 = *(undefined1 **)&(this->TouchEventLocations).field_0x40;
                    puVar37 = &(this->TouchEventLocations).field_0x38;
                    if (puVar34 != (undefined1 *)0x0) {
                      puVar37 = puVar34;
                    }
                    iVar23 = *(int *)(puVar37 +
                                     (ulonglong)
                                     (*(int *)&(this->TouchEventLocations).field_0x48 - 1U &
                                     local_398._0_4_) * 4);
                    if (iVar23 != -1) {
                      do {
                        pFVar29 = (FKeyState *)
                                  (*(longlong *)&this->TouchEventLocations + (longlong)iVar23 * 0x28
                                  );
                        if (*(uint *)(*(longlong *)&this->TouchEventLocations +
                                     (longlong)iVar23 * 0x28) == local_398._0_4_) break;
                        iVar23 = *(int *)((longlong)&(pFVar29->Value).field0_0x0 + 8);
                        pFVar29 = pFVar45;
                      } while (iVar23 != -1);
                    }
                  }
                  pFVar33 = (FKeyState *)((longlong)&(pFVar29->RawValue).field0_0x0 + 8);
                  if (pFVar29 == (FKeyState *)0x0) {
                    pFVar33 = pFVar45;
                  }
                  if (pFVar33 == (FKeyState *)0x0) {
                    uVar57 = 0;
                    uVar58 = 0;
                    uVar63 = uVar59;
                    uVar64 = uVar60;
                    uVar55 = uVar61;
                    uVar56 = uVar62;
                  }
                  else {
                    local_160 = *(undefined8 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 0x10);
                    uVar57 = (undefined4)local_160;
                    uVar58 = (undefined4)((ulonglong)local_160 >> 0x20);
                    uVar63 = *(undefined4 *)&(pFVar33->RawValue).field0_0x0;
                    uVar64 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 4);
                    uVar55 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 8);
                    uVar56 = *(undefined4 *)((longlong)&(pFVar33->RawValue).field0_0x0 + 0xc);
                  }
                  local_308._s_0.X = (double)CONCAT44(uVar64,uVar63);
                  local_308._s_0.Y = (double)CONCAT44(uVar56,uVar55);
                  local_308._s_0.Z = (double)CONCAT44(uVar58,uVar57);
                  if (((UE::Input::NonAxisDelegates.AllocatorInstance.Data <=
                        (FScriptContainerElement *)local_398) &&
                      ((FScriptContainerElement *)local_398 <
                       UE::Input::NonAxisDelegates.AllocatorInstance.Data +
                       (longlong)UE::Input::NonAxisDelegates.ArrayMax * 0xd8)) &&
                     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar18)) {
                    pcVar14 = (code *)swi(3);
                    uVar19 = (*pcVar14)();
                    return (bool)uVar19;
                  }
                  if (UE::Input::NonAxisDelegates.ArrayNum == UE::Input::NonAxisDelegates.ArrayMax)
                  {
                    UE::Input::NonAxisDelegates.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x8d8,&UE::Input::NonAxisDelegates.AllocatorInstance,
                                    &UE::Input::NonAxisDelegates.ArrayMax);
                  }
                  lVar30 = (longlong)UE::Input::NonAxisDelegates.ArrayNum;
                  UE::Input::NonAxisDelegates.ArrayNum = UE::Input::NonAxisDelegates.ArrayNum + 1;
                  FDelegateDispatchDetails::FDelegateDispatchDetails
                            ((FDelegateDispatchDetails *)
                             (UE::Input::NonAxisDelegates.AllocatorInstance.Data + lVar30 * 0xd8),
                             (FDelegateDispatchDetails *)local_398);
                  uVar32 = uVar32 + 1;
                  lVar26 = lVar26 + 4;
                } while ((int)uVar32 < (this->EventIndices).ArrayNum);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_2d0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_2e0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_310);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_398._120_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_398._88_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_398._48_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_398._32_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_398._16_8_);
              pFVar48 = local_3b8;
            }
            lVar26 = local_3b0;
            pFVar46 = local_3c0;
            if (((byte)local_3c0[local_3b0] & 1) != 0) {
              TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                        (&KeysToConsume,pFVar48);
            }
          }
        }
        local_3c8 = local_3c8 + Touch2;
        local_3b8 = pFVar48 + 1;
      } while ((int)local_3c8 < 0xb);
      (this->EventIndices).ArrayNum = 0;
      if ((this->EventIndices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->EventIndices).AllocatorInstance,0,&(this->EventIndices).ArrayMax);
      }
      local_3d0 = local_3d0 + 1;
      pFVar29 = (FKeyState *)(ulonglong)local_3d0;
      local_3b0 = lVar26 + 0x28;
    } while ((int)local_3d0 < (param_1->TouchBindings).ArrayNum);
  }
  local_3d0 = (param_1->GestureBindings).ArrayNum;
  uVar36 = (ulonglong)(int)local_3d0;
  pFVar46 = (param_1->GestureBindings).AllocatorInstance.Data;
  pFVar50 = pFVar46 + uVar36 * 0x40;
  while( true ) {
    if ((param_1->GestureBindings).ArrayNum != (int)uVar36) {
      local_3d8[4] = false;
      `TCheckedPointerIterator<FInputGestureBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3d8 + 4);
    }
    if (pFVar46 == pFVar50) break;
    pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                      *)&this->KeyStateMap,(FKey *)(pFVar46 + 8));
    local_258.KeyName = *(FName *)(pFVar46 + 8);
    pFVar45 = (FKeyState *)&pTVar27->field_0x18;
    if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
      pFVar45 = (FKeyState *)0x0;
    }
    local_258.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x10);
    local_258.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar46 + 0x18);
    if (local_258.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_258.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_258.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = KeyEventOccurred(this,&local_258,IE_Pressed,&this->EventIndices,pFVar45);
    if (bVar18) {
      local_240.KeyName = *(FName *)(pFVar46 + 8);
      local_240.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x10);
      local_240.KeyDetails.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar46 + 0x18);
      if (local_240.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_240.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_240.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar18 = IsKeyConsumed(this,&local_240,pFVar45);
      if ((!bVar18) && (pFVar45 != (FKeyState *)0x0)) {
        if (((this->EventIndices).ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("EventIndices.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                                ,0x641,L""), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        dVar4 = (pFVar45->Value).field0_0x0._s_0.X;
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar46 + 0x28);
        uVar8 = *(undefined8 *)(pFVar46 + 0x20);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar9 = *(TReferenceControllerBase<1> **)(pFVar46 + 0x38);
        uVar10 = *(undefined8 *)(pFVar46 + 0x30);
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar23 = UE::Input::NonAxisDelegates.ArrayNum;
        if (((this->EventIndices).ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        local_158._0_4_ = *(undefined4 *)(this->EventIndices).AllocatorInstance.Data;
        local_158._8_8_ = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
        local_158._48_8_ = (TReferenceControllerBase<1> *)0x0;
        local_158[0x38] = Unbound;
        local_158._4_4_ = iVar23;
        local_158._16_8_ = (TReferenceControllerBase<1> *)0x0;
        local_158._24_8_ = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
        local_158._32_8_ = (TReferenceControllerBase<1> *)0x0;
        local_158._40_8_ = (FInputActionHandlerDynamicSignature *)0x0;
        FInputChord::FInputChord((FInputChord *)(local_158 + 0x48));
        local_158._112_8_ = 0;
        pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
        local_d8 = 0;
        pTStack_d0 = (TReferenceControllerBase<1> *)0x0;
        local_a8._0_8_ = uVar8;
        local_a8._8_8_ = pTVar7;
        local_a8._16_8_ = uVar10;
        local_90 = pTVar9;
        local_88 = (float)dVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (UE::Input::NonAxisDelegates.ArrayNum == UE::Input::NonAxisDelegates.ArrayMax) {
          UE::Input::NonAxisDelegates.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8d8,&UE::Input::NonAxisDelegates.AllocatorInstance,
                          &UE::Input::NonAxisDelegates.ArrayMax);
        }
        lVar26 = (longlong)UE::Input::NonAxisDelegates.ArrayNum;
        UE::Input::NonAxisDelegates.ArrayNum = UE::Input::NonAxisDelegates.ArrayNum + 1;
        FDelegateDispatchDetails::FDelegateDispatchDetails
                  ((FDelegateDispatchDetails *)
                   (UE::Input::NonAxisDelegates.AllocatorInstance.Data + lVar26 * 0xd8),
                   (FDelegateDispatchDetails *)local_158);
        if (((byte)*pFVar46 & 1) != 0) {
          TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                    (&KeysToConsume,(FKey *)(pFVar46 + 8));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_a8._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._88_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._48_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._32_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._16_8_);
      }
    }
    (this->EventIndices).ArrayNum = 0;
    if ((this->EventIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->EventIndices).AllocatorInstance,0,&(this->EventIndices).ArrayMax);
    }
    uVar36 = (ulonglong)local_3d0;
    pFVar46 = pFVar46 + 0x40;
  }
  iVar23 = (param_1->AxisBindings).ArrayNum;
  pFVar43 = (FInputAxisBinding *)(param_1->AxisBindings).AllocatorInstance.Data;
  local_3d8[0] = false;
  pFVar49 = pFVar43 + iVar23;
  while( true ) {
    if ((param_1->AxisBindings).ArrayNum != iVar23) {
      local_3d8[5] = false;
      `TCheckedPointerIterator<FInputAxisBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3d8 + 5);
    }
    if (pFVar43 == pFVar49) break;
    fVar54 = DetermineAxisValue(this,pFVar43,param_4,&KeysToConsume,local_3d8);
    pFVar43->AxisValue = fVar54;
    if ((local_3d8[0] != false) || (UE::Input::AxisEventsCanBeConsumed == false)) {
      pTVar11 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)&pFVar43->AxisDelegate;
      if (pTVar11 == (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
LAB_14893af9d:
        pTVar25 = *(TScriptDelegate<FNotThreadSafeDelegateMode> **)
                   &(pFVar43->AxisDelegate).field_0x10;
        if ((pTVar25 == (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) ||
           (bVar18 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(pTVar25), !bVar18))
        goto LAB_14893b056;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (pTVar11,&local_1b8);
        if (((*(int *)&pTVar11[2].AccessDetector.State == 0) ||
            (aVar12 = pTVar11[1].AccessDetector.State, aVar12 == (atomic<unsigned___int64>)0x0)) ||
           (cVar20 = (**(code **)(*(longlong *)aVar12 + 0x38))(), cVar20 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_1b8);
          goto LAB_14893af9d;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b8);
      }
      lVar26 = *(longlong *)&(pFVar43->AxisDelegate).field_0x8;
      fVar54 = pFVar43->AxisValue;
      uVar8 = *(undefined8 *)&pFVar43->AxisDelegate;
      if (lVar26 != 0) {
        LOCK();
        *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)&(pFVar43->AxisDelegate).field_0x18;
      uVar10 = *(undefined8 *)&(pFVar43->AxisDelegate).field_0x10;
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (UE::Input::AxisDelegates.ArrayNum == UE::Input::AxisDelegates.ArrayMax) {
        UE::Input::AxisDelegates.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&UE::Input::AxisDelegates.AllocatorInstance,
                        &UE::Input::AxisDelegates.ArrayMax);
      }
      FVar40.Data = UE::Input::AxisDelegates.AllocatorInstance.Data;
      lVar31 = (longlong)UE::Input::AxisDelegates.ArrayNum;
      UE::Input::AxisDelegates.ArrayNum = UE::Input::AxisDelegates.ArrayNum + 1;
      *(undefined8 *)(UE::Input::AxisDelegates.AllocatorInstance.Data + lVar31 * 0x28) = uVar8;
      *(longlong *)(FVar40.Data + lVar31 * 0x28 + 8) = lVar26;
      *(undefined8 *)(FVar40.Data + lVar31 * 0x28 + 0x10) = uVar10;
      *(longlong *)(FVar40.Data + lVar31 * 0x28 + 0x18) = lVar30;
      *(float *)(FVar40.Data + lVar31 * 0x28 + 0x20) = fVar54;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
LAB_14893b056:
    pFVar43 = pFVar43 + 1;
  }
  iVar23 = (param_1->AxisKeyBindings).ArrayNum;
  pFVar46 = (param_1->AxisKeyBindings).AllocatorInstance.Data;
  pFVar50 = pFVar46 + (longlong)iVar23 * 0x40;
  while( true ) {
    if ((param_1->AxisKeyBindings).ArrayNum != iVar23) {
      local_3d8[6] = false;
      `TCheckedPointerIterator<FInputAxisKeyBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3d8 + 6);
    }
    if (pFVar46 == pFVar50) break;
    local_228.KeyName = *(FName *)(pFVar46 + 8);
    local_228.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x10);
    local_228.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar46 + 0x18);
    if (local_228.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = IsKeyConsumed(this,&local_228,(FKeyState *)0x0);
    if (bVar18) {
      if (UE::Input::bClearAxisValueIfConsumed != false) {
        *(undefined4 *)(pFVar46 + 4) = 0;
      }
    }
    else {
      if ((param_4) && (((byte)*pFVar46 & 2) == 0)) {
        fVar54 = 0.0;
      }
      else {
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar46 + 0x18);
        local_210.KeyName = *(FName *)(pFVar46 + 8);
        local_210.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x10);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_210.KeyDetails.SharedReferenceCount.ReferenceController = pTVar7;
        if ((2 < (byte)LogInput._0_1_) && (local_210.KeyName == EKeys::AnyKey.KeyName)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
        }
        pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                          *)&this->KeyStateMap,&local_210);
        puVar34 = &pTVar27->field_0x18;
        if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
          puVar34 = (undefined1 *)0x0;
        }
        if (puVar34 == (undefined1 *)0x0) {
          uVar59 = 0;
          uVar60 = 0;
        }
        else {
          uVar59 = (undefined4)*(undefined8 *)(puVar34 + 0x18);
          uVar60 = (undefined4)((ulonglong)*(undefined8 *)(puVar34 + 0x18) >> 0x20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        fVar54 = (float)(double)CONCAT44(uVar60,uVar59);
      }
      *(float *)(pFVar46 + 4) = fVar54;
      if (((byte)*pFVar46 & 1) != 0) {
        TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                  (&KeysToConsume,(FKey *)(pFVar46 + 8));
      }
    }
    pTVar11 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x20);
    if (pTVar11 == (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
LAB_14893b209:
      if ((*(TScriptDelegate<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x30) !=
           (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar18 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             (*(TScriptDelegate<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x30)),
         bVar18)) goto LAB_14893b223;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar11,&local_1a0)
      ;
      if (((*(int *)&pTVar11[2].AccessDetector.State == 0) ||
          (aVar12 = pTVar11[1].AccessDetector.State, aVar12 == (atomic<unsigned___int64>)0x0)) ||
         (cVar20 = (**(code **)(*(longlong *)aVar12 + 0x38))(), cVar20 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1a0);
        goto LAB_14893b209;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a0);
LAB_14893b223:
      lVar26 = *(longlong *)(pFVar46 + 0x28);
      uVar59 = *(undefined4 *)(pFVar46 + 4);
      uVar8 = *(undefined8 *)(pFVar46 + 0x20);
      if (lVar26 != 0) {
        LOCK();
        *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)(pFVar46 + 0x38);
      uVar10 = *(undefined8 *)(pFVar46 + 0x30);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (UE::Input::AxisDelegates.ArrayNum == UE::Input::AxisDelegates.ArrayMax) {
        UE::Input::AxisDelegates.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&UE::Input::AxisDelegates.AllocatorInstance,
                        &UE::Input::AxisDelegates.ArrayMax);
      }
      FVar40.Data = UE::Input::AxisDelegates.AllocatorInstance.Data;
      lVar31 = (longlong)UE::Input::AxisDelegates.ArrayNum;
      UE::Input::AxisDelegates.ArrayNum = UE::Input::AxisDelegates.ArrayNum + 1;
      *(undefined8 *)(UE::Input::AxisDelegates.AllocatorInstance.Data + lVar31 * 0x28) = uVar8;
      *(longlong *)(FVar40.Data + lVar31 * 0x28 + 8) = lVar26;
      *(undefined8 *)(FVar40.Data + lVar31 * 0x28 + 0x10) = uVar10;
      *(longlong *)(FVar40.Data + lVar31 * 0x28 + 0x18) = lVar30;
      *(undefined4 *)(FVar40.Data + lVar31 * 0x28 + 0x20) = uVar59;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pFVar46 = pFVar46 + 0x40;
  }
  iVar23 = (param_1->VectorAxisBindings).ArrayNum;
  pFVar46 = (param_1->VectorAxisBindings).AllocatorInstance.Data;
  pFVar50 = pFVar46 + (longlong)iVar23 * 0x58;
  do {
    if ((param_1->VectorAxisBindings).ArrayNum != iVar23) {
      local_3d8[7] = false;
      `TCheckedPointerIterator<FInputVectorAxisBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_3d8 + 7);
    }
    if (pFVar46 == pFVar50) {
      bVar18 = param_1->bBlockInput;
      if (bVar18 == false) {
        puVar34 = (undefined1 *)0x0;
        if (0 < KeysToConsume.ArrayNum) {
          do {
            uVar38 = (uint)puVar34;
            uVar32 = 0;
            if ((int)uVar38 < KeysToConsume.ArrayNum) {
              uVar32 = ~uVar38 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              uVar19 = (*pcVar14)();
              return (bool)uVar19;
            }
            pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                              *)&this->KeyStateMap,
                             (FKey *)(KeysToConsume.AllocatorInstance.Data +
                                     (longlong)(int)uVar38 * 0x18));
            puVar34 = &pTVar27->field_0x18;
            if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
              puVar34 = (undefined1 *)0x0;
            }
            if (puVar34 != (undefined1 *)0x0) {
              puVar34[0x34] = puVar34[0x34] | 4;
            }
            puVar34 = (undefined1 *)(ulonglong)(uVar38 + 1);
          } while ((int)(uVar38 + 1) < KeysToConsume.ArrayNum);
        }
      }
      if (KeysToConsume.ArrayMax < 0) {
        DestructItems<FKey,int>((FKey *)KeysToConsume.AllocatorInstance.Data,KeysToConsume.ArrayNum)
        ;
        KeysToConsume.ArrayNum = 0;
        if (KeysToConsume.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&KeysToConsume.AllocatorInstance,0,&KeysToConsume.ArrayMax);
        }
      }
      else {
        DestructItems<FKey,int>((FKey *)KeysToConsume.AllocatorInstance.Data,KeysToConsume.ArrayNum)
        ;
        KeysToConsume.ArrayNum = 0;
      }
      if (FoundChords.ArrayMax < 0) {
        DestructItems<FDelegateDispatchDetails,int>
                  ((FDelegateDispatchDetails *)FoundChords.AllocatorInstance.Data,
                   FoundChords.ArrayNum);
        FoundChords.ArrayNum = 0;
        if (FoundChords.ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xd8,8,0,&FoundChords.AllocatorInstance,0,&FoundChords.ArrayMax);
        }
      }
      else {
        DestructItems<FDelegateDispatchDetails,int>
                  ((FDelegateDispatchDetails *)FoundChords.AllocatorInstance.Data,
                   FoundChords.ArrayNum);
        FoundChords.ArrayNum = 0;
      }
      if (UE::Input::bMaintainLegacyDelegateExecutionOrder == false) {
        UE::Input::SortAndExecuteDelegates();
      }
      return bVar18;
    }
    local_1f8.KeyName = *(FName *)(pFVar46 + 0x20);
    local_1f8.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x28);
    local_1f8.KeyDetails.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar46 + 0x30);
    if (local_1f8.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = IsKeyConsumed(this,&local_1f8,(FKeyState *)0x0);
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (!bVar18) {
      if ((param_4) && (((byte)*pFVar46 & 2) == 0)) {
        *(double *)(pFVar46 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(pFVar46 + 0x10) = uVar8;
        *(double *)(pFVar46 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar7 = *(TReferenceControllerBase<1> **)(pFVar46 + 0x30);
        local_1e0.KeyName = *(FName *)(pFVar46 + 0x20);
        local_1e0.KeyDetails.Object = *(FKeyDetails **)(pFVar46 + 0x28);
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1e0.KeyDetails.SharedReferenceCount.ReferenceController = pTVar7;
        if ((2 < (byte)LogInput._0_1_) && (local_1e0.KeyName == EKeys::AnyKey.KeyName)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
        }
        pTVar27 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                          *)&this->KeyStateMap,&local_1e0);
        puVar34 = &pTVar27->field_0x18;
        if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
          puVar34 = (undefined1 *)0x0;
        }
        if (puVar34 == (undefined1 *)0x0) {
          local_160 = 0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
        }
        else {
          puVar35 = (undefined4 *)&pTVar27->field_0x30;
          if (pTVar27 == (TTuple<FKey,FKeyState> *)0x0) {
            puVar35 = (undefined4 *)&DAT_00000018;
          }
          uVar59 = *puVar35;
          uVar60 = puVar35[1];
          uVar61 = puVar35[2];
          uVar62 = puVar35[3];
          uVar63 = (undefined4)*(undefined8 *)(puVar35 + 4);
          uVar64 = (undefined4)((ulonglong)*(undefined8 *)(puVar35 + 4) >> 0x20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        *(undefined4 *)(pFVar46 + 8) = uVar59;
        *(undefined4 *)(pFVar46 + 0xc) = uVar60;
        *(undefined4 *)(pFVar46 + 0x10) = uVar61;
        *(undefined4 *)(pFVar46 + 0x14) = uVar62;
        *(ulonglong *)(pFVar46 + 0x18) = CONCAT44(uVar64,uVar63);
      }
      if (((byte)*pFVar46 & 1) != 0) {
        TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                  (&KeysToConsume,(FKey *)(pFVar46 + 0x20));
      }
    }
    pTVar11 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x38);
    if (pTVar11 == (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
LAB_14893b489:
      if ((*(TScriptDelegate<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x48) !=
           (TScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar18 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             (*(TScriptDelegate<FNotThreadSafeDelegateMode> **)(pFVar46 + 0x48)),
         bVar18)) goto LAB_14893b4a3;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar11,&local_188)
      ;
      if (((*(int *)&pTVar11[2].AccessDetector.State == 0) ||
          (aVar12 = pTVar11[1].AccessDetector.State, aVar12 == (atomic<unsigned___int64>)0x0)) ||
         (cVar20 = (**(code **)(*(longlong *)aVar12 + 0x38))(), cVar20 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_188);
        goto LAB_14893b489;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
LAB_14893b4a3:
      lVar26 = *(longlong *)(pFVar46 + 0x40);
      uVar8 = *(undefined8 *)(pFVar46 + 0x18);
      uVar10 = *(undefined8 *)(pFVar46 + 0x38);
      uVar59 = *(undefined4 *)(pFVar46 + 8);
      uVar60 = *(undefined4 *)(pFVar46 + 0xc);
      uVar61 = *(undefined4 *)(pFVar46 + 0x10);
      uVar62 = *(undefined4 *)(pFVar46 + 0x14);
      if (lVar26 != 0) {
        LOCK();
        *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
        UNLOCK();
      }
      lVar30 = *(longlong *)(pFVar46 + 0x50);
      uVar13 = *(undefined8 *)(pFVar46 + 0x48);
      if (lVar30 != 0) {
        LOCK();
        *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (UE::Input::VectorAxisDelegates.ArrayNum == UE::Input::VectorAxisDelegates.ArrayMax) {
        UE::Input::VectorAxisDelegates.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&UE::Input::VectorAxisDelegates.AllocatorInstance,
                        &UE::Input::VectorAxisDelegates.ArrayMax);
      }
      FVar40.Data = UE::Input::VectorAxisDelegates.AllocatorInstance.Data;
      lVar31 = (longlong)UE::Input::VectorAxisDelegates.ArrayNum * 0x38;
      UE::Input::VectorAxisDelegates.ArrayNum = UE::Input::VectorAxisDelegates.ArrayNum + 1;
      *(undefined8 *)(UE::Input::VectorAxisDelegates.AllocatorInstance.Data + lVar31) = uVar10;
      *(longlong *)(FVar40.Data + lVar31 + 8) = lVar26;
      *(undefined8 *)(FVar40.Data + lVar31 + 0x10) = uVar13;
      *(longlong *)(FVar40.Data + lVar31 + 0x18) = lVar30;
      pFVar3 = FVar40.Data + lVar31 + 0x20;
      *(undefined4 *)pFVar3 = uVar59;
      *(undefined4 *)(pFVar3 + 4) = uVar60;
      *(undefined4 *)(pFVar3 + 8) = uVar61;
      *(undefined4 *)(pFVar3 + 0xc) = uVar62;
      *(undefined8 *)(FVar40.Data + lVar31 + 0x30) = uVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pFVar46 = pFVar46 + 0x58;
  } while( true );
}

// EvaluateInputDelegates @ 14893b7f0

void __thiscall
UPlayerInput::EvaluateInputDelegates
          (UPlayerInput *this,TArray<UInputComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1445,"UPlayerInput::EvaluateInputDelegates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
               ,0x5a5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1445);
  }
  (**(code **)(this->_padding_ + 0x2e0))(this,param_1,param_2,param_3,param_4);
  bVar3 = IsInGameThread();
  if (((((!bVar3) || (UE::Input::AxisDelegates.ArrayNum != 0)) ||
       (UE::Input::VectorAxisDelegates.ArrayNum != 0)) ||
      ((UE::Input::NonAxisDelegates.ArrayNum != 0 || ((this->EventIndices).ArrayNum != 0)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() && !AxisDelegates.Num() && !VectorAxisDelegates.Num() && !NonAxisDelegates.Num() && !EventIndices.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                         ,0x5ac,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = param_1->ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (longlong)(int)uVar7 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar6);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
         (cVar4 = (**(code **)(this->_padding_ + 0x2e8))(this,lVar1,param_4,param_2,param_3),
         cVar4 != '\0')) {
        uVar7 = uVar7 - 1;
        if (-1 < (int)uVar7) {
          lVar6 = (longlong)(int)uVar7 * 8;
          do {
            uVar5 = 0;
            if ((int)uVar7 < param_1->ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(longlong *)((param_1->AllocatorInstance).Data + lVar6) != 0) {
              (**(code **)(this->_padding_ + 0x2f0))(this);
            }
            lVar6 = lVar6 + -8;
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
        }
        break;
      }
      lVar6 = lVar6 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  UE::Input::SortAndExecuteDelegates();
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// EvaluateKeyMapState @ 14893ba50

void __thiscall
UPlayerInput::EvaluateKeyMapState
          (UPlayerInput *this,float param_1,bool param_2,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_3)

{
  FKey *pFVar1;
  int *piVar2;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar3;
  uint *puVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  byte bVar9;
  FKeyDetails *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  FSharedReferencer<1> *pFVar18;
  uint uVar19;
  FKey *this_00;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  FKey local_148;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  FName local_e8;
  FKeyDetails *local_e0;
  TReferenceControllerBase<1> *local_d8;
  FName local_d0;
  FKeyDetails *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FName local_b8;
  FKeyDetails *pFStack_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined1 local_68 [64];
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1275,"UPlayerInput::EvaluateKeyMapState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
               ,0x4fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1275);
  }
  bVar12 = IsInGameThread();
  if (((!bVar12) || (param_3->ArrayNum != 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread() && !KeysWithEvents.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                          ,0x4fe,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar3 = &this->KeyStateMap;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar3);
  local_f0 = 0;
  stack0xfffffffffffffee8 = local_98._16_16_;
  local_128 = (longlong *)local_98._0_8_;
  auStack_120._0_8_ = local_98._8_8_;
  local_108 = local_78;
  pTStack_100 = pTStack_70;
  uVar16 = local_98._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar3;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      bVar12 = false;
      lVar20 = 5;
      this_00 = (FKey *)((longlong)(int)uVar16 * 0x110 + *local_128);
      pFVar1 = this_00 + 1;
      pFVar18 = &this_00[3].KeyDetails.SharedReferenceCount;
      do {
        iVar14 = *(int *)((longlong)&pFVar18->ReferenceController + 4);
        *(undefined4 *)&pFVar18->ReferenceController = 0;
        if (iVar14 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(pFVar18 + -1),0,
                     (int *)((longlong)&pFVar18->ReferenceController + 4));
        }
        pTVar7 = pFVar18[10].ReferenceController;
        pFVar10 = ((TSharedPtr<FKeyDetails,1> *)(pFVar18 + -1))->Object;
        pTVar11 = pFVar18->ReferenceController;
        ((TSharedPtr<FKeyDetails,1> *)(pFVar18 + -1))->Object = *(FKeyDetails **)(pFVar18 + 9);
        pFVar18->ReferenceController = pTVar7;
        pFVar18[9] = (FSharedReferencer<1>)pFVar10;
        pFVar18[10] = (FSharedReferencer<1>)pTVar11;
        if ((!bVar12) && (0 < *(int *)&pFVar18->ReferenceController)) {
          iVar14 = param_3->ArrayNum;
          if (iVar14 == param_3->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          pFVar6 = (param_3->AllocatorInstance).Data;
          param_3->ArrayNum = iVar14 + 1;
          lVar17 = (longlong)iVar14 * 0x20;
          *(FName *)(pFVar6 + lVar17) = this_00->KeyName;
          *(FKeyDetails **)(pFVar6 + lVar17 + 8) = (this_00->KeyDetails).Object;
          pTVar7 = (this_00->KeyDetails).SharedReferenceCount.ReferenceController;
          *(TReferenceControllerBase<1> **)(pFVar6 + lVar17 + 0x10) = pTVar7;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(FKey **)(pFVar6 + lVar17 + 0x18) = pFVar1;
          bVar12 = true;
        }
        pFVar18 = pFVar18 + 2;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if ((*(char *)((longlong)&this_00[3].KeyName.Number + 1) != '\0') ||
         (bVar13 = FKey::ShouldUpdateAxisWithoutSamples(this_00), bVar13)) {
        uVar19 = this_00[3].KeyName.Number;
        if ((uVar19 & 0x70) == 0) {
          pFVar10 = this_00[10].KeyDetails.Object;
          pTVar7 = this_00[10].KeyDetails.SharedReferenceCount.ReferenceController;
          pFVar1->KeyName = this_00[10].KeyName;
          this_00[1].KeyDetails.Object = pFVar10;
          this_00[1].KeyDetails.SharedReferenceCount.ReferenceController = pTVar7;
        }
        else {
          if ((uVar19 & 0x10) != 0) {
            pFVar1->KeyName = this_00[10].KeyName;
          }
          bVar9 = (byte)this_00[3].KeyName.Number >> 4;
          if ((bVar9 & 2) != 0) {
            this_00[1].KeyDetails.Object = this_00[10].KeyDetails.Object;
          }
          if ((bVar9 & 4) != 0) {
            this_00[1].KeyDetails.SharedReferenceCount.ReferenceController =
                 this_00[10].KeyDetails.SharedReferenceCount.ReferenceController;
          }
        }
        if (*(char *)((longlong)&this_00[3].KeyName.Number + 1) == '\0') {
          puVar4 = &this->EventCount;
          *puVar4 = *puVar4 + 1;
          if ((((ulonglong)this_00[4].KeyName <= puVar4) &&
              (puVar4 < (undefined1 *)
                        ((longlong)this_00[4].KeyName +
                        (longlong)*(int *)((longlong)&this_00[4].KeyDetails.Object + 4) * 4))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar14 = *(int *)&this_00[4].KeyDetails.Object;
          piVar2 = (int *)((longlong)&this_00[4].KeyDetails.Object + 4);
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)(this_00 + 4),piVar2);
          }
          *(int *)&this_00[4].KeyDetails.Object = iVar14 + 1;
          *(uint *)((longlong)this_00[4].KeyName + (longlong)iVar14 * 4) = *puVar4;
          if (!bVar12) {
            iVar14 = param_3->ArrayNum;
            if (iVar14 == param_3->ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            pFVar6 = (param_3->AllocatorInstance).Data;
            param_3->ArrayNum = iVar14 + 1;
            lVar20 = (longlong)iVar14 * 0x20;
            *(FName *)(pFVar6 + lVar20) = this_00->KeyName;
            *(FKeyDetails **)(pFVar6 + lVar20 + 8) = (this_00->KeyDetails).Object;
            pTVar7 = (this_00->KeyDetails).SharedReferenceCount.ReferenceController;
            *(TReferenceControllerBase<1> **)(pFVar6 + lVar20 + 0x10) = pTVar7;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(FKey **)(pFVar6 + lVar20 + 0x18) = pFVar1;
          }
        }
      }
      if (((this_00->KeyName == EKeys::MouseX.KeyName) && ((double)pFVar1->KeyName != 0.0)) &&
         (this->SmoothedMouse[0] != 0.0)) {
        this->MouseSamplingTotal = (float)(double)FApp::DeltaTime + this->MouseSamplingTotal;
        this->MouseSamples =
             this->MouseSamples + (uint)*(byte *)((longlong)&this_00[3].KeyName.Number + 1);
      }
      local_148.KeyName = this_00->KeyName;
      local_148.KeyDetails.Object = (this_00->KeyDetails).Object;
      local_148.KeyDetails.SharedReferenceCount.ReferenceController =
           (this_00->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar12 = FKey::IsAxis2D(&local_148);
      if ((bVar12) || (bVar12 = FKey::IsAxis3D(&local_148), bVar12)) {
        local_b8 = pFVar1->KeyName;
        pFStack_b0 = this_00[1].KeyDetails.Object;
        local_a8 = this_00[1].KeyDetails.SharedReferenceCount.ReferenceController;
        pcVar8 = *(code **)(this->_padding_ + 0x318);
        local_d0 = local_148.KeyName;
        local_c8 = local_148.KeyDetails.Object;
        local_c0 = local_148.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar15 = (FName *)(*pcVar8)(this,local_68,&local_d0,&local_b8);
        FVar5 = pFVar15[1];
        this_00[2].KeyName = *pFVar15;
        this_00[2].KeyDetails.Object = (FKeyDetails *)FVar5;
        this_00[2].KeyDetails.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar15[2];
      }
      else {
        FVar5 = pFVar1->KeyName;
        pcVar8 = *(code **)(this->_padding_ + 800);
        local_e8 = local_148.KeyName;
        local_e0 = local_148.KeyDetails.Object;
        local_d8 = local_148.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_148.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        fVar22 = (float)(*pcVar8)(this,&local_e8,(float)(double)FVar5);
        this_00[2].KeyName = (FName)(double)fVar22;
      }
      iVar14 = *(int *)&this_00[3].KeyDetails.SharedReferenceCount.ReferenceController -
               *(int *)&this_00[4].KeyDetails.Object;
      bVar9 = (byte)this_00[3].KeyName.Number;
      if (iVar14 < 0) {
        *(byte *)&this_00[3].KeyName.Number = bVar9 & 0xfe;
      }
      else if (iVar14 < 1) {
        *(byte *)&this_00[3].KeyName.Number = (bVar9 >> 1 ^ bVar9) & 1 ^ bVar9;
      }
      else {
        *(byte *)&this_00[3].KeyName.Number = bVar9 | 1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.KeyDetails.SharedReferenceCount.ReferenceController);
      this_00[10].KeyName.ComparisonIndex = 0;
      this_00[10].KeyName.Number = 0;
      this_00[10].KeyDetails.Object = (FKeyDetails *)0x0;
      this_00[10].KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      puVar4 = &this_00[3].KeyName.Number;
      *(byte *)puVar4 = (byte)*puVar4 & 0x8f;
      *(undefined1 *)((longlong)&this_00[3].KeyName.Number + 1) = 0;
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar16 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar14 = 1;
      }
      else {
        uVar16 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_f8->HashSize < iVar14)) || (iVar14 < local_f8->HashSize)) {
        local_f8->HashSize = iVar14;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  this->EventCount = 0;
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Exec @ 14893c070

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

bool __thiscall
UPlayerInput::Exec(UPlayerInput *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UWorld *pUVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStackY_2a8 [32];
  wchar_t *local_278;
  FKey local_270;
  FKey local_258;
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_278 = param_2;
  bVar3 = FParse::Command(&local_278,L"KEYBINDING",true);
  if ((bVar3) && (bVar3 = FParse::Token(&local_278,local_238,0x100,false,L'\0'), bVar3)) {
    ::FName::FName(&local_258.KeyName,local_238);
    local_258.KeyDetails.Object = (FKeyDetails *)0x0;
    local_258.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    bVar3 = FKey::IsValid(&local_258);
    if ((bVar3) && (uVar7 = 0, (this->DebugExecBindings).ArrayNum != 0)) {
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->DebugExecBindings).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(FName *)((this->DebugExecBindings).AllocatorInstance.Data +
                      (longlong)(int)uVar7 * 0x30) == local_258.KeyName) {
          uVar5 = 0;
          if ((int)uVar7 < (this->DebugExecBindings).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          FOutputDevice::LogfImpl(param_3,L"%s");
          goto LAB_14893c217;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)(this->DebugExecBindings).ArrayNum);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258.KeyDetails.SharedReferenceCount.ReferenceController);
      bVar3 = true;
    }
    else {
LAB_14893c217:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258.KeyDetails.SharedReferenceCount.ReferenceController);
      bVar3 = true;
    }
  }
  else {
    if ((bExecutingBindCommand == false) &&
       (bVar3 = FParse::Token(&local_278,local_238,0x100,false,L'\0'), bVar3)) {
      ::FName::FName(&local_270.KeyName,local_238);
      local_270.KeyDetails.Object = (FKeyDetails *)0x0;
      local_270.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      bVar3 = FKey::IsValid(&local_270);
      if ((bVar3) && (uVar7 = (this->DebugExecBindings).ArrayNum - 1, -1 < (int)uVar7)) {
        lVar9 = (longlong)(int)uVar7 * 0x30;
        do {
          uVar5 = 0;
          if ((int)uVar7 < (this->DebugExecBindings).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(FName *)((this->DebugExecBindings).AllocatorInstance.Data + lVar9) ==
              local_270.KeyName) {
            bExecutingBindCommand = true;
            uVar5 = 0;
            if ((int)uVar7 < (this->DebugExecBindings).ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar1 = (this->DebugExecBindings).AllocatorInstance.Data;
            if (*(int *)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 0x20) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 0x18);
            }
            pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
            bVar3 = ExecInputCommands(this,pUVar6,pwVar8,param_3);
            bExecutingBindCommand = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_270.KeyDetails.SharedReferenceCount.ReferenceController);
            return bVar3;
          }
          lVar9 = lVar9 + -0x30;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.KeyDetails.SharedReferenceCount.ReferenceController);
    }
    bVar3 = false;
  }
  return bVar3;
}

// ExecInputCommands @ 14893c3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPlayerInput::ExecInputCommands
          (UPlayerInput *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  AActor *this_00;
  bool bVar12;
  int iVar13;
  double dVar14;
  wchar_t *local_res18 [2];
  wchar_t *local_40;
  
  bVar12 = false;
  bVar6 = false;
  local_res18[0] = param_2;
  sVar8 = wcslen(param_2);
  iVar13 = (int)sVar8 + 1;
  pwVar9 = FMemory::Malloc((longlong)iVar13 * 2,0);
  bVar5 = FParse::Line(local_res18,pwVar9,iVar13,false);
  if (bVar5) {
    do {
      uVar1 = (this->CurrentEvent).Value;
      local_40 = pwVar9;
      if ((uVar1 == '\0') ||
         ((uVar1 == '\x01' && (bVar6 = FParse::Command(&local_40,L"OnRelease",true), bVar6)))) {
        this_00 = (AActor *)this->_padding_;
        if (this_00 == (AActor *)0x0) {
LAB_14893c4de:
          this_00 = (AActor *)0x0;
          dVar14 = 0.0;
        }
        else {
          pUVar10 = Z_Construct_UClass_APlayerController_NoRegister();
          iVar2 = (int)pUVar10->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar10->_padding_)) goto LAB_14893c4de;
          dVar14 = this_00[1].AttachmentReplication.RotationOffset.Roll;
        }
        cVar7 = (**(code **)(this->_padding_ + 0x278))(this,local_40,param_3);
        pwVar4 = local_40;
        if (cVar7 == '\0') {
          if (this_00 != (AActor *)0x0) {
            pUVar11 = AActor::GetWorld(this_00);
            bVar6 = Exec(this,pUVar11,pwVar4,param_3);
            if (bVar6) {
              bVar6 = true;
              goto LAB_14893c573;
            }
          }
          pwVar4 = local_40;
          bVar6 = bVar12;
          if (dVar14 != 0.0) {
            pcVar3 = *(code **)(*(longlong *)((longlong)dVar14 + 0x28) + 8);
            pUVar11 = AActor::GetWorld(this_00);
            cVar7 = (*pcVar3)((longlong)dVar14 + 0x28,pUVar11,pwVar4);
            if (cVar7 != '\0') {
              bVar6 = true;
            }
          }
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = Exec(this,param_1,local_40,param_3);
        bVar6 = (bool)(bVar12 | bVar6);
      }
LAB_14893c573:
      bVar5 = FParse::Line(local_res18,pwVar9,iVar13,false);
      bVar12 = bVar6;
    } while (bVar5);
  }
  FMemory::Free(pwVar9);
  return bVar6;
}

// FinishProcessingPlayerInput @ 14894db10

void __thiscall UPlayerInput::FinishProcessingPlayerInput(UPlayerInput *this)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)&this->KeyStateMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)&this->KeyStateMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar5 = (longlong)(int)uVar3 * 0x110 + *local_48;
      bVar1 = *(byte *)(lVar5 + 0x4c);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      *(byte *)(lVar5 + 0x4c) = ((bVar1 & 1) * '\x02' ^ bVar1 & 0xfd) & 0xfb;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// FlushPressedActionBindingKeys @ 14894dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPlayerInput::FlushPressedActionBindingKeys(UPlayerInput *this,FName param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  TTuple<FName,UPlayerInput::FActionKeyDetails> *pTVar8;
  TTuple<FKey,FKeyState> *pTVar9;
  FInputKeyEventArgs *pFVar10;
  longlong lVar11;
  undefined8 *puVar12;
  FKey *pFVar13;
  ForElementType<FKey> FVar14;
  ForElementType<FKey> FVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStackY_418 [32];
  undefined1 local_3d8;
  undefined1 local_3d7;
  undefined1 local_3d6 [2];
  undefined8 local_3d4;
  FInputKeyEventArgs local_3b0;
  TArray<FKey,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_368;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  puVar18 = (undefined8 *)0x0;
  local_3d4 = 0;
  if (param_1 == (FName)0x0) {
    return;
  }
  puVar12 = (undefined8 *)this->_padding_;
  if (puVar12 != (undefined8 *)0x0) {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(puVar12[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(puVar12[2] + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) goto LAB_14894dd64;
  }
  puVar12 = puVar18;
LAB_14894dd64:
  if (puVar12 != (undefined8 *)0x0) {
    puVar7 = puVar18;
    if (puVar12[0x6f] != 0) {
      pUVar6 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)(puVar12 + 0x6f),pUVar6);
      if (bVar5) {
        puVar7 = (undefined8 *)puVar12[0x6f];
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      local_368.AllocatorInstance.SecondaryData = (ForElementType<FKey>)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0x20;
      pTVar8 = TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                       *)&this->ActionKeyMap,param_1);
      if ((pTVar8 != (TTuple<FName,UPlayerInput::FActionKeyDetails> *)0x0) &&
         (&pTVar8->field_0x8 != (undefined1 *)0x0)) {
        lVar11 = *(longlong *)&pTVar8->field_0x8;
        iVar2 = *(int *)&pTVar8->field_0x10;
        pFVar13 = (FKey *)(lVar11 + 0x10);
        while( true ) {
          if (*(int *)&pTVar8->field_0x10 != iVar2) {
            local_3d8 = 0;
            `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_3d8);
          }
          if (&pFVar13[-1].KeyDetails ==
              (TSharedPtr<FKeyDetails,1> *)(lVar11 + (longlong)iVar2 * 0x28)) break;
          pTVar9 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                           *)&this->KeyStateMap,pFVar13);
          if (((pTVar9 != (TTuple<FKey,FKeyState> *)0x0) &&
              (pTVar9 != (TTuple<FKey,FKeyState> *)0xffffffffffffffe8)) &&
             ((pTVar9->field_0x4c & 1) != 0)) {
            TArray<FKey,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<FKey_const_&>(&local_368,pFVar13);
          }
          pFVar13 = (FKey *)&pFVar13[1].KeyDetails.SharedReferenceCount;
        }
      }
      iVar2 = local_368.ArrayNum;
      uVar17 = (ulonglong)local_368.ArrayNum;
      uVar16 = local_368.ArrayNum;
      if (0 < local_368.ArrayNum) {
        FVar15 = (ForElementType<FKey>)&local_368;
        if (local_368.AllocatorInstance.SecondaryData != (ForElementType<FKey>)0x0) {
          FVar15 = local_368.AllocatorInstance.SecondaryData;
        }
        bExecutingBindCommand = false;
        FVar14 = (ForElementType<FKey>)&local_368;
        if (local_368.AllocatorInstance.SecondaryData != (ForElementType<FKey>)0x0) {
          FVar14 = local_368.AllocatorInstance.SecondaryData;
        }
        lVar11 = uVar17 * 0x18;
        while( true ) {
          if ((uint)uVar17 != iVar2) {
            local_3d7 = 0;
            `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_3d7);
          }
          lVar3 = this->_padding_;
          if (FVar14 == (ForElementType<FKey>)((longlong)FVar15 + lVar11)) break;
          pFVar10 = FInputKeyEventArgs::CreateSimulated
                              (&local_3b0,(FKey *)FVar14,IE_Released,0.0,-1,INPUTDEVICEID_NONE,false
                               ,(FViewport *)0x0);
          (**(code **)(lVar3 + 0x2b8))(this,pFVar10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b0.Key.KeyDetails.SharedReferenceCount.ReferenceController);
          uVar17 = (ulonglong)(uint)local_368.ArrayNum;
          FVar14 = (ForElementType<FKey>)((longlong)FVar14 + 0x18);
        }
        lVar11 = (**(code **)(lVar3 + 0x180))(this);
        if ((lVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("World",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                               ,0xed,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = local_368.ArrayNum;
        dVar1 = *(double *)(lVar11 + 0x908);
        uVar17 = (ulonglong)local_368.ArrayNum;
        FVar15 = (ForElementType<FKey>)&local_368;
        if (local_368.AllocatorInstance.SecondaryData != (ForElementType<FKey>)0x0) {
          FVar15 = local_368.AllocatorInstance.SecondaryData;
        }
        FVar14 = (ForElementType<FKey>)((longlong)FVar15 + uVar17 * 0x18);
        while( true ) {
          uVar16 = (uint)uVar17;
          if ((uint)uVar17 != iVar2) {
            `TCheckedPointerIterator<FKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_3d6);
            uVar16 = local_368.ArrayNum;
          }
          if (FVar15 == FVar14) break;
          pTVar9 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                           *)&this->KeyStateMap,(FKey *)FVar15);
          puVar12 = (undefined8 *)&pTVar9->field_0x18;
          if (pTVar9 == (TTuple<FKey,FKeyState> *)0x0) {
            puVar12 = puVar18;
          }
          if (puVar12 != (undefined8 *)0x0) {
            *(byte *)((longlong)puVar12 + 0x34) = *(byte *)((longlong)puVar12 + 0x34) & 0xfc;
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *(float *)(puVar12 + 6) = (float)dVar1;
          }
          uVar17 = (ulonglong)(uint)local_368.ArrayNum;
          FVar15 = (ForElementType<FKey>)((longlong)FVar15 + 0x18);
        }
      }
      FVar15 = (ForElementType<FKey>)&local_368;
      if (local_368.AllocatorInstance.SecondaryData != (ForElementType<FKey>)0x0) {
        FVar15 = local_368.AllocatorInstance.SecondaryData;
      }
      DestructItems<FKey,int>((FKey *)FVar15,uVar16);
      if (local_368.AllocatorInstance.SecondaryData != (ForElementType<FKey>)0x0) {
        FMemory::Free((void *)local_368.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// FlushPressedKeys @ 14894e060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPlayerInput::FlushPressedKeys(UPlayerInput *this)

{
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  FKey *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  FName local_res10;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  FString local_1a8;
  longlong *local_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  int iStack_17c;
  longlong local_178;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  int iStack_13c;
  longlong local_138;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_c0;
  FInputKeyEventArgs local_98;
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"UPlayerInput::FlushPressedKeys",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  if (5 < (byte)LogPlayerInput._0_1_) {
    if (this == (UPlayerInput *)0x0) {
      ::FString::FString(&local_1a8,L"None");
    }
    else {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_1a8);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerInput);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  lVar11 = this->_padding_;
  iVar13 = 1;
  if (lVar11 != 0) {
    pUVar9 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) {
      uVar16 = 0;
      uVar10 = uVar16;
      if (*(longlong *)(lVar11 + 0x378) != 0) {
        pUVar9 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar7 = FObjectPtr::IsA((FObjectPtr *)(lVar11 + 0x378),pUVar9);
        if (bVar7) {
          uVar10 = *(ulonglong *)(lVar11 + 0x378);
        }
      }
      if (uVar10 != 0) {
        pTVar1 = &this->KeyStateMap;
        local_1b8.Data = (FScriptContainerElement *)0x0;
        local_1b0 = 0;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_118,
                   (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                    *)pTVar1);
        local_160 = 0;
        stack0xfffffffffffffe78 = local_118._16_16_;
        local_198 = (longlong *)local_118._0_8_;
        auStack_190._0_8_ = local_118._8_8_;
        local_178 = local_f8;
        pTStack_170 = pTStack_f0;
        iVar8 = local_118._28_4_;
        local_168 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)pTVar1;
        if (iVar8 < *(int *)(local_118._16_8_ + 0x18)) {
          do {
            pFVar15 = (FKey *)((longlong)iVar8 * 0x110 + *local_198);
            if ((pFVar15[3].KeyName.Number & 1) != 0) {
              if (((local_1b8.Data <= pFVar15) &&
                  (pFVar15 < (FKey *)(local_1b8.Data + (longlong)local_1b0._4_4_ * 0x18))) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar8 = (int)local_1b0;
              if ((int)local_1b0 == local_1b0._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_1b8,(int *)((longlong)&local_1b0 + 4));
              }
              lVar11 = (longlong)iVar8;
              local_1b0 = CONCAT44(local_1b0._4_4_,iVar8 + 1);
              *(FName *)&local_1b8.Data[lVar11 * 0x18].field_0x0 = pFVar15->KeyName;
              *(FKeyDetails **)(local_1b8.Data + lVar11 * 0x18 + 8) = (pFVar15->KeyDetails).Object;
              pTVar5 = (pFVar15->KeyDetails).SharedReferenceCount.ReferenceController;
              *(TReferenceControllerBase<1> **)(local_1b8.Data + lVar11 * 0x18 + 0x10) = pTVar5;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            uStack_180 = uStack_180 & ~auStack_190._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
            iVar8 = iStack_17c;
          } while (iStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
          if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
            uVar17 = *(int *)&(local_168->Elements).field_0x8 -
                     *(int *)&(local_168->Elements).field_0x34;
            if (uVar17 < 4) {
              iVar8 = 1;
            }
            else {
              uVar10 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
              lVar11 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar8 = 1 << ((byte)lVar11 & 0x1f);
            }
            if (((0 < (int)uVar17) && (local_168->HashSize < iVar8)) ||
               (iVar8 < local_168->HashSize)) {
              local_168->HashSize = iVar8;
              TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              ::Rehash(local_168);
            }
          }
        }
        if (0 < (int)local_1b0) {
          bExecutingBindCommand = false;
          do {
            uVar14 = (uint)uVar16;
            uVar17 = 0;
            if ((int)uVar14 < (int)local_1b0) {
              uVar17 = ~uVar14 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FInputKeyEventArgs::CreateSimulated
                      (&local_98,(FKey *)(local_1b8.Data + (longlong)(int)uVar14 * 0x18),IE_Released
                       ,0.0,1,INPUTDEVICEID_NONE,false,(FViewport *)0x0);
            (**(code **)(this->_padding_ + 0x2b8))(this,&local_98);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.Key.KeyDetails.SharedReferenceCount.ReferenceController);
            uVar16 = (ulonglong)(uVar14 + 1);
          } while ((int)(uVar14 + 1) < (int)local_1b0);
        }
        DestructItems<FKey,int>((FKey *)local_1b8.Data,(int)local_1b0);
        if ((FKey *)local_1b8.Data != (FKey *)0x0) {
          FMemory::Free(local_1b8.Data);
        }
      }
    }
  }
  lVar11 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                         ,0xb2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar4 = *(double *)(lVar11 + 0x908);
  pTVar1 = &this->KeyStateMap;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_e8,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_120 = 0;
  stack0xfffffffffffffeb8 = local_e8._16_16_;
  local_158 = (longlong *)local_e8._0_8_;
  auStack_150._0_8_ = local_e8._8_8_;
  local_138 = local_c8;
  pTStack_130 = pTStack_c0;
  iVar8 = local_e8._28_4_;
  local_128 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (iVar8 < *(int *)(local_e8._16_8_ + 0x18)) {
    do {
      lVar12 = (longlong)iVar8 * 0x110;
      lVar11 = *local_158;
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      pbVar2 = (byte *)(lVar12 + 0x4c + lVar11);
      *pbVar2 = *pbVar2 & 0xfc;
      pbVar2 = (byte *)(lVar12 + 0x4c + lVar11);
      *pbVar2 = *pbVar2 | 8;
      puVar3 = (undefined8 *)(lVar12 + 0x18 + lVar11);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(lVar12 + 0x28 + lVar11) = 0;
      *(float *)(lVar12 + 0x48 + lVar11) = (float)dVar4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      iVar8 = iStack_13c;
    } while (iStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
      uVar17 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      if (3 < uVar17) {
        uVar10 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar17) && (local_128->HashSize < iVar13)) || (iVar13 < local_128->HashSize)) {
        local_128->HashSize = iVar13;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForceRebuildingKeyMaps @ 14894ff30

void __thiscall UPlayerInput::ForceRebuildingKeyMaps(UPlayerInput *this,bool param_1)

{
  int *piVar1;
  TArray<FInputAxisConfigEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  UObject *pUVar7;
  void *_Src;
  FInputAxisKeyMapping *pFVar8;
  FInputActionKeyMapping *pFVar9;
  int iVar10;
  UClass *this_00;
  ForAnyElementType FVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FName local_res8;
  undefined1 local_res10 [8];
  FName local_res18;
  FString local_88;
  FString local_78;
  FString local_68;
  FName local_58;
  undefined8 local_50;
  FSharedReferencer<1> aFStack_48 [2];
  
  if (param_1) {
    this_00 = UInputSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar7 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar7 != (UObject *)0x0) {
      pTVar2 = &this->AxisConfig;
      if ((UObject *)pTVar2 != pUVar7 + 1) {
        iVar6 = *(int *)&pUVar7[1].field_0x8;
        piVar1 = &(this->AxisConfig).ArrayMax;
        _Src = *(void **)(pUVar7 + 1);
        (this->AxisConfig).ArrayNum = iVar6;
        if ((iVar6 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
          if (iVar6 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar6 * 0x18);
          }
        }
      }
      pTVar3 = &this->AxisMappings;
      if ((UObject *)pTVar3 != pUVar7 + 4) {
        DestructItems<FInputAxisKeyMapping,int>
                  ((FInputAxisKeyMapping *)(pTVar3->AllocatorInstance).Data,
                   (this->AxisMappings).ArrayNum);
        iVar6 = *(int *)&pUVar7[4].field_0x8;
        piVar1 = &(this->AxisMappings).ArrayMax;
        pFVar8 = *(FInputAxisKeyMapping **)(pUVar7 + 4);
        (this->AxisMappings).ArrayNum = iVar6;
        if ((iVar6 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
          ConstructItems<FInputAxisKeyMapping,FInputAxisKeyMapping,int>
                    ((pTVar3->AllocatorInstance).Data,pFVar8,iVar6);
        }
      }
      pTVar4 = &this->ActionMappings;
      if (pTVar4 != (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)
                    &pUVar7[3].field_0x18) {
        DestructItems<FInputActionKeyMapping,int>
                  ((FInputActionKeyMapping *)(pTVar4->AllocatorInstance).Data,
                   (this->ActionMappings).ArrayNum);
        iVar6 = *(int *)&pUVar7[3].field_0x20;
        piVar1 = &(this->ActionMappings).ArrayMax;
        pFVar9 = *(FInputActionKeyMapping **)&pUVar7[3].field_0x18;
        (this->ActionMappings).ArrayNum = iVar6;
        if ((iVar6 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
          ConstructItems<FInputActionKeyMapping,FInputActionKeyMapping,int>
                    ((pTVar4->AllocatorInstance).Data,pFVar9,iVar6);
        }
      }
      iVar6 = *(int *)&pUVar7[6].field_0x18;
      puVar12 = *(undefined8 **)&pUVar7[6].field_0x10;
      puVar13 = puVar12 + (longlong)iVar6 * 2;
      while( true ) {
        if (*(int *)&pUVar7[6].field_0x18 != iVar6) {
          `TCheckedPointerIterator<FInputActionSpeechMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (puVar12 == puVar13) break;
        iVar10 = (this->ActionMappings).ArrayNum;
        piVar1 = &(this->ActionMappings).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar4->AllocatorInstance,piVar1);
        }
        (this->ActionMappings).ArrayNum = iVar10 + 1;
        pFVar5 = (pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x28;
        DefaultConstructItems<FInputActionKeyMapping,int>(pFVar5,1);
        *(undefined8 *)pFVar5 = *puVar12;
        ::FName::ToString((FName *)(puVar12 + 1),&local_68);
        ::FName::FName(&local_res8,L"Speech");
        ::FName::ToString(&local_res8,&local_78);
        ::FString::PrintfImpl(&local_88,L"%s_%s");
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar11.Data = local_88.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_58 = local_res18;
        *(FName *)(pFVar5 + 0x10) = local_res18;
        local_50 = 0;
        aFStack_48[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar5 + 0x18 != (FScriptContainerElement *)&local_50) {
          *(undefined8 *)(pFVar5 + 0x18) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar5 + 0x20),aFStack_48);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (aFStack_48[0].ReferenceController);
        puVar12 = puVar12 + 2;
      }
    }
  }
  TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
           *)&this->ActionKeyMap);
  TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
           *)&this->AxisKeyMap);
  TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
           *)&this->AxisProperties);
  this->bKeyMapsBuilt = '\0';
  return;
}

// GetActionsBoundToKey @ 148954a90

void __thiscall
UPlayerInput::GetActionsBoundToKey
          (UPlayerInput *this,UInputComponent *param_1,FKey *param_2,
          TArray<TSharedPtr<FInputActionBinding,1>,TSizedDefaultAllocator<32>_> *param_3)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKey local_28;
  
  UInputComponent::ConditionalBuildKeyMap(param_1,this);
  pTVar2 = (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  local_28.KeyName = param_2->KeyName;
  local_28.KeyDetails.Object = (param_2->KeyDetails).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  UInputComponent::GetActionsBoundToKey(param_1,this,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// GetAxisProperties @ 1489552d0

bool __thiscall
UPlayerInput::GetAxisProperties(UPlayerInput *this,FKey *param_1,FInputAxisProperties *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  FInputAxisProperties *pFVar4;
  
  ConditionalInitAxisProperties(this);
  pFVar4 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,param_1);
  if (pFVar4 != (FInputAxisProperties *)0x0) {
    fVar1 = pFVar4->Sensitivity;
    fVar2 = pFVar4->Exponent;
    uVar3 = *(undefined4 *)&pFVar4->field_0xc;
    param_2->DeadZone = pFVar4->DeadZone;
    param_2->Sensitivity = fVar1;
    param_2->Exponent = fVar2;
    *(undefined4 *)&param_2->field_0xc = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// GetBind @ 148955cc0

FString * __thiscall
UPlayerInput::GetBind(UPlayerInput *this,FString *__return_storage_ptr__,FKey *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong lVar13;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar11 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar11,L"NoDebugExecBindings");
    bDebugExecBindingsAllowed = !bVar4;
    _Init_thread_footer(&::_TSS0);
  }
  if (bDebugExecBindingsAllowed != false) {
    bVar4 = IsCtrlPressed(this);
    bVar5 = IsShiftPressed(this);
    bVar6 = IsAltPressed(this);
    bVar7 = IsCmdPressed(this);
    uVar12 = (this->DebugExecBindings).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 * 0x30;
      do {
        uVar9 = 0;
        if ((int)uVar12 < (this->DebugExecBindings).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar3)();
          return pFVar10;
        }
        pFVar2 = (this->DebugExecBindings).AllocatorInstance.Data;
        if ((((((*(FName *)(pFVar2 + lVar13) == param_1->KeyName) &&
               (((byte)pFVar2[lVar13 + 0x29] & 1) == 0)) &&
              ((FVar1 = pFVar2[lVar13 + 0x28], ((byte)FVar1 & 1) == 0 || (bVar4)))) &&
             ((((byte)FVar1 & 2) == 0 || (bVar5)))) && ((((byte)FVar1 & 4) == 0 || (bVar6)))) &&
           (((((((byte)FVar1 & 8) == 0 || (bVar7)) && ((((byte)FVar1 & 0x10) == 0 || (!bVar4)))) &&
             ((((byte)FVar1 & 0x20) == 0 || (!bVar5)))) &&
            (((((byte)FVar1 & 0x40) == 0 || (!bVar6)) && ((-1 < (char)FVar1 || (!bVar7)))))))) {
          uVar9 = 0;
          if ((int)uVar12 < (this->DebugExecBindings).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar3)();
            return pFVar10;
          }
          ::FString::FString(__return_storage_ptr__,
                             (FString *)
                             ((this->DebugExecBindings).AllocatorInstance.Data +
                             (longlong)(int)uVar12 * 0x30 + 0x18));
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
          return __return_storage_ptr__;
        }
        lVar13 = lVar13 + -0x30;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetChordForKey @ 1489564d0

void __thiscall
UPlayerInput::GetChordForKey
          (UPlayerInput *this,FInputKeyBinding *param_1,bool param_2,
          TArray<FDelegateDispatchDetails,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_4,FKeyState *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ERelationshipType EVar9;
  TTuple<FKey,FKeyState> *pTVar10;
  FInputActionUnifiedDelegate *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  FKey *this_00;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 local_2d4 [4];
  EInputEvent local_2d0;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
  *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  undefined1 *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  uint uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  int local_298;
  FInputKeyBinding local_288;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
  *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  FInputActionUnifiedDelegate local_1f8;
  FKey local_1c0;
  FKey local_1a8;
  FInputActionUnifiedDelegate local_190;
  undefined1 local_158 [136];
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *local_a0;
  TReferenceControllerBase<1> *local_90;
  FInputActionUnifiedDelegate local_78;
  
  bVar6 = false;
  uVar14 = 0;
  uVar8 = 0;
  uVar13 = 0;
  uVar17 = 0;
  if ((param_1->Chord).Key.KeyName == EKeys::AnyKey.KeyName) {
    local_2b8 = &(this->KeyStateMap).field_0x10;
    uStack_2bc = 1;
    uVar16 = *(uint *)&(this->KeyStateMap).field_0x28;
    local_2c8 = &this->KeyStateMap;
    uStack_2ac = uVar13;
    if (uVar16 != 0) {
      puVar19 = *(uint **)&(this->KeyStateMap).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)local_2b8;
      }
      uVar20 = *puVar19;
      uVar21 = uVar14;
      uVar17 = uVar8;
      uVar13 = uVar8;
      while (uVar20 == 0) {
        iVar15 = (int)uVar14;
        uVar17 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)uVar17;
        uVar13 = iVar15 + 1;
        uVar14 = (ulonglong)uVar13;
        uStack_2ac = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_1489565ad;
        uVar20 = puVar19[(longlong)iVar15 + 1];
      }
      uStack_2bc = -uVar20 & uVar20;
      uVar14 = (ulonglong)uStack_2bc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_298 = (int)lVar12;
      uStack_2ac = (uVar17 - 1) + local_298;
      if ((int)uVar16 < (int)uStack_2ac) {
        uStack_2ac = uVar16;
      }
    }
LAB_1489565ad:
    iStack_2a0 = *(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34;
    uVar8 = *(uint *)&(this->KeyStateMap).field_0x28;
    TStack_220._padding_ = CONCAT44(uStack_2bc,uVar13);
    uStack_2b0 = 0xffffffff;
    TStack_220.CurrentBitIndex = uStack_2ac;
    TStack_220.UnvisitedBitMask = 0xffffffff;
    uVar20 = uVar8 & 0xffffffe0;
    iVar15 = (int)uVar8 >> 5;
    TStack_220._28_4_ = uStack_2ac;
    TStack_220.BaseBitIndex = uVar17;
    uStack_200 = CONCAT44(uStack_29c,iStack_2a0);
    uStack_2c0 = uVar13;
    local_2a8 = uVar17;
    uStack_2a4 = uStack_2ac;
    local_228 = local_2c8;
    TStack_220.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2b8;
    if ((((int)uVar8 < 0) || ((int)uVar16 < (int)uVar8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = *(uint *)&(this->KeyStateMap).field_0x28;
    if (uVar8 != uVar17) {
      puVar18 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->KeyStateMap).field_0x10;
      }
      uVar13 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar8 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1489566cc;
        uVar13 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar8 = (uVar20 - 1) + (int)lVar12;
      if ((int)uVar17 < (int)uVar8) {
        uVar8 = uVar17;
      }
    }
LAB_1489566cc:
    while( true ) {
      pTVar5 = local_228;
      if (*(int *)&local_228->field_0x8 - *(int *)&local_228->field_0x34 != (int)uStack_200) {
        `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2d4);
      }
      if (((TStack_220.CurrentBitIndex == uVar8) &&
          (TStack_220.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyStateMap).field_0x10)) &&
         (pTVar5 == &this->KeyStateMap)) break;
      this_00 = (FKey *)(*(longlong *)pTVar5 + (longlong)TStack_220.CurrentBitIndex * 0x110);
      bVar6 = FKey::IsAnalog(this_00);
      if ((!bVar6) && ((this_00[3].KeyName.Number & 4) == 0)) {
        local_288._padding_ = param_1->_padding_;
        local_288.KeyEvent.Value = (param_1->KeyEvent).Value;
        pTVar3 = (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar2 = *(undefined4 *)&(param_1->Chord).field_0x18;
        local_288.Chord._24_4_ =
             (ZPULL(uVar2,0,1) ^ local_288.Chord._24_4_) & 1 ^ local_288.Chord._24_4_;
        local_288.Chord._24_4_ = (local_288.Chord._24_4_ ^ uVar2) & 2 ^ local_288.Chord._24_4_;
        local_288.Chord._24_4_ = (local_288.Chord._24_4_ ^ uVar2) & 4 ^ local_288.Chord._24_4_;
        local_288.Chord._24_4_ = (local_288.Chord._24_4_ ^ uVar2) & 8 ^ local_288.Chord._24_4_;
        local_288.KeyDelegate.FuncDelegate.Object = (param_1->KeyDelegate).FuncDelegate.Object;
        local_288.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController =
             (param_1->KeyDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
        if (local_288.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_288.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_288.KeyDelegate.FuncDelegateWithKey.Object =
             (param_1->KeyDelegate).FuncDelegateWithKey.Object;
        local_288.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
             (param_1->KeyDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
        if (local_288.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_288.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.
                     ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_288.KeyDelegate.FuncDynDelegate.Object = (param_1->KeyDelegate).FuncDynDelegate.Object
        ;
        local_288.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController =
             (param_1->KeyDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
        if (local_288.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_288.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController
                     )->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_288.KeyDelegate.BoundDelegateType = (param_1->KeyDelegate).BoundDelegateType;
        local_288.Chord.Key.KeyDetails.Object = (this_00->KeyDetails).Object;
        local_288.Chord.Key.KeyName = this_00->KeyName;
        local_288.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController =
             (this_00->KeyDetails).SharedReferenceCount.ReferenceController;
        if (local_288.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_288.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        GetChordForKey(this,&local_288,param_2,param_3,param_4,(FKeyState *)(this_00 + 1));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.KeyDelegate.FuncDynDelegate.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.KeyDelegate.FuncDelegateWithKey.SharedReferenceCount.
                   ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.KeyDelegate.FuncDelegate.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.Chord.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
      TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
    }
  }
  else {
    if (param_5 == (FKeyState *)0x0) {
      pTVar10 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                        *)&this->KeyStateMap,&(param_1->Chord).Key);
      param_5 = (FKeyState *)&pTVar10->field_0x18;
      if (pTVar10 == (TTuple<FKey,FKeyState> *)0x0) {
        param_5 = (FKeyState *)0x0;
      }
    }
    local_1c0.KeyName = (param_1->Chord).Key.KeyName;
    local_1c0.KeyDetails.Object = (param_1->Chord).Key.KeyDetails.Object;
    local_1c0.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_1c0.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c0.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = IsKeyConsumed(this,&local_1c0,param_5);
    if (bVar7) goto LAB_148956e3a;
    if ((((((param_1->Chord).bAlt == 0) || (bVar6 = IsAltPressed(this), bVar6)) &&
         (((param_1->Chord).bCtrl == 0 || (bVar6 = IsCtrlPressed(this), bVar6)))) &&
        (((param_1->Chord).bShift == 0 || (bVar6 = IsShiftPressed(this), bVar6)))) &&
       (((param_1->Chord).bCmd == 0 || (bVar6 = IsCmdPressed(this), bVar6)))) {
      local_1a8.KeyName = (param_1->Chord).Key.KeyName;
      bVar1 = (param_1->KeyEvent).Value;
      local_1a8.KeyDetails.Object = (param_1->Chord).Key.KeyDetails.Object;
      local_1a8.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_1->Chord).Key.KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar6 = KeyEventOccurred(this,&local_1a8,(uint)bVar1,&this->EventIndices,param_5);
      if (bVar6) {
        uVar16 = param_3->ArrayNum;
joined_r0x00014895699b:
        while (uVar16 = uVar16 - 1, -1 < (int)uVar16) {
          uVar20 = uVar17;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar20 = ~uVar16 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          EVar9 = FInputChord::GetRelationship
                            (&param_1->Chord,
                             (FInputChord *)
                             ((param_3->AllocatorInstance).Data + (ulonglong)uVar16 * 0xd8 + 0x48));
          if (EVar9 != Masks) goto LAB_148956a6d;
          uVar20 = uVar13;
          if ((int)uVar16 < param_3->ArrayNum) {
            uVar20 = ~uVar16 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FDelegateDispatchDetails,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (param_3,uVar16);
        }
        if (((this->EventIndices).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("EventIndices.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                               ,0x476,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_2d0 = (EInputEvent)(param_1->KeyEvent).Value;
        if ((param_2) && ((param_1->_padding_ & 2U) == 0)) {
          local_190.BoundDelegateType = Unbound;
          pFVar11 = &local_190;
          local_190.FuncDelegate.Object =
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
          local_190.FuncDelegate.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_190.FuncDelegateWithKey.Object =
               (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
          local_190.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_190.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
          local_190.FuncDynDelegate.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          uVar13 = uVar17;
          uVar16 = 1;
        }
        else {
          local_1f8.FuncDelegate.Object = (param_1->KeyDelegate).FuncDelegate.Object;
          local_1f8.FuncDelegate.SharedReferenceCount.ReferenceController =
               (param_1->KeyDelegate).FuncDelegate.SharedReferenceCount.ReferenceController;
          if (local_1f8.FuncDelegate.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1f8.FuncDelegate.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(local_1f8.FuncDelegate.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1f8.FuncDelegateWithKey.Object = (param_1->KeyDelegate).FuncDelegateWithKey.Object;
          local_1f8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
               (param_1->KeyDelegate).FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
          if (local_1f8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1f8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1f8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1f8.FuncDynDelegate.Object = (param_1->KeyDelegate).FuncDynDelegate.Object;
          local_1f8.FuncDynDelegate.SharedReferenceCount.ReferenceController =
               (param_1->KeyDelegate).FuncDynDelegate.SharedReferenceCount.ReferenceController;
          if (local_1f8.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1f8.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1f8.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1f8.BoundDelegateType = (param_1->KeyDelegate).BoundDelegateType;
          pFVar11 = &local_1f8;
          uVar13 = 2;
          uVar16 = uVar8;
        }
        pFVar11 = FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(&local_78,pFVar11);
        uVar20 = param_3->ArrayNum;
        if (((this->EventIndices).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FDelegateDispatchDetails::FDelegateDispatchDetails
                  ((FDelegateDispatchDetails *)local_158,
                   *(uint *)(this->EventIndices).AllocatorInstance.Data,uVar20,&param_1->Chord,
                   pFVar11,local_2d0,(FInputActionBinding *)0x0);
        if (uVar13 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f8.FuncDynDelegate.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f8.FuncDelegateWithKey.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f8.FuncDelegate.SharedReferenceCount.ReferenceController);
        }
        if (uVar16 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190.FuncDynDelegate.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190.FuncDelegateWithKey.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190.FuncDelegate.SharedReferenceCount.ReferenceController);
        }
        uVar13 = (this->EventIndices).ArrayNum - 1;
        uVar21 = uVar14;
        if (0 < (int)uVar13) {
          do {
            uVar20 = (uint)uVar14;
            uVar16 = uVar8;
            if ((int)uVar20 < (this->EventIndices).ArrayNum) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_158._0_4_ =
                 *(undefined4 *)((this->EventIndices).AllocatorInstance.Data + uVar21 * 4);
            iVar15 = param_3->ArrayNum;
            if (iVar15 == param_3->ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8d8,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar15 + 1;
            FDelegateDispatchDetails::FDelegateDispatchDetails
                      ((FDelegateDispatchDetails *)
                       ((param_3->AllocatorInstance).Data + (longlong)iVar15 * 0xd8),
                       (FDelegateDispatchDetails *)local_158);
            uVar14 = (ulonglong)(uVar20 + 1);
            uVar21 = uVar21 + 1;
          } while ((longlong)uVar21 < (longlong)(int)uVar13);
        }
        if ((int)uVar13 < (this->EventIndices).ArrayNum) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_158._0_4_ =
             *(undefined4 *)
              ((this->EventIndices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
        iVar15 = param_3->ArrayNum;
        if (iVar15 == param_3->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8d8,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar15 + 1;
        FDelegateDispatchDetails::FDelegateDispatchDetails
                  ((FDelegateDispatchDetails *)
                   ((param_3->AllocatorInstance).Data + (longlong)iVar15 * 0xd8),
                   (FDelegateDispatchDetails *)local_158);
        bVar6 = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._120_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._88_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._48_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._32_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_158._16_8_);
        goto LAB_148956e06;
      }
    }
  }
  bVar6 = false;
  goto LAB_148956e3a;
LAB_148956a6d:
  if (EVar9 == Masked) goto LAB_148956e03;
  goto joined_r0x00014895699b;
LAB_148956e03:
  bVar6 = false;
LAB_148956e06:
  (this->EventIndices).ArrayNum = 0;
  if ((this->EventIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EventIndices).AllocatorInstance,0,&(this->EventIndices).ArrayMax);
  }
LAB_148956e3a:
  if (((param_1->_padding_ & 1U) != 0) &&
     ((bVar6 || (((param_1->Chord).bShift == 0 &&
                  ((param_1->Chord).bCtrl == 0 &&
                  ((param_1->Chord).bAlt == 0 && (param_1->Chord).bCmd == 0)) &&
                 ((param_1->KeyEvent).Value != '\x03')))))) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
              (param_4,&(param_1->Chord).Key);
  }
  return;
}

// GetChordsForAction @ 148956ea0

void __thiscall
UPlayerInput::GetChordsForAction
          (UPlayerInput *this,FInputActionBinding *param_1,bool param_2,
          TArray<FDelegateDispatchDetails,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_4)

{
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *this_00;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  FInputActionKeyMapping *pFVar7;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar8;
  bool bVar9;
  TTuple<FName,UPlayerInput::FActionKeyDetails> *pTVar10;
  TTuple<FKey,FKeyState> *pTVar11;
  longlong lVar12;
  int iVar13;
  FKey *this_01;
  FKeyState *pFVar14;
  uint uVar15;
  FInputActionKeyMapping *pFVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_138;
  undefined1 local_137 [3];
  uint local_134;
  FInputActionKeyMapping local_130;
  int local_108;
  int local_104;
  longlong *local_100;
  FInputActionKeyMapping *local_f8;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *local_f0
  ;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *local_c0
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FKey local_90;
  FKeyDetails *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined4 local_4c;
  
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))();
  }
  pTVar10 = TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                    *)&this->ActionKeyMap,param_1->ActionName);
  local_100 = (longlong *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,UPlayerInput::FActionKeyDetails> *)0x0) {
    local_100 = (longlong *)0x0;
  }
  if (local_100 != (longlong *)0x0) {
    local_134 = *(uint *)(local_100 + 1);
    uVar18 = (ulonglong)(int)local_134;
    pFVar16 = (FInputActionKeyMapping *)*local_100;
    local_f8 = pFVar16 + uVar18;
    while( true ) {
      pFVar7 = local_f8;
      if ((int)local_100[1] != (int)uVar18) {
        local_138 = 0;
        `TCheckedPointerIterator<FInputActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_138);
      }
      iVar17 = 0;
      if (pFVar16 == pFVar7) break;
      this_00 = &this->KeyStateMap;
      if ((pFVar16->Key).KeyName == EKeys::AnyKey.KeyName) {
        iVar2 = *(int *)&(this->KeyStateMap).field_0x28;
        puVar1 = &(this->KeyStateMap).field_0x10;
        uStack_e4 = 1;
        iStack_d4 = iVar17;
        local_d0 = iVar17;
        if (iVar2 != 0) {
          puVar4 = *(uint **)&(this->KeyStateMap).field_0x20;
          puVar20 = (uint *)puVar1;
          if (puVar4 != (uint *)0x0) {
            puVar20 = puVar4;
          }
          uVar15 = *puVar20;
          while (uVar15 == 0) {
            lVar12 = (longlong)iVar17;
            local_d0 = local_d0 + 0x20;
            iVar17 = iVar17 + 1;
            iStack_d4 = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148956ffe;
            uVar15 = puVar20[lVar12 + 1];
          }
          uStack_e4 = -uVar15 & uVar15;
          uVar18 = (ulonglong)uStack_e4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_108 = (int)lVar12;
          iStack_d4 = local_d0 + -1 + local_108;
          if (iVar2 < iStack_d4) {
            iStack_d4 = iVar2;
          }
        }
LAB_148956ffe:
        uVar15 = *(uint *)&(this->KeyStateMap).field_0x28;
        uStack_cc = local_4c;
        uVar21 = uVar15 & 0xffffffe0;
        iStack_c8 = *(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34
        ;
        TStack_b8._padding_ = CONCAT44(uStack_e4,iVar17);
        uStack_d8 = 0xffffffff;
        TStack_b8.CurrentBitIndex = iStack_d4;
        TStack_b8.UnvisitedBitMask = 0xffffffff;
        iVar13 = (int)uVar15 >> 5;
        TStack_b8._28_4_ = local_4c;
        TStack_b8.BaseBitIndex = local_d0;
        uStack_98 = CONCAT44(uStack_c4,iStack_c8);
        local_f0 = this_00;
        iStack_e8 = iVar17;
        local_e0 = puVar1;
        local_c0 = this_00;
        TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(uint *)&(this->KeyStateMap).field_0x28;
        if (uVar15 != uVar3) {
          puVar5 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
          puVar19 = puVar1;
          if (puVar5 != (undefined1 *)0x0) {
            puVar19 = puVar5;
          }
          uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar13 * 4);
          while (uVar15 == 0) {
            lVar12 = (longlong)iVar13;
            uVar21 = uVar21 + 0x20;
            iVar13 = iVar13 + 1;
            uVar15 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_148957110;
            uVar15 = *(uint *)(puVar19 + lVar12 * 4 + 4);
          }
          uVar18 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_104 = (int)lVar12;
          uVar15 = local_104 + -1 + uVar21;
          if ((int)uVar3 < (int)uVar15) {
            uVar15 = uVar3;
          }
        }
LAB_148957110:
        while( true ) {
          pTVar8 = local_c0;
          if (*(int *)(&local_c0->field_0x0 + 8) - *(int *)(&local_c0->field_0x0 + 0x34) !=
              (int)uStack_98) {
            local_137[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_137);
          }
          if (((TStack_b8.CurrentBitIndex == uVar15) &&
              (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar8 == this_00)) break;
          this_01 = (FKey *)(*(longlong *)&pTVar8->field_0x0 +
                            (longlong)TStack_b8.CurrentBitIndex * 0x110);
          bVar9 = FKey::IsAnalog(this_01);
          if ((!bVar9) && ((this_01[3].KeyName.Number & 4) == 0)) {
            local_130.ActionName = pFVar16->ActionName;
            local_130._8_1_ = pFVar16->field_0x8 & 0xf | local_130._8_1_ & 0xf0;
            local_78 = (pFVar16->Key).KeyDetails.Object;
            pTStack_70 = (pFVar16->Key).KeyDetails.SharedReferenceCount.ReferenceController;
            if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_70->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_130.Key.KeyName = this_01->KeyName;
            local_130.Key.KeyDetails.Object = (this_01->KeyDetails).Object;
            local_130.Key.KeyDetails.SharedReferenceCount.ReferenceController =
                 (this_01->KeyDetails).SharedReferenceCount.ReferenceController;
            if (local_130.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_130.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_130.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_70);
            GetChordsForKeyMapping
                      (this,&local_130,param_1,param_2,param_3,param_4,(FKeyState *)(this_01 + 1));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_130.Key.KeyDetails.SharedReferenceCount.ReferenceController);
          }
          TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        }
      }
      else {
        pTVar11 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                          *)this_00,&pFVar16->Key);
        pFVar14 = (FKeyState *)&pTVar11->field_0x18;
        if (pTVar11 == (TTuple<FKey,FKeyState> *)0x0) {
          pFVar14 = (FKeyState *)0x0;
        }
        local_90.KeyName = (pFVar16->Key).KeyName;
        local_90.KeyDetails.Object = (pFVar16->Key).KeyDetails.Object;
        local_90.KeyDetails.SharedReferenceCount.ReferenceController =
             (pFVar16->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_90.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_90.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_90.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar9 = IsKeyConsumed(this,&local_90,pFVar14);
        if (!bVar9) {
          GetChordsForKeyMapping(this,pFVar16,param_1,param_2,param_3,param_4,pFVar14);
        }
      }
      pFVar16 = pFVar16 + 1;
      uVar18 = (ulonglong)local_134;
    }
  }
  return;
}

// GetChordsForKeyMapping @ 148957330

void __thiscall
UPlayerInput::GetChordsForKeyMapping
          (UPlayerInput *this,FInputActionKeyMapping *param_1,FInputActionBinding *param_2,
          bool param_3,TArray<FDelegateDispatchDetails,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_5,FKeyState *param_6)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ERelationshipType EVar10;
  uint uVar11;
  int iVar12;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> **ppTVar13;
  FInputActionHandlerDynamicSignature **ppFVar14;
  uint uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  uint uVar18;
  FInputChord local_208;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  FInputActionHandlerDynamicSignature *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  EBoundDelegate local_1b8;
  FKey local_1b0;
  FInputActionUnifiedDelegate local_198;
  undefined8 local_160;
  TReferenceControllerBase<1> *pTStack_158;
  TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *local_150;
  TReferenceControllerBase<1> *pTStack_148;
  FInputActionHandlerDynamicSignature *local_140;
  TReferenceControllerBase<1> *pTStack_138;
  undefined1 local_130;
  undefined1 local_128 [136];
  TReferenceControllerBase<1> *local_a0;
  TReferenceControllerBase<1> *local_70;
  TReferenceControllerBase<1> *local_60;
  
  bVar8 = false;
  if ((param_1->bAlt == '\0') || (bVar7 = IsAltPressed(this), bVar7)) {
    if ((((param_1->bCtrl == '\0') || (bVar8 = IsCtrlPressed(this), bVar8)) &&
        ((param_1->bShift == 0 || (bVar8 = IsShiftPressed(this), bVar8)))) &&
       ((param_1->bCmd == '\0' || (bVar8 = IsCmdPressed(this), bVar8)))) {
      local_1b0.KeyName = (param_1->Key).KeyName;
      bVar1 = (param_2->KeyEvent).Value;
      local_1b0.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
      local_1b0.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_1b0.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1b0.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b0.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = KeyEventOccurred(this,&local_1b0,(uint)bVar1,&this->EventIndices,param_6);
      if (bVar8) {
        local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController =
             (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        local_208.Key.KeyName = (param_1->Key).KeyName;
        local_208.Key.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
        if (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        local_208.bCmd = param_1->bCmd;
        local_208.bAlt = param_1->bAlt;
        local_208.bCtrl = param_1->bCtrl;
        local_208.bShift = param_1->bShift;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController);
        uVar15 = param_4->ArrayNum;
        do {
          while( true ) {
            uVar15 = uVar15 - 1;
            if ((int)uVar15 < 0) {
              if (((this->EventIndices).ArrayNum < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("EventIndices.Num() > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                                     ,0x3ff,L""), bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar1 = (param_2->KeyEvent).Value;
              if ((param_3) && ((param_2->_padding_ & 2U) == 0)) {
                local_130 = 0;
                ppFVar14 = &local_140;
                bVar8 = false;
                ppTVar13 = &local_150;
                local_198.BoundDelegateType = Unbound;
                local_198.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
                local_160 = 0;
                pTStack_158 = (TReferenceControllerBase<1> *)0x0;
                local_198.FuncDelegateWithKey.Object =
                     (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
                local_150 = (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
                pTStack_148 = (TReferenceControllerBase<1> *)0x0;
                local_140 = (FInputActionHandlerDynamicSignature *)0x0;
                pTStack_138 = (TReferenceControllerBase<1> *)0x0;
                local_198.FuncDelegate.Object =
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
                local_198.FuncDelegate.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                bVar7 = true;
              }
              else {
                local_1e0 = (param_2->ActionDelegate).FuncDelegate.SharedReferenceCount.
                            ReferenceController;
                local_1e8 = (param_2->ActionDelegate).FuncDelegate.Object;
                if (local_1e0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_1e0->SharedReferenceCount =
                       (atomic<int>)((int)local_1e0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_1d0 = (param_2->ActionDelegate).FuncDelegateWithKey.SharedReferenceCount.
                            ReferenceController;
                local_198.FuncDelegateWithKey.Object =
                     (param_2->ActionDelegate).FuncDelegateWithKey.Object;
                if (local_1d0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_1d0->SharedReferenceCount =
                       (atomic<int>)((int)local_1d0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_1c0 = (param_2->ActionDelegate).FuncDynDelegate.SharedReferenceCount.
                            ReferenceController;
                local_198.FuncDynDelegate.Object = (param_2->ActionDelegate).FuncDynDelegate.Object;
                local_1c8 = local_198.FuncDynDelegate.Object;
                if (local_1c0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_1c0->SharedReferenceCount =
                       (atomic<int>)((int)local_1c0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_198.BoundDelegateType = (param_2->ActionDelegate).BoundDelegateType;
                ppFVar14 = &local_1c8;
                local_1b8 = local_198.BoundDelegateType;
                local_198.FuncDelegate.Object = local_1e8;
                ppTVar13 = &local_1d8;
                local_198.FuncDelegate.SharedReferenceCount.ReferenceController = local_1e0;
                bVar8 = true;
                local_1d8 = local_198.FuncDelegateWithKey.Object;
                bVar7 = false;
                if (local_1e0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_1e0->SharedReferenceCount =
                       (atomic<int>)((int)local_1e0->SharedReferenceCount + 1);
                  UNLOCK();
                  bVar7 = false;
                }
              }
              local_198.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)ppTVar13[1];
              if ((TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
                  local_198.FuncDelegateWithKey.SharedReferenceCount.ReferenceController !=
                  (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0) {
                LOCK();
                *(int *)&((TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
                         local_198.FuncDelegateWithKey.SharedReferenceCount.ReferenceController)->
                         field_0x8 =
                     *(int *)&((TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)
                              local_198.FuncDelegateWithKey.SharedReferenceCount.ReferenceController
                              )->field_0x8 + 1;
                UNLOCK();
              }
              local_198.FuncDynDelegate.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)ppFVar14[1];
              if ((FInputActionHandlerDynamicSignature *)
                  local_198.FuncDynDelegate.SharedReferenceCount.ReferenceController !=
                  (FInputActionHandlerDynamicSignature *)0x0) {
                LOCK();
                *(int *)&((FInputActionHandlerDynamicSignature *)
                         local_198.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                         field_0x8 =
                     *(int *)&((FInputActionHandlerDynamicSignature *)
                              local_198.FuncDynDelegate.SharedReferenceCount.ReferenceController)->
                              field_0x8 + 1;
                UNLOCK();
              }
              uVar15 = param_4->ArrayNum;
              if (((this->EventIndices).ArrayNum < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FDelegateDispatchDetails::FDelegateDispatchDetails
                        ((FDelegateDispatchDetails *)local_128,
                         *(uint *)(this->EventIndices).AllocatorInstance.Data,uVar15,&local_208,
                         &local_198,(uint)bVar1,param_2);
              if (bVar8) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1c0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1d0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_1e0);
              }
              if (bVar7) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_138);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_148);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_158);
              }
              uVar15 = 0;
              uVar18 = (this->EventIndices).ArrayNum - 1;
              if (0 < (int)uVar18) {
                lVar17 = 0;
                do {
                  uVar11 = 0;
                  if ((int)uVar15 < (this->EventIndices).ArrayNum) {
                    uVar11 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_128._0_4_ =
                       *(undefined4 *)((this->EventIndices).AllocatorInstance.Data + lVar17 * 4);
                  iVar12 = param_4->ArrayNum;
                  if (iVar12 == param_4->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8d8,&param_4->AllocatorInstance,&param_4->ArrayMax);
                  }
                  param_4->ArrayNum = iVar12 + 1;
                  FDelegateDispatchDetails::FDelegateDispatchDetails
                            ((FDelegateDispatchDetails *)
                             ((param_4->AllocatorInstance).Data + (longlong)iVar12 * 0xd8),
                             (FDelegateDispatchDetails *)local_128);
                  uVar15 = uVar15 + 1;
                  lVar17 = lVar17 + 1;
                } while (lVar17 < (int)uVar18);
              }
              uVar15 = 0;
              if ((int)uVar18 < (this->EventIndices).ArrayNum) {
                uVar15 = ~uVar18 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_128._0_4_ =
                   *(undefined4 *)
                    ((this->EventIndices).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
              iVar12 = param_4->ArrayNum;
              if (iVar12 == param_4->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x8d8,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar12 + 1;
              FDelegateDispatchDetails::FDelegateDispatchDetails
                        ((FDelegateDispatchDetails *)
                         ((param_4->AllocatorInstance).Data + (longlong)iVar12 * 0xd8),
                         (FDelegateDispatchDetails *)local_128);
              bVar8 = true;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_60);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_70);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_128._120_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_128._88_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_128._48_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_128._32_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_128._16_8_);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController);
              goto LAB_14895795b;
            }
            uVar18 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar18 = ~uVar15 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            EVar10 = FInputChord::GetRelationship
                               (&local_208,
                                (FInputChord *)
                                ((param_4->AllocatorInstance).Data + (ulonglong)uVar15 * 0xd8 + 0x48
                                ));
            if (EVar10 != Masks) break;
            uVar18 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar18 = ~uVar15 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TArray<FDelegateDispatchDetails,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (param_4,uVar15);
          }
        } while (EVar10 != Masked);
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.Key.KeyDetails.SharedReferenceCount.ReferenceController);
        goto LAB_14895795b;
      }
    }
    bVar8 = false;
  }
LAB_14895795b:
  if (((param_2->_padding_ & 1U) != 0) &&
     ((bVar8 || ((param_1->bShift == '\0' &&
                  (param_1->bCtrl == '\0' && (param_1->bAlt == '\0' && param_1->bCmd == '\0')) &&
                 ((param_2->KeyEvent).Value != '\x03')))))) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(param_5,&param_1->Key);
  }
  (this->EventIndices).ArrayNum = 0;
  if ((this->EventIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EventIndices).AllocatorInstance,0,&(this->EventIndices).ArrayMax);
  }
  return;
}

// GetExecBind @ 148958940

FKeyBind * __thiscall
UPlayerInput::GetExecBind(UPlayerInput *this,FKeyBind *__return_storage_ptr__,FString *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FKeyBind *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = 0;
  __return_storage_ptr__->bDisabled = '\0';
  (__return_storage_ptr__->Key).KeyName.ComparisonIndex = 0;
  (__return_storage_ptr__->Key).KeyName.Number = 0;
  (__return_storage_ptr__->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Command).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Command).Data.ArrayNum = 0;
  (__return_storage_ptr__->Command).Data.ArrayMax = 0;
  puVar1 = &__return_storage_ptr__->field_0x28;
  __return_storage_ptr__->Control = '\0';
  __return_storage_ptr__->bIgnoreCmd = '\0';
  __return_storage_ptr__->bIgnoreAlt = '\0';
  __return_storage_ptr__->bIgnoreShift = '\0';
  __return_storage_ptr__->bIgnoreCtrl = '\0';
  __return_storage_ptr__->Cmd = '\0';
  __return_storage_ptr__->Alt = '\0';
  __return_storage_ptr__->Shift = '\0';
  while( true ) {
    if ((int)uVar8 < 0) {
      return __return_storage_ptr__;
    }
    if ((this->DebugExecBindings).ArrayNum <= (int)uVar8) {
      return __return_storage_ptr__;
    }
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FKeyBind *)(*pcVar4)();
      return pFVar7;
    }
    pFVar3 = (this->DebugExecBindings).AllocatorInstance.Data;
    iVar6 = (param_1->Data).ArrayNum;
    lVar10 = (longlong)(int)uVar8 * 0x30;
    iVar2 = *(int *)(pFVar3 + lVar10 + 0x20);
    if (iVar2 == iVar6) {
      if (iVar2 < 2) break;
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(pFVar3 + lVar10 + 0x18),
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
    }
    else {
      bVar5 = iVar2 + iVar6 == 1;
    }
    if (bVar5) break;
    uVar8 = uVar8 + 1;
  }
  uVar9 = 0;
  if ((int)uVar8 < (this->DebugExecBindings).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FKeyBind *)(*pcVar4)();
    return pFVar7;
  }
  FKeyBind::operator=(__return_storage_ptr__,
                      (FKeyBind *)((this->DebugExecBindings).AllocatorInstance.Data + lVar10));
  return __return_storage_ptr__;
}

// GetInvertAxis @ 148959da0

bool __thiscall UPlayerInput::GetInvertAxis(UPlayerInput *this,FName param_1)

{
  FAxisKeyDetails *pFVar1;
  
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))();
  }
  pFVar1 = TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
           ::Find((TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                   *)&this->AxisKeyMap,param_1);
  if (pFVar1 != (FAxisKeyDetails *)0x0) {
    return pFVar1->bInverted;
  }
  return false;
}

// GetInvertAxisKey @ 148959e00

bool __thiscall UPlayerInput::GetInvertAxisKey(UPlayerInput *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FInputAxisProperties *pFVar2;
  bool bVar3;
  FKey local_28;
  
  local_28.KeyName = param_1->KeyName;
  bVar3 = false;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  local_28.KeyDetails.Object = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  ConditionalInitAxisProperties(this);
  pFVar2 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,&local_28);
  if (pFVar2 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    local_28.KeyName.ComparisonIndex.Value = (uint)pFVar2->DeadZone;
    local_28.KeyName.Number = (uint)pFVar2->Sensitivity;
    local_28.KeyDetails.Object = *(FKeyDetails **)&pFVar2->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = (bool)(local_28.KeyDetails.Object._4_1_ & 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return bVar3;
}

// GetKeyValue @ 148959fe0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UPlayerInput::GetKeyValue(UPlayerInput *this,FKey *param_1)

{
  TTuple<FKey,FKeyState> *pTVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((2 < (byte)LogInput._0_1_) && (param_1->KeyName == EKeys::AnyKey.KeyName)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
  }
  pTVar1 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   *)&this->KeyStateMap,param_1);
  puVar2 = &pTVar1->field_0x18;
  if (pTVar1 == (TTuple<FKey,FKeyState> *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(puVar2 + 0x18);
    uVar4 = (undefined4)((ulonglong)*(undefined8 *)(puVar2 + 0x18) >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return (float)(double)CONCAT44(uVar4,uVar3);
}

// GetKeysForAction @ 14895a070

TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UPlayerInput::GetKeysForAction(UPlayerInput *this,FName param_1)

{
  TTuple<FName,UPlayerInput::FActionKeyDetails> *pTVar1;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))();
  }
  pTVar1 = TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                   *)&this->ActionKeyMap,param_1);
  pTVar3 = (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,UPlayerInput::FActionKeyDetails> *)0x0) {
    pTVar3 = (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0;
  }
  pTVar2 = &NoKeyMappings;
  if (pTVar3 != (TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = pTVar3;
  }
  return pTVar2;
}

// GetKeysForAxis @ 14895a0d0

TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UPlayerInput::GetKeysForAxis(UPlayerInput *this,FName param_1)

{
  FAxisKeyDetails *pFVar1;
  FAxisKeyDetails *pFVar2;
  
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))();
  }
  pFVar1 = TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
           ::Find((TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                   *)&this->AxisKeyMap,param_1);
  pFVar2 = (FAxisKeyDetails *)&NoAxisMappings;
  if (pFVar1 != (FAxisKeyDetails *)0x0) {
    pFVar2 = pFVar1;
  }
  return &pFVar2->KeyMappings;
}

// GetMouseSensitivityX @ 14895a200

float __thiscall UPlayerInput::GetMouseSensitivityX(UPlayerInput *this)

{
  float fVar1;
  FSharedReferencer<1> FVar2;
  FInputAxisProperties *pFVar3;
  FKey local_38 [2];
  
  FVar2.ReferenceController = EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
  local_38[0].KeyName = EKeys::MouseX.KeyName;
  local_38[0].KeyDetails.Object = EKeys::MouseX.KeyDetails.Object;
  local_38[0].KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties(this);
  pFVar3 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,local_38);
  if (pFVar3 != (FInputAxisProperties *)0x0) {
    fVar1 = pFVar3->Sensitivity;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    return fVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __real_3f800000;
}

// GetMouseSensitivityY @ 14895a2a0

float __thiscall UPlayerInput::GetMouseSensitivityY(UPlayerInput *this)

{
  float fVar1;
  FSharedReferencer<1> FVar2;
  FInputAxisProperties *pFVar3;
  FKey local_38 [2];
  
  FVar2.ReferenceController = EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  local_38[0].KeyName = EKeys::MouseY.KeyName;
  local_38[0].KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
  local_38[0].KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties(this);
  pFVar3 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,local_38);
  if (pFVar3 != (FInputAxisProperties *)0x0) {
    fVar1 = pFVar3->Sensitivity;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    return fVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __real_3f800000;
}

// GetOuterAPlayerController @ 14895a760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UPlayerInput::GetOuterAPlayerController(UPlayerInput *this)

{
  int iVar1;
  APlayerController *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (APlayerController *)this->_padding_;
  if (pAVar2 != (APlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (APlayerController *)0x0;
}

// GetOwningLocalPlayer @ 14895a930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall UPlayerInput::GetOwningLocalPlayer(UPlayerInput *this)

{
  int iVar1;
  APlayerController *this_00;
  UClass *pUVar2;
  ULocalPlayer *pUVar3;
  
  this_00 = (APlayerController *)this->_padding_;
  if (this_00 != (APlayerController *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar3 = APlayerController::GetLocalPlayer(this_00);
      return pUVar3;
    }
  }
  return (ULocalPlayer *)0x0;
}

// GetPrivateStaticClass @ 14895b240

UClass * __cdecl UPlayerInput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerInput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerInput",
               &Z_Registration_Info_UClass_UPlayerInput.InnerSingleton,
               StaticRegisterNativesUPlayerInput,0x498,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UPlayerInput>,InternalVTableHelperCtorCaller<UPlayerInput>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerInput.InnerSingleton;
}

// GetProcessedVectorKeyValue @ 14895b520

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UPlayerInput::GetProcessedVectorKeyValue
          (UPlayerInput *this,TVector<double> *__return_storage_ptr__,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FKey,FKeyState> *pTVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double local_18;
  
  if ((2 < (byte)LogInput._0_1_) && (param_1->KeyName == EKeys::AnyKey.KeyName)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
  }
  pTVar2 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   *)&this->KeyStateMap,param_1);
  puVar3 = &pTVar2->field_0x18;
  if (pTVar2 == (TTuple<FKey,FKeyState> *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    local_18 = 0.0;
  }
  else {
    puVar4 = (undefined4 *)&pTVar2->field_0x30;
    if (pTVar2 == (TTuple<FKey,FKeyState> *)0x0) {
      puVar4 = (undefined4 *)&DAT_00000018;
    }
    local_18 = *(double *)(puVar4 + 4);
    uVar5 = *puVar4;
    uVar6 = puVar4[1];
    uVar7 = puVar4[2];
    uVar8 = puVar4[3];
  }
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar6,uVar5);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar8,uVar7);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRawKeyValue @ 14895c000

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UPlayerInput::GetRawKeyValue(UPlayerInput *this,FKey *param_1)

{
  TTuple<FKey,FKeyState> *pTVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((2 < (byte)LogInput._0_1_) && (param_1->KeyName == EKeys::AnyKey.KeyName)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
  }
  pTVar1 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   *)&this->KeyStateMap,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x18;
  if (pTVar1 == (TTuple<FKey,FKeyState> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (undefined4)*puVar2;
    uVar4 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return (float)(double)CONCAT44(uVar4,uVar3);
}

// GetRawVectorKeyValue @ 14895c090

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UPlayerInput::GetRawVectorKeyValue
          (UPlayerInput *this,TVector<double> *__return_storage_ptr__,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FKey,FKeyState> *pTVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_18;
  
  if ((2 < (byte)LogInput._0_1_) && (param_1->KeyName == EKeys::AnyKey.KeyName)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
  }
  pTVar2 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                   *)&this->KeyStateMap,param_1);
  puVar3 = (undefined4 *)&pTVar2->field_0x18;
  if (pTVar2 == (TTuple<FKey,FKeyState> *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    local_18 = 0.0;
  }
  else {
    local_18 = *(double *)(puVar3 + 4);
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
  }
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar5,uVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar7,uVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTimeDown @ 14895ecc0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UPlayerInput::GetTimeDown(UPlayerInput *this,FKey *param_1)

{
  longlong lVar1;
  TTuple<FKey,FKeyState> *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  
  if ((2 < (byte)LogInput._0_1_) && (param_1->KeyName == EKeys::AnyKey.KeyName)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInput);
  }
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  fVar4 = 0.0;
  if (lVar1 != 0) {
    pTVar2 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)&this->KeyStateMap,param_1);
    puVar3 = &pTVar2->field_0x18;
    if (pTVar2 == (TTuple<FKey,FKeyState> *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if ((puVar3 != (undefined1 *)0x0) && ((puVar3[0x34] & 1) != 0)) {
      fVar4 = (float)(*(double *)(lVar1 + 0x908) - (double)*(float *)(puVar3 + 0x30));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return fVar4;
}

// GetWorld @ 14895fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UPlayerInput::GetWorld(UPlayerInput *this)

{
  int iVar1;
  AActor *this_00;
  UClass *pUVar2;
  UWorld *pUVar3;
  
  this_00 = (AActor *)this->_padding_;
  if (this_00 != (AActor *)0x0) {
    pUVar2 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar3 = AActor::GetWorld(this_00);
      return pUVar3;
    }
  }
  pUVar3 = UObject::GetWorld((UObject *)this);
  return pUVar3;
}

// InputGesture @ 148963230

bool __thiscall
UPlayerInput::InputGesture
          (UPlayerInput *this,FInputDeviceId param_1,FKey *param_2,EInputEvent param_3,float param_4
          ,ulong64 param_5)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FKeyState *pFVar8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint *puVar10;
  double dVar11;
  
  FVar1 = param_2->KeyName;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           ::FindOrAddImpl<FKey_const_&>
                     ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                       *)&this->KeyStateMap,uVar6 + FVar1.Number,param_2);
  puVar10 = &this->EventCount;
  dVar11 = (double)param_4;
  pTVar9 = pFVar8->EventAccumulator + (int)param_3;
  (pFVar8->RawValueAccumulator).field0_0x0._s_0.X = dVar11;
  (pFVar8->RawValue).field0_0x0._s_0.X = dVar11;
  (pFVar8->Value).field0_0x0._s_0.X = dVar11;
  *puVar10 = *puVar10 + 1;
  pFVar2 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar2 <= puVar10) && (puVar10 < pFVar2 + (longlong)pTVar9->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar7 = pTVar9->ArrayNum;
  if (iVar7 == pTVar9->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar7 + 1;
  *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 4) = *puVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// InputGesture @ 148963360

bool __thiscall
UPlayerInput::InputGesture(UPlayerInput *this,FKey *param_1,EInputEvent param_2,float param_3)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FKeyState *pFVar8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint *puVar10;
  double dVar11;
  FKey local_38 [2];
  
  local_38[0].KeyDetails.Object = (param_1->KeyDetails).Object;
  FVar1 = param_1->KeyName;
  local_38[0].KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_38[0].KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38[0].KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38[0].KeyName = FVar1;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar8 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
           ::FindOrAddImpl<FKey_const_&>
                     ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                       *)&this->KeyStateMap,uVar6 + FVar1.Number,local_38);
  puVar10 = &this->EventCount;
  dVar11 = (double)param_3;
  pTVar9 = pFVar8->EventAccumulator + (int)param_2;
  (pFVar8->RawValueAccumulator).field0_0x0._s_0.X = dVar11;
  (pFVar8->RawValue).field0_0x0._s_0.X = dVar11;
  (pFVar8->Value).field0_0x0._s_0.X = dVar11;
  *puVar10 = *puVar10 + 1;
  pFVar2 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar2 <= puVar10) && (puVar10 < pFVar2 + (longlong)pTVar9->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar7 = pTVar9->ArrayNum;
  if (iVar7 == pTVar9->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar7 + 1;
  *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 4) = *puVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// InputKey @ 1489635e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPlayerInput::InputKey(UPlayerInput *this,FInputKeyEventArgs *param_1)

{
  int *piVar1;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *this_00;
  uint *puVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  EInputEvent EVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  EPairedAxis EVar13;
  uint uVar14;
  FName FVar15;
  FKeyState *pFVar16;
  TTuple<FKey,FKeyState> *pTVar17;
  FKey *this_01;
  UWorld *pUVar18;
  FOutputDeviceRedirector *pFVar19;
  FKeyState *pFVar20;
  UInputSettings *pUVar21;
  byte bVar22;
  int iVar23;
  undefined1 *puVar24;
  FName *pFVar25;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  FName local_res18;
  FName local_res20;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  UPlayerInput *local_128;
  FInputKeyEventArgs *local_120;
  FKey local_118;
  FKey local_100;
  FKey local_e8;
  FName local_d0;
  FKeyDetails *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FKey local_70 [2];
  
  if (6 < (byte)LogPlayerInput._0_1_) {
    switch(param_1->Event) {
    case IE_Pressed:
      break;
    case IE_Released:
      break;
    case IE_Repeat:
      break;
    case IE_DoubleClick:
      break;
    case IE_Axis:
      break;
    case IE_MAX:
    }
    FVar15 = FKey::GetFName(&param_1->Key);
    ::FName::ToString((FName *)FVar15,&local_a0);
    if (this->_padding_ == 0) {
      ::FString::FString(&local_158,L"None");
    }
    else {
      local_res18 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res18,&local_158);
    }
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_138);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerInput);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  bVar11 = FKey::IsAnalog(&param_1->Key);
  if (bVar11) {
    FVar15 = (param_1->Key).KeyName;
    if ((FVar15 == EKeys::MouseX.KeyName) || (FVar15 == EKeys::MouseY.KeyName)) {
      if (param_1->NumSamples < 1) goto LAB_1489637cf;
      bVar11 = true;
    }
    else {
      bVar11 = true;
    }
  }
  else {
LAB_1489637cf:
    bVar11 = false;
  }
  if (bVar11) {
    FVar15 = (param_1->Key).KeyName;
    if ((((FVar15 == EKeys::MouseX.KeyName) || (FVar15 == EKeys::MouseY.KeyName)) &&
        (param_1->NumSamples < 1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4143675475270566185>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                            ,0x129,
                            "(Params.Key != EKeys::MouseX && Params.Key != EKeys::MouseY) || Params.NumSamples > 0"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    FVar15 = (param_1->Key).KeyName;
    local_128 = this;
    local_120 = param_1;
    uVar14 = ::GetTypeHash(FVar15.ComparisonIndex.Value);
    this_00 = &this->KeyStateMap;
    pFVar16 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
              ::FindOrAddImpl<FKey_const_&>
                        ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                          *)this_00,uVar14 + FVar15.Number,&param_1->Key);
    `UPlayerInput::InputKey'::__l23::<lambda_1>::operator()
              (&local_128,pFVar16,(float)(pFVar16->Value).field0_0x0._s_0.X);
    pFVar16->SampleCountAccumulator = pFVar16->SampleCountAccumulator + (char)param_1->NumSamples;
    (pFVar16->RawValueAccumulator).field0_0x0._s_0.X =
         (double)param_1->AmountDepressed + (pFVar16->RawValueAccumulator).field0_0x0._s_0.X;
    FKey::GetPairedAxisKey(&param_1->Key,&local_118);
    bVar11 = FKey::IsValid(&local_118);
    if (bVar11) {
      EVar13 = FKey::GetPairedAxis(&param_1->Key);
      FVar15 = local_118.KeyName;
      uVar14 = ::GetTypeHash(local_118.KeyName.ComparisonIndex.Value);
      uVar14 = uVar14 + FVar15.Number;
      if (*(int *)&(this->KeyStateMap).field_0x8 != *(int *)&(this->KeyStateMap).field_0x34) {
        puVar24 = *(undefined1 **)&(this->KeyStateMap).field_0x40;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = &(this->KeyStateMap).field_0x38;
        }
        uVar27 = *(uint *)(puVar24 +
                          (ulonglong)(*(int *)&(this->KeyStateMap).field_0x48 - 1U & uVar14) * 4);
        if (uVar27 != 0xffffffff) {
          do {
            pFVar25 = (FName *)((longlong)(int)uVar27 * 0x110 + *(longlong *)this_00);
            if (*pFVar25 == local_118.KeyName) {
              if (pFVar25 != (FName *)0x0) {
                pFVar16 = (FKeyState *)(pFVar25 + 3);
                goto LAB_148963931;
              }
              break;
            }
            uVar27 = pFVar25[0x21].ComparisonIndex.Value;
          } while (uVar27 != 0xffffffff);
        }
      }
      pFVar16 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                ::EmplaceByHash<FKey_const_&>
                          ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                            *)this_00,uVar14,&local_118);
LAB_148963931:
      pTVar17 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                        *)&this->KeyStateMap,&param_1->Key);
      if ((pTVar17 == (TTuple<FKey,FKeyState> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if (EVar13 == X) {
        dVar8 = *(double *)&pTVar17->field_0xf0;
        pFVar16->field_0x34 = pFVar16->field_0x34 | 0x10;
        (pFVar16->RawValueAccumulator).field0_0x0._s_0.X = dVar8;
      }
      else if (EVar13 == Y) {
        dVar8 = *(double *)&pTVar17->field_0xf0;
        pFVar16->field_0x34 = pFVar16->field_0x34 | 0x20;
        (pFVar16->RawValueAccumulator).field0_0x0._s_0.Y = dVar8;
      }
      else if (EVar13 == Z) {
        dVar8 = *(double *)&pTVar17->field_0xf0;
        pFVar16->field_0x34 = pFVar16->field_0x34 | 0x40;
        (pFVar16->RawValueAccumulator).field0_0x0._s_0.Z = dVar8;
      }
      else {
        this_01 = FKey::GetPairedAxisKey(&param_1->Key,local_70);
        FVar15 = FKey::GetFName(this_01);
        ::FName::ToString((FName *)FVar15,&local_80);
        FVar15 = FKey::GetFName(&param_1->Key);
        ::FName::ToString((FName *)FVar15,&local_90);
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                            ,0x165,L"Key %s has paired axis key %s but no valid paired axis!");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70[0].KeyDetails.SharedReferenceCount.ReferenceController);
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
      }
      bVar22 = pTVar17->field_0x4d;
      if ((byte)pTVar17->field_0x4d < pFVar16->SampleCountAccumulator) {
        bVar22 = pFVar16->SampleCountAccumulator;
      }
      pFVar16->SampleCountAccumulator = bVar22;
      dVar8 = (pFVar16->Value).field0_0x0._s_0.X;
      dVar5 = (pFVar16->Value).field0_0x0._s_0.Y;
      dVar6 = (pFVar16->Value).field0_0x0._s_0.Z;
      auVar29._0_8_ = dVar8 * dVar8;
      auVar29._8_8_ = 0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = dVar5 * dVar5 + auVar29._0_8_ + dVar6 * dVar6;
      auVar30 = sqrtpd(auVar29,auVar30);
      `UPlayerInput::InputKey'::__l23::<lambda_1>::operator()
                (&local_128,pFVar16,(float)auVar30._0_8_);
    }
    (this->CurrentEvent).Value = '\x04';
    if (param_1->Event == IE_Pressed) {
      local_100.KeyName = (param_1->Key).KeyName;
      local_100.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
      local_100.KeyDetails.SharedReferenceCount.ReferenceController =
           (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_100.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_100.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      GetBind(this,&local_168,&local_100);
      iVar23 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar23 = 0;
      }
      if (iVar23 != 0) {
        pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        if ((pUVar18 == (UWorld *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("World",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                                ,0x177,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        pFVar19 = GetGlobalLogSingleton();
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_168.Data.ArrayNum != 0) {
          FVar28.Data = local_168.Data.AllocatorInstance.Data;
        }
        ExecInputCommands(this,pUVar18,(wchar_t *)FVar28.Data,(FOutputDevice *)pFVar19);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.KeyDetails.SharedReferenceCount.ReferenceController);
        return true;
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.KeyDetails.SharedReferenceCount.ReferenceController);
    return false;
  }
  pTVar17 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                    *)&this->KeyStateMap,&param_1->Key);
  pFVar16 = (FKeyState *)&pTVar17->field_0x18;
  if (pTVar17 == (TTuple<FKey,FKeyState> *)0x0) {
    pFVar16 = (FKeyState *)0x0;
  }
  pFVar20 = pFVar16;
  if (pFVar16 == (FKeyState *)0x0) {
    pFVar20 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
              ::Emplace<FKey_const_&>
                        ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                          *)&this->KeyStateMap,&param_1->Key);
  }
  pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((pUVar18 == (UWorld *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                          ,0x189,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  if ((pFVar16 == (FKeyState *)0x0) || (pFVar20->bWasJustFlushed != '\0')) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  fVar31 = (float)pUVar18->RealTimeSeconds;
  if ((((UE::Input::bAutoReconcilePressedEventsOnFirstRepeat != false) && (bVar11)) &&
      (param_1->Event == IE_Repeat)) && (pFVar20->EventAccumulator[0].ArrayNum == 0)) {
    puVar2 = &this->EventCount;
    pTVar26 = pFVar20->EventAccumulator;
    (pFVar20->RawValueAccumulator).field0_0x0._s_0.X = (double)param_1->AmountDepressed;
    *puVar2 = *puVar2 + 1;
    pFVar9 = (pTVar26->AllocatorInstance).Data;
    if (((pFVar9 <= puVar2) &&
        (puVar2 < pFVar9 + (longlong)pFVar20->EventAccumulator[0].ArrayMax * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    iVar23 = pFVar20->EventAccumulator[0].ArrayNum;
    piVar1 = &pFVar20->EventAccumulator[0].ArrayMax;
    if (iVar23 == *piVar1) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar26->AllocatorInstance,piVar1);
    }
    pFVar20->EventAccumulator[0].ArrayNum = iVar23 + 1;
    *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
    pFVar20->SampleCountAccumulator = pFVar20->SampleCountAccumulator + '\x01';
    pFVar20->bDown = '\x01';
    pFVar20->bDownPrevious = '\x01';
    pFVar20->LastUpDownTransitionTime = fVar31;
  }
  EVar7 = param_1->Event;
  if (EVar7 != IE_Pressed) {
    if (EVar7 == IE_Released) {
      puVar2 = &this->EventCount;
      (pFVar20->RawValueAccumulator).field0_0x0._s_0.X = 0.0;
      pTVar26 = pFVar20->EventAccumulator + 1;
      *puVar2 = *puVar2 + 1;
      pFVar9 = (pTVar26->AllocatorInstance).Data;
      if (((pFVar9 <= puVar2) &&
          (puVar2 < pFVar9 + (longlong)pFVar20->EventAccumulator[1].ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      iVar23 = pFVar20->EventAccumulator[1].ArrayNum;
      piVar1 = &pFVar20->EventAccumulator[1].ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar26->AllocatorInstance,piVar1);
      }
      pFVar20->EventAccumulator[1].ArrayNum = iVar23 + 1;
      *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
      goto LAB_1489640bf;
    }
    if (EVar7 != IE_Repeat) {
      if (EVar7 == IE_DoubleClick) {
        puVar2 = &this->EventCount;
        pTVar26 = pFVar20->EventAccumulator;
        (pFVar20->RawValueAccumulator).field0_0x0._s_0.X = (double)param_1->AmountDepressed;
        *puVar2 = *puVar2 + 1;
        pFVar9 = (pTVar26->AllocatorInstance).Data;
        if (((pFVar9 <= puVar2) &&
            (puVar2 < pFVar9 + (longlong)pFVar20->EventAccumulator[0].ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        iVar23 = pFVar20->EventAccumulator[0].ArrayNum;
        piVar1 = &pFVar20->EventAccumulator[0].ArrayMax;
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar26->AllocatorInstance,piVar1);
        }
        pFVar20->EventAccumulator[0].ArrayNum = iVar23 + 1;
        pTVar3 = pFVar20->EventAccumulator + 3;
        *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
        *puVar2 = *puVar2 + 1;
        pFVar9 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar9 <= puVar2) &&
            (puVar2 < pFVar9 + (longlong)pFVar20->EventAccumulator[3].ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          uVar12 = (*pcVar10)();
          return (bool)uVar12;
        }
        iVar23 = pFVar20->EventAccumulator[3].ArrayNum;
        piVar1 = &pFVar20->EventAccumulator[3].ArrayMax;
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        pFVar20->EventAccumulator[3].ArrayNum = iVar23 + 1;
        *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
      }
      goto LAB_1489640bf;
    }
  }
  puVar2 = &this->EventCount;
  (pFVar20->RawValueAccumulator).field0_0x0._s_0.X = (double)param_1->AmountDepressed;
  EVar7 = param_1->Event;
  *puVar2 = *puVar2 + 1;
  pTVar26 = pFVar20->EventAccumulator + (int)EVar7;
  pFVar9 = (pTVar26->AllocatorInstance).Data;
  if (((pFVar9 <= puVar2) && (puVar2 < pFVar9 + (longlong)pTVar26->ArrayMax * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  iVar23 = pTVar26->ArrayNum;
  if (iVar23 == pTVar26->ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
  }
  pTVar26->ArrayNum = iVar23 + 1;
  *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
  if (pFVar20->bDownPrevious == '\0') {
    fVar4 = pFVar20->LastUpDownTransitionTime;
    pUVar21 = GetDefault<UInputSettings>();
    if (fVar31 - fVar4 < pUVar21->DoubleClickTime) {
      *puVar2 = *puVar2 + 1;
      pTVar26 = pFVar20->EventAccumulator + 3;
      pFVar9 = (pTVar26->AllocatorInstance).Data;
      if (((pFVar9 <= puVar2) &&
          (puVar2 < pFVar9 + (longlong)pFVar20->EventAccumulator[3].ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      iVar23 = pFVar20->EventAccumulator[3].ArrayNum;
      piVar1 = &pFVar20->EventAccumulator[3].ArrayMax;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar26->AllocatorInstance,piVar1);
      }
      pFVar20->EventAccumulator[3].ArrayNum = iVar23 + 1;
      *(uint *)((pTVar26->AllocatorInstance).Data + (longlong)iVar23 * 4) = *puVar2;
    }
    pFVar20->LastUpDownTransitionTime = fVar31;
  }
LAB_1489640bf:
  pFVar20->SampleCountAccumulator = pFVar20->SampleCountAccumulator + '\x01';
  pFVar20->bWasJustFlushed = '\0';
  (this->CurrentEvent).Value = (char)param_1->Event;
  local_e8.KeyName = (param_1->Key).KeyName;
  local_e8.KeyDetails.Object = (param_1->Key).KeyDetails.Object;
  local_e8.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_e8.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  GetBind(this,&local_148,&local_e8);
  iVar23 = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    iVar23 = 0;
  }
  if (iVar23 == 0) {
    if (param_1->Event == IE_Pressed) {
      pcVar10 = *(code **)(this->_padding_ + 0x330);
      local_d0 = (param_1->Key).KeyName;
      local_c8 = (param_1->Key).KeyDetails.Object;
      local_c0 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar12 = (*pcVar10)(this,&local_d0);
    }
    else {
      uVar12 = 1;
    }
  }
  else {
    pFVar19 = GetGlobalLogSingleton();
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar28.Data = local_148.Data.AllocatorInstance.Data;
    }
    uVar12 = ExecInputCommands(this,pUVar18,(wchar_t *)FVar28.Data,(FOutputDevice *)pFVar19);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return (bool)uVar12;
}

// InputKey @ 1489641e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPlayerInput::InputKey(UPlayerInput *this,FInputKeyParams *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  FInputKeyEventArgs local_68;
  
  if ((((param_1->Delta).field0_0x0._s_0.Y != 0.0) || ((param_1->Delta).field0_0x0._s_0.Z != 0.0))
     && (2 < (byte)LogPlayerInput._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerInput);
  }
  iVar2 = param_1->NumSamples;
  fVar1 = param_1->DeltaTime;
  FInputKeyEventArgs::FInputKeyEventArgs
            (&local_68,(FViewport *)0x0,(FInputDeviceId)(param_1->InputDevice).InternalId,
             &param_1->Key,IE_Axis,(float)(param_1->Delta).field0_0x0._s_0.X,false,0);
  local_68.Event = param_1->Event;
  local_68.DeltaTime = fVar1;
  local_68.NumSamples = iVar2;
  uVar3 = (**(code **)(this->_padding_ + 0x2b8))(this,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// InputMotion @ 148965160

bool __thiscall
UPlayerInput::InputMotion
          (UPlayerInput *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  bool bVar1;
  
  bVar1 = InputMotion(this,(FInputDeviceId)0xffffffff,param_1,param_2,param_3,param_4,0);
  return bVar1;
}

// InputMotion @ 1489651a0

bool __thiscall
UPlayerInput::InputMotion
          (UPlayerInput *this,FInputDeviceId param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,ulong64 param_6
          )

{
  int *piVar1;
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *this_00;
  uint *puVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FKeyState *pFVar11;
  FName *pFVar12;
  undefined1 *puVar13;
  uint uVar14;
  
  FVar6 = EKeys::Tilt.KeyName;
  this_00 = &this->KeyStateMap;
  uVar9 = ::GetTypeHash(EKeys::Tilt.KeyName.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar6.Number;
  if (*(int *)&(this->KeyStateMap).field_0x8 != *(int *)&(this->KeyStateMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->KeyStateMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->KeyStateMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar13 +
                      (ulonglong)(*(int *)&(this->KeyStateMap).field_0x48 - 1U & uVar9) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar14 * 0x110 + *(longlong *)this_00);
        if (*pFVar12 == EKeys::Tilt.KeyName) {
          if (pFVar12 != (FName *)0x0) {
            pFVar11 = (FKeyState *)(pFVar12 + 3);
            goto LAB_148965258;
          }
          break;
        }
        uVar14 = pFVar12[0x21].ComparisonIndex.Value;
      } while (uVar14 != 0xffffffff);
    }
  }
  pFVar11 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
            ::EmplaceByHash<FKey_const_&>
                      ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                        *)this_00,uVar9,&EKeys::Tilt);
LAB_148965258:
  puVar2 = &this->EventCount;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.X =
       (param_2->field0_0x0)._s_0.X + (pFVar11->RawValueAccumulator).field0_0x0._s_0.X;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y =
       (param_2->field0_0x0)._s_0.Y + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y;
  pTVar3 = pFVar11->EventAccumulator + 2;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z =
       (param_2->field0_0x0)._s_0.Z + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z;
  *puVar2 = *puVar2 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= puVar2) && (puVar2 < pFVar4 + (longlong)pFVar11->EventAccumulator[2].ArrayMax * 4))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  iVar10 = pFVar11->EventAccumulator[2].ArrayNum;
  piVar1 = &pFVar11->EventAccumulator[2].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar11->EventAccumulator[2].ArrayNum = iVar10 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 4) = *puVar2;
  pFVar11->SampleCountAccumulator = pFVar11->SampleCountAccumulator + '\x01';
  FVar6 = EKeys::RotationRate.KeyName;
  uVar9 = ::GetTypeHash(EKeys::RotationRate.KeyName.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar6.Number;
  if (*(int *)&(this->KeyStateMap).field_0x8 != *(int *)&(this->KeyStateMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->KeyStateMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->KeyStateMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar13 +
                      (ulonglong)(*(int *)&(this->KeyStateMap).field_0x48 - 1U & uVar9) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar14 * 0x110 + *(longlong *)this_00);
        if (*pFVar12 == EKeys::RotationRate.KeyName) {
          if (pFVar12 != (FName *)0x0) {
            pFVar11 = (FKeyState *)(pFVar12 + 3);
            goto LAB_1489653b8;
          }
          break;
        }
        uVar14 = pFVar12[0x21].ComparisonIndex.Value;
      } while (uVar14 != 0xffffffff);
    }
  }
  pFVar11 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
            ::EmplaceByHash<FKey_const_&>
                      ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                        *)this_00,uVar9,&EKeys::RotationRate);
LAB_1489653b8:
  pTVar3 = pFVar11->EventAccumulator + 2;
  puVar2 = &this->EventCount;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.X =
       (pFVar11->RawValueAccumulator).field0_0x0._s_0.X + (param_3->field0_0x0)._s_0.X;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y =
       (param_3->field0_0x0)._s_0.Y + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z =
       (param_3->field0_0x0)._s_0.Z + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z;
  this->EventCount = this->EventCount + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= puVar2) && (puVar2 < pFVar4 + (longlong)pFVar11->EventAccumulator[2].ArrayMax * 4))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  iVar10 = pFVar11->EventAccumulator[2].ArrayNum;
  piVar1 = &pFVar11->EventAccumulator[2].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar11->EventAccumulator[2].ArrayNum = iVar10 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 4) = *puVar2;
  pFVar11->SampleCountAccumulator = pFVar11->SampleCountAccumulator + '\x01';
  FVar6 = EKeys::Gravity.KeyName;
  uVar9 = ::GetTypeHash(EKeys::Gravity.KeyName.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar6.Number;
  if (*(int *)&(this->KeyStateMap).field_0x8 != *(int *)&(this->KeyStateMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->KeyStateMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->KeyStateMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar13 +
                      (ulonglong)(*(int *)&(this->KeyStateMap).field_0x48 - 1U & uVar9) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar14 * 0x110 + *(longlong *)&this->KeyStateMap);
        if (*pFVar12 == EKeys::Gravity.KeyName) {
          if (pFVar12 != (FName *)0x0) {
            pFVar11 = (FKeyState *)(pFVar12 + 3);
            goto LAB_148965528;
          }
          break;
        }
        uVar14 = pFVar12[0x21].ComparisonIndex.Value;
      } while (uVar14 != 0xffffffff);
    }
  }
  pFVar11 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
            ::EmplaceByHash<FKey_const_&>
                      ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                        *)&this->KeyStateMap,uVar9,&EKeys::Gravity);
LAB_148965528:
  pTVar3 = pFVar11->EventAccumulator + 2;
  puVar2 = &this->EventCount;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.X =
       (param_4->field0_0x0)._s_0.X + (pFVar11->RawValueAccumulator).field0_0x0._s_0.X;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y =
       (param_4->field0_0x0)._s_0.Y + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z =
       (param_4->field0_0x0)._s_0.Z + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z;
  this->EventCount = this->EventCount + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= puVar2) && (puVar2 < pFVar4 + (longlong)pFVar11->EventAccumulator[2].ArrayMax * 4))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  iVar10 = pFVar11->EventAccumulator[2].ArrayNum;
  piVar1 = &pFVar11->EventAccumulator[2].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar11->EventAccumulator[2].ArrayNum = iVar10 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 4) = *puVar2;
  pFVar11->SampleCountAccumulator = pFVar11->SampleCountAccumulator + '\x01';
  FVar6 = EKeys::Acceleration.KeyName;
  uVar9 = ::GetTypeHash(EKeys::Acceleration.KeyName.ComparisonIndex.Value);
  uVar9 = uVar9 + FVar6.Number;
  if (*(int *)&(this->KeyStateMap).field_0x8 != *(int *)&(this->KeyStateMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->KeyStateMap).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->KeyStateMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar13 +
                      (ulonglong)(*(int *)&(this->KeyStateMap).field_0x48 - 1U & uVar9) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        pFVar12 = (FName *)((longlong)(int)uVar14 * 0x110 + *(longlong *)&this->KeyStateMap);
        if (*pFVar12 == EKeys::Acceleration.KeyName) {
          if (pFVar12 != (FName *)0x0) {
            pFVar11 = (FKeyState *)(pFVar12 + 3);
            goto LAB_148965698;
          }
          break;
        }
        uVar14 = pFVar12[0x21].ComparisonIndex.Value;
      } while (uVar14 != 0xffffffff);
    }
  }
  pFVar11 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
            ::EmplaceByHash<FKey_const_&>
                      ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                        *)&this->KeyStateMap,uVar9,&EKeys::Acceleration);
LAB_148965698:
  pTVar3 = pFVar11->EventAccumulator + 2;
  puVar2 = &this->EventCount;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.X =
       (pFVar11->RawValueAccumulator).field0_0x0._s_0.X + (param_5->field0_0x0)._s_0.X;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y =
       (param_5->field0_0x0)._s_0.Y + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Y;
  (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z =
       (param_5->field0_0x0)._s_0.Z + (pFVar11->RawValueAccumulator).field0_0x0._s_0.Z;
  this->EventCount = this->EventCount + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= puVar2) && (puVar2 < pFVar4 + (longlong)pFVar11->EventAccumulator[2].ArrayMax * 4))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  iVar10 = pFVar11->EventAccumulator[2].ArrayNum;
  piVar1 = &pFVar11->EventAccumulator[2].ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  pFVar11->EventAccumulator[2].ArrayNum = iVar10 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 4) = *puVar2;
  pFVar11->SampleCountAccumulator = pFVar11->SampleCountAccumulator + '\x01';
  return true;
}

// InputTouch @ 1489658c0

bool __thiscall
UPlayerInput::InputTouch
          (UPlayerInput *this,uint param_1,Type param_2,TVector2<double> *param_3,float param_4,
          FDateTime param_5,uint param_6)

{
  bool bVar1;
  
  bVar1 = InputTouch(this,(FInputDeviceId)0xffffffff,param_1,param_2,param_3,param_4,param_6,0);
  return bVar1;
}

// InputTouch @ 148965910

bool __thiscall
UPlayerInput::InputTouch
          (UPlayerInput *this,FInputDeviceId param_1,uint param_2,Type param_3,
          TVector2<double> *param_4,float param_5,uint param_6,ulong64 param_7)

{
  int *piVar1;
  uint *puVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TVector<double> *pTVar4;
  float fVar5;
  double dVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  FKeyState *pFVar16;
  longlong lVar17;
  UInputSettings *pUVar18;
  wchar_t *pwVar19;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  FScriptContainerElement *local_78;
  TVector<double> *local_70;
  FScriptContainerElement *local_68;
  TVector<double> *local_60;
  FScriptContainerElement *local_58;
  TVector<double> *local_50;
  FScriptContainerElement *local_48;
  TVector<double> *local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar19 = FCommandLine::Get();
    bTouchDisabled = FParse::Param(pwVar19,L"DisableTouch");
    _Init_thread_footer(&::_TSS0);
  }
  if (bTouchDisabled == false) {
    if ((param_6 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TouchpadIndex == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                            ,0x1f8,
                            L"We currently assume one touchpad in UPlayerInput::InputTouch. If this triggers, add support for multiple pads"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    if (10 < param_2) {
      return false;
    }
    pTVar4 = this->Touches + param_2;
    (pTVar4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    this->Touches[param_2].field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    if (param_3 == Ended) {
      param_5 = 0.0;
    }
    this->Touches[param_2].field0_0x0._s_0.Z = (double)param_5;
    FVar7 = EKeys::TouchKeys[param_2].KeyName;
    uVar14 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
    pFVar16 = TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
              ::FindOrAddImpl<FKey_const_&>
                        ((TMapBase<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_>
                          *)&this->KeyStateMap,uVar14 + FVar7.Number,EKeys::TouchKeys + param_2);
    puVar2 = &this->EventCount;
    if (param_3 == Began) {
      pTVar3 = pFVar16->EventAccumulator;
      *puVar2 = *puVar2 + 1;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= puVar2) &&
          (puVar2 < pFVar8 + (longlong)pFVar16->EventAccumulator[0].ArrayMax * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      iVar15 = pFVar16->EventAccumulator[0].ArrayNum;
      piVar1 = &pFVar16->EventAccumulator[0].ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      pFVar16->EventAccumulator[0].ArrayNum = iVar15 + 1;
      *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = *puVar2;
      local_58 = (FScriptContainerElement *)puVar2;
      local_50 = pTVar4;
      TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&>_>
                ((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                  *)&this->TouchEventLocations,
                 (TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&> *)
                 local_80,(bool *)&local_58);
      if (pFVar16->bDownPrevious == '\0') {
        lVar17 = (**(code **)(this->_padding_ + 0x180))(this);
        if ((lVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("World",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                                ,0x213,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        dVar6 = *(double *)(lVar17 + 0x908);
        fVar5 = pFVar16->LastUpDownTransitionTime;
        pUVar18 = GetDefault<UInputSettings>();
        if ((float)dVar6 - fVar5 < pUVar18->DoubleClickTime) {
          *puVar2 = *puVar2 + 1;
          pTVar3 = pFVar16->EventAccumulator + 3;
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar8 <= puVar2) &&
              (puVar2 < pFVar8 + (longlong)pFVar16->EventAccumulator[3].ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            uVar13 = (*pcVar9)();
            return (bool)uVar13;
          }
          iVar15 = pFVar16->EventAccumulator[3].ArrayNum;
          piVar1 = &pFVar16->EventAccumulator[3].ArrayMax;
          if (iVar15 == *piVar1) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar1);
          }
          pFVar16->EventAccumulator[3].ArrayNum = iVar15 + 1;
          *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = *puVar2;
          local_48 = (FScriptContainerElement *)puVar2;
          local_40 = pTVar4;
          TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&>_>
                    ((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                      *)&this->TouchEventLocations,
                     (TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&> *)
                     (local_80 + 4),(bool *)&local_48);
        }
        pFVar16->LastUpDownTransitionTime = (float)dVar6;
      }
    }
    else {
      *puVar2 = *puVar2 + 1;
      if (param_3 == Ended) {
        pTVar3 = pFVar16->EventAccumulator + 1;
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar8 <= puVar2) &&
            (puVar2 < pFVar8 + (longlong)pFVar16->EventAccumulator[1].ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar15 = pFVar16->EventAccumulator[1].ArrayNum;
        piVar1 = &pFVar16->EventAccumulator[1].ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        pFVar16->EventAccumulator[1].ArrayNum = iVar15 + 1;
        *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = *puVar2;
        local_68 = (FScriptContainerElement *)puVar2;
        local_60 = pTVar4;
        TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&>_>
                  ((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                    *)&this->TouchEventLocations,
                   (TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&> *)
                   (local_88 + 4),(bool *)&local_68);
      }
      else {
        pTVar3 = pFVar16->EventAccumulator + 2;
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar8 <= puVar2) &&
            (puVar2 < pFVar8 + (longlong)pFVar16->EventAccumulator[2].ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar15 = pFVar16->EventAccumulator[2].ArrayNum;
        piVar1 = &pFVar16->EventAccumulator[2].ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        pFVar16->EventAccumulator[2].ArrayNum = iVar15 + 1;
        *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 4) = *puVar2;
        local_78 = (FScriptContainerElement *)puVar2;
        local_70 = pTVar4;
        TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&>_>
                  ((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                    *)&this->TouchEventLocations,
                   (TPairInitializer<unsigned_int_const_&,UE::Math::TVector<double>_const_&> *)
                   local_88,(bool *)&local_78);
      }
    }
    pFVar16->SampleCountAccumulator = pFVar16->SampleCountAccumulator + '\x01';
    dVar6 = (param_4->field0_0x0)._s_0.Y;
    (pFVar16->RawValue).field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    (pFVar16->RawValue).field0_0x0._s_0.Y = dVar6;
    (pFVar16->RawValue).field0_0x0._s_0.Z = 0.0;
    dVar10 = (pFVar16->RawValue).field0_0x0._s_0.X;
    dVar11 = (pFVar16->RawValue).field0_0x0._s_0.Y;
    dVar6 = (pFVar16->RawValue).field0_0x0._s_0.Z;
    (pFVar16->Value).field0_0x0._s_0.X = dVar10;
    (pFVar16->Value).field0_0x0._s_0.Y = dVar11;
    (pFVar16->RawValueAccumulator).field0_0x0._s_0.X = dVar10;
    (pFVar16->RawValueAccumulator).field0_0x0._s_0.Y = dVar11;
    (pFVar16->Value).field0_0x0._s_0.Z = dVar6;
    (pFVar16->RawValueAccumulator).field0_0x0._s_0.Z = dVar6;
  }
  return true;
}

// InvertAxis @ 1489661e0

void __thiscall UPlayerInput::InvertAxis(UPlayerInput *this,FName param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FAxisKeyDetails *pFVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FName local_res10;
  
  bVar13 = 1;
  local_res10 = param_1;
  if (*(int *)&(this->AxisKeyMap).field_0x8 - *(int *)&(this->AxisKeyMap).field_0x34 < 1) {
    bVar7 = false;
    uVar14 = (this->InvertedAxis).ArrayNum - 1;
    if (-1 < (int)uVar14) {
      lVar15 = (longlong)(int)uVar14;
      lVar16 = lVar15 * 8;
      do {
        uVar9 = 0;
        if ((int)uVar14 < (this->InvertedAxis).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(FName *)((this->InvertedAxis).AllocatorInstance.Data + lVar16) == local_res10) {
          bVar7 = true;
          uVar9 = 0;
          if ((int)uVar14 < (this->InvertedAxis).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = (this->InvertedAxis).ArrayNum;
          pFVar4 = (this->InvertedAxis).AllocatorInstance.Data;
          iVar12 = ~uVar14 + iVar10;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(pFVar4 + lVar15 * 8,pFVar4 + (longlong)(iVar10 - iVar12) * 8,
                    (longlong)iVar12 << 3);
          }
          piVar1 = &(this->InvertedAxis).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        lVar15 = lVar15 + -1;
        lVar16 = lVar16 + -8;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
      if (bVar7) goto LAB_14896653a;
    }
    pTVar2 = &this->InvertedAxis;
    pFVar5 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= &local_res10) && (&local_res10 < pFVar5 + (this->InvertedAxis).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->InvertedAxis).ArrayNum;
    piVar1 = &(this->InvertedAxis).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->InvertedAxis).ArrayNum = iVar10 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_res10;
  }
  else {
    pFVar11 = TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
              ::Find((TMapBase<FName,UPlayerInput::FAxisKeyDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>_>
                      *)&this->AxisKeyMap,param_1);
    if (pFVar11 != (FAxisKeyDetails *)0x0) {
      uVar3 = pFVar11->field_0x10;
      pFVar11->field_0x10 = uVar3 ^ 1;
      bVar13 = ~pFVar11->bInverted & 1;
    }
    pTVar2 = &this->InvertedAxis;
    if (bVar13 == 0) {
      uVar14 = (this->InvertedAxis).ArrayNum - 1;
      if (-1 < (int)uVar14) {
        lVar15 = (longlong)(int)uVar14;
        lVar16 = lVar15 * 8;
        do {
          uVar9 = 0;
          if ((int)uVar14 < (this->InvertedAxis).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar16) == local_res10) {
            uVar9 = 0;
            if ((int)uVar14 < (this->InvertedAxis).ArrayNum) {
              uVar9 = ~uVar14 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = (this->InvertedAxis).ArrayNum;
            pFVar4 = (pTVar2->AllocatorInstance).Data;
            iVar12 = ~uVar14 + iVar10;
            if (1 < iVar12) {
              iVar12 = 1;
            }
            if (iVar12 != 0) {
              memmove(pFVar4 + lVar15 * 8,pFVar4 + (longlong)(iVar10 - iVar12) * 8,
                      (longlong)iVar12 << 3);
            }
            piVar1 = &(this->InvertedAxis).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          lVar15 = lVar15 + -1;
          lVar16 = lVar16 + -8;
          uVar14 = uVar14 - 1;
        } while (-1 < (int)uVar14);
      }
    }
    else {
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar2,&local_res10);
    }
  }
LAB_14896653a:
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// InvertAxisKey @ 148966580

void __thiscall UPlayerInput::InvertAxisKey(UPlayerInput *this,FKey *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 uVar2;
  FInputAxisProperties *pFVar3;
  FKey local_48;
  FKey local_30;
  
  ConditionalInitAxisProperties(this);
  local_48.KeyName = param_1->KeyName;
  pTVar1 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  local_48.KeyDetails.Object = (param_1->KeyDetails).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  ConditionalInitAxisProperties(this);
  pFVar3 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,&local_48);
  if (pFVar3 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    local_48.KeyName.ComparisonIndex.Value = (uint)pFVar3->DeadZone;
    local_48.KeyName.Number = (uint)pFVar3->Sensitivity;
    uVar2 = pFVar3->field_0xc;
    local_48.KeyDetails.Object = *(FKeyDetails **)&pFVar3->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_48.KeyDetails.Object._0_5_ =
         CONCAT14(~pFVar3->bInvert & 1 | uVar2 & 0xfe,local_48.KeyDetails.Object._0_4_);
    local_30.KeyName = param_1->KeyName;
    local_30.KeyDetails.Object = (param_1->KeyDetails).Object;
    local_30.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_30.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAxisProperties(this,&local_30,(FInputAxisProperties *)&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// IsAltPressed @ 1489667d0

bool __thiscall UPlayerInput::IsAltPressed(UPlayerInput *this)

{
  bool bVar1;
  FKey local_28;
  
  local_28.KeyName = EKeys::LeftAlt.KeyName;
  local_28.KeyDetails.Object = EKeys::LeftAlt.KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftAlt.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftAlt.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftAlt.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftAlt.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = IsPressed(this,&local_28);
  if (!bVar1) {
    local_28.KeyName = EKeys::RightAlt.KeyName;
    local_28.KeyDetails.Object = EKeys::RightAlt.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightAlt.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightAlt.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightAlt.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightAlt.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = IsPressed(this,&local_28);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsCmdPressed @ 148966870

bool __thiscall UPlayerInput::IsCmdPressed(UPlayerInput *this)

{
  bool bVar1;
  FKey local_28;
  
  local_28.KeyName = EKeys::LeftCommand.KeyName;
  local_28.KeyDetails.Object = EKeys::LeftCommand.KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftCommand.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftCommand.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftCommand.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftCommand.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = IsPressed(this,&local_28);
  if (!bVar1) {
    local_28.KeyName = EKeys::RightCommand.KeyName;
    local_28.KeyDetails.Object = EKeys::RightCommand.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightCommand.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightCommand.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightCommand.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightCommand.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = IsPressed(this,&local_28);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsCtrlPressed @ 148966a00

bool __thiscall UPlayerInput::IsCtrlPressed(UPlayerInput *this)

{
  bool bVar1;
  FKey local_28;
  
  local_28.KeyName = EKeys::LeftControl.KeyName;
  local_28.KeyDetails.Object = EKeys::LeftControl.KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftControl.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftControl.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftControl.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftControl.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = IsPressed(this,&local_28);
  if (!bVar1) {
    local_28.KeyName = EKeys::RightControl.KeyName;
    local_28.KeyDetails.Object = EKeys::RightControl.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightControl.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightControl.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightControl.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::RightControl.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = IsPressed(this,&local_28);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsKeyConsumed @ 148966d90

bool __thiscall UPlayerInput::IsKeyConsumed(UPlayerInput *this,FKey *param_1,FKeyState *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TTuple<FKey,FKeyState> *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1->KeyName != EKeys::AnyKey.KeyName) {
    if (param_2 == (FKeyState *)0x0) {
      pTVar10 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                        *)&this->KeyStateMap,param_1);
      param_2 = (FKeyState *)&pTVar10->field_0x18;
      if (pTVar10 == (TTuple<FKey,FKeyState> *)0x0) {
        param_2 = (FKeyState *)0x0;
      }
      if (param_2 == (FKeyState *)0x0) goto LAB_148967010;
    }
    bVar3 = param_2->field_0x34;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return (bool)(bVar3 >> 2 & 1);
  }
  iVar14 = 0;
  puVar1 = &(this->KeyStateMap).field_0x10;
  iVar4 = *(int *)&(this->KeyStateMap).field_0x28;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->KeyStateMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148966e5e;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res20;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_148966e5e:
  uVar13 = *(uint *)&(this->KeyStateMap).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar14);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->KeyStateMap).field_0x8 -
                       *(int *)&(this->KeyStateMap).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->KeyStateMap).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148966f80;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_148966f80:
  while( true ) {
    if (*(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if ((*(byte *)((longlong)TStack_68.CurrentBitIndex * 0x110 + 0x4c +
                  *(longlong *)&this->KeyStateMap) & 4) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
LAB_148967010:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// IsKeyHandledByAction @ 148967060

bool __thiscall UPlayerInput::IsKeyHandledByAction(UPlayerInput *this,FKey *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ActionMappings).ArrayNum;
  pFVar4 = (this->ActionMappings).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ActionMappings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputActionKeyMapping_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if ((((((*(FName *)(pFVar4 + 0x10) == param_1->KeyName) ||
           (*(FName *)(pFVar4 + 0x10) == EKeys::AnyKey.KeyName)) &&
          ((((byte)pFVar4[8] & 4) == 0 || (bVar3 = IsAltPressed(this), bVar3)))) &&
         ((((byte)pFVar4[8] & 2) == 0 || (bVar3 = IsCtrlPressed(this), bVar3)))) &&
        ((((byte)pFVar4[8] & 1) == 0 || (bVar3 = IsShiftPressed(this), bVar3)))) &&
       ((((byte)pFVar4[8] & 8) == 0 || (bVar3 = IsCmdPressed(this), bVar3)))) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return true;
    }
    pFVar4 = pFVar4 + 0x28;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// IsPressed @ 148967500

bool __thiscall UPlayerInput::IsPressed(UPlayerInput *this,FKey *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  TTuple<FKey,FKeyState> *pTVar9;
  longlong lVar10;
  FKey *this_00;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->KeyName == EKeys::AnyKey.KeyName) {
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyStateMap).field_0x10;
    iVar14 = 0;
    iVar3 = *(int *)&(this->KeyStateMap).field_0x28;
    uVar7 = 1;
    iVar16 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->KeyStateMap).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)TStack_60.Array;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1489675be;
        uVar13 = puVar17[lVar10 + 1];
      }
      uVar7 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iVar8 = iVar16 + -1 + local_res18;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_1489675be:
    uVar13 = *(uint *)&(this->KeyStateMap).field_0x28;
    puVar11 = &(this->KeyStateMap).field_0x10;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar7,iVar14);
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->KeyStateMap).field_0x8 -
                         *(int *)&(this->KeyStateMap).field_0x34);
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar7 = *(uint *)&(this->KeyStateMap).field_0x28;
    if (uVar13 != uVar7) {
      puVar15 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar11;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1489676d0;
        uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar13 = (int)lVar10 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_1489676d0:
    while( true ) {
      if (*(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar13) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) break;
      this_00 = (FKey *)(*(longlong *)&(this->KeyStateMap).field_0x0 +
                        (longlong)TStack_60.CurrentBitIndex * 0x110);
      bVar5 = FKey::IsDigital(this_00);
      if ((bVar5) && ((this_00[3].KeyName.Number & 1) != 0)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  else {
    pTVar9 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)&this->KeyStateMap,param_1);
    puVar11 = &pTVar9->field_0x18;
    if (pTVar9 == (TTuple<FKey,FKeyState> *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    if (puVar11 != (undefined1 *)0x0) {
      bVar2 = puVar11[0x34];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return (bool)(bVar2 & 1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// IsShiftPressed @ 148967b40

bool __thiscall UPlayerInput::IsShiftPressed(UPlayerInput *this)

{
  bool bVar1;
  FKey local_28;
  
  local_28.KeyName = EKeys::LeftShift.KeyName;
  local_28.KeyDetails.Object = EKeys::LeftShift.KeyDetails.Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftShift.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = IsPressed(this,&local_28);
  if (!bVar1) {
    local_28.KeyName = EKeys::RightShift.KeyName;
    local_28.KeyDetails.Object = EKeys::RightShift.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::RightShift.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::RightShift.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::RightShift.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           = (atomic<int>)
             ((int)(EKeys::RightShift.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = IsPressed(this,&local_28);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// KeyEventOccurred @ 148968f10

bool __thiscall
UPlayerInput::KeyEventOccurred
          (UPlayerInput *this,FKey *param_1,EInputEvent param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,FKeyState *param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TTuple<FKey,FKeyState> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (param_4 == (FKeyState *)0x0) {
    pTVar3 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)&this->KeyStateMap,param_1);
    param_4 = (FKeyState *)&pTVar3->field_0x18;
    if (pTVar3 == (TTuple<FKey,FKeyState> *)0x0) {
      param_4 = (FKeyState *)0x0;
    }
    if (param_4 == (FKeyState *)0x0) goto LAB_148968fe4;
  }
  if (0 < param_4->EventCounts[(int)param_2].ArrayNum) {
    pTVar4 = param_4->EventCounts + (int)param_2;
    if (param_3 != pTVar4) {
      iVar2 = pTVar4->ArrayNum;
      piVar1 = &param_3->ArrayMax;
      _Src = (pTVar4->AllocatorInstance).Data;
      param_3->ArrayNum = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,*piVar1,&param_3->AllocatorInstance,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy((param_3->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
    return true;
  }
LAB_148968fe4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// MassageAxisInput @ 1489694d0

float __thiscall UPlayerInput::MassageAxisInput(UPlayerInput *this,FKey *param_1,float param_2)

{
  int iVar1;
  UObject *pUVar2;
  FInputAxisProperties *pFVar3;
  UClass *pUVar4;
  TTuple<FKey,FKeyState> *pTVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  ConditionalInitAxisProperties(this);
  pFVar3 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,param_1);
  fVar7 = __real_3f800000;
  if (pFVar3 != (FInputAxisProperties *)0x0) {
    fVar9 = pFVar3->DeadZone;
    if (0.0 < fVar9) {
      if (param_2 <= 0.0) {
        fVar8 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000) - fVar9;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        param_2 = fVar8 / (fVar9 - __real_3f800000);
      }
      else {
        fVar8 = param_2 - fVar9;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        param_2 = fVar8 / (__real_3f800000 - fVar9);
      }
    }
    if (pFVar3->Exponent != __real_3f800000) {
      fVar8 = powf((float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff),pFVar3->Exponent)
      ;
      fVar9 = fVar7;
      if ((param_2 <= 0.0) && (fVar9 = 0.0, param_2 < 0.0)) {
        fVar9 = __real_bf800000;
      }
      param_2 = fVar8 * fVar9;
    }
    param_2 = param_2 * pFVar3->Sensitivity;
    if (pFVar3->bInvert != 0) {
      param_2 = (float)((uint)param_2 ^ __xmm_80000000800000008000000080000000);
    }
  }
  if ((param_1->KeyName != EKeys::MouseX.KeyName) && (param_1->KeyName != EKeys::MouseY.KeyName))
  goto LAB_148969730;
  pUVar4 = UInputSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar2 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  lVar6 = this->_padding_;
  if (lVar6 == 0) {
LAB_148969620:
    lVar6 = 0;
  }
  else {
    pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_148969620;
  }
  if ((((pUVar2[1].field_0x20 & 0x10) != 0) && (lVar6 != 0)) &&
     (*(longlong **)(lVar6 + 0x390) != (longlong *)0x0)) {
    fVar7 = (float)(**(code **)(**(longlong **)(lVar6 + 0x390) + 0x800))();
    fVar7 = fVar7 * *(float *)&pUVar2[3].field_0xc;
  }
  param_2 = param_2 * fVar7;
  if (param_1->KeyName == EKeys::MouseX.KeyName) {
    DebugUnSmoothedMouseX = DebugUnSmoothedMouseX + DebugSmoothedMouseSensitivity * param_2;
  }
  else {
    DebugUnSmoothedMouseY = DebugUnSmoothedMouseY - DebugSmoothedMouseSensitivity * param_2;
  }
  if ((((pUVar2[1].field_0x20 & 8) != 0) &&
      (pTVar5 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                        *)&this->KeyStateMap,param_1), pTVar5 != (TTuple<FKey,FKeyState> *)0x0)) &&
     (pTVar5 != (TTuple<FKey,FKeyState> *)0xffffffffffffffe8)) {
    param_2 = (float)(**(code **)(this->_padding_ + 0x2f8))
                               (this,param_2,&pTVar5->field_0x4d,
                                param_1->KeyName != EKeys::MouseX.KeyName);
  }
  if (param_1->KeyName == EKeys::MouseX.KeyName) {
    DebugSmoothedMouseX = DebugSmoothedMouseX + DebugSmoothedMouseSensitivity * param_2;
  }
  else {
    DebugSmoothedMouseY = DebugSmoothedMouseY - DebugSmoothedMouseSensitivity * param_2;
  }
LAB_148969730:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return param_2;
}

// MassageVectorAxisInput @ 148969760

TVector<double> * __thiscall
UPlayerInput::MassageVectorAxisInput
          (UPlayerInput *this,TVector<double> *__return_storage_ptr__,FKey *param_1,
          TVector<double> *param_2)

{
  undefined1 uVar1;
  double dVar2;
  FInputAxisProperties *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  
  dVar13 = (param_2->field0_0x0)._s_0.Y;
  dVar11 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
  ConditionalInitAxisProperties(this);
  pFVar3 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,param_1);
  uVar7 = __xmm_80000000800000008000000080000000;
  fVar6 = __real_3f800000;
  if (pFVar3 != (FInputAxisProperties *)0x0) {
    fVar5 = pFVar3->DeadZone;
    dVar11 = (__return_storage_ptr__->field0_0x0)._s_0.X;
    if (fVar5 <= 0.0) {
      dVar13 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
      dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    }
    else {
      fVar4 = (float)dVar11;
      fVar12 = fVar5 - __real_3f800000;
      fVar10 = __real_3f800000 - fVar5;
      if (fVar4 <= 0.0) {
        fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000) - fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar4 / fVar12;
      }
      else {
        fVar4 = fVar4 - fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar4 / fVar10;
      }
      dVar11 = (double)fVar4;
      fVar4 = (float)(__return_storage_ptr__->field0_0x0)._s_0.Y;
      if (fVar4 <= 0.0) {
        fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000) - fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar4 / fVar12;
      }
      else {
        fVar4 = fVar4 - fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar4 / fVar10;
      }
      dVar13 = (double)fVar4;
      fVar4 = (float)(__return_storage_ptr__->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
      if (fVar4 <= 0.0) {
        fVar5 = (float)((uint)fVar4 ^ uVar7) - fVar5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        dVar2 = (double)(fVar5 / fVar12);
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      }
      else {
        fVar4 = fVar4 - fVar5;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        dVar2 = (double)(fVar4 / fVar10);
        (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
      }
    }
    fVar5 = pFVar3->Exponent;
    if (fVar5 != fVar6) {
      fVar4 = (float)dVar11;
      fVar6 = powf((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff),fVar5);
      if (fVar4 <= 0.0) {
        if (0.0 <= fVar4) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = (float)((uint)fVar6 ^ uVar7);
        }
      }
      fVar4 = (float)dVar13;
      dVar11 = (double)fVar6;
      fVar6 = powf((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff),fVar5);
      if (fVar4 <= 0.0) {
        if (0.0 <= fVar4) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = (float)((uint)fVar6 ^ uVar7);
        }
      }
      fVar4 = (float)dVar2;
      dVar13 = (double)fVar6;
      fVar6 = (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
      fVar6 = powf(fVar6,fVar5);
      if (fVar4 <= 0.0) {
        if (0.0 <= fVar4) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = (float)((uint)fVar6 ^ uVar7);
        }
      }
      dVar2 = (double)fVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    }
    dVar9 = (double)pFVar3->Sensitivity;
    dVar11 = dVar9 * dVar11;
    dVar13 = dVar9 * dVar13;
    dVar9 = dVar9 * dVar2;
    *(double *)&__return_storage_ptr__->field0_0x0 = dVar11;
    *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = dVar13;
    *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = dVar9;
    if (pFVar3->bInvert != 0) {
      uVar7 = (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar8,SUB84(dVar11,0) ^ uVar7);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar8,SUB84(dVar13,0) ^ uVar7);
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar8,SUB84(dVar9,0) ^ uVar7);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PostInitProperties @ 14896fa60

void __thiscall UPlayerInput::PostInitProperties(UPlayerInput *this)

{
  UObject::PostInitProperties((UObject *)this);
  ForceRebuildingKeyMaps(this,true);
  return;
}

// PrepareInputDelegatesForEvaluation @ 148972050

void __thiscall
UPlayerInput::PrepareInputDelegatesForEvaluation
          (UPlayerInput *this,TArray<UInputComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3,
          TArray<TTuple<FKey,FKeyState_*>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// ProcessInputStack @ 148973680

void __thiscall
UPlayerInput::ProcessInputStack
          (UPlayerInput *this,TArray<UInputComponent_*,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3)

{
  TMap<FKey,FKeyState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>_> *pTVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  UClass *pUVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  int iStack_4c;
  longlong local_48;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1241,"UPlayerInput::ProcessInputStack",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
               ,0x4d9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1241);
  }
  if (this->bKeyMapsBuilt == 0) {
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UPlayerInput::ProcessInputStack'::__l2::_dynamic_atexit_destructor_for__KeysWithEvents__
          );
    _Init_thread_footer(&::_TSS0);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(plVar7[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar7[2] + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar6->_padding_)) {
      (**(code **)(*plVar7 + 0xc08))(plVar7,param_2,param_3);
      goto LAB_14897376c;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_14897376c:
  (**(code **)(this->_padding_ + 0x2d0))(this,param_2,param_3,&KeysWithEvents);
  (**(code **)(this->_padding_ + 0x2d8))(this,param_1,param_2,param_3,&KeysWithEvents);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0xc10))(plVar7,param_2);
  }
  pTVar1 = &this->KeyStateMap;
  TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  iVar5 = local_98._28_4_;
  local_38 = (TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (iVar5 < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      bVar3 = *(byte *)((longlong)iVar5 * 0x110 + 0x4c + *local_68);
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      *(byte *)((longlong)iVar5 * 0x110 + 0x4c + *local_68) =
           ((bVar3 & 1) * '\x02' ^ bVar3 & 0xfd) & 0xfb;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      iVar5 = iStack_4c;
    } while (iStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_38->HashSize < iVar5)) || (iVar5 < local_38->HashSize)) {
        local_38->HashSize = iVar5;
        TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *)&this->TouchEventLocations);
  if (KeysWithEvents.ArrayMax < 0) {
    DestructItems<TTuple<FKey,FKeyState_*>,int>
              ((TTuple<FKey,FKeyState_*> *)KeysWithEvents.AllocatorInstance.Data,
               KeysWithEvents.ArrayNum);
    KeysWithEvents.ArrayNum = 0;
    if (KeysWithEvents.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&KeysWithEvents.AllocatorInstance,0,&KeysWithEvents.ArrayMax);
    }
  }
  else {
    DestructItems<TTuple<FKey,FKeyState_*>,int>
              ((TTuple<FKey,FKeyState_*> *)KeysWithEvents.AllocatorInstance.Data,
               KeysWithEvents.ArrayNum);
    KeysWithEvents.ArrayNum = 0;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessNonAxesKeys @ 148974320

void __thiscall
UPlayerInput::ProcessNonAxesKeys(UPlayerInput *this,FKey *param_1,FKeyState *param_2)

{
  double dVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  byte bVar7;
  float fVar8;
  FName local_68;
  FKeyDetails *local_60;
  TReferenceControllerBase<1> *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined1 local_28 [32];
  
  bVar4 = FKey::IsAxis2D(param_1);
  if (!bVar4) {
    bVar4 = FKey::IsAxis3D(param_1);
    if (!bVar4) {
      dVar1 = (param_2->RawValue).field0_0x0._s_0.X;
      pcVar3 = *(code **)(this->_padding_ + 800);
      local_68 = param_1->KeyName;
      local_60 = (param_1->KeyDetails).Object;
      local_58 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
      if (local_58 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
        UNLOCK();
      }
      fVar8 = (float)(*pcVar3)(this,&local_68,(float)dVar1);
      (param_2->Value).field0_0x0._s_0.X = (double)fVar8;
      goto LAB_148974407;
    }
  }
  local_48 = *(undefined4 *)&(param_2->RawValue).field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&(param_2->RawValue).field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&(param_2->RawValue).field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&(param_2->RawValue).field0_0x0 + 0xc);
  local_38 = (param_2->RawValue).field0_0x0._s_0.Z;
  pcVar3 = *(code **)(this->_padding_ + 0x318);
  local_68 = param_1->KeyName;
  local_60 = (param_1->KeyDetails).Object;
  local_58 = (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
    UNLOCK();
  }
  pdVar6 = (double *)(*pcVar3)(this,local_28,&local_68,&local_48);
  dVar1 = pdVar6[1];
  (param_2->Value).field0_0x0._s_0.X = *pdVar6;
  (param_2->Value).field0_0x0._s_0.Y = dVar1;
  (param_2->Value).field0_0x0._s_0.Z = pdVar6[2];
LAB_148974407:
  iVar5 = param_2->EventCounts[0].ArrayNum - param_2->EventCounts[1].ArrayNum;
  uVar2 = param_2->field_0x34;
  if (iVar5 < 0) {
    bVar7 = uVar2 & 0xfe;
  }
  else if (iVar5 < 1) {
    bVar7 = uVar2 ^ (param_2->bDownPrevious ^ param_2->bDown) & 1;
  }
  else {
    bVar7 = uVar2 | 1;
  }
  param_2->field_0x34 = bVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// RemoveActionMapping @ 148977e50

void __thiscall
UPlayerInput::RemoveActionMapping(UPlayerInput *this,FInputActionKeyMapping *param_1)

{
  FScriptContainerElement FVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = (this->ActionMappings).ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 0x28;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->ActionMappings).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->ActionMappings).AllocatorInstance.Data;
      if ((*(FName *)(pFVar3 + lVar8) == param_1->ActionName) &&
         (*(FName *)(pFVar3 + lVar8 + 0x10) == (param_1->Key).KeyName)) {
        FVar1 = pFVar3[lVar8 + 8];
        uVar2 = param_1->field_0x8;
        if (((((byte)FVar1 ^ param_1->bShift) & 1) == 0) &&
           ((((((byte)FVar1 ^ uVar2) & 2) == 0 && ((((byte)FVar1 ^ uVar2) & 4) == 0)) &&
            ((((byte)FVar1 ^ uVar2) & 8) == 0)))) {
          uVar6 = 0;
          if ((int)uVar7 < (this->ActionMappings).ArrayNum) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FInputActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->ActionMappings,uVar7);
          TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FName,UPlayerInput::FActionKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FActionKeyDetails,0>,FDefaultSetAllocator>
                   *)&this->ActionKeyMap);
          this->bKeyMapsBuilt = '\0';
        }
      }
      lVar8 = lVar8 + -0x28;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// RemoveAxisMapping @ 148978380

void __thiscall UPlayerInput::RemoveAxisMapping(UPlayerInput *this,FInputAxisKeyMapping *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->AxisMappings).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x28;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->AxisMappings).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->AxisMappings).AllocatorInstance.Data;
      if ((*(FName *)(pFVar1 + lVar6) == param_1->AxisName) &&
         (*(FName *)(pFVar1 + lVar6 + 0x10) == (param_1->Key).KeyName)) {
        uVar4 = 0;
        if ((int)uVar5 < (this->AxisMappings).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->AxisMappings,uVar5);
        TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
                 *)&this->AxisKeyMap);
        this->bKeyMapsBuilt = '\0';
      }
      lVar6 = lVar6 + -0x28;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// SetAxisProperties @ 14897dcf0

void __thiscall
UPlayerInput::SetAxisProperties(UPlayerInput *this,FKey *param_1,FInputAxisProperties *param_2)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  FName *pFVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (FName *)(this->AxisConfig).AllocatorInstance.Data;
  iVar2 = (this->AxisConfig).ArrayNum;
  pFVar9 = pFVar8 + 1;
  pFVar1 = pFVar8 + (longlong)iVar2 * 3;
  while( true ) {
    if ((this->AxisConfig).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FInputAxisConfigEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    FVar3 = *pFVar8;
    FVar4 = param_1->KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (FVar3 == FVar4) {
      fVar5 = param_2->Sensitivity;
      fVar6 = param_2->Exponent;
      uVar7 = *(undefined4 *)&param_2->field_0xc;
      pFVar9->ComparisonIndex = (FNameEntryId)param_2->DeadZone;
      pFVar9->Number = (uint)fVar5;
      pFVar9[1].ComparisonIndex = (FNameEntryId)fVar6;
      pFVar9[1].Number = uVar7;
    }
    pFVar8 = pFVar8 + 3;
    pFVar9 = pFVar9 + 3;
  }
  TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FKey,FInputAxisProperties>,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>,FDefaultSetAllocator>
           *)&this->AxisProperties);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SetBind @ 14897dee0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPlayerInput::SetBind(UPlayerInput *this,FName param_1,FString *param_2)

{
  int *piVar1;
  TArray<FKeyBind,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  FKeyBind *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FString *this_00;
  ulonglong uVar12;
  FName *pFVar13;
  byte bVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  bool bVar21;
  FName local_res10 [2];
  uint local_res20 [2];
  FString local_158;
  FKeyBind local_148;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FKey local_108;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FName local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  FName local_68;
  FString local_60;
  FKeyDetails *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  bVar7 = false;
  local_res20[0] = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_res10[0] = param_1;
  this_00 = ::FName::ToString(local_res10,&local_60);
  ::FString::ParseIntoArray(this_00,&local_118,L"+",true);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  iVar10 = local_118.ArrayNum;
  uVar12 = (ulonglong)local_118.ArrayNum;
  local_148._41_1_ = local_148._41_1_ & 0xfe;
  pFVar19 = local_118.AllocatorInstance.Data + uVar12 * 0x10;
  local_108.KeyName.ComparisonIndex.Value = 0;
  local_108.KeyName.Number = 0;
  local_108.KeyDetails.Object = (FKeyDetails *)0x0;
  local_108.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_148.Key.KeyName.ComparisonIndex.Value = 0;
  local_148.Key.KeyName.Number = 0;
  local_148.Key.KeyDetails.Object = (FKeyDetails *)0x0;
  local_148.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_148.Command.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Command.Data.ArrayNum = 0;
  local_148.Command.Data.ArrayMax = 0;
  local_148.bIgnoreCmd = '\0';
  local_148.bIgnoreAlt = '\0';
  local_148.bIgnoreShift = '\0';
  local_148.bIgnoreCtrl = '\0';
  local_148.Cmd = '\0';
  local_148.Alt = '\0';
  local_148.Shift = '\0';
  local_148.Control = '\0';
  FVar16.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    bVar21 = false;
    if ((int)uVar12 != iVar10) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar16.Data == pFVar19) break;
    ::FString::FString(&local_e0,L"ctrl");
    iVar8 = *(int *)(FVar16.Data + 8);
    if (iVar8 == local_e0.Data.ArrayNum) {
      if (1 < iVar8) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar16.Data,(wchar_t *)local_e0.Data.AllocatorInstance.Data)
        ;
        bVar21 = iVar8 == 0;
        goto LAB_14897dfe9;
      }
LAB_14897e034:
      bVar21 = true;
    }
    else {
      bVar21 = iVar8 + local_e0.Data.ArrayNum == 1;
LAB_14897dfe9:
      if (bVar21) goto LAB_14897e034;
      ::FString::FString(&local_f0,L"control");
      bVar7 = true;
      iVar8 = *(int *)(FVar16.Data + 8);
      if (iVar8 == local_f0.Data.ArrayNum) {
        if (iVar8 < 2) goto LAB_14897e034;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar16.Data,(wchar_t *)local_f0.Data.AllocatorInstance.Data)
        ;
        bVar21 = iVar8 == 0;
      }
      else {
        bVar21 = iVar8 + local_f0.Data.ArrayNum == 1;
      }
      if (bVar21) goto LAB_14897e034;
      bVar21 = false;
    }
    if ((bVar7) &&
       (bVar7 = false, local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (bVar21) {
      local_148._40_1_ = local_148._40_1_ | 1;
      uVar12 = local_118._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 0x10;
    }
    else {
      ::FString::FString(&local_d0,L"alt");
      iVar8 = *(int *)(FVar16.Data + 8);
      if (iVar8 == local_d0.Data.ArrayNum) {
        if (iVar8 < 2) {
          bVar21 = true;
        }
        else {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)FVar16.Data,
                             (wchar_t *)local_d0.Data.AllocatorInstance.Data);
          bVar21 = iVar8 == 0;
        }
      }
      else {
        bVar21 = iVar8 + local_d0.Data.ArrayNum == 1;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (bVar21) {
        local_148._40_1_ = local_148._40_1_ | 4;
        uVar12 = local_118._8_8_ & 0xffffffff;
        FVar16.Data = FVar16.Data + 0x10;
      }
      else {
        ::FString::FString(&local_c0,L"shift");
        iVar8 = *(int *)(FVar16.Data + 8);
        if (iVar8 == local_c0.Data.ArrayNum) {
          if (iVar8 < 2) {
            bVar21 = true;
          }
          else {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar16.Data,
                               (wchar_t *)local_c0.Data.AllocatorInstance.Data);
            bVar21 = iVar8 == 0;
          }
        }
        else {
          bVar21 = iVar8 + local_c0.Data.ArrayNum == 1;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (bVar21) {
          local_148._40_1_ = local_148._40_1_ | 2;
          uVar12 = local_118._8_8_ & 0xffffffff;
          FVar16.Data = FVar16.Data + 0x10;
        }
        else {
          ::FString::FString(&local_b0,L"cmd");
          iVar8 = *(int *)(FVar16.Data + 8);
          if (iVar8 == local_b0.Data.ArrayNum) {
            if (iVar8 < 2) {
              bVar21 = true;
            }
            else {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar16.Data,
                                 (wchar_t *)local_b0.Data.AllocatorInstance.Data);
              bVar21 = iVar8 == 0;
            }
          }
          else {
            bVar21 = iVar8 + local_b0.Data.ArrayNum == 1;
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (bVar21) {
            local_148._40_1_ = local_148._40_1_ | 8;
            uVar12 = local_118._8_8_ & 0xffffffff;
            FVar16.Data = FVar16.Data + 0x10;
          }
          else {
            iVar4 = *(int *)(FVar16.Data + 8);
            iVar8 = iVar4 + -1;
            iVar9 = iVar8;
            if (iVar4 == 0) {
              iVar9 = 0;
            }
            if (0 < iVar9) {
              if (iVar4 == 0) {
                iVar8 = 0;
              }
              pFVar13 = ::FName::FName(&local_68,iVar8,*(wchar_t **)FVar16.Data,FNAME_Add);
              local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              local_78 = 0;
              local_108.KeyName = *pFVar13;
              local_108.KeyDetails.Object = (FKeyDetails *)0x0;
              local_80 = local_108.KeyName;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_108.KeyDetails.SharedReferenceCount,&local_70);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_70.ReferenceController);
            }
            uVar12 = local_118._8_8_ & 0xffffffff;
            FVar16.Data = FVar16.Data + 0x10;
          }
        }
      }
    }
  }
  bVar7 = FKey::IsValid(&local_108);
  if (!bVar7) goto LAB_14897e5c4;
  local_158.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar17 = (longlong)local_158.Data.ArrayNum;
  pFVar19 = (param_2->Data).AllocatorInstance.Data;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_158.Data.ArrayNum == 0) {
    local_158.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_158,local_158.Data.ArrayNum
               ,&local_158.Data.ArrayMax);
    memcpy(local_158.Data.AllocatorInstance.Data,pFVar19,lVar17 * 2);
  }
  uVar20 = 0;
  uVar15 = local_158.Data.ArrayNum - 1;
  if (local_158.Data.ArrayNum == 0) {
    uVar15 = uVar20;
  }
  if (1 < (int)uVar15) {
    uVar15 = 1;
  }
  uVar18 = uVar20;
  if (0 < (int)uVar15) {
    uVar18 = uVar15;
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar16.Data = local_158.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(&local_90,(wchar_t *)FVar16.Data,uVar18);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar16.Data = local_90.Data.AllocatorInstance.Data;
  }
  iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"\"");
  if (iVar10 == 0) {
    bVar21 = true;
    uVar15 = local_158.Data.ArrayNum - 1;
    FVar16.Data = local_158.Data.AllocatorInstance.Data;
    if (local_158.Data.ArrayNum == 0) {
      uVar15 = uVar20;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar18 = uVar15;
    if (1 < (int)uVar15) {
      uVar18 = 1;
    }
    uVar11 = uVar20;
    if (0 < (int)uVar18) {
      uVar11 = uVar18;
    }
    ::FString::FString(&local_a0,
                       (wchar_t *)
                       (FVar16.Data + ((longlong)(int)uVar15 - (longlong)(int)uVar11) * 2));
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar16.Data = local_a0.Data.AllocatorInstance.Data;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,"\"");
    if (iVar10 != 0) goto LAB_14897e34a;
    bVar7 = true;
LAB_14897e352:
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14897e34a:
    bVar7 = false;
    if (bVar21) goto LAB_14897e352;
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    iVar10 = local_158.Data.ArrayNum + -3;
    if (local_158.Data.ArrayNum == 0) {
      iVar10 = -2;
    }
    if (iVar10 < 0x7ffffffe) {
      uVar15 = uVar20;
      if (local_158.Data.ArrayNum != 0) {
        uVar15 = local_158.Data.ArrayNum - 1;
      }
      uVar18 = uVar15;
      if ((int)(iVar10 + 1U) < (int)uVar15) {
        uVar18 = iVar10 + 1U;
      }
      uVar11 = uVar20;
      if (0 < (int)uVar18) {
        uVar11 = uVar18;
      }
      ::FString::RemoveAt(&local_158,uVar11,uVar15 - uVar11,No);
    }
    ::FString::RemoveAt(&local_158,0,1,No);
  }
  pTVar2 = &this->DebugExecBindings;
  uVar15 = (this->DebugExecBindings).ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar17 = (longlong)(int)uVar15 * 0x30;
    bVar14 = local_148._40_1_;
    do {
      uVar18 = uVar20;
      if ((int)uVar15 < (this->DebugExecBindings).ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14 = local_148._40_1_, bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = (pTVar2->AllocatorInstance).Data;
      if ((((*(FName *)(pFVar19 + lVar17) == local_108.KeyName) &&
           (FVar3 = pFVar19[lVar17 + 0x28], (((byte)FVar3 ^ bVar14) & 4) == 0)) &&
          ((((byte)FVar3 ^ bVar14) & 8) == 0)) &&
         (((((byte)FVar3 ^ bVar14) & 2) == 0 && ((((byte)FVar3 ^ bVar14) & 1) == 0)))) {
        uVar18 = uVar20;
        if ((int)uVar15 < (this->DebugExecBindings).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar18 = local_158.Data.ArrayNum - 1;
        if (local_158.Data.ArrayNum == 0) {
          uVar18 = uVar20;
        }
        ::FString::AssignRange
                  ((FString *)
                   ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x30 + 0x18),
                   (wchar_t *)local_158.Data.AllocatorInstance.Data,uVar18);
        goto LAB_14897e599;
      }
      lVar17 = lVar17 + -0x30;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  pTStack_48 = local_148.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  local_50 = local_148.Key.KeyDetails.Object;
  local_148.Key.KeyName = local_108.KeyName;
  if (local_108.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  local_148.Key.KeyDetails.Object = local_108.KeyDetails.Object;
  local_148.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       local_108.KeyDetails.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  iVar10 = local_158.Data.ArrayNum + -1;
  if (local_158.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange(&local_148.Command,(wchar_t *)local_158.Data.AllocatorInstance.Data,iVar10)
  ;
  pFVar5 = (FKeyBind *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= &local_148) && (&local_148 < pFVar5 + (this->DebugExecBindings).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->DebugExecBindings).ArrayNum;
  piVar1 = &(this->DebugExecBindings).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&pTVar2->AllocatorInstance,piVar1);
    (this->DebugExecBindings).ArrayNum = iVar10;
  }
  (this->DebugExecBindings).ArrayNum = iVar10 + 1;
  FKeyBind::FKeyBind((FKeyBind *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x30),
                     &local_148);
LAB_14897e599:
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_14897e5c4:
  if (local_148.Command.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Command.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.KeyDetails.SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// SetMouseSensitivity @ 14897f320

void __thiscall UPlayerInput::SetMouseSensitivity(UPlayerInput *this,float param_1,float param_2)

{
  FSharedReferencer<1> FVar1;
  FInputAxisProperties *pFVar2;
  FKey local_58;
  FKey local_40 [2];
  
  FVar1.ReferenceController = EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
  local_58.KeyName = EKeys::MouseX.KeyName;
  local_58.KeyDetails.Object = EKeys::MouseX.KeyDetails.Object;
  local_58.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties(this);
  pFVar2 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,&local_58);
  if (pFVar2 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
  }
  else {
    local_58.KeyName.ComparisonIndex.Value = (uint)pFVar2->DeadZone;
    local_58.KeyName.Number = (uint)pFVar2->Sensitivity;
    local_58.KeyDetails.Object = *(FKeyDetails **)&pFVar2->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
    local_40[0].KeyName = EKeys::MouseX.KeyName;
    local_40[0].KeyDetails.Object = EKeys::MouseX.KeyDetails.Object;
    local_58.KeyName.Number = (uint)param_1;
    local_40[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAxisProperties(this,local_40,(FInputAxisProperties *)&local_58);
  }
  FVar1.ReferenceController = EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  local_40[0].KeyName = EKeys::MouseY.KeyName;
  local_40[0].KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
  local_40[0].KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties(this);
  pFVar2 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&this->AxisProperties,local_40);
  if (pFVar2 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
  }
  else {
    local_58.KeyName.ComparisonIndex.Value = (uint)pFVar2->DeadZone;
    local_58.KeyName.Number = (uint)pFVar2->Sensitivity;
    local_58.KeyDetails.Object = *(FKeyDetails **)&pFVar2->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
    local_40[0].KeyName = EKeys::MouseY.KeyName;
    local_40[0].KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
    local_58.KeyName.Number = (uint)param_2;
    local_40[0].KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAxisProperties(this,local_40,(FInputAxisProperties *)&local_58);
  }
  return;
}

// SmoothMouse @ 1489807f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
UPlayerInput::SmoothMouse(UPlayerInput *this,float param_1,uchar *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  UWorld *this_00;
  AWorldSettings *pAVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res10 [8];
  
  if ((param_3 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                         ,0x6ef,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  if ((1 < (uint)param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < (sizeof(UEArrayCountHelper(ZeroTime)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                         ,0x6f0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    pAVar4 = UWorld::GetWorldSettings(this_00,false,true);
    if ((pAVar4 == (AWorldSettings *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World->GetWorldSettings()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                           ,0x6f5,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    pAVar4 = UWorld::GetWorldSettings(this_00,false,true);
    fVar5 = (float)(**(code **)(pAVar4->_padding_ + 0x790))(pAVar4);
    if (fVar5 != this->LastTimeDilation) {
      this->LastTimeDilation = fVar5;
      ClearSmoothing(this);
    }
  }
  fVar5 = (float)(double)FApp::DeltaTime;
  if (__real_3e800000 <= fVar5) {
    ClearSmoothing(this);
  }
  else {
    if ((this->MouseSamples < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MouseSamples > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                           ,0x702,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    fVar7 = this->MouseSamplingTotal / (float)this->MouseSamples;
    if ((fVar7 <= 0.0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MouseSamplingTime > 0.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                           ,0x706,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    if (param_1 == 0.0) {
      fVar6 = fVar5 + this->ZeroTime[param_3];
      this->ZeroTime[param_3] = fVar6;
      if (fVar6 < fVar7) {
        param_1 = (fVar5 * this->SmoothedMouse[param_3]) / fVar7;
        goto LAB_148980a85;
      }
    }
    else {
      this->ZeroTime[param_3] = 0.0;
      if (this->SmoothedMouse[param_3] != 0.0) {
        bVar2 = *param_2;
        if (*param_2 == 0) {
          `UPlayerInput::SmoothMouse'::__l59::<lambda_1>::operator()(local_res10);
          bVar2 = 1;
        }
        if ((float)(*param_2 + 1) * fVar7 <= fVar5) {
          *param_2 = (uchar)(int)(fVar5 / fVar7);
        }
        else {
          param_1 = (fVar5 * param_1) / ((float)bVar2 * fVar7);
        }
      }
      if (*param_2 != 0) {
        this->SmoothedMouse[param_3] = param_1 / (float)*param_2;
        goto LAB_148980a85;
      }
    }
    this->SmoothedMouse[param_3] = 0.0;
  }
LAB_148980a85:
  *param_2 = '\0';
  return param_1;
}

// StaticRegisterNativesUPlayerInput @ 148982b20

void __cdecl UPlayerInput::StaticRegisterNativesUPlayerInput(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UPlayerInput_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 148984010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPlayerInput::Tick(UPlayerInput *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  UClass *this_00;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PC_GestureRecognition> FVar5;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38 [2];
  
  ConditionalInitAxisProperties(this);
  this_00 = UInputSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if (((this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x21 & 0x20) != 0) {
    FVar9.Value = 0;
    FVar5 = StatPtr_STAT_PC_GestureRecognition;
    if (StatPtr_STAT_PC_GestureRecognition ==
        (FThreadSafeStaticStat<FStat_STAT_PC_GestureRecognition>)0x0) {
      pFVar4 = ::FName::FName(&local_res20,"STAT_PC_GestureRecognition");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_PC_GestureRecognition>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PC_GestureRecognition,*pFVar4,
                         L"    PC Gesture Recognition","STATGROUP_PlayerController",
                         "STATCAT_Advanced",L"PlayerController",true,true,ST_int64,true,false,
                         MCR_Invalid);
    }
    FVar8 = *(FName *)FVar5;
    bVar2 = false;
    bVar3 = false;
    FVar7 = FVar8.ComparisonIndex.Value;
    uVar6 = FVar8.Number;
    if ((FVar7.Value == 0) && (uVar6 == 0)) {
      FGestureRecognizer::DetectGestures(&this->GestureRecognizer,&this->Touches,this,param_1);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res18.s.LowPart = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
        bVar2 = false;
        bVar3 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res18.s.LowPart = FVar7.Value;
          local_res18.s.HighPart = uVar6;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\PlayerInput.cpp"
                     ,0x8e4);
          bVar2 = true;
          bVar3 = true;
        }
      }
      bVar10 = FThreadStats::bPrimaryEnable == false;
      if (bVar10) {
        FVar8.ComparisonIndex.Value = 0;
        FVar8.Number = 0;
      }
      else {
        local_res18.s.LowPart = FVar7.Value;
        local_res18.s.HighPart = uVar6;
        FThreadStats::AddMessage(FVar8,CycleScopeStart);
        FVar9.Value = FVar7.Value;
      }
      FGestureRecognizer::DetectGestures(&this->GestureRecognizer,&this->Touches,this,param_1);
      if (bVar3) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_38[0].NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
          local_38[0].NameAndInfo.Index.Value = FVar9.Value;
          QueryPerformanceCounter(&local_res18);
          local_38[0].StatData.Pad[4] = '\0';
          local_38[0].StatData.Pad[5] = '\0';
          local_38[0].StatData.Pad[6] = '\0';
          local_38[0].StatData.Pad[7] = '\0';
          local_38[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
          local_38[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
          local_38[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
          local_38[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,local_38);
          piVar1 = &this_01->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
  }
  return;
}

// UpdatePinchStartDistance @ 148989810

void __thiscall UPlayerInput::UpdatePinchStartDistance(UPlayerInput *this)

{
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  local_28._s_0.X = this->Touches[1].field0_0x0._s_0.X;
  local_28._s_0.Y = this->Touches[1].field0_0x0._s_0.Y;
  local_18._s_0.X = this->Touches[0].field0_0x0._s_0.X;
  local_18._s_0.Y = this->Touches[0].field0_0x0._s_0.Y;
  FGestureRecognizer::SetAnchorDistanceSquared
            (&this->GestureRecognizer,(TVector2<double> *)&local_18._s_0,
             (TVector2<double> *)&local_28._s_0);
  return;
}

// WasJustPressed @ 14898bd40

bool __thiscall UPlayerInput::WasJustPressed(UPlayerInput *this,FKey *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TTuple<FKey,FKeyState> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FKey *this_00;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->KeyName == EKeys::AnyKey.KeyName) {
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyStateMap).field_0x10;
    iVar13 = 0;
    iVar2 = *(int *)&(this->KeyStateMap).field_0x28;
    uVar6 = 1;
    iVar15 = 0;
    iVar7 = 0;
    if (iVar2 != 0) {
      puVar16 = *(uint **)&(this->KeyStateMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)TStack_60.Array;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar7 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14898bdfe;
        uVar12 = puVar16[lVar9 + 1];
      }
      uVar6 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = iVar15 + -1 + local_res18;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
    }
LAB_14898bdfe:
    uVar12 = *(uint *)&(this->KeyStateMap).field_0x28;
    puVar10 = &(this->KeyStateMap).field_0x10;
    uVar11 = uVar12 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar6,iVar13);
    iVar13 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar15;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->KeyStateMap).field_0x8 -
                         *(int *)&(this->KeyStateMap).field_0x34);
    if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = *(uint *)&(this->KeyStateMap).field_0x28;
    if (uVar12 != uVar6) {
      puVar14 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar10;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        uVar11 = uVar11 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14898bf10;
        uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = (int)lVar9 + -1 + uVar11;
      if ((int)uVar6 < (int)uVar12) {
        uVar12 = uVar6;
      }
    }
LAB_14898bf10:
    while( true ) {
      if (*(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) break;
      this_00 = (FKey *)(*(longlong *)&(this->KeyStateMap).field_0x0 +
                        (longlong)TStack_60.CurrentBitIndex * 0x110);
      bVar4 = FKey::IsAnalog(this_00);
      if ((!bVar4) && (0 < *(int *)&this_00[3].KeyDetails.SharedReferenceCount.ReferenceController))
      {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  else {
    pTVar8 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)&this->KeyStateMap,param_1);
    puVar10 = &pTVar8->field_0x18;
    if (pTVar8 == (TTuple<FKey,FKeyState> *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    if (puVar10 != (undefined1 *)0x0) {
      iVar2 = *(int *)(puVar10 + 0x40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return 0 < iVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// WasJustReleased @ 14898c000

bool __thiscall UPlayerInput::WasJustReleased(UPlayerInput *this,FKey *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TTuple<FKey,FKeyState> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FKey *this_00;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->KeyName == EKeys::AnyKey.KeyName) {
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyStateMap).field_0x10;
    iVar13 = 0;
    iVar2 = *(int *)&(this->KeyStateMap).field_0x28;
    uVar6 = 1;
    iVar15 = 0;
    iVar7 = 0;
    if (iVar2 != 0) {
      puVar16 = *(uint **)&(this->KeyStateMap).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)TStack_60.Array;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar7 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14898c0be;
        uVar12 = puVar16[lVar9 + 1];
      }
      uVar6 = -uVar12 & uVar12;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = iVar15 + -1 + local_res18;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
    }
LAB_14898c0be:
    uVar12 = *(uint *)&(this->KeyStateMap).field_0x28;
    puVar10 = &(this->KeyStateMap).field_0x10;
    uVar11 = uVar12 & 0xffffffe0;
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uVar6,iVar13);
    iVar13 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar15;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->KeyStateMap).field_0x8 -
                         *(int *)&(this->KeyStateMap).field_0x34);
    if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = *(uint *)&(this->KeyStateMap).field_0x28;
    if (uVar12 != uVar6) {
      puVar14 = *(undefined1 **)&(this->KeyStateMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar10;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        uVar11 = uVar11 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14898c1d0;
        uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = (int)lVar9 + -1 + uVar11;
      if ((int)uVar6 < (int)uVar12) {
        uVar12 = uVar6;
      }
    }
LAB_14898c1d0:
    while( true ) {
      if (*(int *)&(this->KeyStateMap).field_0x8 - *(int *)&(this->KeyStateMap).field_0x34 !=
          (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FKey,FKeyState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) break;
      this_00 = (FKey *)(*(longlong *)&(this->KeyStateMap).field_0x0 +
                        (longlong)TStack_60.CurrentBitIndex * 0x110);
      bVar4 = FKey::IsAnalog(this_00);
      if ((!bVar4) && (0 < *(int *)&this_00[4].KeyDetails.Object)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  else {
    pTVar8 = TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                     *)&this->KeyStateMap,param_1);
    puVar10 = &pTVar8->field_0x18;
    if (pTVar8 == (TTuple<FKey,FKeyState> *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    if (puVar10 != (undefined1 *)0x0) {
      iVar2 = *(int *)(puVar10 + 0x50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
      return 0 < iVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return false;
}

// execClearSmoothing @ 14898e6a0

void __cdecl UPlayerInput::execClearSmoothing(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearSmoothing((UPlayerInput *)param_1);
  return;
}

// execGetOuterAPlayerController @ 14898ebe0

void __cdecl
UPlayerInput::execGetOuterAPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1->field_0x20;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(longlong *)param_3 = lVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execInvertAxis @ 14898ec60

void __cdecl UPlayerInput::execInvertAxis(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InvertAxis((UPlayerInput *)param_1,local_res10);
  return;
}

// execInvertAxisKey @ 14898ecf0

void __cdecl UPlayerInput::execInvertAxisKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FName FVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FInputAxisProperties *pFVar6;
  atomic<int> *paVar7;
  FKey local_78;
  FName local_60;
  FKeyDetails *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FKey local_48 [2];
  
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  local_58 = (FKeyDetails *)0x0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar5 = pTStack_50;
  pFVar4 = local_58;
  FVar3 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_50 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &pTStack_50->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties((UPlayerInput *)param_1);
  local_78.KeyName = FVar3;
  local_78.KeyDetails.Object = pFVar4;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties((UPlayerInput *)param_1);
  pFVar6 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&param_1[0xc].field_0x10,&local_78);
  if (pFVar6 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    local_78.KeyName.ComparisonIndex.Value = (uint)pFVar6->DeadZone;
    local_78.KeyName.Number = (uint)pFVar6->Sensitivity;
    uVar2 = pFVar6->field_0xc;
    local_78.KeyDetails.Object = *(FKeyDetails **)&pFVar6->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    local_48[0].KeyName = FVar3;
    local_48[0].KeyDetails.Object = pFVar4;
    local_48[0].KeyDetails.SharedReferenceCount.ReferenceController = pTVar5;
    local_78.KeyDetails.Object._0_5_ =
         CONCAT14(~pFVar6->bInvert & 1 | uVar2 & 0xfe,local_78.KeyDetails.Object._0_4_);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    SetAxisProperties((UPlayerInput *)param_1,local_48,(FInputAxisProperties *)&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execSetBind @ 148991c30

void __cdecl UPlayerInput::execSetBind(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBind((UPlayerInput *)param_1,local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetMouseSensitivity @ 148991d20

void __cdecl UPlayerInput::execSetMouseSensitivity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSharedReferencer<1> FVar2;
  uint uVar3;
  FInputAxisProperties *pFVar4;
  uint local_res8 [2];
  FKey local_48;
  FKey local_30;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = EKeys::MouseX.KeyDetails.SharedReferenceCount;
  local_48.KeyName = EKeys::MouseX.KeyName;
  local_48.KeyDetails.Object = EKeys::MouseX.KeyDetails.Object;
  local_48.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties((UPlayerInput *)param_1);
  pFVar4 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&param_1[0xc].field_0x10,&local_48);
  if (pFVar4 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  else {
    local_48.KeyName.ComparisonIndex.Value = (uint)pFVar4->DeadZone;
    local_48.KeyName.Number = (uint)pFVar4->Sensitivity;
    local_48.KeyDetails.Object = *(FKeyDetails **)&pFVar4->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    local_30.KeyName = EKeys::MouseX.KeyName;
    local_30.KeyDetails.Object = EKeys::MouseX.KeyDetails.Object;
    local_48.KeyName.Number = uVar3;
    local_30.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseX.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAxisProperties((UPlayerInput *)param_1,&local_30,(FInputAxisProperties *)&local_48);
  }
  FVar2.ReferenceController = EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  local_30.KeyName = EKeys::MouseY.KeyName;
  local_30.KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
  local_30.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  ConditionalInitAxisProperties((UPlayerInput *)param_1);
  pFVar4 = TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
           ::Find((TMapBase<FKey,FInputAxisProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,FInputAxisProperties,0>_>
                   *)&param_1[0xc].field_0x10,&local_30);
  if (pFVar4 == (FInputAxisProperties *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  else {
    local_48.KeyName.ComparisonIndex.Value = (uint)pFVar4->DeadZone;
    local_48.KeyName.Number = (uint)pFVar4->Sensitivity;
    local_48.KeyDetails.Object = *(FKeyDetails **)&pFVar4->Exponent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    local_30.KeyName = EKeys::MouseY.KeyName;
    local_30.KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
    local_48.KeyName.Number = uVar3;
    local_30.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SetAxisProperties((UPlayerInput *)param_1,&local_30,(FInputAxisProperties *)&local_48);
  }
  return;
}

// operator() @ 150533f00

bool __thiscall `UPlayerInput::SmoothMouse'::__l59::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4143675475270567713>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4143675475270567713>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

