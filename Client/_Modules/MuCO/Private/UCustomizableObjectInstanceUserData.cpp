// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 8

// StaticClass @ 14ab984f0

UClass * __cdecl UCustomizableObjectInstanceUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUserData",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUserData,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUserData>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton;
}

// UCustomizableObjectInstanceUserData @ 14aba00e0

UCustomizableObjectInstanceUserData * __thiscall
UCustomizableObjectInstanceUserData::UCustomizableObjectInstanceUserData
          (UCustomizableObjectInstanceUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUserData__6B_;
  (this->AnimationGameplayTag).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationGameplayTag).GameplayTags.ArrayNum = 0;
  (this->AnimationGameplayTag).GameplayTags.ArrayMax = 0;
  (this->AnimationGameplayTag).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationGameplayTag).ParentTags.ArrayNum = 0;
  (this->AnimationGameplayTag).ParentTags.ArrayMax = 0;
  (this->AnimationSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSlots).ArrayNum = 0;
  (this->AnimationSlots).ArrayMax = 0;
  return this;
}

// UCustomizableObjectInstanceUserData @ 14aba0130

UCustomizableObjectInstanceUserData * __thiscall
UCustomizableObjectInstanceUserData::UCustomizableObjectInstanceUserData
          (UCustomizableObjectInstanceUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUserData__6B_;
  (this->AnimationGameplayTag).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationGameplayTag).GameplayTags.ArrayNum = 0;
  (this->AnimationGameplayTag).GameplayTags.ArrayMax = 0;
  (this->AnimationGameplayTag).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationGameplayTag).ParentTags.ArrayNum = 0;
  (this->AnimationGameplayTag).ParentTags.ArrayMax = 0;
  (this->AnimationSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationSlots).ArrayNum = 0;
  (this->AnimationSlots).ArrayMax = 0;
  return this;
}

// ~UCustomizableObjectInstanceUserData @ 14aba29b0

void __thiscall
UCustomizableObjectInstanceUserData::~UCustomizableObjectInstanceUserData
          (UCustomizableObjectInstanceUserData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUserData__6B_;
  DestructItems<FCustomizableObjectAnimationSlot,int>
            ((FCustomizableObjectAnimationSlot *)(this->AnimationSlots).AllocatorInstance.Data,
             (this->AnimationSlots).ArrayNum);
  pFVar1 = (this->AnimationSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationGameplayTag).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationGameplayTag).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14aba55f0

UClass * __cdecl UCustomizableObjectInstanceUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUserData",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUserData,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUserData>,
               InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUserData.InnerSingleton;
}

// StaticRegisterNativesUCustomizableObjectInstanceUserData @ 14aba6990

void __cdecl
UCustomizableObjectInstanceUserData::StaticRegisterNativesUCustomizableObjectInstanceUserData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableObjectInstanceUserData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAnimationGameplayTags @ 14aba7740

void __cdecl
UCustomizableObjectInstanceUserData::execGetAnimationGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGameplayTagContainer::operator=(param_3,(FGameplayTagContainer *)(param_1 + 1));
  return;
}

// execSetAnimationGameplayTags @ 14aba7770

void __cdecl
UCustomizableObjectInstanceUserData::execSetAnimationGameplayTags
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGameplayTagContainer *pFVar2;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FGameplayTagContainer *)param_2->MostRecentPropertyAddress != (FGameplayTagContainer *)0x0) {
    pFVar2 = (FGameplayTagContainer *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGameplayTagContainer::operator=((FGameplayTagContainer *)(param_1 + 1),pFVar2);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

