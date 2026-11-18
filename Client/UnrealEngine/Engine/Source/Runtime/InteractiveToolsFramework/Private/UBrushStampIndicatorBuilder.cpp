// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962d3f0

UClass * __cdecl UBrushStampIndicatorBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushStampIndicatorBuilder",
               &Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton,
               StaticRegisterNativesUBrushStampIndicatorBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushStampIndicatorBuilder>,
               InternalVTableHelperCtorCaller<UBrushStampIndicatorBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton;
}

// UBrushStampIndicatorBuilder @ 149639770

UBrushStampIndicatorBuilder * __thiscall
UBrushStampIndicatorBuilder::UBrushStampIndicatorBuilder
          (UBrushStampIndicatorBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrushStampIndicatorBuilder__6B_;
  return this;
}

// UBrushStampIndicatorBuilder @ 1496397a0

UBrushStampIndicatorBuilder * __thiscall
UBrushStampIndicatorBuilder::UBrushStampIndicatorBuilder
          (UBrushStampIndicatorBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrushStampIndicatorBuilder__6B_;
  return this;
}

// ~UBrushStampIndicatorBuilder @ 14963e120

void __thiscall
UBrushStampIndicatorBuilder::~UBrushStampIndicatorBuilder(UBrushStampIndicatorBuilder *this)

{
  *(undefined ***)this = &___7UInteractiveGizmoBuilder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildGizmo @ 14964b940

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
UBrushStampIndicatorBuilder::BuildGizmo
          (UBrushStampIndicatorBuilder *this,FToolBuilderState *param_1)

{
  UInteractiveGizmoManager *pUVar1;
  UClass *pUVar2;
  UInteractiveGizmo *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = param_1->GizmoManager;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UBrushStampIndicator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UInteractiveGizmo *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 149655ad0

UClass * __cdecl UBrushStampIndicatorBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"BrushStampIndicatorBuilder",
               &Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton,
               StaticRegisterNativesUBrushStampIndicatorBuilder,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushStampIndicatorBuilder>,
               InternalVTableHelperCtorCaller<UBrushStampIndicatorBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushStampIndicatorBuilder.InnerSingleton;
}

// StaticRegisterNativesUBrushStampIndicatorBuilder @ 1496649f0

void __cdecl UBrushStampIndicatorBuilder::StaticRegisterNativesUBrushStampIndicatorBuilder(void)

{
  return;
}

