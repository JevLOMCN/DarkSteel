// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 9

// StaticClass @ 14d9b5330

UClass * __cdecl UPhysicsControlAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlAsset",
               &Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton,
               StaticRegisterNativesUPhysicsControlAsset,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsControlAsset>,
               InternalVTableHelperCtorCaller<UPhysicsControlAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton;
}

// UPhysicsControlAsset @ 14d9bfa40

UPhysicsControlAsset * __thiscall
UPhysicsControlAsset::UPhysicsControlAsset(UPhysicsControlAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData(&this->CharacterSetupData);
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x48 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x48 = 0;
  (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ControlSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ControlSetUpdates.ArrayMax = 0;
  (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayMax = 0;
  (this->InitialControlAndModifierUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialControlAndModifierUpdates).ArrayNum = 0;
  (this->InitialControlAndModifierUpdates).ArrayMax = 0;
  *(undefined8 *)&this->Profiles = 0;
  *(undefined8 *)&(this->Profiles).field_0x8 = 0;
  *(undefined8 *)&(this->Profiles).field_0x20 = 0;
  *(undefined4 *)&(this->Profiles).field_0x28 = 0;
  *(undefined4 *)&(this->Profiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Profiles).field_0x34 = 0;
  *(undefined4 *)&(this->Profiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Profiles).field_0x40 = 0;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  return this;
}

// UPhysicsControlAsset @ 14d9bfb70

UPhysicsControlAsset * __thiscall
UPhysicsControlAsset::UPhysicsControlAsset(UPhysicsControlAsset *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData(&this->CharacterSetupData);
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x48 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x34 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x48 = 0;
  (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ControlSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ControlSetUpdates.ArrayMax = 0;
  (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayMax = 0;
  (this->InitialControlAndModifierUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialControlAndModifierUpdates).ArrayNum = 0;
  (this->InitialControlAndModifierUpdates).ArrayMax = 0;
  *(undefined8 *)&this->Profiles = 0;
  *(undefined8 *)&(this->Profiles).field_0x8 = 0;
  *(undefined8 *)&(this->Profiles).field_0x20 = 0;
  *(undefined4 *)&(this->Profiles).field_0x28 = 0;
  *(undefined4 *)&(this->Profiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Profiles).field_0x34 = 0;
  *(undefined4 *)&(this->Profiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Profiles).field_0x40 = 0;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  return this;
}

// ~UPhysicsControlAsset @ 14d9c1340

void __thiscall UPhysicsControlAsset::~UPhysicsControlAsset(UPhysicsControlAsset *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Profiles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlControlAndModifierUpdates>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Profiles);
  DestructItems<FPhysicsControlControlAndModifierUpdates,int>
            ((FPhysicsControlControlAndModifierUpdates *)
             (this->InitialControlAndModifierUpdates).AllocatorInstance.Data,
             (this->InitialControlAndModifierUpdates).ArrayNum);
  pFVar2 = (this->InitialControlAndModifierUpdates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ModifierSetUpdates.ArrayNum);
  pFVar2 = (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ControlSetUpdates.ArrayNum);
  pFVar2 = (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalControlsAndModifiers).Modifiers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AdditionalControlsAndModifiers).Modifiers);
  *(undefined4 *)&(this->AdditionalControlsAndModifiers).Controls.field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalControlsAndModifiers).Controls.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalControlsAndModifiers);
  pFVar2 = (this->CharacterSetupData).LimbSetupData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPreviewMesh @ 14d9de860

USkeletalMesh * __thiscall UPhysicsControlAsset::GetPreviewMesh(UPhysicsControlAsset *this)

{
  return (USkeletalMesh *)0x0;
}

// GetPrivateStaticClass @ 14d9de930

UClass * __cdecl UPhysicsControlAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlAsset",
               &Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton,
               StaticRegisterNativesUPhysicsControlAsset,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsControlAsset>,
               InternalVTableHelperCtorCaller<UPhysicsControlAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlAsset.InnerSingleton;
}

// SetPreviewMesh @ 14d9ed580

void __thiscall
UPhysicsControlAsset::SetPreviewMesh(UPhysicsControlAsset *this,USkeletalMesh *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUPhysicsControlAsset @ 14d9edb80

void __cdecl UPhysicsControlAsset::StaticRegisterNativesUPhysicsControlAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14d9f4c90

UObject * __thiscall UPhysicsControlAsset::_getUObject(UPhysicsControlAsset *this)

{
  return (UObject *)&this[-1].Profiles.field_0x28;
}

