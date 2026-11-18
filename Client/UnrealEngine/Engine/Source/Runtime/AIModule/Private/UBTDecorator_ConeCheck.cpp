// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 18

// StaticClass @ 146eaba00

UClass * __cdecl UBTDecorator_ConeCheck::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ConeCheck",
               &Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ConeCheck,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_ConeCheck>,
               InternalVTableHelperCtorCaller<UBTDecorator_ConeCheck>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton;
}

// UBTDecorator_ConeCheck @ 146ec6090

UBTDecorator_ConeCheck * __thiscall
UBTDecorator_ConeCheck::UBTDecorator_ConeCheck(UBTDecorator_ConeCheck *this,FVTableHelper *param_1)

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
  (this->ConeDirection).bNoneIsAllowedValue = 0;
  (this->Observed).bNoneIsAllowedValue = 0;
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this->ConeDirection).SelectedKeyID = 0xffff;
  (this->Observed).SelectedKeyID = 0xffff;
  (this->ConeOrigin).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeOrigin).AllowedTypes.ArrayNum = 0;
  (this->ConeOrigin).AllowedTypes.ArrayMax = 0;
  (this->ConeOrigin).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeOrigin).SelectedKeyName.Number = 0;
  (this->ConeOrigin).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ConeDirection).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeDirection).AllowedTypes.ArrayNum = 0;
  (this->ConeDirection).AllowedTypes.ArrayMax = 0;
  (this->ConeDirection).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeDirection).SelectedKeyName.Number = 0;
  (this->ConeDirection).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Observed).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Observed).AllowedTypes.ArrayNum = 0;
  (this->Observed).AllowedTypes.ArrayMax = 0;
  (this->Observed).SelectedKeyName.ComparisonIndex = 0;
  (this->Observed).SelectedKeyName.Number = 0;
  (this->Observed).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBTDecorator_ConeCheck @ 146ec6160

