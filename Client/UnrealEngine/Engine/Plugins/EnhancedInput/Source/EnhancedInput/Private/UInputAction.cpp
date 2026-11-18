// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 6

// StaticClass @ 14a6bb360

UClass * __cdecl UInputAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputAction",
               &Z_Registration_Info_UClass_UInputAction.InnerSingleton,
               StaticRegisterNativesUInputAction,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputAction>,InternalVTableHelperCtorCaller<UInputAction>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAction.InnerSingleton;
}

// UInputAction @ 14a6cc830

UInputAction * __thiscall UInputAction::UInputAction(UInputAction *this,FVTableHelper *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UInputAction__6B_;
  pFVar2 = FText::GetEmpty();
  (this->ActionDescription).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->ActionDescription).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ActionDescription).Flags = pFVar2->Flags;
  this->ValueType = Boolean;
  this->AccumulationBehavior = TakeHighestAbsoluteValue;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = 0;
  (this->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  (this->PlayerMappableKeySettings).field0_0x0.DebugPtr = (UPlayerMappableKeySettings *)0x0;
  this->bTriggerWhenPaused = false;
  this->bConsumeInput = true;
  this->bConsumesActionAndAxisMappings = false;
  this->bReserveAllMappings = false;
  return this;
}

// UInputAction @ 14a6cc8c0

UInputAction * __thiscall UInputAction::UInputAction(UInputAction *this,FObjectInitializer *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UInputAction__6B_;
  pFVar2 = FText::GetEmpty();
  (this->ActionDescription).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (this->ActionDescription).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ActionDescription).Flags = pFVar2->Flags;
  this->ValueType = Boolean;
  this->AccumulationBehavior = TakeHighestAbsoluteValue;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = 0;
  (this->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  (this->PlayerMappableKeySettings).field0_0x0.DebugPtr = (UPlayerMappableKeySettings *)0x0;
  this->bTriggerWhenPaused = false;
  this->bConsumeInput = true;
  this->bConsumesActionAndAxisMappings = false;
  this->bReserveAllMappings = false;
  return this;
}

// ~UInputAction @ 14a6cf760

void __thiscall UInputAction::~UInputAction(UInputAction *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UInputAction__6B_;
  pFVar1 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triggers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ActionDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e0f50

UClass * __cdecl UInputAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputAction",
               &Z_Registration_Info_UClass_UInputAction.InnerSingleton,
               StaticRegisterNativesUInputAction,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputAction>,InternalVTableHelperCtorCaller<UInputAction>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAction.InnerSingleton;
}

// StaticRegisterNativesUInputAction @ 14a6fb590

void __cdecl UInputAction::StaticRegisterNativesUInputAction(void)

{
  return;
}

