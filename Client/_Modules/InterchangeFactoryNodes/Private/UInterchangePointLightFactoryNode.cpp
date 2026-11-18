// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 15

// StaticClass @ 14e51e8f0

UClass * __cdecl UInterchangePointLightFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePointLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePointLightFactoryNode,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePointLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePointLightFactoryNode>,local_res8,
               UInterchangeLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton;
}

// UInterchangePointLightFactoryNode @ 14e5322e0

UInterchangePointLightFactoryNode * __thiscall
UInterchangePointLightFactoryNode::UInterchangePointLightFactoryNode
          (UInterchangePointLightFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeLightFactoryNode::UInterchangeLightFactoryNode
            ((UInterchangeLightFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePointLightFactoryNode__6B_;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustombUseInverseSquaredFalloffKey).Key,L"bUseInverseSquaredFalloff");
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightFalloffExponentKey).Key,L"LightFalloffExponent");
  return this;
}

// UInterchangePointLightFactoryNode @ 14e532350

UInterchangePointLightFactoryNode * __thiscall
UInterchangePointLightFactoryNode::UInterchangePointLightFactoryNode
          (UInterchangePointLightFactoryNode *this)

{
  UInterchangeLightFactoryNode::UInterchangeLightFactoryNode((UInterchangeLightFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangePointLightFactoryNode__6B_;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustombUseInverseSquaredFalloffKey).Key,L"bUseInverseSquaredFalloff");
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomLightFalloffExponentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomLightFalloffExponentKey).Key,L"LightFalloffExponent");
  return this;
}

// ~UInterchangePointLightFactoryNode @ 14e535f80

void __thiscall
UInterchangePointLightFactoryNode::~UInterchangePointLightFactoryNode
          (UInterchangePointLightFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangePointLightFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomLightFalloffExponentKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustombUseInverseSquaredFalloffKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeLightFactoryNode::~UInterchangeLightFactoryNode((UInterchangeLightFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e541f50

void __thiscall
UInterchangePointLightFactoryNode::CopyWithObject
          (UInterchangePointLightFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
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
  float local_res20 [2];
  FName local_d8;
  FName local_d0;
  TAttributeHandle<bool,void> local_c8;
  TAttributeHandle<float,void> local_b0;
  FString local_98;
  FString local_88;
  void *local_78 [2];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  UInterchangeLightFactoryNode::CopyWithObject((UInterchangeLightFactoryNode *)this,param_1,param_2)
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
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_78);
  ::FString::ConcatFC(&local_98,pFVar6,L".GetbUseInverseSquaredFalloff");
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
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
                    (pFVar2,&this->Macro_CustombUseInverseSquaredFalloffKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
              (pFVar2,&local_c8,&this->Macro_CustombUseInverseSquaredFalloffKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::IsValid(&local_c8);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<bool,void>::Get
                        (&local_c8,local_res10);
      if ((EVar7 & Operation_Success) != None) {
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d8,L"bUseInverseSquaredFalloff");
        pUVar5 = Z_Construct_UClass_UPointLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                  ((UInterchangeFactoryBaseNode *)this,
                   &(this->Macro_CustombUseInverseSquaredFalloffKey).Key,pUVar5,local_d8);
        goto LAB_14e5420da;
      }
      ::FString::FString(&local_68,&(this->Macro_CustombUseInverseSquaredFalloffKey).Key);
      pFVar6 = ::FString::FString(&local_38,&local_98);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_68);
    }
    if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5420da:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_88,pFVar6,L".GetLightFalloffExponent");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
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
                    (pFVar2,&this->Macro_CustomLightFalloffExponentKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_b0,&this->Macro_CustomLightFalloffExponentKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_b0);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_b0,local_res20);
      if ((EVar7 & Operation_Success) != None) {
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d0,L"LightFalloffExponent");
        pUVar5 = Z_Construct_UClass_UPointLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,
                   &(this->Macro_CustomLightFalloffExponentKey).Key,pUVar5,local_d0);
        goto LAB_14e542213;
      }
      ::FString::FString(&local_48,&(this->Macro_CustomLightFalloffExponentKey).Key);
      pFVar6 = ::FString::FString(&local_28,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_48);
    }
    if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e542213:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCustomLightFalloffExponent @ 14e554c60

