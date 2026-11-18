// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 20

// StaticClass @ 14e5178c0

UClass * __cdecl UInterchangeMaterialInstanceFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialInstanceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialInstanceFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeMaterialInstanceFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton;
}

// UInterchangeMaterialInstanceFactoryNode @ 14e5314d0

UInterchangeMaterialInstanceFactoryNode * __thiscall
UInterchangeMaterialInstanceFactoryNode::UInterchangeMaterialInstanceFactoryNode
          (UInterchangeMaterialInstanceFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"IsMaterialImportEnabled");
  this->_padding_ = (longlong)&___7UInterchangeMaterialInstanceFactoryNode__6B_;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInstanceClassNameKey).Key,L"InstanceClassName");
  (this->Macro_CustomParentKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomParentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomParentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomParentKey).Key,L"Parent");
  (this->Macro_CustomBlendModeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomBlendModeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBlendModeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBlendModeKey).Key,L"BlendMode");
  return this;
}

// UInterchangeMaterialInstanceFactoryNode @ 14e531580

UInterchangeMaterialInstanceFactoryNode * __thiscall
UInterchangeMaterialInstanceFactoryNode::UInterchangeMaterialInstanceFactoryNode
          (UInterchangeMaterialInstanceFactoryNode *this)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"IsMaterialImportEnabled");
  this->_padding_ = (longlong)&___7UInterchangeMaterialInstanceFactoryNode__6B_;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomInstanceClassNameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomInstanceClassNameKey).Key,L"InstanceClassName");
  (this->Macro_CustomParentKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomParentKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomParentKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomParentKey).Key,L"Parent");
  (this->Macro_CustomBlendModeKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomBlendModeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomBlendModeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomBlendModeKey).Key,L"BlendMode");
  return this;
}

// ~UInterchangeMaterialInstanceFactoryNode @ 14e535c40

void __thiscall
UInterchangeMaterialInstanceFactoryNode::~UInterchangeMaterialInstanceFactoryNode
          (UInterchangeMaterialInstanceFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeMaterialInstanceFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomBlendModeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomParentKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomInstanceClassNameKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeBaseMaterialFactoryNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// GetCustomBlendMode @ 14e551480

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::GetCustomBlendMode
          (UInterchangeMaterialInstanceFactoryNode *this,TEnumAsByte<EBlendMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetBlendMode");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<TEnumAsByte<enum_EBlendMode>_>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBlendModeKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomInstanceClassName @ 14e5544e0

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::GetCustomInstanceClassName
          (UInterchangeMaterialInstanceFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetInstanceClassName");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomInstanceClassNameKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomParent @ 14e5558d0

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::GetCustomParent
          (UInterchangeMaterialInstanceFactoryNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetParent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomParentKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetObjectClass @ 14e559050

UClass * __thiscall
UInterchangeMaterialInstanceFactoryNode::GetObjectClass
          (UInterchangeMaterialInstanceFactoryNode *this)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  EAttributeStorageResult EVar6;
  size_t sVar7;
  UClass *pUVar8;
  int iVar9;
  FString local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TAttributeHandle<FString,void> local_78;
  FString local_60;
  void *local_50 [2];
  FString local_40;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  iVar9 = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_50);
  ::FString::ConcatFC(&local_60,pFVar4,L".GetInstanceClassName");
  if (local_50[0] != (void *)0x0) {
    FMemory::Free(local_50[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UClass *)(*pcVar2)();
    return pUVar5;
  }
  pFVar1 = &this->Macro_CustomInstanceClassNameKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_78,pFVar1);
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_78);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_78,&local_98);
      if ((EVar6 & Operation_Success) != None) {
        if (local_78.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e559183;
      }
      ::FString::FString(&local_40,&pFVar1->Key);
      pFVar4 = ::FString::FString(&local_18,&local_60);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar4,(FAttributeKey *)&local_40);
    }
    if (local_78.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e559183:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (local_98.Data.ArrayNum == 0) {
      local_88 = (FScriptContainerElement *)0x15060d16c;
LAB_14e5591b7:
      sVar7 = wcslen((wchar_t *)local_88);
      iVar9 = (int)sVar7;
    }
    else {
      local_88 = local_98.Data.AllocatorInstance.Data;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14e5591b7;
    }
    iStack_80 = iVar9;
    pUVar5 = Z_Construct_UClass_UClass_NoRegister();
    local_28._12_4_ = uStack_7c;
    local_28.Size = iStack_80;
    local_28.DataPtr = (wchar_t *)local_88;
    pUVar5 = (UClass *)StaticFindObject(pUVar5,(UObject *)0x0,&local_28,None);
    pUVar8 = Z_Construct_UClass_UMaterialInstance_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar9 = (int)pUVar8->_padding_;
      if (((int)pUVar5->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar8->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14e559226;
    }
  }
  pUVar5 = Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
LAB_14e559226:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 14e55acd0

UClass * __cdecl UInterchangeMaterialInstanceFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeMaterialInstanceFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeMaterialInstanceFactoryNode>
               ,InternalVTableHelperCtorCaller<UInterchangeMaterialInstanceFactoryNode>,local_res8,
               UInterchangeBaseMaterialFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMaterialInstanceFactoryNode.InnerSingleton;
}

