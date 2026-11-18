// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146ea79f0

UClass * __cdecl UBTDecorator_IsBBEntryOfClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_IsBBEntryOfClass",
               &Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton,
               StaticRegisterNativesUBTDecorator_IsBBEntryOfClass,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_IsBBEntryOfClass>,
               InternalVTableHelperCtorCaller<UBTDecorator_IsBBEntryOfClass>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton;
}

// UBTDecorator_IsBBEntryOfClass @ 146ec6df0

UBTDecorator_IsBBEntryOfClass * __thiscall
UBTDecorator_IsBBEntryOfClass::UBTDecorator_IsBBEntryOfClass
          (UBTDecorator_IsBBEntryOfClass *this,FVTableHelper *param_1)

{
  uint *puVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffff;
  (this->TestClass)._padding_ = 0;
  *(undefined2 *)&(this->TestClass)._padding_ = 0xffff;
  (this->TestClass).DefaultValue.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  (this->TestClass).BaseClass.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// UBTDecorator_IsBBEntryOfClass @ 146ec6e90

UBTDecorator_IsBBEntryOfClass * __thiscall
UBTDecorator_IsBBEntryOfClass::UBTDecorator_IsBBEntryOfClass
          (UBTDecorator_IsBBEntryOfClass *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FName *pFVar2;
  UClass *local_res8 [2];
  FName local_res18 [2];
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase
            ((UBTDecorator_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->TestClass)._padding_ = 0;
  *(undefined2 *)&(this->TestClass)._padding_ = 0xffff;
  (this->TestClass).DefaultValue.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  (this->TestClass).BaseClass.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  ::FString::operator=((FString *)&this->_padding_,L"Is BlackBoard value of given Class");
  local_res8[0] = Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  pFVar2 = ::FName::FName(local_res18,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar2,
             (TSubclassOf<UObject>)local_res8);
  return this;
}

// ~UBTDecorator_IsBBEntryOfClass @ 146eccf00

void __thiscall
UBTDecorator_IsBBEntryOfClass::~UBTDecorator_IsBBEntryOfClass(UBTDecorator_IsBBEntryOfClass *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase((UBTDecorator_BlackboardBase *)this);
  return;
}

// CalculateRawConditionValue @ 146ed5460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBTDecorator_IsBBEntryOfClass::CalculateRawConditionValue
          (UBTDecorator_IsBBEntryOfClass *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  UBlackboardComponent *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UClass>_u_0 local_res10;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return false;
  }
  uVar1 = (uint)this->_padding_;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pUVar7 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this_00,(FKey)(ushort)uVar1);
  if (pUVar7 != (UObject *)0x0) {
    lVar3 = *(longlong *)&pUVar7->field_0x10;
    local_res10 = (this->TestClass).DefaultValue.field0_0x0;
    pUVar8 = FBlackboard::GetValue<UBlackboardKeyType_Class>
                       (this_00,(FName *)&this->TestClass,(FKey *)&(this->TestClass)._padding_,
                        &local_res10.DebugPtr);
    if (pUVar8 != (UClass *)0x0) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return true;
      }
    }
  }
  return false;
}

// DescribeRuntimeValues @ 146edbac0

