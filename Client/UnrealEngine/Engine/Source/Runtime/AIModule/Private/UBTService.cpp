// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146eae2f0

UClass * __cdecl UBTService::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService",
               &Z_Registration_Info_UClass_UBTService.InnerSingleton,StaticRegisterNativesUBTService
               ,0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UBTService>,InternalVTableHelperCtorCaller<UBTService>,local_res8
               ,UBTAuxiliaryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService.InnerSingleton;
}

// UBTService @ 146ec7cf0

UBTService * __thiscall UBTService::UBTService(UBTService *this,FVTableHelper *param_1)

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

// UBTService @ 146ec7d40

UBTService * __thiscall UBTService::UBTService(UBTService *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xc;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  this->Interval = 0.5;
  puVar3 = &this->field_0x68;
  this->bCallTickOnSearchStart = 0;
  this->bNotifyOnSearch = 1;
  this->bRestartTimerOnEachActivation = 0;
  this->RandomDeviation = 0.1;
  return this;
}

// ~UBTService @ 146ecd210

void __thiscall UBTService::~UBTService(UBTService *this)

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

// GetPrivateStaticClass @ 146ee8160

UClass * __cdecl UBTService::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService",
               &Z_Registration_Info_UClass_UBTService.InnerSingleton,StaticRegisterNativesUBTService
               ,0x70,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UBTService>,InternalVTableHelperCtorCaller<UBTService>,local_res8
               ,UBTAuxiliaryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService.InnerSingleton;
}

// GetStaticDescription @ 146eec460

FString * __thiscall
UBTService::GetStaticDescription(UBTService *this,FString *__return_storage_ptr__)

{
  FString local_28;
  void *local_18 [2];
  
  (**(code **)(this->_padding_ + 0x318))(this,local_18);
  UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetStaticServiceDescription @ 146eee5e0

FString * __thiscall
UBTService::GetStaticServiceDescription(UBTService *this,FString *__return_storage_ptr__)

{
  GetStaticTickIntervalDescription(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStaticTickIntervalDescription @ 146eee870

FString * __thiscall
UBTService::GetStaticTickIntervalDescription(UBTService *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ & 4) == 0) {
    ::FString::FString(__return_storage_ptr__,L"never ticks");
  }
  else {
    ::FString::FString(&local_38,L"frame");
    if ((this->_padding_ & 8) != 0) {
      bVar1 = this->RandomDeviation <= 0.0;
      if (bVar1) {
        ::FString::PrintfImpl(&local_28,L"%.2fs");
        pFVar2 = &local_28;
      }
      else {
        ::FString::PrintfImpl(&local_18,L"%.2fs..%.2fs");
        pFVar2 = &local_18;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
      if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if ((!bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"tick every %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// NotifyParentActivation @ 146ef53b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UBTService::NotifyParentActivation(UBTService *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  uchar *puVar2;
  UBTService *pUVar3;
  longlong lVar4;
  float fVar5;
  FString local_28 [2];
  
  if ((this->bNotifyOnSearch == 0) && ((this->_padding_ & 4) == 0)) {
    return;
  }
  pUVar3 = this;
  if ((this->_padding_ & 0x40000000000) != 0) {
    puVar2 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this,param_1);
    pUVar3 = (UBTService *)UBTNode::GetNodeInstance((UBTNode *)this,param_1->OwnerComp,puVar2);
  }
  if (pUVar3 == (UBTService *)0x0) {
    return;
  }
  puVar2 = UBTNode::GetNodeMemory<unsigned_char>((UBTNode *)this,param_1);
  if ((this->_padding_ & 4) != 0) {
    if ((this->bRestartTimerOnEachActivation == 0) && ((this->_padding_ & 8) != 0)) {
      uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)puVar2 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
      }
      fVar5 = *(float *)(lVar4 + 4);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (0.0 < fVar5) goto LAB_146ef5478;
    }
    (**(code **)(pUVar3->_padding_ + 0x328))(pUVar3,param_1->OwnerComp,puVar2);
  }
LAB_146ef5478:
  if (this->bNotifyOnSearch != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(local_28,(UBTNode *)pUVar3);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
                 L"OnSearchStart: %s");
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(pUVar3->_padding_ + 800))(pUVar3,param_1);
  }
  if (this->bCallTickOnSearchStart != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      UBehaviorTreeTypes::DescribeNodeHelper(local_28,(UBTNode *)pUVar3);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,All,
                 L"TickNode (bCallTickOnSearchStart): %s");
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(pUVar3->_padding_ + 0x310))(pUVar3,param_1->OwnerComp,puVar2,0);
  }
  return;
}

// OnSearchStart @ 146ef9c90

void __thiscall UBTService::OnSearchStart(UBTService *this,FBehaviorTreeSearchData *param_1)

{
  return;
}

// ScheduleNextTick @ 146efe0d0

void __thiscall
UBTService::ScheduleNextTick(UBTService *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = this->Interval;
  fVar1 = this->RandomDeviation;
  fVar6 = fVar5 - fVar1;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar3 = rand();
  fVar5 = (float)(uVar3 & 0x7fff) * ((fVar1 + fVar5) - fVar6) * __real_38000100;
  if ((this->_padding_ & 8) != 0) {
    uVar2 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (uVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)param_2 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc);
    }
    *(float *)(lVar4 + 4) = fVar5 + fVar6;
  }
  return;
}

// StaticRegisterNativesUBTService @ 146f00cd0

void __cdecl UBTService::StaticRegisterNativesUBTService(void)

{
  return;
}

// TickNode @ 146f01f70

void __thiscall
UBTService::TickNode(UBTService *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146f01f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x328))();
  return;
}

