// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146ea7fc0

UClass * __cdecl UBTDecorator_KeepInCone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_KeepInCone",
               &Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton,
               StaticRegisterNativesUBTDecorator_KeepInCone,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_KeepInCone>,
               InternalVTableHelperCtorCaller<UBTDecorator_KeepInCone>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton;
}

// UBTDecorator_KeepInCone @ 146ec6f60

UBTDecorator_KeepInCone * __thiscall
UBTDecorator_KeepInCone::UBTDecorator_KeepInCone
          (UBTDecorator_KeepInCone *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ConeHalfAngle)._padding_ = 0;
  *(undefined2 *)&(this->ConeHalfAngle)._padding_ = 0xffff;
  (this->ConeHalfAngle).DefaultValue = 0.0;
  (this->ConeOrigin).bNoneIsAllowedValue = 0;
  (this->Observed).bNoneIsAllowedValue = 0;
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this->Observed).SelectedKeyID = 0xffff;
  (this->ConeOrigin).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeOrigin).AllowedTypes.ArrayNum = 0;
  (this->ConeOrigin).AllowedTypes.ArrayMax = 0;
  (this->ConeOrigin).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeOrigin).SelectedKeyName.Number = 0;
  (this->ConeOrigin).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Observed).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Observed).AllowedTypes.ArrayNum = 0;
  (this->Observed).AllowedTypes.ArrayMax = 0;
  (this->Observed).SelectedKeyName.ComparisonIndex = 0;
  (this->Observed).SelectedKeyName.Number = 0;
  (this->Observed).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBTDecorator_KeepInCone @ 146ec7010

