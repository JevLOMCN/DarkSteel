// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 17

// StaticClass @ 14a780070

UClass * __cdecl UCommonUISettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUISettings",
               &Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton,
               StaticRegisterNativesUCommonUISettings,0x1b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonUISettings>,
               InternalVTableHelperCtorCaller<UCommonUISettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton;
}

// UCommonUISettings @ 14a7af7f0

UCommonUISettings * __thiscall
UCommonUISettings::UCommonUISettings(UCommonUISettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->DefaultImageResourceObject).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UCommonUISettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->PlatformTraits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTraits).ArrayNum = 0;
  (this->PlatformTraits).ArrayMax = 0;
  (this->PlatformTraitContainer).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlatformTraitContainer).GameplayTags.ArrayNum = 0;
  (this->PlatformTraitContainer).GameplayTags.ArrayMax = 0;
  (this->PlatformTraitContainer).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTraitContainer).ParentTags.ArrayNum = 0;
  (this->PlatformTraitContainer).ParentTags.ArrayMax = 0;
  (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FSlateBrush::FSlateBrush(&this->DefaultThrobberBrush);
  (this->RichTextDataInstance).field0_0x0.DebugPtr = (UCommonUIRichTextData *)0x0;
  return this;
}

// UCommonUISettings @ 14a7af8e0

UCommonUISettings * __thiscall
UCommonUISettings::UCommonUISettings(UCommonUISettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bAutoLoadData = true;
  puVar1 = &(this->DefaultImageResourceObject).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &___7UCommonUISettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->PlatformTraits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTraits).ArrayNum = 0;
  (this->PlatformTraits).ArrayMax = 0;
  this->CommonButtonAcceptKeyHandling = Ignore;
  this->bDefaultDataLoaded = false;
  (this->PlatformTraitContainer).GameplayTags.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlatformTraitContainer).GameplayTags.ArrayNum = 0;
  (this->PlatformTraitContainer).GameplayTags.ArrayMax = 0;
  (this->PlatformTraitContainer).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformTraitContainer).ParentTags.ArrayNum = 0;
  (this->PlatformTraitContainer).ParentTags.ArrayMax = 0;
  (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FSlateBrush::FSlateBrush(&this->DefaultThrobberBrush);
  (this->RichTextDataInstance).field0_0x0.DebugPtr = (UCommonUIRichTextData *)0x0;
  return this;
}

// ~UCommonUISettings @ 14a7b38b0

void __thiscall UCommonUISettings::~UCommonUISettings(UCommonUISettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UCommonUISettings__6B_;
  (this->DefaultThrobberBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultThrobberBrush).ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  pFVar1 = (this->PlatformTraitContainer).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformTraitContainer).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformTraits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AutoLoadData @ 14a7c06c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonUISettings::AutoLoadData(UCommonUISettings *this)

{
  undefined1 *this_00;
  int iVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  UCommonUIRichTextData *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  
  if (this->bAutoLoadData == false) {
    return;
  }
  if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
    return;
  }
  if (this->bDefaultDataLoaded != false) {
    return;
  }
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject);
  pUVar11 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject
                         );
      goto LAB_14a7f8103;
    }
LAB_14a7f8108:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8103:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f8108;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr = (UObject *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
      goto LAB_14a7f8156;
    }
