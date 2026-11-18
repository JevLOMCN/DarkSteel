// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 25

// StaticClass @ 14e47eb60

UClass * __cdecl UInterchangeAnimationTrackNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAnimationTrackNode",
               &Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationTrackNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimationTrackNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationTrackNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton;
}

// UInterchangeAnimationTrackNode @ 14e485a40

UInterchangeAnimationTrackNode * __thiscall
UInterchangeAnimationTrackNode::UInterchangeAnimationTrackNode
          (UInterchangeAnimationTrackNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackNode__6B_;
  (this->Macro_CustomActorDependencyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorDependencyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorDependencyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorDependencyKey).Key,L"ActorDependency");
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationPayloadUidKey).Key,L"AnimationPayloadUid");
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationPayloadTypeKey).Key,L"AnimationPayloadType");
  (this->Macro_CustomFrameCountKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomFrameCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFrameCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFrameCountKey).Key,L"FrameCount");
  (this->Macro_CustomTargetedPropertyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTargetedPropertyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTargetedPropertyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTargetedPropertyKey).Key,L"TargetedProperty");
  (this->Macro_CustomPropertyTrackKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomPropertyTrackKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomPropertyTrackKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomPropertyTrackKey).Key,L"PropertyTrack");
  return this;
}

// UInterchangeAnimationTrackNode @ 14e485b30

UInterchangeAnimationTrackNode * __thiscall
UInterchangeAnimationTrackNode::UInterchangeAnimationTrackNode(UInterchangeAnimationTrackNode *this)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackNode__6B_;
  (this->Macro_CustomActorDependencyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomActorDependencyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomActorDependencyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomActorDependencyKey).Key,L"ActorDependency");
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationPayloadUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationPayloadUidKey).Key,L"AnimationPayloadUid");
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationPayloadTypeKey).Key,L"AnimationPayloadType");
  (this->Macro_CustomFrameCountKey).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Macro_CustomFrameCountKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomFrameCountKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomFrameCountKey).Key,L"FrameCount");
  (this->Macro_CustomTargetedPropertyKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomTargetedPropertyKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomTargetedPropertyKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomTargetedPropertyKey).Key,L"TargetedProperty");
  (this->Macro_CustomPropertyTrackKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomPropertyTrackKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomPropertyTrackKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomPropertyTrackKey).Key,L"PropertyTrack");
  return this;
}

// ~UInterchangeAnimationTrackNode @ 14e48a870

