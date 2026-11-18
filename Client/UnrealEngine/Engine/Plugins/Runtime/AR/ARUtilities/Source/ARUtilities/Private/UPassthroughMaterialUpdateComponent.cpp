// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 13

// StaticClass @ 14cfc6870

UClass * __cdecl UPassthroughMaterialUpdateComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"PassthroughMaterialUpdateComponent",
               &Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton,
               StaticRegisterNativesUPassthroughMaterialUpdateComponent,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPassthroughMaterialUpdateComponent>,
               InternalVTableHelperCtorCaller<UPassthroughMaterialUpdateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton;
}

// UPassthroughMaterialUpdateComponent @ 14cfc7e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPassthroughMaterialUpdateComponent * __thiscall
UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent
          (UPassthroughMaterialUpdateComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->TextureType = CameraImage;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PassthroughMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PassthroughMaterialExternalTexture).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PassthroughDebugColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->AffectedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AffectedComponents).ArrayNum = 0;
  (this->AffectedComponents).ArrayMax = 0;
  (this->PendingComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingComponents).ArrayNum = 0;
  (this->PendingComponents).ArrayMax = 0;
  return this;
}

// UPassthroughMaterialUpdateComponent @ 14cfc7f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPassthroughMaterialUpdateComponent * __thiscall
UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent
          (UPassthroughMaterialUpdateComponent *this)

{
  byte *pbVar1;
  FLinearColor FVar2;
  FObjectInitializer *pFVar3;
  ulonglong uVar4;
  int *piVar5;
  
  pFVar3 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar3);
  uVar4 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->PassthroughMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->PassthroughMaterialExternalTexture).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->TextureType = CameraImage;
  FVar2 = FLinearColor::White;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  (this->PassthroughDebugColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->AffectedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AffectedComponents).ArrayNum = 0;
  (this->AffectedComponents).ArrayMax = 0;
  (this->PendingComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingComponents).ArrayNum = 0;
  (this->PendingComponents).ArrayMax = 0;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&DefaultPassthroughMaterialRef,
                 L"/ARUtilities/Materials/M_ScreenSpacePassthroughCamera.M_ScreenSpacePassthroughCamera"
                 ,0);
      atexit(`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
             _dynamic_atexit_destructor_for__DefaultPassthroughMaterialRef__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (DefaultPassthroughMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)DefaultPassthroughMaterialRef.Object.field0_0x0);
  }
  (this->PassthroughMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)DefaultPassthroughMaterialRef.Object.field0_0x0;
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&DefaultPassthroughMaterialExternalTextureRef,
                 L"/ARUtilities/Materials/MI_ScreenSpacePassthroughCameraExternalTexture.MI_ScreenSpacePassthroughCameraExternalTexture"
                 ,0);
      atexit(`UPassthroughMaterialUpdateComponent::UPassthroughMaterialUpdateComponent'::__l2::
             _dynamic_atexit_destructor_for__DefaultPassthroughMaterialExternalTextureRef__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable
              ((UObject *)DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0);
  }
  (this->PassthroughMaterialExternalTexture).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)DefaultPassthroughMaterialExternalTextureRef.Object.field0_0x0;
  return this;
}

// ~UPassthroughMaterialUpdateComponent @ 14cfc8170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPassthroughMaterialUpdateComponent::~UPassthroughMaterialUpdateComponent
          (UPassthroughMaterialUpdateComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->PendingComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AffectedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddAffectedComponent @ 14cfc8510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UPassthroughMaterialUpdateComponent::AddAffectedComponent
          (UPassthroughMaterialUpdateComponent *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPrimitiveComponent *local_18 [2];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pTVar2 = &this->PendingComponents;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar3 + (longlong)(this->PendingComponents).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->PendingComponents).ArrayNum;
    piVar1 = &(this->PendingComponents).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingComponents).ArrayNum = iVar6 + 1;
    *(UPrimitiveComponent **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UPrimitiveComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cfc9340

UClass * __cdecl UPassthroughMaterialUpdateComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ARUtilities",L"PassthroughMaterialUpdateComponent",
               &Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton,
               StaticRegisterNativesUPassthroughMaterialUpdateComponent,0x108,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPassthroughMaterialUpdateComponent>,
               InternalVTableHelperCtorCaller<UPassthroughMaterialUpdateComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.InnerSingleton;
}

// RemoveAffectedComponent @ 14cfc9810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPassthroughMaterialUpdateComponent::RemoveAffectedComponent
          (UPassthroughMaterialUpdateComponent *this,UPrimitiveComponent *param_1)

{
  TObjectPtr<UPrimitiveComponent>_u_0 local_res10 [3];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&this->AffectedComponents,
               (TObjectPtr<UPrimitiveComponent> *)&local_res10[0].ObjectPtr,Default);
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&this->PendingComponents,(TObjectPtr<UPrimitiveComponent> *)&local_res10[0].ObjectPtr
               ,Default);
  }
  return;
}

// SetPassthroughDebugColor @ 14cfc99d0

void __thiscall
UPassthroughMaterialUpdateComponent::SetPassthroughDebugColor
          (UPassthroughMaterialUpdateComponent *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->PassthroughDebugColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->PassthroughDebugColor).field0_0x0 + 8) = uVar1;
  return;
}

// StaticRegisterNativesUPassthroughMaterialUpdateComponent @ 14cfc9a80

