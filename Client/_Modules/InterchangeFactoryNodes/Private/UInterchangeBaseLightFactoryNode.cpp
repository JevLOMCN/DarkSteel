// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 24

// StaticClass @ 14e51d740

UClass * __cdecl UInterchangeBaseLightFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeBaseLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseLightFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeBaseLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseLightFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton;
}

// UInterchangeBaseLightFactoryNode @ 14e52f9c0

UInterchangeBaseLightFactoryNode * __thiscall
UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode
          (UInterchangeBaseLightFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode
            ((UInterchangeActorFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseLightFactoryNode__6B_;
  (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightColorKey).Key,L"LightColor");
  (this->Macro_CustomIntensityKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomIntensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomIntensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomIntensityKey).Key,L"Intensity");
  (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTemperatureKey).Key,L"Temperature");
  (this->Macro_CustombUseTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombUseTemperatureKey).Key,L"bUseTemperature");
  return this;
}

// UInterchangeBaseLightFactoryNode @ 14e52fa60

UInterchangeBaseLightFactoryNode * __thiscall
UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode
          (UInterchangeBaseLightFactoryNode *this)

{
  UInterchangeActorFactoryNode::UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseLightFactoryNode__6B_;
  (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightColorKey).Key,L"LightColor");
  (this->Macro_CustomIntensityKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomIntensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomIntensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomIntensityKey).Key,L"Intensity");
  (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTemperatureKey).Key,L"Temperature");
  (this->Macro_CustombUseTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustombUseTemperatureKey).Key,L"bUseTemperature");
  return this;
}

// ~UInterchangeBaseLightFactoryNode @ 14e5353c0