// GetTypeName @ 14e55d740

FString * __thiscall
UInterchangeMaterialInstanceFactoryNode::GetTypeName
          (UInterchangeMaterialInstanceFactoryNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MaterialInstanceFactoryNode");
  return __return_storage_ptr__;
}

// SetCustomBlendMode @ 14e563560

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::SetCustomBlendMode
          (UInterchangeMaterialInstanceFactoryNode *this,TEnumAsByte<EBlendMode> param_1,
          bool param_2)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined7 in_register_00000081;
  uchar local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  pFVar4 = (FString *)
           (**(code **)(this->_padding_ + 0x2b0))
                     (this,local_28,CONCAT71(in_register_00000081,param_2));
  ::FString::ConcatFC(&local_38,pFVar4,L".SetBlendMode");
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
  local_res10[0] = param_1.Value;
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomBlendModeKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomBlendModeKey).Key);
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

// SetCustomInstanceClassName @ 14e56f0b0

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::SetCustomInstanceClassName
          (UInterchangeMaterialInstanceFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetInstanceClassName");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomInstanceClassNameKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomInstanceClassNameKey).Key);
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

// SetCustomParent @ 14e573650

bool __thiscall
UInterchangeMaterialInstanceFactoryNode::SetCustomParent
          (UInterchangeMaterialInstanceFactoryNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetParent");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomParentKey,param_1,None)
  ;
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomParentKey).Key);
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

// StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode @ 14e57f5f0

void __cdecl
UInterchangeMaterialInstanceFactoryNode::
StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomBlendMode @ 14e58b720

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execGetCustomBlendMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TEnumAsByte<EBlendMode> *pTVar5;
  TEnumAsByte<EBlendMode> local_res8 [8];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0].Value = '\0';
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
  pTVar5 = local_res8;
  if ((TEnumAsByte<EBlendMode> *)param_2->MostRecentPropertyAddress !=
      (TEnumAsByte<EBlendMode> *)0x0) {
    pTVar5 = (TEnumAsByte<EBlendMode> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetBlendMode");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<TEnumAsByte<enum_EBlendMode>_>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     &local_38,pTVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomInstanceClassName @ 14e590b30

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execGetCustomInstanceClassName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomInstanceClassName((UInterchangeMaterialInstanceFactoryNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomParent @ 14e593490

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execGetCustomParent
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetParent");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),&local_28
                     ,pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomBlendMode @ 14e5a2df0

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execSetCustomBlendMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar uVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FString *pFVar5;
  EAttributeStorageResult EVar6;
  undefined1 uVar7;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined4 local_res18 [4];
  FString local_68;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
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
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_48);
  ::FString::ConcatFC(&local_58,pFVar5,L".SetBlendMode");
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((*(longlong *)(param_1 + 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res10[0] = uVar3;
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xc].field_0x10,
                     local_res10,None);
  if ((EVar6 & Operation_Success) == None) {
    ::FString::FString(&local_38,(FString *)&param_1[0xc].field_0x10);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar6,&local_68,(FAttributeKey *)&local_38);
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar7;
  return;
}

// execSetCustomInstanceClassName @ 14e5a9db0

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execSetCustomInstanceClassName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetInstanceClassName");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0xb].field_0x18,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[0xb].field_0x18);
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomParent @ 14e5adba0

void __cdecl
UInterchangeMaterialInstanceFactoryNode::execSetCustomParent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetParent");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0xc),&local_48
                     ,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)(param_1 + 0xc));
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_38.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    UE::Interchange::LogAttributeStorageErrors(EVar5,&local_58,(FAttributeKey *)&local_18);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar6;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

