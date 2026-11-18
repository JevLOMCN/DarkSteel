// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 22

// StaticClass @ 14d7644d0

UClass * __cdecl UOpenColorIODisplayExtensionWrapper::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIODisplayExtensionWrapper",
               &Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton,
               StaticRegisterNativesUOpenColorIODisplayExtensionWrapper,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenColorIODisplayExtensionWrapper>,
               InternalVTableHelperCtorCaller<UOpenColorIODisplayExtensionWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14d7657b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<bool> __cdecl
`UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(ISceneViewExtension *param_1,FSceneViewExtensionContext *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  UEngine *pUVar4;
  bool bVar5;
  TOptional<bool> TVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong in_R8;
  
  if ((param_2 == (FSceneViewExtensionContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneViewExtension",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIODisplayExtensionWrapper.cpp"
                         ,0x61,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TOptional<bool>)(*pcVar2)();
    return TVar6;
  }
  pUVar4 = GEngine;
  lVar3 = param_2[3]._padding_;
  TVar6 = SUB82(param_1,0);
  if (*(longlong *)(in_R8 + 8) == 0) {
    param_1->field_0x1 = 0;
    return TVar6;
  }
  if (GEngine != (UEngine *)0x0) {
    pUVar7 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) && (pUVar4[1]._padding_ != 0)) &&
       (lVar8 = (*(code *)**(undefined8 **)pUVar4[1]._padding_)(), lVar8 == *(longlong *)(in_R8 + 8)
       )) goto LAB_14d765865;
  }
  if (GIsHighResScreenshot == false) {
    param_1->field_0x1 = 0;
    return TVar6;
  }
LAB_14d765865:
  *(char *)param_1 = (char)lVar3;
  param_1->field_0x1 = 1;
  return TVar6;
}

// UOpenColorIODisplayExtensionWrapper @ 14d7695a0

UOpenColorIODisplayExtensionWrapper * __thiscall
UOpenColorIODisplayExtensionWrapper::UOpenColorIODisplayExtensionWrapper
          (UOpenColorIODisplayExtensionWrapper *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenColorIODisplayExtensionWrapper__6B_;
  (this->DisplayExtension).Object = (FOpenColorIODisplayExtension *)0x0;
  (this->DisplayExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UOpenColorIODisplayExtensionWrapper @ 14d7695e0

UOpenColorIODisplayExtensionWrapper * __thiscall
UOpenColorIODisplayExtensionWrapper::UOpenColorIODisplayExtensionWrapper
          (UOpenColorIODisplayExtensionWrapper *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenColorIODisplayExtensionWrapper__6B_;
  (this->DisplayExtension).Object = (FOpenColorIODisplayExtension *)0x0;
  (this->DisplayExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UOpenColorIODisplayExtensionWrapper @ 14d769ee0

void __thiscall
UOpenColorIODisplayExtensionWrapper::~UOpenColorIODisplayExtensionWrapper
          (UOpenColorIODisplayExtensionWrapper *this)

{
  this->_padding_ = (longlong)&___7UOpenColorIODisplayExtensionWrapper__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DisplayExtension).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateDisplayExtensionIfNotExists @ 14d76eb00

void __thiscall
UOpenColorIODisplayExtensionWrapper::CreateDisplayExtensionIfNotExists
          (UOpenColorIODisplayExtensionWrapper *this)

{
  TSharedPtr<FOpenColorIODisplayExtension,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FOpenColorIODisplayExtension *this_00;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FOpenColorIODisplayExtension> local_res10;
  FOpenColorIODisplayExtension *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FOpenColorIODisplayExtension,1> local_28;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  pTVar1 = &this->DisplayExtension;
  bVar3 = false;
  if ((this->DisplayExtension).Object == (FOpenColorIODisplayExtension *)0x0) {
    this_00 = ::operator_new(0x110);
    if (this_00 == (FOpenColorIODisplayExtension *)0x0) {
      local_res10.Object = (FOpenColorIODisplayExtension *)0x0;
    }
    else {
      local_res10.Object =
           FOpenColorIODisplayExtension::FOpenColorIODisplayExtension
                     (this_00,local_res8,(FViewportClient *)0x0);
      if ((((local_res10.Object != (FOpenColorIODisplayExtension *)0x0) &&
           ((local_res10.Object)->_padding_ != 0)) && ((local_res10.Object)->_padding_ != 0)) &&
         (0 < *(int *)((local_res10.Object)->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    TSharedRef<FOpenColorIODisplayExtension,1>::
    TSharedRef<FOpenColorIODisplayExtension,1><FOpenColorIODisplayExtension>(&local_28,&local_res10)
    ;
    local_18.Object = (ISceneViewExtension *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    local_38 = local_28.Object;
    local_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_38) {
      pTVar1->Object = local_28.Object;
      local_38 = (FOpenColorIODisplayExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DisplayExtension).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    bVar3 = pTVar1->Object == (FOpenColorIODisplayExtension *)0x0;
  }
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DisplayExtension.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIODisplayExtensionWrapper.cpp"
                       ,0x15,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// CreateInGameOpenColorIODisplayExtension @ 14d76ec70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d76ed0a) */
/* WARNING: Removing unreachable block (ram,0x00014d76ed1b) */
/* WARNING: Removing unreachable block (ram,0x00014d76ed1f) */

UOpenColorIODisplayExtensionWrapper * __cdecl
UOpenColorIODisplayExtensionWrapper::CreateInGameOpenColorIODisplayExtension
          (FOpenColorIODisplayConfiguration *param_1)

{
  FOpenColorIODisplayConfiguration *pFVar1;
  UOpenColorIODisplayExtensionWrapper *pUVar2;
  longlong *plVar3;
  undefined1 auStack_158 [32];
  FOpenColorIODisplayConfiguration local_138;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  FGuid::NewGuid((FGuid *)local_58);
  local_58._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
       ::Call;
  local_58._24_8_ = uStack_80;
  local_28 = local_68;
  uStack_24 = uStack_64;
  plStack_20 = (longlong *)0x0;
  local_38 = 0x52bd0e30;
  uStack_34 = 1;
  uStack_30 = 0x4d7657b0;
  uStack_2c = 1;
  uStack_60 = 0;
  plStack_20 = (longlong *)0x0;
  uStack_2c = 1;
  uStack_30 = 0x4d7657b0;
  uStack_34 = 1;
  local_38 = 0x52bd0e30;
  local_58._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
       ::Call;
  uStack_60 = 0;
  local_88 = 0;
  pFVar1 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_138,param_1);
  pUVar2 = CreateOpenColorIODisplayExtension(pFVar1,(FSceneViewExtensionIsActiveFunctor *)local_58);
  if ((code *)local_58._16_8_ != (code *)0x0) {
    plVar3 = (longlong *)&local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_1->ColorConfiguration);
  return pUVar2;
}

// CreateOpenColorIODisplayExtension @ 14d76ed90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOpenColorIODisplayExtensionWrapper * __cdecl
UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension
          (FOpenColorIODisplayConfiguration *param_1,FSceneViewExtensionIsActiveFunctor *param_2)

{
  TSharedPtr<FOpenColorIODisplayExtension,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UOpenColorIODisplayExtensionWrapper *pUVar6;
  FOpenColorIODisplayExtension *pFVar7;
  FOpenColorIODisplayConfiguration *pFVar8;
  longlong *plVar9;
  undefined1 auStack_1d8 [32];
  FAutoRegister local_1b8 [8];
  FOpenColorIODisplayExtension *local_1b0;
  FSharedReferencer<1> local_1a8 [2];
  TSharedRef<FOpenColorIODisplayExtension,1> local_198;
  TRawPtrProxy<FOpenColorIODisplayExtension> local_188 [2];
  TSharedRef<ISceneViewExtension,1> local_178;
  FOpenColorIODisplayConfiguration local_168;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar6 = (UOpenColorIODisplayExtensionWrapper *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pTVar1 = &pUVar6->DisplayExtension;
  if ((pUVar6->DisplayExtension).Object == (FOpenColorIODisplayExtension *)0x0) {
    pFVar7 = ::operator_new(0x110);
    if (pFVar7 == (FOpenColorIODisplayExtension *)0x0) {
      local_188[0].Object = (FOpenColorIODisplayExtension *)0x0;
    }
    else {
      local_188[0].Object =
           FOpenColorIODisplayExtension::FOpenColorIODisplayExtension
                     (pFVar7,local_1b8,(FViewportClient *)0x0);
      if ((((local_188[0].Object != (FOpenColorIODisplayExtension *)0x0) &&
           ((local_188[0].Object)->_padding_ != 0)) && ((local_188[0].Object)->_padding_ != 0)) &&
         (0 < *(int *)((local_188[0].Object)->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UOpenColorIODisplayExtensionWrapper *)(*pcVar2)();
          return pUVar6;
        }
      }
    }
    TSharedRef<FOpenColorIODisplayExtension,1>::
    TSharedRef<FOpenColorIODisplayExtension,1><FOpenColorIODisplayExtension>(&local_198,local_188);
    local_178.Object = (ISceneViewExtension *)local_198.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    local_1b0 = local_198.Object;
    local_1a8[0].ReferenceController = local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_1b0) {
      pTVar1->Object = local_198.Object;
      local_1b0 = (FOpenColorIODisplayExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pUVar6->DisplayExtension).SharedReferenceCount,local_1a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (FOpenColorIODisplayExtension *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DisplayExtension.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIODisplayExtensionWrapper.cpp"
                         ,0x15,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UOpenColorIODisplayExtensionWrapper *)(*pcVar2)();
        return pUVar6;
      }
    }
  }
  pFVar8 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_168,param_1);
  pFVar7 = pTVar1->Object;
  if (pFVar7 != (FOpenColorIODisplayExtension *)0x0) {
    (pFVar7->DisplayConfiguration).bIsEnabled = pFVar8->bIsEnabled;
    FOpenColorIOColorConversionSettings::operator=
              (&(pFVar7->DisplayConfiguration).ColorConfiguration,&pFVar8->ColorConfiguration);
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&pFVar8->ColorConfiguration);
  SetSceneExtensionIsActiveFunction(pUVar6,param_2);
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_1->ColorConfiguration);
  return pUVar6;
}

// GetOpenColorIOConfiguration @ 14d771470

FOpenColorIODisplayConfiguration * __thiscall
UOpenColorIODisplayExtensionWrapper::GetOpenColorIOConfiguration
          (UOpenColorIODisplayExtensionWrapper *this,
          FOpenColorIODisplayConfiguration *__return_storage_ptr__)

{
  FOpenColorIODisplayExtension *pFVar1;
  
  pFVar1 = (this->DisplayExtension).Object;
  if (pFVar1 == (FOpenColorIODisplayExtension *)0x0) {
    __return_storage_ptr__->bIsEnabled = false;
    (__return_storage_ptr__->ColorConfiguration).ConfigurationSource.field0_0x0.DebugPtr =
         (UOpenColorIOConfiguration *)0x0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.ColorSpaceName.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.ColorSpaceName.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.ColorSpaceName.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.FamilyName.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.FamilyName.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.FamilyName.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.Description.Data.AllocatorInstance
    .Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.Description.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).SourceColorSpace.Description.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.ColorSpaceName.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.ColorSpaceName.Data.ArrayNum
         = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.ColorSpaceName.Data.ArrayMax
         = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.FamilyName.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.FamilyName.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.FamilyName.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.Description.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.Description.Data.ArrayNum = 0
    ;
    (__return_storage_ptr__->ColorConfiguration).DestinationColorSpace.Description.Data.ArrayMax = 0
    ;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Display.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Display.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Display.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.View.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.View.Data.ArrayNum = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.View.Data.ArrayMax = 0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Description.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Description.Data.ArrayNum =
         0;
    (__return_storage_ptr__->ColorConfiguration).DestinationDisplayView.Description.Data.ArrayMax =
         0;
    (__return_storage_ptr__->ColorConfiguration).DisplayViewDirection = Forward;
    return __return_storage_ptr__;
  }
  FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration
            (__return_storage_ptr__,&pFVar1->DisplayConfiguration);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d771860

UClass * __cdecl UOpenColorIODisplayExtensionWrapper::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIODisplayExtensionWrapper",
               &Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton,
               StaticRegisterNativesUOpenColorIODisplayExtensionWrapper,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenColorIODisplayExtensionWrapper>,
               InternalVTableHelperCtorCaller<UOpenColorIODisplayExtensionWrapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIODisplayExtensionWrapper.InnerSingleton;
}

// RemoveSceneExtension @ 14d775f10

void __thiscall
UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension(UOpenColorIODisplayExtensionWrapper *this)

{
  FOpenColorIODisplayExtension *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  pFVar1 = (this->DisplayExtension).Object;
  if (pFVar1 != (FOpenColorIODisplayExtension *)0x0) {
    (pFVar1->DisplayConfiguration).bIsEnabled = false;
  }
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DisplayExtension != (TSharedPtr<FOpenColorIODisplayExtension,1> *)&local_18) {
    (this->DisplayExtension).Object = (FOpenColorIODisplayExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DisplayExtension).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetOpenColorIOConfiguration @ 14d776e20

void __thiscall
UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration
          (UOpenColorIODisplayExtensionWrapper *this,FOpenColorIODisplayConfiguration *param_1)

{
  FOpenColorIODisplayExtension *pFVar1;
  
  pFVar1 = (this->DisplayExtension).Object;
  if (pFVar1 != (FOpenColorIODisplayExtension *)0x0) {
    (pFVar1->DisplayConfiguration).bIsEnabled = param_1->bIsEnabled;
    FOpenColorIOColorConversionSettings::operator=
              (&(pFVar1->DisplayConfiguration).ColorConfiguration,&param_1->ColorConfiguration);
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&param_1->ColorConfiguration);
  return;
}

// SetSceneExtensionIsActiveFunction @ 14d776ec0

void __thiscall
UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction
          (UOpenColorIODisplayExtensionWrapper *this,FSceneViewExtensionIsActiveFunctor *param_1)

{
  int *piVar1;
  FOpenColorIODisplayExtension *pFVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  uint *puVar12;
  
  pFVar2 = (this->DisplayExtension).Object;
  if (pFVar2 != (FOpenColorIODisplayExtension *)0x0) {
    iVar10 = (int)pFVar2->_padding_;
    piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
    if (*(int *)((longlong)&pFVar2->_padding_ + 4) < 1) {
      DestructItems<FSceneViewExtensionIsActiveFunctor,int>
                ((FSceneViewExtensionIsActiveFunctor *)pFVar2->_padding_,iVar10);
      iVar10 = *piVar1;
      *(undefined4 *)&pFVar2->_padding_ = 0;
      if (iVar10 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,1,(ForAnyElementType *)&pFVar2->_padding_,0,piVar1);
      }
    }
    else {
      DestructItems<FSceneViewExtensionIsActiveFunctor,int>
                ((FSceneViewExtensionIsActiveFunctor *)pFVar2->_padding_,iVar10);
      *(undefined4 *)&pFVar2->_padding_ = 0;
    }
    if ((this->DisplayExtension).Object == (FOpenColorIODisplayExtension *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->DisplayExtension).Object;
    if (((FSceneViewExtensionIsActiveFunctor *)pFVar2->_padding_ <= param_1) &&
       (param_1 < (FSceneViewExtensionIsActiveFunctor *)pFVar2->_padding_ +
                  *(int *)((longlong)&pFVar2->_padding_ + 4))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar10 = (int)pFVar2->_padding_;
    piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
    }
    *(int *)&pFVar2->_padding_ = iVar10 + 1;
    uVar6 = (param_1->Guid).B;
    uVar7 = (param_1->Guid).C;
    uVar8 = (param_1->Guid).D;
    puVar12 = (uint *)((longlong)iVar10 * 0x40 + pFVar2->_padding_);
    *puVar12 = (param_1->Guid).A;
    puVar12[1] = uVar6;
    puVar12[2] = uVar7;
    puVar12[3] = uVar8;
    lVar3 = *(longlong *)&param_1->IsActiveFunction;
    *(longlong *)(puVar12 + 4) = lVar3;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    if (lVar3 != 0) {
      puVar4 = *(undefined8 **)&(param_1->IsActiveFunction).field_0x28;
      puVar11 = (undefined8 *)&(param_1->IsActiveFunction).field_0x10;
      if (puVar4 != (undefined8 *)0x0) {
        puVar11 = puVar4;
      }
      (**(code **)*puVar11)();
    }
  }
  return;
}

// SetSceneExtensionIsActiveFunctions @ 14d777050

void __thiscall
UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions
          (UOpenColorIODisplayExtensionWrapper *this,
          TArray<FSceneViewExtensionIsActiveFunctor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FOpenColorIODisplayExtension *pFVar4;
  FSceneViewExtensionIsActiveFunctor *pFVar5;
  longlong *plVar6;
  
  pFVar4 = (this->DisplayExtension).Object;
  if ((pFVar4 != (FOpenColorIODisplayExtension *)0x0) &&
     (plVar6 = &pFVar4->_padding_,
     (TArray<FSceneViewExtensionIsActiveFunctor,TSizedDefaultAllocator<32>_> *)plVar6 != param_1)) {
    DestructItems<FSceneViewExtensionIsActiveFunctor,int>
              ((FSceneViewExtensionIsActiveFunctor *)*plVar6,(int)pFVar4->_padding_);
    iVar2 = param_1->ArrayNum;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    pFVar5 = (FSceneViewExtensionIsActiveFunctor *)(param_1->AllocatorInstance).Data;
    iVar3 = *piVar1;
    *(int *)&pFVar4->_padding_ = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar2,iVar3,(ForAnyElementType *)plVar6,iVar2,piVar1);
    ConstructItems<FSceneViewExtensionIsActiveFunctor,FSceneViewExtensionIsActiveFunctor,int>
              ((void *)*plVar6,pFVar5,iVar2);
  }
  return;
}

// StaticRegisterNativesUOpenColorIODisplayExtensionWrapper @ 14d7784d0

void __cdecl
UOpenColorIODisplayExtensionWrapper::StaticRegisterNativesUOpenColorIODisplayExtensionWrapper(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateInGameOpenColorIODisplayExtension @ 14d779e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d77a034) */
/* WARNING: Removing unreachable block (ram,0x00014d77a048) */
/* WARNING: Removing unreachable block (ram,0x00014d77a04c) */

void __cdecl
UOpenColorIODisplayExtensionWrapper::execCreateInGameOpenColorIODisplayExtension
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FOpenColorIODisplayConfiguration *pFVar2;
  FOpenColorIODisplayConfiguration *pFVar3;
  UOpenColorIODisplayExtensionWrapper *pUVar4;
  longlong *plVar5;
  undefined1 auStack_2b8 [32];
  FOpenColorIODisplayConfiguration local_298;
  FOpenColorIODisplayConfiguration local_1e8;
  FOpenColorIODisplayConfiguration local_140;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_298.bIsEnabled = false;
  local_298.ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr =
       (TObjectPtr<UOpenColorIOConfiguration>_u_0)0x0;
  local_298.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_298.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_298.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayNum = 0;
  local_298.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayMax = 0;
  local_298.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.SourceColorSpace.Description.Data.ArrayNum = 0;
  local_298.ColorConfiguration.SourceColorSpace.Description.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_298.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum = 0;
  local_298.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax = 0;
  local_298.ColorConfiguration.DisplayViewDirection = Forward;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_1e8,&local_298)
  ;
  FGuid::NewGuid((FGuid *)local_68);
  local_68._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
       ::Call;
  local_68._24_8_ = uStack_90;
  local_38 = local_78;
  uStack_34 = uStack_74;
  plStack_30 = (longlong *)0x0;
  local_48 = 0x52bd0e30;
  uStack_44 = 1;
  uStack_40 = 0x4d7657b0;
  uStack_3c = 1;
  uStack_70 = 0;
  plStack_30 = (longlong *)0x0;
  uStack_3c = 1;
  uStack_40 = 0x4d7657b0;
  uStack_44 = 1;
  local_48 = 0x52bd0e30;
  local_68._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
       ::Call;
  uStack_70 = 0;
  local_98 = 0;
  pFVar3 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_140,pFVar2);
  pUVar4 = CreateOpenColorIODisplayExtension(pFVar3,(FSceneViewExtensionIsActiveFunctor *)local_68);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)&local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar5 = plStack_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&pFVar2->ColorConfiguration);
  *(UOpenColorIODisplayExtensionWrapper **)param_3 = pUVar4;
  if (local_298.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationDisplayView.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_298.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.
                  Data);
  }
  if (local_298.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance
                  .Data);
  }
  if (local_298.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationColorSpace.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_298.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationColorSpace.FamilyName.Data.
                  AllocatorInstance.Data);
  }
  if (local_298.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  if (local_298.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.
                  Data);
  }
  if (local_298.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.
                  Data);
  }
  if (local_298.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  return;
}

// execCreateOpenColorIODisplayExtension @ 14d77a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UOpenColorIODisplayExtensionWrapper::execCreateOpenColorIODisplayExtension
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FOpenColorIODisplayConfiguration *pFVar2;
  UOpenColorIODisplayExtensionWrapper *pUVar3;
  longlong *plVar4;
  FSceneViewExtensionIsActiveFunctor *pFVar5;
  undefined1 auStack_1e8 [32];
  FOpenColorIODisplayConfiguration local_1c8;
  FOpenColorIODisplayConfiguration local_118;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1c8.bIsEnabled = false;
  local_1c8.ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr =
       (TObjectPtr<UOpenColorIOConfiguration>_u_0)0x0;
  local_1c8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.SourceColorSpace.Description.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.SourceColorSpace.Description.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum = 0;
  local_1c8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax = 0;
  local_1c8.ColorConfiguration.DisplayViewDirection = Forward;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  FGuid::NewGuid((FGuid *)local_68);
  local_68._16_8_ = 0;
  local_30 = (longlong *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pFVar5 = (FSceneViewExtensionIsActiveFunctor *)local_68;
  if ((FSceneViewExtensionIsActiveFunctor *)param_2->MostRecentPropertyAddress !=
      (FSceneViewExtensionIsActiveFunctor *)0x0) {
    pFVar5 = (FSceneViewExtensionIsActiveFunctor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_118,&local_1c8)
  ;
  pUVar3 = CreateOpenColorIODisplayExtension(pFVar2,pFVar5);
  *(UOpenColorIODisplayExtensionWrapper **)param_3 = pUVar3;
  if (local_68._16_8_ != 0) {
    plVar4 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_1c8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationDisplayView.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_1c8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.
                  Data);
  }
  if (local_1c8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance
                  .Data);
  }
  if (local_1c8.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationColorSpace.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_1c8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.
                  AllocatorInstance.Data);
  }
  if (local_1c8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  if (local_1c8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.
                  Data);
  }
  if (local_1c8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.
                  Data);
  }
  if (local_1c8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  return;
}

// execGetOpenColorIOConfiguration @ 14d77a3c0

void __cdecl
UOpenColorIODisplayExtensionWrapper::execGetOpenColorIOConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FOpenColorIODisplayConfiguration local_b8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) == 0) {
    local_b8.ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr =
         (TObjectPtr<UOpenColorIOConfiguration>_u_0)0x0;
    local_b8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.SourceColorSpace.Description.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.SourceColorSpace.Description.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax = 0;
    local_b8.bIsEnabled = false;
    local_b8.ColorConfiguration.DisplayViewDirection = Forward;
  }
  else {
    FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration
              (&local_b8,(FOpenColorIODisplayConfiguration *)(*(longlong *)(param_1 + 1) + 0x60));
  }
  *(bool *)param_3 = local_b8.bIsEnabled;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b8.ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr !=
      (TObjectPtr<UOpenColorIOConfiguration>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8.ColorConfiguration.ConfigurationSource.field0_0x0);
  }
  ((TObjectPtr<UOpenColorIOConfiguration>_u_0 *)((longlong)param_3 + 8))->DebugPtr =
       (UOpenColorIOConfiguration *)local_b8.ColorConfiguration.ConfigurationSource.field0_0x0;
  FOpenColorIOColorSpace::operator=
            ((FOpenColorIOColorSpace *)((longlong)param_3 + 0x10),
             &local_b8.ColorConfiguration.SourceColorSpace);
  FOpenColorIOColorSpace::operator=
            ((FOpenColorIOColorSpace *)((longlong)param_3 + 0x40),
             &local_b8.ColorConfiguration.DestinationColorSpace);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x70);
  if ((FOpenColorIODisplayView *)puVar1 != &local_b8.ColorConfiguration.DestinationDisplayView) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data
    ;
    *(int *)((longlong)param_3 + 0x78) =
         local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x7c) =
         local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x80);
  if ((FString *)puVar1 != &local_b8.ColorConfiguration.DestinationDisplayView.View) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_b8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x88) =
         local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x8c) =
         local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
  }
  puVar1 = (undefined8 *)((longlong)param_3 + 0x90);
  if ((FString *)puVar1 != &local_b8.ColorConfiguration.DestinationDisplayView.Description) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.
              Data;
    *(int *)((longlong)param_3 + 0x98) =
         local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x9c) =
         local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax = 0;
    local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
  }
  *(EOpenColorIOViewTransformDirection *)((longlong)param_3 + 0xa0) =
       local_b8.ColorConfiguration.DisplayViewDirection;
  if (local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationDisplayView.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_b8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.
                  Data);
  }
  if (local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.
                  Data);
  }
  if (local_b8.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationColorSpace.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_b8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationColorSpace.FamilyName.Data.
                  AllocatorInstance.Data);
  }
  if (local_b8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  if (local_b8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.
                  Data);
  }
  if (local_b8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.
                  Data);
  }
  if (local_b8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance
                  .Data);
  }
  return;
}

// execRemoveSceneExtension @ 14d77a6b0

void __cdecl
UOpenColorIODisplayExtensionWrapper::execRemoveSceneExtension
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  undefined1 local_18 [8];
  FSharedReferencer<1> aFStack_10 [2];
  
  pUVar1 = param_1 + 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)pUVar1 != 0) {
    *(undefined1 *)(*(longlong *)pUVar1 + 0x60) = 0;
  }
  local_18 = (undefined1  [8])0x0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pUVar1 != (UObject *)local_18) {
    *(longlong *)pUVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1[1].field_0x8,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// execSetOpenColorIOConfiguration @ 14d77a720

void __cdecl
UOpenColorIODisplayExtensionWrapper::execSetOpenColorIOConfiguration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FOpenColorIODisplayConfiguration *pFVar3;
  FOpenColorIODisplayConfiguration local_168;
  FOpenColorIODisplayConfiguration local_b8;
  
  local_168.bIsEnabled = false;
  local_168.ColorConfiguration.ConfigurationSource.field0_0x0.DebugPtr =
       (TObjectPtr<UOpenColorIOConfiguration>_u_0)0x0;
  local_168.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_168.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_168.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayNum = 0;
  local_168.ColorConfiguration.SourceColorSpace.FamilyName.Data.ArrayMax = 0;
  local_168.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.SourceColorSpace.Description.Data.ArrayNum = 0;
  local_168.ColorConfiguration.SourceColorSpace.Description.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationColorSpace.FamilyName.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationColorSpace.Description.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationDisplayView.Display.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationDisplayView.View.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationDisplayView.View.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_168.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayNum = 0;
  local_168.ColorConfiguration.DestinationDisplayView.Description.Data.ArrayMax = 0;
  local_168.ColorConfiguration.DisplayViewDirection = Forward;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FOpenColorIODisplayConfiguration::FOpenColorIODisplayConfiguration(&local_b8,&local_168);
  lVar2 = *(longlong *)(param_1 + 1);
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x60) = pFVar3->bIsEnabled;
    FOpenColorIOColorConversionSettings::operator=
              ((FOpenColorIOColorConversionSettings *)(lVar2 + 0x68),&pFVar3->ColorConfiguration);
  }
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            (&pFVar3->ColorConfiguration);
  if (local_168.ColorConfiguration.DestinationDisplayView.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationDisplayView.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_168.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationDisplayView.View.Data.AllocatorInstance.
                  Data);
  }
  if (local_168.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationDisplayView.Display.Data.AllocatorInstance
                  .Data);
  }
  if (local_168.ColorConfiguration.DestinationColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationColorSpace.Description.Data.
                  AllocatorInstance.Data);
  }
  if (local_168.ColorConfiguration.DestinationColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationColorSpace.FamilyName.Data.
                  AllocatorInstance.Data);
  }
  if (local_168.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.DestinationColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  if (local_168.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.SourceColorSpace.Description.Data.AllocatorInstance.
                  Data);
  }
  if (local_168.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.SourceColorSpace.FamilyName.Data.AllocatorInstance.
                  Data);
  }
  if (local_168.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.ColorConfiguration.SourceColorSpace.ColorSpaceName.Data.
                  AllocatorInstance.Data);
  }
  return;
}

// execSetSceneExtensionIsActiveFunction @ 14d77a900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FSceneViewExtensionIsActiveFunctor *pFVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FGuid::NewGuid((FGuid *)local_58);
  local_58._16_8_ = 0;
  local_20 = (longlong *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pFVar3 = (FSceneViewExtensionIsActiveFunctor *)local_58;
  if ((FSceneViewExtensionIsActiveFunctor *)param_2->MostRecentPropertyAddress !=
      (FSceneViewExtensionIsActiveFunctor *)0x0) {
    pFVar3 = (FSceneViewExtensionIsActiveFunctor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSceneExtensionIsActiveFunction((UOpenColorIODisplayExtensionWrapper *)param_1,pFVar3);
  if (local_58._16_8_ != 0) {
    plVar2 = (longlong *)(local_58 + 0x20);
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// execSetSceneExtensionIsActiveFunctions @ 14d77a9f0

void __cdecl
UOpenColorIODisplayExtensionWrapper::execSetSceneExtensionIsActiveFunctions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  FSceneViewExtensionIsActiveFunctor *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar7 = &local_18;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar7 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(param_1 + 1);
  if ((lVar4 != 0) && (pFVar6 = (ForAnyElementType *)(lVar4 + 0x18), pFVar6 != pFVar7)) {
    DestructItems<FSceneViewExtensionIsActiveFunctor,int>
              ((FSceneViewExtensionIsActiveFunctor *)pFVar6->Data,*(int *)(lVar4 + 0x20));
    iVar2 = *(int *)&pFVar7[1].Data;
    piVar1 = (int *)(lVar4 + 0x24);
    pFVar5 = (FSceneViewExtensionIsActiveFunctor *)pFVar7->Data;
    *(int *)(lVar4 + 0x20) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar2,*piVar1,pFVar6,iVar2,piVar1);
      ConstructItems<FSceneViewExtensionIsActiveFunctor,FSceneViewExtensionIsActiveFunctor,int>
                (pFVar6->Data,pFVar5,iVar2);
    }
  }
  DestructItems<FSceneViewExtensionIsActiveFunctor,int>
            ((FSceneViewExtensionIsActiveFunctor *)local_18.Data,(int)local_10);
  if ((FSceneViewExtensionIsActiveFunctor *)local_18.Data !=
      (FSceneViewExtensionIsActiveFunctor *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

