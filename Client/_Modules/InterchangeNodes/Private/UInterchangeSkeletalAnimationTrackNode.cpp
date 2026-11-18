// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 43

// StaticClass @ 14e4749f0

UClass * __cdecl UInterchangeSkeletalAnimationTrackNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSkeletalAnimationTrackNode",
               &Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalAnimationTrackNode>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalAnimationTrackNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton;
}

// UInterchangeSkeletalAnimationTrackNode @ 14e488910

UInterchangeSkeletalAnimationTrackNode * __thiscall
UInterchangeSkeletalAnimationTrackNode::UInterchangeSkeletalAnimationTrackNode
          (UInterchangeSkeletalAnimationTrackNode *this,FVTableHelper *param_1)

{
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeSkeletalAnimationTrackNode__6B_;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonNodeUidKey).Key,L"SkeletonNodeUid");
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationSampleRateKey).Key,L"AnimationSampleRate");
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationStartTimeKey).Key,L"AnimationStartTime");
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationStopTimeKey).Key,L"AnimationStopTime");
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key,
             L"SourceTimelineAnimationStartTime");
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key,
             L"SourceTimelineAnimationStopTime");
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayloadKeyUidMap).KeyCountHandle);
  (this->SceneNodeAnimationPayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayloadKeyTypeMap).KeyCountHandle);
  (this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetPayloadKeyUidMap).KeyCountHandle);
  (this->MorphTargetPayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetPayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetPayloadKeyTypeMap).KeyCountHandle);
  (this->MorphTargetPayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetPayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInterchangeSkeletalAnimationTrackNode @ 14e488b70

UInterchangeSkeletalAnimationTrackNode * __thiscall
UInterchangeSkeletalAnimationTrackNode::UInterchangeSkeletalAnimationTrackNode
          (UInterchangeSkeletalAnimationTrackNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeSkeletalAnimationTrackNode *pUVar4;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_98;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_88;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_78;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UInterchangeBaseNode::UInterchangeBaseNode((UInterchangeBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeAnimationTrackBaseNode__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::operator=((FString *)&this->_padding_,L"CompletionMode");
  this->_padding_ = (longlong)&___7UInterchangeSkeletalAnimationTrackNode__6B_;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSkeletonNodeUidKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomSkeletonNodeUidKey).Key,L"SkeletonNodeUid");
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationSampleRateKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationSampleRateKey).Key,L"AnimationSampleRate");
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationStartTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationStartTimeKey).Key,L"AnimationStartTime");
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomAnimationStopTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomAnimationStopTimeKey).Key,L"AnimationStopTime");
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key,
             L"SourceTimelineAnimationStartTime");
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key,
             L"SourceTimelineAnimationStopTime");
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayloadKeyUidMap).KeyCountHandle);
  (this->SceneNodeAnimationPayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SceneNodeAnimationPayloadKeyTypeMap).KeyCountHandle);
  (this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyUidMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetPayloadKeyUidMap).KeyCountHandle);
  (this->MorphTargetPayloadKeyUidMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetPayloadKeyUidMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->MorphTargetPayloadKeyTypeMap).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->MorphTargetPayloadKeyTypeMap).KeyCountHandle);
  (this->MorphTargetPayloadKeyTypeMap).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MorphTargetPayloadKeyTypeMap).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&local_58,L"__SceneNodeAnimationPayloadKeyUidMap__");
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_98.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_98.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SceneNodeAnimationPayloadKeyUidMap,&local_98,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L"__SceneNodeAnimationPayloadKeyTypeMap__");
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_88.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_88.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize
            (&this->SceneNodeAnimationPayloadKeyTypeMap,&local_88,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_38,L"__MorphTargetPayloadKeyUidMap__");
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_78.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_78.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->MorphTargetPayloadKeyUidMap,&local_78,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"__MorphTargetPayloadKeyTypeMap__");
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_68.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.SharedReferenceCount.ReferenceController = pTVar1;
  if (local_68.Object == (FAttributeStorage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSkeletalAnimationTrackNode *)(*pcVar2)();
      return pUVar4;
    }
  }
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize
            (&this->MorphTargetPayloadKeyTypeMap,&local_68,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterchangeSkeletalAnimationTrackNode @ 14e48b420

void __thiscall
UInterchangeSkeletalAnimationTrackNode::~UInterchangeSkeletalAnimationTrackNode
          (UInterchangeSkeletalAnimationTrackNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeSkeletalAnimationTrackNode__6B_;
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::
  ~TMapAttributeHelper<FString,unsigned_char>(&this->MorphTargetPayloadKeyTypeMap);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->MorphTargetPayloadKeyUidMap);
  UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::
  ~TMapAttributeHelper<FString,unsigned_char>(&this->SceneNodeAnimationPayloadKeyTypeMap);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SceneNodeAnimationPayloadKeyUidMap);
  pFVar1 = (this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationStopTimeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationStartTimeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomAnimationSampleRateKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomSkeletonNodeUidKey).Key.Data.AllocatorInstance.Data;
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

