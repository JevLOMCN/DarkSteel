// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 15

// StaticClass @ 14e51edb0

UClass * __cdecl UInterchangeSpotLightFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSpotLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSpotLightFactoryNode,0x360,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSpotLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSpotLightFactoryNode>,local_res8,
               UInterchangePointLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton;
}

// UInterchangeSpotLightFactoryNode @ 14e5331f0

UInterchangeSpotLightFactoryNode * __thiscall
UInterchangeSpotLightFactoryNode::UInterchangeSpotLightFactoryNode
          (UInterchangeSpotLightFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeLightFactoryNode::UInterchangeLightFactoryNode
            ((UInterchangeLightFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePointLightFactoryNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"bUseInverseSquaredFalloff");
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"LightFalloffExponent");
  this->_padding_ = (longlong)&___7UInterchangeSpotLightFactoryNode__6B_;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInnerConeAngleKey).Key,L"InnerConeAngle");
  (this->Macro_CustomOuterConeAngleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomOuterConeAngleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomOuterConeAngleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomOuterConeAngleKey).Key,L"OuterConeAngle");
  return this;
}

// UInterchangeSpotLightFactoryNode @ 14e5332a0

UInterchangeSpotLightFactoryNode * __thiscall
UInterchangeSpotLightFactoryNode::UInterchangeSpotLightFactoryNode
          (UInterchangeSpotLightFactoryNode *this)

{
  UInterchangePointLightFactoryNode::UInterchangePointLightFactoryNode
            ((UInterchangePointLightFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSpotLightFactoryNode__6B_;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInnerConeAngleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInnerConeAngleKey).Key,L"InnerConeAngle");
  (this->Macro_CustomOuterConeAngleKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomOuterConeAngleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomOuterConeAngleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomOuterConeAngleKey).Key,L"OuterConeAngle");
  return this;
}

// ~UInterchangeSpotLightFactoryNode @ 14e536460

void __thiscall
UInterchangeSpotLightFactoryNode::~UInterchangeSpotLightFactoryNode
          (UInterchangeSpotLightFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSpotLightFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomOuterConeAngleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInnerConeAngleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangePointLightFactoryNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeLightFactoryNode::~UInterchangeLightFactoryNode((UInterchangeLightFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e543f60

void __thiscall
UInterchangeSpotLightFactoryNode::CopyWithObject
          (UInterchangeSpotLightFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
          UObject *param_2)

{
  int iVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  EAttributeStorageResult EVar7;
  float local_res10 [2];
  float local_res20 [2];
  FName local_d8;
  FName local_d0;
  TAttributeHandle<float,void> local_c8;
  TAttributeHandle<float,void> local_b0;
  FString local_98;
  FString local_88;
  void *local_78 [2];
  FString local_68;
  void *local_58 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  UInterchangePointLightFactoryNode::CopyWithObject
            ((UInterchangePointLightFactoryNode *)this,param_1,param_2);
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
  ::FString::ConcatFC(&local_98,pFVar6,L".GetInnerConeAngle");
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
                    (pFVar2,&this->Macro_CustomInnerConeAngleKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_c8,&this->Macro_CustomInnerConeAngleKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_c8);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_c8,local_res10);
      if ((EVar7 & Operation_Success) != None) {
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d8,L"InnerConeAngle");
        pUVar5 = Z_Construct_UClass_USpotLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomInnerConeAngleKey).Key,
                   pUVar5,local_d8);
        goto LAB_14e5440ea;
      }
      ::FString::FString(&local_68,&(this->Macro_CustomInnerConeAngleKey).Key);
      pFVar6 = ::FString::FString(&local_38,&local_98);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_68);
    }
    if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5440ea:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_88,pFVar6,L".GetOuterConeAngle");
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
                    (pFVar2,&this->Macro_CustomOuterConeAngleKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_b0,&this->Macro_CustomOuterConeAngleKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_b0);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_b0,local_res20);
      if ((EVar7 & Operation_Success) != None) {
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d0,L"OuterConeAngle");
        pUVar5 = Z_Construct_UClass_USpotLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomOuterConeAngleKey).Key,
                   pUVar5,local_d0);
        goto LAB_14e544223;
      }
      ::FString::FString(&local_48,&(this->Macro_CustomOuterConeAngleKey).Key);
      pFVar6 = ::FString::FString(&local_28,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_48);
    }
    if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e544223:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCustomInnerConeAngle @ 14e554430

