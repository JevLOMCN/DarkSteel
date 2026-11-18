// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14966e7a0

UClass * __cdecl URepositionableTransformGizmoBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmoBuilder",
               &Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton,
               StaticRegisterNativesURepositionableTransformGizmoBuilder,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmoBuilder>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmoBuilder>,local_res8,
               UCombinedTransformGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton;
}

// URepositionableTransformGizmoBuilder @ 149687f80

URepositionableTransformGizmoBuilder * __thiscall
URepositionableTransformGizmoBuilder::URepositionableTransformGizmoBuilder
          (URepositionableTransformGizmoBuilder *this,FVTableHelper *param_1)

{
  UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder
            ((UCombinedTransformGizmoBuilder *)this,param_1);
  *(undefined ***)this = &___7URepositionableTransformGizmoBuilder__6B_;
  return this;
}

// URepositionableTransformGizmoBuilder @ 149687fb0

URepositionableTransformGizmoBuilder * __thiscall
URepositionableTransformGizmoBuilder::URepositionableTransformGizmoBuilder
          (URepositionableTransformGizmoBuilder *this,FObjectInitializer *param_1)

{
  UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder
            ((UCombinedTransformGizmoBuilder *)this,param_1);
  *(undefined ***)this = &___7URepositionableTransformGizmoBuilder__6B_;
  return this;
}

// ~URepositionableTransformGizmoBuilder @ 14968a8d0

void __thiscall
URepositionableTransformGizmoBuilder::~URepositionableTransformGizmoBuilder
          (URepositionableTransformGizmoBuilder *this)

{
  *(undefined ***)this = &___7URepositionableTransformGizmoBuilder__6B_;
  UCombinedTransformGizmoBuilder::~UCombinedTransformGizmoBuilder
            ((UCombinedTransformGizmoBuilder *)this);
  return;
}

// BuildGizmo @ 149694460

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
URepositionableTransformGizmoBuilder::BuildGizmo
          (URepositionableTransformGizmoBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveGizmoManager *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UInteractiveGizmo *pUVar5;
  UContextObjectStore *this_00;
  UGizmoViewContext *this_01;
  FString *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 auStack_1b8 [32];
  int local_198;
  int local_194;
  TReferenceControllerBase<1> *local_190;
  TReferenceControllerBase<1> *local_188;
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
  pUVar4 = URepositionableTransformGizmo::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar4);
  local_c8._8_8_ = pUVar1;
  pUVar5 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar9 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  (**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5,param_1->World);
  this_00 = UInteractiveToolManager::GetContextObjectStore(param_1->ToolManager);
  this_01 = UContextObjectStore::FindContext<UGizmoViewContext>(this_00);
  if (this_01 != (UGizmoViewContext *)0x0) {
    bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
    if (bVar3) goto LAB_149694559;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GizmoViewContext && GizmoViewContext->IsValidLowLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\RepositionableTransformGizmo.cpp"
                     ,0x1f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInteractiveGizmo *)(*pcVar2)();
    return pUVar5;
  }
LAB_149694559:
  pTVar11 = *(TReferenceControllerBase<1> **)&this->field_0x58;
  local_190 = *(TReferenceControllerBase<1> **)(pUVar5->_padding_ + 0x2f0);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_180 = ::operator_new(0x28);
    if (local_180 == (TReferenceControllerBase<1> *)0x0) {
      local_180 = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      local_180[2]._padding_ = (longlong)this_01;
      local_180->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11 = local_180 + 1;
      local_180->WeakReferenceCount = (atomic<int>)0x1;
      local_180->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFCombinedTransformGizmoActorFactory___00_SharedPointerInternals__6B_
      ;
      local_180[1]._padding_ = (longlong)&___7FCombinedTransformGizmoActorFactory__6B_;
      local_180[1].SharedReferenceCount = (atomic<int>)0x1fffe;
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UInteractiveGizmo *)(*pcVar2)();
          return pUVar5;
        }
      }
      LOCK();
      local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = false;
    local_198 = 2;
    local_194 = 4;
    pTVar12 = local_100;
    pTVar13 = local_180;
    pTVar14 = local_180;
  }
  else {
    local_180 = *(TReferenceControllerBase<1> **)&this->field_0x60;
    if (local_180 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198 = 0;
    bVar3 = true;
    local_194 = 0;
    pTVar12 = local_180;
    pTVar13 = local_110;
    pTVar14 = local_190;
  }
  if (local_180 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_180->SharedReferenceCount = (atomic<int>)((int)local_180->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_188 = pTVar11;
  (*(code *)local_190)(pUVar5,&local_188);
  if (local_194 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (local_198 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x2f8);
  pFVar6 = ::FString::FString(&local_f8,(FString *)&this->field_0x48);
  pFVar7 = ::FString::FString(&local_e8,(FString *)&this->field_0x38);
  pFVar8 = ::FString::FString(&local_d8,(FString *)&this->field_0x28);
  (*pcVar2)(pUVar5,pFVar8,pFVar7,pFVar6);
  if (*(longlong *)&this->field_0x70 != 0) {
    local_150 = 0;
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x300);
    puVar10 = (undefined8 *)&this->field_0x80;
    if (*(undefined8 **)&this->field_0x98 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&this->field_0x98;
    }
    local_178[0] = *(longlong *)&this->field_0x70;
    (**(code **)*puVar10)(puVar10,local_168);
    (*pcVar2)(pUVar5,local_178);
  }
  local_148[0] = *(longlong *)&this->field_0xa0;
  if (local_148[0] != 0) {
    local_120 = 0;
    pcVar2 = *(code **)(pUVar5->_padding_ + 0x308);
    puVar10 = (undefined8 *)&this->field_0xb0;
    if (*(undefined8 **)&this->field_0xc8 != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)&this->field_0xc8;
    }
    (**(code **)*puVar10)(puVar10,local_138);
    (*pcVar2)(pUVar5,local_148);
  }
  return pUVar5;
}

// GetPrivateStaticClass @ 1496a7220

UClass * __cdecl URepositionableTransformGizmoBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"RepositionableTransformGizmoBuilder",
               &Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton,
               StaticRegisterNativesURepositionableTransformGizmoBuilder,0xd0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URepositionableTransformGizmoBuilder>,
               InternalVTableHelperCtorCaller<URepositionableTransformGizmoBuilder>,local_res8,
               UCombinedTransformGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URepositionableTransformGizmoBuilder.InnerSingleton;
}

// StaticRegisterNativesURepositionableTransformGizmoBuilder @ 1496c2d10

void __cdecl
URepositionableTransformGizmoBuilder::StaticRegisterNativesURepositionableTransformGizmoBuilder
          (void)

{
  return;
}