// GetCustomAnimationSampleRate @ 14e4908d0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationSampleRate
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAnimationSampleRate");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationSampleRateKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomAnimationStartTime @ 14e490980

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStartTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAnimationStartTime");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationStartTimeKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomAnimationStopTime @ 14e490a30

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStopTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetAnimationStopTime");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationStopTimeKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSkeletonNodeUid @ 14e493f60

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomSkeletonNodeUid
          (UInterchangeSkeletalAnimationTrackNode *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletonNodeUid");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSkeletonNodeUidKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSourceTimelineAnimationStartTime @ 14e4940c0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomSourceTimelineAnimationStartTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSourceTimelineAnimationStartTime");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSourceTimelineAnimationStartTimeKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetCustomSourceTimelineAnimationStopTime @ 14e494170

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::GetCustomSourceTimelineAnimationStopTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSourceTimelineAnimationStopTime");
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
  bVar2 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSourceTimelineAnimationStopTimeKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetMorphTargetNodeAnimationPayloadKeys @ 14e496c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeSkeletalAnimationTrackNode::GetMorphTargetNodeAnimationPayloadKeys
          (UInterchangeSkeletalAnimationTrackNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                   *param_2)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        (&this->MorphTargetPayloadKeyUidMap,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_78);
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_1 != pTVar1) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,pTVar1);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  pTVar2 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
                        (&this->MorphTargetPayloadKeyTypeMap,
                         (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                          *)local_78);
  if ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)param_2 != pTVar2) {
    TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
                *)param_2,pTVar2);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  return;
}

// GetPrivateStaticClass @ 14e499120

UClass * __cdecl UInterchangeSkeletalAnimationTrackNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeNodes",L"InterchangeSkeletalAnimationTrackNode",
               &Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletalAnimationTrackNode>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletalAnimationTrackNode>,local_res8,
               UInterchangeAnimationTrackBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletalAnimationTrackNode.InnerSingleton;
}

// GetSceneNodeAnimationPayloadKeys @ 14e499f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeSkeletalAnimationTrackNode::GetSceneNodeAnimationPayloadKeys
          (UInterchangeSkeletalAnimationTrackNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                   *param_2)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        (&this->SceneNodeAnimationPayloadKeyUidMap,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_78);
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_1 != pTVar1) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,pTVar1);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  pTVar2 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
                        (&this->SceneNodeAnimationPayloadKeyTypeMap,
                         (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                          *)local_78);
  if ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)param_2 != pTVar2) {
    TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
                *)param_2,pTVar2);
  }
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  return;
}

// GetTypeName @ 14e49ace0

FString * __thiscall
UInterchangeSkeletalAnimationTrackNode::GetTypeName
          (UInterchangeSkeletalAnimationTrackNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SkeletalAnimationTrack");
  return __return_storage_ptr__;
}

