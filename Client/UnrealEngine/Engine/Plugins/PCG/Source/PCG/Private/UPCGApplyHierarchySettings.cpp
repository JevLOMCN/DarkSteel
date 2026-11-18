// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a18630

UClass * __cdecl UPCGApplyHierarchySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyHierarchySettings",
               &Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyHierarchySettings,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGApplyHierarchySettings>,
               InternalVTableHelperCtorCaller<UPCGApplyHierarchySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton;
}

// UPCGApplyHierarchySettings @ 149ad0260

UPCGApplyHierarchySettings * __thiscall
UPCGApplyHierarchySettings::UPCGApplyHierarchySettings
          (UPCGApplyHierarchySettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGApplyHierarchySettings__6B_;
  (this->PointKeyAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointKeyAttributes).ArrayNum = 0;
  (this->PointKeyAttributes).ArrayMax = 0;
  (this->ParentKeyAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentKeyAttributes).ArrayNum = 0;
  (this->ParentKeyAttributes).ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->HierarchyDepthAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->RelativeTransformAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyParentRotationAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyParentScaleAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyHierarchyAttribute);
  this->bWarnOnPointsWithInvalidParent = true;
  return this;
}

// UPCGApplyHierarchySettings @ 149ad02f0

UPCGApplyHierarchySettings * __thiscall
UPCGApplyHierarchySettings::UPCGApplyHierarchySettings(UPCGApplyHierarchySettings *this)

{
  TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FObjectInitializer *pFVar5;
  FPCGAttributePropertySelector *pFVar6;
  
  pFVar5 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar5);
  this->_padding_ = (longlong)&___7UPCGApplyHierarchySettings__6B_;
  pTVar1 = &this->PointKeyAttributes;
  pTVar2 = &this->ParentKeyAttributes;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PointKeyAttributes).ArrayNum = 0;
  (this->PointKeyAttributes).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ParentKeyAttributes).ArrayNum = 0;
  (this->ParentKeyAttributes).ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->HierarchyDepthAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->RelativeTransformAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyParentRotationAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyParentScaleAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ApplyHierarchyAttribute);
  this->bWarnOnPointsWithInvalidParent = true;
  iVar4 = (this->PointKeyAttributes).ArrayNum;
  if (iVar4 == (this->PointKeyAttributes).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar1->AllocatorInstance,&(this->PointKeyAttributes).ArrayMax);
  }
  (this->PointKeyAttributes).ArrayNum = iVar4 + 1;
  pFVar6 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                     ((FPCGAttributePropertyInputSelector *)
                      ((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x40));
  FPCGAttributePropertySelector::SetAttributeName
            (pFVar6,PCGLevelToAssetConstants::ActorIndexAttributeName,true);
  iVar4 = (this->ParentKeyAttributes).ArrayNum;
  if (iVar4 == (this->ParentKeyAttributes).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&pTVar2->AllocatorInstance,&(this->ParentKeyAttributes).ArrayMax);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->ParentKeyAttributes).ArrayNum = iVar4 + 1;
  pFVar6 = (FPCGAttributePropertySelector *)
           FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                     ((FPCGAttributePropertyInputSelector *)(pFVar3 + (longlong)iVar4 * 0x40));
  FPCGAttributePropertySelector::SetAttributeName
            (pFVar6,PCGLevelToAssetConstants::ParentIndexAttributeName,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->HierarchyDepthAttribute,
             PCGLevelToAssetConstants::HierarchyDepthAttributeName,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->RelativeTransformAttribute,
             PCGLevelToAssetConstants::RelativeTransformAttributeName,true);
  this->ApplyParentRotation = OptOutByAttribute;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ApplyParentRotationAttribute,
             PCGLevelToAssetConstants::IgnoreParentRotationAttributeName,true);
  this->ApplyParentScale = OptOutByAttribute;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ApplyParentScaleAttribute,
             PCGLevelToAssetConstants::IgnoreParentScaleAttributeName,true);
  this->ApplyHierarchy = Always;
  return this;
}

// ~UPCGApplyHierarchySettings @ 149ad2e10

void __thiscall
UPCGApplyHierarchySettings::~UPCGApplyHierarchySettings(UPCGApplyHierarchySettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGApplyHierarchySettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->ApplyHierarchyAttribute).field_0x28,
             *(int *)&(this->ApplyHierarchyAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ApplyHierarchyAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ApplyParentScaleAttribute).field_0x28,
             *(int *)&(this->ApplyParentScaleAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ApplyParentScaleAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ApplyParentRotationAttribute).field_0x28,
             *(int *)&(this->ApplyParentRotationAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ApplyParentRotationAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->RelativeTransformAttribute).field_0x28,
             *(int *)&(this->RelativeTransformAttribute).field_0x30);
  pvVar1 = *(void **)&(this->RelativeTransformAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->HierarchyDepthAttribute).field_0x28,
             *(int *)&(this->HierarchyDepthAttribute).field_0x30);
  pvVar1 = *(void **)&(this->HierarchyDepthAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)
             (this->ParentKeyAttributes).AllocatorInstance.Data,(this->ParentKeyAttributes).ArrayNum
            );
  pFVar2 = (this->ParentKeyAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)(this->PointKeyAttributes).AllocatorInstance.Data
             ,(this->PointKeyAttributes).ArrayNum);
  pFVar2 = (this->PointKeyAttributes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afbc30

TSharedPtr<IPCGElement,1> * __thiscall
UPCGApplyHierarchySettings::CreateElement
          (UPCGApplyHierarchySettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGApplyHierarchyElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGApplyHierarchyElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b17070

UClass * __cdecl UPCGApplyHierarchySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyHierarchySettings",
               &Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyHierarchySettings,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGApplyHierarchySettings>,
               InternalVTableHelperCtorCaller<UPCGApplyHierarchySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyHierarchySettings.InnerSingleton;
}

// InputPinProperties @ 149b1bbd0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyHierarchySettings::InputPinProperties
          (UPCGApplyHierarchySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1faf0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyHierarchySettings::OutputPinProperties
          (UPCGApplyHierarchySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGApplyHierarchySettings @ 149b2ce50

void __cdecl UPCGApplyHierarchySettings::StaticRegisterNativesUPCGApplyHierarchySettings(void)

{
  return;
}

