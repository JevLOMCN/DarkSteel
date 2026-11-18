// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 11

// StaticClass @ 14e5155b0

UClass * __cdecl UInterchangeBaseMaterialFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeBaseMaterialFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseMaterialFactoryNode,0x1d0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBaseMaterialFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseMaterialFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton;
}

// UInterchangeBaseMaterialFactoryNode @ 14e52fb00

UInterchangeBaseMaterialFactoryNode * __thiscall
UInterchangeBaseMaterialFactoryNode::UInterchangeBaseMaterialFactoryNode
          (UInterchangeBaseMaterialFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomIsMaterialImportEnabledKey).Key,L"IsMaterialImportEnabled");
  return this;
}

// UInterchangeBaseMaterialFactoryNode @ 14e52fb50

UInterchangeBaseMaterialFactoryNode * __thiscall
UInterchangeBaseMaterialFactoryNode::UInterchangeBaseMaterialFactoryNode
          (UInterchangeBaseMaterialFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomIsMaterialImportEnabledKey).Key,L"IsMaterialImportEnabled");
  return this;
}

// ~UInterchangeBaseMaterialFactoryNode @ 14e535430

void __thiscall
UInterchangeBaseMaterialFactoryNode::~UInterchangeBaseMaterialFactoryNode
          (UInterchangeBaseMaterialFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomIsMaterialImportEnabledKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetCustomIsMaterialImportEnabled @ 14e554850

bool __thiscall
UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled
          (UInterchangeBaseMaterialFactoryNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetIsMaterialImportEnabled");
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
                     &this->Macro_CustomIsMaterialImportEnabledKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetMaterialFactoryNodeUidFromMaterialNodeUid @ 14e5583a0

FString * __cdecl
UInterchangeBaseMaterialFactoryNode::GetMaterialFactoryNodeUidFromMaterialNodeUid
          (FString *__return_storage_ptr__,FString *param_1)

{
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e559f50

UClass * __cdecl UInterchangeBaseMaterialFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeBaseMaterialFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeBaseMaterialFactoryNode,0x1d0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeBaseMaterialFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeBaseMaterialFactoryNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeBaseMaterialFactoryNode.InnerSingleton;
}

// SetCustomIsMaterialImportEnabled @ 14e56f7e0

bool __thiscall
UInterchangeBaseMaterialFactoryNode::SetCustomIsMaterialImportEnabled
          (UInterchangeBaseMaterialFactoryNode *this,bool *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetIsMaterialImportEnabled");
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
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomIsMaterialImportEnabledKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomIsMaterialImportEnabledKey).Key);
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

// StaticRegisterNativesUInterchangeBaseMaterialFactoryNode @ 14e57f1a0

void __cdecl
UInterchangeBaseMaterialFactoryNode::StaticRegisterNativesUInterchangeBaseMaterialFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomIsMaterialImportEnabled @ 14e590ff0

void __cdecl
UInterchangeBaseMaterialFactoryNode::execGetCustomIsMaterialImportEnabled
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetIsMaterialImportEnabled");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execSetCustomIsMaterialImportEnabled @ 14e5aa540

void __cdecl
UInterchangeBaseMaterialFactoryNode::execSetCustomIsMaterialImportEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool *pbVar7;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  pbVar7 = local_res8;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar7 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetIsMaterialImportEnabled");
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x8,
                     pbVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0xb].field_0x8);
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