UBTDecorator_ConeCheck * __thiscall
UBTDecorator_ConeCheck::UBTDecorator_ConeCheck
          (UBTDecorator_ConeCheck *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FBlackboardKeySelector *this_00;
  FBlackboardKeySelector *this_01;
  undefined1 *puVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_res18 [2];
  FString local_58;
  undefined2 uStack_3e;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this_00 = &this->ConeDirection;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  this_01 = &this->Observed;
  plVar2 = &this->_padding_;
  *plVar2 = 0;
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
  (this->ConeDirection).bNoneIsAllowedValue = 0;
  (this->Observed).bNoneIsAllowedValue = 0;
  (this->ConeOrigin).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeOrigin).AllowedTypes.ArrayNum = 0;
  (this->ConeOrigin).AllowedTypes.ArrayMax = 0;
  (this->ConeOrigin).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeOrigin).SelectedKeyName.Number = 0;
  (this->ConeOrigin).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this_00->AllowedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConeDirection).AllowedTypes.ArrayNum = 0;
  (this->ConeDirection).AllowedTypes.ArrayMax = 0;
  (this->ConeDirection).SelectedKeyName.ComparisonIndex = 0;
  (this->ConeDirection).SelectedKeyName.Number = 0;
  (this->ConeDirection).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ConeDirection).SelectedKeyID = 0xffff;
  (this_01->AllowedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Observed).AllowedTypes.ArrayNum = 0;
  (this->Observed).AllowedTypes.ArrayMax = 0;
  (this->Observed).SelectedKeyName.ComparisonIndex = 0;
  (this->Observed).SelectedKeyName.Number = 0;
  (this->Observed).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Observed).SelectedKeyID = 0xffff;
  ::FString::FString(&local_58,"Cone Check");
  if ((FString *)plVar2 != &local_58) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_58.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_58.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar4 = ::FName::FName(local_res18,10,L"ConeOrigin",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (&this->ConeOrigin,(UObject *)this,*pFVar4,(TSubclassOf<UObject>)&local_res8);
  pFVar4 = ::FName::FName(&local_res8,10,L"ConeOrigin",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(&this->ConeOrigin,(UObject *)this,*pFVar4);
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar4 = ::FName::FName(local_res18,0xd,L"ConeDirection",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (this_00,(UObject *)this,*pFVar4,(TSubclassOf<UObject>)&local_res8);
  pFVar4 = ::FName::FName(&local_res8,0xd,L"ConeDirection",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(this_00,(UObject *)this,*pFVar4);
  (this->ConeDirection).bNoneIsAllowedValue = 1;
  local_res8 = (FName)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar4 = ::FName::FName(local_res18,8,L"Observed",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (this_01,(UObject *)this,*pFVar4,(TSubclassOf<UObject>)&local_res8);
  pFVar4 = ::FName::FName(&local_res8,8,L"Observed",FNAME_Add);
  FBlackboardKeySelector::AddVectorFilter(this_01,(UObject *)this,*pFVar4);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffc7;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd | 5;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ConeHalfAngle)._padding_ = 0;
  (this->ConeHalfAngle)._padding_ = CONCAT22(uStack_3e,0xffff);
  (this->ConeHalfAngle).DefaultValue = 45.0;
  return this;
}

// ~UBTDecorator_ConeCheck @ 146eccd10

void __thiscall UBTDecorator_ConeCheck::~UBTDecorator_ConeCheck(UBTDecorator_ConeCheck *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Observed).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConeDirection).AllowedTypes.AllocatorInstance.Data;
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

// CalculateDirection @ 146ed4270

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
UBTDecorator_ConeCheck::CalculateDirection
          (UBTDecorator_ConeCheck *this,UBlackboardComponent *param_1,
          FBlackboardKeySelector *param_2,FBlackboardKeySelector *param_3,TVector<double> *param_4)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  TVector<double> *pTVar6;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68;
  TVector<double>_u_0 local_50;
  TVector<double> local_38;
  TVector<double> local_20;
  
  local_80._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_68.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_68.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_80._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_80._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1 != (UBlackboardComponent *)0x0) {
    if (param_3->bNoneIsAllowedValue != 0) {
      uVar1 = param_3->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((short)uVar1 == -1) {
        uVar1 = param_2->SelectedKeyID;
        if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = UBlackboardComponent::GetRotationFromEntry(param_1,(FKey)(ushort)uVar1,&local_68);
        if (!bVar4) {
          return false;
        }
        pTVar6 = UE::Math::TRotator<double>::Vector(&local_68,&local_38);
        dVar3 = (pTVar6->field0_0x0)._s_0.Y;
        (param_4->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y = dVar3;
        (param_4->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        return true;
      }
    }
    uVar1 = param_2->SelectedKeyID;
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
                      (param_1,(FKey)(ushort)uVar1,(TVector<double> *)&local_80._s_0);
    if (bVar4) {
      uVar1 = param_3->SelectedKeyID;
      if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = UBlackboardComponent::GetLocationFromEntry
                        (param_1,(FKey)(ushort)uVar1,(TVector<double> *)&local_98._s_0);
      if (bVar4) {
        local_50._s_0.X = local_98._s_0.X - local_80._s_0.X;
        local_50._s_0.Y = local_98._s_0.Y - local_80._s_0.Y;
        local_50._s_0.Z = local_98._s_0.Z - local_80._s_0.Z;
        pTVar6 = UE::Math::TVector<double>::GetSafeNormal
                           ((TVector<double> *)&local_50._s_0,&local_20,__real_3e45798ee0000000,
                            &UE::Math::TVector<double>::ZeroVector);
        dVar3 = (pTVar6->field0_0x0)._s_0.Y;
        (param_4->field0_0x0)._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y = dVar3;
        (param_4->field0_0x0)._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        return true;
      }
    }
  }
  return false;
}

// CalculateRawConditionValue @ 146ed4900

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
UBTDecorator_ConeCheck::CalculateRawConditionValue
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  TVector<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  TVector<double>_u_0 local_48 [2];
  
  pUVar1 = (UBlackboardComponent *)param_1->_padding_;
  bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->Observed,
                             (TVector<double> *)&local_88._s_0);
  if ((bVar4) &&
     (bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->ConeDirection,
                                 (TVector<double> *)&local_48[0]._s_0), uVar3 = local_88._s_0.Y,
     uVar2 = local_88._s_0.X, bVar4)) {
    local_88._s_0.X = (double)local_48[0]._0_8_;
    local_88._s_0.Y = (double)local_48[0]._8_8_;
    dVar6 = (double)local_48[0]._8_8_ * (double)local_48[0]._8_8_ +
            (double)local_48[0]._0_8_ * (double)local_48[0]._0_8_;
    local_68 = (double)uVar2;
    dStack_60 = (double)uVar3;
    if (__real_3e45798ee0000000 < dVar6) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      local_48[0]._0_8_ = (double)local_48[0]._0_8_ * dVar6;
      local_48[0]._8_8_ = (double)local_48[0]._8_8_ * dVar6;
    }
    dVar6 = (double)uVar3 * (double)uVar3 + (double)uVar2 * (double)uVar2;
    if (__real_3e45798ee0000000 < dVar6) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar2 = (double)uVar2 * dVar6;
      uVar3 = (double)uVar3 * dVar6;
    }
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar5 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar5 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    fVar5 = cosf(fVar5 * __real_3c8efa35);
    if ((double)fVar5 <
        (double)uVar3 * (double)local_48[0]._8_8_ + (double)uVar2 * (double)local_48[0]._0_8_) {
      return true;
    }
  }
  return false;
}