void __thiscall
UInterchangeBaseLightFactoryNode::~UInterchangeBaseLightFactoryNode
          (UInterchangeBaseLightFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeBaseLightFactoryNode__6B_;
  pFVar1 = (this->Macro_CustombUseTemperatureKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomIntensityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeActorFactoryNode::~UInterchangeActorFactoryNode((UInterchangeActorFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e53d320

void __thiscall
UInterchangeBaseLightFactoryNode::CopyWithObject
          (UInterchangeBaseLightFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  int iVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  bool local_res10 [8];
  FColor local_res20 [2];
  float local_1a8;
  float local_1a4;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  TAttributeHandle<FColor,void> local_180;
  TAttributeHandle<float,void> local_168;
  TAttributeHandle<float,void> local_150;
  TAttributeHandle<bool,void> local_138;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  void *local_e0 [2];
  FString local_d0;
  void *local_c0 [2];
  FString local_b0;
  void *local_a0 [2];
  FString local_90;
  void *local_80 [2];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  UInterchangeActorFactoryNode::CopyWithObject((UInterchangeActorFactoryNode *)this,param_1,param_2)
  ;
  if (param_1 == (UInterchangeFactoryBaseNode *)0x0) {
    return;
  }
  pUVar5 = StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return;
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_e0);
  ::FString::ConcatFC(&local_120,pFVar6,L".GetLightColor");
  if (local_e0[0] != (void *)0x0) {
    FMemory::Free(local_e0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,&this->Macro_CustomLightColorKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FColor,void>
              (pFVar2,&local_180,&this->Macro_CustomLightColorKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::IsValid(&local_180);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<FColor,void>::Get
                        (&local_180,local_res20);
      if ((EVar7 & Operation_Success) != None) {
        if (local_180.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_1a0,L"LightColor");
        pUVar5 = Z_Construct_UClass_ULightComponentBase_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FColor>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomLightColorKey).Key,pUVar5
                   ,local_1a0);
        goto LAB_14e53d4ba;
      }
      ::FString::FString(&local_d0,&(this->Macro_CustomLightColorKey).Key);
      pFVar6 = ::FString::FString(&local_60,&local_120);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_d0);
    }
    if (local_180.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53d4ba:
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_c0);
  ::FString::ConcatFC(&local_110,pFVar6,L".GetIntensity");
  if (local_c0[0] != (void *)0x0) {
    FMemory::Free(local_c0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,&this->Macro_CustomIntensityKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_168,&this->Macro_CustomIntensityKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_168);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_168,&local_1a8);
      if ((EVar7 & Operation_Success) != None) {
        if (local_168.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_198,L"Intensity");
        pUVar5 = Z_Construct_UClass_ULightComponentBase_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomIntensityKey).Key,pUVar5,
                   local_198);
        goto LAB_14e53d5fe;
      }
      ::FString::FString(&local_b0,&(this->Macro_CustomIntensityKey).Key);
      pFVar6 = ::FString::FString(&local_50,&local_110);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_b0);
    }
    if (local_168.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53d5fe:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_a0);
  ::FString::ConcatFC(&local_100,pFVar6,L".GetTemperature");
  if (local_a0[0] != (void *)0x0) {
    FMemory::Free(local_a0[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,&this->Macro_CustomTemperatureKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_150,&this->Macro_CustomTemperatureKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_150);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_150,&local_1a4);
      if ((EVar7 & Operation_Success) != None) {
        if (local_150.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_190,L"Temperature");
        pUVar5 = Z_Construct_UClass_ULightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomTemperatureKey).Key,
                   pUVar5,local_190);
        goto LAB_14e53d743;
      }
      ::FString::FString(&local_90,&(this->Macro_CustomTemperatureKey).Key);
      pFVar6 = ::FString::FString(&local_40,&local_100);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_90);
    }
    if (local_150.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53d743:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_80);
  ::FString::ConcatFC(&local_f0,pFVar6,L".GetbUseTemperature");
  if (local_80[0] != (void *)0x0) {
    FMemory::Free(local_80[0]);
  }
  if ((param_1->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (FAttributeStorage *)param_1->_padding_;
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (pFVar2,&this->Macro_CustombUseTemperatureKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar2,&local_138,&this->Macro_CustombUseTemperatureKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_138);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_138,local_res10);
      if ((EVar7 & Operation_Success) != None) {
        if (local_138.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_188,L"bUseTemperature");
        pUVar5 = Z_Construct_UClass_ULightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustombUseTemperatureKey).Key,
                   pUVar5,local_188);
        goto LAB_14e53d887;
      }
      ::FString::FString(&local_70,&(this->Macro_CustombUseTemperatureKey).Key);
      pFVar6 = ::FString::FString(&local_30,&local_f0);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_70);
    }
    if (local_138.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e53d887:
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCustomIntensity @ 14e5546f0

bool __thiscall
UInterchangeBaseLightFactoryNode::GetCustomIntensity
          (UInterchangeBaseLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetIntensity");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomIntensityKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomLightColor @ 14e554bb0

bool __thiscall
UInterchangeBaseLightFactoryNode::GetCustomLightColor
          (UInterchangeBaseLightFactoryNode *this,FColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetLightColor");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FColor>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightColorKey,&local_28
                     ,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomTemperature @ 14e556e40

bool __thiscall
UInterchangeBaseLightFactoryNode::GetCustomTemperature
          (UInterchangeBaseLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetTemperature");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomTemperatureKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseTemperature @ 14e5578a0

bool __thiscall
UInterchangeBaseLightFactoryNode::GetCustomUseTemperature
          (UInterchangeBaseLightFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetbUseTemperature");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustombUseTemperatureKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e559e90

UClass * __cdecl UInterchangeBaseLightFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeBaseLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseLightFactoryNode,0x2c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeBaseLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseLightFactoryNode>,local_res8,
               UInterchangeActorFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseLightFactoryNode.InnerSingleton;
}

// OnRestoreAllCustomAttributeDelegates @ 14e55ed60

void __thiscall
UInterchangeBaseLightFactoryNode::OnRestoreAllCustomAttributeDelegates
          (UInterchangeBaseLightFactoryNode *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FColor_u_0 local_res8 [2];
  
  UInterchangeActorFactoryNode::OnRestoreAllCustomAttributeDelegates
            ((UInterchangeActorFactoryNode *)this);
  iVar1 = (this->Macro_CustomLightColorKey).Key.Data.ArrayNum;
  pwVar6 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomLightColorKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomLightColor(this,(FColor *)&local_res8[0]._s_0), bVar2)) {
    SetCustomLightColor(this,(FColor *)&local_res8[0]._s_0,true);
  }
  iVar1 = (this->Macro_CustomIntensityKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomIntensityKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomIntensityKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomIntensity(this,(float *)local_res8), bVar2)) {
    SetCustomIntensity(this,(float)local_res8[0],true);
  }
  iVar1 = (this->Macro_CustomTemperatureKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomTemperatureKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomTemperature(this,(float *)local_res8), bVar2)) {
    SetCustomTemperature(this,(float)local_res8[0],true);
  }
  iVar1 = (this->Macro_CustombUseTemperatureKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(this->Macro_CustombUseTemperatureKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustombUseTemperatureKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomUseTemperature(this,(bool *)local_res8), bVar2)) {
    SetCustomUseTemperature(this,(bool)local_res8[0]._0_1_,true);
  }
  return;
}

// SetCustomIntensity @ 14e56f4a0