void __thiscall
UInterchangeAnimationTrackNode::~UInterchangeAnimationTrackNode
          (UInterchangeAnimationTrackNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackNode__6B_;
  pFVar1 = (this->Macro_CustomPropertyTrackKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomTargetedPropertyKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomFrameCountKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationPayloadTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationPayloadUidKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomActorDependencyKey).Key.Data.AllocatorInstance.Data;
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

// GetCustomActorDependencyUid @ 14e4903d0

bool __thiscall
UInterchangeAnimationTrackNode::GetCustomActorDependencyUid
          (UInterchangeAnimationTrackNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetActorDependency");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorDependencyKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomAnimationPayloadKey @ 14e490690

bool __thiscall
UInterchangeAnimationTrackNode::GetCustomAnimationPayloadKey
          (UInterchangeAnimationTrackNode *this,FInterchangeAnimationPayLoadKey *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAttributeKey *pFVar4;
  EAttributeStorageResult EVar5;
  FString *pFVar6;
  FAttributeStorage *pFVar7;
  TAttributeHandle<unsigned_char,void> *pTVar8;
  int iVar9;
  EInterchangeAnimationPayLoadType local_res8 [8];
  FString local_b8;
  TAttributeHandle<unsigned_char,void> local_a8;
  TAttributeHandle<FString,void> local_90;
  FString local_78;
  FString local_68;
  TAttributeHandle<unsigned_char,void> local_58;
  FString local_40;
  FString local_30;
  
  this_00 = &this->_padding_;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if ((*this_00 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar7 = (FAttributeStorage *)*this_00;
  pFVar4 = UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey();
  bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar7,pFVar4);
  if (bVar2) {
    if ((*this_00 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pFVar7 = (FAttributeStorage *)*this_00;
    pFVar4 = UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey();
    UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>(pFVar7,&local_90,pFVar4);
    bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_90);
    if (bVar2) {
      EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                        (&local_90,&local_b8);
      if ((EVar5 & Operation_Success) == None) {
        pFVar6 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey()->Key;
        ::FString::FString(&local_78,pFVar6);
        pFVar6 = ::FString::FString(&local_40,L"UInterchangeMeshNode.GetPayLoadKey");
        UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_78);
      }
      else {
        if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
        }
        pFVar7 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::operator->
                           ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)this_00);
        pFVar4 = UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey();
        bVar2 = UE::Interchange::FAttributeStorage::ContainAttribute(pFVar7,pFVar4);
        if (!bVar2) goto LAB_14e4907a3;
        pFVar7 = TSharedPtr<UE::Interchange::FAttributeStorage,1>::operator->
                           ((TSharedPtr<UE::Interchange::FAttributeStorage,1> *)this_00);
        pFVar4 = UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey();
        pTVar8 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                           (pFVar7,&local_58,pFVar4);
        UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
        TAttributeHandle<unsigned_char,void>(&local_a8,&pTVar8->Key,pTVar8->AttributeStorage);
        if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar2 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                          (&local_a8);
        local_90.Key.Key.Data.AllocatorInstance.Data = local_a8.Key.Key.Data.AllocatorInstance.Data;
        if (bVar2) {
          EVar5 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                            (&local_a8,local_res8);
          if ((EVar5 & Operation_Success) != None) {
            if (local_a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Key.Key.Data.AllocatorInstance.Data);
            }
            iVar9 = local_b8.Data.ArrayNum + -1;
            if (local_b8.Data.ArrayNum == 0) {
              iVar9 = 0;
            }
            ::FString::AssignRange
                      (&param_1->UniqueId,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar9);
            bVar2 = true;
            param_1->Type = local_res8[0];
            goto LAB_14e4907a5;
          }
          pFVar6 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey()->Key;
          ::FString::FString(&local_68,pFVar6);
          pFVar6 = ::FString::FString(&local_30,L"UInterchangeMeshNode.GetPayLoadTypeKey");
          UE::Interchange::LogAttributeStorageErrors(EVar5,pFVar6,(FAttributeKey *)&local_68);
          local_90.Key.Key.Data.AllocatorInstance.Data =
               local_a8.Key.Key.Data.AllocatorInstance.Data;
        }
      }
    }
    if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
    }
  }
LAB_14e4907a3:
  bVar2 = false;
LAB_14e4907a5:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomFrameCount @ 14e491c40

bool __thiscall
UInterchangeAnimationTrackNode::GetCustomFrameCount
          (UInterchangeAnimationTrackNode *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetFrameCount");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomFrameCountKey,&local_28
                     ,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomPropertyTrack @ 14e493b30

bool __thiscall
UInterchangeAnimationTrackNode::GetCustomPropertyTrack
          (UInterchangeAnimationTrackNode *this,FName *param_1)

{
  return false;
}

// GetCustomPropertyTrack @ 14e493b40

/* WARNING: Enum "EInterchangePropertyTracks": Some values do not have unique names */

bool __thiscall
UInterchangeAnimationTrackNode::GetCustomPropertyTrack
          (UInterchangeAnimationTrackNode *this,EInterchangePropertyTracks *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  TAttributeHandle<int,void> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<int,void> local_38;
  TAttributeHandle<int,void> local_20;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_68);
  ::FString::ConcatFC(&local_78,pFVar5,L".GetPropertyTrack");
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
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
  pFVar1 = &this->Macro_CustomPropertyTrackKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
                       (this_00,&local_20,pFVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_38,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_38);
    if (bVar3) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get
                        (&local_38,(int *)param_1);
      if ((EVar7 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e493c7e;
      }
      ::FString::FString(&local_58,&pFVar1->Key);
      pFVar5 = ::FString::FString(&local_48,&local_78);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_58);
    }
    if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_14e493c7e:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetPrivateStaticClass @ 14e497db0