// IsNodeAnimatedWithBakedCurve @ 14e49c510

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::IsNodeAnimatedWithBakedCurve
          (UInterchangeSkeletalAnimationTrackNode *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  EAttributeStorageResult EVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  uchar local_res8 [8];
  
  iVar7 = (param_1->Data).ArrayNum;
  local_res8[0] = '\0';
  if (iVar7 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar9 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar9 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
  pTVar12 = (this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.WeakReferenceCount.
            ReferenceController;
  pTVar10 = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e49c581;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pTVar10 = pTVar12;
    if ((this->SceneNodeAnimationPayloadKeyTypeMap).Attributes.Object != (FAttributeStorage *)0x0) {
      iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                          *)&this->SceneNodeAnimationPayloadKeyTypeMap,uVar5,param_1);
      if (iVar7 != -1) {
        lVar1 = *(longlong *)&(this->SceneNodeAnimationPayloadKeyTypeMap).CachedKeysAndValues +
                (longlong)iVar7 * 0x48;
        pTVar10 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
        }
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          EVar8 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                            ((TAttributeHandle<unsigned_char,void> *)
                             &pTVar10[1].SharedReferenceCount,local_res8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          if (EVar8 != Operation_Success) {
            return false;
          }
          return local_res8[0] == '\x04';
        }
      }
      goto LAB_14e49c5ae;
    }
  }
LAB_14e49c581:
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494661>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x185,"AttributesPtr.IsValid()");
  pTVar12 = pTVar10;
  if (bVar13) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14e49c5ae:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return false;
}

// Serialize @ 14e49f1c0

void __thiscall
UInterchangeSkeletalAnimationTrackNode::Serialize
          (UInterchangeSkeletalAnimationTrackNode *this,FArchive *param_1)

{
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SceneNodeAnimationPayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->SceneNodeAnimationPayloadKeyTypeMap);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->MorphTargetPayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->MorphTargetPayloadKeyTypeMap);
  }
  return;
}

// Serialize @ 14e49f230

void __thiscall
UInterchangeSkeletalAnimationTrackNode::Serialize
          (UInterchangeSkeletalAnimationTrackNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UInterchangeBaseNode::Serialize((UInterchangeBaseNode *)this,pFVar1);
  if (((pFVar1->field_0x28 & 1) != 0) && ((char)this->_padding_ != '\0')) {
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->SceneNodeAnimationPayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->SceneNodeAnimationPayloadKeyTypeMap);
    UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
              (&this->MorphTargetPayloadKeyUidMap);
    UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
              (&this->MorphTargetPayloadKeyTypeMap);
  }
  return;
}

// SetAnimationPayloadKeyForMorphTargetNodeUid @ 14e49f3c0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForMorphTargetNodeUid
          (UInterchangeSkeletalAnimationTrackNode *this,FString *param_1,FString *param_2,
          EInterchangeAnimationPayLoadType *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  EInterchangeAnimationPayLoadType local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar7 = L"";
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->MorphTargetPayloadKeyUidMap,uVar4,param_1,param_2);
  local_res8[0] = *param_3;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
                    (&this->MorphTargetPayloadKeyTypeMap,uVar4,param_1,local_res8);
  return bVar3 && bVar2;
}

// SetAnimationPayloadKeyForSceneNodeUid @ 14e49f480

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForSceneNodeUid
          (UInterchangeSkeletalAnimationTrackNode *this,FString *param_1,FString *param_2,
          EInterchangeAnimationPayLoadType *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  EInterchangeAnimationPayLoadType local_res8 [8];
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar7 = L"";
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->SceneNodeAnimationPayloadKeyUidMap,uVar4,param_1,param_2);
  local_res8[0] = *param_3;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
                    (&this->SceneNodeAnimationPayloadKeyTypeMap,uVar4,param_1,local_res8);
  return bVar3 && bVar2;
}

// SetCustomAnimationSampleRate @ 14e49fbd0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAnimationSampleRate");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationSampleRateKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAnimationSampleRateKey).Key);
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

// SetCustomAnimationStartTime @ 14e49fd20

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAnimationStartTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationStartTimeKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAnimationStartTimeKey).Key);
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