UBTDecorator_KeepInCone * __thiscall
UBTDecorator_KeepInCone::UBTDecorator_KeepInCone
          (UBTDecorator_KeepInCone *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FBlackboardKeySelector *this_00;
  undefined1 *puVar3;
  longlong lVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res18 [2];
  FString local_48;
  undefined2 uStack_2e;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this_00 = &this->Observed;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  this->_padding_ = 0;
  plVar2 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff47 | 0x47;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ConeHalfAngle)._padding_ = 0;
  *(undefined2 *)&(this->ConeHalfAngle)._padding_ = 0xffff;
  (this->ConeHalfAngle).DefaultValue = 0.0;
  (this->ConeOrigin).bNoneIsAllowedValue = 0;
  (this->Observed).bNoneIsAllowedValue = 0;
  (this->ConeOrigin).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeOrigin).AllowedTypes.ArrayNum = 0;
  (this->ConeOrigin).AllowedTypes.ArrayMax = 0;
  (this->ConeOrigin).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeOrigin).SelectedKeyName.Number = 0;
  (this->ConeOrigin).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this_00->AllowedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Observed).AllowedTypes.ArrayNum = 0;
  (this->Observed).AllowedTypes.ArrayMax = 0;
  (this->Observed).SelectedKeyName.ComparisonIndex = 0;
  (this->Observed).SelectedKeyName.Number = 0;
  (this->Observed).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Observed).SelectedKeyID = 0xffff;
  ::FString::FString(&local_48,"Keep in Cone");
  if ((FString *)plVar2 != &local_48) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_48.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_48.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = ::FName::FName(local_res18,10,L"ConeOrigin",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (&this->ConeOrigin,(UObject *)this,*pFVar5,(TSubclassOf<UObject>)&local_res8);
  pFVar5 = ::FName::FName(&local_res8,10,L"ConeOrigin",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(&this->ConeOrigin,(UObject *)this,*pFVar5);
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar5 = ::FName::FName(local_res18,8,L"Observed",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (this_00,(UObject *)this,*pFVar5,(TSubclassOf<UObject>)&local_res8);
  pFVar5 = ::FName::FName(&local_res8,8,L"Observed",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(this_00,(UObject *)this,*pFVar5);
  lVar4 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffc4;
  *(byte *)&this->_padding_ = (byte)lVar4 & 0xfd | 5;
  (this->ConeOrigin).SelectedKeyName = FBlackboard::KeySelf;
  (this->ConeHalfAngle)._padding_ = 0;
  (this->ConeHalfAngle)._padding_ = CONCAT22(uStack_2e,0xffff);
  (this->ConeHalfAngle).DefaultValue = 45.0;
  return this;
}

// ~UBTDecorator_KeepInCone @ 146eccf20

void __thiscall UBTDecorator_KeepInCone::~UBTDecorator_KeepInCone(UBTDecorator_KeepInCone *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Observed).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConeOrigin).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateCurrentDirection @ 146ed40e0

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
UBTDecorator_KeepInCone::CalculateCurrentDirection
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,TVector<double> *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    local_50._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_50._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = (this->ConeOrigin).SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = UBlackboardComponent::GetLocationFromEntry
                      (this_00,(FKey)(ushort)uVar1,(TVector<double> *)&local_50._s_0);
    uVar1 = (this->Observed).SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar6 = UBlackboardComponent::GetLocationFromEntry
                      (this_00,(FKey)(ushort)uVar1,(TVector<double> *)&local_68._s_0);
    if ((bVar4) && (bVar6)) {
      local_38._s_0.X = local_68._s_0.X - local_50._s_0.X;
      local_38._s_0.Y = local_68._s_0.Y - local_50._s_0.Y;
      local_38._s_0.Z = local_68._s_0.Z - local_50._s_0.Z;
      pTVar7 = UE::Math::TVector<double>::GetSafeNormal
                         ((TVector<double> *)&local_38._s_0,&local_20,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      dVar3 = (pTVar7->field0_0x0)._s_0.Y;
      (param_2->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      (param_2->field0_0x0)._s_0.Y = dVar3;
      (param_2->field0_0x0)._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      return true;
    }
  }
  return false;
}

// CleanupMemory @ 146ed5ee0

void __thiscall
UBTDecorator_KeepInCone::CleanupMemory
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          )

{
  return;
}

// DescribeRuntimeValues @ 146edbbb0

/* WARNING: Removing unreachable block (ram,0x000146edbdb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_KeepInCone::DescribeRuntimeValues
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FBTKeepInConeDecoratorMemory *this_00;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double _X;
  FString local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  this_00 = UBTNode::CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>((UBTNode *)this,param_2);
  local_68._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689518;
  local_68._s_0.Z = 0.0;
  bVar3 = CalculateCurrentDirection(this,param_1,(TVector<double> *)&local_68._s_0);
  if (bVar3) {
    local_48[0]._s_0.X = local_68._s_0.X;
    local_48[0]._s_0.Y = local_68._s_0.Y;
    local_48[0]._s_0.Z = local_68._s_0.Z;
    dVar7 = UE::Math::TVector<double>::CosineAngle2D
                      (&this_00->InitialDirection,(TVector<double> *)&local_48[0]._s_0);
    _X = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar7) && (_X = dVar7, __real_3ff0000000000000 <= dVar7)) {
      _X = __real_3ff0000000000000;
    }
    acos(_X);
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar6 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar6 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    cosf(fVar6 * __real_3c8efa35);
    ::FString::PrintfImpl(&local_78,L"Angle: %.0f (%s cone)");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar5 = (longlong)iVar4;
    param_4->ArrayNum = iVar4 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar5 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar5 * 0x10) = local_78.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar5 * 0x10 + 8) = local_78.Data.ArrayNum;
    *(int *)(pFVar1 + lVar5 * 0x10 + 0xc) = local_78.Data.ArrayMax;
  }
  return;
}

// GetConeHalfAngleDot @ 146ee4fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UBTDecorator_KeepInCone::GetConeHalfAngleDot
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1)

{
  float fVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                       (FKey *)&(this->ConeHalfAngle)._padding_,&(this->ConeHalfAngle).DefaultValue)
    ;
    fVar1 = cosf(fVar1 * __real_3c8efa35);
    return fVar1;
  }
  fVar1 = cosf((this->ConeHalfAngle).DefaultValue * __real_3c8efa35);
  return fVar1;
}

// GetInstanceMemorySize @ 146ee5a40

ushort __thiscall UBTDecorator_KeepInCone::GetInstanceMemorySize(UBTDecorator_KeepInCone *this)

{
  return 0x18;
}

// GetPrivateStaticClass @ 146ee7ab0

UClass * __cdecl UBTDecorator_KeepInCone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_KeepInCone",
               &Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton,
               StaticRegisterNativesUBTDecorator_KeepInCone,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_KeepInCone>,
               InternalVTableHelperCtorCaller<UBTDecorator_KeepInCone>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_KeepInCone.InnerSingleton;
}

// GetStaticDescription @ 146eebe30

FString * __thiscall
UBTDecorator_KeepInCone::GetStaticDescription
          (UBTDecorator_KeepInCone *this,FString *__return_storage_ptr__)

{
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FName::ToString(&(this->Observed).SelectedKeyName,&local_28);
  ::FName::ToString(&(this->ConeOrigin).SelectedKeyName,&local_38);
  if ((this->ConeHalfAngle)._padding_ == 0) {
    ::FString::PrintfImpl(&local_68,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->ConeHalfAngle,&local_68);
  }
  ::FName::ToString(&(this->Observed).SelectedKeyName,&local_48);
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_58);
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"%s: %s in +- %s degree cone of initial direction [%s-%s]");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef2060

void __thiscall
UBTDecorator_KeepInCone::InitializeFromAsset(UBTDecorator_KeepInCone *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  uint uVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  uVar2 = *(uint *)&this->field_0xc8;
  if (ZPULL(uVar2,0,1) != 0) {
    uVar2 = uVar2 & 0xfffffffe;
    (this->ConeOrigin).SelectedKeyName = FBlackboard::KeySelf;
    *(uint *)&this->field_0xc8 = uVar2;
  }
  if ((uVar2 & 2) != 0) {
    (this->Observed).SelectedKeyName = FBlackboard::KeySelf;
    *(uint *)&this->field_0xc8 = uVar2 & 0xfffffffd;
  }
  if (param_1 != (UBehaviorTree *)0x0) {
    pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if (pUVar1 != (UBlackboardData *)0x0) {
      FBlackboardKeySelector::ResolveSelectedKey(&this->ConeOrigin,pUVar1);
      FBlackboardKeySelector::ResolveSelectedKey(&this->Observed,pUVar1);
      return;
    }
  }
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this->Observed).SelectedKeyID = 0xffff;
  return;
}

// InitializeMemory @ 146ef2d00

void __thiscall
UBTDecorator_KeepInCone::InitializeMemory
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          )

{
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>((UBTNode *)this,param_2);
  return;
}

// OnBecomeRelevant @ 146ef5e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UBTDecorator_KeepInCone::OnBecomeRelevant
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  FBTKeepInConeDecoratorMemory *pFVar1;
  TVector<double>_u_0 local_28;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>((UBTNode *)this,param_2);
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  CalculateCurrentDirection(this,param_1,(TVector<double> *)&local_28._s_0);
  (pFVar1->InitialDirection).field0_0x0._s_0.X = local_28._s_0.X;
  (pFVar1->InitialDirection).field0_0x0._s_0.Y = local_28._s_0.Y;
  (pFVar1->InitialDirection).field0_0x0._s_0.Z = local_28._s_0.Z;
  return;
}

// StaticRegisterNativesUBTDecorator_KeepInCone @ 146f00c10

void __cdecl UBTDecorator_KeepInCone::StaticRegisterNativesUBTDecorator_KeepInCone(void)

{
  return;
}

// TickNode @ 146f01c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBTDecorator_KeepInCone::TickNode
          (UBTDecorator_KeepInCone *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  FBTKeepInConeDecoratorMemory *this_00;
  float fVar3;
  double dVar4;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  this_00 = UBTNode::CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>((UBTNode *)this,param_2);
  local_58._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_58._s_0.Y = _UNK_150689518;
  local_58._s_0.Z = 0.0;
  bVar2 = CalculateCurrentDirection(this,param_1,(TVector<double> *)&local_58._s_0);
  if (bVar2) {
    local_38[0]._s_0.X = local_58._s_0.X;
    local_38[0]._s_0.Y = local_58._s_0.Y;
    local_38[0]._s_0.Z = local_58._s_0.Z;
    dVar4 = UE::Math::TVector<double>::CosineAngle2D
                      (&this_00->InitialDirection,(TVector<double> *)&local_38[0]._s_0);
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar3 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar3 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    fVar3 = cosf(fVar3 * __real_3c8efa35);
    if ((dVar4 < (double)fVar3) ||
       ((((uint)this->_padding_ >> 7 & 1) != 0 && ((double)fVar3 < dVar4)))) {
      if ((this == (UBTDecorator_KeepInCone *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestedBy",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BehaviorTreeComponent.h"
                             ,0x9a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
    }
  }
  return;
}