bool __thiscall
UInterchangePointLightFactoryNode::GetCustomLightFalloffExponent
          (UInterchangePointLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetLightFalloffExponent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightFalloffExponentKey
                     ,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomUseInverseSquaredFalloff @ 14e557740

bool __thiscall
UInterchangePointLightFactoryNode::GetCustomUseInverseSquaredFalloff
          (UInterchangePointLightFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetbUseInverseSquaredFalloff");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustombUseInverseSquaredFalloffKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55b150

UClass * __cdecl UInterchangePointLightFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangePointLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangePointLightFactoryNode,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePointLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangePointLightFactoryNode>,local_res8,
               UInterchangeLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePointLightFactoryNode.InnerSingleton;
}

// SetCustomLightFalloffExponent @ 14e56fed0

bool __thiscall
UInterchangePointLightFactoryNode::SetCustomLightFalloffExponent
          (UInterchangePointLightFactoryNode *this,float param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetLightFalloffExponent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomLightFalloffExponentKey
                     ,local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomLightFalloffExponentKey).Key);
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
      ::FName::FName(&local_res8,L"LightFalloffExponent");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomLightFalloffExponentKey).Key);
      pUVar6 = Z_Construct_UClass_UPointLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,
                 &(this->Macro_CustomLightFalloffExponentKey).Key,pUVar6,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomUseInverseSquaredFalloff @ 14e57d1f0

bool __thiscall
UInterchangePointLightFactoryNode::SetCustomUseInverseSquaredFalloff
          (UInterchangePointLightFactoryNode *this,bool param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetbUseInverseSquaredFalloff");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustombUseInverseSquaredFalloffKey,local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustombUseInverseSquaredFalloffKey).Key);
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
      ::FName::FName(&local_res8,L"bUseInverseSquaredFalloff");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustombUseInverseSquaredFalloffKey).Key);
      pUVar6 = Z_Construct_UClass_UPointLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                ((UInterchangeFactoryBaseNode *)this,
                 &(this->Macro_CustombUseInverseSquaredFalloffKey).Key,pUVar6,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangePointLightFactoryNode @ 14e57f740

void __cdecl
UInterchangePointLightFactoryNode::StaticRegisterNativesUInterchangePointLightFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomLightFalloffExponent @ 14e591800

void __cdecl
UInterchangePointLightFactoryNode::execGetCustomLightFalloffExponent
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetLightFalloffExponent");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x14].field_0x10
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomUseInverseSquaredFalloff @ 14e597330

void __cdecl
UInterchangePointLightFactoryNode::execGetCustomUseInverseSquaredFalloff
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetbUseInverseSquaredFalloff");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x14),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomLightFalloffExponent @ 14e5ab250

void __cdecl
UInterchangePointLightFactoryNode::execSetCustomLightFalloffExponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  UClass *pUVar6;
  bool bVar7;
  int local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  FString local_48;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar7 = local_res8[0] != 0;
  local_res18[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_58);
  ::FString::ConcatFC(&local_68,pFVar4,L".SetLightFalloffExponent");
  if (local_58[0] != (void *)0x0) {
    FMemory::Free(local_58[0]);
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x14].field_0x10
                     ,local_res18,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)&param_1[0x14].field_0x10);
    _Src.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_78,(FAttributeKey *)&local_48);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (bVar7) {
      ::FName::FName(&local_res20,L"LightFalloffExponent");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,
                 (FString *)&param_1[0x14].field_0x10);
      pUVar6 = Z_Construct_UClass_UPointLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)&param_1[0x14].field_0x10,pUVar6,
                 local_res20);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execSetCustomUseInverseSquaredFalloff @ 14e5b28d0

void __cdecl
UInterchangePointLightFactoryNode::execSetCustomUseInverseSquaredFalloff
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  FString *pFVar3;
  EAttributeStorageResult EVar4;
  UClass *pUVar5;
  bool bVar6;
  bool bVar7;
  bool local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  
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
  bVar6 = local_res10[0] != 0;
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
  bVar7 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res8[0] = bVar6;
  pFVar3 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_68);
  ::FString::ConcatFC(&local_78,pFVar3,L".SetbUseInverseSquaredFalloff");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar4 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x14),
                     local_res8,None);
  if ((EVar4 & Operation_Success) == None) {
    ::FString::FString(&local_58,(FString *)(param_1 + 0x14));
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar4,&local_88,(FAttributeKey *)&local_58);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (bVar7) {
      ::FName::FName(&local_res20,L"bUseInverseSquaredFalloff");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,(FString *)(param_1 + 0x14)
                );
      pUVar5 = Z_Construct_UClass_UPointLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<bool>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)(param_1 + 0x14),pUVar5,
                 local_res20);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