void __thiscall
UBTDecorator_IsBBEntryOfClass::DescribeRuntimeValues
          (UBTDecorator_IsBBEntryOfClass *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 in_register_0000008c;
  void *local_18 [2];
  
  pFVar4 = (FScriptContainerElement *)
           (**(code **)(this->_padding_ + 0x2f0))
                     (this,local_18,param_2,CONCAT44(in_register_0000008c,param_3));
  pFVar5 = (param_4->AllocatorInstance).Data;
  if ((pFVar5 <= pFVar4) && (pFVar4 < pFVar5 + (longlong)param_4->ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_4->ArrayNum;
  if (iVar3 == param_4->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar3 + 1;
  pFVar5 = (param_4->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = *(undefined8 *)pFVar4;
  *(undefined8 *)pFVar4 = 0;
  *(undefined4 *)(pFVar5 + 8) = *(undefined4 *)(pFVar4 + 8);
  *(undefined4 *)(pFVar5 + 0xc) = *(undefined4 *)(pFVar4 + 0xc);
  *(undefined8 *)(pFVar4 + 8) = 0;
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// GetPrivateStaticClass @ 146ee79f0

UClass * __cdecl UBTDecorator_IsBBEntryOfClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_IsBBEntryOfClass",
               &Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton,
               StaticRegisterNativesUBTDecorator_IsBBEntryOfClass,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_IsBBEntryOfClass>,
               InternalVTableHelperCtorCaller<UBTDecorator_IsBBEntryOfClass>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_IsBBEntryOfClass.InnerSingleton;
}

// GetStaticDescription @ 146eebbf0

FString * __thiscall
UBTDecorator_IsBBEntryOfClass::GetStaticDescription
          (UBTDecorator_IsBBEntryOfClass *this,FString *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  UBlackboardData *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FString *pFVar7;
  FBlackboardEntry *this_01;
  UClass *pUVar8;
  longlong lVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((this->_padding_ == 0) ||
     (this_00 = *(UBlackboardData **)(this->_padding_ + 0x38), this_00 == (UBlackboardData *)0x0)) {
    ::FString::FString(__return_storage_ptr__,"invalid");
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  uVar1 = (uint)this->_padding_;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar5)();
    return pFVar7;
  }
  this_01 = UBlackboardData::GetKey(this_00,(FKey)(ushort)uVar1);
  ::FString::FString(__return_storage_ptr__,"invalid");
  if (this_01 != (FBlackboardEntry *)0x0) {
    lVar3 = this->_padding_;
    lVar9 = 0;
    if ((lVar3 != 0) && (pUVar8 = UBlackboardKeyType::StaticClass(), pUVar8 != (UClass *)0x0)) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar9 = this->_padding_;
      }
    }
    if (((this_01->KeyType).field0_0x0.DebugPtr)->_padding_ == lVar9) {
      ::FName::ToString(&this_01->EntryName,&local_28);
      if ((this->TestClass)._padding_ == 0) {
        pUVar8 = (this->TestClass).DefaultValue.field0_0x0.DebugPtr;
        if (pUVar8 == (UClass *)0x0) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          local_res8 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_res8,&local_38);
        }
      }
      else {
        FValueOrBlackboardKeyBase::ToStringKeyName
                  ((FValueOrBlackboardKeyBase *)&this->TestClass,&local_38);
      }
      ::FString::PrintfImpl(&local_48,L"Check if %s is of class %s");
      if (__return_storage_ptr__ != &local_48) {
        pFVar4 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// OnBlackboardKeyValueChange @ 146ef6780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
UBTDecorator_IsBBEntryOfClass::OnBlackboardKeyValueChange
          (UBTDecorator_IsBBEntryOfClass *this,UBlackboardComponent *param_1,FKey param_2)

{
  int iVar1;
  uint uVar2;
  UBrainComponent *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EBlackboardNotificationResult EVar7;
  byte bVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar3 = (param_1->BrainComp).field0_0x0.DebugPtr;
  pwVar12 = L"";
  if (pUVar3 != (UBrainComponent *)0x0) {
    pUVar9 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    lVar4 = pUVar3->_padding_;
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) goto LAB_146ef67fa;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Cast<UBehaviorTreeComponent>(Blackboard.GetBrainComponent())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_IsBBEntryOfClass.cpp"
                     ,0x22,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
LAB_146ef67fa:
  uVar2 = (uint)this->_padding_;
  if ((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  if ((ushort)uVar2 != param_2.Key) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlackboardKey.GetSelectedKeyID() == ChangedKeyID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_IsBBEntryOfClass.cpp"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
  pUVar3 = (param_1->BrainComp).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(this->_padding_ + 0x330);
  if (pUVar3 != (UBrainComponent *)0x0) {
    pUVar9 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      lVar4 = this->_padding_;
      bVar8 = (*pcVar5)(this,pUVar3,0);
      if (bVar8 != ((byte)((uint)lVar4 >> 7) & 1)) {
        UBehaviorTreeComponent::RequestBranchEvaluation
                  ((UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr,
                   (UBTDecorator *)this);
      }
      return ContinueObserving;
    }
    pFVar10 = GetTypeName<UBehaviorTreeComponent>(&local_38);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UBrainComponent>(&local_28,pUVar3);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar11);
  }
  pFVar10 = GetTypeName<UBehaviorTreeComponent>(&local_48);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// StaticRegisterNativesUBTDecorator_IsBBEntryOfClass @ 146f00c00

void __cdecl UBTDecorator_IsBBEntryOfClass::StaticRegisterNativesUBTDecorator_IsBBEntryOfClass(void)

{
  return;
}