LAB_14a7f817e:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8156:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f817e;
    pUVar8 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14a7f817e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
  if (pUVar7 == (UClass *)0x0) {
    this_00 = &(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
      goto LAB_14a7f81d4;
    }
LAB_14a7f822a:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f81d4:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f822a;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if (((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar8->_padding_)) ||
       (pUVar8 = UCommonUIRichTextData::StaticClass(), pUVar8 == (UClass *)0x0)) goto LAB_14a7f822a;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14a7f822a;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
  }
  else {
    pUVar10 = pUVar11;
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar10 = (UClass *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar10 != (UClass *)0x0) {
    pUVar7 = UCommonUIRichTextData::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14a7f82b5;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a7f82b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->RichTextDataInstance).field0_0x0.DebugPtr = (UCommonUIRichTextData *)pUVar10;
  if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
    pUVar2 = (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
    if (pUVar2 != (UObject *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
    if (pUVar3 != (UMaterialInterface *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar4 = (this->RichTextDataInstance).field0_0x0.DebugPtr;
    if (pUVar4 != (UCommonUIRichTextData *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
  }
  FSlateBrush::SetResourceObject
            (&this->DefaultThrobberBrush,
             (UObject *)(this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr);
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize = 0x42800000;
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize.field_0x4 = 0x42800000;
  pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
  (this->DefaultThrobberBrush).ImageType.Value = '\x01';
  this->bDefaultDataLoaded = true;
  (this->DefaultThrobberBrush).DrawAs.Value = -(pUVar3 != (UMaterialInterface *)0x0) & 3;
  return;
}

// GetCommonButtonAcceptKeyHandling @ 14a7e1550

ECommonButtonAcceptKeyHandling __thiscall
UCommonUISettings::GetCommonButtonAcceptKeyHandling(UCommonUISettings *this)

{
  return this->CommonButtonAcceptKeyHandling;
}

// GetDefaultImageResourceObject @ 14a7e1950

UObject * __thiscall UCommonUISettings::GetDefaultImageResourceObject(UCommonUISettings *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  if (this->bDefaultDataLoaded != false) {
    return (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2728553711960850570>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                     ,0x8a,"bDefaultDataLoaded");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
}

// GetDefaultThrobberBrush @ 14a7e1ad0

FSlateBrush * __thiscall UCommonUISettings::GetDefaultThrobberBrush(UCommonUISettings *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  
  if (this->bDefaultDataLoaded != false) {
    return &this->DefaultThrobberBrush;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2728553711960850563>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                     ,0x83,"bDefaultDataLoaded");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSlateBrush *)(*pcVar1)();
    return pFVar3;
  }
  return &this->DefaultThrobberBrush;
}

// GetPlatformTraits @ 14a7e45d0

FGameplayTagContainer * __thiscall UCommonUISettings::GetPlatformTraits(UCommonUISettings *this)

{
  return &this->PlatformTraitContainer;
}

// GetPrivateStaticClass @ 14a7e68f0

UClass * __cdecl UCommonUISettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUISettings",
               &Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton,
               StaticRegisterNativesUCommonUISettings,0x1b0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<UCommonUISettings>,
               InternalVTableHelperCtorCaller<UCommonUISettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUISettings.InnerSingleton;
}

// GetRichTextData @ 14a7e73f0

UCommonUIRichTextData * __thiscall UCommonUISettings::GetRichTextData(UCommonUISettings *this)

{
  code *pcVar1;
  bool bVar2;
  UCommonUIRichTextData *pUVar3;
  
  if (this->bDefaultDataLoaded != false) {
    return (this->RichTextDataInstance).field0_0x0.DebugPtr;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2728553711960850556>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonUISettings.cpp"
                     ,0x7c,"bDefaultDataLoaded");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCommonUIRichTextData *)(*pcVar1)();
    return pUVar3;
  }
  return (this->RichTextDataInstance).field0_0x0.DebugPtr;
}

// LoadData @ 14a7f8090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonUISettings::LoadData(UCommonUISettings *this)

{
  undefined1 *this_00;
  int iVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  UCommonUIRichTextData *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  
  if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
    return;
  }
  if (this->bDefaultDataLoaded != false) {
    return;
  }
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject);
  pUVar11 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject
                         );
      goto LAB_14a7f8103;
    }
LAB_14a7f8108:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8103:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f8108;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr = (UObject *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
      goto LAB_14a7f8156;
    }
