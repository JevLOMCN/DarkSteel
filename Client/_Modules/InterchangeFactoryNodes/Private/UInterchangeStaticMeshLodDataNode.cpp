// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 98

// StaticClass @ 14e51b6b0

UClass * __cdecl UInterchangeStaticMeshLodDataNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeStaticMeshLodDataNode",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshLodDataNode,0x400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshLodDataNode>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshLodDataNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton;
}

// UInterchangeStaticMeshLodDataNode @ 14e533ba0

UInterchangeStaticMeshLodDataNode * __thiscall
UInterchangeStaticMeshLodDataNode::UInterchangeStaticMeshLodDataNode
          (UInterchangeStaticMeshLodDataNode *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode
            ((UInterchangeFactoryBaseNode *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshLodDataNode__6B_;
  (this->MeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->MeshUids).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->BoxCollisionMeshUids).KeyCountHandle);
  (this->BoxCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->BoxCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->CapsuleCollisionMeshUids).KeyCountHandle);
  (this->CapsuleCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->CapsuleCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SphereCollisionMeshUids).KeyCountHandle);
  (this->SphereCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SphereCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->ConvexCollisionMeshUids).KeyCountHandle);
  (this->ConvexCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ConvexCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomOneConvexHullPerUCXKey).Key,L"OneConvexHullPerUCX");
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key,
             L"ForceCollisionPrimitiveGeneration");
  (this->Macro_CustomImportCollisionKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportCollisionKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportCollisionKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportCollisionKey).Key,L"ImportCollision");
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportCollisionTypeKey).Key,L"ImportCollisionType");
  return this;
}

// UInterchangeStaticMeshLodDataNode @ 14e533dd0

