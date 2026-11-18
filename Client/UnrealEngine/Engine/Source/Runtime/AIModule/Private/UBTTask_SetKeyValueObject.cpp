// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146ea9330

UClass * __cdecl UBTTask_SetKeyValueObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueObject",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueObject,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueObject>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueObject>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton;
}

// UBTTask_SetKeyValueObject @ 146ecac20

UBTTask_SetKeyValueObject * __thiscall
UBTTask_SetKeyValueObject::UBTTask_SetKeyValueObject
          (UBTTask_SetKeyValueObject *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  (this->BaseClass).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  (this->Value).BaseClass.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// UBTTask_SetKeyValueObject @ 146ecacb0

UBTTask_SetKeyValueObject * __thiscall
UBTTask_SetKeyValueObject::UBTTask_SetKeyValueObject
          (UBTTask_SetKeyValueObject *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FObjectInitializer *pFVar3;
  UClass *pUVar4;
  FName *pFVar5;
  UClass *local_res8;
  FName local_res18;
  FString local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  (this->BaseClass).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  (this->Value).BaseClass.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  ::FString::FString(&local_18,"Set Object Key");
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
  local_res8 = (this->BaseClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = ::FName::FName(&local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar5,
             (TSubclassOf<UObject>)&local_res8);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  return this;
}

// ~UBTTask_SetKeyValueObject @ 146ecd970

void __thiscall
UBTTask_SetKeyValueObject::~UBTTask_SetKeyValueObject(UBTTask_SetKeyValueObject *this)

{
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2be0

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
UBTTask_SetKeyValueObject::ExecuteTask
          (UBTTask_SetKeyValueObject *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  UObject *pUVar5;
  TObjectPtr<UObject>_u_0 local_res8;
  
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
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  if ((short)uVar1 == -1) {
    TVar4 = Failed;
  }
  else {
    local_res8 = (this->Value).DefaultValue.field0_0x0;
    pUVar5 = FBlackboard::GetValue<UBlackboardKeyType_Object>
                       (this_00,(FName *)&this->Value,(FKey *)&(this->Value)._padding_,
                        &local_res8.DebugPtr);
    uVar1 = (uint)this->_padding_;
    if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4 = (*pcVar2)();
        return TVar4;
      }
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Object>(this_00,(FKey)(ushort)uVar1,pUVar5);
    TVar4 = Succeeded;
  }
  return TVar4;
}

// GetPrivateStaticClass @ 146ee9420

UClass * __cdecl UBTTask_SetKeyValueObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueObject",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueObject,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueObject>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueObject>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueObject.InnerSingleton;
}

// GetStaticDescription @ 146eedb60

FString * __thiscall
UBTTask_SetKeyValueObject::GetStaticDescription
          (UBTTask_SetKeyValueObject *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
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
    pUVar1 = (this->Value).DefaultValue.field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res8.Number = *(uint *)&pUVar1->field_0x1c;
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

// PostLoad @ 146efb6b0

void __thiscall UBTTask_SetKeyValueObject::PostLoad(UBTTask_SetKeyValueObject *this)

{
  int *piVar1;
  int iVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UClass *pUVar7;
  bool bVar8;
  UClass *local_res8;
  FName local_res10;
  
  UObject::PostLoad((UObject *)this);
  pUVar5 = (this->BaseClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
    return;
  }
  iVar2 = (int)pUVar3->_padding_;
  if (((int)pUVar5->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  pUVar5 = (this->BaseClass).Class.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  pUVar3 = (UClass *)0x0;
  pUVar7 = pUVar3;
  if (pUVar4 != (UClass *)0x0) {
    iVar2 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar4->_padding_)
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar7 = (this->BaseClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  if (pUVar7 == pUVar5) {
    return;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  local_res8 = (this->BaseClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar6 = ::FName::FName(&local_res10,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar6,
             (TSubclassOf<UObject>)&local_res8);
  pUVar5 = (this->BaseClass).Class.field0_0x0.DebugPtr;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar7->_padding_)
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar3 = (this->BaseClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar5 = (this->Value).BaseClass.field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    bVar8 = pUVar3 == (UClass *)0x0;
  }
  else {
    bVar8 = pUVar5 == pUVar3;
  }
  if (bVar8) {
    return;
  }
  if ((pUVar5 != (UClass *)0x0) && (pUVar3 != (UClass *)0x0)) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_)
       ) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_146efb87f;
  }
  local_res8 = (UClass *)0x0;
  (this->Value)._padding_ = 0;
  (this->Value).DefaultValue.field0_0x0.DebugPtr = (UObject *)0x0;
LAB_146efb87f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Value).BaseClass.field0_0x0.DebugPtr = pUVar3;
  return;
}

// StaticRegisterNativesUBTTask_SetKeyValueObject @ 146f00ec0

void __cdecl UBTTask_SetKeyValueObject::StaticRegisterNativesUBTTask_SetKeyValueObject(void)

{
  return;
}

