// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146ea9680

UClass * __cdecl UBTTask_SetKeyValueRotator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueRotator",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueRotator,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_SetKeyValueRotator>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueRotator>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton;
}

// UBTTask_SetKeyValueRotator @ 146ecae20

UBTTask_SetKeyValueRotator * __thiscall
UBTTask_SetKeyValueRotator::UBTTask_SetKeyValueRotator
          (UBTTask_SetKeyValueRotator *this,FVTableHelper *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Value)._padding_ = 0;
  (this->Value).DefaultValue.Pitch = dVar1;
  (this->Value).DefaultValue.Yaw = dVar2;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.Roll = dVar3;
  return this;
}

// UBTTask_SetKeyValueRotator @ 146ecae90

UBTTask_SetKeyValueRotator * __thiscall
UBTTask_SetKeyValueRotator::UBTTask_SetKeyValueRotator
          (UBTTask_SetKeyValueRotator *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FObjectInitializer *pFVar6;
  FName *pFVar7;
  FName local_res8;
  FString local_18;
  
  pFVar6 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar6);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  dVar5 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Value)._padding_ = 0;
  (this->Value).DefaultValue.Pitch = dVar3;
  (this->Value).DefaultValue.Yaw = dVar4;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.Roll = dVar5;
  ::FString::FString(&local_18,"Set Rotator Key");
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
  pFVar7 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddRotatorFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar7);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  return this;
}

// ~UBTTask_SetKeyValueRotator @ 146ecd9b0

void __thiscall
UBTTask_SetKeyValueRotator::~UBTTask_SetKeyValueRotator(UBTTask_SetKeyValueRotator *this)

{
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2d00

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
UBTTask_SetKeyValueRotator::ExecuteTask
          (UBTTask_SetKeyValueRotator *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  double dVar1;
  uint uVar2;
  UBlackboardComponent *this_00;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double local_58;
  double dStack_50;
  TRotator<double> local_48;
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar2 = (uint)this->_padding_;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      TVar5 = (*pcVar3)();
      return TVar5;
    }
    if ((short)uVar2 != -1) {
      if (((this->Value)._padding_ == 0) ||
         (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                    (&local_28,this_00,(FName *)&this->Value,(FKey *)&(this->Value)._padding_),
         local_28.bIsSet == false)) {
        local_58 = (this->Value).DefaultValue.Pitch;
        dStack_50 = (this->Value).DefaultValue.Yaw;
        dVar1 = (this->Value).DefaultValue.Roll;
        uVar6 = SUB84(dVar1,0);
        uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_58 = local_28.TypedValue.Pitch;
        dStack_50 = local_28.TypedValue.Yaw;
        uVar6 = SUB84(local_28.TypedValue.Roll,0);
        uVar7 = (undefined4)((ulonglong)local_28.TypedValue.Roll >> 0x20);
      }
      uVar2 = (uint)this->_padding_;
      if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        TVar5 = (*pcVar3)();
        return TVar5;
      }
      local_48.Pitch = local_58;
      local_48.Yaw = dStack_50;
      local_48.Roll = (double)CONCAT44(uVar7,uVar6);
      UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>
                (this_00,(FKey)(ushort)uVar2,&local_48);
      return Succeeded;
    }
  }
  return Failed;
}

// GetPrivateStaticClass @ 146ee94e0

UClass * __cdecl UBTTask_SetKeyValueRotator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueRotator",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueRotator,0xc0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_SetKeyValueRotator>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueRotator>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueRotator.InnerSingleton;
}

// GetStaticDescription @ 146eedcd0

FString * __thiscall
UBTTask_SetKeyValueRotator::GetStaticDescription
          (UBTTask_SetKeyValueRotator *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString((FName *)&this->_padding_,&local_58);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  if ((this->Value)._padding_ == 0) {
    ::FString::PrintfImpl(&local_68,L"P=%f Y=%f R=%f");
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

// StaticRegisterNativesUBTTask_SetKeyValueRotator @ 146f00ed0

void __cdecl UBTTask_SetKeyValueRotator::StaticRegisterNativesUBTTask_SetKeyValueRotator(void)

{
  return;
}