// CleanupMemory @ 146ed5ec0

void __thiscall
UBTDecorator_ConeCheck::CleanupMemory
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edb5b0

/* WARNING: Removing unreachable block (ram,0x000146edb869) */
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
UBTDecorator_ConeCheck::DescribeRuntimeValues
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  UBlackboardComponent *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  double _X;
  double dVar8;
  FString local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [2];
  
  pUVar1 = (UBlackboardComponent *)param_1->_padding_;
  bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->Observed,
                             (TVector<double> *)&local_68._s_0);
  if ((bVar4) &&
     (bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->ConeDirection,
                                 (TVector<double> *)&local_50[0]._s_0), bVar4)) {
    local_78 = local_68._s_0.Z;
    local_98 = (double)local_50[0]._16_8_;
    local_a8 = (double)local_50[0]._0_8_;
    dStack_a0 = (double)local_50[0]._8_8_;
    dVar8 = (double)local_50[0]._0_8_ * (double)local_50[0]._0_8_ +
            (double)local_50[0]._8_8_ * (double)local_50[0]._8_8_;
    local_88 = local_68._s_0.X;
    dStack_80 = local_68._s_0.Y;
    if (__real_3e45798ee0000000 < dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      local_50[0]._0_8_ = (double)local_50[0]._0_8_ * dVar8;
      local_50[0]._8_8_ = (double)local_50[0]._8_8_ * dVar8;
    }
    dVar8 = local_68._s_0.Y * local_68._s_0.Y + local_68._s_0.X * local_68._s_0.X;
    if (__real_3e45798ee0000000 < dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      local_68._s_0.X = local_68._s_0.X * dVar8;
      local_68._s_0.Y = local_68._s_0.Y * dVar8;
    }
    dVar8 = local_68._s_0.Y * (double)local_50[0]._8_8_ +
            local_68._s_0.X * (double)local_50[0]._0_8_;
    _X = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar8) && (_X = dVar8, __real_3ff0000000000000 <= dVar8)) {
      _X = __real_3ff0000000000000;
    }
    acos(_X);
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar7 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar7 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    cosf(fVar7 * __real_3c8efa35);
    ::FString::PrintfImpl(&local_b8,L"Angle: %.0f (%s cone)");
    pFVar2 = (param_4->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar6 = (longlong)iVar5;
    param_4->ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar6 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar6 * 0x10) = local_b8.Data.AllocatorInstance.Data;
    *(int *)(pFVar2 + lVar6 * 0x10 + 8) = local_b8.Data.ArrayNum;
    *(int *)(pFVar2 + lVar6 * 0x10 + 0xc) = local_b8.Data.ArrayMax;
  }
  return;
}

