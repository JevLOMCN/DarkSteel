// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 24

// StaticClass @ 14e474f90

UClass * __cdecl UInterchangeBaseLightNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeBaseLightNode",
               &Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseLightNode,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeBaseLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseLightNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton;
}

// UInterchangeBaseLightNode @ 14e485f00

UInterchangeBaseLightNode * __thiscall
UInterchangeBaseLightNode::UInterchangeBaseLightNode
          (UInterchangeBaseLightNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseLightNode__6B_;
  (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightColorKey).Key,L"LightColor");
  (this->Macro_CustomLightIntensityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLightIntensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightIntensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightIntensityKey).Key,L"LightIntensity");
  (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTemperatureKey).Key,L"Temperature");
  (this->Macro_CustomUseTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseTemperatureKey).Key,L"UseTemperature");
  return this;
}

// UInterchangeBaseLightNode @ 14e485fa0

UInterchangeBaseLightNode * __thiscall
UInterchangeBaseLightNode::UInterchangeBaseLightNode(UInterchangeBaseLightNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseLightNode__6B_;
  (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightColorKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightColorKey).Key,L"LightColor");
  (this->Macro_CustomLightIntensityKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLightIntensityKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightIntensityKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightIntensityKey).Key,L"LightIntensity");
  (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTemperatureKey).Key,L"Temperature");
  (this->Macro_CustomUseTemperatureKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomUseTemperatureKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomUseTemperatureKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomUseTemperatureKey).Key,L"UseTemperature");
  return this;
}

// ~UInterchangeBaseLightNode @ 14e48aa00

