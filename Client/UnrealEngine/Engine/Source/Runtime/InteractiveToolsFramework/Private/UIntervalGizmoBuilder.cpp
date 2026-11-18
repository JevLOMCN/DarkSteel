// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 1496708b0

UClass * __cdecl UIntervalGizmoBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoBuilder",
               &Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUIntervalGizmoBuilder,0xa0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UIntervalGizmoBuilder>,
               InternalVTableHelperCtorCaller<UIntervalGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton;
}

// UIntervalGizmoBuilder @ 1496876e0

UIntervalGizmoBuilder * __thiscall
UIntervalGizmoBuilder::UIntervalGizmoBuilder(UIntervalGizmoBuilder *this,FVTableHelper *param_1)

{
  UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7UIntervalGizmoBuilder__6B_;
  (this->GizmoActorBuilder).Object = (FIntervalGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  return this;
}

// UIntervalGizmoBuilder @ 149687730

UIntervalGizmoBuilder * __thiscall
UIntervalGizmoBuilder::UIntervalGizmoBuilder
          (UIntervalGizmoBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7UIntervalGizmoBuilder__6B_;
  (this->GizmoActorBuilder).Object = (FIntervalGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateCoordSystemFunction = 0;
  *(undefined8 *)&(this->UpdateCoordSystemFunction).field_0x28 = 0;
  return this;
}

// ~UIntervalGizmoBuilder @ 14968a620

void __thiscall UIntervalGizmoBuilder::~UIntervalGizmoBuilder(UIntervalGizmoBuilder *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UIntervalGizmoBuilder__6B_;
  if (*(longlong *)&this->UpdateCoordSystemFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateCoordSystemFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateCoordSystemFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateHoverFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this);
  return;
}

// BuildGizmo @ 1496940b0

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
UIntervalGizmoBuilder::BuildGizmo(UIntervalGizmoBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveGizmoManager *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInteractiveGizmo *pUVar6;
  UContextObjectStore *this_00;
  UGizmoViewContext *this_01;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStack_188 [32];
  int local_168;
  int local_164;
  TReferenceControllerBase<1> *local_160;
  TReferenceControllerBase<1> *local_158;
  TReferenceControllerBase<1> *local_150;
  longlong local_148 [2];
  undefined1 local_138 [24];
  undefined8 local_120;
  longlong local_118 [2];
  undefined1 local_108 [24];
  undefined8 local_f0;
  TReferenceControllerBase<1> *local_e0;
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pUVar1 = param_1->GizmoManager;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UIntervalGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar5);
  local_c8._8_8_ = pUVar1;
  pUVar6 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar8 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  (**(code **)(pUVar6->_padding_ + 0x2e8))(pUVar6,param_1->World);
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_1->ToolManager);
  this_01 = UContextObjectStore::FindContext<UGizmoViewContext>(this_00);
  if (this_01 != (UGizmoViewContext *)0x0) {
    bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
    if (bVar4) goto LAB_1496941aa;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("GizmoViewContext && GizmoViewContext->IsValidLowLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\IntervalGizmo.cpp"
                     ,0xa9,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UInteractiveGizmo *)(*pcVar3)();
    return pUVar6;
  }
LAB_1496941aa:
  pTVar11 = (TReferenceControllerBase<1> *)(this->GizmoActorBuilder).Object;
  local_160 = *(TReferenceControllerBase<1> **)(pUVar6->_padding_ + 0x2f0);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      *(UGizmoViewContext **)&pTVar7[1].SharedReferenceCount = this_01;
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11 = pTVar7 + 1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFIntervalGizmoActorFactory___00_SharedPointerInternals__6B_
      ;
      pTVar7[1]._padding_ = (longlong)&___7FIntervalGizmoActorFactory__6B_;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
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
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar7;
    }
    bVar4 = false;
    local_168 = 2;
    local_164 = 4;
    pTVar7 = pTVar10;
    pTVar12 = local_d0;
    pTVar13 = pTVar10;
  }
  else {
    pTVar10 = (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168 = 0;
    bVar4 = true;
    local_164 = 0;
    pTVar7 = local_e0;
    pTVar12 = pTVar10;
    pTVar13 = local_160;
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = pTVar11;
  local_150 = pTVar10;
  (*(code *)local_160)(pUVar6,&local_158);
  if (local_164 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (local_168 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    local_120 = 0;
    pcVar3 = *(code **)(pUVar6->_padding_ + 0x2f8);
    puVar2 = *(undefined8 **)&(this->UpdateHoverFunction).field_0x28;
    puVar9 = (undefined8 *)&(this->UpdateHoverFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar9 = puVar2;
    }
    local_148[0] = *(longlong *)&this->UpdateHoverFunction;
    (**(code **)*puVar9)(puVar9,local_138);
    (*pcVar3)(pUVar6,local_148);
  }
  local_118[0] = *(longlong *)&this->UpdateCoordSystemFunction;
  if (local_118[0] != 0) {
    local_f0 = 0;
    pcVar3 = *(code **)(pUVar6->_padding_ + 0x300);
    puVar2 = *(undefined8 **)&(this->UpdateCoordSystemFunction).field_0x28;
    puVar9 = (undefined8 *)&(this->UpdateCoordSystemFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar9 = puVar2;
    }
    (**(code **)*puVar9)(puVar9,local_108);
    (*pcVar3)(pUVar6,local_118);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 1496a6cf0

UClass * __cdecl UIntervalGizmoBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoBuilder",
               &Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUIntervalGizmoBuilder,0xa0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UIntervalGizmoBuilder>,
               InternalVTableHelperCtorCaller<UIntervalGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntervalGizmoBuilder.InnerSingleton;
}

// StaticRegisterNativesUIntervalGizmoBuilder @ 1496c2ca0

void __cdecl UIntervalGizmoBuilder::StaticRegisterNativesUIntervalGizmoBuilder(void)

{
  return;
}