UClass * __cdecl UInterchangeAnimationTrackNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeAnimationTrackNode",
               &Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton,
               StaticRegisterNativesUInterchangeAnimationTrackNode,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeAnimationTrackNode>,
               InternalVTableHelperCtorCaller<UInterchangeAnimationTrackNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeAnimationTrackNode.InnerSingleton;
}

// GetTypeName @ 14e49a7f0

FString * __thiscall
UInterchangeAnimationTrackNode::GetTypeName
          (UInterchangeAnimationTrackNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"AnimationTrackNode");
  return __return_storage_ptr__;
}

// SetCustomActorDependencyUid @ 14e49f540

bool __thiscall
UInterchangeAnimationTrackNode::SetCustomActorDependencyUid
          (UInterchangeAnimationTrackNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetActorDependency");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomActorDependencyKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomActorDependencyKey).Key);
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

// SetCustomAnimationPayloadKey @ 14e49fa80

bool __thiscall
UInterchangeAnimationTrackNode::SetCustomAnimationPayloadKey
          (UInterchangeAnimationTrackNode *this,FString *param_1,
          EInterchangeAnimationPayLoadType *param_2)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAttributeKey *pFVar5;
  EAttributeStorageResult EVar6;
  FString *pFVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (FAttributeStorage *)this->_padding_;
  pFVar5 = UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey();
  EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar1,pFVar5,param_1,None);
  if ((EVar6 & Operation_Success) == None) {
    pFVar7 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey()->Key;
    ::FString::FString(&local_48,pFVar7);
    pFVar7 = ::FString::FString(&local_28,L"UInterchangeAnimationTrackNode.SetPayLoadKey");
    UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar7,(FAttributeKey *)&local_48);
    bVar3 = false;
  }
  else {
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (FAttributeStorage *)this->_padding_;
    pFVar5 = UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey();
    EVar6 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                      (pFVar1,pFVar5,param_2,None);
    if ((EVar6 & Operation_Success) == None) {
      pFVar7 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey()->Key;
      ::FString::FString(&local_38,pFVar7);
      pFVar7 = ::FString::FString(&local_18,L"UInterchangeAnimationTrackNode.SetPayLoadTypeKey");
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar7,(FAttributeKey *)&local_38);
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

// SetCustomFrameCount @ 14e4a1a50

bool __thiscall
UInterchangeAnimationTrackNode::SetCustomFrameCount
          (UInterchangeAnimationTrackNode *this,int *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetFrameCount");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomFrameCountKey,param_1,
                     None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomFrameCountKey).Key);
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

// SetCustomPropertyTrack @ 14e4a4c70

bool __thiscall
UInterchangeAnimationTrackNode::SetCustomPropertyTrack
          (UInterchangeAnimationTrackNode *this,FName *param_1)

{
  return false;
}

// SetCustomPropertyTrack @ 14e4a4c80

/* WARNING: Enum "EInterchangePropertyTracks": Some values do not have unique names */

bool __thiscall
UInterchangeAnimationTrackNode::SetCustomPropertyTrack
          (UInterchangeAnimationTrackNode *this,EInterchangePropertyTracks param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  EInterchangePropertyTracks local_res10 [2];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetPropertyTrack");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomPropertyTrackKey,
                     (int *)local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomPropertyTrackKey).Key);
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

// StaticRegisterNativesUInterchangeAnimationTrackNode @ 14e4a83d0

void __cdecl
UInterchangeAnimationTrackNode::StaticRegisterNativesUInterchangeAnimationTrackNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomActorDependencyUid @ 14e4adba0

void __cdecl
UInterchangeAnimationTrackNode::execGetCustomActorDependencyUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetActorDependency");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
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

// execGetCustomAnimationPayloadKey @ 14e4ae0c0