void __thiscall
UInterchangeBaseLightNode::~UInterchangeBaseLightNode(UInterchangeBaseLightNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeBaseLightNode__6B_;
  pFVar1 = (this->Macro_CustomUseTemperatureKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomTemperatureKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLightIntensityKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomLightColorKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// GetCustomIntensity @ 14e492ed0

bool __thiscall
UInterchangeBaseLightNode::GetCustomIntensity(UInterchangeBaseLightNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetLightIntensity");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightIntensityKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomLightColor @ 14e493250

bool __thiscall
UInterchangeBaseLightNode::GetCustomLightColor
          (UInterchangeBaseLightNode *this,FLinearColor *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<FLinearColor,void> local_28;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".GetLightColor");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = &this->Macro_CustomLightColorKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FLinearColor,void>
              (this_00,&local_28,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::IsValid
                      (&local_28);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::Get
                        (&local_28,param_1);
      if ((EVar6 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e493368;
      }
      ::FString::FString(&local_48,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_38,&local_68);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar5,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e493368:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetCustomTemperature @ 14e494650

bool __thiscall
UInterchangeBaseLightNode::GetCustomTemperature(UInterchangeBaseLightNode *this,float *param_1)

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

// GetCustomUseTemperature @ 14e494db0

bool __thiscall
UInterchangeBaseLightNode::GetCustomUseTemperature(UInterchangeBaseLightNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetUseTemperature");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseTemperatureKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e4980b0

UClass * __cdecl UInterchangeBaseLightNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeBaseLightNode",
               &Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseLightNode,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeBaseLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseLightNode>,local_res8,
               UInterchangeBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseLightNode.InnerSingleton;
}

// GetTypeName @ 14e49a8b0

FString * __thiscall
UInterchangeBaseLightNode::GetTypeName
          (UInterchangeBaseLightNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BaseLightNode");
  return __return_storage_ptr__;
}

// SetCustomIntensity @ 14e4a3740

bool __thiscall
UInterchangeBaseLightNode::SetCustomIntensity(UInterchangeBaseLightNode *this,float param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  float local_res10 [2];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetLightIntensity");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightIntensityKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomLightIntensityKey).Key);
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
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomLightColor @ 14e4a3c80

bool __thiscall
UInterchangeBaseLightNode::SetCustomLightColor
          (UInterchangeBaseLightNode *this,FLinearColor *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FLinearColor,void>
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
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomTemperature @ 14e4a5db0

bool __thiscall
UInterchangeBaseLightNode::SetCustomTemperature(UInterchangeBaseLightNode *this,float param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  float local_res10 [2];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetTemperature");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomTemperatureKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomTemperatureKey).Key);
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
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomUseTemperature @ 14e4a6af0

bool __thiscall
UInterchangeBaseLightNode::SetCustomUseTemperature(UInterchangeBaseLightNode *this,bool param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  bool local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetUseTemperature");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomUseTemperatureKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomUseTemperatureKey).Key);
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
    bVar2 = true;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticAssetTypeName @ 14e4a8370

TStringView<wchar_t> * __cdecl
UInterchangeBaseLightNode::StaticAssetTypeName(TStringView<wchar_t> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 5;
  __return_storage_ptr__->DataPtr = L"Light";
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeBaseLightNode @ 14e4a84a0

void __cdecl UInterchangeBaseLightNode::StaticRegisterNativesUInterchangeBaseLightNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeBaseLightNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomIntensity @ 14e4b3620

void __cdecl
UInterchangeBaseLightNode::execGetCustomIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetLightIntensity");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomLightColor @ 14e4b3ba0

void __cdecl
UInterchangeBaseLightNode::execGetCustomLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  FAttributeStorage *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  undefined1 uVar7;
  FLinearColor *pFVar8;
  FLinearColor local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  TAttributeHandle<FLinearColor,void> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar8 = &local_78;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar8 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_58);
  ::FString::ConcatFC(&local_68,pFVar5,L".GetLightColor");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &param_1[2].field_0x10;
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this,(FAttributeKey *)puVar1);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FLinearColor,void>
              (this,&local_28,(FAttributeKey *)puVar1);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::IsValid
                      (&local_28);
    if (bVar4) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FLinearColor,void>::Get
                        (&local_28,pFVar8);
      if ((EVar6 & Operation_Success) != None) {
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar7 = 1;
        goto LAB_14e4b3d2a;
      }
      ::FString::FString(&local_48,(FString *)puVar1);
      pFVar5 = ::FString::FString(&local_38,&local_68);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar5,(FAttributeKey *)&local_48);
    }
    if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
  }
LAB_14e4b3d2a:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar7;
  return;
}

// execGetCustomTemperature @ 14e4b64f0

void __cdecl
UInterchangeBaseLightNode::execGetCustomTemperature(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  float *pfVar5;
  float local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pfVar5 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetTemperature");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<float>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseTemperature @ 14e4b73b0

void __cdecl
UInterchangeBaseLightNode::execGetCustomUseTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  bool *pbVar5;
  bool local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pbVar5 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar5 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetUseTemperature");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<bool>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomIntensity @ 14e4c2cf0

void __cdecl
UInterchangeBaseLightNode::execSetCustomIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  float local_res8 [2];
  float local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetLightIntensity");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x20);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomLightColor @ 14e4c3400

void __cdecl
UInterchangeBaseLightNode::execSetCustomLightColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FLinearColor *pFVar7;
  FString local_58;
  FString local_48;
  FLinearColor local_38;
  void *local_28 [2];
  FString local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar7 = &local_38;
  if ((FLinearColor *)param_2->MostRecentPropertyAddress != (FLinearColor *)0x0) {
    pFVar7 = (FLinearColor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetLightColor");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FLinearColor,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x10,
                     pFVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[2].field_0x10);
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
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomTemperature @ 14e4c6d90

void __cdecl
UInterchangeBaseLightNode::execSetCustomTemperature(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  float local_res8 [2];
  float local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetTemperature");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[3].field_0x8);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

// execSetCustomUseTemperature @ 14e4c80c0

void __cdecl
UInterchangeBaseLightNode::execSetCustomUseTemperature
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool local_res8 [8];
  int local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetUseTemperature");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     local_res8,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[3].field_0x18);
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_28);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  return;
}

