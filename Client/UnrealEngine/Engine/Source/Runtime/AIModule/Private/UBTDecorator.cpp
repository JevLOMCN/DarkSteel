// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 19

// StaticClass @ 146eadd70

UClass * __cdecl UBTDecorator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator",
               &Z_Registration_Info_UClass_UBTDecorator.InnerSingleton,
               StaticRegisterNativesUBTDecorator,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator>,
               InternalVTableHelperCtorCaller<UBTDecorator>,local_res8,UBTAuxiliaryNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator.InnerSingleton;
}

// UBTDecorator @ 146ec5440

UBTDecorator * __thiscall UBTDecorator::UBTDecorator(UBTDecorator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTDecorator @ 146ec5490

UBTDecorator * __thiscall UBTDecorator::UBTDecorator(UBTDecorator *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  (this->FlowAbortMode).Value = '\0';
  puVar3 = &this->field_0x60;
  this->bAllowAbortNone = 1;
  this->bInverseCondition = 0;
  this->bShowInverseConditionDesc = 1;
  this->bNotifyProcessed = 0;
  this->bNotifyDeactivation = 0;
  this->bNotifyActivation = 0;
  this->bAllowAbortChildNodes = 1;
  this->bAllowAbortLowerPri = 1;
  return this;
}

// ~UBTDecorator @ 146ecc9f0

void __thiscall UBTDecorator::~UBTDecorator(UBTDecorator *this)

{
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateRawConditionValue @ 146ed44f0

bool __thiscall
UBTDecorator::CalculateRawConditionValue
          (UBTDecorator *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return true;
}

// ConditionalFlowAbort @ 146ed7cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTDecorator::ConditionalFlowAbort
          (UBTDecorator *this,UBehaviorTreeComponent *param_1,EBTDecoratorAbortRequest param_2)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  wchar_t *pwVar4;
  FString local_38;
  FString local_28;
  
  if (((this->FlowAbortMode).Value != '\0') &&
     (iVar2 = UBehaviorTreeComponent::FindInstanceContainingNode(param_1,(UBTNode *)this->_padding_)
     , iVar2 != -1)) {
    puVar3 = UBehaviorTreeComponent::GetNodeMemory(param_1,(UBTNode *)this,iVar2);
    bVar1 = WrappedCanExecute(this,param_1,puVar3);
    if (FVisualLogger::bIsRecording != 0) {
      pwVar4 = L"true";
      if (!bVar1) {
        pwVar4 = L"false";
      }
      ::FString::FString(&local_38,pwVar4);
      UBehaviorTreeTypes::DescribeNodeHelper(&local_28,(UBTNode *)this);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, ConditionalFlowAbort(%s) pass:%s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (!bVar1) {
      UBehaviorTreeComponent::RequestBranchDeactivation(param_1,this);
      return;
    }
    UBehaviorTreeComponent::RequestBranchActivation(param_1,this,param_2 == ConditionPassing);
  }
  return;
}

// GetPrivateStaticClass @ 146ee70f0

UClass * __cdecl UBTDecorator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator",
               &Z_Registration_Info_UClass_UBTDecorator.InnerSingleton,
               StaticRegisterNativesUBTDecorator,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator>,
               InternalVTableHelperCtorCaller<UBTDecorator>,local_res8,UBTAuxiliaryNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator.InnerSingleton;
}

// GetStaticDescription @ 146eeb050

FString * __thiscall
UBTDecorator::GetStaticDescription(UBTDecorator *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ulonglong uVar11;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar1 = (this->FlowAbortMode).Value;
  uVar11 = (ulonglong)bVar1;
  FVar8.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  FVar9.Data = FVar8.Data;
  if (bVar1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(AbortModeDesc,L"None");
      ::FString::FString(AbortModeDesc + 1,L"Lower Priority");
      ::FString::FString(AbortModeDesc + 2,L"Self");
      ::FString::FString(AbortModeDesc + 3,L"Both");
      atexit(`UBehaviorTreeTypes::DescribeFlowAbortMode'::__l2::
             _dynamic_atexit_destructor_for__AbortModeDesc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (uVar11 < 4) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = AbortModeDesc[uVar11].Data.ArrayNum;
      _Src = AbortModeDesc[uVar11].Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = iVar7;
      if (iVar7 == 0) {
        local_88.Data.ArrayMax = 0;
        pFVar6 = &local_88;
        bVar3 = true;
        bVar2 = false;
        local_58.Data.AllocatorInstance.Data = FVar8.Data;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,(ForAnyElementType *)&local_88,iVar7,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
        pFVar6 = &local_88;
        bVar3 = true;
        bVar2 = false;
        local_58.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      pFVar6 = &local_48;
      bVar3 = false;
      bVar2 = true;
    }
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    ::FString::ToLower(&local_58,&local_38);
    ::FString::PrintfImpl(&local_68,L"aborts %s");
    iVar7 = local_68.Data.ArrayNum;
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  iVar4 = 0;
  iVar5 = iVar4;
  if (this->bShowInverseConditionDesc == 1 && this->bInverseCondition == 1) {
    ::FString::operator=(&local_78,L"inversed");
    iVar5 = local_78.Data.ArrayNum;
  }
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = iVar4;
  }
  if (iVar10 == 0) {
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = iVar4;
    }
    if (iVar7 == 0) goto LAB_146eeb286;
  }
  ::FString::PrintfImpl(&local_48,L"( %s%s%s )\n");
  FVar8.Data = local_48.Data.AllocatorInstance.Data;
LAB_146eeb286:
  UBehaviorTreeTypes::GetShortTypeName(&local_38,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return __return_storage_ptr__;
}

// IsFlowAbortModeValid @ 146ef3d10

bool __thiscall UBTDecorator::IsFlowAbortModeValid(UBTDecorator *this)

{
  return true;
}

// OnNodeActivation @ 146ef8370

void __thiscall UBTDecorator::OnNodeActivation(UBTDecorator *this,FBehaviorTreeSearchData *param_1)

{
  return;
}

// OnNodeDeactivation @ 146ef89a0

void __thiscall
UBTDecorator::OnNodeDeactivation(UBTDecorator *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  return;
}

// OnNodeProcessed @ 146ef90c0

void __thiscall
UBTDecorator::OnNodeProcessed(UBTDecorator *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  return;
}

// SetIsInversed @ 146eff9c0

void __thiscall UBTDecorator::SetIsInversed(UBTDecorator *this,bool param_1)

{
  this->bInverseCondition = 0;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 | (uint)param_1 << 7;
  return;
}

// StaticRegisterNativesUBTDecorator @ 146f00b10

void __cdecl UBTDecorator::StaticRegisterNativesUBTDecorator(void)

{
  return;
}

// UpdateFlowAbortMode @ 146f038f0

void __thiscall UBTDecorator::UpdateFlowAbortMode(UBTDecorator *this)

{
  return;
}

// WrappedCanExecute @ 146f04110

bool __thiscall
UBTDecorator::WrappedCanExecute(UBTDecorator *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  UBTDecorator *pUVar3;
  
  pUVar3 = this;
  if ((this->_padding_ & 0x40000000000) != 0) {
    pUVar3 = (UBTDecorator *)UBTNode::GetNodeInstance((UBTNode *)this,param_1,param_2);
  }
  if (pUVar3 != (UBTDecorator *)0x0) {
    bVar2 = (**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,param_1,param_2);
    return this->bInverseCondition != bVar2;
  }
  return false;
}

// WrappedOnNodeActivation @ 146f04660

void __thiscall
UBTDecorator::WrappedOnNodeActivation(UBTDecorator *this,FBehaviorTreeSearchData *param_1)

{
  uchar *puVar1;
  
  if (this->bNotifyActivation != 0) {
    if ((this->_padding_ & 0x40000000000) != 0) {
      puVar1 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this,param_1);
      this = (UBTDecorator *)UBTNode::GetNodeInstance((UBTNode *)this,param_1->OwnerComp,puVar1);
    }
    if (this != (UBTDecorator *)0x0) {
      (**(code **)(this->_padding_ + 0x318))(this,param_1);
    }
  }
  return;
}

// WrappedOnNodeDeactivation @ 146f046c0

void __thiscall
UBTDecorator::WrappedOnNodeDeactivation
          (UBTDecorator *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  uchar *puVar1;
  
  if (this->bNotifyDeactivation != 0) {
    if ((this->_padding_ & 0x40000000000) != 0) {
      puVar1 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this,param_1);
      this = (UBTDecorator *)UBTNode::GetNodeInstance((UBTNode *)this,param_1->OwnerComp,puVar1);
    }
    if (this != (UBTDecorator *)0x0) {
      (**(code **)(this->_padding_ + 800))(this,param_1,param_2);
    }
  }
  return;
}

// WrappedOnNodeProcessed @ 146f04730

void __thiscall
UBTDecorator::WrappedOnNodeProcessed
          (UBTDecorator *this,FBehaviorTreeSearchData *param_1,Type *param_2)

{
  uchar *puVar1;
  
  if (this->bNotifyProcessed != 0) {
    if ((this->_padding_ & 0x40000000000) != 0) {
      puVar1 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this,param_1);
      this = (UBTDecorator *)UBTNode::GetNodeInstance((UBTNode *)this,param_1->OwnerComp,puVar1);
    }
    if (this != (UBTDecorator *)0x0) {
      (**(code **)(this->_padding_ + 0x328))(this,param_1,param_2);
    }
  }
  return;
}