void __cdecl
UInterchangeAnimationTrackNode::execGetCustomAnimationPayloadKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FInterchangeAnimationPayLoadKey *pFVar3;
  FInterchangeAnimationPayLoadKey local_28;
  
  ::FString::FString(&local_28.UniqueId,"");
  local_28.Type = NONE;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FInterchangeAnimationPayLoadKey *)param_2->MostRecentPropertyAddress !=
      (FInterchangeAnimationPayLoadKey *)0x0) {
    pFVar3 = (FInterchangeAnimationPayLoadKey *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = GetCustomAnimationPayloadKey((UInterchangeAnimationTrackNode *)param_1,pFVar3);
  *(bool *)param_3 = bVar2;
  if (local_28.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.UniqueId.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCustomFrameCount @ 14e4b1390

void __cdecl
UInterchangeAnimationTrackNode::execGetCustomFrameCount
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetFrameCount");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),&local_38,
                     piVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomPropertyTrack @ 14e4b4e60

void __cdecl
UInterchangeAnimationTrackNode::execGetCustomPropertyTrack
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *this;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  TAttributeHandle<int,void> *pTVar5;
  EAttributeStorageResult EVar6;
  undefined1 uVar7;
  int *piVar8;
  int local_res8 [2];
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  TAttributeHandle<int,void> local_48;
  TAttributeHandle<int,void> local_30;
  
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
  piVar8 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar8 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_78);
  ::FString::ConcatFC(&local_88,pFVar4,L".GetPropertyTrack");
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
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
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute
                    (this,(FAttributeKey *)&param_1[4].field_0x20);
  if (bVar3) {
    pTVar5 = UE::Interchange::FAttributeStorage::GetAttributeHandle<int,void>
                       (this,&local_30,(FAttributeKey *)&param_1[4].field_0x20);
    UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
              (&local_48,&pTVar5->Key,pTVar5->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::IsValid(&local_48);
    if (bVar3) {
      EVar6 = UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::Get(&local_48,piVar8);
      if ((EVar6 & Operation_Success) != None) {
        if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar7 = 1;
        goto LAB_14e4b5016;
      }
      ::FString::FString(&local_68,(FString *)&param_1[4].field_0x20);
      pFVar4 = ::FString::FString(&local_58,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar6,pFVar4,(FAttributeKey *)&local_68);
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
  }
LAB_14e4b5016:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar7;
  return;
}

// execSetCustomActorDependencyUid @ 14e4bc070

void __cdecl
UInterchangeAnimationTrackNode::execSetCustomActorDependencyUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetActorDependency");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[2].field_0x20,
                     &local_48,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,(FString *)&param_1[2].field_0x20);
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

// execSetCustomAnimationPayloadKey @ 14e4bc810

void __cdecl
UInterchangeAnimationTrackNode::execSetCustomAnimationPayloadKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAttributeKey *pFVar6;
  EAttributeStorageResult EVar7;
  FString *pFVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
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
  local_res8[0] = '\0';
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
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FAttributeStorage **)(param_1 + 1);
  pFVar6 = UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey();
  EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                    (pFVar2,pFVar6,&local_68,None);
  if ((EVar7 & Operation_Success) == None) {
    pFVar8 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadUidKey()->Key;
    ::FString::FString(&local_58,pFVar8);
    pFVar8 = ::FString::FString(&local_38,L"UInterchangeAnimationTrackNode.SetPayLoadKey");
    UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar8,(FAttributeKey *)&local_58);
    uVar5 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = *(FAttributeStorage **)(param_1 + 1);
    pFVar6 = UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey();
    EVar7 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                      (pFVar2,pFVar6,puVar9,None);
    if ((EVar7 & Operation_Success) == None) {
      pFVar8 = &UE::Interchange::FAnimationStaticData::AnimationPayLoadTypeKey()->Key;
      ::FString::FString(&local_48,pFVar8);
      pFVar8 = ::FString::FString(&local_28,L"UInterchangeAnimationTrackNode.SetPayLoadTypeKey");
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar8,(FAttributeKey *)&local_48);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  *(undefined1 *)param_3 = uVar5;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomFrameCount @ 14e4c04d0

void __cdecl
UInterchangeAnimationTrackNode::execSetCustomFrameCount
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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetFrameCount");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),piVar7,None
                    );
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 4));
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

// execSetCustomPropertyTrack @ 14e4c4ee0

void __cdecl
UInterchangeAnimationTrackNode::execSetCustomPropertyTrack
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  int local_res8 [2];
  int local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = local_res8[0];
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetPropertyTrack");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<int,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x20,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[4].field_0x20);
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