bool __thiscall
UInterchangeSpotLightFactoryNode::GetCustomInnerConeAngle
          (UInterchangeSpotLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetInnerConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomInnerConeAngleKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomOuterConeAngle @ 14e555820

bool __thiscall
UInterchangeSpotLightFactoryNode::GetCustomOuterConeAngle
          (UInterchangeSpotLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetOuterConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomOuterConeAngleKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55b990

UClass * __cdecl UInterchangeSpotLightFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeSpotLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSpotLightFactoryNode,0x360,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSpotLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeSpotLightFactoryNode>,local_res8,
               UInterchangePointLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpotLightFactoryNode.InnerSingleton;
}

// SetCustomInnerConeAngle @ 14e56ef10

bool __thiscall
UInterchangeSpotLightFactoryNode::SetCustomInnerConeAngle
          (UInterchangeSpotLightFactoryNode *this,float param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetInnerConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomInnerConeAngleKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomInnerConeAngleKey).Key);
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
      ::FName::FName(&local_res8,L"InnerConeAngle");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomInnerConeAngleKey).Key);
      pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomInnerConeAngleKey).Key,
                 pUVar6,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomOuterConeAngle @ 14e5734b0

bool __thiscall
UInterchangeSpotLightFactoryNode::SetCustomOuterConeAngle
          (UInterchangeSpotLightFactoryNode *this,float param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetOuterConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomOuterConeAngleKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomOuterConeAngleKey).Key);
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
      ::FName::FName(&local_res8,L"OuterConeAngle");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomOuterConeAngleKey).Key);
      pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomOuterConeAngleKey).Key,
                 pUVar6,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeSpotLightFactoryNode @ 14e57f9d0

void __cdecl
UInterchangeSpotLightFactoryNode::StaticRegisterNativesUInterchangeSpotLightFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomInnerConeAngle @ 14e590a00

void __cdecl
UInterchangeSpotLightFactoryNode::execGetCustomInnerConeAngle
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetInnerConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x14].field_0x20
                     ,&local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomOuterConeAngle @ 14e593230

void __cdecl
UInterchangeSpotLightFactoryNode::execGetCustomOuterConeAngle
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetOuterConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x15].field_0x8,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomInnerConeAngle @ 14e5a9b70

void __cdecl
UInterchangeSpotLightFactoryNode::execSetCustomInnerConeAngle
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
  ::FString::ConcatFC(&local_68,pFVar4,L".SetInnerConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x14].field_0x20
                     ,local_res18,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)&param_1[0x14].field_0x20);
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
      ::FName::FName(&local_res20,L"InnerConeAngle");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,
                 (FString *)&param_1[0x14].field_0x20);
      pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)&param_1[0x14].field_0x20,pUVar6,
                 local_res20);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execSetCustomOuterConeAngle @ 14e5ad750

void __cdecl
UInterchangeSpotLightFactoryNode::execSetCustomOuterConeAngle
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
  ::FString::ConcatFC(&local_68,pFVar4,L".SetOuterConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x15].field_0x8,
                     local_res18,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_48,(FString *)&param_1[0x15].field_0x8);
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
      ::FName::FName(&local_res20,L"OuterConeAngle");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&param_1[7].field_0x8,
                 (FString *)&param_1[0x15].field_0x8);
      pUVar6 = Z_Construct_UClass_USpotLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)param_1,(FString *)&param_1[0x15].field_0x8,pUVar6,
                 local_res20);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 1;
  }
  return;
}

