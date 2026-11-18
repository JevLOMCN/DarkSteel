// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146ea9070

UClass * __cdecl UBTTask_SetKeyValueName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueName",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueName,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueName>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueName>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton;
}

// UBTTask_SetKeyValueName @ 146ecaac0

UBTTask_SetKeyValueName * __thiscall
UBTTask_SetKeyValueName::UBTTask_SetKeyValueName
          (UBTTask_SetKeyValueName *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->Value = 0;
  (this->Value).DefaultValue.ComparisonIndex = 0;
  (this->Value).DefaultValue.Number = 0;
  *(undefined2 *)&(this->Value).field_0x8 = 0xffff;
  return this;
}

// UBTTask_SetKeyValueName @ 146ecab10

UBTTask_SetKeyValueName * __thiscall
UBTTask_SetKeyValueName::UBTTask_SetKeyValueName
          (UBTTask_SetKeyValueName *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FObjectInitializer *pFVar3;
  FName *pFVar4;
  FName local_res8;
  FString local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined8 *)&this->Value = 0;
  *(undefined2 *)&(this->Value).field_0x8 = 0xffff;
  (this->Value).DefaultValue.ComparisonIndex = 0;
  (this->Value).DefaultValue.Number = 0;
  ::FString::FString(&local_18,"Set Name Key");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 & 0xfffffffe;
  pFVar4 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddNameFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar4);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  return this;
}

// ~UBTTask_SetKeyValueName @ 146ecd930

void __thiscall UBTTask_SetKeyValueName::~UBTTask_SetKeyValueName(UBTTask_SetKeyValueName *this)

{
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2a80

/* WARNING: Removing unreachable block (ram,0x000146ee2b3f) */
/* WARNING: Removing unreachable block (ram,0x000146ee2b64) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_SetKeyValueName::ExecuteTask
          (UBTTask_SetKeyValueName *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FName local_res8;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return Failed;
  }
  uVar1 = (uint)this->_padding_;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  if ((short)uVar1 == -1) {
    TVar4 = Failed;
  }
  else {
    if ((*(longlong *)&this->Value == 0) ||
       (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
                  ((UBlackboardComponent *)&local_res8,(FName *)this_00,(FKey *)&this->Value),
       local_res8.ComparisonIndex.Value.Value == 0xffffffff)) {
      local_res8 = (this->Value).DefaultValue;
    }
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Name>(this_00,(FKey)(ushort)uVar1,local_res8);
    TVar4 = Succeeded;
  }
  return TVar4;
}

// GetPrivateStaticClass @ 146ee9360

UClass * __cdecl UBTTask_SetKeyValueName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueName",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueName,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueName>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueName>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueName.InnerSingleton;
}

// GetStaticDescription @ 146eeda30

FString * __thiscall
UBTTask_SetKeyValueName::GetStaticDescription
          (UBTTask_SetKeyValueName *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString((FName *)&this->_padding_,&local_58);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  if (*(longlong *)&(this->Value).field_0x0 == 0) {
    ::FName::ToString(&(this->Value).DefaultValue,&local_68);
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName((FValueOrBlackboardKeyBase *)&this->Value,&local_68);
  }
  FStringFormatArg::FStringFormatArg(&local_28,&local_68);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_78.AllocatorInstance,2,&local_78.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_78.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"Setting {0} to {1}",&local_78);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringFormatArg *)local_78.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_SetKeyValueName @ 146f00eb0

void __cdecl UBTTask_SetKeyValueName::StaticRegisterNativesUBTTask_SetKeyValueName(void)

{
  return;
}

