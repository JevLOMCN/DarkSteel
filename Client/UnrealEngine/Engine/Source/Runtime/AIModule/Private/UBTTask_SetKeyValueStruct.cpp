// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146ea98a0

UClass * __cdecl UBTTask_SetKeyValueStruct::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueStruct",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueStruct,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueStruct>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueStruct>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton;
}

// UBTTask_SetKeyValueStruct @ 146ecb120

UBTTask_SetKeyValueStruct * __thiscall
UBTTask_SetKeyValueStruct::UBTTask_SetKeyValueStruct
          (UBTTask_SetKeyValueStruct *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->StructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  FInstancedStruct::FInstancedStruct(&(this->Value).DefaultValue);
  return this;
}

// UBTTask_SetKeyValueStruct @ 146ecb180

UBTTask_SetKeyValueStruct * __thiscall
UBTTask_SetKeyValueStruct::UBTTask_SetKeyValueStruct
          (UBTTask_SetKeyValueStruct *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FObjectInitializer *pFVar2;
  FString local_18;
  
  pFVar2 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  FInstancedStruct::FInstancedStruct(&(this->Value).DefaultValue);
  ::FString::FString(&local_18,"Set Struct Key");
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
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  return this;
}

// ~UBTTask_SetKeyValueStruct @ 146ecda60

void __thiscall
UBTTask_SetKeyValueStruct::~UBTTask_SetKeyValueStruct(UBTTask_SetKeyValueStruct *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FInstancedStruct::Reset(&(this->Value).DefaultValue);
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2f70

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
UBTTask_SetKeyValueStruct::ExecuteTask
          (UBTTask_SetKeyValueStruct *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FConstStructView local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  FConstStructView local_28 [2];
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return Failed;
  }
  uVar1 = (uint)this->_padding_;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5)) {
    pcVar4 = (code *)swi(3);
    TVar6 = (*pcVar4)();
    return TVar6;
  }
  if ((short)uVar1 == -1) {
    TVar6 = Failed;
  }
  else {
    pUVar2 = (this->Value).DefaultValue.ScriptStruct.field0_0x0.DebugPtr;
    puVar3 = (this->Value).DefaultValue.StructMemory;
    if ((((this->Value)._padding_ == 0) ||
        (FBlackboard::TryGetBlackboardKeyStruct
                   (&local_48,this_00,(FName *)&this->Value,(FKey *)&(this->Value)._padding_,pUVar2)
        , CONCAT44(local_48.StructMemory._4_4_,local_48.StructMemory._0_4_) == 0)) ||
       (uVar7 = local_48.ScriptStruct._0_4_, uVar8 = local_48.ScriptStruct._4_4_,
       uVar9 = local_48.StructMemory._0_4_, uVar10 = local_48.StructMemory._4_4_,
       CONCAT44(local_48.ScriptStruct._4_4_,local_48.ScriptStruct._0_4_) == 0)) {
      local_38._0_4_ = SUB84(pUVar2,0);
      local_38._4_4_ = (undefined4)((ulonglong)pUVar2 >> 0x20);
      uStack_30._0_4_ = SUB84(puVar3,0);
      uStack_30._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
      uVar7 = (undefined4)local_38;
      uVar8 = local_38._4_4_;
      uVar9 = (undefined4)uStack_30;
      uVar10 = uStack_30._4_4_;
      local_38 = pUVar2;
      uStack_30 = puVar3;
    }
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      TVar6 = (*pcVar4)();
      return TVar6;
    }
    local_28[0].ScriptStruct._0_4_ = uVar7;
    local_28[0].ScriptStruct._4_4_ = uVar8;
    local_28[0].StructMemory._0_4_ = uVar9;
    local_28[0].StructMemory._4_4_ = uVar10;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Struct>(this_00,(FKey)(ushort)uVar1,local_28);
    TVar6 = Succeeded;
  }
  return TVar6;
}

// GetPrivateStaticClass @ 146ee9660

UClass * __cdecl UBTTask_SetKeyValueStruct::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueStruct",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueStruct,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueStruct>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueStruct>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueStruct.InnerSingleton;
}

// GetStaticDescription @ 146eee000

FString * __thiscall
UBTTask_SetKeyValueStruct::GetStaticDescription
          (UBTTask_SetKeyValueStruct *this,FString *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  FString *pFVar2;
  FName local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar2 = ::FName::ToString((FName *)&this->_padding_,&local_58);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar2);
  if ((this->Value)._padding_ == 0) {
    pUVar1 = (this->Value).DefaultValue.ScriptStruct.field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_68);
    }
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

// PostLoad @ 146efb8c0

void __thiscall UBTTask_SetKeyValueStruct::PostLoad(UBTTask_SetKeyValueStruct *this)

{
  int *piVar1;
  uint *puVar2;
  FInstancedStruct *this_00;
  UScriptStruct *pUVar3;
  FName *pFVar4;
  FName local_res8;
  
  UObject::PostLoad((UObject *)this);
  if ((this->StructType).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    pUVar3 = (this->StructType).field0_0x0.DebugPtr;
    pFVar4 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
    FBlackboardKeySelector::AddStructFilter
              ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar4,pUVar3);
    puVar2 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar2 = *puVar2 & 0xfffffffe;
    this_00 = &(this->Value).DefaultValue;
    pUVar3 = (this->StructType).field0_0x0.DebugPtr;
    if (pUVar3 != (this_00->ScriptStruct).field0_0x0.DebugPtr) {
      FInstancedStruct::InitializeAs(this_00,pUVar3,(uchar *)0x0);
      (this->Value)._padding_ = 0;
    }
  }
  return;
}

// StaticRegisterNativesUBTTask_SetKeyValueStruct @ 146f00ef0

void __cdecl UBTTask_SetKeyValueStruct::StaticRegisterNativesUBTTask_SetKeyValueStruct(void)

{
  return;
}

