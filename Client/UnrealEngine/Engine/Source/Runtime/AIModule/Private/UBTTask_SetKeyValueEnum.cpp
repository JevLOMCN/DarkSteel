// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146ea8950

UClass * __cdecl UBTTask_SetKeyValueEnum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueEnum",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueEnum,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueEnum>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueEnum>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton;
}

// UBTTask_SetKeyValueEnum @ 146eca6c0

UBTTask_SetKeyValueEnum * __thiscall
UBTTask_SetKeyValueEnum::UBTTask_SetKeyValueEnum
          (UBTTask_SetKeyValueEnum *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->Value)._padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).EnumType.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->Value).DefaultValue = '\0';
  ::FString::FString(&(this->Value).NativeEnumTypeName,L"");
  return this;
}

// UBTTask_SetKeyValueEnum @ 146eca730

UBTTask_SetKeyValueEnum * __thiscall
UBTTask_SetKeyValueEnum::UBTTask_SetKeyValueEnum
          (UBTTask_SetKeyValueEnum *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FObjectInitializer *pFVar2;
  FString local_18;
  
  pFVar2 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).EnumType.field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->Value).DefaultValue = '\0';
  ::FString::FString(&(this->Value).NativeEnumTypeName,L"");
  ::FString::FString(&local_18,"Set Enum Key");
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

// ~UBTTask_SetKeyValueEnum @ 146ecd840

void __thiscall UBTTask_SetKeyValueEnum::~UBTTask_SetKeyValueEnum(UBTTask_SetKeyValueEnum *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Value).NativeEnumTypeName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2730

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
UBTTask_SetKeyValueEnum::ExecuteTask
          (UBTTask_SetKeyValueEnum *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  Type TVar5;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return Failed;
  }
  uVar1 = (uint)this->_padding_;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5 = (*pcVar2)();
      return TVar5;
    }
  }
  if ((short)uVar1 == -1) {
    TVar5 = Failed;
  }
  else {
    uVar4 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      (this_00,(FName *)&this->Value,(FKey *)&(this->Value)._padding_,
                       &(this->Value).DefaultValue);
    uVar1 = (uint)this->_padding_;
    if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5 = (*pcVar2)();
        return TVar5;
      }
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>(this_00,(FKey)(ushort)uVar1,uVar4);
    TVar5 = Succeeded;
  }
  return TVar5;
}

// GetPrivateStaticClass @ 146ee9120

UClass * __cdecl UBTTask_SetKeyValueEnum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueEnum",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueEnum,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueEnum>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueEnum>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueEnum.InnerSingleton;
}

// GetStaticDescription @ 146eed6a0

FString * __thiscall
UBTTask_SetKeyValueEnum::GetStaticDescription
          (UBTTask_SetKeyValueEnum *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = ::FName::ToString((FName *)&this->_padding_,&local_68);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  pFVar1 = FValueOrBBKey_Enum::ToString(&this->Value,&local_58);
  FStringFormatArg::FStringFormatArg(&local_28,pFVar1);
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

// PostLoad @ 146efb550

void __thiscall UBTTask_SetKeyValueEnum::PostLoad(UBTTask_SetKeyValueEnum *this)

{
  int *piVar1;
  uint *puVar2;
  UEnum *pUVar3;
  UEnum *pUVar4;
  code *pcVar5;
  FName *pFVar6;
  TTuple<FName,__int64> *pTVar7;
  bool bVar8;
  FName local_res10;
  TTuple<FName,__int64> local_28;
  
  UObject::PostLoad((UObject *)this);
  if ((this->EnumType).field0_0x0.DebugPtr != (UEnum *)0x0) {
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    pUVar3 = (this->EnumType).field0_0x0.DebugPtr;
    pFVar6 = ::FName::FName(&local_res10,0xd,L"BlackboardKey",FNAME_Add);
    FBlackboardKeySelector::AddEnumFilter
              ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar6,pUVar3);
    puVar2 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar2 = *puVar2 & 0xfffffffe;
    pUVar3 = (this->Value).EnumType.field0_0x0.DebugPtr;
    pUVar4 = (this->EnumType).field0_0x0.DebugPtr;
    if (pUVar3 == (UEnum *)0x0) {
      bVar8 = pUVar4 == (UEnum *)0x0;
    }
    else {
      bVar8 = pUVar3 == pUVar4;
    }
    if (!bVar8) {
      (this->Value)._padding_ = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UEnum *)0x0)) {
        (this->Value).EnumType.field0_0x0.DebugPtr = pUVar4;
        if (pUVar4 == (UEnum *)0x0) {
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
        (this->Value).EnumType.field0_0x0.DebugPtr = pUVar4;
      }
      if (((pUVar4->Names).NumValues < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar7 = UEnum::FNameData::operator[](&pUVar4->Names,&local_28,0);
      (this->Value).DefaultValue = pTVar7->field_0x8;
    }
  }
  return;
}

// StaticRegisterNativesUBTTask_SetKeyValueEnum @ 146f00e80

void __cdecl UBTTask_SetKeyValueEnum::StaticRegisterNativesUBTTask_SetKeyValueEnum(void)

{
  return;
}