// SetCustomAnimationStopTime @ 14e49fe70

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetAnimationStopTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomAnimationStopTimeKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomAnimationStopTimeKey).Key);
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

// SetCustomSkeletonNodeUid @ 14e4a51c0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid
          (UInterchangeSkeletalAnimationTrackNode *this,FString *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletonNodeUid");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomSkeletonNodeUidKey,
                     param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSkeletonNodeUidKey).Key);
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

// SetCustomSourceTimelineAnimationStartTime @ 14e4a5470

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomSourceTimelineAnimationStartTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSourceTimelineAnimationStartTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSourceTimelineAnimationStartTimeKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSourceTimelineAnimationStartTimeKey).Key);
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

// SetCustomSourceTimelineAnimationStopTime @ 14e4a55c0

bool __thiscall
UInterchangeSkeletalAnimationTrackNode::SetCustomSourceTimelineAnimationStopTime
          (UInterchangeSkeletalAnimationTrackNode *this,double *param_1)

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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSourceTimelineAnimationStopTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    ((FAttributeStorage *)this->_padding_,
                     &this->Macro_CustomSourceTimelineAnimationStopTimeKey,param_1,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomSourceTimelineAnimationStopTimeKey).Key);
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

// StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode @ 14e4a89c0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCustomAnimationSampleRate @ 14e4ae190

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationSampleRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAnimationSampleRate");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomAnimationStartTime @ 14e4ae2c0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStartTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAnimationStartTime");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomAnimationStopTime @ 14e4ae3f0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomAnimationStopTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetAnimationStopTime");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),&local_38,
                     pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSkeletonNodeUid @ 14e4b5830

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomSkeletonNodeUid
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
  ::FString::ConcatFC(&local_28,pFVar4,L".GetSkeletonNodeUid");
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

// execGetCustomSourceTimelineAnimationStartTime @ 14e4b5be0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomSourceTimelineAnimationStartTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSourceTimelineAnimationStartTime");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetCustomSourceTimelineAnimationStopTime @ 14e4b5d10

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetCustomSourceTimelineAnimationStopTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  double *pdVar5;
  double local_res8;
  FString local_38;
  void *local_28 [2];
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar5 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".GetSourceTimelineAnimationStopTime");
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
  bVar3 = InterchangePrivateNodeBase::GetCustomAttribute<double>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x20,
                     &local_38,pdVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetMorphTargetNodeAnimationPayloadKeys @ 14e4b8b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetMorphTargetNodeAnimationPayloadKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar4;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar5;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar6;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  pTVar5 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)local_d8;
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar5 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  pTVar6 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)local_128;
  if ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar6 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        ((TMapAttributeHelper<FString,FString> *)&param_1[0xb].field_0x8,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_88);
  if (pTVar5 != pTVar3) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (pTVar5,pTVar3);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  pTVar4 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
                        ((TMapAttributeHelper<FString,unsigned_char> *)&param_1[0xe].field_0x8,
                         (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                          *)local_88);
  if (pTVar6 != pTVar4) {
    TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_>
              (pTVar6,pTVar4);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar2 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar2 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return;
}

// execGetSceneNodeAnimationPayloadKeys @ 14e4b9330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execGetSceneNodeAnimationPayloadKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar3;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar4;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar5;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  *pTVar6;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  pTVar5 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)local_d8;
  if ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar5 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  pTVar6 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)local_128;
  if ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar6 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
                        ((TMapAttributeHelper<FString,FString> *)&param_1[5].field_0x8,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_88);
  if (pTVar5 != pTVar3) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (pTVar5,pTVar3);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  pTVar4 = (TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
            *)UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
                        ((TMapAttributeHelper<FString,unsigned_char> *)&param_1[8].field_0x8,
                         (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
                          *)local_88);
  if (pTVar6 != pTVar4) {
    TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>_>
              (pTVar6,pTVar4);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_128,0,local_128._8_4_);
  iVar2 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar2 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return;
}