void __cdecl
UPassthroughMaterialUpdateComponent::StaticRegisterNativesUPassthroughMaterialUpdateComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14cfc9ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPassthroughMaterialUpdateComponent::TickComponent
          (UPassthroughMaterialUpdateComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  code *pcVar8;
  float fVar9;
  void *pvVar10;
  UARTexture *pUVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  undefined1 local_68 [8];
  UObject *local_60;
  UARTexture *local_58;
  FLinearColor_u_0 local_48 [2];
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  local_58 = UARBlueprintLibrary::GetARTexture(this->TextureType);
  if (local_58 != (UARTexture *)0x0) {
    lVar14 = (**(code **)(local_58->_padding_ + 0x340))();
    pTVar2 = &this->PendingComponents;
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    iVar5 = (this->PendingComponents).ArrayNum;
    pFVar4 = pFVar16 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->PendingComponents).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar4) break;
      local_60 = *(UObject **)pFVar16;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cfc9b98:
        if (local_60 != (UObject *)0x0) {
          lVar17 = 0xd0;
          if (lVar14 != 0x1000) {
            lVar17 = 200;
          }
          (**(code **)(*(longlong *)local_60 + 0x6d0))
                    (local_60,0,*(undefined8 *)((longlong)&this->_padding_ + lVar17));
          pTVar3 = &this->AffectedComponents;
          pFVar6 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 <
               pFVar6 + (longlong)(this->AffectedComponents).ArrayMax * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = (this->AffectedComponents).ArrayNum;
          piVar1 = &(this->AffectedComponents).ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->AffectedComponents).ArrayNum = iVar13 + 1;
          *(UObject **)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_60;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_60);
          }
        }
      }
      else if (local_60 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_60);
        goto LAB_14cfc9b98;
      }
      pFVar16 = pFVar16 + 8;
    }
    iVar5 = (this->PendingComponents).ArrayMax;
    piVar1 = &(this->PendingComponents).ArrayMax;
    (this->PendingComponents).ArrayNum = 0;
    if (iVar5 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,iVar5,&pTVar2->AllocatorInstance,0,piVar1);
      ConstructItems<TObjectPtr<UPrimitiveComponent>,TObjectPtr<UPrimitiveComponent>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UPrimitiveComponent> *)0x0,0);
    }
    pUVar11 = local_58;
    pvVar10 = ThreadLocalStoragePointer;
    fVar9 = __real_3f800000;
    pFVar16 = (this->AffectedComponents).AllocatorInstance.Data;
    iVar5 = (this->AffectedComponents).ArrayNum;
    uVar18 = (ulonglong)_tls_index;
    pFVar4 = pFVar16 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->AffectedComponents).ArrayNum != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<UPrimitiveComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_68);
      }
      if (pFVar16 == pFVar4) break;
      pUVar7 = *(UObject **)pFVar16;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UObject *)0x0) goto LAB_14cfc9d30;
      }
      else if (pUVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar7);
LAB_14cfc9d30:
        this_00 = (UMaterialInstanceDynamic *)(**(code **)(*(longlong *)pUVar7 + 0x690))(pUVar7,0);
        if (this_00 != (UMaterialInstanceDynamic *)0x0) {
          pUVar15 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
          iVar13 = (int)pUVar15->_padding_;
          if ((iVar13 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
              &pUVar15->_padding_)) {
            UARUtilitiesFunctionLibrary::UpdateCameraTextureParam(this_00,(UTexture *)pUVar11,fVar9)
            ;
            if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar18 * 8) + 0x9d4c) < ::_TSS2) &&
               (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
              ::FName::FName(&DebugColorParam,L"DebugColor");
              _Init_thread_footer(&::_TSS2);
            }
            local_48[0]._0_8_ = *(undefined8 *)&(this->PassthroughDebugColor).field0_0x0;
            local_48[0]._8_8_ =
                 *(undefined8 *)((longlong)&(this->PassthroughDebugColor).field0_0x0 + 8);
            UMaterialInstanceDynamic::SetVectorParameterValue
                      (this_00,DebugColorParam,(FLinearColor *)&local_48[0]._s_0);
          }
        }
      }
      pFVar16 = pFVar16 + 8;
    }
  }
  return;
}

// execAddAffectedComponent @ 14cfca3f0

void __cdecl
UPassthroughMaterialUpdateComponent::execAddAffectedComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10;
  UObject *local_18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UObject *)0x0) {
    puVar1 = &param_1[6].field_0x8;
    local_18[0] = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    if ((*(UObject ***)puVar1 <= local_18) &&
       (local_18 < *(UObject ***)puVar1 + *(int *)&param_1[6].field_0x14)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&param_1[6].field_0x10;
    if (iVar5 == *(int *)&param_1[6].field_0x14) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[6].field_0x14);
    }
    *(int *)&param_1[6].field_0x10 = iVar5 + 1;
    *(UObject **)(*(longlong *)puVar1 + (longlong)iVar5 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
  }
  return;
}

// execRemoveAffectedComponent @ 14cfca580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UPassthroughMaterialUpdateComponent::execRemoveAffectedComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPrimitiveComponent *pUVar2;
  UPrimitiveComponent *local_res10;
  TObjectPtr<UPrimitiveComponent>_u_0 local_res20;
  
  local_res10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UPrimitiveComponent *)0x0) {
    local_res20.DebugPtr = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              ((TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *)
               &param_1[5].field_0x20,(TObjectPtr<UPrimitiveComponent> *)&local_res20.ObjectPtr,
               Default);
    local_res20.DebugPtr = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              ((TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *)
               &param_1[6].field_0x8,(TObjectPtr<UPrimitiveComponent> *)&local_res20.ObjectPtr,
               Default);
  }
  return;
}

// execSetPassthroughDebugColor @ 14cfca660

void __cdecl
UPassthroughMaterialUpdateComponent::execSetPassthroughDebugColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[5].field_0x10 = local_18;
  *(undefined8 *)&param_1[5].field_0x18 = uStack_10;
  return;
}

