// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962e9a0

UClass * __cdecl UCombinedTransformGizmoBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoBuilder",
               &Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmoBuilder,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmoBuilder>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton;
}

// UCombinedTransformGizmoBuilder @ 149639f70

UCombinedTransformGizmoBuilder * __thiscall
UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder
          (UCombinedTransformGizmoBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoBuilder__6B_;
  (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxisPositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisPositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayMax = 0;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  return this;
}

// UCombinedTransformGizmoBuilder @ 149639fe0

UCombinedTransformGizmoBuilder * __thiscall
UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder
          (UCombinedTransformGizmoBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoBuilder__6B_;
  (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AxisPositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisPositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayNum = 0;
  (this->PlanePositionBuilderIdentifier).Data.ArrayMax = 0;
  (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayNum = 0;
  (this->AxisAngleBuilderIdentifier).Data.ArrayMax = 0;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  return this;
}

// ~UCombinedTransformGizmoBuilder @ 14963e5a0

void __thiscall
UCombinedTransformGizmoBuilder::~UCombinedTransformGizmoBuilder
          (UCombinedTransformGizmoBuilder *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UCombinedTransformGizmoBuilder__6B_;
  if (*(longlong *)&this->UpdateCoordSystemFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
    plVar3 = (longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    plVar3 = (longlong *)&(this->UpdateHoverFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->AxisAngleBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlanePositionBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AxisPositionBuilderIdentifier).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UInteractiveGizmoBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildGizmo @ 14964b9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UCombinedTransformGizmoBuilder::BuildGizmo
          (UCombinedTransformGizmoBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveGizmoManager *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInteractiveGizmo *pUVar6;
  UContextObjectStore *this_00;
  UGizmoViewContext *this_01;
  FString *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  FCombinedTransformGizmoActorFactory *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 auStack_1b8 [32];
  int local_198;
  int local_194;
  TReferenceControllerBase<1> *local_190;
  FCombinedTransformGizmoActorFactory *local_188;
  TReferenceControllerBase<1> *local_180;
  longlong local_178 [2];
  undefined1 local_168 [24];
  undefined8 local_150;
  longlong local_148 [2];
  undefined1 local_138 [24];
  undefined8 local_120;
  TReferenceControllerBase<1> *local_110;
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar1 = param_1->GizmoManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UCombinedTransformGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar5);
  local_c8._8_8_ = pUVar1;
  pUVar6 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar10 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  (**(code **)(pUVar6->_padding_ + 0x2e8))(pUVar6,param_1->World);
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_1->ToolManager);
  this_01 = UContextObjectStore::FindContext<UGizmoViewContext>(this_00);
  if (this_01 != (UGizmoViewContext *)0x0) {
    bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
    if (bVar4) goto LAB_14964bad9;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("GizmoViewContext && GizmoViewContext->IsValidLowLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\CombinedTransformGizmo.cpp"
                     ,0x2ff,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UInteractiveGizmo *)(*pcVar3)();
    return pUVar6;
  }
LAB_14964bad9:
  pFVar12 = (this->GizmoActorBuilder).Object;
  local_190 = *(TReferenceControllerBase<1> **)(pUVar6->_padding_ + 0x2f0);
  if (pFVar12 == (FCombinedTransformGizmoActorFactory *)0x0) {
    local_180 = ::operator_new(0x28);
    if (local_180 == (TReferenceControllerBase<1> *)0x0) {
      local_180 = (TReferenceControllerBase<1> *)0x0;
      pFVar12 = (FCombinedTransformGizmoActorFactory *)&DAT_00000010;
    }
    else {
      local_180[2]._padding_ = (longlong)this_01;
      local_180->SharedReferenceCount = (atomic<int>)0x1;
      pFVar12 = (FCombinedTransformGizmoActorFactory *)(local_180 + 1);
      local_180->WeakReferenceCount = (atomic<int>)0x1;
      local_180->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCombinedTransformGizmoActorFactory___00_SharedPointerInternals__6B_
      ;
      local_180[1]._padding_ = (longlong)&___7FCombinedTransformGizmoActorFactory__6B_;
      local_180[1].SharedReferenceCount = (atomic<int>)0x1fffe;
      if (pFVar12 == (FCombinedTransformGizmoActorFactory *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar6 = (UInteractiveGizmo *)(*pcVar3)();
          return pUVar6;
        }
      }
      LOCK();
      local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = false;
    local_198 = 2;
    local_194 = 4;
    pTVar13 = local_100;
    pTVar14 = local_180;
    pTVar15 = local_180;
  }
  else {
    local_180 = (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
    if (local_180 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198 = 0;
    bVar4 = true;
    local_194 = 0;
    pTVar13 = local_180;
    pTVar14 = local_110;
    pTVar15 = local_190;
  }
  if (local_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188 = pFVar12;
  (*(code *)local_190)(pUVar6,&local_188);
  if (local_194 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (local_198 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  pcVar3 = *(code **)(pUVar6->_padding_ + 0x2f8);
  pFVar7 = ::FString::FString(&local_f8,&this->AxisAngleBuilderIdentifier);
  pFVar8 = ::FString::FString(&local_e8,&this->PlanePositionBuilderIdentifier);
  pFVar9 = ::FString::FString(&local_d8,&this->AxisPositionBuilderIdentifier);
  (*pcVar3)(pUVar6,pFVar9,pFVar8,pFVar7);
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_150 = 0;
    pcVar3 = *(code **)(pUVar6->_padding_ + 0x300);
    puVar2 = *(undefined8 **)&(this->UpdateHoverFunction).field_0x28;
    puVar11 = (undefined8 *)&(this->UpdateHoverFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar11 = puVar2;
    }
    local_178[0] = *(longlong *)&this->UpdateHoverFunction;
    (**(code **)*puVar11)(puVar11,local_168);
    (*pcVar3)(pUVar6,local_178);
  }
  local_148[0] = *(longlong *)&this->UpdateCoordSystemFunction;
  if (local_148[0] != 0) {
    local_120 = 0;
    pcVar3 = *(code **)(pUVar6->_padding_ + 0x308);
    puVar2 = *(undefined8 **)&(this->UpdateCoordSystemFunction).field_0x28;
    puVar11 = (undefined8 *)&(this->UpdateCoordSystemFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar11 = puVar2;
    }
    (**(code **)*puVar11)(puVar11,local_138);
    (*pcVar3)(pUVar6,local_148);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 149655d10

UClass * __cdecl UCombinedTransformGizmoBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"CombinedTransformGizmoBuilder",
               &Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUCombinedTransformGizmoBuilder,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedTransformGizmoBuilder>,
               InternalVTableHelperCtorCaller<UCombinedTransformGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.InnerSingleton;
}

// StaticRegisterNativesUCombinedTransformGizmoBuilder @ 149664a20

void __cdecl
UCombinedTransformGizmoBuilder::StaticRegisterNativesUCombinedTransformGizmoBuilder(void)

{
  return;
}

