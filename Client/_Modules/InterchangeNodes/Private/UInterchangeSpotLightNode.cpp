// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 15

// StaticClass @ 14e475bc0

UClass * __cdecl UInterchangeSpotLightNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSpotLightNode",
               &Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSpotLightNode,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeSpotLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeSpotLightNode>,local_res8,
               UInterchangePointLightNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton;
}

// UInterchangeSpotLightNode @ 14e4891f0

UInterchangeSpotLightNode * __thiscall
UInterchangeSpotLightNode::UInterchangeSpotLightNode
          (UInterchangeSpotLightNode *this,FVTableHelper *param_1)

{
  UInterchangeLightNode::UInterchangeLightNode((UInterchangeLightNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangePointLightNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"UseInverseSquaredFalloff");
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"LightFalloffExponent");
  this->_padding_ = (longlong)&___7UInterchangeSpotLightNode__6B_;
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

// UInterchangeSpotLightNode @ 14e4892a0

UInterchangeSpotLightNode * __thiscall
UInterchangeSpotLightNode::UInterchangeSpotLightNode(UInterchangeSpotLightNode *this)

{
  UInterchangePointLightNode::UInterchangePointLightNode((UInterchangePointLightNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeSpotLightNode__6B_;
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

// ~UInterchangeSpotLightNode @ 14e48b5e0

void __thiscall
UInterchangeSpotLightNode::~UInterchangeSpotLightNode(UInterchangeSpotLightNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSpotLightNode__6B_;
  pFVar1 = (this->Macro_CustomOuterConeAngleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInnerConeAngleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangePointLightNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeLightNode::~UInterchangeLightNode((UInterchangeLightNode *)this);
  return;
}

// GetCustomInnerConeAngle @ 14e492d70

bool __thiscall
UInterchangeSpotLightNode::GetCustomInnerConeAngle(UInterchangeSpotLightNode *this,float *param_1)

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

// GetCustomOuterConeAngle @ 14e493870

bool __thiscall
UInterchangeSpotLightNode::GetCustomOuterConeAngle(UInterchangeSpotLightNode *this,float *param_1)

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

// GetPrivateStaticClass @ 14e499360

UClass * __cdecl UInterchangeSpotLightNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSpotLightNode",
               &Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSpotLightNode,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UInterchangeSpotLightNode>,
               InternalVTableHelperCtorCaller<UInterchangeSpotLightNode>,local_res8,
               UInterchangePointLightNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSpotLightNode.InnerSingleton;
}

// GetTypeName @ 14e49ad70

FString * __thiscall
UInterchangeSpotLightNode::GetTypeName
          (UInterchangeSpotLightNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SpotLightNode");
  return __return_storage_ptr__;
}

// SetCustomInnerConeAngle @ 14e4a3490

bool __thiscall
UInterchangeSpotLightNode::SetCustomInnerConeAngle(UInterchangeSpotLightNode *this,float param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetInnerConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomInnerConeAngleKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomInnerConeAngleKey).Key);
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

// SetCustomOuterConeAngle @ 14e4a4720

bool __thiscall
UInterchangeSpotLightNode::SetCustomOuterConeAngle(UInterchangeSpotLightNode *this,float param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetOuterConeAngle");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomOuterConeAngleKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomOuterConeAngleKey).Key);
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

// StaticRegisterNativesUInterchangeSpotLightNode @ 14e4a8a80

void __cdecl UInterchangeSpotLightNode::StaticRegisterNativesUInterchangeSpotLightNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSpotLightNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomInnerConeAngle @ 14e4b33a0

void __cdecl
UInterchangeSpotLightNode::execGetCustomInnerConeAngle
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x8,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomOuterConeAngle @ 14e4b4740

void __cdecl
UInterchangeSpotLightNode::execGetCustomOuterConeAngle
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x18,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomInnerConeAngle @ 14e4c2930

void __cdecl
UInterchangeSpotLightNode::execSetCustomInnerConeAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetInnerConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x8,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[7].field_0x8);
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

// execSetCustomOuterConeAngle @ 14e4c4590

void __cdecl
UInterchangeSpotLightNode::execSetCustomOuterConeAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetOuterConeAngle");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[7].field_0x18,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[7].field_0x18);
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

