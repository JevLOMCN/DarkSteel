// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 16

// StaticClass @ 14e51e490

UClass * __cdecl UInterchangeRectLightFactoryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeRectLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeRectLightFactoryNode,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeRectLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeRectLightFactoryNode>,local_res8,
               UInterchangeLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton;
}

// UInterchangeRectLightFactoryNode @ 14e5323c0

UInterchangeRectLightFactoryNode * __thiscall
UInterchangeRectLightFactoryNode::UInterchangeRectLightFactoryNode
          (UInterchangeRectLightFactoryNode *this,FVTableHelper *param_1)

{
  UInterchangeLightFactoryNode::UInterchangeLightFactoryNode
            ((UInterchangeLightFactoryNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeRectLightFactoryNode__6B_;
  (this->Macro_CustomSourceWidthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceWidthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceWidthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSourceWidthKey).Key,L"SourceWidth");
  (this->Macro_CustomSourceHeightKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceHeightKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceHeightKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSourceHeightKey).Key,L"SourceHeight");
  return this;
}

// UInterchangeRectLightFactoryNode @ 14e532430

UInterchangeRectLightFactoryNode * __thiscall
UInterchangeRectLightFactoryNode::UInterchangeRectLightFactoryNode
          (UInterchangeRectLightFactoryNode *this)

{
  UInterchangeLightFactoryNode::UInterchangeLightFactoryNode((UInterchangeLightFactoryNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeRectLightFactoryNode__6B_;
  (this->Macro_CustomSourceWidthKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceWidthKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceWidthKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSourceWidthKey).Key,L"SourceWidth");
  (this->Macro_CustomSourceHeightKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceHeightKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceHeightKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSourceHeightKey).Key,L"SourceHeight");
  return this;
}

// ~UInterchangeRectLightFactoryNode @ 14e535fd0

void __thiscall
UInterchangeRectLightFactoryNode::~UInterchangeRectLightFactoryNode
          (UInterchangeRectLightFactoryNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeRectLightFactoryNode__6B_;
  pFVar1 = (this->Macro_CustomSourceHeightKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSourceWidthKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeLightFactoryNode::~UInterchangeLightFactoryNode((UInterchangeLightFactoryNode *)this);
  return;
}

// CopyWithObject @ 14e542250

void __thiscall
UInterchangeRectLightFactoryNode::CopyWithObject
          (UInterchangeRectLightFactoryNode *this,UInterchangeFactoryBaseNode *param_1,
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
  ::FString::ConcatFC(&local_98,pFVar6,L".GetSourceWidth");
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
                    (pFVar2,&this->Macro_CustomSourceWidthKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_c8,&this->Macro_CustomSourceWidthKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_c8);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_c8,local_res10);
      if ((EVar7 & Operation_Success) != None) {
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d8,L"SourceWidth");
        pUVar5 = Z_Construct_UClass_URectLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSourceWidthKey).Key,
                   pUVar5,local_d8);
        goto LAB_14e5423da;
      }
      ::FString::FString(&local_68,&(this->Macro_CustomSourceWidthKey).Key);
      pFVar6 = ::FString::FString(&local_38,&local_98);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_68);
    }
    if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e5423da:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pFVar6 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
  ::FString::ConcatFC(&local_88,pFVar6,L".GetSourceHeight");
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
                    (pFVar2,&this->Macro_CustomSourceHeightKey);
  if (bVar4) {
    UE::Interchange::FAttributeStorage::GetAttributeHandle<float,void>
              (pFVar2,&local_b0,&this->Macro_CustomSourceHeightKey);
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::IsValid(&local_b0);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>::Get
                        (&local_b0,local_res20);
      if ((EVar7 & Operation_Success) != None) {
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        ::FName::FName(&local_d0,L"SourceHeight");
        pUVar5 = Z_Construct_UClass_URectLightComponent_NoRegister();
        UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                  ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSourceHeightKey).Key,
                   pUVar5,local_d0);
        goto LAB_14e542513;
      }
      ::FString::FString(&local_48,&(this->Macro_CustomSourceHeightKey).Key);
      pFVar6 = ::FString::FString(&local_28,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar6,(FAttributeKey *)&local_48);
    }
    if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e542513:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCustomSourceHeight @ 14e556750