// GetConeHalfAngleDot @ 146ee4f50

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
UBTDecorator_ConeCheck::GetConeHalfAngleDot
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1)

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

// GetInstanceMemorySize @ 146ee5a20

ushort __thiscall UBTDecorator_ConeCheck::GetInstanceMemorySize(UBTDecorator_ConeCheck *this)

{
  return 1;
}

// GetPrivateStaticClass @ 146ee7630

UClass * __cdecl UBTDecorator_ConeCheck::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ConeCheck",
               &Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ConeCheck,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_ConeCheck>,
               InternalVTableHelperCtorCaller<UBTDecorator_ConeCheck>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ConeCheck.InnerSingleton;
}

// GetStaticDescription @ 146eeb6a0

FString * __thiscall
UBTDecorator_ConeCheck::GetStaticDescription
          (UBTDecorator_ConeCheck *this,FString *__return_storage_ptr__)

{
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FName::ToString(&(this->ConeDirection).SelectedKeyName,&local_28);
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
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: is %s in +- %s degrees %s-%s cone");
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

// InitializeFromAsset @ 146ef1eb0

void __thiscall
UBTDecorator_ConeCheck::InitializeFromAsset(UBTDecorator_ConeCheck *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef1f5d;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->ConeOrigin,pUVar1);
    FBlackboardKeySelector::ResolveSelectedKey(&this->ConeDirection,pUVar1);
    FBlackboardKeySelector::ResolveSelectedKey(&this->Observed,pUVar1);
    return;
  }
LAB_146ef1f5d:
  (this->ConeDirection).SelectedKeyID = 0xffff;
  (this->ConeOrigin).SelectedKeyID = 0xffff;
  (this->Observed).SelectedKeyID = 0xffff;
  return;
}

// InitializeMemory @ 146ef2c90

void __thiscall
UBTDecorator_ConeCheck::InitializeMemory
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  if (param_3 == Initialize) {
    *param_2 = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTConeCheckDecoratorMemory>((UBTNode *)this,param_2);
  return;
}

// OnBecomeRelevant @ 146ef5c80

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
UBTDecorator_ConeCheck::OnBecomeRelevant
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UBlackboardComponent *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FBTConeCheckDecoratorMemory *pFVar5;
  float fVar6;
  double dVar7;
  TVector<double>_u_0 local_98;
  double local_78;
  double dStack_70;
  TVector<double>_u_0 local_58 [2];
  
  pFVar5 = UBTNode::CastInstanceNodeMemory<FBTConeCheckDecoratorMemory>((UBTNode *)this,param_2);
  pUVar1 = (UBlackboardComponent *)param_1->_padding_;
  bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->Observed,
                             (TVector<double> *)&local_98._s_0);
  if ((bVar4) &&
     (bVar4 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->ConeDirection,
                                 (TVector<double> *)&local_58[0]._s_0), uVar3 = local_98._s_0.Y,
     uVar2 = local_98._s_0.X, bVar4)) {
    local_98._s_0.X = (double)local_58[0]._0_8_;
    local_98._s_0.Y = (double)local_58[0]._8_8_;
    dVar7 = (double)local_58[0]._8_8_ * (double)local_58[0]._8_8_ +
            (double)local_58[0]._0_8_ * (double)local_58[0]._0_8_;
    local_78 = (double)uVar2;
    dStack_70 = (double)uVar3;
    if (__real_3e45798ee0000000 < dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      local_58[0]._0_8_ = (double)local_58[0]._0_8_ * dVar7;
      local_58[0]._8_8_ = (double)local_58[0]._8_8_ * dVar7;
    }
    dVar7 = (double)uVar3 * (double)uVar3 + (double)uVar2 * (double)uVar2;
    if (__real_3e45798ee0000000 < dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar2 = (double)uVar2 * dVar7;
      uVar3 = (double)uVar3 * dVar7;
    }
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar6 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar6 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    fVar6 = cosf(fVar6 * __real_3c8efa35);
    if ((double)fVar6 <
        (double)uVar3 * (double)local_58[0]._8_8_ + (double)uVar2 * (double)local_58[0]._0_8_) {
      pFVar5->bLastRawResult = true;
      return;
    }
  }
  pFVar5->bLastRawResult = false;
  return;
}

