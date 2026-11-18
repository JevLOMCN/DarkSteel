// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 11

// StaticClass @ 14e5180a0

UClass * __cdecl UInterchangeMaterialFunctionCallExpressionFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",
               L"InterchangeMaterialFunctionCallExpressionFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
                InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode,0x1e0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMaterialFunctionCallExpressionFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionCallExpressionFactoryNode>
               ,local_res8,UInterchangeMaterialExpressionFactoryNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
         InnerSingleton;
}

// UInterchangeMaterialFunctionCallExpressionFactoryNode @ 14e531350

UInterchangeMaterialFunctionCallExpressionFactoryNode * __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::
UInterchangeMaterialFunctionCallExpressionFactoryNode
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeMaterialExpressionFactoryNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"ExpressionClassName");
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionCallExpressionFactoryNode__6B_;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomMaterialFunctionDependencyKey).Key,L"MaterialFunctionDependency");
  return this;
}

// UInterchangeMaterialFunctionCallExpressionFactoryNode @ 14e5313c0

UInterchangeMaterialFunctionCallExpressionFactoryNode * __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::
UInterchangeMaterialFunctionCallExpressionFactoryNode
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeMaterialExpressionFactoryNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"ExpressionClassName");
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionCallExpressionFactoryNode__6B_;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomMaterialFunctionDependencyKey).Key,L"MaterialFunctionDependency");
  return this;
}

// ~UInterchangeMaterialFunctionCallExpressionFactoryNode @ 14e535ba0

void __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::
~UInterchangeMaterialFunctionCallExpressionFactoryNode
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeMaterialFunctionCallExpressionFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomMaterialFunctionDependencyKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeMaterialExpressionFactoryNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetCustomMaterialFunctionDependency @ 14e554f20

bool __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::GetCustomMaterialFunctionDependency
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMaterialFunctionDependency");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMaterialFunctionDependencyKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55ab50

UClass * __cdecl UInterchangeMaterialFunctionCallExpressionFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",
               L"InterchangeMaterialFunctionCallExpressionFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
                InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode,0x1e0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeMaterialFunctionCallExpressionFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeMaterialFunctionCallExpressionFactoryNode>
               ,local_res8,UInterchangeMaterialExpressionFactoryNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode.
         InnerSingleton;
}

// GetTypeName @ 14e55d6e0

FString * __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::GetTypeName
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MaterialFunctionCallExpressionFactoryNode");
  return __return_storage_ptr__;
}

// SetCustomMaterialFunctionDependency @ 14e570a80

bool __thiscall
UInterchangeMaterialFunctionCallExpressionFactoryNode::SetCustomMaterialFunctionDependency
          (UInterchangeMaterialFunctionCallExpressionFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetMaterialFunctionDependency");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomMaterialFunctionDependencyKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomMaterialFunctionDependencyKey).Key);
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
  if (bVar2) {
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)this,param_1);
    return true;
  }
  return false;
}

// StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode @ 14e57f570

void __cdecl
UInterchangeMaterialFunctionCallExpressionFactoryNode::
StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr =
       Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomMaterialFunctionDependency @ 14e591e30

void __cdecl
UInterchangeMaterialFunctionCallExpressionFactoryNode::execGetCustomMaterialFunctionDependency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
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
  pFVar5 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetMaterialFunctionDependency");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<FString>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_28,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomMaterialFunctionDependency @ 14e5abbd0

void __cdecl
UInterchangeMaterialFunctionCallExpressionFactoryNode::execSetCustomMaterialFunctionDependency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetMaterialFunctionDependency");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_68,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x18);
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
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    UInterchangeFactoryBaseNode::AddFactoryDependencyUid
              ((UInterchangeFactoryBaseNode *)param_1,&local_68);
  }
  *(bool *)param_3 = bVar3;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