// execIsNodeAnimatedWithBakedCurve @ 14e4bab70

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execIsNodeAnimatedWithBakedCurve
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  FProperty *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  atomic<int> aVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  EAttributeStorageResult EVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uchar local_res8 [8];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = '\0';
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar8 = local_18.Data.ArrayNum + -1;
  FVar4.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
  pTVar11 = *(TReferenceControllerBase<1> **)(param_1 + 0xb);
  pTVar10 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e4bac34:
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494661>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x185,"AttributesPtr.IsValid()");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14e4bac61:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  else {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14e4bac34;
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar12 = aVar5 == aVar7;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar12);
    pTVar10 = pTVar11;
    if (*(longlong *)&param_1[10].field_0x20 == 0) goto LAB_14e4bac34;
    iVar8 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                        *)&param_1[8].field_0x8,uVar6,&local_18);
    if (iVar8 == -1) goto LAB_14e4bac61;
    lVar1 = *(longlong *)&param_1[8].field_0x8 + (longlong)iVar8 * 0x48;
    pTVar10 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
    }
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e4bac61;
    EVar9 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                      ((TAttributeHandle<unsigned_char,void> *)&pTVar10[1].SharedReferenceCount,
                       local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (EVar9 == Operation_Success) {
      bVar12 = local_res8[0] == '\x04';
      goto LAB_14e4bac6b;
    }
  }
  bVar12 = false;
LAB_14e4bac6b:
  *(bool *)param_3 = bVar12;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimationPayloadKeyForMorphTargetNodeUid @ 14e4bbcf0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForMorphTargetNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  uchar local_res10 [8];
  FString local_48;
  FString local_38;
  
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
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)&param_1[0xb].field_0x8,uVar4,&local_48
                     ,&local_38);
  local_res10[0] = *puVar7;
  iVar5 = local_48.Data.ArrayNum + -1;
  FVar6.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,unsigned_char> *)&param_1[0xe].field_0x8,uVar4,
                     &local_48,local_res10);
  *(bool *)param_3 = bVar3 && bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimationPayloadKeyForSceneNodeUid @ 14e4bbeb0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetAnimationPayloadKeyForSceneNodeUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  uchar local_res10 [8];
  FString local_48;
  FString local_38;
  
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
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  puVar7 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)&param_1[5].field_0x8,uVar4,&local_48,
                     &local_38);
  local_res10[0] = *puVar7;
  iVar5 = local_48.Data.ArrayNum + -1;
  FVar6.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,unsigned_char> *)&param_1[8].field_0x8,uVar4,
                     &local_48,local_res10);
  *(bool *)param_3 = bVar3 && bVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetCustomAnimationSampleRate @ 14e4bca20

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationSampleRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetAnimationSampleRate");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x8,
                     pdVar7,None);
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

// execSetCustomAnimationStartTime @ 14e4bcbe0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStartTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetAnimationStartTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[3].field_0x18,
                     pdVar7,None);
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

// execSetCustomAnimationStopTime @ 14e4bcda0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomAnimationStopTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetAnimationStopTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 4),pdVar7,None
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

// execSetCustomSkeletonNodeUid @ 14e4c5bb0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomSkeletonNodeUid
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
  ::FString::ConcatFC(&local_38,pFVar4,L".SetSkeletonNodeUid");
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

// execSetCustomSourceTimelineAnimationStartTime @ 14e4c6130

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomSourceTimelineAnimationStartTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetSourceTimelineAnimationStartTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x10,
                     pdVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[4].field_0x10);
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

// execSetCustomSourceTimelineAnimationStopTime @ 14e4c62f0

void __cdecl
UInterchangeSkeletalAnimationTrackNode::execSetCustomSourceTimelineAnimationStopTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  double *pdVar7;
  double local_res8;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pdVar7 = &local_res8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetSourceTimelineAnimationStopTime");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<double,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[4].field_0x20,
                     pdVar7,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[4].field_0x20);
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