// OnBlackboardChange @ 146ef6320

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
UBTDecorator_ConeCheck::OnBlackboardChange
          (UBTDecorator_ConeCheck *this,UBlackboardComponent *param_1,FKey param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_ConeCheck.cpp"
                     ,0x68,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUBTDecorator_ConeCheck @ 146f00bb0

void __cdecl UBTDecorator_ConeCheck::StaticRegisterNativesUBTDecorator_ConeCheck(void)

{
  return;
}

// TickNode @ 146f01980

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
UBTDecorator_ConeCheck::TickNode
          (UBTDecorator_ConeCheck *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3
          )

{
  UBlackboardComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  FBTConeCheckDecoratorMemory *pFVar4;
  float fVar5;
  double dVar6;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50 [2];
  
  pFVar4 = UBTNode::CastInstanceNodeMemory<FBTConeCheckDecoratorMemory>((UBTNode *)this,param_2);
  pUVar1 = (UBlackboardComponent *)param_1->_padding_;
  bVar3 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->Observed,
                             (TVector<double> *)&local_68._s_0);
  if ((bVar3) &&
     (bVar3 = CalculateDirection(this,pUVar1,&this->ConeOrigin,&this->ConeDirection,
                                 (TVector<double> *)&local_50[0]._s_0), bVar3)) {
    dVar6 = (double)local_50[0]._8_8_ * (double)local_50[0]._8_8_ +
            (double)local_50[0]._0_8_ * (double)local_50[0]._0_8_;
    if (__real_3e45798ee0000000 < dVar6) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      local_50[0]._0_8_ = (double)local_50[0]._0_8_ * dVar6;
      local_50[0]._8_8_ = (double)local_50[0]._8_8_ * dVar6;
    }
    dVar6 = local_68._s_0.Y * local_68._s_0.Y + local_68._s_0.X * local_68._s_0.X;
    if (__real_3e45798ee0000000 < dVar6) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      local_68._s_0.X = local_68._s_0.X * dVar6;
      local_68._s_0.Y = local_68._s_0.Y * dVar6;
    }
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar5 = (this->ConeHalfAngle).DefaultValue;
    }
    else {
      fVar5 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->ConeHalfAngle,
                         (FKey *)&(this->ConeHalfAngle)._padding_,
                         &(this->ConeHalfAngle).DefaultValue);
    }
    fVar5 = cosf(fVar5 * __real_3c8efa35);
    if ((double)fVar5 <
        local_68._s_0.Y * (double)local_50[0]._8_8_ + local_68._s_0.X * (double)local_50[0]._0_8_) {
      bVar3 = true;
      goto LAB_146f01b51;
    }
  }
  bVar3 = false;
LAB_146f01b51:
  if (bVar3 != pFVar4->bLastRawResult) {
    pFVar4->bLastRawResult = bVar3;
    if ((this == (UBTDecorator_ConeCheck *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestedBy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BehaviorTreeComponent.h"
                           ,0x9a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
  }
  return;
}

