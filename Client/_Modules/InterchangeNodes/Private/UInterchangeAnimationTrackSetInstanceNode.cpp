// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 23

// StaticClass @ 14e47e900

UClass * __cdecl UInterchangeAnimationTrackSetInstanceNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAnimationTrackSetInstanceNode",
               &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode,0xb0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimationTrackSetInstanceNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationTrackSetInstanceNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton;
}

// UInterchangeAnimationTrackSetInstanceNode @ 14e485c20

UInterchangeAnimationTrackSetInstanceNode * __thiscall
UInterchangeAnimationTrackSetInstanceNode::UInterchangeAnimationTrackSetInstanceNode
          (UInterchangeAnimationTrackSetInstanceNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackSetInstanceNode__6B_;
  (this->Macro_CustomStartFrameKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomStartFrameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomStartFrameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomStartFrameKey).Key,L"StartFrame");
  (this->Macro_CustomDurationKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomDurationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDurationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDurationKey).Key,L"Duration");
  (this->Macro_CustomTimeScaleKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomTimeScaleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTimeScaleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTimeScaleKey).Key,L"TimeScale");
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTrackSetDependencyUidKey).Key,L"SequenceDependencyUid");
  return this;
}

// UInterchangeAnimationTrackSetInstanceNode @ 14e485ce0

UInterchangeAnimationTrackSetInstanceNode * __thiscall
UInterchangeAnimationTrackSetInstanceNode::UInterchangeAnimationTrackSetInstanceNode
          (UInterchangeAnimationTrackSetInstanceNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackSetInstanceNode__6B_;
  (this->Macro_CustomStartFrameKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomStartFrameKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomStartFrameKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomStartFrameKey).Key,L"StartFrame");
  (this->Macro_CustomDurationKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomDurationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomDurationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomDurationKey).Key,L"Duration");
  (this->Macro_CustomTimeScaleKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Macro_CustomTimeScaleKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTimeScaleKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTimeScaleKey).Key,L"TimeScale");
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTrackSetDependencyUidKey).Key,L"SequenceDependencyUid");
  return this;
}

// ~UInterchangeAnimationTrackSetInstanceNode @ 14e48a920

void __thiscall
UInterchangeAnimationTrackSetInstanceNode::~UInterchangeAnimationTrackSetInstanceNode
          (UInterchangeAnimationTrackSetInstanceNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackSetInstanceNode__6B_;
  pFVar1 = (this->Macro_CustomTrackSetDependencyUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomTimeScaleKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomDurationKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomStartFrameKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UInterchangeBaseNode::~UInterchangeBaseNode((UInterchangeBaseNode *)this);
  return;
}

// GetCustomDuration @ 14e4916c0

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::GetCustomDuration
          (UInterchangeAnimationTrackSetInstanceNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetDuration");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDurationKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomStartFrame @ 14e494440

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::GetCustomStartFrame
          (UInterchangeAnimationTrackSetInstanceNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetStartFrame");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomStartFrameKey,&local_28
                     ,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomTimeScale @ 14e4947b0

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::GetCustomTimeScale
          (UInterchangeAnimationTrackSetInstanceNode *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetTimeScale");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomTimeScaleKey,&local_28,
                     param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomTrackSetDependencyUid @ 14e494990

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::GetCustomTrackSetDependencyUid
          (UInterchangeAnimationTrackSetInstanceNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetTrackSetDependencyUid");
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
                     &this->Macro_CustomTrackSetDependencyUidKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e497e70

UClass * __cdecl UInterchangeAnimationTrackSetInstanceNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAnimationTrackSetInstanceNode",
               &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode,0xb0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterchangeAnimationTrackSetInstanceNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationTrackSetInstanceNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetInstanceNode.InnerSingleton;
}

// GetTypeName @ 14e49a820

FString * __thiscall
UInterchangeAnimationTrackSetInstanceNode::GetTypeName
          (UInterchangeAnimationTrackSetInstanceNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AnimationTrackSetInstanceNode");
  return __return_storage_ptr__;
}

// SetCustomDuration @ 14e4a1270

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::SetCustomDuration
          (UInterchangeAnimationTrackSetInstanceNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetDuration");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomDurationKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomDurationKey).Key);
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

// SetCustomStartFrame @ 14e4a59c0

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::SetCustomStartFrame
          (UInterchangeAnimationTrackSetInstanceNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetStartFrame");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomStartFrameKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomStartFrameKey).Key);
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

// SetCustomTimeScale @ 14e4a6060

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::SetCustomTimeScale
          (UInterchangeAnimationTrackSetInstanceNode *this,float *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetTimeScale");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomTimeScaleKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomTimeScaleKey).Key);
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

// SetCustomTrackSetDependencyUid @ 14e4a6310

bool __thiscall
UInterchangeAnimationTrackSetInstanceNode::SetCustomTrackSetDependencyUid
          (UInterchangeAnimationTrackSetInstanceNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetTrackSetDependencyUid");
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
                     &this->Macro_CustomTrackSetDependencyUidKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomTrackSetDependencyUidKey).Key);
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

// StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode @ 14e4a8410

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::
StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomDuration @ 14e4b0460

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execGetCustomDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetDuration");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomStartFrame @ 14e4b6160

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execGetCustomStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  int local_res8 [2];
  FString local_38;
  void *local_28 [2];
  
  local_res8[0] = 0;
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
  piVar5 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetStartFrame");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<int>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_38,piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomTimeScale @ 14e4b6770

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execGetCustomTimeScale
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetTimeScale");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_38,pfVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomTrackSetDependencyUid @ 14e4b6c70

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execGetCustomTrackSetDependencyUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetTrackSetDependencyUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),&local_28,
                     pFVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomDuration @ 14e4bf150

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execSetCustomDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetDuration");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[3].field_0x8);
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

// execSetCustomStartFrame @ 14e4c6850

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execSetCustomStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int *piVar7;
  int local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
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
  piVar7 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetStartFrame");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     piVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[2].field_0x20);
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

// execSetCustomTimeScale @ 14e4c7150

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execSetCustomTimeScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  float *pfVar7;
  float local_res8 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  pfVar7 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar7 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetTimeScale");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<float,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     pfVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[3].field_0x18);
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

// execSetCustomTrackSetDependencyUid @ 14e4c75b0

void __cdecl
UInterchangeAnimationTrackSetInstanceNode::execSetCustomTrackSetDependencyUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetTrackSetDependencyUid");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),&local_48,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)(param_1 + 4));
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