bool __thiscall
UInterchangeBaseLightFactoryNode::SetCustomIntensity
          (UInterchangeBaseLightFactoryNode *this,float param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  FName local_res8;
  float local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetIntensity");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomIntensityKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomIntensityKey).Key);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    bVar2 = false;
  }
  else {
    if (param_2) {
      ::FName::FName(&local_res8,L"Intensity");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomIntensityKey).Key);
      pUVar6 = Z_Construct_UClass_ULightComponentBase_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomIntensityKey).Key,pUVar6,
                 local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomLightColor @ 14e56fd20

bool __thiscall
UInterchangeBaseLightFactoryNode::SetCustomLightColor
          (UInterchangeBaseLightFactoryNode *this,FColor *param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  FName local_res8;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetLightColor");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FColor,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightColorKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomLightColorKey).Key);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_48,(FAttributeKey *)&local_18);
    bVar2 = false;
  }
  else {
    if (param_2) {
      ::FName::FName(&local_res8,L"LightColor");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomLightColorKey).Key);
      pUVar6 = Z_Construct_UClass_ULightComponentBase_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FColor>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomLightColorKey).Key,pUVar6,
                 local_res8);
    }
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomTemperature @ 14e579640

bool __thiscall
UInterchangeBaseLightFactoryNode::SetCustomTemperature
          (UInterchangeBaseLightFactoryNode *this,float param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  FName local_res8;
  float local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetTemperature");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomTemperatureKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomTemperatureKey).Key);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    bVar2 = false;
  }
  else {
    if (param_2) {
      ::FName::FName(&local_res8,L"Temperature");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomTemperatureKey).Key);
      pUVar6 = Z_Construct_UClass_ULightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomTemperatureKey).Key,pUVar6,
                 local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomUseTemperature @ 14e57db00

bool __thiscall
UInterchangeBaseLightFactoryNode::SetCustomUseTemperature
          (UInterchangeBaseLightFactoryNode *this,bool param_1,bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  FName local_res8;
  bool local_res10 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetbUseTemperature");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustombUseTemperatureKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustombUseTemperatureKey).Key);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    bVar2 = false;
  }
  else {
    if (param_2) {
      ::FName::FName(&local_res8,L"bUseTemperature");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustombUseTemperatureKey).Key);
      pUVar6 = Z_Construct_UClass_ULightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustombUseTemperatureKey).Key,
                 pUVar6,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeBaseLightFactoryNode @ 14e57f160

void __cdecl
UInterchangeBaseLightFactoryNode::StaticRegisterNativesUInterchangeBaseLightFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomIntensity @ 14e590e90

void __cdecl
UInterchangeBaseLightFactoryNode::execGetCustomIntensity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomIntensity((UInterchangeBaseLightFactoryNode *)param_1,pfVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomLightColor @ 14e591750

void __cdecl
UInterchangeBaseLightFactoryNode::execGetCustomLightColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FColor *pFVar3;
  FColor local_res10 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar3 = local_res10;
  if ((FColor *)param_2->MostRecentPropertyAddress != (FColor *)0x0) {
    pFVar3 = (FColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomLightColor((UInterchangeBaseLightFactoryNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomTemperature @ 14e596290

void __cdecl
UInterchangeBaseLightFactoryNode::execGetCustomTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float *pfVar3;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomTemperature((UInterchangeBaseLightFactoryNode *)param_1,pfVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomUseTemperature @ 14e597590

void __cdecl
UInterchangeBaseLightFactoryNode::execGetCustomUseTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool *pbVar3;
  bool local_res10 [8];
  
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomUseTemperature((UInterchangeBaseLightFactoryNode *)param_1,pbVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomIntensity @ 14e5aa380

void __cdecl
UInterchangeBaseLightFactoryNode::execSetCustomIntensity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomIntensity((UInterchangeBaseLightFactoryNode *)param_1,local_res18[0],
                             local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomLightColor @ 14e5ab160

void __cdecl
UInterchangeBaseLightFactoryNode::execSetCustomLightColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FColor *pFVar3;
  int local_res10 [2];
  FColor local_res18 [2];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = local_res18;
  if ((FColor *)param_2->MostRecentPropertyAddress != (FColor *)0x0) {
    pFVar3 = (FColor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomLightColor((UInterchangeBaseLightFactoryNode *)param_1,pFVar3,local_res10[0] != 0
                             );
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomTemperature @ 14e5b15c0

void __cdecl
UInterchangeBaseLightFactoryNode::execSetCustomTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomTemperature
                    ((UInterchangeBaseLightFactoryNode *)param_1,local_res18[0],local_res10[0] != 0)
  ;
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomUseTemperature @ 14e5b2c00

void __cdecl
UInterchangeBaseLightFactoryNode::execSetCustomUseTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCustomUseTemperature
                    ((UInterchangeBaseLightFactoryNode *)param_1,bVar2,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