LAB_14a7f817e:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8156:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f817e;
    pUVar8 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14a7f817e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
  if (pUVar7 == (UClass *)0x0) {
    this_00 = &(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
      goto LAB_14a7f81d4;
    }
LAB_14a7f822a:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f81d4:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f822a;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if (((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar8->_padding_)) ||
       (pUVar8 = UCommonUIRichTextData::StaticClass(), pUVar8 == (UClass *)0x0)) goto LAB_14a7f822a;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14a7f822a;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
  }
  else {
    pUVar10 = pUVar11;
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar10 = (UClass *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar10 != (UClass *)0x0) {
    pUVar7 = UCommonUIRichTextData::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14a7f82b5;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a7f82b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->RichTextDataInstance).field0_0x0.DebugPtr = (UCommonUIRichTextData *)pUVar10;
  if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
    pUVar2 = (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
    if (pUVar2 != (UObject *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
    if (pUVar3 != (UMaterialInterface *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar4 = (this->RichTextDataInstance).field0_0x0.DebugPtr;
    if (pUVar4 != (UCommonUIRichTextData *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
  }
  FSlateBrush::SetResourceObject
            (&this->DefaultThrobberBrush,
             (UObject *)(this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr);
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize = 0x42800000;
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize.field_0x4 = 0x42800000;
  pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
  (this->DefaultThrobberBrush).ImageType.Value = '\x01';
  this->bDefaultDataLoaded = true;
  (this->DefaultThrobberBrush).DrawAs.Value = -(pUVar3 != (UMaterialInterface *)0x0) & 3;
  return;
}

// LoadEditorData @ 14a7f80a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCommonUISettings::LoadEditorData(UCommonUISettings *this)

{
  undefined1 *this_00;
  int iVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  UCommonUIRichTextData *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  
  if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
    return;
  }
  if (this->bDefaultDataLoaded != false) {
    return;
  }
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject);
  pUVar11 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultImageResourceObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultImageResourceObject
                         );
      goto LAB_14a7f8103;
    }
LAB_14a7f8108:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8103:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f8108;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr = (UObject *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
  if (pUVar7 == (UClass *)0x0) {
    if (*(longlong *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8 != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->DefaultThrobberMaterial).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultThrobberMaterial);
      goto LAB_14a7f8156;
    }
LAB_14a7f817e:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f8156:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f817e;
    pUVar8 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14a7f817e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr = (UMaterialInterface *)pUVar7;
  pUVar7 = (UClass *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
  if (pUVar7 == (UClass *)0x0) {
    this_00 = &(this->DefaultRichTextDataClass).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_00 != 0) {
      FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
      pUVar7 = (UClass *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DefaultRichTextDataClass);
      goto LAB_14a7f81d4;
    }
LAB_14a7f822a:
    pUVar7 = pUVar11;
  }
  else {
LAB_14a7f81d4:
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f822a;
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if (((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar8->_padding_)) ||
       (pUVar8 = UCommonUIRichTextData::StaticClass(), pUVar8 == (UClass *)0x0)) goto LAB_14a7f822a;
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14a7f822a;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
  }
  else {
    pUVar10 = pUVar11;
    if (pUVar7 == (UClass *)0x0) goto LAB_14a7f82b5;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar10 = (UClass *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar10 != (UClass *)0x0) {
    pUVar7 = UCommonUIRichTextData::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14a7f82b5;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a7f82b5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->RichTextDataInstance).field0_0x0.DebugPtr = (UCommonUIRichTextData *)pUVar10;
  if (*(int *)&this->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
    pUVar2 = (this->DefaultImageResourceObjectInstance).field0_0x0.DebugPtr;
    if (pUVar2 != (UObject *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
    if (pUVar3 != (UMaterialInterface *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
    pUVar4 = (this->RichTextDataInstance).field0_0x0.DebugPtr;
    if (pUVar4 != (UCommonUIRichTextData *)0x0) {
      pFVar9 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar9,RootSet);
    }
  }
  FSlateBrush::SetResourceObject
            (&this->DefaultThrobberBrush,
             (UObject *)(this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr);
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize = 0x42800000;
  *(undefined4 *)&(this->DefaultThrobberBrush).ImageSize.field_0x4 = 0x42800000;
  pUVar3 = (this->DefaultThrobberMaterialInstance).field0_0x0.DebugPtr;
  (this->DefaultThrobberBrush).ImageType.Value = '\x01';
  this->bDefaultDataLoaded = true;
  (this->DefaultThrobberBrush).DrawAs.Value = -(pUVar3 != (UMaterialInterface *)0x0) & 3;
  return;
}

// PostInitProperties @ 14a802280

void __thiscall UCommonUISettings::PostInitProperties(UCommonUISettings *this)

{
  UObject::PostInitProperties((UObject *)this);
  RebuildTraitContainer(this);
  if (this->bAutoLoadData != false) {
    LoadEditorData(this);
    return;
  }
  return;
}

// PostReloadConfig @ 14a8029b0

void __thiscall UCommonUISettings::PostReloadConfig(UCommonUISettings *this,FProperty *param_1)

{
  RebuildTraitContainer(this);
  if (this->bAutoLoadData != false) {
    LoadEditorData(this);
    return;
  }
  return;
}

// RebuildTraitContainer @ 14a805150

void __thiscall UCommonUISettings::RebuildTraitContainer(UCommonUISettings *this)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  FName local_res8;
  
  FGameplayTagContainer::Reset(&this->PlatformTraitContainer,0);
  pFVar3 = (FName *)(this->PlatformTraits).AllocatorInstance.Data;
  iVar2 = (this->PlatformTraits).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->PlatformTraits).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGameplayTag,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *pFVar3;
    FGameplayTagContainer::AddTag(&this->PlatformTraitContainer,(FGameplayTag *)&local_res8);
    pFVar3 = pFVar3 + 1;
  }
  return;
}

// StaticRegisterNativesUCommonUISettings @ 14a81e970

void __cdecl UCommonUISettings::StaticRegisterNativesUCommonUISettings(void)

{
  return;
}