UInterchangeStaticMeshLodDataNode * __thiscall
UInterchangeStaticMeshLodDataNode::UInterchangeStaticMeshLodDataNode
          (UInterchangeStaticMeshLodDataNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeStaticMeshLodDataNode *pUVar4;
  int *piVar5;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_68;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_58;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_48;
  TSharedRef<UE::Interchange::FAttributeStorage,1> local_38;
  
  UInterchangeFactoryBaseNode::UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshLodDataNode__6B_;
  (this->MeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->MeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshUids).KeyCount.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshUids).KeyCount.Key.Data.ArrayNum = 0;
  (this->MeshUids).KeyCount.Key.Data.ArrayMax = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->BoxCollisionMeshUids).KeyCountHandle);
  (this->BoxCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->BoxCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->CapsuleCollisionMeshUids).KeyCountHandle);
  (this->CapsuleCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->CapsuleCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->SphereCollisionMeshUids).KeyCountHandle);
  (this->SphereCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->SphereCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x20 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x28 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x34 = 0;
  *(undefined8 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x40 = 0;
  *(undefined4 *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x48 = 0;
  UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
            (&(this->ConvexCollisionMeshUids).KeyCountHandle);
  (this->ConvexCollisionMeshUids).Attributes.Object = (FAttributeStorage *)0x0;
  (this->ConvexCollisionMeshUids).Attributes.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomOneConvexHullPerUCXKey).Key,L"OneConvexHullPerUCX");
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.ArrayMax = 0;
  ::FString::operator=
            (&(this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key,
             L"ForceCollisionPrimitiveGeneration");
  (this->Macro_CustomImportCollisionKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportCollisionKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportCollisionKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportCollisionKey).Key,L"ImportCollision");
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.ArrayNum = 0;
  (this->Macro_CustomImportCollisionTypeKey).Key.Data.ArrayMax = 0;
  ::FString::operator=(&(this->Macro_CustomImportCollisionTypeKey).Key,L"ImportCollisionType");
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    MeshUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    MeshUids_BaseKey.Key.Data.ArrayNum = 0;
    MeshUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&MeshUids_BaseKey.Key,L"__MeshUids__Key");
    atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetMeshUidsBaseKey'::__l2::
           _dynamic_atexit_destructor_for__MeshUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  UE::Interchange::TArrayAttributeHelper<FString>::Initialize
            (&this->MeshUids,(TSharedPtr<UE::Interchange::FAttributeStorage,1> *)&this->_padding_,
             &MeshUids_BaseKey.Key);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CollisionMeshUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayNum = 0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__BoxCollisionMeshUids__Key");
    atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetBoxCollisionMeshUidsBaseKey'::__l2
           ::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_68.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_68.Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->BoxCollisionMeshUids,&local_68,&CollisionMeshUids_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CollisionMeshUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayNum = 0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__CapsuleCollisionMeshUids__Key");
    atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetCapsuleCollisionMeshUidsBaseKey'::
           __l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_58.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_58.Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->CapsuleCollisionMeshUids,&local_58,&CollisionMeshUids_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CollisionMeshUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayNum = 0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__SphereCollisionMeshUids__Key");
    atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetSphereCollisionMeshUidsBaseKey'::
           __l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_48.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_48.Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->SphereCollisionMeshUids,&local_48,&CollisionMeshUids_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CollisionMeshUids_BaseKey.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayNum = 0;
    CollisionMeshUids_BaseKey.Key.Data.ArrayMax = 0;
    ::FString::operator=(&CollisionMeshUids_BaseKey.Key,L"__ConvexCollisionMeshUids__Key");
    atexit(`UE::Interchange::FStaticMeshNodeLodDataStaticData::GetConvexCollisionMeshUidsBaseKey'::
           __l2::_dynamic_atexit_destructor_for__CollisionMeshUids_BaseKey__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  local_38.Object = (FAttributeStorage *)this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  if ((local_38.Object == (FAttributeStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UInterchangeStaticMeshLodDataNode *)(*pcVar2)();
    return pUVar4;
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
            (&this->ConvexCollisionMeshUids,&local_38,&CollisionMeshUids_BaseKey.Key);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// ~UInterchangeStaticMeshLodDataNode @ 14e5366a0

void __thiscall
UInterchangeStaticMeshLodDataNode::~UInterchangeStaticMeshLodDataNode
          (UInterchangeStaticMeshLodDataNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeStaticMeshLodDataNode__6B_;
  pFVar1 = (this->Macro_CustomImportCollisionTypeKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomImportCollisionKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Macro_CustomOneConvexHullPerUCXKey).Key.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->ConvexCollisionMeshUids);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->SphereCollisionMeshUids);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->CapsuleCollisionMeshUids);
  UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
            (&this->BoxCollisionMeshUids);
  UE::Interchange::TArrayAttributeHelper<FString>::~TArrayAttributeHelper<FString>(&this->MeshUids);
  UInterchangeFactoryBaseNode::~UInterchangeFactoryBaseNode((UInterchangeFactoryBaseNode *)this);
  return;
}

// AddBoxCollisionMeshUid @ 14e539500

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  return false;
}

// AddBoxCollisionMeshUids @ 14e539510

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->BoxCollisionMeshUids,uVar3,param_1,param_2);
  return bVar2;
}

// AddCapsuleCollisionMeshUid @ 14e539580

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  return false;
}

// AddCapsuleCollisionMeshUids @ 14e539590

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->CapsuleCollisionMeshUids,uVar3,param_1,param_2);
  return bVar2;
}

// AddConvexCollisionMeshUid @ 14e539640

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  return false;
}

// AddConvexCollisionMeshUids @ 14e539650

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->ConvexCollisionMeshUids,uVar3,param_1,param_2);
  return bVar2;
}

// AddMeshUid @ 14e5398b0

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&this->MeshUids,param_1);
  return bVar1;
}

// AddSphereCollisionMeshUid @ 14e539b50

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  return false;
}

// AddSphereCollisionMeshUids @ 14e539b60

bool __thiscall
UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    (&this->SphereCollisionMeshUids,uVar3,param_1,param_2);
  return bVar2;
}

// GetBoxColliderRenderMeshUid @ 14e54fe80

void __thiscall
UInterchangeStaticMeshLodDataNode::GetBoxColliderRenderMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            (&this->BoxCollisionMeshUids,param_1,param_2);
  return;
}

// GetBoxCollisionMeshMap @ 14e54fea0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshMap
          (UInterchangeStaticMeshLodDataNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->BoxCollisionMeshUids,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBoxCollisionMeshUids @ 14e54fed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 auStack_88 [32];
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->BoxCollisionMeshUids,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_68,param_1);
  local_68.Pairs.HashSize = 0;
  if (local_68.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_68);
  return;
}

// GetBoxCollisionMeshUidsCount @ 14e54ffe0

int __thiscall
UInterchangeStaticMeshLodDataNode::GetBoxCollisionMeshUidsCount
          (UInterchangeStaticMeshLodDataNode *this)

{
  return *(int *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x8 -
         *(int *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x34;
}

// GetCapsuleColliderRenderMeshUid @ 14e550000

void __thiscall
UInterchangeStaticMeshLodDataNode::GetCapsuleColliderRenderMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            (&this->CapsuleCollisionMeshUids,param_1,param_2);
  return;
}

// GetCapsuleCollisionMeshMap @ 14e550020

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshMap
          (UInterchangeStaticMeshLodDataNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->CapsuleCollisionMeshUids,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCapsuleCollisionMeshUids @ 14e550050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 auStack_88 [32];
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->CapsuleCollisionMeshUids,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_68,param_1);
  local_68.Pairs.HashSize = 0;
  if (local_68.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_68);
  return;
}

// GetCapsuleCollisionMeshUidsCount @ 14e550160

int __thiscall
UInterchangeStaticMeshLodDataNode::GetCapsuleCollisionMeshUidsCount
          (UInterchangeStaticMeshLodDataNode *this)

{
  return *(int *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x8 -
         *(int *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x34;
}

// GetConvexColliderRenderMeshUid @ 14e550480

void __thiscall
UInterchangeStaticMeshLodDataNode::GetConvexColliderRenderMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            (&this->ConvexCollisionMeshUids,param_1,param_2);
  return;
}

// GetConvexCollisionMeshMap @ 14e5504a0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshMap
          (UInterchangeStaticMeshLodDataNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->ConvexCollisionMeshUids,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConvexCollisionMeshUids @ 14e5504d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 auStack_88 [32];
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->ConvexCollisionMeshUids,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_68,param_1);
  local_68.Pairs.HashSize = 0;
  if (local_68.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_68);
  return;
}

// GetConvexCollisionMeshUidsCount @ 14e5505e0

int __thiscall
UInterchangeStaticMeshLodDataNode::GetConvexCollisionMeshUidsCount
          (UInterchangeStaticMeshLodDataNode *this)

{
  return *(int *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x8 -
         *(int *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x34;
}

// GetForceCollisionPrimitiveGeneration @ 14e557d50

bool __thiscall
UInterchangeStaticMeshLodDataNode::GetForceCollisionPrimitiveGeneration
          (UInterchangeStaticMeshLodDataNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetForceCollisionPrimitiveGeneration");
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
                     &this->Macro_CustomForceCollisionPrimitiveGenerationKey,&local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetImportCollision @ 14e557f90

bool __thiscall
UInterchangeStaticMeshLodDataNode::GetImportCollision
          (UInterchangeStaticMeshLodDataNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetImportCollision");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportCollisionKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetImportCollisionType @ 14e558040

bool __thiscall
UInterchangeStaticMeshLodDataNode::GetImportCollisionType
          (UInterchangeStaticMeshLodDataNode *this,EInterchangeMeshCollision *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  TAttributeHandle<unsigned_char,void> local_38;
  TAttributeHandle<unsigned_char,void> local_20;
  
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_68);
  ::FString::ConcatFC(&local_78,pFVar5,L".GetImportCollisionType");
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
  pFVar1 = &this->Macro_CustomImportCollisionTypeKey;
  this_00 = (FAttributeStorage *)this->_padding_;
  bVar3 = UE::Interchange::FAttributeStorage::ContainAttribute(this_00,pFVar1);
  if (bVar3) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this_00,&local_20,pFVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_38,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_20.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar3 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_38);
    if (bVar3) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_38,param_1);
      if ((EVar7 & Operation_Success) != None) {
        if (local_38.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Key.Key.Data.AllocatorInstance.Data);
        }
        bVar3 = true;
        goto LAB_14e55817e;
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
LAB_14e55817e:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetMeshUids @ 14e558470

void __thiscall
UInterchangeStaticMeshLodDataNode::GetMeshUids
          (UInterchangeStaticMeshLodDataNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems(&this->MeshUids,param_1);
  return;
}

// GetMeshUidsCount @ 14e5585d0

int __thiscall
UInterchangeStaticMeshLodDataNode::GetMeshUidsCount(UInterchangeStaticMeshLodDataNode *this)

{
  int iVar1;
  
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount(&this->MeshUids);
  return iVar1;
}

// GetOneConvexHullPerUCX @ 14e559950

bool __thiscall
UInterchangeStaticMeshLodDataNode::GetOneConvexHullPerUCX
          (UInterchangeStaticMeshLodDataNode *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  FString local_28;
  void *local_18 [2];
  
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_18);
  ::FString::ConcatFC(&local_28,pFVar4,L".GetOneConvexHullPerUCX");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomOneConvexHullPerUCXKey,
                     &local_28,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetPrivateStaticClass @ 14e55bbd0

UClass * __cdecl UInterchangeStaticMeshLodDataNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeFactoryNodes",L"InterchangeStaticMeshLodDataNode",
               &Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton,
               StaticRegisterNativesUInterchangeStaticMeshLodDataNode,0x400,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeStaticMeshLodDataNode>,
               InternalVTableHelperCtorCaller<UInterchangeStaticMeshLodDataNode>,local_res8,
               UInterchangeFactoryBaseNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeStaticMeshLodDataNode.InnerSingleton;
}

// GetSphereColliderRenderMeshUid @ 14e55d1a0

void __thiscall
UInterchangeStaticMeshLodDataNode::GetSphereColliderRenderMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1,FString *param_2)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            (&this->SphereCollisionMeshUids,param_1,param_2);
  return;
}

// GetSphereCollisionMeshMap @ 14e55d1c0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshMap
          (UInterchangeStaticMeshLodDataNode *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->SphereCollisionMeshUids,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSphereCollisionMeshUids @ 14e55d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUids
          (UInterchangeStaticMeshLodDataNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 auStack_88 [32];
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            (&this->SphereCollisionMeshUids,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_68,param_1);
  local_68.Pairs.HashSize = 0;
  if (local_68.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_68);
  return;
}

// GetSphereCollisionMeshUidsCount @ 14e55d300

int __thiscall
UInterchangeStaticMeshLodDataNode::GetSphereCollisionMeshUidsCount
          (UInterchangeStaticMeshLodDataNode *this)

{
  return *(int *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x8 -
         *(int *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x34;
}

// GetTypeName @ 14e55d950

FString * __thiscall
UInterchangeStaticMeshLodDataNode::GetTypeName
          (UInterchangeStaticMeshLodDataNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"StaticMeshLodDataNode");
  return __return_storage_ptr__;
}

// IsEditorOnlyDataDefined @ 14e55e7c0

bool __thiscall
UInterchangeStaticMeshLodDataNode::IsEditorOnlyDataDefined(UInterchangeStaticMeshLodDataNode *this)

{
  return false;
}

// RemoveAllBoxCollisionMeshes @ 14e55f620

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveAllBoxCollisionMeshes
          (UInterchangeStaticMeshLodDataNode *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x8;
  iVar2 = *(int *)&(this->BoxCollisionMeshUids).CachedKeysAndValues.field_0x34;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->BoxCollisionMeshUids,0);
  return 0 < iVar1 - iVar2;
}

// RemoveAllCapsuleCollisionMeshes @ 14e55f650

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveAllCapsuleCollisionMeshes
          (UInterchangeStaticMeshLodDataNode *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x8;
  iVar2 = *(int *)&(this->CapsuleCollisionMeshUids).CachedKeysAndValues.field_0x34;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->CapsuleCollisionMeshUids,0);
  return 0 < iVar1 - iVar2;
}

// RemoveAllConvexCollisionMeshes @ 14e55f680

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveAllConvexCollisionMeshes
          (UInterchangeStaticMeshLodDataNode *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x8;
  iVar2 = *(int *)&(this->ConvexCollisionMeshUids).CachedKeysAndValues.field_0x34;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->ConvexCollisionMeshUids,0);
  return 0 < iVar1 - iVar2;
}

// RemoveAllMeshes @ 14e55f6d0

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveAllMeshes(UInterchangeStaticMeshLodDataNode *this)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveAllItems(&this->MeshUids);
  return bVar1;
}

// RemoveAllSphereCollisionMeshes @ 14e55f6f0

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveAllSphereCollisionMeshes
          (UInterchangeStaticMeshLodDataNode *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x8;
  iVar2 = *(int *)&(this->SphereCollisionMeshUids).CachedKeysAndValues.field_0x34;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            (&this->SphereCollisionMeshUids,0);
  return 0 < iVar1 - iVar2;
}

// RemoveBoxCollisionMeshUid @ 14e55f7c0

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveBoxCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->BoxCollisionMeshUids,param_1);
  return bVar1;
}

// RemoveCapsuleCollisionMeshUid @ 14e55f7e0

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveCapsuleCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->CapsuleCollisionMeshUids,param_1);
  return bVar1;
}

// RemoveConvexCollisionMeshUid @ 14e55f800

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveConvexCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->ConvexCollisionMeshUids,param_1);
  return bVar1;
}

// RemoveMeshUid @ 14e55f8e0

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem(&this->MeshUids,param_1);
  return bVar1;
}

// RemoveSphereCollisionMeshUid @ 14e55f980

bool __thiscall
UInterchangeStaticMeshLodDataNode::RemoveSphereCollisionMeshUid
          (UInterchangeStaticMeshLodDataNode *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    (&this->SphereCollisionMeshUids,param_1);
  return bVar1;
}

// SetForceCollisionPrimitiveGeneration @ 14e57e950

bool __thiscall
UInterchangeStaticMeshLodDataNode::SetForceCollisionPrimitiveGeneration
          (UInterchangeStaticMeshLodDataNode *this,bool param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  bool local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetForceCollisionPrimitiveGeneration");
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
                     &this->Macro_CustomForceCollisionPrimitiveGenerationKey,local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomForceCollisionPrimitiveGenerationKey).Key);
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

// SetImportCollision @ 14e57eaa0

bool __thiscall
UInterchangeStaticMeshLodDataNode::SetImportCollision
          (UInterchangeStaticMeshLodDataNode *this,bool param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  bool local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportCollision");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportCollisionKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportCollisionKey).Key);
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

// SetImportCollisionType @ 14e57ebf0

bool __thiscall
UInterchangeStaticMeshLodDataNode::SetImportCollisionType
          (UInterchangeStaticMeshLodDataNode *this,EInterchangeMeshCollision param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  EInterchangeMeshCollision local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetImportCollisionType");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomImportCollisionTypeKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomImportCollisionTypeKey).Key);
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

// SetOneConvexHullPerUCX @ 14e57eea0

bool __thiscall
UInterchangeStaticMeshLodDataNode::SetOneConvexHullPerUCX
          (UInterchangeStaticMeshLodDataNode *this,bool param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  bool local_res10 [8];
  FString local_48;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x2b0))(this,local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L".SetOneConvexHullPerUCX");
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
                    ((FAttributeStorage *)this->_padding_,&this->Macro_CustomOneConvexHullPerUCXKey,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_18,&(this->Macro_CustomOneConvexHullPerUCXKey).Key);
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

// StaticRegisterNativesUInterchangeStaticMeshLodDataNode @ 14e57fa90

void __cdecl
UInterchangeStaticMeshLodDataNode::StaticRegisterNativesUInterchangeStaticMeshLodDataNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2d;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddBoxCollisionMeshUid @ 14e582ab0

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddBoxCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddBoxCollisionMeshUids @ 14e582b50

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddBoxCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),uVar4,&local_28,
                     &local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddCapsuleCollisionMeshUid @ 14e582c80

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddCapsuleCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddCapsuleCollisionMeshUids @ 14e582d20

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddCapsuleCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),uVar4,&local_28,
                     &local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddConvexCollisionMeshUid @ 14e582fd0

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddConvexCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddConvexCollisionMeshUids @ 14e583070

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddConvexCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),uVar4,&local_28,
                     &local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddMeshUid @ 14e583770

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddMeshUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::AddItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddSphereCollisionMeshUid @ 14e583fc0

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddSphereCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execAddSphereCollisionMeshUids @ 14e584060

void __cdecl
UInterchangeStaticMeshLodDataNode::execAddSphereCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar2.Data);
  bVar3 = UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),uVar4,&local_28,
                     &local_18);
  *(bool *)param_3 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetBoxColliderRenderMeshUid @ 14e5877e0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetBoxColliderRenderMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
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
  pFVar2 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),&local_18,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetBoxCollisionMeshMap @ 14e5878f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  if (param_3 != &local_68) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (param_3,&local_68);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execGetBoxCollisionMeshUids @ 14e587990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_a8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = &local_88;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_78,pTVar2);
  local_78.Pairs.HashSize = 0;
  if (local_78.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_78);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execGetBoxCollisionMeshUidsCount @ 14e587ab0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetBoxCollisionMeshUidsCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[0xc].field_0x8 - *(int *)&param_1[0xd].field_0xc;
  return;
}

// execGetCapsuleColliderRenderMeshUid @ 14e587ae0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetCapsuleColliderRenderMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
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
  pFVar2 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),&local_18,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCapsuleCollisionMeshMap @ 14e587bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  if (param_3 != &local_68) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (param_3,&local_68);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execGetCapsuleCollisionMeshUids @ 14e587c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_a8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = &local_88;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_78,pTVar2);
  local_78.Pairs.HashSize = 0;
  if (local_78.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_78);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execGetCapsuleCollisionMeshUidsCount @ 14e587db0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetCapsuleCollisionMeshUidsCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[0xf].field_0x8 - *(int *)&param_1[0x10].field_0xc;
  return;
}

// execGetConvexColliderRenderMeshUid @ 14e5884e0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetConvexColliderRenderMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
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
  pFVar2 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),&local_18,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConvexCollisionMeshMap @ 14e5885f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  if (param_3 != &local_68) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (param_3,&local_68);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execGetConvexCollisionMeshUids @ 14e588690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_a8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = &local_88;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_78,pTVar2);
  local_78.Pairs.HashSize = 0;
  if (local_78.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_78);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execGetConvexCollisionMeshUidsCount @ 14e5887b0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetConvexCollisionMeshUidsCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[0x15].field_0x8 - *(int *)&param_1[0x16].field_0xc;
  return;
}

// execGetForceCollisionPrimitiveGeneration @ 14e598960

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetForceCollisionPrimitiveGeneration
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetForceCollisionPrimitiveGeneration");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x10
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetImportCollision @ 14e598bf0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetImportCollision
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetImportCollision");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x20
                     ,&local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetImportCollisionType @ 14e598d20

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetImportCollisionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  FAttributeStorage *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  EAttributeStorageResult EVar7;
  undefined1 uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  TAttributeHandle<unsigned_char,void> local_48;
  TAttributeHandle<unsigned_char,void> local_30;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_78);
  ::FString::ConcatFC(&local_88,pFVar5,L".GetImportCollisionType");
  if (local_78[0] != (void *)0x0) {
    FMemory::Free(local_78[0]);
  }
  if (*(longlong *)(param_1 + 1) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &param_1[0x19].field_0x8;
  this = *(FAttributeStorage **)(param_1 + 1);
  bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute(this,(FAttributeKey *)puVar1);
  if (bVar4) {
    pTVar6 = UE::Interchange::FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                       (this,&local_30,(FAttributeKey *)puVar1);
    UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::
    TAttributeHandle<unsigned_char,void>(&local_48,&pTVar6->Key,pTVar6->AttributeStorage);
    if (local_30.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Key.Key.Data.AllocatorInstance.Data);
    }
    bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid
                      (&local_48);
    if (bVar4) {
      EVar7 = UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
                        (&local_48,puVar9);
      if ((EVar7 & Operation_Success) != None) {
        if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
        }
        uVar8 = 1;
        goto LAB_14e598ed2;
      }
      ::FString::FString(&local_68,(FString *)puVar1);
      pFVar5 = ::FString::FString(&local_58,&local_88);
      UE::Interchange::LogAttributeStorageErrors(EVar7,pFVar5,(FAttributeKey *)&local_68);
    }
    if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
  }
LAB_14e598ed2:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar8;
  return;
}

// execGetMeshUids @ 14e599420

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetMeshUids(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar2 = &local_18;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TArrayAttributeHelper<FString>::GetItems
            ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,pTVar2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetMeshUidsCount @ 14e599520

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetMeshUidsCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = UE::Interchange::TArrayAttributeHelper<FString>::GetCount
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8);
  *(int *)param_3 = iVar1;
  return;
}

// execGetOneConvexHullPerUCX @ 14e599af0

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetOneConvexHullPerUCX
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
  ::FString::ConcatFC(&local_38,pFVar4,L".GetOneConvexHullPerUCX");
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
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x18),
                     &local_38,pbVar5);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar3;
  return;
}

// execGetSphereColliderRenderMeshUid @ 14e59b440

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetSphereColliderRenderMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
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
  pFVar2 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),&local_18,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSphereCollisionMeshMap @ 14e59b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auStack_88 [32];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_68);
  if (param_3 != &local_68) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>_>
              (param_3,&local_68);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// execGetSphereCollisionMeshUids @ 14e59b5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUids
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_a8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = &local_88;
  if ((TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_78);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>(&local_78,pTVar2);
  local_78.Pairs.HashSize = 0;
  if (local_78.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_78);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execGetSphereCollisionMeshUidsCount @ 14e59b710

void __cdecl
UInterchangeStaticMeshLodDataNode::execGetSphereCollisionMeshUidsCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)&param_1[0x12].field_0x8 - *(int *)&param_1[0x13].field_0xc;
  return;
}

// execRemoveAllBoxCollisionMeshes @ 14e59d010

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveAllBoxCollisionMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0xc].field_0x8;
  iVar2 = *(int *)&param_1[0xd].field_0xc;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),0);
  *(bool *)param_3 = 0 < iVar1 - iVar2;
  return;
}

// execRemoveAllCapsuleCollisionMeshes @ 14e59d060

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveAllCapsuleCollisionMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0xf].field_0x8;
  iVar2 = *(int *)&param_1[0x10].field_0xc;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),0);
  *(bool *)param_3 = 0 < iVar1 - iVar2;
  return;
}

// execRemoveAllConvexCollisionMeshes @ 14e59d0b0

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveAllConvexCollisionMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x15].field_0x8;
  iVar2 = *(int *)&param_1[0x16].field_0xc;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),0);
  *(bool *)param_3 = 0 < iVar1 - iVar2;
  return;
}

// execRemoveAllMeshes @ 14e59d140

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveAllMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveAllItems
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8);
  *(bool *)param_3 = bVar1;
  return;
}

// execRemoveAllSphereCollisionMeshes @ 14e59d180

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveAllSphereCollisionMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x12].field_0x8;
  iVar2 = *(int *)&param_1[0x13].field_0xc;
  UE::Interchange::TMapAttributeHelper<FString,FString>::EmptyInternal
            ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),0);
  *(bool *)param_3 = 0 < iVar1 - iVar2;
  return;
}

// execRemoveBoxCollisionMeshUid @ 14e59d4e0

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveBoxCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xc),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveCapsuleCollisionMeshUid @ 14e59d5a0

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveCapsuleCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0xf),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveConvexCollisionMeshUid @ 14e59d660

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveConvexCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x15),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveMeshUid @ 14e59dae0

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveMeshUid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TArrayAttributeHelper<FString>::RemoveItem
                    ((TArrayAttributeHelper<FString> *)&param_1[0xb].field_0x8,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveSphereCollisionMeshUid @ 14e59ddf0

void __cdecl
UInterchangeStaticMeshLodDataNode::execRemoveSphereCollisionMeshUid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
                    ((TMapAttributeHelper<FString,FString> *)(param_1 + 0x12),&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetForceCollisionPrimitiveGeneration @ 14e5b4380

void __cdecl
UInterchangeStaticMeshLodDataNode::execSetForceCollisionPrimitiveGeneration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool local_res8 [8];
  int local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetForceCollisionPrimitiveGeneration");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x10
                     ,local_res8,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0x18].field_0x10);
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

// execSetImportCollision @ 14e5b4550

void __cdecl
UInterchangeStaticMeshLodDataNode::execSetImportCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool local_res8 [8];
  int local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportCollision");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x18].field_0x20
                     ,local_res8,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0x18].field_0x20);
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

// execSetImportCollisionType @ 14e5b4720

void __cdecl
UInterchangeStaticMeshLodDataNode::execSetImportCollisionType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  uchar local_res8 [8];
  uchar local_res10 [8];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  local_res8[0] = '\0';
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
  ::FString::ConcatFC(&local_48,pFVar4,L".SetImportCollisionType");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<unsigned_char,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)&param_1[0x19].field_0x8,
                     local_res10,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)&param_1[0x19].field_0x8);
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

// execSetOneConvexHullPerUCX @ 14e5b49f0

void __cdecl
UInterchangeStaticMeshLodDataNode::execSetOneConvexHullPerUCX
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FString *pFVar4;
  EAttributeStorageResult EVar5;
  undefined1 uVar6;
  bool local_res8 [8];
  int local_res10 [2];
  FString local_58;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
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
  local_res8[0] = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_38);
  ::FString::ConcatFC(&local_48,pFVar4,L".SetOneConvexHullPerUCX");
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
  EVar5 = UE::Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                    (*(FAttributeStorage **)(param_1 + 1),(FAttributeKey *)(param_1 + 0x18),
                     local_res8,None);
  if ((EVar5 & Operation_Success) == None) {
    ::FString::FString(&local_28,(FString *)(param_1 + 0x18));
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