bool __thiscall
UInterchangeRectLightFactoryNode::GetCustomSourceHeight
          (UInterchangeRectLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSourceHeight");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSourceHeightKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSourceWidth @ 14e556970

bool __thiscall
UInterchangeRectLightFactoryNode::GetCustomSourceWidth
          (UInterchangeRectLightFactoryNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSourceWidth");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSourceWidthKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55b210

UClass * __cdecl UInterchangeRectLightFactoryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeRectLightFactoryNode",
               &Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton,
               StaticRegisterNativesUInterchangeRectLightFactoryNode,0x340,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeRectLightFactoryNode>,
               InternalVTableHelperCtorCaller<UInterchangeRectLightFactoryNode>,local_res8,
               UInterchangeLightFactoryNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeRectLightFactoryNode.InnerSingleton;
}

// OnRestoreAllCustomAttributeDelegates @ 14e55f080

void __thiscall
UInterchangeRectLightFactoryNode::OnRestoreAllCustomAttributeDelegates
          (UInterchangeRectLightFactoryNode *this)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  float local_res8 [2];
  
  UInterchangeBaseLightFactoryNode::OnRestoreAllCustomAttributeDelegates
            ((UInterchangeBaseLightFactoryNode *)this);
  iVar1 = (int)this->_padding_;
  pwVar6 = L"";
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)this->_padding_;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,(FString *)&this->_padding_);
  if ((iVar4 != -1) &&
     (bVar2 = UInterchangeLightFactoryNode::GetCustomIntensityUnits
                        ((UInterchangeLightFactoryNode *)this,(ELightUnits *)local_res8), bVar2)) {
    UInterchangeLightFactoryNode::SetCustomIntensityUnits
              ((UInterchangeLightFactoryNode *)this,local_res8[0]._0_1_,true);
  }
  iVar1 = (int)this->_padding_;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)this->_padding_;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,(FString *)&this->_padding_);
  if ((iVar4 != -1) &&
     (bVar2 = UInterchangeLightFactoryNode::GetCustomAttenuationRadius
                        ((UInterchangeLightFactoryNode *)this,local_res8), bVar2)) {
    UInterchangeLightFactoryNode::SetCustomAttenuationRadius
              ((UInterchangeLightFactoryNode *)this,local_res8[0],true);
  }
  iVar1 = (int)this->_padding_;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)this->_padding_;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,(FString *)&this->_padding_);
  if ((iVar4 != -1) &&
     (bVar2 = UInterchangeLightFactoryNode::GetCustomUseIESBrightness
                        ((UInterchangeLightFactoryNode *)this,(bool *)local_res8), bVar2)) {
    UInterchangeLightFactoryNode::SetCustomUseIESBrightness
              ((UInterchangeLightFactoryNode *)this,(bool *)local_res8,true);
  }
  iVar1 = (this->Macro_CustomSourceWidthKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(this->Macro_CustomSourceWidthKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomSourceWidthKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomSourceWidth(this,local_res8), bVar2)) {
    SetCustomSourceWidth(this,local_res8[0],true);
  }
  iVar1 = (this->Macro_CustomSourceHeightKey).Key.Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(this->Macro_CustomSourceHeightKey).Key.Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     &this->_padding_,uVar3,&(this->Macro_CustomSourceHeightKey).Key);
  if ((iVar4 != -1) && (bVar2 = GetCustomSourceHeight(this,local_res8), bVar2)) {
    SetCustomSourceHeight(this,local_res8[0],true);
  }
  return;
}

// SetCustomSourceHeight @ 14e577d90

bool __thiscall
UInterchangeRectLightFactoryNode::SetCustomSourceHeight
          (UInterchangeRectLightFactoryNode *this,float param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetSourceHeight");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSourceHeightKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomSourceHeightKey).Key);
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
      ::FName::FName(&local_res8,L"SourceHeight");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomSourceHeightKey).Key);
      pUVar6 = Z_Construct_UClass_URectLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSourceHeightKey).Key,pUVar6
                 ,local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetCustomSourceWidth @ 14e578080

bool __thiscall
UInterchangeRectLightFactoryNode::SetCustomSourceWidth
          (UInterchangeRectLightFactoryNode *this,float param_1,bool param_2)

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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetSourceWidth");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSourceWidthKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,&(this->Macro_CustomSourceWidthKey).Key);
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
      ::FName::FName(&local_res8,L"SourceWidth");
      UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                ((TArrayAttributeHelper<FString> *)&this->_padding_,
                 &(this->Macro_CustomSourceWidthKey).Key);
      pUVar6 = Z_Construct_UClass_URectLightComponent_NoRegister();
      UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<float>
                ((UInterchangeFactoryBaseNode *)this,&(this->Macro_CustomSourceWidthKey).Key,pUVar6,
                 local_res8);
    }
    bVar2 = true;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUInterchangeRectLightFactoryNode @ 14e57f780

void __cdecl
UInterchangeRectLightFactoryNode::StaticRegisterNativesUInterchangeRectLightFactoryNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomSourceHeight @ 14e595800

void __cdecl
UInterchangeRectLightFactoryNode::execGetCustomSourceHeight
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
  bVar2 = GetCustomSourceHeight((UInterchangeRectLightFactoryNode *)param_1,pfVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetCustomSourceWidth @ 14e595aa0

void __cdecl
UInterchangeRectLightFactoryNode::execGetCustomSourceWidth
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
  bVar2 = GetCustomSourceWidth((UInterchangeRectLightFactoryNode *)param_1,pfVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSourceHeight @ 14e5b0920

void __cdecl
UInterchangeRectLightFactoryNode::execSetCustomSourceHeight
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
  bVar2 = SetCustomSourceHeight
                    ((UInterchangeRectLightFactoryNode *)param_1,local_res18[0],local_res10[0] != 0)
  ;
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCustomSourceWidth @ 14e5b0bd0

void __cdecl
UInterchangeRectLightFactoryNode::execSetCustomSourceWidth
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
  bVar2 = SetCustomSourceWidth
                    ((UInterchangeRectLightFactoryNode *)param_1,local_res18[0],local_res10[0] != 0)
  ;
  *(bool *)param_3 = bVar2;
  return;
}

